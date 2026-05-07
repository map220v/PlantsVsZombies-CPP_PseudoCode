// Class: ThunderIntro


/* ThunderIntro::onCursorDestroyed(BaseCursor*) */

void ThunderIntro::onCursorDestroyed(BaseCursor *param_1)

{
  return;
}


/* ThunderIntro::OnLevelEnded() */

void __thiscall ThunderIntro::OnLevelEnded(ThunderIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::updateState_WAIT_PLANTED() */

void ThunderIntro::updateState_WAIT_PLANTED(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UINextWaveButton");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this != (UIWidget *)0x0) {
    UIWidget::SetVisible(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderIntro::isInState(TIState) const */

bool __thiscall ThunderIntro::isInState(ThunderIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e5c6e4(*(undefined4 *)(this + 0x68));
  return iVar1 == param_2;
}


/* ThunderIntro::onThunderStart() */

void __thiscall ThunderIntro::onThunderStart(ThunderIntro *this)

{
  isInState(this,1);
  return;
}


/* ThunderIntro::getThunderIntroStateSerialization() */

void __thiscall ThunderIntro::getThunderIntroStateSerialization(ThunderIntro *this)

{
  FUN_03e5c6e4(*(undefined4 *)(this + 0x68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::DrawRightHighlight(Sexy::Graphics*) */

void __thiscall ThunderIntro::DrawRightHighlight(ThunderIntro *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  fVar12 = *(float *)(param_1 + 0x20);
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  *(float *)(param_1 + 0x10) = (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  *(float *)(param_1 + 0x14) = (float)iVar1;
  iVar1 = FUN_03e5c9b8(200);
  fVar9 = *(float *)(param_1 + 0x18);
  fVar11 = *(float *)(param_1 + 0x24);
  iVar2 = FUN_03e5c9b8(0xa0);
  fVar10 = *(float *)(param_1 + 0x1c);
  Sexy::Insets::Insets(aIStack_18,0xff,0xfc,0x5f,0x95);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar7 = (float)FUN_03e5c9cc((float)(iVar3 * 3) * *(float *)(param_1 + 0x18));
  BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = FUN_03e5c9b8();
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar8 = *(float *)(param_1 + 0x18);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar5 = FUN_03e5c9b8(iVar5 * iVar6);
  Sexy::Insets::Insets
            (aIStack_18,
             (int)((float)(int)((float)(int)(((float)iVar1 - fVar12) * fVar9) + fVar12) + fVar7),
             (int)((float)(int)(((float)iVar2 - fVar11) * fVar10) + fVar11),
             (int)((float)(iVar3 * (iVar4 + -3)) * fVar8),
             (int)((float)iVar5 * *(float *)(param_1 + 0x1c)));
  Sexy::Graphics::FillRect(param_1,(TRect *)aIStack_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderIntro::OnUpdate() */

void __thiscall ThunderIntro::OnUpdate(ThunderIntro *this)

{
  StateMachine<TIState>::UpdateState((StateMachine<TIState> *)(this + 0x68));
  return;
}


/* ThunderIntro::ThunderIntro() */

void __thiscall ThunderIntro::ThunderIntro(ThunderIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678c750;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  StateMachine<TIState>::StateMachine((StateMachine<TIState> *)(this + 0x68));
  return;
}


/* ThunderIntro::StaticNew() */

ThunderIntro * ThunderIntro::StaticNew(void)

{
  ThunderIntro *this;
  
  this = ::operator_new(0x108);
  ThunderIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::onProgressMeterSetFlagCount(int) */

void ThunderIntro::onProgressMeterSetFlagCount(int param_1)

{
  bool bVar1;
  char cVar2;
  UINewPVPTopZombieQueue *this;
  SeedPacket *this_00;
  CrazyNPCManager *pCVar3;
  WaveManager *this_01;
  SunDropperModule *this_02;
  int iVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  FUN_03e5c6d0(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this != (UINewPVPTopZombieQueue *)0x0) {
    for (; cVar2 = FUN_03e5c6bc(this[0x199]), iVar4 < cVar2; iVar4 = iVar4 + 1) {
      UINewPVPTopZombieQueue::gettItem(this,iVar4);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_50);
      if (bVar1) {
        this_00 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        SeedPacket::SetDisabled(this_00,true);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    }
  }
  pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  cVar2 = CrazyNPCManager::IsNarrationActive(pCVar3);
  if (cVar2 == '\0') {
    this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    if (this_01 != (WaveManager *)0x0) {
      WaveManager::SetPause(this_01,true);
    }
    this_02 = (SunDropperModule *)FUN_03e5d554(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
    ;
    if (this_02 != (SunDropperModule *)0x0) {
      SunDropperModule::SetPaused(this_02,true);
    }
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"SHOWTHUNDER_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)(ulong)(uint)param_1,onShowThunderNarrationFinished);
    Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_38,aRStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ThunderIntro::clearBouncingArrows() */

void __thiscall ThunderIntro::clearBouncingArrows(ThunderIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x50);
    uVar2 = FUN_03e5c6e8(uVar4,*(undefined8 *)(this + 0x58));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e5c6f4(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x50));
  return;
}


/* ThunderIntro::~ThunderIntro() */

void __thiscall ThunderIntro::~ThunderIntro(ThunderIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678c750;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x68));
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* ThunderIntro::~ThunderIntro() */

void __thiscall ThunderIntro::~ThunderIntro(ThunderIntro *this)

{
  ~ThunderIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::addBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall ThunderIntro::addBouncingArrow(ThunderIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06adf030);
  Effect_BouncingArrow::SetArrowImage(this_00,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(this_00,20.0,40.0);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,param_1,1000000);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)(this + 0x50),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::onEnterState_WAIT_PLANT_SELECT(TIState) */

void ThunderIntro::onEnterState_WAIT_PLANT_SELECT(ThunderIntro *param_1)

{
  int iVar1;
  UINewPVPTopZombieQueue *this;
  SeedPacket *pSVar2;
  FishingEnergyBar *this_00;
  Effect_BouncingArrow *this_01;
  TPoint aTStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),200);
  clearBouncingArrows(param_1);
  this = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this != (UINewPVPTopZombieQueue *)0x0) {
    Board::GetBoardBaseOffset();
    UINewPVPTopZombieQueue::gettItem(this,0);
    pSVar2 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    SeedPacket::SetDisabled(pSVar2,false);
    pSVar2 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    SeedPacket::SetAlwaysPlantable(pSVar2,true);
    this_00 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    FishingEnergyBar::onGameUnpaused(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    UIWidget::GetDrawRect();
    Sexy::Point::Point(aPStack_28,local_18 + local_10,local_14 + local_c / 2);
    Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_28,aTStack_40);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)aFStack_20);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    iVar1 = FUN_03e5c9b8(0x14);
    Sexy::FastCurve::SetOutRange(aFStack_20,(float)(local_30 + iVar1),(float)local_2c);
    this_01 = (Effect_BouncingArrow *)addBouncingArrow(param_1,(SexyVector2 *)aFStack_20);
    Effect_BouncingArrow::PointLeft(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::onEnterState_WAIT_PLANTED(TIState) */

void ThunderIntro::onEnterState_WAIT_PLANTED(ThunderIntro *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clearBouncingArrows(param_1);
  BoardTransforms::GridToBoardSpaceX(1);
  iVar1 = FUN_03e5c9b8();
  iVar2 = BoardTransforms::GridToBoardSpaceY(1);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = FUN_03e5c9b8(iVar2 - iVar3 / 2);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
  addBouncingArrow(param_1,(SexyVector2 *)aFStack_10);
  BoardTransforms::GridToBoardSpaceX(2);
  iVar1 = FUN_03e5c9b8();
  iVar2 = BoardTransforms::GridToBoardSpaceY(1);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = FUN_03e5c9b8(iVar2 - iVar3 / 2);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
  addBouncingArrow(param_1,(SexyVector2 *)aFStack_10);
  BoardTransforms::GridToBoardSpaceX(1);
  iVar1 = FUN_03e5c9b8();
  iVar2 = BoardTransforms::GridToBoardSpaceY(3);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = FUN_03e5c9b8(iVar2 - iVar3 / 2);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
  addBouncingArrow(param_1,(SexyVector2 *)aFStack_10);
  BoardTransforms::GridToBoardSpaceX(2);
  iVar1 = FUN_03e5c9b8();
  iVar2 = BoardTransforms::GridToBoardSpaceY(3);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = FUN_03e5c9b8(iVar2 - iVar3 / 2);
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar1,(float)iVar2);
  addBouncingArrow(param_1,(SexyVector2 *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::registerForEvents() */

void __thiscall ThunderIntro::registerForEvents(ThunderIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  CBMemberTranslatorX aCStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_03e5c6c4(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onProgressMeterSetFlagCount);
    local_c0 = local_88;
    local_d0 = local_98;
    uStack_c8 = uStack_90;
    MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<ThunderIntro,void(ThunderIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::ProgressMeterSetFlagCount,&local_d0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorAdded);
    local_f0 = local_80;
    uStack_e8 = uStack_78;
    local_e0 = local_70;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ThunderIntro,void(ThunderIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorAdded,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantPlanted);
    local_100 = local_58;
    local_110 = local_68;
    uStack_108 = uStack_60;
    MessageRouter::
    Subscribe<Plant*,Sexy::CBMemberTranslatorX<ThunderIntro,void(ThunderIntro::*)(Plant*)>>
              ((MessageRouter *)puVar1,Message::PlantPlanted,&local_110);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCursorDestroyed);
    local_f0 = local_50;
    uStack_e8 = uStack_48;
    local_e0 = local_40;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<ThunderIntro,void(ThunderIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onThunderStart);
    Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_38,aCStack_b0);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ThunderStart,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onThunderEnd);
    Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_38,aCStack_b0);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ThunderEnd,aDStack_38);
  }
  else {
    StandardLevelIntro::registerForEvents((StandardLevelIntro *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::StaticClassInit() */

void ThunderIntro::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<TIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<TIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ThunderIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e5e930,0x108,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<TIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TIState_START_TUTORIAL");
  StateDefinition<TIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5e2d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TIState_THUNDER");
  StateDefinition<TIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5e2d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TIState_WAIT_PLANT_SELECT");
  StateDefinition<TIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5e2d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TIState_WAIT_PLANTED");
  StateDefinition<TIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5e2d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<TIState>::Delegate1<ThunderIntro,void(ThunderIntro::*)(TIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TIState_START_GAME");
  StateDefinition<TIState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e5e2d4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ThunderIntro::StaticGetClass() */

long * ThunderIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThunderIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::setState(TIState) */

void __thiscall ThunderIntro::setState(ThunderIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<TIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<TIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<TIState>::GetStateDefinition
                     ((StateMachineTable<TIState> *)pSVar2,param_2);
  StateDefinition<TIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<TIState>::SetContext(aSStack_a8,this);
  StateMachine<TIState>::SetState
            ((StateMachine<TIState> *)(this + 0x68),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::OnIntroStarted() */

void __thiscall ThunderIntro::OnIntroStarted(ThunderIntro *this)

{
  Board *pBVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03e5c6d0(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x97d) = 0;
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"peashooter");
  Board::AddPlant(pBVar1,1,2,asStack_10,-1,false,false,false,false);
  std::string::~string(asStack_10);
  nop();
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"peashooter");
  Board::AddPlant(pBVar1,2,2,asStack_10,-1,false,false,false,false);
  std::string::~string(asStack_10);
  nop();
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderIntro::onCursorAdded(BaseCursor*) */

void __thiscall ThunderIntro::onCursorAdded(ThunderIntro *this,BaseCursor *param_1)

{
  char cVar1;
  bool bVar2;
  
  if (((param_1 != (BaseCursor *)0x0) && (cVar1 = isInState(this,2), cVar1 != '\0')) &&
     (bVar2 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1), bVar2)) {
    setState(this,3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::startGame() */

void __thiscall ThunderIntro::startGame(ThunderIntro *this)

{
  char cVar1;
  bool bVar2;
  UINewPVPTopZombieQueue *this_00;
  SeedPacket *pSVar3;
  WaveManager *this_01;
  SunDropperModule *this_02;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,4);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  clearBouncingArrows(this);
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    UINewPVPTopZombieQueue::gettItem(this_00,0);
    pSVar3 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    SeedPacket::SetAlwaysPlantable(pSVar3,false);
    for (iVar4 = 0; cVar1 = FUN_03e5c6bc(this_00[0x199]), iVar4 < cVar1; iVar4 = iVar4 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar4);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
      if (bVar2) {
        pSVar3 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        SeedPacket::SetDisabled(pSVar3,false);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_01 != (WaveManager *)0x0) {
    WaveManager::SetPause(this_01,false);
  }
  this_02 = (SunDropperModule *)FUN_03e5d554(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_02 != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this_02,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::onPlantPlanted(Plant*) */

void __thiscall ThunderIntro::onPlantPlanted(ThunderIntro *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,3);
  if ((cVar1 != '\0') && (param_1 != (Plant *)0x0)) {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    if (((((iVar2 == 1) && (iVar2 = SharkMinion::getRow((SharkMinion *)param_1), iVar2 == 1)) ||
         ((iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1), iVar2 == 2 &&
          (iVar2 = SharkMinion::getRow((SharkMinion *)param_1), iVar2 == 1)))) ||
        ((iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1), iVar2 == 1 &&
         (iVar2 = SharkMinion::getRow((SharkMinion *)param_1), iVar2 == 3)))) ||
       ((iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1), iVar2 == 2 &&
        (iVar2 = SharkMinion::getRow((SharkMinion *)param_1), iVar2 == 3)))) {
      startGame(this);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x48))(param_1);
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"PLANTTHUNDER_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onPlantedNarrationFinished);
      Sexy::Delegate0::Delegate0<ThunderIntro,void(ThunderIntro::*)()>(aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ThunderIntro::onPlantedNarrationFinished() */

void __thiscall ThunderIntro::onPlantedNarrationFinished(ThunderIntro *this)

{
  setState(this,2);
  return;
}


/* ThunderIntro::onShowThunderNarrationFinished() */

void __thiscall ThunderIntro::onShowThunderNarrationFinished(ThunderIntro *this)

{
  WaveManager *this_00;
  
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (WaveManager *)0x0) {
    WaveManager::SetPause(this_00,false);
  }
  setState(this,1);
  return;
}


/* ThunderIntro::onThunderEnd() */

void __thiscall ThunderIntro::onThunderEnd(ThunderIntro *this)

{
  char cVar1;
  WaveManager *this_00;
  SunDropperModule *this_01;
  
  cVar1 = isInState(this,1);
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (WaveManager *)0x0) {
    WaveManager::SetPause(this_00,true);
  }
  this_01 = (SunDropperModule *)FUN_03e5d554(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_01 != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this_01,true);
  }
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntro::setThunderIntroStateSerialization(int) */

void __thiscall ThunderIntro::setThunderIntroStateSerialization(ThunderIntro *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<TIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_1 < 5) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar2 = StateMachineTableBuilder::GetTable<TIState>(this_00,pRVar1);
    pSVar3 = (StateDefinition *)
             StateMachineTable<TIState>::GetStateDefinition
                       ((StateMachineTable<TIState> *)pSVar2,param_1);
    StateDefinition<TIState>::StateDefinition(aSStack_a8,pSVar3);
    StateDefinition<TIState>::SetContext(aSStack_a8,this);
    StateMachine<DPEState>::SetStateNoTransition
              ((StateMachine<DPEState> *)(this + 0x68),(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

