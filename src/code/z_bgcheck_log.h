#ifndef _Z_BGCHECK_LOG_H_
#define _Z_BGCHECK_LOG_H_
#include "global.h"
#include "vt.h"

GlobalContext* game;
s32 logCheck = false;
s32 calls = 0;
s32 printLine = 0;
u32 lastUpdate = 0;
GfxPrint gfxPrint;

#define POS_BUFF_MAX 0x20
Vec3f posBuffer[POS_BUFF_MAX];
typedef struct {
    s32 next;
    s32 error;
} PosBufferInfo;

PosBufferInfo posBuffInfo = { 0 };

typedef enum
{
    PRINT_TYPE_S32,
    PRINT_TYPE_POS
} PrintType;

typedef struct {
    char* txt;
    PrintType printType;
    void* data;
} PrintBufferRecord;

typedef enum {
    LGC_SphVsWallImpl_LineTest1,
    LGC_SphVsWallImpl_MAX
} LGC_SphVsWallImpl;

u8 checks[LGC_SphVsWallImpl_MAX];

void LogPos(Vec3f* pos)
{
    if (posBuffInfo.next == POS_BUFF_MAX)
    {
        posBuffInfo.error = true;
        return;
    }
    posBuffer[posBuffInfo.next] = *pos;
    posBuffInfo.next++;
}
#endif 
