/****************************************************************************
** Meta object code from reading C++ file 'luaav_app_codepad_qt.h'
**
** Created: Sat Jan 21 00:20:36 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "luaav_app_codepad_qt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'luaav_app_codepad_qt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CodePadQt[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   11,   10,   10, 0x08,
      56,   10,   10,   10, 0x08,
      79,   10,   10,   10, 0x08,
     128,  105,   10,   10, 0x08,
     160,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CodePadQt[] = {
    "CodePadQt\0\0newBlockCount\0"
    "updateLineNumberAreaWidth(int)\0"
    "highlightCurrentLine()\0updateLineNumberArea(int)\0"
    "position,removed,added\0"
    "handleInsertDelete(int,int,int)\0eval()\0"
};

const QMetaObject CodePadQt::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_CodePadQt,
      qt_meta_data_CodePadQt, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CodePadQt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CodePadQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CodePadQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CodePadQt))
        return static_cast<void*>(const_cast< CodePadQt*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int CodePadQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateLineNumberAreaWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: highlightCurrentLine(); break;
        case 2: updateLineNumberArea((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: handleInsertDelete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: eval(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
