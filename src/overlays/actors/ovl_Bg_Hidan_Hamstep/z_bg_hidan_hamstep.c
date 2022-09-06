/*
 * File: z_bg_hidan_hamstep.c
 * Overlay: ovl_Bg_Hidan_Hamstep
 * Description: Stone Steps and Platforms (Fire Temple)
 */

#include "z_bg_hidan_hamstep.h"
#include "assets/objects/object_hidan_objects/object_hidan_objects.h"

#define FLAGS 0

void BgHidanHamstep_Init(Actor* thisx, PlayState* play);
void BgHidanHamstep_Destroy(Actor* thisx, PlayState* play);
void BgHidanHamstep_Update(Actor* thisx, PlayState* play);
void BgHidanHamstep_Draw(Actor* thisx, PlayState* play);

void func_808887C4(BgHidanHamstep* this, PlayState* play);
void func_80888860(BgHidanHamstep* this, PlayState* play);
void func_808889B8(BgHidanHamstep* this, PlayState* play);
void func_80888A58(BgHidanHamstep* this, PlayState* play);
void BgHidanHamstep_DoNothing(BgHidanHamstep* this, PlayState* play);

static f32 sYPosOffsets[] = {
    -20.0f, -120.0f, -220.0f, -320.0f, -420.0f,
};

static ColliderTrisElementInit sTrisElementsInit[2] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0x00000000, 0x00, 0x00 },
            { 0x40000040, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON,
            OCELEM_NONE,
        },
        { { { -20.0f, 3.0f, -20.0f }, { -20.0f, 3.0f, 20.0f }, { 20.0f, 3.0f, 20.0f } } },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0x00000000, 0x00, 0x00 },
            { 0x40000040, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON,
            OCELEM_NONE,
        },
        { { { 20.0f, 3.0f, 20.0f }, { 20.0f, 3.0f, -20.0f }, { -20.0f, 3.0f, -20.0f } } },
    },
};

static ColliderTrisInit sTrisInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_TRIS,
    },
    2,
    sTrisElementsInit,
};

const ActorInit Bg_Hidan_Hamstep_InitVars = {
    ACTOR_BG_HIDAN_HAMSTEP,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanHamstep),
    (ActorFunc)BgHidanHamstep_Init,
    (ActorFunc)BgHidanHamstep_Destroy,
    (ActorFunc)BgHidanHamstep_Update,
    (ActorFunc)BgHidanHamstep_Draw,
};

