#include "z_bg_treemouth.h"
#include "z64cutscene_commands.h"

// clang-format off
CutsceneData D_808BCE20[] = {
    CS_BEGIN_CUTSCENE(12, 3000),
    CS_UNK_DATA_LIST(0x00000015, 1),
        CS_UNK_DATA(0x00010000, 0x0BB80000, 0x00000000, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x00000000, 0x00000000),
    CS_PLAYER_CUE_LIST(2),
        CS_PLAYER_CUE(0x0002, 0, 33, 0x54B2, 0x0000, 0x0000, 2614, 0, -451, 2808, 0, -559, 5.878788f, 0.0f, -5.878788f),
        CS_PLAYER_CUE(0x0004, 33, 42, 0x5945, 0x0000, 0x0000, 2808, 0, -559, 2857, 0, -594, 5.4444447f, 0.0f, -5.4444447f),
    CS_CAM_EYE_SPLINE(0, 1091),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2753, 46, -354, 0x59A8),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2753, 46, -354, 0x20B8),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2753, 46, -354, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2753, 46, -354, 0x6430),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 47.199955f, 2753, 46, -354, 0x0000),
    CS_CAM_EYE_SPLINE(60, 1271),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2753, 46, -354, 0x20BA),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2753, 46, -354, 0x44B8),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2753, 46, -354, 0x8080),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2705, 67, -302, 0x2D9A),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2596, 127, -195, 0x005E),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2596, 127, -195, 0xFFFF),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2596, 127, -195, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 47.199955f, 2596, 127, -195, 0x5B80),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 47.199955f, 2596, 127, -195, 0x7805),
    CS_CAM_AT_SPLINE(0, 1120),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2788, 23, -453, 0x20BA),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2787, 23, -453, 0x44B8),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 47.199955f, 2787, 23, -453, 0x8080),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2787, 23, -453, 0x2D9A),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 47.199955f, 2787, 23, -453, 0x005E),
    CS_CAM_AT_SPLINE(60, 1300),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2788, 23, -453, 0x20BA),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2787, 23, -453, 0x44B8),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2787, 23, -453, 0x8080),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2777, 72, -378, 0x2D9A),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2673, 127, -267, 0x005E),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2673, 127, -267, 0xFFFF),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 47.199955f, 2673, 127, -267, 0x0000),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 47.199955f, 2673, 127, -267, 0x5B80),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 47.199955f, 2673, 127, -267, 0x7805),
    CS_TEXT_LIST(4),
        CS_TEXT_NONE(0, 40),
        CS_TEXT(0x107D, 40, 60, 0x0000, 0xFFFF, 0xFFFF),
        CS_TEXT_NONE(60, 160),
        CS_TEXT(0x1015, 160, 170, 0x0000, 0xFFFF, 0xFFFF),
    CS_MISC_LIST(1),
        CS_MISC_OLD(CS_MISC_STOP_CUTSCENE, 180, 200, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFF7, 0xFFFFFFDB, 0x00000000, 0xFFFFFFF7, 0xFFFFFFDB, 0x00000000, 0x00000000, 0x00000000),
    CS_ACTOR_CUE_LIST(46, 1),
        CS_ACTOR_CUE(0x0001, 0, 3000, 0x0000, 0x0000, 0x0000, 0, -41, -28, 0, -41, -28, 0.0f, 0.0f, 0.0f),
    CS_ACTOR_CUE_LIST(62, 4),
        CS_ACTOR_CUE(0x0001, 0, 1, 0x0000, 0x0000, 0x0000, 2668, 46, -490, 2668, 46, -490, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0004, 1, 50, 0x5479, 0x0000, 0x0000, 2668, 46, -490, 2890, 43, -612, 4.5306125f, -0.06122449f, -4.5306125f),
        CS_ACTOR_CUE(0x0004, 50, 100, 0x505C, 0x0000, 0x0000, 2890, 43, -612, 3109, 121, -705, 4.38f, 1.56f, -4.38f),
        CS_ACTOR_CUE(0x0001, 100, 2084, 0x0000, 0x0000, 0x0000, 3109, 121, -705, 3109, 121, -705, 0.0f, 0.0f, 0.0f),
    CS_START_SEQ_LIST(1),
        CS_START_SEQ_OLD(NA_BGM_DEKU_TREE_CS, 140, 141, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFBA, 0x00000094, 0x00000000, 0xFFFFFFBA, 0x00000094),
    CS_FADE_OUT_SEQ_LIST(1),
        CS_FADE_OUT_SEQ_OLD(CS_FADE_OUT_BGM_MAIN, 0, 20, 0x0000, 0x00000000, 0xFFFFFFA2, 0x00000000, 0x00000027, 0xFFFFFFA2, 0x00000000, 0x00000027),
    CS_END(),
};

