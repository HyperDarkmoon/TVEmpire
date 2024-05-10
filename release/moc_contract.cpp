/****************************************************************************
** Meta object code from reading C++ file 'contract.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../contract.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contract.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Contract_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Contract_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Contract_t qt_meta_stringdata_Contract = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Contract"
QT_MOC_LITERAL(1, 9, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "on_add_btn_2_clicked"
QT_MOC_LITERAL(4, 53, 18), // "on_add_btn_clicked"
QT_MOC_LITERAL(5, 72, 23), // "onContractButtonClicked"
QT_MOC_LITERAL(6, 96, 3), // "row"
QT_MOC_LITERAL(7, 100, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(8, 124, 4), // "arg1"
QT_MOC_LITERAL(9, 129, 24), // "on_label_6_linkActivated"
QT_MOC_LITERAL(10, 154, 4), // "link"
QT_MOC_LITERAL(11, 159, 23) // "on_pushButton_2_clicked"

    },
    "Contract\0on_pushButton_clicked\0\0"
    "on_add_btn_2_clicked\0on_add_btn_clicked\0"
    "onContractButtonClicked\0row\0"
    "on_comboBox_2_activated\0arg1\0"
    "on_label_6_linkActivated\0link\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Contract[] = {

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
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void Contract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Contract *_t = static_cast<Contract *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_add_btn_2_clicked(); break;
        case 2: _t->on_add_btn_clicked(); break;
        case 3: _t->onContractButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_label_6_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Contract::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Contract.data,
      qt_meta_data_Contract,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Contract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Contract::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Contract.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Contract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ClickableQLabel_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClickableQLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClickableQLabel_t qt_meta_stringdata_ClickableQLabel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ClickableQLabel"
QT_MOC_LITERAL(1, 16, 7), // "clicked"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "ClickableQLabel\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClickableQLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ClickableQLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClickableQLabel *_t = static_cast<ClickableQLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ClickableQLabel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClickableQLabel::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ClickableQLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ClickableQLabel.data,
      qt_meta_data_ClickableQLabel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClickableQLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClickableQLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClickableQLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int ClickableQLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ClickableQLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
