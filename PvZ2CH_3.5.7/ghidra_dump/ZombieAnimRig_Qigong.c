// Class: ZombieAnimRig_Qigong


/* ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong() */

void __thiscall ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong(ZombieAnimRig_Qigong *this)

{
  *(undefined ***)this = &PTR_GetClass_0687adb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Qigong_0687b028;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong() */

void __thiscall ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong(ZombieAnimRig_Qigong *this)

{
  ~ZombieAnimRig_Qigong(this + -0x10);
  return;
}


/* ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong() */

void __thiscall ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong(ZombieAnimRig_Qigong *this)

{
  ~ZombieAnimRig_Qigong(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong() */

void __thiscall ZombieAnimRig_Qigong::~ZombieAnimRig_Qigong(ZombieAnimRig_Qigong *this)

{
  ~ZombieAnimRig_Qigong(this + -0x10);
  return;
}


/* ZombieAnimRig_Qigong::ZombieAnimRig_Qigong() */

void __thiscall ZombieAnimRig_Qigong::ZombieAnimRig_Qigong(ZombieAnimRig_Qigong *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0687adb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Qigong_0687b028;
  return;
}


/* ZombieAnimRig_Qigong::StaticNew() */

ZombieAnimRig_Qigong * ZombieAnimRig_Qigong::StaticNew(void)

{
  ZombieAnimRig_Qigong *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_Qigong(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Qigong::StaticClassInit() */

void ZombieAnimRig_Qigong::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Qigong");
    (*pcVar2)(plVar1,asStack_10,FUN_04621eec,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Qigong::StaticGetClass() */

long * ZombieAnimRig_Qigong::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Qigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Qigong::GetClass() const */

long * ZombieAnimRig_Qigong::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_Qigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Qigong::PlayPull(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
ZombieAnimRig_Qigong::PlayPull(ZombieAnimRig_Qigong *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"qigong");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Qigong::GetPullDuration() */

void __thiscall ZombieAnimRig_Qigong::GetPullDuration(ZombieAnimRig_Qigong *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"qigong");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Qigong::getHeadLayerNames() */

void ZombieAnimRig_Qigong::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1ad70 & 1;
  if (((DAT_06b1ad70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad70), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ae30,"zombie_pirate_basic_skull");
    nop();
    std::string::string((string *)&DAT_06b1ae38,"zombie_pirate_basic_jaw");
    nop();
    __cxa_guard_release(&DAT_06b1ad70);
    __cxa_atexit(FUN_04621c68,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ad68 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ad68), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1add8,(string *)&DAT_06b1ae30,(allocator *)&DAT_06b1ae40);
    __cxa_guard_release(&DAT_06b1ad68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1add8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1add8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Qigong::getArmLayerNames() */

void ZombieAnimRig_Qigong::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1adf8 & 1;
  if (((DAT_06b1adf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1adf8), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1ad78,"zombie_pirate_basic_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1ad80,"zombie_pirate_basic_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1ad88,"zombie_pirate_basic_hand_outer_02");
    nop();
    __cxa_guard_release(&DAT_06b1adf8);
    __cxa_atexit(FUN_04621c94,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ae10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ae10), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ae18,(string *)&DAT_06b1ad78,(allocator *)&DAT_06b1ad90);
    __cxa_guard_release(&DAT_06b1ae10);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ae18,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ae18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Qigong::getArmReplacementPairNames() */

void ZombieAnimRig_Qigong::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1adf0 & 1;
  if (((DAT_06b1adf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1adf0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1adc8,"zombie_pirate_basic_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b1add0,"zombie_pirate_basic_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b1adf0);
    __cxa_atexit(FUN_04621cc8,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1ada8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1ada8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1ad90,(string *)&DAT_06b1adc8,(allocator *)&DAT_06b1add8);
    __cxa_guard_release(&DAT_06b1ada8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1ad90,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1ad90);
}

