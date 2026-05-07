// Class: GridItemBrain


/* GridItemBrain::onAnimStoppedCallback(std::string const&) */

void GridItemBrain::onAnimStoppedCallback(string *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if (*(code **)(lVar1 + 0x280) != GridItem::onKilled) {
    (**(code **)(lVar1 + 0x280))();
    lVar1 = *(long *)param_1;
  }
  (**(code **)(lVar1 + 0x48))(param_1);
  return;
}


/* GridItemBrain::CalcRenderOrder() const */

void __thiscall GridItemBrain::CalcRenderOrder(GridItemBrain *this)

{
  Board::MakeRenderOrder(0x61e68,*(undefined4 *)(this + 0x194),0);
  return;
}


/* non-virtual thunk to GridItemBrain::CalcRenderOrder() const */

void __thiscall GridItemBrain::CalcRenderOrder(GridItemBrain *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBrain::StaticClassInit() */

void GridItemBrain::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBrain");
    (*pcVar2)(plVar1,asStack_10,FUN_03e149e4,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBrain::StaticGetClass() */

long * GridItemBrain::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBrain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBrain::GetClass() const */

long * GridItemBrain::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBrain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBrain::getRowToPixelY() */

float __thiscall GridItemBrain::getRowToPixelY(GridItemBrain *this)

{
  int iVar1;
  
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x194));
  return (float)iVar1 + 22.0;
}


/* GridItemBrain::~GridItemBrain() */

void __thiscall GridItemBrain::~GridItemBrain(GridItemBrain *this)

{
  *(undefined ***)this = &PTR_GetClass_06783ca0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBrain_06783f38;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemBrain::~GridItemBrain() */

void __thiscall GridItemBrain::~GridItemBrain(GridItemBrain *this)

{
  ~GridItemBrain(this + -0x10);
  return;
}


/* GridItemBrain::~GridItemBrain() */

void __thiscall GridItemBrain::~GridItemBrain(GridItemBrain *this)

{
  ~GridItemBrain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBrain::~GridItemBrain() */

void __thiscall GridItemBrain::~GridItemBrain(GridItemBrain *this)

{
  ~GridItemBrain(this + -0x10);
  return;
}


/* GridItemBrain::GridItemBrain() */

void __thiscall GridItemBrain::GridItemBrain(GridItemBrain *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06783ca0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBrain_06783f38;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  this[0x1a0] = (GridItemBrain)0x0;
  *(undefined4 *)(this + 0x194) = 0;
  return;
}


/* GridItemBrain::StaticNew() */

GridItemBrain * GridItemBrain::StaticNew(void)

{
  GridItemBrain *this;
  
  this = ::operator_new(0x1a8);
  GridItemBrain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBrain::onDraw(Sexy::Graphics*) */

void __thiscall GridItemBrain::onDraw(GridItemBrain *this,Graphics *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  uVar3 = *(undefined4 *)(this + 0x1c);
  fVar2 = (float)FUN_03e13ca4(*(undefined4 *)(this + 0x18),uVar3,*(undefined4 *)(this + 0x20));
  fVar2 = (float)FUN_03e13d70(fVar2 + 20.0);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar2;
  fVar2 = (float)FUN_03e13d70(uVar3);
  fVar4 = *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x14) = fVar4 + fVar2;
  uVar3 = LawnMower::GetArtOffset();
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198))
  ;
  PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
  fVar2 = (float)FUN_03e13d70(uVar3);
  fVar4 = (float)FUN_03e13d70(fVar4);
  Sexy::Graphics::Translate(param_1,(int)-fVar2,(int)-fVar4);
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198))
  ;
  PopAnimRig::Draw(pPVar1,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBrain::CanBeTargetedBy(BoardEntity const*) const */

undefined1 __thiscall GridItemBrain::CanBeTargetedBy(GridItemBrain *this,BoardEntity *param_1)

{
  bool bVar1;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}


/* GridItemBrain::onUpdate() */

void __thiscall GridItemBrain::onUpdate(GridItemBrain *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (!bVar1) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBrain::initializePAM(Sexy::PopAnim*) */

void __thiscall GridItemBrain::initializePAM(GridItemBrain *this,PopAnim *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtClass *pRVar3;
  code *pcVar4;
  float fVar5;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x198);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(param_1,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar4 = *(code **)(*plVar2 + 0x78);
  std::string::string(asStack_28,"a");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  (*pcVar4)(plVar2,asStack_28,0,0,aRStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pcVar4 = *(code **)(*plVar2 + 0x80);
  fVar5 = (float)Sexy::Rand(20.0);
  (*pcVar4)((fVar5 + -10.0) * 0.01 + 1.0,plVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBrain::LawnBrainInitialize(Sexy::PopAnim*, int) */

void __thiscall GridItemBrain::LawnBrainInitialize(GridItemBrain *this,PopAnim *param_1,int param_2)

{
  int iVar1;
  GridItemBrainProps *pGVar2;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemBrainProps>();
  *(int *)(this + 0x194) = param_2;
  DVec3::DVec3((DVec3 *)&local_18);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  local_18 = 200.0 - (float)iVar1 * 0.5;
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x194));
  local_14 = (float)iVar1;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  initializePAM(this,param_1);
  FUN_03e13c88(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e13c90(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBrain::KillGridItem() */

void __thiscall GridItemBrain::KillGridItem(GridItemBrain *this)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a0] == (GridItemBrain)0x0) {
    this[0x1a0] = (GridItemBrain)0x1;
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    std::string::string(asStack_58,"b");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBrain::onDestroy() */

void __thiscall GridItemBrain::onDestroy(GridItemBrain *this)

{
  bool bVar1;
  long *plVar2;
  
  MessageRouter::Post<GridItemBrain*,GridItemBrain*>
            ((MessageRouter *)gMessageRouter,Message::BrainDie,this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    (**(code **)(*plVar2 + 0x48))();
  }
  GridItem::onDestroy((GridItem *)this);
  return;
}


/* GridItemBrain::calcCollisionRect() */

void __thiscall GridItemBrain::calcCollisionRect(GridItemBrain *this)

{
  GridItem::calcCollisionRect();
  return;
}


/* GridItemBrain::TakeDamage(DamageInfo const&) */

void __thiscall GridItemBrain::TakeDamage(GridItemBrain *this,DamageInfo *param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0x200000) && (*(long *)(param_1 + 0x10) != 0x40000)) {
    return;
  }
  GridItem::TakeDamage((GridItem *)this,param_1);
  return;
}

