// Class: GridItemZombieGasSmoke


/* GridItemZombieGasSmoke::GridItemZombieGasSmoke() */

void __thiscall GridItemZombieGasSmoke::GridItemZombieGasSmoke(GridItemZombieGasSmoke *this)

{
  GridItemPlantConditionTarget::GridItemPlantConditionTarget((GridItemPlantConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_067268b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieGasSmoke_06726bb8;
  return;
}


/* GridItemZombieGasSmoke::StaticNew() */

GridItemZombieGasSmoke * GridItemZombieGasSmoke::StaticNew(void)

{
  GridItemZombieGasSmoke *this;
  
  this = ::operator_new(0x1f0);
  GridItemZombieGasSmoke(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieGasSmoke::StaticClassInit() */

void GridItemZombieGasSmoke::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieGasSmoke");
    (*pcVar2)(plVar1,asStack_10,FUN_03af7424,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieGasSmoke::StaticGetClass() */

long * GridItemZombieGasSmoke::StaticGetClass(void)

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
  uVar2 = GridItemPlantConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieGasSmoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieGasSmoke::GetClass() const */

long * GridItemZombieGasSmoke::GetClass(void)

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
  uVar2 = GridItemPlantConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieGasSmoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieGasSmoke::~GridItemZombieGasSmoke() */

void __thiscall GridItemZombieGasSmoke::~GridItemZombieGasSmoke(GridItemZombieGasSmoke *this)

{
  *(undefined ***)this = &PTR_GetClass_067268b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieGasSmoke_06726bb8;
  GridItemPlantConditionTarget::~GridItemPlantConditionTarget((GridItemPlantConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemZombieGasSmoke::~GridItemZombieGasSmoke() */

void __thiscall GridItemZombieGasSmoke::~GridItemZombieGasSmoke(GridItemZombieGasSmoke *this)

{
  ~GridItemZombieGasSmoke(this + -0x10);
  return;
}


/* GridItemZombieGasSmoke::~GridItemZombieGasSmoke() */

void __thiscall GridItemZombieGasSmoke::~GridItemZombieGasSmoke(GridItemZombieGasSmoke *this)

{
  ~GridItemZombieGasSmoke(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieGasSmoke::~GridItemZombieGasSmoke() */

void __thiscall GridItemZombieGasSmoke::~GridItemZombieGasSmoke(GridItemZombieGasSmoke *this)

{
  ~GridItemZombieGasSmoke(this + -0x10);
  return;
}

