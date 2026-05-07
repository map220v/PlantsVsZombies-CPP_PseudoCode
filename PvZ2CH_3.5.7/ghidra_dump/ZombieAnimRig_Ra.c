// Class: ZombieAnimRig_Ra


/* ZombieAnimRig_Ra::StaticGetClass() */

long * ZombieAnimRig_Ra::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Ra",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Ra::GetClass() const */

long * ZombieAnimRig_Ra::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Ra",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Ra::~ZombieAnimRig_Ra() */

void __thiscall ZombieAnimRig_Ra::~ZombieAnimRig_Ra(ZombieAnimRig_Ra *this)

{
  *(undefined ***)this = &PTR_GetClass_06873280;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Ra_06873508;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Ra::~ZombieAnimRig_Ra() */

void __thiscall ZombieAnimRig_Ra::~ZombieAnimRig_Ra(ZombieAnimRig_Ra *this)

{
  ~ZombieAnimRig_Ra(this + -0x10);
  return;
}


/* ZombieAnimRig_Ra::~ZombieAnimRig_Ra() */

void __thiscall ZombieAnimRig_Ra::~ZombieAnimRig_Ra(ZombieAnimRig_Ra *this)

{
  ~ZombieAnimRig_Ra(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Ra::~ZombieAnimRig_Ra() */

void __thiscall ZombieAnimRig_Ra::~ZombieAnimRig_Ra(ZombieAnimRig_Ra *this)

{
  ~ZombieAnimRig_Ra(this + -0x10);
  return;
}


/* ZombieAnimRig_Ra::ZombieAnimRig_Ra() */

void __thiscall ZombieAnimRig_Ra::ZombieAnimRig_Ra(ZombieAnimRig_Ra *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06873280;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Ra_06873508;
  return;
}


/* ZombieAnimRig_Ra::StaticNew() */

ZombieAnimRig_Ra * ZombieAnimRig_Ra::StaticNew(void)

{
  ZombieAnimRig_Ra *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Ra(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ra::getHeadLayerNames() */

void ZombieAnimRig_Ra::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18e08 & 1;
  if (((DAT_06b18e08 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18e08), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18d68,"zombie_egypt_ra_skull");
    nop();
    std::string::string((string *)&DAT_06b18d70,"zombie_egypt_ra_skull_power");
    nop();
    std::string::string((string *)&DAT_06b18d78,"zombie_egypt_ra_jaw");
    nop();
    __cxa_guard_release(&DAT_06b18e08);
    __cxa_atexit(FUN_0460c0ec,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18de8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18de8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18d38,(string *)&DAT_06b18d68,(allocator *)&DAT_06b18d80);
    __cxa_guard_release(&DAT_06b18de8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18d38,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18d38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ra::getArmLayerNames() */

void ZombieAnimRig_Ra::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18df0 & 1;
  if (((DAT_06b18df0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18df0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18d50,"zombie_egypt_ra_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b18d58,"zombie_egypt_ra_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06b18df0);
    __cxa_atexit(FUN_0460c120,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18d80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18d80), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18d88,(string *)&DAT_06b18d50,(allocator *)&DAT_06b18d60);
    __cxa_guard_release(&DAT_06b18d80);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18d88,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18d88);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Ra::getArmReplacementPairNames() */

void ZombieAnimRig_Ra::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18db8 & 1;
  if (((DAT_06b18db8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18db8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18df8,"zombie_egypt_ra_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b18e00,"zombie_egypt_ra_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b18db8);
    __cxa_atexit(FUN_0460c14c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18d60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18d60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18dc0,(string *)&DAT_06b18df8,(allocator *)&DAT_06b18e08);
    __cxa_guard_release(&DAT_06b18d60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18dc0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18dc0);
}

