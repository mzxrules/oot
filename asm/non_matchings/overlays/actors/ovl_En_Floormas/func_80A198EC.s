.late_rodata
glabel D_80A1A5A0
 .word 0x3BE56042
glabel D_80A1A5A4
 .word 0x3B83126F
glabel D_80A1A5A8
    .float 0.01

.text
glabel func_80A198EC
/* 023DC 80A198EC 27BDFFC0 */  addiu   $sp, $sp, 0xFFC0           ## $sp = FFFFFFC0
/* 023E0 80A198F0 AFBF001C */  sw      $ra, 0x001C($sp)
/* 023E4 80A198F4 AFB00018 */  sw      $s0, 0x0018($sp)
/* 023E8 80A198F8 AFA50044 */  sw      $a1, 0x0044($sp)
/* 023EC 80A198FC 8482019A */  lh      $v0, 0x019A($a0)           ## 0000019A
/* 023F0 80A19900 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 023F4 80A19904 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 023F8 80A19908 10400003 */  beq     $v0, $zero, .L80A19918
/* 023FC 80A1990C 244EFFFF */  addiu   $t6, $v0, 0xFFFF           ## $t6 = FFFFFFFF
/* 02400 80A19910 A48E019A */  sh      $t6, 0x019A($a0)           ## 0000019A
/* 02404 80A19914 8482019A */  lh      $v0, 0x019A($a0)           ## 0000019A
.L80A19918:
/* 02408 80A19918 8E040118 */  lw      $a0, 0x0118($s0)           ## 00000118
/* 0240C 80A1991C 14400016 */  bne     $v0, $zero, .L80A19978
/* 02410 80A19920 8E07011C */  lw      $a3, 0x011C($s0)           ## 0000011C
/* 02414 80A19924 8C8F0190 */  lw      $t7, 0x0190($a0)           ## 00000190
/* 02418 80A19928 3C0280A2 */  lui     $v0, %hi(func_80A19B9C)    ## $v0 = 80A20000
/* 0241C 80A1992C 24429B9C */  addiu   $v0, $v0, %lo(func_80A19B9C) ## $v0 = 80A19B9C
/* 02420 80A19930 104F0008 */  beq     $v0, $t7, .L80A19954
/* 02424 80A19934 8FA50044 */  lw      $a1, 0x0044($sp)
/* 02428 80A19938 AFA20028 */  sw      $v0, 0x0028($sp)
/* 0242C 80A1993C AFA60034 */  sw      $a2, 0x0034($sp)
/* 02430 80A19940 0C285F7F */  jal     func_80A17DFC
/* 02434 80A19944 AFA70038 */  sw      $a3, 0x0038($sp)
/* 02438 80A19948 8FA20028 */  lw      $v0, 0x0028($sp)
/* 0243C 80A1994C 8FA60034 */  lw      $a2, 0x0034($sp)
/* 02440 80A19950 8FA70038 */  lw      $a3, 0x0038($sp)
.L80A19954:
/* 02444 80A19954 8CF80190 */  lw      $t8, 0x0190($a3)           ## 00000190
/* 02448 80A19958 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 0244C 80A1995C 8FA50044 */  lw      $a1, 0x0044($sp)
/* 02450 80A19960 50580017 */  beql    $v0, $t8, .L80A199C0
/* 02454 80A19964 C6020050 */  lwc1    $f2, 0x0050($s0)           ## 00000050
/* 02458 80A19968 0C285F7F */  jal     func_80A17DFC
/* 0245C 80A1996C AFA60034 */  sw      $a2, 0x0034($sp)
/* 02460 80A19970 10000012 */  beq     $zero, $zero, .L80A199BC
/* 02464 80A19974 8FA60034 */  lw      $a2, 0x0034($sp)
.L80A19978:
/* 02468 80A19978 8C830190 */  lw      $v1, 0x0190($a0)           ## 00000190
/* 0246C 80A1997C 3C0280A2 */  lui     $v0, %hi(func_80A19B9C)    ## $v0 = 80A20000
/* 02470 80A19980 24429B9C */  addiu   $v0, $v0, %lo(func_80A19B9C) ## $v0 = 80A19B9C
/* 02474 80A19984 10430005 */  beq     $v0, $v1, .L80A1999C
/* 02478 80A19988 3C1980A2 */  lui     $t9, %hi(func_80A19230)    ## $t9 = 80A20000
/* 0247C 80A1998C 27399230 */  addiu   $t9, $t9, %lo(func_80A19230) ## $t9 = 80A19230
/* 02480 80A19990 53230003 */  beql    $t9, $v1, .L80A199A0
/* 02484 80A19994 8CE30190 */  lw      $v1, 0x0190($a3)           ## 00000190
/* 02488 80A19998 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
.L80A1999C:
/* 0248C 80A1999C 8CE30190 */  lw      $v1, 0x0190($a3)           ## 00000190
.L80A199A0:
/* 02490 80A199A0 3C0880A2 */  lui     $t0, %hi(func_80A19230)    ## $t0 = 80A20000
/* 02494 80A199A4 25089230 */  addiu   $t0, $t0, %lo(func_80A19230) ## $t0 = 80A19230
/* 02498 80A199A8 50430005 */  beql    $v0, $v1, .L80A199C0
/* 0249C 80A199AC C6020050 */  lwc1    $f2, 0x0050($s0)           ## 00000050
/* 024A0 80A199B0 51030003 */  beql    $t0, $v1, .L80A199C0
/* 024A4 80A199B4 C6020050 */  lwc1    $f2, 0x0050($s0)           ## 00000050
/* 024A8 80A199B8 24C60001 */  addiu   $a2, $a2, 0x0001           ## $a2 = 00000002
.L80A199BC:
/* 024AC 80A199BC C6020050 */  lwc1    $f2, 0x0050($s0)           ## 00000050
.L80A199C0:
/* 024B0 80A199C0 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 024B4 80A199C4 14C1000B */  bne     $a2, $at, .L80A199F4
/* 024B8 80A199C8 46001306 */  mov.s   $f12, $f2
/* 024BC 80A199CC 3C053BE5 */  lui     $a1, 0x3BE5                ## $a1 = 3BE50000
/* 024C0 80A199D0 3C063A03 */  lui     $a2, 0x3A03                ## $a2 = 3A030000
/* 024C4 80A199D4 34C6126F */  ori     $a2, $a2, 0x126F           ## $a2 = 3A03126F
/* 024C8 80A199D8 34A56042 */  ori     $a1, $a1, 0x6042           ## $a1 = 3BE56042
/* 024CC 80A199DC 26040050 */  addiu   $a0, $s0, 0x0050           ## $a0 = 00000050
/* 024D0 80A199E0 0C01DE80 */  jal     Math_ApproxF

