/****************************************************************************
** Meta object code from reading C++ file 'sponsor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sponsor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sponsor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Sponsor_t {
    QByteArrayData data[13];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Sponsor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Sponsor_t qt_meta_stringdata_Sponsor = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Sponsor"
QT_MOC_LITERAL(1, 8, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "on_add_btn_2_clicked"
QT_MOC_LITERAL(4, 52, 18), // "on_add_btn_clicked"
QT_MOC_LITERAL(5, 71, 19), // "onEditButtonClicked"
QT_MOC_LITERAL(6, 91, 3), // "row"
QT_MOC_LITERAL(7, 95, 22), // "onContratButtonClicked"
QT_MOC_LITERAL(8, 118, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(9, 142, 4), // "arg1"
QT_MOC_LITERAL(10, 147, 24), // "on_label_6_linkActivated"
QT_MOC_LITERAL(11, 172, 4), // "link"
QT_MOC_LITERAL(12, 177, 23) // "on_pushButton_2_clicked"

    },
    "Sponsor\0on_pushButton_clicked\0\0"
    "on_add_btn_2_clicked\0on_add_btn_clicked\0"
    "onEditButtonClicked\0row\0onContratButtonClicked\0"
    "on_comboBox_2_activated\0arg1\0"
    "on_label_6_linkActivated\0link\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Sponsor[] = {

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
       5,    1,   57,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void Sponsor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Sponsor *_t = static_cast<Sponsor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_add_btn_2_clicked(); break;
        case 2: _t->on_add_btn_clicked(); break;
        case 3: _t->onEditButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onContratButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_label_6_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Sponsor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Sponsor.data,
      qt_meta_data_Sponsor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Sponsor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sponsor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sponsor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Sponsor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_Click_t {
    QByteArrayData data[3];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Click_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Click_t qt_meta_stringdata_Click = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Click"
QT_MOC_LITERAL(1, 6, 7), // "clicked"
QT_MOC_LITERAL(2, 14, 0) // ""

    },
    "Click\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Click[] = {

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

void Click::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Click *_t = static_cast<Click *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Click::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Click::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Click::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_Click.data,
      qt_meta_data_Click,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Click::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Click::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Click.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int Click::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Click::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
