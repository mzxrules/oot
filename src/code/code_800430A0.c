#include "global.h"
#include "terminal.h"

/**
 * Update the `carriedActor`'s position based on the dynapoly actor identified by `bgId`.
 */
void DynaPolyActor_UpdateCarriedActorPos(CollisionContext* colCtx, s32 bgId, Actor* carriedActor) {
    MtxF prevTransform;
    MtxF prevTransformInv;
    MtxF curTransform;
    Vec3f pos;
    Vec3f tempPos;

    if (DynaPoly_IsBgIdBgActor(bgId)) {
        BgActor* bgActor = &colCtx->dyna.bgActors[bgId];

        SkinMatrix_SetTranslateRotateYXZScale(&prevTransform, bgActor->prevTransform.scale.x,
                                              bgActor->prevTransform.scale.y, bgActor->prevTransform.scale.z,
                                              bgActor->prevTransform.rot.x, bgActor->prevTransform.rot.y,
                                              bgActor->prevTransform.rot.z, bgActor->prevTransform.pos.x,
                                              bgActor->prevTransform.pos.y, bgActor->prevTransform.pos.z);

        if (SkinMatrix_Invert(&prevTransform, &prevTransformInv) != 2) {

            SkinMatrix_SetTranslateRotateYXZScale(&curTransform, bgActor->curTransform.scale.x,
                                                  bgActor->curTransform.scale.y, bgActor->curTransform.scale.z,
                                                  bgActor->curTransform.rot.x, bgActor->curTransform.rot.y,
                                                  bgActor->curTransform.rot.z, bgActor->curTransform.pos.x,
                                                  bgActor->curTransform.pos.y, bgActor->curTransform.pos.z);

            // Apply the movement of the dynapoly actor `bgId` over the last frame to the `carriedActor` position
            // pos = curTransform * prevTransformInv * pos
            // Note (curTransform * prevTransformInv) represents the transform relative to the previous frame
            SkinMatrix_Vec3fMtxFMultXYZ(&prevTransformInv, &carriedActor->world.pos, &tempPos);
            SkinMatrix_Vec3fMtxFMultXYZ(&curTransform, &tempPos, &pos);
            carriedActor->world.pos = pos;

#if OOT_DEBUG
            if (BGCHECK_XYZ_ABSMAX <= pos.x || pos.x <= -BGCHECK_XYZ_ABSMAX || BGCHECK_XYZ_ABSMAX <= pos.y ||
                pos.y <= -BGCHECK_XYZ_ABSMAX || BGCHECK_XYZ_ABSMAX <= pos.z || pos.z <= -BGCHECK_XYZ_ABSMAX) {

                PRINTF(VT_FGCOL(RED));
                //! @bug file and line are not passed to PRINTF
                // "Position is not valid"
                PRINTF(
                    "BGCheckCollection_typicalActorPos():位置が妥当ではありません。\npos (%f,%f,%f) file:%s line:%d\n",
                    pos.x, pos.y, pos.z);
                PRINTF(VT_RST);
            }
#endif
        }
    }
}

/**
 * Update the `carriedActor`'s Y rotation based on the dynapoly actor identified by `bgId`.
 */
void DynaPolyActor_UpdateCarriedActorRotY(CollisionContext* colCtx, s32 bgId, Actor* carriedActor) {
    if (DynaPoly_IsBgIdBgActor(bgId)) {
        s16 rotY = colCtx->dyna.bgActors[bgId].curTransform.rot.y - colCtx->dyna.bgActors[bgId].prevTransform.rot.y;

        if (carriedActor->id == ACTOR_PLAYER) {
            ((Player*)carriedActor)->yaw += rotY;
        }

        carriedActor->shape.rot.y += rotY;
        carriedActor->world.rot.y += rotY;
    }
}

void func_80043334(CollisionContext* colCtx, Actor* actor, s32 bgId) {
    if (DynaPoly_IsBgIdBgActor(bgId)) {
        DynaPolyActor* dynaActor = DynaPoly_GetActor(colCtx, bgId);
        if (dynaActor != NULL) {
            DynaPolyActor_SetActorOnTop(dynaActor);

            if (CHECK_FLAG_ALL(actor->flags, ACTOR_FLAG_26)) {
                func_80043538(dynaActor);
            }
        }
    }
}

/**
 * Update the `carriedActor`'s position and Y rotation based on the dynapoly actor identified by `bgId`, according to
 * the dynapoly actor's move flags (see `DYNA_TRANSFORM_POS` and `DYNA_TRANSFORM_ROT_Y`).
 */
s32 DynaPolyActor_TransformCarriedActor(CollisionContext* colCtx, s32 bgId, Actor* carriedActor) {
    s32 result = false;
    DynaPolyActor* dynaActor;

    if (!DynaPoly_IsBgIdBgActor(bgId)) {
        return false;
    }

    if ((colCtx->dyna.bgActorFlags[bgId] & BGACTOR_1) || !(colCtx->dyna.bgActorFlags[bgId] & BGACTOR_IN_USE)) {
        return false;
    }

    dynaActor = DynaPoly_GetActor(colCtx, bgId);

    if (dynaActor == NULL) {
        return false;
    }

    if (dynaActor->transformFlags & DYNA_TRANSFORM_POS) {
        DynaPolyActor_UpdateCarriedActorPos(colCtx, bgId, carriedActor);
        result = true;
    }

    if (dynaActor->transformFlags & DYNA_TRANSFORM_ROT_Y) {
        DynaPolyActor_UpdateCarriedActorRotY(colCtx, bgId, carriedActor);
        result = true;
    }

    return result;
}
