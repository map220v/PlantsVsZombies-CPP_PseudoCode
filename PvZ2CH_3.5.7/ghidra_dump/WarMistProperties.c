// Class: WarMistProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistProperties::StaticClassInit() */

void WarMistProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WarMistProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e37d38,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WarMistProperties::StaticGetClass() */

long * WarMistProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WarMistProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WarMistProperties::GetClass() const */

long * WarMistProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"WarMistProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WarMistProperties::GetModuleClass() const */

long * WarMistProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WarMistModule::sClass != (long *)0x0) {
    return WarMistModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WarMistModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WarMistModule",uVar2,WarMistModule::StaticNew);
  WarMistModule::StaticClassInit();
  return WarMistModule::sClass;
}


/* WarMistProperties::WarMistProperties() */

void __thiscall WarMistProperties::WarMistProperties(WarMistProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR_GetClass_0678a540;
  *(undefined4 *)(this + 0x40) = 0x41200000;
  *(undefined4 *)(this + 0x44) = 0x41200000;
  return;
}


/* WarMistProperties::StaticNew() */

WarMistProperties * WarMistProperties::StaticNew(void)

{
  WarMistProperties *this;
  
  this = ::operator_new(0x50);
  WarMistProperties(this);
  return this;
}


/* WarMistProperties::~WarMistProperties() */

void __thiscall WarMistProperties::~WarMistProperties(WarMistProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678a540;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* WarMistProperties::~WarMistProperties() */

void __thiscall WarMistProperties::~WarMistProperties(WarMistProperties *this)

{
  ~WarMistProperties(this);
  AK::FreeHook(this);
  return;
}

