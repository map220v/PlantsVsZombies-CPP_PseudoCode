// Class: PvZ1AchievementData


/* PvZ1AchievementData::~PvZ1AchievementData() */

void __thiscall PvZ1AchievementData::~PvZ1AchievementData(PvZ1AchievementData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670cad0;
  std::string::~string((string *)(this + 0x68));
  std::string::~string((string *)(this + 0x60));
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* PvZ1AchievementData::~PvZ1AchievementData() */

void __thiscall PvZ1AchievementData::~PvZ1AchievementData(PvZ1AchievementData *this)

{
  ~PvZ1AchievementData(this);
  AK::FreeHook(this);
  return;
}


/* PvZ1AchievementData::PvZ1AchievementData() */

void __thiscall PvZ1AchievementData::PvZ1AchievementData(PvZ1AchievementData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)this = &PTR_GetClass_0670cad0;
  *(undefined4 *)(this + 0x58) = 0;
  Set8BytesTo0(this + 0x60);
  Set8BytesTo0(this + 0x68);
  return;
}


/* PvZ1AchievementData::StaticNew() */

PvZ1AchievementData * PvZ1AchievementData::StaticNew(void)

{
  PvZ1AchievementData *this;
  
  this = ::operator_new(0x70);
  PvZ1AchievementData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvZ1AchievementData::StaticClassInit() */

void PvZ1AchievementData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvZ1AchievementData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a70da4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PvZ1AchievementData::StaticGetClass() */

long * PvZ1AchievementData::StaticGetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1AchievementData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PvZ1AchievementData::GetClass() const */

long * PvZ1AchievementData::GetClass(void)

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
  uVar2 = GeneralTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"PvZ1AchievementData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

