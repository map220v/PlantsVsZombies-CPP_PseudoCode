// Class: BarrierGridItem


/* BarrierGridItem::~BarrierGridItem() */

void __thiscall BarrierGridItem::~BarrierGridItem(BarrierGridItem *this)

{
  *(undefined ***)this = &PTR_GetClass_067aef50;
  *(undefined ***)(this + 0x10) = &PTR__BarrierGridItem_067af208;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to BarrierGridItem::~BarrierGridItem() */

void __thiscall BarrierGridItem::~BarrierGridItem(BarrierGridItem *this)

{
  ~BarrierGridItem(this + -0x10);
  return;
}


/* BarrierGridItem::~BarrierGridItem() */

void __thiscall BarrierGridItem::~BarrierGridItem(BarrierGridItem *this)

{
  ~BarrierGridItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BarrierGridItem::~BarrierGridItem() */

void __thiscall BarrierGridItem::~BarrierGridItem(BarrierGridItem *this)

{
  ~BarrierGridItem(this + -0x10);
  return;
}


/* BarrierGridItem::CalcRenderOrder() const */

void __thiscall BarrierGridItem::CalcRenderOrder(BarrierGridItem *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03fd267c(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to BarrierGridItem::CalcRenderOrder() const */

void __thiscall BarrierGridItem::CalcRenderOrder(BarrierGridItem *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* BarrierGridItem::BarrierGridItem() */

void __thiscall BarrierGridItem::BarrierGridItem(BarrierGridItem *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067aef50;
  *(undefined ***)(this + 0x10) = &PTR__BarrierGridItem_067af208;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  DVec3::DVec3((DVec3 *)(this + 0x1b4));
  return;
}


/* BarrierGridItem::StaticNew() */

BarrierGridItem * BarrierGridItem::StaticNew(void)

{
  BarrierGridItem *this;
  
  this = ::operator_new(0x1c8);
  BarrierGridItem(this);
  return this;
}


/* BarrierGridItem::SetNextPosition(Sexy::SexyVector3) */

void BarrierGridItem::SetNextPosition
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4)

{
  SexyVector3 *pSVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1a8),pSVar1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1b4),(SexyVector3 *)&local_10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrierGridItem::StaticClassInit() */

void BarrierGridItem::StaticClassInit(void)

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
    std::string::string(asStack_10,"BarrierGridItem");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd3bfc,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BarrierGridItem::StaticGetClass() */

long * BarrierGridItem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BarrierGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BarrierGridItem::GetClass() const */

long * BarrierGridItem::GetClass(void)

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
  (*pcVar3)(plVar1,"BarrierGridItem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrierGridItem::calcDodoRiderNextPosition(int) */

void __thiscall BarrierGridItem::calcDodoRiderNextPosition(BarrierGridItem *this,int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float fStack_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = *pfVar3;
  fVar5 = pfVar3[1];
  fVar1 = pfVar3[2];
  DVec3::DVec3((DVec3 *)&local_28);
  switch(param_1) {
  case 0:
    local_28 = fVar4;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = fVar5 - (float)iVar2;
    local_20 = fVar1;
    break;
  case 1:
    local_28 = fVar4;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_24 = (float)iVar2 + fVar5;
    local_20 = fVar1;
    break;
  case 2:
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = fVar4 - (float)iVar2;
    fStack_24 = fVar5;
    local_20 = fVar1;
    break;
  case 3:
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = (float)iVar2 + fVar4;
    fStack_24 = fVar5;
    local_20 = fVar1;
  }
  local_18 = CONCAT44(fStack_24,local_28);
  local_10 = local_20;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_28,fStack_24,local_20);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrierGridItem::onGridItemInitialize() */

void __thiscall BarrierGridItem::onGridItemInitialize(BarrierGridItem *this)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  Vec3 aVStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_48,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1a8),(SexyVector3 *)aVStack_48);
  EATextSquish::Vec3::Vec3(aVStack_48,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b4),(SexyVector3 *)aVStack_48);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c0) = uVar2;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  RealObject::JoinTeam((RealObject *)this,1);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  std::string::string((string *)aVStack_48,"lt");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,aVStack_48,0,aDStack_38);
  std::string::~string((string *)aVStack_48);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BarrierGridItem::SetState(int) */

void __thiscall BarrierGridItem::SetState(BarrierGridItem *this,int param_1)

