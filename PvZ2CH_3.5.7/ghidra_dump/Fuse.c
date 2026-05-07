// Class: Fuse


/* Fuse::CalcRenderOrder() const */

void __thiscall Fuse::CalcRenderOrder(Fuse *this)

{
  Board::MakeRenderOrder(0x64d48,*(undefined4 *)(this + 0xa4),0);
  return;
}


/* non-virtual thunk to Fuse::CalcRenderOrder() const */

void __thiscall Fuse::CalcRenderOrder(Fuse *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::onEnterState_INIT(FuseState) */

void Fuse::onEnterState_INIT(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  local_18 = 0x43480000;
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)((long)param_1 + 0xa4));
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_14 = (float)(iVar1 + iVar2 / 2 + -0x28);
  (**(code **)(*param_1 + 0x78))(param_1,(DVec3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Fuse::getFuseStateSerialization() */

void __thiscall Fuse::getFuseStateSerialization(Fuse *this)

{
  FUN_03ce6abc(*(undefined4 *)(this + 0xb0));
  return;
}


/* Fuse::isInState(FuseState) const */

bool __thiscall Fuse::isInState(Fuse *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03ce6abc(*(undefined4 *)(this + 0xb0));
  return iVar1 == param_2;
}


/* Fuse::~Fuse() */

void __thiscall Fuse::~Fuse(Fuse *this)

{
  *(undefined ***)this = &PTR_GetClass_067610b0;
  *(undefined ***)(this + 0x10) = &PTR__Fuse_067612f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to Fuse::~Fuse() */

void __thiscall Fuse::~Fuse(Fuse *this)

{
  ~Fuse(this + -0x10);
  return;
}


/* Fuse::~Fuse() */

void __thiscall Fuse::~Fuse(Fuse *this)

{
  ~Fuse(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Fuse::~Fuse() */

void __thiscall Fuse::~Fuse(Fuse *this)

{
  ~Fuse(this + -0x10);
  return;
}


/* Fuse::onExitState_LIT(FuseState) */

void Fuse::onExitState_LIT(long param_1)

{
  bool bVar1;
  GridItemFlame *this;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x158));
  if (!bVar1) {
    return;
  }
  this = (GridItemFlame *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x158));
  GridItemFlame::Stop(this);
  return;
}


/* Fuse::onDestroy() */

void __thiscall Fuse::onDestroy(Fuse *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x158));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
    (**(code **)(*plVar2 + 0x48))();
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x160));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* Fuse::onExitState_PAVE(FuseState) */

void Fuse::onExitState_PAVE(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x160));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x160));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* Fuse::onUpdate() */

void __thiscall Fuse::onUpdate(Fuse *this)

{
  StateMachine<FuseState>::UpdateState((StateMachine<FuseState> *)(this + 0xb0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::onEnterState_LIT(FuseState) */

void Fuse::onEnterState_LIT(long param_1)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  int iVar1;
  GridItemFlame *this_00;
  JackOLanternGhost *pJVar2;
  Board *this_01;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"flame");
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x158);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*(float *)(param_1 + 0x154) + 200.0);
  Board::AddGridItem(this_01,asStack_18,iVar1,*(int *)(param_1 + 0xa4),1);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  this_00 = (GridItemFlame *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  GridItemFlame::GridItemFlameInit(this_00,*(int *)(param_1 + 0xa4));
  pJVar2 = (JackOLanternGhost *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)asStack_18);
  JackOLanternGhost::SetPlant(pJVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::updateState_LIT() */

void __thiscall Fuse::updateState_LIT(Fuse *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  GridItem *this_01;
  long *plVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x158);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    fVar7 = *(float *)(this + 0x150);
    fVar6 = (float)PVZ_Dt();
    *(float *)(this + 0x154) = *(float *)(this + 0x154) - fVar7 * fVar6;
    this_01 = (GridItem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = BoardTransforms::BoardSpaceToGridX(*(float *)(this + 0x154) + 200.0);
    GridItem::SetGridLocation(this_01,iVar2,*(int *)(this + 0xa4));
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar6 = *(float *)(this + 0x154);
    pcVar5 = *(code **)(*plVar4 + 0x78);
    iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0xa4));
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    EATextSquish::Vec3::Vec3(aVStack_18,fVar6 + 200.0,(float)(iVar2 + iVar3 / 2 + -0x28),0.0);
    (*pcVar5)(plVar4,aVStack_18);
    if (*(float *)(this + 0x154) <= 0.0) {
      Lua::LMMessageRouter::PostReadyForFuseLitEnd();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::registerForEvents() */

void __thiscall Fuse::registerForEvents(Fuse *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFlameExtinguished);
  Sexy::Delegate0::Delegate0<Fuse,void(Fuse::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ReadyForFlameExtinguished,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::onEnterState_PAVE(FuseState) */

void Fuse::onEnterState_PAVE(long param_1)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPAMByName((string *)&DAT_06ad4e80);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x160),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x160));
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,&DAT_06ad4ef8,0,aDStack_38);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Fuse::Fuse() */

