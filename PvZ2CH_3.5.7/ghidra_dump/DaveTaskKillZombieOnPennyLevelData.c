// Class: DaveTaskKillZombieOnPennyLevelData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskKillZombieOnPennyLevelData::StaticClassInit() */

void DaveTaskKillZombieOnPennyLevelData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskKillZombieOnPennyLevelData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a00a5c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskKillZombieOnPennyLevelData::StaticGetClass() */

long * DaveTaskKillZombieOnPennyLevelData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskKillZombieOnPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskKillZombieOnPennyLevelData::GetClass() const */

long * DaveTaskKillZombieOnPennyLevelData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskKillZombieOnPennyLevelData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskKillZombieOnPennyLevelData::DaveTaskKillZombieOnPennyLevelData() */

void __thiscall
DaveTaskKillZombieOnPennyLevelData::DaveTaskKillZombieOnPennyLevelData
          (DaveTaskKillZombieOnPennyLevelData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9760;
  return;
}


/* DaveTaskKillZombieOnPennyLevelData::StaticNew() */

DaveTaskKillZombieOnPennyLevelData * DaveTaskKillZombieOnPennyLevelData::StaticNew(void)

{
  DaveTaskKillZombieOnPennyLevelData *this;
  
  this = ::operator_new(0x50);
  DaveTaskKillZombieOnPennyLevelData(this);
  return this;
}


/* DaveTaskKillZombieOnPennyLevelData::~DaveTaskKillZombieOnPennyLevelData() */

void __thiscall
DaveTaskKillZombieOnPennyLevelData::~DaveTaskKillZombieOnPennyLevelData
          (DaveTaskKillZombieOnPennyLevelData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9760;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskKillZombieOnPennyLevelData::~DaveTaskKillZombieOnPennyLevelData() */

void __thiscall
DaveTaskKillZombieOnPennyLevelData::~DaveTaskKillZombieOnPennyLevelData
          (DaveTaskKillZombieOnPennyLevelData *this)

{
  ~DaveTaskKillZombieOnPennyLevelData(this);
  AK::FreeHook(this);
  return;
}

