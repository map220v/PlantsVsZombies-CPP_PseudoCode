// Class: ZombieAnimRig_RomanBasic


/* ZombieAnimRig_RomanBasic::ZombieAnimRig_RomanBasic() */

void __thiscall ZombieAnimRig_RomanBasic::ZombieAnimRig_RomanBasic(ZombieAnimRig_RomanBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_0686c220;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanBasic_0686c538;
  return;
}


/* ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic() */

void __thiscall ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic(ZombieAnimRig_RomanBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_0686c220;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_RomanBasic_0686c538;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic() */

void __thiscall ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic(ZombieAnimRig_RomanBasic *this)

{
  ~ZombieAnimRig_RomanBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic() */

void __thiscall ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic(ZombieAnimRig_RomanBasic *this)

{
  ~ZombieAnimRig_RomanBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic() */

void __thiscall ZombieAnimRig_RomanBasic::~ZombieAnimRig_RomanBasic(ZombieAnimRig_RomanBasic *this)

{
  ~ZombieAnimRig_RomanBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_RomanBasic::StaticNew() */

ZombieAnimRig_RomanBasic * ZombieAnimRig_RomanBasic::StaticNew(void)

{
  ZombieAnimRig_RomanBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_RomanBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::StaticClassInit() */

void ZombieAnimRig_RomanBasic::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ZombieAnimRig_RomanBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_045f25f0,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_RomanBasic::StaticGetClass() */

long * ZombieAnimRig_RomanBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_RomanBasic::GetClass() const */

long * ZombieAnimRig_RomanBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_RomanBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getHeadLayerNames() */

void ZombieAnimRig_RomanBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16858 & 1;
  if (((DAT_06b16858 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16858), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16a30,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b16a38,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b16a40,"zombie_pupil");
    nop();
    __cxa_guard_release(&DAT_06b16858);
    __cxa_atexit(FUN_045f22a0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b167a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b167a8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16840,(string *)&DAT_06b16a30,(allocator *)&DAT_06b16a48);
    __cxa_guard_release(&DAT_06b167a8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16840,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16840);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getArmLayerNames() */

void ZombieAnimRig_RomanBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16838 & 1;
  if (((DAT_06b16838 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16838), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b169d0,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b169d8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b169e0,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b169e8,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b16838);
    __cxa_atexit(FUN_045f22d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16860 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16860), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16790,(string *)&DAT_06b169d0,(allocator *)&DAT_06b169f0);
    __cxa_guard_release(&DAT_06b16860);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16790,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16790);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getArmReplacementPairNames() */

void ZombieAnimRig_RomanBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b169f0 & 1;
  if (((DAT_06b169f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b169f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b167d8,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b167e0,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b169f0);
    __cxa_atexit(FUN_045f2310,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b168d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b168d8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b168c0,(string *)&DAT_06b167d8,(allocator *)&DAT_06b167e8);
    __cxa_guard_release(&DAT_06b168d8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b168c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b168c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getFlagHandLayerNames() */

void ZombieAnimRig_RomanBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16900 & 1;
  if (((DAT_06b16900 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16900), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16868,"flag_01");
    nop();
    std::string::string((string *)&DAT_06b16870,"flag_stick");
    nop();
    std::string::string((string *)&DAT_06b16878,"zombie_hand_inner_01_flag");
    nop();
    std::string::string((string *)&DAT_06b16880,"zombie_hand_inner_02_flag");
    nop();
    std::string::string((string *)&DAT_06b16888,"zombie_hand_inner_03_flag");
    nop();
    std::string::string((string *)&DAT_06b16890,"zombie_hand_inner3b_flag");
    nop();
    std::string::string((string *)&DAT_06b16898,"zombie_hand_inner4b_flag");
    nop();
    std::string::string((string *)&DAT_06b168a0,"zombie_hand_inner_05_flag");
    nop();
    std::string::string((string *)&DAT_06b168a8,"zombie_arm_inner_upper_flag");
    nop();
    std::string::string((string *)&DAT_06b168b0,"zombie_arm_inner_lower_flag");
    nop();
    std::string::string((string *)&DAT_06b168b8,"flag_buckle");
    nop();
    __cxa_guard_release(&DAT_06b16900);
    __cxa_atexit(FUN_045f233c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b168e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b168e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16920,(string *)&DAT_06b16868,(allocator *)&DAT_06b168c0);
    __cxa_guard_release(&DAT_06b168e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16920,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16920);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_RomanBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16968 & 1;
  if (((DAT_06b16968 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16968), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16978,"zombie_arm_inner_lower");
    nop();
    std::string::string((string *)&DAT_06b16980,"zombie_arm_inner_upper");
    nop();
    std::string::string((string *)&DAT_06b16988,"zombie_hand_inner");
    nop();
    std::string::string((string *)&DAT_06b16990,"zombie_hand_inner_01");
    nop();
    std::string::string((string *)&DAT_06b16998,"zombie_hand_inner_02");
    nop();
    __cxa_guard_release(&DAT_06b16968);
    __cxa_atexit(FUN_045f2374,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b169c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b169c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b169a8,(string *)&DAT_06b16978,(allocator *)&DAT_06b169a0);
    __cxa_guard_release(&DAT_06b169c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b169a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b169a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getConeLayerNames() */

void ZombieAnimRig_RomanBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16820 & 1;
  if (((DAT_06b16820 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16820), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b169f8,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b16a00,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b16a08,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b16820);
    __cxa_atexit(FUN_045f23ac,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b167b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b167b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16908,(string *)&DAT_06b169f8,(allocator *)&DAT_06b16a10);
    __cxa_guard_release(&DAT_06b167b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16908,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16908);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getBucketLayerNames() */

void ZombieAnimRig_RomanBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b16970 & 1;
  if (((DAT_06b16970 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16970), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16a18,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b16a20,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b16a28,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b16970);
    __cxa_atexit(FUN_045f23e0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b16a10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b16a10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b16a48,(string *)&DAT_06b16a18,(allocator *)&DAT_06b16a30);
    __cxa_guard_release(&DAT_06b16a10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b16a48,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b16a48);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getBrickLayerNames() */

void ZombieAnimRig_RomanBasic::getBrickLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b167e8 & 1;
  if (((DAT_06b167e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b167e8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16938,"zombie_armor_brick_norm");
    nop();
    std::string::string((string *)&DAT_06b16940,"zombie_armor_brick_damage_01");
    nop();
    std::string::string((string *)&DAT_06b16948,"zombie_armor_brick_damage_02");
    nop();
    std::string::string((string *)&DAT_06b16950,"zombie_armor_brick_damage_03");
    nop();
    std::string::string((string *)&DAT_06b16958,"zombie_armor_brick_damage_04");
    nop();
    std::string::string((string *)&DAT_06b16960,"zombie_armor_brick_damage_05");
    nop();
    __cxa_guard_release(&DAT_06b167e8);
    __cxa_atexit(FUN_045f2414,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b169c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b169c0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b167c0,(string *)&DAT_06b16938,(allocator *)&DAT_06b16968);
    __cxa_guard_release(&DAT_06b169c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b167c0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b167c0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_RomanBasic::getCrownLayerNames() */

void ZombieAnimRig_RomanBasic::getCrownLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b167b0 & 1;
  if (((DAT_06b167b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b167b0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b16808,"zombie_roman_helmet_norm");
    nop();
    std::string::string((string *)&DAT_06b16810,"zombie_roman_helmet_damage_01");
    nop();
    std::string::string((string *)&DAT_06b16818,"zombie_roman_helmet_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b167b0);
    __cxa_atexit(FUN_045f244c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b169a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b169a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b167f0,(string *)&DAT_06b16808,(allocator *)&DAT_06b16820);
    __cxa_guard_release(&DAT_06b169a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b167f0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b167f0);
}

