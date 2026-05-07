// Class: VictoryOutroModule


/* VictoryOutroModule::giveCustomRewards() */

void VictoryOutroModule::giveCustomRewards(void)

{
  return;
}


/* VictoryOutroModule::VictoryOutroModule() */

void __thiscall VictoryOutroModule::VictoryOutroModule(VictoryOutroModule *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06856ba0;
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  AnimationMgr::AnimationMgr((AnimationMgr *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  return;
}


/* VictoryOutroModule::~VictoryOutroModule() */

void __thiscall VictoryOutroModule::~VictoryOutroModule(VictoryOutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06856ba0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  AnimationMgr::~AnimationMgr((AnimationMgr *)(this + 0x50));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* VictoryOutroModule::~VictoryOutroModule() */

void __thiscall VictoryOutroModule::~VictoryOutroModule(VictoryOutroModule *this)

{
  ~VictoryOutroModule(this);
  AK::FreeHook(this);
  return;
}


/* VictoryOutroModule::getPreventSave() */

bool __thiscall VictoryOutroModule::getPreventSave(VictoryOutroModule *this)

{
  return 2 < *(int *)(this + 0x18);
}


/* VictoryOutroModule::onNarrationFinished() */

void __thiscall VictoryOutroModule::onNarrationFinished(VictoryOutroModule *this)

{
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


/* VictoryOutroModule::onLevelEnded() */

void __thiscall VictoryOutroModule::onLevelEnded(VictoryOutroModule *this)

{
  AnimationMgr::Clear((AnimationMgr *)(this + 0x50));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::StaticClassInit() */

void VictoryOutroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"VictoryOutroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044ef448,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VictoryOutroModule::StaticGetClass() */

long * VictoryOutroModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VictoryOutroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::initializeModule() */

void __thiscall VictoryOutroModule::initializeModule(VictoryOutroModule *this)

{
  undefined4 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x18) = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x88),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::isFirstPlaythrough() */

void VictoryOutroModule::isFirstPlaythrough(void)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  iVar1 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
  iVar2 = PlayerInfo::GetWorldMapEventCompletionCount(this_00,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 < 3 || iVar2 == 1);
}


/* VictoryOutroModule::hasNarration() */

bool VictoryOutroModule::hasNarration(void)

{
  char cVar1;
  long lVar2;
  
  cVar1 = isFirstPlaythrough();
  if (cVar1 == '\0') {
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    lVar2 = FUN_05474184(lVar2 + 0x100);
    return lVar2 != 0;
  }
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = FUN_05474184(lVar2 + 0xf8);
  return lVar2 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onCollectableCollected(Collectable*) */

void __thiscall
VictoryOutroModule::onCollectableCollected(VictoryOutroModule *this,Collectable *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidget *this_02;
  RtObject *this_03;
  size_t __n;
  string asStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  DVec3 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Collectable::IsEndOfLevelReward(param_1);
  if (cVar2 != '\0') {
    Collectable::StartCollect(param_1,true);
    cVar2 = '\0';
    Collectable::SetFlashing(param_1,false);
    DVec3::DVec3(aDStack_18);
    Set8BytesTo0(asStack_30);
    TwinsAssistPerson::GetPopAnimRig();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    bVar3 = std::operator==((string *)(lVar4 + 8),"star");
    if (bVar3) {
      cVar2 = hasNarration();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    TwinsAssistPerson::GetPopAnimRig();
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
    if (bVar3) {
      TwinsAssistPerson::GetPopAnimRig();
      this_03 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar3 = Sexy::RtObject::IsA<CollectableMoneyBagType>(this_03);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      if (bVar3) {
        Collectable::SetMotionScaleOut((Collectable *)0x3f000000,param_1,1);
        Collectable::SetFadeOutOnCollectDuration(param_1,0.25);
        (**(code **)(*(long *)this + 0xc0))(this,param_1);
        std::string::~string(asStack_30);
        goto LAB_044efd08;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    uVar1 = *(uint *)(this + 0x24);
    __n = (size_t)uVar1;
    if ((uVar1 != 0x17 && uVar1 != 10) && (cVar2 == '\0')) {
      TwinsAssistPerson::GetPopAnimRig();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      bVar3 = std::operator==((string *)(lVar4 + 8),"taco");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (bVar3) {
        ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x1a);
      }
      else {
        TwinsAssistPerson::GetPopAnimRig();
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
        cVar2 = *(char *)(lVar4 + 0x90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        if ((cVar2 == '\0') &&
           (std::string::append(asStack_30,"UICoinBank",__n), *(int *)(this + 0x24) == 4)) {
          std::string::append(asStack_30,"UIPowerupHolder",__n);
          this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
          PlayerInfo::SetPowerupUnlockState(this_01,(string *)(this + 0x28),true);
          Board::AddPowerup(*(Board **)(gLawnApp + 0x9f0),(string *)(this + 0x28));
          this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_30);
          UIWidget::SetVisible(this_02,true);
        }
      }
    }
    (**(code **)(*(long *)this + 0xc0))(this,param_1);
    std::string::~string(asStack_30);
  }
LAB_044efd08:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::gotoArtifactPresentFromDemoLevel() */

void __thiscall VictoryOutroModule::gotoArtifactPresentFromDemoLevel(VictoryOutroModule *this)

{
  undefined *this_00;
  QuickJumpUtil *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_01 = (QuickJumpUtil *)Sexy::LazySingleton<QuickJumpUtil>::GetInstancePtr();
  QuickJumpUtil::ShowArtifactPresent(this_01);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArtifactDemoLevelContinue);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ArtifactPresentClose,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onSpecialLevelFinished() */

void __thiscall VictoryOutroModule::onSpecialLevelFinished(VictoryOutroModule *this)

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
            ((ReceivedDataCallback *)this,(_func_void *)0xb8);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,aCStack_50);
  Board::StartBoardFade((Board *)0x3f800000,uVar1,aIStack_60,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::startBoardFade() */

void __thiscall VictoryOutroModule::startBoardFade(VictoryOutroModule *this)

{
  long lVar1;
  undefined8 uVar2;
  Insets aIStack_60 [16];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar1 == 0) ||
     (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar1 + 0x114) == '\0')) {
    *(undefined4 *)(this + 0x18) = 7;
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xb8);
    Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
              (aDStack_38,aCStack_50);
    Board::StartBoardFade((Board *)0x3f800000,uVar2,aIStack_60,aDStack_38);
  }
  else if (*(int *)(this + 0x18) != 6) {
    *(undefined4 *)(this + 0x18) = 6;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::startNarration() */

void __thiscall VictoryOutroModule::startNarration(VictoryOutroModule *this)

{
  LawnApp *pLVar1;
  char cVar2;
  CrazyNPCManager *pCVar3;
  long lVar4;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = hasNarration();
  if (cVar2 != '\0') {
    *(undefined4 *)(this + 0x18) = 4;
    cVar2 = isFirstPlaythrough();
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      lVar4 = Board::GetLevelDefinition(*(Board **)(pLVar1 + 0x9f0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationFinished);
      Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      lVar4 = lVar4 + 0x100;
    }
    else {
      pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      lVar4 = Board::GetLevelDefinition(*(Board **)(pLVar1 + 0x9f0));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationFinished);
      Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      lVar4 = lVar4 + 0xf8;
    }
    CrazyNPCManager::StartNarrativeID(pCVar3,lVar4,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VictoryOutroModule::StaticNew() */

VictoryOutroModule * VictoryOutroModule::StaticNew(void)

{
  VictoryOutroModule *this;
  
  this = ::operator_new(0x90);
  VictoryOutroModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onUpdate() */

void __thiscall VictoryOutroModule::onUpdate(VictoryOutroModule *this)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  GridItemCardGameZombieAction *this_00;
  BossKillTimeChallengeModule *this_01;
  VolcanoSnowBattleModule *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  CthulhuEyeballEffect *pCVar5;
  EndLevelUI *this_05;
  MysteryCrystalMgr *this_06;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar2 = *(int *)(this + 0x18);
  if (iVar2 != 3) {
    if (iVar2 == 5) {
      cVar1 = hasNarration();
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0xb0))(this);
      }
      else {
        startNarration(this);
      }
    }
    else if ((iVar2 == 1) &&
            (fVar6 = (float)PVZ_T(), *(float *)(pRVar3 + 0x40) < fVar6 - *(float *)(this + 0x1c))) {
      *(undefined4 *)(this + 0x18) = 2;
    }
    goto LAB_044f075c;
  }
  fVar6 = (float)PVZ_T();
  if (fVar6 <= *(float *)(this + 0x20)) goto LAB_044f075c;
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Tutorial();
  if (cVar1 == '\0') {
    cVar1 = Board::isNormalAwardLevel(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if (*(char *)(lVar4 + 0x112) != '\0') goto LAB_044f075c;
      lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if (*(char *)(lVar4 + 0x16f) == '\0') {
        this_01 = (BossKillTimeChallengeModule *)
                  FUN_044f06bc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        if (this_01 != (BossKillTimeChallengeModule *)0x0) {
          BossKillTimeChallengeModule::OnBattleEnd(this_01);
          cVar1 = BossKillTimeChallengeModule::IsFinish(this_01);
          if (cVar1 == '\0') goto LAB_044f075c;
        }
        this_02 = (VolcanoSnowBattleModule *)
                  FUN_044f0704(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        if (this_02 != (VolcanoSnowBattleModule *)0x0) {
          VolcanoSnowBattleModule::OnBattleEnd(this_02);
          cVar1 = VolcanoSnowBattleModule::IsFinish(this_02);
          goto joined_r0x044f0910;
        }
      }
      else {
        fVar6 = (float)PVZ_T();
        if (((*(float *)(this + 0x20) < fVar6) &&
            (this_00 = (GridItemCardGameZombieAction *)
                       FUN_02fd437c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)),
            this_00 != (GridItemCardGameZombieAction *)0x0)) &&
           (cVar1 = GridItemCardGameZombieAction::IsShowIntention(this_00), cVar1 == '\0')) {
          MiniGameChallengeModule::ShowEndLevelUI((MiniGameChallengeModule *)this_00);
          goto LAB_044f075c;
        }
      }
    }
    else {
      lVar4 = LawnApp::GetEndLevelUI(gLawnApp);
      if (lVar4 == 0) {
        this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
        LawnApp::ShowEndLevelUI(gLawnApp);
        pCVar5 = (CthulhuEyeballEffect *)LawnApp::GetEndLevelUI(gLawnApp);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x88));
        CthulhuEyeballEffect::SetCthulhuEasyButton(pCVar5,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        this_05 = (EndLevelUI *)LawnApp::GetEndLevelUI(gLawnApp);
        iVar2 = PlayerInfo::GetNumCoins(this_04,false);
        EndLevelUI::setNormalAwardCoinCount(this_05,iVar2 - *(int *)(this + 0x48));
        this_06 = (MysteryCrystalMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
        MysteryCrystalMgr::TryAwards(this_06);
        LawnApp::GetEndLevelUI(gLawnApp);
        EndLevelUI::GetChestRewards();
        MessageRouter::Post((_func_void *)gMessageRouter);
        MessageRouter::Post((_func_void *)gMessageRouter);
        lVar4 = LawnApp::GetEndLevelUI(gLawnApp);
      }
      cVar1 = FUN_044ee594(*(undefined1 *)(lVar4 + 0x158));
joined_r0x044f0910:
      if (cVar1 == '\0') goto LAB_044f075c;
    }
  }
  *(undefined4 *)(this + 0x18) = 5;
LAB_044f075c:
  AnimationMgr::Update((AnimationMgr *)(this + 0x50));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::checkUIWidgetsUnlock() */

void VictoryOutroModule::checkUIWidgetsUnlock(void)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar3;
  UIWidget *this_01;
  int extraout_w1;
  string asStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_28,"egypt15");
  cVar1 = PlayerInfo::GetLevelCompleted(this_00,asStack_28);
  std::string::~string(asStack_28);
  nop();
  if (cVar1 == '\0') {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar3,0x24);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar2)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      nop();
      UIWidget::TryUnlock(this_01,asStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::spawnCoinShower() */

void __thiscall VictoryOutroModule::spawnCoinShower(VictoryOutroModule *this)

{
  char cVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  char *pcVar4;
  long lVar5;
  AnimationController *pAVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_WinMusic");
  FUN_044ee558(this + 0x60);
  fVar8 = (float)FUN_044ee564(*(undefined4 *)(this + 0x60));
  fVar8 = fVar8 + *(float *)(pRVar3 + 0x4c);
  cVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,2);
  if (cVar1 != '\0') {
    cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
    if ((cVar1 == '\0') && (iVar7 = 0, 0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
      do {
        iVar2 = iVar7 + 1;
        FUN_044f09dc(iVar7);
        iVar7 = iVar2;
      } while (iVar2 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        iVar7 = 0;
        do {
          lVar5 = FUN_044f09dc(iVar7);
          if ((lVar5 != 0) && (iVar2 = FUN_044ee590(*(undefined4 *)(lVar5 + 0xcc)), iVar2 == 2)) {
            iVar2 = 0;
            std::string::string((string *)&local_18,"Play_UI_Game_Mower_Appear_Single");
            pAVar6 = (AnimationController *)MowerRemover::Create(iVar7,(string *)&local_18);
            std::string::~string((string *)&local_18);
            nop();
            AnimationMgr::Add((AnimationMgr *)(this + 0x50),pAVar6,fVar8);
            if (0 < *(int *)(pRVar3 + 0x48)) {
              do {
                iVar2 = iVar2 + 1;
                fVar9 = (float)FUN_044ee6b4(*(undefined4 *)(lVar5 + 0x18),
                                            *(undefined4 *)(lVar5 + 0x1c),
                                            *(undefined4 *)(lVar5 + 0x20));
                fVar10 = *(float *)(lVar5 + 0x1c);
                FUN_044ee6b4(*(undefined4 *)(lVar5 + 0x18),fVar10,*(undefined4 *)(lVar5 + 0x20));
                EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar9,fVar10,*(float *)(pRVar3 + 0x5c));
                std::string::string(asStack_20,"coin_gold");
                pAVar6 = (AnimationController *)
                         CoinShowerSequence::Create
                                   (local_18,local_14,local_10,0x40a00000,this,asStack_20);
                std::string::~string(asStack_20);
                nop();
                AnimationMgr::Add((AnimationMgr *)(this + 0x50),pAVar6,fVar8);
                fVar8 = fVar8 + *(float *)(pRVar3 + 0x50) / (float)*(int *)(pRVar3 + 0x48);
              } while (iVar2 < *(int *)(pRVar3 + 0x48));
            }
          }
          iVar7 = iVar7 + 1;
          fVar8 = fVar8 + *(float *)(pRVar3 + 0x54);
        } while (iVar7 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      }
    }
  }
  fVar9 = (float)PVZ_T();
  *(float *)(this + 0x20) = *(float *)(pRVar3 + 0x58) + *(float *)(pRVar3 + 0x54) + fVar8 + fVar9;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* VictoryOutroModule::startCoinShower() */

void __thiscall VictoryOutroModule::startCoinShower(VictoryOutroModule *this)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar1 = FUN_044ee580(uVar2);
    if ((((lVar1 != 0) && (lVar1 = FUN_044f09d0(uVar2), lVar1 == 0)) &&
        (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) &&
       ((lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar1 != 0 &&
        (lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
        *(char *)(lVar1 + 0x114) == '\0')))) {
      Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
      spawnCoinShower(this);
      return;
    }
  }
  spawnCoinShower(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onAwardScreenDismissed() */

void __thiscall VictoryOutroModule::onAwardScreenDismissed(VictoryOutroModule *this)

{
  string *psVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  NameMapperBase *this_01;
  char *pcVar5;
  PVZ2UIAwardScreen *this_02;
  PVZ2UIDialog *pPVar6;
  string *extraout_x1;
  undefined8 uVar7;
  LawnApp *pLVar8;
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  wstring awStack_68 [8];
  Insets aIStack_60 [16];
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x24) == 3) {
    psVar1 = (string *)(this + 0x28);
    bVar2 = std::operator==(psVar1,"sunflower");
    if (bVar2) {
      ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0xb);
    }
    else {
      bVar2 = std::operator==(psVar1,"wallnut");
      if (bVar2) {
        ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x10);
      }
      else {
        bVar2 = std::operator==(psVar1,"potatomine");
        if (bVar2) {
          ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x16);
        }
      }
    }
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  lVar4 = FUN_05474374(asStack_80,"Artifact_Demo_",0);
  if (lVar4 == -1) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Stop_Prize_Menu");
    pLVar8 = gLawnApp;
    *(undefined4 *)(this + 0x18) = 8;
    Board::NotifyOutroComplete(*(Board **)(pLVar8 + 0x9f0));
    pLVar8 = gLawnApp;
    this_02 = (PVZ2UIAwardScreen *)
              FUN_044ee588(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
    if (this_02 != (PVZ2UIAwardScreen *)0x0) {
      PVZ2UIAwardScreen::KillAwardScreen(this_02);
      pLVar8 = gLawnApp;
    }
    LawnApp::KillEndLevelUI(pLVar8);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else {
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::Insets::Insets(aIStack_60,0xff,0xff,0xff,0xff);
    Sexy::Insets::Insets(aIStack_50,0,0,0,200);
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    Board::StartBoardFade((Board *)0x3f000000,uVar7,aIStack_60,aIStack_50,aDStack_38);
    FUN_05475ffc(aIStack_60,asStack_80,0xe,0xffffffffffffffff);
    Sexy::StringToLower((Sexy *)aIStack_60,extraout_x1);
    std::operator+("artifact_",(string *)aIStack_50);
    std::string::~string((string *)aIStack_50);
    std::string::~string((string *)aIStack_60);
    this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
    iVar3 = NameMapperBase::GetIdForName(this_01,asStack_78);
    ArtifactUtils::GetArtifactPropertyPtr(iVar3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    if (*(int *)(lVar4 + 0xf8) == 2) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      bVar2 = std::operator==((string *)(lVar4 + 0x100),"");
      if (bVar2) {
        std::string::string((string *)aIStack_60,"[ARTIFACT_FREE_DEMO_LEVEL_WON_MESSAGE_TEXT]");
        Sexy::ToWString((string *)aIStack_60);
        TodStringTranslate((wstring *)aIStack_50);
        FUN_05476c50(aIStack_50);
        std::string::~string((string *)aIStack_60);
        nop();
      }
      else {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        FUN_05475d88(aIStack_60,lVar4 + 0x100);
        Sexy::ToWString((string *)aIStack_60);
        TodStringTranslate((wstring *)aIStack_50);
        FUN_05476c50(aIStack_50);
        std::string::~string((string *)aIStack_60);
      }
      pLVar8 = gLawnApp;
      FUN_05478178(aIStack_50,L"[ARTIFACT_FREE_DEMO_LEVEL_WON_MESSAGE_TITLE]",aIStack_60);
      pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar8,(wstring *)aIStack_50,awStack_68);
      FUN_05476c50(aIStack_50);
      nop();
      FUN_05478178(aIStack_60,L"[ARTIFACT_FREE_DEMO_LEVEL_BUTTON]",auStack_88);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onArtifactDemoLevelContinue);
      Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
                (aDStack_38,aIStack_50);
      PVZ2UIDialog::AddButton(pPVar6,aIStack_60,aDStack_38,0);
      FUN_05476c50(aIStack_60);
      nop();
      FUN_05476c50(awStack_68);
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      pLVar8 = gLawnApp;
      if (*(int *)(lVar4 + 0xf8) == 1) {
        FUN_05478178(aIStack_60,L"[ARTIFACT_DEMO_LEVEL_WON_MESSAGE_TITLE]",auStack_88);
        FUN_05478178(aIStack_50,L"[ARTIFACT_DEMO_LEVEL_WON_MESSAGE_TEXT]",awStack_68);
        pPVar6 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar8,(wstring *)aIStack_60,(wstring *)aIStack_50);
        FUN_05476c50(aIStack_50);
        nop();
        FUN_05476c50(aIStack_60);
        nop();
        FUN_05478178(aIStack_60,L"[ARTIFACT_DEMO_LEVEL_BUTTON_L]",awStack_68);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onArtifactDemoLevelContinue);
        Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
                  (aDStack_38,aIStack_50);
        PVZ2UIDialog::AddButton(pPVar6,aIStack_60,aDStack_38,0);
        FUN_05476c50(aIStack_60);
        nop();
        FUN_05478178(aIStack_60,L"[ARTIFACT_DEMO_LEVEL_BUTTON_R]",awStack_68);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,gotoArtifactPresentFromDemoLevel);
        Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
                  (aDStack_38,aIStack_50);
        PVZ2UIDialog::AddButton(pPVar6,aIStack_60,aDStack_38,0);
        FUN_05476c50(aIStack_60);
        nop();
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
  }
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VictoryOutroModule::onArtifactDemoLevelContinue() */

