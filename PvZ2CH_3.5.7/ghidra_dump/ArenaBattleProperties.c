// Class: ArenaBattleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaBattleProperties::StaticClassInit() */

void ArenaBattleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArenaBattleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04b07368,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaBattleProperties::StaticGetClass() */

long * ArenaBattleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaBattleProperties::GetClass() const */

long * ArenaBattleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaBattleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArenaBattleProperties::GetModuleClass() const */

long * ArenaBattleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ArenaBattleModule::sClass != (long *)0x0) {
    return ArenaBattleModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ArenaBattleModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaBattleModule",uVar2,ArenaBattleModule::StaticNew);
  ArenaBattleModule::StaticClassInit();
  return ArenaBattleModule::sClass;
}


/* ArenaBattleProperties::ArenaBattleProperties() */

void __thiscall ArenaBattleProperties::ArenaBattleProperties(ArenaBattleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06953c50;
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  *(undefined4 *)(this + 0x68) = 9;
  *(undefined4 *)(this + 0x70) = 500;
  *(undefined4 *)(this + 0x40) = 0x40c00000;
  *(undefined4 *)(this + 0x44) = 0x40200000;
  *(undefined4 *)(this + 0x58) = 0x43b40000;
  *(undefined4 *)(this + 0x5c) = 0x41c80000;
  *(undefined4 *)(this + 100) = 0x3f000000;
  *(undefined4 *)(this + 0x60) = 0x42200000;
  *(undefined4 *)(this + 0x6c) = 0x41f00000;
  return;
}


/* ArenaBattleProperties::StaticNew() */

ArenaBattleProperties * ArenaBattleProperties::StaticNew(void)

{
  ArenaBattleProperties *this;
  
  this = ::operator_new(0x78);
  ArenaBattleProperties(this);
  return this;
}


/* ArenaBattleProperties::~ArenaBattleProperties() */

void __thiscall ArenaBattleProperties::~ArenaBattleProperties(ArenaBattleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06953c50;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ArenaBattleProperties::~ArenaBattleProperties() */

void __thiscall ArenaBattleProperties::~ArenaBattleProperties(ArenaBattleProperties *this)

{
  ~ArenaBattleProperties(this);
  AK::FreeHook(this);
  return;
}

