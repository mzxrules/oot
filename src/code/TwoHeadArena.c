/**
 * @file TwoHeadArena.c
 *
 * This file implements a simple general purpose double-ended stack allocator.
 *
 * A double-ended stack allocator accepts allocations at either the "head" or "tail" of its allotted memory region.
 * While in general this type of allocator could accept deallocations on the most recently allocated block at either
 * end, this implementation does not support any individual deallocations; the only provided way to deallocate anything
 * is to reset the entire arena, deallocating everything. This scheme is most applicable to allocating similar data
 * with identical lifetime.
 */
#include "global.h"

void* THA_GetHead(TwoHeadArena* tha) {
    return tha->head;
}

void THA_SetHead(TwoHeadArena* tha, void* newHead) {
    tha->head = newHead;
}

void* THA_GetTail(TwoHeadArena* tha) {
    return tha->tail;
}

/**
 * Allocates to the head of the Two Head Arena. The allocation will not have any alignment guarantees.
 */
void* THA_AllocHead(TwoHeadArena* tha, size_t size) {
    void* start = tha->head;

    tha->head = (u8*)tha->head + size;
    return start;
}

void* THA_AllocHeadByte(TwoHeadArena* tha) {
    return THA_AllocHead(tha, 1);
}

/**
 * Allocates to the tail end of the Two Head Arena with guaranteed 16-byte alignment.
 */
void* THA_AllocTail(TwoHeadArena* tha, size_t size) {
    uintptr_t mask = ALIGN_MASK(0x10);

    tha->tail = (void*)((((uintptr_t)tha->tail & mask) - size) & (uintptr_t)(u64)mask);
    return tha->tail;
}

/**
 * Gets the remaining size of the Two Head Arena
 *
 * @return Remaining size. A negative number indicates an overflow.
 */
s32 THA_GetRemaining(TwoHeadArena* tha) {
    return (s32)((u8*)tha->tail - (u8*)tha->head);
}

/**
 * @return true if the Two Head Arena has overflowed, false otherwise
 */
u32 THA_IsCrash(TwoHeadArena* tha) {
    return THA_GetRemaining(tha) < 0;
}

/**
 * Resets the head and tail positions of the Two Head Arena, all prior allocations are effectively considered free
 * as any new allocations will begin to overwrite them.
 */
void THA_Reset(TwoHeadArena* tha) {
    tha->head = tha->start;
    tha->tail = (u8*)tha->start + tha->size;
}

/**
 * Creates a new Two Head Arena at `start` with available size `size`
 */
void THA_Init(TwoHeadArena* tha, void* start, size_t size) {
    tha->start = start;
    tha->size = size;
    THA_Reset(tha);
}

/**
 * Destroys the Two Head Arena, no further allocations are possible
 */
void THA_Destroy(TwoHeadArena* tha) {
    bzero(tha, sizeof(TwoHeadArena));
}
