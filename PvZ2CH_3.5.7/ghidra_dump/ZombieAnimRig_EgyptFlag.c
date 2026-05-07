// Class: ZombieAnimRig_EgyptFlag


/* ZombieAnimRig_EgyptFlag::StaticGetClass() */

long * ZombieAnimRig_EgyptFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EgyptFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_EgyptFlag::GetClass() const */

long * ZombieAnimRig_EgyptFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EgyptFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag() */

void __thiscall ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag(ZombieAnimRig_EgyptFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_0686f560;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EgyptFlag_0686f878;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag() */

void __thiscall ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag(ZombieAnimRig_EgyptFlag *this)

{
  ~ZombieAnimRig_EgyptFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag() */

void __thiscall ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag(ZombieAnimRig_EgyptFlag *this)

{
  ~ZombieAnimRig_EgyptFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag() */

void __thiscall ZombieAnimRig_EgyptFlag::~ZombieAnimRig_EgyptFlag(ZombieAnimRig_EgyptFlag *this)

{
  ~ZombieAnimRig_EgyptFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_EgyptFlag::ZombieAnimRig_EgyptFlag() */

void __thiscall ZombieAnimRig_EgyptFlag::ZombieAnimRig_EgyptFlag(ZombieAnimRig_EgyptFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0686f560;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EgyptFlag_0686f878;
  return;
}


/* ZombieAnimRig_EgyptFlag::StaticNew() */

ZombieAnimRig_EgyptFlag * ZombieAnimRig_EgyptFlag::StaticNew(void)

{
  ZombieAnimRig_EgyptFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_EgyptFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptFlag::getHeadLayerNames() */

void ZombieAnimRig_EgyptFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17860 & 1;
  if (((DAT_06b17860 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17860), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17918,"zombie_egyptflag_skull");
    nop();
    std::string::string((string *)&DAT_06b17920,"zombie_egyptflag_jaw");
    nop();
    __cxa_guard_release(&DAT_06b17860);
    __cxa_atexit(FUN_045fe5d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17958), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17928,(string *)&DAT_06b17918,(allocator *)&DAT_06b17928);
    __cxa_guard_release(&DAT_06b17958);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17928,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17928);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptFlag::getArmLayerNames() */

void ZombieAnimRig_EgyptFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17840 & 1;
  if (((DAT_06b17840 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17840), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17848,"zombie_egyptflag_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b17850,"zombie_egyptflag_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b17840);
    __cxa_atexit(FUN_045fe600,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b178e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b178e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17898,(string *)&DAT_06b17848,(allocator *)&DAT_06b17858);
    __cxa_guard_release(&DAT_06b178e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17898,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17898);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptFlag::getArmReplacementPairNames() */

void ZombieAnimRig_EgyptFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17968 & 1;
  if (((DAT_06b17968 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17968), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b17868,"zombie_egyptflag_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b17870,"zombie_egyptflag_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b17968);
    __cxa_atexit(FUN_045fe62c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17838 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17838), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b178c0,(string *)&DAT_06b17868,(allocator *)&DAT_06b17878);
    __cxa_guard_release(&DAT_06b17838);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b178c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b178c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_EgyptFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b178d8 & 1;
  if (((DAT_06b178d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b178d8), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b178d8);
    __cxa_atexit(FUN_045fe5c4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17960 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17960), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17940,(string *)&DAT_06b17808,(allocator *)&DAT_06b17808);
    __cxa_guard_release(&DAT_06b17960);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17940,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17940);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptFlag::getFlagHandLayerNames() */

void ZombieAnimRig_EgyptFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17970 & 1;
  if (((DAT_06b17970 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17970), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17970);
    __cxa_atexit(FUN_045fe5c8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17858), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17900,(string *)&DAT_06b17970,(allocator *)&DAT_06b17970);
    __cxa_guard_release(&DAT_06b17858);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17900,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17900);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptFlag::getConeLayerNames() */

void ZombieAnimRig_EgyptFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17830 & 1;
  if (((DAT_06b17830 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17830), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17830);
    __cxa_atexit(FUN_045fe5cc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17808 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17808), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b17810,(string *)&DAT_06b17878,(allocator *)&DAT_06b17878);
    __cxa_guard_release(&DAT_06b17808);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b17810,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b17810);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EgyptFlag::getBucketLayerNames() */

void ZombieAnimRig_EgyptFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b17890 & 1;
  if (((DAT_06b17890 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17890), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b17890);
    __cxa_atexit(FUN_045fe5d0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b17828 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b17828), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b178e8,(string *)&DAT_06b17868,(allocator *)&DAT_06b17868);
    __cxa_guard_release(&DAT_06b17828);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b178e8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b178e8);
}

