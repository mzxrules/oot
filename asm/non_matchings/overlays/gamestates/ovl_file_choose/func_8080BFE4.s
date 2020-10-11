.rdata
glabel D_80812D4C
    .asciz "1:read_buff[]=%x, %x, %x, %x\n"
    .balign 4

glabel D_80812D6C
    .asciz "read_buff[]=%x, %x, %x, %x\n"
    .balign 4

glabel D_80812D88
    .asciz "1:read_buff[]=%x, %x, %x, %x\n"
    .balign 4

glabel D_80812DA8
    .asciz "read_buff[]=%x, %x, %x, %x\n"
    .balign 4

glabel D_80812DC4
    .asciz "1:read_buff[]=%x, %x, %x, %x\n"
    .balign 4

glabel D_80812DE4
    .asciz "read_buff[]=%x, %x, %x, %x\n"
    .balign 4

.text
glabel func_8080BFE4
/* 082A4 8080BFE4 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 082A8 8080BFE8 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 082AC 8080BFEC AFB10020 */  sw      $s1, 0x0020($sp)           
/* 082B0 8080BFF0 AFB0001C */  sw      $s0, 0x001C($sp)           
/* 082B4 8080BFF4 948E0050 */  lhu     $t6, 0x0050($a0)           ## 00000050
/* 082B8 8080BFF8 2401FDFF */  addiu   $at, $zero, 0xFDFF         ## $at = FFFFFDFF
/* 082BC 8080BFFC 00808825 */  or      $s1, $a0, $zero            ## $s1 = 00000000
/* 082C0 8080C000 01C17827 */  nor     $t7, $t6, $at              
/* 082C4 8080C004 15E00026 */  bne     $t7, $zero, .L8080C0A0     
/* 082C8 8080C008 3C028016 */  lui     $v0, %hi(gSaveContext)
/* 082CC 8080C00C 2442E660 */  addiu   $v0, %lo(gSaveContext)
/* 082D0 8080C010 A0401409 */  sb      $zero, 0x1409($v0)         ## 8015FA69
/* 082D4 8080C014 249001E0 */  addiu   $s0, $a0, 0x01E0           ## $s0 = 000001E0
/* 082D8 8080C018 8E190000 */  lw      $t9, 0x0000($s0)           ## 000001E0
/* 082DC 8080C01C 3C098000 */  lui     $t1, %hi(D_80000002)
/* 082E0 8080C020 3C040800 */  lui     $a0, 0x0800                ## $a0 = 08000000
/* 082E4 8080C024 A3200002 */  sb      $zero, 0x0002($t9)         ## 00000002
/* 082E8 8080C028 A1200002 */  sb      $zero, %lo(D_80000002)($t1)
/* 082EC 8080C02C 8E050000 */  lw      $a1, 0x0000($s0)           ## 000001E0
/* 082F0 8080C030 24060003 */  addiu   $a2, $zero, 0x0003         ## $a2 = 00000003
/* 082F4 8080C034 0C02A7A8 */  jal     SsSram_ReadWrite
/* 082F8 8080C038 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 082FC 8080C03C 8E020000 */  lw      $v0, 0x0000($s0)           ## 000001E0
/* 08300 8080C040 3C048081 */  lui     $a0, %hi(D_80812D4C)       ## $a0 = 80810000
/* 08304 8080C044 24842D4C */  addiu   $a0, $a0, %lo(D_80812D4C)  ## $a0 = 80812D4C
/* 08308 8080C048 904A0003 */  lbu     $t2, 0x0003($v0)           ## 00000003
/* 0830C 8080C04C 90450000 */  lbu     $a1, 0x0000($v0)           ## 00000000
/* 08310 8080C050 90460001 */  lbu     $a2, 0x0001($v0)           ## 00000001
/* 08314 8080C054 90470002 */  lbu     $a3, 0x0002($v0)           ## 00000002
/* 08318 8080C058 0C00084C */  jal     osSyncPrintf
              
