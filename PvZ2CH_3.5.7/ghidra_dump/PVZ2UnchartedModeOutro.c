// Class: PVZ2UnchartedModeOutro


/* PVZ2UnchartedModeOutro::GetElapseTime() */

float __thiscall PVZ2UnchartedModeOutro::GetElapseTime(PVZ2UnchartedModeOutro *this)

{
  return *(float *)(this + 0x2c) - *(float *)(this + 0x28);
}


/* PVZ2UnchartedModeOutro::onChallengeFailedResponse() */

void __thiscall PVZ2UnchartedModeOutro::onChallengeFailedResponse(PVZ2UnchartedModeOutro *this)

{
  *(undefined4 *)(this + 0x18) = 2;
  return;
}


/* PVZ2UnchartedModeOutro::onUpdate() */

void __thiscall PVZ2UnchartedModeOutro::onUpdate(PVZ2UnchartedModeOutro *this)

{
  if (*(int *)(this + 0x18) == 2) {
    *(undefined4 *)(this + 0x18) = 3;
  }
  return;
}


/* PVZ2UnchartedModeOutro::onBoardFadeDone() */

void PVZ2UnchartedModeOutro::onBoardFadeDone(void)

{
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  Board::DestroyAllCreatures();
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::StaticClassInit() */

void PVZ2UnchartedModeOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ2UnchartedModeOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_04df57f4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeOutro::StaticGetClass() */

long * PVZ2UnchartedModeOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ2UnchartedModeOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ2UnchartedModeOutro::PVZ2UnchartedModeOutro() */

void __thiscall PVZ2UnchartedModeOutro::PVZ2UnchartedModeOutro(PVZ2UnchartedModeOutro *this)

{
  undefined4 uVar1;
  
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069cfb70;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x38));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PVZ2UnchartedModeOutro::StaticNew() */

PVZ2UnchartedModeOutro * PVZ2UnchartedModeOutro::StaticNew(void)

{
  PVZ2UnchartedModeOutro *this;
  
  this = ::operator_new(0x58);
  PVZ2UnchartedModeOutro(this);
  return this;
}


/* PVZ2UnchartedModeOutro::~PVZ2UnchartedModeOutro() */

void __thiscall PVZ2UnchartedModeOutro::~PVZ2UnchartedModeOutro(PVZ2UnchartedModeOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069cfb70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x38));
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* PVZ2UnchartedModeOutro::~PVZ2UnchartedModeOutro() */

void __thiscall PVZ2UnchartedModeOutro::~PVZ2UnchartedModeOutro(PVZ2UnchartedModeOutro *this)

{
  ~PVZ2UnchartedModeOutro(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UnchartedModeOutro::OnLuaNotify(std::string const&) */

void __thiscall PVZ2UnchartedModeOutro::OnLuaNotify(PVZ2UnchartedModeOutro *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator!=(param_1,"Uncharted_Boost_End");
  if (!bVar1) {
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x38));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x38));
      return;
    }
  }
  return;
}


/* PVZ2UnchartedModeOutro::gameStart() */

