/********************************************************************************
** Form generated from reading UI file 'Configuration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATION_H
#define UI_CONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/CheckableItemComboBox.hpp"
#include "widgets/DecodeHighlightingListView.hpp"
#include "widgets/LazyFillComboBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_configuration_dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *configuration_tabs;
    QWidget *general_tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *station_group_box;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_14;
    QFormLayout *formLayout_3;
    QLabel *callsign_label;
    QLineEdit *callsign_line_edit;
    QFormLayout *formLayout_12;
    QLabel *grid_label;
    QLineEdit *grid_line_edit;
    QCheckBox *use_dynamic_grid;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QComboBox *region_combo_box;
    QFormLayout *formLayout_13;
    QLabel *label_5;
    QComboBox *type_2_msg_gen_combo_box;
    QFrame *line_5;
    QGroupBox *display_group_box;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *font_push_button;
    QPushButton *decoded_text_font_push_button;
    QSpacerItem *verticalSpacer;
    QCheckBox *insert_blank_check_box;
    QCheckBox *miles_check_box;
    QCheckBox *cbHighlightDXgrid;
    QCheckBox *ppfx_check_box;
    QCheckBox *cbHighlightDXcall;
    QCheckBox *decodes_from_top_check_box;
    QCheckBox *TX_messages_check_box;
    QCheckBox *DXCC_check_box;
    QFrame *line_7;
    QGroupBox *behaviour_group_box;
    QGridLayout *gridLayout_8;
    QCheckBox *decode_at_52s_check_box;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_10;
    QSpinBox *tx_watchdog_spin_box;
    QCheckBox *enable_VHF_features_check_box;
    QCheckBox *single_decode_check_box;
    QCheckBox *tx_QSY_check_box;
    QCheckBox *monitor_off_check_box;
    QCheckBox *monitor_last_used_check_box;
    QCheckBox *alternate_bindings_check_box;
    QCheckBox *disable_TX_on_73_check_box;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *CW_id_after_73_check_box;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpinBox *CW_id_interval_spin_box;
    QCheckBox *quick_call_check_box;
    QCheckBox *force_call_1st_check_box;
    QSpacerItem *verticalSpacer_9;
    QWidget *radio_tab;
    QGridLayout *gridLayout_3;
    QGroupBox *CAT_control_group_box;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *CAT_port_label;
    QComboBox *CAT_port_combo_box;
    QGroupBox *CAT_serial_port_parameters_group_box;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_5;
    QLabel *CAT_baud_label;
    QComboBox *CAT_serial_baud_combo_box;
    QGroupBox *CAT_data_bits_group_box;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *CAT_default_bit_radio_button;
    QRadioButton *CAT_7_bit_radio_button;
    QRadioButton *CAT_8_bit_radio_button;
    QGroupBox *CAT_stop_bits_group_box;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *CAT_default_stop_bit_radio_button;
    QRadioButton *CAT_one_stop_bit_radio_button;
    QRadioButton *CAT_two_stop_bit_radio_button;
    QGroupBox *CAT_handshake_group_box;
    QGridLayout *gridLayout_11;
    QRadioButton *CAT_handshake_default_radio_button;
    QRadioButton *CAT_handshake_none_radio_button;
    QRadioButton *CAT_handshake_xon_radio_button;
    QRadioButton *CAT_handshake_hardware_radio_button;
    QGroupBox *CAT_control_lines_group_box;
    QHBoxLayout *horizontalLayout_8;
    QFormLayout *formLayout_8;
    QComboBox *force_DTR_combo_box;
    QLabel *force_DTR_label;
    QFormLayout *formLayout_9;
    QLabel *force_RTS_label;
    QComboBox *force_RTS_combo_box;
    QFrame *line_6;
    QFrame *line;
    QGroupBox *PTT_method_group_box;
    QGridLayout *gridLayout_2;
    QRadioButton *PTT_VOX_radio_button;
    QRadioButton *PTT_DTR_radio_button;
    QRadioButton *PTT_CAT_radio_button;
    QRadioButton *PTT_RTS_radio_button;
    QFormLayout *formLayout_4;
    QLabel *PTT_port_label;
    QComboBox *PTT_port_combo_box;
    QGroupBox *mode_group_box;
    QGridLayout *gridLayout_10;
    QRadioButton *mode_USB_radio_button;
    QRadioButton *mode_none_radio_button;
    QRadioButton *mode_data_radio_button;
    QGroupBox *TX_audio_source_group_box;
    QGridLayout *gridLayout_7;
    QRadioButton *TX_source_data_radio_button;
    QRadioButton *TX_source_mic_radio_button;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *rig_label;
    QComboBox *rig_combo_box;
    QLabel *CAT_poll_interval_label;
    QSpinBox *CAT_poll_interval_spin_box;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *test_CAT_push_button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *test_PTT_push_button;
    QGroupBox *split_operation_group_box;
    QGridLayout *gridLayout_12;
    QRadioButton *split_emulate_radio_button;
    QRadioButton *split_rig_radio_button;
    QRadioButton *split_none_radio_button;
    QSpacerItem *verticalSpacer_5;
    QWidget *audio_tab;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *soundcard_group_box;
    QGridLayout *gridLayout_6;
    LazyFillComboBox *sound_output_combo_box;
    QComboBox *sound_input_channel_combo_box;
    LazyFillComboBox *sound_input_combo_box;
    QLabel *sound_output_label;
    QComboBox *sound_output_channel_combo_box;
    QLabel *sound_input_label;
    QGroupBox *save_path_group_box;
    QHBoxLayout *horizontalLayout_5;
    QLabel *save_path_label;
    QLabel *save_path_display_label;
    QPushButton *save_path_select_push_button;
    QGroupBox *azel_path_group_box;
    QHBoxLayout *horizontalLayout_10;
    QLabel *azel_path_label;
    QLabel *azel_path_display_label;
    QPushButton *azel_path_select_push_button;
    QGroupBox *split_operation_group_box_2;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBoxPwrBandTxMemory;
    QCheckBox *checkBoxPwrBandTuneMemory;
    QSpacerItem *verticalSpacer_3;
    QWidget *tx_macros_tab;
    QGridLayout *gridLayout;
    QPushButton *add_macro_push_button;
    QLineEdit *add_macro_line_edit;
    QPushButton *delete_macro_push_button;
    QListView *macros_list_view;
    QWidget *reporting_tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *logging_group_box;
    QGridLayout *gridLayout_14;
    QCheckBox *prompt_to_log_check_box;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_13;
    QCheckBox *report_in_comments_check_box;
    QCheckBox *clear_DX_check_box;
    QCheckBox *log_as_RTTY_check_box;
    QLineEdit *opCallEntry;
    QCheckBox *cbAutoLog;
    QFrame *line_8;
    QGroupBox *network_group_box;
    QHBoxLayout *horizontalLayout_22;
    QCheckBox *psk_reporter_check_box;
    QCheckBox *psk_reporter_tcpip_check_box;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_16;
    QFormLayout *formLayout_6;
    QLabel *udp_server_label;
    QLineEdit *udp_server_line_edit;
    QLabel *label_6;
    QSpinBox *udp_server_port_spin_box;
    QLabel *udp_interfaces_label;
    CheckableItemComboBox *udp_interfaces_combo_box;
    QSpinBox *udp_TTL_spin_box;
    QLabel *udp_TTL_label;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *accept_udp_requests_check_box;
    QCheckBox *udpWindowToFront;
    QCheckBox *udpWindowRestore;
    QGroupBox *n1mm_group_box;
    QFormLayout *formLayout_15;
    QCheckBox *enable_n1mm_broadcast_check_box;
    QLabel *n1mm_server_name_label;
    QLineEdit *n1mm_server_name_line_edit;
    QLabel *n1mm_server_port_label;
    QSpinBox *n1mm_server_port_spin_box;
    QSpacerItem *verticalSpacer_4;
    QWidget *frequencies_tab;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_7;
    QLabel *label_8;
    QDoubleSpinBox *calibration_slope_ppm_spin_box;
    QFormLayout *formLayout_14;
    QLabel *label_7;
    QDoubleSpinBox *calibration_intercept_spin_box;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *frequencies_table_view;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QTableView *stations_table_view;
    QWidget *colors_tab;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *rescan_log_push_button;
    QPushButton *reset_highlighting_to_defaults_push_button;
    QCheckBox *include_WAE_check_box;
    QCheckBox *only_fields_check_box;
    DecodeHighlightingListView *highlighting_list_view;
    QCheckBox *highlight_by_mode_check_box;
    QCheckBox *highlight_73_check_box;
    QGroupBox *groupBox_11;
    QFormLayout *formLayout_18;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *LotW_CSV_URL_line_edit;
    QPushButton *LotW_CSV_fetch_push_button;
    QLabel *label_14;
    QSpinBox *LotW_days_since_upload_spin_box;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QWidget *advanced_tab;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_10;
    QLabel *label_3;
    QDoubleSpinBox *sbDegrade;
    QLabel *label_9;
    QSpinBox *sbBandwidth;
    QLabel *label_11;
    QDoubleSpinBox *sbTxDelay;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *cbx2ToneSpacing;
    QCheckBox *cbx4ToneSpacing;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *rbLowSidelobes;
    QRadioButton *rbMaxSensitivity;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_11;
    QLabel *label_2;
    QSpinBox *sbNtrials;
    QLabel *label_4;
    QSpinBox *sbAggressive;
    QCheckBox *cbTwoPass;
    QGroupBox *gbSpecialOpActivity;
    QGridLayout *gridLayout_15;
    QRadioButton *rbHound;
    QRadioButton *rbNA_VHF_Contest;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *rbField_Day;
    QSpacerItem *horizontalSpacer_9;
    QFormLayout *formLayout_16;
    QLabel *labFD;
    QLineEdit *Field_Day_Exchange;
    QRadioButton *rbARRL_Digi;
    QSpacerItem *horizontalSpacer_11;
    QRadioButton *rbWW_DIGI;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *rbRTTY_Roundup;
    QSpacerItem *horizontalSpacer_10;
    QFormLayout *formLayout_17;
    QLabel *labRTTY;
    QLineEdit *RTTY_Exchange;
    QRadioButton *rbFox;
    QRadioButton *rbEU_VHF_Contest;
    QHBoxLayout *horizontalLayout_24;
    QCheckBox *cbContestName;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_25;
    QLabel *labCN;
    QLineEdit *Contest_Name;
    QSpacerItem *verticalSpacer_8;
    QDialogButtonBox *configuration_dialog_button_box;
    QButtonGroup *CAT_stop_bits_button_group;
    QButtonGroup *CAT_handshake_button_group;
    QButtonGroup *TX_mode_button_group;
    QButtonGroup *CAT_data_bits_button_group;
    QButtonGroup *PTT_method_button_group;
    QButtonGroup *split_mode_button_group;
    QButtonGroup *special_op_activity_button_group;
    QButtonGroup *TX_audio_source_button_group;

    void setupUi(QDialog *configuration_dialog)
    {
        if (configuration_dialog->objectName().isEmpty())
            configuration_dialog->setObjectName(QString::fromUtf8("configuration_dialog"));
        configuration_dialog->resize(588, 642);
        verticalLayout_2 = new QVBoxLayout(configuration_dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        configuration_tabs = new QTabWidget(configuration_dialog);
        configuration_tabs->setObjectName(QString::fromUtf8("configuration_tabs"));
        general_tab = new QWidget();
        general_tab->setObjectName(QString::fromUtf8("general_tab"));
        verticalLayout_4 = new QVBoxLayout(general_tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        station_group_box = new QGroupBox(general_tab);
        station_group_box->setObjectName(QString::fromUtf8("station_group_box"));
        verticalLayout_12 = new QVBoxLayout(station_group_box);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        callsign_label = new QLabel(station_group_box);
        callsign_label->setObjectName(QString::fromUtf8("callsign_label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, callsign_label);

        callsign_line_edit = new QLineEdit(station_group_box);
        callsign_line_edit->setObjectName(QString::fromUtf8("callsign_line_edit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, callsign_line_edit);


        horizontalLayout_14->addLayout(formLayout_3);

        formLayout_12 = new QFormLayout();
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        grid_label = new QLabel(station_group_box);
        grid_label->setObjectName(QString::fromUtf8("grid_label"));

        formLayout_12->setWidget(0, QFormLayout::LabelRole, grid_label);

        grid_line_edit = new QLineEdit(station_group_box);
        grid_line_edit->setObjectName(QString::fromUtf8("grid_line_edit"));

        formLayout_12->setWidget(0, QFormLayout::FieldRole, grid_line_edit);


        horizontalLayout_14->addLayout(formLayout_12);

        use_dynamic_grid = new QCheckBox(station_group_box);
        use_dynamic_grid->setObjectName(QString::fromUtf8("use_dynamic_grid"));

        horizontalLayout_14->addWidget(use_dynamic_grid);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_12 = new QLabel(station_group_box);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        region_combo_box = new QComboBox(station_group_box);
        region_combo_box->setObjectName(QString::fromUtf8("region_combo_box"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, region_combo_box);


        horizontalLayout_14->addLayout(formLayout_2);


        verticalLayout_12->addLayout(horizontalLayout_14);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_5 = new QLabel(station_group_box);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_5);

        type_2_msg_gen_combo_box = new QComboBox(station_group_box);
        type_2_msg_gen_combo_box->addItem(QString());
        type_2_msg_gen_combo_box->addItem(QString());
        type_2_msg_gen_combo_box->addItem(QString());
        type_2_msg_gen_combo_box->setObjectName(QString::fromUtf8("type_2_msg_gen_combo_box"));
        type_2_msg_gen_combo_box->setEnabled(true);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, type_2_msg_gen_combo_box);


        verticalLayout_12->addLayout(formLayout_13);


        verticalLayout_4->addWidget(station_group_box);

        line_5 = new QFrame(general_tab);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        display_group_box = new QGroupBox(general_tab);
        display_group_box->setObjectName(QString::fromUtf8("display_group_box"));
        gridLayout_4 = new QGridLayout(display_group_box);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        font_push_button = new QPushButton(display_group_box);
        font_push_button->setObjectName(QString::fromUtf8("font_push_button"));

        verticalLayout_6->addWidget(font_push_button);

        decoded_text_font_push_button = new QPushButton(display_group_box);
        decoded_text_font_push_button->setObjectName(QString::fromUtf8("decoded_text_font_push_button"));

        verticalLayout_6->addWidget(decoded_text_font_push_button);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        horizontalLayout_21->addLayout(verticalLayout_6);


        gridLayout_4->addLayout(horizontalLayout_21, 0, 1, 4, 1);

        insert_blank_check_box = new QCheckBox(display_group_box);
        insert_blank_check_box->setObjectName(QString::fromUtf8("insert_blank_check_box"));

        gridLayout_4->addWidget(insert_blank_check_box, 1, 0, 1, 1);

        miles_check_box = new QCheckBox(display_group_box);
        miles_check_box->setObjectName(QString::fromUtf8("miles_check_box"));

        gridLayout_4->addWidget(miles_check_box, 2, 0, 1, 1);

        cbHighlightDXgrid = new QCheckBox(display_group_box);
        cbHighlightDXgrid->setObjectName(QString::fromUtf8("cbHighlightDXgrid"));

        gridLayout_4->addWidget(cbHighlightDXgrid, 5, 1, 1, 1);

        ppfx_check_box = new QCheckBox(display_group_box);
        ppfx_check_box->setObjectName(QString::fromUtf8("ppfx_check_box"));

        gridLayout_4->addWidget(ppfx_check_box, 4, 1, 1, 1);

        cbHighlightDXcall = new QCheckBox(display_group_box);
        cbHighlightDXcall->setObjectName(QString::fromUtf8("cbHighlightDXcall"));

        gridLayout_4->addWidget(cbHighlightDXcall, 5, 0, 1, 1);

        decodes_from_top_check_box = new QCheckBox(display_group_box);
        decodes_from_top_check_box->setObjectName(QString::fromUtf8("decodes_from_top_check_box"));

        gridLayout_4->addWidget(decodes_from_top_check_box, 0, 0, 1, 1);

        TX_messages_check_box = new QCheckBox(display_group_box);
        TX_messages_check_box->setObjectName(QString::fromUtf8("TX_messages_check_box"));

        gridLayout_4->addWidget(TX_messages_check_box, 3, 0, 1, 1);

        DXCC_check_box = new QCheckBox(display_group_box);
        DXCC_check_box->setObjectName(QString::fromUtf8("DXCC_check_box"));
        DXCC_check_box->setChecked(false);

        gridLayout_4->addWidget(DXCC_check_box, 4, 0, 1, 1);


        verticalLayout_4->addWidget(display_group_box);

        line_7 = new QFrame(general_tab);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_7);

        behaviour_group_box = new QGroupBox(general_tab);
        behaviour_group_box->setObjectName(QString::fromUtf8("behaviour_group_box"));
        gridLayout_8 = new QGridLayout(behaviour_group_box);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        decode_at_52s_check_box = new QCheckBox(behaviour_group_box);
        decode_at_52s_check_box->setObjectName(QString::fromUtf8("decode_at_52s_check_box"));

        gridLayout_8->addWidget(decode_at_52s_check_box, 3, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        label_10 = new QLabel(behaviour_group_box);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_12->addWidget(label_10);

        tx_watchdog_spin_box = new QSpinBox(behaviour_group_box);
        tx_watchdog_spin_box->setObjectName(QString::fromUtf8("tx_watchdog_spin_box"));
        tx_watchdog_spin_box->setValue(6);

        horizontalLayout_12->addWidget(tx_watchdog_spin_box);


        gridLayout_8->addLayout(horizontalLayout_12, 5, 1, 1, 1);

        enable_VHF_features_check_box = new QCheckBox(behaviour_group_box);
        enable_VHF_features_check_box->setObjectName(QString::fromUtf8("enable_VHF_features_check_box"));

        gridLayout_8->addWidget(enable_VHF_features_check_box, 0, 1, 1, 1);

        single_decode_check_box = new QCheckBox(behaviour_group_box);
        single_decode_check_box->setObjectName(QString::fromUtf8("single_decode_check_box"));

        gridLayout_8->addWidget(single_decode_check_box, 2, 1, 1, 1);

        tx_QSY_check_box = new QCheckBox(behaviour_group_box);
        tx_QSY_check_box->setObjectName(QString::fromUtf8("tx_QSY_check_box"));

        gridLayout_8->addWidget(tx_QSY_check_box, 1, 1, 1, 1);

        monitor_off_check_box = new QCheckBox(behaviour_group_box);
        monitor_off_check_box->setObjectName(QString::fromUtf8("monitor_off_check_box"));
        monitor_off_check_box->setChecked(false);

        gridLayout_8->addWidget(monitor_off_check_box, 0, 0, 1, 1);

        monitor_last_used_check_box = new QCheckBox(behaviour_group_box);
        monitor_last_used_check_box->setObjectName(QString::fromUtf8("monitor_last_used_check_box"));

        gridLayout_8->addWidget(monitor_last_used_check_box, 1, 0, 1, 1);

        alternate_bindings_check_box = new QCheckBox(behaviour_group_box);
        alternate_bindings_check_box->setObjectName(QString::fromUtf8("alternate_bindings_check_box"));

        gridLayout_8->addWidget(alternate_bindings_check_box, 5, 0, 1, 1);

        disable_TX_on_73_check_box = new QCheckBox(behaviour_group_box);
        disable_TX_on_73_check_box->setObjectName(QString::fromUtf8("disable_TX_on_73_check_box"));

        gridLayout_8->addWidget(disable_TX_on_73_check_box, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        CW_id_after_73_check_box = new QCheckBox(behaviour_group_box);
        CW_id_after_73_check_box->setObjectName(QString::fromUtf8("CW_id_after_73_check_box"));

        horizontalLayout_9->addWidget(CW_id_after_73_check_box);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        label = new QLabel(behaviour_group_box);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label);

        CW_id_interval_spin_box = new QSpinBox(behaviour_group_box);
        CW_id_interval_spin_box->setObjectName(QString::fromUtf8("CW_id_interval_spin_box"));

        horizontalLayout_9->addWidget(CW_id_interval_spin_box);


        gridLayout_8->addLayout(horizontalLayout_9, 7, 0, 1, 2);

        quick_call_check_box = new QCheckBox(behaviour_group_box);
        quick_call_check_box->setObjectName(QString::fromUtf8("quick_call_check_box"));

        gridLayout_8->addWidget(quick_call_check_box, 2, 0, 1, 1);

        force_call_1st_check_box = new QCheckBox(behaviour_group_box);
        force_call_1st_check_box->setObjectName(QString::fromUtf8("force_call_1st_check_box"));

        gridLayout_8->addWidget(force_call_1st_check_box, 4, 0, 1, 1);


        verticalLayout_4->addWidget(behaviour_group_box);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        configuration_tabs->addTab(general_tab, QString());
        radio_tab = new QWidget();
        radio_tab->setObjectName(QString::fromUtf8("radio_tab"));
        gridLayout_3 = new QGridLayout(radio_tab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        CAT_control_group_box = new QGroupBox(radio_tab);
        CAT_control_group_box->setObjectName(QString::fromUtf8("CAT_control_group_box"));
        sizePolicy.setHeightForWidth(CAT_control_group_box->sizePolicy().hasHeightForWidth());
        CAT_control_group_box->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(CAT_control_group_box);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        CAT_port_label = new QLabel(CAT_control_group_box);
        CAT_port_label->setObjectName(QString::fromUtf8("CAT_port_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, CAT_port_label);

        CAT_port_combo_box = new QComboBox(CAT_control_group_box);
        CAT_port_combo_box->setObjectName(QString::fromUtf8("CAT_port_combo_box"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CAT_port_combo_box->sizePolicy().hasHeightForWidth());
        CAT_port_combo_box->setSizePolicy(sizePolicy1);
        CAT_port_combo_box->setEditable(true);
        CAT_port_combo_box->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(0, QFormLayout::FieldRole, CAT_port_combo_box);


        verticalLayout_3->addLayout(formLayout);

        CAT_serial_port_parameters_group_box = new QGroupBox(CAT_control_group_box);
        CAT_serial_port_parameters_group_box->setObjectName(QString::fromUtf8("CAT_serial_port_parameters_group_box"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CAT_serial_port_parameters_group_box->sizePolicy().hasHeightForWidth());
        CAT_serial_port_parameters_group_box->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(CAT_serial_port_parameters_group_box);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        CAT_baud_label = new QLabel(CAT_serial_port_parameters_group_box);
        CAT_baud_label->setObjectName(QString::fromUtf8("CAT_baud_label"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, CAT_baud_label);

        CAT_serial_baud_combo_box = new QComboBox(CAT_serial_port_parameters_group_box);
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->setObjectName(QString::fromUtf8("CAT_serial_baud_combo_box"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(CAT_serial_baud_combo_box->sizePolicy().hasHeightForWidth());
        CAT_serial_baud_combo_box->setSizePolicy(sizePolicy3);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, CAT_serial_baud_combo_box);


        verticalLayout->addLayout(formLayout_5);

        CAT_data_bits_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_data_bits_group_box->setObjectName(QString::fromUtf8("CAT_data_bits_group_box"));
        horizontalLayout_4 = new QHBoxLayout(CAT_data_bits_group_box);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        CAT_default_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group = new QButtonGroup(configuration_dialog);
        CAT_data_bits_button_group->setObjectName(QString::fromUtf8("CAT_data_bits_button_group"));
        CAT_data_bits_button_group->addButton(CAT_default_bit_radio_button);
        CAT_default_bit_radio_button->setObjectName(QString::fromUtf8("CAT_default_bit_radio_button"));
        CAT_default_bit_radio_button->setChecked(true);

        horizontalLayout_4->addWidget(CAT_default_bit_radio_button);

        CAT_7_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group->addButton(CAT_7_bit_radio_button);
        CAT_7_bit_radio_button->setObjectName(QString::fromUtf8("CAT_7_bit_radio_button"));
        CAT_7_bit_radio_button->setAutoExclusive(true);

        horizontalLayout_4->addWidget(CAT_7_bit_radio_button);

        CAT_8_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group->addButton(CAT_8_bit_radio_button);
        CAT_8_bit_radio_button->setObjectName(QString::fromUtf8("CAT_8_bit_radio_button"));
        CAT_8_bit_radio_button->setChecked(false);

        horizontalLayout_4->addWidget(CAT_8_bit_radio_button);


        verticalLayout->addWidget(CAT_data_bits_group_box);

        CAT_stop_bits_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_stop_bits_group_box->setObjectName(QString::fromUtf8("CAT_stop_bits_group_box"));
        horizontalLayout_2 = new QHBoxLayout(CAT_stop_bits_group_box);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        CAT_default_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group = new QButtonGroup(configuration_dialog);
        CAT_stop_bits_button_group->setObjectName(QString::fromUtf8("CAT_stop_bits_button_group"));
        CAT_stop_bits_button_group->addButton(CAT_default_stop_bit_radio_button);
        CAT_default_stop_bit_radio_button->setObjectName(QString::fromUtf8("CAT_default_stop_bit_radio_button"));
        CAT_default_stop_bit_radio_button->setChecked(true);

        horizontalLayout_2->addWidget(CAT_default_stop_bit_radio_button);

        CAT_one_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group->addButton(CAT_one_stop_bit_radio_button);
        CAT_one_stop_bit_radio_button->setObjectName(QString::fromUtf8("CAT_one_stop_bit_radio_button"));

        horizontalLayout_2->addWidget(CAT_one_stop_bit_radio_button);

        CAT_two_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group->addButton(CAT_two_stop_bit_radio_button);
        CAT_two_stop_bit_radio_button->setObjectName(QString::fromUtf8("CAT_two_stop_bit_radio_button"));
        CAT_two_stop_bit_radio_button->setChecked(false);

        horizontalLayout_2->addWidget(CAT_two_stop_bit_radio_button);


        verticalLayout->addWidget(CAT_stop_bits_group_box);

        CAT_handshake_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_handshake_group_box->setObjectName(QString::fromUtf8("CAT_handshake_group_box"));
        gridLayout_11 = new QGridLayout(CAT_handshake_group_box);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        CAT_handshake_default_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group = new QButtonGroup(configuration_dialog);
        CAT_handshake_button_group->setObjectName(QString::fromUtf8("CAT_handshake_button_group"));
        CAT_handshake_button_group->addButton(CAT_handshake_default_radio_button);
        CAT_handshake_default_radio_button->setObjectName(QString::fromUtf8("CAT_handshake_default_radio_button"));
        CAT_handshake_default_radio_button->setChecked(true);

        gridLayout_11->addWidget(CAT_handshake_default_radio_button, 0, 0, 1, 1);

        CAT_handshake_none_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_none_radio_button);
        CAT_handshake_none_radio_button->setObjectName(QString::fromUtf8("CAT_handshake_none_radio_button"));
        CAT_handshake_none_radio_button->setChecked(false);

        gridLayout_11->addWidget(CAT_handshake_none_radio_button, 0, 1, 1, 1);

        CAT_handshake_xon_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_xon_radio_button);
        CAT_handshake_xon_radio_button->setObjectName(QString::fromUtf8("CAT_handshake_xon_radio_button"));

        gridLayout_11->addWidget(CAT_handshake_xon_radio_button, 1, 0, 1, 1);

        CAT_handshake_hardware_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_hardware_radio_button);
        CAT_handshake_hardware_radio_button->setObjectName(QString::fromUtf8("CAT_handshake_hardware_radio_button"));

        gridLayout_11->addWidget(CAT_handshake_hardware_radio_button, 1, 1, 1, 1);


        verticalLayout->addWidget(CAT_handshake_group_box);

        CAT_control_lines_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_control_lines_group_box->setObjectName(QString::fromUtf8("CAT_control_lines_group_box"));
        CAT_control_lines_group_box->setChecked(false);
        horizontalLayout_8 = new QHBoxLayout(CAT_control_lines_group_box);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        force_DTR_combo_box = new QComboBox(CAT_control_lines_group_box);
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->setObjectName(QString::fromUtf8("force_DTR_combo_box"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, force_DTR_combo_box);

        force_DTR_label = new QLabel(CAT_control_lines_group_box);
        force_DTR_label->setObjectName(QString::fromUtf8("force_DTR_label"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, force_DTR_label);


        horizontalLayout_8->addLayout(formLayout_8);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        force_RTS_label = new QLabel(CAT_control_lines_group_box);
        force_RTS_label->setObjectName(QString::fromUtf8("force_RTS_label"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, force_RTS_label);

        force_RTS_combo_box = new QComboBox(CAT_control_lines_group_box);
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->setObjectName(QString::fromUtf8("force_RTS_combo_box"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, force_RTS_combo_box);


        horizontalLayout_8->addLayout(formLayout_9);


        verticalLayout->addWidget(CAT_control_lines_group_box);


        verticalLayout_3->addWidget(CAT_serial_port_parameters_group_box);


        gridLayout_3->addWidget(CAT_control_group_box, 1, 0, 11, 1);

        line_6 = new QFrame(radio_tab);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 6, 2, 1, 1);

        line = new QFrame(radio_tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 1, 12, 1);

        PTT_method_group_box = new QGroupBox(radio_tab);
        PTT_method_group_box->setObjectName(QString::fromUtf8("PTT_method_group_box"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(PTT_method_group_box->sizePolicy().hasHeightForWidth());
        PTT_method_group_box->setSizePolicy(sizePolicy4);
        gridLayout_2 = new QGridLayout(PTT_method_group_box);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        PTT_VOX_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group = new QButtonGroup(configuration_dialog);
        PTT_method_button_group->setObjectName(QString::fromUtf8("PTT_method_button_group"));
        PTT_method_button_group->addButton(PTT_VOX_radio_button);
        PTT_VOX_radio_button->setObjectName(QString::fromUtf8("PTT_VOX_radio_button"));

        gridLayout_2->addWidget(PTT_VOX_radio_button, 0, 0, 1, 1);

        PTT_DTR_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_DTR_radio_button);
        PTT_DTR_radio_button->setObjectName(QString::fromUtf8("PTT_DTR_radio_button"));
        PTT_DTR_radio_button->setChecked(true);

        gridLayout_2->addWidget(PTT_DTR_radio_button, 0, 1, 1, 1);

        PTT_CAT_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_CAT_radio_button);
        PTT_CAT_radio_button->setObjectName(QString::fromUtf8("PTT_CAT_radio_button"));

        gridLayout_2->addWidget(PTT_CAT_radio_button, 1, 0, 1, 1);

        PTT_RTS_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_RTS_radio_button);
        PTT_RTS_radio_button->setObjectName(QString::fromUtf8("PTT_RTS_radio_button"));

        gridLayout_2->addWidget(PTT_RTS_radio_button, 1, 1, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        PTT_port_label = new QLabel(PTT_method_group_box);
        PTT_port_label->setObjectName(QString::fromUtf8("PTT_port_label"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, PTT_port_label);

        PTT_port_combo_box = new QComboBox(PTT_method_group_box);
        PTT_port_combo_box->setObjectName(QString::fromUtf8("PTT_port_combo_box"));
        sizePolicy1.setHeightForWidth(PTT_port_combo_box->sizePolicy().hasHeightForWidth());
        PTT_port_combo_box->setSizePolicy(sizePolicy1);
        PTT_port_combo_box->setEditable(true);
        PTT_port_combo_box->setInsertPolicy(QComboBox::NoInsert);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, PTT_port_combo_box);


        gridLayout_2->addLayout(formLayout_4, 2, 0, 2, 2);


        gridLayout_3->addWidget(PTT_method_group_box, 1, 2, 1, 1);

        mode_group_box = new QGroupBox(radio_tab);
        mode_group_box->setObjectName(QString::fromUtf8("mode_group_box"));
        gridLayout_10 = new QGridLayout(mode_group_box);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        mode_USB_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group = new QButtonGroup(configuration_dialog);
        TX_mode_button_group->setObjectName(QString::fromUtf8("TX_mode_button_group"));
        TX_mode_button_group->addButton(mode_USB_radio_button);
        mode_USB_radio_button->setObjectName(QString::fromUtf8("mode_USB_radio_button"));
        mode_USB_radio_button->setChecked(true);

        gridLayout_10->addWidget(mode_USB_radio_button, 0, 1, 1, 1);

        mode_none_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group->addButton(mode_none_radio_button);
        mode_none_radio_button->setObjectName(QString::fromUtf8("mode_none_radio_button"));

        gridLayout_10->addWidget(mode_none_radio_button, 0, 0, 1, 1);

        mode_data_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group->addButton(mode_data_radio_button);
        mode_data_radio_button->setObjectName(QString::fromUtf8("mode_data_radio_button"));

        gridLayout_10->addWidget(mode_data_radio_button, 0, 2, 1, 1);


        gridLayout_3->addWidget(mode_group_box, 5, 2, 1, 1);

        TX_audio_source_group_box = new QGroupBox(radio_tab);
        TX_audio_source_group_box->setObjectName(QString::fromUtf8("TX_audio_source_group_box"));
        gridLayout_7 = new QGridLayout(TX_audio_source_group_box);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        TX_source_data_radio_button = new QRadioButton(TX_audio_source_group_box);
        TX_audio_source_button_group = new QButtonGroup(configuration_dialog);
        TX_audio_source_button_group->setObjectName(QString::fromUtf8("TX_audio_source_button_group"));
        TX_audio_source_button_group->addButton(TX_source_data_radio_button);
        TX_source_data_radio_button->setObjectName(QString::fromUtf8("TX_source_data_radio_button"));

        gridLayout_7->addWidget(TX_source_data_radio_button, 0, 0, 1, 1);

        TX_source_mic_radio_button = new QRadioButton(TX_audio_source_group_box);
        TX_audio_source_button_group->addButton(TX_source_mic_radio_button);
        TX_source_mic_radio_button->setObjectName(QString::fromUtf8("TX_source_mic_radio_button"));
        TX_source_mic_radio_button->setChecked(true);

        gridLayout_7->addWidget(TX_source_mic_radio_button, 0, 1, 1, 1);


        gridLayout_3->addWidget(TX_audio_source_group_box, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 9, 2, 1, 1);

        line_3 = new QFrame(radio_tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 2, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 11, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        rig_label = new QLabel(radio_tab);
        rig_label->setObjectName(QString::fromUtf8("rig_label"));

        horizontalLayout_7->addWidget(rig_label);

        rig_combo_box = new QComboBox(radio_tab);
        rig_combo_box->setObjectName(QString::fromUtf8("rig_combo_box"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(rig_combo_box->sizePolicy().hasHeightForWidth());
        rig_combo_box->setSizePolicy(sizePolicy5);

        horizontalLayout_7->addWidget(rig_combo_box);

        CAT_poll_interval_label = new QLabel(radio_tab);
        CAT_poll_interval_label->setObjectName(QString::fromUtf8("CAT_poll_interval_label"));

        horizontalLayout_7->addWidget(CAT_poll_interval_label);

        CAT_poll_interval_spin_box = new QSpinBox(radio_tab);
        CAT_poll_interval_spin_box->setObjectName(QString::fromUtf8("CAT_poll_interval_spin_box"));
        CAT_poll_interval_spin_box->setMinimum(1);

        horizontalLayout_7->addWidget(CAT_poll_interval_spin_box);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 3);

        line_4 = new QFrame(radio_tab);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 4, 2, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        test_CAT_push_button = new QPushButton(radio_tab);
        test_CAT_push_button->setObjectName(QString::fromUtf8("test_CAT_push_button"));

        horizontalLayout_11->addWidget(test_CAT_push_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        test_PTT_push_button = new QPushButton(radio_tab);
        test_PTT_push_button->setObjectName(QString::fromUtf8("test_PTT_push_button"));
        test_PTT_push_button->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"	background-color: red;\n"
"	border-style	: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        test_PTT_push_button->setCheckable(true);

        horizontalLayout_11->addWidget(test_PTT_push_button);


        gridLayout_3->addLayout(horizontalLayout_11, 10, 2, 1, 1);

        split_operation_group_box = new QGroupBox(radio_tab);
        split_operation_group_box->setObjectName(QString::fromUtf8("split_operation_group_box"));
        gridLayout_12 = new QGridLayout(split_operation_group_box);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        split_emulate_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group = new QButtonGroup(configuration_dialog);
        split_mode_button_group->setObjectName(QString::fromUtf8("split_mode_button_group"));
        split_mode_button_group->addButton(split_emulate_radio_button);
        split_emulate_radio_button->setObjectName(QString::fromUtf8("split_emulate_radio_button"));

        gridLayout_12->addWidget(split_emulate_radio_button, 0, 2, 1, 1);

        split_rig_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group->addButton(split_rig_radio_button);
        split_rig_radio_button->setObjectName(QString::fromUtf8("split_rig_radio_button"));

        gridLayout_12->addWidget(split_rig_radio_button, 0, 1, 1, 1);

        split_none_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group->addButton(split_none_radio_button);
        split_none_radio_button->setObjectName(QString::fromUtf8("split_none_radio_button"));
        split_none_radio_button->setChecked(true);

        gridLayout_12->addWidget(split_none_radio_button, 0, 0, 1, 1);


        gridLayout_3->addWidget(split_operation_group_box, 8, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 12, 0, 1, 1);

        configuration_tabs->addTab(radio_tab, QString());
        audio_tab = new QWidget();
        audio_tab->setObjectName(QString::fromUtf8("audio_tab"));
        verticalLayout_9 = new QVBoxLayout(audio_tab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        soundcard_group_box = new QGroupBox(audio_tab);
        soundcard_group_box->setObjectName(QString::fromUtf8("soundcard_group_box"));
        gridLayout_6 = new QGridLayout(soundcard_group_box);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        sound_output_combo_box = new LazyFillComboBox(soundcard_group_box);
        sound_output_combo_box->setObjectName(QString::fromUtf8("sound_output_combo_box"));
        sizePolicy5.setHeightForWidth(sound_output_combo_box->sizePolicy().hasHeightForWidth());
        sound_output_combo_box->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(sound_output_combo_box, 1, 1, 1, 1);

        sound_input_channel_combo_box = new QComboBox(soundcard_group_box);
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->setObjectName(QString::fromUtf8("sound_input_channel_combo_box"));

        gridLayout_6->addWidget(sound_input_channel_combo_box, 0, 2, 1, 1);

        sound_input_combo_box = new LazyFillComboBox(soundcard_group_box);
        sound_input_combo_box->setObjectName(QString::fromUtf8("sound_input_combo_box"));
        sizePolicy5.setHeightForWidth(sound_input_combo_box->sizePolicy().hasHeightForWidth());
        sound_input_combo_box->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(sound_input_combo_box, 0, 1, 1, 1);

        sound_output_label = new QLabel(soundcard_group_box);
        sound_output_label->setObjectName(QString::fromUtf8("sound_output_label"));

        gridLayout_6->addWidget(sound_output_label, 1, 0, 1, 1);

        sound_output_channel_combo_box = new QComboBox(soundcard_group_box);
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->setObjectName(QString::fromUtf8("sound_output_channel_combo_box"));

        gridLayout_6->addWidget(sound_output_channel_combo_box, 1, 2, 1, 1);

        sound_input_label = new QLabel(soundcard_group_box);
        sound_input_label->setObjectName(QString::fromUtf8("sound_input_label"));

        gridLayout_6->addWidget(sound_input_label, 0, 0, 1, 1);


        verticalLayout_9->addWidget(soundcard_group_box);

        save_path_group_box = new QGroupBox(audio_tab);
        save_path_group_box->setObjectName(QString::fromUtf8("save_path_group_box"));
        horizontalLayout_5 = new QHBoxLayout(save_path_group_box);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        save_path_label = new QLabel(save_path_group_box);
        save_path_label->setObjectName(QString::fromUtf8("save_path_label"));

        horizontalLayout_5->addWidget(save_path_label);

        save_path_display_label = new QLabel(save_path_group_box);
        save_path_display_label->setObjectName(QString::fromUtf8("save_path_display_label"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(save_path_display_label->sizePolicy().hasHeightForWidth());
        save_path_display_label->setSizePolicy(sizePolicy6);
        save_path_display_label->setAutoFillBackground(false);
        save_path_display_label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(save_path_display_label);

        save_path_select_push_button = new QPushButton(save_path_group_box);
        save_path_select_push_button->setObjectName(QString::fromUtf8("save_path_select_push_button"));

        horizontalLayout_5->addWidget(save_path_select_push_button);


        verticalLayout_9->addWidget(save_path_group_box);

        azel_path_group_box = new QGroupBox(audio_tab);
        azel_path_group_box->setObjectName(QString::fromUtf8("azel_path_group_box"));
        horizontalLayout_10 = new QHBoxLayout(azel_path_group_box);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        azel_path_label = new QLabel(azel_path_group_box);
        azel_path_label->setObjectName(QString::fromUtf8("azel_path_label"));

        horizontalLayout_10->addWidget(azel_path_label);

        azel_path_display_label = new QLabel(azel_path_group_box);
        azel_path_display_label->setObjectName(QString::fromUtf8("azel_path_display_label"));
        sizePolicy6.setHeightForWidth(azel_path_display_label->sizePolicy().hasHeightForWidth());
        azel_path_display_label->setSizePolicy(sizePolicy6);
        azel_path_display_label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_10->addWidget(azel_path_display_label);

        azel_path_select_push_button = new QPushButton(azel_path_group_box);
        azel_path_select_push_button->setObjectName(QString::fromUtf8("azel_path_select_push_button"));

        horizontalLayout_10->addWidget(azel_path_select_push_button);


        verticalLayout_9->addWidget(azel_path_group_box);

        split_operation_group_box_2 = new QGroupBox(audio_tab);
        split_operation_group_box_2->setObjectName(QString::fromUtf8("split_operation_group_box_2"));
        horizontalLayout_13 = new QHBoxLayout(split_operation_group_box_2);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        checkBoxPwrBandTxMemory = new QCheckBox(split_operation_group_box_2);
        checkBoxPwrBandTxMemory->setObjectName(QString::fromUtf8("checkBoxPwrBandTxMemory"));

        horizontalLayout_13->addWidget(checkBoxPwrBandTxMemory);

        checkBoxPwrBandTuneMemory = new QCheckBox(split_operation_group_box_2);
        checkBoxPwrBandTuneMemory->setObjectName(QString::fromUtf8("checkBoxPwrBandTuneMemory"));

        horizontalLayout_13->addWidget(checkBoxPwrBandTuneMemory);


        verticalLayout_9->addWidget(split_operation_group_box_2);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);

        configuration_tabs->addTab(audio_tab, QString());
        tx_macros_tab = new QWidget();
        tx_macros_tab->setObjectName(QString::fromUtf8("tx_macros_tab"));
        gridLayout = new QGridLayout(tx_macros_tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        add_macro_push_button = new QPushButton(tx_macros_tab);
        add_macro_push_button->setObjectName(QString::fromUtf8("add_macro_push_button"));

        gridLayout->addWidget(add_macro_push_button, 0, 1, 1, 1);

        add_macro_line_edit = new QLineEdit(tx_macros_tab);
        add_macro_line_edit->setObjectName(QString::fromUtf8("add_macro_line_edit"));

        gridLayout->addWidget(add_macro_line_edit, 0, 0, 1, 1);

        delete_macro_push_button = new QPushButton(tx_macros_tab);
        delete_macro_push_button->setObjectName(QString::fromUtf8("delete_macro_push_button"));

        gridLayout->addWidget(delete_macro_push_button, 0, 2, 1, 1);

        macros_list_view = new QListView(tx_macros_tab);
        macros_list_view->setObjectName(QString::fromUtf8("macros_list_view"));
        macros_list_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        macros_list_view->setStyleSheet(QString::fromUtf8("QListView {\n"
"    show-decoration-selected: 1; /* make the selection span the entire width of the view */\n"
"}\n"
"\n"
"QListView::item:alternate {\n"
"    background: #EEEEEE;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    border: 1px solid #6a6ea9;\n"
"}\n"
"\n"
"QListView::item:selected:!active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #ABAFE5, stop: 1 #8588B2);\n"
"}\n"
"\n"
"QListView::item:selected:active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #6a6ea9, stop: 1 #888dd9);\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #FAFBFE, stop: 1 #DCDEF1);\n"
"}"));
        macros_list_view->setDragDropMode(QAbstractItemView::InternalMove);
        macros_list_view->setDefaultDropAction(Qt::MoveAction);
        macros_list_view->setAlternatingRowColors(true);
        macros_list_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        macros_list_view->setUniformItemSizes(true);

        gridLayout->addWidget(macros_list_view, 1, 0, 1, 3);

        configuration_tabs->addTab(tx_macros_tab, QString());
        reporting_tab = new QWidget();
        reporting_tab->setObjectName(QString::fromUtf8("reporting_tab"));
        verticalLayout_5 = new QVBoxLayout(reporting_tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        logging_group_box = new QGroupBox(reporting_tab);
        logging_group_box->setObjectName(QString::fromUtf8("logging_group_box"));
        gridLayout_14 = new QGridLayout(logging_group_box);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        prompt_to_log_check_box = new QCheckBox(logging_group_box);
        prompt_to_log_check_box->setObjectName(QString::fromUtf8("prompt_to_log_check_box"));

        gridLayout_14->addWidget(prompt_to_log_check_box, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        label_13 = new QLabel(logging_group_box);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_14->addWidget(label_13, 0, 2, 1, 1);

        report_in_comments_check_box = new QCheckBox(logging_group_box);
        report_in_comments_check_box->setObjectName(QString::fromUtf8("report_in_comments_check_box"));

        gridLayout_14->addWidget(report_in_comments_check_box, 3, 0, 1, 1);

        clear_DX_check_box = new QCheckBox(logging_group_box);
        clear_DX_check_box->setObjectName(QString::fromUtf8("clear_DX_check_box"));

        gridLayout_14->addWidget(clear_DX_check_box, 4, 0, 1, 2);

        log_as_RTTY_check_box = new QCheckBox(logging_group_box);
        log_as_RTTY_check_box->setObjectName(QString::fromUtf8("log_as_RTTY_check_box"));

        gridLayout_14->addWidget(log_as_RTTY_check_box, 2, 0, 1, 1);

        opCallEntry = new QLineEdit(logging_group_box);
        opCallEntry->setObjectName(QString::fromUtf8("opCallEntry"));

        gridLayout_14->addWidget(opCallEntry, 0, 3, 1, 1);

        cbAutoLog = new QCheckBox(logging_group_box);
        cbAutoLog->setObjectName(QString::fromUtf8("cbAutoLog"));

        gridLayout_14->addWidget(cbAutoLog, 1, 0, 1, 1);


        verticalLayout_5->addWidget(logging_group_box);

        line_8 = new QFrame(reporting_tab);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_8);

        network_group_box = new QGroupBox(reporting_tab);
        network_group_box->setObjectName(QString::fromUtf8("network_group_box"));
        horizontalLayout_22 = new QHBoxLayout(network_group_box);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        psk_reporter_check_box = new QCheckBox(network_group_box);
        psk_reporter_check_box->setObjectName(QString::fromUtf8("psk_reporter_check_box"));

        horizontalLayout_22->addWidget(psk_reporter_check_box);

        psk_reporter_tcpip_check_box = new QCheckBox(network_group_box);
        psk_reporter_tcpip_check_box->setObjectName(QString::fromUtf8("psk_reporter_tcpip_check_box"));

        horizontalLayout_22->addWidget(psk_reporter_tcpip_check_box);


        verticalLayout_5->addWidget(network_group_box);

        groupBox_4 = new QGroupBox(reporting_tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_16 = new QGridLayout(groupBox_4);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        udp_server_label = new QLabel(groupBox_4);
        udp_server_label->setObjectName(QString::fromUtf8("udp_server_label"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, udp_server_label);

        udp_server_line_edit = new QLineEdit(groupBox_4);
        udp_server_line_edit->setObjectName(QString::fromUtf8("udp_server_line_edit"));
        udp_server_line_edit->setInputMethodHints(Qt::ImhDigitsOnly);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, udp_server_line_edit);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_6);

        udp_server_port_spin_box = new QSpinBox(groupBox_4);
        udp_server_port_spin_box->setObjectName(QString::fromUtf8("udp_server_port_spin_box"));
        udp_server_port_spin_box->setMaximum(65534);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, udp_server_port_spin_box);

        udp_interfaces_label = new QLabel(groupBox_4);
        udp_interfaces_label->setObjectName(QString::fromUtf8("udp_interfaces_label"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, udp_interfaces_label);

        udp_interfaces_combo_box = new CheckableItemComboBox(groupBox_4);
        udp_interfaces_combo_box->setObjectName(QString::fromUtf8("udp_interfaces_combo_box"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, udp_interfaces_combo_box);

        udp_TTL_spin_box = new QSpinBox(groupBox_4);
        udp_TTL_spin_box->setObjectName(QString::fromUtf8("udp_TTL_spin_box"));
        udp_TTL_spin_box->setMaximum(255);
        udp_TTL_spin_box->setValue(1);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, udp_TTL_spin_box);

        udp_TTL_label = new QLabel(groupBox_4);
        udp_TTL_label->setObjectName(QString::fromUtf8("udp_TTL_label"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, udp_TTL_label);


        gridLayout_16->addLayout(formLayout_6, 0, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        accept_udp_requests_check_box = new QCheckBox(groupBox_4);
        accept_udp_requests_check_box->setObjectName(QString::fromUtf8("accept_udp_requests_check_box"));

        verticalLayout_11->addWidget(accept_udp_requests_check_box);

        udpWindowToFront = new QCheckBox(groupBox_4);
        udpWindowToFront->setObjectName(QString::fromUtf8("udpWindowToFront"));

        verticalLayout_11->addWidget(udpWindowToFront);

        udpWindowRestore = new QCheckBox(groupBox_4);
        udpWindowRestore->setObjectName(QString::fromUtf8("udpWindowRestore"));

        verticalLayout_11->addWidget(udpWindowRestore);


        gridLayout_16->addLayout(verticalLayout_11, 0, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_4);

        n1mm_group_box = new QGroupBox(reporting_tab);
        n1mm_group_box->setObjectName(QString::fromUtf8("n1mm_group_box"));
        formLayout_15 = new QFormLayout(n1mm_group_box);
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        enable_n1mm_broadcast_check_box = new QCheckBox(n1mm_group_box);
        enable_n1mm_broadcast_check_box->setObjectName(QString::fromUtf8("enable_n1mm_broadcast_check_box"));

        formLayout_15->setWidget(0, QFormLayout::SpanningRole, enable_n1mm_broadcast_check_box);

        n1mm_server_name_label = new QLabel(n1mm_group_box);
        n1mm_server_name_label->setObjectName(QString::fromUtf8("n1mm_server_name_label"));

        formLayout_15->setWidget(1, QFormLayout::LabelRole, n1mm_server_name_label);

        n1mm_server_name_line_edit = new QLineEdit(n1mm_group_box);
        n1mm_server_name_line_edit->setObjectName(QString::fromUtf8("n1mm_server_name_line_edit"));

        formLayout_15->setWidget(1, QFormLayout::FieldRole, n1mm_server_name_line_edit);

        n1mm_server_port_label = new QLabel(n1mm_group_box);
        n1mm_server_port_label->setObjectName(QString::fromUtf8("n1mm_server_port_label"));

        formLayout_15->setWidget(2, QFormLayout::LabelRole, n1mm_server_port_label);

        n1mm_server_port_spin_box = new QSpinBox(n1mm_group_box);
        n1mm_server_port_spin_box->setObjectName(QString::fromUtf8("n1mm_server_port_spin_box"));
        n1mm_server_port_spin_box->setMaximum(65534);

        formLayout_15->setWidget(2, QFormLayout::FieldRole, n1mm_server_port_spin_box);


        verticalLayout_5->addWidget(n1mm_group_box);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        configuration_tabs->addTab(reporting_tab, QString());
        frequencies_tab = new QWidget();
        frequencies_tab->setObjectName(QString::fromUtf8("frequencies_tab"));
        verticalLayout_10 = new QVBoxLayout(frequencies_tab);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        groupBox_3 = new QGroupBox(frequencies_tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_8);

        calibration_slope_ppm_spin_box = new QDoubleSpinBox(groupBox_3);
        calibration_slope_ppm_spin_box->setObjectName(QString::fromUtf8("calibration_slope_ppm_spin_box"));
        calibration_slope_ppm_spin_box->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        calibration_slope_ppm_spin_box->setDecimals(4);
        calibration_slope_ppm_spin_box->setMinimum(-999.999900000000025);
        calibration_slope_ppm_spin_box->setMaximum(999.999900000000025);
        calibration_slope_ppm_spin_box->setSingleStep(0.100000000000000);
        calibration_slope_ppm_spin_box->setValue(0.000000000000000);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, calibration_slope_ppm_spin_box);


        horizontalLayout_6->addLayout(formLayout_7);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, label_7);

        calibration_intercept_spin_box = new QDoubleSpinBox(groupBox_3);
        calibration_intercept_spin_box->setObjectName(QString::fromUtf8("calibration_intercept_spin_box"));
        calibration_intercept_spin_box->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        calibration_intercept_spin_box->setDecimals(2);
        calibration_intercept_spin_box->setMinimum(-99999.990000000005239);
        calibration_intercept_spin_box->setMaximum(99999.990000000005239);
        calibration_intercept_spin_box->setSingleStep(0.100000000000000);

        formLayout_14->setWidget(0, QFormLayout::FieldRole, calibration_intercept_spin_box);


        horizontalLayout_6->addLayout(formLayout_14);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_10->addWidget(groupBox_3);

        groupBox = new QGroupBox(frequencies_tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frequencies_table_view = new QTableView(groupBox);
        frequencies_table_view->setObjectName(QString::fromUtf8("frequencies_table_view"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frequencies_table_view->sizePolicy().hasHeightForWidth());
        frequencies_table_view->setSizePolicy(sizePolicy7);
        frequencies_table_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        frequencies_table_view->setDragDropMode(QAbstractItemView::DragOnly);
        frequencies_table_view->setAlternatingRowColors(true);
        frequencies_table_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        frequencies_table_view->setSortingEnabled(true);
        frequencies_table_view->horizontalHeader()->setStretchLastSection(true);
        frequencies_table_view->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(frequencies_table_view);


        verticalLayout_10->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frequencies_tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        stations_table_view = new QTableView(groupBox_2);
        stations_table_view->setObjectName(QString::fromUtf8("stations_table_view"));
        stations_table_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        stations_table_view->setAcceptDrops(true);
        stations_table_view->setDragEnabled(true);
        stations_table_view->setDragDropOverwriteMode(true);
        stations_table_view->setDragDropMode(QAbstractItemView::DragDrop);
        stations_table_view->setDefaultDropAction(Qt::MoveAction);
        stations_table_view->setAlternatingRowColors(true);
        stations_table_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        stations_table_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        stations_table_view->setSortingEnabled(true);
        stations_table_view->setWordWrap(true);
        stations_table_view->horizontalHeader()->setCascadingSectionResizes(true);
        stations_table_view->horizontalHeader()->setStretchLastSection(true);
        stations_table_view->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(stations_table_view);


        verticalLayout_10->addWidget(groupBox_2);

        configuration_tabs->addTab(frequencies_tab, QString());
        colors_tab = new QWidget();
        colors_tab->setObjectName(QString::fromUtf8("colors_tab"));
        verticalLayout_7 = new QVBoxLayout(colors_tab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_12 = new QGroupBox(colors_tab);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout_5 = new QGridLayout(groupBox_12);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);

        rescan_log_push_button = new QPushButton(groupBox_12);
        rescan_log_push_button->setObjectName(QString::fromUtf8("rescan_log_push_button"));

        horizontalLayout_15->addWidget(rescan_log_push_button);


        gridLayout_5->addLayout(horizontalLayout_15, 2, 1, 1, 1);

        reset_highlighting_to_defaults_push_button = new QPushButton(groupBox_12);
        reset_highlighting_to_defaults_push_button->setObjectName(QString::fromUtf8("reset_highlighting_to_defaults_push_button"));

        gridLayout_5->addWidget(reset_highlighting_to_defaults_push_button, 1, 0, 1, 2);

        include_WAE_check_box = new QCheckBox(groupBox_12);
        include_WAE_check_box->setObjectName(QString::fromUtf8("include_WAE_check_box"));

        gridLayout_5->addWidget(include_WAE_check_box, 4, 0, 1, 1);

        only_fields_check_box = new QCheckBox(groupBox_12);
        only_fields_check_box->setObjectName(QString::fromUtf8("only_fields_check_box"));

        gridLayout_5->addWidget(only_fields_check_box, 3, 0, 1, 1);

        highlighting_list_view = new DecodeHighlightingListView(groupBox_12);
        highlighting_list_view->setObjectName(QString::fromUtf8("highlighting_list_view"));
        sizePolicy4.setHeightForWidth(highlighting_list_view->sizePolicy().hasHeightForWidth());
        highlighting_list_view->setSizePolicy(sizePolicy4);
        highlighting_list_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        highlighting_list_view->setAcceptDrops(true);
        highlighting_list_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
        highlighting_list_view->setDragEnabled(true);
        highlighting_list_view->setDragDropMode(QAbstractItemView::InternalMove);
        highlighting_list_view->setDefaultDropAction(Qt::MoveAction);
        highlighting_list_view->setSelectionMode(QAbstractItemView::SingleSelection);
        highlighting_list_view->setResizeMode(QListView::Adjust);

        gridLayout_5->addWidget(highlighting_list_view, 0, 0, 1, 2);

        highlight_by_mode_check_box = new QCheckBox(groupBox_12);
        highlight_by_mode_check_box->setObjectName(QString::fromUtf8("highlight_by_mode_check_box"));

        gridLayout_5->addWidget(highlight_by_mode_check_box, 2, 0, 1, 1);

        highlight_73_check_box = new QCheckBox(groupBox_12);
        highlight_73_check_box->setObjectName(QString::fromUtf8("highlight_73_check_box"));

        gridLayout_5->addWidget(highlight_73_check_box, 5, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox_12);

        groupBox_11 = new QGroupBox(colors_tab);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        formLayout_18 = new QFormLayout(groupBox_11);
        formLayout_18->setObjectName(QString::fromUtf8("formLayout_18"));
        label_15 = new QLabel(groupBox_11);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_18->setWidget(1, QFormLayout::LabelRole, label_15);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        LotW_CSV_URL_line_edit = new QLineEdit(groupBox_11);
        LotW_CSV_URL_line_edit->setObjectName(QString::fromUtf8("LotW_CSV_URL_line_edit"));

        horizontalLayout_20->addWidget(LotW_CSV_URL_line_edit);

        LotW_CSV_fetch_push_button = new QPushButton(groupBox_11);
        LotW_CSV_fetch_push_button->setObjectName(QString::fromUtf8("LotW_CSV_fetch_push_button"));

        horizontalLayout_20->addWidget(LotW_CSV_fetch_push_button);


        formLayout_18->setLayout(1, QFormLayout::FieldRole, horizontalLayout_20);

        label_14 = new QLabel(groupBox_11);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_18->setWidget(2, QFormLayout::LabelRole, label_14);

        LotW_days_since_upload_spin_box = new QSpinBox(groupBox_11);
        LotW_days_since_upload_spin_box->setObjectName(QString::fromUtf8("LotW_days_since_upload_spin_box"));
        LotW_days_since_upload_spin_box->setMinimum(0);
        LotW_days_since_upload_spin_box->setMaximum(9999);
        LotW_days_since_upload_spin_box->setValue(365);

        formLayout_18->setWidget(2, QFormLayout::FieldRole, LotW_days_since_upload_spin_box);


        verticalLayout_7->addWidget(groupBox_11);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        configuration_tabs->addTab(colors_tab, QString());
        advanced_tab = new QWidget();
        advanced_tab->setObjectName(QString::fromUtf8("advanced_tab"));
        gridLayout_9 = new QGridLayout(advanced_tab);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox_5 = new QGroupBox(advanced_tab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        formLayout_10 = new QFormLayout(groupBox_5);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_3);

        sbDegrade = new QDoubleSpinBox(groupBox_5);
        sbDegrade->setObjectName(QString::fromUtf8("sbDegrade"));
        sbDegrade->setDecimals(1);
        sbDegrade->setSingleStep(1.000000000000000);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, sbDegrade);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_9);

        sbBandwidth = new QSpinBox(groupBox_5);
        sbBandwidth->setObjectName(QString::fromUtf8("sbBandwidth"));
        sbBandwidth->setMaximum(6000);
        sbBandwidth->setSingleStep(100);
        sbBandwidth->setValue(2500);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, sbBandwidth);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_10->setWidget(2, QFormLayout::LabelRole, label_11);

        sbTxDelay = new QDoubleSpinBox(groupBox_5);
        sbTxDelay->setObjectName(QString::fromUtf8("sbTxDelay"));
        sbTxDelay->setDecimals(1);
        sbTxDelay->setMinimum(0.000000000000000);
        sbTxDelay->setMaximum(0.500000000000000);
        sbTxDelay->setSingleStep(0.100000000000000);

        formLayout_10->setWidget(2, QFormLayout::FieldRole, sbTxDelay);

        groupBox_10 = new QGroupBox(groupBox_5);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setMinimumSize(QSize(0, 50));
        horizontalLayout_19 = new QHBoxLayout(groupBox_10);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        cbx2ToneSpacing = new QCheckBox(groupBox_10);
        cbx2ToneSpacing->setObjectName(QString::fromUtf8("cbx2ToneSpacing"));

        horizontalLayout_19->addWidget(cbx2ToneSpacing);

        cbx4ToneSpacing = new QCheckBox(groupBox_10);
        cbx4ToneSpacing->setObjectName(QString::fromUtf8("cbx4ToneSpacing"));
        cbx4ToneSpacing->setEnabled(true);

        horizontalLayout_19->addWidget(cbx4ToneSpacing);


        formLayout_10->setWidget(3, QFormLayout::SpanningRole, groupBox_10);

        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 50));
        horizontalLayout_16 = new QHBoxLayout(groupBox_7);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        rbLowSidelobes = new QRadioButton(groupBox_7);
        rbLowSidelobes->setObjectName(QString::fromUtf8("rbLowSidelobes"));
        rbLowSidelobes->setChecked(true);

        horizontalLayout_16->addWidget(rbLowSidelobes);

        rbMaxSensitivity = new QRadioButton(groupBox_7);
        rbMaxSensitivity->setObjectName(QString::fromUtf8("rbMaxSensitivity"));

        horizontalLayout_16->addWidget(rbMaxSensitivity);


        formLayout_10->setWidget(4, QFormLayout::SpanningRole, groupBox_7);


        gridLayout_9->addWidget(groupBox_5, 0, 1, 1, 1);

        groupBox_6 = new QGroupBox(advanced_tab);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        formLayout_11 = new QFormLayout(groupBox_6);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_2);

        sbNtrials = new QSpinBox(groupBox_6);
        sbNtrials->setObjectName(QString::fromUtf8("sbNtrials"));
        sbNtrials->setMinimum(0);
        sbNtrials->setMaximum(12);
        sbNtrials->setValue(6);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, sbNtrials);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_4);

        sbAggressive = new QSpinBox(groupBox_6);
        sbAggressive->setObjectName(QString::fromUtf8("sbAggressive"));
        sbAggressive->setMaximum(10);

        formLayout_11->setWidget(1, QFormLayout::FieldRole, sbAggressive);

        cbTwoPass = new QCheckBox(groupBox_6);
        cbTwoPass->setObjectName(QString::fromUtf8("cbTwoPass"));
        cbTwoPass->setChecked(true);

        formLayout_11->setWidget(2, QFormLayout::LabelRole, cbTwoPass);


        gridLayout_9->addWidget(groupBox_6, 0, 0, 1, 1);

        gbSpecialOpActivity = new QGroupBox(advanced_tab);
        gbSpecialOpActivity->setObjectName(QString::fromUtf8("gbSpecialOpActivity"));
        gbSpecialOpActivity->setCheckable(true);
        gbSpecialOpActivity->setChecked(false);
        gridLayout_15 = new QGridLayout(gbSpecialOpActivity);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        rbHound = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group = new QButtonGroup(configuration_dialog);
        special_op_activity_button_group->setObjectName(QString::fromUtf8("special_op_activity_button_group"));
        special_op_activity_button_group->addButton(rbHound);
        rbHound->setObjectName(QString::fromUtf8("rbHound"));
        rbHound->setChecked(true);

        gridLayout_15->addWidget(rbHound, 0, 3, 1, 1);

        rbNA_VHF_Contest = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbNA_VHF_Contest);
        rbNA_VHF_Contest->setObjectName(QString::fromUtf8("rbNA_VHF_Contest"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(rbNA_VHF_Contest->sizePolicy().hasHeightForWidth());
        rbNA_VHF_Contest->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(rbNA_VHF_Contest, 1, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        rbField_Day = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbField_Day);
        rbField_Day->setObjectName(QString::fromUtf8("rbField_Day"));

        horizontalLayout_17->addWidget(rbField_Day);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        labFD = new QLabel(gbSpecialOpActivity);
        labFD->setObjectName(QString::fromUtf8("labFD"));

        formLayout_16->setWidget(0, QFormLayout::LabelRole, labFD);

        Field_Day_Exchange = new QLineEdit(gbSpecialOpActivity);
        Field_Day_Exchange->setObjectName(QString::fromUtf8("Field_Day_Exchange"));
        Field_Day_Exchange->setMinimumSize(QSize(70, 0));
        Field_Day_Exchange->setAlignment(Qt::AlignCenter);

        formLayout_16->setWidget(0, QFormLayout::FieldRole, Field_Day_Exchange);


        horizontalLayout_17->addLayout(formLayout_16);

        horizontalLayout_17->setStretch(0, 2);
        horizontalLayout_17->setStretch(1, 1);
        horizontalLayout_17->setStretch(2, 1);

        gridLayout_15->addLayout(horizontalLayout_17, 1, 3, 1, 1);

        rbARRL_Digi = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbARRL_Digi);
        rbARRL_Digi->setObjectName(QString::fromUtf8("rbARRL_Digi"));

        gridLayout_15->addWidget(rbARRL_Digi, 3, 3, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_11, 0, 1, 3, 1);

        rbWW_DIGI = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbWW_DIGI);
        rbWW_DIGI->setObjectName(QString::fromUtf8("rbWW_DIGI"));
        rbWW_DIGI->setMinimumSize(QSize(0, 18));

        gridLayout_15->addWidget(rbWW_DIGI, 3, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        rbRTTY_Roundup = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbRTTY_Roundup);
        rbRTTY_Roundup->setObjectName(QString::fromUtf8("rbRTTY_Roundup"));

        horizontalLayout_18->addWidget(rbRTTY_Roundup);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_10);

        formLayout_17 = new QFormLayout();
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));
        labRTTY = new QLabel(gbSpecialOpActivity);
        labRTTY->setObjectName(QString::fromUtf8("labRTTY"));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, labRTTY);

        RTTY_Exchange = new QLineEdit(gbSpecialOpActivity);
        RTTY_Exchange->setObjectName(QString::fromUtf8("RTTY_Exchange"));
        RTTY_Exchange->setMinimumSize(QSize(70, 0));
        RTTY_Exchange->setAlignment(Qt::AlignCenter);

        formLayout_17->setWidget(0, QFormLayout::FieldRole, RTTY_Exchange);


        horizontalLayout_18->addLayout(formLayout_17);

        horizontalLayout_18->setStretch(0, 2);
        horizontalLayout_18->setStretch(1, 1);
        horizontalLayout_18->setStretch(2, 1);

        gridLayout_15->addLayout(horizontalLayout_18, 2, 3, 1, 1);

        rbFox = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbFox);
        rbFox->setObjectName(QString::fromUtf8("rbFox"));
        rbFox->setChecked(false);

        gridLayout_15->addWidget(rbFox, 0, 0, 1, 1);

        rbEU_VHF_Contest = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbEU_VHF_Contest);
        rbEU_VHF_Contest->setObjectName(QString::fromUtf8("rbEU_VHF_Contest"));
        sizePolicy8.setHeightForWidth(rbEU_VHF_Contest->sizePolicy().hasHeightForWidth());
        rbEU_VHF_Contest->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(rbEU_VHF_Contest, 2, 0, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        cbContestName = new QCheckBox(gbSpecialOpActivity);
        cbContestName->setObjectName(QString::fromUtf8("cbContestName"));

        horizontalLayout_24->addWidget(cbContestName);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_12);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        labCN = new QLabel(gbSpecialOpActivity);
        labCN->setObjectName(QString::fromUtf8("labCN"));

        horizontalLayout_25->addWidget(labCN);

        Contest_Name = new QLineEdit(gbSpecialOpActivity);
        Contest_Name->setObjectName(QString::fromUtf8("Contest_Name"));
        Contest_Name->setMaximumSize(QSize(70, 16777215));
        Contest_Name->setMaxLength(4);
        Contest_Name->setCursorPosition(2);
        Contest_Name->setAlignment(Qt::AlignCenter);

        horizontalLayout_25->addWidget(Contest_Name);


        horizontalLayout_24->addLayout(horizontalLayout_25);


        gridLayout_15->addLayout(horizontalLayout_24, 4, 3, 1, 1);

        gridLayout_15->setColumnStretch(0, 1);

        gridLayout_9->addWidget(gbSpecialOpActivity, 1, 0, 1, 2);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_8, 2, 0, 1, 2);

        configuration_tabs->addTab(advanced_tab, QString());

        verticalLayout_2->addWidget(configuration_tabs);

        configuration_dialog_button_box = new QDialogButtonBox(configuration_dialog);
        configuration_dialog_button_box->setObjectName(QString::fromUtf8("configuration_dialog_button_box"));
        configuration_dialog_button_box->setOrientation(Qt::Horizontal);
        configuration_dialog_button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(configuration_dialog_button_box);