/* 0831C 8080C05C AFAA0010 */  sw      $t2, 0x0010($sp)           
/* 08320 8080C060 3C040800 */  lui     $a0, 0x0800                ## $a0 = 08000000
/* 08324 8080C064 8E050000 */  lw      $a1, 0x0000($s0)           ## 000001E0
/* 08328 8080C068 34068000 */  ori     $a2, $zero, 0x8000         ## $a2 = 00008000
/* 0832C 8080C06C 0C02A7A8 */  jal     SsSram_ReadWrite
/* 08330 8080C070 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 08334 8080C074 8E020000 */  lw      $v0, 0x0000($s0)           ## 000001E0
/* 08338 8080C078 3C048081 */  lui     $a0, %hi(D_80812D6C)       ## $a0 = 80810000
/* 0833C 8080C07C 24842D6C */  addiu   $a0, $a0, %lo(D_80812D6C)  ## $a0 = 80812D6C
/* 08340 8080C080 904B0003 */  lbu     $t3, 0x0003($v0)           ## 00000003
/* 08344 8080C084 90450000 */  lbu     $a1, 0x0000($v0)           ## 00000000
/* 08348 8080C088 90460001 */  lbu     $a2, 0x0001($v0)           ## 00000001
/* 0834C 8080C08C 90470002 */  lbu     $a3, 0x0002($v0)           ## 00000002
/* 08350 8080C090 0C00084C */  jal     osSyncPrintf
              
/* 08354 8080C094 AFAB0010 */  sw      $t3, 0x0010($sp)           
/* 08358 8080C098 10000055 */  beq     $zero, $zero, .L8080C1F0   
/* 0835C 8080C09C 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
.L8080C0A0:
/* 08360 8080C0A0 96220050 */  lhu     $v0, 0x0050($s1)           ## 00000050
/* 08364 8080C0A4 2401F7FF */  addiu   $at, $zero, 0xF7FF         ## $at = FFFFF7FF
/* 08368 8080C0A8 3C0F8000 */  lui     $t7, 0x8000                ## $t7 = 80000000
/* 0836C 8080C0AC 00416027 */  nor     $t4, $v0, $at              
/* 08370 8080C0B0 15800027 */  bne     $t4, $zero, .L8080C150     
/* 08374 8080C0B4 2401FEFF */  addiu   $at, $zero, 0xFEFF         ## $at = FFFFFEFF
/* 08378 8080C0B8 3C028016 */  lui     $v0, %hi(gSaveContext)
/* 0837C 8080C0BC 2442E660 */  addiu   $v0, %lo(gSaveContext)
/* 08380 8080C0C0 240D0001 */  addiu   $t5, $zero, 0x0001         ## $t5 = 00000001
/* 08384 8080C0C4 A04D1409 */  sb      $t5, 0x1409($v0)           ## 8015FA69
/* 08388 8080C0C8 263001E0 */  addiu   $s0, $s1, 0x01E0           ## $s0 = 000001E0
/* 0838C 8080C0CC 8E0E0000 */  lw      $t6, 0x0000($s0)           ## 000001E0
/* 08390 8080C0D0 3C040800 */  lui     $a0, 0x0800                ## $a0 = 08000000
/* 08394 8080C0D4 24060003 */  addiu   $a2, $zero, 0x0003         ## $a2 = 00000003
/* 08398 8080C0D8 A1CD0002 */  sb      $t5, 0x0002($t6)           ## 00000002
/* 0839C 8080C0DC A1ED0002 */  sb      $t5, 0x0002($t7)           ## 80000002
/* 083A0 8080C0E0 8E050000 */  lw      $a1, 0x0000($s0)           ## 000001E0
/* 083A4 8080C0E4 0C02A7A8 */  jal     SsSram_ReadWrite
/* 083A8 8080C0E8 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 083AC 8080C0EC 8E020000 */  lw      $v0, 0x0000($s0)           ## 000001E0
/* 083B0 8080C0F0 3C048081 */  lui     $a0, %hi(D_80812D88)       ## $a0 = 80810000
/* 083B4 8080C0F4 24842D88 */  addiu   $a0, $a0, %lo(D_80812D88)  ## $a0 = 80812D88
/* 083B8 8080C0F8 90580003 */  lbu     $t8, 0x0003($v0)           ## 00000003
/* 083BC 8080C0FC 90450000 */  lbu     $a1, 0x0000($v0)           ## 00000000
/* 083C0 8080C100 90460001 */  lbu     $a2, 0x0001($v0)           ## 00000001
/* 083C4 8080C104 90470002 */  lbu     $a3, 0x0002($v0)           ## 00000002
/* 083C8 8080C108 0C00084C */  jal     osSyncPrintf
              