/* 024D4 80A199E4 E7AC0030 */  swc1    $f12, 0x0030($sp)
/* 024D8 80A199E8 C7AC0030 */  lwc1    $f12, 0x0030($sp)
/* 024DC 80A199EC 1000000B */  beq     $zero, $zero, .L80A19A1C
/* 024E0 80A199F0 C6020050 */  lwc1    $f2, 0x0050($s0)           ## 00000050
.L80A199F4:
/* 024E4 80A199F4 14C00009 */  bne     $a2, $zero, .L80A19A1C
/* 024E8 80A199F8 26040050 */  addiu   $a0, $s0, 0x0050           ## $a0 = 00000050
/* 024EC 80A199FC 3C053C23 */  lui     $a1, 0x3C23                ## $a1 = 3C230000
/* 024F0 80A19A00 3C063A03 */  lui     $a2, 0x3A03                ## $a2 = 3A030000
/* 024F4 80A19A04 34C6126F */  ori     $a2, $a2, 0x126F           ## $a2 = 3A03126F
/* 024F8 80A19A08 34A5D70A */  ori     $a1, $a1, 0xD70A           ## $a1 = 3C23D70A
/* 024FC 80A19A0C 0C01DE80 */  jal     Math_ApproxF

/* 02500 80A19A10 E7AC0030 */  swc1    $f12, 0x0030($sp)
/* 02504 80A19A14 C7AC0030 */  lwc1    $f12, 0x0030($sp)
/* 02508 80A19A18 C6020050 */  lwc1    $f2, 0x0050($s0)           ## 00000050
.L80A19A1C:
/* 0250C 80A19A1C E6020058 */  swc1    $f2, 0x0058($s0)           ## 00000058
/* 02510 80A19A20 E6020054 */  swc1    $f2, 0x0054($s0)           ## 00000054
/* 02514 80A19A24 3C0180A2 */  lui     $at, %hi(D_80A1A5A0)       ## $at = 80A20000
/* 02518 80A19A28 C424A5A0 */  lwc1    $f4, %lo(D_80A1A5A0)($at)
/* 0251C 80A19A2C 3C0180A2 */  lui     $at, %hi(D_80A1A5A4)       ## $at = 80A20000
/* 02520 80A19A30 46046032 */  c.eq.s  $f12, $f4
/* 02524 80A19A34 00000000 */  nop
/* 02528 80A19A38 45030007 */  bc1tl   .L80A19A58
/* 0252C 80A19A3C 46026032 */  c.eq.s  $f12, $f2
/* 02530 80A19A40 C426A5A4 */  lwc1    $f6, %lo(D_80A1A5A4)($at)
/* 02534 80A19A44 46066032 */  c.eq.s  $f12, $f6
/* 02538 80A19A48 00000000 */  nop
/* 0253C 80A19A4C 45000008 */  bc1f    .L80A19A70
/* 02540 80A19A50 00000000 */  nop
/* 02544 80A19A54 46026032 */  c.eq.s  $f12, $f2
.L80A19A58:
/* 02548 80A19A58 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0254C 80A19A5C 45010004 */  bc1t    .L80A19A70
/* 02550 80A19A60 00000000 */  nop
/* 02554 80A19A64 0C00BE0A */  jal     Audio_PlayActorSound2