#if QT_CONFIG(shortcut)
        callsign_label->setBuddy(callsign_line_edit);
        grid_label->setBuddy(grid_line_edit);
        label_12->setBuddy(region_combo_box);
        label_5->setBuddy(type_2_msg_gen_combo_box);
        label_10->setBuddy(tx_watchdog_spin_box);
        label->setBuddy(CW_id_interval_spin_box);
        CAT_port_label->setBuddy(CAT_port_combo_box);
        CAT_baud_label->setBuddy(CAT_serial_baud_combo_box);
        force_DTR_label->setBuddy(force_DTR_combo_box);
        force_RTS_label->setBuddy(force_RTS_combo_box);
        PTT_port_label->setBuddy(PTT_port_combo_box);
        rig_label->setBuddy(rig_combo_box);
        CAT_poll_interval_label->setBuddy(CAT_poll_interval_spin_box);
        sound_output_label->setBuddy(sound_output_combo_box);
        sound_input_label->setBuddy(sound_input_combo_box);
        save_path_label->setBuddy(save_path_select_push_button);
        azel_path_label->setBuddy(azel_path_select_push_button);
        label_13->setBuddy(opCallEntry);
        udp_server_label->setBuddy(udp_server_line_edit);
        label_6->setBuddy(udp_server_port_spin_box);
        udp_interfaces_label->setBuddy(udp_interfaces_combo_box);
        udp_TTL_label->setBuddy(udp_TTL_spin_box);
        n1mm_server_name_label->setBuddy(n1mm_server_name_line_edit);
        n1mm_server_port_label->setBuddy(n1mm_server_port_spin_box);
        label_8->setBuddy(calibration_slope_ppm_spin_box);
        label_7->setBuddy(calibration_intercept_spin_box);
        label_15->setBuddy(LotW_CSV_URL_line_edit);
        label_14->setBuddy(LotW_days_since_upload_spin_box);
        label_3->setBuddy(sbDegrade);
        label_9->setBuddy(sbBandwidth);
        label_11->setBuddy(sbTxDelay);
        label_2->setBuddy(sbNtrials);
        label_4->setBuddy(sbAggressive);
        labFD->setBuddy(Field_Day_Exchange);
        labRTTY->setBuddy(RTTY_Exchange);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(configuration_tabs, callsign_line_edit);
        QWidget::setTabOrder(callsign_line_edit, grid_line_edit);
        QWidget::setTabOrder(grid_line_edit, use_dynamic_grid);
        QWidget::setTabOrder(use_dynamic_grid, region_combo_box);
        QWidget::setTabOrder(region_combo_box, type_2_msg_gen_combo_box);
        QWidget::setTabOrder(type_2_msg_gen_combo_box, decodes_from_top_check_box);
        QWidget::setTabOrder(decodes_from_top_check_box, insert_blank_check_box);
        QWidget::setTabOrder(insert_blank_check_box, miles_check_box);
        QWidget::setTabOrder(miles_check_box, TX_messages_check_box);
        QWidget::setTabOrder(TX_messages_check_box, DXCC_check_box);
        QWidget::setTabOrder(DXCC_check_box, ppfx_check_box);
        QWidget::setTabOrder(ppfx_check_box, font_push_button);
        QWidget::setTabOrder(font_push_button, decoded_text_font_push_button);
        QWidget::setTabOrder(decoded_text_font_push_button, monitor_off_check_box);
        QWidget::setTabOrder(monitor_off_check_box, monitor_last_used_check_box);
        QWidget::setTabOrder(monitor_last_used_check_box, quick_call_check_box);
        QWidget::setTabOrder(quick_call_check_box, disable_TX_on_73_check_box);
        QWidget::setTabOrder(disable_TX_on_73_check_box, force_call_1st_check_box);
        QWidget::setTabOrder(force_call_1st_check_box, alternate_bindings_check_box);
        QWidget::setTabOrder(alternate_bindings_check_box, CW_id_after_73_check_box);
        QWidget::setTabOrder(CW_id_after_73_check_box, enable_VHF_features_check_box);
        QWidget::setTabOrder(enable_VHF_features_check_box, tx_QSY_check_box);
        QWidget::setTabOrder(tx_QSY_check_box, single_decode_check_box);
        QWidget::setTabOrder(single_decode_check_box, decode_at_52s_check_box);
        QWidget::setTabOrder(decode_at_52s_check_box, tx_watchdog_spin_box);
        QWidget::setTabOrder(tx_watchdog_spin_box, CW_id_interval_spin_box);
        QWidget::setTabOrder(CW_id_interval_spin_box, rig_combo_box);
        QWidget::setTabOrder(rig_combo_box, CAT_poll_interval_spin_box);
        QWidget::setTabOrder(CAT_poll_interval_spin_box, CAT_port_combo_box);
        QWidget::setTabOrder(CAT_port_combo_box, CAT_serial_baud_combo_box);
        QWidget::setTabOrder(CAT_serial_baud_combo_box, CAT_default_bit_radio_button);
        QWidget::setTabOrder(CAT_default_bit_radio_button, CAT_7_bit_radio_button);
        QWidget::setTabOrder(CAT_7_bit_radio_button, CAT_8_bit_radio_button);
        QWidget::setTabOrder(CAT_8_bit_radio_button, CAT_default_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_default_stop_bit_radio_button, CAT_one_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_one_stop_bit_radio_button, CAT_two_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_two_stop_bit_radio_button, CAT_handshake_default_radio_button);
        QWidget::setTabOrder(CAT_handshake_default_radio_button, CAT_handshake_xon_radio_button);
        QWidget::setTabOrder(CAT_handshake_xon_radio_button, CAT_handshake_none_radio_button);
        QWidget::setTabOrder(CAT_handshake_none_radio_button, CAT_handshake_hardware_radio_button);
        QWidget::setTabOrder(CAT_handshake_hardware_radio_button, force_DTR_combo_box);
        QWidget::setTabOrder(force_DTR_combo_box, force_RTS_combo_box);
        QWidget::setTabOrder(force_RTS_combo_box, PTT_VOX_radio_button);
        QWidget::setTabOrder(PTT_VOX_radio_button, PTT_CAT_radio_button);
        QWidget::setTabOrder(PTT_CAT_radio_button, PTT_DTR_radio_button);
        QWidget::setTabOrder(PTT_DTR_radio_button, PTT_RTS_radio_button);
        QWidget::setTabOrder(PTT_RTS_radio_button, PTT_port_combo_box);
        QWidget::setTabOrder(PTT_port_combo_box, TX_source_data_radio_button);
        QWidget::setTabOrder(TX_source_data_radio_button, TX_source_mic_radio_button);
        QWidget::setTabOrder(TX_source_mic_radio_button, mode_none_radio_button);
        QWidget::setTabOrder(mode_none_radio_button, mode_USB_radio_button);
        QWidget::setTabOrder(mode_USB_radio_button, mode_data_radio_button);
        QWidget::setTabOrder(mode_data_radio_button, split_none_radio_button);
        QWidget::setTabOrder(split_none_radio_button, split_rig_radio_button);
        QWidget::setTabOrder(split_rig_radio_button, split_emulate_radio_button);
        QWidget::setTabOrder(split_emulate_radio_button, test_CAT_push_button);
        QWidget::setTabOrder(test_CAT_push_button, test_PTT_push_button);
        QWidget::setTabOrder(test_PTT_push_button, sound_input_combo_box);
        QWidget::setTabOrder(sound_input_combo_box, sound_input_channel_combo_box);
        QWidget::setTabOrder(sound_input_channel_combo_box, sound_output_combo_box);
        QWidget::setTabOrder(sound_output_combo_box, sound_output_channel_combo_box);
        QWidget::setTabOrder(sound_output_channel_combo_box, save_path_select_push_button);
        QWidget::setTabOrder(save_path_select_push_button, azel_path_select_push_button);
        QWidget::setTabOrder(azel_path_select_push_button, checkBoxPwrBandTxMemory);
        QWidget::setTabOrder(checkBoxPwrBandTxMemory, checkBoxPwrBandTuneMemory);
        QWidget::setTabOrder(checkBoxPwrBandTuneMemory, add_macro_line_edit);
        QWidget::setTabOrder(add_macro_line_edit, add_macro_push_button);
        QWidget::setTabOrder(add_macro_push_button, delete_macro_push_button);
        QWidget::setTabOrder(delete_macro_push_button, macros_list_view);
        QWidget::setTabOrder(macros_list_view, prompt_to_log_check_box);
        QWidget::setTabOrder(prompt_to_log_check_box, cbAutoLog);
        QWidget::setTabOrder(cbAutoLog, log_as_RTTY_check_box);
        QWidget::setTabOrder(log_as_RTTY_check_box, report_in_comments_check_box);
        QWidget::setTabOrder(report_in_comments_check_box, clear_DX_check_box);
        QWidget::setTabOrder(clear_DX_check_box, opCallEntry);
        QWidget::setTabOrder(opCallEntry, psk_reporter_check_box);
        QWidget::setTabOrder(psk_reporter_check_box, psk_reporter_tcpip_check_box);
        QWidget::setTabOrder(psk_reporter_tcpip_check_box, udp_server_line_edit);
        QWidget::setTabOrder(udp_server_line_edit, udp_server_port_spin_box);
        QWidget::setTabOrder(udp_server_port_spin_box, udp_interfaces_combo_box);
        QWidget::setTabOrder(udp_interfaces_combo_box, udp_TTL_spin_box);
        QWidget::setTabOrder(udp_TTL_spin_box, accept_udp_requests_check_box);
        QWidget::setTabOrder(accept_udp_requests_check_box, udpWindowToFront);
        QWidget::setTabOrder(udpWindowToFront, udpWindowRestore);
        QWidget::setTabOrder(udpWindowRestore, enable_n1mm_broadcast_check_box);
        QWidget::setTabOrder(enable_n1mm_broadcast_check_box, n1mm_server_name_line_edit);
        QWidget::setTabOrder(n1mm_server_name_line_edit, n1mm_server_port_spin_box);
        QWidget::setTabOrder(n1mm_server_port_spin_box, calibration_slope_ppm_spin_box);
        QWidget::setTabOrder(calibration_slope_ppm_spin_box, calibration_intercept_spin_box);
        QWidget::setTabOrder(calibration_intercept_spin_box, frequencies_table_view);
        QWidget::setTabOrder(frequencies_table_view, stations_table_view);
        QWidget::setTabOrder(stations_table_view, highlighting_list_view);
        QWidget::setTabOrder(highlighting_list_view, reset_highlighting_to_defaults_push_button);
        QWidget::setTabOrder(reset_highlighting_to_defaults_push_button, highlight_by_mode_check_box);
        QWidget::setTabOrder(highlight_by_mode_check_box, only_fields_check_box);
        QWidget::setTabOrder(only_fields_check_box, include_WAE_check_box);
        QWidget::setTabOrder(include_WAE_check_box, rescan_log_push_button);
        QWidget::setTabOrder(rescan_log_push_button, LotW_CSV_URL_line_edit);
        QWidget::setTabOrder(LotW_CSV_URL_line_edit, LotW_CSV_fetch_push_button);
        QWidget::setTabOrder(LotW_CSV_fetch_push_button, LotW_days_since_upload_spin_box);
        QWidget::setTabOrder(LotW_days_since_upload_spin_box, sbNtrials);
        QWidget::setTabOrder(sbNtrials, sbAggressive);
        QWidget::setTabOrder(sbAggressive, cbTwoPass);
        QWidget::setTabOrder(cbTwoPass, sbDegrade);
        QWidget::setTabOrder(sbDegrade, sbBandwidth);
        QWidget::setTabOrder(sbBandwidth, sbTxDelay);
        QWidget::setTabOrder(sbTxDelay, cbx2ToneSpacing);
        QWidget::setTabOrder(cbx2ToneSpacing, cbx4ToneSpacing);
        QWidget::setTabOrder(cbx4ToneSpacing, rbLowSidelobes);
        QWidget::setTabOrder(rbLowSidelobes, rbMaxSensitivity);
        QWidget::setTabOrder(rbMaxSensitivity, gbSpecialOpActivity);
        QWidget::setTabOrder(gbSpecialOpActivity, rbFox);
        QWidget::setTabOrder(rbFox, rbHound);
        QWidget::setTabOrder(rbHound, rbNA_VHF_Contest);
        QWidget::setTabOrder(rbNA_VHF_Contest, rbField_Day);
        QWidget::setTabOrder(rbField_Day, rbEU_VHF_Contest);
        QWidget::setTabOrder(rbEU_VHF_Contest, rbRTTY_Roundup);
        QWidget::setTabOrder(rbRTTY_Roundup, rbWW_DIGI);
        QWidget::setTabOrder(rbWW_DIGI, Field_Day_Exchange);
        QWidget::setTabOrder(Field_Day_Exchange, RTTY_Exchange);

        retranslateUi(configuration_dialog);
        QObject::connect(configuration_dialog_button_box, SIGNAL(accepted()), configuration_dialog, SLOT(accept()));
        QObject::connect(configuration_dialog_button_box, SIGNAL(rejected()), configuration_dialog, SLOT(reject()));
        QObject::connect(add_macro_push_button, SIGNAL(clicked()), add_macro_line_edit, SLOT(setFocus()));
        QObject::connect(add_macro_line_edit, SIGNAL(returnPressed()), add_macro_push_button, SLOT(setFocus()));

        configuration_tabs->setCurrentIndex(0);
        type_2_msg_gen_combo_box->setCurrentIndex(1);
        CAT_serial_baud_combo_box->setCurrentIndex(0);
        PTT_port_combo_box->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(configuration_dialog);
    } // setupUi

    void retranslateUi(QDialog *configuration_dialog)
    {
        configuration_dialog->setWindowTitle(QCoreApplication::translate("configuration_dialog", "Settings", nullptr));
        station_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Station Details", nullptr));
        callsign_label->setText(QCoreApplication::translate("configuration_dialog", "My C&all:", nullptr));
#if QT_CONFIG(tooltip)
        callsign_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "Station callsign.", nullptr));