/* 083CC 8080C10C AFB80010 */  sw      $t8, 0x0010($sp)           
/* 083D0 8080C110 3C040800 */  lui     $a0, 0x0800                ## $a0 = 08000000
/* 083D4 8080C114 8E050000 */  lw      $a1, 0x0000($s0)           ## 000001E0
/* 083D8 8080C118 34068000 */  ori     $a2, $zero, 0x8000         ## $a2 = 00008000
/* 083DC 8080C11C 0C02A7A8 */  jal     SsSram_ReadWrite
/* 083E0 8080C120 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 083E4 8080C124 8E020000 */  lw      $v0, 0x0000($s0)           ## 000001E0
/* 083E8 8080C128 3C048081 */  lui     $a0, %hi(D_80812DA8)       ## $a0 = 80810000
/* 083EC 8080C12C 24842DA8 */  addiu   $a0, $a0, %lo(D_80812DA8)  ## $a0 = 80812DA8
/* 083F0 8080C130 90590003 */  lbu     $t9, 0x0003($v0)           ## 00000003
/* 083F4 8080C134 90450000 */  lbu     $a1, 0x0000($v0)           ## 00000000
/* 083F8 8080C138 90460001 */  lbu     $a2, 0x0001($v0)           ## 00000001
/* 083FC 8080C13C 90470002 */  lbu     $a3, 0x0002($v0)           ## 00000002
/* 08400 8080C140 0C00084C */  jal     osSyncPrintf
              
/* 08404 8080C144 AFB90010 */  sw      $t9, 0x0010($sp)           
/* 08408 8080C148 10000029 */  beq     $zero, $zero, .L8080C1F0   
/* 0840C 8080C14C 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
.L8080C150:
/* 08410 8080C150 00414827 */  nor     $t1, $v0, $at              
/* 08414 8080C154 15200025 */  bne     $t1, $zero, .L8080C1EC     
/* 08418 8080C158 3C028016 */  lui     $v0, %hi(gSaveContext)
/* 0841C 8080C15C 2442E660 */  addiu   $v0, %lo(gSaveContext)
/* 08420 8080C160 240A0002 */  addiu   $t2, $zero, 0x0002         ## $t2 = 00000002
/* 08424 8080C164 A04A1409 */  sb      $t2, 0x1409($v0)           ## 8015FA69
/* 08428 8080C168 263001E0 */  addiu   $s0, $s1, 0x01E0           ## $s0 = 000001E0
/* 0842C 8080C16C 8E0B0000 */  lw      $t3, 0x0000($s0)           ## 000001E0
/* 08430 8080C170 3C0C8000 */  lui     $t4, %hi(D_80000002)
/* 08434 8080C174 3C040800 */  lui     $a0, 0x0800                ## $a0 = 08000000
/* 08438 8080C178 A16A0002 */  sb      $t2, 0x0002($t3)           ## 00000002
/* 0843C 8080C17C A18A0002 */  sb      $t2, %lo(D_80000002)($t4)
/* 08440 8080C180 8E050000 */  lw      $a1, 0x0000($s0)           ## 000001E0
/* 08444 8080C184 24060003 */  addiu   $a2, $zero, 0x0003         ## $a2 = 00000003
/* 08448 8080C188 0C02A7A8 */  jal     SsSram_ReadWrite
/* 0844C 8080C18C 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 08450 8080C190 8E020000 */  lw      $v0, 0x0000($s0)           ## 000001E0
/* 08454 8080C194 3C048081 */  lui     $a0, %hi(D_80812DC4)       ## $a0 = 80810000
/* 08458 8080C198 24842DC4 */  addiu   $a0, $a0, %lo(D_80812DC4)  ## $a0 = 80812DC4
/* 0845C 8080C19C 904D0003 */  lbu     $t5, 0x0003($v0)           ## 00000003
/* 08460 8080C1A0 90450000 */  lbu     $a1, 0x0000($v0)           ## 00000000
/* 08464 8080C1A4 90460001 */  lbu     $a2, 0x0001($v0)           ## 00000001
/* 08468 8080C1A8 90470002 */  lbu     $a3, 0x0002($v0)           ## 00000002
/* 0846C 8080C1AC 0C00084C */  jal     osSyncPrintf
              
