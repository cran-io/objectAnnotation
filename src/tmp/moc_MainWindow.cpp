/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   39,   45,   45, 0x05,
      46,   73,   45,   45, 0x05,
      82,  117,   45,   45, 0x05,

 // slots: signature, parameters, type, tag, flags
     124,   45,   45,   45, 0x0a,
     158,   45,   45,   45, 0x0a,
     192,   45,   45,   45, 0x0a,
     228,   45,   45,   45, 0x0a,
     254,   45,   45,   45, 0x0a,
     288,   45,   45,   45, 0x0a,
     317,   45,   45,   45, 0x0a,
     347,   45,   45,   45, 0x0a,
     382,   45,   45,   45, 0x0a,
     408,   45,   45,   45, 0x0a,
     434,   45,   45,   45, 0x0a,
     460,   45,   45,   45, 0x0a,
     486,   45,   45,   45, 0x0a,
     517,   45,   45,   45, 0x0a,
     552,  623,   45,   45, 0x0a,
     625,   45,   45,   45, 0x0a,
     666,  623,   45,   45, 0x0a,
     740,   45,   45,   45, 0x0a,
     789,   45,   45,   45, 0x0a,
     849,   45,   45,   45, 0x0a,
     891,   45,   45,   45, 0x0a,
     929,   45,   45,   45, 0x0a,
     946,   45,   45,   45, 0x0a,
     963,   45,   45,   45, 0x0a,
     991,   45,   45,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0activeObjectChanged(IA::ID)\0"
    "objID\0\0activeFileChanged(QString)\0"
    "filePath\0selectedObjectsChanged(IA::IDList)\0"
    "objIDs\0on_actionOpenDatabase_triggered()\0"
    "on_actionSaveDatabase_triggered()\0"
    "on_actionSaveDatabaseAs_triggered()\0"
    "on_actionQuit_triggered()\0"
    "on_actionShortcutHelp_triggered()\0"
    "on_actionCopyObj_triggered()\0"
    "on_actionPasteObj_triggered()\0"
    "on_actionExtractImages_triggered()\0"
    "on_addImgButton_clicked()\0"
    "on_delImgButton_clicked()\0"
    "on_addObjButton_clicked()\0"
    "on_delObjButton_clicked()\0"
    "on_addPropertyButton_clicked()\0"
    "on_addFilePropertyButton_clicked()\0"
    "on_imgTreeWidget_currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    ",\0on_objTableWidget_itemSelectionChanged()\0"
    "on_objTableWidget_currentItemChanged(QTableWidgetItem*,QTableWidgetIte"
    "m*)\0"
    "on_objTableWidget_itemChanged(QTableWidgetItem*)\0"
    "on_filePropertiesTableWidget_itemChanged(QTableWidgetItem*)\0"
    "onPixmapWidgetActiveObjectChanged(IA::ID)\0"
    "onScrollAreaWheelTurned(QWheelEvent*)\0"
    "refreshImgView()\0refreshObjView()\0"
    "refreshFilePropertiesView()\0"
    "nextPreviousFile(Direction)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->activeObjectChanged((*reinterpret_cast< IA::ID(*)>(_a[1]))); break;
        case 1: _t->activeFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->selectedObjectsChanged((*reinterpret_cast< const IA::IDList(*)>(_a[1]))); break;
        case 3: _t->on_actionOpenDatabase_triggered(); break;
        case 4: _t->on_actionSaveDatabase_triggered(); break;
        case 5: _t->on_actionSaveDatabaseAs_triggered(); break;
        case 6: _t->on_actionQuit_triggered(); break;
        case 7: _t->on_actionShortcutHelp_triggered(); break;
        case 8: _t->on_actionCopyObj_triggered(); break;
        case 9: _t->on_actionPasteObj_triggered(); break;
        case 10: _t->on_actionExtractImages_triggered(); break;
        case 11: _t->on_addImgButton_clicked(); break;
        case 12: _t->on_delImgButton_clicked(); break;
        case 13: _t->on_addObjButton_clicked(); break;
        case 14: _t->on_delObjButton_clicked(); break;
        case 15: _t->on_addPropertyButton_clicked(); break;
        case 16: _t->on_addFilePropertyButton_clicked(); break;
        case 17: _t->on_imgTreeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 18: _t->on_objTableWidget_itemSelectionChanged(); break;
        case 19: _t->on_objTableWidget_currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 20: _t->on_objTableWidget_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 21: _t->on_filePropertiesTableWidget_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 22: _t->onPixmapWidgetActiveObjectChanged((*reinterpret_cast< IA::ID(*)>(_a[1]))); break;
        case 23: _t->onScrollAreaWheelTurned((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 24: _t->refreshImgView(); break;
        case 25: _t->refreshObjView(); break;
        case 26: _t->refreshFilePropertiesView(); break;
        case 27: _t->nextPreviousFile((*reinterpret_cast< Direction(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::activeObjectChanged(IA::ID _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::activeFileChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::selectedObjectsChanged(const IA::IDList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
