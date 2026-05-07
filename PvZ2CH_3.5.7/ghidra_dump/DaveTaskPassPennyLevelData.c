// Class: DaveTaskPassPennyLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassPennyLevelData::StaticClassInit() */

void DaveTaskPassPennyLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassPennyLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a00848,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassPennyLevelData::StaticGetClass() */

long * DaveTaskPassPennyLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassPennyLevelData::GetClass() const */

long * DaveTaskPassPennyLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassPennyLevelData::DaveTaskPassPennyLevelData() */

void __thiscall
DaveTaskPassPennyLevelData::DaveTaskPassPennyLevelData(DaveTaskPassPennyLevelData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f96f0;
  return;
}


/* DaveTaskPassPennyLevelData::StaticNew() */

DaveTaskPassPennyLevelData * DaveTaskPassPennyLevelData::StaticNew(void)

{
  DaveTaskPassPennyLevelData *this;
  
  this = ::operator_new(0x50);
  DaveTaskPassPennyLevelData(this);
  return this;
}


/* DaveTaskPassPennyLevelData::~DaveTaskPassPennyLevelData() */

void __thiscall
DaveTaskPassPennyLevelData::~DaveTaskPassPennyLevelData(DaveTaskPassPennyLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f96f0;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPassPennyLevelData::~DaveTaskPassPennyLevelData() */

void __thiscall
DaveTaskPassPennyLevelData::~DaveTaskPassPennyLevelData(DaveTaskPassPennyLevelData *this)

{
  ~DaveTaskPassPennyLevelData(this);
  AK::FreeHook(this);
  return;
}

