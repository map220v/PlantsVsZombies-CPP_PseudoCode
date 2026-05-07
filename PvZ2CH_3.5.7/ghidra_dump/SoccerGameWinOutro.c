// Class: SoccerGameWinOutro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameWinOutro::StaticClassInit() */

void SoccerGameWinOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerGameWinOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_03938a60,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameWinOutro::StaticGetClass() */

long * SoccerGameWinOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SoccerGameWinOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameWinOutro::SoccerGameWinOutro() */

void __thiscall SoccerGameWinOutro::SoccerGameWinOutro(SoccerGameWinOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066cb150;
  return;
}


/* SoccerGameWinOutro::StaticNew() */

SoccerGameWinOutro * SoccerGameWinOutro::StaticNew(void)

{
  SoccerGameWinOutro *this;
  
  this = ::operator_new(0x20);
  SoccerGameWinOutro(this);
  return this;
}


/* SoccerGameWinOutro::~SoccerGameWinOutro() */

void __thiscall SoccerGameWinOutro::~SoccerGameWinOutro(SoccerGameWinOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066cb150;
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* SoccerGameWinOutro::~SoccerGameWinOutro() */

void __thiscall SoccerGameWinOutro::~SoccerGameWinOutro(SoccerGameWinOutro *this)

{
  ~SoccerGameWinOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameWinOutro::ShowEndLevelUI() */

void __thiscall SoccerGameWinOutro::ShowEndLevelUI(SoccerGameWinOutro *this)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldCupManager *pWVar10;
  XMLParser *this_02;
  undefined8 uVar11;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar9 != 0) {
    uVar4 = FUN_03933134(*(undefined4 *)(lVar9 + 0x24));
    uVar5 = FUN_03933138(*(undefined4 *)(lVar9 + 0x28));
    SoccerGameLossOutro::SetScore((SoccerGameLossOutro *)this,uVar4,uVar5);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar6 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar7 = WorldCupManager::getCurLoopNum(pWVar10);
  if (iVar7 < 0) goto LAB_03936910;
  this_02 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar8 = Sexy::XMLParser::GetCurrentLineNum(this_02);
  pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar1 = WorldCupManager::getIsQuit(pWVar10);
  pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar2 = WorldCupManager::isNeedConsumeTickets(pWVar10);
  if (cVar2 == '\0') {
LAB_039369e0:
    if (*(int *)(this + 0x18) != *(int *)(this + 0x1c)) goto LAB_039368fc;
    if (cVar1 != '\0') goto LAB_03936910;
    uVar4 = 2;
    cVar2 = '\x02';
LAB_03936a20:
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
    INetworkMsgProcess::RequestSoccerEndReward(this_04,iVar7,uVar4,iVar8);
  }
  else {
    if (*(int *)(this + 0x18) == *(int *)(this + 0x1c)) {
      pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      WorldCupManager::addWorldCupTikets(pWVar10,1);
      goto LAB_039369e0;
    }
LAB_039368fc:
    cVar2 = iVar6 == 1;
    uVar4 = (uint)(byte)cVar2;
    if (cVar1 == '\0') goto LAB_03936a20;
  }
  if ((cVar2 == '\x01') && (cVar1 = PlayerInfo::GetHasPlayedWorldCup(this_01), cVar1 != '\0')) {
    pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::addCurLoopNum(pWVar10);
  }
LAB_03936910:
  uVar11 = UISingletonDialog<UIWorldCupEndLevel>::ShowDialog();
  st_resultInfo::st_resultInfo((st_resultInfo *)&local_18);
  local_18 = 1;
  uStack_14 = *(undefined4 *)(this + 0x18);
  local_10 = *(undefined4 *)(this + 0x1c);
  UIWorldCupEndLevel::initUI(uVar11,CONCAT44(uStack_14,1),CONCAT44(uStack_c,local_10));
  uVar11 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_20,uVar11);
  bVar3 = std::operator==(asStack_20,"WorldCup_0");
  if (((bVar3) && (this_01 != (PlayerInfo *)0x0)) &&
     (cVar1 = PlayerInfo::GetHasPlayedWorldCup(this_01), cVar1 == '\0')) {
    PlayerInfo::SetHasPlayedWorldCup(this_01,true);
  }
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameWinOutro::OnGameOverEffectDone(StandaloneEffect*) */

void SoccerGameWinOutro::OnGameOverEffectDone(StandaloneEffect *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ProfileMgr *this;
  PlayerInfo *this_00;
  WorldCupManager *pWVar10;
  XMLParser *this_01;
  undefined8 uVar11;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  string asStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar9 = FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar9 != 0) {
    uVar4 = FUN_03933134(*(undefined4 *)(lVar9 + 0x24));
    uVar5 = FUN_03933138(*(undefined4 *)(lVar9 + 0x28));
    SoccerGameLossOutro::SetScore((SoccerGameLossOutro *)param_1,uVar4,uVar5);
  }
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar6 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar7 = WorldCupManager::getCurLoopNum(pWVar10);
  if (iVar7 < 0) goto LAB_03936910;
  this_01 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar8 = Sexy::XMLParser::GetCurrentLineNum(this_01);
  pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar1 = WorldCupManager::getIsQuit(pWVar10);
  pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar2 = WorldCupManager::isNeedConsumeTickets(pWVar10);
  if (cVar2 == '\0') {
LAB_039369e0:
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) goto LAB_039368fc;
    if (cVar1 != '\0') goto LAB_03936910;
    uVar4 = 2;
    cVar2 = '\x02';
LAB_03936a20:
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
    INetworkMsgProcess::RequestSoccerEndReward(this_03,iVar7,uVar4,iVar8);
  }
  else {
    if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
      pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      WorldCupManager::addWorldCupTikets(pWVar10,1);
      goto LAB_039369e0;
    }
