// Class: TowerDefendIntro


/* TowerDefendIntro::OnLevelEnded() */

void __thiscall TowerDefendIntro::OnLevelEnded(TowerDefendIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* TowerDefendIntro::initializeModule() */

void __thiscall TowerDefendIntro::initializeModule(TowerDefendIntro *this)

{
  undefined4 uVar1;
  
  StandardLevelIntro::initializeModule((StandardLevelIntro *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar1;
  return;
}


/* TowerDefendIntro::isInState(TDIState) const */

bool __thiscall TowerDefendIntro::isInState(TowerDefendIntro *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03e4c124(*(undefined4 *)(this + 0x58));
  return iVar1 == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendIntro::onPlantTouch(Sexy::Point const&) */

void TowerDefendIntro::onPlantTouch(Point *param_1)

{
  char cVar1;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState((TowerDefendIntro *)param_1,0);
  if (cVar1 != '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[TOWER_DEFEND_TUTORIAL_2]",auStack_18);
    Board::DisplayAdvice(pBVar2,auStack_10,7,0);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendIntro::getTowerDefendIntroStateSerialization() */

void __thiscall TowerDefendIntro::getTowerDefendIntroStateSerialization(TowerDefendIntro *this)

{
  FUN_03e4c124(*(undefined4 *)(this + 0x58));
  return;
}


/* TowerDefendIntro::~TowerDefendIntro() */

void __thiscall TowerDefendIntro::~TowerDefendIntro(TowerDefendIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678b8a0;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* TowerDefendIntro::~TowerDefendIntro() */

void __thiscall TowerDefendIntro::~TowerDefendIntro(TowerDefendIntro *this)

{
  ~TowerDefendIntro(this);
  AK::FreeHook(this);
  return;
}


/* TowerDefendIntro::OnUpdate() */

void __thiscall TowerDefendIntro::OnUpdate(TowerDefendIntro *this)

{
  StateMachine<TDIState>::UpdateState((StateMachine<TDIState> *)(this + 0x58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendIntro::onPlantUpgradeTouch(Sexy::Point const&) */

void TowerDefendIntro::onPlantUpgradeTouch(Point *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  Board *pBVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState((TowerDefendIntro *)param_1,0);
  if (cVar1 != '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(auStack_10,L"[TOWER_DEFEND_TUTORIAL_3]",auStack_18);
    Board::DisplayAdvice(pBVar4,auStack_10,6,0);
    FUN_05476c50(auStack_10);
    nop();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x50));
    if (bVar2) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x50));
      (**(code **)(*plVar3 + 0x48))();
    }
    fVar5 = (float)PVZ_T();
    *(float *)(param_1 + 0xf8) = fVar5 + 3.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendIntro::TowerDefendIntro() */

void __thiscall TowerDefendIntro::TowerDefendIntro(TowerDefendIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0678b8a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  StateMachine<TDIState>::StateMachine((StateMachine<TDIState> *)(this + 0x58));
  return;
}


/* TowerDefendIntro::StaticNew() */

TowerDefendIntro * TowerDefendIntro::StaticNew(void)

{
  TowerDefendIntro *this;
  
  this = ::operator_new(0x100);
  TowerDefendIntro(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendIntro::onEnterState_START_TUTORIAL(TDIState) */

void TowerDefendIntro::onEnterState_START_TUTORIAL(long param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  long lVar5;
  long *plVar6;
  Effect_BouncingArrow *pEVar7;
  StandaloneEffect *pSVar8;
  Board *pBVar9;
  undefined8 uVar10;
  undefined1 auStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x50);
  local_8 = ___stack_chk_guard;
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  std::string::~string(asStack_10);
  nop();
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Board::LoadResourceGroupForGameplay(pBVar9,(string *)(lVar5 + 0x10));
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Board::LoadResourceGroupsForGameplay(pBVar9,(vector *)(lVar5 + 0x80));
  uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  Board::AddPlant((Board *)0x0,uVar10,0,2,asStack_10,0,0,0xffffffff,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(asStack_10,L"[TOWER_DEFEND_TUTORIAL_1]",auStack_20);
  Board::DisplayAdvice(pBVar9,asStack_10,7,0);
  FUN_05476c50(asStack_10);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar6 + 0x48))();
  }
  Board::AddEffect<Effect_BouncingArrow>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  pEVar7 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06ade6b0);
  Effect_BouncingArrow::SetArrowImage(pEVar7,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  pEVar7 = (Effect_BouncingArrow *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Effect_BouncingArrow::SetBounceHeightsBoardSpace(pEVar7,5.0,25.0);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetVisibility(pSVar8,true);
  pSVar8 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  BoardTransforms::GridToBoardSpaceX(0);
  iVar2 = FUN_03e4c304();
  iVar3 = BoardTransforms::GridToBoardSpaceY(2);
  iVar3 = FUN_03e4c304(iVar3 + -0x3c);
  Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,(float)iVar2,(float)iVar3);
  StandaloneEffect::SetScreenSpaceOrigin(pSVar8,(SexyVector2 *)asStack_10,1000000);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendIntro::registerForEvents() */

void __thiscall TowerDefendIntro::registerForEvents(TowerDefendIntro *this)

{
  undefined *puVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  long lVar4;
  LevelModuleManager *pLVar5;
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
    FUN_03e4c100(lVar4 + 0x80);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnIntroStarted);
    Sexy::Delegate0::Delegate0<TowerDefendIntro,void(TowerDefendIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnIntroStarted(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnUpdate);
    Sexy::Delegate0::Delegate0<TowerDefendIntro,void(TowerDefendIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnUpdate(pLVar5,aDStack_38);
    pLVar5 = (LevelModuleManager *)LevelModule::getManager();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLevelEnded);
    Sexy::Delegate0::Delegate0<TowerDefendIntro,void(TowerDefendIntro::*)()>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    LevelModuleManager::RegisterOnLevelEnded(pLVar5,aDStack_38);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantTouch);
    local_80 = local_58;
    local_90 = local_68;
    uStack_88 = uStack_60;
    MessageRouter::
    Subscribe<Sexy::Point_const&,Sexy::CBMemberTranslatorX<TowerDefendIntro,void(TowerDefendIntro::*)(Sexy::Point_const&)>>
              ((MessageRouter *)puVar1,Message::PlantTouch,&local_90);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onPlantUpgradeTouch);
    local_90 = local_50;
    uStack_88 = uStack_48;
    local_80 = local_40;
    MessageRouter::
    Subscribe<Sexy::Point_const&,Sexy::CBMemberTranslatorX<TowerDefendIntro,void(TowerDefendIntro::*)(Sexy::Point_const&)>>
              ((MessageRouter *)puVar1,Message::PlantUpgradeTouch,&local_90);
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
/* TowerDefendIntro::StaticClassInit() */

void TowerDefendIntro::StaticClassInit(void)

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
  Delegate1<TDIState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<TDIState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"TowerDefendIntro");
      (*pcVar4)(plVar1,asStack_150,FUN_03e4da48,0x100,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<TDIState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x100);
  Sexy::Delegate1<TDIState>::Delegate1<TowerDefendIntro,void(TowerDefendIntro::*)(TDIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x108);
  Sexy::Delegate0::Delegate0<TowerDefendIntro,void(TowerDefendIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x110);
  Sexy::Delegate1<TDIState>::Delegate1<TowerDefendIntro,void(TowerDefendIntro::*)(TDIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TDIState_START_TUTORIAL");
  StateDefinition<TDIState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4d604(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x118);
  Sexy::Delegate1<TDIState>::Delegate1<TowerDefendIntro,void(TowerDefendIntro::*)(TDIState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x120);
  Sexy::Delegate0::Delegate0<TowerDefendIntro,void(TowerDefendIntro::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x128);
  Sexy::Delegate1<TDIState>::Delegate1<TowerDefendIntro,void(TowerDefendIntro::*)(TDIState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TDIState_START_GAME");
  StateDefinition<TDIState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03e4d604(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TowerDefendIntro::StaticGetClass() */

long * TowerDefendIntro::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendIntro::setState(TDIState) */

void __thiscall TowerDefendIntro::setState(TowerDefendIntro *this,uint param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<TDIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 2) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar2 = StateMachineTableBuilder::GetTable<TDIState>(this_00,pRVar1);
    pSVar3 = (StateDefinition *)
             StateMachineTable<TDIState>::GetStateDefinition
                       ((StateMachineTable<TDIState> *)pSVar2,param_2);
    StateDefinition<TDIState>::StateDefinition(aSStack_a8,pSVar3);
    StateDefinition<TDIState>::SetContext(aSStack_a8,this);
    StateMachine<TDIState>::SetState
              ((StateMachine<TDIState> *)(this + 0x58),(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendIntro::OnIntroStarted() */

void __thiscall TowerDefendIntro::OnIntroStarted(TowerDefendIntro *this)

{
  UIWidget *this_00;
  
  this_00 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UIWidget::SetVisible(this_00,false);
  FUN_03e4c10c(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  setState(this,0);
  return;
}


/* TowerDefendIntro::startGame() */

void __thiscall TowerDefendIntro::startGame(TowerDefendIntro *this)

{
  bool bVar1;
  long *plVar2;
  
  setState(this,1);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x50));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    (**(code **)(*plVar2 + 0x48))();
  }
  FUN_03e4c10c(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  return;
}


/* TowerDefendIntro::updateState_START_TUTORIAL() */

void __thiscall TowerDefendIntro::updateState_START_TUTORIAL(TowerDefendIntro *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0xf8)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar2;
  startGame(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendIntro::setTowerDefendIntroStateSerialization(int) */

void __thiscall
TowerDefendIntro::setTowerDefendIntroStateSerialization(TowerDefendIntro *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<TDIState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<TDIState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<TDIState>::GetStateDefinition
                     ((StateMachineTable<TDIState> *)pSVar2,param_1);
  StateDefinition<TDIState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<TDIState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x58),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

