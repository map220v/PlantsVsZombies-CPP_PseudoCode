// Class: SoccerWaveGeneratorModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerWaveGeneratorModule::StaticClassInit() */

void SoccerWaveGeneratorModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerWaveGeneratorModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03933920,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerWaveGeneratorModule::StaticGetClass() */

long * SoccerWaveGeneratorModule::StaticGetClass(void)

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
  uVar2 = WaveGeneratorModule::StaticGetClass();
  (*pcVar3)(plVar1,"SoccerWaveGeneratorModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerWaveGeneratorModule::SoccerWaveGeneratorModule() */

void __thiscall
SoccerWaveGeneratorModule::SoccerWaveGeneratorModule(SoccerWaveGeneratorModule *this)

{
  WaveGeneratorModule::WaveGeneratorModule((WaveGeneratorModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066ca990;
  return;
}


/* SoccerWaveGeneratorModule::StaticNew() */

SoccerWaveGeneratorModule * SoccerWaveGeneratorModule::StaticNew(void)

{
  SoccerWaveGeneratorModule *this;
  
  this = ::operator_new(0x20);
  SoccerWaveGeneratorModule(this);
  return this;
}


/* SoccerWaveGeneratorModule::~SoccerWaveGeneratorModule() */

void __thiscall
SoccerWaveGeneratorModule::~SoccerWaveGeneratorModule(SoccerWaveGeneratorModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066ca990;
  WaveGeneratorModule::~WaveGeneratorModule((WaveGeneratorModule *)this);
  return;
}


/* SoccerWaveGeneratorModule::~SoccerWaveGeneratorModule() */

void __thiscall
SoccerWaveGeneratorModule::~SoccerWaveGeneratorModule(SoccerWaveGeneratorModule *this)

{
  ~SoccerWaveGeneratorModule(this);
  AK::FreeHook(this);
  return;
}

