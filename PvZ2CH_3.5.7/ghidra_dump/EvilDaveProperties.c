// Class: EvilDaveProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EvilDaveProperties::StaticClassInit() */

void EvilDaveProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"EvilDaveProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ddc4c4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EvilDaveProperties::StaticGetClass() */

long * EvilDaveProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EvilDaveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EvilDaveProperties::GetClass() const */

long * EvilDaveProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"EvilDaveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EvilDaveProperties::GetModuleClass() const */

long * EvilDaveProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EvilDaveModule::sClass != (long *)0x0) {
    return EvilDaveModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EvilDaveModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"EvilDaveModule",uVar2,EvilDaveModule::StaticNew);
  EvilDaveModule::StaticClassInit();
  return EvilDaveModule::sClass;
}


/* EvilDaveProperties::EvilDaveProperties() */

void __thiscall EvilDaveProperties::EvilDaveProperties(EvilDaveProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0x40c00000;
  *(undefined ***)this = &PTR_GetClass_0677e1e0;
  return;
}


/* EvilDaveProperties::StaticNew() */

EvilDaveProperties * EvilDaveProperties::StaticNew(void)

{
  EvilDaveProperties *this;
  
  this = ::operator_new(0x48);
  EvilDaveProperties(this);
  return this;
}


/* EvilDaveProperties::~EvilDaveProperties() */

void __thiscall EvilDaveProperties::~EvilDaveProperties(EvilDaveProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0677e1e0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* EvilDaveProperties::~EvilDaveProperties() */

void __thiscall EvilDaveProperties::~EvilDaveProperties(EvilDaveProperties *this)

{
  ~EvilDaveProperties(this);
  AK::FreeHook(this);
  return;
}

