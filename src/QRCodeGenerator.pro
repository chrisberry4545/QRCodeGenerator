#-------------------------------------------------
#
# Project created by QtCreator 2012-12-29T14:12:04
#
#-------------------------------------------------

QT       += core gui
QT		 += network

TARGET = QRCodeGenerator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    printermenu.cpp

CONFIG += debug_and_release

HEADERS  += mainwindow.h \
    printermenu.h

FORMS    += mainwindow.ui \
    printermenu.ui
