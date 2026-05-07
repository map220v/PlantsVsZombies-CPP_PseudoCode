// Class: PooyanIntro


/* PooyanIntro::OnLevelEnded() */

void __thiscall PooyanIntro::OnLevelEnded(PooyanIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* PooyanIntro::isInState(PIState) const */

bool __thiscall PooyanIntro::isInState(PooyanIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04784acc(*(undefined4 *)(this + 0x50));
  return iVar1 == param_2;
}


/* PooyanIntro::OnGameplayStarted() */

void __thiscall PooyanIntro::OnGameplayStarted(PooyanIntro *this)

{
  BasePowerup::GetType((BasePowerup *)this);
  nop();
  return;
}


/* PooyanIntro::OnNarrativeCompleted() */

void PooyanIntro::OnNarrativeCompleted(void)

{
  LevelModuleManager *this;
  PooyanModule *pPVar1;
  PooyanShooterChooseUI *this_00;
  
  this = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pPVar1 = LevelModuleManager::GetModuleByClass<PooyanModule>(this);
  if ((pPVar1 != (PooyanModule *)0x0) &&
     (this_00 = (PooyanShooterChooseUI *)FUN_04784abc(*(undefined8 *)(pPVar1 + 0x50)),
     this_00 != (PooyanShooterChooseUI *)0x0)) {
    PooyanShooterChooseUI::SetAllButtonEnable(this_00,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::onEnterState_TUTORIAL(PIState) */

void PooyanIntro::onEnterState_TUTORIAL(LevelModule *param_1)

{
  char cVar1;
  LevelModuleManager *this;
  PooyanModule *this_00;
  ResilienceTutorialIntroProperties *pRVar2;
  PooyanShooterChooseUI *this_01;
  ProfileMgr *this_02;
  PlayerInfo *pPVar3;
  CrazyNPCManager *pCVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<PooyanModule>(this);
  if (this_00 != (PooyanModule *)0x0) {
    PooyanModule::ShowPooyanShooterChooseUI(this_00);
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_1);
    if (*(int *)(pRVar2 + 0x78) == 1) {
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
      if (cVar1 == '\0') {
        pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        std::string::string(asStack_60,"POOYAN_CHOOSING");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)param_1,OnNarrativeCompleted);
        Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
        std::string::string(asStack_58,"");
        CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
        goto LAB_04785338;
      }
    }
    this_01 = (PooyanShooterChooseUI *)FUN_04784abc(*(undefined8 *)(this_00 + 0x50));
    PooyanShooterChooseUI::SetAllButtonEnable(this_01,true);
  }
LAB_04785338:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::onEnterState_GAMEINIT(PIState) */

void PooyanIntro::onEnterState_GAMEINIT(LevelModule *param_1)

{
  char cVar1;
  LevelModuleManager *this;
  PooyanModule *pPVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  CrazyNPCManager *pCVar5;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pPVar2 = LevelModuleManager::GetModuleByClass<PooyanModule>(this);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_1);
  if (*(int *)(pRVar3 + 0x78) == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar4);
    if ((cVar1 == '\0') && (pPVar2 != (PooyanModule *)0x0)) {
      pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"POOYAN_CHOOSED");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,OnNarrativeChoosedCompleted);
      Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar5,asStack_60,aDStack_38,asStack_58);
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
/* PooyanIntro::createGloveEffect() */

void __thiscall PooyanIntro::createGloveEffect(PooyanIntro *this)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3 aVStack_38 [16];
  string asStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_TUTORIAL_GLOVE");
  GetPAMByName(asStack_28);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  EATextSquish::Vec3::Vec3(aVStack_38,488.0,298.0,0.0);
  uVar2 = 0x42c80000;
  uVar3 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,0.0,100.0,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_38,(SexyVector3 *)asStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x104),(SexyVector3 *)&local_18);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x100) = uVar2;
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)(this + 0x104),0xdbba1);
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string((string *)&local_18,"tap_move");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xf0),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::PooyanIntro() */

void __thiscall PooyanIntro::PooyanIntro(PooyanIntro *this)