CutsceneData D_808BD2A0[] = {
    CS_BEGIN_CUTSCENE(9, 3000),
    CS_UNK_DATA_LIST(0x00000015, 1),
        CS_UNK_DATA(0x00010000, 0x0BB80000, 0x00000000, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x00000000, 0x00000000),
    CS_MISC_LIST(1),
        CS_MISC_OLD(CS_MISC_STOP_CUTSCENE, 90, 172, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFE3, 0x00000012, 0x00000000, 0xFFFFFFE3, 0x00000012, 0x00000000, 0x00000000, 0x00000000),
    CS_ACTOR_CUE_LIST(46, 1),
        CS_ACTOR_CUE(0x0001, 0, 3000, 0x0000, 0x0000, 0x0000, 0, -27, 26, 0, -27, 26, 0.0f, 0.0f, 0.0f),
    CS_CAM_EYE_SPLINE(0, 1091),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.0f, 3740, -141, -530, 0x7065),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0x6167),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0x6D5D),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0xF348),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 40.999928f, 3740, -141, -530, 0x9D94),
    CS_CAM_EYE_SPLINE_REL_TO_PLAYER(60, 1151),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.0f, -4, 5, 49, 0x7065),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.0f, -4, 5, 49, 0x6167),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.0f, -4, 5, 49, 0x6D5D),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.0f, -4, 5, 49, 0xF348),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 60.0f, -4, 5, 49, 0x9D94),
    CS_CAM_AT_SPLINE(0, 1120),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3777, -89, -605, 0x7065),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3777, -89, -605, 0x6167),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 40.999928f, 3776, -89, -605, 0x6D5D),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3776, -89, -605, 0xF348),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 40.999928f, 3776, -89, -604, 0x9D94),
    CS_CAM_AT_SPLINE_REL_TO_PLAYER(60, 1180),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 60.0f, 1, 35, -36, 0x7065),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 60.0f, 1, 35, -36, 0x6167),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 60.0f, 1, 35, -36, 0x6D5D),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 60.0f, 1, 35, -36, 0xF348),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 60.0f, 1, 35, -36, 0x9D94),
    CS_TEXT_LIST(2),
        CS_TEXT_NONE(0, 20),
        CS_TEXT(0x1016, 20, 80, 0x0000, 0xFFFF, 0xFFFF),
    CS_START_SEQ_LIST(1),
        CS_START_SEQ_OLD(NA_BGM_DEKU_TREE_CS, 0, 1, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFAC, 0x0000007E, 0x00000000, 0xFFFFFFAC, 0x0000007E),
    CS_END(),
}  ;

