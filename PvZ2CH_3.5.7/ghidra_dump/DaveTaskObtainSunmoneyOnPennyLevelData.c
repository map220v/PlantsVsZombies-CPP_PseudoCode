// Class: DaveTaskObtainSunmoneyOnPennyLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskObtainSunmoneyOnPennyLevelData::StaticClassInit() */

void DaveTaskObtainSunmoneyOnPennyLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskObtainSunmoneyOnPennyLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a014c0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskObtainSunmoneyOnPennyLevelData::StaticGetClass() */

long * DaveTaskObtainSunmoneyOnPennyLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskObtainSunmoneyOnPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskObtainSunmoneyOnPennyLevelData::GetClass() const */

long * DaveTaskObtainSunmoneyOnPennyLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskObtainSunmoneyOnPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskObtainSunmoneyOnPennyLevelData::DaveTaskObtainSunmoneyOnPennyLevelData() */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevelData::DaveTaskObtainSunmoneyOnPennyLevelData
          (DaveTaskObtainSunmoneyOnPennyLevelData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9990;
  return;
}


/* DaveTaskObtainSunmoneyOnPennyLevelData::StaticNew() */

DaveTaskObtainSunmoneyOnPennyLevelData * DaveTaskObtainSunmoneyOnPennyLevelData::StaticNew(void)

{
  DaveTaskObtainSunmoneyOnPennyLevelData *this;
  
  this = ::operator_new(0x50);
  DaveTaskObtainSunmoneyOnPennyLevelData(this);
  return this;
}


/* DaveTaskObtainSunmoneyOnPennyLevelData::~DaveTaskObtainSunmoneyOnPennyLevelData() */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevelData::~DaveTaskObtainSunmoneyOnPennyLevelData
          (DaveTaskObtainSunmoneyOnPennyLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9990;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskObtainSunmoneyOnPennyLevelData::~DaveTaskObtainSunmoneyOnPennyLevelData() */

void __thiscall
DaveTaskObtainSunmoneyOnPennyLevelData::~DaveTaskObtainSunmoneyOnPennyLevelData
          (DaveTaskObtainSunmoneyOnPennyLevelData *this)

{
  ~DaveTaskObtainSunmoneyOnPennyLevelData(this);
  AK::FreeHook(this);
  return;
}

