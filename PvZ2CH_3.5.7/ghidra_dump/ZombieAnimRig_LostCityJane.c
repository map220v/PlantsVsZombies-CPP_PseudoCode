// Class: ZombieAnimRig_LostCityJane


/* ZombieAnimRig_LostCityJane::StaticGetClass() */

long * ZombieAnimRig_LostCityJane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityJane",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_LostCityJane::GetClass() const */

long * ZombieAnimRig_LostCityJane::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityJane",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane() */

void __thiscall
ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane(ZombieAnimRig_LostCityJane *this)

{
  *(undefined ***)this = &PTR_GetClass_068e7d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityJane_068e8008;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane() */

void __thiscall
ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane(ZombieAnimRig_LostCityJane *this)

{
  ~ZombieAnimRig_LostCityJane(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane() */

void __thiscall
ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane(ZombieAnimRig_LostCityJane *this)

{
  ~ZombieAnimRig_LostCityJane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane() */

void __thiscall
ZombieAnimRig_LostCityJane::~ZombieAnimRig_LostCityJane(ZombieAnimRig_LostCityJane *this)

{
  ~ZombieAnimRig_LostCityJane(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityJane::ZombieAnimRig_LostCityJane() */

void __thiscall
ZombieAnimRig_LostCityJane::ZombieAnimRig_LostCityJane(ZombieAnimRig_LostCityJane *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068e7d90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityJane_068e8008;
  return;
}


/* ZombieAnimRig_LostCityJane::StaticNew() */

ZombieAnimRig_LostCityJane * ZombieAnimRig_LostCityJane::StaticNew(void)

{
  ZombieAnimRig_LostCityJane *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_LostCityJane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityJane::getHeadLayerNames() */

void ZombieAnimRig_LostCityJane::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26f58 & 1;
  if (((DAT_06b26f58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26f58), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26fc0,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b26fc8,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b26f58);
    __cxa_atexit(FUN_047d4a70,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26f90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26f90), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26f28,(string *)&DAT_06b26fc0,(allocator *)&DAT_06b26fd0);
    __cxa_guard_release(&DAT_06b26f90);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26f28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26f28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityJane::getArmLayerNames() */

void ZombieAnimRig_LostCityJane::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26fe8 & 1;
  if (((DAT_06b26fe8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26fe8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26f98,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b26fa0,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b26fa8,"zombie_hand_outer_04");
    nop();
    std::string::string((string *)&DAT_06b26fb0,"zombie_hand_outer_05");
    nop();
    __cxa_guard_release(&DAT_06b26fe8);
    __cxa_atexit(FUN_047d4a9c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26fb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26fb8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26ff8,(string *)&DAT_06b26f98,(allocator *)&DAT_06b26fb8);
    __cxa_guard_release(&DAT_06b26fb8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26ff8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26ff8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityJane::getArmReplacementPairNames() */

void ZombieAnimRig_LostCityJane::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26fe0 & 1;
  if (((DAT_06b26fe0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26fe0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26f60,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b26f68,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b26fe0);
    __cxa_atexit(FUN_047d4ad8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b26f78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26f78), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26f40,(string *)&DAT_06b26f60,
               (allocator *)&ZombieLostCityJane::sClass);
    __cxa_guard_release(&DAT_06b26f78);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26f40,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26f40);
}

