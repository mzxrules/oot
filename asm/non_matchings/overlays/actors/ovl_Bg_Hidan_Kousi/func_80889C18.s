.late_rodata
glabel D_80889F34
    .float 0.2

.text
glabel func_80889C18
/* 002B8 80889C18 27BDFFE8 */  addiu   $sp, $sp, 0xFFE8           ## $sp = FFFFFFE8
/* 002BC 80889C1C 3C014000 */  lui     $at, 0x4000                ## $at = 40000000
/* 002C0 80889C20 44810000 */  mtc1    $at, $f0                   ## $f0 = 2.00
/* 002C4 80889C24 AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 002C8 80889C28 AFA5001C */  sw      $a1, 0x001C($sp)           
/* 002CC 80889C2C 3C018089 */  lui     $at, %hi(D_80889F34)       ## $at = 80890000
/* 002D0 80889C30 C4269F34 */  lwc1    $f6, %lo(D_80889F34)($at)  
/* 002D4 80889C34 C4840068 */  lwc1    $f4, 0x0068($a0)           ## 00000068
/* 002D8 80889C38 3C058089 */  lui     $a1, %hi(func_80889C90)    ## $a1 = 80890000
/* 002DC 80889C3C 24A59C90 */  addiu   $a1, $a1, %lo(func_80889C90) ## $a1 = 80889C90
/* 002E0 80889C40 46062200 */  add.s   $f8, $f4, $f6              
/* 002E4 80889C44 E4880068 */  swc1    $f8, 0x0068($a0)           ## 00000068
/* 002E8 80889C48 C48A0068 */  lwc1    $f10, 0x0068($a0)          ## 00000068
/* 002EC 80889C4C 460A003C */  c.lt.s  $f0, $f10                  
/* 002F0 80889C50 00000000 */  nop
/* 002F4 80889C54 45000005 */  bc1f    .L80889C6C                 
/* 002F8 80889C58 00000000 */  nop
/* 002FC 80889C5C E4800068 */  swc1    $f0, 0x0068($a0)           ## 00000068
/* 00300 80889C60 0C222658 */  jal     BgHidanKousi_SetupAction              
/* 00304 80889C64 AFA40018 */  sw      $a0, 0x0018($sp)           
/* 00308 80889C68 8FA40018 */  lw      $a0, 0x0018($sp)           
.L80889C6C:
/* 0030C 80889C6C 0C00B638 */  jal     Actor_MoveForward
              
/* 00310 80889C70 AFA40018 */  sw      $a0, 0x0018($sp)           
/* 00314 80889C74 8FA40018 */  lw      $a0, 0x0018($sp)           
/* 00318 80889C78 0C00BE5D */  jal     func_8002F974              
/* 0031C 80889C7C 24052036 */  addiu   $a1, $zero, 0x2036         ## $a1 = 00002036
/* 00320 80889C80 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 00324 80889C84 27BD0018 */  addiu   $sp, $sp, 0x0018           ## $sp = 00000000
/* 00328 80889C88 03E00008 */  jr      $ra                        
/* 0032C 80889C8C 00000000 */  nop