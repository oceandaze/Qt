/****************************************************************************
** Meta object code from reading C++ file 'testmovetothread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test_moveToThread/testmovetothread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testmovetothread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestMoveToThread_t {
    QByteArrayData data[11];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestMoveToThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestMoveToThread_t qt_meta_stringdata_TestMoveToThread = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TestMoveToThread"
QT_MOC_LITERAL(1, 17, 7), // "signalA"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "signalB"
QT_MOC_LITERAL(4, 34, 7), // "signalC"
QT_MOC_LITERAL(5, 42, 9), // "curNumber"
QT_MOC_LITERAL(6, 52, 3), // "num"
QT_MOC_LITERAL(7, 56, 9), // "firstSlot"
QT_MOC_LITERAL(8, 66, 10), // "secondSlot"
QT_MOC_LITERAL(9, 77, 9), // "thirdSlot"
QT_MOC_LITERAL(10, 87, 7) // "working"

    },
    "TestMoveToThread\0signalA\0\0signalB\0"
    "signalC\0curNumber\0num\0firstSlot\0"
    "secondSlot\0thirdSlot\0working"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestMoveToThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestMoveToThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestMoveToThread *_t = static_cast<TestMoveToThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalA(); break;
        case 1: _t->signalB(); break;
        case 2: _t->signalC(); break;
        case 3: _t->curNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->firstSlot(); break;
        case 5: _t->secondSlot(); break;
        case 6: _t->thirdSlot(); break;
        case 7: _t->working(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TestMoveToThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestMoveToThread::signalA)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TestMoveToThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestMoveToThread::signalB)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TestMoveToThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestMoveToThread::signalC)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TestMoveToThread::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestMoveToThread::curNumber)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject TestMoveToThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestMoveToThread.data,
      qt_meta_data_TestMoveToThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestMoveToThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestMoveToThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestMoveToThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestMoveToThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TestMoveToThread::signalA()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TestMoveToThread::signalB()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TestMoveToThread::signalC()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TestMoveToThread::curNumber(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
