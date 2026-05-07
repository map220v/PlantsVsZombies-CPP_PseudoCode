// Class: PlantWarsFadeOutOutroModule


/* PlantWarsFadeOutOutroModule::StaticGetClass() */

long * PlantWarsFadeOutOutroModule::StaticGetClass(void)

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
  uVar2 = FadeOutOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsFadeOutOutroModule",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsFadeOutOutroModule::initializeModule() */

void __thiscall PlantWarsFadeOutOutroModule::initializeModule(PlantWarsFadeOutOutroModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  StringHelper::ToStringValue((string *)(pRVar1 + 0x40));
  FUN_054766c8(this + 0x18,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsFadeOutOutroModule::PlantWarsFadeOutOutroModule() */

void __thiscall
PlantWarsFadeOutOutroModule::PlantWarsFadeOutOutroModule(PlantWarsFadeOutOutroModule *this)

{
  FadeOutOutroModule::FadeOutOutroModule((FadeOutOutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069bb010;
  return;
}


/* PlantWarsFadeOutOutroModule::StaticNew() */

PlantWarsFadeOutOutroModule * PlantWarsFadeOutOutroModule::StaticNew(void)

{
  PlantWarsFadeOutOutroModule *this;
  
  this = ::operator_new(0x80);
  PlantWarsFadeOutOutroModule(this);
  return this;
}


/* PlantWarsFadeOutOutroModule::~PlantWarsFadeOutOutroModule() */

void __thiscall
PlantWarsFadeOutOutroModule::~PlantWarsFadeOutOutroModule(PlantWarsFadeOutOutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069bb010;
  FadeOutOutroModule::~FadeOutOutroModule((FadeOutOutroModule *)this);
  return;
}


/* PlantWarsFadeOutOutroModule::~PlantWarsFadeOutOutroModule() */

void __thiscall
PlantWarsFadeOutOutroModule::~PlantWarsFadeOutOutroModule(PlantWarsFadeOutOutroModule *this)

{
  ~PlantWarsFadeOutOutroModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsFadeOutOutroModule::startWinOutro() */

void __thiscall PlantWarsFadeOutOutroModule::startWinOutro(PlantWarsFadeOutOutroModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined8 uVar2;
  float fVar3;
  Board *pBVar5;
  float fVar4;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar5._0_4_ = *(Board **)(pRVar1 + 0x58);
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::StartBoardFade(pBVar5._0_4_,uVar2,pRVar1 + 0x48,aDStack_38);
  TimeLine::Initialize((TimeLine *)(this + 0x20),0.0);
  fVar4 = *(float *)(pRVar1 + 0x58);
  fVar3 = *(float *)(pRVar1 + 0x5c);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc8);
  Sexy::Delegate1<float>::Delegate1<PlantWarsFadeOutOutroModule,void(FadeOutOutroModule::*)(float)>
            ((Delegate1<float> *)aDStack_38,aCStack_50);
  TimeLine::AddEvent((TimeLine *)(fVar3 + fVar4),(TimeLine *)(this + 0x20),aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsFadeOutOutroModule::registerForEvents() */

void __thiscall PlantWarsFadeOutOutroModule::registerForEvents(PlantWarsFadeOutOutroModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startWinOutro);
  Sexy::Delegate0::Delegate0<PlantWarsFadeOutOutroModule,void(PlantWarsFadeOutOutroModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<PlantWarsFadeOutOutroModule,void(FadeOutOutroModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb8);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<PlantWarsFadeOutOutroModule,void(FadeOutOutroModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

