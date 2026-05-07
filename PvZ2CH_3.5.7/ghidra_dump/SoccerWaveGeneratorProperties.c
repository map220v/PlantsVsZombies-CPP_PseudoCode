// Class: SoccerWaveGeneratorProperties


/* SoccerWaveGeneratorProperties::GetModuleClass() const */

long * SoccerWaveGeneratorProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SoccerWaveGeneratorModule::sClass != (long *)0x0) {
    return SoccerWaveGeneratorModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SoccerWaveGeneratorModule::sClass = plVar1;
  uVar2 = WaveGeneratorModule::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerWaveGeneratorModule",uVar2,SoccerWaveGeneratorModule::StaticNew);
  SoccerWaveGeneratorModule::StaticClassInit();
  return SoccerWaveGeneratorModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerWaveGeneratorProperties::StaticClassInit() */

void SoccerWaveGeneratorProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerWaveGeneratorProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03933b34,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerWaveGeneratorProperties::StaticGetClass() */

long * SoccerWaveGeneratorProperties::StaticGetClass(void)

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
  uVar2 = WaveGeneratorProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerWaveGeneratorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerWaveGeneratorProperties::GetClass() const */

long * SoccerWaveGeneratorProperties::GetClass(void)

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
  uVar2 = WaveGeneratorProperties::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerWaveGeneratorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerWaveGeneratorProperties::SoccerWaveGeneratorProperties() */

void __thiscall
SoccerWaveGeneratorProperties::SoccerWaveGeneratorProperties(SoccerWaveGeneratorProperties *this)

{
  WaveGeneratorProperties::WaveGeneratorProperties((WaveGeneratorProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066caa50;
  return;
}


/* SoccerWaveGeneratorProperties::StaticNew() */

SoccerWaveGeneratorProperties * SoccerWaveGeneratorProperties::StaticNew(void)

{
  SoccerWaveGeneratorProperties *this;
  
  this = ::operator_new(0x90);
  SoccerWaveGeneratorProperties(this);
  return this;
}


/* SoccerWaveGeneratorProperties::~SoccerWaveGeneratorProperties() */

void __thiscall
SoccerWaveGeneratorProperties::~SoccerWaveGeneratorProperties(SoccerWaveGeneratorProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066caa50;
  WaveGeneratorProperties::~WaveGeneratorProperties((WaveGeneratorProperties *)this);
  return;
}


/* SoccerWaveGeneratorProperties::~SoccerWaveGeneratorProperties() */

void __thiscall
SoccerWaveGeneratorProperties::~SoccerWaveGeneratorProperties(SoccerWaveGeneratorProperties *this)

{
  ~SoccerWaveGeneratorProperties(this);
  AK::FreeHook(this);
  return;
}

