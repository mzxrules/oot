glabel func_808069B4
/* 02C74 808069B4 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 02C78 808069B8 27BDFFF0 */  addiu   $sp, $sp, 0xFFF0           ## $sp = FFFFFFF0
/* 02C7C 808069BC 34218000 */  ori     $at, $at, 0x8000           ## $at = 00018000
/* 02C80 808069C0 AFB1000C */  sw      $s1, 0x000C($sp)           
/* 02C84 808069C4 AFB00008 */  sw      $s0, 0x0008($sp)           
/* 02C88 808069C8 00811021 */  addu    $v0, $a0, $at              
/* 02C8C 808069CC 00201821 */  addu    $v1, $at, $zero            
/* 02C90 808069D0 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02C94 808069D4 00067040 */  sll     $t6, $a2,  1               
.L808069D8:
/* 02C98 808069D8 008E7821 */  addu    $t7, $a0, $t6              
/* 02C9C 808069DC 01E34021 */  addu    $t0, $t7, $v1              
/* 02CA0 808069E0 85094A52 */  lh      $t1, 0x4A52($t0)           ## 00004A52
/* 02CA4 808069E4 24C60001 */  addiu   $a2, $a2, 0x0001           ## $a2 = 00000001
/* 02CA8 808069E8 00063400 */  sll     $a2, $a2, 16               
/* 02CAC 808069EC 05200003 */  bltz    $t1, .L808069FC            
/* 02CB0 808069F0 00063403 */  sra     $a2, $a2, 16               
/* 02CB4 808069F4 10000002 */  beq     $zero, $zero, .L80806A00   
/* 02CB8 808069F8 01202825 */  or      $a1, $t1, $zero            ## $a1 = 00000000
.L808069FC:
/* 02CBC 808069FC 00092823 */  subu    $a1, $zero, $t1            
.L80806A00:
/* 02CC0 80806A00 84584A50 */  lh      $t8, 0x4A50($v0)           ## 00004A50
/* 02CC4 80806A04 00B8001A */  div     $zero, $a1, $t8            
/* 02CC8 80806A08 17000002 */  bne     $t8, $zero, .L80806A14     
/* 02CCC 80806A0C 00000000 */  nop
/* 02CD0 80806A10 0007000D */  break 7
.L80806A14:
/* 02CD4 80806A14 2401FFFF */  addiu   $at, $zero, 0xFFFF         ## $at = FFFFFFFF
/* 02CD8 80806A18 17010004 */  bne     $t8, $at, .L80806A2C       
/* 02CDC 80806A1C 3C018000 */  lui     $at, 0x8000                ## $at = 80000000
/* 02CE0 80806A20 14A10002 */  bne     $a1, $at, .L80806A2C       
/* 02CE4 80806A24 00000000 */  nop
/* 02CE8 80806A28 0006000D */  break 6
.L80806A2C:
/* 02CEC 80806A2C 00003812 */  mflo    $a3                        
/* 02CF0 80806A30 00073C00 */  sll     $a3, $a3, 16               
/* 02CF4 80806A34 28C10005 */  slti    $at, $a2, 0x0005           
/* 02CF8 80806A38 05200004 */  bltz    $t1, .L80806A4C            
/* 02CFC 80806A3C 00073C03 */  sra     $a3, $a3, 16               
/* 02D00 80806A40 0127C823 */  subu    $t9, $t1, $a3              
/* 02D04 80806A44 10000003 */  beq     $zero, $zero, .L80806A54   
/* 02D08 80806A48 A5194A52 */  sh      $t9, 0x4A52($t0)           ## 00004A52
.L80806A4C:
/* 02D0C 80806A4C 01277021 */  addu    $t6, $t1, $a3              
/* 02D10 80806A50 A50E4A52 */  sh      $t6, 0x4A52($t0)           ## 00004A52
.L80806A54:
/* 02D14 80806A54 5420FFE0 */  bnel    $at, $zero, .L808069D8     
/* 02D18 80806A58 00067040 */  sll     $t6, $a2,  1               
/* 02D1C 80806A5C 3C0B8013 */  lui     $t3, %hi(gSramSlotOffsets)
/* 02D20 80806A60 256BA4E0 */  addiu   $t3, %lo(gSramSlotOffsets)
/* 02D24 80806A64 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02D28 80806A68 248501E0 */  addiu   $a1, $a0, 0x01E0           ## $a1 = 000001E0
/* 02D2C 80806A6C 24110041 */  addiu   $s1, $zero, 0x0041         ## $s1 = 00000041
/* 02D30 80806A70 24100044 */  addiu   $s0, $zero, 0x0044         ## $s0 = 00000044
/* 02D34 80806A74 240D004C */  addiu   $t5, $zero, 0x004C         ## $t5 = 0000004C
/* 02D38 80806A78 240C0045 */  addiu   $t4, $zero, 0x0045         ## $t4 = 00000045
/* 02D3C 80806A7C 240A005A */  addiu   $t2, $zero, 0x005A         ## $t2 = 0000005A
/* 02D40 80806A80 00063840 */  sll     $a3, $a2,  1               
.L80806A84:
/* 02D44 80806A84 00877821 */  addu    $t7, $a0, $a3              
/* 02D48 80806A88 01E34021 */  addu    $t0, $t7, $v1              
/* 02D4C 80806A8C 85184A74 */  lh      $t8, 0x4A74($t0)           ## 00004A74
/* 02D50 80806A90 01677021 */  addu    $t6, $t3, $a3              
/* 02D54 80806A94 24C60001 */  addiu   $a2, $a2, 0x0001           ## $a2 = 00000001
/* 02D58 80806A98 27190019 */  addiu   $t9, $t8, 0x0019           ## $t9 = 00000019
/* 02D5C 80806A9C A5194A74 */  sh      $t9, 0x4A74($t0)           ## 00004A74
/* 02D60 80806AA0 8CB80000 */  lw      $t8, 0x0000($a1)           ## 000001E0
/* 02D64 80806AA4 95CF0000 */  lhu     $t7, 0x0000($t6)           ## 00000000
/* 02D68 80806AA8 00063400 */  sll     $a2, $a2, 16               
/* 02D6C 80806AAC 00063403 */  sra     $a2, $a2, 16               
/* 02D70 80806AB0 01F84821 */  addu    $t1, $t7, $t8              
/* 02D74 80806AB4 9139001C */  lbu     $t9, 0x001C($t1)           ## 0000001C
/* 02D78 80806AB8 28C10003 */  slti    $at, $a2, 0x0003           
/* 02D7C 80806ABC 51590011 */  beql    $t2, $t9, .L80806B04       
/* 02D80 80806AC0 85074A74 */  lh      $a3, 0x4A74($t0)           ## 00004A74
/* 02D84 80806AC4 912E001D */  lbu     $t6, 0x001D($t1)           ## 0000001D
/* 02D88 80806AC8 518E000E */  beql    $t4, $t6, .L80806B04       
/* 02D8C 80806ACC 85074A74 */  lh      $a3, 0x4A74($t0)           ## 00004A74
/* 02D90 80806AD0 912F001E */  lbu     $t7, 0x001E($t1)           ## 0000001E
/* 02D94 80806AD4 51AF000B */  beql    $t5, $t7, .L80806B04       
/* 02D98 80806AD8 85074A74 */  lh      $a3, 0x4A74($t0)           ## 00004A74
/* 02D9C 80806ADC 9138001F */  lbu     $t8, 0x001F($t1)           ## 0000001F
/* 02DA0 80806AE0 52180008 */  beql    $s0, $t8, .L80806B04       
/* 02DA4 80806AE4 85074A74 */  lh      $a3, 0x4A74($t0)           ## 00004A74
/* 02DA8 80806AE8 91390020 */  lbu     $t9, 0x0020($t1)           ## 00000020
/* 02DAC 80806AEC 52390005 */  beql    $s1, $t9, .L80806B04       
/* 02DB0 80806AF0 85074A74 */  lh      $a3, 0x4A74($t0)           ## 00004A74
/* 02DB4 80806AF4 912E0021 */  lbu     $t6, 0x0021($t1)           ## 00000021
/* 02DB8 80806AF8 154E0007 */  bne     $t2, $t6, .L80806B18       
/* 02DBC 80806AFC 00000000 */  nop
/* 02DC0 80806B00 85074A74 */  lh      $a3, 0x4A74($t0)           ## 00004A74
.L80806B04:
/* 02DC4 80806B04 850F4A86 */  lh      $t7, 0x4A86($t0)           ## 00004A86
/* 02DC8 80806B08 A5074A80 */  sh      $a3, 0x4A80($t0)           ## 00004A80
/* 02DCC 80806B0C 25F8001F */  addiu   $t8, $t7, 0x001F           ## $t8 = 0000001F
/* 02DD0 80806B10 A5184A86 */  sh      $t8, 0x4A86($t0)           ## 00004A86
/* 02DD4 80806B14 A5074A7A */  sh      $a3, 0x4A7A($t0)           ## 00004A7A
.L80806B18:
/* 02DD8 80806B18 5420FFDA */  bnel    $at, $zero, .L80806A84     
/* 02DDC 80806B1C 00063840 */  sll     $a3, $a2,  1               
/* 02DE0 80806B20 84594A46 */  lh      $t9, 0x4A46($v0)           ## 00004A46
/* 02DE4 80806B24 00197040 */  sll     $t6, $t9,  1               
/* 02DE8 80806B28 008E7821 */  addu    $t7, $a0, $t6              
/* 02DEC 80806B2C 01E32821 */  addu    $a1, $t7, $v1              
/* 02DF0 80806B30 84B84A74 */  lh      $t8, 0x4A74($a1)           ## 00004C54
/* 02DF4 80806B34 241900C8 */  addiu   $t9, $zero, 0x00C8         ## $t9 = 000000C8
/* 02DF8 80806B38 2B0100C8 */  slti    $at, $t8, 0x00C8           
/* 02DFC 80806B3C 54200003 */  bnel    $at, $zero, .L80806B4C     
/* 02E00 80806B40 844E4A6E */  lh      $t6, 0x4A6E($v0)           ## 00004A6E
/* 02E04 80806B44 A4B94A74 */  sh      $t9, 0x4A74($a1)           ## 00004C54
/* 02E08 80806B48 844E4A6E */  lh      $t6, 0x4A6E($v0)           ## 00004A6E
.L80806B4C:
/* 02E0C 80806B4C 84584A70 */  lh      $t8, 0x4A70($v0)           ## 00004A70
/* 02E10 80806B50 3C010002 */  lui     $at, 0x0002                ## $at = 00020000
/* 02E14 80806B54 25CFFFE1 */  addiu   $t7, $t6, 0xFFE1           ## $t7 = FFFFFFE1
/* 02E18 80806B58 844E4A50 */  lh      $t6, 0x4A50($v0)           ## 00004A50
/* 02E1C 80806B5C A44F4A6E */  sh      $t7, 0x4A6E($v0)           ## 00004A6E
/* 02E20 80806B60 2719001F */  addiu   $t9, $t8, 0x001F           ## $t9 = 0000003E
/* 02E24 80806B64 A4594A70 */  sh      $t9, 0x4A70($v0)           ## 00004A70
/* 02E28 80806B68 00240821 */  addu    $at, $at, $a0              
/* 02E2C 80806B6C 25CFFFFF */  addiu   $t7, $t6, 0xFFFF           ## $t7 = FFFFFFFF
/* 02E30 80806B70 A42FCA50 */  sh      $t7, -0x35B0($at)          ## 0001CA50
/* 02E34 80806B74 84584A50 */  lh      $t8, 0x4A50($v0)           ## 00004A50
/* 02E38 80806B78 3C010002 */  lui     $at, 0x0002                ## $at = 00020000
/* 02E3C 80806B7C 57000020 */  bnel    $t8, $zero, .L80806C00     
/* 02E40 80806B80 84474A92 */  lh      $a3, 0x4A92($v0)           ## 00004A92
/* 02E44 80806B84 84594A46 */  lh      $t9, 0x4A46($v0)           ## 00004A46
/* 02E48 80806B88 00240821 */  addu    $at, $at, $a0              
/* 02E4C 80806B8C 3C058016 */  lui     $a1, %hi(gGameInfo)
/* 02E50 80806B90 00197040 */  sll     $t6, $t9,  1               
/* 02E54 80806B94 008E7821 */  addu    $t7, $a0, $t6              
/* 02E58 80806B98 01E3C021 */  addu    $t8, $t7, $v1              
/* 02E5C 80806B9C A7004A4A */  sh      $zero, 0x4A4A($t8)         ## 00004A69
/* 02E60 80806BA0 24190046 */  addiu   $t9, $zero, 0x0046         ## $t9 = 00000046
/* 02E64 80806BA4 A4594AA8 */  sh      $t9, 0x4AA8($v0)           ## 00004AA8
/* 02E68 80806BA8 240E0001 */  addiu   $t6, $zero, 0x0001         ## $t6 = 00000001
/* 02E6C 80806BAC A42ECAAA */  sh      $t6, -0x3556($at)          ## 0001CAAA
/* 02E70 80806BB0 8CA5FA90 */  lw      $a1, %lo(gGameInfo)($a1)
/* 02E74 80806BB4 241800C8 */  addiu   $t8, $zero, 0x00C8         ## $t8 = 000000C8
/* 02E78 80806BB8 3C010002 */  lui     $at, 0x0002                ## $at = 00020000
/* 02E7C 80806BBC 84AF0ADC */  lh      $t7, 0x0ADC($a1)           ## 80160ADC
/* 02E80 80806BC0 00240821 */  addu    $at, $at, $a0              
/* 02E84 80806BC4 A4AF0ADA */  sh      $t7, 0x0ADA($a1)           ## 80160ADA
/* 02E88 80806BC8 A4404A98 */  sh      $zero, 0x4A98($v0)         ## 00004A98
/* 02E8C 80806BCC 84594A98 */  lh      $t9, 0x4A98($v0)           ## 00004A98
/* 02E90 80806BD0 844E4A66 */  lh      $t6, 0x4A66($v0)           ## 00004A66
/* 02E94 80806BD4 A4584A92 */  sh      $t8, 0x4A92($v0)           ## 00004A92
/* 02E98 80806BD8 A4594A96 */  sh      $t9, 0x4A96($v0)           ## 00004A96
/* 02E9C 80806BDC A42ECA64 */  sh      $t6, -0x359C($at)          ## 0001CA64
/* 02EA0 80806BE0 240F00FF */  addiu   $t7, $zero, 0x00FF         ## $t7 = 000000FF
/* 02EA4 80806BE4 3C010002 */  lui     $at, 0x0002                ## $at = 00020000
/* 02EA8 80806BE8 A44F4A6E */  sh      $t7, 0x4A6E($v0)           ## 00004A6E
/* 02EAC 80806BEC A4404A70 */  sh      $zero, 0x4A70($v0)         ## 00004A70
/* 02EB0 80806BF0 00240821 */  addu    $at, $at, $a0              
/* 02EB4 80806BF4 24180002 */  addiu   $t8, $zero, 0x0002         ## $t8 = 00000002
/* 02EB8 80806BF8 A438CA3E */  sh      $t8, -0x35C2($at)          ## 0001CA3E
/* 02EBC 80806BFC 84474A92 */  lh      $a3, 0x4A92($v0)           ## 00004A92
.L80806C00:
/* 02EC0 80806C00 3C010002 */  lui     $at, 0x0002                ## $at = 00020000
/* 02EC4 80806C04 00240821 */  addu    $at, $at, $a0              
/* 02EC8 80806C08 A4474A94 */  sh      $a3, 0x4A94($v0)           ## 00004A94
/* 02ECC 80806C0C A427CA9A */  sh      $a3, -0x3566($at)          ## 0001CA9A
/* 02ED0 80806C10 8FB1000C */  lw      $s1, 0x000C($sp)           
/* 02ED4 80806C14 8FB00008 */  lw      $s0, 0x0008($sp)           
/* 02ED8 80806C18 03E00008 */  jr      $ra                        
/* 02EDC 80806C1C 27BD0010 */  addiu   $sp, $sp, 0x0010           ## $sp = 00000000
