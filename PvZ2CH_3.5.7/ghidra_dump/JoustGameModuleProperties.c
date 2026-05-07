// Class: JoustGameModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustGameModuleProperties::StaticClassInit() */

void JoustGameModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustGameModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0387a8c4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustGameModuleProperties::StaticGetClass() */

long * JoustGameModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustGameModuleProperties::GetClass() const */

long * JoustGameModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustGameModuleProperties::GetModuleClass() const */

long * JoustGameModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (JoustGameModule::sClass != (long *)0x0) {
    return JoustGameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  JoustGameModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"JoustGameModule",uVar2,JoustGameModule::StaticNew);
  JoustGameModule::StaticClassInit();
  return JoustGameModule::sClass;
}


/* JoustGameModuleProperties::JoustGameModuleProperties() */

void __thiscall
JoustGameModuleProperties::JoustGameModuleProperties(JoustGameModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066adf60;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* JoustGameModuleProperties::StaticNew() */

JoustGameModuleProperties * JoustGameModuleProperties::StaticNew(void)

{
  JoustGameModuleProperties *this;
  
  this = ::operator_new(0x48);
  JoustGameModuleProperties(this);
  return this;
}


/* JoustGameModuleProperties::~JoustGameModuleProperties() */

void __thiscall
JoustGameModuleProperties::~JoustGameModuleProperties(JoustGameModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066adf60;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* JoustGameModuleProperties::~JoustGameModuleProperties() */

void __thiscall
JoustGameModuleProperties::~JoustGameModuleProperties(JoustGameModuleProperties *this)

{
  ~JoustGameModuleProperties(this);
  AK::FreeHook(this);
  return;
}

