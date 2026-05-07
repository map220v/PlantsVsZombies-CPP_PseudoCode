// Class: WhackAMoleWaveGeneratorProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleWaveGeneratorProperties::StaticClassInit() */

void WhackAMoleWaveGeneratorProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleWaveGeneratorProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03b55e54,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleWaveGeneratorProperties::StaticGetClass() */

long * WhackAMoleWaveGeneratorProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleWaveGeneratorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleWaveGeneratorProperties::GetModuleClass() const */

long * WhackAMoleWaveGeneratorProperties::GetModuleClass(void)

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
  (*pcVar3)(plVar1,"WhackAMoleWaveGeneratorProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleWaveGeneratorProperties::WhackAMoleWaveGeneratorProperties() */

void __thiscall
WhackAMoleWaveGeneratorProperties::WhackAMoleWaveGeneratorProperties
          (WhackAMoleWaveGeneratorProperties *this)

{
  WaveGeneratorProperties::WaveGeneratorProperties((WaveGeneratorProperties *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06733220;
  return;
}


/* WhackAMoleWaveGeneratorProperties::StaticNew() */

WhackAMoleWaveGeneratorProperties * WhackAMoleWaveGeneratorProperties::StaticNew(void)

{
  WhackAMoleWaveGeneratorProperties *this;
  
  this = ::operator_new(0x90);
  WhackAMoleWaveGeneratorProperties(this);
  return this;
}


/* WhackAMoleWaveGeneratorProperties::~WhackAMoleWaveGeneratorProperties() */

void __thiscall
WhackAMoleWaveGeneratorProperties::~WhackAMoleWaveGeneratorProperties
          (WhackAMoleWaveGeneratorProperties *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06733220;
  WaveGeneratorProperties::~WaveGeneratorProperties((WaveGeneratorProperties *)this);
  return;
}


/* WhackAMoleWaveGeneratorProperties::~WhackAMoleWaveGeneratorProperties() */

void __thiscall
WhackAMoleWaveGeneratorProperties::~WhackAMoleWaveGeneratorProperties
          (WhackAMoleWaveGeneratorProperties *this)

{
  ~WhackAMoleWaveGeneratorProperties(this);
  AK::FreeHook(this);
  return;
}

