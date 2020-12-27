glabel func_8088A290
/* 00270 8088A290 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 00274 8088A294 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 00278 8088A298 AFA40038 */  sw      $a0, 0x0038($sp)           
/* 0027C 8088A29C AFA5003C */  sw      $a1, 0x003C($sp)           
/* 00280 8088A2A0 8C980024 */  lw      $t8, 0x0024($a0)           ## 00000024
/* 00284 8088A2A4 27A50028 */  addiu   $a1, $sp, 0x0028           ## $a1 = FFFFFFF0
/* 00288 8088A2A8 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 0028C 8088A2AC ACB80000 */  sw      $t8, 0x0000($a1)           ## FFFFFFF0
/* 00290 8088A2B0 8C8F0028 */  lw      $t7, 0x0028($a0)           ## 00000028
/* 00294 8088A2B4 44813000 */  mtc1    $at, $f6                   ## $f6 = 10.00
/* 00298 8088A2B8 24190258 */  addiu   $t9, $zero, 0x0258         ## $t9 = 00000258
/* 0029C 8088A2BC ACAF0004 */  sw      $t7, 0x0004($a1)           ## FFFFFFF4
/* 002A0 8088A2C0 8C98002C */  lw      $t8, 0x002C($a0)           ## 0000002C
/* 002A4 8088A2C4 2408012C */  addiu   $t0, $zero, 0x012C         ## $t0 = 0000012C
/* 002A8 8088A2C8 24090001 */  addiu   $t1, $zero, 0x0001         ## $t1 = 00000001
/* 002AC 8088A2CC ACB80008 */  sw      $t8, 0x0008($a1)           ## FFFFFFF8
/* 002B0 8088A2D0 C7A4002C */  lwc1    $f4, 0x002C($sp)           
/* 002B4 8088A2D4 AFA90018 */  sw      $t1, 0x0018($sp)           
/* 002B8 8088A2D8 AFA80014 */  sw      $t0, 0x0014($sp)           
/* 002BC 8088A2DC 46062200 */  add.s   $f8, $f4, $f6              
/* 002C0 8088A2E0 AFB90010 */  sw      $t9, 0x0010($sp)           
/* 002C4 8088A2E4 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 002C8 8088A2E8 24060000 */  addiu   $a2, $zero, 0x0000         ## $a2 = 00000000
/* 002CC 8088A2EC E7A8002C */  swc1    $f8, 0x002C($sp)           
/* 002D0 8088A2F0 0C00CD20 */  jal     func_80033480              
/* 002D4 8088A2F4 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 002D8 8088A2F8 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 002DC 8088A2FC 00000000 */  nop
/* 002E0 8088A300 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 002E4 8088A304 44815000 */  mtc1    $at, $f10                  ## $f10 = 0.50
/* 002E8 8088A308 3C0142A0 */  lui     $at, 0x42A0                ## $at = 42A00000
/* 002EC 8088A30C 44819000 */  mtc1    $at, $f18                  ## $f18 = 80.00
/* 002F0 8088A310 460A0401 */  sub.s   $f16, $f0, $f10            
/* 002F4 8088A314 8FAA0038 */  lw      $t2, 0x0038($sp)           
/* 002F8 8088A318 46128102 */  mul.s   $f4, $f16, $f18            
/* 002FC 8088A31C C5460024 */  lwc1    $f6, 0x0024($t2)           ## 00000024
/* 00300 8088A320 46062200 */  add.s   $f8, $f4, $f6              
/* 00304 8088A324 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 00308 8088A328 E7A80028 */  swc1    $f8, 0x0028($sp)           
/* 0030C 8088A32C 3C0142C8 */  lui     $at, 0x42C8                ## $at = 42C80000
/* 00310 8088A330 44815000 */  mtc1    $at, $f10                  ## $f10 = 100.00
/* 00314 8088A334 8FAB0038 */  lw      $t3, 0x0038($sp)           
/* 00318 8088A338 460A0402 */  mul.s   $f16, $f0, $f10            
/* 0031C 8088A33C C5720028 */  lwc1    $f18, 0x0028($t3)          ## 00000028
/* 00320 8088A340 46128100 */  add.s   $f4, $f16, $f18            
/* 00324 8088A344 0C03F66B */  jal     Rand_ZeroOne
              ## Rand.Next() float
/* 00328 8088A348 E7A4002C */  swc1    $f4, 0x002C($sp)           
/* 0032C 8088A34C 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 00330 8088A350 44813000 */  mtc1    $at, $f6                   ## $f6 = 0.50
/* 00334 8088A354 3C0142A0 */  lui     $at, 0x42A0                ## $at = 42A00000
/* 00338 8088A358 44815000 */  mtc1    $at, $f10                  ## $f10 = 80.00
/* 0033C 8088A35C 46060201 */  sub.s   $f8, $f0, $f6              
/* 00340 8088A360 8FAC0038 */  lw      $t4, 0x0038($sp)           
/* 00344 8088A364 240D00C8 */  addiu   $t5, $zero, 0x00C8         ## $t5 = 000000C8
/* 00348 8088A368 240E00FA */  addiu   $t6, $zero, 0x00FA         ## $t6 = 000000FA
/* 0034C 8088A36C 460A4402 */  mul.s   $f16, $f8, $f10            
/* 00350 8088A370 C592002C */  lwc1    $f18, 0x002C($t4)          ## 0000002C
/* 00354 8088A374 240F0001 */  addiu   $t7, $zero, 0x0001         ## $t7 = 00000001
/* 00358 8088A378 AFAF0018 */  sw      $t7, 0x0018($sp)           
/* 0035C 8088A37C AFAE0014 */  sw      $t6, 0x0014($sp)           
/* 00360 8088A380 AFAD0010 */  sw      $t5, 0x0010($sp)           
/* 00364 8088A384 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 00368 8088A388 46128100 */  add.s   $f4, $f16, $f18            
/* 0036C 8088A38C 27A50028 */  addiu   $a1, $sp, 0x0028           ## $a1 = FFFFFFF0
/* 00370 8088A390 3C0642C8 */  lui     $a2, 0x42C8                ## $a2 = 42C80000
/* 00374 8088A394 24070004 */  addiu   $a3, $zero, 0x0004         ## $a3 = 00000004
/* 00378 8088A398 0C00CD20 */  jal     func_80033480              
/* 0037C 8088A39C E7A40030 */  swc1    $f4, 0x0030($sp)           
/* 00380 8088A3A0 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 00384 8088A3A4 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 00388 8088A3A8 03E00008 */  jr      $ra                        
/* 0038C 8088A3AC 00000000 */  nop
