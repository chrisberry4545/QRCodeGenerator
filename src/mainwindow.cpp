#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "printermenu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(slot_netwManagerFinished(QNetworkReply*)));

    //Default QR code values
    imageWidth = 100;
    encoding = "UTF-8";
    errorCorrectionLevel = "H";
    margin = 0;
    resizeImage = false;

    ui->setupUi(this);

    //Sets the tab widget to open on the General tab.
    ui->tabWidget->setCurrentIndex(0);

    //Add input masks
    ui->widthEdit->setInputMask("0000");
    ui->widthEdit->setMaxLength(4);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Sets up the correct URL for the image by appending the parts of the URL
together with the choices the user has made. The data is percent encoded
and then converted to the characater encoding the user has selected.
This is then sent to the network manager to handle*/
void MainWindow::on_getQRCode_clicked()
{
    QString qrText = ui->qrURLText->text();
    //Warns the user if a '>' or '<' symbol is entered in the QR code.
    if (qrText.contains('>') || qrText.contains('<')) {
        QMessageBox::warning(this, tr("Invalid Character"),
                             tr("'>' and '<' get converted to '&gt;' and\n'&lt;' respectively in QR codes."));
    }
    //Creates the appropriate address from the user's choices.
    QString address = "http://chart.apis.google.com/chart?cht=qr&chs=";
    address.append(QString::number(imageWidth));
    address.append("x");
    address.append(QString::number(imageWidth));
    address.append("&chl=");
    //Appends the percent encoded version of what the user has entered.
    address.append(QUrl::toPercentEncoding(qrText));
    address.append("&choe=");
    address.append(encoding);
    address.append("&chld=");
    address.append(errorCorrectionLevel);
    address.append("|");
    address.append(QString::number(margin));
    QByteArray addressData;

    //Convert the data based on the encoding selected.
    if (encoding.compare(ui->utfButton->text()) == 0) {
        addressData = (address.toUtf8().data());
    } else {
        if (encoding.compare(ui->jisButton->text())) {
            QTextCodec *codec = QTextCodec::codecForName("Shift-JIS");
            addressData = codec->fromUnicode(address);
        } else {
            if (encoding.compare(ui->isoButton->text())) {
                QTextCodec *codec = QTextCodec::codecForName("ISO-8859-1");
                addressData = codec->fromUnicode(address);
            }
        }
    }

    QUrl url;
    url.setEncodedUrl(addressData);
    QNetworkRequest request(url);
    networkManager->get(request);
}


/* Connects to the appropriate webpage and loads the data stored here
  into the QPixmap variable denoting the QR image. The loadImageToLabel method
  is then called.*/
void MainWindow::slot_netwManagerFinished(QNetworkReply *reply)
{
    //If the network reply has an error, this is reported.
    if (reply->error() != QNetworkReply::NoError) {
        qDebug() << "Error in" << reply->url() << ":" << reply->errorString();
        return;
    }

    //Reads the data from the png file located at the link.
    QByteArray pngData = reply->readAll();
    //The data is loaded into the pixmap.
    pixmap.loadFromData(pngData);
    loadImageToLabel();
}

/* Sets the imageLabel to the current stored pixmap. If the user has selected that the
  image should be resized to fit within the window, the appropriate method is called and
  the resized image is used instead. Note: Only the displayed image is changed, the
  images used for printing and saving are unaffected. */
void MainWindow::loadImageToLabel() {
    QPixmap displayImage;
    //If the user has selected that the image should be resized to fit within the window,
    //then perform this action.
    if (resizeImage) {
        displayImage = resizeImageToWindowSize();
    } else {
        displayImage = pixmap;
    }

    //The image label is then set to the resized or the normal image as requested
    //by the user.
    ui->imageLabel->setPixmap(displayImage);
}

/* Resizes an image to fit within the current window size.
 Returns a resized version of the image to fit within the window.*/
QPixmap MainWindow::resizeImageToWindowSize()
{
    //The display image is set to the size of the smallest dimension of the layout structure it
    //is contained within.
    QPixmap displayImage = pixmap;
    int smallestDimension = 0;
    if (ui->imageLabel->geometry().height() > ui->imageLayout->geometry().width()) {
        smallestDimension = ui->imageLayout->geometry().width();
    } else {
        smallestDimension = ui->imageLayout->geometry().height();
    }
    displayImage = displayImage.scaled(smallestDimension, smallestDimension, Qt::KeepAspectRatio);
    return displayImage;

}



/* Opens a File Dialog to allow the user to select where they want to save
  their QR image. If it isn't saved an error messaging explaining why is
  shown. */
void MainWindow::on_saveQRCode_clicked()
{
    //Sets filename from user's selection. Allows the user to save as a png, xpm or jpg.
    QString fileName = QFileDialog::getSaveFileName(this,
                               tr("Save QR Code"), tr("QRCode"),
                               tr("PNG (*.png);; XPM (*.xpm);; JPG (*.jpg)"));
    QFile file;
    file.setFileName(fileName);
    //Checks to see if file can be opened, if it can't, an error is reported.
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("Unable to open file"),
                        file.errorString());
    } else {
        //Saves and closes the file if the file can be opened.
        pixmap.save(file.fileName(), 0, -1);
        file.close();
    }
}