static BgHidanHamstepActionFunc sActionFuncs[] = {
    func_808887C4, func_80888860, func_808889B8, func_80888A58, BgHidanHamstep_DoNothing,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

static f32 sEffectPositions[][2] = {
    { -100.0f, 40.0f },  { 100.0f, 40.0f }, { -100.0f, 0.0f },   { 100.0f, 0.0f },
    { -100.0f, -40.0f }, { 100.0f, 40.0f }, { -100.0f, -80.0f }, { -50.0f, -80.0f },
    { 0.0f, -80.0f },    { 50.0f, -80.0f }, { 100.0f, -80.0f },
};

void BgHidanHamstep_SetupAction(BgHidanHamstep* this, s32 action) {
    this->action = action;
    this->actionFunc = sActionFuncs[action];
}

s32 BgHidanHamstep_SpawnChildren(BgHidanHamstep* this, PlayState* play2) {
    BgHidanHamstep* step = this;
    s32 i;
    Vec3f pos;
    f32 sin;
    f32 cos;
    s16 params;
    PlayState* play = play2;

    pos.y = this->bg.actor.home.pos.y - 100.0f;
    pos = pos; // Required to match
    sin = Math_SinS(this->bg.actor.shape.rot.y + 0x8000);
    cos = Math_CosS(this->bg.actor.shape.rot.y + 0x8000);

    for (i = 0; i < 5; i++) {
        pos.x = (((i * 160.0f) + 60.0f) * sin) + this->bg.actor.home.pos.x;
        pos.z = (((i * 160.0f) + 60.0f) * cos) + this->bg.actor.home.pos.z;

        params = (i + 1) & 0xFF;
        params |= (this->bg.actor.params & 0xFF00);

        step = (BgHidanHamstep*)Actor_SpawnAsChild(&play->actorCtx, &step->bg.actor, play, ACTOR_BG_HIDAN_HAMSTEP,
                                                   pos.x, pos.y, pos.z, this->bg.actor.world.rot.x,
                                                   this->bg.actor.world.rot.y, this->bg.actor.world.rot.z, params);

        if (step == NULL) {
            return 0;
        }
    }
    return 1;
}

void BgHidanHamstep_Init(Actor* thisx, PlayState* play) {
    BgHidanHamstep* this = (BgHidanHamstep*)thisx;
    s32 pad;
    CollisionHeader* colHeader = NULL;
    Vec3f sp48[3];
    s32 i;
    s32 i2;
    BgHidanHamstep* step;

    BgActor_Init(&this->bg, DPM_PLAYER);
    Actor_ProcessInitChain(&this->bg.actor, sInitChain);

    if ((this->bg.actor.params & 0xFF) == 0) {
        Collider_InitTris(play, &this->collider);
        Collider_SetTris(play, &this->collider, &this->bg.actor, &sTrisInit, this->colliderItems);

        for (i = 0; i < 2; i++) {
            for (i2 = 0; i2 < 3; i2++) {
                sp48[i2].x = sTrisInit.elements[i].dim.vtx[i2].x + this->bg.actor.home.pos.x;
                sp48[i2].y = sTrisInit.elements[i].dim.vtx[i2].y + this->bg.actor.home.pos.y;
                sp48[i2].z = sTrisInit.elements[i].dim.vtx[i2].z + this->bg.actor.home.pos.z;
            }
            Collider_SetTrisVertices(&this->collider, i, &sp48[0], &sp48[1], &sp48[2]);
        }
    }

    if ((this->bg.actor.params & 0xFF) == 0) {
        CollisionHeader_GetVirtual(&gFireTempleStoneStep1Col, &colHeader);
    } else {
        CollisionHeader_GetVirtual(&gFireTempleStoneStep2Col, &colHeader);
    }

    this->bg.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->bg.actor, colHeader);

    if (Flags_GetSwitch(play, (this->bg.actor.params >> 8) & 0xFF)) {
        if ((this->bg.actor.params & 0xFF) == 0) {
            this->bg.actor.world.pos.y = this->bg.actor.home.pos.y + (-20.0f);
            BgHidanHamstep_SetupAction(this, 4);
        } else {
            this->bg.actor.world.pos.y = sYPosOffsets[(this->bg.actor.params & 0xFF) - 1] + this->bg.actor.home.pos.y;
            BgHidanHamstep_SetupAction(this, 4);
        }
    } else if ((this->bg.actor.params & 0xFF) == 0) {
        BgHidanHamstep_SetupAction(this, 0);
    } else {
        BgHidanHamstep_SetupAction(this, 2);
    }

    this->bg.actor.gravity = -1.2f;
    this->bg.actor.minVelocityY = -12.0f;

    if ((this->bg.actor.params & 0xFF) == 0) {
        // "Fire Temple Object [Hammer Step] appears"
        osSyncPrintf("◯◯◯炎の神殿オブジェクト【ハンマーステップ】出現\n");
        if (BgHidanHamstep_SpawnChildren(this, play) == 0) {
            step = this;

            // "[Hammer Step] I can't create a step!"
            osSyncPrintf("【ハンマーステップ】 足場産れない！！\n");
            osSyncPrintf("%s %d\n", "../z_bg_hidan_hamstep.c", 425);

            while (step != NULL) {
                Actor_Kill(&step->bg.actor);
                step = (BgHidanHamstep*)step->bg.actor.child;
            }
        }
    }
}

void BgHidanHamstep_Destroy(Actor* thisx, PlayState* play) {
    BgHidanHamstep* this = (BgHidanHamstep*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->bg.bgId);

    if ((this->bg.actor.params & 0xFF) == 0) {
        Collider_DestroyTris(play, &this->collider);
    }
}

