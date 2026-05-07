// Class: PVZ1ModeOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutroProperties::StaticClassInit() */

void PVZ1ModeOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6b57c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeOutroProperties::StaticGetClass() */

long * PVZ1ModeOutroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeOutroProperties::GetClass() const */

long * PVZ1ModeOutroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeOutroProperties::GetModuleClass() const */

long * PVZ1ModeOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVZ1ModeOutro::sClass != (long *)0x0) {
    return PVZ1ModeOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVZ1ModeOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVZ1ModeOutro",uVar2,PVZ1ModeOutro::StaticNew);
  PVZ1ModeOutro::StaticClassInit();
  return PVZ1ModeOutro::sClass;
}


/* PVZ1ModeOutroProperties::PVZ1ModeOutroProperties() */

void __thiscall PVZ1ModeOutroProperties::PVZ1ModeOutroProperties(PVZ1ModeOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069915b0;
  return;
}


/* PVZ1ModeOutroProperties::StaticNew() */

PVZ1ModeOutroProperties * PVZ1ModeOutroProperties::StaticNew(void)

{
  PVZ1ModeOutroProperties *this;
  
  this = ::operator_new(0x40);
  PVZ1ModeOutroProperties(this);
  return this;
}


/* PVZ1ModeOutroProperties::~PVZ1ModeOutroProperties() */

void __thiscall PVZ1ModeOutroProperties::~PVZ1ModeOutroProperties(PVZ1ModeOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069915b0;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* PVZ1ModeOutroProperties::~PVZ1ModeOutroProperties() */

void __thiscall PVZ1ModeOutroProperties::~PVZ1ModeOutroProperties(PVZ1ModeOutroProperties *this)

{
  ~PVZ1ModeOutroProperties(this);
  AK::FreeHook(this);
  return;
}

