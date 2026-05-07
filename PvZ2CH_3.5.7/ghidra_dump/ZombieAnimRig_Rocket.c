// Class: ZombieAnimRig_Rocket


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rocket::PlayDropIn(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Rocket::PlayDropIn(ZombieAnimRig_Rocket *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"land");
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
  __stack_chk_fail(iVar1 != -1);
}


/* ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket() */

void __thiscall ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket(ZombieAnimRig_Rocket *this)

{
  *(undefined ***)this = &PTR_GetClass_06876ba0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Rocket_06876e18;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket() */

void __thiscall ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket(ZombieAnimRig_Rocket *this)

{
  ~ZombieAnimRig_Rocket(this + -0x10);
  return;
}


/* ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket() */

void __thiscall ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket(ZombieAnimRig_Rocket *this)

{
  ~ZombieAnimRig_Rocket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket() */

void __thiscall ZombieAnimRig_Rocket::~ZombieAnimRig_Rocket(ZombieAnimRig_Rocket *this)

{
  ~ZombieAnimRig_Rocket(this + -0x10);
  return;
}


/* ZombieAnimRig_Rocket::ZombieAnimRig_Rocket() */

void __thiscall ZombieAnimRig_Rocket::ZombieAnimRig_Rocket(ZombieAnimRig_Rocket *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06876ba0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Rocket_06876e18;
  return;
}


/* ZombieAnimRig_Rocket::StaticNew() */

ZombieAnimRig_Rocket * ZombieAnimRig_Rocket::StaticNew(void)

{
  ZombieAnimRig_Rocket *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Rocket(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rocket::StaticClassInit() */

void ZombieAnimRig_Rocket::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Rocket");
    (*pcVar2)(plVar1,asStack_10,FUN_04614438,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Rocket::StaticGetClass() */

long * ZombieAnimRig_Rocket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Rocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Rocket::GetClass() const */

long * ZombieAnimRig_Rocket::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Rocket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rocket::PlayFlyDie(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Rocket::PlayFlyDie(ZombieAnimRig_Rocket *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"fly_die");
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
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rocket::PlayFlying() */

void __thiscall ZombieAnimRig_Rocket::PlayFlying(ZombieAnimRig_Rocket *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"fly");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PopAnimRig::CalcPlayingAnimLabelName();
    ZombieAnimRig::setAnimRateForWalkAnim((ZombieAnimRig *)this,asStack_40);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rocket::getHeadLayerNames() */

void ZombieAnimRig_Rocket::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19970 & 1;
  if (((DAT_06b19970 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19970), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19980,"zombie_imp_skull");
    nop();
    std::string::string((string *)&DAT_06b19988,"zombie_imp_jaw");
    nop();
    __cxa_guard_release(&DAT_06b19970);
    __cxa_atexit(FUN_046141bc,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b199c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b199c0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19948,(string *)&DAT_06b19980,(allocator *)&DAT_06b19990);
    __cxa_guard_release(&DAT_06b199c0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19948,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19948);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rocket::getArmLayerNames() */

void ZombieAnimRig_Rocket::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b19978 & 1;
  if (((DAT_06b19978 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b19978), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19990,"zombie_imp_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b19998,"zombie_imp_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b19978);
    __cxa_atexit(FUN_046141e8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b199e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b199e0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b19930,(string *)&DAT_06b19990,(allocator *)&DAT_06b199a0);
    __cxa_guard_release(&DAT_06b199e0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b19930,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b19930);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Rocket::getArmReplacementPairNames() */

void ZombieAnimRig_Rocket::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b199a0 & 1;
  if (((DAT_06b199a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b199a0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b19960,"zombie_imp_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b19968,"zombie_imp_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b199a0);
    __cxa_atexit(FUN_04614214,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b199c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b199c8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b199e8,(string *)&DAT_06b19960,(allocator *)&DAT_06b19970);
    __cxa_guard_release(&DAT_06b199c8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b199e8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b199e8);
}

