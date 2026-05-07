// Class: ZombieAnimRig_CrystalSkull


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::StopPowerSuck(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_CrystalSkull::StopPowerSuck
          (ZombieAnimRig_CrystalSkull *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"power_down");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 10;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::StartPowerSuck() */

void __thiscall ZombieAnimRig_CrystalSkull::StartPowerSuck(ZombieAnimRig_CrystalSkull *this)

{
  int iVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x168);
  std::string::string(asStack_40,"power_up");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 8;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::onAnimStopped() */

void __thiscall ZombieAnimRig_CrystalSkull::onAnimStopped(ZombieAnimRig_CrystalSkull *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x210) == 8) {
    std::string::string(asStack_40,"power");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    if (iVar1 != -1) {
      *(undefined4 *)(this + 0x210) = 9;
    }
  }
  else {
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_CrystalSkull::StaticGetClass() */

long * ZombieAnimRig_CrystalSkull::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CrystalSkull",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CrystalSkull::GetClass() const */

long * ZombieAnimRig_CrystalSkull::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_CrystalSkull",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull() */

void __thiscall
ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull(ZombieAnimRig_CrystalSkull *this)

{
  *(undefined ***)this = &PTR_GetClass_068e5450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CrystalSkull_068e56e0;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull() */

void __thiscall
ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull(ZombieAnimRig_CrystalSkull *this)

{
  ~ZombieAnimRig_CrystalSkull(this + -0x10);
  return;
}


/* ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull() */

void __thiscall
ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull(ZombieAnimRig_CrystalSkull *this)

{
  ~ZombieAnimRig_CrystalSkull(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull() */

void __thiscall
ZombieAnimRig_CrystalSkull::~ZombieAnimRig_CrystalSkull(ZombieAnimRig_CrystalSkull *this)

{
  ~ZombieAnimRig_CrystalSkull(this + -0x10);
  return;
}


/* ZombieAnimRig_CrystalSkull::ZombieAnimRig_CrystalSkull() */

void __thiscall
ZombieAnimRig_CrystalSkull::ZombieAnimRig_CrystalSkull(ZombieAnimRig_CrystalSkull *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_068e5450;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CrystalSkull_068e56e0;
  return;
}


/* ZombieAnimRig_CrystalSkull::StaticNew() */

ZombieAnimRig_CrystalSkull * ZombieAnimRig_CrystalSkull::StaticNew(void)

{
  ZombieAnimRig_CrystalSkull *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_CrystalSkull(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::StartFiring(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_CrystalSkull::StartFiring
          (ZombieAnimRig_CrystalSkull *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"attack");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 0xb;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::SetSkullGlow(float) */

void __thiscall
ZombieAnimRig_CrystalSkull::SetSkullGlow(ZombieAnimRig_CrystalSkull *this,float param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.75 < param_1) {
    bVar1 = false;
    bVar4 = true;
    bVar2 = false;
    bVar3 = false;
  }
  else if (0.5 < param_1) {
    bVar4 = false;
    bVar3 = true;
    bVar2 = false;
    bVar1 = bVar4;
  }
  else if (0.25 < param_1) {
    bVar3 = false;
    bVar2 = true;
    bVar4 = false;
    bVar1 = bVar3;
  }
  else {
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar1 = true;
  }
  std::string::string(asStack_10,"skull_base");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"skull_base_glow1");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar3);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"skull_base_glow2");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"skull_base_glow3");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::getHeadLayerNames() */

void ZombieAnimRig_CrystalSkull::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26908 & 1;
  if (((DAT_06b26908 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26908), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26ae0,"zombie_egypt_ra_skull");
    nop();
    std::string::string((string *)&DAT_06b26ae8,"zombie_egypt_ra_skull_power");
    nop();
    std::string::string((string *)&DAT_06b26af0,"zombie_egypt_ra_jaw");
    nop();
    __cxa_guard_release(&DAT_06b26908);
    __cxa_atexit(FUN_047ca424,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b269b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b269b8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26918,(string *)&DAT_06b26ae0,(allocator *)&DAT_06b26af8);
    __cxa_guard_release(&DAT_06b269b8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26918,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26918);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::getArmLayerNames() */

void ZombieAnimRig_CrystalSkull::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26998 & 1;
  if (((DAT_06b26998 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26998), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b269e8,"zombie_egypt_ra_hand_outer");
    nop();
    std::string::string((string *)&DAT_06b269f0,"zombie_egypt_ra_hand_outer2");
    nop();
    std::string::string((string *)&DAT_06b269f8,"zombie_egypt_ra_arm_outer_lower");
    nop();
    __cxa_guard_release(&DAT_06b26998);
    __cxa_atexit(FUN_047ca458,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b269c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b269c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26b28,(string *)&DAT_06b269e8,(allocator *)&DAT_06b26a00);
    __cxa_guard_release(&DAT_06b269c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26b28,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26b28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CrystalSkull::getArmReplacementPairNames() */

void ZombieAnimRig_CrystalSkull::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b26930 & 1;
  if (((DAT_06b26930 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b26930), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b26958,"zombie_egypt_ra_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b26960,"zombie_egypt_ra_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b26930);
    __cxa_atexit(FUN_047ca48c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b269b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b269b0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b26940,(string *)&DAT_06b26958,(allocator *)&DAT_06b26968);
    __cxa_guard_release(&DAT_06b269b0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b26940,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b26940);
}

