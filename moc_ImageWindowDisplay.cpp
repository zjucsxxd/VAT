/****************************************************************************
** Meta object code from reading C++ file 'ImageWindowDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ImageWindowDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageWindowDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageWindowDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImageWindowDisplay[] = {
    "ImageWindowDisplay\0\0dialogClosed()\0"
    "on_saveImage_clicked()\0"
};

void ImageWindowDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageWindowDisplay *_t = static_cast<ImageWindowDisplay *>(_o);
        switch (_id) {
        case 0: _t->dialogClosed(); break;
        case 1: _t->on_saveImage_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ImageWindowDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageWindowDisplay::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ImageWindowDisplay,
      qt_meta_data_ImageWindowDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageWindowDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageWindowDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageWindowDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageWindowDisplay))
        return static_cast<void*>(const_cast< ImageWindowDisplay*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ImageWindowDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ImageWindowDisplay::dialogClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
