// Class: NewPVPIntro


/* NewPVPIntro::onTimeOut() */

void NewPVPIntro::onTimeOut(void)

{
  char cVar1;
  LawnApp *this;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = gLawnApp;
  cVar1 = LawnApp::IsPauseMenuOpen(gLawnApp);
  if (cVar1 != '\0') {
    LawnApp::KillNewOptionsDialog(this);
    this = gLawnApp;
  }
  (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntro::StaticClassInit() */

void NewPVPIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_034c9b08,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPIntro::StaticGetClass() */

long * NewPVPIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPIntro::startGame() */

void __thiscall NewPVPIntro::startGame(NewPVPIntro *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x4c) = uVar1;
  Board::StartLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* NewPVPIntro::~NewPVPIntro() */

void __thiscall NewPVPIntro::~NewPVPIntro(NewPVPIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066471c0;
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* NewPVPIntro::~NewPVPIntro() */

void __thiscall NewPVPIntro::~NewPVPIntro(NewPVPIntro *this)

{
  ~NewPVPIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntro::readyForPlantSet() */

void __thiscall NewPVPIntro::readyForPlantSet(NewPVPIntro *this)

{
  long lVar1;
  ResourceInfo *pRVar2;
  code *pcVar3;
  undefined4 local_54;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  FUN_034ad7b0(lVar1 + 0x10);
  pcVar3 = *(code **)(*(long *)this + 0xa0);
  local_54 = 0;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                     ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetPlantComplete);
  Sexy::Delegate0::Delegate0<NewPVPIntro,void(NewPVPIntro::*)()>(aDStack_38,aCStack_50);
  (*pcVar3)(this,pRVar2,&local_54,aDStack_38,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntro::addReadyForPlayerEnterToAnimMgr(AnimationMgr*, float&) */

void __thiscall
NewPVPIntro::addReadyForPlayerEnterToAnimMgr(NewPVPIntro *this,AnimationMgr *param_1,float *param_2)

{
  AnimationController *pAVar1;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = *param_2 + 1.5;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onPlayerEnterReady");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(param_1,pAVar1,*param_2);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntro::readyForPlayerEnter() */

void __thiscall NewPVPIntro::readyForPlayerEnter(NewPVPIntro *this)

{
  ResourceInfo *pRVar1;
  float local_c;
  long local_8;
  
  local_c = 0.0;
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                     ((RtWeakPtr *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  addReadyForPlayerEnterToAnimMgr(this,(AnimationMgr *)pRVar1,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntro::registerForEvents() */

void __thiscall NewPVPIntro::registerForEvents(NewPVPIntro *this)

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
  StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<NewPVPIntro,void(NewPVPIntro::*)()>
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
  Subscribe<int,int,Sexy::CBMemberTranslatorX<NewPVPIntro,void(NewPVPIntro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPNetworkResponseReceived,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntro::displayPlayerCards() */

void __thiscall NewPVPIntro::displayPlayerCards(NewPVPIntro *this)

{
  ProfileMgr *this_00;
  long lVar1;
  NewPVPMgr *pNVar2;
  Network_PlayerSyncData *pNVar3;
  RtObject *pRVar4;
  NewPVPInfoCard *pNVar5;
  wstring *extraout_x1;
  wstring *pwVar6;
  string *extraout_x1_00;
  wstring *extraout_x1_01;
  Sexy aSStack_158 [8];
  undefined1 auStack_150 [8];
  RtName aRStack_148 [16];
  function<bool(Sexy::Touch_const&)> afStack_138 [32];
  Network_PlayerSyncData aNStack_118 [24];
  int local_100;
  undefined4 local_a0;
  RtName aRStack_90 [16];
  Sexy aSStack_80 [8];
  int local_78;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 == 0) {
    FUN_05478178(aSStack_158,L"-invalid-",aRStack_90);
    nop();
    pwVar6 = extraout_x1_01;
  }
  else {
    PlayerInfo::AM_GetName();
    pwVar6 = extraout_x1;
  }
  Sexy::ToWString(aSStack_158,pwVar6);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar3 = (Network_PlayerSyncData *)NewPVPMgr::GetSelfPlayerData(pNVar2);
  Network_PlayerSyncData::Network_PlayerSyncData(aNStack_118,pNVar3);
  Sexy::RtName::RtName(aRStack_90,L"NewPVPInfoCard");
  pRVar4 = (RtObject *)UIWidget::CreateWidget(aRStack_90,1);
  pNVar5 = Sexy::RtObject::Cast<NewPVPInfoCard>(pRVar4);
  Sexy::RtName::~RtName(aRStack_90);
  NewPVPInfoCard::SetHeadShotID(pNVar5,local_100);
  FUN_034ad93c(pNVar5 + 0x184,local_a0);
  FUN_034ad934(pNVar5 + 0x164,0);
  FUN_05477b24(aRStack_90,auStack_150);
  ArenaPlayerBank::SetPlayerName(pNVar5,aRStack_90);
  FUN_05476c50(aRStack_90);
  FUN_034b7044(afStack_138,this);
  NewPVPInfoCard::SetEnterCallback(pNVar5,afStack_138);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_138);
  NewPVPInfoCard::Enter(pNVar5);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar3 = (Network_PlayerSyncData *)NewPVPMgr::GetOppoentPlayerData(pNVar2);
  Network_PlayerSyncData::Network_PlayerSyncData((Network_PlayerSyncData *)aRStack_90,pNVar3);
  Sexy::RtName::RtName(aRStack_148,L"NewPVPInfoCard");
  pRVar4 = (RtObject *)UIWidget::CreateWidget(aRStack_148,1);
  pNVar5 = Sexy::RtObject::Cast<NewPVPInfoCard>(pRVar4);
  Sexy::RtName::~RtName(aRStack_148);
  NewPVPInfoCard::SetHeadShotID(pNVar5,local_78);
  FUN_034ad93c(pNVar5 + 0x184,local_18);
  FUN_034ad934(pNVar5 + 0x164,1);
  Sexy::UTF8StringToWString(aSStack_80,extraout_x1_00);
  ArenaPlayerBank::SetPlayerName(pNVar5,aRStack_148);
  FUN_05476c50(aRStack_148);
  FUN_034b70a0(afStack_138,this);
  NewPVPInfoCard::SetEnterCallback(pNVar5,afStack_138);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_138);
  NewPVPInfoCard::Enter(pNVar5);
  Network_PlayerSyncData::~Network_PlayerSyncData((Network_PlayerSyncData *)aRStack_90);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_118);
  FUN_05476c50(auStack_150);
  FUN_05476c50(aSStack_158);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPIntro::onRequestSyncPlayerData() */

void __thiscall NewPVPIntro::onRequestSyncPlayerData(NewPVPIntro *this)

{
  NewPVPMgr *this_00;
  
  *(undefined4 *)(this + 0x4c) = 0;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::ClearCurrentQueryPlayerData(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntro::onUpdate() */

void __thiscall NewPVPIntro::onUpdate(NewPVPIntro *this)

{
  LawnApp *this_00;
  bool bVar1;
  char cVar2;
  NewPVPMgr *pNVar3;
  GridItem *this_01;
  string *psVar4;
  PVZ2UIDialog *pPVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)PVZ_T();
  if (*(float *)(this + 0x4c) < fVar6) {
    pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    bVar1 = (bool)NewPVPUtils::IsPlayingFakeMatch();
    cVar2 = NewPVPMgr::IsCurrentMatchingTimeout(pNVar3,bVar1);
    if (cVar2 == '\0') {
      pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      this_01 = (GridItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      psVar4 = (string *)GridItem::GetConditionTracker(this_01);
      bVar1 = (bool)NewPVPUtils::IsPlayingFakeMatch();
      NewPVPMgr::RequestQueryPlayerData(pNVar3,psVar4,false,bVar1);
      fVar6 = (float)PVZ_T();
      pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      fVar7 = (float)NewPVPMgr::GetSyncPlayerInterval(pNVar3);
      fVar8 = 2.0;
      if (fVar7 != 0.0) {
        pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        fVar8 = (float)NewPVPMgr::GetSyncPlayerInterval(pNVar3);
      }
      *(float *)(this + 0x4c) = fVar8 + fVar6;
    }
    else {
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
      this_00 = gLawnApp;
      FUN_05478178(awStack_58,L"[RIFT_REACH_MAX_INTERVAL_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[RIFT_REACH_MAX_INTERVAL_TEXT]",auStack_60);
      pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onTimeOut);
      Sexy::Delegate0::Delegate0<NewPVPIntro,void(NewPVPIntro::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPIntro::syncPlayers() */

void NewPVPIntro::syncPlayers(void)

{
  bool bVar1;
  NewPVPMgr *this;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  bVar1 = (bool)NewPVPUtils::IsPlayingFakeMatch();
  NewPVPMgr::RequestSyncPlayerData(this,100,bVar1);
  return;
}


/* NewPVPIntro::setState(NewPVPIntro::NewPVPIntroState) */

void __thiscall NewPVPIntro::setState(NewPVPIntro *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x54) = param_2;
  switch(param_2) {
  case 1:
    readyForPlayerEnter(this);
    return;
  case 2:
    syncPlayers();
    displayPlayerCards(this);
    return;
  default:
    return;
  case 4:
    readyForPlantSet(this);
    return;
  case 5:
    startGame(this);
    return;
  }
}


/* NewPVPIntro::NewPVPIntro() */

void __thiscall NewPVPIntro::NewPVPIntro(NewPVPIntro *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066471c0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x5c) = uVar1;
  setState(this,0);
  return;
}


/* NewPVPIntro::StaticNew() */

NewPVPIntro * NewPVPIntro::StaticNew(void)

{
  NewPVPIntro *this;
  
  this = ::operator_new(0x60);
  NewPVPIntro(this);
  return this;
}


/* NewPVPIntro::onPlayerEnterReady() */

void __thiscall NewPVPIntro::onPlayerEnterReady(NewPVPIntro *this)

{
  setState(this,2);
  return;
}


/* NewPVPIntro::onSetPlantComplete() */

void __thiscall NewPVPIntro::onSetPlantComplete(NewPVPIntro *this)

{
  setState(this,5);
  return;
}


/* NewPVPIntro::onEnterCallback(int, NewPVPInfoCard*) */

void __thiscall NewPVPIntro::onEnterCallback(NewPVPIntro *this,int param_1,NewPVPInfoCard *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)PVZ_EOT();
  if (*(float *)(this + 0x5c) == fVar2) {
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x5c) = uVar3;
    iVar1 = FUN_034ad848(*(undefined4 *)(this + 0x54));
  }
  else {
    iVar1 = FUN_034ad848(*(undefined4 *)(this + 0x54));
  }
  if ((((iVar1 == 3) && (fVar2 = (float)PVZ_T(), 2.0 <= fVar2 - *(float *)(this + 0x5c))) &&
      (*(int *)(this + 0x58) < param_1)) && (param_1 - *(int *)(this + 0x58) == 1)) {
    UIWidget::SetVisible((UIWidget *)param_2,false);
    iVar1 = *(int *)(this + 0x58);
    *(int *)(this + 0x58) = iVar1 + 1;
    if (0 < iVar1 + 1) {
      setState(this,4);
      return;
    }
  }
  return;
}


/* NewPVPIntro::onStandardIntroComplete() */

void __thiscall NewPVPIntro::onStandardIntroComplete(NewPVPIntro *this)

{
  setState(this,1);
  return;
}


/* NewPVPIntro::onRequestQueryPlayerData() */

void __thiscall NewPVPIntro::onRequestQueryPlayerData(NewPVPIntro *this)

{
  CRefSymbolDb *pCVar1;
  long lVar2;
  ulong uVar3;
  
  pCVar1 = (CRefSymbolDb *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar2 = Reflection::CRefSymbolDb::GetClasses(pCVar1);
  uVar3 = FUN_034b04a4(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
  if (1 < uVar3) {
    pCVar1 = (CRefSymbolDb *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    lVar2 = Reflection::CRefSymbolDb::GetClasses(pCVar1);
    lVar2 = FUN_034b04d4(*(undefined8 *)(lVar2 + 0x20),0);
    if (2 < *(int *)(lVar2 + 0x5c)) {
      pCVar1 = (CRefSymbolDb *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      lVar2 = Reflection::CRefSymbolDb::GetClasses(pCVar1);
      lVar2 = FUN_034b04d4(*(undefined8 *)(lVar2 + 0x20),1);
      if (2 < *(int *)(lVar2 + 0x5c)) {
        setState(this,3);
        return;
      }
    }
  }
  return;
}


/* NewPVPIntro::onNewPVPNetworkResponseReceived(int, int) */

void __thiscall
NewPVPIntro::onNewPVPNetworkResponseReceived(NewPVPIntro *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeOutro::onNewPVPNetworkResponse context=%d status=%d");
  if (param_1 == 5) {
    if (param_2 == 2) {
      onRequestSyncPlayerData(this);
      return;
    }
  }
  else if ((param_1 == 6) && (param_2 == 2)) {
    onRequestQueryPlayerData(this);
    return;
  }
  return;
}

