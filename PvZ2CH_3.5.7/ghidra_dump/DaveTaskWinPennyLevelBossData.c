// Class: DaveTaskWinPennyLevelBossData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskWinPennyLevelBossData::StaticClassInit() */

void DaveTaskWinPennyLevelBossData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskWinPennyLevelBossData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a012ac,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskWinPennyLevelBossData::StaticGetClass() */

long * DaveTaskWinPennyLevelBossData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskWinPennyLevelBossData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskWinPennyLevelBossData::GetClass() const */

long * DaveTaskWinPennyLevelBossData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskWinPennyLevelBossData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskWinPennyLevelBossData::DaveTaskWinPennyLevelBossData() */

void __thiscall
DaveTaskWinPennyLevelBossData::DaveTaskWinPennyLevelBossData(DaveTaskWinPennyLevelBossData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9920;
  return;
}


/* DaveTaskWinPennyLevelBossData::StaticNew() */

DaveTaskWinPennyLevelBossData * DaveTaskWinPennyLevelBossData::StaticNew(void)

{
  DaveTaskWinPennyLevelBossData *this;
  
  this = ::operator_new(0x50);
  DaveTaskWinPennyLevelBossData(this);
  return this;
}


/* DaveTaskWinPennyLevelBossData::~DaveTaskWinPennyLevelBossData() */

void __thiscall
DaveTaskWinPennyLevelBossData::~DaveTaskWinPennyLevelBossData(DaveTaskWinPennyLevelBossData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9920;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskWinPennyLevelBossData::~DaveTaskWinPennyLevelBossData() */

void __thiscall
DaveTaskWinPennyLevelBossData::~DaveTaskWinPennyLevelBossData(DaveTaskWinPennyLevelBossData *this)

{
  ~DaveTaskWinPennyLevelBossData(this);
  AK::FreeHook(this);
  return;
}

