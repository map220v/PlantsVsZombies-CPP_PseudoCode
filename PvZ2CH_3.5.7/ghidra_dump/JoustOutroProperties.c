// Class: JoustOutroProperties


/* JoustOutroProperties::GetModuleClass() const */

long * JoustOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (JoustOutro::sClass != (long *)0x0) {
    return JoustOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  JoustOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"JoustOutro",uVar2,JoustOutro::StaticNew);
  JoustOutro::StaticClassInit();
  return JoustOutro::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustOutroProperties::StaticClassInit() */

void JoustOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03885c50,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustOutroProperties::StaticGetClass() */

long * JoustOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"JoustOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustOutroProperties::GetClass() const */

long * JoustOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"JoustOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustOutroProperties::JoustOutroProperties() */

void __thiscall JoustOutroProperties::JoustOutroProperties(JoustOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066aec50;
  return;
}


/* JoustOutroProperties::StaticNew() */

JoustOutroProperties * JoustOutroProperties::StaticNew(void)

{
  JoustOutroProperties *this;
  
  this = ::operator_new(0x40);
  JoustOutroProperties(this);
  return this;
}


/* JoustOutroProperties::~JoustOutroProperties() */

void __thiscall JoustOutroProperties::~JoustOutroProperties(JoustOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066aec50;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* JoustOutroProperties::~JoustOutroProperties() */

void __thiscall JoustOutroProperties::~JoustOutroProperties(JoustOutroProperties *this)

{
  ~JoustOutroProperties(this);
  AK::FreeHook(this);
  return;
}

