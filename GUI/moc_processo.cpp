/****************************************************************************
** Meta object code from reading C++ file 'processo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "processo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Processo_t {
    QByteArrayData data[9];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Processo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Processo_t qt_meta_stringdata_Processo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Processo"
QT_MOC_LITERAL(1, 9, 8), // "finished"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "response"
QT_MOC_LITERAL(4, 28, 1), // "s"
QT_MOC_LITERAL(5, 30, 5), // "error"
QT_MOC_LITERAL(6, 36, 3), // "err"
QT_MOC_LITERAL(7, 40, 10), // "deviceLink"
QT_MOC_LITERAL(8, 51, 7) // "process"

    },
    "Processo\0finished\0\0response\0s\0error\0"
    "err\0deviceLink\0process"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Processo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,
       7,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Processo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Processo *_t = static_cast<Processo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->response((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->deviceLink(); break;
        case 4: _t->process(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Processo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Processo::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::response)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Processo::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Processo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::deviceLink)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Processo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Processo.data,
      qt_meta_data_Processo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Processo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Processo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Processo.stringdata0))
        return static_cast<void*>(const_cast< Processo*>(this));
    return QObject::qt_metacast(_clname);
}

int Processo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Processo::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Processo::response(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Processo::error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Processo::deviceLink()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
