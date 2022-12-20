#ifndef Z64CUTSCENE_COMMANDS_H
#define Z64CUTSCENE_COMMANDS_H

#include "command_macros_base.h"
#include "z64cutscene.h"

#ifdef __GNUC__
#define CMD_F(a) {.f = (a)}
#else
#define CMD_F(a) {(a)}
#endif

/**
 * Marks the beginning of a cutscene script.
 */
#define CS_BEGIN_CUTSCENE(totalEntries, frameCount) CMD_W(totalEntries), CMD_W(frameCount)

/**
 * Defines data for `CutsceneCameraPoint`, which can be used with any of the `eye` or `at` camera commands.
 */
#define CS_CAM_POINT(continueFlag, roll, frame, viewAngle, xPos, yPos, zPos, unused) \
    CMD_BBH(continueFlag, roll, frame), CMD_F(viewAngle), CMD_HH(xPos, yPos), CMD_HH(zPos, unused)

/**
 * Declares a list of camera `eye` points that form a spline.
 * The points of the spline are interpolated over time to create smooth camera movements.
 */
#define CS_CAM_EYE_SPLINE(startFrame, endFrame) \
    CS_CMD_CAM_EYE_SPLINE, CMD_HH(0x0001, startFrame), CMD_HH(endFrame, 0x0000)

/**
 * Declares a list of camera `at` points that form a spline.
 * The points of the spline are interpolated over time to create smooth camera movements.
 */
#define CS_CAM_AT_SPLINE(startFrame, endFrame) \
    CS_CMD_CAM_AT_SPLINE, CMD_HH(0x0001, startFrame), CMD_HH(endFrame, 0x0000)

/**
 * Declares a list of camera `eye` points that form a spline.
 * The points of the spline are interpolated over time to create smooth camera movements.
 * The points are relative to the player's position and yaw.
 */
#define CS_CAM_EYE_SPLINE_REL_TO_PLAYER(startFrame, endFrame) \
    CS_CMD_CAM_EYE_SPLINE_REL_TO_PLAYER, CMD_HH(0x0001, startFrame), CMD_HH(endFrame, 0x0000)

/**
 * Declares a list of camera `at` points that form a spline.
 * The points of the spline are interpolated over time to create smooth camera movements.
 * The points are relative to the player's position and yaw.
 */
#define CS_CAM_AT_SPLINE_REL_TO_PLAYER(startFrame, endFrame) \
    CS_CMD_CAM_AT_SPLINE_REL_TO_PLAYER, CMD_HH(0x0001, startFrame), CMD_HH(endFrame, 0x0000)

/**
 * Declares a single `eye` point that will be set on the specified frame, without any interpolation.
 * Should only contain a single point, not a list.
 * This feature is not used in the final game and lacks polish, it is recommended to use splines in all cases.
 */
#define CS_CAM_EYE(startFrame, endFrame) \
    CS_CMD_CAM_EYE, CMD_HH(0x0001, startFrame), CMD_HH(endFrame, 0x0000)

/**
 * Declares a single `at` point that will be set on the specified frame, without any interpolation.
 * Should only contain a single point, not a list.
 * This feature is not used in the final game and lacks polish, it is recommended to use splines in all cases.
 */
#define CS_CAM_AT(startFrame, endFrame) \
    CS_CMD_CAM_AT, CMD_HH(0x0001, startFrame), CMD_HH(endFrame, 0x0000)

/**
 * Declares a list of `CS_ACTOR_CUE` entries.
 */
#define CS_ACTOR_CUE_LIST(cmdType, entries) \
    CMD_W(cmdType), CMD_W(entries)

//! TODO: rename to no longer be actor specific
/**
 * Defines a cue that an actor can listen for.
 * The actor can choose whether or not to use the position and rotation data supplied to it.
 * The cue `id` is a number that has an actor-specific meaning.
 */
#define CS_ACTOR_CUE(id, startFrame, endFrame, rotX, rotY, rotZ, startX, startY, startZ, endX, endY, endZ, unused0, unused1, unused2) \
    CMD_HH(id, startFrame), CMD_HH(endFrame, rotX), CMD_HH(rotY, rotZ), \
    CMD_W(startX), CMD_W(startY), CMD_W(startZ), \
    CMD_W(endX), CMD_W(endY), CMD_W(endZ), \
    CMD_F(unused0), CMD_F(unused1), CMD_F(unused2) // consider implementing as CMD_W