CutsceneData D_808BD520[] = {
    CS_BEGIN_CUTSCENE(8, 3000),
    CS_UNK_DATA_LIST(0x00000015, 1),
        CS_UNK_DATA(0x00010000, 0x0BB80000, 0x00000000, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x00000000, 0x00000000),
    CS_ACTOR_CUE_LIST(46, 2),
        CS_ACTOR_CUE(0x0001, 0, 20, 0x0000, 0x0000, 0x0000, 42, 0, 77, 42, 0, 77, 0.0f, 0.0f, 0.0f),
        CS_ACTOR_CUE(0x0003, 20, 357, 0x0000, 0x0000, 0x0000, 42, 0, 77, 42, 0, 77, 0.0f, 0.0f, 0.0f),
    CS_CAM_EYE_SPLINE(0, 1151),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 60.0f, 3740, -141, -530, 0x00EA),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0x00FB),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0x010C),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0x0198),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0x019A),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 40.999928f, 3740, -141, -530, 0x01AB),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 40.999928f, 3739, -141, -530, 0x01BC),
    CS_CAM_AT_SPLINE(0, 1180),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3777, -89, -605, 0x00EA),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3777, -89, -605, 0x00FB),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3777, -89, -605, 0x010C),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3763, -126, -621, 0x0198),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 40.999928f, 3763, -126, -621, 0x019A),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 40.999928f, 3763, -126, -621, 0x01AB),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 40.999928f, 3765, -118, -617, 0x01BC),
    CS_TEXT_LIST(2),
        CS_TEXT_NONE(0, 20),
        CS_TEXT(0x1017, 20, 60, 0x0000, 0xFFFF, 0xFFFF),
    CS_MISC_LIST(1),
        CS_MISC_OLD(CS_MISC_STOP_CUTSCENE, 100, 150, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFF5, 0x00000010, 0x00000000, 0xFFFFFFF5, 0x00000010, 0x00000000, 0x00000000, 0x00000000),
    CS_STOP_SEQ_LIST(1),
        CS_STOP_SEQ(NA_BGM_DEKU_TREE_CS, 90, 91, 0x0000, 0x00000000, 0xFFFFFFAC, 0x00000000, 0x00000034, 0xFFFFFFAC, 0x00000000, 0x00000034),
    CS_START_SEQ_LIST(1),
        CS_START_SEQ_OLD(NA_BGM_KOKIRI, 99, 100, 0x0000, 0x00000000, 0xFFFFFFD0, 0x00000000, 0x00000041, 0xFFFFFFD0, 0x00000000, 0x00000041),
    CS_END(),
};

CutsceneData D_808BD790[] = {
    CS_BEGIN_CUTSCENE(8, 3000),
    CS_UNK_DATA_LIST(0x00000015, 1),
        CS_UNK_DATA(0x00010000, 0x0BB80000, 0x00000000, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x0000000F, 0xFFFFFFDE, 0x00000000, 0x00000000, 0x00000000),
    CS_ACTOR_CUE_LIST(46, 1),
        CS_ACTOR_CUE(0x0001, 0, 119, 0x0000, 0x0000, 0x0000, 42, 0, 77, 42, 0, 77, 0.0f, 0.0f, 0.0f),
    CS_CAM_EYE_SPLINE(0, 1091),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 75.59984f, 3716, 790, -1171, 0x54EC),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 75.59984f, 3716, 790, -1171, 0x555C),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 75.59984f, 3716, 790, -1171, 0x55CC),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 0, 75.59984f, 3716, 790, -1171, 0x563C),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 0, 75.59984f, 3716, 790, -1171, 0x56AC),
    CS_CAM_AT_SPLINE(0, 1120),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 75.59984f, 3769, 718, -1186, 0x54EC),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 75.59984f, 3769, 718, -1186, 0x555C),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 1000, 75.59984f, 3769, 718, -1186, 0x55CC),
        CS_CAM_POINT(CS_CMD_CONTINUE, 0x00, 30, 75.59984f, 3769, 718, -1186, 0x563C),
        CS_CAM_POINT(CS_CMD_STOP, 0x00, 30, 75.59984f, 3769, 718, -1186, 0x56AC),
    CS_TEXT_LIST(2),
        CS_TEXT_NONE(0, 20),
        CS_TEXT(0x1018, 20, 60, 0x0000, 0xFFFF, 0xFFFF),
    CS_MISC_LIST(1),
        CS_MISC_OLD(CS_MISC_STOP_CUTSCENE, 80, 110, 0x0000, 0x00000000, 0x00000000, 0xFFFFFFEA, 0x00000006, 0x00000000, 0xFFFFFFEA, 0x00000006, 0x00000000, 0x00000000, 0x00000000),
    CS_STOP_SEQ_LIST(1),
        CS_STOP_SEQ(NA_BGM_DEKU_TREE_CS, 70, 71, 0x0000, 0x00000000, 0xFFFFFFB7, 0x00000000, 0x00000044, 0xFFFFFFB7, 0x00000000, 0x00000044),
    CS_START_SEQ_LIST(1),
        CS_START_SEQ_OLD(NA_BGM_KOKIRI, 79, 80, 0x0000, 0x00000000, 0xFFFFFFE8, 0x00000000, 0x0000003A, 0xFFFFFFE8, 0x00000000, 0x0000003A),
    CS_END(),
};
// clang-format on
