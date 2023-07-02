/****************************************************************************
** Meta object code from reading C++ file 'AD1CCty.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../wsjtx/logbook/AD1CCty.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AD1CCty.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AD1CCty_t {
    QByteArrayData data[10];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AD1CCty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AD1CCty_t qt_meta_stringdata_AD1CCty = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AD1CCty"
QT_MOC_LITERAL(1, 8, 9), // "Continent"
QT_MOC_LITERAL(2, 18, 2), // "UN"
QT_MOC_LITERAL(3, 21, 2), // "AF"
QT_MOC_LITERAL(4, 24, 2), // "AN"
QT_MOC_LITERAL(5, 27, 2), // "AS"
QT_MOC_LITERAL(6, 30, 2), // "EU"
QT_MOC_LITERAL(7, 33, 2), // "NA"
QT_MOC_LITERAL(8, 36, 2), // "OC"
QT_MOC_LITERAL(9, 39, 2) // "SA"

    },
    "AD1CCty\0Continent\0UN\0AF\0AN\0AS\0EU\0NA\0"
    "OC\0SA"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AD1CCty[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    8,   19,

 // enum data: key, value
       2, uint(AD1CCty::Continent::UN),
       3, uint(AD1CCty::Continent::AF),
       4, uint(AD1CCty::Continent::AN),
       5, uint(AD1CCty::Continent::AS),
       6, uint(AD1CCty::Continent::EU),
       7, uint(AD1CCty::Continent::NA),
       8, uint(AD1CCty::Continent::OC),
       9, uint(AD1CCty::Continent::SA),

       0        // eod
};

void AD1CCty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AD1CCty::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AD1CCty.data,
    qt_meta_data_AD1CCty,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AD1CCty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AD1CCty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AD1CCty.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AD1CCty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