/**
 * Declares a list of `CS_PLAYER_CUE` entries.
 */
#define CS_PLAYER_CUE_LIST(entries) \
    CS_CMD_PLAYER_CUE, CMD_W(entries)

/**
 * A player cue is the same as `CS_ACTOR_CUE` but is specifically for player.
 */
#define CS_PLAYER_CUE CS_ACTOR_CUE // Just a thought

/**
 * Declares a list of `CS_MISC` entries.
 */
#define CS_MISC_LIST(entries) \
    CS_CMD_MISC, CMD_W(entries)

/**
 * Various miscellaneous commands.
 * @see `CutsceneMiscType` enum for the different types of commands.
 * @note setting `endFrame` to same value as `startFrame` will not behave as expected.
 * For commands that only need to last one frame, set `endFrame` to `startFrame + 1`.
 */
//! NOTE: ZAPD change required
#define CS_MISC(cmd, startFrame, endFrame, posX, posY, posZ) \
    CS_ACTOR_CUE(cmd, startFrame, endFrame, 0, 0, 0, posX, posY, posZ, posX, posY, posZ, 0, 0, 0)

/**
 * Declares a list of `CS_LIGHT_SETTING` entries.
 */
#define CS_LIGHT_SETTING_LIST(entries) \
    CS_CMD_LIGHT_SETTING, CMD_W(entries)

/**
 * Changes the environment lights to the specified setting.
 * The lighting change will take place immediately with no blending.
 */
//! NOTE: Same as CS_MISC
#define CS_LIGHTING(cmd, startFrame, endFrame, posX, posY, posZ) \
    CS_ACTOR_CUE(cmd, startFrame, endFrame, 0, 0, 0, posX, posY, posZ, posX, posY, posZ, 0, 0, 0)

/**
 * Declares a list of `CS_RUMBLE_CONTROLLER` entries.
 */
#define CS_RUMBLE_CONTROLLER_LIST(entries) \
    CS_CMD_RUMBLE_CONTROLLER, CMD_W(entries)

#define CS_RUMBLE_CONTROLLER(action, frameStart, frameEnd, sourceStrength, duration, decreaseRate, unused2, unused3) \
    CMD_HH(action, frameStart), CMD_HBB(frameEnd, sourceStrength, duration), CMD_BBH(decreaseRate, 0, 0)

/**
 * Declares a list of `CS_TEXT_*` entries.
 */
#define CS_TEXT_LIST(entries) \
    CS_CMD_TEXT, CMD_W(entries)

/**
 * Starts a textbox at the specified time.
 * For `CS_TEXT_OCARINA_ACTION`, `textId` is used as an ocarina action.
 * For a choice textbox, `altTextId1` is the top text id to branch to and `altTextId2` is the bottom.
 */
#define CS_TEXT(textId, startFrame, endFrame, type, altTextId1, altTextId2) \
    CMD_HH(textId, startFrame), CMD_HH(endFrame, type), CMD_HH(altTextId1, altTextId2)

#define CS_TEXT_NONE(startFrame, endFrame) \
    CS_TEXT(CS_TEXT_ID_NONE, startFrame, endFrame, 0xFFFF, CS_TEXT_ID_NONE, CS_TEXT_ID_NONE)

#define CS_TEXT_OCARINA_ACTION(ocarinaAction, startFrame, endFrame, messageId) \
    CS_TEXT(ocarinaAction, startFrame, endFrame, CS_TEXT_OCARINA_ACTION, messageId, CS_TEXT_ID_NONE)

/**
 * Controls various types of screen transitions.
 * @see `CutsceneTransitionType` for type options.
 */
#define CS_TRANSITION(type, startFrame, endFrame) \
    CS_CMD_TRANSITION, 1, CMD_HH(type, startFrame), CMD_HH(endFrame, endFrame)

/**
 * Declares a list of `CS_START_SEQ` entries.
 */
#define CS_START_SEQ_LIST(entries) \
    CS_CMD_START_SEQ, CMD_W(entries)

