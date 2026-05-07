// Class: DaveTaskPlantAdventureData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPlantAdventureData::StaticClassInit() */

void DaveTaskPlantAdventureData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPlantAdventureData");
    (*pcVar2)(plVar1,asStack_10,FUN_039fef6c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPlantAdventureData::StaticGetClass() */

long * DaveTaskPlantAdventureData::StaticGetClass(void)

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
  uVar2 = DaveTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskPlantAdventureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPlantAdventureData::GetClass() const */

long * DaveTaskPlantAdventureData::GetClass(void)

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
  uVar2 = DaveTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTaskPlantAdventureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPlantAdventureData::DaveTaskPlantAdventureData() */

void __thiscall
DaveTaskPlantAdventureData::DaveTaskPlantAdventureData(DaveTaskPlantAdventureData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9220;
  return;
}


/* DaveTaskPlantAdventureData::StaticNew() */

DaveTaskPlantAdventureData * DaveTaskPlantAdventureData::StaticNew(void)

{
  DaveTaskPlantAdventureData *this;
  
  this = ::operator_new(0x50);
  DaveTaskPlantAdventureData(this);
  return this;
}


/* DaveTaskPlantAdventureData::~DaveTaskPlantAdventureData() */

void __thiscall
DaveTaskPlantAdventureData::~DaveTaskPlantAdventureData(DaveTaskPlantAdventureData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9220;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPlantAdventureData::~DaveTaskPlantAdventureData() */

void __thiscall
DaveTaskPlantAdventureData::~DaveTaskPlantAdventureData(DaveTaskPlantAdventureData *this)

{
  ~DaveTaskPlantAdventureData(this);
  AK::FreeHook(this);
  return;
}

