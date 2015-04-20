/****************************************************************************
** Meta object code from reading C++ file 'PixmapWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PixmapWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PixmapWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PixmapWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   39,   39,   39, 0x05,
      40,   39,   39,   39, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   39,   39,   39, 0x0a,
      86,   39,   39,   39, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PixmapWidget[] = {
    "PixmapWidget\0zoomFactorChanged(double)\0"
    "\0pixmapChanged(QPixmap*)\0setZoomFactor(double)\0"
    "setPixmap(QPixmap)\0"
};

void PixmapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PixmapWidget *_t = static_cast<PixmapWidget *>(_o);
        switch (_id) {
        case 0: _t->zoomFactorChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->pixmapChanged((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 2: _t->setZoomFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PixmapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PixmapWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PixmapWidget,
      qt_meta_data_PixmapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PixmapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PixmapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PixmapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PixmapWidget))
        return static_cast<void*>(const_cast< PixmapWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PixmapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PixmapWidget::zoomFactorChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PixmapWidget::pixmapChanged(QPixmap * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