/**
 * Starts a sequence at the specified time.
 */
//! NOTE: Same as CS_MISC
#define CS_PLAY_BGM(cmd, startFrame, endFrame, posX, posY, posZ) \
    CS_ACTOR_CUE(cmd, startFrame, endFrame, 0, 0, 0, posX, posY, posZ, posX, posY, posZ, 0, 0, 0)

/**
 * Declares a list of `CS_STOP_SEQ` entries.
 */
//! NOTE: Same as CS_MISC
#define CS_STOP_SEQ_LIST(entries) \
    CS_CMD_STOP_SEQ, CMD_W(entries)

/**
 * Stops a sequence at the specified time.
 */
//! NOTE: Same as CS_MISC
#define CS_STOP_BGM(action, startFrame, endFrame, posX, posY, posZ) \
    CS_ACTOR_CUE(action, startFrame, endFrame, 0, 0, 0, posX, posY, posZ, posX, posY, posZ, 0, 0, 0)

/**
 * Declares a list of `CS_FADE_OUT_SEQ` entries.
 */
#define CS_FADE_OUT_SEQ_LIST(entries) \
    CS_CMD_FADE_OUT_SEQ, CMD_W(entries)

/**
 * Fade out the sequence that is playing on the specified sequence player, over the specified frame range.
 * @see `CutsceneFadeOutSeqPlayer`
 */
//! NOTE: Same as CS_MISC
#define CS_FADE_OUT_SEQ(action, startFrame, endFrame, posX, posY, posZ) \
    CS_ACTOR_CUE(action, startFrame, endFrame, 0, 0, 0, posX, posY, posZ, posX, posY, posZ, 0, 0, 0)

/**
 * Declares a list of `CS_TIME` entries.
 */
#define CS_TIME_LIST(entries) \
    CS_CMD_TIME, CMD_W(entries)

/**
 * Sets the time of day.
 * Both the day time and skybox time are set by this command.
 */
//! TODO: Eliminate action, unused2 from macro
#define CS_TIME(action, startFrame, endFrame, hour, min, unused2) \
    CMD_HH(0x0001, startFrame), \
    CMD_HBB(endFrame, hour, min), \
    0x00000000

/**
 * Sends the player to a new destination.
 * `destination` maps to a custom block of code that must implement the scene transition on its own.
 * This custom code can also do other tasks like changing age, setting flags, or any other setup that is needed
 * before going to the next destination.
 *
 * @see `CutsceneDestination`
 */
#define CS_DESTINATION(destination, startFrame, endFrame) \
    CS_CMD_DESTINATION, 1, CMD_HH(destination, startFrame), CMD_HH(endFrame, endFrame)

/**
 * Marks the end of a cutscene script.
 */
#define CS_END() 0xFFFFFFFF, 0x00000000


//! TODO: Update ZAPD and remove everything below this point
#define CS_UNK_DATA_LIST(cmdType, entries) CMD_W(cmdType), CMD_W(entries)

#define CS_UNK_DATA(unk1, unk2, unk3, unk4, unk5, unk6, unk7, unk8, unk9, unk10, unk11, unk12) \
    CMD_W(unk1), CMD_W(unk2), CMD_W(unk3), CMD_W(unk4), CMD_W(unk5), CMD_W(unk6), \
    CMD_W(unk7), CMD_W(unk8), CMD_W(unk9), CMD_W(unk10), CMD_W(unk11), CMD_W(unk12)

