// Class: ZombieAnimRig_EightiesBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::PlayTentAnimation(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_EightiesBasic::PlayTentAnimation
          (ZombieAnimRig_EightiesBasic *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"tent");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic() */

void __thiscall
ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic(ZombieAnimRig_EightiesBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_068ef300;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBasic_068ef618;
  ZombieAnimRig_Basic::~ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic() */

void __thiscall
ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic(ZombieAnimRig_EightiesBasic *this)

{
  ~ZombieAnimRig_EightiesBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic() */

void __thiscall
ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic(ZombieAnimRig_EightiesBasic *this)

{
  ~ZombieAnimRig_EightiesBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic() */

void __thiscall
ZombieAnimRig_EightiesBasic::~ZombieAnimRig_EightiesBasic(ZombieAnimRig_EightiesBasic *this)

{
  ~ZombieAnimRig_EightiesBasic(this + -0x10);
  return;
}


/* ZombieAnimRig_EightiesBasic::ZombieAnimRig_EightiesBasic() */

void __thiscall
ZombieAnimRig_EightiesBasic::ZombieAnimRig_EightiesBasic(ZombieAnimRig_EightiesBasic *this)

{
  ZombieAnimRig_Basic::ZombieAnimRig_Basic((ZombieAnimRig_Basic *)this);
  *(undefined ***)this = &PTR_GetClass_068ef300;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_EightiesBasic_068ef618;
  return;
}


/* ZombieAnimRig_EightiesBasic::StaticNew() */

ZombieAnimRig_EightiesBasic * ZombieAnimRig_EightiesBasic::StaticNew(void)

{
  ZombieAnimRig_EightiesBasic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_EightiesBasic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::StaticClassInit() */

void ZombieAnimRig_EightiesBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_EightiesBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_047df568,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_EightiesBasic::StaticGetClass() */

long * ZombieAnimRig_EightiesBasic::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_EightiesBasic::GetClass() const */

long * ZombieAnimRig_EightiesBasic::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_EightiesBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::getHeadLayerNames() */

void ZombieAnimRig_EightiesBasic::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b279c8 & 1;
  if (((DAT_06b279c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b279c8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b279e8,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06b279f0,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06b279c8);
    __cxa_atexit(FUN_047defc4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b279a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b279a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27980,(string *)&DAT_06b279e8,(allocator *)&DAT_06b279f8);
    __cxa_guard_release(&DAT_06b279a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27980,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27980);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::getArmLayerNames() */

void ZombieAnimRig_EightiesBasic::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27998 & 1;
  if (((DAT_06b27998 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27998), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27868,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b27870,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b27878,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b27880,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b27998);
    __cxa_atexit(FUN_047deff0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b279f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b279f8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27850,(string *)&DAT_06b27868,
               (allocator *)&ZombieEightiesBasic::sClass);
    __cxa_guard_release(&DAT_06b279f8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27850,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27850);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::getArmReplacementPairNames() */

void ZombieAnimRig_EightiesBasic::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b278c0 & 1;
  if (((DAT_06b278c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b278c0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27890,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b27898,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b278c0);
    __cxa_atexit(FUN_047df02c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27808 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27808), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27938,(string *)&DAT_06b27890,(allocator *)&DAT_06b278a0);
    __cxa_guard_release(&DAT_06b27808);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27938,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27938);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::getFlagHandLayerNames() */

void ZombieAnimRig_EightiesBasic::getFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27958 & 1;
  if (((DAT_06b27958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27958), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b278d8,"flag_01");
    nop();
    std::string::string((string *)&DAT_06b278e0,"flag_stick");
    nop();
    std::string::string((string *)&DAT_06b278e8,"zombie_hand_inner_01_flag");
    nop();
    std::string::string((string *)&DAT_06b278f0,"zombie_hand_inner_02_flag");
    nop();
    std::string::string((string *)&DAT_06b278f8,"zombie_hand_inner_03_flag");
    nop();
    std::string::string((string *)&DAT_06b27900,"zombie_hand_inner3b_flag");
    nop();
    std::string::string((string *)&DAT_06b27908,"zombie_hand_inner4b_flag");
    nop();
    std::string::string((string *)&DAT_06b27910,"zombie_hand_inner_05_flag");
    nop();
    std::string::string((string *)&DAT_06b27918,"zombie_arm_inner_upper_flag");
    nop();
    std::string::string((string *)&DAT_06b27920,"zombie_arm_inner_lower_flag");
    nop();
    __cxa_guard_release(&DAT_06b27958);
    __cxa_atexit(FUN_047df058,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b278b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b278b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b278a0,(string *)&DAT_06b278d8,(allocator *)&DAT_06b27928);
    __cxa_guard_release(&DAT_06b278b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b278a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b278a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::getNoFlagHandLayerNames() */

void ZombieAnimRig_EightiesBasic::getNoFlagHandLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27950 & 1;
  if (((DAT_06b27950 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27950), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27810,"zombie_arm_inner_lower");
    nop();
    std::string::string((string *)&DAT_06b27818,"zombie_arm_inner_upper");
    nop();
    std::string::string((string *)&DAT_06b27820,"zombie_hand_inner");
    nop();
    std::string::string((string *)&DAT_06b27828,"zombie_hand_inner_01");
    nop();
    std::string::string((string *)&DAT_06b27830,"zombie_hand_inner_02");
    nop();
    __cxa_guard_release(&DAT_06b27950);
    __cxa_atexit(FUN_047df090,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27a30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27a30), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27838,(string *)&DAT_06b27810,(allocator *)&DAT_06b27838);
    __cxa_guard_release(&DAT_06b27a30);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27838,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27838);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::getConeLayerNames() */

void ZombieAnimRig_EightiesBasic::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b278d0 & 1;
  if (((DAT_06b278d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b278d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b279b0,"zombie_armor_cone_norm");
    nop();
    std::string::string((string *)&DAT_06b279b8,"zombie_armor_cone_damage_01");
    nop();
    std::string::string((string *)&DAT_06b279c0,"zombie_armor_cone_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b278d0);
    __cxa_atexit(FUN_047df0c8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27a00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27a00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27a08,(string *)&DAT_06b279b0,(allocator *)&DAT_06b279c8);
    __cxa_guard_release(&DAT_06b27a00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27a08,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27a08);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_EightiesBasic::getBucketLayerNames() */

void ZombieAnimRig_EightiesBasic::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27960 & 1;
  if (((DAT_06b27960 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27960), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27968,"zombie_armor_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06b27970,"zombie_armor_bucket_damage_01");
    nop();
    std::string::string((string *)&DAT_06b27978,"zombie_armor_bucket_damage_02");
    nop();
    __cxa_guard_release(&DAT_06b27960);
    __cxa_atexit(FUN_047df0fc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b278c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b278c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b279d0,(string *)&DAT_06b27968,(allocator *)&DAT_06b27980);
    __cxa_guard_release(&DAT_06b278c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b279d0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b279d0);
}

