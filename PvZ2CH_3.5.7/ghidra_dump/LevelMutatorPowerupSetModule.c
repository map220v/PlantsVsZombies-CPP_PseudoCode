// Class: LevelMutatorPowerupSetModule


/* LevelMutatorPowerupSetModule::StaticGetClass() */

long * LevelMutatorPowerupSetModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorPowerupSetModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorPowerupSetModule::LevelMutatorPowerupSetModule() */

void __thiscall
LevelMutatorPowerupSetModule::LevelMutatorPowerupSetModule(LevelMutatorPowerupSetModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667f890;
  return;
}


/* LevelMutatorPowerupSetModule::StaticNew() */

LevelMutatorPowerupSetModule * LevelMutatorPowerupSetModule::StaticNew(void)

{
  LevelMutatorPowerupSetModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorPowerupSetModule(this);
  return this;
}


/* LevelMutatorPowerupSetModule::~LevelMutatorPowerupSetModule() */

void __thiscall
LevelMutatorPowerupSetModule::~LevelMutatorPowerupSetModule(LevelMutatorPowerupSetModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667f890;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorPowerupSetModule::~LevelMutatorPowerupSetModule() */

void __thiscall
LevelMutatorPowerupSetModule::~LevelMutatorPowerupSetModule(LevelMutatorPowerupSetModule *this)

{
  ~LevelMutatorPowerupSetModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelMutatorPowerupSetModule::GetPowerupSetOverride() */

void LevelMutatorPowerupSetModule::GetPowerupSetOverride(void)

{
  LevelModule *in_x0;
  
  LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  FUN_05475d88();
  return;
}

