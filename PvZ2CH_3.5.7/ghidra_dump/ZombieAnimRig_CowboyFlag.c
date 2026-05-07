// Class: ZombieAnimRig_CowboyFlag


/* ZombieAnimRig_CowboyFlag::StaticGetClass() */

long * ZombieAnimRig_CowboyFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CowboyFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CowboyFlag::GetClass() const */

long * ZombieAnimRig_CowboyFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CowboyFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag() */

void __thiscall ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag(ZombieAnimRig_CowboyFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_0686ebe0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CowboyFlag_0686eef8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag() */

void __thiscall ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag(ZombieAnimRig_CowboyFlag *this)

{
  ~ZombieAnimRig_CowboyFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag() */

void __thiscall ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag(ZombieAnimRig_CowboyFlag *this)

{
  ~ZombieAnimRig_CowboyFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag() */

void __thiscall ZombieAnimRig_CowboyFlag::~ZombieAnimRig_CowboyFlag(ZombieAnimRig_CowboyFlag *this)

{
  ~ZombieAnimRig_CowboyFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_CowboyFlag::ZombieAnimRig_CowboyFlag() */

void __thiscall ZombieAnimRig_CowboyFlag::ZombieAnimRig_CowboyFlag(ZombieAnimRig_CowboyFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0686ebe0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CowboyFlag_0686eef8;
  return;
}


/* ZombieAnimRig_CowboyFlag::StaticNew() */

ZombieAnimRig_CowboyFlag * ZombieAnimRig_CowboyFlag::StaticNew(void)

{
  ZombieAnimRig_CowboyFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_CowboyFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyFlag::getHeadLayerNames() */

void ZombieAnimRig_CowboyFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b173f0 & 1;
  if (((DAT_06b173f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b173f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17480,"zombie_west_skull");
    nop();
    std::string::string((string *)&DAT_06b17488,"zombie_west_jaw");
    nop();
    __cxa_guard_release(&DAT_06b173f0);
    __cxa_atexit(FUN_045fbcc8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17420 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17420), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b174a8,(string *)&DAT_06b17480,(allocator *)&DAT_06b17490);
    __cxa_guard_release(&DAT_06b17420);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b174a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b174a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyFlag::getArmLayerNames() */

void ZombieAnimRig_CowboyFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b173b8 & 1;
  if (((DAT_06b173b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b173b8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17430,"zombie_west_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17438,"zombie_west_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b17440,"zombie_west_hand_outer_upper");
    nop();
    __cxa_guard_release(&DAT_06b173b8);
    __cxa_atexit(FUN_045fbcf4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17470 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17470), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17448,(string *)&DAT_06b17430,(allocator *)&DAT_06b17448);
    __cxa_guard_release(&DAT_06b17470);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17448,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17448);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyFlag::getArmReplacementPairNames() */

void ZombieAnimRig_CowboyFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b174e0 & 1;
  if (((DAT_06b174e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b174e0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17498,"zombie_west_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b174a0,"zombie_west_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b174e0);
    __cxa_atexit(FUN_045fbd28,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17500 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17500), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b174e8,(string *)&DAT_06b17498,(allocator *)&DAT_06b174a8);
    __cxa_guard_release(&DAT_06b17500);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b174e8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b174e8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_CowboyFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b173f8 & 1;
  if (((DAT_06b173f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b173f8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b173f8);
    __cxa_atexit(FUN_045fbcb8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17478 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17478), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b173a0,(string *)&sClass,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b17478);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b173a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b173a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyFlag::getFlagHandLayerNames() */

void ZombieAnimRig_CowboyFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17408 & 1;
  if (((DAT_06b17408 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17408), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17408);
    __cxa_atexit(FUN_045fbcbc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b174c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b174c0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b173c0,(string *)&DAT_06b173f8,(allocator *)&DAT_06b173f8);
    __cxa_guard_release(&DAT_06b174c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b173c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b173c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyFlag::getConeLayerNames() */

void ZombieAnimRig_CowboyFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17398 & 1;
  if (((DAT_06b17398 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17398), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17398);
    __cxa_atexit(FUN_045fbcc0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17490 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17490), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b174c8,(string *)&DAT_06b17400,(allocator *)&DAT_06b17400);
    __cxa_guard_release(&DAT_06b17490);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b174c8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b174c8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CowboyFlag::getBucketLayerNames() */

void ZombieAnimRig_CowboyFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17508 & 1;
  if (((DAT_06b17508 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17508), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17508);
    __cxa_atexit(FUN_045fbcc4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17400 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17400), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b173d8,(string *)&DAT_06b173f8,(allocator *)&DAT_06b173f8);
    __cxa_guard_release(&DAT_06b17400);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b173d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b173d8);
}

