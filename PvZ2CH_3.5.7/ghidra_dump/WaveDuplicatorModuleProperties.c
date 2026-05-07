// Class: WaveDuplicatorModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveDuplicatorModuleProperties::StaticClassInit() */

void WaveDuplicatorModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveDuplicatorModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036eb4a0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveDuplicatorModuleProperties::StaticGetClass() */

long * WaveDuplicatorModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveDuplicatorModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveDuplicatorModuleProperties::GetClass() const */

long * WaveDuplicatorModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveDuplicatorModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveDuplicatorModuleProperties::GetModuleClass() const */

long * WaveDuplicatorModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveDuplicatorModule::sClass != (long *)0x0) {
    return WaveDuplicatorModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveDuplicatorModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WaveDuplicatorModule",uVar2,WaveDuplicatorModule::StaticNew);
  WaveDuplicatorModule::StaticClassInit();
  return WaveDuplicatorModule::sClass;
}


/* WaveDuplicatorModuleProperties::WaveDuplicatorModuleProperties() */

void __thiscall
WaveDuplicatorModuleProperties::WaveDuplicatorModuleProperties(WaveDuplicatorModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 2;
  *(undefined4 *)(this + 0x44) = 5;
  *(undefined ***)this = &PTR_GetClass_06686320;
  return;
}


/* WaveDuplicatorModuleProperties::StaticNew() */

WaveDuplicatorModuleProperties * WaveDuplicatorModuleProperties::StaticNew(void)

{
  WaveDuplicatorModuleProperties *this;
  
  this = ::operator_new(0x48);
  WaveDuplicatorModuleProperties(this);
  return this;
}


/* WaveDuplicatorModuleProperties::~WaveDuplicatorModuleProperties() */

void __thiscall
WaveDuplicatorModuleProperties::~WaveDuplicatorModuleProperties
          (WaveDuplicatorModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06686320;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* WaveDuplicatorModuleProperties::~WaveDuplicatorModuleProperties() */

void __thiscall
WaveDuplicatorModuleProperties::~WaveDuplicatorModuleProperties
          (WaveDuplicatorModuleProperties *this)

{
  ~WaveDuplicatorModuleProperties(this);
  AK::FreeHook(this);
  return;
}