{
  bool bVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068d89a0;
  StateMachine<PIState>::StateMachine((StateMachine<PIState> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  DVec3::DVec3((DVec3 *)(this + 0x104));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  uVar2 = PVZ_EOT();
  this[0x4c] = (PooyanIntro)0x0;
  *(undefined4 *)(this + 0xf8) = uVar2;
  *(undefined4 *)(this + 0xfc) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x100) = uVar2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanIntro::StaticNew() */

PooyanIntro * PooyanIntro::StaticNew(void)

{
  PooyanIntro *this;
  
  this = ::operator_new(0x128);
  PooyanIntro(this);
  return this;
}


/* PooyanIntro::ClearBouncingArrows() */

void __thiscall PooyanIntro::ClearBouncingArrows(PooyanIntro *this)

{
  ulong uVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = *(undefined8 *)(this + 0x110);
  uVar1 = FUN_04784ad0(uVar3,*(undefined8 *)(this + 0x118));
  uVar4 = 0;
  if (uVar1 == 0) {
    return;
  }
  while (uVar4 < uVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04784adc(uVar3,uVar4);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
    uVar3 = *(undefined8 *)(this + 0x110);
    uVar1 = FUN_04784ad0(uVar3,*(undefined8 *)(this + 0x118));
    uVar4 = uVar4 + 1;
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)(this + 0x110));
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04785d10 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PooyanIntro::OnUpdate() */

void __thiscall PooyanIntro::OnUpdate(PooyanIntro *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  LevelModuleManager *this_01;
  PooyanModule *this_02;
  long *plVar4;
  StandaloneEffect *this_03;
  Board *pBVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  float local_20 [2];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateMachine<PIState>::UpdateState((StateMachine<PIState> *)(this + 0x50));
  this_01 = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_01);
  if ((this_02 == (PooyanModule *)0x0) ||
     (cVar1 = ZombossFanPullActionHandler::IsPulling((ZombossFanPullActionHandler *)this_02),
     cVar1 == '\0')) {
    this_00 = (RtWeakPtr *)(this + 0xf0);
    ClearBouncingArrows(this);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
    goto LAB_04785b58;
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0xf0));
  if (bVar2) {
    local_10 = *(undefined4 *)(this + 0x10c);
    local_18 = *(undefined8 *)(this + 0x104);
    cVar1 = isInState(this,2);
    if (cVar1 != '\0') {
      fVar6 = *(float *)(this + 0x100);
      auVar9 = PVZ_T();
      local_20[0] = *(float *)(this + 0x108) - 130.0;
      fVar6 = CurveLerp<float>(auVar9,fVar6 + 1.0,auVar9._0_4_,this + 0x108,local_20,4);
      local_18 = CONCAT44(fVar6,(undefined4)local_18);
      iVar3 = FloatApproxEqual(fVar6,*(float *)(this + 0x108) - 130.0);
      if (iVar3 != 0) {
        fVar6 = (float)PVZ_T();
        *(float *)(this + 0x100) = fVar6 + 0.3;
      }
    }
    this_03 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
    StandaloneEffect::SetBoardSpaceOrigin(this_03,(SexyVector3 *)&local_18,0xdbba1);
    fVar6 = *(float *)(this + 0xfc);
    fVar7 = (float)PVZ_T();
    if (fVar6 + 4.0 < fVar7) goto LAB_04785c3c;
LAB_04785b40:
    fVar6 = *(float *)(this + 0xf8);
    fVar7 = (float)PVZ_T();
    if (fVar7 <= fVar6 + 1.0) goto LAB_04785b58;
  }
  else {
    fVar6 = *(float *)(this + 0xfc);
    fVar7 = (float)PVZ_T();
    if (fVar7 <= fVar6 + 4.0) goto LAB_04785b40;
LAB_04785c3c:
    uVar8 = PVZ_T();
    *(undefined4 *)(this + 0xf8) = uVar8;
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0xfc) = uVar8;
    ClearBouncingArrows(this);
    fVar6 = *(float *)(this + 0xf8);
    fVar7 = (float)PVZ_T();
    if (fVar7 <= fVar6 + 1.0) goto LAB_04785b58;
  }
  uVar8 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar8;
  createGloveEffect(this);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(&local_18,L"[POOYAN_TIP_MOVE]",local_20);
  Board::DisplayAdvice(pBVar5,&local_18,6,0);
  FUN_05476c50(&local_18);
  nop();
LAB_04785b58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanIntro::~PooyanIntro() */

void __thiscall PooyanIntro::~PooyanIntro(PooyanIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068d89a0;
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* PooyanIntro::~PooyanIntro() */

void __thiscall PooyanIntro::~PooyanIntro(PooyanIntro *this)

{
  ~PooyanIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::AddBouncingArrow(Sexy::SexyVector2 const&) */

void __thiscall PooyanIntro::AddBouncingArrow(PooyanIntro *this,SexyVector2 *param_1)

{
  Effect_BouncingArrow *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06b24ce8);
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
             *)(this + 0x110),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::updateState_InStage1() */

void __thiscall PooyanIntro::updateState_InStage1(PooyanIntro *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LevelModuleManager *this_00;
  PooyanModule *this_01;
  Effect_BouncingArrow *this_02;
  Board *pBVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_18 [8];
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  if (this_00 != (LevelModuleManager *)0x0) {
    if ((this[0x4c] == (PooyanIntro)0x0) &&
       (this_01 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_00),
       this_01 != (PooyanModule *)0x0)) {
      this[0x4c] = (PooyanIntro)0x1;
      PooyanModule::setCanTouch(this_01,true);
      PooyanModule::SetTutorial(this_01,true);
      PooyanModule::GiveTutorialPooyanShooter(this_01);
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0xfc) = uVar5;
      ClearBouncingArrows(this);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(0);
      iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(2);
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      fVar6 = (float)FUN_04784c4c((float)iVar1);
      fVar7 = (float)FUN_04784c4c((float)(iVar2 - iVar3 / 2));
      Sexy::FastCurve::SetOutRange(aFStack_10,fVar6,fVar7);
      this_02 = (Effect_BouncingArrow *)AddBouncingArrow(this,(SexyVector2 *)aFStack_10);
      Effect_BouncingArrow::PointDown(this_02);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
      pBVar4 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aFStack_10,L"[POOYAN_TIP_CORE]",auStack_18);
      Board::DisplayAdvice(pBVar4,aFStack_10,6,0);
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
/* PooyanIntro::registerForEvents() */

void __thiscall PooyanIntro::registerForEvents(PooyanIntro *this)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  LevelModuleManager *pLVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LevelModule::getManager();
  FUN_04784aac(lVar3 + 0x80);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnIntroStarted);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
  pLVar4 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar4,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPooyanShooterChoosed);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PooyanShooterChoosed,aDStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar5);
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnPooyanIntroHandleTouch);
    Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_38,aCStack_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PooyanIntroHandleTouch,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::StaticClassInit() */

