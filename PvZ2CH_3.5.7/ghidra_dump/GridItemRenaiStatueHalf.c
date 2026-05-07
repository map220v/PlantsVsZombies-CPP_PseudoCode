// Class: GridItemRenaiStatueHalf


/* GridItemRenaiStatueHalf::CanBeCarved() */

void __thiscall GridItemRenaiStatueHalf::CanBeCarved(GridItemRenaiStatueHalf *this)

{
  FUN_03d0fa44(*(undefined4 *)(this + 0x1c8),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueHalf::StaticClassInit() */

void GridItemRenaiStatueHalf::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiStatueHalf");
    (*pcVar2)(plVar1,asStack_10,FUN_03d12a28,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatueHalf::StaticGetClass() */

long * GridItemRenaiStatueHalf::StaticGetClass(void)

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
  uVar2 = GridItemRenaiStatue::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatueHalf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatueHalf::GetClass() const */

long * GridItemRenaiStatueHalf::GetClass(void)

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
  uVar2 = GridItemRenaiStatue::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRenaiStatueHalf",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiStatueHalf::GridItemRenaiStatueHalf() */

void __thiscall GridItemRenaiStatueHalf::GridItemRenaiStatueHalf(GridItemRenaiStatueHalf *this)

{
  GridItemRenaiStatue::GridItemRenaiStatue((GridItemRenaiStatue *)this);
  *(undefined ***)this = &PTR_GetClass_06764600;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatueHalf_06764928;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e8));
  return;
}


/* GridItemRenaiStatueHalf::StaticNew() */

GridItemRenaiStatueHalf * GridItemRenaiStatueHalf::StaticNew(void)

{
  GridItemRenaiStatueHalf *this;
  
  this = ::operator_new(0x1f0);
  GridItemRenaiStatueHalf(this);
  return this;
}


/* GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf() */

void __thiscall GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf(GridItemRenaiStatueHalf *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1e8);
  *(undefined ***)this = &PTR_GetClass_06764600;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiStatueHalf_06764928;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItemRenaiStatue::~GridItemRenaiStatue((GridItemRenaiStatue *)this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf() */

void __thiscall GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf(GridItemRenaiStatueHalf *this)

{
  ~GridItemRenaiStatueHalf(this + -0x10);
  return;
}


/* GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf() */

void __thiscall GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf(GridItemRenaiStatueHalf *this)

{
  ~GridItemRenaiStatueHalf(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf() */

void __thiscall GridItemRenaiStatueHalf::~GridItemRenaiStatueHalf(GridItemRenaiStatueHalf *this)

{
  ~GridItemRenaiStatueHalf(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueHalf::onDraw(Sexy::Graphics*) */

void __thiscall GridItemRenaiStatueHalf::onDraw(GridItemRenaiStatueHalf *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  PopAnimRig *this_00;
  float fVar6;
  double dVar7;
  float fVar8;
  GraphicsAutoState aGStack_48 [8];
  int local_40;
  int local_3c;
  int local_38 [2];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1e8));
  if (cVar1 != '\0') {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
    GridItem::GetGridLocation();
    iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(local_40);
    iVar2 = FUN_03d0fc8c(iVar2 + -0x61);
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_3c);
    iVar3 = FUN_03d0fc8c(iVar3 + -0x7b);
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar8 = *(float *)(lVar5 + 8);
    fVar6 = *(float *)(param_1 + 0x1c);
    (**(code **)(*(long *)this + 0xd0))(local_38,this);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    dVar7 = (double)FUN_03d0fca0(((double)local_38[0] + -1.0) * 0.5 * (double)iVar4);
    *(float *)(param_1 + 0x14) =
         *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x14) +
         (float)(int)(((float)(int)((float)iVar3 - fVar8 * fVar6) - *(float *)(param_1 + 0x24)) *
                     *(float *)(param_1 + 0x1c));
    *(float *)(param_1 + 0x10) =
         *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x10) +
         (float)(int)(((float)(int)((double)iVar2 + dVar7) - *(float *)(param_1 + 0x20)) *
                     *(float *)(param_1 + 0x18));
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
    this_00 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  }
  GridItemAnimation::onDraw((GridItemAnimation *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatueHalf::OnChangeState(StatueState) */

void __thiscall GridItemRenaiStatueHalf::OnChangeState(GridItemRenaiStatueHalf *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  GridItemAnimRig_BesiegeGuide *this_00;
  EffectAnimRig_ZombieStatue *pEVar3;
  
  if (param_2 == 1) {
    pEVar3 = (EffectAnimRig_ZombieStatue *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
    uVar2 = FUN_03d0fa40(*(undefined4 *)(this + 0x1cc));
    EffectAnimRig_ZombieStatue::PlayRevive(pEVar3,uVar2);
    return;
  }
  if (param_2 != 2) {
    if ((param_2 == 0) && (iVar1 = FUN_03d0fa40(*(undefined4 *)(this + 0x1cc)), iVar1 == 0)) {
      this_00 = (GridItemAnimRig_BesiegeGuide *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
      GridItemAnimRig_BesiegeGuide::PlayIdle(this_00);
      return;
    }
    return;
  }
  pEVar3 = (EffectAnimRig_ZombieStatue *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8))
  ;
  uVar2 = FUN_03d0fa40(*(undefined4 *)(this + 0x1cc));
  EffectAnimRig_ZombieStatue::PlayRevive(pEVar3,uVar2);
  return;
}


/* GridItemRenaiStatueHalf::onUpdate() */

void __thiscall GridItemRenaiStatueHalf::onUpdate(GridItemRenaiStatueHalf *this)

{
  char cVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  GridItemRenaiStatue::onUpdate((GridItemRenaiStatue *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1e8));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e8));
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiStatueHalf::onGridItemInitialize() */

void __thiscall GridItemRenaiStatueHalf::onGridItemInitialize(GridItemRenaiStatueHalf *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  GridItemRenaiHalfStatueProps *pGVar3;
  ResourceInfo *pRVar4;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  pGVar3 = GridItem::GetProps<GridItemRenaiHalfStatueProps>();
  GetPAMByName((string *)(pGVar3 + 0x148));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  PopAnimRig::CreateRig<EffectAnimRig_ZombieStatue>((PopAnim *)pRVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  GridItemRenaiStatue::onGridItemInitialize((GridItemRenaiStatue *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiStatueHalf::onAnimEnded(std::string const&) */

void GridItemRenaiStatueHalf::onAnimEnded(string *param_1)

{
  if (*(int *)(param_1 + 0x1c8) == 2) {
    FUN_03d0fa38(param_1 + 0x1cc,*(int *)(param_1 + 0x1cc) + 1);
    if (*(int *)(param_1 + 0x1cc) != 3) {
      GridItemRenaiStatue::setState((GridItemRenaiStatue *)param_1,2);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c8) != 1) {
      return;
    }
    FUN_03d0fa38(param_1 + 0x1cc,*(int *)(param_1 + 0x1cc) + 1);
    if (*(int *)(param_1 + 0x1cc) != 3) {
      GridItemRenaiStatue::setState((GridItemRenaiStatue *)param_1,0);
      MessageRouter::Post<GridItemRenaiStatue*,GridItemRenaiStatue*>
                ((MessageRouter *)gMessageRouter,Message::NotifyStatueFinishCarve,
                 (GridItemRenaiStatue *)param_1);
      return;
    }
  }
  GridItemRenaiStatue::SpawnZombies((GridItemRenaiStatue *)param_1);
  return;
}

