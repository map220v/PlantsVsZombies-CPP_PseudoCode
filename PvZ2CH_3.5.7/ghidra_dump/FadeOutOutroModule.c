// Class: FadeOutOutroModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FadeOutOutroModule::SetMessage(std::wstring const&) */

void __thiscall FadeOutOutroModule::SetMessage(FadeOutOutroModule *this,wstring *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_1);
  FUN_054766c8(this + 0x18,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FadeOutOutroModule::outro_notifyComplete(float) */

void FadeOutOutroModule::outro_notifyComplete(float param_1)

{
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  return;
}


/* FadeOutOutroModule::StaticGetClass() */

long * FadeOutOutroModule::StaticGetClass(void)

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
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"FadeOutOutroModule",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03ce2438 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* FadeOutOutroModule::renderMessage(Sexy::Graphics*) */

void __thiscall FadeOutOutroModule::renderMessage(FadeOutOutroModule *this,Graphics *param_1)

{
  int iVar1;
  Graphics3D *pGVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined4 local_58;
  float local_54;
  GraphicsAutoState aGStack_50 [8];
  undefined1 auStack_48 [8];
  float local_40 [4];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  fVar4 = -10.0;
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_50,param_1);
  local_58 = 0xc1200000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fVar6 = (float)*(int *)(gLawnApp + 0xd8) * 0.381966;
  local_54 = fVar6;
  auVar5 = FUN_03ce1f54(*(undefined4 *)(this + 0x20));
  if (1.0 <= auVar5._0_4_) {
    if (auVar5._0_4_ < 2.0) {
      fVar4 = CurveLerp<float>(&local_58,&local_54,2);
    }
    else {
      local_40[0] = (fVar6 + 10.0) * 0.618034 + -10.0;
      fVar4 = CurveLerp<float>(auVar5,0x4059999a,&local_54,local_40,10);
    }
  }
  Sexy::SexyMatrix3::LoadIdentity(aSStack_30);
  pGVar2 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
  Sexy::Graphics3D::PushTransform(pGVar2,aSStack_30,false);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
  iVar1 = *(int *)(gLawnApp + 0x724);
  FUN_05477b24(auStack_48,this + 0x18);
  Sexy::Color::Color((Color *)local_40,5);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,fVar4,(float)iVar1,uVar3,param_1,auStack_48,1,(Color *)local_40,0)
  ;
  FUN_05476c50(auStack_48);
  pGVar2 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
  Sexy::Graphics3D::PopTransform(pGVar2);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FadeOutOutroModule::initializeModule() */

void __thiscall FadeOutOutroModule::initializeModule(FadeOutOutroModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  string *extraout_x1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  Sexy::UTF8StringToWString((Sexy *)(pRVar1 + 0x40),extraout_x1);
  FUN_054766c8(this + 0x18,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FadeOutOutroModule::addToRenderQueue(RenderQueue*) */

void __thiscall FadeOutOutroModule::addToRenderQueue(FadeOutOutroModule *this,RenderQueue *param_1)

{
  undefined4 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Board::MakeRenderOrder(1000000,0,1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc0);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<FadeOutOutroModule,void(FadeOutOutroModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,uVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FadeOutOutroModule::FadeOutOutroModule() */

void __thiscall FadeOutOutroModule::FadeOutOutroModule(FadeOutOutroModule *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06760ce0;
  FUN_05476574(this + 0x18);
  TimeLine::TimeLine((TimeLine *)(this + 0x20));
  return;
}


/* FadeOutOutroModule::StaticNew() */

FadeOutOutroModule * FadeOutOutroModule::StaticNew(void)

{
  FadeOutOutroModule *this;
  
  this = ::operator_new(0x80);
  FadeOutOutroModule(this);
  return this;
}


/* FadeOutOutroModule::~FadeOutOutroModule() */

void __thiscall FadeOutOutroModule::~FadeOutOutroModule(FadeOutOutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06760ce0;
  TimeLine::~TimeLine((TimeLine *)(this + 0x20));
  FUN_05476c50(this + 0x18);
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* FadeOutOutroModule::~FadeOutOutroModule() */

void __thiscall FadeOutOutroModule::~FadeOutOutroModule(FadeOutOutroModule *this)

{
  ~FadeOutOutroModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FadeOutOutroModule::startLossOutro() */

void __thiscall FadeOutOutroModule::startLossOutro(FadeOutOutroModule *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  string *psVar3;
  undefined8 uVar4;
  float fVar5;
  Board *pBVar7;
  float fVar6;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
                    /* WARNING: Load size is inaccurate */
  pBVar7._0_4_ = *(Board **)(pRVar2 + 0x58);
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::StartBoardFade(pBVar7._0_4_,uVar4,pRVar2 + 0x48,aDStack_38);
  psVar3 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  bVar1 = std::operator==(psVar3,"ProtectChristmas1");
  if (bVar1) {
    MessageRouter::Post<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::ActiveProtectFinish,0,0);
  }
  TimeLine::Initialize((TimeLine *)(this + 0x20),0.0);
  fVar6 = *(float *)(pRVar2 + 0x58);
  fVar5 = *(float *)(pRVar2 + 0x5c);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc8);
  Sexy::Delegate1<float>::Delegate1<FadeOutOutroModule,void(FadeOutOutroModule::*)(float)>
            ((Delegate1<float> *)aDStack_38,aCStack_50);
  TimeLine::AddEvent((TimeLine *)(fVar5 + fVar6),(TimeLine *)(this + 0x20),aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FadeOutOutroModule::onUpdate() */

void __thiscall FadeOutOutroModule::onUpdate(FadeOutOutroModule *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_Dt();
  TimeLine::Update((TimeLine *)(this + 0x20),fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FadeOutOutroModule::registerForEvents() */

void __thiscall FadeOutOutroModule::registerForEvents(FadeOutOutroModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa8);
  Sexy::Delegate0::Delegate0<FadeOutOutroModule,void(FadeOutOutroModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<FadeOutOutroModule,void(FadeOutOutroModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb8);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<FadeOutOutroModule,void(FadeOutOutroModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

