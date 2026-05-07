// Class: PlantAnimRig_GreenTurnip


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::getAttackAnimationName() */

void PlantAnimRig_GreenTurnip::getAttackAnimationName(void)

{
  int iVar1;
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  iVar1 = *(int *)(in_x0 + 0x3b8);
  if (iVar1 == 2) {
    std::string::append(in_x8,"attack02",(size_t)__n);
  }
  else if (iVar1 == 3) {
    std::string::append(in_x8,"attack01",(size_t)__n);
  }
  else if (iVar1 == 1) {
    std::string::append(in_x8,"attack03",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip() */

void __thiscall PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip(PlantAnimRig_GreenTurnip *this)

{
  *(undefined ***)this = &PTR_GetClass_067dd9f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GreenTurnip_067ddc58;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip() */

void __thiscall PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip(PlantAnimRig_GreenTurnip *this)

{
  ~PlantAnimRig_GreenTurnip(this + -0x10);
  return;
}


/* PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip() */

void __thiscall PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip(PlantAnimRig_GreenTurnip *this)

{
  ~PlantAnimRig_GreenTurnip(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip() */

void __thiscall PlantAnimRig_GreenTurnip::~PlantAnimRig_GreenTurnip(PlantAnimRig_GreenTurnip *this)

{
  ~PlantAnimRig_GreenTurnip(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::StaticClassInit() */

void PlantAnimRig_GreenTurnip::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_GreenTurnip");
    (*pcVar2)(plVar1,asStack_10,FUN_040e12dc,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GreenTurnip::StaticGetClass() */

long * PlantAnimRig_GreenTurnip::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_GreenTurnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GreenTurnip::GetClass() const */

long * PlantAnimRig_GreenTurnip::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_GreenTurnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GreenTurnip::PlantAnimRig_GreenTurnip() */

void __thiscall PlantAnimRig_GreenTurnip::PlantAnimRig_GreenTurnip(PlantAnimRig_GreenTurnip *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067dd9f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GreenTurnip_067ddc58;
  return;
}


/* PlantAnimRig_GreenTurnip::StaticNew() */

PlantAnimRig_GreenTurnip * PlantAnimRig_GreenTurnip::StaticNew(void)

{
  PlantAnimRig_GreenTurnip *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_GreenTurnip(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::GetBeginSleepLabel() */

void __thiscall PlantAnimRig_GreenTurnip::GetBeginSleepLabel(PlantAnimRig_GreenTurnip *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"leaves01");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::GetRecoverLabel() */

void __thiscall PlantAnimRig_GreenTurnip::GetRecoverLabel(PlantAnimRig_GreenTurnip *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"leaves03");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::PLayRecover(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_GreenTurnip::PLayRecover(PlantAnimRig_GreenTurnip *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetRecoverLabel(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xf;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::PlaySleep() */

void __thiscall PlantAnimRig_GreenTurnip::PlaySleep(PlantAnimRig_GreenTurnip *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetBeginSleepLabel(this);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::PlaySleepLooped() */

void __thiscall PlantAnimRig_GreenTurnip::PlaySleepLooped(PlantAnimRig_GreenTurnip *this)

{
  long lVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"leaves02");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::PlayIdleLooped() */

void __thiscall PlantAnimRig_GreenTurnip::PlayIdleLooped(PlantAnimRig_GreenTurnip *this)

{
  int iVar1;
  undefined1 uVar2;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(this + 0x3b8);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 2) {
    __s = "idle03";
LAB_040e4668:
    std::string::string(asStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    if (iVar1 == 3) {
      uVar2 = PlantAnimRig::PlayIdleLooped((PlantAnimRig *)this);
      goto LAB_040e4628;
    }
    if (iVar1 == 1) {
      __s = "idle04";
      goto LAB_040e4668;
    }
  }
  *(undefined4 *)(this + 0x218) = 1;
  uVar2 = 1;
LAB_040e4628:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantAnimRig_GreenTurnip::onPopAnimInitialized() */

void __thiscall PlantAnimRig_GreenTurnip::onPopAnimInitialized(PlantAnimRig_GreenTurnip *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  PlantAnimRig_HollyKnight::SetNumDamageStates((PlantAnimRig_HollyKnight *)this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GreenTurnip::onAnimStopped() */

void __thiscall PlantAnimRig_GreenTurnip::onAnimStopped(PlantAnimRig_GreenTurnip *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  if (*(int *)(this + 0x218) == 0xe) {
    GetBeginSleepLabel(this);
    cVar1 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      PlaySleepLooped(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