/* Opens a new PrinterMenu */
void MainWindow::on_printQRCode_clicked()
{
    PrinterMenu *printMenu = new PrinterMenu(0, pixmap.toImage());
    printMenu->show();

}

/* Calls the on_saveQRCode_clicked() method. */
void MainWindow::on_actionSave_triggered()
{
    on_saveQRCode_clicked();
}

/* Calls the on_printQRCode_clicked() method. */
void MainWindow::on_actionPrint_triggered()
{
    on_printQRCode_clicked();
}

/* Quits the application */
void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

/* Performs various actions depending on which button is clicked.
  "OK" applys the changes and changes the tab back to the General tab,
  "Apply" just applys the changes and "Cancel" reverts the changes back
  to what they were. */
void MainWindow::on_buttonBox_2_clicked(QAbstractButton *button)
{
    QString buttonText = button->text();
    if(buttonText.compare("OK") == 0) {
        //If ok is selected, the advanced settings are applied and
        //the tab is set back to the "General" tab.
        applyAdvancedSettings();
        ui->tabWidget->setCurrentIndex(0);
    } else {
        //If Cancel is selected the tab is set back to the "General Tab".
        if (buttonText.compare("Cancel") == 0){
            ui->tabWidget->setCurrentIndex(0);
        } else {
            //If apply is selected, only the advanced settings are applied
            //but the tab stays on the "Advanced" tab.
            if (buttonText.compare("Apply") == 0 ){
                applyAdvancedSettings();
            }
        }
    }
}

/* The settings chosen by the user are assigned to
  the appropriate variables and then the on_getQRCode_clicked()
  method is called to update the image */
void MainWindow::applyAdvancedSettings() {
    int newImageWidth = ui->widthEdit->text().toInt();
    //These QR codes can't be larger than 300,000 pixels
    if (newImageWidth * newImageWidth >= 300000) {
        QMessageBox::warning(this, tr("Too many pixels"),
                             tr("QR codes can't contain more than 300,000 pixels.\nReduce the image dimensions below 548."));
    } else {
        if (newImageWidth < 21) {
            QMessageBox::warning(this, tr("Dimensions too low"),
                                 tr("The minimum width for a QR code is 21.\nYou might want to increase this width further\nif you want to use more than 6 characters."));
        } else {
            imageWidth = newImageWidth;
            //Gets encoding setting from the ui by finding which of the
            //checkboxes is checked.
            if (ui->utfButton->isChecked()) {
                encoding = ui->utfButton->text();
            } else {
                if (ui->jisButton->isChecked()) {
                    encoding = ui->jisButton->text();
                } else {
                    encoding = ui->isoButton->text();
                }
            }
            //Gets the error correcting setting from the ui by finding
            //which of the checkboxes is checked.
            if (ui->lErrorCorrection->isChecked()) {
                errorCorrectionLevel = "L";
            } else {
                if (ui->mErrorCorrection->isChecked()) {
                    errorCorrectionLevel = "M";
                } else {
                    if (ui->qErrorCorrection->isChecked()) {
                        errorCorrectionLevel = "Q";
                    } else {
                        errorCorrectionLevel = "H";
                    }
                }
            }
            //Gets the margin from the ui's margin spinner.
            margin = ui->marginSpinner->text().toInt();
            on_getQRCode_clicked();
            //Sets the flag to resize the image to true if user has checked box to do so.
            if (ui->fitImageCheckBox->isChecked()) {
                resizeImage = true;
            } else {
                resizeImage = false;
            }
        }
    }
}

/* Selects all of the current settings for the advanced settings.
 Called when a tab is selected.*/
void MainWindow::on_tabWidget_selected(const QString &arg1)
{
    //Sets image width/height to the current value
    ui->widthEdit->setText(QString::number(imageWidth));
    //Sets encoding setting to current value
    if (encoding.compare(ui->utfButton->text()) == 0) {
        ui->utfButton->setChecked(true);
    } else {
        ui->utfButton->setChecked(false);
    }
    if (encoding.compare(ui->jisButton->text()) == 0) {
        ui->jisButton->setChecked(true);
    } else {
        ui->jisButton->setChecked(false);
    }
    if (encoding.compare(ui->isoButton->text()) == 0) {
        ui->isoButton->setChecked(true);
    } else {
        ui->isoButton->setChecked(false);
    }
    //Sets error correction setting to current value
    if (errorCorrectionLevel.compare("L")) {
        ui->lErrorCorrection->setChecked(true);
    } else {
        ui->lErrorCorrection->setChecked(false);
    }
    if (errorCorrectionLevel.compare("H") == 0) {
        ui->hErrorCorrection->setChecked(true);
    } else {
        ui->hErrorCorrection->setChecked(false);
    }
    if (errorCorrectionLevel.compare("M") == 0) {
        ui->mErrorCorrection->setChecked(true);
    } else {
        ui->mErrorCorrection->setChecked(false);
    }
    if (errorCorrectionLevel.compare("Q") == 0) {
        ui->qErrorCorrection->setChecked(true);
    } else {
        ui->qErrorCorrection->setChecked(false);
    }
    //Sets margin to the current value.
    ui->marginSpinner->setValue(margin);
    //Checks the resize image label box if the users last choice was to resize the image to the window size.
    if (resizeImage) {
        ui->fitImageCheckBox->setChecked(true);
    } else {
        ui->fitImageCheckBox->setChecked(false);
    }
}
