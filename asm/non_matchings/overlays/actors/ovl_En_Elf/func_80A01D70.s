glabel func_80A01D70
/* 00140 80A01D70 44801000 */  mtc1    $zero, $f2                 ## $f2 = 0.00
/* 00144 80A01D74 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 00148 80A01D78 44810000 */  mtc1    $at, $f0                   ## $f0 = 1.00
/* 0014C 80A01D7C 3C0880A0 */  lui     $t0, %hi(func_80A02A20)    ## $t0 = 80A00000
/* 00150 80A01D80 25082A20 */  addiu   $t0, $t0, %lo(func_80A02A20) ## $t0 = 80A02A20
/* 00154 80A01D84 2409001E */  addiu   $t1, $zero, 0x001E         ## $t1 = 0000001E
/* 00158 80A01D88 240A0001 */  addiu   $t2, $zero, 0x0001         ## $t2 = 00000001
/* 0015C 80A01D8C AC8802C8 */  sw      $t0, 0x02C8($a0)           ## 000002C8
/* 00160 80A01D90 A48902AE */  sh      $t1, 0x02AE($a0)           ## 000002AE
/* 00164 80A01D94 A48A02C0 */  sh      $t2, 0x02C0($a0)           ## 000002C0
/* 00168 80A01D98 E48202B4 */  swc1    $f2, 0x02B4($a0)           ## 000002B4
/* 0016C 80A01D9C E48202B8 */  swc1    $f2, 0x02B8($a0)           ## 000002B8
/* 00170 80A01DA0 03E00008 */  jr      $ra                        
/* 00174 80A01DA4 E4800168 */  swc1    $f0, 0x0168($a0)           ## 00000168