// TODO: Fix ZAPD and delete these
#define CS_CAM_POS_LIST                CS_CAM_EYE_SPLINE
#define CS_CAM_POS                     CS_CAM_POINT
#define CS_CAM_FOCUS_POINT_LIST        CS_CAM_AT_SPLINE
#define CS_CAM_FOCUS_POINT             CS_CAM_POINT
#define CS_CAM_POS_PLAYER_LIST         CS_CAM_EYE_SPLINE_REL_TO_PLAYER
#define CS_CAM_POS_PLAYER              CS_CAM_POINT
#define CS_CAM_FOCUS_POINT_PLAYER_LIST CS_CAM_AT_SPLINE_REL_TO_PLAYER
#define CS_CAM_FOCUS_POINT_PLAYER      CS_CAM_POINT
#define CS_NPC_ACTION_LIST             CS_ACTOR_CUE_LIST
#define CS_NPC_ACTION                  CS_ACTOR_CUE
#define CS_PLAYER_ACTION_LIST          CS_PLAYER_CUE_LIST
#define CS_PLAYER_ACTION               CS_PLAYER_CUE
#define CS_LIGHTING_LIST               CS_LIGHT_SETTING_LIST
#define CS_CMD_09_LIST                 CS_RUMBLE_CONTROLLER_LIST
#define CS_CMD_09                      CS_RUMBLE_CONTROLLER
#define CS_TEXT_DISPLAY_TEXTBOX        CS_TEXT
#define CS_TEXT_LEARN_SONG             CS_TEXT_OCARINA_ACTION
#define CS_SCENE_TRANS_FX              CS_TRANSITION
#define CS_PLAY_BGM_LIST               CS_START_SEQ_LIST
#define CS_STOP_BGM_LIST               CS_STOP_SEQ_LIST
#define CS_FADE_BGM_LIST               CS_FADE_OUT_SEQ_LIST
#define CS_FADE_BGM                    CS_FADE_OUT_SEQ
#define CS_TERMINATOR                  CS_DESTINATION

//#define CS_PLAY_BGM(seqId, startFrame, endFrame, unused0, unused1, unused2, unused3, unused4, unused5, unused6, unused7) \
//CS_START_SEQ((seqId)-1, startFrame, endFrame, unused0, unused1, unused2, unused3, unused4, unused5, unused6, unused7)

//#define CS_STOP_BGM(seqId, frame, endFrame, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8) \
//CS_STOP_SEQ((seqId)-1, frame, endFrame, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8)

//#define CS_LIGHTING(lightSetting, frame, endFrame, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8) \
//CS_LIGHT_SETTING((lightSetting)-1, frame, endFrame, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8)

#define CS_MISC_OLD(cmd, startFrame, endFrame, unused0, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8, unused9, unused10) \
   CMD_HH(cmd, startFrame), CMD_HH(endFrame, 0), \
   CMD_W(0), CMD_W(unused2), CMD_W(unused3), CMD_W(unused4), CMD_W(unused5), \
   CMD_W(unused6), CMD_W(unused7), 0x00000000, 0x00000000, 0x00000000

#define CS_LIGHT_SETTING(lightSetting, startFrame, endFrame, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8) \
   CMD_HH((lightSetting + 1), startFrame), CMD_HH(endFrame, 0), \
   CMD_W(0), CMD_W(unused3), CMD_W(unused4), CMD_W(unused5), CMD_W(unused6), \
   CMD_W(unused7), CMD_W(unused8), 0x00000000, 0x00000000, 0x00000000

#define CS_START_SEQ_OLD(seqId, startFrame, endFrame, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8) \
   CMD_HH((seqId + 1), startFrame), CMD_HH(endFrame, 0), \
   CMD_W(0), CMD_W(unused3), CMD_W(unused4), CMD_W(unused5), CMD_W(unused6), \
   CMD_W(unused7), CMD_W(unused8), 0x00000000, 0x00000000, 0x00000000

#define CS_STOP_SEQ(seqId, startFrame, endFrame, unused1, unused2, unused3, unused4, unused5, unused6, unused7, unused8) \
    CMD_HH((seqId + 1), startFrame), CMD_HH(endFrame, 0), \
    CMD_W(0), CMD_W(unused3), CMD_W(unused4), CMD_W(unused5), CMD_W(unused6), \
    CMD_W(unused7), CMD_W(unused8), 0x00000000, 0x00000000, 0x00000000

#define CS_FADE_OUT_SEQ_OLD(seqPlayer, startFrame, endFrame, unused0, unused1, unused2, unused3, unused4, unused5, unused6, unused7) \
   CMD_HH(seqPlayer, startFrame), CMD_HH(endFrame, 0), \
   CMD_W(0), CMD_W(unused2), CMD_W(unused3), CMD_W(unused4), CMD_W(unused5), \
   CMD_W(unused6), CMD_W(unused7), 0x00000000, 0x00000000, 0x00000000
#endif
