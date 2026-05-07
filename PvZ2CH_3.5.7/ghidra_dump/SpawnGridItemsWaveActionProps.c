// Class: SpawnGridItemsWaveActionProps


/* SpawnGridItemsWaveActionProps::GetActionClass() const */

long * SpawnGridItemsWaveActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SpawnGridItemsWaveAction::sClass != (long *)0x0) {
    return SpawnGridItemsWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SpawnGridItemsWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnGridItemsWaveAction",uVar2,SpawnGridItemsWaveAction::StaticNew);
  SpawnGridItemsWaveAction::StaticClassInit();
  return SpawnGridItemsWaveAction::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnGridItemsWaveActionProps::StaticClassInit() */

void SpawnGridItemsWaveActionProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemPoolEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_049358a8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpawnGridItemsWaveActionProps");
    (*pcVar3)(plVar2,asStack_10,FUN_049344c8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnGridItemsWaveActionProps::StaticGetClass() */

long * SpawnGridItemsWaveActionProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnGridItemsWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnGridItemsWaveActionProps::GetClass() const */

long * SpawnGridItemsWaveActionProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnGridItemsWaveActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnGridItemsWaveActionProps::SpawnGridItemsWaveActionProps() */

void __thiscall
SpawnGridItemsWaveActionProps::SpawnGridItemsWaveActionProps(SpawnGridItemsWaveActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06911540;
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  this[0x51] = (SpawnGridItemsWaveActionProps)0x0;
  this[0x50] = (SpawnGridItemsWaveActionProps)0x1;
  return;
}


/* SpawnGridItemsWaveActionProps::StaticNew() */

SpawnGridItemsWaveActionProps * SpawnGridItemsWaveActionProps::StaticNew(void)

{
  SpawnGridItemsWaveActionProps *this;
  
  this = ::operator_new(0x58);
  SpawnGridItemsWaveActionProps(this);
  return this;
}


/* SpawnGridItemsWaveActionProps::~SpawnGridItemsWaveActionProps() */

void __thiscall
SpawnGridItemsWaveActionProps::~SpawnGridItemsWaveActionProps(SpawnGridItemsWaveActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06911540;
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* SpawnGridItemsWaveActionProps::~SpawnGridItemsWaveActionProps() */

void __thiscall
SpawnGridItemsWaveActionProps::~SpawnGridItemsWaveActionProps(SpawnGridItemsWaveActionProps *this)

{
  ~SpawnGridItemsWaveActionProps(this);
  AK::FreeHook(this);
  return;
}

