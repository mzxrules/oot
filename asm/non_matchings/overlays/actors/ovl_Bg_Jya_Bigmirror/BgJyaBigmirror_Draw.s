glabel BgJyaBigmirror_Draw
/* 00770 80893E50 27BDFFE8 */  addiu   $sp, $sp, 0xFFE8           ## $sp = FFFFFFE8
/* 00774 80893E54 AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 00778 80893E58 AFA5001C */  sw      $a1, 0x001C($sp)           
/* 0077C 80893E5C 9082015C */  lbu     $v0, 0x015C($a0)           ## 0000015C
/* 00780 80893E60 00803025 */  or      $a2, $a0, $zero            ## $a2 = 00000000
/* 00784 80893E64 00A02025 */  or      $a0, $a1, $zero            ## $a0 = 00000000
/* 00788 80893E68 304E0010 */  andi    $t6, $v0, 0x0010           ## $t6 = 00000000
/* 0078C 80893E6C 11C0000A */  beq     $t6, $zero, .L80893E98     
/* 00790 80893E70 3C050601 */  lui     $a1, %hi(D_0600E1B0)                ## $a1 = 06010000
/* 00794 80893E74 24A5E1B0 */  addiu   $a1, $a1, %lo(D_0600E1B0)           ## $a1 = 0600E1B0
/* 00798 80893E78 0C00D498 */  jal     Gfx_DrawDListOpa
              
/* 0079C 80893E7C AFA60018 */  sw      $a2, 0x0018($sp)           
/* 007A0 80893E80 3C050601 */  lui     $a1, %hi(D_0600E2D0)                ## $a1 = 06010000
/* 007A4 80893E84 24A5E2D0 */  addiu   $a1, $a1, %lo(D_0600E2D0)           ## $a1 = 0600E2D0
/* 007A8 80893E88 0C00D4C9 */  jal     Gfx_DrawDListXlu
              
/* 007AC 80893E8C 8FA4001C */  lw      $a0, 0x001C($sp)           
/* 007B0 80893E90 8FA60018 */  lw      $a2, 0x0018($sp)           
/* 007B4 80893E94 90C2015C */  lbu     $v0, 0x015C($a2)           ## 0000015C
.L80893E98:
/* 007B8 80893E98 304F0038 */  andi    $t7, $v0, 0x0038           ## $t7 = 00000000
/* 007BC 80893E9C 11E00007 */  beq     $t7, $zero, .L80893EBC     
/* 007C0 80893EA0 30580002 */  andi    $t8, $v0, 0x0002           ## $t8 = 00000000
/* 007C4 80893EA4 13000005 */  beq     $t8, $zero, .L80893EBC     
/* 007C8 80893EA8 30590001 */  andi    $t9, $v0, 0x0001           ## $t9 = 00000000
/* 007CC 80893EAC 13200003 */  beq     $t9, $zero, .L80893EBC     
/* 007D0 80893EB0 00C02025 */  or      $a0, $a2, $zero            ## $a0 = 00000000
/* 007D4 80893EB4 0C224F1A */  jal     func_80893C68              
/* 007D8 80893EB8 8FA5001C */  lw      $a1, 0x001C($sp)           
.L80893EBC:
/* 007DC 80893EBC 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 007E0 80893EC0 27BD0018 */  addiu   $sp, $sp, 0x0018           ## $sp = 00000000
/* 007E4 80893EC4 03E00008 */  jr      $ra                        
/* 007E8 80893EC8 00000000 */  nop
/* 007EC 80893ECC 00000000 */  nop