#endif // QT_CONFIG(tooltip)
        grid_label->setText(QCoreApplication::translate("configuration_dialog", "M&y Grid:", nullptr));
#if QT_CONFIG(tooltip)
        grid_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Maidenhead locator, preferably 6 characters.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        use_dynamic_grid->setToolTip(QCoreApplication::translate("configuration_dialog", "Check to allow grid changes from external programs", nullptr));
#endif // QT_CONFIG(tooltip)
        use_dynamic_grid->setText(QCoreApplication::translate("configuration_dialog", "AutoGrid", nullptr));
        label_12->setText(QCoreApplication::translate("configuration_dialog", "IARU Region:", nullptr));
#if QT_CONFIG(tooltip)
        region_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Select your IARU region.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("configuration_dialog", "Message generation for type 2 compound callsign holders:", nullptr));
        type_2_msg_gen_combo_box->setItemText(0, QCoreApplication::translate("configuration_dialog", "Full call in Tx1", nullptr));
        type_2_msg_gen_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "Full call in Tx3", nullptr));
        type_2_msg_gen_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Full call in Tx5 only", nullptr));

#if QT_CONFIG(tooltip)
        type_2_msg_gen_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Type 2 compound callsigns are those with prefixes or suffixes not included in the allowed shortlist (See Help-&gt;Add-on prefixes and suffixes).</p><p>This option determines which generated messages should contain your full type 2 compound call sign rather than your base callsign. It only applies if you have a type 2 compound callsign.</p><p>This option controls the way the messages that are used to answer CQ calls are generated. Generated messages 6 (CQ) and 5 (73) will always contain your full callsign. The JT65 and JT9 protocols allow for some standard messages with your full call at the expense of another piece of information such as the DX call or your locator.</p><p>Choosing message 1 omits the DX callsign which may be an issue when replying to CQ calls. Choosing message 3 also omits the DX callsign and many versions of this and other software will not extract the report. Choosing neither means that your full callsign only goes in your message 5 (73) so your QSO partner may log the "
                        "wrong callsign.</p><p>None of these options are perfect, message 3 is usually best but be aware your QSO partner may not log the report you send them.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        display_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Display", nullptr));
