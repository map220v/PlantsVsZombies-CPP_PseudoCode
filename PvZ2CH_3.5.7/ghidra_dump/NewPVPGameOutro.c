// Class: NewPVPGameOutro


/* NewPVPGameOutro::onUpdate() */

void NewPVPGameOutro::onUpdate(void)

{
  return;
}


/* NewPVPGameOutro::onBoardFadeDone() */

void NewPVPGameOutro::onBoardFadeDone(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  Board::DestroyAllCreatures();
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameOutro::StaticClassInit() */

void NewPVPGameOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPGameOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_034ba964,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameOutro::StaticGetClass() */

long * NewPVPGameOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPGameOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameOutro::NewPVPGameOutro() */

void __thiscall NewPVPGameOutro::NewPVPGameOutro(NewPVPGameOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066477c0;
  return;
}


/* NewPVPGameOutro::StaticNew() */

NewPVPGameOutro * NewPVPGameOutro::StaticNew(void)

{
  NewPVPGameOutro *this;
  
  this = ::operator_new(0x28);
  NewPVPGameOutro(this);
  return this;
}


/* NewPVPGameOutro::~NewPVPGameOutro() */

void __thiscall NewPVPGameOutro::~NewPVPGameOutro(NewPVPGameOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066477c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* NewPVPGameOutro::~NewPVPGameOutro() */

void __thiscall NewPVPGameOutro::~NewPVPGameOutro(NewPVPGameOutro *this)

{
  ~NewPVPGameOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameOutro::startBoardFade() */

void __thiscall NewPVPGameOutro::startBoardFade(NewPVPGameOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<NewPVPGameOutro,void(NewPVPGameOutro::*)()>(aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameOutro::onResultsScreenDismissed(int) */

void NewPVPGameOutro::onResultsScreenDismissed(int param_1)

{
  UISingletonDialog<NewPVPResultScreen>::CloseDialog();
  *(undefined8 *)((NewPVPGameOutro *)(ulong)(uint)param_1 + 0x18) = 0;
  startBoardFade((NewPVPGameOutro *)(ulong)(uint)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameOutro::registerForEvents() */

void __thiscall NewPVPGameOutro::registerForEvents(NewPVPGameOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startWinOutro);
  Sexy::Delegate0::Delegate0<NewPVPGameOutro,void(NewPVPGameOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startLossOutro);
  Sexy::Delegate0::Delegate0<NewPVPGameOutro,void(NewPVPGameOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<NewPVPGameOutro,void(NewPVPGameOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPVPNetworkResponseReceived);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<NewPVPGameOutro,void(NewPVPGameOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPNetworkResponseReceived,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameOutro::showResultsScreen(NewPVPGameResults) */

void __thiscall NewPVPGameOutro::showResultsScreen(NewPVPGameOutro *this,undefined8 param_2)

{
  NewPVPResultScreen *pNVar1;
  TrainingConfirmDlg *pTVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar1 = (NewPVPResultScreen *)UISingletonDialog<NewPVPResultScreen>::ShowDialog();
  *(NewPVPResultScreen **)(this + 0x18) = pNVar1;
  if (pNVar1 != (NewPVPResultScreen *)0x0) {
    NewPVPResultScreen::InitView(pNVar1,param_2);
    pTVar2 = *(TrainingConfirmDlg **)(this + 0x18);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onResultsScreenDismissed);
    Sexy::Delegate1<int>::Delegate1<NewPVPGameOutro,void(NewPVPGameOutro::*)(int)>
              (aDStack_38,aCStack_50);
    TrainingConfirmDlg::SetCallback(pTVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameOutro::onSuccessResponse() */

void __thiscall NewPVPGameOutro::onSuccessResponse(NewPVPGameOutro *this)

{
  char cVar1;
  NewPVPMgr *this_00;
  
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar1 = NewPVPMgr::IsCurrentGameInvalid(this_00);
  if (cVar1 != '\0') {
    startBoardFade(this);
    return;
  }
  showResultsScreen(this,*(undefined4 *)(this + 0x20));
  return;
}


/* NewPVPGameOutro::onNewPVPNetworkResponseReceived(int, int) */

void __thiscall
NewPVPGameOutro::onNewPVPNetworkResponseReceived(NewPVPGameOutro *this,int param_1,int param_2)

{
  if ((param_1 == 7) && (param_2 == 2)) {
    onSuccessResponse(this);
    return;
  }
  return;
}


/* NewPVPGameOutro::sendPostEndPlay() */

void __thiscall NewPVPGameOutro::sendPostEndPlay(NewPVPGameOutro *this)

{
  NewPVPMgr *pNVar1;
  
  pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::RequestEndPlay(pNVar1,*(undefined4 *)(this + 0x20),0);
  return;
}


/* NewPVPGameOutro::startWinOutro() */

void __thiscall NewPVPGameOutro::startWinOutro(NewPVPGameOutro *this)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  *(undefined4 *)(this + 0x20) = 1;
  sendPostEndPlay(this);
  return;
}


/* NewPVPGameOutro::startLossOutro() */

void __thiscall NewPVPGameOutro::startLossOutro(NewPVPGameOutro *this)

{
  undefined4 uVar1;
  long lVar2;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  lVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar1 = FUN_034ad8e0(*(undefined4 *)(lVar2 + 0x470));
  *(undefined4 *)(this + 0x20) = uVar1;
  sendPostEndPlay(this);
  return;
}

