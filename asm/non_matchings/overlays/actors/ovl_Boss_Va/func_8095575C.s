glabel func_8095575C
/* 0649C 8095575C 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 064A0 80955760 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 064A4 80955764 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 064A8 80955768 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 064AC 8095576C 0C253CB2 */  jal     func_8094F2C8              
/* 064B0 80955770 AFA5002C */  sw      $a1, 0x002C($sp)           
/* 064B4 80955774 260401E6 */  addiu   $a0, $s0, 0x01E6           ## $a0 = 000001E6
/* 064B8 80955778 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 064BC 8095577C 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 064C0 80955780 24070FA0 */  addiu   $a3, $zero, 0x0FA0         ## $a3 = 00000FA0
/* 064C4 80955784 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 064C8 80955788 AFA00010 */  sw      $zero, 0x0010($sp)         
/* 064CC 8095578C 260401E4 */  addiu   $a0, $s0, 0x01E4           ## $a0 = 000001E4
/* 064D0 80955790 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 064D4 80955794 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 064D8 80955798 24070FA0 */  addiu   $a3, $zero, 0x0FA0         ## $a3 = 00000FA0
/* 064DC 8095579C 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 064E0 809557A0 AFA00010 */  sw      $zero, 0x0010($sp)         
/* 064E4 809557A4 260401EC */  addiu   $a0, $s0, 0x01EC           ## $a0 = 000001EC
/* 064E8 809557A8 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 064EC 809557AC 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 064F0 809557B0 24070FA0 */  addiu   $a3, $zero, 0x0FA0         ## $a3 = 00000FA0
/* 064F4 809557B4 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 064F8 809557B8 AFA00010 */  sw      $zero, 0x0010($sp)         
/* 064FC 809557BC 260401EA */  addiu   $a0, $s0, 0x01EA           ## $a0 = 000001EA
/* 06500 809557C0 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 06504 809557C4 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 06508 809557C8 24070FA0 */  addiu   $a3, $zero, 0x0FA0         ## $a3 = 00000FA0
/* 0650C 809557CC 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 06510 809557D0 AFA00010 */  sw      $zero, 0x0010($sp)         
/* 06514 809557D4 860E00B6 */  lh      $t6, 0x00B6($s0)           ## 000000B6
/* 06518 809557D8 860F00B4 */  lh      $t7, 0x00B4($s0)           ## 000000B4
/* 0651C 809557DC AFA00010 */  sw      $zero, 0x0010($sp)         
/* 06520 809557E0 260401F2 */  addiu   $a0, $s0, 0x01F2           ## $a0 = 000001F2
/* 06524 809557E4 01CF2823 */  subu    $a1, $t6, $t7              
/* 06528 809557E8 00052C00 */  sll     $a1, $a1, 16               
/* 0652C 809557EC 00052C03 */  sra     $a1, $a1, 16               
/* 06530 809557F0 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 06534 809557F4 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 06538 809557F8 240702EE */  addiu   $a3, $zero, 0x02EE         ## $a3 = 000002EE
/* 0653C 809557FC 8E18016C */  lw      $t8, 0x016C($s0)           ## 0000016C
/* 06540 80955800 260401F0 */  addiu   $a0, $s0, 0x01F0           ## $a0 = 000001F0
/* 06544 80955804 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
/* 06548 80955808 8705002E */  lh      $a1, 0x002E($t8)           ## 0000002E
/* 0654C 8095580C AFA00010 */  sw      $zero, 0x0010($sp)         
/* 06550 80955810 0C01E1A7 */  jal     Math_SmoothStepToS
              
/* 06554 80955814 240702EE */  addiu   $a3, $zero, 0x02EE         ## $a3 = 000002EE
/* 06558 80955818 0C02927F */  jal     SkelAnime_FrameUpdateMatrix
              
/* 0655C 8095581C 2604014C */  addiu   $a0, $s0, 0x014C           ## $a0 = 0000014C
/* 06560 80955820 1040000D */  beq     $v0, $zero, .L80955858     
/* 06564 80955824 3C198096 */  lui     $t9, %hi(D_809668D1)       ## $t9 = 80960000
/* 06568 80955828 933968D1 */  lbu     $t9, %lo(D_809668D1)($t9)  
/* 0656C 8095582C 8FA5002C */  lw      $a1, 0x002C($sp)           
/* 06570 80955830 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 06574 80955834 2B21000F */  slti    $at, $t9, 0x000F           
/* 06578 80955838 14200005 */  bne     $at, $zero, .L80955850     
/* 0657C 8095583C 00000000 */  nop
/* 06580 80955840 0C255799 */  jal     func_80955E64              
/* 06584 80955844 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 06588 80955848 10000004 */  beq     $zero, $zero, .L8095585C   
/* 0658C 8095584C 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80955850:
/* 06590 80955850 0C2552E3 */  jal     func_80954B8C              
/* 06594 80955854 8FA5002C */  lw      $a1, 0x002C($sp)           
.L80955858:
/* 06598 80955858 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L8095585C:
/* 0659C 8095585C 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 065A0 80955860 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
/* 065A4 80955864 03E00008 */  jr      $ra                        
/* 065A8 80955868 00000000 */  nop