LAB_039368fc:
    cVar2 = iVar6 == 1;
    uVar4 = (uint)(byte)cVar2;
    if (cVar1 == '\0') goto LAB_03936a20;
  }
  if ((cVar2 == '\x01') && (cVar1 = PlayerInfo::GetHasPlayedWorldCup(this_00), cVar1 != '\0')) {
    pWVar10 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::addCurLoopNum(pWVar10);
  }
LAB_03936910:
  uVar11 = UISingletonDialog<UIWorldCupEndLevel>::ShowDialog();
  st_resultInfo::st_resultInfo((st_resultInfo *)&uStack_18);
  uStack_18 = 1;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_10 = *(undefined4 *)(param_1 + 0x1c);
  UIWorldCupEndLevel::initUI(uVar11,CONCAT44(uStack_14,1),CONCAT44(uStack_c,uStack_10));
  uVar11 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_20,uVar11);
  bVar3 = std::operator==(asStack_20,"WorldCup_0");
  if (((bVar3) && (this_00 != (PlayerInfo *)0x0)) &&
     (cVar1 = PlayerInfo::GetHasPlayedWorldCup(this_00), cVar1 == '\0')) {
    PlayerInfo::SetHasPlayedWorldCup(this_00,true);
  }
  std::string::~string(asStack_20);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameWinOutro::CreateGameOverEffect() */

void SoccerGameWinOutro::CreateGameOverEffect(void)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this;
  ResourceInfo *pRVar3;
  int local_70;
  int local_6c;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  int local_58;
  int local_54;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(gLawnApp + 0x724);
  iVar2 = *(int *)(gLawnApp + 0x728);
  Board::GetBoardBaseOffset();
  Board::GetBoardBaseOffset();
  Sexy::Point::Point((Point *)&local_70,(int)((float)iVar1 * 0.5 - (float)local_58),
                     (int)((float)iVar2 * 0.5 - (float)local_54));
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_70);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)local_70,(float)local_6c);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this,(SexyVector2 *)&local_58,0xdbba1);
  std::string::string(asStack_60,"POPANIM_EFFECTS_WORLDCUP_FINISH");
  GetPAMByName(asStack_60);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  std::string::~string(asStack_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)&local_58,"OnGameOverEffectDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_60,
             (FastCurve *)&local_58);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_58);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Effect_PopAnim::SetCentered(this,true);
  std::string::string((string *)&local_58,"animation");
  Effect_PopAnim::PlaySingleAnimation(this,(FastCurve *)&local_58,0);
  std::string::~string((string *)&local_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameWinOutro::registerForEvents() */

void __thiscall SoccerGameWinOutro::registerForEvents(SoccerGameWinOutro *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CreateGameOverEffect);
  Sexy::Delegate0::Delegate0<SoccerGameWinOutro,void(SoccerGameWinOutro::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

