glabel func_800344BC
/* AAB65C 800344BC 27BDFFB8 */  addiu $sp, $sp, -0x48
/* AAB660 800344C0 AFBF001C */  sw    $ra, 0x1c($sp)
/* AAB664 800344C4 AFA40048 */  sw    $a0, 0x48($sp)
/* AAB668 800344C8 AFA5004C */  sw    $a1, 0x4c($sp)
/* AAB66C 800344CC AFA60050 */  sw    $a2, 0x50($sp)
/* AAB670 800344D0 AFA70054 */  sw    $a3, 0x54($sp)
/* AAB674 800344D4 C4840024 */  lwc1  $f4, 0x24($a0)
/* AAB678 800344D8 24A50018 */  addiu $a1, $a1, 0x18
/* AAB67C 800344DC E7A40030 */  swc1  $f4, 0x30($sp)
/* AAB680 800344E0 C4A8FFFC */  lwc1  $f8, -4($a1)
/* AAB684 800344E4 C4860028 */  lwc1  $f6, 0x28($a0)
/* AAB688 800344E8 46083280 */  add.s $f10, $f6, $f8
/* AAB68C 800344EC E7AA0034 */  swc1  $f10, 0x34($sp)
/* AAB690 800344F0 C490002C */  lwc1  $f16, 0x2c($a0)
/* AAB694 800344F4 AFA50024 */  sw    $a1, 0x24($sp)
/* AAB698 800344F8 27A40030 */  addiu $a0, $sp, 0x30
/* AAB69C 800344FC 0C01E027 */  jal   Math_Vec3f_Pitch
/* AAB6A0 80034500 E7B00038 */   swc1  $f16, 0x38($sp)
/* AAB6A4 80034504 A7A20046 */  sh    $v0, 0x46($sp)
/* AAB6A8 80034508 27A40030 */  addiu $a0, $sp, 0x30
/* AAB6AC 8003450C 0C01E01A */  jal   Math_Vec3f_Yaw
/* AAB6B0 80034510 8FA50024 */   lw    $a1, 0x24($sp)
/* AAB6B4 80034514 8FA40048 */  lw    $a0, 0x48($sp)
/* AAB6B8 80034518 A7A20044 */  sh    $v0, 0x44($sp)
/* AAB6BC 8003451C 8FA50024 */  lw    $a1, 0x24($sp)
/* AAB6C0 80034520 0C01E01A */  jal   Math_Vec3f_Yaw
/* AAB6C4 80034524 24840024 */   addiu $a0, $a0, 0x24
/* AAB6C8 80034528 8FB80048 */  lw    $t8, 0x48($sp)
/* AAB6CC 8003452C 87A50052 */  lh    $a1, 0x52($sp)
/* AAB6D0 80034530 8FA8004C */  lw    $t0, 0x4c($sp)
/* AAB6D4 80034534 871900B6 */  lh    $t9, 0xb6($t8)
/* AAB6D8 80034538 00052023 */  negu  $a0, $a1
/* AAB6DC 8003453C 24060006 */  li    $a2, 6
/* AAB6E0 80034540 00591823 */  subu  $v1, $v0, $t9
/* AAB6E4 80034544 00031C00 */  sll   $v1, $v1, 0x10
/* AAB6E8 80034548 00031C03 */  sra   $v1, $v1, 0x10
/* AAB6EC 8003454C 0064082A */  slt   $at, $v1, $a0
/* AAB6F0 80034550 10200004 */  beqz  $at, .L80034564
/* AAB6F4 80034554 240707D0 */   li    $a3, 2000
/* AAB6F8 80034558 00042C00 */  sll   $a1, $a0, 0x10
/* AAB6FC 8003455C 10000008 */  b     .L80034580
/* AAB700 80034560 00052C03 */   sra   $a1, $a1, 0x10
.L80034564:
/* AAB704 80034564 00A3082A */  slt   $at, $a1, $v1
/* AAB708 80034568 10200003 */  beqz  $at, .L80034578
/* AAB70C 8003456C 00601025 */   move  $v0, $v1
/* AAB710 80034570 10000001 */  b     .L80034578
/* AAB714 80034574 00A01025 */   move  $v0, $a1
.L80034578:
/* AAB718 80034578 00022C00 */  sll   $a1, $v0, 0x10
/* AAB71C 8003457C 00052C03 */  sra   $a1, $a1, 0x10
.L80034580:
/* AAB720 80034580 240A0001 */  li    $t2, 1
/* AAB724 80034584 AFAA0010 */  sw    $t2, 0x10($sp)
/* AAB728 80034588 2504000A */  addiu $a0, $t0, 0xa
/* AAB72C 8003458C 0C01E1A7 */  jal   Math_SmoothStepToS
/* AAB730 80034590 A7A30040 */   sh    $v1, 0x40($sp)
/* AAB734 80034594 87A30040 */  lh    $v1, 0x40($sp)
/* AAB738 80034598 8FA8004C */  lw    $t0, 0x4c($sp)
/* AAB73C 8003459C 34018000 */  li    $at, 32768
/* AAB740 800345A0 04600003 */  bltz  $v1, .L800345B0
/* AAB744 800345A4 24060006 */   li    $a2, 6
/* AAB748 800345A8 10000002 */  b     .L800345B4
/* AAB74C 800345AC 00601025 */   move  $v0, $v1
.L800345B0:
/* AAB750 800345B0 00031023 */  negu  $v0, $v1
.L800345B4:
/* AAB754 800345B4 0041082A */  slt   $at, $v0, $at
/* AAB758 800345B8 14200003 */  bnez  $at, .L800345C8
/* AAB75C 800345BC 240707D0 */   li    $a3, 2000
/* AAB760 800345C0 10000007 */  b     .L800345E0
/* AAB764 800345C4 00002825 */   move  $a1, $zero
.L800345C8:
/* AAB768 800345C8 04600003 */  bltz  $v1, .L800345D8
/* AAB76C 800345CC 00031023 */   negu  $v0, $v1
/* AAB770 800345D0 10000001 */  b     .L800345D8
/* AAB774 800345D4 00601025 */   move  $v0, $v1
.L800345D8:
/* AAB778 800345D8 00022C00 */  sll   $a1, $v0, 0x10
/* AAB77C 800345DC 00052C03 */  sra   $a1, $a1, 0x10
.L800345E0:
/* AAB780 800345E0 8504000A */  lh    $a0, 0xa($t0)
/* AAB784 800345E4 00051023 */  negu  $v0, $a1
/* AAB788 800345E8 240C0001 */  li    $t4, 1
/* AAB78C 800345EC 0082082A */  slt   $at, $a0, $v0
/* AAB790 800345F0 50200004 */  beql  $at, $zero, .L80034604
/* AAB794 800345F4 00A4082A */   slt   $at, $a1, $a0
/* AAB798 800345F8 10000007 */  b     .L80034618
/* AAB79C 800345FC A502000A */   sh    $v0, 0xa($t0)
/* AAB7A0 80034600 00A4082A */  slt   $at, $a1, $a0
.L80034604:
/* AAB7A4 80034604 10200003 */  beqz  $at, .L80034614
/* AAB7A8 80034608 00801025 */   move  $v0, $a0
/* AAB7AC 8003460C 10000001 */  b     .L80034614
/* AAB7B0 80034610 00A01025 */   move  $v0, $a1
.L80034614:
/* AAB7B4 80034614 A502000A */  sh    $v0, 0xa($t0)
.L80034618:
/* AAB7B8 80034618 850B000A */  lh    $t3, 0xa($t0)
/* AAB7BC 8003461C 87A4005E */  lh    $a0, 0x5e($sp)
/* AAB7C0 80034620 006B1823 */  subu  $v1, $v1, $t3
/* AAB7C4 80034624 00031C00 */  sll   $v1, $v1, 0x10
/* AAB7C8 80034628 00031C03 */  sra   $v1, $v1, 0x10
/* AAB7CC 8003462C 00041023 */  negu  $v0, $a0
/* AAB7D0 80034630 0062082A */  slt   $at, $v1, $v0
/* AAB7D4 80034634 10200003 */  beqz  $at, .L80034644
/* AAB7D8 80034638 00022C00 */   sll   $a1, $v0, 0x10
/* AAB7DC 8003463C 10000008 */  b     .L80034660
/* AAB7E0 80034640 00052C03 */   sra   $a1, $a1, 0x10
.L80034644:
/* AAB7E4 80034644 0083082A */  slt   $at, $a0, $v1
/* AAB7E8 80034648 10200003 */  beqz  $at, .L80034658
/* AAB7EC 8003464C 00601025 */   move  $v0, $v1
/* AAB7F0 80034650 10000001 */  b     .L80034658
/* AAB7F4 80034654 00801025 */   move  $v0, $a0
.L80034658:
/* AAB7F8 80034658 00022C00 */  sll   $a1, $v0, 0x10
/* AAB7FC 8003465C 00052C03 */  sra   $a1, $a1, 0x10
.L80034660:
/* AAB800 80034660 25040010 */  addiu $a0, $t0, 0x10
/* AAB804 80034664 AFAC0010 */  sw    $t4, 0x10($sp)
/* AAB808 80034668 0C01E1A7 */  jal   Math_SmoothStepToS
/* AAB80C 8003466C A7A30040 */   sh    $v1, 0x40($sp)
/* AAB810 80034670 87A30040 */  lh    $v1, 0x40($sp)
/* AAB814 80034674 8FA8004C */  lw    $t0, 0x4c($sp)
/* AAB818 80034678 34018000 */  li    $at, 32768
/* AAB81C 8003467C 04600003 */  bltz  $v1, .L8003468C
/* AAB820 80034680 00031023 */   negu  $v0, $v1
/* AAB824 80034684 10000001 */  b     .L8003468C
/* AAB828 80034688 00601025 */   move  $v0, $v1
.L8003468C:
/* AAB82C 8003468C 0041082A */  slt   $at, $v0, $at
/* AAB830 80034690 14200003 */  bnez  $at, .L800346A0
/* AAB834 80034694 00000000 */   nop   
/* AAB838 80034698 10000007 */  b     .L800346B8
/* AAB83C 8003469C 00002825 */   move  $a1, $zero
.L800346A0:
/* AAB840 800346A0 04600003 */  bltz  $v1, .L800346B0
/* AAB844 800346A4 00031023 */   negu  $v0, $v1
/* AAB848 800346A8 10000001 */  b     .L800346B0
/* AAB84C 800346AC 00601025 */   move  $v0, $v1
.L800346B0:
/* AAB850 800346B0 00022C00 */  sll   $a1, $v0, 0x10
/* AAB854 800346B4 00052C03 */  sra   $a1, $a1, 0x10
.L800346B8:
/* AAB858 800346B8 85030010 */  lh    $v1, 0x10($t0)
/* AAB85C 800346BC 00051023 */  negu  $v0, $a1
/* AAB860 800346C0 24060006 */  li    $a2, 6
/* AAB864 800346C4 0062082A */  slt   $at, $v1, $v0
/* AAB868 800346C8 10200003 */  beqz  $at, .L800346D8
/* AAB86C 800346CC 240707D0 */   li    $a3, 2000
/* AAB870 800346D0 10000007 */  b     .L800346F0
/* AAB874 800346D4 A5020010 */   sh    $v0, 0x10($t0)
.L800346D8:
/* AAB878 800346D8 00A3082A */  slt   $at, $a1, $v1
/* AAB87C 800346DC 10200003 */  beqz  $at, .L800346EC
/* AAB880 800346E0 00601025 */   move  $v0, $v1
/* AAB884 800346E4 10000001 */  b     .L800346EC
/* AAB888 800346E8 00A01025 */   move  $v0, $a1
.L800346EC:
/* AAB88C 800346EC A5020010 */  sh    $v0, 0x10($t0)
.L800346F0:
/* AAB890 800346F0 93AD006B */  lbu   $t5, 0x6b($sp)
/* AAB894 800346F4 8FA40048 */  lw    $a0, 0x48($sp)
/* AAB898 800346F8 87A50044 */  lh    $a1, 0x44($sp)
/* AAB89C 800346FC 11A00005 */  beqz  $t5, .L80034714
/* AAB8A0 80034700 248400B6 */   addiu $a0, $a0, 0xb6
/* AAB8A4 80034704 240E0001 */  li    $t6, 1
/* AAB8A8 80034708 0C01E1A7 */  jal   Math_SmoothStepToS
/* AAB8AC 8003470C AFAE0010 */   sw    $t6, 0x10($sp)
/* AAB8B0 80034710 8FA8004C */  lw    $t0, 0x4c($sp)
.L80034714:
/* AAB8B4 80034714 87A2005A */  lh    $v0, 0x5a($sp)
/* AAB8B8 80034718 87A90046 */  lh    $t1, 0x46($sp)
/* AAB8BC 8003471C 25040008 */  addiu $a0, $t0, 8
/* AAB8C0 80034720 24060006 */  li    $a2, 6
/* AAB8C4 80034724 0122082A */  slt   $at, $t1, $v0
/* AAB8C8 80034728 10200004 */  beqz  $at, .L8003473C
/* AAB8CC 8003472C 240707D0 */   li    $a3, 2000
/* AAB8D0 80034730 00022C00 */  sll   $a1, $v0, 0x10
/* AAB8D4 80034734 1000000A */  b     .L80034760
/* AAB8D8 80034738 00052C03 */   sra   $a1, $a1, 0x10
.L8003473C:
/* AAB8DC 8003473C 87A30056 */  lh    $v1, 0x56($sp)
/* AAB8E0 80034740 01201025 */  move  $v0, $t1
/* AAB8E4 80034744 0069082A */  slt   $at, $v1, $t1
/* AAB8E8 80034748 10200003 */  beqz  $at, .L80034758
/* AAB8EC 8003474C 00000000 */   nop   
/* AAB8F0 80034750 10000001 */  b     .L80034758
/* AAB8F4 80034754 00601025 */   move  $v0, $v1
.L80034758:
/* AAB8F8 80034758 00022C00 */  sll   $a1, $v0, 0x10
/* AAB8FC 8003475C 00052C03 */  sra   $a1, $a1, 0x10
.L80034760:
/* AAB900 80034760 240F0001 */  li    $t7, 1
/* AAB904 80034764 0C01E1A7 */  jal   Math_SmoothStepToS
/* AAB908 80034768 AFAF0010 */   sw    $t7, 0x10($sp)
/* AAB90C 8003476C 8FA8004C */  lw    $t0, 0x4c($sp)
/* AAB910 80034770 87B80046 */  lh    $t8, 0x46($sp)
/* AAB914 80034774 87A40066 */  lh    $a0, 0x66($sp)
/* AAB918 80034778 85190008 */  lh    $t9, 8($t0)
/* AAB91C 8003477C 24060006 */  li    $a2, 6
/* AAB920 80034780 240707D0 */  li    $a3, 2000
/* AAB924 80034784 03191823 */  subu  $v1, $t8, $t9
/* AAB928 80034788 00031C00 */  sll   $v1, $v1, 0x10
/* AAB92C 8003478C 00031C03 */  sra   $v1, $v1, 0x10
/* AAB930 80034790 0064082A */  slt   $at, $v1, $a0
/* AAB934 80034794 10200004 */  beqz  $at, .L800347A8
/* AAB938 80034798 240A0001 */   li    $t2, 1
/* AAB93C 8003479C 00042C00 */  sll   $a1, $a0, 0x10
/* AAB940 800347A0 1000000A */  b     .L800347CC
/* AAB944 800347A4 00052C03 */   sra   $a1, $a1, 0x10
.L800347A8:
/* AAB948 800347A8 87A40062 */  lh    $a0, 0x62($sp)
/* AAB94C 800347AC 00601025 */  move  $v0, $v1
/* AAB950 800347B0 0083082A */  slt   $at, $a0, $v1
/* AAB954 800347B4 10200003 */  beqz  $at, .L800347C4
/* AAB958 800347B8 00000000 */   nop   
/* AAB95C 800347BC 10000001 */  b     .L800347C4
/* AAB960 800347C0 00801025 */   move  $v0, $a0
.L800347C4:
/* AAB964 800347C4 00022C00 */  sll   $a1, $v0, 0x10
/* AAB968 800347C8 00052C03 */  sra   $a1, $a1, 0x10
.L800347CC:
/* AAB96C 800347CC 2504000E */  addiu $a0, $t0, 0xe
/* AAB970 800347D0 0C01E1A7 */  jal   Math_SmoothStepToS
/* AAB974 800347D4 AFAA0010 */   sw    $t2, 0x10($sp)
/* AAB978 800347D8 8FBF001C */  lw    $ra, 0x1c($sp)
/* AAB97C 800347DC 27BD0048 */  addiu $sp, $sp, 0x48
/* AAB980 800347E0 03E00008 */  jr    $ra
/* AAB984 800347E4 00000000 */   nop   

