// Class: GridItemJammable


/* GridItemJammable::SetJamStyle(std::string const&) */

void GridItemJammable::SetJamStyle(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1f0);
  return;
}


/* GridItemJammable::GetJamStyle() */

undefined8 GridItemJammable::GetJamStyle(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* GridItemJammable::StartJamming() */

void __thiscall GridItemJammable::StartJamming(GridItemJammable *this)

{
  this[0x1e8] = (GridItemJammable)0x1;
  return;
}


/* GridItemJammable::StopJamming() */

void __thiscall GridItemJammable::StopJamming(GridItemJammable *this)

{
  this[0x1e8] = (GridItemJammable)0x0;
  return;
}


/* GridItemJammable::IsJamming() */

GridItemJammable __thiscall GridItemJammable::IsJamming(GridItemJammable *this)

{
  return this[0x1e8];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemJammable::StaticClassInit() */

void GridItemJammable::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemJammable");
    (*pcVar2)(plVar1,asStack_10,FUN_03e321cc,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemJammable::StaticGetClass() */

long * GridItemJammable::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemJammable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemJammable::GetClass() const */

long * GridItemJammable::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemJammable",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemJammable::GridItemJammable() */

void __thiscall GridItemJammable::GridItemJammable(GridItemJammable *this)

{
  undefined **__n;
  
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  __n = &PTR_GetClass_067890f0;
  *(undefined ***)this = &PTR_GetClass_067890f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemJammable_06789418;
  Set8BytesTo0((string *)(this + 0x1f0));
  this[0x1e8] = (GridItemJammable)0x0;
  std::string::append((string *)(this + 0x1f0),"",(size_t)__n);
  return;
}


/* GridItemJammable::StaticNew() */

GridItemJammable * GridItemJammable::StaticNew(void)

{
  GridItemJammable *this;
  
  this = ::operator_new(0x1f8);
  GridItemJammable(this);
  return this;
}


/* GridItemJammable::~GridItemJammable() */

void __thiscall GridItemJammable::~GridItemJammable(GridItemJammable *this)

{
  *(undefined ***)this = &PTR_GetClass_067890f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemJammable_06789418;
  std::string::~string((string *)(this + 0x1f0));
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemJammable::~GridItemJammable() */

void __thiscall GridItemJammable::~GridItemJammable(GridItemJammable *this)

{
  ~GridItemJammable(this + -0x10);
  return;
}


/* GridItemJammable::~GridItemJammable() */

void __thiscall GridItemJammable::~GridItemJammable(GridItemJammable *this)

{
  ~GridItemJammable(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemJammable::~GridItemJammable() */

void __thiscall GridItemJammable::~GridItemJammable(GridItemJammable *this)

{
  ~GridItemJammable(this + -0x10);
  return;
}

