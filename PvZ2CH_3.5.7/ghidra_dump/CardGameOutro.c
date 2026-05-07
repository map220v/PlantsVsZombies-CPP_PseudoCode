// Class: CardGameOutro


/* CardGameOutro::onUpdate() */

void CardGameOutro::onUpdate(void)

{
  return;
}


/* CardGameOutro::gameStart() */

void CardGameOutro::gameStart(void)

{
  return;
}


/* CardGameOutro::onBoardFadeDone() */

void CardGameOutro::onBoardFadeDone(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  Board::DestroyAllCreatures();
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::StaticClassInit() */

void CardGameOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0f8a0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameOutro::StaticGetClass() */

long * CardGameOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameOutro::CardGameOutro() */

void __thiscall CardGameOutro::CardGameOutro(CardGameOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_069d5910;
  return;
}


/* CardGameOutro::StaticNew() */

CardGameOutro * CardGameOutro::StaticNew(void)

{
  CardGameOutro *this;
  
  this = ::operator_new(0x28);
  CardGameOutro(this);
  return this;
}


/* CardGameOutro::~CardGameOutro() */

void __thiscall CardGameOutro::~CardGameOutro(CardGameOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069d5910;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* CardGameOutro::~CardGameOutro() */

void __thiscall CardGameOutro::~CardGameOutro(CardGameOutro *this)

{
  ~CardGameOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::startBoardFade() */

void __thiscall CardGameOutro::startBoardFade(CardGameOutro *this)

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
  Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>(aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::onNotifyCardSelectDone() */

void __thiscall CardGameOutro::onNotifyCardSelectDone(CardGameOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>(aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameOutro::onPlayAgain() */

void __thiscall CardGameOutro::onPlayAgain(CardGameOutro *this)

{
  UISingletonDialog<CardGameResultScreen>::CloseDialog();
  startBoardFade(this);
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* CardGameOutro::OnNarrativeTutorialEndCompleted() */

void __thiscall CardGameOutro::OnNarrativeTutorialEndCompleted(CardGameOutro *this)

{
  UISingletonDialog<CardGameResultScreen>::CloseDialog();
  startBoardFade(this);
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::showResultsScreen(CardGameResultType) */

void __thiscall CardGameOutro::showResultsScreen(CardGameOutro *this,undefined8 param_2)

{
  CardGameResultScreen *pCVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<int> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CardGameResultScreen *)UISingletonDialog<CardGameResultScreen>::ShowDialog();
  *(CardGameResultScreen **)(this + 0x18) = pCVar1;
  if (pCVar1 != (CardGameResultScreen *)0x0) {
    CardGameResultScreen::InitView(pCVar1,param_2);
    pCVar1 = *(CardGameResultScreen **)(this + 0x18);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onResultsScreenDismissed);
    Sexy::Delegate1<int>::Delegate1<CardGameOutro,void(CardGameOutro::*)(int)>
              (aDStack_68,aCStack_98);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlayAgain);
    Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>(aDStack_38,aCStack_80);
    CardGameResultScreen::SetCallback(pCVar1,aDStack_68,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameOutro::onFailedResponse() */

void __thiscall CardGameOutro::onFailedResponse(CardGameOutro *this)

{
  showResultsScreen(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::sendPostEndPlayLoss() */

void __thiscall CardGameOutro::sendPostEndPlayLoss(CardGameOutro *this)

{
  undefined8 uVar1;
  TGALogMgr *pTVar2;
  size_t in_x2;
  TGASecretStore aTStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [32];
  TGASecretStore aTStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGASecretStore::TGASecretStore(aTStack_68);
  std::string::append((string *)aTStack_68,"4",in_x2);
  uVar1 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  thunk_FUN_05475e00(auStack_60,uVar1);
  std::string::append(asStack_58,"0",in_x2);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore(aTStack_38,aTStack_68);
  TGALogMgr::LogCardGame(pTVar2,aTStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  showResultsScreen(this,1);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameOutro::startLossOutro() */

void __thiscall CardGameOutro::startLossOutro(CardGameOutro *this)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  sendPostEndPlayLoss(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::onSuccessResponse() */

void __thiscall CardGameOutro::onSuccessResponse(CardGameOutro *this)

{
  undefined8 uVar1;
  TGALogMgr *pTVar2;
  size_t in_x2;
  TGASecretStore aTStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [32];
  TGASecretStore aTStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGASecretStore::TGASecretStore(aTStack_68);
  std::string::append((string *)aTStack_68,"4",in_x2);
  uVar1 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  thunk_FUN_05475e00(auStack_60,uVar1);
  std::string::append(asStack_58,"1",in_x2);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore(aTStack_38,aTStack_68);
  TGALogMgr::LogCardGame(pTVar2,aTStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  showResultsScreen(this,0);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameOutro::onCardGameNetworkResponse(int, int) */

void __thiscall
CardGameOutro::onCardGameNetworkResponse(CardGameOutro *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"CardGameOutro::onCardGameNetworkResponse context=%d status=%d");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::onResultsScreenDismissed(int) */

void __thiscall CardGameOutro::onResultsScreenDismissed(CardGameOutro *this,int param_1)

{
  char cVar1;
  vector *pvVar2;
  vector<CardGameCardInfo,std::allocator<CardGameCardInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<CardGameResultScreen>::CloseDialog();
  *(undefined8 *)(this + 0x18) = 0;
  if (param_1 == 0) {
    pvVar2 = (vector *)CardGameUtils::GetCardGameSelectInfos();
    std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::vector(avStack_20,pvVar2);
    cVar1 = std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::empty(avStack_20);
    if (cVar1 == '\0') {
      CardSelect::create((vector *)avStack_20);
    }
    else {
      onNotifyCardSelectDone(this);
    }
    std::vector<CardGameCardInfo,std::allocator<CardGameCardInfo>>::~vector(avStack_20);
  }
  else {
    onNotifyCardSelectDone(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::sendPostEndPlay() */

void __thiscall CardGameOutro::sendPostEndPlay(CardGameOutro *this)

{
  bool bVar1;
  CardGameUtils *this_00;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  string asStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  CardGameEndPlayParamData local_78 [8];
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined1 auStack_60 [8];
  vector<bool,std::allocator<bool>> avStack_58 [40];
  undefined1 local_30 [2] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CardGameEndPlayParamData::CardGameEndPlayParamData(local_78);
  this_00 = (CardGameUtils *)CardGameUtils::IsHardMode();
  local_78[0] = SUB81(this_00,0);
  CardGameUtils::GetPrefixWorld(this_00);
  FUN_05474278(auStack_70,(string *)local_30);
  std::string::~string((string *)local_30);
  local_68 = CardGameUtils::GetCurrentWorldLevelIndexByNetworkMgr();
  std::vector<bool,std::allocator<bool>>::vector(avStack_58);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_90);
  ProfileUtils::GetChallengeStatusForCurrentLevel((vector *)&local_90);
  uVar3 = local_90;
  lVar2 = FUN_04e0f3e4(local_90,local_88);
  if (lVar2 != 0) {
    uVar5 = 0;
    while( true ) {
      lVar2 = FUN_04e0f3f8(uVar3);
      uVar4 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)(lVar2 + 0x58));
      if (uVar4 <= uVar5) break;
      lVar2 = FUN_04e0f3f8(local_90);
      auVar6 = FUN_04e0f454(*(undefined8 *)(lVar2 + 0x58),uVar5);
      local_30[0] = auVar6;
      bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
      std::vector<bool,std::allocator<bool>>::push_back(avStack_58,bVar1);
      lVar2 = FUN_04e0f3f8(local_90);
      auVar6 = FUN_04e0f454(*(undefined8 *)(lVar2 + 0x58),uVar5);
      local_30[0] = auVar6;
      bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
      if (bVar1) {
        *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
      }
      uVar5 = uVar5 + 1;
      uVar3 = local_90;
    }
  }
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)local_30,(vector *)avStack_58);
  CardGameUtils::GetChallengeListStr((CardGameUtils *)asStack_98,(string *)local_30);
  FUN_05474278(auStack_60,asStack_98);
  std::string::~string(asStack_98);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30);
  CardGameEndPlayParamData::CardGameEndPlayParamData((CardGameEndPlayParamData *)local_30,local_78);
  CardGameUtils::SendPost_EndPlay((string *)local_30);
  DiscountPlant::~DiscountPlant((DiscountPlant *)local_30);
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  ~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
           *)&local_90);
  std::vector<bool,std::allocator<bool>>::~vector(avStack_58);
  DiscountPlant::~DiscountPlant((DiscountPlant *)local_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::startWinOutro() */

void __thiscall CardGameOutro::startWinOutro(CardGameOutro *this)

{
  bool bVar1;
  string *psVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  psVar2 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  bVar1 = std::operator==(psVar2,"card_tutorial");
  if (bVar1) {
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"CARD_GAME_END_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnNarrativeTutorialEndCompleted);
    Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>(aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  else {
    sendPostEndPlay(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameOutro::registerForEvents() */

void __thiscall CardGameOutro::registerForEvents(CardGameOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
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
  Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startLossOutro);
  Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameStart);
  Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCardGameNetworkResponse);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<CardGameOutro,void(CardGameOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::CardGameNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyCardSelectDone);
  Sexy::Delegate0::Delegate0<CardGameOutro,void(CardGameOutro::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyCardSelectDone,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