void __thiscall Fuse::Fuse(Fuse *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_067610b0;
  *(undefined ***)(this + 0x10) = &PTR__Fuse_067612f8;
  StateMachine<FuseState>::StateMachine((StateMachine<FuseState> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  return;
}


/* Fuse::StaticNew() */

Fuse * Fuse::StaticNew(void)

{
  Fuse *this;
  
  this = ::operator_new(0x168);
  Fuse(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::onDraw(Sexy::Graphics*) */

void __thiscall Fuse::onDraw(Fuse *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Image *pIVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  PopAnimRig *pPVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  GraphicsAutoState aGStack_48 [8];
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isInState(this,0xffffffff);
  if (cVar1 == '\0') {
    cVar1 = isInState(this);
    if (cVar1 == '\0') {
      uVar11 = *(undefined4 *)(this + 0x1c);
      fVar9 = (float)FUN_03ce6b68(*(undefined4 *)(this + 0x18),uVar11,*(undefined4 *)(this + 0x20));
      fVar12 = *(float *)(this + 0x154);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar8 = (int)(fVar12 / (float)iVar2);
      iVar2 = 0;
      if (0 < iVar8) {
        do {
          pIVar6 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad4df0);
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar3 = iVar3 * iVar2;
          iVar2 = iVar2 + 1;
          fVar12 = (float)FUN_03ce6c9c((float)iVar3 + fVar9);
          fVar10 = (float)FUN_03ce6c9c(uVar11);
          Sexy::Graphics::DrawImage(param_1,pIVar6,(int)fVar12,(int)fVar10);
        } while (iVar2 != iVar8);
      }
      fVar12 = *(float *)(this + 0x154);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = (int)fVar12 / iVar3;
      }
      iVar2 = (int)fVar12 - iVar2 * iVar3;
      if (0 < iVar2) {
        Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        this_00 = (LotteryResultProgressBar *)
                  CachedResourcePtr<Sexy::Image>::operator->
                            ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad4df0);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        this_01 = (SalesProgressBar *)
                  CachedResourcePtr<Sexy::Image>::operator->
                            ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad4df0);
        iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
        Sexy::Insets::Insets
                  (aIStack_40,0,0,(int)(((float)iVar2 / (float)iVar3) * (float)iVar4),iVar5);
        pIVar6 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad4df0);
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        fVar9 = (float)FUN_03ce6c9c((float)(iVar2 * iVar8) + fVar9);
        fVar12 = (float)FUN_03ce6c9c(uVar11);
        Sexy::Graphics::DrawImage(param_1,pIVar6,(int)fVar9,(int)fVar12,(TRect *)aIStack_40);
        Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
      }
      cVar1 = isInState(this,1);
      if (cVar1 != '\0') {
        Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_40,param_1);
        fVar9 = (float)FUN_03ce6c9c((*(float *)(this + 0x154) + 200.0) - DAT_06ad4e68);
        iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0xa4));
        iVar8 = BoardConstants::GRIDSQUARE_HEIGHT();
        fVar12 = (float)FUN_03ce6c9c((float)(iVar2 + iVar8 / 2 + -0x28) - DAT_06ad4e6c);
        Sexy::Graphics::Translate(param_1,(int)fVar9,(int)fVar12);
        Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
        Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
        pPVar7 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
        PopAnimRig::SetRenderTransform(pPVar7,aSStack_30);
        pPVar7 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
        PopAnimRig::Draw(pPVar7,param_1);
        Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_40);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::StaticClassInit() */

