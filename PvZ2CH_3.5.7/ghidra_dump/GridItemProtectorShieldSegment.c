// Class: GridItemProtectorShieldSegment


/* GridItemProtectorShieldSegment::GetGridOffset() const */

GridItemProtectorShieldSegment * __thiscall
GridItemProtectorShieldSegment::GetGridOffset(GridItemProtectorShieldSegment *this)

{
  return this + 0x1a0;
}


/* GridItemProtectorShieldSegment::SetGridOffset(Sexy::Point) */

void __thiscall
GridItemProtectorShieldSegment::SetGridOffset
          (GridItemProtectorShieldSegment *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x1a0) = *param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegment::StaticClassInit() */

void GridItemProtectorShieldSegment::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemProtectorShieldSegment");
    (*pcVar2)(plVar1,asStack_10,FUN_03e12ae0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemProtectorShieldSegment::StaticGetClass() */

long * GridItemProtectorShieldSegment::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegment",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldSegment::GetClass() const */

long * GridItemProtectorShieldSegment::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemProtectorShieldSegment",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemProtectorShieldSegment::GridItemProtectorShieldSegment() */

void __thiscall
GridItemProtectorShieldSegment::GridItemProtectorShieldSegment(GridItemProtectorShieldSegment *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06783650;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegment_067838f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  Sexy::Point::Point((Point *)(this + 0x1a0));
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* GridItemProtectorShieldSegment::StaticNew() */

GridItemProtectorShieldSegment * GridItemProtectorShieldSegment::StaticNew(void)

{
  GridItemProtectorShieldSegment *this;
  
  this = ::operator_new(0x1b0);
  GridItemProtectorShieldSegment(this);
  return this;
}


/* GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment() */

void __thiscall
GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment
          (GridItemProtectorShieldSegment *this)

{
  *(undefined ***)this = &PTR_GetClass_06783650;
  *(undefined ***)(this + 0x10) = &PTR__GridItemProtectorShieldSegment_067838f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment() */

void __thiscall
GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment
          (GridItemProtectorShieldSegment *this)

{
  ~GridItemProtectorShieldSegment(this + -0x10);
  return;
}


/* GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment() */

void __thiscall
GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment
          (GridItemProtectorShieldSegment *this)

{
  ~GridItemProtectorShieldSegment(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment() */

void __thiscall
GridItemProtectorShieldSegment::~GridItemProtectorShieldSegment
          (GridItemProtectorShieldSegment *this)

{
  ~GridItemProtectorShieldSegment(this + -0x10);
  return;
}


/* GridItemProtectorShieldSegment::TakeDamage(DamageInfo const&) */

void __thiscall
GridItemProtectorShieldSegment::TakeDamage(GridItemProtectorShieldSegment *this,DamageInfo *param_1)

{
  bool bVar1;
  GridItemProtectorShield *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  nop();
  GridItemProtectorShield::ShieldGotHit(this_00,this,param_1);
  return;
}


/* GridItemProtectorShieldSegment::calcCollisionRect() */

void GridItemProtectorShieldSegment::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar3;
  GridItemPropertySheet *pGVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar6 = *pfVar3;
  fVar5 = pfVar3[1];
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (in_x8,(int)(fVar6 - (float)(iVar1 / 2)),
             (int)((fVar5 - 25.0) - (float)((iVar2 * 5) / 2)),iVar1,iVar2 * 5);
  pGVar4 = GridItem::GetProps<GridItemPropertySheet>();
  iVar1 = *(int *)(pGVar4 + 0x18);
  *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar4 + 0x14);
  *(int *)(in_x8 + 8) = (*(int *)(in_x8 + 8) + iVar1) / 2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegment::onGridItemInitialize() */

void __thiscall
GridItemProtectorShieldSegment::onGridItemInitialize(GridItemProtectorShieldSegment *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::onGridItemInitialize((GridItem *)this);
  FUN_03e1239c(this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e1237c(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,2);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0x1a0) = local_10;
  *(undefined4 *)(this + 0x1a8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemProtectorShieldSegment::SetPosition(Sexy::SexyVector3 const&) */

void __thiscall
GridItemProtectorShieldSegment::SetPosition
          (GridItemProtectorShieldSegment *this,SexyVector3 *param_1)

{
  code *pcVar1;
  TPoint aTStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::SetPosition((BoardEntity *)this,param_1);
  BoardEntity::CalcGridPosition();
  pcVar1 = *(code **)(*(long *)this + 0x1f0);
  Sexy::Point::Point(aPStack_10,aTStack_18);
  (*pcVar1)(this,aPStack_10,0);
  (**(code **)(*(long *)this + 0x290))(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