#if QT_CONFIG(tooltip)
        font_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Set the font characteristics for the application.", nullptr));
#endif // QT_CONFIG(tooltip)
        font_push_button->setText(QCoreApplication::translate("configuration_dialog", "Font...", nullptr));
#if QT_CONFIG(tooltip)
        decoded_text_font_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Set the font characteristics for the Band Activity and Rx Frequency areas.", nullptr));
#endif // QT_CONFIG(tooltip)
        decoded_text_font_push_button->setText(QCoreApplication::translate("configuration_dialog", "Decoded Text Font...", nullptr));
#if QT_CONFIG(tooltip)
        insert_blank_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Include a separator line between periods in the band activity window.", nullptr));
#endif // QT_CONFIG(tooltip)
        insert_blank_check_box->setText(QCoreApplication::translate("configuration_dialog", "&Blank line between decoding periods", nullptr));
#if QT_CONFIG(tooltip)
        miles_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Show distance to DX station in miles rather than kilometers.", nullptr));
#endif // QT_CONFIG(tooltip)
        miles_check_box->setText(QCoreApplication::translate("configuration_dialog", "Display dista&nce in miles", nullptr));
        cbHighlightDXgrid->setText(QCoreApplication::translate("configuration_dialog", "Highlight DX Grid in message", nullptr));
        ppfx_check_box->setText(QCoreApplication::translate("configuration_dialog", "Show principal prefix instead of country name", nullptr));
        cbHighlightDXcall->setText(QCoreApplication::translate("configuration_dialog", "Highlight DX Call in message", nullptr));
