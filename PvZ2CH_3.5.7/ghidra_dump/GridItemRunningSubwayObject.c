// Class: GridItemRunningSubwayObject


/* GridItemRunningSubwayObject::SetNextPosition(Sexy::SexyVector3 const&) */

void __thiscall
GridItemRunningSubwayObject::SetNextPosition(GridItemRunningSubwayObject *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1e8),param_1);
  return;
}


/* GridItemRunningSubwayObject::GetNextPosition() */

GridItemRunningSubwayObject * __thiscall
GridItemRunningSubwayObject::GetNextPosition(GridItemRunningSubwayObject *this)

{
  return this + 0x1e8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObject::StaticClassInit() */

void GridItemRunningSubwayObject::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRunningSubwayObject");
    (*pcVar2)(plVar1,asStack_10,FUN_033efb88,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObject::StaticGetClass() */

long * GridItemRunningSubwayObject::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObject::GetClass() const */

long * GridItemRunningSubwayObject::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRunningSubwayObject",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRunningSubwayObject::GridItemRunningSubwayObject() */

void __thiscall
GridItemRunningSubwayObject::GridItemRunningSubwayObject(GridItemRunningSubwayObject *this)

{
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_0661c420;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayObject_0661c730;
  DVec3::DVec3((DVec3 *)(this + 0x1e8));
  return;
}


/* GridItemRunningSubwayObject::StaticNew() */

GridItemRunningSubwayObject * GridItemRunningSubwayObject::StaticNew(void)

{
  GridItemRunningSubwayObject *this;
  
  this = ::operator_new(0x1f8);
  GridItemRunningSubwayObject(this);
  return this;
}


/* GridItemRunningSubwayObject::checkEdge() */

void __thiscall GridItemRunningSubwayObject::checkEdge(GridItemRunningSubwayObject *this)

{
  int iVar1;
  
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  if (iVar1 < -4) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* GridItemRunningSubwayObject::onUpdate() */

void __thiscall GridItemRunningSubwayObject::onUpdate(GridItemRunningSubwayObject *this)

{
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  (**(code **)(*(long *)this + 0x2e0))(this);
  checkEdge(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObject::updatePosition() */

void __thiscall GridItemRunningSubwayObject::updatePosition(GridItemRunningSubwayObject *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  pfVar3 = (float *)GetNextPosition(this);
  fVar8 = *pfVar3;
  fVar7 = pfVar3[1];
  if ((fVar8 != 0.0 || fVar7 != 0.0) || (pfVar3[2] != 0.0)) {
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    local_20 = *(undefined4 *)(lVar4 + 8);
    local_28 = fVar8;
    local_24 = fVar7;
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar8);
    iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar7);
    Sexy::Point::Point((Point *)&local_18,iVar1,iVar2);
    GridItem::SetGridLocationUnbounded((GridItem *)this,(Point *)&local_18,1);
    (**(code **)(*(long *)this + 0x78))(this,&local_28);
    fVar6 = *(float *)(this + 0x1c);
    fVar5 = (float)FUN_033e985c(*(undefined4 *)(this + 0x18),fVar6,*(undefined4 *)(this + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar8 - fVar5,fVar7 - fVar6,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)&local_18);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,local_38,local_34);
    FUN_033e94d0(local_18,local_14,this + 0x1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObject::~GridItemRunningSubwayObject() */

void __thiscall
GridItemRunningSubwayObject::~GridItemRunningSubwayObject(GridItemRunningSubwayObject *this)

{
  *(undefined ***)this = &PTR_GetClass_0661c420;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRunningSubwayObject_0661c730;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayObject::~GridItemRunningSubwayObject() */

void __thiscall
GridItemRunningSubwayObject::~GridItemRunningSubwayObject(GridItemRunningSubwayObject *this)

{
  ~GridItemRunningSubwayObject(this + -0x10);
  return;
}


/* GridItemRunningSubwayObject::~GridItemRunningSubwayObject() */

void __thiscall
GridItemRunningSubwayObject::~GridItemRunningSubwayObject(GridItemRunningSubwayObject *this)

{
  ~GridItemRunningSubwayObject(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRunningSubwayObject::~GridItemRunningSubwayObject() */

void __thiscall
GridItemRunningSubwayObject::~GridItemRunningSubwayObject(GridItemRunningSubwayObject *this)

{
  ~GridItemRunningSubwayObject(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObject::drawObjectAnim(Sexy::Graphics*) */

void __thiscall
GridItemRunningSubwayObject::drawObjectAnim(GridItemRunningSubwayObject *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtMixedPtrBase aRStack_58 [16];
  int local_48 [2];
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else {
    GridItem::GetGridLocation();
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar4 = (float)FUN_033e9f00(*puVar3);
    fVar5 = (float)FUN_033e9f00(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_033e9f10(((double)local_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_033e9360((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_033e9f00(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_033e9f00(-(fVar13 * fVar15 * fVar12));
    FUN_033e9360(uVar8,uVar9,auStack_28,auStack_1c);
    GridItemAnimation::GetAnimRig();
    this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObject::onDraw(Sexy::Graphics*) */

void __thiscall
GridItemRunningSubwayObject::onDraw(GridItemRunningSubwayObject *this,Graphics *param_1)

{
  char cVar1;
  
  cVar1 = FUN_033ed3a8(*(undefined4 *)(this + 0x28));
  if (cVar1 != '\0') {
    return;
  }
  drawObjectAnim(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRunningSubwayObject::onGridItemInitialize() */

void __thiscall GridItemRunningSubwayObject::onGridItemInitialize(GridItemRunningSubwayObject *this)

{
  GridItemRunningSubwayObjectProps *pGVar1;
  GridItemSummerFireworksAnimRig *this_00;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemRunningSubwayObjectProps>();
  uVar2 = *(undefined4 *)(pGVar1 + 0x10);
  FUN_033e94a8(uVar2,this + 300);
  FUN_033e94b0(uVar2,this + 0x128);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  GridItemSummerFireworksAnimRig::PlayIdle(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRunningSubwayObject::getRenderOffset() */

undefined1  [16] GridItemRunningSubwayObject::getRenderOffset(void)

{
  GridItemRunningSubwayObjectProps *pGVar1;
  undefined1 auVar2 [16];
  
  pGVar1 = GridItem::GetProps<GridItemRunningSubwayObjectProps>();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(pGVar1 + 0xa8) & 0xffffffff;
  return auVar2;
}

