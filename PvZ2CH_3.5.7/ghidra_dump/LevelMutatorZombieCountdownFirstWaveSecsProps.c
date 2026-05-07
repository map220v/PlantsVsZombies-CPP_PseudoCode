// Class: LevelMutatorZombieCountdownFirstWaveSecsProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorZombieCountdownFirstWaveSecsProps::StaticClassInit() */

void LevelMutatorZombieCountdownFirstWaveSecsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelMutatorZombieCountdownFirstWaveSecsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036a25a0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorZombieCountdownFirstWaveSecsProps::StaticGetClass() */

long * LevelMutatorZombieCountdownFirstWaveSecsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieCountdownFirstWaveSecsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorZombieCountdownFirstWaveSecsProps::GetClass() const */

long * LevelMutatorZombieCountdownFirstWaveSecsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorZombieCountdownFirstWaveSecsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelMutatorZombieCountdownFirstWaveSecsProps::GetModuleClass() const */

long * LevelMutatorZombieCountdownFirstWaveSecsProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelMutatorZombieCountdownFirstWaveSecsModule::sClass != (long *)0x0) {
    return LevelMutatorZombieCountdownFirstWaveSecsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelMutatorZombieCountdownFirstWaveSecsModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorZombieCountdownFirstWaveSecsModule",uVar2,
            LevelMutatorZombieCountdownFirstWaveSecsModule::StaticNew);
  return LevelMutatorZombieCountdownFirstWaveSecsModule::sClass;
}


/* LevelMutatorZombieCountdownFirstWaveSecsProps::LevelMutatorZombieCountdownFirstWaveSecsProps() */

void __thiscall
LevelMutatorZombieCountdownFirstWaveSecsProps::LevelMutatorZombieCountdownFirstWaveSecsProps
          (LevelMutatorZombieCountdownFirstWaveSecsProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0667fd60;
  return;
}


/* LevelMutatorZombieCountdownFirstWaveSecsProps::StaticNew() */

LevelMutatorZombieCountdownFirstWaveSecsProps *
LevelMutatorZombieCountdownFirstWaveSecsProps::StaticNew(void)

{
  LevelMutatorZombieCountdownFirstWaveSecsProps *this;
  
  this = ::operator_new(0x48);
  LevelMutatorZombieCountdownFirstWaveSecsProps(this);
  return this;
}


/* LevelMutatorZombieCountdownFirstWaveSecsProps::~LevelMutatorZombieCountdownFirstWaveSecsProps()
    */

void __thiscall
LevelMutatorZombieCountdownFirstWaveSecsProps::~LevelMutatorZombieCountdownFirstWaveSecsProps
          (LevelMutatorZombieCountdownFirstWaveSecsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667fd60;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelMutatorZombieCountdownFirstWaveSecsProps::~LevelMutatorZombieCountdownFirstWaveSecsProps()
    */

void __thiscall
LevelMutatorZombieCountdownFirstWaveSecsProps::~LevelMutatorZombieCountdownFirstWaveSecsProps
          (LevelMutatorZombieCountdownFirstWaveSecsProps *this)

{
  ~LevelMutatorZombieCountdownFirstWaveSecsProps(this);
  AK::FreeHook(this);
  return;
}