#if QT_CONFIG(tooltip)
        decodes_from_top_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check to have decodes for a new period start at the top of the Band Activity window and not scroll off the top when the window is full.</p><p>This is to aid selecting decodes to double-click while decoding is still in progress. Use the Band Activity vertical scroll bar to reveal decodes past the bottom of the window.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        decodes_from_top_check_box->setText(QCoreApplication::translate("configuration_dialog", "Start new period decodes at top", nullptr));
#if QT_CONFIG(tooltip)
        TX_messages_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Show outgoing transmitted messages in the Rx frequency window.", nullptr));
#endif // QT_CONFIG(tooltip)
        TX_messages_check_box->setText(QCoreApplication::translate("configuration_dialog", "&Tx messages to Rx frequency window", nullptr));
#if QT_CONFIG(tooltip)
        DXCC_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Show if decoded stations are new DXCC entities or worked before.", nullptr));
#endif // QT_CONFIG(tooltip)
        DXCC_check_box->setText(QCoreApplication::translate("configuration_dialog", "Show &DXCC, grid, and worked-before status", nullptr));
        behaviour_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Behavior", nullptr));
        decode_at_52s_check_box->setText(QCoreApplication::translate("configuration_dialog", "Decode after EME delay", nullptr));
        label_10->setText(QCoreApplication::translate("configuration_dialog", "Tx watchdog:", nullptr));
