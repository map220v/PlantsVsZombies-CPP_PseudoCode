// Class: SpawnWhackAZombiesProps


/* SpawnWhackAZombiesProps::GetActionClass() const */

long * SpawnWhackAZombiesProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnWhackAZombiesAction::sClass != (long *)0x0) {
    return SpawnWhackAZombiesAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnWhackAZombiesAction::sClass = plVar1;
  uVar2 = SpawnZombiesDelayedFromGridItemsWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnWhackAZombiesAction",uVar2,SpawnWhackAZombiesAction::StaticNew);
  SpawnWhackAZombiesAction::StaticClassInit();
  return SpawnWhackAZombiesAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnWhackAZombiesProps::StaticClassInit() */

void SpawnWhackAZombiesProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnWhackAZombiesProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0dd30,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnWhackAZombiesProps::StaticGetClass() */

long * SpawnWhackAZombiesProps::StaticGetClass(void)

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
  uVar2 = SpawnZombiesDelayedFromGridItemsProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnWhackAZombiesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnWhackAZombiesProps::GetClass() const */

long * SpawnWhackAZombiesProps::GetClass(void)

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
  uVar2 = SpawnZombiesDelayedFromGridItemsProps::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnWhackAZombiesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnWhackAZombiesProps::SpawnWhackAZombiesProps() */

void __thiscall SpawnWhackAZombiesProps::SpawnWhackAZombiesProps(SpawnWhackAZombiesProps *this)

{
  SpawnZombiesDelayedFromGridItemsProps::SpawnZombiesDelayedFromGridItemsProps
            ((SpawnZombiesDelayedFromGridItemsProps *)this);
  *(undefined ***)this = &PTR_GetClass_0692e150;
  return;
}


/* SpawnWhackAZombiesProps::StaticNew() */

SpawnWhackAZombiesProps * SpawnWhackAZombiesProps::StaticNew(void)

{
  SpawnWhackAZombiesProps *this;
  
  this = ::operator_new(0xd0);
  SpawnWhackAZombiesProps(this);
  return this;
}


/* SpawnWhackAZombiesProps::~SpawnWhackAZombiesProps() */

void __thiscall SpawnWhackAZombiesProps::~SpawnWhackAZombiesProps(SpawnWhackAZombiesProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0692e150;
  SpawnZombiesDelayedFromGridItemsProps::~SpawnZombiesDelayedFromGridItemsProps
            ((SpawnZombiesDelayedFromGridItemsProps *)this);
  return;
}


/* SpawnWhackAZombiesProps::~SpawnWhackAZombiesProps() */

void __thiscall SpawnWhackAZombiesProps::~SpawnWhackAZombiesProps(SpawnWhackAZombiesProps *this)

{
  ~SpawnWhackAZombiesProps(this);
  AK::FreeHook(this);
  return;
}

