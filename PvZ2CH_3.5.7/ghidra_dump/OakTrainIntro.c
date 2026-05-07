// Class: OakTrainIntro


/* OakTrainIntro::OnLevelEnded() */

void __thiscall OakTrainIntro::OnLevelEnded(OakTrainIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* OakTrainIntro::isInState(OTIState) const */

bool __thiscall OakTrainIntro::isInState(OakTrainIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e495bc(*(undefined4 *)(this + 0x58));
  return iVar1 == param_2;
}


/* OakTrainIntro::~OakTrainIntro() */

void __thiscall OakTrainIntro::~OakTrainIntro(OakTrainIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678b610;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* OakTrainIntro::~OakTrainIntro() */

void __thiscall OakTrainIntro::~OakTrainIntro(OakTrainIntro *this)

{
  ~OakTrainIntro(this);
  AK::FreeHook(this);
  return;
}


/* OakTrainIntro::OnUpdate() */

void __thiscall OakTrainIntro::OnUpdate(OakTrainIntro *this)

{
  StateMachine<OTIState>::UpdateState((StateMachine<OTIState> *)(this + 0x58));
  return;
}


/* OakTrainIntro::OakTrainIntro() */

void __thiscall OakTrainIntro::OakTrainIntro(OakTrainIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678b610;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  StateMachine<OTIState>::StateMachine((StateMachine<OTIState> *)(this + 0x58));
  return;
}


/* OakTrainIntro::StaticNew() */

OakTrainIntro * OakTrainIntro::StaticNew(void)

{
  OakTrainIntro *this;
  
  this = ::operator_new(0xf8);
  OakTrainIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::ShowArrow(Sexy::SexyVector2 const&) */

void __thiscall OakTrainIntro::ShowArrow(OakTrainIntro *this,SexyVector2 *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  Effect_BouncingArrow *pEVar3;
  StandaloneEffect *pSVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar3 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ade420);
  Effect_BouncingArrow::SetArrowImage(pEVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar3 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(pEVar3,5.0,25.0);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetVisibility(pSVar4,true);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar4,param_1,1000000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::onEnterState_RELOAD_ARROW(OTIState) */

void OakTrainIntro::onEnterState_RELOAD_ARROW(OakTrainIntro *param_1)

{
  bool bVar1;
  int iVar2;
  LevelModuleManager *this;
  OakTrainModule *pOVar3;
  Board *pBVar4;
  RtWeakPtr aRStack_40 [8];
  Point aPStack_38 [8];
  TPoint aTStack_30 [8];
  int local_28;
  int local_24;
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar4 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(&local_18,L"[OAK_TRAIN_TUTORIAL_2]",aFStack_20);
  Board::DisplayAdvice(pBVar4,&local_18,7,0);
  FUN_05476c50(&local_18);
  nop();
  this = (LevelModuleManager *)FUN_03e495b4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pOVar3 = LevelModuleManager::GetModuleByClass<OakTrainModule>(this);
  if (pOVar3 != (OakTrainModule *)0x0) {
    OakTrainModule::GetArrowWidgetPtr(aRStack_40,pOVar3,0);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      UIWidget::GetDrawRect();
      iVar2 = FUN_03e49830();
      Sexy::Point::Point(aPStack_38,local_18 + local_10 / 2 + iVar2,iVar2 + local_14);
      Board::GetBoardBaseOffset();
      Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_38,aTStack_30);
      Sexy::Point::Point((Point *)&local_28,(TPoint *)aFStack_20);
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
      Sexy::FastCurve::SetOutRange(aFStack_20,(float)local_28,(float)local_24);
      ShowArrow(param_1,(SexyVector2 *)aFStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::onEnterState_CHANGE_ARROW(OTIState) */

void OakTrainIntro::onEnterState_CHANGE_ARROW(OakTrainIntro *param_1)

{
  bool bVar1;
  int iVar2;
  LevelModuleManager *this;
  OakTrainModule *this_00;
  Board *pBVar3;
  RtWeakPtr aRStack_40 [8];
  Point aPStack_38 [8];
  TPoint aTStack_30 [8];
  int local_28;
  int local_24;
  FastCurve aFStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(&local_18,L"[OAK_TRAIN_TUTORIAL_4]",aFStack_20);
  Board::DisplayAdvice(pBVar3,&local_18,7,0);
  FUN_05476c50(&local_18);
  nop();
  this = (LevelModuleManager *)FUN_03e495b4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<OakTrainModule>(this);
  if (this_00 != (OakTrainModule *)0x0) {
    PlantJackOLantern::ShowPersistentEffects((PlantJackOLantern *)this_00,true);
    OakTrainModule::GetArrowWidgetPtr(aRStack_40,this_00,2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_40);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
      UIWidget::GetDrawRect();
      iVar2 = FUN_03e49830();
      Sexy::Point::Point(aPStack_38,local_18 + local_10 / 2 + iVar2,iVar2 + local_14);
      Board::GetBoardBaseOffset();
      Sexy::TPoint<int>::operator-((TPoint<int> *)aPStack_38,aTStack_30);
      Sexy::Point::Point((Point *)&local_28,(TPoint *)aFStack_20);
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
      Sexy::FastCurve::SetOutRange(aFStack_20,(float)local_28,(float)local_24);
      ShowArrow(param_1,(SexyVector2 *)aFStack_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::onEnterState_HEAD_SHOOT(OTIState) */

void OakTrainIntro::onEnterState_HEAD_SHOOT(OakTrainIntro *param_1)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  RtObject *this;
  ZombieTargetWizard *pZVar4;
  Board *pBVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_18,"zombie_target_wizard");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string((string *)&local_18);
  nop();
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  pcVar7 = *(code **)(*plVar6 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  this = (RtObject *)(*pcVar7)(plVar6,(string *)&local_18,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pZVar4 = Sexy::RtObject::Cast<ZombieTargetWizard>(this);
  if (pZVar4 != (ZombieTargetWizard *)0x0) {
    DVec3::DVec3((DVec3 *)&local_18);
    iVar1 = BoardTransforms::GridToBoardSpaceX(4);
    local_18 = (float)iVar1;
    iVar1 = BoardTransforms::GridToBoardSpaceY(2);
    local_14 = (float)iVar1;
    (**(code **)(*(long *)pZVar4 + 0xa08))(pZVar4,(string *)&local_18);
    FUN_03e49650(pZVar4 + 0x818);
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178((string *)&local_18,L"[OAK_TRAIN_TUTORIAL_1]",auStack_28);
  Board::DisplayAdvice(pBVar5,(string *)&local_18,7,0);
  FUN_05476c50((string *)&local_18);
  nop();
  BoardTransforms::GridToBoardSpaceX(4);
  iVar1 = FUN_03e4981c();
  iVar2 = BoardTransforms::GridToBoardSpaceY(2);
  iVar2 = FUN_03e4981c(iVar2 + -0x50);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar1,(float)iVar2);
  ShowArrow(param_1,(SexyVector2 *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::onEnterState_GET_ARROW(OTIState) */

void OakTrainIntro::onEnterState_GET_ARROW(OakTrainIntro *param_1)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  RtObject *this;
  ZombieTarget *pZVar4;
  Board *pBVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_18,"zombie_target_arrow_yellow");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string((string *)&local_18);
  nop();
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  pcVar7 = *(code **)(*plVar6 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  this = (RtObject *)(*pcVar7)(plVar6,(string *)&local_18,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pZVar4 = Sexy::RtObject::Cast<ZombieTarget>(this);
  if (pZVar4 != (ZombieTarget *)0x0) {
    DVec3::DVec3((DVec3 *)&local_18);
    iVar1 = BoardTransforms::GridToBoardSpaceX(4);
    local_18 = (float)iVar1;
    iVar1 = BoardTransforms::GridToBoardSpaceY(2);
    local_14 = (float)iVar1;
    (**(code **)(*(long *)pZVar4 + 0xa08))(pZVar4,(string *)&local_18);
  }
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178((string *)&local_18,L"[OAK_TRAIN_TUTORIAL_3]",auStack_28);
  Board::DisplayAdvice(pBVar5,(string *)&local_18,7,0);
  FUN_05476c50((string *)&local_18);
  nop();
  BoardTransforms::GridToBoardSpaceX(4);
  iVar1 = FUN_03e4981c();
  iVar2 = BoardTransforms::GridToBoardSpaceY(2);
  iVar2 = FUN_03e4981c(iVar2 + -0x50);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar1,(float)iVar2);
  ShowArrow(param_1,(SexyVector2 *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::onEnterState_MULTI_SHOT(OTIState) */

void OakTrainIntro::onEnterState_MULTI_SHOT(long param_1)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  RtObject *this;
  ZombieTargetArchmage *pZVar4;
  long *plVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_18,"zombie_target_archmage");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string((string *)&local_18);
  nop();
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  this = (RtObject *)(*pcVar6)(plVar5,(string *)&local_18,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pZVar4 = Sexy::RtObject::Cast<ZombieTargetArchmage>(this);
  if (pZVar4 != (ZombieTargetArchmage *)0x0) {
    DVec3::DVec3((DVec3 *)&local_18);
    iVar2 = BoardTransforms::GridToBoardSpaceX(4);
    local_18 = (float)iVar2;
    iVar2 = BoardTransforms::GridToBoardSpaceY(2);
    local_14 = (float)iVar2;
    (**(code **)(*(long *)pZVar4 + 0xa08))(pZVar4,(string *)&local_18);
    FUN_03e49650(pZVar4 + 0x818);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x50));
  if (bVar1) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50));
    (**(code **)(*plVar5 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::registerForEvents() */

void __thiscall OakTrainIntro::registerForEvents(OakTrainIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
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
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar3);
  if (cVar2 == '\0') {
    lVar4 = LevelModule::getManager();
    FUN_03e495a8(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onZombieDied);
    local_80 = local_58;
    local_90 = local_68;
    uStack_88 = uStack_60;
    MessageRouter::
    Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<OakTrainIntro,void(OakTrainIntro::*)(Zombie*,DamageInfo_const*)>>
              ((MessageRouter *)puVar1,Message::ZombieDied,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onOakArrowManualReload);
    Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::OakArrowManualReload,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onOakArrowAutoReload);
    Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    MessageRouter::Subscribe((MessageRouter *)puVar1,Message::OakArrowAutoReload,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onOakArrowTouch);
    local_b0 = local_50;
    uStack_a8 = uStack_48;
    local_a0 = local_40;
    MessageRouter::
    Subscribe<int,Sexy::CBMemberTranslatorX<OakTrainIntro,void(OakTrainIntro::*)(int)>>
              ((MessageRouter *)puVar1,Message::OakArrowTouch,&local_b0);
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
/* OakTrainIntro::StaticClassInit() */

void OakTrainIntro::StaticClassInit(void)

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
  Delegate1<OTIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<OTIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"OakTrainIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e4b940,0xf8,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<OTIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"OTIState_HEAD_SHOOT");
  StateDefinition<OTIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4b230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"OTIState_RELOAD_ARROW");
  StateDefinition<OTIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4b230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"OTIState_GET_ARROW");
  StateDefinition<OTIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4b230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"OTIState_CHANGE_ARROW");
  StateDefinition<OTIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4b230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x160);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x168);
  Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x170);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"OTIState_MULTI_SHOT");
  StateDefinition<OTIState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4b230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x178);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x180);
  Sexy::Delegate0::Delegate0<OakTrainIntro,void(OakTrainIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x188);
  Sexy::Delegate1<OTIState>::Delegate1<OakTrainIntro,void(OakTrainIntro::*)(OTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"OTIState_START_GAME");
  StateDefinition<OTIState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4b230(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* OakTrainIntro::StaticGetClass() */

long * OakTrainIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OakTrainIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntro::setState(OTIState) */

void __thiscall OakTrainIntro::setState(OakTrainIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<OTIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<OTIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<OTIState>::GetStateDefinition
                     ((StateMachineTable<OTIState> *)pSVar2,param_2);
  StateDefinition<OTIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<OTIState>::SetContext(aSStack_a8,this);
  StateMachine<OTIState>::SetState
            ((StateMachine<OTIState> *)(this + 0x58),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakTrainIntro::OnIntroStarted() */

void __thiscall OakTrainIntro::OnIntroStarted(OakTrainIntro *this)

{
  LevelModuleManager *this_00;
  OakTrainModule *this_01;
  
  this_00 = (LevelModuleManager *)FUN_03e495b4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<OakTrainModule>(this_00);
  if (this_01 != (OakTrainModule *)0x0) {
    OakTrainModule::SetCanTouch(this_01,true);
    PlantJackOLantern::ShowPersistentEffects((PlantJackOLantern *)this_01,false);
  }
  setState(this,0);
  return;
}


/* OakTrainIntro::onOakArrowManualReload() */

void __thiscall OakTrainIntro::onOakArrowManualReload(OakTrainIntro *this)

{
  char cVar1;
  
  cVar1 = isInState(this,1);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,2);
  return;
}


/* OakTrainIntro::onOakArrowAutoReload() */

void __thiscall OakTrainIntro::onOakArrowAutoReload(OakTrainIntro *this)

{
  char cVar1;
  
  cVar1 = isInState(this,1);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,2);
  return;
}


/* OakTrainIntro::onOakArrowTouch(int) */

void __thiscall OakTrainIntro::onOakArrowTouch(OakTrainIntro *this,int param_1)

{
  char cVar1;
  
  if ((param_1 == 2) && (cVar1 = isInState(this,3), cVar1 != '\0')) {
    setState(this,4);
    return;
  }
  return;
}


/* OakTrainIntro::startGame() */

void __thiscall OakTrainIntro::startGame(OakTrainIntro *this)

{
  bool bVar1;
  LevelModuleManager *this_00;
  OakTrainModule *this_01;
  long *plVar2;
  
  setState(this,5);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (LevelModuleManager *)FUN_03e495b4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<OakTrainModule>(this_00);
  if (this_01 != (OakTrainModule *)0x0) {
    OakTrainModule::SetCanTouch(this_01,false);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x50));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    (**(code **)(*plVar2 + 0x48))();
  }
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  return;
}


/* OakTrainIntro::onZombieDied(Zombie*, DamageInfo const*) */

void OakTrainIntro::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  
  cVar1 = isInState((OakTrainIntro *)param_1,0);
  if (cVar1 != '\0') {
    setState((OakTrainIntro *)param_1,1);
    return;
  }
  cVar1 = isInState((OakTrainIntro *)param_1,2);
  if (cVar1 == '\0') {
    cVar1 = isInState((OakTrainIntro *)param_1,4);
    if (cVar1 == '\0') {
      return;
    }
    startGame((OakTrainIntro *)param_1);
    return;
  }
  setState((OakTrainIntro *)param_1,3);
  return;
}

