// Class: SecurityGourdPointOfLossModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdPointOfLossModuleProperties::StaticClassInit() */

void SecurityGourdPointOfLossModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SecurityGourdPointOfLossModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0368b96c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecurityGourdPointOfLossModuleProperties::StaticGetClass() */

long * SecurityGourdPointOfLossModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SecurityGourdPointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SecurityGourdPointOfLossModuleProperties::GetClass() const */

long * SecurityGourdPointOfLossModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SecurityGourdPointOfLossModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SecurityGourdPointOfLossModuleProperties::GetModuleClass() const */

long * SecurityGourdPointOfLossModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SecurityGourdPointOfLossModule::sClass != (long *)0x0) {
    return SecurityGourdPointOfLossModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SecurityGourdPointOfLossModule::sClass = plVar1;
  uVar2 = PointOfLossModule::StaticGetClass();
  (*pcVar3)(plVar1,"SecurityGourdPointOfLossModule",uVar2,SecurityGourdPointOfLossModule::StaticNew)
  ;
  SecurityGourdPointOfLossModule::StaticClassInit();
  return SecurityGourdPointOfLossModule::sClass;
}


/* SecurityGourdPointOfLossModuleProperties::~SecurityGourdPointOfLossModuleProperties() */

void __thiscall
SecurityGourdPointOfLossModuleProperties::~SecurityGourdPointOfLossModuleProperties
          (SecurityGourdPointOfLossModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0667ca10;
  PointOfLossModuleProperties::~PointOfLossModuleProperties((PointOfLossModuleProperties *)this);
  return;
}


/* SecurityGourdPointOfLossModuleProperties::~SecurityGourdPointOfLossModuleProperties() */

void __thiscall
SecurityGourdPointOfLossModuleProperties::~SecurityGourdPointOfLossModuleProperties
          (SecurityGourdPointOfLossModuleProperties *this)

{
  ~SecurityGourdPointOfLossModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* SecurityGourdPointOfLossModuleProperties::SecurityGourdPointOfLossModuleProperties() */

void __thiscall
SecurityGourdPointOfLossModuleProperties::SecurityGourdPointOfLossModuleProperties
          (SecurityGourdPointOfLossModuleProperties *this)

{
  PointOfLossModuleProperties::PointOfLossModuleProperties((PointOfLossModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667ca10;
  return;
}


/* SecurityGourdPointOfLossModuleProperties::StaticNew() */

SecurityGourdPointOfLossModuleProperties * SecurityGourdPointOfLossModuleProperties::StaticNew(void)

{
  SecurityGourdPointOfLossModuleProperties *this;
  
  this = ::operator_new(0x60);
  SecurityGourdPointOfLossModuleProperties(this);
  return this;
}

