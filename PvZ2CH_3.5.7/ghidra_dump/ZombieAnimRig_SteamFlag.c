// Class: ZombieAnimRig_SteamFlag


/* ZombieAnimRig_SteamFlag::StaticGetClass() */

long * ZombieAnimRig_SteamFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SteamFlag::GetClass() const */

long * ZombieAnimRig_SteamFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag() */

void __thiscall ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag(ZombieAnimRig_SteamFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_068fe5b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamFlag_068fe8c8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag() */

void __thiscall ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag(ZombieAnimRig_SteamFlag *this)

{
  ~ZombieAnimRig_SteamFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag() */

void __thiscall ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag(ZombieAnimRig_SteamFlag *this)

{
  ~ZombieAnimRig_SteamFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag() */

void __thiscall ZombieAnimRig_SteamFlag::~ZombieAnimRig_SteamFlag(ZombieAnimRig_SteamFlag *this)

{
  ~ZombieAnimRig_SteamFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamFlag::ZombieAnimRig_SteamFlag() */

void __thiscall ZombieAnimRig_SteamFlag::ZombieAnimRig_SteamFlag(ZombieAnimRig_SteamFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068fe5b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamFlag_068fe8c8;
  return;
}


/* ZombieAnimRig_SteamFlag::StaticNew() */

ZombieAnimRig_SteamFlag * ZombieAnimRig_SteamFlag::StaticNew(void)

{
  ZombieAnimRig_SteamFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_SteamFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamFlag::getHeadLayerNames() */

void ZombieAnimRig_SteamFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29638 & 1;
  if (((DAT_06b29638 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29638), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29588,"zombie_steamflag_skull");
    nop();
    std::string::string((string *)&DAT_06b29590,"zombie_steamflag_jaw");
    nop();
    __cxa_guard_release(&DAT_06b29638);
    __cxa_atexit(FUN_04809360,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29518 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29518), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29560,(string *)&DAT_06b29588,(allocator *)&DAT_06b29598);
    __cxa_guard_release(&DAT_06b29518);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29560,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29560);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamFlag::getArmLayerNames() */

void ZombieAnimRig_SteamFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b294f8 & 1;
  if (((DAT_06b294f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b294f8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29500,"zombie_steamflag_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b29508,"zombie_steamflag_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b294f8);
    __cxa_atexit(FUN_0480938c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29520 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29520), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b294e0,(string *)&DAT_06b29500,(allocator *)&DAT_06b29510);
    __cxa_guard_release(&DAT_06b29520);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b294e0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b294e0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamFlag::getArmReplacementPairNames() */

void ZombieAnimRig_SteamFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b294d8 & 1;
  if (((DAT_06b294d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b294d8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b29600,"zombie_steamflag_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b29608,"zombie_steamflag_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b294d8);
    __cxa_atexit(FUN_048093b8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29618 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29618), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29540,(string *)&DAT_06b29600,(allocator *)&DAT_06b29610);
    __cxa_guard_release(&DAT_06b29618);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29540,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29540);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamFlag::getNoFlagHandLayerNames() */

void ZombieAnimRig_SteamFlag::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29598 & 1;
  if (((DAT_06b29598 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29598), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b29598);
    __cxa_atexit(FUN_04809350,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b295d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b295d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b295e0,(string *)&DAT_06b29620,(allocator *)&DAT_06b29620);
    __cxa_guard_release(&DAT_06b295d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b295e0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b295e0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamFlag::getFlagHandLayerNames() */

void ZombieAnimRig_SteamFlag::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b294d0 & 1;
  if (((DAT_06b294d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b294d0), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b294d0);
    __cxa_atexit(FUN_04809354,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b29558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29558), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29528,(string *)&DAT_06b294d8,(allocator *)&DAT_06b294d8);
    __cxa_guard_release(&DAT_06b29558);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29528,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29528);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamFlag::getConeLayerNames() */

void ZombieAnimRig_SteamFlag::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29610 & 1;
  if (((DAT_06b29610 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29610), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b29610);
    __cxa_atexit(FUN_04809358,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b295c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b295c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b29620,(string *)&DAT_06b29620,(allocator *)&DAT_06b29620);
    __cxa_guard_release(&DAT_06b295c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29620,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b29620);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamFlag::getBucketLayerNames() */

void ZombieAnimRig_SteamFlag::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b29510 & 1;
  if (((DAT_06b29510 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b29510), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06b29510);
    __cxa_atexit(FUN_0480935c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b295f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b295f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b295a0,(string *)&DAT_06b295a0,(allocator *)&DAT_06b295a0);
    __cxa_guard_release(&DAT_06b295f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b295a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b295a0);
}