#if QT_CONFIG(tooltip)
        tx_watchdog_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of minutes before unattended transmissions are aborted</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tx_watchdog_spin_box->setSpecialValueText(QCoreApplication::translate("configuration_dialog", "Disabled", nullptr));
        tx_watchdog_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " minutes", nullptr));
        tx_watchdog_spin_box->setPrefix(QString());
        enable_VHF_features_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable VHF and submode features", nullptr));
        single_decode_check_box->setText(QCoreApplication::translate("configuration_dialog", "Single decode", nullptr));
#if QT_CONFIG(tooltip)
        tx_QSY_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Some rigs are not able to process CAT commands while transmitting. This means that if you are operating in split mode you may have to uncheck this option.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tx_QSY_check_box->setText(QCoreApplication::translate("configuration_dialog", "Allow Tx frequency changes while transmitting", nullptr));
#if QT_CONFIG(tooltip)
        monitor_off_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Don't start decoding until the monitor button is clicked.", nullptr));
#endif // QT_CONFIG(tooltip)
        monitor_off_check_box->setText(QCoreApplication::translate("configuration_dialog", "Mon&itor off at startup", nullptr));
#if QT_CONFIG(tooltip)
        monitor_last_used_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check this if you wish to automatically return to the last monitored frequency when monitor is enabled, leave it unchecked if you wish to have the current rig frequency maintained.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        monitor_last_used_check_box->setText(QCoreApplication::translate("configuration_dialog", "Monitor returns to last used frequency", nullptr));
        alternate_bindings_check_box->setText(QCoreApplication::translate("configuration_dialog", "Alternate F1-F6 bindings", nullptr));
#if QT_CONFIG(tooltip)
        disable_TX_on_73_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Turns off automatic transmissions after sending a 73 or any other free\n"
"text message.", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_TX_on_73_check_box->setText(QCoreApplication::translate("configuration_dialog", "Di&sable Tx after sending 73", nullptr));
#if QT_CONFIG(tooltip)
        CW_id_after_73_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Send a CW ID after every 73 or free text message.", nullptr));
#endif // QT_CONFIG(tooltip)
        CW_id_after_73_check_box->setText(QCoreApplication::translate("configuration_dialog", "CW ID a&fter 73", nullptr));
        label->setText(QCoreApplication::translate("configuration_dialog", "Periodic CW ID Inter&val:", nullptr));
#if QT_CONFIG(tooltip)
        CW_id_interval_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Send a CW ID periodically every few minutes.\n"
"This might be required under your countries licence regulations.\n"
"It will not interfere with other users as it is always sent in the\n"
"quiet period when decoding is done.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        quick_call_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Automatic transmission mode.", nullptr));
#endif // QT_CONFIG(tooltip)
        quick_call_check_box->setText(QCoreApplication::translate("configuration_dialog", "Doubl&e-click on call sets Tx enable", nullptr));
        force_call_1st_check_box->setText(QCoreApplication::translate("configuration_dialog", "Calling CQ forces Call 1st", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(general_tab), QCoreApplication::translate("configuration_dialog", "Genera&l", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(general_tab), QCoreApplication::translate("configuration_dialog", "General station details and settings.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        CAT_control_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Settings that control your CAT interface.", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_control_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "CAT Control", nullptr));
        CAT_port_label->setText(QCoreApplication::translate("configuration_dialog", "Port:", nullptr));
#if QT_CONFIG(tooltip)
        CAT_port_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Serial port used for CAT control.", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_port_combo_box->setCurrentText(QString());
#if QT_CONFIG(accessibility)
        CAT_serial_port_parameters_group_box->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Serial Port Parameters", nullptr));
#endif // QT_CONFIG(accessibility)
        CAT_serial_port_parameters_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Serial Port Parameters", nullptr));
        CAT_baud_label->setText(QCoreApplication::translate("configuration_dialog", "Baud Rate:", nullptr));
        CAT_serial_baud_combo_box->setItemText(0, QCoreApplication::translate("configuration_dialog", "1200", nullptr));
        CAT_serial_baud_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "2400", nullptr));
        CAT_serial_baud_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "4800", nullptr));
        CAT_serial_baud_combo_box->setItemText(3, QCoreApplication::translate("configuration_dialog", "9600", nullptr));
        CAT_serial_baud_combo_box->setItemText(4, QCoreApplication::translate("configuration_dialog", "19200", nullptr));
        CAT_serial_baud_combo_box->setItemText(5, QCoreApplication::translate("configuration_dialog", "38400", nullptr));
        CAT_serial_baud_combo_box->setItemText(6, QCoreApplication::translate("configuration_dialog", "57600", nullptr));
        CAT_serial_baud_combo_box->setItemText(7, QCoreApplication::translate("configuration_dialog", "115200", nullptr));

#if QT_CONFIG(tooltip)
        CAT_serial_baud_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Serial port data rate which must match the setting of your radio.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        CAT_data_bits_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of data bits used to communicate with your radio's CAT interface (usually eight).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        CAT_data_bits_group_box->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Data bits", nullptr));
#endif // QT_CONFIG(accessibility)
        CAT_data_bits_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Data Bits", nullptr));
        CAT_default_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "D&efault", nullptr));
        CAT_7_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Se&ven", nullptr));
        CAT_8_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "E&ight", nullptr));
#if QT_CONFIG(tooltip)
        CAT_stop_bits_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Number of stop bits used when communicating with your radio's CAT interface</p><p>(consult you radio's manual for details).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        CAT_stop_bits_group_box->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Stop bits", nullptr));
#endif // QT_CONFIG(accessibility)
        CAT_stop_bits_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Stop Bits", nullptr));
        CAT_default_stop_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Default", nullptr));
        CAT_one_stop_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "On&e", nullptr));
        CAT_two_stop_bit_radio_button->setText(QCoreApplication::translate("configuration_dialog", "T&wo", nullptr));
#if QT_CONFIG(tooltip)
        CAT_handshake_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Flow control protocol used between this computer and your radio's CAT interface (usually &quot;None&quot; but some require &quot;Hardware&quot;).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        CAT_handshake_group_box->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Handshake", nullptr));
