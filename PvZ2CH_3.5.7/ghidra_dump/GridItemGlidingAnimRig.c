// Class: GridItemGlidingAnimRig


/* GridItemGlidingAnimRig::~GridItemGlidingAnimRig() */

void __thiscall GridItemGlidingAnimRig::~GridItemGlidingAnimRig(GridItemGlidingAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_069ff040;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGlidingAnimRig_069ff168;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemGlidingAnimRig::~GridItemGlidingAnimRig() */

void __thiscall GridItemGlidingAnimRig::~GridItemGlidingAnimRig(GridItemGlidingAnimRig *this)

{
  ~GridItemGlidingAnimRig(this + -0x10);
  return;
}


/* GridItemGlidingAnimRig::~GridItemGlidingAnimRig() */

void __thiscall GridItemGlidingAnimRig::~GridItemGlidingAnimRig(GridItemGlidingAnimRig *this)

{
  ~GridItemGlidingAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGlidingAnimRig::~GridItemGlidingAnimRig() */

void __thiscall GridItemGlidingAnimRig::~GridItemGlidingAnimRig(GridItemGlidingAnimRig *this)

{
  ~GridItemGlidingAnimRig(this + -0x10);
  return;
}


/* GridItemGlidingAnimRig::GridItemGlidingAnimRig() */

void __thiscall GridItemGlidingAnimRig::GridItemGlidingAnimRig(GridItemGlidingAnimRig *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069ff040;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGlidingAnimRig_069ff168;
  return;
}


/* GridItemGlidingAnimRig::StaticNew() */

GridItemGlidingAnimRig * GridItemGlidingAnimRig::StaticNew(void)

{
  GridItemGlidingAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemGlidingAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGlidingAnimRig::StaticClassInit() */

void GridItemGlidingAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGlidingAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee4244,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGlidingAnimRig::StaticGetClass() */

long * GridItemGlidingAnimRig::StaticGetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGlidingAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGlidingAnimRig::GetClass() const */

long * GridItemGlidingAnimRig::GetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGlidingAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGlidingAnimRig::SetDamageState(int, bool) */

void GridItemGlidingAnimRig::SetDamageState(int param_1,bool param_2)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("damage%i",asStack_40,(ulong)(param_2 + 1));
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

