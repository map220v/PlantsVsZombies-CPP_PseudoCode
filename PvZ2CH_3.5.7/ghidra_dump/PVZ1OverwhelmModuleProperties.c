// Class: PVZ1OverwhelmModuleProperties


/* PVZ1OverwhelmModuleProperties::GetModuleClass() const */

long * PVZ1OverwhelmModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ1OverwhelmModule::sClass != (long *)0x0) {
    return PVZ1OverwhelmModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ1OverwhelmModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1OverwhelmModule",uVar2,PVZ1OverwhelmModule::StaticNew);
  PVZ1OverwhelmModule::StaticClassInit();
  return PVZ1OverwhelmModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1OverwhelmModuleProperties::StaticClassInit() */

void PVZ1OverwhelmModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1OverwhelmModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f6c918,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1OverwhelmModuleProperties::StaticGetClass() */

long * PVZ1OverwhelmModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1OverwhelmModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1OverwhelmModuleProperties::GetClass() const */

long * PVZ1OverwhelmModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1OverwhelmModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1OverwhelmModuleProperties::PVZ1OverwhelmModuleProperties() */

void __thiscall
PVZ1OverwhelmModuleProperties::PVZ1OverwhelmModuleProperties(PVZ1OverwhelmModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067a2140;
  return;
}


/* PVZ1OverwhelmModuleProperties::StaticNew() */

PVZ1OverwhelmModuleProperties * PVZ1OverwhelmModuleProperties::StaticNew(void)

{
  PVZ1OverwhelmModuleProperties *this;
  
  this = ::operator_new(0x40);
  PVZ1OverwhelmModuleProperties(this);
  return this;
}


/* PVZ1OverwhelmModuleProperties::~PVZ1OverwhelmModuleProperties() */

void __thiscall
PVZ1OverwhelmModuleProperties::~PVZ1OverwhelmModuleProperties(PVZ1OverwhelmModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067a2140;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PVZ1OverwhelmModuleProperties::~PVZ1OverwhelmModuleProperties() */

void __thiscall
PVZ1OverwhelmModuleProperties::~PVZ1OverwhelmModuleProperties(PVZ1OverwhelmModuleProperties *this)

{
  ~PVZ1OverwhelmModuleProperties(this);
  AK::FreeHook(this);
  return;
}