/* 08470 8080C1B0 AFAD0010 */  sw      $t5, 0x0010($sp)           
/* 08474 8080C1B4 3C040800 */  lui     $a0, 0x0800                ## $a0 = 08000000
/* 08478 8080C1B8 8E050000 */  lw      $a1, 0x0000($s0)           ## 000001E0
/* 0847C 8080C1BC 34068000 */  ori     $a2, $zero, 0x8000         ## $a2 = 00008000
/* 08480 8080C1C0 0C02A7A8 */  jal     SsSram_ReadWrite
/* 08484 8080C1C4 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 08488 8080C1C8 8E020000 */  lw      $v0, 0x0000($s0)           ## 000001E0
/* 0848C 8080C1CC 3C048081 */  lui     $a0, %hi(D_80812DE4)       ## $a0 = 80810000
/* 08490 8080C1D0 24842DE4 */  addiu   $a0, $a0, %lo(D_80812DE4)  ## $a0 = 80812DE4
/* 08494 8080C1D4 904E0003 */  lbu     $t6, 0x0003($v0)           ## 00000003
/* 08498 8080C1D8 90450000 */  lbu     $a1, 0x0000($v0)           ## 00000000
/* 0849C 8080C1DC 90460001 */  lbu     $a2, 0x0001($v0)           ## 00000001
/* 084A0 8080C1E0 90470002 */  lbu     $a3, 0x0002($v0)           ## 00000002
/* 084A4 8080C1E4 0C00084C */  jal     osSyncPrintf
              