void PooyanIntro::StaticClassInit(void)

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
  Delegate1<PIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PooyanIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_04786a94,0x128,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PIState_GAMEINIT");
  StateDefinition<PIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047864ec(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PIState_TUTORIAL");
  StateDefinition<PIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047864ec(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PIState_InStage1");
  StateDefinition<PIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047864ec(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<PooyanIntro,void(PooyanIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<PIState>::Delegate1<PooyanIntro,void(PooyanIntro::*)(PIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"PIState_STARTGAME");
  StateDefinition<PIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047864ec(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PooyanIntro::StaticGetClass() */

long * PooyanIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PooyanIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::setState(PIState) */

void __thiscall PooyanIntro::setState(PooyanIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PIState>::GetStateDefinition
                     ((StateMachineTable<PIState> *)pSVar2,param_2);
  StateDefinition<PIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PIState>::SetContext(aSStack_a8,this);
  StateMachine<PIState>::SetState
            ((StateMachine<PIState> *)(this + 0x50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanIntro::OnPooyanShooterChoosed() */

void __thiscall PooyanIntro::OnPooyanShooterChoosed(PooyanIntro *this)

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
      setState(this,2);
      return;
    }
  }
  setState(this,0);
  return;
}


/* PooyanIntro::OnIntroStarted() */

void __thiscall PooyanIntro::OnIntroStarted(PooyanIntro *this)

{
  LevelModuleManager *this_00;
  PooyanModule *this_01;
  
  this_00 = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_00);
  if (this_01 != (PooyanModule *)0x0) {
    PooyanModule::setCanTouch(this_01,false);
  }
  setState(this,1);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::OnPooyanIntroHandleTouch() */

void __thiscall PooyanIntro::OnPooyanIntroHandleTouch(PooyanIntro *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  LevelModuleManager *this_01;
  PooyanModule *this_02;
  long *plVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_01);
  if ((this_02 != (PooyanModule *)0x0) &&
     (cVar1 = ZombossFanPullActionHandler::IsPulling((ZombossFanPullActionHandler *)this_02),
     cVar1 != '\0')) {
    this_00 = (RtWeakPtr *)(this + 0xf0);
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x48))();
      Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
    cVar1 = isInState(this,2);
    if (cVar1 != '\0') {
      setState(this,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::StartPooyanGame() */

void __thiscall PooyanIntro::StartPooyanGame(PooyanIntro *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  LevelModuleManager *this_01;
  PooyanModule *this_02;
  long *plVar2;
  PrimeText *this_03;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_01);
  if (this_02 != (PooyanModule *)0x0) {
    PooyanModule::KillPooyanShooter(this_02);
    PooyanModule::setCanTouch(this_02,true);
    PooyanModule::SetTutorial(this_02,false);
  }
  this_00 = (RtWeakPtr *)(this + 0xf0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this_03 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_03);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  setState(this,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntro::OnNarrativeChoosedCompleted() */

void __thiscall PooyanIntro::OnNarrativeChoosedCompleted(PooyanIntro *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  LevelModuleManager *this_01;
  PooyanModule *this_02;
  long *plVar2;
  PrimeText *this_03;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_01 = (LevelModuleManager *)FUN_04784ab8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<PooyanModule>(this_01);
  if (this_02 != (PooyanModule *)0x0) {
    PooyanModule::KillPooyanShooter(this_02);
    PooyanModule::setCanTouch(this_02,true);
    PooyanModule::SetTutorial(this_02,false);
  }
  this_00 = (RtWeakPtr *)(this + 0xf0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  this_03 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_03);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  setState(this,3);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanIntro::updateState_GAMEINIT() */

void __thiscall PooyanIntro::updateState_GAMEINIT(PooyanIntro *this)

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
  StartPooyanGame(this);
  return;
}