#endif // QT_CONFIG(accessibility)
        CAT_handshake_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Handshake", nullptr));
        CAT_handshake_default_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Default", nullptr));
        CAT_handshake_none_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&None", nullptr));
#if QT_CONFIG(tooltip)
        CAT_handshake_xon_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Software flow control (very rare on CAT interfaces).", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_handshake_xon_radio_button->setText(QCoreApplication::translate("configuration_dialog", "XON/XOFF", nullptr));
#if QT_CONFIG(tooltip)
        CAT_handshake_hardware_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Flow control using the RTS and CTS RS-232 control lines\n"
"not often used but some radios have it as an option and \n"
"a few, particularly some Kenwood rigs, require it).", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_handshake_hardware_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&Hardware", nullptr));
#if QT_CONFIG(tooltip)
        CAT_control_lines_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Special control of CAT port control lines.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        CAT_control_lines_group_box->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Force Control Lines", nullptr));
#endif // QT_CONFIG(accessibility)
        CAT_control_lines_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Force Control Lines", nullptr));
        force_DTR_combo_box->setItemText(0, QString());
        force_DTR_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "High", nullptr));
        force_DTR_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Low", nullptr));

        force_DTR_label->setText(QCoreApplication::translate("configuration_dialog", "DTR:", nullptr));
        force_RTS_label->setText(QCoreApplication::translate("configuration_dialog", "RTS:", nullptr));
        force_RTS_combo_box->setItemText(0, QString());
        force_RTS_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "High", nullptr));
        force_RTS_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Low", nullptr));

#if QT_CONFIG(tooltip)
        PTT_method_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "How this program activates the PTT on your radio?", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_method_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "PTT Method", nullptr));
#if QT_CONFIG(tooltip)
        PTT_VOX_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>No PTT activation, instead the radio's automatic VOX is used to key the transmitter.</p><p>Use this if you have no radio interface hardware.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_VOX_radio_button->setText(QCoreApplication::translate("configuration_dialog", "VO&X", nullptr));
#if QT_CONFIG(tooltip)
        PTT_DTR_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Use the RS-232 DTR control line to toggle your radio's PTT, requires hardware to interface the line.</p><p>Some commercial interface units also use this method.</p><p>The DTR control line of the CAT serial port may be used for this or a DTR control line on a different serial port may be used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_DTR_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&DTR", nullptr));
#if QT_CONFIG(tooltip)
        PTT_CAT_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Some radios support PTT via CAT commands,\n"
"use this option if your radio supports it and you have no\n"
"other hardware interface for PTT.", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_CAT_radio_button->setText(QCoreApplication::translate("configuration_dialog", "C&AT", nullptr));
#if QT_CONFIG(tooltip)
        PTT_RTS_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Use the RS-232 RTS control line to toggle your radio's PTT, requires hardware to interface the line.</p><p>Some commercial interface units also use this method.</p><p>The RTS control line of the CAT serial port may be used for this or a RTS control line on a different serial port may be used. Note that this option is not available on the CAT serial port when hardware flow control is used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_RTS_radio_button->setText(QCoreApplication::translate("configuration_dialog", "R&TS", nullptr));
        PTT_port_label->setText(QCoreApplication::translate("configuration_dialog", "Port:", nullptr));
#if QT_CONFIG(tooltip)
        PTT_port_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Select the RS-232 serial port utilised for PTT control, this option is available when DTR or RTS is selected above as a transmit method.</p><p>This port can be the same one as the one used for CAT control.</p><p>For some interface types the special value CAT may be chosen, this is used for non-serial CAT interfaces that can control serial port control lines remotely (OmniRig for example).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        PTT_port_combo_box->setCurrentText(QString());
#if QT_CONFIG(tooltip)
        mode_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Modulation mode selected on radio.", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Mode", nullptr));
#if QT_CONFIG(tooltip)
        mode_USB_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>USB is usually the correct modulation mode,</p><p>unless the radio has a special data or packet mode setting</p><p>for AFSK operation.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_USB_radio_button->setText(QCoreApplication::translate("configuration_dialog", "US&B", nullptr));
#if QT_CONFIG(tooltip)
        mode_none_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Don't allow the program to set the radio mode\n"
"(not recommended but use if the wrong mode\n"
"or bandwidth is selected).", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_none_radio_button->setText(QCoreApplication::translate("configuration_dialog", "None", nullptr));
#if QT_CONFIG(tooltip)
        mode_data_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "If this is available then it is usually the correct mode for this program.", nullptr));
#endif // QT_CONFIG(tooltip)
        mode_data_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Data/P&kt", nullptr));
#if QT_CONFIG(tooltip)
        TX_audio_source_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Some radios can select the audio input using a CAT command,\n"
"this setting allows you to select which audio input will be used\n"
"(if it is available then generally the Rear/Data option is best).", nullptr));
#endif // QT_CONFIG(tooltip)
        TX_audio_source_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Transmit Audio Source", nullptr));
        TX_source_data_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Rear&/Data", nullptr));
        TX_source_mic_radio_button->setText(QCoreApplication::translate("configuration_dialog", "&Front/Mic", nullptr));
        rig_label->setText(QCoreApplication::translate("configuration_dialog", "Rig:", nullptr));
        CAT_poll_interval_label->setText(QCoreApplication::translate("configuration_dialog", "Poll Interval:", nullptr));
#if QT_CONFIG(tooltip)
        CAT_poll_interval_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Interval to poll rig for status. Longer intervals will mean that changes to the rig will take longer to be detected.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        CAT_poll_interval_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " s", nullptr));
#if QT_CONFIG(tooltip)
        test_CAT_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Attempt to connect to the radio with these settings.</p><p>The button will turn green if the connection is successful or red if there is a problem.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        test_CAT_push_button->setText(QCoreApplication::translate("configuration_dialog", "Test CAT", nullptr));
#if QT_CONFIG(tooltip)
        test_PTT_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Attempt to activate the transmitter.\n"
"Click again to deactivate. Normally no power should be\n"
"output since there is no audio being generated at this time.\n"
"Check that any Tx indication on your radio and/or your\n"
"radio interface behave as expected.", nullptr));
#endif // QT_CONFIG(tooltip)
        test_PTT_push_button->setText(QCoreApplication::translate("configuration_dialog", "Test PTT", nullptr));
        split_operation_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Split Operation", nullptr));
#if QT_CONFIG(tooltip)
        split_emulate_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Use only VFO A for split operation (the program temporarily changes the QRG of your rig during transmission).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        split_emulate_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Fake It", nullptr));
#if QT_CONFIG(tooltip)
        split_rig_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Use VFO A+B for split operation (works with many rigs, but requires the use of both VFOs).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        split_rig_radio_button->setText(QCoreApplication::translate("configuration_dialog", "Rig", nullptr));
#if QT_CONFIG(tooltip)
        split_none_radio_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Don't use split (not recommended).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        split_none_radio_button->setText(QCoreApplication::translate("configuration_dialog", "None", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(radio_tab), QCoreApplication::translate("configuration_dialog", "&Radio", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(radio_tab), QCoreApplication::translate("configuration_dialog", "Radio interface configuration settings.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        soundcard_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Souncard", nullptr));
#endif // QT_CONFIG(tooltip)
        soundcard_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Soundcard", nullptr));
#if QT_CONFIG(tooltip)
        sound_output_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the audio CODEC to use for transmitting.\n"
"If this is your default device for system sounds then\n"
"ensure that all system sounds are disabled otherwise\n"
"you will broadcast any systems sounds generated during\n"
"transmitting periods.", nullptr));
#endif // QT_CONFIG(tooltip)
        sound_input_channel_combo_box->setItemText(0, QCoreApplication::translate("configuration_dialog", "Mono", nullptr));
        sound_input_channel_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "Left", nullptr));
        sound_input_channel_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Right", nullptr));
        sound_input_channel_combo_box->setItemText(3, QCoreApplication::translate("configuration_dialog", "Both", nullptr));

#if QT_CONFIG(tooltip)
        sound_input_channel_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the channel to use for receiving.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sound_input_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the audio CODEC to use for receiving.", nullptr));
#endif // QT_CONFIG(tooltip)
        sound_output_label->setText(QCoreApplication::translate("configuration_dialog", "Ou&tput:", nullptr));
        sound_output_channel_combo_box->setItemText(0, QCoreApplication::translate("configuration_dialog", "Mono", nullptr));
        sound_output_channel_combo_box->setItemText(1, QCoreApplication::translate("configuration_dialog", "Left", nullptr));
        sound_output_channel_combo_box->setItemText(2, QCoreApplication::translate("configuration_dialog", "Right", nullptr));
        sound_output_channel_combo_box->setItemText(3, QCoreApplication::translate("configuration_dialog", "Both", nullptr));

#if QT_CONFIG(tooltip)
        sound_output_channel_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Select the audio channel used for transmission.\n"
"Unless you have multiple radios connected on different\n"
"channels; then you will usually want to select mono or\n"
"both here.", nullptr));
#endif // QT_CONFIG(tooltip)
        sound_input_label->setText(QCoreApplication::translate("configuration_dialog", "&Input:", nullptr));
#if QT_CONFIG(tooltip)
        save_path_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Save Directory", nullptr));
#endif // QT_CONFIG(tooltip)
        save_path_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Save Directory", nullptr));
        save_path_label->setText(QCoreApplication::translate("configuration_dialog", "Loc&ation:", nullptr));
#if QT_CONFIG(tooltip)
        save_path_display_label->setToolTip(QCoreApplication::translate("configuration_dialog", "Path to which .WAV files are saved.", nullptr));
#endif // QT_CONFIG(tooltip)
        save_path_display_label->setText(QCoreApplication::translate("configuration_dialog", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        save_path_select_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "Click to select a different save directory for .WAV files.", nullptr));
#endif // QT_CONFIG(tooltip)
        save_path_select_push_button->setText(QCoreApplication::translate("configuration_dialog", "S&elect", nullptr));
#if QT_CONFIG(tooltip)
        azel_path_group_box->setToolTip(QCoreApplication::translate("configuration_dialog", "AzEl Directory", nullptr));
#endif // QT_CONFIG(tooltip)
        azel_path_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "AzEl Directory", nullptr));
        azel_path_label->setText(QCoreApplication::translate("configuration_dialog", "Location:", nullptr));
        azel_path_display_label->setText(QCoreApplication::translate("configuration_dialog", "TextLabel", nullptr));
        azel_path_select_push_button->setText(QCoreApplication::translate("configuration_dialog", "Select", nullptr));
#if QT_CONFIG(tooltip)
        split_operation_group_box_2->setToolTip(QCoreApplication::translate("configuration_dialog", "Power Memory By Band", nullptr));
