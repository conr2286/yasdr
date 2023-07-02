/****************************************************************************
** Meta object code from reading C++ file 'Configuration.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../wsjtx/Configuration.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Configuration.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Configuration_t {
    QByteArrayData data[42];
    char stringdata0[712];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Configuration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Configuration_t qt_meta_stringdata_Configuration = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Configuration"
QT_MOC_LITERAL(1, 14, 17), // "text_font_changed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 25), // "decoded_text_font_changed"
QT_MOC_LITERAL(4, 59, 18), // "udp_server_changed"
QT_MOC_LITERAL(5, 78, 8), // "QString&"
QT_MOC_LITERAL(6, 87, 15), // "udp_server_name"
QT_MOC_LITERAL(7, 103, 18), // "network_interfaces"
QT_MOC_LITERAL(8, 122, 23), // "udp_server_port_changed"
QT_MOC_LITERAL(9, 146, 9), // "port_type"
QT_MOC_LITERAL(10, 156, 11), // "server_port"
QT_MOC_LITERAL(11, 168, 15), // "udp_TTL_changed"
QT_MOC_LITERAL(12, 184, 3), // "TTL"
QT_MOC_LITERAL(13, 188, 27), // "accept_udp_requests_changed"
QT_MOC_LITERAL(14, 216, 7), // "checked"
QT_MOC_LITERAL(15, 224, 27), // "decode_highlighting_changed"
QT_MOC_LITERAL(16, 252, 23), // "DecodeHighlightingModel"
QT_MOC_LITERAL(17, 276, 18), // "transceiver_update"
QT_MOC_LITERAL(18, 295, 29), // "Transceiver::TransceiverState"
QT_MOC_LITERAL(19, 325, 19), // "transceiver_failure"
QT_MOC_LITERAL(20, 345, 6), // "reason"
QT_MOC_LITERAL(21, 352, 25), // "enumerating_audio_devices"
QT_MOC_LITERAL(22, 378, 21), // "transceiver_frequency"
QT_MOC_LITERAL(23, 400, 9), // "Frequency"
QT_MOC_LITERAL(24, 410, 24), // "transceiver_tx_frequency"
QT_MOC_LITERAL(25, 435, 16), // "transceiver_mode"
QT_MOC_LITERAL(26, 452, 4), // "MODE"
QT_MOC_LITERAL(27, 457, 15), // "transceiver_ptt"
QT_MOC_LITERAL(28, 473, 16), // "sync_transceiver"
QT_MOC_LITERAL(29, 490, 12), // "force_signal"
QT_MOC_LITERAL(30, 503, 22), // "enforce_mode_and_split"
QT_MOC_LITERAL(31, 526, 29), // "invalidate_audio_input_device"
QT_MOC_LITERAL(32, 556, 5), // "error"
QT_MOC_LITERAL(33, 562, 30), // "invalidate_audio_output_device"
QT_MOC_LITERAL(34, 593, 8), // "DataMode"
QT_MOC_LITERAL(35, 602, 14), // "data_mode_none"
QT_MOC_LITERAL(36, 617, 13), // "data_mode_USB"
QT_MOC_LITERAL(37, 631, 14), // "data_mode_data"
QT_MOC_LITERAL(38, 646, 11), // "Type2MsgGen"
QT_MOC_LITERAL(39, 658, 17), // "type_2_msg_1_full"
QT_MOC_LITERAL(40, 676, 17), // "type_2_msg_3_full"
QT_MOC_LITERAL(41, 694, 17) // "type_2_msg_5_only"

    },
    "Configuration\0text_font_changed\0\0"
    "decoded_text_font_changed\0udp_server_changed\0"
    "QString&\0udp_server_name\0network_interfaces\0"
    "udp_server_port_changed\0port_type\0"
    "server_port\0udp_TTL_changed\0TTL\0"
    "accept_udp_requests_changed\0checked\0"
    "decode_highlighting_changed\0"
    "DecodeHighlightingModel\0transceiver_update\0"
    "Transceiver::TransceiverState\0"
    "transceiver_failure\0reason\0"
    "enumerating_audio_devices\0"
    "transceiver_frequency\0Frequency\0"
    "transceiver_tx_frequency\0transceiver_mode\0"
    "MODE\0transceiver_ptt\0sync_transceiver\0"
    "force_signal\0enforce_mode_and_split\0"
    "invalidate_audio_input_device\0error\0"
    "invalidate_audio_output_device\0DataMode\0"
    "data_mode_none\0data_mode_USB\0"
    "data_mode_data\0Type2MsgGen\0type_2_msg_1_full\0"
    "type_2_msg_3_full\0type_2_msg_5_only"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Configuration[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       2,  178, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       3,    1,  122,    2, 0x06 /* Public */,
       4,    2,  125,    2, 0x06 /* Public */,
       8,    1,  130,    2, 0x06 /* Public */,
      11,    1,  133,    2, 0x06 /* Public */,
      13,    1,  136,    2, 0x06 /* Public */,
      15,    1,  139,    2, 0x06 /* Public */,
      17,    1,  142,    2, 0x06 /* Public */,
      19,    1,  145,    2, 0x06 /* Public */,
      21,    0,  148,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  149,    2, 0x0a /* Public */,
      24,    1,  152,    2, 0x0a /* Public */,
      24,    0,  155,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  156,    2, 0x0a /* Public */,
      27,    1,  159,    2, 0x0a /* Public */,
      27,    0,  162,    2, 0x2a /* Public | MethodCloned */,
      28,    2,  163,    2, 0x0a /* Public */,
      28,    1,  168,    2, 0x2a /* Public | MethodCloned */,
      28,    0,  171,    2, 0x2a /* Public | MethodCloned */,
      31,    1,  172,    2, 0x0a /* Public */,
      33,    1,  175,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QStringList,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   29,   30,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,

 // enums: name, alias, flags, count, data
      34,   34, 0x0,    3,  188,
      38,   38, 0x0,    3,  194,

 // enum data: key, value
      35, uint(Configuration::data_mode_none),
      36, uint(Configuration::data_mode_USB),
      37, uint(Configuration::data_mode_data),
      39, uint(Configuration::type_2_msg_1_full),
      40, uint(Configuration::type_2_msg_3_full),
      41, uint(Configuration::type_2_msg_5_only),

       0        // eod
};