void func_808884C8(BgHidanHamstep* step, PlayState* play) {
    Vec3f pos = step->bg.actor.world.pos;
    s32 i;
    f32 sin;
    f32 cos;

    pos.y -= 20.0f;

    func_80033480(play, &pos, 0.0f, 0, 600, 300, 0);

    sin = Math_SinS(step->bg.actor.shape.rot.y + 0x8000);
    cos = Math_CosS(step->bg.actor.shape.rot.y + 0x8000);

    pos.y = step->bg.actor.world.pos.y;

    for (i = 0; i < ARRAY_COUNT(sEffectPositions); i++) {
        pos.x = (sEffectPositions[i][1] * sin) + (sEffectPositions[i][0] * cos) + step->bg.actor.world.pos.x;
        pos.z = ((sEffectPositions[i][1] * cos) - (sEffectPositions[i][0] * sin)) + step->bg.actor.world.pos.z;
        func_80033480(play, &pos, 0.0f, 0, 150, 150, 0);
    }
}

void func_80888638(BgHidanHamstep* this, PlayState* play) {
    BgHidanHamstep* child = (BgHidanHamstep*)this->bg.actor.child;

    while (child != NULL) {
        if ((child->bg.actor.params & 0xFF) != 0) {
            func_808884C8(child, play);
        }
        child = (BgHidanHamstep*)child->bg.actor.child;
    }
}

void func_80888694(BgHidanHamstep* this, BgHidanHamstep* parent) {
    BgHidanHamstep* child;

    if ((this->bg.actor.params & 0xFF) >= 2) {
        if (parent->bg.actor.world.pos.y < this->bg.actor.world.pos.y) {
            this->bg.actor.world.pos.y = parent->bg.actor.world.pos.y;
        } else if ((this->bg.actor.world.pos.y - parent->bg.actor.world.pos.y) < -100.0f) {
            this->bg.actor.world.pos.y = parent->bg.actor.world.pos.y - 100.0f;
        }
    }

    child = (BgHidanHamstep*)this->bg.actor.child;

    while (child != NULL) {
        if (this->bg.actor.world.pos.y < child->bg.actor.world.pos.y) {
            child->bg.actor.world.pos.y = this->bg.actor.world.pos.y;
        }
        child = (BgHidanHamstep*)child->bg.actor.child;
    }
}

void func_80888734(BgHidanHamstep* this) {
    BgHidanHamstep* parent = (BgHidanHamstep*)this->bg.actor.parent;
    f32 frameDivisor = R_UPDATE_RATE * 0.5f;

    if (parent != NULL) {
        this->bg.actor.velocity.y = parent->bg.actor.velocity.y;

        if ((this->bg.actor.params & 0xFF) == 1) {
            this->bg.actor.world.pos.y = parent->bg.actor.world.pos.y - 100.0f;
        } else {
            this->bg.actor.world.pos.y += (this->bg.actor.velocity.y * frameDivisor);
        }

        func_80888694(this, parent);
    }
}

void func_808887C4(BgHidanHamstep* this, PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        OnePointCutscene_Init(play, 3310, 100, &this->bg.actor, CAM_ID_MAIN);
        Audio_PlayActorSfx2(&this->bg.actor, NA_SE_EV_HAMMER_SWITCH);
        this->collider.base.acFlags = AC_NONE;
        BgHidanHamstep_SetupAction(this, 1);
        Flags_SetSwitch(play, (this->bg.actor.params >> 8) & 0xFF);
    } else {
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    }
}

void func_80888860(BgHidanHamstep* this, PlayState* play) {
    s32 pad;
    s32 pad2;
    s32 quakeIndex;

    Actor_MoveForward(&this->bg.actor);

    if (((this->bg.actor.world.pos.y - this->bg.actor.home.pos.y) < (-20.0f - this->bg.actor.minVelocityY)) &&
        (this->bg.actor.velocity.y <= 0.0f)) {
        this->unk_244++;

        if (this->unk_244 >= 7) {
            this->bg.actor.world.pos.y = this->bg.actor.home.pos.y + -20.0f;
            BgHidanHamstep_SetupAction(this, 4);
        } else {
            this->bg.actor.velocity.y *= -0.24f;

            if (1) {}

            if (this->unk_244 == 1) {
                quakeIndex = Quake_Add(GET_ACTIVE_CAM(play), 3);
                Quake_SetSpeed(quakeIndex, -15536);
                Quake_SetQuakeValues(quakeIndex, 0, 0, 500, 0);
                Quake_SetCountdown(quakeIndex, 20);
                Audio_PlayActorSfx2(&this->bg.actor, NA_SE_EV_BLOCK_BOUND);
                func_800AA000(this->bg.actor.xyzDistToPlayerSq, 255, 20, 150);
                func_80888638(this, play);
                osSyncPrintf("A(%d)\n", this->bg.actor.params);
            }
        }
    }
}

