/****************************************************************************
** Meta object code from reading C++ file 'equipment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../equipment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equipment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Equipment_t {
    QByteArrayData data[10];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Equipment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Equipment_t qt_meta_stringdata_Equipment = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Equipment"
QT_MOC_LITERAL(1, 10, 16), // "on_Ajout_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 22), // "on_pdfButton_4_clicked"
QT_MOC_LITERAL(4, 51, 22), // "on_pdfButton_5_clicked"
QT_MOC_LITERAL(5, 74, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 96, 17), // "on_google_clicked"
QT_MOC_LITERAL(7, 114, 17), // "on_amazon_clicked"
QT_MOC_LITERAL(8, 132, 24), // "on_visual_impact_clicked"
QT_MOC_LITERAL(9, 157, 19) // "on_Affecter_clicked"

    },
    "Equipment\0on_Ajout_clicked\0\0"
    "on_pdfButton_4_clicked\0on_pdfButton_5_clicked\0"
    "on_pushButton_clicked\0on_google_clicked\0"
    "on_amazon_clicked\0on_visual_impact_clicked\0"
    "on_Affecter_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Equipment[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Equipment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Equipment *_t = static_cast<Equipment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Ajout_clicked(); break;
        case 1: _t->on_pdfButton_4_clicked(); break;
        case 2: _t->on_pdfButton_5_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_google_clicked(); break;
        case 5: _t->on_amazon_clicked(); break;
        case 6: _t->on_visual_impact_clicked(); break;
        case 7: _t->on_Affecter_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Equipment::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Equipment.data,
      qt_meta_data_Equipment,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Equipment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Equipment::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Equipment.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Equipment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
