// Class: ZombieModifierModule


/* ZombieModifierModule::StaticGetClass() */

long * ZombieModifierModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModifierModule",uVar2,StaticNew);
  return sClass;
}


/* ZombieModifierModule::ZombieModifierModule() */

void __thiscall ZombieModifierModule::ZombieModifierModule(ZombieModifierModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068a9280;
  return;
}


/* ZombieModifierModule::StaticNew() */

ZombieModifierModule * ZombieModifierModule::StaticNew(void)

{
  ZombieModifierModule *this;
  
  this = ::operator_new(0x18);
  ZombieModifierModule(this);
  return this;
}


/* ZombieModifierModule::~ZombieModifierModule() */

void __thiscall ZombieModifierModule::~ZombieModifierModule(ZombieModifierModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068a9280;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ZombieModifierModule::~ZombieModifierModule() */

void __thiscall ZombieModifierModule::~ZombieModifierModule(ZombieModifierModule *this)

{
  ~ZombieModifierModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombieModifierModule::onZombieSpawned(Zombie*) */

void __thiscall ZombieModifierModule::onZombieSpawned(ZombieModifierModule *this,Zombie *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined1 auVar2 [16];
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar1[0x40] == (ResilienceTutorialIntroProperties)0x0) {
    return;
  }
  auVar2 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar2,0,param_1,0xb,1);
  return;
}


/* ZombieModifierModule::registerForEvents() */

void __thiscall ZombieModifierModule::registerForEvents(ZombieModifierModule *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombieModifierModule,void(ZombieModifierModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_40);
  return;
}

