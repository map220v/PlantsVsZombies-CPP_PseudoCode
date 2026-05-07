// Class: DaveTaskAddPlantOnPennyLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskAddPlantOnPennyLevelData::StaticClassInit() */

void DaveTaskAddPlantOnPennyLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskAddPlantOnPennyLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a016d4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskAddPlantOnPennyLevelData::StaticGetClass() */

long * DaveTaskAddPlantOnPennyLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskAddPlantOnPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskAddPlantOnPennyLevelData::GetClass() const */

long * DaveTaskAddPlantOnPennyLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskAddPlantOnPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskAddPlantOnPennyLevelData::DaveTaskAddPlantOnPennyLevelData() */

void __thiscall
DaveTaskAddPlantOnPennyLevelData::DaveTaskAddPlantOnPennyLevelData
          (DaveTaskAddPlantOnPennyLevelData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9a00;
  return;
}


/* DaveTaskAddPlantOnPennyLevelData::StaticNew() */

DaveTaskAddPlantOnPennyLevelData * DaveTaskAddPlantOnPennyLevelData::StaticNew(void)

{
  DaveTaskAddPlantOnPennyLevelData *this;
  
  this = ::operator_new(0x50);
  DaveTaskAddPlantOnPennyLevelData(this);
  return this;
}


/* DaveTaskAddPlantOnPennyLevelData::~DaveTaskAddPlantOnPennyLevelData() */

void __thiscall
DaveTaskAddPlantOnPennyLevelData::~DaveTaskAddPlantOnPennyLevelData
          (DaveTaskAddPlantOnPennyLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9a00;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskAddPlantOnPennyLevelData::~DaveTaskAddPlantOnPennyLevelData() */

void __thiscall
DaveTaskAddPlantOnPennyLevelData::~DaveTaskAddPlantOnPennyLevelData
          (DaveTaskAddPlantOnPennyLevelData *this)

{
  ~DaveTaskAddPlantOnPennyLevelData(this);
  AK::FreeHook(this);
  return;
}

