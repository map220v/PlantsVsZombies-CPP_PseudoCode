// Class: LevelMutatorRiftZombossPhasesModule


/* LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride() */

undefined4 __thiscall
LevelMutatorRiftZombossPhasesModule::GetZombossPhasesOverride
          (LevelMutatorRiftZombossPhasesModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  return *(undefined4 *)(pRVar1 + 0x40);
}


/* LevelMutatorRiftZombossPhasesModule::StaticGetClass() */

long * LevelMutatorRiftZombossPhasesModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelMutatorRiftZombossPhasesModule",uVar2,StaticNew);
  return sClass;
}


/* LevelMutatorRiftZombossPhasesModule::LevelMutatorRiftZombossPhasesModule() */

void __thiscall
LevelMutatorRiftZombossPhasesModule::LevelMutatorRiftZombossPhasesModule
          (LevelMutatorRiftZombossPhasesModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06680390;
  return;
}


/* LevelMutatorRiftZombossPhasesModule::StaticNew() */

LevelMutatorRiftZombossPhasesModule * LevelMutatorRiftZombossPhasesModule::StaticNew(void)

{
  LevelMutatorRiftZombossPhasesModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorRiftZombossPhasesModule(this);
  return this;
}


/* LevelMutatorRiftZombossPhasesModule::~LevelMutatorRiftZombossPhasesModule() */

void __thiscall
LevelMutatorRiftZombossPhasesModule::~LevelMutatorRiftZombossPhasesModule
          (LevelMutatorRiftZombossPhasesModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06680390;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorRiftZombossPhasesModule::~LevelMutatorRiftZombossPhasesModule() */

void __thiscall
LevelMutatorRiftZombossPhasesModule::~LevelMutatorRiftZombossPhasesModule
          (LevelMutatorRiftZombossPhasesModule *this)

{
  ~LevelMutatorRiftZombossPhasesModule(this);
  AK::FreeHook(this);
  return;
}

