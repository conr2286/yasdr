/****************************************************************************
** Meta object code from reading C++ file 'MessageClient.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../wsjtx/Network/MessageClient.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageClient.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessageClient_t {
    QByteArrayData data[86];
    char stringdata0[875];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessageClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessageClient_t qt_meta_stringdata_MessageClient = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MessageClient"
QT_MOC_LITERAL(1, 14, 13), // "clear_decodes"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "window"
QT_MOC_LITERAL(4, 36, 5), // "reply"
QT_MOC_LITERAL(5, 42, 3), // "snr"
QT_MOC_LITERAL(6, 46, 10), // "delta_time"
QT_MOC_LITERAL(7, 57, 15), // "delta_frequency"
QT_MOC_LITERAL(8, 73, 4), // "mode"
QT_MOC_LITERAL(9, 78, 12), // "message_text"
QT_MOC_LITERAL(10, 91, 14), // "low_confidence"
QT_MOC_LITERAL(11, 106, 9), // "modifiers"
QT_MOC_LITERAL(12, 116, 5), // "close"
QT_MOC_LITERAL(13, 122, 6), // "replay"
QT_MOC_LITERAL(14, 129, 7), // "halt_tx"
QT_MOC_LITERAL(15, 137, 9), // "auto_only"
QT_MOC_LITERAL(16, 147, 9), // "free_text"
QT_MOC_LITERAL(17, 157, 4), // "send"
QT_MOC_LITERAL(18, 162, 18), // "highlight_callsign"
QT_MOC_LITERAL(19, 181, 8), // "callsign"
QT_MOC_LITERAL(20, 190, 2), // "bg"
QT_MOC_LITERAL(21, 193, 2), // "fg"
QT_MOC_LITERAL(22, 196, 9), // "last_only"
QT_MOC_LITERAL(23, 206, 20), // "switch_configuration"
QT_MOC_LITERAL(24, 227, 18), // "configuration_name"
QT_MOC_LITERAL(25, 246, 9), // "configure"
QT_MOC_LITERAL(26, 256, 19), // "frequency_tolerance"
QT_MOC_LITERAL(27, 276, 7), // "submode"
QT_MOC_LITERAL(28, 284, 9), // "fast_mode"
QT_MOC_LITERAL(29, 294, 9), // "tr_period"
QT_MOC_LITERAL(30, 304, 5), // "rx_df"
QT_MOC_LITERAL(31, 310, 7), // "dx_call"
QT_MOC_LITERAL(32, 318, 7), // "dx_grid"
QT_MOC_LITERAL(33, 326, 17), // "generate_messages"
QT_MOC_LITERAL(34, 344, 5), // "error"
QT_MOC_LITERAL(35, 350, 8), // "location"
QT_MOC_LITERAL(36, 359, 10), // "set_server"
QT_MOC_LITERAL(37, 370, 11), // "server_name"
QT_MOC_LITERAL(38, 382, 23), // "network_interface_names"
QT_MOC_LITERAL(39, 406, 15), // "set_server_port"
QT_MOC_LITERAL(40, 422, 9), // "port_type"
QT_MOC_LITERAL(41, 432, 11), // "server_port"
QT_MOC_LITERAL(42, 444, 7), // "set_TTL"
QT_MOC_LITERAL(43, 452, 3), // "TTL"
QT_MOC_LITERAL(44, 456, 6), // "enable"
QT_MOC_LITERAL(45, 463, 13), // "status_update"
QT_MOC_LITERAL(46, 477, 9), // "Frequency"
QT_MOC_LITERAL(47, 487, 6), // "report"
QT_MOC_LITERAL(48, 494, 7), // "tx_mode"
QT_MOC_LITERAL(49, 502, 10), // "tx_enabled"
QT_MOC_LITERAL(50, 513, 12), // "transmitting"
QT_MOC_LITERAL(51, 526, 8), // "decoding"
QT_MOC_LITERAL(52, 535, 5), // "tx_df"
QT_MOC_LITERAL(53, 541, 7), // "de_call"
QT_MOC_LITERAL(54, 549, 7), // "de_grid"
QT_MOC_LITERAL(55, 557, 16), // "watchdog_timeout"
QT_MOC_LITERAL(56, 574, 8), // "sub_mode"
QT_MOC_LITERAL(57, 583, 15), // "special_op_mode"
QT_MOC_LITERAL(58, 599, 10), // "tx_message"
QT_MOC_LITERAL(59, 610, 6), // "decode"
QT_MOC_LITERAL(60, 617, 6), // "is_new"
QT_MOC_LITERAL(61, 624, 4), // "time"
QT_MOC_LITERAL(62, 629, 7), // "message"
QT_MOC_LITERAL(63, 637, 7), // "off_air"
QT_MOC_LITERAL(64, 645, 11), // "WSPR_decode"
QT_MOC_LITERAL(65, 657, 5), // "drift"
QT_MOC_LITERAL(66, 663, 4), // "grid"
QT_MOC_LITERAL(67, 668, 5), // "power"
QT_MOC_LITERAL(68, 674, 15), // "decodes_cleared"
QT_MOC_LITERAL(69, 690, 10), // "qso_logged"
QT_MOC_LITERAL(70, 701, 8), // "time_off"
QT_MOC_LITERAL(71, 710, 14), // "dial_frequency"
QT_MOC_LITERAL(72, 725, 11), // "report_sent"
QT_MOC_LITERAL(73, 737, 15), // "report_received"
QT_MOC_LITERAL(74, 753, 8), // "tx_power"
QT_MOC_LITERAL(75, 762, 8), // "comments"
QT_MOC_LITERAL(76, 771, 4), // "name"
QT_MOC_LITERAL(77, 776, 7), // "time_on"
QT_MOC_LITERAL(78, 784, 13), // "operator_call"
QT_MOC_LITERAL(79, 798, 7), // "my_call"
QT_MOC_LITERAL(80, 806, 7), // "my_grid"
QT_MOC_LITERAL(81, 814, 13), // "exchange_sent"
QT_MOC_LITERAL(82, 828, 13), // "exchange_rcvd"
QT_MOC_LITERAL(83, 842, 8), // "propmode"
QT_MOC_LITERAL(84, 851, 11), // "logged_ADIF"
QT_MOC_LITERAL(85, 863, 11) // "ADIF_record"

    },
    "MessageClient\0clear_decodes\0\0window\0"
    "reply\0snr\0delta_time\0delta_frequency\0"
    "mode\0message_text\0low_confidence\0"
    "modifiers\0close\0replay\0halt_tx\0auto_only\0"
    "free_text\0send\0highlight_callsign\0"
    "callsign\0bg\0fg\0last_only\0switch_configuration\0"
    "configuration_name\0configure\0"
    "frequency_tolerance\0submode\0fast_mode\0"
    "tr_period\0rx_df\0dx_call\0dx_grid\0"
    "generate_messages\0error\0location\0"
    "set_server\0server_name\0network_interface_names\0"
    "set_server_port\0port_type\0server_port\0"
    "set_TTL\0TTL\0enable\0status_update\0"
    "Frequency\0report\0tx_mode\0tx_enabled\0"
    "transmitting\0decoding\0tx_df\0de_call\0"
    "de_grid\0watchdog_timeout\0sub_mode\0"
    "special_op_mode\0tx_message\0decode\0"
    "is_new\0time\0message\0off_air\0WSPR_decode\0"
    "drift\0grid\0power\0decodes_cleared\0"
    "qso_logged\0time_off\0dial_frequency\0"
    "report_sent\0report_received\0tx_power\0"
    "comments\0name\0time_on\0operator_call\0"
    "my_call\0my_grid\0exchange_sent\0"
    "exchange_rcvd\0propmode\0logged_ADIF\0"
    "ADIF_record"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    8,  127,    2, 0x06 /* Public */,
      12,    0,  144,    2, 0x06 /* Public */,
      13,    0,  145,    2, 0x06 /* Public */,
      14,    1,  146,    2, 0x06 /* Public */,
      16,    2,  149,    2, 0x06 /* Public */,
      18,    4,  154,    2, 0x06 /* Public */,
      23,    1,  163,    2, 0x06 /* Public */,
      25,    9,  166,    2, 0x06 /* Public */,
      34,    1,  185,    2, 0x06 /* Public */,
      35,    1,  188,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      36,    2,  191,    2, 0x0a /* Public */,
      39,    1,  196,    2, 0x0a /* Public */,
      39,    0,  199,    2, 0x2a /* Public | MethodCloned */,
      42,    1,  200,    2, 0x0a /* Public */,
      44,    1,  203,    2, 0x0a /* Public */,
      45,   21,  206,    2, 0x0a /* Public */,
      59,    9,  249,    2, 0x0a /* Public */,
      64,   10,  268,    2, 0x0a /* Public */,
      68,    0,  289,    2, 0x0a /* Public */,
      69,   17,  290,    2, 0x0a /* Public */,
      84,    1,  325,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::QTime, QMetaType::Int, QMetaType::Float, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::UChar,    2,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor, QMetaType::QColor, QMetaType::Bool,   19,   20,   21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::Bool, QMetaType::UInt, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,   26,   27,   28,   29,   30,   31,   32,   33,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   43,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 46, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::UInt, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Bool, QMetaType::UChar, QMetaType::UInt, QMetaType::UInt, QMetaType::QString, QMetaType::QString,    2,    8,   31,   47,   48,   49,   50,   51,   30,   52,   53,   54,   32,   55,   56,   28,   57,   26,   29,   24,   58,
    QMetaType::Void, QMetaType::Bool, QMetaType::QTime, QMetaType::Int, QMetaType::Float, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   60,   61,    5,    6,    7,    8,   62,   10,   63,
    QMetaType::Void, QMetaType::Bool, QMetaType::QTime, QMetaType::Int, QMetaType::Float, 0x80000000 | 46, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   60,   61,    5,    6,    2,   65,   19,   66,   67,   63,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, 0x80000000 | 46, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   70,   31,   32,   71,    8,   72,   73,   74,   75,   76,   77,   78,   79,   80,   81,   82,   83,
    QMetaType::Void, QMetaType::QByteArray,   85,

       0        // eod
};

void MessageClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessageClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear_decodes((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->reply((*reinterpret_cast< QTime(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< quint8(*)>(_a[8]))); break;
        case 2: _t->close(); break;
        case 3: _t->replay(); break;
        case 4: _t->halt_tx((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->free_text((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->highlight_callsign((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->switch_configuration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->configure((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< quint32(*)>(_a[5])),(*reinterpret_cast< quint32(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 9: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->location((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->set_server((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 12: _t->set_server_port((*reinterpret_cast< port_type(*)>(_a[1]))); break;
        case 13: _t->set_server_port(); break;
        case 14: _t->set_TTL((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->enable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->status_update((*reinterpret_cast< Frequency(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< quint32(*)>(_a[9])),(*reinterpret_cast< quint32(*)>(_a[10])),(*reinterpret_cast< const QString(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QString(*)>(_a[13])),(*reinterpret_cast< bool(*)>(_a[14])),(*reinterpret_cast< const QString(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16])),(*reinterpret_cast< quint8(*)>(_a[17])),(*reinterpret_cast< quint32(*)>(_a[18])),(*reinterpret_cast< quint32(*)>(_a[19])),(*reinterpret_cast< const QString(*)>(_a[20])),(*reinterpret_cast< const QString(*)>(_a[21]))); break;
        case 17: _t->decode((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QTime(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< quint32(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 18: _t->WSPR_decode((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QTime(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< Frequency(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< qint32(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10]))); break;
        case 19: _t->decodes_cleared(); break;
        case 20: _t->qso_logged((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< Frequency(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< QDateTime(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QString(*)>(_a[13])),(*reinterpret_cast< const QString(*)>(_a[14])),(*reinterpret_cast< const QString(*)>(_a[15])),(*reinterpret_cast< const QString(*)>(_a[16])),(*reinterpret_cast< const QString(*)>(_a[17]))); break;
        case 21: _t->logged_ADIF((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MessageClient::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::clear_decodes)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(QTime , qint32 , float , quint32 , QString const & , QString const & , bool , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::reply)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::close)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::replay)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::halt_tx)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(QString const & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::free_text)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(QString const & , QColor const & , QColor const & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::highlight_callsign)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::switch_configuration)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(QString const & , quint32 , QString const & , bool , quint32 , quint32 , QString const & , QString const & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::configure)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(QString const & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::error)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MessageClient::*)(QString const & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageClient::location)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MessageClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MessageClient.data,
    qt_meta_data_MessageClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MessageClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessageClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MessageClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void MessageClient::clear_decodes(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessageClient::reply(QTime _t1, qint32 _t2, float _t3, quint32 _t4, QString const & _t5, QString const & _t6, bool _t7, quint8 _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessageClient::close()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MessageClient::replay()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MessageClient::halt_tx(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MessageClient::free_text(QString const & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MessageClient::highlight_callsign(QString const & _t1, QColor const & _t2, QColor const & _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MessageClient::switch_configuration(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MessageClient::configure(QString const & _t1, quint32 _t2, QString const & _t3, bool _t4, quint32 _t5, quint32 _t6, QString const & _t7, QString const & _t8, bool _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MessageClient::error(QString const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MessageClient *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MessageClient::location(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
