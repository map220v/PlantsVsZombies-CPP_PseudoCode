// Class: PowerupCukeTutorialIntro


/* PowerupCukeTutorialIntro::~PowerupCukeTutorialIntro() */

void __thiscall PowerupCukeTutorialIntro::~PowerupCukeTutorialIntro(PowerupCukeTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06832e20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x98));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x90));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  TutorialFinger::~TutorialFinger((TutorialFinger *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* PowerupCukeTutorialIntro::~PowerupCukeTutorialIntro() */

void __thiscall PowerupCukeTutorialIntro::~PowerupCukeTutorialIntro(PowerupCukeTutorialIntro *this)

{
  ~PowerupCukeTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* PowerupCukeTutorialIntro::PowerupCukeTutorialIntro() */

void __thiscall PowerupCukeTutorialIntro::PowerupCukeTutorialIntro(PowerupCukeTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06832e20;
  TutorialFinger::TutorialFinger((TutorialFinger *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x90));
  StateMachine<PowerupCukeTutorialState>::StateMachine
            ((StateMachine<PowerupCukeTutorialState> *)(this + 0x98));
  *(undefined4 *)(this + 0x138) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  this[0x148] = (PowerupCukeTutorialIntro)0x0;
  return;
}


/* PowerupCukeTutorialIntro::onEnterState_Start(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_Start(long *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  return;
}


/* PowerupCukeTutorialIntro::onExitState_WaveTrigger(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onExitState_WaveTrigger(long param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}


/* PowerupCukeTutorialIntro::drawLawnOverlays(Sexy::Graphics*) */

void __thiscall
PowerupCukeTutorialIntro::drawLawnOverlays(PowerupCukeTutorialIntro *this,Graphics *param_1)

{
  TutorialFinger::Draw((TutorialFinger *)(this + 0x50),param_1);
  return;
}


/* PowerupCukeTutorialIntro::enterTutorial() */

void __thiscall PowerupCukeTutorialIntro::enterTutorial(PowerupCukeTutorialIntro *this)

{
  char cVar1;
  PlayerInfo *this_00;
  
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = PlayerInfo::GetPowerupUnlockState(this_00,(string *)&DAT_06af9468);
  if (cVar1 == '\0') {
    return;
  }
  PlayerInfo::ModifyPowerupUses(this_00,(string *)&DAT_06af9468,-1000000);
  return;
}


/* PowerupCukeTutorialIntro::isInState(PowerupCukeTutorialState) const */

bool __thiscall PowerupCukeTutorialIntro::isInState(PowerupCukeTutorialIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_04310a74(*(undefined4 *)(this + 0x98));
  return iVar1 == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::makeZombieRiseFromGround(Zombie*) */

void __thiscall
PowerupCukeTutorialIntro::makeZombieRiseFromGround(PowerupCukeTutorialIntro *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(0);
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  if (0 < iVar2 - iVar1) {
    iVar2 = Sexy::Rand(iVar2 - iVar1);
    iVar1 = iVar1 + iVar2;
  }
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_10 = *(undefined4 *)(puVar3 + 1);
  _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),(float)iVar1);
  Zombie::RiseFromGround(param_1,(SexyVector3 *)&local_18,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntro::getPowerupCukeTutorialStateSerialization() */

void __thiscall
PowerupCukeTutorialIntro::getPowerupCukeTutorialStateSerialization(PowerupCukeTutorialIntro *this)

{
  FUN_04310a74(*(undefined4 *)(this + 0x98));
  return;
}


/* PowerupCukeTutorialIntro::onExitState_UsePlantfood(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onExitState_UsePlantfood(long param_1)

{
  AnimationMgr *this;
  
  this = (AnimationMgr *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90))
  ;
  AnimationMgr::Clear(this);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* PowerupCukeTutorialIntro::update() */

void __thiscall PowerupCukeTutorialIntro::update(PowerupCukeTutorialIntro *this)

{
  int iVar1;
  AnimationMgr *this_00;
  
  iVar1 = FUN_04310a74(*(undefined4 *)(this + 0x98));
  if (iVar1 != -1) {
    StateMachine<PowerupCukeTutorialState>::UpdateState
              ((StateMachine<PowerupCukeTutorialState> *)(this + 0x98));
  }
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x90))
  ;
  AnimationMgr::Update(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onGameplayStarted() */

void __thiscall PowerupCukeTutorialIntro::onGameplayStarted(PowerupCukeTutorialIntro *this)

{
  char cVar1;
  UIWidget *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,7);
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"UIPowerupHolder");
    UIWidget::GetWidgetBySheetName(asStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    UIWidget::SetVisible(this_00,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntro::onEndLevel() */

void __thiscall PowerupCukeTutorialIntro::onEndLevel(PowerupCukeTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtrBase *this_01;
  char cVar1;
  AnimationMgr *this_02;
  long *plVar2;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x90);
  this_02 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(this_02);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtMixedPtrBase *)(this + 0x88);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_01);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onShowCukeConfirm(bool) */

void __thiscall
PowerupCukeTutorialIntro::onShowCukeConfirm(PowerupCukeTutorialIntro *this,bool param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  StandaloneEffect *pSVar3;
  undefined8 *puVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,2);
  if (cVar1 != '\0') {
    this_00 = (RtMixedPtrBase *)(this + 0x88);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      puVar4 = (undefined8 *)StandaloneEffect::GetScreenSpaceOrigin(pSVar3);
      local_10 = *puVar4;
      if (param_1) {
        iVar2 = FUN_04311054(0x46);
        iVar2 = -iVar2;
      }
      else {
        iVar2 = FUN_04311054(0x46);
      }
      local_10 = CONCAT44(local_10._4_4_ + (float)iVar2,(undefined4)local_10);
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetScreenSpaceOrigin(pSVar3,(SexyVector2 *)&local_10,900000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onExitState_PlantfoodEnd(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onExitState_PlantfoodEnd(long param_1)

{
  bool bVar1;
  AnimationMgr *this;
  UIWidget *this_00;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (AnimationMgr *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90))
  ;
  AnimationMgr::Clear(this);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetClickable(this_00,true);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_Resume(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_Resume(long *param_1)

{
  bool bVar1;
  UIWidget *this;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*param_1 + 0x100))(param_1,0);
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    UIWidget::SetVisible(this,true);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntro::onEnterState_WaveTrigger(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_WaveTrigger(long param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(param_1 + 0x138) = fVar1 + 2.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::initializeModule() */

void __thiscall PowerupCukeTutorialIntro::initializeModule(PowerupCukeTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x90),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::introduceDave() */

void __thiscall PowerupCukeTutorialIntro::introduceDave(PowerupCukeTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"TACTICAL_CUKE_INTRO");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
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


/* PowerupCukeTutorialIntro::onLoadComplete() */

void __thiscall PowerupCukeTutorialIntro::onLoadComplete(PowerupCukeTutorialIntro *this)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  string *psVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar3[0x91] != (ResilienceTutorialIntroProperties)0x0) {
    psVar4 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = std::operator==(psVar4,"egypt2");
    if (!bVar1) {
      psVar4 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      bVar1 = std::operator==(psVar4,"egypt6");
      if (!bVar1) {
        return;
      }
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar5);
    if (cVar2 == '\0') {
      return;
    }
  }
  StandardLevelIntro::onLoadComplete((StandardLevelIntro *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_Plantfood(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_Plantfood(StandardLevelIntro *param_1)

{
  bool bVar1;
  long lVar2;
  UIWidget *pUVar3;
  CrazyNPCManager *pCVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  string *extraout_x1;
  Board *this;
  RtWeakPtr aRStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initBoardEntities(param_1);
  this = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_50,"");
  lVar2 = Board::GetPlantAt(this,1,2,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (lVar2 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x140),(RtWeakPtrBase *)asStack_50
              );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
  }
  std::string::string(asStack_50,"UIPlantfood");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_50,extraout_x1);
  std::string::~string(asStack_50);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_60);
  if (bVar1) {
    pUVar3 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    UIWidget::SetVisible(pUVar3,true);
    pUVar3 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    UIWidget::SetClickable(pUVar3,true);
    Board::SetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0),1);
  }
  pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar4,pRVar5 + 0x80,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_UsePlantfood(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_UsePlantfood(LevelModule *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  int iVar1;
  AnimationMgr *pAVar2;
  long lVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  AnimationController *pAVar5;
  string *extraout_x1;
  float fVar6;
  float fVar7;
  TPoint aTStack_38 [8];
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  undefined4 local_20;
  float local_1c;
  undefined1 auStack_18 [16];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90);
  local_8 = ___stack_chk_guard;
  pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  AnimationMgr::Clear(pAVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_04310a3c(lVar3 + 0x10);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  fVar6 = (float)FUN_04310a48(*(undefined4 *)(lVar3 + 0x10));
  pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_1);
  Sexy::UTF8StringToWString((Sexy *)(pRVar4 + 0x78),extraout_x1);
  pAVar5 = (AnimationController *)ShowAdvice::Create(auStack_18,2);
  AnimationMgr::Add(pAVar2,pAVar5,fVar6);
  FUN_05476c50(auStack_18);
  Board::GetBoardBaseOffset();
  std::string::string((string *)&local_20,"UIPlantfood");
  UIWidget::GetWidgetBySheetName((string *)&local_20);
  UIWidget::GetDrawRect();
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x140));
  fVar7 = *(float *)(lVar3 + 0x1c);
  local_20 = FUN_04310bc4(*(undefined4 *)(lVar3 + 0x18),fVar7,*(undefined4 *)(lVar3 + 0x20));
  local_1c = fVar7;
  fVar6 = (float)FUN_04311040();
  fVar6 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar6);
  Sexy::TRect<int>::GetCenter();
  Sexy::TPoint<int>::operator-(aTStack_28,aTStack_38);
  Sexy::Point::Point((Point *)&local_30,(TPoint *)&local_20);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
  TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(param_1 + 0x50));
  iVar1 = FUN_04311054(0xf);
  TutorialFinger::SetCurvingTutorialFinger
            ((TutorialFinger *)(param_1 + 0x50),(float)(local_30 - iVar1),(float)local_2c,fVar6,
             fVar7,1.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_PlantfoodEnd(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_PlantfoodEnd(LevelModule *param_1)

{
  CrazyNPCManager *pCVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onNarrationFinished);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_38,aCStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar1,pRVar2 + 0x88,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::addToRenderQueue(RenderQueue*) */

void __thiscall
PowerupCukeTutorialIntro::addToRenderQueue(PowerupCukeTutorialIntro *this,RenderQueue *param_1)

{
  AnimationMgr *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x90))
  ;
  AnimationMgr::AddToRenderQueue(this_00,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLawnOverlays);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0xdbba1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::setupOpeningZombies() */

void __thiscall PowerupCukeTutorialIntro::setupOpeningZombies(PowerupCukeTutorialIntro *this)

{
  undefined4 uVar1;
  ResourceInfo *pRVar2;
  int iVar3;
  Board *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar3 = 0xc;
  local_8 = ___stack_chk_guard;
  do {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    Board::GetStage(this_00);
    StageModule::GetBasicZombieType();
    uVar1 = Sexy::Rand(5);
    Board::AddZombieInRow(this_00,aRStack_18,uVar1,0,0,1,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    makeZombieRiseFromGround(this,(Zombie *)pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_SpawnZombies(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_SpawnZombies(PowerupCukeTutorialIntro *param_1)

{
  undefined4 uVar1;
  ResourceInfo *pRVar2;
  int iVar3;
  Board *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  iVar3 = 0xc;
  lStack_8 = ___stack_chk_guard;
  do {
    this = *(Board **)(gLawnApp + 0x9f0);
    Board::GetStage(this);
    StageModule::GetBasicZombieType();
    uVar1 = Sexy::Rand(5);
    Board::AddZombieInRow(this,aRStack_18,uVar1,0,0,1,1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    makeZombieRiseFromGround(param_1,(Zombie *)pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onCanApplyPlantfood(PlantGroup*, bool*) */

void __thiscall
PowerupCukeTutorialIntro::onCanApplyPlantfood
          (PowerupCukeTutorialIntro *this,PlantGroup *param_1,bool *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  RtWeakPtrBase *pRVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,5);
  if ((cVar1 != '\0') && (param_2 != (bool *)0x0)) {
    if (param_1 != (PlantGroup *)0x0) {
      puVar3 = (undefined8 *)PlantGroup::Plants();
      local_20 = FUN_043126d8(*puVar3);
      local_18 = FUN_04312728(puVar3[1]);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar2) {
        pRVar4 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar4);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_28);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          ToolPacketData::GetProps();
          cVar1 = Sexy::RtWeakPtrBase::operator==
                            ((RtWeakPtrBase *)(this + 0x140),(RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          if (cVar1 != '\0') {
            *param_2 = true;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            goto LAB_04312884;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
      }
    }
    *param_2 = false;
  }
LAB_04312884:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntro::StaticNew() */

PowerupCukeTutorialIntro * PowerupCukeTutorialIntro::StaticNew(void)

{
  PowerupCukeTutorialIntro *this;
  
  this = ::operator_new(0x150);
  PowerupCukeTutorialIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::pointArrowAtPowerupButton() */

void __thiscall PowerupCukeTutorialIntro::pointArrowAtPowerupButton(PowerupCukeTutorialIntro *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  UIWidget *pUVar4;
  UIEasyButtonWidget *this_01;
  long lVar5;
  Effect_BouncingArrow *pEVar6;
  StandaloneEffect *pSVar7;
  int iVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88);
  local_8 = ___stack_chk_guard;
  Board::AddPowerup(*(Board **)(gLawnApp + 0x9f0),(string *)&DAT_06af9468);
  std::string::string(asStack_20,"UIPowerupHolder");
  iVar8 = 0;
  UIWidget::GetWidgetBySheetName(asStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  pUVar4 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  UIWidget::SetVisible(pUVar4,true);
  while( true ) {
    pUVar4 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar2 = UIWidget::GetChildCount(pUVar4);
    if (iVar2 <= iVar8) break;
    iVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    UIWidget::GetChildId(iVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)&local_18);
    Sexy::RtId::~RtId((RtId *)&local_18);
    this_01 = (UIEasyButtonWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    lVar5 = UIEasyButtonWidget::GetImageNormal(this_01);
    cVar1 = std::operator==((string *)(lVar5 + 8),(string *)&DAT_06af9468);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      FUN_04310a58(lVar5 + 0x1aa,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      UIWidget::GetDrawRect();
      Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      pEVar6 = (Effect_BouncingArrow *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06af9438);
      Effect_BouncingArrow::SetArrowImage(pEVar6,asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetVisibility(pSVar7,true);
      Sexy::Point::Point((Point *)&local_28,
                         (local_18 + local_10 / 2) - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),
                         local_14 - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c));
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
      pSVar7 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar2 = local_24;
      iVar3 = FUN_04311054(0x28);
      Sexy::FastCurve::SetOutRange((FastCurve *)asStack_20,(float)local_28,(float)(iVar2 - iVar3));
      StandaloneEffect::SetScreenSpaceOrigin(pSVar7,(SexyVector2 *)asStack_20,900000);
    }
    iVar8 = iVar8 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_DaveProlog(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_DaveProlog(long param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  bool bVar1;
  UIWidget *this_00;
  long lVar2;
  AnimationMgr *this_01;
  AnimationController *pAVar3;
  string *extraout_x1;
  float fVar4;
  RtWeakPtr aRStack_28 [8];
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPauseButton");
  UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (bVar1) {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    UIWidget::SetVisible(this_00,false);
  }
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_04310a3c(lVar2 + 0x10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  fVar4 = (float)FUN_04310a48(*(undefined4 *)(lVar2 + 0x10));
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"introduceDave");
  pAVar3 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(this_01,pAVar3,fVar4 + 1.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_Advice(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_Advice(long param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  AnimationController *pAVar1;
  TimeEvent *pTVar2;
  AnimationController *pAVar3;
  long lVar4;
  AnimationMgr *pAVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(asStack_10,L"[TACTICAL_CUKE_ADVICE_AT_LAST]",aRStack_18);
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90);
  pAVar1 = (AnimationController *)ShowAdvice::Create(asStack_10,7);
  FUN_05476c50(asStack_10);
  nop();
  pTVar2 = (TimeEvent *)TimeEvent::Create();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onEndOfAdvice");
  pAVar3 = (AnimationController *)TimeEvent::Init(pTVar2,aRStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_04310a3c(lVar4 + 0x10);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  fVar6 = (float)FUN_04310a48(*(undefined4 *)(lVar4 + 0x10));
  fVar7 = (float)FUN_04310a38(*(undefined4 *)(pAVar1 + 0x18));
  pAVar5 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  AnimationMgr::Add(pAVar5,pAVar1,fVar6);
  pAVar5 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  AnimationMgr::Add(pAVar5,pAVar3,fVar7 + fVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::pauseWave(bool) */

void __thiscall PowerupCukeTutorialIntro::pauseWave(PowerupCukeTutorialIntro *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  UIWidget *pUVar4;
  WaveManager *this_00;
  undefined8 *puVar5;
  Plant *this_01;
  SunDropperModule *this_02;
  Zombie *pZVar6;
  RtObject *this_03;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIPlantfood");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetClickable(pUVar4,!param_1);
  }
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  WaveManager::SetPause(this_00,param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  uVar3 = operator|(2,1);
  EntityFinder::GetEntities(asStack_20,uVar3);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    do {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_03 = (RtObject *)*puVar5;
      bVar1 = Sexy::RtObject::IsA<Plant>(this_03);
      if (bVar1) {
        this_01 = Sexy::RtObject::Cast<Plant>(this_03);
        if (param_1) {
          if (*(code **)(*(long *)this_01 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar2 = Plant::IsInPlantFoodState(this_01);
          }
          else {
            cVar2 = (**(code **)(*(long *)this_01 + 0x1f8))();
          }
          if (cVar2 != '\0') {
            Plant::DisablePlantfoodAnimation(this_01);
          }
        }
        this_01[0x158] = (Plant)!param_1;
      }
      else {
        bVar1 = Sexy::RtObject::IsA<Zombie>(this_03);
        if (bVar1) {
          pZVar6 = Sexy::RtObject::Cast<Zombie>(this_03);
          cVar2 = (**(code **)(*(long *)pZVar6 + 0x328))();
          if (cVar2 == '\0') {
            if (param_1) {
              (**(code **)(*(long *)pZVar6 + 600))();
            }
            else {
              (**(code **)(*(long *)pZVar6 + 0x260))(pZVar6);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar1);
  }
  this_02 = (SunDropperModule *)FUN_04312f64(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_02 != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this_02,param_1);
  }
  pUVar4 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,!param_1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onPowerupSelected(BasePowerup*) */

void PowerupCukeTutorialIntro::onPowerupSelected(BasePowerup *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  UIWidget *this;
  UIEasyButtonWidget *this_00;
  long lVar4;
  StandaloneEffect *this_01;
  int iVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"UIPowerupHolder");
  UIWidget::GetWidgetBySheetName(asStack_28);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::~string(asStack_28);
  nop();
  while( true ) {
    this = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    iVar3 = UIWidget::GetChildCount(this);
    puVar1 = gMessageRouter;
    if (iVar3 <= iVar5) break;
    iVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    UIWidget::GetChildId(iVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)&local_20);
    Sexy::RtId::~RtId((RtId *)&local_20);
    this_00 = (UIEasyButtonWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    lVar4 = UIEasyButtonWidget::GetImageNormal(this_00);
    bVar2 = std::operator==((string *)(lVar4 + 8),"poweruptacticalcuke");
    if (bVar2) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      FUN_04310a58(lVar4 + 0x1aa,0);
    }
    iVar5 = iVar5 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onPowerupSelected);
  local_60 = local_20;
  uStack_58 = uStack_18;
  local_50 = local_10;
  MessageRouter::
  Unsubscribe<BasePowerup*,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(BasePowerup*)>>
            ((MessageRouter *)puVar1,Message::PowerupSelected,&local_60);
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::UseGemFinish,true);
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x88));
  StandaloneEffect::SetVisibility(this_01,false);
  MessageRouter::Post<int,TutorialEvent>((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0xb);
  MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
            ((MessageRouter *)gMessageRouter,Message::Toturi,0,6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntro::onToolAppliedPlantFood(PlantGroup*) */

void PowerupCukeTutorialIntro::onToolAppliedPlantFood(PlantGroup *param_1)

{
  char cVar1;
  AnimationMgr *this;
  long lVar2;
  
  cVar1 = isInState((PowerupCukeTutorialIntro *)param_1,5);
  if (cVar1 == '\0') {
    return;
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x140));
  if (cVar1 != '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x140));
    *(undefined1 *)(lVar2 + 0x158) = 1;
  }
  TutorialFinger::StopCurvingTutorialFinger((TutorialFinger *)(param_1 + 0x50));
  this = (AnimationMgr *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x90))
  ;
  AnimationMgr::Clear(this);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  param_1[0x148] = (PlantGroup)0x1;
  MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
            ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x23);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::onEnterState_ArrowAlert(PowerupCukeTutorialState) */

void PowerupCukeTutorialIntro::onEnterState_ArrowAlert(PowerupCukeTutorialIntro *param_1)

{
  PlayerInfo *this;
  PowerupManager *this_00;
  string *psVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::ModifyPowerupUses(this,(string *)&DAT_06af9468,3);
  pointArrowAtPowerupButton(param_1);
  this_00 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
  ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  lVar3 = PowerupManager::GetBasePowerup(this_00,(PowerupType *)pRVar2);
  FUN_04310bb8(lVar3 + 0x1a);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::registerForEvents() */

void __thiscall PowerupCukeTutorialIntro::registerForEvents(PowerupCukeTutorialIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
    FUN_04310a4c(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xf0);
    Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLoadComplete(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x1f8);
    Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x200);
    Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x208);
    Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x210);
    Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnGameplayStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addToRenderQueue);
    Sexy::Delegate1<RenderQueue*>::
    Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(RenderQueue*)>
              ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterAddToRenderQueue(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPowerupSelected);
    local_e0 = local_b8;
    local_f0 = local_c8;
    uStack_e8 = uStack_c0;
    MessageRouter::
    Subscribe<BasePowerup*,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(BasePowerup*)>>
              ((MessageRouter *)puVar1,Message::PowerupSelected,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPowerupDeactivated);
    local_f0 = local_b0;
    uStack_e8 = uStack_a8;
    local_e0 = local_a0;
    MessageRouter::
    Subscribe<BasePowerup*,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(BasePowerup*)>>
              ((MessageRouter *)puVar1,Message::PowerupDeactivated,&local_f0);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onShowCukeConfirm);
    local_100 = local_88;
    local_110 = local_98;
    uStack_108 = uStack_90;
    MessageRouter::
    Subscribe<bool,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(bool)>>
              ((MessageRouter *)puVar1,Message::ShowCukeConfirm,&local_110);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onWaveStarted);
    local_130 = local_80;
    uStack_128 = uStack_78;
    local_120 = local_70;
    MessageRouter::
    Subscribe<int,WaveType::WaveType,bool,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(int,WaveType::WaveType,bool)>>
              ((MessageRouter *)puVar1,Message::WaveStarted,&local_130);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCanApplyPlantfood);
    local_150 = local_68;
    uStack_148 = uStack_60;
    local_140 = local_58;
    MessageRouter::
    Subscribe<PlantGroup*,bool*,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PlantGroup*,bool*)>>
              ((MessageRouter *)puVar1,Message::CanApplyPlantfood,&local_150);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000228);
    local_170 = local_50;
    uStack_168 = uStack_48;
    local_160 = local_40;
    MessageRouter::
    Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PlantGroup*)>>
              ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_170);
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
/* PowerupCukeTutorialIntro::StaticClassInit() */

void PowerupCukeTutorialIntro::StaticClassInit(void)

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
  Delegate1<PowerupCukeTutorialState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PowerupCukeTutorialState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PowerupCukeTutorialIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_043148dc,0x150,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PowerupCukeTutorialState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_SpawnZombies");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_DaveProlog");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_ArrowAlert");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_Advice");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x178);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_Plantfood");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x180);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x188);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x190);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_UsePlantfood");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x198);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1a0);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1a8);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_PlantfoodEnd");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1b0);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1b8);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1c0);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_Start");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,7,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1c8);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d0);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_Resume");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate0::Delegate0<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<PowerupCukeTutorialState>::
  Delegate1<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PowerupCukeTutorialState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"POWERUPCUKETUTORIAL_WaveTrigger");
  StateDefinition<PowerupCukeTutorialState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04313b5c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PowerupCukeTutorialIntro::StaticGetClass() */

long * PowerupCukeTutorialIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupCukeTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::setState(PowerupCukeTutorialState) */

void __thiscall
PowerupCukeTutorialIntro::setState(PowerupCukeTutorialIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PowerupCukeTutorialState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PowerupCukeTutorialState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PowerupCukeTutorialState>::GetStateDefinition
                     ((StateMachineTable<PowerupCukeTutorialState> *)pSVar2,param_2);
  StateDefinition<PowerupCukeTutorialState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PowerupCukeTutorialState>::SetContext(aSStack_a8,this);
  StateMachine<PowerupCukeTutorialState>::SetState
            ((StateMachine<PowerupCukeTutorialState> *)(this + 0x98),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntro::startIntro() */

void __thiscall PowerupCukeTutorialIntro::startIntro(PowerupCukeTutorialIntro *this)

{
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  setState(this,4);
  return;
}


/* PowerupCukeTutorialIntro::onPowerupDeactivated(BasePowerup*) */

void PowerupCukeTutorialIntro::onPowerupDeactivated(BasePowerup *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,onPowerupDeactivated);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Unsubscribe<BasePowerup*,Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(BasePowerup*)>>
            ((MessageRouter *)puVar1,Message::PowerupDeactivated,&local_40);
  setState((PowerupCukeTutorialIntro *)param_1,3);
  return;
}


/* PowerupCukeTutorialIntro::onNarrationFinished() */

void __thiscall PowerupCukeTutorialIntro::onNarrationFinished(PowerupCukeTutorialIntro *this)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  
  cVar1 = isInState(this,1);
  if (cVar1 != '\0') {
    setState(this,2);
    return;
  }
  cVar1 = isInState(this,4);
  if (cVar1 == '\0') {
    cVar1 = isInState(this,6);
    if ((cVar1 != '\0') &&
       (pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
       pRVar2[0x90] != (ResilienceTutorialIntroProperties)0x0)) {
      setState(this,7);
      return;
    }
    return;
  }
  setState(this,5);
  return;
}


