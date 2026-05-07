// Class: SoccerGameLossOutro


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameLossOutro::StaticClassInit() */

void SoccerGameLossOutro::StaticClassInit(void)

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
    std::string::string(asStack_10,"SoccerGameLossOutro");
    (*pcVar2)(plVar1,asStack_10,FUN_03938c88,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SoccerGameLossOutro::StaticGetClass() */

long * SoccerGameLossOutro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SoccerGameLossOutro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SoccerGameLossOutro::SetScore(unsigned int, unsigned int) */

void __thiscall SoccerGameLossOutro::SetScore(SoccerGameLossOutro *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x18) = param_1;
  *(uint *)(this + 0x1c) = param_2;
  return;
}


/* SoccerGameLossOutro::SoccerGameLossOutro() */

void __thiscall SoccerGameLossOutro::SoccerGameLossOutro(SoccerGameLossOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066cb2b0;
  return;
}


/* SoccerGameLossOutro::StaticNew() */

SoccerGameLossOutro * SoccerGameLossOutro::StaticNew(void)

{
  SoccerGameLossOutro *this;
  
  this = ::operator_new(0x20);
  SoccerGameLossOutro(this);
  return this;
}


/* SoccerGameLossOutro::~SoccerGameLossOutro() */

void __thiscall SoccerGameLossOutro::~SoccerGameLossOutro(SoccerGameLossOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066cb2b0;
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* SoccerGameLossOutro::~SoccerGameLossOutro() */

void __thiscall SoccerGameLossOutro::~SoccerGameLossOutro(SoccerGameLossOutro *this)

{
  ~SoccerGameLossOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameLossOutro::ShowEndLevelUI() */

void __thiscall SoccerGameLossOutro::ShowEndLevelUI(SoccerGameLossOutro *this)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  WorldCupManager *pWVar9;
  XMLParser *this_00;
  undefined8 uVar10;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  undefined4 local_18;
  int iStack_14;
  int local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar8 != 0) {
    uVar3 = FUN_03933134(*(undefined4 *)(lVar8 + 0x24));
    uVar4 = FUN_03933138(*(undefined4 *)(lVar8 + 0x28));
    SetScore(this,uVar3,uVar4);
  }
  iVar5 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar6 = WorldCupManager::getCurLoopNum(pWVar9);
  if (iVar6 < 0) goto LAB_03936b20;
  this_00 = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar7 = Sexy::XMLParser::GetCurrentLineNum(this_00);
  pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar1 = WorldCupManager::getIsQuit(pWVar9);
  pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar2 = WorldCupManager::isNeedConsumeTickets(pWVar9);
  if (cVar2 == '\0') {
LAB_03936b94:
    uVar3 = 2;
    if (*(int *)(this + 0x18) != *(int *)(this + 0x1c)) {
      uVar3 = (uint)(iVar5 == 1);
    }
  }
  else {
    if (*(int *)(this + 0x18) == *(int *)(this + 0x1c)) {
      pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      WorldCupManager::addWorldCupTikets(pWVar9,1);
      goto LAB_03936b94;
    }
    uVar3 = (uint)(iVar5 == 1);
  }
  if (cVar1 == '\0') {
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
    INetworkMsgProcess::RequestSoccerEndReward(this_02,iVar6,uVar3,iVar7);
  }
LAB_03936b20:
  uVar10 = UISingletonDialog<UIWorldCupEndLevel>::ShowDialog();
  st_resultInfo::st_resultInfo((st_resultInfo *)&local_18);
  iStack_14 = *(int *)(this + 0x18);
  local_10 = *(int *)(this + 0x1c);
  local_18 = 0;
  if (iStack_14 == local_10) {
    local_18 = 2;
  }
  UIWorldCupEndLevel::initUI(uVar10,CONCAT44(iStack_14,local_18),CONCAT44(uStack_c,local_10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameLossOutro::OnGameOverEffectDone(StandaloneEffect*) */

void SoccerGameLossOutro::OnGameOverEffectDone(StandaloneEffect *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  WorldCupManager *pWVar9;
  XMLParser *this;
  undefined8 uVar10;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar8 = FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar8 != 0) {
    uVar3 = FUN_03933134(*(undefined4 *)(lVar8 + 0x24));
    uVar4 = FUN_03933138(*(undefined4 *)(lVar8 + 0x28));
    SetScore((SoccerGameLossOutro *)param_1,uVar3,uVar4);
  }
  iVar5 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar6 = WorldCupManager::getCurLoopNum(pWVar9);
  if (iVar6 < 0) goto LAB_03936b20;
  this = (XMLParser *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  iVar7 = Sexy::XMLParser::GetCurrentLineNum(this);
  pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar1 = WorldCupManager::getIsQuit(pWVar9);
  pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
  cVar2 = WorldCupManager::isNeedConsumeTickets(pWVar9);
  if (cVar2 == '\0') {
LAB_03936b94:
    uVar3 = 2;
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
      uVar3 = (uint)(iVar5 == 1);
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) {
      pWVar9 = (WorldCupManager *)Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
      WorldCupManager::addWorldCupTikets(pWVar9,1);
      goto LAB_03936b94;
    }
    uVar3 = (uint)(iVar5 == 1);
  }
  if (cVar1 == '\0') {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestSoccerEndReward(this_01,iVar6,uVar3,iVar7);
  }
LAB_03936b20:
  uVar10 = UISingletonDialog<UIWorldCupEndLevel>::ShowDialog();
  st_resultInfo::st_resultInfo((st_resultInfo *)&uStack_18);
  iStack_14 = *(int *)(param_1 + 0x18);
  iStack_10 = *(int *)(param_1 + 0x1c);
  uStack_18 = 0;
  if (iStack_14 == iStack_10) {
    uStack_18 = 2;
  }
  UIWorldCupEndLevel::initUI(uVar10,CONCAT44(iStack_14,uStack_18),CONCAT44(uStack_c,iStack_10));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SoccerGameLossOutro::CreateGameOverEffect() */

void SoccerGameLossOutro::CreateGameOverEffect(void)

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
/* SoccerGameLossOutro::registerForEvents() */

void __thiscall SoccerGameLossOutro::registerForEvents(SoccerGameLossOutro *this)

{
  long lVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03936648(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar1 != 0) {
    pLVar2 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CreateGameOverEffect);
    Sexy::Delegate0::Delegate0<SoccerGameLossOutro,void(SoccerGameLossOutro::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