/* 084A8 8080C1E8 AFAE0010 */  sw      $t6, 0x0010($sp)           
.L8080C1EC:
/* 084AC 8080C1EC 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
.L8080C1F0:
/* 084B0 8080C1F0 34218000 */  ori     $at, $at, 0x8000           ## $at = 00018000
/* 084B4 8080C1F4 02212021 */  addu    $a0, $s1, $at              
/* 084B8 8080C1F8 848F4AAA */  lh      $t7, 0x4AAA($a0)           ## 00004AAA
/* 084BC 8080C1FC 3C088081 */  lui     $t0, %hi(D_80812814)       ## $t0 = 80810000
/* 084C0 8080C200 25082814 */  addiu   $t0, $t0, %lo(D_80812814)  ## $t0 = 80812814
/* 084C4 8080C204 000FC040 */  sll     $t8, $t7,  1               
/* 084C8 8080C208 0118C821 */  addu    $t9, $t0, $t8              
/* 084CC 8080C20C 87260000 */  lh      $a2, 0x0000($t9)           ## 00000000
/* 084D0 8080C210 84834AA8 */  lh      $v1, 0x4AA8($a0)           ## 00004AA8
/* 084D4 8080C214 3C078016 */  lui     $a3, %hi(gGameInfo)
/* 084D8 8080C218 24E7FA90 */  addiu   $a3, %lo(gGameInfo)
/* 084DC 8080C21C 00661023 */  subu    $v0, $v1, $a2              
/* 084E0 8080C220 04400003 */  bltz    $v0, .L8080C230            
/* 084E4 8080C224 00022823 */  subu    $a1, $zero, $v0            
/* 084E8 8080C228 10000001 */  beq     $zero, $zero, .L8080C230   
/* 084EC 8080C22C 00402825 */  or      $a1, $v0, $zero            ## $a1 = 00000000
.L8080C230:
/* 084F0 8080C230 8CE90000 */  lw      $t1, 0x0000($a3)           ## 8015FA90
/* 084F4 8080C234 852A0ADA */  lh      $t2, 0x0ADA($t1)           ## 00000ADA
/* 084F8 8080C238 00AA001A */  div     $zero, $a1, $t2            
/* 084FC 8080C23C 15400002 */  bne     $t2, $zero, .L8080C248     
/* 08500 8080C240 00000000 */  nop
/* 08504 8080C244 0007000D */  break 7
.L8080C248:
/* 08508 8080C248 2401FFFF */  addiu   $at, $zero, 0xFFFF         ## $at = FFFFFFFF
/* 0850C 8080C24C 15410004 */  bne     $t2, $at, .L8080C260       
/* 08510 8080C250 3C018000 */  lui     $at, 0x8000                ## $at = 80000000
/* 08514 8080C254 14A10002 */  bne     $a1, $at, .L8080C260       
/* 08518 8080C258 00000000 */  nop
/* 0851C 8080C25C 0006000D */  break 6
.L8080C260:
/* 08520 8080C260 00001012 */  mflo    $v0                        
/* 08524 8080C264 00021400 */  sll     $v0, $v0, 16               
/* 08528 8080C268 0066082A */  slt     $at, $v1, $a2              
/* 0852C 8080C26C 14200004 */  bne     $at, $zero, .L8080C280     
/* 08530 8080C270 00021403 */  sra     $v0, $v0, 16               
/* 08534 8080C274 00625823 */  subu    $t3, $v1, $v0              
/* 08538 8080C278 10000003 */  beq     $zero, $zero, .L8080C288   
/* 0853C 8080C27C A48B4AA8 */  sh      $t3, 0x4AA8($a0)           ## 00004AA8
.L8080C280:
/* 08540 8080C280 00626021 */  addu    $t4, $v1, $v0              
/* 08544 8080C284 A48C4AA8 */  sh      $t4, 0x4AA8($a0)           ## 00004AA8
.L8080C288:
/* 08548 8080C288 8CE20000 */  lw      $v0, 0x0000($a3)           ## 8015FA90
/* 0854C 8080C28C 844D0ADA */  lh      $t5, 0x0ADA($v0)           ## 00000ADA
/* 08550 8080C290 25AEFFFF */  addiu   $t6, $t5, 0xFFFF           ## $t6 = FFFFFFFF
/* 08554 8080C294 A44E0ADA */  sh      $t6, 0x0ADA($v0)           ## 00000ADA
/* 08558 8080C298 8CEF0000 */  lw      $t7, 0x0000($a3)           ## 8015FA90
/* 0855C 8080C29C 85F80ADA */  lh      $t8, 0x0ADA($t7)           ## 00000ADA
/* 08560 8080C2A0 57000010 */  bnel    $t8, $zero, .L8080C2E4     
/* 08564 8080C2A4 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 08568 8080C2A8 84834AAA */  lh      $v1, 0x4AAA($a0)           ## 00004AAA
/* 0856C 8080C2AC 3C010002 */  lui     $at, 0x0002                ## $at = 00020000
/* 08570 8080C2B0 00310821 */  addu    $at, $at, $s1              
/* 08574 8080C2B4 00031840 */  sll     $v1, $v1,  1               
/* 08578 8080C2B8 0103C821 */  addu    $t9, $t0, $v1              
/* 0857C 8080C2BC 87290000 */  lh      $t1, 0x0000($t9)           ## 00000000
/* 08580 8080C2C0 A4894AA8 */  sh      $t1, 0x4AA8($a0)           ## 00004AA8
/* 08584 8080C2C4 8CE20000 */  lw      $v0, 0x0000($a3)           ## 8015FA90
/* 08588 8080C2C8 00435021 */  addu    $t2, $v0, $v1              
/* 0858C 8080C2CC 854B0ADC */  lh      $t3, 0x0ADC($t2)           ## 00000ADC
/* 08590 8080C2D0 A44B0ADA */  sh      $t3, 0x0ADA($v0)           ## 00000ADA
/* 08594 8080C2D4 848C4AAA */  lh      $t4, 0x4AAA($a0)           ## 00004AAA
/* 08598 8080C2D8 398D0001 */  xori    $t5, $t4, 0x0001           ## $t5 = 00000001
/* 0859C 8080C2DC A42DCAAA */  sh      $t5, -0x3556($at)          ## 0001CAAA
/* 085A0 8080C2E0 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L8080C2E4:
/* 085A4 8080C2E4 8FB0001C */  lw      $s0, 0x001C($sp)           
/* 085A8 8080C2E8 8FB10020 */  lw      $s1, 0x0020($sp)           
/* 085AC 8080C2EC 03E00008 */  jr      $ra                        
/* 085B0 8080C2F0 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
