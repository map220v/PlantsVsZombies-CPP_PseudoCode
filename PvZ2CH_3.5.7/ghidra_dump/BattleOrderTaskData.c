// Class: BattleOrderTaskData


/* BattleOrderTaskData::~BattleOrderTaskData() */

void __thiscall BattleOrderTaskData::~BattleOrderTaskData(BattleOrderTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670cd40;
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  GeneralTaskData::~GeneralTaskData((GeneralTaskData *)this);
  return;
}


/* BattleOrderTaskData::~BattleOrderTaskData() */

void __thiscall BattleOrderTaskData::~BattleOrderTaskData(BattleOrderTaskData *this)

{
  ~BattleOrderTaskData(this);
  AK::FreeHook(this);
  return;
}


/* BattleOrderTaskData::BattleOrderTaskData() */

void __thiscall BattleOrderTaskData::BattleOrderTaskData(BattleOrderTaskData *this)

{
  GeneralTaskData::GeneralTaskData((GeneralTaskData *)this);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR_GetClass_0670cd40;
  Set8BytesTo0(this + 0x58);
  Set8BytesTo0(this + 0x60);
  return;
}


/* BattleOrderTaskData::StaticNew() */

BattleOrderTaskData * BattleOrderTaskData::StaticNew(void)

{
  BattleOrderTaskData *this;
  
  this = ::operator_new(0x70);
  BattleOrderTaskData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderTaskData::StaticClassInit() */

void BattleOrderTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"BattleOrderTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a71ac4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderTaskData::StaticGetClass() */

long * BattleOrderTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattleOrderTaskData::GetClass() const */

long * BattleOrderTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