/* 02558 80A19A68 24053934 */  addiu   $a1, $zero, 0x3934         ## $a1 = 00003934
/* 0255C 80A19A6C C6020050 */  lwc1    $f2, 0x0050($s0)           ## 00000050
.L80A19A70:
/* 02560 80A19A70 3C0280A2 */  lui     $v0, %hi(D_80A1A470)       ## $v0 = 80A20000
/* 02564 80A19A74 2442A470 */  addiu   $v0, $v0, %lo(D_80A1A470)  ## $v0 = 80A1A470
/* 02568 80A19A78 84490020 */  lh      $t1, 0x0020($v0)           ## 80A1A490
/* 0256C 80A19A7C 3C0142C8 */  lui     $at, 0x42C8                ## $at = 42C80000
/* 02570 80A19A80 44810000 */  mtc1    $at, $f0                   ## $f0 = 100.00
/* 02574 80A19A84 44894000 */  mtc1    $t1, $f8                   ## $f8 = 0.00
/* 02578 80A19A88 2604014C */  addiu   $a0, $s0, 0x014C           ## $a0 = 0000014C
/* 0257C 80A19A8C 468042A0 */  cvt.s.w $f10, $f8
/* 02580 80A19A90 46005402 */  mul.s   $f16, $f10, $f0
/* 02584 80A19A94 00000000 */  nop
/* 02588 80A19A98 46028482 */  mul.s   $f18, $f16, $f2
/* 0258C 80A19A9C 4600910D */  trunc.w.s $f4, $f18
/* 02590 80A19AA0 440B2000 */  mfc1    $t3, $f4
/* 02594 80A19AA4 00000000 */  nop
/* 02598 80A19AA8 A60B0308 */  sh      $t3, 0x0308($s0)           ## 00000308
/* 0259C 80A19AAC 844C0022 */  lh      $t4, 0x0022($v0)           ## 80A1A492
/* 025A0 80A19AB0 448C3000 */  mtc1    $t4, $f6                   ## $f6 = 0.00
/* 025A4 80A19AB4 00000000 */  nop
/* 025A8 80A19AB8 46803220 */  cvt.s.w $f8, $f6
/* 025AC 80A19ABC 46004282 */  mul.s   $f10, $f8, $f0
/* 025B0 80A19AC0 00000000 */  nop
/* 025B4 80A19AC4 46025402 */  mul.s   $f16, $f10, $f2
/* 025B8 80A19AC8 4600848D */  trunc.w.s $f18, $f16
/* 025BC 80A19ACC 440E9000 */  mfc1    $t6, $f18
/* 025C0 80A19AD0 00000000 */  nop
/* 025C4 80A19AD4 A60E030A */  sh      $t6, 0x030A($s0)           ## 0000030A
/* 025C8 80A19AD8 0C02927F */  jal     SkelAnime_FrameUpdateMatrix

