// Class: DaveTaskPassLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassLevelData::StaticClassInit() */

void DaveTaskPassLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_039fe288,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassLevelData::StaticGetClass() */

long * DaveTaskPassLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassLevelData::GetClass() const */

long * DaveTaskPassLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassLevelData::DaveTaskPassLevelData() */

void __thiscall DaveTaskPassLevelData::DaveTaskPassLevelData(DaveTaskPassLevelData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f8ff0;
  return;
}


/* DaveTaskPassLevelData::StaticNew() */

DaveTaskPassLevelData * DaveTaskPassLevelData::StaticNew(void)

{
  DaveTaskPassLevelData *this;
  
  this = ::operator_new(0x58);
  DaveTaskPassLevelData(this);
  return this;
}


/* DaveTaskPassLevelData::~DaveTaskPassLevelData() */

void __thiscall DaveTaskPassLevelData::~DaveTaskPassLevelData(DaveTaskPassLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f8ff0;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPassLevelData::~DaveTaskPassLevelData() */

void __thiscall DaveTaskPassLevelData::~DaveTaskPassLevelData(DaveTaskPassLevelData *this)

{
  ~DaveTaskPassLevelData(this);
  AK::FreeHook(this);
  return;
}

