// Class: VaseBreakerFlowModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModuleProperties::StaticClassInit() */

void VaseBreakerFlowModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0497cb24,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowModuleProperties::StaticGetClass() */

long * VaseBreakerFlowModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowModuleProperties::GetClass() const */

long * VaseBreakerFlowModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowModuleProperties::GetModuleClass() const */

long * VaseBreakerFlowModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (VaseBreakerFlowModule::sClass != (long *)0x0) {
    return VaseBreakerFlowModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  VaseBreakerFlowModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowModule",uVar2,VaseBreakerFlowModule::StaticNew);
  VaseBreakerFlowModule::StaticClassInit();
  return VaseBreakerFlowModule::sClass;
}


/* VaseBreakerFlowModuleProperties::VaseBreakerFlowModuleProperties() */

void __thiscall
VaseBreakerFlowModuleProperties::VaseBreakerFlowModuleProperties
          (VaseBreakerFlowModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06918330;
  return;
}


/* VaseBreakerFlowModuleProperties::StaticNew() */

VaseBreakerFlowModuleProperties * VaseBreakerFlowModuleProperties::StaticNew(void)

{
  VaseBreakerFlowModuleProperties *this;
  
  this = ::operator_new(0x40);
  VaseBreakerFlowModuleProperties(this);
  return this;
}


/* VaseBreakerFlowModuleProperties::~VaseBreakerFlowModuleProperties() */

void __thiscall
VaseBreakerFlowModuleProperties::~VaseBreakerFlowModuleProperties
          (VaseBreakerFlowModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06918330;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* VaseBreakerFlowModuleProperties::~VaseBreakerFlowModuleProperties() */

void __thiscall
VaseBreakerFlowModuleProperties::~VaseBreakerFlowModuleProperties
          (VaseBreakerFlowModuleProperties *this)

{
  ~VaseBreakerFlowModuleProperties(this);
  AK::FreeHook(this);
  return;
}

