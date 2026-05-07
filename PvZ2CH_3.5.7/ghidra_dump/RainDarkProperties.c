// Class: RainDarkProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RainDarkProperties::StaticClassInit() */

void RainDarkProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RainDarkProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044a5b80,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RainDarkProperties::StaticGetClass() */

long * RainDarkProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RainDarkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RainDarkProperties::GetClass() const */

long * RainDarkProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RainDarkProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RainDarkProperties::GetModuleClass() const */

long * RainDarkProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RainDarkModule::sClass != (long *)0x0) {
    return RainDarkModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RainDarkModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RainDarkModule",uVar2,RainDarkModule::StaticNew);
  RainDarkModule::StaticClassInit();
  return RainDarkModule::sClass;
}


/* RainDarkProperties::RainDarkProperties() */

void __thiscall RainDarkProperties::RainDarkProperties(RainDarkProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  this[0x54] = (RainDarkProperties)0x1;
  this[0x55] = (RainDarkProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_068522a0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x5c) = 100;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0x3fc00000;
  return;
}


/* RainDarkProperties::StaticNew() */

RainDarkProperties * RainDarkProperties::StaticNew(void)

{
  RainDarkProperties *this;
  
  this = ::operator_new(0x60);
  RainDarkProperties(this);
  return this;
}


/* RainDarkProperties::~RainDarkProperties() */

void __thiscall RainDarkProperties::~RainDarkProperties(RainDarkProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068522a0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RainDarkProperties::~RainDarkProperties() */

void __thiscall RainDarkProperties::~RainDarkProperties(RainDarkProperties *this)

{
  ~RainDarkProperties(this);
  AK::FreeHook(this);
  return;
}

