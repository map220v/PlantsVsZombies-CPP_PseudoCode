// Class: PVZ1ModeOutro


/* PVZ1ModeOutro::onUpdate() */

void __thiscall PVZ1ModeOutro::onUpdate(PVZ1ModeOutro *this)

{
  if (*(int *)(this + 0x18) == 2) {
    *(undefined4 *)(this + 0x18) = 3;
  }
  return;
}


/* PVZ1ModeOutro::onBoardFadeDone() */

void PVZ1ModeOutro::onBoardFadeDone(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  Board::DestroyAllCreatures();
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutro::StaticClassInit() */

void PVZ1ModeOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6b790,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeOutro::StaticGetClass() */

long * PVZ1ModeOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeOutro::PVZ1ModeOutro() */

void __thiscall PVZ1ModeOutro::PVZ1ModeOutro(PVZ1ModeOutro *this)

{
  undefined4 uVar1;
  
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06991660;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PVZ1ModeOutro::StaticNew() */

PVZ1ModeOutro * PVZ1ModeOutro::StaticNew(void)

{
  PVZ1ModeOutro *this;
  
  this = ::operator_new(0x30);
  PVZ1ModeOutro(this);
  return this;
}


/* PVZ1ModeOutro::~PVZ1ModeOutro() */

void __thiscall PVZ1ModeOutro::~PVZ1ModeOutro(PVZ1ModeOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06991660;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* PVZ1ModeOutro::~PVZ1ModeOutro() */

void __thiscall PVZ1ModeOutro::~PVZ1ModeOutro(PVZ1ModeOutro *this)

{
  ~PVZ1ModeOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutro::sendPostEndPlayLoss() */

void PVZ1ModeOutro::sendPostEndPlayLoss(void)

{
  PVZ1ModeUtils *this;
  long extraout_x0;
  float fVar1;
  PVZ1ModeEndPlayParamData local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData(&local_38);
  local_38 = (PVZ1ModeEndPlayParamData)PVZ1ModeUtils::IsHardMode();
  local_37 = 0;
  this = (PVZ1ModeUtils *)PVZ1ModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
  local_34 = SUB84(this,0);
  PVZ1ModeUtils::GetChooseListStr(this);
  FUN_05474278(auStack_30,asStack_20);
  std::string::~string(asStack_20);
  std::string::string(asStack_20,"UISpacetimeEnergy");
  UIWidget::GetWidgetBySheetName(asStack_20);
  nop();
  std::string::~string(asStack_20);
  nop();
  if (extraout_x0 == 0) {
    local_28 = 3;
  }
  else {
    fVar1 = (float)FUN_04c6b224(*(undefined4 *)(extraout_x0 + 0x1d0),
                                *(undefined4 *)(extraout_x0 + 0x1d4));
    local_28 = 2;
    if (0.0 < fVar1) {
      local_28 = 3;
    }
  }
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData
            ((PVZ1ModeEndPlayParamData *)asStack_20,&local_38);
  PVZ1ModeUtils::SendPost_EndPlay(asStack_20);
  PakRecord::~PakRecord((PakRecord *)asStack_20);
  PakRecord::~PakRecord((PakRecord *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeOutro::gameStart() */

void __thiscall PVZ1ModeOutro::gameStart(PVZ1ModeOutro *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PVZ1ModeOutro::startLossOutro() */

void __thiscall PVZ1ModeOutro::startLossOutro(PVZ1ModeOutro *this)

{
  undefined4 uVar1;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  sendPostEndPlayLoss();
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutro::startBoardFade() */

void __thiscall PVZ1ModeOutro::startBoardFade(PVZ1ModeOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 8;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>(aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeOutro::onResultsScreenDismissed() */

void __thiscall PVZ1ModeOutro::onResultsScreenDismissed(PVZ1ModeOutro *this)

{
  UISingletonDialog<UIPVZ1ModeResultScreen>::CloseDialog();
  startBoardFade(this);
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


/* PVZ1ModeOutro::onPlayAgain() */

void __thiscall PVZ1ModeOutro::onPlayAgain(PVZ1ModeOutro *this)

{
  UISingletonDialog<UIPVZ1ModeResultScreen>::CloseDialog();
  startBoardFade(this);
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutro::showResultsScreen(PVZ1ModeResultType) */

void __thiscall PVZ1ModeOutro::showResultsScreen(PVZ1ModeOutro *this,undefined8 param_2)

{
  UIPVZ1ModeResultScreen *pUVar1;
  int iVar2;
  CardGameResultScreen *pCVar3;
  undefined4 uVar4;
  CBMemberTranslatorX aCStack_98 [24];
  string asStack_80 [24];
  Delegate0 aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar4;
  pUVar1 = (UIPVZ1ModeResultScreen *)UISingletonDialog<UIPVZ1ModeResultScreen>::ShowDialog();
  *(UIPVZ1ModeResultScreen **)(this + 0x20) = pUVar1;
  iVar2 = (int)param_2;
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x18) = 4;
    PVZ1ModeUtils::GetCurrentLevel((PVZ1ModeUtils *)&DAT_00000004);
    PVZ1ModeUtils::TryCompleteLevel(asStack_80);
    std::string::~string(asStack_80);
    pUVar1 = *(UIPVZ1ModeResultScreen **)(this + 0x20);
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(this + 0x18) = 5;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(this + 0x18) = 6;
  }
  if (pUVar1 != (UIPVZ1ModeResultScreen *)0x0) {
    UIPVZ1ModeResultScreen::InitView(pUVar1,param_2);
    pCVar3 = *(CardGameResultScreen **)(this + 0x20);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onResultsScreenDismissed);
    Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>(aDStack_68,aCStack_98);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlayAgain);
    Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>(aDStack_38,asStack_80);
    CardGameResultScreen::SetCallback(pCVar3,aDStack_68,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutro::sendPostEndPlay() */

void PVZ1ModeOutro::sendPostEndPlay(void)

{
  char cVar1;
  PVZ1ModeUtils *pPVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  PVZ1ModeEndPlayParamData local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_30 [2] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData(&local_60);
  local_60 = (PVZ1ModeEndPlayParamData)PVZ1ModeUtils::IsHardMode();
  pPVar2 = (PVZ1ModeUtils *)
           std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                     ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48);
  PVZ1ModeUtils::GetLevelChallengeChoose(pPVar2);
  ProfileUtils::GetChallengeStatusForCurrentLevelByChoose
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48,
             (vector<bool,std::allocator<bool>> *)local_30,0);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30);
  uVar4 = local_48;
  lVar3 = FUN_04c6b238(local_48,local_40);
  if (lVar3 == 0) {
LAB_04c6c1b4:
    local_5f = 1;
    pPVar2 = (PVZ1ModeUtils *)PVZ1ModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
    local_5c = SUB84(pPVar2,0);
    PVZ1ModeUtils::GetChooseListStr(pPVar2);
    FUN_05474278(auStack_58,(vector<bool,std::allocator<bool>> *)local_30);
    std::string::~string((string *)local_30);
    local_50 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar3 = FUN_04c6b278(uVar4);
      uVar5 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)(lVar3 + 0x58));
      if (uVar5 <= uVar6) goto LAB_04c6c1b4;
      lVar3 = FUN_04c6b278(local_48);
      auVar7 = FUN_04c6b2d4(*(undefined8 *)(lVar3 + 0x58),uVar6);
      local_30[0] = auVar7;
      local_5f = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
      uVar4 = local_48;
      uVar6 = uVar6 + 1;
    } while ((bool)local_5f);
    pPVar2 = (PVZ1ModeUtils *)PVZ1ModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
    local_5c = SUB84(pPVar2,0);
    PVZ1ModeUtils::GetChooseListStr(pPVar2);
    FUN_05474278(auStack_58,(vector<bool,std::allocator<bool>> *)local_30);
    std::string::~string((string *)local_30);
    local_50 = 1;
  }
  lVar3 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  cVar1 = FUN_04c6b220(*(undefined1 *)(lVar3 + 0x169));
  if (cVar1 != '\0') {
    local_5f = 1;
  }
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData((PVZ1ModeEndPlayParamData *)local_30,&local_60)
  ;
  PVZ1ModeUtils::SendPost_EndPlay((vector<bool,std::allocator<bool>> *)local_30);
  PakRecord::~PakRecord((PakRecord *)local_30);
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  ~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
           *)&local_48);
  PakRecord::~PakRecord((PakRecord *)&local_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ1ModeOutro::startWinOutro() */

void __thiscall PVZ1ModeOutro::startWinOutro(PVZ1ModeOutro *this)

{
  long lVar1;
  undefined4 uVar2;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  sendPostEndPlay();
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar2;
  lVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ_T();
  FUN_04c6b210(lVar1 + 0x164);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutro::registerForEvents() */

void __thiscall PVZ1ModeOutro::registerForEvents(PVZ1ModeOutro *this)

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
  Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startLossOutro);
  Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameStart);
  Sexy::Delegate0::Delegate0<PVZ1ModeOutro,void(PVZ1ModeOutro::*)()>
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
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PVZ1ModeOutro,void(PVZ1ModeOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeOutro::onSuccessResponse() */

void __thiscall PVZ1ModeOutro::onSuccessResponse(PVZ1ModeOutro *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  PVZ1ModeNetworkMgr *pPVar5;
  PVZ1ModeEndOfPlayData *pPVar6;
  char *pcVar7;
  long lVar8;
  UINewPVPTopZombieQueue *this_00;
  undefined8 uVar9;
  undefined8 uVar10;
  TGALogMgr *this_01;
  PVPManager *this_02;
  string *psVar11;
  undefined4 *puVar12;
  ulong uVar13;
  size_t in_x2;
  undefined1 *__n;
  int iVar14;
  ulong uVar15;
  float fVar16;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c0;
  undefined8 local_3b8;
  PVZ1ModeEndOfPlayData aPStack_3a8 [52];
  int local_374;
  undefined8 local_370 [3];
  vector avStack_358 [32];
  TGAPVZ1ModeData aTStack_338 [8];
  undefined1 auStack_330 [8];
  string asStack_328 [8];
  string asStack_320 [8];
  string asStack_318 [8];
  vector<std::string,std::allocator<std::string>> avStack_310 [24];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [368];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x18) = 2;
  pPVar5 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  pPVar6 = (PVZ1ModeEndOfPlayData *)PVZ1ModeNetworkMgr::GetEndPlayInfo(pPVar5);
  PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData(aPStack_3a8,pPVar6);
  if (local_374 != 3) {
    showResultsScreen(this);
  }
  TGAPVZ1ModeData::TGAPVZ1ModeData(aTStack_338);
  DString::DString((DString *)local_370,2);
  pcVar7 = (char *)DString::c_str((DString *)local_370);
  std::string::append((string *)aTStack_338,pcVar7,in_x2);
  DString::~DString((DString *)local_370);
  Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetCurrentLevel();
  FUN_05474278(auStack_330,(DString *)local_370);
  std::string::~string((string *)local_370);
  cVar1 = PVZ1ModeUtils::IsHardMode();
  if (cVar1 == '\0') {
    pcVar7 = "0";
  }
  else {
    pcVar7 = "1";
  }
  __n = auStack_2e8;
  std::string::append(asStack_328,pcVar7,(size_t)auStack_2e8);
  DString::DString((DString *)local_370,local_374);
  pcVar7 = (char *)DString::c_str((DString *)local_370);
  std::string::append(asStack_320,pcVar7,(size_t)__n);
  DString::~DString((DString *)local_370);
  lVar8 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  fVar16 = (float)FUN_04c6b218(*(undefined4 *)(lVar8 + 0x160),*(undefined4 *)(lVar8 + 0x164));
  DString::DString((DString *)local_370,fVar16);
  pcVar7 = (char *)DString::c_str((DString *)local_370);
  std::string::append(asStack_318,pcVar7,(size_t)__n);
  DString::~DString((DString *)local_370);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_3d8);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_2e8,uVar3);
  PlantNameMapperServerID::GetInstance();
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  ProfileUtils::Profile();
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    for (iVar14 = 0; cVar1 = FUN_04c6b22c(this_00[0x199]), iVar14 < cVar1; iVar14 = iVar14 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar14);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_3e0);
      if ((bVar2) &&
         (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_3e0), cVar1 != '\0')) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_3e0);
        SeedPacket::GetPlantType();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_3c0);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_3e0);
          SeedPacket::GetPlantType();
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_370);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_370);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_3c0);
          if (cVar1 != '\0') {
            this_02 = (PVPManager *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_3e0);
            psVar11 = (string *)PVPManager::GetPVPMapDataList(this_02);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)&local_3d8,psVar11);
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_3c0);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_3e0);
    }
  }
  iVar14 = 0;
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_3d8);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_3d8);
  std::
  sort<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar9,uVar10);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_3d8);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_3d8);
  local_3e8 = std::
              unique<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                        (uVar9,uVar10);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_3c0,(__normal_iterator *)&local_3e8);
  local_3e0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_3d8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)local_370,(__normal_iterator *)&local_3e0);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)&local_3d8,local_3c0,local_370[0]);
  iVar4 = FUN_04c6b24c(local_3d8,local_3d0);
  if (0 < 8 - iVar4) {
    do {
      iVar14 = iVar14 + 1;
      std::string::string((string *)local_370,"");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_3d8,(string *)local_370);
      std::string::~string((string *)local_370);
      nop();
    } while (iVar14 != 8 - iVar4);
  }
  std::vector<std::string,std::allocator<std::string>>::operator=(avStack_310,(vector *)&local_3d8);
  if (local_374 == 0) {
    pPVar5 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    pPVar6 = (PVZ1ModeEndOfPlayData *)PVZ1ModeNetworkMgr::GetEndPlayInfo(pPVar5);
    PVZ1ModeEndOfPlayData::PVZ1ModeEndOfPlayData((PVZ1ModeEndOfPlayData *)local_370,pPVar6);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_3c0,avStack_358);
    std::string::string((string *)&local_3e0,"");
    FUN_05462618(auStack_178,(string *)&local_3e0,uVar3);
    std::string::~string((string *)&local_3e0);
    nop();
    uVar15 = 0;
    while( true ) {
      uVar9 = local_3c0;
      uVar13 = FUN_04c6b258(local_3c0,local_3b8);
      if (uVar13 <= uVar15) break;
      puVar12 = (undefined4 *)FUN_04c6b26c(uVar9,uVar15);
      uVar9 = FUN_0546065c(auStack_168,*puVar12);
      uVar9 = FUN_054603b8(uVar9,&DAT_05593348);
      lVar8 = FUN_04c6b26c(local_3c0,uVar15);
      uVar9 = FUN_0546065c(uVar9,*(undefined4 *)(lVar8 + 4));
      FUN_054603b8(uVar9,&DAT_05594620);
      uVar15 = uVar15 + 1;
    }
    FUN_05462824((string *)&local_3e0,auStack_178);
    FUN_05474278(auStack_2f8,(string *)&local_3e0);
    std::string::~string((string *)&local_3e0);
    FUN_054617bc(auStack_178);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_3c0);
    PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData((PVZ1ModeEndOfPlayData *)local_370);
  }
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPVZ1Mode(this_01,aTStack_338);
  FUN_054617bc(auStack_2e8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_3d8);
  TGAPVZ1ModeData::~TGAPVZ1ModeData(aTStack_338);
  PVZ1ModeEndOfPlayData::~PVZ1ModeEndOfPlayData(aPStack_3a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ1ModeOutro::onPVZ1ModeNetworkResponse(int, int) */

void __thiscall
PVZ1ModeOutro::onPVZ1ModeNetworkResponse(PVZ1ModeOutro *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeOutro::onPVZ1ModeNetworkResponse context=%d status=%d");
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