void Fuse::StaticClassInit(void)

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
  Delegate1<FuseState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<FuseState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"Fuse");
      (*pcVar4)(plVar1,asStack_150,FUN_03ce84e8,0x168,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<FuseState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1d8);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e0);
  Sexy::Delegate0::Delegate0<Fuse,void(Fuse::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1e8);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FuseState_INIT");
  StateDefinition<FuseState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce7f40(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f0);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x1f8);
  Sexy::Delegate0::Delegate0<Fuse,void(Fuse::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x200);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FuseState_PAVE");
  StateDefinition<FuseState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce7f40(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x208);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x210);
  Sexy::Delegate0::Delegate0<Fuse,void(Fuse::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x218);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FuseState_READY");
  StateDefinition<FuseState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce7f40(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x220);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)&DAT_00000228);
  Sexy::Delegate0::Delegate0<Fuse,void(Fuse::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x230);
  Sexy::Delegate1<FuseState>::Delegate1<Fuse,void(Fuse::*)(FuseState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"FuseState_LIT");
  StateDefinition<FuseState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03ce7f40(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Fuse::StaticGetClass() */

long * Fuse::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055f8b78,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Fuse::GetClass() const */

long * Fuse::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055f8b78,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::setFuseStateSerialization(int) */

void __thiscall Fuse::setFuseStateSerialization(Fuse *this,int param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<FuseState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<FuseState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<FuseState>::GetStateDefinition
                     ((StateMachineTable<FuseState> *)pSVar2,param_1);
  StateDefinition<FuseState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<FuseState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::setState(FuseState) */

void __thiscall Fuse::setState(Fuse *this,undefined4 param_2)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<FuseState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<FuseState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<FuseState>::GetStateDefinition
                     ((StateMachineTable<FuseState> *)pSVar2,param_2);
  StateDefinition<FuseState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<FuseState>::SetContext(aSStack_a8,this);
  StateMachine<FuseState>::SetState
            ((StateMachine<FuseState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Fuse::FuseInitialize(BombProperties const&, int) */

void __thiscall Fuse::FuseInitialize(Fuse *this,BombProperties *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  float fVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(int *)(this + 0xa4) = param_2;
  puVar3 = (undefined4 *)FUN_03ce6aa4(uVar2,(long)param_2);
  fVar4 = *(float *)(param_1 + 0x58);
  *(undefined4 *)(this + 0xa8) = *puVar3;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(undefined4 *)(this + 0x154) = 0;
  *(float *)(this + 0x150) = (float)iVar1 * fVar4;
  setState(this,0);
  return;
}


/* Fuse::onFlameExtinguished() */

void __thiscall Fuse::onFlameExtinguished(Fuse *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  GridItem *this_01;
  long *plVar2;
  float fVar3;
  
  this_00 = (RtWeakPtr *)(this + 0x158);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (GridItem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    if (*(code **)(*(long *)this_01 + 0x1d8) == GridItem::GetHitpoints) {
      fVar3 = (float)GridItem::GetHitpoints(this_01);
    }
    else {
      fVar3 = (float)(**(code **)(*(long *)this_01 + 0x1d8))();
    }
    if (fVar3 <= 0.0) {
      setState(this,2);
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar2 + 0x48))();
      return;
    }
  }
  return;
}


/* Fuse::updateState_PAVE() */

void __thiscall Fuse::updateState_PAVE(Fuse *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x160));
  if (bVar2) {
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
    fVar4 = (float)PVZ_T();
    fVar5 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar4,fVar5);
  }
  fVar4 = (float)PVZ_Dt();
  iVar1 = *(int *)(this + 0xa8);
  fVar4 = *(float *)(this + 0x154) + fVar4 * 120.0;
  *(float *)(this + 0x154) = fVar4;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  if (fVar4 <= (float)(iVar1 * iVar3)) {
    return;
  }
  iVar1 = *(int *)(this + 0xa8);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x154) = (float)(iVar1 * iVar3);
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Fuse::updateState_READY() */

void __thiscall Fuse::updateState_READY(Fuse *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar7 = local_20;
  uVar4 = FUN_03ce6ac0(local_20,local_18);
  if (uVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_03ce6acc(uVar7,uVar6);
      if ((RtObject *)*puVar5 != (RtObject *)0x0) {
        bVar1 = Sexy::RtObject::IsA<ZombieExplorer>((RtObject *)*puVar5);
        uVar7 = local_20;
        if (bVar1) {
          FUN_03ce6acc(local_20,uVar6);
          nop();
          if ((((this_00 != (Zombie *)0x0) &&
               (cVar2 = Zombie::IsTorchBurning(this_00), uVar7 = local_20, cVar2 != '\0')) &&
              (iVar3 = SharkMinion::getRow((SharkMinion *)this_00), uVar7 = local_20,
              iVar3 == *(int *)(this + 0xa4))) &&
             ((cVar2 = Zombie::HasCondition(this_00,0xe), uVar7 = local_20, cVar2 == '\0' &&
              (fVar8 = (float)FUN_03ce6b68(*(undefined4 *)(this_00 + 0x18),
                                           *(undefined4 *)(this_00 + 0x1c),
                                           *(undefined4 *)(this_00 + 0x20)), uVar7 = local_20,
              fVar8 - 15.0 <= *(float *)(this + 0x154) + 200.0)))) {
            ZombieWolfFire::setIsTorchBurning((ZombieWolfFire *)this_00,false);
            setState(this,3);
            break;
          }
        }
        uVar4 = FUN_03ce6ac0(uVar7,local_18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

