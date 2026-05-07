// Class: ZombieAnimRig_Hunter


/* ZombieAnimRig_Hunter::StaticGetClass() */

long * ZombieAnimRig_Hunter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Hunter",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Hunter::GetClass() const */

long * ZombieAnimRig_Hunter::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Hunter",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter() */

void __thiscall ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter(ZombieAnimRig_Hunter *this)

{
  *(undefined ***)this = &PTR_GetClass_068d12b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Hunter_068d1528;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter() */

void __thiscall ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter(ZombieAnimRig_Hunter *this)

{
  ~ZombieAnimRig_Hunter(this + -0x10);
  return;
}


/* ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter() */

void __thiscall ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter(ZombieAnimRig_Hunter *this)

{
  ~ZombieAnimRig_Hunter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter() */

void __thiscall ZombieAnimRig_Hunter::~ZombieAnimRig_Hunter(ZombieAnimRig_Hunter *this)

{
  ~ZombieAnimRig_Hunter(this + -0x10);
  return;
}


/* ZombieAnimRig_Hunter::ZombieAnimRig_Hunter() */

void __thiscall ZombieAnimRig_Hunter::ZombieAnimRig_Hunter(ZombieAnimRig_Hunter *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068d12b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Hunter_068d1528;
  return;
}


/* ZombieAnimRig_Hunter::StaticNew() */

ZombieAnimRig_Hunter * ZombieAnimRig_Hunter::StaticNew(void)

{
  ZombieAnimRig_Hunter *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Hunter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hunter::getHeadLayerNames() */

void ZombieAnimRig_Hunter::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23af0 & 1;
  if (((DAT_06b23af0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23af0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23ac8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b23ad0,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b23ad8,"zombie_skull");
    nop();
    __cxa_guard_release(&DAT_06b23af0);
    __cxa_atexit(FUN_047651c4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23a88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23a88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23a90,(string *)&DAT_06b23ac8,(allocator *)&DAT_06b23ae0);
    __cxa_guard_release(&DAT_06b23a88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23a90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23a90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hunter::getArmLayerNames() */

void ZombieAnimRig_Hunter::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b23ab8 & 1;
  if (((DAT_06b23ab8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23ab8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23a50,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b23a58,"zombie_hand_outer_01");
    nop();
    __cxa_guard_release(&DAT_06b23ab8);
    __cxa_atexit(FUN_047651f8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23b00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23b00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b23a18,(string *)&DAT_06b23a50,(allocator *)&DAT_06b23a60);
    __cxa_guard_release(&DAT_06b23b00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b23a18,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b23a18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Hunter::getArmReplacementPairNames() */

void ZombieAnimRig_Hunter::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b239f0 & 1;
  if (((DAT_06b239f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b239f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b23a60,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b23a68,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b239f0);
    __cxa_atexit(FUN_04765224,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b23ac0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b23ac0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b239d8,(string *)&DAT_06b23a60,(allocator *)&DAT_06b23a70);
    __cxa_guard_release(&DAT_06b23ac0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b239d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b239d8);
}