void __thiscall VictoryOutroModule::onArtifactDemoLevelContinue(VictoryOutroModule *this)

{
  char *pcVar1;
  PVZ2UIAwardScreen *this_00;
  LawnApp *pLVar2;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Prize_Menu");
  pLVar2 = gLawnApp;
  *(undefined4 *)(this + 0x18) = 8;
  Board::NotifyOutroComplete(*(Board **)(pLVar2 + 0x9f0));
  pLVar2 = gLawnApp;
  this_00 = (PVZ2UIAwardScreen *)FUN_044ee588(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  if (this_00 != (PVZ2UIAwardScreen *)0x0) {
    PVZ2UIAwardScreen::KillAwardScreen(this_00);
    pLVar2 = gLawnApp;
  }
  LawnApp::KillEndLevelUI(pLVar2);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::awardAllRewards() */

void __thiscall VictoryOutroModule::awardAllRewards(VictoryOutroModule *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long extraout_x0;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  long extraout_x0_00;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::AwardPendingPresents(*(Board **)(gLawnApp + 0x9f0));
  Board::AwardPendingActivityPresents(*(Board **)(gLawnApp + 0x9f0));
  switch(*(undefined4 *)(this + 0x24)) {
  case 3:
    psVar3 = (string *)(this + 0x28);
    bVar1 = std::operator==(psVar3,"sunflower");
    if (bVar1) {
      ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(10);
    }
    else {
      bVar1 = std::operator==(psVar3,"wallnut");
      if (bVar1) {
        ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0xf);
      }
      else {
        bVar1 = std::operator==(psVar3,"potatomine");
        if (bVar1) {
          ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x15);
        }
      }
    }
    break;
  case 5:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      nop();
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      PlayerInfo::SetWorldMapEventStatus(pPVar5,extraout_x0_00 + 0x98,extraout_x0_00 + 0x98,3,1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    break;
  case 6:
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x1d);
    break;
  case 0x16:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    PlayerInfo::SetWorldMapEventStatus(pPVar5,extraout_x0 + 0x98,extraout_x0 + 0x98,3,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onEndOfLevelRewardCollected() */

void __thiscall VictoryOutroModule::onEndOfLevelRewardCollected(VictoryOutroModule *this)

{
  bool bVar1;
  UIWidget *this_00;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 200) != giveCustomRewards) {
    (**(code **)(*(long *)this + 200))();
  }
  if (*(int *)(this + 0x18) != 3) {
    *(undefined4 *)(this + 0x18) = 3;
    std::string::string(asStack_10,"UIPauseButton");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      UIWidget::SetVisible(this_00,false);
    }
    awardAllRewards(this);
    (**(code **)(*(long *)this + 0xa8))(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onCollectableFinishCollected(Collectable*) */

void VictoryOutroModule::onCollectableFinishCollected(Collectable *param_1)

{
  bool bVar1;
  UIWidget *this;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)param_1 + 200) != giveCustomRewards) {
    (**(code **)(*(long *)param_1 + 200))();
  }
  if (*(int *)(param_1 + 0x18) != 3) {
    *(undefined4 *)(param_1 + 0x18) = 3;
    std::string::string(asStack_10,"UIPauseButton");
    UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      this = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      UIWidget::SetVisible(this,false);
    }
    awardAllRewards((VictoryOutroModule *)param_1);
    (**(code **)(*(long *)param_1 + 0xa8))(param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::showAwardScreen() */

void __thiscall VictoryOutroModule::showAwardScreen(VictoryOutroModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PVZ2UIAwardScreen *this_00;
  ProfileMgr *pPVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ActivityConfig *this_01;
  string *psVar9;
  PlayerInfo *pPVar10;
  string *extraout_x1;
  undefined8 uVar11;
  wstring awStack_d8 [8];
  undefined1 auStack_d0 [8];
  wstring awStack_c8 [8];
  undefined1 auStack_c0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(this + 0x30),___stack_chk_guard);
  TodStringTranslate(awStack_d8);
  Sexy::UTF8StringToWString((Sexy *)(this + 0x38),extraout_x1);
  TodStringTranslate(awStack_c8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b8);
  lVar4 = FUN_05474184((string *)(this + 0x40));
  if (lVar4 != 0) {
    GetImageByName((string *)(this + 0x40));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b8,(RtWeakPtr *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  this_00 = (PVZ2UIAwardScreen *)FUN_044ee588(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  PVZ2UIAwardScreen::ShowAwardScreen(this_00);
  switch(*(undefined4 *)(this + 0x24)) {
  case 3:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    PVZ2UIAwardScreen::AddPlantReward(this_00,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    PVZ2UIAwardScreen::SetBackgroundType(this_00,3);
    break;
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x21:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    PVZ2UIAwardScreen::AddCollectableReward(this_00,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    if (*(int *)(this + 0x24) == 0x21) {
      FUN_044ee690(this_00 + 0x15c);
      break;
    }
  default:
switchD_044f1b8c_caseD_b:
    break;
  case 5:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_80);
    if (cVar1 == '\0') {
      FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,this + 0x28);
      GameFeatureType::GetGameFeatureTypeFromUnlockString
                ((GameFeatureType *)&local_68,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
      std::string::~string((string *)aRStack_50);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_68);
      if (cVar1 != '\0') {
        pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
        if (pPVar10 != (PlayerInfo *)0x0) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar10,*(undefined4 *)(lVar4 + 0x30));
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&local_80);
            PVZ2UIAwardScreen::AddCollectableReward
                      (this_00,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&local_80);
      PVZ2UIAwardScreen::AddCollectableReward(this_00,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    break;
  case 9:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&local_68);
    PVZ2UIAwardScreen::AddNoteScreen(this_00,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    break;
  case 0x1a:
    this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar1 = ActivityConfig::IsPlantBonusActivated(this_01);
    if (cVar1 != '\0') goto switchD_044f1b8c_caseD_27;
    goto switchD_044f1b8c_caseD_b;
  case 0x27:
switchD_044f1b8c_caseD_27:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    PVZ2UIAwardScreen::AddCollectableReward(this_00,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  Board::GetOpenedPresentTablesAndContents
            (*(Board **)(gLawnApp + 0x9f0),(vector *)avStack_b0,(vector *)&local_98);
  lVar4 = FUN_044ee5b8(local_98,local_90);
  if (lVar4 != 0) {
    PVZ2UIAwardScreen::AddPresentRewards(this_00,(vector *)avStack_b0,(vector *)&local_98);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  Board::GetOpenedActivityPresentContents(*(Board **)(gLawnApp + 0x9f0),(vector *)&local_80);
  lVar4 = FUN_044ee5b8(local_80,local_78);
  if (lVar4 != 0) {
    PVZ2UIAwardScreen::AddPresentActivityRewards(this_00,(vector *)&local_80);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  ProfileUtils::GetChallengeStatusForCurrentLevel((vector *)&local_68);
  iVar2 = FUN_044ee574(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar5);
  if ((iVar2 != -1) && (lVar4 = FUN_044ee5c4(local_68,local_60), lVar4 != 0)) {
    iVar3 = FUN_044ee574(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
    iVar2 = (int)lVar4 + -1;
    if (iVar3 != -1) {
      iVar2 = iVar3;
    }
    cVar1 = RiftUtils::IsPlayingRiftLevel();
    if (cVar1 == '\0') {
      lVar4 = FUN_044ee5d8(local_68,(long)iVar2);
      if (*(char *)(lVar4 + 0x82) == '\0') {
        lVar8 = FUN_044ee5c4(local_68,local_60);
        if (lVar8 == 1) {
          PVZ2UIAwardScreen::AddStarScreenSingle(this_00,lVar4,0);
        }
        else {
          PVZ2UIAwardScreen::AddStarScreenTriple(this_00,iVar2 + 1);
        }
      }
    }
    else {
      lVar4 = FUN_044ee5d8(local_68,(long)iVar2);
      if ((*(char *)(lVar4 + 0x82) == '\0') || (*(char *)(lVar4 + 0x83) == '\0')) {
        uVar6 = FUN_044ee5d8(local_68,0);
        uVar11 = 2;
      }
      else {
        uVar6 = FUN_044ee5d8(local_68,0);
        uVar11 = 1;
      }
      PVZ2UIAwardScreen::AddObjectiveScreen(this_00,uVar6,uVar11);
    }
  }
  iVar2 = Sexy::ResourceManager::GetDelayLoadedRSBSlotCount((ResourceManager *)this_00);
  iVar3 = PVZ2UIAwardScreen::GetScreenCount(this_00);
  if ((iVar3 < 1) || (iVar3 = PVZ2UIAwardScreen::GetScreenCount(this_00), iVar3 <= iVar2 + 1)) {
    onAwardScreenDismissed(this);
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAwardScreenDismissed);
    Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
              (aDStack_38,aRStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)this_00,aDStack_38);
    PVZ2UIAwardScreen::SetBackgroundType(this_00,3);
    PVZ2UIAwardScreen::Start(this_00);
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Prize_Menu");
  }
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  ~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
           *)&local_68);
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
             *)&local_80);
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
             *)&local_98);
  std::
  vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
           *)avStack_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b8);
  FUN_05476c50(auStack_c0);
  FUN_05476c50(awStack_c8);
  FUN_05476c50(auStack_d0);
  FUN_05476c50(awStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onCardPlayClose() */

void __thiscall VictoryOutroModule::onCardPlayClose(VictoryOutroModule *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PVZ2UIAwardScreen *this_00;
  ProfileMgr *pPVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ActivityConfig *this_01;
  string *psVar9;
  PlayerInfo *pPVar10;
  string *extraout_x1;
  undefined8 uVar11;
  wstring awStack_d8 [8];
  undefined1 auStack_d0 [8];
  wstring awStack_c8 [8];
  undefined1 auStack_c0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  string *psStack_8;
  
  psStack_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString((Sexy *)(this + 0x30),___stack_chk_guard);
  TodStringTranslate(awStack_d8);
  Sexy::UTF8StringToWString((Sexy *)(this + 0x38),extraout_x1);
  TodStringTranslate(awStack_c8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b8);
  lVar4 = FUN_05474184((string *)(this + 0x40));
  if (lVar4 != 0) {
    GetImageByName((string *)(this + 0x40));
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b8,(RtWeakPtr *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  this_00 = (PVZ2UIAwardScreen *)FUN_044ee588(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xac8));
  PVZ2UIAwardScreen::ShowAwardScreen(this_00);
  switch(*(undefined4 *)(this + 0x24)) {
  case 3:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    PVZ2UIAwardScreen::AddPlantReward(this_00,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    PVZ2UIAwardScreen::SetBackgroundType(this_00,3);
    break;
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x21:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    PVZ2UIAwardScreen::AddCollectableReward(this_00,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    if (*(int *)(this + 0x24) == 0x21) {
      FUN_044ee690(this_00 + 0x15c);
      break;
    }
  default:
switchD_044f1b8c_caseD_b:
    break;
  case 5:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&uStack_80);
    if (cVar1 == '\0') {
      FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,this + 0x28);
      GameFeatureType::GetGameFeatureTypeFromUnlockString
                ((GameFeatureType *)&uStack_68,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
      std::string::~string((string *)aRStack_50);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&uStack_68);
      if (cVar1 != '\0') {
        pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
        if (pPVar10 != (PlayerInfo *)0x0) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_68);
          cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar10,*(undefined4 *)(lVar4 + 0x30));
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&uStack_80);
            PVZ2UIAwardScreen::AddCollectableReward
                      (this_00,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_68);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&uStack_80);
      PVZ2UIAwardScreen::AddCollectableReward(this_00,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_80);
    break;
  case 9:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&uStack_68);
    PVZ2UIAwardScreen::AddNoteScreen(this_00,(RtWeakPtr<Sexy::SoundResource> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_68);
    break;
  case 0x1a:
    this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar1 = ActivityConfig::IsPlantBonusActivated(this_01);
    if (cVar1 != '\0') goto switchD_044f1b8c_caseD_27;
    goto switchD_044f1b8c_caseD_b;
  case 0x27:
switchD_044f1b8c_caseD_27:
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
    PVZ2UIAwardScreen::AddCollectableReward(this_00,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_98);
  Board::GetOpenedPresentTablesAndContents
            (*(Board **)(gLawnApp + 0x9f0),(vector *)avStack_b0,(vector *)&uStack_98);
  lVar4 = FUN_044ee5b8(uStack_98,uStack_90);
  if (lVar4 != 0) {
    PVZ2UIAwardScreen::AddPresentRewards(this_00,(vector *)avStack_b0,(vector *)&uStack_98);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_80);
  Board::GetOpenedActivityPresentContents(*(Board **)(gLawnApp + 0x9f0),(vector *)&uStack_80);
  lVar4 = FUN_044ee5b8(uStack_80,uStack_78);
  if (lVar4 != 0) {
    PVZ2UIAwardScreen::AddPresentActivityRewards(this_00,(vector *)&uStack_80);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_68);
  ProfileUtils::GetChallengeStatusForCurrentLevel((vector *)&uStack_68);
  iVar2 = FUN_044ee574(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar5);
  if ((iVar2 != -1) && (lVar4 = FUN_044ee5c4(uStack_68,uStack_60), lVar4 != 0)) {
    iVar3 = FUN_044ee574(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
    iVar2 = (int)lVar4 + -1;
    if (iVar3 != -1) {
      iVar2 = iVar3;
    }
    cVar1 = RiftUtils::IsPlayingRiftLevel();
    if (cVar1 == '\0') {
      lVar4 = FUN_044ee5d8(uStack_68,(long)iVar2);
      if (*(char *)(lVar4 + 0x82) == '\0') {
        lVar8 = FUN_044ee5c4(uStack_68,uStack_60);
        if (lVar8 == 1) {
          PVZ2UIAwardScreen::AddStarScreenSingle(this_00,lVar4,0);
        }
        else {
          PVZ2UIAwardScreen::AddStarScreenTriple(this_00,iVar2 + 1);
        }
      }
    }
    else {
      lVar4 = FUN_044ee5d8(uStack_68,(long)iVar2);
      if ((*(char *)(lVar4 + 0x82) == '\0') || (*(char *)(lVar4 + 0x83) == '\0')) {
        uVar6 = FUN_044ee5d8(uStack_68,0);
        uVar11 = 2;
      }
      else {
        uVar6 = FUN_044ee5d8(uStack_68,0);
        uVar11 = 1;
      }
      PVZ2UIAwardScreen::AddObjectiveScreen(this_00,uVar6,uVar11);
    }
  }
  iVar2 = Sexy::ResourceManager::GetDelayLoadedRSBSlotCount((ResourceManager *)this_00);
  iVar3 = PVZ2UIAwardScreen::GetScreenCount(this_00);
  if ((iVar3 < 1) || (iVar3 = PVZ2UIAwardScreen::GetScreenCount(this_00), iVar3 <= iVar2 + 1)) {
    onAwardScreenDismissed(this);
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAwardScreenDismissed);
    Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
              (aDStack_38,aRStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)this_00,aDStack_38);
    PVZ2UIAwardScreen::SetBackgroundType(this_00,3);
    PVZ2UIAwardScreen::Start(this_00);
    pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar7,"Play_Prize_Menu");
  }
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  ~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
           *)&uStack_68);
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
             *)&uStack_80);
  std::vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<PresentType_const>,std::allocator<Sexy::RtWeakPtr<PresentType_const>>>
             *)&uStack_98);
  std::
  vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PresentTable_const>,std::allocator<Sexy::RtWeakPtr<PresentTable_const>>>
           *)avStack_b0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b8);
  FUN_05476c50(auStack_c0);
  FUN_05476c50(awStack_c8);
  FUN_05476c50(auStack_d0);
  FUN_05476c50(awStack_d8);
  if (psStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::onBoardFadeDone() */

void __thiscall VictoryOutroModule::onBoardFadeDone(VictoryOutroModule *this)

{
  char cVar1;
  undefined8 uVar2;
  FestivalManager *pFVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_10,uVar2);
  pFVar3 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = FestivalManager::IsFestivalLevel(pFVar3,uVar2,0xffffffff);
  if (cVar1 == '\0') {
    showAwardScreen(this);
  }
  else {
    LawnApp::ShowBattleStatementUI(gLawnApp,0);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::registerForEvents() */

void __thiscall VictoryOutroModule::registerForEvents(VictoryOutroModule *this)

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
            ((ReceivedDataCallback *)this,startVictoryOutro);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa0);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,getPreventSave);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<VictoryOutroModule,bool(VictoryOutroModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterCanPreventSave(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCollectableCollected);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<VictoryOutroModule,void(VictoryOutroModule::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableTryToCollect,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCardPlayClose);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CardPlayClose,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSpecialLevelFinished);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyArenaFinish,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSpecialLevelFinished);
  Sexy::Delegate0::Delegate0<VictoryOutroModule,void(VictoryOutroModule::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AutoTestLevelWinFinishNotify,aDStack_38)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VictoryOutroModule::startVictoryOutro() */

