// Class: LevelMutatorMaxSunModule


/* LevelMutatorMaxSunModule::StaticGetClass() */

long * LevelMutatorMaxSunModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorMaxSunModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorMaxSunModule::LevelMutatorMaxSunModule() */

void __thiscall LevelMutatorMaxSunModule::LevelMutatorMaxSunModule(LevelMutatorMaxSunModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667f9f0;
  return;
}


/* LevelMutatorMaxSunModule::StaticNew() */

LevelMutatorMaxSunModule * LevelMutatorMaxSunModule::StaticNew(void)

{
  LevelMutatorMaxSunModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorMaxSunModule(this);
  return this;
}


/* LevelMutatorMaxSunModule::~LevelMutatorMaxSunModule() */

void __thiscall LevelMutatorMaxSunModule::~LevelMutatorMaxSunModule(LevelMutatorMaxSunModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667f9f0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorMaxSunModule::~LevelMutatorMaxSunModule() */

void __thiscall LevelMutatorMaxSunModule::~LevelMutatorMaxSunModule(LevelMutatorMaxSunModule *this)

{
  ~LevelMutatorMaxSunModule(this);
  AK::FreeHook(this);
  return;
}

