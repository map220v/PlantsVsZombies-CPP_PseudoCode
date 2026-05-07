// Class: VaseBreakerVictoryOutroProperties


/* VaseBreakerVictoryOutroProperties::GetModuleClass() const */

long * VaseBreakerVictoryOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (VaseBreakerVictoryOutroModule::sClass != (long *)0x0) {
    return VaseBreakerVictoryOutroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  VaseBreakerVictoryOutroModule::sClass = plVar1;
  uVar2 = VictoryOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerVictoryOutroModule",uVar2,VaseBreakerVictoryOutroModule::StaticNew);
  VaseBreakerVictoryOutroModule::StaticClassInit();
  return VaseBreakerVictoryOutroModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerVictoryOutroProperties::StaticClassInit() */

void VaseBreakerVictoryOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerVictoryOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04980aec,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerVictoryOutroProperties::StaticGetClass() */

long * VaseBreakerVictoryOutroProperties::StaticGetClass(void)

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
  uVar2 = VictoryOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerVictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerVictoryOutroProperties::GetClass() const */

long * VaseBreakerVictoryOutroProperties::GetClass(void)

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
  uVar2 = VictoryOutroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerVictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerVictoryOutroProperties::VaseBreakerVictoryOutroProperties() */

void __thiscall
VaseBreakerVictoryOutroProperties::VaseBreakerVictoryOutroProperties
          (VaseBreakerVictoryOutroProperties *this)

{
  VictoryOutroProperties::VictoryOutroProperties((VictoryOutroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06918b20;
  return;
}


/* VaseBreakerVictoryOutroProperties::StaticNew() */

VaseBreakerVictoryOutroProperties * VaseBreakerVictoryOutroProperties::StaticNew(void)

{
  VaseBreakerVictoryOutroProperties *this;
  
  this = ::operator_new(0x68);
  VaseBreakerVictoryOutroProperties(this);
  return this;
}


/* VaseBreakerVictoryOutroProperties::~VaseBreakerVictoryOutroProperties() */

void __thiscall
VaseBreakerVictoryOutroProperties::~VaseBreakerVictoryOutroProperties
          (VaseBreakerVictoryOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06918b20;
  VictoryOutroProperties::~VictoryOutroProperties((VictoryOutroProperties *)this);
  return;
}


/* VaseBreakerVictoryOutroProperties::~VaseBreakerVictoryOutroProperties() */

void __thiscall
VaseBreakerVictoryOutroProperties::~VaseBreakerVictoryOutroProperties
          (VaseBreakerVictoryOutroProperties *this)

{
  ~VaseBreakerVictoryOutroProperties(this);
  AK::FreeHook(this);
  return;
}