void VictoryOutroModule::startVictoryOutro(void)

{
  int iVar1;
  LineBreakCategory *pLVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  VictoryOutroModule *in_x0;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  char *pcVar12;
  FestivalManager *pFVar13;
  ActivityConfig *pAVar14;
  string *psVar15;
  Collectable *this_01;
  string *psVar16;
  SexyVector3 *pSVar17;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar18;
  NameMapperBase *pNVar19;
  NetworkItemMgr *pNVar20;
  IntroArenaTutorialBattleModule *this_03;
  string *extraout_x0;
  uint uVar21;
  wchar16 **extraout_x1;
  wchar16 **extraout_x1_00;
  wchar16 **ppwVar22;
  Board *pBVar23;
  wchar16 **extraout_x1_01;
  undefined1 uVar24;
  code *pcVar25;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  LineBreakCategory *pLVar26;
  LineBreakCategory *pLVar27;
  ulong uVar28;
  undefined8 uVar29;
  string *psVar30;
  undefined4 uVar31;
  float fVar32;
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_60 [4];
  string asStack_50 [8];
  undefined4 local_48;
  undefined4 local_40;
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar28 = 0;
  uVar31 = PVZ_T();
  *(undefined4 *)(in_x0 + 0x1c) = uVar31;
  MessageRouter::Post((_func_void *)gMessageRouter);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar8 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  uVar29 = *(undefined8 *)(lVar8 + 0x128);
  lVar9 = FUN_044ee5a4(uVar29,*(undefined8 *)(lVar8 + 0x130));
  if (lVar9 != 0) {
    do {
      puVar10 = (undefined4 *)FUN_044ee5b0(uVar29,uVar28);
      cVar3 = PlayerInfo::GameFeatureIsUnlocked(this_00,*puVar10);
      if (cVar3 == '\0') {
        puVar10 = (undefined4 *)FUN_044ee5b0(*(undefined8 *)(lVar8 + 0x128),uVar28);
        PlayerInfo::UnlockGameFeature(this_00,*puVar10);
      }
      uVar28 = uVar28 + 1;
      uVar29 = *(undefined8 *)(lVar8 + 0x128);
      uVar11 = FUN_044ee5a4(uVar29,*(undefined8 *)(lVar8 + 0x130));
    } while (uVar28 < uVar11);
  }
  checkUIWidgetsUnlock();
  uVar31 = PlayerInfo::GetNumCoins(this_00,false);
  *(undefined4 *)(in_x0 + 0x48) = uVar31;
  pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  lVar9 = 0;
  AudioMgr::SendEvent(pcVar12,"Play_Spawn_Sun");
  DVec3::DVec3((DVec3 *)&local_70);
  local_60[0] = Board::GetFinalDestroyedZombiePosition(*(Board **)(gLawnApp + 0x9f0));
  fVar32 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)local_60);
  if (fVar32 <= 0.0) {
    iVar6 = BoardTransforms::GridToBoardSpaceX(4);
    local_70 = (float)iVar6;
    iVar6 = BoardTransforms::GridToBoardSpaceY(3);
    local_6c = (float)iVar6;
    local_68 = 0x41a00000;
  }
  else {
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_70,(SexyVector3 *)local_60);
  }
  cVar3 = '\x01';
  *(undefined4 *)(in_x0 + 0x18) = 1;
  cVar4 = Board::GetHasPlayerPreviouslyCompletedLevel(*(Board **)(gLawnApp + 0x9f0));
  if (cVar4 == '\0') {
    lVar9 = *(long *)(gLawnApp + 0x9f0);
    cVar3 = FUN_044ee570(*(undefined1 *)(lVar9 + 0x118));
    if (lVar9 != 0) goto LAB_044f2744;
    goto LAB_044f2788;
  }
  if ((gLawnApp == (TextureInfo *)0x0) || (lVar9 = *(long *)(gLawnApp + 0x9f0), lVar9 == 0)) {
LAB_044f2548:
    uVar24 = (undefined1)lVar9;
    uVar31 = *(undefined4 *)(lVar8 + 0xd0);
    cVar3 = '\x01';
LAB_044f2550:
    *(undefined4 *)(in_x0 + 0x24) = uVar31;
  }
  else {
LAB_044f2744:
    cVar4 = FUN_044ee584(*(undefined1 *)(lVar9 + 0xa00));
    if ((cVar4 == '\0') ||
       ((*(char *)(lVar8 + 0x113) == '\0' || (cVar4 = FUN_044ee568(this_00[0xfc9]), cVar4 == '\0')))
       ) {
LAB_044f2788:
      uVar24 = (undefined1)lVar9;
      if (cVar3 != '\0') goto LAB_044f2548;
      uVar31 = *(undefined4 *)(lVar8 + 0xc4);
      cVar3 = '\0';
      goto LAB_044f2550;
    }
    cVar4 = FUN_044ee56c(this_00[0xfc8]);
    uVar24 = (undefined1)lVar9;
    if (cVar4 != '\0') goto LAB_044f2788;
    *(undefined4 *)(in_x0 + 0x24) = 0x1b;
  }
  pLVar26 = (LineBreakCategory *)(lVar8 + 0xd8);
  pLVar27 = (LineBreakCategory *)(lVar8 + 200);
  psVar16 = (string *)(in_x0 + 0x28);
  pLVar2 = pLVar27;
  if (cVar3 != '\0') {
    pLVar2 = pLVar26;
  }
  thunk_FUN_05475e00(psVar16,pLVar2);
  lVar9 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (lVar9 == 0) {
LAB_044f259c:
    if (0 < *(int *)(*(Board **)(gLawnApp + 0x9f0) + 0x180)) {
      uVar29 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      pFVar13 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar24 = 3;
      cVar3 = FestivalManager::IsFestivalLevel(pFVar13,uVar29);
joined_r0x044f27ec:
      if (cVar3 == '\0') {
        PlayerInfo::DecSpringBossCount(this_00);
      }
      PlayerInfo::AddRedPacket(this_00,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x180));
    }
  }
  else {
    lVar9 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if (((*(char *)(lVar9 + 0x112) != '\0') ||
        (lVar9 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
        *(char *)(lVar9 + 0x16c) != '\0')) ||
       (lVar9 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar9 + 0x114) != '\0')) {
      *(undefined4 *)(in_x0 + 0x24) = 0;
      goto LAB_044f259c;
    }
    if (0 < *(int *)(*(Board **)(gLawnApp + 0x9f0) + 0x180)) {
      uVar29 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      pFVar13 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar24 = 3;
      cVar3 = FestivalManager::IsFestivalLevel(pFVar13,uVar29);
      goto joined_r0x044f27ec;
    }
  }
  bVar5 = std::operator!=((string *)(lVar8 + 0xa8),"");
  ppwVar22 = extraout_x1;
  if (((bVar5) && (this_00 != (PlayerInfo *)0x0)) &&
     (cVar3 = PlayerInfo::HasFirstPlantAdventureOpenInfo(this_00), ppwVar22 = extraout_x1_00,
     cVar3 != '\0')) {
    psVar15 = asStack_38;
    PlayerInfo::GetFirstPlantAdventureOpenInfo();
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    cVar3 = std::operator==(asStack_50,psVar15);
    std::string::~string(psVar15);
    uVar24 = SUB81(psVar15,0);
    std::string::~string(asStack_50);
    ppwVar22 = extraout_x1_01;
  }
  else {
    cVar3 = '\0';
  }
  uVar28 = EA::StdC::Spawn((wchar16 *)gLawnApp,ppwVar22,(bool)uVar24);
  uVar11 = EA::Text::GlyphCache_Memory::EndUpdate(gLawnApp);
  iVar6 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)this_00,(wchar16 *)(uVar11 & 0xffffffff),
                     (LineBreakCategory *)(uVar28 & 0xffffffff),pLVar26,pLVar27);
  if (2 < iVar6) {
    cVar3 = '\0';
  }
  cVar4 = Board::IsStarChallengeActive(*(Board **)(gLawnApp + 0x9f0));
  if (cVar4 == '\0') {
LAB_044f2690:
    pBVar23 = *(Board **)(gLawnApp + 0x9f0);
  }
  else {
    pBVar23 = *(Board **)(gLawnApp + 0x9f0);
    iVar6 = FUN_044ee574(*(undefined4 *)(pBVar23 + 0x87c));
    if (-1 < iVar6) {
      cVar4 = Board::GetActiveChallengeAwardedThisPlaythrough(pBVar23);
      if (cVar4 != '\0') goto LAB_044f2690;
      pBVar23 = *(Board **)(gLawnApp + 0x9f0);
      cVar3 = '\0';
    }
  }
  FUN_044ee578(pBVar23 + 0xb45,cVar3);
  cVar4 = Board::GetActiveChallengeAwardedThisPlaythrough(*(Board **)(gLawnApp + 0x9f0));
  if (*(char *)(lVar8 + 0x113) != '\0') {
    FUN_044ee69c(this_00 + 0xfc8);
    uVar21 = *(uint *)(in_x0 + 0x24);
    if (uVar21 != 0x1b) goto LAB_044f26cc;
LAB_044f28b8:
    PlayerInfo::RemoveLastBossFightLevel(this_00);
    pAVar14 = (ActivityConfig *)LawnApp::GetActivityConfig();
    iVar7 = ActivityConfig::GetBossFightBonusCount(pAVar14);
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
              ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)asStack_38);
    iVar6 = 0;
    if (0 < iVar7) {
      do {
        iVar1 = iVar6 + 1;
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)asStack_38,iVar6,1);
        iVar6 = iVar1;
      } while (iVar1 != iVar7);
    }
    iVar6 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)asStack_38);
    iVar7 = LawnApp::GetActivityConfig();
    ActivityConfig::GetBossFightBonusSkuID(iVar7);
    pAVar14 = (ActivityConfig *)LawnApp::GetActivityConfig();
    uVar31 = ActivityConfig::GetBossFightBonusPieceCount(pAVar14,iVar6);
    std::string::string(asStack_88,"_piece");
    nop();
    FUN_031dcc6c(asStack_80,asStack_90,asStack_88);
    psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar15);
    CollectedPiece::CollectedPiece((CollectedPiece *)asStack_50);
    thunk_FUN_05475e00((CollectedPiece *)asStack_50,asStack_90);
    local_48 = 2;
    local_40 = uVar31;
    std::vector<CollectedPiece,std::allocator<CollectedPiece>>::push_back
              ((vector<CollectedPiece,std::allocator<CollectedPiece>> *)
               (*(long *)(gLawnApp + 0x9f0) + 0x168),(CollectedPiece *)asStack_50);
    thunk_FUN_05475e00(psVar16,asStack_80);
    this_01 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
    std::string::~string(asStack_80);
    std::string::~string(asStack_88);
    std::string::~string(asStack_90);
    ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)asStack_38);
    goto LAB_044f2a48;
  }
  uVar21 = *(uint *)(in_x0 + 0x24);
  if (uVar21 == 0x1b) goto LAB_044f28b8;