void __thiscall PVZ2UnchartedModeOutro::gameStart(PVZ2UnchartedModeOutro *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::startBoardFade() */

void __thiscall PVZ2UnchartedModeOutro::startBoardFade(PVZ2UnchartedModeOutro *this)

{
  undefined8 uVar1;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 7;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBoardFadeDone);
  Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
            (aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeOutro::onRealExitToMap() */

void __thiscall PVZ2UnchartedModeOutro::onRealExitToMap(PVZ2UnchartedModeOutro *this)

{
  PVZ2UIAwardScreen *this_00;
  
  UISingletonDialog<PVZ2UnchartedModeResultScreen>::CloseDialog();
  startBoardFade(this);
  *(undefined8 *)(this + 0x20) = 0;
  this_00 = (PVZ2UIAwardScreen *)FUN_04df4f20(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  if (this_00 != (PVZ2UIAwardScreen *)0x0) {
    PVZ2UIAwardScreen::KillAwardScreen(this_00);
    return;
  }
  return;
}


/* PVZ2UnchartedModeOutro::onPlayAgain() */

void __thiscall PVZ2UnchartedModeOutro::onPlayAgain(PVZ2UnchartedModeOutro *this)

{
  PVZ2UIAwardScreen *this_00;
  
  UISingletonDialog<PVZ2UnchartedModeResultScreen>::CloseDialog();
  startBoardFade(this);
  *(undefined8 *)(this + 0x20) = 0;
  this_00 = (PVZ2UIAwardScreen *)FUN_04df4f20(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  if (this_00 != (PVZ2UIAwardScreen *)0x0) {
    PVZ2UIAwardScreen::KillAwardScreen(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::showResultsScreen(PVZ2UnchartedModeResultType) */

void __thiscall PVZ2UnchartedModeOutro::showResultsScreen(PVZ2UnchartedModeOutro *this,int param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  CardGameResultScreen *pCVar4;
  undefined4 uVar5;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate0 aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar5;
  lVar2 = UISingletonDialog<PVZ2UnchartedModeResultScreen>::ShowDialog();
  *(long *)(this + 0x20) = lVar2;
  if (param_2 == 0) {
    *(undefined4 *)(this + 0x18) = 4;
  }
  else if (param_2 == 1) {
    *(undefined4 *)(this + 0x18) = 5;
  }
  if (lVar2 != 0) {
    FUN_04df4f3c(lVar2 + 0x2a8,*(undefined4 *)(this + 0x30));
    PVZ2UnchartedModeResultScreen::InitView
              (*(PVZ2UnchartedModeResultScreen **)(this + 0x20),param_2);
    iVar1 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
    if (iVar1 == 3) {
      pCVar4 = *(CardGameResultScreen **)(this + 0x20);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onResultsScreenDismissed);
      Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
                (aDStack_68,aCStack_98);
      pcVar3 = onPlayNextLevel;
    }
    else {
      pCVar4 = *(CardGameResultScreen **)(this + 0x20);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onResultsScreenDismissed);
      Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
                (aDStack_68,aCStack_98);
      pcVar3 = onPlayAgain;
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar3);
    Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
              (aDStack_38,aCStack_80);
    CardGameResultScreen::SetCallback(pCVar4,aDStack_68,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeOutro::sendPostEndPlayLoss() */

void __thiscall PVZ2UnchartedModeOutro::sendPostEndPlayLoss(PVZ2UnchartedModeOutro *this)

{
  showResultsScreen(this,1);
  return;
}


/* PVZ2UnchartedModeOutro::onSuccessResponse() */

void __thiscall PVZ2UnchartedModeOutro::onSuccessResponse(PVZ2UnchartedModeOutro *this)

{
  *(undefined4 *)(this + 0x18) = 2;
  showResultsScreen(this,0);
  return;
}


/* PVZ2UnchartedModeOutro::onPVZ2UnchartedModeNetworkResponse(int, int) */

void __thiscall
PVZ2UnchartedModeOutro::onPVZ2UnchartedModeNetworkResponse
          (PVZ2UnchartedModeOutro *this,int param_1,int param_2)

{
  Sexy::OutputDebugStrF
            ((wchar_t *)"PVZ2UnchartedModeOutro::onPVZ1ModeNetworkResponse context=%d status=%d");
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


/* PVZ2UnchartedModeOutro::SetChooseCardsCallback(std::function<void ()>) */

void __thiscall
PVZ2UnchartedModeOutro::SetChooseCardsCallback(PVZ2UnchartedModeOutro *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x38),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::onResultsScreenDismissed() */

void __thiscall PVZ2UnchartedModeOutro::onResultsScreenDismissed(PVZ2UnchartedModeOutro *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04df549c(afStack_28,this);
  SetChooseCardsCallback(this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::string(asStack_30,"Uncharted_Boost_EndLevel");
  Cpp2Lua(asStack_30);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::onPlayNextLevel() */

void __thiscall PVZ2UnchartedModeOutro::onPlayNextLevel(PVZ2UnchartedModeOutro *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04df54f8(afStack_28,this);
  SetChooseCardsCallback(this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::string::string(asStack_30,"Uncharted_Boost_EndLevel");
  Cpp2Lua(asStack_30);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::onRealContinueToPlay() */

void __thiscall PVZ2UnchartedModeOutro::onRealContinueToPlay(PVZ2UnchartedModeOutro *this)

{
  int iVar1;
  int iVar2;
  PVZ2UIAwardScreen *this_00;
  PVZ2UnchartedModeUtils *pPVar3;
  undefined8 uVar4;
  long lVar5;
  LevelBasedModifierModuleMgr *this_01;
  string *psVar6;
  ResourceInfo *pRVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  char *pcVar9;
  int iVar10;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PVZ2UnchartedModeResultScreen>::CloseDialog();
  *(undefined8 *)(this + 0x20) = 0;
  this_00 = (PVZ2UIAwardScreen *)FUN_04df4f20(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  if (this_00 != (PVZ2UIAwardScreen *)0x0) {
    PVZ2UIAwardScreen::KillAwardScreen(this_00);
  }
  Board::DestroyAllCreatures();
  Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
  pPVar3 = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::IsHardMode();
  PVZ2UnchartedModeUtils::GetPrefixWorld(pPVar3);
  if (((ulong)pPVar3 & 0xff) == 0) {
    pcVar9 = "_n";
  }
  else {
    pcVar9 = "_h";
  }
  std::operator+(asStack_40,pcVar9);
  std::operator+(asStack_30,"_");
  Sexy::StrFormat("%d",asStack_20,(ulong)(iVar1 + 2));
  std::operator+(asStack_28,asStack_20);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  uVar4 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  FUN_05475d88(asStack_20,asStack_38);
  UnchartedModeNetworkMgr::SetCurrentLevel(uVar4,asStack_20);
  std::string::~string(asStack_20);
  lVar5 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  FUN_04df4f24(lVar5 + 0x168,iVar1 + 1);
  iVar1 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
  if (iVar1 == 3) {
    pPVar3 = (PVZ2UnchartedModeUtils *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
    PVZ2UnchartedModeUtils::GetCurrentThemeList(pPVar3);
    RiftThemeMgr::SyncTheme((RiftThemeMgr *)pPVar3,(vector *)asStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
  }
  FUN_04df4f80(gGameStateMgr + 0x1eb1);
  this_01 = (LevelBasedModifierModuleMgr *)
            Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance();
  LevelBasedModifierModuleMgr::ClearSelectedCollections(this_01);
  psVar6 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::LoadLevelDefinition(psVar6,SUB81(asStack_38,0));
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  if (pRVar7 != (ResourceInfo *)0x0) {
    uVar4 = *(undefined8 *)(pRVar7 + 0x1c8);
    lVar5 = FUN_04df4f4c(uVar4,*(undefined8 *)(pRVar7 + 0x1d0));
    if (lVar5 != 0) {
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04df4f7c(uVar4);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      lVar5 = FUN_04df4f58(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x20));
      if (lVar5 != 0) {
        pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04df4f7c(*(undefined8 *)(pRVar7 + 0x1c8));
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
        iVar1 = FUN_04df4f58(*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x20));
        if (0 < iVar1) {
          iVar10 = 0;
          do {
            iVar2 = Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstancePtr();
            iVar10 = iVar10 + 1;
            LevelBasedModifierModuleMgr::AddLevelModifierModuleCollections(iVar2,0);
          } while (iVar10 != iVar1);
        }
      }
    }
  }
  lVar5 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  PVZ_T();
  FUN_04df4f2c(lVar5 + 0x19c);
  GameStateMgr::StartLevel(gGameStateMgr,asStack_40,asStack_38,0xffffffff,1,1,0);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZ2UnchartedModeOutro::GetModes() */

void PVZ2UnchartedModeOutro::GetModes(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  vector<std::string,std::allocator<std::string>> *in_x8;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  std::vector<std::string,std::allocator<std::string>>::vector(in_x8,(vector *)(pRVar1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::sendPostEndPlay(bool) */

void __thiscall PVZ2UnchartedModeOutro::sendPostEndPlay(PVZ2UnchartedModeOutro *this,bool param_1)

{
  bool bVar1;
  PVZ2UnchartedModeUtils *this_00;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  string asStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  PVZ2UnchartedModeEndPlayParamData local_80 [8];
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined1 auStack_68 [8];
  undefined1 local_60;
  vector<bool,std::allocator<bool>> avStack_58 [40];
  undefined1 local_30 [2] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData(local_80);
  this_00 = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::IsHardMode();
  local_80[0] = SUB81(this_00,0);
  PVZ2UnchartedModeUtils::GetPrefixWorld(this_00);
  FUN_05474278(auStack_78,(string *)local_30);
  std::string::~string((string *)local_30);
  local_70 = PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
  local_60 = param_1;
  std::vector<bool,std::allocator<bool>>::vector(avStack_58);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  ProfileUtils::GetChallengeStatusForCurrentLevel((vector *)&local_98);
  uVar3 = local_98;
  lVar2 = FUN_04df4f64(local_98,local_90);
  if (lVar2 != 0) {
    uVar5 = 0;
    while( true ) {
      lVar2 = FUN_04df4f78(uVar3);
      uVar4 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)(lVar2 + 0x58));
      if (uVar4 <= uVar5) break;
      lVar2 = FUN_04df4f78(local_98);
      auVar6 = FUN_04df4fe0(*(undefined8 *)(lVar2 + 0x58),uVar5);
      local_30[0] = auVar6;
      bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
      std::vector<bool,std::allocator<bool>>::push_back(avStack_58,bVar1);
      lVar2 = FUN_04df4f78(local_98);
      auVar6 = FUN_04df4fe0(*(undefined8 *)(lVar2 + 0x58),uVar5);
      local_30[0] = auVar6;
      bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
      if (bVar1) {
        *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      }
      uVar5 = uVar5 + 1;
      uVar3 = local_98;
    }
  }
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)local_30,(vector *)avStack_58);
  PVZ2UnchartedModeUtils::GetChallengeListStr
            ((PVZ2UnchartedModeUtils *)asStack_a0,(string *)local_30);
  FUN_05474278(auStack_68,asStack_a0);
  std::string::~string(asStack_a0);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30);
  PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData
            ((PVZ2UnchartedModeEndPlayParamData *)local_30,local_80);
  PVZ2UnchartedModeUtils::SendPost_EndPlay((string *)local_30);
  DiscountPlant::~DiscountPlant((DiscountPlant *)local_30);
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  ~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
           *)&local_98);
  std::vector<bool,std::allocator<bool>>::~vector(avStack_58);
  DiscountPlant::~DiscountPlant((DiscountPlant *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeOutro::startWinOutro() */

void __thiscall PVZ2UnchartedModeOutro::startWinOutro(PVZ2UnchartedModeOutro *this)

{
  long lVar1;
  undefined4 uVar2;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::NotifyUnchartedBirthdayFinished,true);
  sendPostEndPlay(this,true);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar2;
  lVar1 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  PVZ_T();
  FUN_04df4f34(lVar1 + 0x1a0);
  return;
}


/* PVZ2UnchartedModeOutro::startLossOutro() */

void __thiscall PVZ2UnchartedModeOutro::startLossOutro(PVZ2UnchartedModeOutro *this)

{
  undefined4 uVar1;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  sendPostEndPlay(this,false);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeOutro::registerForEvents() */

void __thiscall PVZ2UnchartedModeOutro::registerForEvents(PVZ2UnchartedModeOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
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
  Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startLossOutro);
  Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameStart);
  Sexy::Delegate0::Delegate0<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVZ2UnchartedModeNetworkResponse);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

