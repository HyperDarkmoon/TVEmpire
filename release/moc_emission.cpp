/****************************************************************************
** Meta object code from reading C++ file 'emission.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../emission.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emission.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Emission_t {
    QByteArrayData data[10];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Emission_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Emission_t qt_meta_stringdata_Emission = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Emission"
QT_MOC_LITERAL(1, 9, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "on_add_btn_2_clicked"
QT_MOC_LITERAL(4, 53, 20), // "on_pdfButton_clicked"
QT_MOC_LITERAL(5, 74, 22), // "on_pdfButton_2_clicked"
QT_MOC_LITERAL(6, 97, 26), // "on_playVideoButton_clicked"
QT_MOC_LITERAL(7, 124, 2), // "id"
QT_MOC_LITERAL(8, 127, 14), // "on_add_clicked"
QT_MOC_LITERAL(9, 142, 20) // "on_uploadVid_clicked"

    },
    "Emission\0on_pushButton_clicked\0\0"
    "on_add_btn_2_clicked\0on_pdfButton_clicked\0"
    "on_pdfButton_2_clicked\0"
    "on_playVideoButton_clicked\0id\0"
    "on_add_clicked\0on_uploadVid_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Emission[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Emission::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Emission *_t = static_cast<Emission *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_add_btn_2_clicked(); break;
        case 2: _t->on_pdfButton_clicked(); break;
        case 3: _t->on_pdfButton_2_clicked(); break;
        case 4: _t->on_playVideoButton_clicked((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->on_add_clicked(); break;
        case 6: _t->on_uploadVid_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Emission::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Emission.data,
      qt_meta_data_Emission,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Emission::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Emission::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Emission.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Emission::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
