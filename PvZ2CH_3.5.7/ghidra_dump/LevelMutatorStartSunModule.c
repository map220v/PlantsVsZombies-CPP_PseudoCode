// Class: LevelMutatorStartSunModule


/* LevelMutatorStartSunModule::StaticGetClass() */

long * LevelMutatorStartSunModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorStartSunModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorStartSunModule::LevelMutatorStartSunModule() */

void __thiscall
LevelMutatorStartSunModule::LevelMutatorStartSunModule(LevelMutatorStartSunModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667fb50;
  return;
}


/* LevelMutatorStartSunModule::StaticNew() */

LevelMutatorStartSunModule * LevelMutatorStartSunModule::StaticNew(void)

{
  LevelMutatorStartSunModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorStartSunModule(this);
  return this;
}


/* LevelMutatorStartSunModule::~LevelMutatorStartSunModule() */

void __thiscall
LevelMutatorStartSunModule::~LevelMutatorStartSunModule(LevelMutatorStartSunModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667fb50;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorStartSunModule::~LevelMutatorStartSunModule() */

void __thiscall
LevelMutatorStartSunModule::~LevelMutatorStartSunModule(LevelMutatorStartSunModule *this)

{
  ~LevelMutatorStartSunModule(this);
  AK::FreeHook(this);
  return;
}

