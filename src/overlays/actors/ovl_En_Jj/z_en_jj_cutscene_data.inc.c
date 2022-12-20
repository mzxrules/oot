#include "z_en_jj.h"
#include "z64cutscene_commands.h"

// clang-format off
CutsceneData D_80A88164[] = {
    CS_BEGIN_CUTSCENE(26, 1629),
    CS_PLAYER_CUE_LIST(4),
        CS_PLAYER_CUE(0x0005, 0, 240, 0x0000, 0x4000, 0x0000, -1732, 52, -44, -1732, 52, -44, 1.1393037e-29f, 0.0f, 1.4e-45f),
        CS_PLAYER_CUE(0x0003, 240, 255, 0x0000, 0x4000, 0x0000, -1732, 52, -44, -1732, 52, -44, 1.1393037e-29f, 0.0f, 1.4e-45f),
        CS_PLAYER_CUE(0x0006, 255, 285, 0x0000, 0x4000, 0x0000, -1732, 52, -44, -1732, 52, -44, 1.1393037e-29f, 0.0f, 1.4e-45f),
        CS_PLAYER_CUE(0x0020, 285, 300, 0x0000, 0xC000, 0x0000, -1732, 52, -44, -1537, 109, -44, 1.1393037e-29f, 0.0f, 1.4e-45f),
    CS_ACTOR_CUE_LIST(68, 4),
        CS_ACTOR_CUE(0x0001, 0, 234, 0x0000, 0x4000, 0x0000, -1665, 52, -44, -1665, 52, -44, 1.1393037e-29f, 0.0f, 1.4e-45f),
        CS_ACTOR_CUE(0x0002, 234, 241, 0x41F8, 0x0000, 0x0000, -1665, 52, -44, -1603, 130, -47, 8.857142f, 11.142858f, -8.857142f),
        CS_ACTOR_CUE(0x0002, 241, 280, 0x4031, 0x0000, 0x0000, -1603, 130, -47, -549, 130, -52, 27.02564f, 0.0f, -27.02564f),
        CS_ACTOR_CUE(0x0003, 280, 300, 0x0000, 0x0000, 0x0000, -549, 130, -52, -549, 130, -52, 0.0f, 0.0f, 0.0f),
    CS_ACTOR_CUE_LIST(67, 5),
        CS_ACTOR_CUE(0x0001, 0, 93, 0x0000, 0x0000, 0x0000, 0, 51, 124, 0, 51, 124, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0003, 93, 121, 0x0000, 0x0000, 0x0000, 0, 51, 124, 0, 51, 124, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0001, 121, 146, 0x0000, 0x0000, 0x0000, 0, 51, 124, 0, 51, 124, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0002, 146, 241, 0x0000, 0x0000, 0x0000, 0, 51, 124, 0, 51, 124, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0001, 241, 441, 0x0000, 0x0000, 0x0000, 0, 51, 124, 0, 51, 124, 0.0f, 0.0f, 0.0f),
    CS_ACTOR_CUE_LIST(69, 3),
        CS_ACTOR_CUE(0x0001, 0, 90, 0x0000, 0x0000, 0x0000, 0, -33, 9, 0, -33, 9, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0002, 90, 330, 0x0000, 0x0000, 0x0000, 0, -33, 9, 0, -62, 22, 0.0f, -0.12083333f, 0.0f),
        CS_ACTOR_CUE(0x0003, 330, 380, 0x0000, 0x0000, 0x0000, 0, -62, 22, 0, -62, 22, 0.0f, 0.0f, 0.0f),
    CS_MISC_LIST(1),
        CS_MISC_OLD(CS_MISC_STOP_CUTSCENE, 1095, 1161, 0x0000, 0x00000000, 0xFFFFFFD2, 0x00000000, 0xFFFFFFD0, 0xFFFFFFD2, 0x00000000, 0xFFFFFFD0, 0x00000000, 0x00000000, 0x00000000),
    CS_TRANSITION(CS_TRANS_TRIGGER_INSTANCE, 0, 10),
    CS_PLAYER_CUE_LIST(1),
        CS_PLAYER_CUE(0x0035, 300, 1629, 0x0000, 0x0000, 0x0000, -1630, 52, -52, -1630, 52, -52, 0.0f, 0.0f, 0.0f),
    CS_CAM_EYE_SPLINE(0, 1091),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x015C),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x016D),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x017E),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x0223),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 45.399944f, -1641, 95, -41, 0x7065),
    CS_CAM_EYE_SPLINE(60, 1151),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1532, 251, 222, 0x015C),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1532, 251, 222, 0x016D),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1532, 251, 222, 0x017E),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1532, 251, 222, 0x0223),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 45.399944f, -1532, 251, 222, 0x7065),
    CS_CAM_EYE_SPLINE(90, 351),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1698, 382, 455, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1698, 382, 455, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1698, 382, 455, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1694, 380, 451, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 32.999897f, -1694, 380, 451, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 32.999897f, -1694, 380, 451, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 32.999897f, -1694, 380, 451, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 32.999897f, -1694, 380, 451, 0x0164),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 32.999897f, -1694, 380, 451, 0xAD78),
    CS_CAM_EYE_SPLINE(220, 392),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1641, 95, -41, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 45.399944f, -1641, 95, -41, 0x0000),
    CS_CAM_EYE_SPLINE(240, 1331),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1810, 65, -15, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1810, 65, -15, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1810, 65, -15, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1810, 65, -15, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 45.599945f, -1810, 65, -15, 0xAC10),
    CS_CAM_EYE_SPLINE(280, 1371),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1531, 95, -7, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1531, 95, -7, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1531, 95, -7, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, -1531, 95, -7, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 45.599945f, -1531, 95, -7, 0xAC10),
    CS_CAM_EYE_SPLINE(310, 1421),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1717, 83, -59, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1717, 83, -59, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1649, 177, -59, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1533, 224, -59, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -1243, 180, -59, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -953, 71, -55, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -953, 71, -55, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, -953, 71, -55, 0x0164),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 45.399944f, -953, 71, -55, 0xAD78),
    CS_CAM_EYE_SPLINE(355, 1466),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.600002f, -1830, 103, 18, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.600002f, -1830, 103, 18, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.600002f, -1830, 103, 18, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.600002f, -1830, 103, 18, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.600002f, -1830, 103, 18, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.600002f, -1830, 103, 18, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 60.600002f, -1830, 103, 18, 0x0000),
    CS_CAM_AT_SPLINE(0, 1120),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1724, -5, -45, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1724, -5, -45, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 45.399944f, -1724, -5, -45, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1724, -5, -45, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 45.399944f, -1724, -5, -45, 0xAC10),
    CS_CAM_AT_SPLINE(60, 1180),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1440, 241, 134, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1440, 241, 134, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 45.399944f, -1440, 241, 134, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1440, 241, 134, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 45.399944f, -1440, 241, 134, 0xAC10),
    CS_CAM_AT_SPLINE(90, 380),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1610, 348, 373, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1610, 348, 373, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 50, 45.399944f, -1610, 348, 373, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 35.399906f, -1614, 338, 367, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 32.999897f, -1614, 338, 367, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 32.999897f, -1614, 338, 367, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 32.999897f, -1614, 338, 367, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 32.999897f, -1614, 338, 367, 0x0164),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 32.999897f, -1614, 338, 367, 0xAD78),
    CS_CAM_AT_SPLINE(220, 421),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1724, -5, -45, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 70, 45.399944f, -1724, -5, -45, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 5, 45.399944f, -1724, -5, -45, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 6, 45.799946f, -1593, 150, -146, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1531, 152, -75, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -1531, 152, -75, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 45.399944f, -1531, 152, -75, 0x0000),
    CS_CAM_AT_SPLINE(240, 1360),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -1712, 74, -37, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -1712, 74, -37, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 45.599945f, -1712, 74, -37, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -1712, 74, -37, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 45.599945f, -1712, 74, -37, 0xAC10),
    CS_CAM_AT_SPLINE(280, 1400),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -1619, 99, -50, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -1619, 99, -50, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 45.599945f, -1619, 99, -50, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -1619, 99, -50, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 45.599945f, -1619, 99, -50, 0xAC10),
    CS_CAM_AT_SPLINE(310, 1450),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x0B, 30, 90.9996f, -1610, 141, -59, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x09, 10, 90.79961f, -1599, 114, -57, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0xFC, 10, 90.39961f, -1528, 192, -54, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 10, 90.59961f, -1427, 164, -54, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0xCB, 10, 90.39961f, -1138, 119, -37, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x20, 10, 90.39961f, -832, 50, -51, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 45.399944f, -836, 35, -51, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, -836, 35, -51, 0x0164),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 45.399944f, -836, 35, -51, 0xAD78),
    CS_CAM_AT_SPLINE(355, 1495),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 60.600002f, -1706, 111, -6, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 60.600002f, -1706, 111, -6, 0xAC34),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 10, 60.600002f, -1706, 111, -6, 0x4428),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 10, 60.600002f, -1721, 82, -42, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 60.600002f, -1721, 82, -42, 0xAC10),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 60.600002f, -1721, 82, -42, 0x0000),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 60.600002f, -1721, 82, -42, 0x0000),
    CS_TRANSITION(CS_TRANS_BLACK_FILL_IN, 335, 342),
    CS_DESTINATION(CS_DEST_JABU_JABU, 345, 395),
    CS_ACTOR_CUE_LIST(62, 1),
        CS_ACTOR_CUE(0x0001, 305, 494, 0x0000, 0x0000, 0x0000, -1399, 452, -53, -1399, 452, -53, 0.0f, 0.0f, 0.0f),
    CS_END(),
};
// clang-format on
