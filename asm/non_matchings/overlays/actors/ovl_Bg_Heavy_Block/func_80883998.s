glabel func_80883998
/* 00208 80883998 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 0020C 8088399C AFBF001C */  sw      $ra, 0x001C($sp)           
/* 00210 808839A0 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 00214 808839A4 AFA50034 */  sw      $a1, 0x0034($sp)           
/* 00218 808839A8 AFA00024 */  sw      $zero, 0x0024($sp)         
/* 0021C 808839AC 8C8E0004 */  lw      $t6, 0x0004($a0)           ## 00000004
/* 00220 808839B0 3C010002 */  lui     $at, 0x0002                ## $at = 00020000
/* 00224 808839B4 34210030 */  ori     $at, $at, 0x0030           ## $at = 00020030
/* 00228 808839B8 01C17825 */  or      $t7, $t6, $at              ## $t7 = 00020030
/* 0022C 808839BC 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00230 808839C0 AC8F0004 */  sw      $t7, 0x0004($a0)           ## 00000004
/* 00234 808839C4 0C010D20 */  jal     DynaPolyInfo_SetActorMove
              
/* 00238 808839C8 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 0023C 808839CC 3C040600 */  lui     $a0, 0x0600                ## $a0 = 06000000
/* 00240 808839D0 2484169C */  addiu   $a0, $a0, 0x169C           ## $a0 = 0600169C
/* 00244 808839D4 0C010620 */  jal     DynaPolyInfo_Alloc
              
/* 00248 808839D8 27A50024 */  addiu   $a1, $sp, 0x0024           ## $a1 = FFFFFFF4
/* 0024C 808839DC 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 00250 808839E0 02003025 */  or      $a2, $s0, $zero            ## $a2 = 00000000
/* 00254 808839E4 8FA70024 */  lw      $a3, 0x0024($sp)           
/* 00258 808839E8 0C00FA9D */  jal     DynaPolyInfo_setActor
              ## DynaPolyInfo_setActor
/* 0025C 808839EC 24850810 */  addiu   $a1, $a0, 0x0810           ## $a1 = 00000810
/* 00260 808839F0 AE02014C */  sw      $v0, 0x014C($s0)           ## 0000014C
/* 00264 808839F4 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 00268 808839F8 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 0026C 808839FC 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 00270 80883A00 03E00008 */  jr      $ra                        
/* 00274 80883A04 00000000 */  nop


