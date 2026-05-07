// Class: LawnBrainProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnBrainProperties::StaticClassInit() */

void LawnBrainProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LawnBrainProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e6acd0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnBrainProperties::StaticGetClass() */

long * LawnBrainProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LawnBrainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnBrainProperties::GetClass() const */

long * LawnBrainProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"LawnBrainProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LawnBrainProperties::GetModuleClass() const */

long * LawnBrainProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LawnBrainModule::sClass != (long *)0x0) {
    return LawnBrainModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LawnBrainModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LawnBrainModule",uVar2,LawnBrainModule::StaticNew);
  LawnBrainModule::StaticClassInit();
  return LawnBrainModule::sClass;
}


/* LawnBrainProperties::LawnBrainProperties() */

void __thiscall LawnBrainProperties::LawnBrainProperties(LawnBrainProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678d280;
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  *(undefined4 *)(this + 0x40) = 0x40200000;
  return;
}


/* LawnBrainProperties::StaticNew() */

LawnBrainProperties * LawnBrainProperties::StaticNew(void)

{
  LawnBrainProperties *this;
  
  this = ::operator_new(0x58);
  LawnBrainProperties(this);
  return this;
}


/* LawnBrainProperties::~LawnBrainProperties() */

void __thiscall LawnBrainProperties::~LawnBrainProperties(LawnBrainProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d280;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LawnBrainProperties::~LawnBrainProperties() */

void __thiscall LawnBrainProperties::~LawnBrainProperties(LawnBrainProperties *this)

{
  ~LawnBrainProperties(this);
  AK::FreeHook(this);
  return;
}

