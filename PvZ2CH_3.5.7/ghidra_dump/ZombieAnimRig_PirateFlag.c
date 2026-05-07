// Class: ZombieAnimRig_PirateFlag


/* ZombieAnimRig_PirateFlag::StaticGetClass() */

long * ZombieAnimRig_PirateFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PirateFlag::GetClass() const */

long * ZombieAnimRig_PirateFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_PirateFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag() */

void __thiscall ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag(ZombieAnimRig_PirateFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_068729a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateFlag_06872cb8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag() */

void __thiscall ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag(ZombieAnimRig_PirateFlag *this)

{
  ~ZombieAnimRig_PirateFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag() */

void __thiscall ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag(ZombieAnimRig_PirateFlag *this)

{
  ~ZombieAnimRig_PirateFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag() */

void __thiscall ZombieAnimRig_PirateFlag::~ZombieAnimRig_PirateFlag(ZombieAnimRig_PirateFlag *this)

{
  ~ZombieAnimRig_PirateFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_PirateFlag::ZombieAnimRig_PirateFlag() */

void __thiscall ZombieAnimRig_PirateFlag::ZombieAnimRig_PirateFlag(ZombieAnimRig_PirateFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068729a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PirateFlag_06872cb8;
  return;
}


/* ZombieAnimRig_PirateFlag::StaticNew() */

ZombieAnimRig_PirateFlag * ZombieAnimRig_PirateFlag::StaticNew(void)

{
  ZombieAnimRig_PirateFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_PirateFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateFlag::getHeadLayerNames() */

void ZombieAnimRig_PirateFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18900 & 1;
  if (((DAT_06b18900 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18900), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18a28,"zombie_pirate_basic_skull");
    nop();
    std::string::string((string *)&DAT_06b18a30,"zombie_pirate_basic_jaw");
    nop();
    __cxa_guard_release(&DAT_06b18900);
    __cxa_atexit(FUN_046096dc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18930 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18930), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b189c8,(string *)&DAT_06b18a28,(allocator *)&DAT_06b18a38);
    __cxa_guard_release(&DAT_06b18930);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b189c8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b189c8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateFlag::getArmLayerNames() */

void ZombieAnimRig_PirateFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18928 & 1;
  if (((DAT_06b18928 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18928), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b189e8,"zombie_pirate_basic_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b189f0,"zombie_pirate_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b189f8,"zombie_pirate_basic_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b18a00,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b18928);
    __cxa_atexit(FUN_04609708,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18948 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18948), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18950,(string *)&DAT_06b189e8,(allocator *)&DAT_06b18a08);
    __cxa_guard_release(&DAT_06b18948);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18950,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18950);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateFlag::getArmReplacementPairNames() */

void ZombieAnimRig_PirateFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b188f0 & 1;
  if (((DAT_06b188f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b188f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b189b8,"zombie_pirate_basic_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b189c0,"zombie_pirate_basic_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b188f0);
    __cxa_atexit(FUN_04609744,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b189a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b189a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18968,(string *)&DAT_06b189b8,(allocator *)&DAT_06b189c8);
    __cxa_guard_release(&DAT_06b189a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18968,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18968);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_PirateFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18980 & 1;
  if (((DAT_06b18980 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18980), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b18980);
    __cxa_atexit(FUN_046096cc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18a20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18a20), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18910,(string *)&DAT_06b18a08,(allocator *)&DAT_06b18a08);
    __cxa_guard_release(&DAT_06b18a20);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18910,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18910);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateFlag::getFlagHandLayerNames() */

void ZombieAnimRig_PirateFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18998 & 1;
  if (((DAT_06b18998 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18998), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b18998);
    __cxa_atexit(FUN_046096d0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b189b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b189b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18a38,(string *)&DAT_06b18950,(allocator *)&DAT_06b18950);
    __cxa_guard_release(&DAT_06b189b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18a38,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18a38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateFlag::getConeLayerNames() */

void ZombieAnimRig_PirateFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b188e8 & 1;
  if (((DAT_06b188e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b188e8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b188e8);
    __cxa_atexit(FUN_046096d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18908 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18908), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18a50,(string *)&DAT_06b189b0,(allocator *)&DAT_06b189b0);
    __cxa_guard_release(&DAT_06b18908);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18a50,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18a50);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PirateFlag::getBucketLayerNames() */

void ZombieAnimRig_PirateFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b189e0 & 1;
  if (((DAT_06b189e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b189e0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b189e0);
    __cxa_atexit(FUN_046096d8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b188f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b188f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18a08,(string *)&DAT_06b18910,(allocator *)&DAT_06b18910);
    __cxa_guard_release(&DAT_06b188f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18a08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18a08);
}

