/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../wsjtx/widgets/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[293];
    char stringdata0[5823];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "initializeAudioOutputStream"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QAudioDeviceInfo"
QT_MOC_LITERAL(4, 57, 8), // "channels"
QT_MOC_LITERAL(5, 66, 10), // "msBuffered"
QT_MOC_LITERAL(6, 77, 21), // "stopAudioOutputStream"
QT_MOC_LITERAL(7, 99, 21), // "startAudioInputStream"
QT_MOC_LITERAL(8, 121, 15), // "framesPerBuffer"
QT_MOC_LITERAL(9, 137, 12), // "AudioDevice*"
QT_MOC_LITERAL(10, 150, 4), // "sink"
QT_MOC_LITERAL(11, 155, 16), // "downSampleFactor"
QT_MOC_LITERAL(12, 172, 20), // "AudioDevice::Channel"
QT_MOC_LITERAL(13, 193, 23), // "suspendAudioInputStream"
QT_MOC_LITERAL(14, 217, 22), // "resumeAudioInputStream"
QT_MOC_LITERAL(15, 240, 13), // "startDetector"
QT_MOC_LITERAL(16, 254, 7), // "FFTSize"
QT_MOC_LITERAL(17, 262, 13), // "detectorClose"
QT_MOC_LITERAL(18, 276, 8), // "finished"
QT_MOC_LITERAL(19, 285, 17), // "transmitFrequency"
QT_MOC_LITERAL(20, 303, 18), // "endTransmitMessage"
QT_MOC_LITERAL(21, 322, 5), // "quick"
QT_MOC_LITERAL(22, 328, 4), // "tune"
QT_MOC_LITERAL(23, 333, 11), // "sendMessage"
QT_MOC_LITERAL(24, 345, 4), // "mode"
QT_MOC_LITERAL(25, 350, 13), // "symbolsLength"
QT_MOC_LITERAL(26, 364, 15), // "framesPerSymbol"
QT_MOC_LITERAL(27, 380, 9), // "frequency"
QT_MOC_LITERAL(28, 390, 11), // "toneSpacing"
QT_MOC_LITERAL(29, 402, 12), // "SoundOutput*"
QT_MOC_LITERAL(30, 415, 11), // "synchronize"
QT_MOC_LITERAL(31, 427, 8), // "fastMode"
QT_MOC_LITERAL(32, 436, 5), // "dBSNR"
QT_MOC_LITERAL(33, 442, 8), // "TRperiod"
QT_MOC_LITERAL(34, 451, 21), // "outAttenuationChanged"
QT_MOC_LITERAL(35, 473, 15), // "toggleShorthand"
QT_MOC_LITERAL(36, 489, 24), // "reset_audio_input_stream"
QT_MOC_LITERAL(37, 514, 21), // "report_dropped_frames"
QT_MOC_LITERAL(38, 536, 16), // "showSoundInError"
QT_MOC_LITERAL(39, 553, 8), // "errorMsg"
QT_MOC_LITERAL(40, 562, 17), // "showSoundOutError"
QT_MOC_LITERAL(41, 580, 17), // "showStatusMessage"
QT_MOC_LITERAL(42, 598, 9), // "statusMsg"
QT_MOC_LITERAL(43, 608, 8), // "dataSink"
QT_MOC_LITERAL(44, 617, 6), // "frames"
QT_MOC_LITERAL(45, 624, 8), // "fastSink"
QT_MOC_LITERAL(46, 633, 7), // "diskDat"
QT_MOC_LITERAL(47, 641, 12), // "freezeDecode"
QT_MOC_LITERAL(48, 654, 1), // "n"
QT_MOC_LITERAL(49, 656, 9), // "guiUpdate"
QT_MOC_LITERAL(50, 666, 17), // "doubleClickOnCall"
QT_MOC_LITERAL(51, 684, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(52, 706, 18), // "doubleClickOnCall2"
QT_MOC_LITERAL(53, 725, 21), // "doubleClickOnFoxQueue"
QT_MOC_LITERAL(54, 747, 26), // "doubleClickOnFoxInProgress"
QT_MOC_LITERAL(55, 774, 9), // "modifiers"
QT_MOC_LITERAL(56, 784, 14), // "readFromStdout"
QT_MOC_LITERAL(57, 799, 16), // "p1ReadFromStdout"
QT_MOC_LITERAL(58, 816, 6), // "setXIT"
QT_MOC_LITERAL(59, 823, 9), // "Frequency"
QT_MOC_LITERAL(60, 833, 4), // "base"
QT_MOC_LITERAL(61, 838, 8), // "setFreq4"
QT_MOC_LITERAL(62, 847, 6), // "rxFreq"
QT_MOC_LITERAL(63, 854, 6), // "txFreq"
QT_MOC_LITERAL(64, 861, 13), // "msgAvgDecode2"
QT_MOC_LITERAL(65, 875, 8), // "fastPick"
QT_MOC_LITERAL(66, 884, 2), // "x0"
QT_MOC_LITERAL(67, 887, 2), // "x1"
QT_MOC_LITERAL(68, 890, 1), // "y"
QT_MOC_LITERAL(69, 892, 16), // "initialize_fonts"
QT_MOC_LITERAL(70, 909, 22), // "on_houndButton_clicked"
QT_MOC_LITERAL(71, 932, 7), // "checked"
QT_MOC_LITERAL(72, 940, 20), // "on_ft8Button_clicked"
QT_MOC_LITERAL(73, 961, 20), // "on_ft4Button_clicked"
QT_MOC_LITERAL(74, 982, 23), // "on_msk144Button_clicked"
QT_MOC_LITERAL(75, 1006, 20), // "on_q65Button_clicked"
QT_MOC_LITERAL(76, 1027, 21), // "on_jt65Button_clicked"
QT_MOC_LITERAL(77, 1049, 22), // "on_tx1_editingFinished"
QT_MOC_LITERAL(78, 1072, 22), // "on_tx2_editingFinished"
QT_MOC_LITERAL(79, 1095, 22), // "on_tx3_editingFinished"
QT_MOC_LITERAL(80, 1118, 22), // "on_tx4_editingFinished"
QT_MOC_LITERAL(81, 1141, 25), // "on_tx5_currentTextChanged"
QT_MOC_LITERAL(82, 1167, 22), // "on_tx6_editingFinished"
QT_MOC_LITERAL(83, 1190, 27), // "on_actionSettings_triggered"
QT_MOC_LITERAL(84, 1218, 24), // "on_monitorButton_clicked"
QT_MOC_LITERAL(85, 1243, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(86, 1268, 21), // "on_autoButton_clicked"
QT_MOC_LITERAL(87, 1290, 23), // "on_stopTxButton_clicked"
QT_MOC_LITERAL(88, 1314, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(89, 1336, 32), // "on_actionRelease_Notes_triggered"
QT_MOC_LITERAL(90, 1369, 49), // "on_actionFT8_DXpedition_Mode_..."
QT_MOC_LITERAL(91, 1419, 27), // "on_actionQSG_FST4_triggered"
QT_MOC_LITERAL(92, 1447, 26), // "on_actionQSG_Q65_triggered"
QT_MOC_LITERAL(93, 1474, 30), // "on_actionQSG_X250_M3_triggered"
QT_MOC_LITERAL(94, 1505, 36), // "on_actionOnline_User_Guide_tr..."
QT_MOC_LITERAL(95, 1542, 35), // "on_actionLocal_User_Guide_tri..."
QT_MOC_LITERAL(96, 1578, 33), // "on_actionWide_Waterfall_trigg..."
QT_MOC_LITERAL(97, 1612, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(98, 1636, 41), // "on_actionOpen_next_in_directo..."
QT_MOC_LITERAL(99, 1678, 54), // "on_actionDecode_remaining_fil..."
QT_MOC_LITERAL(100, 1733, 50), // "on_actionDelete_all_wav_files..."
QT_MOC_LITERAL(101, 1784, 37), // "on_actionOpen_log_directory_t..."
QT_MOC_LITERAL(102, 1822, 23), // "on_actionNone_triggered"
QT_MOC_LITERAL(103, 1846, 27), // "on_actionSave_all_triggered"
QT_MOC_LITERAL(104, 1874, 37), // "on_actionKeyboard_shortcuts_t..."
QT_MOC_LITERAL(105, 1912, 41), // "on_actionSpecial_mouse_comman..."
QT_MOC_LITERAL(106, 1954, 32), // "on_actionSolve_FreqCal_triggered"
QT_MOC_LITERAL(107, 1987, 35), // "on_actionCopyright_Notice_tri..."
QT_MOC_LITERAL(108, 2023, 27), // "on_actionSWL_Mode_triggered"
QT_MOC_LITERAL(109, 2051, 23), // "on_DecodeButton_clicked"
QT_MOC_LITERAL(110, 2075, 6), // "decode"
QT_MOC_LITERAL(111, 2082, 10), // "decodeBusy"
QT_MOC_LITERAL(112, 2093, 1), // "b"
QT_MOC_LITERAL(113, 2095, 22), // "on_EraseButton_clicked"
QT_MOC_LITERAL(114, 2118, 21), // "band_activity_cleared"
QT_MOC_LITERAL(115, 2140, 29), // "rx_frequency_activity_cleared"
QT_MOC_LITERAL(116, 2170, 31), // "on_txFirstCheckBox_stateChanged"
QT_MOC_LITERAL(117, 2202, 4), // "arg1"
QT_MOC_LITERAL(118, 2207, 15), // "set_dateTimeQSO"
QT_MOC_LITERAL(119, 2223, 5), // "m_ntx"
QT_MOC_LITERAL(120, 2229, 7), // "set_ntx"
QT_MOC_LITERAL(121, 2237, 16), // "on_txrb1_toggled"
QT_MOC_LITERAL(122, 2254, 6), // "status"
QT_MOC_LITERAL(123, 2261, 22), // "on_txrb1_doubleClicked"
QT_MOC_LITERAL(124, 2284, 16), // "on_txrb2_toggled"
QT_MOC_LITERAL(125, 2301, 16), // "on_txrb3_toggled"
QT_MOC_LITERAL(126, 2318, 16), // "on_txrb4_toggled"
QT_MOC_LITERAL(127, 2335, 22), // "on_txrb4_doubleClicked"
QT_MOC_LITERAL(128, 2358, 16), // "on_txrb5_toggled"
QT_MOC_LITERAL(129, 2375, 22), // "on_txrb5_doubleClicked"
QT_MOC_LITERAL(130, 2398, 16), // "on_txrb6_toggled"
QT_MOC_LITERAL(131, 2415, 15), // "on_txb1_clicked"
QT_MOC_LITERAL(132, 2431, 21), // "on_txb1_doubleClicked"
QT_MOC_LITERAL(133, 2453, 15), // "on_txb2_clicked"
QT_MOC_LITERAL(134, 2469, 15), // "on_txb3_clicked"
QT_MOC_LITERAL(135, 2485, 15), // "on_txb4_clicked"
QT_MOC_LITERAL(136, 2501, 21), // "on_txb4_doubleClicked"
QT_MOC_LITERAL(137, 2523, 15), // "on_txb5_clicked"
QT_MOC_LITERAL(138, 2539, 21), // "on_txb5_doubleClicked"
QT_MOC_LITERAL(139, 2561, 15), // "on_txb6_clicked"
QT_MOC_LITERAL(140, 2577, 23), // "on_lookupButton_clicked"
QT_MOC_LITERAL(141, 2601, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(142, 2622, 26), // "on_dxCallEntry_textChanged"
QT_MOC_LITERAL(143, 2649, 26), // "on_dxGridEntry_textChanged"
QT_MOC_LITERAL(144, 2676, 30), // "on_dxCallEntry_editingFinished"
QT_MOC_LITERAL(145, 2707, 28), // "on_dxCallEntry_returnPressed"
QT_MOC_LITERAL(146, 2736, 31), // "on_genStdMsgsPushButton_clicked"
QT_MOC_LITERAL(147, 2768, 23), // "on_logQSOButton_clicked"
QT_MOC_LITERAL(148, 2792, 22), // "on_actionJT9_triggered"
QT_MOC_LITERAL(149, 2815, 23), // "on_actionJT65_triggered"
QT_MOC_LITERAL(150, 2839, 22), // "on_actionJT4_triggered"
QT_MOC_LITERAL(151, 2862, 22), // "on_actionFT4_triggered"
QT_MOC_LITERAL(152, 2885, 22), // "on_actionFT8_triggered"
QT_MOC_LITERAL(153, 2908, 23), // "on_actionFST4_triggered"
QT_MOC_LITERAL(154, 2932, 24), // "on_actionFST4W_triggered"
QT_MOC_LITERAL(155, 2957, 29), // "on_TxFreqSpinBox_valueChanged"
QT_MOC_LITERAL(156, 2987, 31), // "on_actionSave_decoded_triggered"
QT_MOC_LITERAL(157, 3019, 28), // "on_actionQuickDecode_toggled"
QT_MOC_LITERAL(158, 3048, 29), // "on_actionMediumDecode_toggled"
QT_MOC_LITERAL(159, 3078, 30), // "on_actionDeepestDecode_toggled"
QT_MOC_LITERAL(160, 3109, 8), // "bumpFqso"
QT_MOC_LITERAL(161, 3118, 32), // "on_actionErase_ALL_TXT_triggered"
QT_MOC_LITERAL(162, 3151, 38), // "on_reset_cabrillo_log_action_..."
QT_MOC_LITERAL(163, 3190, 38), // "on_actionErase_wsjtx_log_adi_..."
QT_MOC_LITERAL(164, 3229, 39), // "on_actionErase_WSPR_hashtable..."
QT_MOC_LITERAL(165, 3269, 38), // "on_actionExport_Cabrillo_log_..."
QT_MOC_LITERAL(166, 3308, 8), // "startTx2"
QT_MOC_LITERAL(167, 3317, 7), // "startP1"
QT_MOC_LITERAL(168, 3325, 6), // "stopTx"
QT_MOC_LITERAL(169, 3332, 7), // "stopTx2"
QT_MOC_LITERAL(170, 3340, 26), // "on_rptSpinBox_valueChanged"
QT_MOC_LITERAL(171, 3367, 8), // "killFile"
QT_MOC_LITERAL(172, 3376, 21), // "on_tuneButton_clicked"
QT_MOC_LITERAL(173, 3398, 16), // "on_pbR2T_clicked"
QT_MOC_LITERAL(174, 3415, 16), // "on_pbT2R_clicked"
QT_MOC_LITERAL(175, 3432, 9), // "acceptQSO"
QT_MOC_LITERAL(176, 3442, 4), // "call"
QT_MOC_LITERAL(177, 3447, 4), // "grid"
QT_MOC_LITERAL(178, 3452, 9), // "dial_freq"
QT_MOC_LITERAL(179, 3462, 8), // "rpt_sent"
QT_MOC_LITERAL(180, 3471, 12), // "rpt_received"
QT_MOC_LITERAL(181, 3484, 8), // "tx_power"
QT_MOC_LITERAL(182, 3493, 8), // "comments"
QT_MOC_LITERAL(183, 3502, 4), // "name"
QT_MOC_LITERAL(184, 3507, 11), // "QSO_date_on"
QT_MOC_LITERAL(185, 3519, 13), // "operator_call"
QT_MOC_LITERAL(186, 3533, 7), // "my_call"
QT_MOC_LITERAL(187, 3541, 7), // "my_grid"
QT_MOC_LITERAL(188, 3549, 13), // "exchange_sent"
QT_MOC_LITERAL(189, 3563, 13), // "exchange_rcvd"
QT_MOC_LITERAL(190, 3577, 8), // "propmode"
QT_MOC_LITERAL(191, 3586, 4), // "ADIF"
QT_MOC_LITERAL(192, 3591, 35), // "on_bandComboBox_currentIndexC..."
QT_MOC_LITERAL(193, 3627, 5), // "index"
QT_MOC_LITERAL(194, 3633, 31), // "on_bandComboBox_editTextChanged"
QT_MOC_LITERAL(195, 3665, 4), // "text"
QT_MOC_LITERAL(196, 3670, 25), // "on_bandComboBox_activated"
QT_MOC_LITERAL(197, 3696, 19), // "on_readFreq_clicked"
QT_MOC_LITERAL(198, 3716, 29), // "on_RxFreqSpinBox_valueChanged"
QT_MOC_LITERAL(199, 3746, 30), // "on_outAttenuation_valueChanged"
QT_MOC_LITERAL(200, 3777, 7), // "rigOpen"
QT_MOC_LITERAL(201, 3785, 25), // "handle_transceiver_update"
QT_MOC_LITERAL(202, 3811, 29), // "Transceiver::TransceiverState"
QT_MOC_LITERAL(203, 3841, 26), // "handle_transceiver_failure"
QT_MOC_LITERAL(204, 3868, 6), // "reason"
QT_MOC_LITERAL(205, 3875, 34), // "on_actionAstronomical_data_to..."
QT_MOC_LITERAL(206, 3910, 61), // "on_actionShort_list_of_add_on..."
QT_MOC_LITERAL(207, 3972, 12), // "band_changed"
QT_MOC_LITERAL(208, 3985, 7), // "monitor"
QT_MOC_LITERAL(209, 3993, 10), // "end_tuning"
QT_MOC_LITERAL(210, 4004, 11), // "stop_tuning"
QT_MOC_LITERAL(211, 4016, 11), // "stopTuneATU"
QT_MOC_LITERAL(212, 4028, 12), // "auto_tx_mode"
QT_MOC_LITERAL(213, 4041, 36), // "on_actionMessage_averaging_tr..."
QT_MOC_LITERAL(214, 4078, 33), // "on_actionActiveStations_trigg..."
QT_MOC_LITERAL(215, 4112, 31), // "on_contest_log_action_triggered"
QT_MOC_LITERAL(216, 4144, 27), // "on_fox_log_action_triggered"
QT_MOC_LITERAL(217, 4172, 25), // "on_actionColors_triggered"
QT_MOC_LITERAL(218, 4198, 34), // "on_actionInclude_averaging_to..."
QT_MOC_LITERAL(219, 4233, 36), // "on_actionInclude_correlation_..."
QT_MOC_LITERAL(220, 4270, 33), // "on_actionEnable_AP_DXcall_tog..."
QT_MOC_LITERAL(221, 4304, 31), // "on_actionAuto_Clear_Avg_toggled"
QT_MOC_LITERAL(222, 4336, 20), // "VHF_features_enabled"
QT_MOC_LITERAL(223, 4357, 25), // "on_sbSubmode_valueChanged"
QT_MOC_LITERAL(224, 4383, 19), // "on_cbShMsgs_toggled"
QT_MOC_LITERAL(225, 4403, 16), // "on_cbSWL_toggled"
QT_MOC_LITERAL(226, 4420, 16), // "on_cbTx6_toggled"
QT_MOC_LITERAL(227, 4437, 18), // "on_cbMenus_toggled"
QT_MOC_LITERAL(228, 4456, 19), // "on_cbCQonly_toggled"
QT_MOC_LITERAL(229, 4476, 20), // "on_cbAutoSeq_toggled"
QT_MOC_LITERAL(230, 4497, 12), // "networkError"
QT_MOC_LITERAL(231, 4510, 23), // "on_ClrAvgButton_clicked"
QT_MOC_LITERAL(232, 4534, 23), // "on_actionWSPR_triggered"
QT_MOC_LITERAL(233, 4558, 27), // "on_syncSpinBox_valueChanged"
QT_MOC_LITERAL(234, 4586, 38), // "on_TxPowerComboBox_currentInd..."
QT_MOC_LITERAL(235, 4625, 27), // "on_sbTxPercent_valueChanged"
QT_MOC_LITERAL(236, 4653, 29), // "on_cbUploadWSPR_Spots_toggled"
QT_MOC_LITERAL(237, 4683, 11), // "WSPR_config"
QT_MOC_LITERAL(238, 4695, 15), // "uploadWSPRSpots"
QT_MOC_LITERAL(239, 4711, 11), // "direct_post"
QT_MOC_LITERAL(240, 4723, 11), // "decode_text"
QT_MOC_LITERAL(241, 4735, 7), // "TxAgain"
QT_MOC_LITERAL(242, 4743, 14), // "uploadResponse"
QT_MOC_LITERAL(243, 4758, 8), // "response"
QT_MOC_LITERAL(244, 4767, 31), // "on_WSPRfreqSpinBox_valueChanged"
QT_MOC_LITERAL(245, 4799, 30), // "on_sbFST4W_RxFreq_valueChanged"
QT_MOC_LITERAL(246, 4830, 28), // "on_sbFST4W_FTol_valueChanged"
QT_MOC_LITERAL(247, 4859, 19), // "on_pbTxNext_clicked"
QT_MOC_LITERAL(248, 4879, 29), // "on_actionEcho_Graph_triggered"
QT_MOC_LITERAL(249, 4909, 23), // "on_actionEcho_triggered"
QT_MOC_LITERAL(250, 4933, 29), // "on_actionFast_Graph_triggered"
QT_MOC_LITERAL(251, 4963, 16), // "fast_decode_done"
QT_MOC_LITERAL(252, 4980, 45), // "on_actionMeasure_reference_sp..."
QT_MOC_LITERAL(253, 5026, 43), // "on_actionErase_reference_spec..."
QT_MOC_LITERAL(254, 5070, 41), // "on_actionMeasure_phase_respon..."
QT_MOC_LITERAL(255, 5112, 20), // "on_sbTR_valueChanged"
QT_MOC_LITERAL(256, 5133, 26), // "on_sbTR_FST4W_valueChanged"
QT_MOC_LITERAL(257, 5160, 22), // "on_sbFtol_valueChanged"
QT_MOC_LITERAL(258, 5183, 18), // "on_cbFast9_clicked"
QT_MOC_LITERAL(259, 5202, 26), // "on_sbCQTxFreq_valueChanged"
QT_MOC_LITERAL(260, 5229, 17), // "on_cbCQTx_toggled"
QT_MOC_LITERAL(261, 5247, 25), // "on_actionMSK144_triggered"
QT_MOC_LITERAL(262, 5273, 22), // "on_actionQ65_triggered"
QT_MOC_LITERAL(263, 5296, 26), // "on_actionFreqCal_triggered"
QT_MOC_LITERAL(264, 5323, 11), // "splash_done"
QT_MOC_LITERAL(265, 5335, 33), // "on_measure_check_box_stateCha..."
QT_MOC_LITERAL(266, 5369, 23), // "on_sbNlist_valueChanged"
QT_MOC_LITERAL(267, 5393, 24), // "on_sbNslots_valueChanged"
QT_MOC_LITERAL(268, 5418, 24), // "on_sbMax_dB_valueChanged"
QT_MOC_LITERAL(269, 5443, 23), // "on_sbF_Low_valueChanged"
QT_MOC_LITERAL(270, 5467, 24), // "on_sbF_High_valueChanged"
QT_MOC_LITERAL(271, 5492, 19), // "chk_FST4_freq_range"
QT_MOC_LITERAL(272, 5512, 21), // "on_pbFoxReset_clicked"
QT_MOC_LITERAL(273, 5534, 30), // "on_comboBoxHoundSort_activated"
QT_MOC_LITERAL(274, 5565, 22), // "not_GA_warning_message"
QT_MOC_LITERAL(275, 5588, 22), // "checkMSK144ContestType"
QT_MOC_LITERAL(276, 5611, 19), // "on_pbBestSP_clicked"
QT_MOC_LITERAL(277, 5631, 32), // "on_RoundRobin_currentTextChanged"
QT_MOC_LITERAL(278, 5664, 8), // "setTxMsg"
QT_MOC_LITERAL(279, 5673, 7), // "stdCall"
QT_MOC_LITERAL(280, 5681, 1), // "w"
QT_MOC_LITERAL(281, 5683, 16), // "remote_configure"
QT_MOC_LITERAL(282, 5700, 19), // "frequency_tolerance"
QT_MOC_LITERAL(283, 5720, 7), // "submode"
QT_MOC_LITERAL(284, 5728, 9), // "fast_mode"
QT_MOC_LITERAL(285, 5738, 9), // "tr_period"
QT_MOC_LITERAL(286, 5748, 5), // "rx_df"
QT_MOC_LITERAL(287, 5754, 7), // "dx_call"
QT_MOC_LITERAL(288, 5762, 7), // "dx_grid"
QT_MOC_LITERAL(289, 5770, 17), // "generate_messages"
QT_MOC_LITERAL(290, 5788, 10), // "callSandP2"
QT_MOC_LITERAL(291, 5799, 5), // "nline"
QT_MOC_LITERAL(292, 5805, 17) // "ARRL_Digi_Display"

    },
    "MainWindow\0initializeAudioOutputStream\0"
    "\0QAudioDeviceInfo\0channels\0msBuffered\0"
    "stopAudioOutputStream\0startAudioInputStream\0"
    "framesPerBuffer\0AudioDevice*\0sink\0"
    "downSampleFactor\0AudioDevice::Channel\0"
    "suspendAudioInputStream\0resumeAudioInputStream\0"
    "startDetector\0FFTSize\0detectorClose\0"
    "finished\0transmitFrequency\0"
    "endTransmitMessage\0quick\0tune\0sendMessage\0"
    "mode\0symbolsLength\0framesPerSymbol\0"
    "frequency\0toneSpacing\0SoundOutput*\0"
    "synchronize\0fastMode\0dBSNR\0TRperiod\0"
    "outAttenuationChanged\0toggleShorthand\0"
    "reset_audio_input_stream\0report_dropped_frames\0"
    "showSoundInError\0errorMsg\0showSoundOutError\0"
    "showStatusMessage\0statusMsg\0dataSink\0"
    "frames\0fastSink\0diskDat\0freezeDecode\0"
    "n\0guiUpdate\0doubleClickOnCall\0"
    "Qt::KeyboardModifiers\0doubleClickOnCall2\0"
    "doubleClickOnFoxQueue\0doubleClickOnFoxInProgress\0"
    "modifiers\0readFromStdout\0p1ReadFromStdout\0"
    "setXIT\0Frequency\0base\0setFreq4\0rxFreq\0"
    "txFreq\0msgAvgDecode2\0fastPick\0x0\0x1\0"
    "y\0initialize_fonts\0on_houndButton_clicked\0"
    "checked\0on_ft8Button_clicked\0"
    "on_ft4Button_clicked\0on_msk144Button_clicked\0"
    "on_q65Button_clicked\0on_jt65Button_clicked\0"
    "on_tx1_editingFinished\0on_tx2_editingFinished\0"
    "on_tx3_editingFinished\0on_tx4_editingFinished\0"
    "on_tx5_currentTextChanged\0"
    "on_tx6_editingFinished\0"
    "on_actionSettings_triggered\0"
    "on_monitorButton_clicked\0"
    "on_actionAbout_triggered\0on_autoButton_clicked\0"
    "on_stopTxButton_clicked\0on_stopButton_clicked\0"
    "on_actionRelease_Notes_triggered\0"
    "on_actionFT8_DXpedition_Mode_User_Guide_triggered\0"
    "on_actionQSG_FST4_triggered\0"
    "on_actionQSG_Q65_triggered\0"
    "on_actionQSG_X250_M3_triggered\0"
    "on_actionOnline_User_Guide_triggered\0"
    "on_actionLocal_User_Guide_triggered\0"
    "on_actionWide_Waterfall_triggered\0"
    "on_actionOpen_triggered\0"
    "on_actionOpen_next_in_directory_triggered\0"
    "on_actionDecode_remaining_files_in_directory_triggered\0"
    "on_actionDelete_all_wav_files_in_SaveDir_triggered\0"
    "on_actionOpen_log_directory_triggered\0"
    "on_actionNone_triggered\0"
    "on_actionSave_all_triggered\0"
    "on_actionKeyboard_shortcuts_triggered\0"
    "on_actionSpecial_mouse_commands_triggered\0"
    "on_actionSolve_FreqCal_triggered\0"
    "on_actionCopyright_Notice_triggered\0"
    "on_actionSWL_Mode_triggered\0"
    "on_DecodeButton_clicked\0decode\0"
    "decodeBusy\0b\0on_EraseButton_clicked\0"
    "band_activity_cleared\0"
    "rx_frequency_activity_cleared\0"
    "on_txFirstCheckBox_stateChanged\0arg1\0"
    "set_dateTimeQSO\0m_ntx\0set_ntx\0"
    "on_txrb1_toggled\0status\0on_txrb1_doubleClicked\0"
    "on_txrb2_toggled\0on_txrb3_toggled\0"
    "on_txrb4_toggled\0on_txrb4_doubleClicked\0"
    "on_txrb5_toggled\0on_txrb5_doubleClicked\0"
    "on_txrb6_toggled\0on_txb1_clicked\0"
    "on_txb1_doubleClicked\0on_txb2_clicked\0"
    "on_txb3_clicked\0on_txb4_clicked\0"
    "on_txb4_doubleClicked\0on_txb5_clicked\0"
    "on_txb5_doubleClicked\0on_txb6_clicked\0"
    "on_lookupButton_clicked\0on_addButton_clicked\0"
    "on_dxCallEntry_textChanged\0"
    "on_dxGridEntry_textChanged\0"
    "on_dxCallEntry_editingFinished\0"
    "on_dxCallEntry_returnPressed\0"
    "on_genStdMsgsPushButton_clicked\0"
    "on_logQSOButton_clicked\0on_actionJT9_triggered\0"
    "on_actionJT65_triggered\0on_actionJT4_triggered\0"
    "on_actionFT4_triggered\0on_actionFT8_triggered\0"
    "on_actionFST4_triggered\0"
    "on_actionFST4W_triggered\0"
    "on_TxFreqSpinBox_valueChanged\0"
    "on_actionSave_decoded_triggered\0"
    "on_actionQuickDecode_toggled\0"
    "on_actionMediumDecode_toggled\0"
    "on_actionDeepestDecode_toggled\0bumpFqso\0"
    "on_actionErase_ALL_TXT_triggered\0"
    "on_reset_cabrillo_log_action_triggered\0"
    "on_actionErase_wsjtx_log_adi_triggered\0"
    "on_actionErase_WSPR_hashtable_triggered\0"
    "on_actionExport_Cabrillo_log_triggered\0"
    "startTx2\0startP1\0stopTx\0stopTx2\0"
    "on_rptSpinBox_valueChanged\0killFile\0"
    "on_tuneButton_clicked\0on_pbR2T_clicked\0"
    "on_pbT2R_clicked\0acceptQSO\0call\0grid\0"
    "dial_freq\0rpt_sent\0rpt_received\0"
    "tx_power\0comments\0name\0QSO_date_on\0"
    "operator_call\0my_call\0my_grid\0"
    "exchange_sent\0exchange_rcvd\0propmode\0"
    "ADIF\0on_bandComboBox_currentIndexChanged\0"
    "index\0on_bandComboBox_editTextChanged\0"
    "text\0on_bandComboBox_activated\0"
    "on_readFreq_clicked\0on_RxFreqSpinBox_valueChanged\0"
    "on_outAttenuation_valueChanged\0rigOpen\0"
    "handle_transceiver_update\0"
    "Transceiver::TransceiverState\0"
    "handle_transceiver_failure\0reason\0"
    "on_actionAstronomical_data_toggled\0"
    "on_actionShort_list_of_add_on_prefixes_and_suffixes_triggered\0"
    "band_changed\0monitor\0end_tuning\0"
    "stop_tuning\0stopTuneATU\0auto_tx_mode\0"
    "on_actionMessage_averaging_triggered\0"
    "on_actionActiveStations_triggered\0"
    "on_contest_log_action_triggered\0"
    "on_fox_log_action_triggered\0"
    "on_actionColors_triggered\0"
    "on_actionInclude_averaging_toggled\0"
    "on_actionInclude_correlation_toggled\0"
    "on_actionEnable_AP_DXcall_toggled\0"
    "on_actionAuto_Clear_Avg_toggled\0"
    "VHF_features_enabled\0on_sbSubmode_valueChanged\0"
    "on_cbShMsgs_toggled\0on_cbSWL_toggled\0"
    "on_cbTx6_toggled\0on_cbMenus_toggled\0"
    "on_cbCQonly_toggled\0on_cbAutoSeq_toggled\0"
    "networkError\0on_ClrAvgButton_clicked\0"
    "on_actionWSPR_triggered\0"
    "on_syncSpinBox_valueChanged\0"
    "on_TxPowerComboBox_currentIndexChanged\0"
    "on_sbTxPercent_valueChanged\0"
    "on_cbUploadWSPR_Spots_toggled\0WSPR_config\0"
    "uploadWSPRSpots\0direct_post\0decode_text\0"
    "TxAgain\0uploadResponse\0response\0"
    "on_WSPRfreqSpinBox_valueChanged\0"
    "on_sbFST4W_RxFreq_valueChanged\0"
    "on_sbFST4W_FTol_valueChanged\0"
    "on_pbTxNext_clicked\0on_actionEcho_Graph_triggered\0"
    "on_actionEcho_triggered\0"
    "on_actionFast_Graph_triggered\0"
    "fast_decode_done\0"
    "on_actionMeasure_reference_spectrum_triggered\0"
    "on_actionErase_reference_spectrum_triggered\0"
    "on_actionMeasure_phase_response_triggered\0"
    "on_sbTR_valueChanged\0on_sbTR_FST4W_valueChanged\0"
    "on_sbFtol_valueChanged\0on_cbFast9_clicked\0"
    "on_sbCQTxFreq_valueChanged\0on_cbCQTx_toggled\0"
    "on_actionMSK144_triggered\0"
    "on_actionQ65_triggered\0"
    "on_actionFreqCal_triggered\0splash_done\0"
    "on_measure_check_box_stateChanged\0"
    "on_sbNlist_valueChanged\0"
    "on_sbNslots_valueChanged\0"
    "on_sbMax_dB_valueChanged\0"
    "on_sbF_Low_valueChanged\0"
    "on_sbF_High_valueChanged\0chk_FST4_freq_range\0"
    "on_pbFoxReset_clicked\0"
    "on_comboBoxHoundSort_activated\0"
    "not_GA_warning_message\0checkMSK144ContestType\0"
    "on_pbBestSP_clicked\0"
    "on_RoundRobin_currentTextChanged\0"
    "setTxMsg\0stdCall\0w\0remote_configure\0"
    "frequency_tolerance\0submode\0fast_mode\0"
    "tr_period\0rx_df\0dx_call\0dx_grid\0"
    "generate_messages\0callSandP2\0nline\0"
    "ARRL_Digi_Display"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     230,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3, 1164,    2, 0x04 /* Private */,
       6,    0, 1171,    2, 0x04 /* Private */,
       7,    5, 1172,    2, 0x04 /* Private */,
      13,    0, 1183,    2, 0x04 /* Private */,
      14,    0, 1184,    2, 0x04 /* Private */,
      15,    1, 1185,    2, 0x04 /* Private */,
      16,    1, 1188,    2, 0x04 /* Private */,
      17,    0, 1191,    2, 0x04 /* Private */,
      18,    0, 1192,    2, 0x04 /* Private */,
      19,    1, 1193,    2, 0x04 /* Private */,
      20,    1, 1196,    2, 0x04 /* Private */,
      20,    0, 1199,    2, 0x24 /* Private | MethodCloned */,
      22,    1, 1200,    2, 0x04 /* Private */,
      22,    0, 1203,    2, 0x24 /* Private | MethodCloned */,
      23,   11, 1204,    2, 0x04 /* Private */,
      23,   10, 1227,    2, 0x24 /* Private | MethodCloned */,
      23,    9, 1248,    2, 0x24 /* Private | MethodCloned */,
      23,    8, 1267,    2, 0x24 /* Private | MethodCloned */,
      23,    7, 1284,    2, 0x24 /* Private | MethodCloned */,
      23,    6, 1299,    2, 0x24 /* Private | MethodCloned */,
      34,    1, 1312,    2, 0x04 /* Private */,
      35,    0, 1315,    2, 0x04 /* Private */,
      36,    1, 1316,    2, 0x04 /* Private */,

 // slots: name, argc, parameters, tag, flags
      38,    1, 1319,    2, 0x0a /* Public */,
      40,    1, 1322,    2, 0x0a /* Public */,
      41,    1, 1325,    2, 0x0a /* Public */,
      43,    1, 1328,    2, 0x0a /* Public */,
      45,    1, 1331,    2, 0x0a /* Public */,
      46,    0, 1334,    2, 0x0a /* Public */,
      47,    1, 1335,    2, 0x0a /* Public */,
      49,    0, 1338,    2, 0x0a /* Public */,
      50,    1, 1339,    2, 0x0a /* Public */,
      52,    1, 1342,    2, 0x0a /* Public */,
      53,    1, 1345,    2, 0x0a /* Public */,
      54,    1, 1348,    2, 0x0a /* Public */,
      56,    0, 1351,    2, 0x0a /* Public */,
      57,    0, 1352,    2, 0x0a /* Public */,
      58,    2, 1353,    2, 0x0a /* Public */,
      58,    1, 1358,    2, 0x2a /* Public | MethodCloned */,
      61,    2, 1361,    2, 0x0a /* Public */,
      64,    0, 1366,    2, 0x0a /* Public */,
      65,    3, 1367,    2, 0x0a /* Public */,
      69,    0, 1374,    2, 0x08 /* Private */,
      70,    1, 1375,    2, 0x08 /* Private */,
      72,    0, 1378,    2, 0x08 /* Private */,
      73,    0, 1379,    2, 0x08 /* Private */,
      74,    0, 1380,    2, 0x08 /* Private */,
      75,    0, 1381,    2, 0x08 /* Private */,
      76,    0, 1382,    2, 0x08 /* Private */,
      77,    0, 1383,    2, 0x08 /* Private */,
      78,    0, 1384,    2, 0x08 /* Private */,
      79,    0, 1385,    2, 0x08 /* Private */,
      80,    0, 1386,    2, 0x08 /* Private */,
      81,    1, 1387,    2, 0x08 /* Private */,
      82,    0, 1390,    2, 0x08 /* Private */,
      83,    0, 1391,    2, 0x08 /* Private */,
      84,    1, 1392,    2, 0x08 /* Private */,
      85,    0, 1395,    2, 0x08 /* Private */,
      86,    1, 1396,    2, 0x08 /* Private */,
      87,    0, 1399,    2, 0x08 /* Private */,
      88,    0, 1400,    2, 0x08 /* Private */,
      89,    0, 1401,    2, 0x08 /* Private */,
      90,    0, 1402,    2, 0x08 /* Private */,
      91,    0, 1403,    2, 0x08 /* Private */,
      92,    0, 1404,    2, 0x08 /* Private */,
      93,    0, 1405,    2, 0x08 /* Private */,
      94,    0, 1406,    2, 0x08 /* Private */,
      95,    0, 1407,    2, 0x08 /* Private */,
      96,    0, 1408,    2, 0x08 /* Private */,
      97,    0, 1409,    2, 0x08 /* Private */,
      98,    0, 1410,    2, 0x08 /* Private */,
      99,    0, 1411,    2, 0x08 /* Private */,
     100,    0, 1412,    2, 0x08 /* Private */,
     101,    0, 1413,    2, 0x08 /* Private */,
     102,    0, 1414,    2, 0x08 /* Private */,
     103,    0, 1415,    2, 0x08 /* Private */,
     104,    0, 1416,    2, 0x08 /* Private */,
     105,    0, 1417,    2, 0x08 /* Private */,
     106,    0, 1418,    2, 0x08 /* Private */,
     107,    0, 1419,    2, 0x08 /* Private */,
     108,    1, 1420,    2, 0x08 /* Private */,
     109,    1, 1423,    2, 0x08 /* Private */,
     110,    0, 1426,    2, 0x08 /* Private */,
     111,    1, 1427,    2, 0x08 /* Private */,
     113,    0, 1430,    2, 0x08 /* Private */,
     114,    0, 1431,    2, 0x08 /* Private */,
     115,    0, 1432,    2, 0x08 /* Private */,
     116,    1, 1433,    2, 0x08 /* Private */,
     118,    1, 1436,    2, 0x08 /* Private */,
     120,    1, 1439,    2, 0x08 /* Private */,
     121,    1, 1442,    2, 0x08 /* Private */,
     123,    0, 1445,    2, 0x08 /* Private */,
     124,    1, 1446,    2, 0x08 /* Private */,
     125,    1, 1449,    2, 0x08 /* Private */,
     126,    1, 1452,    2, 0x08 /* Private */,
     127,    0, 1455,    2, 0x08 /* Private */,
     128,    1, 1456,    2, 0x08 /* Private */,
     129,    0, 1459,    2, 0x08 /* Private */,
     130,    1, 1460,    2, 0x08 /* Private */,
     131,    0, 1463,    2, 0x08 /* Private */,
     132,    0, 1464,    2, 0x08 /* Private */,
     133,    0, 1465,    2, 0x08 /* Private */,
     134,    0, 1466,    2, 0x08 /* Private */,
     135,    0, 1467,    2, 0x08 /* Private */,
     136,    0, 1468,    2, 0x08 /* Private */,
     137,    0, 1469,    2, 0x08 /* Private */,
     138,    0, 1470,    2, 0x08 /* Private */,
     139,    0, 1471,    2, 0x08 /* Private */,
     140,    0, 1472,    2, 0x08 /* Private */,
     141,    0, 1473,    2, 0x08 /* Private */,
     142,    1, 1474,    2, 0x08 /* Private */,
     143,    1, 1477,    2, 0x08 /* Private */,
     144,    0, 1480,    2, 0x08 /* Private */,
     145,    0, 1481,    2, 0x08 /* Private */,
     146,    0, 1482,    2, 0x08 /* Private */,
     147,    0, 1483,    2, 0x08 /* Private */,
     148,    0, 1484,    2, 0x08 /* Private */,
     149,    0, 1485,    2, 0x08 /* Private */,
     150,    0, 1486,    2, 0x08 /* Private */,
     151,    0, 1487,    2, 0x08 /* Private */,
     152,    0, 1488,    2, 0x08 /* Private */,
     153,    0, 1489,    2, 0x08 /* Private */,
     154,    0, 1490,    2, 0x08 /* Private */,
     155,    1, 1491,    2, 0x08 /* Private */,
     156,    0, 1494,    2, 0x08 /* Private */,
     157,    1, 1495,    2, 0x08 /* Private */,
     158,    1, 1498,    2, 0x08 /* Private */,
     159,    1, 1501,    2, 0x08 /* Private */,
     160,    1, 1504,    2, 0x08 /* Private */,
     161,    0, 1507,    2, 0x08 /* Private */,
     162,    0, 1508,    2, 0x08 /* Private */,
     163,    0, 1509,    2, 0x08 /* Private */,
     164,    0, 1510,    2, 0x08 /* Private */,
     165,    0, 1511,    2, 0x08 /* Private */,
     166,    0, 1512,    2, 0x08 /* Private */,
     167,    0, 1513,    2, 0x08 /* Private */,
     168,    0, 1514,    2, 0x08 /* Private */,
     169,    0, 1515,    2, 0x08 /* Private */,
     170,    1, 1516,    2, 0x08 /* Private */,
     171,    0, 1519,    2, 0x08 /* Private */,
     172,    1, 1520,    2, 0x08 /* Private */,
     173,    0, 1523,    2, 0x08 /* Private */,
     174,    0, 1524,    2, 0x08 /* Private */,
     175,   18, 1525,    2, 0x08 /* Private */,
     192,    1, 1562,    2, 0x08 /* Private */,
     194,    1, 1565,    2, 0x08 /* Private */,
     196,    1, 1568,    2, 0x08 /* Private */,
     197,    0, 1571,    2, 0x08 /* Private */,
     198,    1, 1572,    2, 0x08 /* Private */,
     199,    1, 1575,    2, 0x08 /* Private */,
     200,    0, 1578,    2, 0x08 /* Private */,
     201,    1, 1579,    2, 0x08 /* Private */,
     203,    1, 1582,    2, 0x08 /* Private */,
     205,    1, 1585,    2, 0x08 /* Private */,
     206,    0, 1588,    2, 0x08 /* Private */,
     207,    1, 1589,    2, 0x08 /* Private */,
     208,    1, 1592,    2, 0x08 /* Private */,
     209,    0, 1595,    2, 0x08 /* Private */,
     210,    0, 1596,    2, 0x08 /* Private */,
     211,    0, 1597,    2, 0x08 /* Private */,
     212,    1, 1598,    2, 0x08 /* Private */,
     213,    0, 1601,    2, 0x08 /* Private */,
     214,    0, 1602,    2, 0x08 /* Private */,
     215,    0, 1603,    2, 0x08 /* Private */,
     216,    0, 1604,    2, 0x08 /* Private */,
     217,    0, 1605,    2, 0x08 /* Private */,
     218,    1, 1606,    2, 0x08 /* Private */,
     219,    1, 1609,    2, 0x08 /* Private */,
     220,    1, 1612,    2, 0x08 /* Private */,
     221,    1, 1615,    2, 0x08 /* Private */,
     222,    1, 1618,    2, 0x08 /* Private */,
     223,    1, 1621,    2, 0x08 /* Private */,
     224,    1, 1624,    2, 0x08 /* Private */,
     225,    1, 1627,    2, 0x08 /* Private */,
     226,    1, 1630,    2, 0x08 /* Private */,
     227,    1, 1633,    2, 0x08 /* Private */,
     228,    1, 1636,    2, 0x08 /* Private */,
     229,    1, 1639,    2, 0x08 /* Private */,
     230,    1, 1642,    2, 0x08 /* Private */,
     231,    0, 1645,    2, 0x08 /* Private */,
     232,    0, 1646,    2, 0x08 /* Private */,
     233,    1, 1647,    2, 0x08 /* Private */,
     234,    1, 1650,    2, 0x08 /* Private */,
     235,    1, 1653,    2, 0x08 /* Private */,
     236,    1, 1656,    2, 0x08 /* Private */,
     237,    1, 1659,    2, 0x08 /* Private */,
     238,    2, 1662,    2, 0x08 /* Private */,
     238,    1, 1667,    2, 0x28 /* Private | MethodCloned */,
     238,    0, 1670,    2, 0x28 /* Private | MethodCloned */,
     241,    0, 1671,    2, 0x08 /* Private */,
     242,    1, 1672,    2, 0x08 /* Private */,
     244,    1, 1675,    2, 0x08 /* Private */,
     245,    1, 1678,    2, 0x08 /* Private */,
     246,    1, 1681,    2, 0x08 /* Private */,
     247,    1, 1684,    2, 0x08 /* Private */,
     248,    0, 1687,    2, 0x08 /* Private */,
     249,    0, 1688,    2, 0x08 /* Private */,
     250,    0, 1689,    2, 0x08 /* Private */,
     251,    0, 1690,    2, 0x08 /* Private */,
     252,    0, 1691,    2, 0x08 /* Private */,
     253,    0, 1692,    2, 0x08 /* Private */,
     254,    0, 1693,    2, 0x08 /* Private */,
     255,    1, 1694,    2, 0x08 /* Private */,
     256,    1, 1697,    2, 0x08 /* Private */,
     257,    1, 1700,    2, 0x08 /* Private */,
     258,    1, 1703,    2, 0x08 /* Private */,
     259,    1, 1706,    2, 0x08 /* Private */,
     260,    1, 1709,    2, 0x08 /* Private */,
     261,    0, 1712,    2, 0x08 /* Private */,
     262,    0, 1713,    2, 0x08 /* Private */,
     263,    0, 1714,    2, 0x08 /* Private */,
     264,    0, 1715,    2, 0x08 /* Private */,
     265,    1, 1716,    2, 0x08 /* Private */,
     266,    1, 1719,    2, 0x08 /* Private */,
     267,    1, 1722,    2, 0x08 /* Private */,
     268,    1, 1725,    2, 0x08 /* Private */,
     269,    1, 1728,    2, 0x08 /* Private */,
     270,    1, 1731,    2, 0x08 /* Private */,
     271,    0, 1734,    2, 0x08 /* Private */,
     272,    0, 1735,    2, 0x08 /* Private */,
     273,    1, 1736,    2, 0x08 /* Private */,
     274,    0, 1739,    2, 0x08 /* Private */,
     275,    0, 1740,    2, 0x08 /* Private */,
     276,    0, 1741,    2, 0x08 /* Private */,
     277,    1, 1742,    2, 0x08 /* Private */,
     278,    1, 1745,    2, 0x08 /* Private */,
     279,    1, 1748,    2, 0x08 /* Private */,
     281,    9, 1751,    2, 0x08 /* Private */,
     290,    1, 1770,    2, 0x08 /* Private */,
     292,    0, 1773,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt,    2,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 9, QMetaType::UInt, 0x80000000 | 12,    2,    8,   10,   11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool, QMetaType::Bool, QMetaType::Double, QMetaType::Int,   24,   25,   26,   27,   28,    2,    2,   30,   31,   32,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool, QMetaType::Bool, QMetaType::Double,   24,   25,   26,   27,   28,    2,    2,   30,   31,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool, QMetaType::Bool,   24,   25,   26,   27,   28,    2,    2,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool,   24,   25,   26,   27,   28,    2,    2,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12,   24,   25,   26,   27,   28,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29,   24,   25,   26,   27,   28,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::LongLong,   44,
    QMetaType::Void, QMetaType::LongLong,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 59,   48,   60,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   62,   63,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   66,   67,   68,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  117,
    QMetaType::Void, QMetaType::Int,  119,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  122,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  117,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, 0x80000000 | 59, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    2,  176,  177,  178,   24,  179,  180,  181,  182,  183,  184,  185,  186,  187,  188,  189,  190,  191,
    QMetaType::Void, QMetaType::Int,  193,
    QMetaType::Void, QMetaType::QString,  195,
    QMetaType::Void, QMetaType::Int,  193,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 202,    2,
    QMetaType::Void, QMetaType::QString,  204,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,  239,  240,
    QMetaType::Void, QMetaType::Bool,  239,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  243,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  112,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  193,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  195,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Bool, QMetaType::QString,  280,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::Bool, QMetaType::UInt, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   24,  282,  283,  284,  285,  286,  287,  288,  289,
    QMetaType::Void, QMetaType::Int,  291,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initializeAudioOutputStream((*reinterpret_cast< QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->stopAudioOutputStream(); break;
        case 2: _t->startAudioInputStream((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< AudioDevice*(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[5]))); break;
        case 3: _t->suspendAudioInputStream(); break;
        case 4: _t->resumeAudioInputStream(); break;
        case 5: _t->startDetector((*reinterpret_cast< AudioDevice::Channel(*)>(_a[1]))); break;
        case 6: _t->FFTSize((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->detectorClose(); break;
        case 8: _t->finished(); break;
        case 9: _t->transmitFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->endTransmitMessage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->endTransmitMessage(); break;
        case 12: _t->tune((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->tune(); break;
        case 14: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< int(*)>(_a[11]))); break;
        case 15: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 16: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 17: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 18: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7]))); break;
        case 19: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6]))); break;
        case 20: _t->outAttenuationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 21: _t->toggleShorthand(); break;
        case 22: _t->reset_audio_input_stream((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->showSoundInError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->showSoundOutError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->dataSink((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 27: _t->fastSink((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 28: _t->diskDat(); break;
        case 29: _t->freezeDecode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->guiUpdate(); break;
        case 31: _t->doubleClickOnCall((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 32: _t->doubleClickOnCall2((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 33: _t->doubleClickOnFoxQueue((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 34: _t->doubleClickOnFoxInProgress((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 35: _t->readFromStdout(); break;
        case 36: _t->p1ReadFromStdout(); break;
        case 37: _t->setXIT((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Frequency(*)>(_a[2]))); break;
        case 38: _t->setXIT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->setFreq4((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: _t->msgAvgDecode2(); break;
        case 41: _t->fastPick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 42: _t->initialize_fonts(); break;
        case 43: _t->on_houndButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_ft8Button_clicked(); break;
        case 45: _t->on_ft4Button_clicked(); break;
        case 46: _t->on_msk144Button_clicked(); break;
        case 47: _t->on_q65Button_clicked(); break;
        case 48: _t->on_jt65Button_clicked(); break;
        case 49: _t->on_tx1_editingFinished(); break;
        case 50: _t->on_tx2_editingFinished(); break;
        case 51: _t->on_tx3_editingFinished(); break;
        case 52: _t->on_tx4_editingFinished(); break;
        case 53: _t->on_tx5_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->on_tx6_editingFinished(); break;
        case 55: _t->on_actionSettings_triggered(); break;
        case 56: _t->on_monitorButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->on_actionAbout_triggered(); break;
        case 58: _t->on_autoButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->on_stopTxButton_clicked(); break;
        case 60: _t->on_stopButton_clicked(); break;
        case 61: _t->on_actionRelease_Notes_triggered(); break;
        case 62: _t->on_actionFT8_DXpedition_Mode_User_Guide_triggered(); break;
        case 63: _t->on_actionQSG_FST4_triggered(); break;
        case 64: _t->on_actionQSG_Q65_triggered(); break;
        case 65: _t->on_actionQSG_X250_M3_triggered(); break;
        case 66: _t->on_actionOnline_User_Guide_triggered(); break;
        case 67: _t->on_actionLocal_User_Guide_triggered(); break;
        case 68: _t->on_actionWide_Waterfall_triggered(); break;
        case 69: _t->on_actionOpen_triggered(); break;
        case 70: _t->on_actionOpen_next_in_directory_triggered(); break;
        case 71: _t->on_actionDecode_remaining_files_in_directory_triggered(); break;
        case 72: _t->on_actionDelete_all_wav_files_in_SaveDir_triggered(); break;
        case 73: _t->on_actionOpen_log_directory_triggered(); break;
        case 74: _t->on_actionNone_triggered(); break;
        case 75: _t->on_actionSave_all_triggered(); break;
        case 76: _t->on_actionKeyboard_shortcuts_triggered(); break;
        case 77: _t->on_actionSpecial_mouse_commands_triggered(); break;
        case 78: _t->on_actionSolve_FreqCal_triggered(); break;
        case 79: _t->on_actionCopyright_Notice_triggered(); break;
        case 80: _t->on_actionSWL_Mode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->on_DecodeButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->decode(); break;
        case 83: _t->decodeBusy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->on_EraseButton_clicked(); break;
        case 85: _t->band_activity_cleared(); break;
        case 86: _t->rx_frequency_activity_cleared(); break;
        case 87: _t->on_txFirstCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 88: _t->set_dateTimeQSO((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->set_ntx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 90: _t->on_txrb1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->on_txrb1_doubleClicked(); break;
        case 92: _t->on_txrb2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: _t->on_txrb3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: _t->on_txrb4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->on_txrb4_doubleClicked(); break;
        case 96: _t->on_txrb5_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 97: _t->on_txrb5_doubleClicked(); break;
        case 98: _t->on_txrb6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: _t->on_txb1_clicked(); break;
        case 100: _t->on_txb1_doubleClicked(); break;
        case 101: _t->on_txb2_clicked(); break;
        case 102: _t->on_txb3_clicked(); break;
        case 103: _t->on_txb4_clicked(); break;
        case 104: _t->on_txb4_doubleClicked(); break;
        case 105: _t->on_txb5_clicked(); break;
        case 106: _t->on_txb5_doubleClicked(); break;
        case 107: _t->on_txb6_clicked(); break;
        case 108: _t->on_lookupButton_clicked(); break;
        case 109: _t->on_addButton_clicked(); break;
        case 110: _t->on_dxCallEntry_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 111: _t->on_dxGridEntry_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 112: _t->on_dxCallEntry_editingFinished(); break;
        case 113: _t->on_dxCallEntry_returnPressed(); break;
        case 114: _t->on_genStdMsgsPushButton_clicked(); break;
        case 115: _t->on_logQSOButton_clicked(); break;
        case 116: _t->on_actionJT9_triggered(); break;
        case 117: _t->on_actionJT65_triggered(); break;
        case 118: _t->on_actionJT4_triggered(); break;
        case 119: _t->on_actionFT4_triggered(); break;
        case 120: _t->on_actionFT8_triggered(); break;
        case 121: _t->on_actionFST4_triggered(); break;
        case 122: _t->on_actionFST4W_triggered(); break;
        case 123: _t->on_TxFreqSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 124: _t->on_actionSave_decoded_triggered(); break;
        case 125: _t->on_actionQuickDecode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 126: _t->on_actionMediumDecode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 127: _t->on_actionDeepestDecode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 128: _t->bumpFqso((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->on_actionErase_ALL_TXT_triggered(); break;
        case 130: _t->on_reset_cabrillo_log_action_triggered(); break;
        case 131: _t->on_actionErase_wsjtx_log_adi_triggered(); break;
        case 132: _t->on_actionErase_WSPR_hashtable_triggered(); break;
        case 133: _t->on_actionExport_Cabrillo_log_triggered(); break;
        case 134: _t->startTx2(); break;
        case 135: _t->startP1(); break;
        case 136: _t->stopTx(); break;
        case 137: _t->stopTx2(); break;
        case 138: _t->on_rptSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 139: _t->killFile(); break;
        case 140: _t->on_tuneButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->on_pbR2T_clicked(); break;
        case 142: _t->on_pbT2R_clicked(); break;
        case 143: _t->acceptQSO((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< Frequency(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QDateTime(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QString(*)>(_a[13])),(*reinterpret_cast< const QString(*)>(_a[14])),(*reinterpret_cast< const QString(*)>(_a[15])),(*reinterpret_cast< const QString(*)>(_a[16])),(*reinterpret_cast< const QString(*)>(_a[17])),(*reinterpret_cast< const QByteArray(*)>(_a[18]))); break;
        case 144: _t->on_bandComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 145: _t->on_bandComboBox_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 146: _t->on_bandComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 147: _t->on_readFreq_clicked(); break;
        case 148: _t->on_RxFreqSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 149: _t->on_outAttenuation_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 150: _t->rigOpen(); break;
        case 151: _t->handle_transceiver_update((*reinterpret_cast< const Transceiver::TransceiverState(*)>(_a[1]))); break;
        case 152: _t->handle_transceiver_failure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 153: _t->on_actionAstronomical_data_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 154: _t->on_actionShort_list_of_add_on_prefixes_and_suffixes_triggered(); break;
        case 155: _t->band_changed((*reinterpret_cast< Frequency(*)>(_a[1]))); break;
        case 156: _t->monitor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 157: _t->end_tuning(); break;
        case 158: _t->stop_tuning(); break;
        case 159: _t->stopTuneATU(); break;
        case 160: _t->auto_tx_mode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 161: _t->on_actionMessage_averaging_triggered(); break;
        case 162: _t->on_actionActiveStations_triggered(); break;
        case 163: _t->on_contest_log_action_triggered(); break;
        case 164: _t->on_fox_log_action_triggered(); break;
        case 165: _t->on_actionColors_triggered(); break;
        case 166: _t->on_actionInclude_averaging_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 167: _t->on_actionInclude_correlation_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 168: _t->on_actionEnable_AP_DXcall_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 169: _t->on_actionAuto_Clear_Avg_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 170: _t->VHF_features_enabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 171: _t->on_sbSubmode_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 172: _t->on_cbShMsgs_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 173: _t->on_cbSWL_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 174: _t->on_cbTx6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 175: _t->on_cbMenus_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 176: _t->on_cbCQonly_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 177: _t->on_cbAutoSeq_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 178: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 179: _t->on_ClrAvgButton_clicked(); break;
        case 180: _t->on_actionWSPR_triggered(); break;
        case 181: _t->on_syncSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 182: _t->on_TxPowerComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 183: _t->on_sbTxPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 184: _t->on_cbUploadWSPR_Spots_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 185: _t->WSPR_config((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 186: _t->uploadWSPRSpots((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 187: _t->uploadWSPRSpots((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 188: _t->uploadWSPRSpots(); break;
        case 189: _t->TxAgain(); break;
        case 190: _t->uploadResponse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 191: _t->on_WSPRfreqSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 192: _t->on_sbFST4W_RxFreq_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 193: _t->on_sbFST4W_FTol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 194: _t->on_pbTxNext_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 195: _t->on_actionEcho_Graph_triggered(); break;
        case 196: _t->on_actionEcho_triggered(); break;
        case 197: _t->on_actionFast_Graph_triggered(); break;
        case 198: _t->fast_decode_done(); break;
        case 199: _t->on_actionMeasure_reference_spectrum_triggered(); break;
        case 200: _t->on_actionErase_reference_spectrum_triggered(); break;
        case 201: _t->on_actionMeasure_phase_response_triggered(); break;
        case 202: _t->on_sbTR_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 203: _t->on_sbTR_FST4W_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 204: _t->on_sbFtol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 205: _t->on_cbFast9_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 206: _t->on_sbCQTxFreq_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 207: _t->on_cbCQTx_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 208: _t->on_actionMSK144_triggered(); break;
        case 209: _t->on_actionQ65_triggered(); break;
        case 210: _t->on_actionFreqCal_triggered(); break;
        case 211: _t->splash_done(); break;
        case 212: _t->on_measure_check_box_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 213: _t->on_sbNlist_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 214: _t->on_sbNslots_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 215: _t->on_sbMax_dB_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 216: _t->on_sbF_Low_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 217: _t->on_sbF_High_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 218: _t->chk_FST4_freq_range(); break;
        case 219: _t->on_pbFoxReset_clicked(); break;
        case 220: _t->on_comboBoxHoundSort_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 221: _t->not_GA_warning_message(); break;
        case 222: _t->checkMSK144ContestType(); break;
        case 223: _t->on_pbBestSP_clicked(); break;
        case 224: _t->on_RoundRobin_currentTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 225: _t->setTxMsg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 226: { bool _r = _t->stdCall((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 227: _t->remote_configure((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< quint32(*)>(_a[5])),(*reinterpret_cast< quint32(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 228: _t->callSandP2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 229: _t->ARRL_Digi_Display(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 151:
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
            using _t = void (MainWindow::*)(QAudioDeviceInfo , unsigned  , unsigned  ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::initializeAudioOutputStream)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stopAudioOutputStream)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QAudioDeviceInfo const & , int , AudioDevice * , unsigned  , AudioDevice::Channel ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startAudioInputStream)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::suspendAudioInputStream)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::resumeAudioInputStream)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(AudioDevice::Channel ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startDetector)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(unsigned  ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::FFTSize)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::detectorClose)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::finished)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::transmitFrequency)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::endTransmitMessage)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::tune)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString , unsigned  , double , double , double , SoundOutput * , AudioDevice::Channel , bool , bool , double , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendMessage)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(qreal ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::outAttenuationChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::toggleShorthand)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::reset_audio_input_stream)) {
                *result = 22;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<MultiGeometryWidget<3,QMainWindow>::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return MultiGeometryWidget<3,QMainWindow>::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MultiGeometryWidget<3,QMainWindow>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 230)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 230;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 230)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 230;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::initializeAudioOutputStream(QAudioDeviceInfo _t1, unsigned  _t2, unsigned  _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::stopAudioOutputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::startAudioInputStream(QAudioDeviceInfo const & _t1, int _t2, AudioDevice * _t3, unsigned  _t4, AudioDevice::Channel _t5)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::suspendAudioInputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::resumeAudioInputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::startDetector(AudioDevice::Channel _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::FFTSize(unsigned  _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::detectorClose()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainWindow::finished()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::transmitFrequency(double _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::endTransmitMessage(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 10, _a);
}

// SIGNAL 12
void MainWindow::tune(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 12, _a);
}

// SIGNAL 14
void MainWindow::sendMessage(QString _t1, unsigned  _t2, double _t3, double _t4, double _t5, SoundOutput * _t6, AudioDevice::Channel _t7, bool _t8, bool _t9, double _t10, int _t11)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 14, _a);
}

// SIGNAL 20
void MainWindow::outAttenuationChanged(qreal _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindow::toggleShorthand()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainWindow::reset_audio_input_stream(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 22, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
