glabel BgYdanHasi_Init
/* 00000 808BE500 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 00004 808BE504 AFA5003C */  sw      $a1, 0x003C($sp)           
/* 00008 808BE508 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 0000C 808BE50C AFB00018 */  sw      $s0, 0x0018($sp)           
/* 00010 808BE510 3C05808C */  lui     $a1, %hi(D_808BEC20)       ## $a1 = 808C0000
/* 00014 808BE514 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00018 808BE518 AFA0002C */  sw      $zero, 0x002C($sp)         
/* 0001C 808BE51C 0C01E037 */  jal     Actor_ProcessInitChain
              
/* 00020 808BE520 24A5EC20 */  addiu   $a1, $a1, %lo(D_808BEC20)  ## $a1 = 808BEC20
/* 00024 808BE524 860E001C */  lh      $t6, 0x001C($s0)           ## 0000001C
/* 00028 808BE528 8619001C */  lh      $t9, 0x001C($s0)           ## 0000001C
/* 0002C 808BE52C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00030 808BE530 000E7A03 */  sra     $t7, $t6,  8               
/* 00034 808BE534 31F8003F */  andi    $t8, $t7, 0x003F           ## $t8 = 00000000
/* 00038 808BE538 332800FF */  andi    $t0, $t9, 0x00FF           ## $t0 = 00000000
/* 0003C 808BE53C A2180168 */  sb      $t8, 0x0168($s0)           ## 00000168
/* 00040 808BE540 A608001C */  sh      $t0, 0x001C($s0)           ## 0000001C
/* 00044 808BE544 8FA9003C */  lw      $t1, 0x003C($sp)           
/* 00048 808BE548 24050001 */  addiu   $a1, $zero, 0x0001         ## $a1 = 00000001
/* 0004C 808BE54C 8D2A07C0 */  lw      $t2, 0x07C0($t1)           ## 000007C0
/* 00050 808BE550 8D4B0028 */  lw      $t3, 0x0028($t2)           ## 00000028
/* 00054 808BE554 256C0010 */  addiu   $t4, $t3, 0x0010           ## $t4 = 00000010
/* 00058 808BE558 0C010D20 */  jal     DynaPolyInfo_SetActorMove
              
/* 0005C 808BE55C AFAC0028 */  sw      $t4, 0x0028($sp)           
/* 00060 808BE560 8602001C */  lh      $v0, 0x001C($s0)           ## 0000001C
/* 00064 808BE564 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 00068 808BE568 14410010 */  bne     $v0, $at, .L808BE5AC       
/* 0006C 808BE56C 3C01C0A0 */  lui     $at, 0xC0A0                ## $at = C0A00000
/* 00070 808BE570 44813000 */  mtc1    $at, $f6                   ## $f6 = -5.00
/* 00074 808BE574 C604000C */  lwc1    $f4, 0x000C($s0)           ## 0000000C
/* 00078 808BE578 3C18808C */  lui     $t8, %hi(func_808BE7C8)    ## $t8 = 808C0000
/* 0007C 808BE57C 2718E7C8 */  addiu   $t8, $t8, %lo(func_808BE7C8) ## $t8 = 808BE7C8
/* 00080 808BE580 46062200 */  add.s   $f8, $f4, $f6              
/* 00084 808BE584 E608000C */  swc1    $f8, 0x000C($s0)           ## 0000000C
/* 00088 808BE588 C600000C */  lwc1    $f0, 0x000C($s0)           ## 0000000C
/* 0008C 808BE58C 4600028D */  trunc.w.s $f10, $f0                  
/* 00090 808BE590 E6000028 */  swc1    $f0, 0x0028($s0)           ## 00000028
/* 00094 808BE594 8FAF0028 */  lw      $t7, 0x0028($sp)           
/* 00098 808BE598 440E5000 */  mfc1    $t6, $f10                  
/* 0009C 808BE59C 00000000 */  nop
/* 000A0 808BE5A0 A5EE0002 */  sh      $t6, 0x0002($t7)           ## 00000002
/* 000A4 808BE5A4 10000028 */  beq     $zero, $zero, .L808BE648   
/* 000A8 808BE5A8 AE180164 */  sw      $t8, 0x0164($s0)           ## 00000164
.L808BE5AC:
/* 000AC 808BE5AC 14400016 */  bne     $v0, $zero, .L808BE608     
/* 000B0 808BE5B0 3C040600 */  lui     $a0, 0x0600                ## $a0 = 06000000
/* 000B4 808BE5B4 3C040600 */  lui     $a0, 0x0600                ## $a0 = 06000000
/* 000B8 808BE5B8 24847798 */  addiu   $a0, $a0, 0x7798           ## $a0 = 06007798
/* 000BC 808BE5BC 0C010620 */  jal     DynaPolyInfo_Alloc
              
