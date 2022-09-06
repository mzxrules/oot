/*
 * File: z_obj_hsblock.c
 * Overlay: ovl_Obj_Hsblock
 * Description: Stone Hookshot Target
 */

#include "z_obj_hsblock.h"
#include "assets/objects/object_d_hsblock/object_d_hsblock.h"

#define FLAGS 0

void ObjHsblock_Init(Actor* thisx, PlayState* play);
void ObjHsblock_Destroy(Actor* thisx, PlayState* play);
void ObjHsblock_Update(Actor* thisx, PlayState* play);
void ObjHsblock_Draw(Actor* thisx, PlayState* play);

void func_80B93DF4(ObjHsblock* this, PlayState* play);
void func_80B93E5C(ObjHsblock* this, PlayState* play);

void func_80B93D90(ObjHsblock* this);
void func_80B93DB0(ObjHsblock* this);
void func_80B93E38(ObjHsblock* this);

const ActorInit Obj_Hsblock_InitVars = {
    ACTOR_OBJ_HSBLOCK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_D_HSBLOCK,
    sizeof(ObjHsblock),
    (ActorFunc)ObjHsblock_Init,
    (ActorFunc)ObjHsblock_Destroy,
    (ActorFunc)ObjHsblock_Update,
    (ActorFunc)ObjHsblock_Draw,
};

static f32 D_80B940C0[] = { 85.0f, 85.0f, 0.0f };

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 400, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 2000, ICHAIN_STOP),
};

static CollisionHeader* sCollisionHeaders[] = { &gHookshotPostCol, &gHookshotPostCol, &gHookshotTargetCol };

static Color_RGB8 sFireTempleColor = { 165, 125, 55 };

static Gfx* sDLists[] = { gHookshotPostDL, gHookshotPostDL, gHookshotTargetDL };

void ObjHsblock_SetupAction(ObjHsblock* this, ObjHsblockActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void func_80B93B68(ObjHsblock* this, PlayState* play, CollisionHeader* collision, s32 moveFlags) {
    s32 pad;
    CollisionHeader* colHeader = NULL;
    s32 pad2[2];

    BgActor_Init(&this->bg, moveFlags);
    CollisionHeader_GetVirtual(collision, &colHeader);
    this->bg.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->bg.actor, colHeader);
    if (this->bg.bgId == BG_ACTOR_MAX) {
        osSyncPrintf("Warning : move BG 登録失敗(%s %d)(name %d)(arg_data 0x%04x)\n", "../z_obj_hsblock.c", 163,
                     this->bg.actor.id, this->bg.actor.params);
    }
}

void func_80B93BF0(ObjHsblock* this, PlayState* play) {
    if ((this->bg.actor.params >> 5) & 1) {
        Actor_SpawnAsChild(&play->actorCtx, &this->bg.actor, play, ACTOR_OBJ_ICE_POLY, this->bg.actor.world.pos.x,
                           this->bg.actor.world.pos.y, this->bg.actor.world.pos.z, this->bg.actor.world.rot.x,
                           this->bg.actor.world.rot.y, this->bg.actor.world.rot.z, 1);
    }
}

void ObjHsblock_Init(Actor* thisx, PlayState* play) {
    ObjHsblock* this = (ObjHsblock*)thisx;

    func_80B93B68(this, play, sCollisionHeaders[thisx->params & 3], DPM_UNK);
    Actor_ProcessInitChain(thisx, sInitChain);
    func_80B93BF0(this, play);

    switch (thisx->params & 3) {
        case 0:
        case 2:
            func_80B93D90(this);
            break;
        case 1:
            if (Flags_GetSwitch(play, (thisx->params >> 8) & 0x3F)) {
                func_80B93D90(this);
            } else {
                func_80B93DB0(this);
            }
    }

    mREG(13) = 255;
    mREG(14) = 255;
    mREG(15) = 255;
}

void ObjHsblock_Destroy(Actor* thisx, PlayState* play) {
    ObjHsblock* this = (ObjHsblock*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->bg.bgId);
}

void func_80B93D90(ObjHsblock* this) {
    ObjHsblock_SetupAction(this, NULL);
}

void func_80B93DB0(ObjHsblock* this) {
    this->bg.actor.flags |= ACTOR_FLAG_4;
    this->bg.actor.world.pos.y = this->bg.actor.home.pos.y - 105.0f;
    ObjHsblock_SetupAction(this, func_80B93DF4);
}

void func_80B93DF4(ObjHsblock* this, PlayState* play) {
    if (Flags_GetSwitch(play, (this->bg.actor.params >> 8) & 0x3F)) {
        func_80B93E38(this);
    }
}

void func_80B93E38(ObjHsblock* this) {
    ObjHsblock_SetupAction(this, func_80B93E5C);
}

void func_80B93E5C(ObjHsblock* this, PlayState* play) {
    Math_SmoothStepToF(&this->bg.actor.velocity.y, 16.0f, 0.1f, 0.8f, 0.0f);
    if (fabsf(Math_SmoothStepToF(&this->bg.actor.world.pos.y, this->bg.actor.home.pos.y, 0.3f,
                                 this->bg.actor.velocity.y, 0.3f)) < 0.001f) {
        this->bg.actor.world.pos.y = this->bg.actor.home.pos.y;
        func_80B93D90(this);
        this->bg.actor.flags &= ~ACTOR_FLAG_4;
    }
}

void ObjHsblock_Update(Actor* thisx, PlayState* play) {
    ObjHsblock* this = (ObjHsblock*)thisx;

    if (this->actionFunc != NULL) {
        this->actionFunc(this, play);
    }
    Actor_SetFocus(thisx, D_80B940C0[thisx->params & 3]);
}

void ObjHsblock_Draw(Actor* thisx, PlayState* play) {
    Color_RGB8* color;
    Color_RGB8 defaultColor;

    OPEN_DISPS(play->state.gfxCtx, "../z_obj_hsblock.c", 365);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);

    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(play->state.gfxCtx, "../z_obj_hsblock.c", 369),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    if (play->sceneId == SCENE_HIDAN) {
        color = &sFireTempleColor;
    } else {
        defaultColor.r = mREG(13);
        defaultColor.g = mREG(14);
        defaultColor.b = mREG(15);
        color = &defaultColor;
    }

    gDPSetEnvColor(POLY_OPA_DISP++, color->r, color->g, color->b, 255);
    gSPDisplayList(POLY_OPA_DISP++, sDLists[thisx->params & 3]);

    CLOSE_DISPS(play->state.gfxCtx, "../z_obj_hsblock.c", 399);
}
