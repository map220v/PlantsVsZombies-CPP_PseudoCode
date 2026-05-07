// Class: GravestoneAnimRig


/* GravestoneAnimRig::GravestoneAnimRig() */

void __thiscall GravestoneAnimRig::GravestoneAnimRig(GravestoneAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0676b450;
  *(undefined ***)(this + 0x10) = &PTR__GravestoneAnimRig_0676b578;
  return;
}


/* GravestoneAnimRig::~GravestoneAnimRig() */

void __thiscall GravestoneAnimRig::~GravestoneAnimRig(GravestoneAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b450;
  *(undefined ***)(this + 0x10) = &PTR__GravestoneAnimRig_0676b578;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GravestoneAnimRig::~GravestoneAnimRig() */

void __thiscall GravestoneAnimRig::~GravestoneAnimRig(GravestoneAnimRig *this)

{
  ~GravestoneAnimRig(this + -0x10);
  return;
}


/* GravestoneAnimRig::~GravestoneAnimRig() */

void __thiscall GravestoneAnimRig::~GravestoneAnimRig(GravestoneAnimRig *this)

{
  ~GravestoneAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GravestoneAnimRig::~GravestoneAnimRig() */

void __thiscall GravestoneAnimRig::~GravestoneAnimRig(GravestoneAnimRig *this)

{
  ~GravestoneAnimRig(this + -0x10);
  return;
}


/* GravestoneAnimRig::StaticNew() */

GravestoneAnimRig * GravestoneAnimRig::StaticNew(void)

{
  GravestoneAnimRig *this;
  
  this = ::operator_new(0x210);
  GravestoneAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig::StaticClassInit() */

void GravestoneAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GravestoneAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5ca04,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GravestoneAnimRig::StaticGetClass() */

long * GravestoneAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GravestoneAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GravestoneAnimRig::GetClass() const */

long * GravestoneAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GravestoneAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig::SetDamageState(int, bool) */

void __thiscall GravestoneAnimRig::SetDamageState(GravestoneAnimRig *this,int param_1,bool param_2)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    std::string::string(asStack_40,"undamaged");
    nop();
  }
  else {
    Sexy::StrFormat("damage%i",asStack_40);
  }
  if (param_2) {
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  }
  else {
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  }
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

