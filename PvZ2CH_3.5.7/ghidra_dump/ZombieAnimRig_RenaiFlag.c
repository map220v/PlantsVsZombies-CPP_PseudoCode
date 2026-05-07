// Class: ZombieAnimRig_RenaiFlag


/* ZombieAnimRig_RenaiFlag::StaticGetClass() */

long * ZombieAnimRig_RenaiFlag::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RenaiFlag::GetClass() const */

long * ZombieAnimRig_RenaiFlag::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_Basic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_RenaiFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag() */

void __thiscall ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag(ZombieAnimRig_RenaiFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_069fe600;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiFlag_069fe918;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag() */

void __thiscall ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag(ZombieAnimRig_RenaiFlag *this)

{
  ~ZombieAnimRig_RenaiFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag() */

void __thiscall ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag(ZombieAnimRig_RenaiFlag *this)

{
  ~ZombieAnimRig_RenaiFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag() */

void __thiscall ZombieAnimRig_RenaiFlag::~ZombieAnimRig_RenaiFlag(ZombieAnimRig_RenaiFlag *this)

{
  ~ZombieAnimRig_RenaiFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_RenaiFlag::ZombieAnimRig_RenaiFlag() */

void __thiscall ZombieAnimRig_RenaiFlag::ZombieAnimRig_RenaiFlag(ZombieAnimRig_RenaiFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_069fe600;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RenaiFlag_069fe918;
  return;
}


/* ZombieAnimRig_RenaiFlag::StaticNew() */

ZombieAnimRig_RenaiFlag * ZombieAnimRig_RenaiFlag::StaticNew(void)

{
  ZombieAnimRig_RenaiFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_RenaiFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiFlag::getHeadLayerNames() */

void ZombieAnimRig_RenaiFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3300 & 1;
  if (((DAT_06ba3300 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3300), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3388,"zombie_steamflag_skull");
    nop();
    std::string::string((string *)&DAT_06ba3390,"zombie_steamflag_jaw");
    nop();
    __cxa_guard_release(&DAT_06ba3300);
    __cxa_atexit(FUN_04ee2768,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3398 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3398), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba33a0,(string *)&DAT_06ba3388,(allocator *)&DAT_06ba3398);
    __cxa_guard_release(&DAT_06ba3398);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba33a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba33a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiFlag::getArmLayerNames() */

void ZombieAnimRig_RenaiFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3378 & 1;
  if (((DAT_06ba3378 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3378), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3368,"zombie_steamflag_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06ba3370,"zombie_steamflag_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06ba3378);
    __cxa_atexit(FUN_04ee2794,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba32f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba32f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba32b0,(string *)&DAT_06ba3368,(allocator *)&DAT_06ba3378);
    __cxa_guard_release(&DAT_06ba32f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba32b0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba32b0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiFlag::getArmReplacementPairNames() */

void ZombieAnimRig_RenaiFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3380 & 1;
  if (((DAT_06ba3380 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3380), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ba3310,"zombie_steamflag_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06ba3318,"zombie_steamflag_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06ba3380);
    __cxa_atexit(FUN_04ee27c0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba32f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba32f0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba33b8,(string *)&DAT_06ba3310,(allocator *)&DAT_06ba3320);
    __cxa_guard_release(&DAT_06ba32f0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba33b8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba33b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_RenaiFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3328 & 1;
  if (((DAT_06ba3328 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3328), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3328);
    __cxa_atexit(FUN_04ee2758,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba32d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba32d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba32d8,(string *)&DAT_06ba33a0,(allocator *)&DAT_06ba33a0);
    __cxa_guard_release(&DAT_06ba32d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba32d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba32d8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiFlag::getFlagHandLayerNames() */

void ZombieAnimRig_RenaiFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3308 & 1;
  if (((DAT_06ba3308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3308), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3308);
    __cxa_atexit(FUN_04ee275c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba32a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba32a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3348,(string *)&DAT_06ba3348,(allocator *)&DAT_06ba3348);
    __cxa_guard_release(&DAT_06ba32a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3348,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3348);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiFlag::getConeLayerNames() */

void ZombieAnimRig_RenaiFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba32c8 & 1;
  if (((DAT_06ba32c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba32c8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba32c8);
    __cxa_atexit(FUN_04ee2760,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba33d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba33d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba3290,(string *)&DAT_06ba3320,(allocator *)&DAT_06ba3320);
    __cxa_guard_release(&DAT_06ba33d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba3290,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba3290);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RenaiFlag::getBucketLayerNames() */

void ZombieAnimRig_RenaiFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ba3320 & 1;
  if (((DAT_06ba3320 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3320), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06ba3320);
    __cxa_atexit(FUN_04ee2764,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ba3360 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ba3360), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ba33e8,(string *)&DAT_06ba32c8,(allocator *)&DAT_06ba32c8);
    __cxa_guard_release(&DAT_06ba3360);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ba33e8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ba33e8);
}