void func_808889B8(BgHidanHamstep* this, PlayState* play) {
    s32 pad;
    BgHidanHamstep* parent = (BgHidanHamstep*)this->bg.actor.parent;

    func_80888734(this);

    if ((parent->action == 4) || ((parent->action == 3) && (parent->unk_244 >= 5))) {
        if ((this->bg.actor.params & 0xFF) == 1) {
            this->bg.actor.world.pos.y = sYPosOffsets[(this->bg.actor.params & 0xFF) - 1] + this->bg.actor.home.pos.y;
            BgHidanHamstep_SetupAction(this, 4);
        } else {
            BgHidanHamstep_SetupAction(this, 3);
        }
    }
}

void func_80888A58(BgHidanHamstep* this, PlayState* play) {
    s32 pad;
    s32 pad2;
    s32 quakeIndex;

    Actor_MoveForward(&this->bg.actor);
    func_80888694(this, (BgHidanHamstep*)this->bg.actor.parent);

    if (((this->bg.actor.params & 0xFF) <= 0) || ((this->bg.actor.params & 0xFF) >= 6)) {
        // "[Hammer Step] arg_data strange (arg_data = %d)"
        osSyncPrintf("【ハンマーステップ】 arg_data おかしい (arg_data = %d)", this->bg.actor.params);
        osSyncPrintf("%s %d\n", "../z_bg_hidan_hamstep.c", 696);
    }

    if (((this->bg.actor.world.pos.y - this->bg.actor.home.pos.y) <=
         sYPosOffsets[(this->bg.actor.params & 0xFF) - 1]) &&
        (this->bg.actor.velocity.y <= 0.0f)) {
        this->unk_244++;

        if (this->unk_244 >= 7) {
            this->bg.actor.world.pos.y = sYPosOffsets[(this->bg.actor.params & 0xFF) - 1] + this->bg.actor.home.pos.y;
            BgHidanHamstep_SetupAction(this, 3);
        } else {
            this->bg.actor.velocity.y *= -0.24f;

            if (1) {}

            if (this->unk_244 == 1) {
                quakeIndex = Quake_Add(GET_ACTIVE_CAM(play), 3);
                Quake_SetSpeed(quakeIndex, -15536);
                Quake_SetQuakeValues(quakeIndex, 20, 1, 0, 0);
                Quake_SetCountdown(quakeIndex, 7);

                Audio_PlayActorSfx2(&this->bg.actor, NA_SE_EV_BLOCK_BOUND);
                func_800AA000(10000.0f, 255, 20, 150);
                func_808884C8(this, play);

                if ((this->bg.actor.params & 0xFF) == 5) {
                    func_80078884(NA_SE_SY_CORRECT_CHIME);
                }

                osSyncPrintf("B(%d)\n", this->bg.actor.params);
            }
        }
    }
}

void BgHidanHamstep_DoNothing(BgHidanHamstep* this, PlayState* play) {
}

void BgHidanHamstep_Update(Actor* thisx, PlayState* play) {
    BgHidanHamstep* this = (BgHidanHamstep*)thisx;

    this->actionFunc(this, play);
}

void BgHidanHamstep_Draw(Actor* thisx, PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, "../z_bg_hidan_hamstep.c", 782);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);

    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(play->state.gfxCtx, "../z_bg_hidan_hamstep.c", 787),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    if ((thisx->params & 0xFF) == 0) {
        gSPDisplayList(POLY_OPA_DISP++, gFireTempleStoneStep1DL);
    } else {
        gSPDisplayList(POLY_OPA_DISP++, gFireTempleStoneStep2DL);
    }

    CLOSE_DISPS(play->state.gfxCtx, "../z_bg_hidan_hamstep.c", 796);
}
