// Class: FiregourdTutorialIntro


/* FiregourdTutorialIntro::onEnterState_START_TUTORIAL(FTIState) */

void FiregourdTutorialIntro::onEnterState_START_TUTORIAL(void)

{
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* FiregourdTutorialIntro::isInState(FTIState) const */

bool __thiscall FiregourdTutorialIntro::isInState(FiregourdTutorialIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03ce2f8c(*(undefined4 *)(this + 0x78));
  return iVar1 == param_2;
}


/* FiregourdTutorialIntro::getFiregourdTutorialStateSerialization() */

void __thiscall
FiregourdTutorialIntro::getFiregourdTutorialStateSerialization(FiregourdTutorialIntro *this)

{
  FUN_03ce2f8c(*(undefined4 *)(this + 0x78));
  return;
}


/* FiregourdTutorialIntro::OnUpdate() */

void __thiscall FiregourdTutorialIntro::OnUpdate(FiregourdTutorialIntro *this)

{
  char cVar1;
  bool bVar2;
  AnimationMgr *this_00;
  long lVar3;
  RtWeakPtr *this_01;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  BoardEntity *this_03;
  ulong uVar5;
  undefined8 uVar6;
  
  StateMachine<FTIState>::UpdateState((StateMachine<FTIState> *)(this + 0x78));
  uVar5 = 0;
  this_00 = (AnimationMgr *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  AnimationMgr::Update(this_00);
  cVar1 = FUN_03ce2f7c(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa03));
  if (cVar1 == '\0') {
    uVar6 = *(undefined8 *)(this + 0x60);
    lVar3 = FUN_03ce2f90(uVar6,*(undefined8 *)(this + 0x68));
    if (lVar3 != 0) {
      do {
        this_01 = (RtWeakPtr *)FUN_03ce2fb8(uVar6,uVar5);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
        if (bVar2) {
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    FUN_03ce2fb8(*(undefined8 *)(this + 0x60),uVar5);
          this_03 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          BoardEntity::Update(this_03);
        }
        uVar5 = uVar5 + 1;
        uVar6 = *(undefined8 *)(this + 0x60);
        uVar4 = FUN_03ce2f90(uVar6,*(undefined8 *)(this + 0x68));
      } while (uVar5 < uVar4);
    }
  }
  return;
}


/* FiregourdTutorialIntro::onExitState_ARMRACKS(FTIState) */

void FiregourdTutorialIntro::onExitState_ARMRACKS(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x58));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x58));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::initializeModule() */

void __thiscall FiregourdTutorialIntro::initializeModule(FiregourdTutorialIntro *this)

{
  int iVar1;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    iVar1 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
    if (2 < iVar1) {
      std::string::~string(asStack_10);
      goto LAB_03ce3790;
    }
    std::string::~string(asStack_10);
  }
  AnimationMgr::Create();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
LAB_03ce3790:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::introduceDave() */

void __thiscall FiregourdTutorialIntro::introduceDave(FiregourdTutorialIntro *this)

{
  CrazyNPCManager *pCVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  std::string::string(asStack_60,"FIREGOURD");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNarrationFinished);
  Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
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


/* FiregourdTutorialIntro::FiregourdTutorialIntro() */

void __thiscall FiregourdTutorialIntro::FiregourdTutorialIntro(FiregourdTutorialIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06760e90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  StateMachine<FTIState>::StateMachine((StateMachine<FTIState> *)(this + 0x78));
  return;
}


/* FiregourdTutorialIntro::StaticNew() */

FiregourdTutorialIntro * FiregourdTutorialIntro::StaticNew(void)

