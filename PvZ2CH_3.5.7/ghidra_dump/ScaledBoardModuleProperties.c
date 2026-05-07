// Class: ScaledBoardModuleProperties


/* ScaledBoardModuleProperties::ScaledBoardModuleProperties() */

void __thiscall
ScaledBoardModuleProperties::ScaledBoardModuleProperties(ScaledBoardModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664dc40;
  return;
}


/* ScaledBoardModuleProperties::~ScaledBoardModuleProperties() */

void __thiscall
ScaledBoardModuleProperties::~ScaledBoardModuleProperties(ScaledBoardModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664dc40;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ScaledBoardModuleProperties::~ScaledBoardModuleProperties() */

void __thiscall
ScaledBoardModuleProperties::~ScaledBoardModuleProperties(ScaledBoardModuleProperties *this)

{
  ~ScaledBoardModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* ScaledBoardModuleProperties::GetModuleClass() const */

long * ScaledBoardModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ScaledBoardModule::sClass != (long *)0x0) {
    return ScaledBoardModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ScaledBoardModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ScaledBoardModule",uVar2,ScaledBoardModule::StaticNew);
  ScaledBoardModule::StaticClassInit();
  return ScaledBoardModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScaledBoardModuleProperties::StaticClassInit() */

void ScaledBoardModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ScaledBoardModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03517384,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ScaledBoardModuleProperties::StaticGetClass() */

long * ScaledBoardModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ScaledBoardModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ScaledBoardModuleProperties::GetClass() const */

long * ScaledBoardModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ScaledBoardModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ScaledBoardModuleProperties::StaticNew() */

ScaledBoardModuleProperties * ScaledBoardModuleProperties::StaticNew(void)

{
  ScaledBoardModuleProperties *this;
  
  this = ::operator_new(0x48);
  ScaledBoardModuleProperties(this);
  return this;
}

