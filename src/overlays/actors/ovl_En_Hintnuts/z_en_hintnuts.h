#ifndef _Z_EN_HINTNUTS_H_
#define _Z_EN_HINTNUTS_H_

#include "ultra64.h"
#include "global.h"

struct EnHintnuts;

typedef void (*EnHintnutsActionFunc)(struct EnHintnuts*, GlobalContext*);

typedef struct EnHintnuts {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ EnHintnutsActionFunc actionFunc;
    /* 0x0194 */ s16 animFlagAndTimer; // 0x1000 bit denotes which animation
    /* 0x0196 */ s16 unk_196;
    /* 0x0198 */ u16 textIdCopy;
    /* 0x019A */ Vec3s limbDrawTable[10];
    /* 0x01D6 */ Vec3s transitionDrawTable[10];
    /* 0x0214 */ ColliderCylinder collider;
} EnHintnuts; // size = 0x0260

extern const ActorInit En_Hintnuts_InitVars;

#endif
