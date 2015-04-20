/****************************************************************************
** Meta object code from reading C++ file 'ScrollAreaNoWheel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ScrollAreaNoWheel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScrollAreaNoWheel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScrollAreaNoWheel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   44,   44,   44, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ScrollAreaNoWheel[] = {
    "ScrollAreaNoWheel\0wheelTurned(QWheelEvent*)\0"
    "\0"
};

void ScrollAreaNoWheel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScrollAreaNoWheel *_t = static_cast<ScrollAreaNoWheel *>(_o);
        switch (_id) {
        case 0: _t->wheelTurned((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScrollAreaNoWheel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScrollAreaNoWheel::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_ScrollAreaNoWheel,
      qt_meta_data_ScrollAreaNoWheel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScrollAreaNoWheel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScrollAreaNoWheel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScrollAreaNoWheel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScrollAreaNoWheel))
        return static_cast<void*>(const_cast< ScrollAreaNoWheel*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int ScrollAreaNoWheel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ScrollAreaNoWheel::wheelTurned(QWheelEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