LAB_044f26cc:
  if ((cVar3 != '\0') || ((cVar4 != '\0' && (uVar21 < 3)))) goto switchD_044f2874_caseD_b;
  switch(uVar21) {
  case 0:
    onEndOfLevelRewardCollected(in_x0);
    goto switchD_044f2874_caseD_b;
  case 1:
    this_01 = (Collectable *)
              Board::AddPresent(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_70,false);
    break;
  case 2:
  case 9:
  case 10:
  case 0x16:
  case 0x17:
    this_01 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
    break;
  case 3:
    psVar16 = *(string **)(gLawnApp + 0x9f0);
    std::string::string(asStack_38,"seed_packet");
    this_01 = (Collectable *)Board::AddCollectable(psVar16);
    std::string::~string(asStack_38);
    nop();
    nop();
    CollectableSeedPacket::SetSeedType(extraout_x0);
    break;
  case 4:
    this_01 = (Collectable *)
              Board::AddPowerupCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),(string *)&local_70);
    break;
  case 5:
    pBVar23 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_38,"GameUpgrades");
    Board::LoadResourceGroupForGameplay(pBVar23,asStack_38);
    std::string::~string(asStack_38);
    nop();
    this_01 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
    break;
  case 6:
    pcVar12 = "mapgadget";
    goto LAB_044f3008;
  case 7:
    pcVar12 = "powerupgadget";
