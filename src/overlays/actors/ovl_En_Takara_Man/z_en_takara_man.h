#ifndef _Z_EN_TAKARA_MAN_H_
#define _Z_EN_TAKARA_MAN_H_

#include "ultra64.h"
#include "global.h"

struct EnTakaraMan;

typedef void (*EnTakaraManActionFunc)(struct EnTakaraMan*, GlobalContext*);

typedef struct EnTakaraMan {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ EnTakaraManActionFunc actionFunc;
    /* 0x0150 */ SkelAnime skelAnime;
    /* 0x0194 */ Vec3s limbDrawTbl[10];
    /* 0x01D0 */ Vec3s transitionDrawTbl[10];
    /* 0x020C */ s16 dialogState;
    /* 0x020E */ s16 eyeTextureIdx;
    /* 0x0210 */ s16 eyeTimer;
    /* 0x0212 */ s16 unk_212;
    /* 0x0214 */ s16 unk_214;
    /* 0x0216 */ s16 originalRoomNum;
    /* 0x0218 */ s16 unk_218;
    /* 0x021A */ s16 unk_21A;
    /* 0x022C */ f32 height;
    /* 0x0220 */ Vec3f pos;
    /* 0x022C */ Vec3s unk_22C;
    /* 0x0232 */ Vec3s unk_232;
} EnTakaraMan; // size = 0x0238

extern const ActorInit En_Takara_Man_InitVars;

#endif
