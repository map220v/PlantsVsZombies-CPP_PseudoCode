// Class: GridItemHeianBoxAnimRig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxAnimRig::getDisablingAnimName() */

void __thiscall GridItemHeianBoxAnimRig::getDisablingAnimName(GridItemHeianBoxAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"off");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxAnimRig::getActivatingAnimName() */

void __thiscall GridItemHeianBoxAnimRig::getActivatingAnimName(GridItemHeianBoxAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"on");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig() */

void __thiscall GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig(GridItemHeianBoxAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06766610;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxAnimRig_06766750;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig() */

void __thiscall GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig(GridItemHeianBoxAnimRig *this)

{
  ~GridItemHeianBoxAnimRig(this + -0x10);
  return;
}


/* GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig() */

void __thiscall GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig(GridItemHeianBoxAnimRig *this)

{
  ~GridItemHeianBoxAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig() */

void __thiscall GridItemHeianBoxAnimRig::~GridItemHeianBoxAnimRig(GridItemHeianBoxAnimRig *this)

{
  ~GridItemHeianBoxAnimRig(this + -0x10);
  return;
}


/* GridItemHeianBoxAnimRig::GridItemHeianBoxAnimRig() */

void __thiscall GridItemHeianBoxAnimRig::GridItemHeianBoxAnimRig(GridItemHeianBoxAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06766610;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxAnimRig_06766750;
  return;
}


/* GridItemHeianBoxAnimRig::StaticNew() */

GridItemHeianBoxAnimRig * GridItemHeianBoxAnimRig::StaticNew(void)

{
  GridItemHeianBoxAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemHeianBoxAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxAnimRig::StaticClassInit() */

void GridItemHeianBoxAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d28580,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxAnimRig::StaticGetClass() */

long * GridItemHeianBoxAnimRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxAnimRig::GetClass() const */

long * GridItemHeianBoxAnimRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxAnimRig::PlayBoxActivated() */

void __thiscall GridItemHeianBoxAnimRig::PlayBoxActivated(GridItemHeianBoxAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x128))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