LAB_044f3008:
    psVar15 = asStack_50;
    psVar30 = *(string **)(gLawnApp + 0x9f0);
    std::string::string(asStack_38,pcVar12);
    this_01 = (Collectable *)Board::AddCollectable(psVar30);
    std::string::~string(asStack_38);
    nop();
    std::string::append(psVar16,pcVar12,(size_t)psVar15);
    break;
  case 8:
    this_01 = (Collectable *)
              Board::AddStageSpecificKey(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_70);
    this_03 = (IntroArenaTutorialBattleModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    IntroArenaTutorialBattleModule::getMowerAudio(this_03);
    uVar29 = FUN_0547429c();
    Sexy::StrFormat("key_%s",asStack_38,uVar29);
    thunk_FUN_05475e00(psVar16,asStack_38);
    std::string::~string(asStack_38);
    break;
  default:
    goto switchD_044f2874_caseD_b;
  case 0x12:
    pBVar23 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_38,"GiftBox");
    Board::LoadResourceGroupForGameplay(pBVar23,asStack_38);
    std::string::~string(asStack_38);
    nop();
    psVar16 = *(string **)(gLawnApp + 0x9f0);
    std::string::string(asStack_38,"giftbox");
    this_01 = (Collectable *)Board::AddCollectable(psVar16);
    std::string::~string(asStack_38);
    nop();
    break;
  case 0x18:
    __n = aRStack_78;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_38);
    pNVar19 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    std::string::string(asStack_50,"firegourd");
    iVar6 = NameMapperBase::GetIdForName(pNVar19,asStack_50);
    std::string::~string(asStack_50);
    nop();
    NetworkItemInfo::NetworkItemInfo((NetworkItemInfo *)asStack_50,iVar6,1);
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_38,
               (NetworkItemInfo *)asStack_50);
    pNVar20 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    NetworkItemMgr::NetworkAddPlantPieceCount(pNVar20,(vector *)asStack_38);
    psVar15 = *(string **)(gLawnApp + 0x9f0);
    std::string::string(asStack_50,"piece_firegourd");
    this_01 = (Collectable *)Board::AddCollectable(psVar15);
    std::string::~string(asStack_50);
    nop();
    std::string::append(psVar16,"piece_firegourd",(size_t)__n);
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_38);
    break;
  case 0x19:
    psVar15 = asStack_50;
    std::string::string(asStack_38,"gravebuster");
    PlayerInfo::AddPlantPieceCount((string *)this_00,(int)asStack_38,true);
    std::string::~string(asStack_38);
    nop();
    psVar30 = *(string **)(gLawnApp + 0x9f0);
    std::string::string(asStack_38,"piece_gravebuster");
    this_01 = (Collectable *)Board::AddCollectable(psVar30);
    std::string::~string(asStack_38);
    nop();
    std::string::append(psVar16,"piece_gravebuster",(size_t)psVar15);
    MessageRouter::Post<int,TutorialEvent>
              ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x1e);
    break;
  case 0x21:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_38);
    pNVar19 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    iVar6 = NameMapperBase::GetIdForName(pNVar19,psVar16);
    NetworkItemInfo::NetworkItemInfo((NetworkItemInfo *)asStack_50,iVar6,10);
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_38,
               (NetworkItemInfo *)asStack_50);
    pNVar20 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    NetworkItemMgr::NetworkAddPlantPieceCount(pNVar20,(vector *)asStack_38);
    std::operator+(psVar16,"_piece");
    FUN_05474278(psVar16,(NetworkItemInfo *)asStack_50);
    std::string::~string(asStack_50);
    this_01 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_38);
    break;
  case 0x27:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_38);
    pNVar19 = (NameMapperBase *)ArtifactMapper::GetInstance();
    iVar6 = NameMapperBase::GetIdForName(pNVar19,psVar16);
    NetworkItemInfo::NetworkItemInfo((NetworkItemInfo *)asStack_50,iVar6,1);
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_38,
               (NetworkItemInfo *)asStack_50);
    pNVar20 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
    NetworkItemMgr::NetworkAddPlantPieceCount(pNVar20,(vector *)asStack_38);
    this_01 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)asStack_38);
  }
