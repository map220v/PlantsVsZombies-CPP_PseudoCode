// Class: JoustPointOfLossModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPointOfLossModuleProperties::StaticClassInit() */

void JoustPointOfLossModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustPointOfLossModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03887f70,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustPointOfLossModuleProperties::StaticGetClass() */

long * JoustPointOfLossModuleProperties::StaticGetClass(void)

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
  uVar2 = PointOfLossModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"JoustPointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustPointOfLossModuleProperties::GetClass() const */

long * JoustPointOfLossModuleProperties::GetClass(void)

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
  uVar2 = PointOfLossModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"JoustPointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustPointOfLossModuleProperties::GetModuleClass() const */

long * JoustPointOfLossModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (JoustPointOfLossModule::sClass != (long *)0x0) {
    return JoustPointOfLossModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  JoustPointOfLossModule::sClass = plVar1;
  uVar2 = PointOfLossModule::StaticGetClass();
  (*pcVar3)(plVar1,"JoustPointOfLossModule",uVar2,JoustPointOfLossModule::StaticNew);
  JoustPointOfLossModule::StaticClassInit();
  return JoustPointOfLossModule::sClass;
}


/* JoustPointOfLossModuleProperties::~JoustPointOfLossModuleProperties() */

void __thiscall
JoustPointOfLossModuleProperties::~JoustPointOfLossModuleProperties
          (JoustPointOfLossModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066aed00;
  PointOfLossModuleProperties::~PointOfLossModuleProperties((PointOfLossModuleProperties *)this);
  return;
}


/* JoustPointOfLossModuleProperties::~JoustPointOfLossModuleProperties() */

void __thiscall
JoustPointOfLossModuleProperties::~JoustPointOfLossModuleProperties
          (JoustPointOfLossModuleProperties *this)

{
  ~JoustPointOfLossModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* JoustPointOfLossModuleProperties::JoustPointOfLossModuleProperties() */

void __thiscall
JoustPointOfLossModuleProperties::JoustPointOfLossModuleProperties
          (JoustPointOfLossModuleProperties *this)

{
  PointOfLossModuleProperties::PointOfLossModuleProperties((PointOfLossModuleProperties *)this);
  *(undefined4 *)(this + 0x5c) = 0x41f00000;
  *(undefined ***)this = &PTR_GetClass_066aed00;
  *(undefined4 *)(this + 0x60) = 0x41200000;
  return;
}


/* JoustPointOfLossModuleProperties::StaticNew() */

JoustPointOfLossModuleProperties * JoustPointOfLossModuleProperties::StaticNew(void)

{
  JoustPointOfLossModuleProperties *this;
  
  this = ::operator_new(0x68);
  JoustPointOfLossModuleProperties(this);
  return this;
}