/* 025CC 80A19ADC AFA40024 */  sw      $a0, 0x0024($sp)
/* 025D0 80A19AE0 10400026 */  beq     $v0, $zero, .L80A19B7C
/* 025D4 80A19AE4 8FA40024 */  lw      $a0, 0x0024($sp)
/* 025D8 80A19AE8 3C0180A2 */  lui     $at, %hi(D_80A1A5A8)       ## $at = 80A20000
/* 025DC 80A19AEC C426A5A8 */  lwc1    $f6, %lo(D_80A1A5A8)($at)
/* 025E0 80A19AF0 C6040050 */  lwc1    $f4, 0x0050($s0)           ## 00000050
/* 025E4 80A19AF4 4604303E */  c.le.s  $f6, $f4
/* 025E8 80A19AF8 00000000 */  nop
/* 025EC 80A19AFC 45020013 */  bc1fl   .L80A19B4C
/* 025F0 80A19B00 860A0194 */  lh      $t2, 0x0194($s0)           ## 00000194
/* 025F4 80A19B04 8E0F0004 */  lw      $t7, 0x0004($s0)           ## 00000004
/* 025F8 80A19B08 2401FFEF */  addiu   $at, $zero, 0xFFEF         ## $at = FFFFFFEF
/* 025FC 80A19B0C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02600 80A19B10 01E1C024 */  and     $t8, $t7, $at
/* 02604 80A19B14 0C285DDA */  jal     func_80A17768
/* 02608 80A19B18 AE180004 */  sw      $t8, 0x0004($s0)           ## 00000004
/* 0260C 80A19B1C 921902F6 */  lbu     $t9, 0x02F6($s0)           ## 000002F6
/* 02610 80A19B20 A600001C */  sh      $zero, 0x001C($s0)         ## 0000001C
/* 02614 80A19B24 3C0980A2 */  lui     $t1, %hi(D_80A1A49C)       ## $t1 = 80A20000
/* 02618 80A19B28 37280004 */  ori     $t0, $t9, 0x0004           ## $t0 = 00000004
/* 0261C 80A19B2C A20802F6 */  sb      $t0, 0x02F6($s0)           ## 000002F6
/* 02620 80A19B30 9129A49C */  lbu     $t1, %lo(D_80A1A49C)($t1)
/* 02624 80A19B34 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02628 80A19B38 0C285DF2 */  jal     func_80A177C8
/* 0262C 80A19B3C A20900AF */  sb      $t1, 0x00AF($s0)           ## 000000AF
/* 02630 80A19B40 1000000F */  beq     $zero, $zero, .L80A19B80
/* 02634 80A19B44 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02638 80A19B48 860A0194 */  lh      $t2, 0x0194($s0)           ## 00000194
.L80A19B4C:
/* 0263C 80A19B4C 3C050601 */  lui     $a1, 0x0601                ## $a1 = 06010000
/* 02640 80A19B50 15400007 */  bne     $t2, $zero, .L80A19B70
/* 02644 80A19B54 00000000 */  nop
/* 02648 80A19B58 3C050600 */  lui     $a1, 0x0600                ## $a1 = 06000000
/* 0264C 80A19B5C 0C02947A */  jal     SkelAnime_ChangeAnimDefaultStop
/* 02650 80A19B60 24A539B0 */  addiu   $a1, $a1, 0x39B0           ## $a1 = 060039B0
/* 02654 80A19B64 240B0001 */  addiu   $t3, $zero, 0x0001         ## $t3 = 00000001
/* 02658 80A19B68 10000004 */  beq     $zero, $zero, .L80A19B7C
/* 0265C 80A19B6C A60B0194 */  sh      $t3, 0x0194($s0)           ## 00000194
.L80A19B70:
/* 02660 80A19B70 0C02947A */  jal     SkelAnime_ChangeAnimDefaultStop
/* 02664 80A19B74 24A59DB0 */  addiu   $a1, $a1, 0x9DB0           ## $a1 = FFFF9DB0
/* 02668 80A19B78 A6000194 */  sh      $zero, 0x0194($s0)         ## 00000194
.L80A19B7C:
/* 0266C 80A19B7C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80A19B80:
/* 02670 80A19B80 0C00BE5D */  jal     func_8002F974
/* 02674 80A19B84 24053133 */  addiu   $a1, $zero, 0x3133         ## $a1 = 00003133
/* 02678 80A19B88 8FBF001C */  lw      $ra, 0x001C($sp)
/* 0267C 80A19B8C 8FB00018 */  lw      $s0, 0x0018($sp)
/* 02680 80A19B90 27BD0040 */  addiu   $sp, $sp, 0x0040           ## $sp = 00000000
/* 02684 80A19B94 03E00008 */  jr      $ra
/* 02688 80A19B98 00000000 */  nop