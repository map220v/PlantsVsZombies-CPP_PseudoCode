// Class: ZombieAnimRig_LostCityLostPilot


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::getRangedAttackAnimationName() */

void __thiscall
ZombieAnimRig_LostCityLostPilot::getRangedAttackAnimationName(ZombieAnimRig_LostCityLostPilot *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"throw");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::PlayHangStart(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_LostCityLostPilot::PlayHangStart
          (ZombieAnimRig_LostCityLostPilot *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"HANG_DROP");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::PlayHangIdle() */

void __thiscall ZombieAnimRig_LostCityLostPilot::PlayHangIdle(ZombieAnimRig_LostCityLostPilot *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"HANG_IDLE");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::PlayHangEat() */

void __thiscall ZombieAnimRig_LostCityLostPilot::PlayHangEat(ZombieAnimRig_LostCityLostPilot *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"HANG_EAT");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot() */

void __thiscall
ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot
          (ZombieAnimRig_LostCityLostPilot *this)

{
  *(undefined ***)this = &PTR_GetClass_068e9650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityLostPilot_068e98c8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot() */

void __thiscall
ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot
          (ZombieAnimRig_LostCityLostPilot *this)

{
  ~ZombieAnimRig_LostCityLostPilot(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot() */

void __thiscall
ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot
          (ZombieAnimRig_LostCityLostPilot *this)

{
  ~ZombieAnimRig_LostCityLostPilot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot() */

void __thiscall
ZombieAnimRig_LostCityLostPilot::~ZombieAnimRig_LostCityLostPilot
          (ZombieAnimRig_LostCityLostPilot *this)

{
  ~ZombieAnimRig_LostCityLostPilot(this + -0x10);
  return;
}


/* ZombieAnimRig_LostCityLostPilot::ZombieAnimRig_LostCityLostPilot() */

void __thiscall
ZombieAnimRig_LostCityLostPilot::ZombieAnimRig_LostCityLostPilot
          (ZombieAnimRig_LostCityLostPilot *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_LostCityLostPilot)0x0;
  *(undefined ***)this = &PTR_GetClass_068e9650;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_LostCityLostPilot_068e98c8;
  return;
}


/* ZombieAnimRig_LostCityLostPilot::StaticNew() */

ZombieAnimRig_LostCityLostPilot * ZombieAnimRig_LostCityLostPilot::StaticNew(void)

{
  ZombieAnimRig_LostCityLostPilot *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_LostCityLostPilot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::StaticClassInit() */

void ZombieAnimRig_LostCityLostPilot::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_LostCityLostPilot");
    (*pcVar2)(plVar1,asStack_10,FUN_047d64c8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_LostCityLostPilot::StaticGetClass() */

long * ZombieAnimRig_LostCityLostPilot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityLostPilot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_LostCityLostPilot::GetClass() const */

long * ZombieAnimRig_LostCityLostPilot::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_LostCityLostPilot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::PlayHangCut(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_LostCityLostPilot::PlayHangCut
          (ZombieAnimRig_LostCityLostPilot *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"HANG_CUT");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = (*pcVar2)(this,asStack_58,0,aRStack_50);
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
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::PlayDie() */

void __thiscall ZombieAnimRig_LostCityLostPilot::PlayDie(ZombieAnimRig_LostCityLostPilot *this)

{
  undefined4 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((this[0x240] == (ZombieAnimRig_LostCityLostPilot)0x0) && (*(int *)(this + 0x210) != 4)) {
    uVar1 = ZombieAnimRig::PlayDie((ZombieAnimRig *)this);
  }
  else {
    *(undefined4 *)(this + 0x210) = 4;
    pcVar2 = *(code **)(*(long *)this + 0x168);
    std::string::string(asStack_40,"HANG_DIE");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = (*pcVar2)(this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::getHeadLayerNames() */

void ZombieAnimRig_LostCityLostPilot::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27198 & 1;
  if (((DAT_06b27198 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27198), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27140,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b27148,"zombie_pupil");
    nop();
    std::string::string((string *)&DAT_06b27150,"zombie_skull");
    nop();
    __cxa_guard_release(&DAT_06b27198);
    __cxa_atexit(FUN_047d5bcc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b270d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b270d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b271a0,(string *)&DAT_06b27140,(allocator *)&DAT_06b27158);
    __cxa_guard_release(&DAT_06b270d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b271a0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b271a0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::getArmLayerNames() */

void ZombieAnimRig_LostCityLostPilot::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27028 & 1;
  if (((DAT_06b27028 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27028), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27060,"zombie_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b27068,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b27070,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b27078,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b27028);
    __cxa_atexit(FUN_047d5c00,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27048 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27048), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27160,(string *)&DAT_06b27060,(allocator *)&DAT_06b27080);
    __cxa_guard_release(&DAT_06b27048);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27160,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27160);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_LostCityLostPilot::getArmReplacementPairNames() */

void ZombieAnimRig_LostCityLostPilot::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b27058 & 1;
  if (((DAT_06b27058 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27058), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b27030,"zombie_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b27038,"zombie_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b27058);
    __cxa_atexit(FUN_047d5c3c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b27130 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b27130), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b27178,(string *)&DAT_06b27030,
               (allocator *)&ZombieLostCityLostPilotProps::sClass);
    __cxa_guard_release(&DAT_06b27130);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b27178,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b27178);
}

