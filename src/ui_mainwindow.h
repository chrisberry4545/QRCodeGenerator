/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 30. Jan 20:50:30 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *qrURLText;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *getQRCode;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *imageLayout;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QLabel *imageLabel;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *saveQRCode;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *printQRCode;
    QSpacerItem *horizontalSpacer_7;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *widthEdit;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *fitImageCheckBox;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *encodingGroupBox;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *utfButton;
    QRadioButton *jisButton;
    QRadioButton *isoButton;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *errorCorrectionBox;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *lErrorCorrection;
    QRadioButton *mErrorCorrection;
    QRadioButton *qErrorCorrection;
    QRadioButton *hErrorCorrection;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *marginBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QSpinBox *marginSpinner;
    QHBoxLayout *horizontalLayout_7;
    QDialogButtonBox *buttonBox_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(390, 400);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(380, 400));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_15 = new QVBoxLayout(tab);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        qrURLText = new QLineEdit(tab);
        qrURLText->setObjectName(QString::fromUtf8("qrURLText"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qrURLText->sizePolicy().hasHeightForWidth());
        qrURLText->setSizePolicy(sizePolicy1);
        qrURLText->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(qrURLText);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        getQRCode = new QPushButton(tab);
        getQRCode->setObjectName(QString::fromUtf8("getQRCode"));

        horizontalLayout_3->addWidget(getQRCode);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        imageLayout = new QHBoxLayout();
        imageLayout->setSpacing(6);
        imageLayout->setObjectName(QString::fromUtf8("imageLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        imageLayout->addItem(horizontalSpacer_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        imageLayout->addItem(verticalSpacer);

        imageLabel = new QLabel(tab);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));

        imageLayout->addWidget(imageLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        imageLayout->addItem(verticalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        imageLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(imageLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        saveQRCode = new QPushButton(tab);
        saveQRCode->setObjectName(QString::fromUtf8("saveQRCode"));

        horizontalLayout_2->addWidget(saveQRCode);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        printQRCode = new QPushButton(tab);
        printQRCode->setObjectName(QString::fromUtf8("printQRCode"));

        horizontalLayout_2->addWidget(printQRCode);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_15->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_14 = new QVBoxLayout(tab_2);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_10 = new QHBoxLayout(groupBox);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_10->addWidget(label_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_12);

        widthEdit = new QLineEdit(groupBox);
        widthEdit->setObjectName(QString::fromUtf8("widthEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widthEdit->sizePolicy().hasHeightForWidth());
        widthEdit->setSizePolicy(sizePolicy2);
        widthEdit->setMinimumSize(QSize(0, 0));

        horizontalLayout_10->addWidget(widthEdit);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        fitImageCheckBox = new QCheckBox(groupBox);
        fitImageCheckBox->setObjectName(QString::fromUtf8("fitImageCheckBox"));
        fitImageCheckBox->setMinimumSize(QSize(100, 0));

        horizontalLayout_10->addWidget(fitImageCheckBox);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);


        verticalLayout_6->addWidget(groupBox);


        verticalLayout_3->addLayout(verticalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        encodingGroupBox = new QGroupBox(tab_2);
        encodingGroupBox->setObjectName(QString::fromUtf8("encodingGroupBox"));
        encodingGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_12 = new QHBoxLayout(encodingGroupBox);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        utfButton = new QRadioButton(encodingGroupBox);
        utfButton->setObjectName(QString::fromUtf8("utfButton"));
        utfButton->setChecked(true);

        horizontalLayout_12->addWidget(utfButton);

        jisButton = new QRadioButton(encodingGroupBox);
        jisButton->setObjectName(QString::fromUtf8("jisButton"));

        horizontalLayout_12->addWidget(jisButton);

        isoButton = new QRadioButton(encodingGroupBox);
        isoButton->setObjectName(QString::fromUtf8("isoButton"));

        horizontalLayout_12->addWidget(isoButton);


        horizontalLayout_5->addWidget(encodingGroupBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        errorCorrectionBox = new QGroupBox(tab_2);
        errorCorrectionBox->setObjectName(QString::fromUtf8("errorCorrectionBox"));
        horizontalLayout_13 = new QHBoxLayout(errorCorrectionBox);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lErrorCorrection = new QRadioButton(errorCorrectionBox);
        lErrorCorrection->setObjectName(QString::fromUtf8("lErrorCorrection"));

        horizontalLayout_13->addWidget(lErrorCorrection);

        mErrorCorrection = new QRadioButton(errorCorrectionBox);
        mErrorCorrection->setObjectName(QString::fromUtf8("mErrorCorrection"));

        horizontalLayout_13->addWidget(mErrorCorrection);

        qErrorCorrection = new QRadioButton(errorCorrectionBox);
        qErrorCorrection->setObjectName(QString::fromUtf8("qErrorCorrection"));

        horizontalLayout_13->addWidget(qErrorCorrection);

        hErrorCorrection = new QRadioButton(errorCorrectionBox);
        hErrorCorrection->setObjectName(QString::fromUtf8("hErrorCorrection"));
        hErrorCorrection->setChecked(true);

        horizontalLayout_13->addWidget(hErrorCorrection);


        horizontalLayout_9->addWidget(errorCorrectionBox);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        marginBox = new QGroupBox(tab_2);
        marginBox->setObjectName(QString::fromUtf8("marginBox"));
        horizontalLayout_11 = new QHBoxLayout(marginBox);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_4 = new QLabel(marginBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_11->addWidget(label_4);

        marginSpinner = new QSpinBox(marginBox);
        marginSpinner->setObjectName(QString::fromUtf8("marginSpinner"));
        marginSpinner->setMaximum(999);

        horizontalLayout_11->addWidget(marginSpinner);


        verticalLayout_4->addWidget(marginBox);


        verticalLayout_3->addLayout(verticalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(10, -1, 10, -1);
        buttonBox_2 = new QDialogButtonBox(tab_2);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_7->addWidget(buttonBox_2);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_14->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_5->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 390, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QR Code Generator", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save as..", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("MainWindow", "Print..", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Encode Text:", 0, QApplication::UnicodeUTF8));
        getQRCode->setText(QApplication::translate("MainWindow", "Get QR Code", 0, QApplication::UnicodeUTF8));
        imageLabel->setText(QString());
        saveQRCode->setText(QApplication::translate("MainWindow", "Save QR Code", 0, QApplication::UnicodeUTF8));
        printQRCode->setText(QApplication::translate("MainWindow", "Print QR Code", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "General", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Image Dimensions", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Code Width/Height:", 0, QApplication::UnicodeUTF8));
        widthEdit->setText(QApplication::translate("MainWindow", "100", 0, QApplication::UnicodeUTF8));
        fitImageCheckBox->setText(QApplication::translate("MainWindow", "Fit displayed\n"
"image to window", 0, QApplication::UnicodeUTF8));
        encodingGroupBox->setTitle(QApplication::translate("MainWindow", "Encoding", 0, QApplication::UnicodeUTF8));
        utfButton->setText(QApplication::translate("MainWindow", "UTF-8", 0, QApplication::UnicodeUTF8));
        jisButton->setText(QApplication::translate("MainWindow", "Shift_JIS", 0, QApplication::UnicodeUTF8));
        isoButton->setText(QApplication::translate("MainWindow", "ISO-8859-1", 0, QApplication::UnicodeUTF8));
        errorCorrectionBox->setTitle(QApplication::translate("MainWindow", "Data Loss Recovery", 0, QApplication::UnicodeUTF8));
        lErrorCorrection->setText(QApplication::translate("MainWindow", "7%", 0, QApplication::UnicodeUTF8));
        mErrorCorrection->setText(QApplication::translate("MainWindow", "15%", 0, QApplication::UnicodeUTF8));
        qErrorCorrection->setText(QApplication::translate("MainWindow", "25%", 0, QApplication::UnicodeUTF8));
        hErrorCorrection->setText(QApplication::translate("MainWindow", "30%", 0, QApplication::UnicodeUTF8));
        marginBox->setTitle(QApplication::translate("MainWindow", "Margin", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "QR Code Margin:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Advanced", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