LAB_044f2a48:
  if (this_01 == (Collectable *)0x0) {
switchD_044f2874_caseD_b:
    onEndOfLevelRewardCollected(in_x0);
  }
  else {
    cVar3 = Board::isNormalAwardLevel(*(Board **)(gLawnApp + 0x9f0));
    if (cVar3 == '\0') {
      Collectable::SetIsEndOfLevelReward(this_01,true);
      (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_70);
      Collectable::SetNeverExpire(this_01,true);
      Collectable::SetFlashing(this_01,true);
      Collectable::SnapToBoard(this_01);
      pSVar17 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_01);
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_70,pSVar17);
      this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_50,"POPANIM_EFFECTS_PRIZE_SPAWN");
      GetPAMByName(asStack_50);
      pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_38);
      Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar18,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      std::string::~string(asStack_50);
      nop();
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_70,-1)
      ;
      Effect_PopAnim::SetCentered(this_02,true);
      iVar6 = (**(code **)(*(long *)this_01 + 0x170))(this_01);
      FUN_044ee54c(this_02 + 0x1c,iVar6 + 1);
      std::string::string(asStack_38,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_02,(RtWeakPtr *)asStack_38,0);
      std::string::~string(asStack_38);
      nop();
      Board::TossCollectableOntoBoard(*(Board **)(gLawnApp + 0x9f0),this_01);
    }
    else {
      psVar16 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar16);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(in_x0 + 0x88),(RtWeakPtr *)asStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      Collectable::SetIsEndOfLevelReward(this_01,true);
      Collectable::SetDisableTouch(this_01,true);
      Collectable::TryToCollect(this_01);
      pcVar25 = *(code **)(*(long *)this_01 + 0x80);
      *(undefined4 *)(this_01 + 0xb8) = 0x3dcccccd;
      (*pcVar25)(this_01,1);
    }
    TwinsAssistPerson::GetPopAnimRig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    thunk_FUN_05475e00(in_x0 + 0x30,lVar8 + 0x78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    TwinsAssistPerson::GetPopAnimRig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    thunk_FUN_05475e00(in_x0 + 0x38,lVar8 + 0x80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    TwinsAssistPerson::GetPopAnimRig();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
    thunk_FUN_05475e00(in_x0 + 0x40,lVar8 + 0x88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

