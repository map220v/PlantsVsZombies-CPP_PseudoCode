// Class: GridItemTinyLava


/* GridItemTinyLava::onAnimStopped(std::string const&) */

void GridItemTinyLava::onAnimStopped(string *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTinyLava::StaticClassInit() */

void GridItemTinyLava::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemTinyLava");
    (*pcVar2)(plVar1,asStack_10,FUN_04123b50,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTinyLava::StaticGetClass() */

long * GridItemTinyLava::StaticGetClass(void)

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
  uVar2 = GridItemLava::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTinyLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemTinyLava::GetClass() const */

long * GridItemTinyLava::GetClass(void)

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
  uVar2 = GridItemLava::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemTinyLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemTinyLava::onSplatFinished(std::string const&) */

void GridItemTinyLava::onSplatFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemTinyLava::~GridItemTinyLava() */

void __thiscall GridItemTinyLava::~GridItemTinyLava(GridItemTinyLava *this)

{
  *(undefined ***)this = &PTR_GetClass_067e9dc0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTinyLava_067ea0a8;
  GridItemLava::~GridItemLava((GridItemLava *)this);
  return;
}


/* non-virtual thunk to GridItemTinyLava::~GridItemTinyLava() */

void __thiscall GridItemTinyLava::~GridItemTinyLava(GridItemTinyLava *this)

{
  ~GridItemTinyLava(this + -0x10);
  return;
}


/* GridItemTinyLava::~GridItemTinyLava() */

void __thiscall GridItemTinyLava::~GridItemTinyLava(GridItemTinyLava *this)

{
  ~GridItemTinyLava(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemTinyLava::~GridItemTinyLava() */

void __thiscall GridItemTinyLava::~GridItemTinyLava(GridItemTinyLava *this)

{
  ~GridItemTinyLava(this + -0x10);
  return;
}


/* GridItemTinyLava::GridItemTinyLava() */

void __thiscall GridItemTinyLava::GridItemTinyLava(GridItemTinyLava *this)

{
  GridItemLava::GridItemLava((GridItemLava *)this);
  *(undefined ***)this = &PTR_GetClass_067e9dc0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemTinyLava_067ea0a8;
  return;
}


/* GridItemTinyLava::StaticNew() */

GridItemTinyLava * GridItemTinyLava::StaticNew(void)

{
  GridItemTinyLava *this;
  
  this = ::operator_new(0x1e0);
  GridItemTinyLava(this);
  return this;
}

