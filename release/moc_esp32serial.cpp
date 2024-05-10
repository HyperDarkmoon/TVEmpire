/****************************************************************************
** Meta object code from reading C++ file 'esp32serial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../esp32serial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'esp32serial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ESP32Serial_t {
    QByteArrayData data[6];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ESP32Serial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ESP32Serial_t qt_meta_stringdata_ESP32Serial = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ESP32Serial"
QT_MOC_LITERAL(1, 12, 12), // "dataReceived"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "data"
QT_MOC_LITERAL(4, 31, 8), // "sendData"
QT_MOC_LITERAL(5, 40, 8) // "readData"

    },
    "ESP32Serial\0dataReceived\0\0data\0sendData\0"
    "readData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ESP32Serial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,

       0        // eod
};

void ESP32Serial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ESP32Serial *_t = static_cast<ESP32Serial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->sendData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->readData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ESP32Serial::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP32Serial::dataReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ESP32Serial::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ESP32Serial.data,
      qt_meta_data_ESP32Serial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ESP32Serial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ESP32Serial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ESP32Serial.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ESP32Serial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ESP32Serial::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
