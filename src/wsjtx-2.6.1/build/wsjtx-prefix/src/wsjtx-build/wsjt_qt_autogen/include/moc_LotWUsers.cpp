/****************************************************************************
** Meta object code from reading C++ file 'LotWUsers.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../wsjtx/Network/LotWUsers.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LotWUsers.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LotWUsers_t {
    QByteArrayData data[11];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LotWUsers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LotWUsers_t qt_meta_stringdata_LotWUsers = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LotWUsers"
QT_MOC_LITERAL(1, 10, 16), // "LotW_users_error"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "reason"
QT_MOC_LITERAL(4, 35, 13), // "load_finished"
QT_MOC_LITERAL(5, 49, 4), // "load"
QT_MOC_LITERAL(6, 54, 3), // "url"
QT_MOC_LITERAL(7, 58, 5), // "fetch"
QT_MOC_LITERAL(8, 64, 14), // "force_download"
QT_MOC_LITERAL(9, 79, 18), // "set_age_constraint"
QT_MOC_LITERAL(10, 98, 19) // "uploaded_since_days"

    },
    "LotWUsers\0LotW_users_error\0\0reason\0"
    "load_finished\0load\0url\0fetch\0"
    "force_download\0set_age_constraint\0"
    "uploaded_since_days"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LotWUsers[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   48,    2, 0x0a /* Public */,
       5,    2,   55,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   60,    2, 0x2a /* Public | MethodCloned */,
       9,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong,   10,

       0        // eod
};

void LotWUsers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LotWUsers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LotW_users_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->load_finished(); break;
        case 2: _t->load((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->load((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->set_age_constraint((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LotWUsers::*)(QString const & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LotWUsers::LotW_users_error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LotWUsers::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LotWUsers::load_finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LotWUsers::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LotWUsers.data,
    qt_meta_data_LotWUsers,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LotWUsers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LotWUsers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LotWUsers.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LotWUsers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void LotWUsers::LotW_users_error(QString const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< LotWUsers *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LotWUsers::load_finished()const
{
    QMetaObject::activate(const_cast< LotWUsers *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
