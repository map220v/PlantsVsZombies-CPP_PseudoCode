// Class: GridItemGravestoneShortcut


/* GridItemGravestoneShortcut::GridItemGravestoneShortcut() */

void __thiscall
GridItemGravestoneShortcut::GridItemGravestoneShortcut(GridItemGravestoneShortcut *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_06780ef0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneShortcut_067811b0;
  return;
}


/* GridItemGravestoneShortcut::StaticNew() */

GridItemGravestoneShortcut * GridItemGravestoneShortcut::StaticNew(void)

{
  GridItemGravestoneShortcut *this;
  
  this = ::operator_new(0x1e0);
  GridItemGravestoneShortcut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestoneShortcut::StaticClassInit() */

void GridItemGravestoneShortcut::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestoneShortcut");
    (*pcVar2)(plVar1,asStack_10,FUN_03e00c28,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestoneShortcut::StaticGetClass() */

long * GridItemGravestoneShortcut::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneShortcut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneShortcut::GetClass() const */

long * GridItemGravestoneShortcut::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGravestoneShortcut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestoneShortcut::~GridItemGravestoneShortcut() */

void __thiscall
GridItemGravestoneShortcut::~GridItemGravestoneShortcut(GridItemGravestoneShortcut *this)

{
  *(undefined ***)this = &PTR_GetClass_06780ef0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestoneShortcut_067811b0;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemGravestoneShortcut::~GridItemGravestoneShortcut() */

void __thiscall
GridItemGravestoneShortcut::~GridItemGravestoneShortcut(GridItemGravestoneShortcut *this)

{
  ~GridItemGravestoneShortcut(this + -0x10);
  return;
}


/* GridItemGravestoneShortcut::~GridItemGravestoneShortcut() */

void __thiscall
GridItemGravestoneShortcut::~GridItemGravestoneShortcut(GridItemGravestoneShortcut *this)

{
  ~GridItemGravestoneShortcut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGravestoneShortcut::~GridItemGravestoneShortcut() */

void __thiscall
GridItemGravestoneShortcut::~GridItemGravestoneShortcut(GridItemGravestoneShortcut *this)

{
  ~GridItemGravestoneShortcut(this + -0x10);
  return;
}

