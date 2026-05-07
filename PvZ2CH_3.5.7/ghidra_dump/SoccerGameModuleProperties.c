// Class: SoccerGameModuleProperties


/* SoccerGameModuleProperties::GetModuleClass() const */

long * SoccerGameModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SoccerGameModule::sClass != (long *)0x0) {
    return SoccerGameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SoccerGameModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerGameModule",uVar2,SoccerGameModule::StaticNew);
  SoccerGameModule::StaticClassInit();
  return SoccerGameModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameModuleProperties::StaticClassInit() */

void SoccerGameModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerGameModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03934228,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameModuleProperties::StaticGetClass() */

long * SoccerGameModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SoccerGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameModuleProperties::GetClass() const */

long * SoccerGameModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SoccerGameModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameModuleProperties::SoccerGameModuleProperties() */

void __thiscall
SoccerGameModuleProperties::SoccerGameModuleProperties(SoccerGameModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0x43340000;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR_GetClass_066caff0;
  *(undefined4 *)(this + 0x4c) = 0xc2a00000;
  return;
}


/* SoccerGameModuleProperties::StaticNew() */

SoccerGameModuleProperties * SoccerGameModuleProperties::StaticNew(void)

{
  SoccerGameModuleProperties *this;
  
  this = ::operator_new(0x50);
  SoccerGameModuleProperties(this);
  return this;
}


/* SoccerGameModuleProperties::~SoccerGameModuleProperties() */

void __thiscall
SoccerGameModuleProperties::~SoccerGameModuleProperties(SoccerGameModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066caff0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SoccerGameModuleProperties::~SoccerGameModuleProperties() */

void __thiscall
SoccerGameModuleProperties::~SoccerGameModuleProperties(SoccerGameModuleProperties *this)

{
  ~SoccerGameModuleProperties(this);
  AK::FreeHook(this);
  return;
}

