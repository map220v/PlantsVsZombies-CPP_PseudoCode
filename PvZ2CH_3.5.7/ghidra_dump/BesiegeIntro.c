// Class: BesiegeIntro


/* BesiegeIntro::OnNarrationPlantUpgrade() */

void BesiegeIntro::OnNarrationPlantUpgrade(void)

{
  return;
}


/* BesiegeIntro::OnLevelEnded() */

void __thiscall BesiegeIntro::OnLevelEnded(BesiegeIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* BesiegeIntro::isInState(BIState) const */

bool __thiscall BesiegeIntro::isInState(BesiegeIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04790a68(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* BesiegeIntro::OnUpdate() */

void __thiscall BesiegeIntro::OnUpdate(BesiegeIntro *this)

{
  StateMachine<BIState>::UpdateState((StateMachine<BIState> *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnNarrativeBoxShoveledCompleted() */

void __thiscall BesiegeIntro::OnNarrativeBoxShoveledCompleted(BesiegeIntro *this)

{
  CrazyNPCManager *pCVar1;
  UIWidget *this_00;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"BOX_INTRO");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNarrativeBoxCompleted);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_50,"UIShovel");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeIntro::OnGameplayStarted() */

void __thiscall BesiegeIntro::OnGameplayStarted(BesiegeIntro *this)

{
  BasePowerup::GetType((BasePowerup *)this);
  nop();
  return;
}


/* BesiegeIntro::OnProgressMeterSetFlagCount(int) */

void BesiegeIntro::OnProgressMeterSetFlagCount(int param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  CrazyNPCManager *this_00;
  long lVar4;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>
                     ((LevelModule *)(ulong)(uint)param_1);
  if (*(int *)(pRVar2 + 0x78) == 1) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
    if (cVar1 == '\0') {
      this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      cVar1 = CrazyNPCManager::IsNarrationActive(this_00);
      if ((cVar1 == '\0') &&
         (lVar4 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0)), lVar4 != 0)) {
        FUN_04790a40(lVar4 + 0x45,1);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::onEnterState_GAMEINIT(BIState) */

void BesiegeIntro::onEnterState_GAMEINIT(LevelModule *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  CrazyNPCManager *pCVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_1);
  if (*(int *)(pRVar2 + 0x78) == 1) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
    if (cVar1 == '\0') {
      this_00 = (LevelModuleManager *)
                FUN_04790a58(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
      if (this_01 != (BesiegeModule *)0x0) {
        BesiegeModule::SetTutorial(this_01,true);
        DComponent::setEnabled((DComponent *)this_01,true);
      }
      pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"BESIEGE_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,OnNarrativeTutorialCompleted);
      Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeIntro::BesiegeIntro() */

void __thiscall BesiegeIntro::BesiegeIntro(BesiegeIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068d9850;
  StateMachine<BIState>::StateMachine((StateMachine<BIState> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  this[0x4c] = (BesiegeIntro)0x0;
  return;
}


/* BesiegeIntro::StaticNew() */

BesiegeIntro * BesiegeIntro::StaticNew(void)

{
  BesiegeIntro *this;
  
  this = ::operator_new(0x108);
  BesiegeIntro(this);
  return this;
}


/* BesiegeIntro::ClearBouncingArrows() */

void __thiscall BesiegeIntro::ClearBouncingArrows(BesiegeIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xf0);
    uVar2 = FUN_04790a6c(uVar4,*(undefined8 *)(this + 0xf8));
    if (uVar2 <= uVar3) break;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04790a78(uVar4,uVar3);
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar1 + 0x48))();
    uVar3 = uVar3 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0xf0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnGridItemPlanted(GridItem*) */

void BesiegeIntro::OnGridItemPlanted(GridItem *param_1)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ProfileMgr *this;
  PlayerInfo *pPVar4;
  UINewPVPTopZombieQueue *this_00;
  SeedPacket *this_01;
  long lVar5;
  FishingEnergyBar *this_02;
  CrazyNPCManager *pCVar6;
  int iVar7;
  string asStack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  if (*(int *)(pRVar3 + 0x78) == 1) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar4);
    if (cVar1 == '\0') {
      this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      iVar7 = 0;
      if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
        for (; cVar1 = FUN_04790a5c(this_00[0x199]), iVar7 < cVar1; iVar7 = iVar7 + 1) {
          UINewPVPTopZombieQueue::gettItem(this_00,iVar7);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_50);
          if (bVar2) {
            this_01 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            SeedPacket::SetDisabled(this_01,true);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            FUN_04790b10(lVar5 + 0x198);
            this_02 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            FishingEnergyBar::onGameUnpaused(this_02);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        }
      }
      ClearBouncingArrows((BesiegeIntro *)param_1);
      pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"BOX_PLANTED_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,OnNarrativeBoxPlantedCompleted);
      Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aRStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnShoveledBesiegeBox() */

void __thiscall BesiegeIntro::OnShoveledBesiegeBox(BesiegeIntro *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  CrazyNPCManager *pCVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar2 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
    if ((cVar1 == '\0') && (this[0x4c] == (BesiegeIntro)0x0)) {
      this[0x4c] = (BesiegeIntro)0x1;
      ClearBouncingArrows(this);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"BOX_SHOVELED_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnNarrativeBoxShoveledCompleted);
      Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnPlantUpgrade() */

void __thiscall BesiegeIntro::OnPlantUpgrade(BesiegeIntro *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  CrazyNPCManager *pCVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar2 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
    if (cVar1 == '\0') {
      ClearBouncingArrows(this);
      pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"GAMESTART_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnNarrationGameStart);
      Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnNarrationGameStart() */

void __thiscall BesiegeIntro::OnNarrationGameStart(BesiegeIntro *this)

{
  char cVar1;
  bool bVar2;
  UINewPVPTopZombieQueue *this_00;
  SeedPacket *this_01;
  long lVar3;
  UIWidget *this_02;
  LevelModuleManager *this_03;
  BesiegeModule *this_04;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearBouncingArrows(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    for (iVar4 = 0; cVar1 = FUN_04790a5c(this_00[0x199]), iVar4 < cVar1; iVar4 = iVar4 + 1) {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar4);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
      if (bVar2) {
        this_01 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        SeedPacket::SetDisabled(this_01,false);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  lVar3 = Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (lVar3 != 0) {
    FUN_04790a40(lVar3 + 0x45,0);
  }
  std::string::string((string *)aRStack_10,"UIShovel");
  this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (this_02 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_02,true);
  }
  this_03 = (LevelModuleManager *)FUN_04790a58(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_04 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_03);
  if (this_04 != (BesiegeModule *)0x0) {
    BesiegeModule::SetTutorial(this_04,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BesiegeIntro::~BesiegeIntro() */

void __thiscall BesiegeIntro::~BesiegeIntro(BesiegeIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068d9850;
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0xf0));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* BesiegeIntro::~BesiegeIntro() */

void __thiscall BesiegeIntro::~BesiegeIntro(BesiegeIntro *this)

{
  ~BesiegeIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::AddBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall BesiegeIntro::AddBouncingArrow(BesiegeIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b25110);
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
             *)(this + 0xf0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnShovelTutorial() */

void __thiscall BesiegeIntro::OnShovelTutorial(BesiegeIntro *this)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  UINewPVPTopZombieQueue *this_01;
  SeedPacket *this_02;
  long lVar5;
  Effect_BouncingArrow *this_03;
  int iVar6;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  string asStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  RtWeakPtr aRStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar3 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar4);
    if (cVar1 == '\0') {
      ClearBouncingArrows(this);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_38,"puffshroom");
      nop();
      this_01 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
      if ((this_01 != (UINewPVPTopZombieQueue *)0x0) &&
         (cVar1 = FUN_04790a5c(this_01[0x199]), '\0' < cVar1)) {
        UINewPVPTopZombieQueue::gettItem(this_01,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        SeedPacket::GetPlantType();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
        if (bVar2) {
          pBVar7 = *(Board **)(gLawnApp + 0x9f0);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          Board::AddPlant(pBVar7,2,2,(string *)(lVar5 + 8),-1,false,false,false,false);
        }
        iVar6 = 0;
        cVar1 = FUN_04790a5c(this_01[0x199]);
        if ('\0' < cVar1) {
          do {
            UINewPVPTopZombieQueue::gettItem(this_01,iVar6);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)&local_28,(RtWeakPtr *)&local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_28);
            if (bVar2) {
              this_02 = (SeedPacket *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
              SeedPacket::SetDisabled(this_02,true);
            }
            iVar6 = iVar6 + 1;
            cVar1 = FUN_04790a5c(this_01[0x199]);
          } while (iVar6 < cVar1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      }
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_18,"BesiegeBox");
      Board::AddGridItem(pBVar7,(string *)&local_18,3,3,1);
      std::string::~string((string *)&local_18);
      nop();
      std::string::string((string *)&local_18,"UIShovel");
      lVar5 = UIWidget::GetWidgetBySheetName((string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      if (lVar5 != 0) {
        UIWidget::GetDrawRect();
        Board::TranslateScreenRectToBoardRect(*(Board **)(gLawnApp + 0x9f0),(TRect *)&local_18);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,45.0,-6.0);
        Board::GetBoardBaseOffset();
        fVar8 = (float)FUN_04790d64(local_30);
        fVar9 = (float)FUN_04790d64(local_2c);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)aRStack_20,
                   (float)local_28 + (float)local_18 + (float)(local_10 / 2) + fVar8,
                   (float)local_24 + (float)local_14 + fVar9);
        this_03 = (Effect_BouncingArrow *)AddBouncingArrow(this,(SexyVector2 *)aRStack_20);
        Effect_BouncingArrow::PointDown(this_03);
      }
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,L"[BESIEGE_TIP_TAP_SHOVEL]",
                   (FastCurve *)aRStack_20);
      Board::DisplayAdvice(pBVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0xe,0);
      FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      nop();
      std::string::~string(asStack_38);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnUseShovel() */

void __thiscall BesiegeIntro::OnUseShovel(BesiegeIntro *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  ProfileMgr *this_00;
  PlayerInfo *pPVar6;
  Effect_BouncingArrow *this_01;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_18 [8];
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar5 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar6);
    if ((cVar1 == '\0') && (this[0x4c] == (BesiegeIntro)0x0)) {
      ClearBouncingArrows(this);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(3);
      iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(3);
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar8 = (float)FUN_04790d54((float)iVar2);
      fVar9 = (float)FUN_04790d54((float)(iVar3 - iVar4 / 2));
      Sexy::FastCurve::SetOutRange(aFStack_10,fVar8,fVar9);
      this_01 = (Effect_BouncingArrow *)AddBouncingArrow(this,(SexyVector2 *)aFStack_10);
      Effect_BouncingArrow::PointDown(this_01);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aFStack_10,L"[BESIEGE_TIP_MOVE_BESIEGE_BOX]",auStack_18);
      Board::DisplayAdvice(pBVar7,aFStack_10,6,0);
      FUN_05476c50(aFStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnNarrativeBoxCompleted() */

void __thiscall BesiegeIntro::OnNarrativeBoxCompleted(BesiegeIntro *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UINewPVPTopZombieQueue *this_00;
  ResourceInfo *pRVar4;
  long lVar5;
  FishingEnergyBar *this_01;
  SeedPacket *this_02;
  Effect_BouncingArrow *this_03;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  TPoint aTStack_38 [8];
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
    iVar3 = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_40);
    cVar1 = FUN_04790a5c(this_00[0x199]);
    if ('\0' < cVar1) {
      do {
        UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        PlantWarsLevelSelectUI::GetLevelDefinitionPtr();
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
        if (pRVar4 == (ResourceInfo *)0x0) {
LAB_04792ad4:
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
          if (bVar2) {
            this_02 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            bVar2 = true;
            goto LAB_047929c0;
          }
        }
        else {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          bVar2 = std::operator==((string *)(lVar5 + 8),"BesiegeBox");
          if (!bVar2) goto LAB_04792ad4;
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_20);
          this_01 = (FishingEnergyBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
          FishingEnergyBar::onGameUnpaused(this_01);
          this_02 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
          bVar2 = false;
LAB_047929c0:
          SeedPacket::SetDisabled(this_02,bVar2);
        }
        iVar3 = iVar3 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        cVar1 = FUN_04790a5c(this_00[0x199]);
      } while (iVar3 < cVar1);
    }
    Board::GetBoardBaseOffset();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    UIWidget::GetDrawRect();
    Sexy::Point::Point(aPStack_28,local_18 + local_10,local_14 + local_c / 2);
    Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_28,aTStack_38);
    Sexy::Point::Point((Point *)&local_30,(TPoint *)aRStack_20);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    iVar3 = FUN_04790d40(0x14);
    Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_20,(float)(local_30 + iVar3),(float)local_2c);
    this_03 = (Effect_BouncingArrow *)AddBouncingArrow(this,(SexyVector2 *)aRStack_20);
    Effect_BouncingArrow::PointLeft(this_03);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnCursorAdded(BaseCursor*) */

void __thiscall BesiegeIntro::OnCursorAdded(BesiegeIntro *this,BaseCursor *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  ProfileMgr *this_00;
  PlayerInfo *pPVar7;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar6 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar7);
    if (((cVar1 == '\0') && (param_1 != (BaseCursor *)0x0)) &&
       (bVar2 = Sexy::RtObject::IsA<GridItemCursor>((RtObject *)param_1), bVar2)) {
      ClearBouncingArrows(this);
      BoardTransforms::GridToBoardSpaceX(2);
      iVar3 = FUN_04790d40();
      iVar4 = BoardTransforms::GridToBoardSpaceY(4);
      iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar4 = FUN_04790d40(iVar4 - iVar5 / 2);
      Sexy::FastCurve::SetOutRange(aFStack_10,(float)iVar3,(float)iVar4);
      AddBouncingArrow(this,(SexyVector2 *)aFStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::OnNarrativeBoxPlantedCompleted() */

void __thiscall BesiegeIntro::OnNarrativeBoxPlantedCompleted(BesiegeIntro *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LevelModuleManager *this_00;
  BesiegeModule *this_01;
  CrazyNPCManager *pCVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  FastCurve aFStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearBouncingArrows(this);
  this_00 = (LevelModuleManager *)FUN_04790a58(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
  if (this_01 != (BesiegeModule *)0x0) {
    DComponent::setEnabled((DComponent *)this_01,false);
  }
  BoardTransforms::GridToBoardSpaceX(2);
  iVar1 = FUN_04790d40();
  iVar2 = BoardTransforms::GridToBoardSpaceY(2);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = FUN_04790d40(iVar2 - iVar3);
  Sexy::FastCurve::SetOutRange(aFStack_50,(float)iVar1,(float)iVar2);
  AddBouncingArrow(this,(SexyVector2 *)aFStack_50);
  pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"PLANT_LVLUP_INTRO");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNarrationPlantUpgrade);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aFStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::registerForEvents() */

void __thiscall BesiegeIntro::registerForEvents(BesiegeIntro *this)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  LevelModuleManager *pLVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
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
  lVar3 = LevelModule::getManager();
  FUN_04790a4c(lVar3 + 0x80);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnIntroStarted);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar5);
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnProgressMeterSetFlagCount);
    local_c0 = local_80;
    uStack_b8 = uStack_78;
    local_b0 = local_70;
    MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<BesiegeIntro,void(BesiegeIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::ProgressMeterSetFlagCount,&local_c0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCursorAdded);
    local_d0 = local_58;
    local_e0 = local_68;
    uStack_d8 = uStack_60;
    MessageRouter::
    Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<BesiegeIntro,void(BesiegeIntro::*)(BaseCursor*)>>
              ((MessageRouter *)puVar1,Message::CursorAdded,&local_e0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnGridItemPlanted);
    local_100 = local_50;
    uStack_f8 = uStack_48;
    local_f0 = local_40;
    MessageRouter::
    Subscribe<GridItem*,Sexy::CBMemberTranslatorX<BesiegeIntro,void(BesiegeIntro::*)(GridItem*)>>
              ((MessageRouter *)puVar1,Message::GridItemPlanted,&local_100);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUseShovel);
    Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aCStack_98);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UseShovel,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnPlantUpgrade);
    Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aCStack_98);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantUpgrade,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnShovelTutorial);
    Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aCStack_98);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ShovelTutorial,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnShoveledBesiegeBox);
    Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_38,aCStack_98);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ShoveledBesiegeBox,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::StaticClassInit() */

void BesiegeIntro::StaticClassInit(void)

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
  Delegate1<BIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<BIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"BesiegeIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_047936b0,0x108,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<BIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<BIState>::Delegate1<BesiegeIntro,void(BesiegeIntro::*)(BIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<BIState>::Delegate1<BesiegeIntro,void(BesiegeIntro::*)(BIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BIState_GAMEINIT");
  StateDefinition<BIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479326c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<BIState>::Delegate1<BesiegeIntro,void(BesiegeIntro::*)(BIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<BesiegeIntro,void(BesiegeIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<BIState>::Delegate1<BesiegeIntro,void(BesiegeIntro::*)(BIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BIState_STARTGAME");
  StateDefinition<BIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0479326c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BesiegeIntro::StaticGetClass() */

long * BesiegeIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BesiegeIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeIntro::setState(BIState) */

void __thiscall BesiegeIntro::setState(BesiegeIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<BIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<BIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<BIState>::GetStateDefinition
                     ((StateMachineTable<BIState> *)pSVar2,param_2);
  StateDefinition<BIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<BIState>::SetContext(aSStack_a8,this);
  StateMachine<BIState>::SetState
            ((StateMachine<BIState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeIntro::OnIntroStarted() */

void __thiscall BesiegeIntro::OnIntroStarted(BesiegeIntro *this)

{
  LevelModuleManager *this_00;
  BesiegeModule *pBVar1;
  
  this_00 = (LevelModuleManager *)FUN_04790a58(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pBVar1 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_00);
  if (pBVar1 != (BesiegeModule *)0x0) {
    setState(this,0);
    return;
  }
  return;
}


/* BesiegeIntro::StartBesiegeGame() */

void __thiscall BesiegeIntro::StartBesiegeGame(BesiegeIntro *this)

{
  PrimeText *this_00;
  
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  setState(this,1);
  return;
}


/* BesiegeIntro::OnNarrativeTutorialCompleted() */

void __thiscall BesiegeIntro::OnNarrativeTutorialCompleted(BesiegeIntro *this)

{
  PrimeText *this_00;
  
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  setState(this,1);
  return;
}


/* BesiegeIntro::updateState_GAMEINIT() */

void __thiscall BesiegeIntro::updateState_GAMEINIT(BesiegeIntro *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (*(int *)(pRVar2 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  StartBesiegeGame(this);
  return;
}

