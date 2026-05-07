// Class: GridItemSchoolBusAnimRig


/* GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig() */

void __thiscall GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig(GridItemSchoolBusAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0661b9d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBusAnimRig_0661baf0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig() */

void __thiscall GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig(GridItemSchoolBusAnimRig *this)

{
  ~GridItemSchoolBusAnimRig(this + -0x10);
  return;
}


/* GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig() */

void __thiscall GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig(GridItemSchoolBusAnimRig *this)

{
  ~GridItemSchoolBusAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig() */

void __thiscall GridItemSchoolBusAnimRig::~GridItemSchoolBusAnimRig(GridItemSchoolBusAnimRig *this)

{
  ~GridItemSchoolBusAnimRig(this + -0x10);
  return;
}


/* GridItemSchoolBusAnimRig::GridItemSchoolBusAnimRig() */

void __thiscall GridItemSchoolBusAnimRig::GridItemSchoolBusAnimRig(GridItemSchoolBusAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0661b9d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBusAnimRig_0661baf0;
  return;
}


/* GridItemSchoolBusAnimRig::StaticNew() */

GridItemSchoolBusAnimRig * GridItemSchoolBusAnimRig::StaticNew(void)

{
  GridItemSchoolBusAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemSchoolBusAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusAnimRig::StaticClassInit() */

void GridItemSchoolBusAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSchoolBusAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_033e2170,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusAnimRig::StaticGetClass() */

long * GridItemSchoolBusAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSchoolBusAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSchoolBusAnimRig::GetClass() const */

long * GridItemSchoolBusAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSchoolBusAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusAnimRig::PlayBroken(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
GridItemSchoolBusAnimRig::PlayBroken(GridItemSchoolBusAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"flattire");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
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
/* GridItemSchoolBusAnimRig::PlayMove() */

void __thiscall GridItemSchoolBusAnimRig::PlayMove(GridItemSchoolBusAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"walk");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusAnimRig::PlayBrokenMove() */

void __thiscall GridItemSchoolBusAnimRig::PlayBrokenMove(GridItemSchoolBusAnimRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"walk2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