{
  FiregourdTutorialIntro *this;
  
  this = ::operator_new(0x118);
  FiregourdTutorialIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::setupWaitForHitFiregourd() */

void __thiscall FiregourdTutorialIntro::setupWaitForHitFiregourd(FiregourdTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  undefined *puVar1;
  int iVar2;
  int iVar3;
  AnimationController *pAVar4;
  AnimationMgr *pAVar5;
  long lVar6;
  Effect_BouncingArrow *pEVar7;
  StandaloneEffect *pSVar8;
  float fVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58);
  FUN_05478178((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,L"[FIREGOURD_TUTORIAL_1]",auStack_28);
  pAVar4 = (AnimationController *)ShowAdvice::Create((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0xc)
  ;
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  pAVar5 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Clear(pAVar5);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_03ce2f64(lVar6 + 0x10);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar9 = (float)FUN_03ce2f70(*(undefined4 *)(lVar6 + 0x10));
  pAVar5 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  AnimationMgr::Add(pAVar5,pAVar4,fVar9);
  Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pEVar7 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ad4c98);
  Effect_BouncingArrow::SetArrowImage(pEVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pEVar7 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(pEVar7,5.0,25.0);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetVisibility(pSVar8,true);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  BoardTransforms::GridToBoardSpaceX(3);
  iVar2 = FUN_03ce3208();
  iVar3 = BoardTransforms::GridToBoardSpaceY(2);
  iVar3 = FUN_03ce3208(iVar3 + -0x3c);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar2,(float)iVar3);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar8,(SexyVector2 *)&local_20,1000000);
  FUN_03ce2f74(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFiregourdHit);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<PlantFireGourd*,Sexy::CBMemberTranslatorX<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(PlantFireGourd*)>>
            ((MessageRouter *)puVar1,Message::FireGourdIsHit,&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::onEnterState_ARMRACKS(FTIState) */

void FiregourdTutorialIntro::onEnterState_ARMRACKS(long param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  AnimationMgr *pAVar1;
  long lVar2;
  AnimationController *pAVar3;
  float fVar4;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50);
  local_8 = ___stack_chk_guard;
  pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  AnimationMgr::Clear(pAVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_03ce2f64(lVar2 + 0x10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  fVar4 = (float)FUN_03ce2f70(*(undefined4 *)(lVar2 + 0x10));
  pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"setupArmracks");
  pAVar3 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(pAVar1,pAVar3,fVar4);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  pAVar1 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"setupWaitForHitFiregourd");
  pAVar3 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(pAVar1,pAVar3,fVar4 + 2.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::onEnterState_EPILOG(FTIState) */

void FiregourdTutorialIntro::onEnterState_EPILOG(long param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  AnimationController *pAVar1;
  AnimationMgr *pAVar2;
  long lVar3;
  float fVar4;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50);
  FUN_05478178(asStack_10,L"[FIREGOURD_TUTORIAL_2]",aRStack_18);
  pAVar1 = (AnimationController *)ShowAdvice::Create(asStack_10,0xc);
  FUN_05476c50(asStack_10);
  nop();
  pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  AnimationMgr::Clear(pAVar2);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_03ce2f64(lVar3 + 0x10);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  fVar4 = (float)FUN_03ce2f70(*(undefined4 *)(lVar3 + 0x10));
  pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  AnimationMgr::Add(pAVar2,pAVar1,fVar4 + 2.0);
  pAVar2 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"startGame");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(pAVar2,pAVar1,fVar4 + 8.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FiregourdTutorialIntro::OnLevelEnded() */

void __thiscall FiregourdTutorialIntro::OnLevelEnded(FiregourdTutorialIntro *this)

{
  char cVar1;
  bool bVar2;
  AnimationMgr *this_00;
  long lVar3;
  RtWeakPtr *this_01;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  this_00 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
  AnimationMgr::Clear(this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)pRVar5);
  if (cVar1 != '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    (**(code **)(*plVar6 + 0x48))();
  }
  uVar7 = 0;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)pRVar5);
  uVar8 = *(undefined8 *)(this + 0x60);
  lVar3 = FUN_03ce2f90(uVar8,*(undefined8 *)(this + 0x68));
  if (lVar3 != 0) {
    do {
      this_01 = (RtWeakPtr *)FUN_03ce2fb8(uVar8,uVar7);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
      if (bVar2) {
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03ce2fb8(*(undefined8 *)(this + 0x60),uVar7);
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        (**(code **)(*plVar6 + 0x48))();
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(this + 0x60);
      uVar4 = FUN_03ce2f90(uVar8,*(undefined8 *)(this + 0x68));
    } while (uVar7 < uVar4);
  }
  std::vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>>::
  clear((vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>> *
        )(this + 0x60));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* FiregourdTutorialIntro::startGame() */

void __thiscall FiregourdTutorialIntro::startGame(FiregourdTutorialIntro *this)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr *this_00;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  lVar2 = FUN_03ce2f90(uVar6,*(undefined8 *)(this + 0x68));
  if (lVar2 != 0) {
    do {
      this_00 = (RtWeakPtr *)FUN_03ce2fb8(uVar6,uVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03ce2fb8(*(undefined8 *)(this + 0x60),uVar5);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        (**(code **)(*plVar4 + 0x48))();
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x60);
      uVar3 = FUN_03ce2f90(uVar6,*(undefined8 *)(this + 0x68));
    } while (uVar5 < uVar3);
  }
  std::vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>>::
  clear((vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>> *
        )(this + 0x60));
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  return;
}


/* FiregourdTutorialIntro::~FiregourdTutorialIntro() */

void __thiscall FiregourdTutorialIntro::~FiregourdTutorialIntro(FiregourdTutorialIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06760e90;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x78));
  std::vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>>
           *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* FiregourdTutorialIntro::~FiregourdTutorialIntro() */

