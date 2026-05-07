// Class: VictoryOutroProperties


/* VictoryOutroProperties::VictoryOutroProperties() */

void __thiscall VictoryOutroProperties::VictoryOutroProperties(VictoryOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined ***)this = &PTR_GetClass_06856af0;
  *(undefined4 *)(this + 0x48) = 5;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined4 *)(this + 0x50) = 0x3e800000;
  *(undefined4 *)(this + 0x54) = 0x3dcccccd;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  *(undefined4 *)(this + 0x5c) = 0x42200000;
  *(undefined4 *)(this + 0x60) = 0x3e99999a;
  return;
}


/* VictoryOutroProperties::~VictoryOutroProperties() */

void __thiscall VictoryOutroProperties::~VictoryOutroProperties(VictoryOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06856af0;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* VictoryOutroProperties::~VictoryOutroProperties() */

void __thiscall VictoryOutroProperties::~VictoryOutroProperties(VictoryOutroProperties *this)

{
  ~VictoryOutroProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroProperties::StaticClassInit() */

void VictoryOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"VictoryOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044eee40,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VictoryOutroProperties::StaticGetClass() */

long * VictoryOutroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VictoryOutroProperties::GetClass() const */

long * VictoryOutroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"VictoryOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VictoryOutroProperties::GetModuleClass() const */

long * VictoryOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (VictoryOutroModule::sClass != (long *)0x0) {
    return VictoryOutroModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  VictoryOutroModule::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"VictoryOutroModule",uVar2,VictoryOutroModule::StaticNew);
  VictoryOutroModule::StaticClassInit();
  return VictoryOutroModule::sClass;
}


/* VictoryOutroProperties::StaticNew() */

VictoryOutroProperties * VictoryOutroProperties::StaticNew(void)

{
  VictoryOutroProperties *this;
  
  this = ::operator_new(0x68);
  VictoryOutroProperties(this);
  return this;
}

