// Class: LevelMutatorZombieCountdownFirstWaveSecsModule


/* LevelMutatorZombieCountdownFirstWaveSecsModule::StaticGetClass() */

long * LevelMutatorZombieCountdownFirstWaveSecsModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorZombieCountdownFirstWaveSecsModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorZombieCountdownFirstWaveSecsModule::LevelMutatorZombieCountdownFirstWaveSecsModule()
    */

void __thiscall
LevelMutatorZombieCountdownFirstWaveSecsModule::LevelMutatorZombieCountdownFirstWaveSecsModule
          (LevelMutatorZombieCountdownFirstWaveSecsModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667fe10;
  return;
}


/* LevelMutatorZombieCountdownFirstWaveSecsModule::StaticNew() */

LevelMutatorZombieCountdownFirstWaveSecsModule *
LevelMutatorZombieCountdownFirstWaveSecsModule::StaticNew(void)

{
  LevelMutatorZombieCountdownFirstWaveSecsModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorZombieCountdownFirstWaveSecsModule(this);
  return this;
}


/* LevelMutatorZombieCountdownFirstWaveSecsModule::~LevelMutatorZombieCountdownFirstWaveSecsModule()
    */

void __thiscall
LevelMutatorZombieCountdownFirstWaveSecsModule::~LevelMutatorZombieCountdownFirstWaveSecsModule
          (LevelMutatorZombieCountdownFirstWaveSecsModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667fe10;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorZombieCountdownFirstWaveSecsModule::~LevelMutatorZombieCountdownFirstWaveSecsModule()
    */

void __thiscall
LevelMutatorZombieCountdownFirstWaveSecsModule::~LevelMutatorZombieCountdownFirstWaveSecsModule
          (LevelMutatorZombieCountdownFirstWaveSecsModule *this)

{
  ~LevelMutatorZombieCountdownFirstWaveSecsModule(this);
  AK::FreeHook(this);
  return;
}

