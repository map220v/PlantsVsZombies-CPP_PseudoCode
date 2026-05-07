// Class: WhackAMoleWaveGeneratorModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleWaveGeneratorModule::StaticClassInit() */

void WhackAMoleWaveGeneratorModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleWaveGeneratorModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03b55c40,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleWaveGeneratorModule::StaticGetClass() */

long * WhackAMoleWaveGeneratorModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleWaveGeneratorModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleWaveGeneratorModule::GetClass() const */

long * WhackAMoleWaveGeneratorModule::GetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleWaveGeneratorModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleWaveGeneratorModule::WhackAMoleWaveGeneratorModule() */

void __thiscall
WhackAMoleWaveGeneratorModule::WhackAMoleWaveGeneratorModule(WhackAMoleWaveGeneratorModule *this)

{
  WaveGeneratorModule::WaveGeneratorModule((WaveGeneratorModule *)this);
  *(undefined ***)this = &PTR_GetClass_06733160;
  return;
}


/* WhackAMoleWaveGeneratorModule::StaticNew() */

WhackAMoleWaveGeneratorModule * WhackAMoleWaveGeneratorModule::StaticNew(void)

{
  WhackAMoleWaveGeneratorModule *this;
  
  this = ::operator_new(0x20);
  WhackAMoleWaveGeneratorModule(this);
  return this;
}


/* WhackAMoleWaveGeneratorModule::~WhackAMoleWaveGeneratorModule() */

void __thiscall
WhackAMoleWaveGeneratorModule::~WhackAMoleWaveGeneratorModule(WhackAMoleWaveGeneratorModule *this)

{
  *(undefined ***)this = &PTR_GetClass_06733160;
  WaveGeneratorModule::~WaveGeneratorModule((WaveGeneratorModule *)this);
  return;
}


/* WhackAMoleWaveGeneratorModule::~WhackAMoleWaveGeneratorModule() */

void __thiscall
WhackAMoleWaveGeneratorModule::~WhackAMoleWaveGeneratorModule(WhackAMoleWaveGeneratorModule *this)

{
  ~WhackAMoleWaveGeneratorModule(this);
  AK::FreeHook(this);
  return;
}