/* 000C0 808BE5C0 27A5002C */  addiu   $a1, $sp, 0x002C           ## $a1 = FFFFFFF4
/* 000C4 808BE5C4 3C01808C */  lui     $at, %hi(D_808BEC6C)       ## $at = 808C0000
/* 000C8 808BE5C8 C420EC6C */  lwc1    $f0, %lo(D_808BEC6C)($at)  
/* 000CC 808BE5CC 3C0141A0 */  lui     $at, 0x41A0                ## $at = 41A00000
/* 000D0 808BE5D0 44812000 */  mtc1    $at, $f4                   ## $f4 = 20.00
/* 000D4 808BE5D4 E6000058 */  swc1    $f0, 0x0058($s0)           ## 00000058
/* 000D8 808BE5D8 E6000050 */  swc1    $f0, 0x0050($s0)           ## 00000050
/* 000DC 808BE5DC 8FB90028 */  lw      $t9, 0x0028($sp)           
/* 000E0 808BE5E0 3C09808C */  lui     $t1, %hi(func_808BE690)    ## $t1 = 808C0000
/* 000E4 808BE5E4 2529E690 */  addiu   $t1, $t1, %lo(func_808BE690) ## $t1 = 808BE690
/* 000E8 808BE5E8 87280002 */  lh      $t0, 0x0002($t9)           ## 00000002
/* 000EC 808BE5EC AE090164 */  sw      $t1, 0x0164($s0)           ## 00000164
/* 000F0 808BE5F0 44888000 */  mtc1    $t0, $f16                  ## $f16 = 0.00
/* 000F4 808BE5F4 00000000 */  nop
/* 000F8 808BE5F8 468084A0 */  cvt.s.w $f18, $f16                 
/* 000FC 808BE5FC 46049180 */  add.s   $f6, $f18, $f4             
/* 00100 808BE600 1000000B */  beq     $zero, $zero, .L808BE630   
/* 00104 808BE604 E6060028 */  swc1    $f6, 0x0028($s0)           ## 00000028
.L808BE608:
/* 00108 808BE608 24845780 */  addiu   $a0, $a0, 0x5780           ## $a0 = 00005780
/* 0010C 808BE60C 0C010620 */  jal     DynaPolyInfo_Alloc
              
/* 00110 808BE610 27A5002C */  addiu   $a1, $sp, 0x002C           ## $a1 = FFFFFFF4
/* 00114 808BE614 3C0A808C */  lui     $t2, %hi(func_808BE930)    ## $t2 = 808C0000
/* 00118 808BE618 254AE930 */  addiu   $t2, $t2, %lo(func_808BE930) ## $t2 = 808BE930
/* 0011C 808BE61C AE000134 */  sw      $zero, 0x0134($s0)         ## 00000134
/* 00120 808BE620 AE0A0164 */  sw      $t2, 0x0164($s0)           ## 00000164
/* 00124 808BE624 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00128 808BE628 0C00B56E */  jal     Actor_SetHeight
              
/* 0012C 808BE62C 3C054220 */  lui     $a1, 0x4220                ## $a1 = 42200000
.L808BE630:
/* 00130 808BE630 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 00134 808BE634 02003025 */  or      $a2, $s0, $zero            ## $a2 = 00000000
/* 00138 808BE638 8FA7002C */  lw      $a3, 0x002C($sp)           
/* 0013C 808BE63C 0C00FA9D */  jal     DynaPolyInfo_setActor
              ## DynaPolyInfo_setActor
/* 00140 808BE640 24850810 */  addiu   $a1, $a0, 0x0810           ## $a1 = 00000810
/* 00144 808BE644 AE02014C */  sw      $v0, 0x014C($s0)           ## 0000014C
.L808BE648:
/* 00148 808BE648 A600016A */  sh      $zero, 0x016A($s0)         ## 0000016A
/* 0014C 808BE64C 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 00150 808BE650 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 00154 808BE654 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 00158 808BE658 03E00008 */  jr      $ra                        
/* 0015C 808BE65C 00000000 */  nop