#endif // QT_CONFIG(tooltip)
        split_operation_group_box_2->setTitle(QCoreApplication::translate("configuration_dialog", "Remember power settings by band", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxPwrBandTxMemory->setToolTip(QCoreApplication::translate("configuration_dialog", "Enable power memory during transmit", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxPwrBandTxMemory->setText(QCoreApplication::translate("configuration_dialog", "Transmit", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxPwrBandTuneMemory->setToolTip(QCoreApplication::translate("configuration_dialog", "Enable power memory during tuning", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxPwrBandTuneMemory->setText(QCoreApplication::translate("configuration_dialog", "Tune", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(audio_tab), QCoreApplication::translate("configuration_dialog", "A&udio", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(audio_tab), QCoreApplication::translate("configuration_dialog", "Audio interface settings", nullptr));
#endif // QT_CONFIG(tooltip)
        add_macro_push_button->setText(QCoreApplication::translate("configuration_dialog", "&Add", nullptr));
        delete_macro_push_button->setText(QCoreApplication::translate("configuration_dialog", "&Delete", nullptr));
#if QT_CONFIG(tooltip)
        macros_list_view->setToolTip(QCoreApplication::translate("configuration_dialog", "Drag and drop items to rearrange order\n"
"Right click for item specific actions\n"
"Click, SHIFT+Click and, CRTL+Click to select items", nullptr));
#endif // QT_CONFIG(tooltip)
        configuration_tabs->setTabText(configuration_tabs->indexOf(tx_macros_tab), QCoreApplication::translate("configuration_dialog", "Tx &Macros", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(tx_macros_tab), QCoreApplication::translate("configuration_dialog", "Canned free text messages setup", nullptr));
#endif // QT_CONFIG(tooltip)
        logging_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Logging", nullptr));
#if QT_CONFIG(tooltip)
        prompt_to_log_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "The program will pop up a partially completed Log QSO dialog when you send a 73 or free text message.", nullptr));
#endif // QT_CONFIG(tooltip)
        prompt_to_log_check_box->setText(QCoreApplication::translate("configuration_dialog", "Promp&t me to log QSO", nullptr));
        label_13->setText(QCoreApplication::translate("configuration_dialog", "Op Call:", nullptr));
#if QT_CONFIG(tooltip)
        report_in_comments_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Some logging programs will not accept the type of reports\n"
"saved by this program.\n"
"Check this option to save the sent and received reports in the\n"
"comments field.", nullptr));
#endif // QT_CONFIG(tooltip)
        report_in_comments_check_box->setText(QCoreApplication::translate("configuration_dialog", "d&B reports to comments", nullptr));
#if QT_CONFIG(tooltip)
        clear_DX_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Check this option to force the clearing of the DX Call\n"
"and DX Grid fields when a 73 or free text message is sent.", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_DX_check_box->setText(QCoreApplication::translate("configuration_dialog", "Clear &DX call and grid after logging", nullptr));
#if QT_CONFIG(tooltip)
        log_as_RTTY_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Some logging programs will not accept WSJT-X mode names.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        log_as_RTTY_check_box->setText(QCoreApplication::translate("configuration_dialog", "Con&vert mode to RTTY", nullptr));
#if QT_CONFIG(tooltip)
        opCallEntry->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>The callsign of the operator, if different from the station callsign.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cbAutoLog->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check to have QSOs logged automatically, when complete.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbAutoLog->setText(QCoreApplication::translate("configuration_dialog", "Log automatically (contesting only)", nullptr));
        network_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Network Services", nullptr));
#if QT_CONFIG(tooltip)
        psk_reporter_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>The program can send your station details and all decoded signals with grid squares as spots to the http://pskreporter.info web site.</p><p>This is used for reverse beacon analysis which is very useful for assessing propagation and system performance.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        psk_reporter_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable &PSK Reporter Spotting", nullptr));
#if QT_CONFIG(tooltip)
        psk_reporter_tcpip_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check this option if a reliable connection is needed</p><p>Most users do not need this, the default uses UDP which is more efficient. Only check this if you have evidence that UDP traffic from you to PSK Reporter is being lost.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        psk_reporter_tcpip_check_box->setText(QCoreApplication::translate("configuration_dialog", "Use TCP/IP connection", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("configuration_dialog", "UDP Server", nullptr));
        udp_server_label->setText(QCoreApplication::translate("configuration_dialog", "UDP Server:", nullptr));
#if QT_CONFIG(tooltip)
        udp_server_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Optional hostname of network service to receive decodes.</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this field will disable the broadcasting of UDP status updates.</p></body></htm"
                        "l>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("configuration_dialog", "UDP Server port number:", nullptr));
#if QT_CONFIG(tooltip)
        udp_server_port_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the service port number of the UDP server that WSJT-X should send updates to. If this is zero no updates will be sent.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        udp_interfaces_label->setText(QCoreApplication::translate("configuration_dialog", "Outgoing interfaces:", nullptr));
#if QT_CONFIG(tooltip)
        udp_interfaces_combo_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>When sending updates to a multicast group address it is necessary to specify which network interface(s) to send them to. If the loop-back interface is multicast capable then at least that one will be selected.</p><p>For most users the loop-back interface is all that is needed, that will allow multiple other applications on the same machine to interoperate with WSJT-X. If applications running on other hosts are to receive status updates then a suitable network interface should be used.</p><p>On some Linux systems it may be necessary to enable multicast on the loop-back network interface.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        udp_TTL_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Sets the number or router hops that multicast datagrams are allowed to make. Almost everyone should set this to 1 to keep outgoing multicast traffic withn the local subnet.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        udp_TTL_label->setText(QCoreApplication::translate("configuration_dialog", "Multicast TTL:", nullptr));
#if QT_CONFIG(tooltip)
        accept_udp_requests_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>With this enabled WSJT-X will accept certain requests back from a UDP server that receives decode messages.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        accept_udp_requests_check_box->setText(QCoreApplication::translate("configuration_dialog", "Accept UDP requests", nullptr));
#if QT_CONFIG(tooltip)
        udpWindowToFront->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Indicate acceptance of an incoming UDP request. The effect of this option varies depending on the operating system and window manager, its intent is to notify the acceptance of an incoming UDP request even if this application is minimized or hidden.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        udpWindowToFront->setText(QCoreApplication::translate("configuration_dialog", "Notify on accepted UDP request", nullptr));
#if QT_CONFIG(tooltip)
        udpWindowRestore->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Restore the window from minimized if an UDP request is accepted.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        udpWindowRestore->setText(QCoreApplication::translate("configuration_dialog", "Accepted UDP request restores window", nullptr));
        n1mm_group_box->setTitle(QCoreApplication::translate("configuration_dialog", "Secondary UDP Server (deprecated)", nullptr));
#if QT_CONFIG(tooltip)
        enable_n1mm_broadcast_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>When checked, WSJT-X will broadcast a logged contact in ADIF format to the configured hostname and port. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_n1mm_broadcast_check_box->setText(QCoreApplication::translate("configuration_dialog", "Enable logged contact ADIF broadcast", nullptr));
        n1mm_server_name_label->setText(QCoreApplication::translate("configuration_dialog", "Server name or IP address:", nullptr));
#if QT_CONFIG(tooltip)
        n1mm_server_name_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Optional host name of N1MM Logger+ program to receive ADIF UDP broadcasts. This is usually 'localhost' or ip address 127.0.0.1</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this fiel"
                        "d will disable broadcasting of ADIF information via UDP.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        n1mm_server_port_label->setText(QCoreApplication::translate("configuration_dialog", "Server port number:", nullptr));
#if QT_CONFIG(tooltip)
        n1mm_server_port_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the port number that WSJT-X should use for UDP broadcasts of ADIF log information. For N1MM Logger+, this value should be 2333. If this is zero,  no updates will be broadcast.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        configuration_tabs->setTabText(configuration_tabs->indexOf(reporting_tab), QCoreApplication::translate("configuration_dialog", "Reportin&g", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(reporting_tab), QCoreApplication::translate("configuration_dialog", "Reporting and logging settings", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        groupBox_3->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>See &quot;Frequency Calibration&quot; in the WSJT-X User Guide for details of how to determine these parameters for your radio.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("configuration_dialog", "Frequency Calibration", nullptr));
        label_8->setText(QCoreApplication::translate("configuration_dialog", "Slope:", nullptr));
        calibration_slope_ppm_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " ppm", nullptr));
        label_7->setText(QCoreApplication::translate("configuration_dialog", "Intercept:", nullptr));
        calibration_intercept_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " Hz", nullptr));
        groupBox->setTitle(QCoreApplication::translate("configuration_dialog", "Working Frequencies", nullptr));
#if QT_CONFIG(tooltip)
        frequencies_table_view->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Right click to maintain the working frequencies list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("configuration_dialog", "Station Information", nullptr));
#if QT_CONFIG(tooltip)
        stations_table_view->setToolTip(QCoreApplication::translate("configuration_dialog", "Items may be edited.\n"
"Right click for insert and delete options.", nullptr));
#endif // QT_CONFIG(tooltip)
        configuration_tabs->setTabText(configuration_tabs->indexOf(frequencies_tab), QCoreApplication::translate("configuration_dialog", "Frequencies", nullptr));
#if QT_CONFIG(tooltip)
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(frequencies_tab), QCoreApplication::translate("configuration_dialog", "Default frequencies and band specific station details setup", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_12->setTitle(QCoreApplication::translate("configuration_dialog", "Decode Highlightling", nullptr));
#if QT_CONFIG(tooltip)
        rescan_log_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Click to scan the wsjtx_log.adi ADIF file again for worked before information</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rescan_log_push_button->setText(QCoreApplication::translate("configuration_dialog", "Rescan ADIF Log", nullptr));
#if QT_CONFIG(tooltip)
        reset_highlighting_to_defaults_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Push to reset all highlight items above to default values and priorities.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        reset_highlighting_to_defaults_push_button->setText(QCoreApplication::translate("configuration_dialog", "Reset Highlighting", nullptr));
        include_WAE_check_box->setText(QCoreApplication::translate("configuration_dialog", "Include extra WAE entities", nullptr));
#if QT_CONFIG(tooltip)
        only_fields_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "Check to for grid highlighting to only apply to unworked grid fields", nullptr));
#endif // QT_CONFIG(tooltip)
        only_fields_check_box->setText(QCoreApplication::translate("configuration_dialog", "Only grid Fields sought", nullptr));
#if QT_CONFIG(tooltip)
        highlighting_list_view->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Enable or disable using the check boxes and right-click an item to change or unset the foreground color, background color, or reset the item to default values. Drag and drop the items to change their priority, higher in the list is higher in priority.</p><p>Note that each foreground or background color may be either set or unset, unset means that it is not allocated for that item's type and lower priority items may apply.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        highlight_by_mode_check_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Check to indicate new DXCC entities, grid squares, and callsigns per mode.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        highlight_by_mode_check_box->setText(QCoreApplication::translate("configuration_dialog", "Highlight by Mode", nullptr));
        highlight_73_check_box->setText(QCoreApplication::translate("configuration_dialog", "Highlight also messages with 73 or RR73", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_11->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Controls for Logbook of the World user lookup.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_11->setTitle(QCoreApplication::translate("configuration_dialog", "Logbook of the World User Validation", nullptr));
        label_15->setText(QCoreApplication::translate("configuration_dialog", "Users CSV file URL:", nullptr));
#if QT_CONFIG(tooltip)
        LotW_CSV_URL_line_edit->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>URL of the ARRL LotW user's last upload dates and times data file which is used to highlight decodes from stations that are known to upload their log file to LotW.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        LotW_CSV_URL_line_edit->setAccessibleName(QCoreApplication::translate("configuration_dialog", "URL", nullptr));
#endif // QT_CONFIG(accessibility)
        LotW_CSV_URL_line_edit->setText(QCoreApplication::translate("configuration_dialog", "https://lotw.arrl.org/lotw-user-activity.csv", nullptr));
#if QT_CONFIG(tooltip)
        LotW_CSV_fetch_push_button->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Push this button to fetch the latest LotW user's upload date and time data file.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        LotW_CSV_fetch_push_button->setText(QCoreApplication::translate("configuration_dialog", "Fetch Now", nullptr));
        label_14->setText(QCoreApplication::translate("configuration_dialog", "Age of last upload less than:", nullptr));
#if QT_CONFIG(tooltip)
        LotW_days_since_upload_spin_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Adjust this spin box to set the age threshold of LotW user's last upload date that is accepted as a current LotW user.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        LotW_days_since_upload_spin_box->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Days since last upload", nullptr));
#endif // QT_CONFIG(accessibility)
        LotW_days_since_upload_spin_box->setSuffix(QCoreApplication::translate("configuration_dialog", " days", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(colors_tab), QCoreApplication::translate("configuration_dialog", "Colors", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("configuration_dialog", "Miscellaneous", nullptr));
        label_3->setText(QCoreApplication::translate("configuration_dialog", "Degrade S/N of .wav file: ", nullptr));
#if QT_CONFIG(tooltip)
        sbDegrade->setToolTip(QCoreApplication::translate("configuration_dialog", "For offline sensitivity tests", nullptr));
#endif // QT_CONFIG(tooltip)
        sbDegrade->setSuffix(QCoreApplication::translate("configuration_dialog", " dB", nullptr));
        label_9->setText(QCoreApplication::translate("configuration_dialog", "Receiver bandwidth:", nullptr));
#if QT_CONFIG(tooltip)
        sbBandwidth->setToolTip(QCoreApplication::translate("configuration_dialog", "For offline sensitivity tests", nullptr));
#endif // QT_CONFIG(tooltip)
        sbBandwidth->setSuffix(QCoreApplication::translate("configuration_dialog", "  Hz", nullptr));
        label_11->setText(QCoreApplication::translate("configuration_dialog", "Tx delay:", nullptr));
#if QT_CONFIG(tooltip)
        sbTxDelay->setToolTip(QCoreApplication::translate("configuration_dialog", "Minimum delay between assertion of PTT and start of Tx audio.", nullptr));
#endif // QT_CONFIG(tooltip)
        sbTxDelay->setSuffix(QCoreApplication::translate("configuration_dialog", "  s", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_10->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Tone spacing", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_10->setTitle(QCoreApplication::translate("configuration_dialog", "Tone spacing", nullptr));
#if QT_CONFIG(tooltip)
        cbx2ToneSpacing->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Generate Tx audio with twice the normal tone spacing.  Intended for special LF/MF transmitters that use a divide-by-2 before generating RF.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbx2ToneSpacing->setText(QCoreApplication::translate("configuration_dialog", "x 2", nullptr));
#if QT_CONFIG(tooltip)
        cbx4ToneSpacing->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Generate Tx audio with four times the normal tone spacing. Intended for special LF/MF transmitters that use a divide-by-4 before generating RF.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbx4ToneSpacing->setText(QCoreApplication::translate("configuration_dialog", "x 4 ", nullptr));
#if QT_CONFIG(accessibility)
        groupBox_7->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Waterfall spectra", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_7->setTitle(QCoreApplication::translate("configuration_dialog", "Waterfall spectra", nullptr));
        rbLowSidelobes->setText(QCoreApplication::translate("configuration_dialog", "Low sidelobes", nullptr));
        rbMaxSensitivity->setText(QCoreApplication::translate("configuration_dialog", "Most sensitive", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_6->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>User-selectable parameters for JT65 VHF/UHF/Microwave decoding.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_6->setTitle(QCoreApplication::translate("configuration_dialog", "JT65 VHF/UHF/Microwave decoding parameters", nullptr));
        label_2->setText(QCoreApplication::translate("configuration_dialog", "Random erasure patterns:", nullptr));
#if QT_CONFIG(tooltip)
        sbNtrials->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Maximum number of erasure patterns for stochastic soft-decision Reed Solomon decoder is 10^(n/2).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("configuration_dialog", "Aggressive decoding level:", nullptr));
#if QT_CONFIG(tooltip)
        sbAggressive->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Higher levels will increase the probability of decoding, but will also increase probability of a false decode.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbTwoPass->setText(QCoreApplication::translate("configuration_dialog", "Two-pass decoding", nullptr));
        gbSpecialOpActivity->setTitle(QCoreApplication::translate("configuration_dialog", "Special operating activity", nullptr));
#if QT_CONFIG(tooltip)
        rbHound->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>FT8 DXpedition mode:  Hound operator calling the DX.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        rbHound->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Hound", nullptr));
#endif // QT_CONFIG(accessibility)
        rbHound->setText(QCoreApplication::translate("configuration_dialog", "Hound", nullptr));
#if QT_CONFIG(tooltip)
        rbNA_VHF_Contest->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>North American VHF/UHF/Microwave contests and others in which a 4-character grid locator is the required exchange.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        rbNA_VHF_Contest->setAccessibleName(QCoreApplication::translate("configuration_dialog", "NA VHF Contest", nullptr));
#endif // QT_CONFIG(accessibility)
        rbNA_VHF_Contest->setText(QCoreApplication::translate("configuration_dialog", "NA VHF", nullptr));
#if QT_CONFIG(tooltip)
        rbField_Day->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>ARRL Field Day exchange: number of transmitters, Class, and ARRL/RAC section or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        rbField_Day->setAccessibleName(QCoreApplication::translate("configuration_dialog", "A R R L Field Day", nullptr));
#endif // QT_CONFIG(accessibility)
        rbField_Day->setText(QCoreApplication::translate("configuration_dialog", "ARRL Field Day", nullptr));
#if QT_CONFIG(accessibility)
        labFD->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Field Day exchange", nullptr));
#endif // QT_CONFIG(accessibility)
        labFD->setText(QCoreApplication::translate("configuration_dialog", "FD Exch:", nullptr));
#if QT_CONFIG(tooltip)
        Field_Day_Exchange->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>ARRL Field Day exchange: number of transmitters, Class, and ARRL/RAC section or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Field_Day_Exchange->setText(QCoreApplication::translate("configuration_dialog", "6A SNJ", nullptr));
#if QT_CONFIG(tooltip)
        rbARRL_Digi->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>ARRL International Digital Contest</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rbARRL_Digi->setText(QCoreApplication::translate("configuration_dialog", "ARRL Digi Contest", nullptr));
#if QT_CONFIG(tooltip)
        rbWW_DIGI->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>World-Wide Digi-mode contest</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        rbWW_DIGI->setAccessibleName(QCoreApplication::translate("configuration_dialog", "WW Digital Contest", nullptr));
#endif // QT_CONFIG(accessibility)
        rbWW_DIGI->setText(QCoreApplication::translate("configuration_dialog", "WW Digi Contest", nullptr));
#if QT_CONFIG(tooltip)
        rbRTTY_Roundup->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>FT Roundup and similar contests. Exchange is US state, Canadian province, or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        rbRTTY_Roundup->setAccessibleName(QCoreApplication::translate("configuration_dialog", "R T T Y Roundup", nullptr));
#endif // QT_CONFIG(accessibility)
        rbRTTY_Roundup->setText(QCoreApplication::translate("configuration_dialog", "FT Roundup", nullptr));
#if QT_CONFIG(accessibility)
        labRTTY->setAccessibleName(QCoreApplication::translate("configuration_dialog", "RTTY Roundup exchange", nullptr));
#endif // QT_CONFIG(accessibility)
        labRTTY->setText(QCoreApplication::translate("configuration_dialog", "FT RU Exch:", nullptr));
#if QT_CONFIG(tooltip)
        RTTY_Exchange->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>FT Roundup and similar contests.  Exchange is US state, Canadian province, or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        RTTY_Exchange->setText(QCoreApplication::translate("configuration_dialog", "NJ", nullptr));
#if QT_CONFIG(tooltip)
        rbFox->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>FT8 DXpedition mode:  Fox (DXpedition) operator.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        rbFox->setAccessibleName(QCoreApplication::translate("configuration_dialog", "Fox", nullptr));
#endif // QT_CONFIG(accessibility)
        rbFox->setText(QCoreApplication::translate("configuration_dialog", "Fox", nullptr));
#if QT_CONFIG(tooltip)
        rbEU_VHF_Contest->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>European VHF+ contests requiring a signal report, serial number, and 6-character locator.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        rbEU_VHF_Contest->setAccessibleName(QCoreApplication::translate("configuration_dialog", "EU VHF Contest", nullptr));
#endif // QT_CONFIG(accessibility)
        rbEU_VHF_Contest->setText(QCoreApplication::translate("configuration_dialog", "EU VHF Contest", nullptr));
#if QT_CONFIG(tooltip)
        cbContestName->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Call CQ with an individual contest name instead of TEST, RU, or WW. </p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbContestName->setText(QCoreApplication::translate("configuration_dialog", "CQ with individual contest name", nullptr));
        labCN->setText(QCoreApplication::translate("configuration_dialog", "Contest name:", nullptr));
        Contest_Name->setText(QCoreApplication::translate("configuration_dialog", "PACC", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(advanced_tab), QCoreApplication::translate("configuration_dialog", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        configuration_dialog_button_box->setToolTip(QCoreApplication::translate("configuration_dialog", "<html><head/><body><p>Discard (Cancel) or apply (OK) configuration changes including</p><p>resetting the radio interface and applying any soundcard changes</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class configuration_dialog: public Ui_configuration_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATION_H
