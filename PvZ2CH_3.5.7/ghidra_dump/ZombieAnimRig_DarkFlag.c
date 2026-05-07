// Class: ZombieAnimRig_DarkFlag


/* ZombieAnimRig_DarkFlag::getBucketLayerNames() */

void __thiscall ZombieAnimRig_DarkFlag::getBucketLayerNames(ZombieAnimRig_DarkFlag *this)

{
  (**(code **)(*(long *)this + 0x2b8))();
  return;
}


/* ZombieAnimRig_DarkFlag::StaticGetClass() */

long * ZombieAnimRig_DarkFlag::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkFlag::GetClass() const */

long * ZombieAnimRig_DarkFlag::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkFlag",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag() */

void __thiscall ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag(ZombieAnimRig_DarkFlag *this)

{
  *(undefined ***)this = &PTR_GetClass_0687b370;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkFlag_0687b688;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag() */

void __thiscall ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag(ZombieAnimRig_DarkFlag *this)

{
  ~ZombieAnimRig_DarkFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag() */

void __thiscall ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag(ZombieAnimRig_DarkFlag *this)

{
  ~ZombieAnimRig_DarkFlag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag() */

void __thiscall ZombieAnimRig_DarkFlag::~ZombieAnimRig_DarkFlag(ZombieAnimRig_DarkFlag *this)

{
  ~ZombieAnimRig_DarkFlag(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkFlag::ZombieAnimRig_DarkFlag() */

void __thiscall ZombieAnimRig_DarkFlag::ZombieAnimRig_DarkFlag(ZombieAnimRig_DarkFlag *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0687b370;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkFlag_0687b688;
  return;
}


/* ZombieAnimRig_DarkFlag::StaticNew() */

ZombieAnimRig_DarkFlag * ZombieAnimRig_DarkFlag::StaticNew(void)

{
  ZombieAnimRig_DarkFlag *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_DarkFlag(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkFlag::getHeadLayerNames() */

void ZombieAnimRig_DarkFlag::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1af60 & 1;
  if (((DAT_06b1af60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1af60), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1afe0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b1afe8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b1aff0,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b1af60);
    __cxa_atexit(FUN_04622acc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1afb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1afb8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b010,(string *)&DAT_06b1afe0,(allocator *)&DAT_06b1aff8);
    __cxa_guard_release(&DAT_06b1afb8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b010,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1b010);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkFlag::getArmLayerNames() */

void ZombieAnimRig_DarkFlag::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1afa0 & 1;
  if (((DAT_06b1afa0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1afa0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1af80,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1af88,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1af90,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1af98,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1afa0);
    __cxa_atexit(FUN_04622b00,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1af78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1af78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1af48,(string *)&DAT_06b1af80,(allocator *)&DAT_06b1afa0);
    __cxa_guard_release(&DAT_06b1af78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1af48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1af48);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkFlag::getArmReplacementPairNames() */

void ZombieAnimRig_DarkFlag::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1b028 & 1;
  if (((DAT_06b1b028 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b028), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1af68,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b1af70,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b1b028);
    __cxa_atexit(FUN_04622b3c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1b008 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b008), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1afc8,(string *)&DAT_06b1af68,(allocator *)&DAT_06b1af78);
    __cxa_guard_release(&DAT_06b1b008);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1afc8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1afc8);
}

