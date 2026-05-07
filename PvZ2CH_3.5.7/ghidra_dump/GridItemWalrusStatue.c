// Class: GridItemWalrusStatue


/* GridItemWalrusStatue::CalcRenderOrder() const */

void __thiscall GridItemWalrusStatue::CalcRenderOrder(GridItemWalrusStatue *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04777524(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemWalrusStatue::CalcRenderOrder() const */

void __thiscall GridItemWalrusStatue::CalcRenderOrder(GridItemWalrusStatue *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemWalrusStatue::getWalrusStatueStateSerialization() */

void __thiscall GridItemWalrusStatue::getWalrusStatueStateSerialization(GridItemWalrusStatue *this)

{
  FUN_0477756c(*(undefined4 *)(this + 0x1b0));
  return;
}


/* GridItemWalrusStatue::isInState(unsigned int) const */

bool __thiscall GridItemWalrusStatue::isInState(GridItemWalrusStatue *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = getWalrusStatueStateSerialization(this);
  return uVar1 == param_1;
}


/* GridItemWalrusStatue::~GridItemWalrusStatue() */

void __thiscall GridItemWalrusStatue::~GridItemWalrusStatue(GridItemWalrusStatue *this)

{
  *(undefined ***)this = &PTR_GetClass_068d7c20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWalrusStatue_068d7f20;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x1b0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemWalrusStatue::~GridItemWalrusStatue() */

void __thiscall GridItemWalrusStatue::~GridItemWalrusStatue(GridItemWalrusStatue *this)

{
  ~GridItemWalrusStatue(this + -0x10);
  return;
}


/* GridItemWalrusStatue::~GridItemWalrusStatue() */

void __thiscall GridItemWalrusStatue::~GridItemWalrusStatue(GridItemWalrusStatue *this)

{
  ~GridItemWalrusStatue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemWalrusStatue::~GridItemWalrusStatue() */

void __thiscall GridItemWalrusStatue::~GridItemWalrusStatue(GridItemWalrusStatue *this)

{
  ~GridItemWalrusStatue(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWalrusStatue::SetPos(Sexy::SexyVector2) */

void GridItemWalrusStatue::SetPos(float param_1,float param_2,long param_3)

{
  StandaloneEffect *this;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_3 + 0x1a8));
  EATextSquish::Vec3::Vec3(aVStack_18,param_1 + 7.0,param_2 - 27.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin(this,(SexyVector3 *)aVStack_18,-1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWalrusStatue::onEnterState_FullHeal(WalrusStatueState) */

void GridItemWalrusStatue::onEnterState_FullHeal(long param_1)

{
  Effect_WalrusStatue *this;
  
  this = (Effect_WalrusStatue *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a8));
  Effect_WalrusStatue::PlayFullHeal(this);
  return;
}


/* GridItemWalrusStatue::onEnterState_MidHeal(WalrusStatueState) */

void GridItemWalrusStatue::onEnterState_MidHeal(long param_1)

{
  Effect_WalrusStatue *this;
  
  this = (Effect_WalrusStatue *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a8));
  Effect_WalrusStatue::PlayMidHeal(this);
  return;
}


/* GridItemWalrusStatue::onEnterState_EmptyHeal(WalrusStatueState) */

void GridItemWalrusStatue::onEnterState_EmptyHeal(long param_1)

{
  Effect_WalrusStatue *this;
  
  this = (Effect_WalrusStatue *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1a8));
  Effect_WalrusStatue::PlayDieExit(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWalrusStatue::RenderInit() */

void __thiscall GridItemWalrusStatue::RenderInit(GridItemWalrusStatue *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  undefined4 uVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  long lVar5;
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_EFFECTS_WALRUS_STATUE");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1a8);
    Board::AddEffect<Effect_WalrusStatue>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetCentered(pEVar3,true);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar2 = SharkMinion::getRow((SharkMinion *)this);
    uVar2 = Board::MakeRenderOrder(0x61e68,uVar2,0);
    FUN_047774fc(lVar5 + 0x1c,uVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWalrusStatue::GridItemWalrusStatue() */

void __thiscall GridItemWalrusStatue::GridItemWalrusStatue(GridItemWalrusStatue *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_068d7c20;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWalrusStatue_068d7f20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  StateMachine<WalrusStatueState>::StateMachine((StateMachine<WalrusStatueState> *)(this + 0x1b0));
  return;
}


/* GridItemWalrusStatue::StaticNew() */

GridItemWalrusStatue * GridItemWalrusStatue::StaticNew(void)

{
  GridItemWalrusStatue *this;
  
  this = ::operator_new(0x250);
  GridItemWalrusStatue(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWalrusStatue::StaticClassInit() */

void GridItemWalrusStatue::StaticClassInit(void)

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
  Delegate1<WalrusStatueState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<WalrusStatueState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"GridItemWalrusStatue");
      (*pcVar4)(plVar1,asStack_150,FUN_04778fd4,0x250,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<WalrusStatueState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2a8);
  Sexy::Delegate1<WalrusStatueState>::
  Delegate1<GridItemWalrusStatue,void(GridItemWalrusStatue::*)(WalrusStatueState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2b0);
  Sexy::Delegate0::Delegate0<GridItemWalrusStatue,void(GridItemWalrusStatue::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2b8);
  Sexy::Delegate1<WalrusStatueState>::
  Delegate1<GridItemWalrusStatue,void(GridItemWalrusStatue::*)(WalrusStatueState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"StatueState_FullHeal");
  StateDefinition<WalrusStatueState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04778ae0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2c0);
  Sexy::Delegate1<WalrusStatueState>::
  Delegate1<GridItemWalrusStatue,void(GridItemWalrusStatue::*)(WalrusStatueState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2c8);
  Sexy::Delegate0::Delegate0<GridItemWalrusStatue,void(GridItemWalrusStatue::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2d0);
  Sexy::Delegate1<WalrusStatueState>::
  Delegate1<GridItemWalrusStatue,void(GridItemWalrusStatue::*)(WalrusStatueState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"StatueState_MidHeal");
  StateDefinition<WalrusStatueState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04778ae0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2d8);
  Sexy::Delegate1<WalrusStatueState>::
  Delegate1<GridItemWalrusStatue,void(GridItemWalrusStatue::*)(WalrusStatueState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2e0);
  Sexy::Delegate0::Delegate0<GridItemWalrusStatue,void(GridItemWalrusStatue::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2e8);
  Sexy::Delegate1<WalrusStatueState>::
  Delegate1<GridItemWalrusStatue,void(GridItemWalrusStatue::*)(WalrusStatueState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"StatueState_EmptyHeal");
  StateDefinition<WalrusStatueState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04778ae0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemWalrusStatue::StaticGetClass() */

long * GridItemWalrusStatue::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWalrusStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWalrusStatue::GetClass() const */

long * GridItemWalrusStatue::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWalrusStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWalrusStatue::setState(WalrusStatueState) */

void __thiscall GridItemWalrusStatue::setState(GridItemWalrusStatue *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<WalrusStatueState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<WalrusStatueState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<WalrusStatueState>::GetStateDefinition
                     ((StateMachineTable<WalrusStatueState> *)pSVar2,param_2);
  StateDefinition<WalrusStatueState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<WalrusStatueState>::SetContext(aSStack_a8,this);
  StateMachine<WalrusStatueState>::SetState
            ((StateMachine<WalrusStatueState> *)(this + 0x1b0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWalrusStatue::updateState_FullHeal() */

void __thiscall GridItemWalrusStatue::updateState_FullHeal(GridItemWalrusStatue *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)this;
  if (*(code **)(lVar1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar2 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar2 = (float)(**(code **)(lVar1 + 0x1d8))();
    lVar1 = *(long *)this;
  }
  if (*(code **)(lVar1 + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar3 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar3 = (float)(**(code **)(lVar1 + 0x1e0))();
  }
  if (fVar3 * 0.5 < fVar2) {
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar2 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar2 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    if (fVar2 <= 0.0) {
      setState(this,2);
      return;
    }
    return;
  }
  setState(this,1);
  return;
}


/* GridItemWalrusStatue::updateState_MidHeal() */

void __thiscall GridItemWalrusStatue::updateState_MidHeal(GridItemWalrusStatue *this)

{
  float fVar1;
  
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar1 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar1 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if (fVar1 <= 0.0) {
    setState(this,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWalrusStatue::setWalrusStatueStateSerialization(int) */

void __thiscall
GridItemWalrusStatue::setWalrusStatueStateSerialization(GridItemWalrusStatue *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<WalrusStatueState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<WalrusStatueState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<WalrusStatueState>::GetStateDefinition
                     ((StateMachineTable<WalrusStatueState> *)pSVar2,param_1);
  StateDefinition<WalrusStatueState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<WalrusStatueState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x1b0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWalrusStatue::onGridItemInitialize() */

void __thiscall GridItemWalrusStatue::onGridItemInitialize(GridItemWalrusStatue *this)

{
  GridItemWalrusStatuePropertySheet *pGVar1;
  
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemWalrusStatuePropertySheet>();
  FUN_04777514(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_0477751c(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,2);
  RenderInit(this);
  setState(this,0);
  return;
}


/* GridItemWalrusStatue::onUpdate() */

void __thiscall GridItemWalrusStatue::onUpdate(GridItemWalrusStatue *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  StateMachine<WalrusStatueState>::UpdateState((StateMachine<WalrusStatueState> *)(this + 0x1b0));
  return;
}


/* GridItemWalrusStatue::TakeDamage(DamageInfo const&) */

void __thiscall GridItemWalrusStatue::TakeDamage(GridItemWalrusStatue *this,DamageInfo *param_1)

{
  float fVar1;
  
  GridItem::TakeDamage((GridItem *)this,param_1);
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar1 = (float)GridItem::GetHitpoints((GridItem *)this);
  }
  else {
    fVar1 = (float)(**(code **)(*(long *)this + 0x1d8))();
  }
  if (fVar1 <= 0.0) {
    setState(this,2);
    return;
  }
  return;
}

