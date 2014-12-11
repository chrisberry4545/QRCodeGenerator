/********************************************************************************
** Form generated from reading UI file 'printermenu.ui'
**
** Created: Wed 30. Jan 20:50:30 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTERMENU_H
#define UI_PRINTERMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrinterMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *heightWidthEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *percentageEdit;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PrinterMenu)
    {
        if (PrinterMenu->objectName().isEmpty())
            PrinterMenu->setObjectName(QString::fromUtf8("PrinterMenu"));
        PrinterMenu->resize(269, 147);
        verticalLayout_2 = new QVBoxLayout(PrinterMenu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PrinterMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_2 = new QLabel(PrinterMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(110, 0));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        heightWidthEdit = new QLineEdit(PrinterMenu);
        heightWidthEdit->setObjectName(QString::fromUtf8("heightWidthEdit"));
        heightWidthEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(heightWidthEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label_4 = new QLabel(PrinterMenu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(110, 0));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        percentageEdit = new QLineEdit(PrinterMenu);
        percentageEdit->setObjectName(QString::fromUtf8("percentageEdit"));
        percentageEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(percentageEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(PrinterMenu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(PrinterMenu);

        QMetaObject::connectSlotsByName(PrinterMenu);
    } // setupUi

    void retranslateUi(QDialog *PrinterMenu)
    {
        PrinterMenu->setWindowTitle(QApplication::translate("PrinterMenu", "Printer Options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PrinterMenu", "Enter a Height/Width for your Print out\n"
" OR enter the percentage of the page you want\n"
" the image to fill.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PrinterMenu", "Height/Width (Pixels):", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PrinterMenu", "Percent (%) of Page:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrinterMenu: public Ui_PrinterMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTERMENU_H
