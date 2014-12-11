/****************************************************************************
** Meta object code from reading C++ file 'printermenu.h'
**
** Created: Fri 1. Feb 08:46:42 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/printermenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printermenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrinterMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x08,
      64,   59,   12,   12, 0x08,
     104,   59,   12,   12, 0x08,
     156,  143,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrinterMenu[] = {
    "PrinterMenu\0\0button\0"
    "on_buttonBox_clicked(QAbstractButton*)\0"
    "arg1\0on_heightWidthEdit_textChanged(QString)\0"
    "on_percentageEdit_textChanged(QString)\0"
    "imageToPrint\0printImage(QImage&)\0"
};

void PrinterMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrinterMenu *_t = static_cast<PrinterMenu *>(_o);
        switch (_id) {
        case 0: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->on_heightWidthEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_percentageEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->printImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrinterMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrinterMenu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrinterMenu,
      qt_meta_data_PrinterMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrinterMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrinterMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrinterMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrinterMenu))
        return static_cast<void*>(const_cast< PrinterMenu*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrinterMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
