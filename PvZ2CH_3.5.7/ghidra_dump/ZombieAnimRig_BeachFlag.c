// Class: ZombieAnimRig_BeachFlag


/* ZombieAnimRig_BeachFlag::StaticGetClass() */

long * ZombieAnimRig_BeachFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_BeachFlag::GetClass() const */

long * ZombieAnimRig_BeachFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_BeachFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag() */

void __thiscall ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag(ZombieAnimRig_BeachFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_0686cba0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachFlag_0686ceb8;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag() */

void __thiscall ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag(ZombieAnimRig_BeachFlag *this)

{
  ~ZombieAnimRig_BeachFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag() */

void __thiscall ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag(ZombieAnimRig_BeachFlag *this)

{
  ~ZombieAnimRig_BeachFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag() */

void __thiscall ZombieAnimRig_BeachFlag::~ZombieAnimRig_BeachFlag(ZombieAnimRig_BeachFlag *this)

{
  ~ZombieAnimRig_BeachFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_BeachFlag::ZombieAnimRig_BeachFlag() */

void __thiscall ZombieAnimRig_BeachFlag::ZombieAnimRig_BeachFlag(ZombieAnimRig_BeachFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0686cba0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_BeachFlag_0686ceb8;
  return;
}


/* ZombieAnimRig_BeachFlag::StaticNew() */

ZombieAnimRig_BeachFlag * ZombieAnimRig_BeachFlag::StaticNew(void)

{
  ZombieAnimRig_BeachFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_BeachFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachFlag::getHeadLayerNames() */

void ZombieAnimRig_BeachFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16ce8 & 1;
  if (((DAT_06b16ce8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ce8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16d20,"zombie_basic_skull");
    nop();
    std::string::string((string *)&DAT_06b16d28,"zombie_basic_jaw");
    nop();
    std::string::string((string *)&DAT_06b16d30,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b16ce8);
    __cxa_atexit(FUN_045f4a30,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16d38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16d38), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16c90,(string *)&DAT_06b16d20,(allocator *)&DAT_06b16d38);
    __cxa_guard_release(&DAT_06b16d38);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16c90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16c90);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachFlag::getArmLayerNames() */

void ZombieAnimRig_BeachFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16c88 & 1;
  if (((DAT_06b16c88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16c88), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16c70,"zombie_basic_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b16c78,"zombie_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b16c80,"zombie_basic_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b16c88);
    __cxa_atexit(FUN_045f4a64,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16c60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16c60), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16d00,(string *)&DAT_06b16c70,(allocator *)&DAT_06b16c88);
    __cxa_guard_release(&DAT_06b16c60);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16d00,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16d00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_BeachFlag::getArmReplacementPairNames() */

void ZombieAnimRig_BeachFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16ca8 & 1;
  if (((DAT_06b16ca8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16ca8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16cb0,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b16cb8,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b16ca8);
    __cxa_atexit(FUN_045f4a98,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16c68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16c68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16cd0,(string *)&DAT_06b16cb0,(allocator *)&DAT_06b16cc0);
    __cxa_guard_release(&DAT_06b16c68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16cd0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16cd0);
}

