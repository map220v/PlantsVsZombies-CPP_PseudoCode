// Class: DaveTaskPassEasyLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassEasyLevelData::StaticClassInit() */

void DaveTaskPassEasyLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassEasyLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_039ff414,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassEasyLevelData::StaticGetClass() */

long * DaveTaskPassEasyLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassEasyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassEasyLevelData::GetClass() const */

long * DaveTaskPassEasyLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassEasyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassEasyLevelData::DaveTaskPassEasyLevelData() */

void __thiscall
DaveTaskPassEasyLevelData::DaveTaskPassEasyLevelData(DaveTaskPassEasyLevelData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9300;
  return;
}


/* DaveTaskPassEasyLevelData::StaticNew() */

DaveTaskPassEasyLevelData * DaveTaskPassEasyLevelData::StaticNew(void)

{
  DaveTaskPassEasyLevelData *this;
  
  this = ::operator_new(0x58);
  DaveTaskPassEasyLevelData(this);
  return this;
}


/* DaveTaskPassEasyLevelData::~DaveTaskPassEasyLevelData() */

void __thiscall
DaveTaskPassEasyLevelData::~DaveTaskPassEasyLevelData(DaveTaskPassEasyLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9300;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPassEasyLevelData::~DaveTaskPassEasyLevelData() */

void __thiscall
DaveTaskPassEasyLevelData::~DaveTaskPassEasyLevelData(DaveTaskPassEasyLevelData *this)

{
  ~DaveTaskPassEasyLevelData(this);
  AK::FreeHook(this);
  return;
}

