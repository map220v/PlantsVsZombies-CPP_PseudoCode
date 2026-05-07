// Class: ZombieAnimRig_DarkJuggler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::StaticClassInit() */

void ZombieAnimRig_DarkJuggler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_DarkJuggler");
    (*pcVar2)(plVar1,asStack_10,FUN_0466ae70,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DarkJuggler::StaticGetClass() */

long * ZombieAnimRig_DarkJuggler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkJuggler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DarkJuggler::GetClass() const */

long * ZombieAnimRig_DarkJuggler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_DarkJuggler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler() */

void __thiscall
ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler(ZombieAnimRig_DarkJuggler *this)

{
  *(undefined ***)this = &PTR_GetClass_06892950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkJuggler_06892bc8;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler() */

void __thiscall
ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler(ZombieAnimRig_DarkJuggler *this)

{
  ~ZombieAnimRig_DarkJuggler(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler() */

void __thiscall
ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler(ZombieAnimRig_DarkJuggler *this)

{
  ~ZombieAnimRig_DarkJuggler(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler() */

void __thiscall
ZombieAnimRig_DarkJuggler::~ZombieAnimRig_DarkJuggler(ZombieAnimRig_DarkJuggler *this)

{
  ~ZombieAnimRig_DarkJuggler(this + -0x10);
  return;
}


/* ZombieAnimRig_DarkJuggler::ZombieAnimRig_DarkJuggler() */

void __thiscall
ZombieAnimRig_DarkJuggler::ZombieAnimRig_DarkJuggler(ZombieAnimRig_DarkJuggler *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_DarkJuggler)0x0;
  *(undefined ***)this = &PTR_GetClass_06892950;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_DarkJuggler_06892bc8;
  return;
}


/* ZombieAnimRig_DarkJuggler::StaticNew() */

ZombieAnimRig_DarkJuggler * ZombieAnimRig_DarkJuggler::StaticNew(void)

{
  ZombieAnimRig_DarkJuggler *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_DarkJuggler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::doSpinStop(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
ZombieAnimRig_DarkJuggler::doSpinStop(ZombieAnimRig_DarkJuggler *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  code *pcVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"spindown");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar2)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::PlayStopSpin(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
ZombieAnimRig_DarkJuggler::PlayStopSpin
          (ZombieAnimRig_DarkJuggler *this,RtReflectionDelegate *param_2)

{
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  doSpinStop(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::doWalkAndSpin() */

void __thiscall ZombieAnimRig_DarkJuggler::doWalkAndSpin(ZombieAnimRig_DarkJuggler *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"spin_walk");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 0xb;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DarkJuggler::PlayWalkAndSpin() */

undefined8 __thiscall ZombieAnimRig_DarkJuggler::PlayWalkAndSpin(ZombieAnimRig_DarkJuggler *this)

{
  this[0x240] = (ZombieAnimRig_DarkJuggler)0x1;
  doWalkAndSpin(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::doIdleAndSpin() */

void __thiscall ZombieAnimRig_DarkJuggler::doIdleAndSpin(ZombieAnimRig_DarkJuggler *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"spin");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 9;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_DarkJuggler::PlaySpin() */

undefined8 __thiscall ZombieAnimRig_DarkJuggler::PlaySpin(ZombieAnimRig_DarkJuggler *this)

{
  this[0x240] = (ZombieAnimRig_DarkJuggler)0x0;
  doIdleAndSpin(this);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::getHeadLayerNames() */

void ZombieAnimRig_DarkJuggler::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d790 & 1;
  if (((DAT_06b1d790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d790), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d7c0,"Dark_Jester_skull_01");
    nop();
    std::string::string((string *)&DAT_06b1d7c8,"zombie_pros_jaw");
    nop();
    std::string::string((string *)&DAT_06b1d7d0,"zombie_pros_skull_01");
    nop();
    std::string::string((string *)&DAT_06b1d7d8,"zombie_jaw");
    nop();
    std::string::string((string *)&DAT_06b1d7e0,"pupil");
    nop();
    __cxa_guard_release(&DAT_06b1d790);
    __cxa_atexit(FUN_0466a49c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d788 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d788), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d718,(string *)&DAT_06b1d7c0,(allocator *)&DAT_06b1d7e8);
    __cxa_guard_release(&DAT_06b1d788);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d718,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d718);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::getArmLayerNames() */

void ZombieAnimRig_DarkJuggler::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d748 & 1;
  if (((DAT_06b1d748 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d748), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d7e8,"zombie_pros_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b1d7f0,"zombie_pros_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1d7f8,"zombie_hand_outer_01");
    nop();
    std::string::string((string *)&DAT_06b1d800,"zombie_hand_outer_02");
    nop();
    std::string::string((string *)&DAT_06b1d808,"zombie_hand_outer_03");
    nop();
    __cxa_guard_release(&DAT_06b1d748);
    __cxa_atexit(FUN_0466a4d4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d770 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d770), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d7a8,(string *)&DAT_06b1d7e8,(allocator *)&DAT_06b1d810);
    __cxa_guard_release(&DAT_06b1d770);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d7a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d7a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_DarkJuggler::getArmReplacementPairNames() */

void ZombieAnimRig_DarkJuggler::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b1d6f0 & 1;
  if (((DAT_06b1d6f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d6f0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1d6f8,"zombie_pros_arm_outer_upper_01");
    nop();
    std::string::string((string *)&DAT_06b1d700,"zombie_pros_arm_outer_upper_02");
    nop();
    __cxa_guard_release(&DAT_06b1d6f0);
    __cxa_atexit(FUN_0466a50c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b1d750 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1d750), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1d758,(string *)&DAT_06b1d6f8,(allocator *)&DAT_06b1d708);
    __cxa_guard_release(&DAT_06b1d750);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1d758,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b1d758);
}

