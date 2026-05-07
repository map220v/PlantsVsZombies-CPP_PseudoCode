// Class: DaveTaskPassHardLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskPassHardLevelData::StaticClassInit() */

void DaveTaskPassHardLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskPassHardLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_039ff6a8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskPassHardLevelData::StaticGetClass() */

long * DaveTaskPassHardLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassHardLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassHardLevelData::GetClass() const */

long * DaveTaskPassHardLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskPassHardLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskPassHardLevelData::DaveTaskPassHardLevelData() */

void __thiscall
DaveTaskPassHardLevelData::DaveTaskPassHardLevelData(DaveTaskPassHardLevelData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9370;
  return;
}


/* DaveTaskPassHardLevelData::StaticNew() */

DaveTaskPassHardLevelData * DaveTaskPassHardLevelData::StaticNew(void)

{
  DaveTaskPassHardLevelData *this;
  
  this = ::operator_new(0x58);
  DaveTaskPassHardLevelData(this);
  return this;
}


/* DaveTaskPassHardLevelData::~DaveTaskPassHardLevelData() */

void __thiscall
DaveTaskPassHardLevelData::~DaveTaskPassHardLevelData(DaveTaskPassHardLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9370;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskPassHardLevelData::~DaveTaskPassHardLevelData() */

void __thiscall
DaveTaskPassHardLevelData::~DaveTaskPassHardLevelData(DaveTaskPassHardLevelData *this)

{
  ~DaveTaskPassHardLevelData(this);
  AK::FreeHook(this);
  return;
}