void __thiscall FiregourdTutorialIntro::~FiregourdTutorialIntro(FiregourdTutorialIntro *this)

{
  ~FiregourdTutorialIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::setupDaveProlog() */

void __thiscall FiregourdTutorialIntro::setupDaveProlog(FiregourdTutorialIntro *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  string *psVar1;
  UIWidget *pUVar2;
  long lVar3;
  AnimationMgr *this_01;
  AnimationController *pAVar4;
  undefined8 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"firegourd");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_28);
  Board::AddPlant((Board *)0x0,uVar5,3,2,asStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"UIShovel");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UISunBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_03ce2f64(lVar3 + 0x10);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar6 = (float)FUN_03ce2f70(*(undefined4 *)(lVar3 + 0x10));
  this_01 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"introduceDave");
  pAVar4 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(this_01,pAVar4,fVar6 + 1.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::onEnterState_DAVE_INTRO(FTIState) */

void FiregourdTutorialIntro::onEnterState_DAVE_INTRO(long param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  string *psVar1;
  UIWidget *pUVar2;
  long lVar3;
  AnimationMgr *this_00;
  AnimationController *pAVar4;
  undefined8 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"firegourd");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_28);
  Board::AddPlant((Board *)0x0,uVar5,3,2,asStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"UIShovel");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIPauseButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UISunBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  FUN_03ce2f64(lVar3 + 0x10);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  fVar6 = (float)FUN_03ce2f70(*(undefined4 *)(lVar3 + 0x10));
  this_00 = (AnimationMgr *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"introduceDave");
  pAVar4 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add(this_00,pAVar4,fVar6 + 1.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::setupArmracks() */

void __thiscall FiregourdTutorialIntro::setupArmracks(FiregourdTutorialIntro *this)

{
  long extraout_x0;
  int iVar1;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 1;
  do {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"armrack");
    Board::AddGridItem(this_00,asStack_10,iVar1 + 3,2,1);
    nop();
    std::string::~string(asStack_10);
    nop();
    *(int *)(extraout_x0 + 0x194) = iVar1;
    iVar1 = iVar1 + 1;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>>::
    push_back((vector<Sexy::RtWeakPtr<GridItemArmrack>,std::allocator<Sexy::RtWeakPtr<GridItemArmrack>>>
               *)(this + 0x60),(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  } while (iVar1 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::registerForEvents() */

void __thiscall FiregourdTutorialIntro::registerForEvents(FiregourdTutorialIntro *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  long lVar3;
  LevelModuleManager *pLVar4;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar2);
  if (cVar1 == '\0') {
    lVar3 = LevelModule::getManager();
    FUN_03ce2f58(lVar3 + 0x80);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnUpdate(pLVar4,aDStack_38);
    pLVar4 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
              (aDStack_38,aCStack_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar4,aDStack_38);
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
/* FiregourdTutorialIntro::StaticClassInit() */

void FiregourdTutorialIntro::StaticClassInit(void)

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
  Delegate1<FTIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<FTIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"FiregourdTutorialIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03ce57dc,0x118,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<FTIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FTIState_START_TUTORIAL");
  StateDefinition<FTIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce5234(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FTIState_DAVE_INTRO");
  StateDefinition<FTIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce5234(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x130);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x138);
  Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x140);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FTIState_ARMRACKS");
  StateDefinition<FTIState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce5234(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x148);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x150);
  Sexy::Delegate0::Delegate0<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x158);
  Sexy::Delegate1<FTIState>::
  Delegate1<FiregourdTutorialIntro,void(FiregourdTutorialIntro::*)(FTIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FTIState_EPILOG");
  StateDefinition<FTIState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce5234(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* FiregourdTutorialIntro::StaticGetClass() */

long * FiregourdTutorialIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FiregourdTutorialIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::setState(FTIState) */

void __thiscall FiregourdTutorialIntro::setState(FiregourdTutorialIntro *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<FTIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<FTIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<FTIState>::GetStateDefinition
                     ((StateMachineTable<FTIState> *)pSVar2,param_2);
  StateDefinition<FTIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<FTIState>::SetContext(aSStack_a8,this);
  StateMachine<FTIState>::SetState
            ((StateMachine<FTIState> *)(this + 0x78),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FiregourdTutorialIntro::OnIntroStarted() */

void __thiscall FiregourdTutorialIntro::OnIntroStarted(FiregourdTutorialIntro *this)

{
  UIWidget *this_00;
  
  this_00 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UIWidget::SetVisible(this_00,false);
  FUN_03ce2f74(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  setState(this,0);
  return;
}


/* FiregourdTutorialIntro::OnFiregourdHit(PlantFireGourd*) */

void FiregourdTutorialIntro::OnFiregourdHit(PlantFireGourd *param_1)

{
  char cVar1;
  
  cVar1 = isInState((FiregourdTutorialIntro *)param_1,2);
  if (cVar1 == '\0') {
    return;
  }
  setState((FiregourdTutorialIntro *)param_1,3);
  return;
}


/* FiregourdTutorialIntro::OnNarrationFinished() */

void __thiscall FiregourdTutorialIntro::OnNarrationFinished(FiregourdTutorialIntro *this)

{
  char cVar1;
  
  cVar1 = isInState(this,1);
  if (cVar1 == '\0') {
    return;
  }
  setState(this,2);
  return;
}


/* FiregourdTutorialIntro::updateState_START_TUTORIAL() */

void __thiscall FiregourdTutorialIntro::updateState_START_TUTORIAL(FiregourdTutorialIntro *this)

{
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntro::setFiregourdTutorialStateSerialization(int) */

void __thiscall
FiregourdTutorialIntro::setFiregourdTutorialStateSerialization
          (FiregourdTutorialIntro *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<FTIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_1 < 4) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar2 = StateMachineTableBuilder::GetTable<FTIState>(this_00,pRVar1);
    pSVar3 = (StateDefinition *)
             StateMachineTable<FTIState>::GetStateDefinition
                       ((StateMachineTable<FTIState> *)pSVar2,param_1);
    StateDefinition<FTIState>::StateDefinition(aSStack_a8,pSVar3);
    StateDefinition<FTIState>::SetContext(aSStack_a8,this);
    StateMachine<DPEState>::SetStateNoTransition
              ((StateMachine<DPEState> *)(this + 0x78),(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

