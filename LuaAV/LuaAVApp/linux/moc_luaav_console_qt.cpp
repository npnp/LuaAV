/****************************************************************************
** Meta object code from reading C++ file 'luaav_console_qt.h'
**
** Created: Fri Jan 20 02:34:26 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "luaav_console_qt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'luaav_console_qt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScriptModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ScriptModel[] = {
    "ScriptModel\0"
};

const QMetaObject ScriptModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_ScriptModel,
      qt_meta_data_ScriptModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScriptModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScriptModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScriptModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptModel))
        return static_cast<void*>(const_cast< ScriptModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int ScriptModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_LuaAVConsole[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   13,   13,   13, 0x08,
      48,   38,   13,   13, 0x08,
      75,   69,   13,   13, 0x08,
     105,   13,   13,   13, 0x08,
     118,  116,   13,   13, 0x08,
     137,   13,   13,   13, 0x08,
     148,   13,   13,   13, 0x08,
     158,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LuaAVConsole[] = {
    "LuaAVConsole\0\0clearConsole()\0scroll()\0"
    "pos,index\0resizeTable(int,int)\0index\0"
    "tableViewClicked(QModelIndex)\0evalCode()\0"
    "v\0setScrolling(bool)\0openFile()\0"
    "newFile()\0fileAction()\0"
};

const QMetaObject LuaAVConsole::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LuaAVConsole,
      qt_meta_data_LuaAVConsole, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LuaAVConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LuaAVConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LuaAVConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LuaAVConsole))
        return static_cast<void*>(const_cast< LuaAVConsole*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LuaAVConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clearConsole(); break;
        case 1: scroll(); break;
        case 2: resizeTable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: tableViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: evalCode(); break;
        case 5: setScrolling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: openFile(); break;
        case 7: newFile(); break;
        case 8: fileAction(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void LuaAVConsole::clearConsole()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
