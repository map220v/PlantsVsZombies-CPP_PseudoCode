// Class: DaveTaskBattleZData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskBattleZData::StaticClassInit() */

void DaveTaskBattleZData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskBattleZData");
    (*pcVar2)(plVar1,asStack_10,FUN_039ffb50,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskBattleZData::StaticGetClass() */

long * DaveTaskBattleZData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskBattleZData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskBattleZData::GetClass() const */

long * DaveTaskBattleZData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskBattleZData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskBattleZData::DaveTaskBattleZData() */

void __thiscall DaveTaskBattleZData::DaveTaskBattleZData(DaveTaskBattleZData *this)

{
  DaveTaskData::DaveTaskData((DaveTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_066f9450;
  return;
}


/* DaveTaskBattleZData::StaticNew() */

DaveTaskBattleZData * DaveTaskBattleZData::StaticNew(void)

{
  DaveTaskBattleZData *this;
  
  this = ::operator_new(0x58);
  DaveTaskBattleZData(this);
  return this;
}


/* DaveTaskBattleZData::~DaveTaskBattleZData() */

void __thiscall DaveTaskBattleZData::~DaveTaskBattleZData(DaveTaskBattleZData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f9450;
  DaveTaskData::~DaveTaskData((DaveTaskData *)this);
  return;
}


/* DaveTaskBattleZData::~DaveTaskBattleZData() */

void __thiscall DaveTaskBattleZData::~DaveTaskBattleZData(DaveTaskBattleZData *this)

{
  ~DaveTaskBattleZData(this);
  AK::FreeHook(this);
  return;
}

