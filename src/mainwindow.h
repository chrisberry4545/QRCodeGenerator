#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QFile>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDir>
#include <QHttp>
#include<QDebug>
#include<QFileDialog>
#include<QMessageBox>
#include<QTextCodec>

namespace Ui {
class MainWindow;
}

/* This is the main window where the user selects the settings for generating
  a QR code. A QR code is then generated from these settings. */
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    /* Sets up the correct URL based on user selections. This
      is then sent to the network manager to handle.*/
    void on_getQRCode_clicked();

    /* Connects to a webpage and sets the image to be loaded equal to
    the data at this location, in the encoding selected by the user on
    the ui. The loadImageToLabel method is called from this method.*/
    void slot_netwManagerFinished(QNetworkReply *reply);

    /* Sets the displayed image to the current loaded pixmap or a resized
      version of this pixmap depending on the current setting of the
      resizeImage variable (set by the user in the ui)S */
    void loadImageToLabel();

    /* Returns a resized image which is the maximum size which can
      fit completly within the window at it's current size */
    QPixmap resizeImageToWindowSize();

    /* Brings up a file dialogue allowing the user to select
      where they want a file containing the QR code to be saved. */
    void on_saveQRCode_clicked();

    /* Brings up a new PrinterMenu so the user can select
      some options and print the generated QR code */
    void on_printQRCode_clicked();

    /* Called from the top menu bar and in turn
      calls the on_saveBarcode_clicked() method. */
    void on_actionSave_triggered();

    /* Called from the top menu bar and in turn
      calls the on_printBarcode_clicked() method. */
    void on_actionPrint_triggered();

    /* Called from top menu bar and in causes the
      program to exit */
    void on_actionExit_triggered();

    /* Appears on the second tab. It contains ok, cancel and
      apply buttons. Performs the appropriate action based
      on which of these is pressed. Apply and Ok call the
      applyAdvancedSettings() and Cancel (and Ok) close
      this window */
    void on_buttonBox_2_clicked(QAbstractButton *button);

    /* Applys the advanced settings chosen by the user on
      the UI to the QR code */
    void applyAdvancedSettings();

    /* Changes the current settings of the user selections in
      the advanced tab to their current values. This keeps things
      clear for the user */
    void on_tabWidget_selected(const QString &arg1);


private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *networkManager;
    //Variables for storing user selections.
    QPixmap pixmap;
    int imageWidth;
    QString encoding;
    QString errorCorrectionLevel;
    int margin;
    bool resizeImage;

};
#endif // MAINWINDOW_H