{
  undefined4 uVar1;
  
  *(int *)(this + 0x1c4) = param_1;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = PVZ_T();
      *(undefined4 *)(this + 0x1c0) = uVar1;
    }
    return;
  }
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrierGridItem::updatePosition() */

void __thiscall BarrierGridItem::updatePosition(BarrierGridItem *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  Point aPStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  fVar3 = *(float *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (fVar3 + 0.5 <= fVar4) {
    (**(code **)(*(long *)this + 0x78))(this,this + 0x1b4);
    SetState(this,0);
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar3 = (fVar3 - *(float *)(this + 0x1c0)) + (fVar3 - *(float *)(this + 0x1c0));
    DVec3::DVec3((DVec3 *)&local_18);
    local_18 = *(float *)(this + 0x1a8) +
               (*(float *)(this + 0x1b4) - *(float *)(this + 0x1a8)) * fVar3;
    local_14 = *(float *)(this + 0x1ac) +
               (*(float *)(this + 0x1b8) - *(float *)(this + 0x1ac)) * fVar3;
    local_10 = 0;
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(local_18);
    iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(local_14);
    Sexy::Point::Point(aPStack_20,iVar1,iVar2);
    GridItem::SetGridLocationUnbounded((GridItem *)this,aPStack_20,1);
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrierGridItem::findgridTarget(Sexy::Point) */

void __thiscall BarrierGridItem::findgridTarget(BarrierGridItem *this,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
  iVar5 = *param_2;
  iVar3 = BoardTransforms::BoardSpaceToGridY(pfVar7[1]);
  iVar6 = param_2[1];
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  if (((iVar2 + iVar5 < iVar4) && (-1 < iVar2 + iVar5)) &&
     (iVar5 = BoardConstants::NUMBER_OF_ROWS(), iVar3 + iVar6 < iVar5 && -1 < iVar3 + iVar6)) {
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar8 = (float)(iVar5 * *param_2) * 0.7;
    iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = param_2[1];
    (**(code **)(*(long *)this + 0xb0))
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
    (**(code **)(*(long *)this + 0xb0))
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
    if (*param_2 < 1) {
      fVar9 = fVar8 + (float)local_20;
    }
    else {
      (**(code **)(*(long *)this + 0xb0))(&local_30,this);
      (**(code **)(*(long *)this + 0xb0))
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
      fVar9 = (float)(local_30 + local_18) + fVar8 * 0.3;
    }
    if (param_2[1] < 1) {
      fVar8 = (float)(iVar6 * iVar5) * 0.7 + (float)local_1c;
    }
    else {
      (**(code **)(*(long *)this + 0xb0))((Insets *)&local_30,this);
      (**(code **)(*(long *)this + 0xb0))
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,this);
      fVar8 = (float)(local_2c + local_14) + fVar8 * 0.3;
    }
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::Insets::Insets
              ((Insets *)&local_30,(int)fVar9,(int)fVar8,(int)((double)iVar5 * 0.5),
               (int)((double)iVar6 * 0.5));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangleWithoutGrid
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               (Insets *)&local_30);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    bVar1 = !bVar1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    bVar1 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BarrierGridItem::Canmove(int) */

void BarrierGridItem::Canmove(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BarrierGridItem *this;
  int in_w1;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_18 [4];
  long local_8;
  
  this = (BarrierGridItem *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_30,0,0);
  switch(in_w1) {
  case 0:
    local_2c = local_2c + -1;
    break;
  case 1:
    local_2c = local_2c + 1;
    break;
  case 2:
    local_30 = local_30 + -1;
    break;
  case 3:
    local_30 = local_30 + 1;
  }
  Sexy::Point::Point((Point *)local_18,(TPoint *)&local_30);
  cVar1 = findgridTarget(this,(Point *)local_18);
  if (cVar1 != '\0') {
    DVec3::DVec3((DVec3 *)&local_28);
    local_18[0] = calcDodoRiderNextPosition(this,in_w1);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)local_18);
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(local_28);
    iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(local_24);
    Sexy::Point::Point((Point *)local_18,iVar2,iVar3);
    GridItem::SetGridLocationUnbounded((GridItem *)this,(Point *)local_18,1);
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* BarrierGridItem::onUpdate() */

void __thiscall BarrierGridItem::onUpdate(BarrierGridItem *this)

{
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1c4) != 1) {
    return;
  }
  updatePosition(this);
  return;
}

