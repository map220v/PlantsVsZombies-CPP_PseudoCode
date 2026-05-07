// Class: PiratePlankModule


/* PiratePlankModule::StaticGetClass() */

long * PiratePlankModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PiratePlankModule",uVar2,StaticNew);
  return sClass;
}


/* PiratePlankModule::PiratePlankModule() */

void __thiscall PiratePlankModule::PiratePlankModule(PiratePlankModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06796bf0;
  return;
}


/* PiratePlankModule::StaticNew() */

PiratePlankModule * PiratePlankModule::StaticNew(void)

{
  PiratePlankModule *this;
  
  this = ::operator_new(0x18);
  PiratePlankModule(this);
  return this;
}


/* PiratePlankModule::~PiratePlankModule() */

void __thiscall PiratePlankModule::~PiratePlankModule(PiratePlankModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06796bf0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PiratePlankModule::~PiratePlankModule() */

void __thiscall PiratePlankModule::~PiratePlankModule(PiratePlankModule *this)

{
  ~PiratePlankModule(this);
  AK::FreeHook(this);
  return;
}


/* PiratePlankModule::addPlanks() */

void __thiscall PiratePlankModule::addPlanks(PiratePlankModule *this)

{
  LevelModuleManager *this_00;
  PirateStage *this_01;
  ResilienceTutorialIntroProperties *pRVar1;
  
  this_00 = (LevelModuleManager *)LevelModule::getManager();
  LevelModuleManager::GetStageModule(this_00);
  nop();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  PirateStage::InitPlanks(this_01,(vector *)(pRVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PiratePlankModule::registerForEvents() */

void __thiscall PiratePlankModule::registerForEvents(PiratePlankModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addPlanks);
  Sexy::Delegate0::Delegate0<PiratePlankModule,void(PiratePlankModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelInit(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

