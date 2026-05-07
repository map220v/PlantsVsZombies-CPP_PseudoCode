// Class: MiniGameCollectionOutro


/* MiniGameCollectionOutro::onUpdate() */

void __thiscall MiniGameCollectionOutro::onUpdate(MiniGameCollectionOutro *this)

{
  if (*(int *)(this + 0x18) == 1) {
    *(undefined4 *)(this + 0x18) = 2;
  }
  return;
}


/* MiniGameCollectionOutro::gameStart() */

void MiniGameCollectionOutro::gameStart(void)

{
  return;
}


/* MiniGameCollectionOutro::onBoardFadeDone() */

void MiniGameCollectionOutro::onBoardFadeDone(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  Board::DestroyAllCreatures();
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionOutro::StaticClassInit() */

void MiniGameCollectionOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameCollectionOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_038b6310,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionOutro::StaticGetClass() */

long * MiniGameCollectionOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameCollectionOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionOutro::MiniGameCollectionOutro() */

void __thiscall MiniGameCollectionOutro::MiniGameCollectionOutro(MiniGameCollectionOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066b5740;
  return;
}


/* MiniGameCollectionOutro::StaticNew() */

MiniGameCollectionOutro * MiniGameCollectionOutro::StaticNew(void)

{
  MiniGameCollectionOutro *this;
  
  this = ::operator_new(0x20);
  MiniGameCollectionOutro(this);
  return this;
}


/* MiniGameCollectionOutro::~MiniGameCollectionOutro() */

void __thiscall MiniGameCollectionOutro::~MiniGameCollectionOutro(MiniGameCollectionOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066b5740;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* MiniGameCollectionOutro::~MiniGameCollectionOutro() */

void __thiscall MiniGameCollectionOutro::~MiniGameCollectionOutro(MiniGameCollectionOutro *this)

{
  ~MiniGameCollectionOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionOutro::startBoardFade() */

void __thiscall MiniGameCollectionOutro::startBoardFade(MiniGameCollectionOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 3;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)()>
            (aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionOutro::registerForEvents() */

void __thiscall MiniGameCollectionOutro::registerForEvents(MiniGameCollectionOutro *this)

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
  Sexy::Delegate0::Delegate0<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameStart);
  Sexy::Delegate0::Delegate0<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVZ1ModeNetworkResponse);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionOutro::onResultsScreenDismissed(MiniGameCollectionEndLevelUI*) */

void MiniGameCollectionOutro::onResultsScreenDismissed(MiniGameCollectionEndLevelUI *param_1)

{
  LimitLotteryPanel *this;
  
  this = (LimitLotteryPanel *)Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  LimitLotteryPanel::CloseBonusEffect(this);
  startBoardFade((MiniGameCollectionOutro *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionOutro::sendPostEndPlay() */

void MiniGameCollectionOutro::sendPostEndPlay(void)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MiniGameCollectionEndPlayParamData::MiniGameCollectionEndPlayParamData
            ((MiniGameCollectionEndPlayParamData *)&local_18);
  lVar3 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  uVar2 = FUN_038b3908(*(undefined4 *)(lVar3 + 0xd0));
  lVar3 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  cVar1 = FUN_038b392c(*(undefined1 *)(lVar3 + 0xf8));
  lVar3 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  FUN_038b3924(*(undefined4 *)(lVar3 + 0xd4),*(undefined4 *)(lVar3 + 0xd8));
  uStack_14 = 2;
  if (cVar1 == '\0') {
    uStack_14 = 1;
  }
  local_18 = uVar2;
  local_10 = MiniGameCollectionUtils::CalcTimeScore(uVar2,cVar1);
  uVar4 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  MiniGameCollectionNetworkMgr::RequestEndPlayData(uVar4,CONCAT44(uStack_14,local_18),local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionOutro::startWinOutro() */

void MiniGameCollectionOutro::startWinOutro(void)

{
  long lVar1;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  lVar1 = Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  PVZ_T();
  FUN_038b391c(lVar1 + 0xd8);
  sendPostEndPlay();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionOutro::showResultsScreen(bool) */

void __thiscall
MiniGameCollectionOutro::showResultsScreen(MiniGameCollectionOutro *this,bool param_1)

{
  MiniGameCollectionNetworkMgr *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<MiniGameCollectionEndLevelUI*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (MiniGameCollectionNetworkMgr *)
            Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
  pPVar1 = (PlantWarsLevelSelectUI *)
           MiniGameCollectionNetworkMgr::ShowEndLevelUI(this_00,param_1,true);
  if (pPVar1 != (PlantWarsLevelSelectUI *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onResultsScreenDismissed);
    Sexy::Delegate1<MiniGameCollectionEndLevelUI*>::
    Delegate1<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)(MiniGameCollectionEndLevelUI*)>
              (aDStack_38,aCStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionOutro::onSuccessResponse() */

void __thiscall MiniGameCollectionOutro::onSuccessResponse(MiniGameCollectionOutro *this)

{
  *(undefined4 *)(this + 0x18) = 1;
  showResultsScreen(this,true);
  return;
}


/* MiniGameCollectionOutro::onPVZ1ModeNetworkResponse(int, int) */

void __thiscall
MiniGameCollectionOutro::onPVZ1ModeNetworkResponse
          (MiniGameCollectionOutro *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF
            ((wchar_t *)"MiniGameCollectionOutro::onPVZ1ModeNetworkResponse context=%d status=%d");
  if (param_1 == 3) {
    if (param_2 == 2) {
      onSuccessResponse(this);
      return;
    }
    if (param_2 == 5) {
      JoustUtils::ShowJoustNetworkIssuePopup(1,3);
      return;
    }
  }
  return;
}

