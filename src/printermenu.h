#ifndef PRINTERMENU_H
#define PRINTERMENU_H

#include <QDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QAbstractButton>


namespace Ui {
class PrinterMenu;
}

/* This window provides user with some printer specific options once they have
  decideded to print a QR code. */
class PrinterMenu : public QDialog
{
    Q_OBJECT
    
public:
    explicit PrinterMenu(QWidget *parent, QImage imageToPrint);
    ~PrinterMenu();
    
private slots:
    /*Processes the commands from the Ok or Cancel button.
    If ok is clicked the image is printed. */
    void on_buttonBox_clicked(QAbstractButton *button);

    /* Removes the text from the percent line box when
      the text is changed in the height/width line edit.
      The happens as either the user should specifiy a
      height/width OR a percentage, not both. */
    void on_heightWidthEdit_textChanged(const QString &arg1);

    /* Removes the text from the height/width line box when
      the text is changed in the percentage line edit.
      The happens as either the user should specifiy a
      height/width OR a percentage, not both. */
    void on_percentageEdit_textChanged(const QString &arg1);

    /* Prints the image passed to it with the specifications
      set by the user in the UI. Provides the user with a
      QPrintDialog to select their print methods. */
    void printImage(QImage &imageToPrint);

private:
    Ui::PrinterMenu *ui;
    QImage image;
};

#endif // PRINTERMENU_H
