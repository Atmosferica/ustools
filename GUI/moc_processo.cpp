/****************************************************************************
** Meta object code from reading C++ file 'processo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "processo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Processo_t {
    QByteArrayData data[11];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Processo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Processo_t qt_meta_stringdata_Processo = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 8),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 8),
QT_MOC_LITERAL(4, 28, 1),
QT_MOC_LITERAL(5, 30, 5),
QT_MOC_LITERAL(6, 36, 3),
QT_MOC_LITERAL(7, 40, 10),
QT_MOC_LITERAL(8, 51, 7),
QT_MOC_LITERAL(9, 59, 11),
QT_MOC_LITERAL(10, 71, 14)
    },
    "Processo\0finished\0\0response\0s\0error\0"
    "err\0deviceLink\0process\0stopProcess\0"
    "restartProcess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Processo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       7,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Processo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Processo *_t = static_cast<Processo *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->response((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->deviceLink(); break;
        case 4: _t->process(); break;
        case 5: _t->stopProcess(); break;
        case 6: _t->restartProcess(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Processo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (Processo::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::response)) {
                *result = 1;
            }
        }
        {
            typedef void (Processo::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::error)) {
                *result = 2;
            }
        }
        {
            typedef void (Processo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Processo::deviceLink)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Processo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Processo.data,
      qt_meta_data_Processo,  qt_static_metacall, 0, 0}
};


const QMetaObject *Processo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Processo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Processo.stringdata))
        return static_cast<void*>(const_cast< Processo*>(this));
    return QObject::qt_metacast(_clname);
}

int Processo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Processo::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Processo::response(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Processo::error(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Processo::deviceLink()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