/* PowerupCukeTutorialIntro::onEndOfAdvice() */

void __thiscall PowerupCukeTutorialIntro::onEndOfAdvice(PowerupCukeTutorialIntro *this)

{
  setState(this,8);
  return;
}


/* PowerupCukeTutorialIntro::updateState_SpawnZombies() */

void __thiscall PowerupCukeTutorialIntro::updateState_SpawnZombies(PowerupCukeTutorialIntro *this)

{
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::updateState_UsePlantfood() */

void __thiscall PowerupCukeTutorialIntro::updateState_UsePlantfood(PowerupCukeTutorialIntro *this)

{
  char cVar1;
  bool bVar2;
  Plant *this_00;
  UIWidget *this_01;
  string *extraout_x1;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TutorialFinger::Update((TutorialFinger *)(this + 0x50));
  if (this[0x148] != (PowerupCukeTutorialIntro)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x140));
    if (cVar1 != '\0') {
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
      if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
        cVar1 = Plant::IsInPlantFoodState(this_00);
      }
      else {
        cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
      }
      if (cVar1 == '\0') {
        std::string::string(asStack_10,"UIPauseButton");
        UIWidget::GetWidgetPtrBySheetName((UIWidget *)asStack_10,extraout_x1);
        std::string::~string(asStack_10);
        nop();
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
        if (bVar2) {
          this_01 = (UIWidget *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          UIWidget::SetClickable(this_01,false);
        }
        setState(this,6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntro::onWaveStarted(int, WaveType::WaveType, bool) */

void PowerupCukeTutorialIntro::onWaveStarted(PowerupCukeTutorialIntro *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = isInState(param_1,7);
  if ((cVar1 != '\0') && (param_2 == 4)) {
    setState(param_1,9);
    return;
  }
  return;
}


/* PowerupCukeTutorialIntro::updateState_WaveTrigger() */

void __thiscall PowerupCukeTutorialIntro::updateState_WaveTrigger(PowerupCukeTutorialIntro *this)

{
  char cVar1;
  PlayerInfo *this_00;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x138);
  if ((0.0 < fVar3) && (fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
    cVar1 = (**(code **)(*(long *)this + 0x220))(this);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x100))(this,1);
    }
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::SetGameFeatureUnlockState(this_00,0x22,1);
    PlayerInfo::SetPowerupUnlockState(this_00,(string *)&DAT_06af9468,true);
    cVar1 = (**(code **)(*(long *)this + 0x220))(this);
    if (cVar1 != '\0') {
      setState(this,1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntro::setPowerupCukeTutorialStateSerialization(int) */

void __thiscall
PowerupCukeTutorialIntro::setPowerupCukeTutorialStateSerialization
          (PowerupCukeTutorialIntro *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PowerupCukeTutorialState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar2 = StateMachineTableBuilder::GetTable<PowerupCukeTutorialState>(this_00,pRVar1);
    pSVar3 = (StateDefinition *)
             StateMachineTable<PowerupCukeTutorialState>::GetStateDefinition
                       ((StateMachineTable<PowerupCukeTutorialState> *)pSVar2,param_1);
    StateDefinition<PowerupCukeTutorialState>::StateDefinition(aSStack_a8,pSVar3);
    StateDefinition<PowerupCukeTutorialState>::SetContext(aSStack_a8,this);
    StateMachine<DPEState>::SetStateNoTransition
              ((StateMachine<DPEState> *)(this + 0x98),(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

