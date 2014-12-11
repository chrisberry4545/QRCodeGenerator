#include "printermenu.h"
#include "ui_printermenu.h"

PrinterMenu::PrinterMenu(QWidget *parent, QImage imageToPrint) :
    QDialog(parent),
    ui(new Ui::PrinterMenu)
{
    ui->setupUi(this);
    image = imageToPrint;

    //Set up masks
    ui->percentageEdit->setInputMask("000");
    ui->heightWidthEdit->setInputMask("0000");
    ui->percentageEdit->setMaxLength(3);
    ui->heightWidthEdit->setMaxLength(4);

    //Value of width/height set to the current actual values.
    ui->heightWidthEdit->setText(QString::number(image.size().height()));
}

PrinterMenu::~PrinterMenu()
{
    delete ui;
}


/*Processes the commands from the Ok or Cancel button.
  */
void PrinterMenu::on_buttonBox_clicked(QAbstractButton *button)
{
    QString buttonText = button->text();
    if(buttonText.compare("OK") == 0) {
        printImage(image);
    } else {
        //Nothing special to do with cancel button as window will close anyway.
    }
    this->close();
}

/*Changes the text of the percentage line edit to an empty string.
  This is because only one of these needs to be filled in. */
void PrinterMenu::on_heightWidthEdit_textChanged(const QString &arg1)
{
    ui->percentageEdit->setText("");
}

/*Changes the text of the Height/Width line edit to an empty string.
  This is because only one of these needs to be filled in.*/
void PrinterMenu::on_percentageEdit_textChanged(const QString &arg1)
{
    ui->heightWidthEdit->setText("");
}

/* Prints the image passed to it with the specifications
  set by the user in the UI. Provides the user with a
  QPrintDialog to select their print methods. */
void PrinterMenu::printImage(QImage &imageToPrint) {
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec()) { //If printer dialog opens succesfully
        QPainter painter(&printer);
        QRect rect = painter.viewport(); //Rectangle used to determine print area.
                                         //Set as large as possible based on the paper size.
        if (ui->percentageEdit->text() != "") { //If a percentage is entered
            int percent = (ui->percentageEdit->text().toInt());
            rect.setHeight(rect.height() * percent/100); //alter the rectangle by this percent.
            rect.setWidth(rect.width() * percent/100);
        } else { //Else there is nothing in percentage lineedit so use the height/width line edit.
            rect.setHeight(ui->heightWidthEdit->text().toInt()); //Set the rectangle to take it's values from the height/width line edit.
            rect.setWidth(ui->heightWidthEdit->text().toInt());
        }
        QSize size = imageToPrint.size();
        size.scale(rect.size(), Qt::KeepAspectRatio); //Scales the size up to the rectangle.
        painter.setViewport(rect.x(), rect.y(),
                            size.width(), size.height()); //Sets up the painter (which is drawing to the printer).
        painter.setWindow(imageToPrint.rect());
        painter.drawImage(0, 0, imageToPrint);
    }
}