void Configuration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Configuration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->text_font_changed((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 1: _t->decoded_text_font_changed((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 2: _t->udp_server_changed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 3: _t->udp_server_port_changed((*reinterpret_cast< port_type(*)>(_a[1]))); break;
        case 4: _t->udp_TTL_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->accept_udp_requests_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->decode_highlighting_changed((*reinterpret_cast< const DecodeHighlightingModel(*)>(_a[1]))); break;
        case 7: _t->transceiver_update((*reinterpret_cast< const Transceiver::TransceiverState(*)>(_a[1]))); break;
        case 8: _t->transceiver_failure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->enumerating_audio_devices(); break;
        case 10: _t->transceiver_frequency((*reinterpret_cast< Frequency(*)>(_a[1]))); break;
        case 11: _t->transceiver_tx_frequency((*reinterpret_cast< Frequency(*)>(_a[1]))); break;
        case 12: _t->transceiver_tx_frequency(); break;
        case 13: _t->transceiver_mode((*reinterpret_cast< MODE(*)>(_a[1]))); break;
        case 14: _t->transceiver_ptt((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->transceiver_ptt(); break;
        case 16: _t->sync_transceiver((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->sync_transceiver((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->sync_transceiver(); break;
        case 19: _t->invalidate_audio_input_device((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->invalidate_audio_output_device((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Transceiver::TransceiverState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Configuration::*)(QFont ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::text_font_changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(QFont ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::decoded_text_font_changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(QString & , QStringList const & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::udp_server_changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(port_type ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::udp_server_port_changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::udp_TTL_changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::accept_udp_requests_changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(DecodeHighlightingModel const & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::decode_highlighting_changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(Transceiver::TransceiverState const & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::transceiver_update)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Configuration::*)(QString const & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::transceiver_failure)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Configuration::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Configuration::enumerating_audio_devices)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Configuration::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Configuration.data,
    qt_meta_data_Configuration,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Configuration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Configuration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Configuration.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Configuration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Configuration::text_font_changed(QFont _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Configuration::decoded_text_font_changed(QFont _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Configuration::udp_server_changed(QString & _t1, QStringList const & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Configuration::udp_server_port_changed(port_type _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Configuration::udp_TTL_changed(int _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Configuration::accept_udp_requests_changed(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Configuration::decode_highlighting_changed(DecodeHighlightingModel const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Configuration::transceiver_update(Transceiver::TransceiverState const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Configuration::transceiver_failure(QString const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Configuration::enumerating_audio_devices()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
