glabel func_8099670C
/* 0046C 8099670C 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 00470 80996710 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 00474 80996714 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 00478 80996718 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0047C 8099671C 342117A4 */  ori     $at, $at, 0x17A4           ## $at = 000117A4
/* 00480 80996720 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 00484 80996724 AFA50034 */  sw      $a1, 0x0034($sp)           
/* 00488 80996728 00A12021 */  addu    $a0, $a1, $at              
/* 0048C 8099672C 0C026062 */  jal     Object_IsLoaded
              
/* 00490 80996730 8205016D */  lb      $a1, 0x016D($s0)           ## 0000016D
/* 00494 80996734 5040003E */  beql    $v0, $zero, .L80996830     
/* 00498 80996738 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 0049C 8099673C 9202016A */  lbu     $v0, 0x016A($s0)           ## 0000016A
/* 004A0 80996740 820E016D */  lb      $t6, 0x016D($s0)           ## 0000016D
/* 004A4 80996744 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
/* 004A8 80996748 10410004 */  beq     $v0, $at, .L8099675C       
/* 004AC 8099674C A20E001E */  sb      $t6, 0x001E($s0)           ## 0000001E
/* 004B0 80996750 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 004B4 80996754 14410033 */  bne     $v0, $at, .L80996824       
/* 004B8 80996758 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L8099675C:
/* 004BC 8099675C AFA0002C */  sw      $zero, 0x002C($sp)         
/* 004C0 80996760 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 004C4 80996764 0C00B591 */  jal     Actor_SetObjectDependency
              
/* 004C8 80996768 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 004CC 8099676C 920F016B */  lbu     $t7, 0x016B($s0)           ## 0000016B
/* 004D0 80996770 3C19809A */  lui     $t9, %hi(D_809980F2)       ## $t9 = 809A0000
/* 004D4 80996774 9208016A */  lbu     $t0, 0x016A($s0)           ## 0000016A
/* 004D8 80996778 000FC080 */  sll     $t8, $t7,  2               
/* 004DC 8099677C 0338C821 */  addu    $t9, $t9, $t8              
/* 004E0 80996780 933980F2 */  lbu     $t9, %lo(D_809980F2)($t9)  
/* 004E4 80996784 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 004E8 80996788 15010004 */  bne     $t0, $at, .L8099679C       
/* 004EC 8099678C A219016C */  sb      $t9, 0x016C($s0)           ## 0000016C
/* 004F0 80996790 3C040602 */  lui     $a0, 0x0602                ## $a0 = 06020000
/* 004F4 80996794 10000003 */  beq     $zero, $zero, .L809967A4   
/* 004F8 80996798 2484EDD0 */  addiu   $a0, $a0, 0xEDD0           ## $a0 = 0601EDD0
.L8099679C:
/* 004FC 8099679C 3C040601 */  lui     $a0, 0x0601                ## $a0 = 06010000
/* 00500 809967A0 24842FD0 */  addiu   $a0, $a0, 0x2FD0           ## $a0 = 06012FD0
.L809967A4:
/* 00504 809967A4 0C010620 */  jal     DynaPolyInfo_Alloc
              
/* 00508 809967A8 27A5002C */  addiu   $a1, $sp, 0x002C           ## $a1 = FFFFFFFC
/* 0050C 809967AC 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 00510 809967B0 02003025 */  or      $a2, $s0, $zero            ## $a2 = 00000000
/* 00514 809967B4 8FA7002C */  lw      $a3, 0x002C($sp)           
/* 00518 809967B8 0C00FA9D */  jal     DynaPolyInfo_setActor
              ## DynaPolyInfo_setActor
/* 0051C 809967BC 24850810 */  addiu   $a1, $a0, 0x0810           ## $a1 = 00000810
/* 00520 809967C0 9209016A */  lbu     $t1, 0x016A($s0)           ## 0000016A
/* 00524 809967C4 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 00528 809967C8 AE02014C */  sw      $v0, 0x014C($s0)           ## 0000014C
/* 0052C 809967CC 1521000F */  bne     $t1, $at, .L8099680C       
/* 00530 809967D0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00534 809967D4 3C01C000 */  lui     $at, 0xC000                ## $at = C0000000
/* 00538 809967D8 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 0053C 809967DC 44813000 */  mtc1    $at, $f6                   ## $f6 = -2.00
/* 00540 809967E0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00544 809967E4 2405281C */  addiu   $a1, $zero, 0x281C         ## $a1 = 0000281C
/* 00548 809967E8 E6040060 */  swc1    $f4, 0x0060($s0)           ## 00000060
/* 0054C 809967EC 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 00550 809967F0 E606006C */  swc1    $f6, 0x006C($s0)           ## 0000006C
/* 00554 809967F4 3C058099 */  lui     $a1, %hi(func_809975C0)    ## $a1 = 80990000
/* 00558 809967F8 24A575C0 */  addiu   $a1, $a1, %lo(func_809975C0) ## $a1 = 809975C0
/* 0055C 809967FC 0C2658A8 */  jal     func_809962A0              
/* 00560 80996800 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00564 80996804 1000000A */  beq     $zero, $zero, .L80996830   
/* 00568 80996808 8FBF001C */  lw      $ra, 0x001C($sp)           
.L8099680C:
/* 0056C 8099680C 3C058099 */  lui     $a1, %hi(func_80997744)    ## $a1 = 80990000
/* 00570 80996810 0C2658A8 */  jal     func_809962A0              
/* 00574 80996814 24A57744 */  addiu   $a1, $a1, %lo(func_80997744) ## $a1 = 80997744
/* 00578 80996818 240A0007 */  addiu   $t2, $zero, 0x0007         ## $t2 = 00000007
/* 0057C 8099681C 10000003 */  beq     $zero, $zero, .L8099682C   
/* 00580 80996820 A60A0164 */  sh      $t2, 0x0164($s0)           ## 00000164
.L80996824:
/* 00584 80996824 0C2658AB */  jal     func_809962AC              
/* 00588 80996828 8FA50034 */  lw      $a1, 0x0034($sp)           
.L8099682C:
/* 0058C 8099682C 8FBF001C */  lw      $ra, 0x001C($sp)           
.L80996830:
/* 00590 80996830 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 00594 80996834 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 00598 80996838 03E00008 */  jr      $ra                        
/* 0059C 8099683C 00000000 */  nop


