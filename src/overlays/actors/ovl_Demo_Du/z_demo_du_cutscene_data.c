#include "z_demo_du.h"
#include "z64cutscene_commands.h"

// clang-format off
static CutsceneData D_8096C1A4[] = {
    CS_BEGIN_CUTSCENE(31, 3000),
    CS_UNK_DATA_LIST(0x00000020, 1),
        CS_UNK_DATA(0x00010000, 0x0BB80000, 0x00000000, 0x00000000, 0xFFFFFFFC, 0x00000002, 0x00000000, 0xFFFFFFFC, 0x00000002, 0x00000000, 0x00000000, 0x00000000),
    CS_ACTOR_CUE_LIST(31, 5),
        CS_ACTOR_CUE(0x0001, 0, 546, 0x0000, 0x0000, 0x0000, 0, 216, -10, 0, 216, -10, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0002, 546, 547, 0x0000, 0x0000, 0x0000, 0, 216, -10, 0, 216, -10, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0004, 547, 616, 0x0000, 0x0000, 0x0000, 0, 216, -10, 0, 216, -10, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0002, 616, 667, 0x0000, 0x0000, 0x0000, 0, 216, -10, 0, 82, 0, 0.0f, -2.627451f, 0.0f),
        CS_ACTOR_CUE(0x0003, 667, 2834, 0x0000, 0x0000, 0x0000, 0, 82, 0, 0, 82, 0, 0.0f, 0.0f, 0.0f),
    CS_PLAYER_CUE_LIST(3),
        CS_PLAYER_CUE(0x000D, 0, 280, 0x0000, 0x6AAA, 0x0000, 0, 6, 0, 0, 6, 0, 0.0f, 0.0f, 1.401298464324817e-45f),
        CS_PLAYER_CUE(0x0005, 280, 531, 0x0000, 0x6AAA, 0x0000, 0, 6, 0, 0, 6, 0, 0.0f, 0.0f, 1.401298464324817e-45f),
        CS_PLAYER_CUE(0x0013, 531, 1716, 0x0000, 0xEAAA, 0x0000, 0, 6, 0, 0, 6, 0, 0.0f, 0.0f, 1.401298464324817e-45f),
    CS_ACTOR_CUE_LIST(41, 3),
        CS_ACTOR_CUE(0x0001, 0, 170, 0x0000, 0x0000, 0x0000, 98, 6, -169, 98, 6, -169, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0002, 170, 465, 0x0000, 0x0000, 0x0000, 98, 6, -169, 98, 6, -169, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0003, 465, 2915, 0x0000, 0x0000, 0x0000, 98, 6, -169, 98, 6, -169, 0.0f, 0.0f, 0.0f),
    CS_ACTOR_CUE_LIST(49, 1),
        CS_ACTOR_CUE(0x0001, 0, 3000, 0x0000, 0x0000, 0x0000, 0, -16, -121, 0, -16, -121, 0.0f, 0.0f, 0.0f),
    CS_TRANSITION(0x0001, 530, 539),
    CS_TRANSITION(0x0005, 540, 570),
    CS_LIGHT_SETTING_LIST(2),
        CS_LIGHT_SETTING(0x0001, 0, 10, 0x0000, 0x00000000, 0xFFFFFFDC, 0x00000000, 0x00000018, 0xFFFFFFDC, 0x00000000, 0x00000018),
        CS_LIGHT_SETTING(0x0001, 10, 3000, 0x0000, 0x00000000, 0xFFFFFFDC, 0x00000000, 0x00000018, 0xFFFFFFDC, 0x00000000, 0x00000018),
    CS_ACTOR_CUE_LIST(39, 1),
        CS_ACTOR_CUE(0x0001, 0, 3000, 0x0000, 0x0000, 0x0000, 0, 0, -2, 0, 0, -2, 0.0f, 0.0f, 0.0f),
    CS_TRANSITION(0x0001, 805, 835),
    CS_ACTOR_CUE_LIST(62, 1),
        CS_ACTOR_CUE(0x0004, 0, 3000, 0x0000, 0x0000, 0x0000, 32, 80, -51, 32, 80, -51, 0.0f, 0.0f, 0.0f),
    CS_TERMINATOR(DEATH_MOUNTAIN_CRATER_AFTER_FIRE_BLUE_WARP, 905, 1030),
    CS_START_SEQ_LIST(1),
        CS_START_SEQ(0x0044, 615, 616, 0x0000, 0x00000000, 0xFFFFFF97, 0x00000000, 0x00000030, 0xFFFFFF97, 0x00000000, 0x00000030),
    CS_FADE_SEQ_LIST(1),
        CS_FADE_SEQ(0x0004, 500, 550, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFC3, 0x0000006E, 0x00000000, 0xFFFFFFC3, 0x0000006E),
    CS_TEXT_LIST(10),
        CS_TEXT_NONE(0, 310),
        CS_TEXT(0x303C, 310, 323, 0x0000, 0x0000, 0x0000),
        CS_TEXT_NONE(323, 344),
        CS_TEXT(0x3045, 344, 394, 0x0000, 0x0000, 0x0000),
        CS_TEXT_NONE(394, 415),
        CS_TEXT(0x3046, 415, 465, 0x0000, 0x0000, 0x0000),
        CS_TEXT_NONE(465, 800),
        CS_TEXT(0x003C, 800, 805, 0x0000, 0x0000, 0x0000),
        CS_TEXT_NONE(805, 865),
        CS_TEXT(0x303D, 865, 875, 0x0000, 0x0000, 0x0000),
    CS_CAM_EYE_POINTS_LIST(0, 1361),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, -85, 3211, 795, 0x00C6),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, -85, 3211, 795, 0x00C8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, -85, 2925, 795, 0x00D7),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, 70, 974, 497, 0x00E8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, 320, 268, 296, 0x00EA),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, 312, 190, 150, 0x013D),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, 261, 61, -65, 0x013F),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, 261, 61, -65, 0x014E),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.4f, 261, 61, -65, 0x015F),
        CS_CAM_EYE_POINTS(CS_CMD_STOP, 0x00, 0, 60.4f, 261, 61, -65, 0x0161),
    CS_CAM_EYE_POINTS_LIST(263, 509),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 29.399885f, 89, 30, -103, 0x00C6),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.2f, 89, 30, -103, 0x00C8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.2f, 89, 30, -103, 0x00D7),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.2f, 89, 30, -103, 0x00E8),
        CS_CAM_EYE_POINTS(CS_CMD_STOP, 0x00, 0, 60.2f, 89, 30, -103, 0x00EA),
    CS_CAM_EYE_POINTS_LIST(333, 1424),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.999947f, 114, 50, -116, 0x00C6),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.999947f, 114, 50, -116, 0x00C8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.999947f, 114, 50, -116, 0x00D7),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.999947f, 114, 50, -116, 0x00E8),
        CS_CAM_EYE_POINTS(CS_CMD_STOP, 0x00, 0, 45.999947f, 114, 50, -116, 0x00EA),
    CS_CAM_EYE_POINTS_LIST(403, 1494),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, 26, 45, -10, 0x00C6),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, 26, 45, -10, 0x00C8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, 26, 45, -10, 0x00D7),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.599945f, 26, 45, -10, 0x00E8),
        CS_CAM_EYE_POINTS(CS_CMD_STOP, 0x00, 0, 45.599945f, 26, 45, -10, 0x00EA),
    CS_CAM_EYE_POINTS_LIST(443, 1624),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, 11, 23, -17, 0x00C6),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, 11, 23, -17, 0x00C8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, 27, 31, -45, 0x00D7),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, 45, 40, -76, 0x00E8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, 45, 40, -76, 0x00EA),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, 45, 40, -76, 0x013D),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.399944f, 45, 40, -76, 0x013F),
        CS_CAM_EYE_POINTS(CS_CMD_STOP, 0x00, 0, 45.399944f, 45, 40, -76, 0x002E),
    CS_CAM_EYE_POINTS_LIST(473, 1604),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.199944f, 192, 29, -246, 0x00C6),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.199944f, 192, 29, -246, 0x00C8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.199944f, 192, 29, -246, 0x00D7),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 45.199944f, 192, 29, -246, 0x00E8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 70.39992f, 192, 278, -246, 0x00EA),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 70.39992f, 192, 278, -246, 0x013D),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 70.39992f, 192, 278, -246, 0x013F),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 70.39992f, 192, 278, -246, 0x002E),
        CS_CAM_EYE_POINTS(CS_CMD_STOP, 0x00, 0, 70.39992f, 192, 278, -246, 0x0063),
    CS_CAM_EYE_POINTS_LIST(539, 881),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, 13, 854, 2, 0x00C6),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, 9, 853, 5, 0x00C8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, -3, 853, 5, 0x00D7),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, -9, 853, -6, 0x00E8),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, -2, 852, -17, 0x00EA),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, 9, 852, -17, 0x013D),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, 16, 852, -6, 0x013F),
        CS_CAM_EYE_POINTS(CS_CMD_CONTINUE, 0x00, 0, 60.0f, 9, 852, 5, 0x002E),
        CS_CAM_EYE_POINTS(CS_CMD_STOP, 0x00, 0, 60.0f, -3, 851, 5, 0x0063),
    CS_CAM_EYE_POINTS_REL_TO_PLAYER_LIST(615, 1796),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 0, 68.599945f, 0, 33, -27, 0x00C6),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 0, 68.599945f, 0, 33, -27, 0x00C8),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 0, 68.599945f, 0, 68, -26, 0x00D7),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 0, 68.599945f, 0, 103, -26, 0x00E8),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 0, 68.599945f, 0, 103, -26, 0x00EA),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 0, 68.599945f, 0, 103, -26, 0x013D),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 0, 68.599945f, 0, 103, -26, 0x013F),
        CS_CAM_EYE_REL_TO_PLAYER(CS_CMD_STOP, 0x00, 0, 68.599945f, 0, 103, -26, 0x002E),
    CS_CAM_AT_POINTS_LIST(0, 1390),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 60, 60.4f, -115, 3163, 585, 0x00C6),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 60, 60.4f, -115, 3163, 585, 0x00C8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 60, 60.4f, -115, 2877, 585, 0x00D7),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 60.4f, 27, 824, 348, 0x00E8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 40, 60.4f, 197, 143, 174, 0x00EA),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 40, 60.4f, 147, 100, 55, 0x013D),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 40, 60.4f, 55, 35, -65, 0x013F),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 1000, 60.4f, 55, 35, -65, 0x014E),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 60.4f, 55, 35, -65, 0x015F),
        CS_CAM_AT_POINTS(CS_CMD_STOP, 0x00, 30, 60.4f, 56, 35, -65, 0x0161),
    CS_CAM_AT_POINTS_LIST(263, 538),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 78.99979f, 87, 157, -391, 0x00C6),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 82, 78.79979f, 87, 157, -391, 0x00C8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 103, 70.79991f, 87, 157, -391, 0x00D7),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 60.2f, 87, 157, -391, 0x00E8),
        CS_CAM_AT_POINTS(CS_CMD_STOP, 0x00, 30, 60.2f, 87, 157, -391, 0x00EA),
    CS_CAM_AT_POINTS_LIST(333, 1453),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.999947f, -52, 127, -309, 0x00C6),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.999947f, -52, 127, -309, 0x00C8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 1000, 45.999947f, -52, 127, -309, 0x00D7),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.999947f, -52, 127, -309, 0x00E8),
        CS_CAM_AT_POINTS(CS_CMD_STOP, 0x00, 30, 45.999947f, -52, 127, -309, 0x00EA),
    CS_CAM_AT_POINTS_LIST(403, 1523),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -269, 186, 13, 0x00C6),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -269, 186, 13, 0x00C8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 1000, 45.599945f, -269, 186, 13, 0x00D7),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.599945f, -269, 186, 13, 0x00E8),
        CS_CAM_AT_POINTS(CS_CMD_STOP, 0x00, 30, 45.599945f, -269, 186, 13, 0x00EA),
    CS_CAM_AT_POINTS_LIST(443, 1653),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, 163, 70, -283, 0x00C6),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, 163, 70, -283, 0x00C8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, 177, 74, -309, 0x00D7),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, 193, 92, -337, 0x00E8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, 193, 92, -337, 0x00EA),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 1000, 45.399944f, 192, 91, -336, 0x013D),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 45.399944f, 192, 91, -336, 0x013F),
        CS_CAM_AT_POINTS(CS_CMD_STOP, 0x00, 30, 45.399944f, 192, 91, -336, 0x002E),
    CS_CAM_AT_POINTS_LIST(473, 1633),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 20, 45.199944f, -9, 57, -53, 0x00C6),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 20, 45.199944f, -9, 57, -53, 0x00C8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 20, 45.199944f, -9, 57, -54, 0x00D7),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 20, 45.999947f, -8, 57, -54, 0x00E8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 10, 70.39992f, 149, 547, -205, 0x00EA),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 10, 70.39992f, 149, 547, -205, 0x013D),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 1000, 70.39992f, 149, 547, -205, 0x013F),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 70.39992f, 149, 547, -205, 0x002E),
        CS_CAM_AT_POINTS(CS_CMD_STOP, 0x00, 30, 70.39992f, 149, 547, -205, 0x0063),
    CS_CAM_AT_POINTS_LIST(539, 930),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 50, 60.0f, 3, 6, -6, 0x00C6),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 40, 60.0f, 3, 6, -6, 0x00C8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 30, 50.999966f, 3, 6, -6, 0x00D7),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 20, 20.59985f, 3, 6, -6, 0x00E8),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 51, 10.799838f, 3, 6, -6, 0x00EA),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 50, 10.399838f, 3, 6, -6, 0x013D),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 50, 10.399838f, 3, 6, -6, 0x013F),
        CS_CAM_AT_POINTS(CS_CMD_CONTINUE, 0x00, 50, 10.199839f, 3, 6, -6, 0x002E),
        CS_CAM_AT_POINTS(CS_CMD_STOP, 0x00, 50, 10.999838f, 3, 6, -6, 0x0063),
    CS_CAM_AT_POINTS_REL_TO_PLAYER_LIST(615, 1825),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 30, 68.599945f, 0, 100, 5, 0x00C6),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 30, 68.599945f, 0, 101, 6, 0x00C8),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 30, 68.599945f, 1, 99, 41, 0x00D7),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 30, 68.599945f, 0, 42, 16, 0x00E8),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 30, 68.599945f, 0, 42, 16, 0x00EA),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 1000, 68.599945f, 0, 42, 16, 0x013D),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_CONTINUE, 0x00, 30, 68.599945f, 0, 42, 16, 0x013F),
        CS_CAM_AT_REL_TO_PLAYER(CS_CMD_STOP, 0x00, 30, 68.599945f, 0, 42, 16, 0x002E),
    CS_END(),
};
// clang-format on
