// Class: GridItemSteamTrain


/* GridItemSteamTrain::CalcRenderOrder() const */

void __thiscall GridItemSteamTrain::CalcRenderOrder(GridItemSteamTrain *this)

{
  undefined4 uVar1;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  Board::MakeRenderOrder(500000,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemSteamTrain::CalcRenderOrder() const */

void __thiscall GridItemSteamTrain::CalcRenderOrder(GridItemSteamTrain *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::StaticClassInit() */

void GridItemSteamTrain::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSteamTrain");
    (*pcVar2)(plVar1,asStack_10,FUN_03c41f14,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSteamTrain::StaticGetClass() */

long * GridItemSteamTrain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSteamTrain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSteamTrain::GetClass() const */

long * GridItemSteamTrain::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSteamTrain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSteamTrain::GridItemSteamTrain() */

void __thiscall GridItemSteamTrain::GridItemSteamTrain(GridItemSteamTrain *this)

{
  undefined4 uVar1;
  
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined ***)this = &PTR_GetClass_06752830;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSteamTrain_06752b40;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1f0) = uVar1;
  return;
}


/* GridItemSteamTrain::StaticNew() */

GridItemSteamTrain * GridItemSteamTrain::StaticNew(void)

{
  GridItemSteamTrain *this;
  
  this = ::operator_new(0x200);
  GridItemSteamTrain(this);
  return this;
}


/* GridItemSteamTrain::reachEdge() */

bool __thiscall GridItemSteamTrain::reachEdge(GridItemSteamTrain *this)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar2;
  iVar1 = BoardTransforms::GridToBoardSpaceX(0);
  return fVar3 <= (float)iVar1;
}


/* GridItemSteamTrain::GetCantPlantReason() const */

undefined8 GridItemSteamTrain::GetCantPlantReason(void)

{
  return 0x61;
}


/* GridItemSteamTrain::~GridItemSteamTrain() */

void __thiscall GridItemSteamTrain::~GridItemSteamTrain(GridItemSteamTrain *this)

{
  *(undefined ***)this = &PTR_GetClass_06752830;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSteamTrain_06752b40;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemSteamTrain::~GridItemSteamTrain() */

void __thiscall GridItemSteamTrain::~GridItemSteamTrain(GridItemSteamTrain *this)

{
  ~GridItemSteamTrain(this + -0x10);
  return;
}


/* GridItemSteamTrain::~GridItemSteamTrain() */

void __thiscall GridItemSteamTrain::~GridItemSteamTrain(GridItemSteamTrain *this)

{
  ~GridItemSteamTrain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSteamTrain::~GridItemSteamTrain() */

void __thiscall GridItemSteamTrain::~GridItemSteamTrain(GridItemSteamTrain *this)

{
  ~GridItemSteamTrain(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::drawSteamTrainAnim(Sexy::Graphics*) */

void __thiscall GridItemSteamTrain::drawSteamTrainAnim(GridItemSteamTrain *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *this_00;
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
  RtMixedPtrBase aRStack_58 [8];
  int local_50;
  int local_4c;
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
    BoardTransforms::GridToBoardSpaceXUnbounded(local_50);
    iVar2 = FUN_03c3f320();
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_4c);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar5 = (float)FUN_03c3f334((float)iVar3 - *(float *)(lVar4 + 8) * *(float *)(param_1 + 0x1c));
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar11 = 0.0;
    dVar10 = (double)FUN_03c3f344(((double)local_48[0] + -1.0) * 0.5 * (double)iVar3);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar12 = fVar11;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar14 = *(float *)(param_1 + 0x18);
    fVar13 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar14,fVar12 * fVar13);
    FUN_03c3eb68((float)(int)((double)iVar2 + dVar10),(float)(int)fVar5,auStack_28,auStack_1c);
    uVar8 = FUN_03c3f334(-(fVar7 * fVar14 * fVar6));
    uVar9 = FUN_03c3f334(-(fVar12 * fVar13 * fVar11));
    FUN_03c3eb68(uVar8,uVar9,auStack_28,auStack_1c);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::onDraw(Sexy::Graphics*) */

void __thiscall GridItemSteamTrain::onDraw(GridItemSteamTrain *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *this_00;
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
  RtMixedPtrBase aRStack_58 [8];
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [2];
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else {
    GridItem::GetGridLocation();
    BoardTransforms::GridToBoardSpaceXUnbounded(iStack_50);
    iVar2 = FUN_03c3f320();
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iStack_4c);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar5 = (float)FUN_03c3f334((float)iVar3 - *(float *)(lVar4 + 8) * *(float *)(param_1 + 0x1c));
    (**(code **)(*(long *)this + 0xd0))(aiStack_48,this);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar11 = 0.0;
    dVar10 = (double)FUN_03c3f344(((double)aiStack_48[0] + -1.0) * 0.5 * (double)iVar3);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar12 = fVar11;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar14 = *(float *)(param_1 + 0x18);
    fVar13 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar14,fVar12 * fVar13);
    FUN_03c3eb68((float)(int)((double)iVar2 + dVar10),(float)(int)fVar5,auStack_28,auStack_1c);
    uVar8 = FUN_03c3f334(-(fVar7 * fVar14 * fVar6));
    uVar9 = FUN_03c3f334(-(fVar12 * fVar13 * fVar11));
    FUN_03c3eb68(uVar8,uVar9,auStack_28,auStack_1c);
    GridItemAnimation::GetAnimRig();
    this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::calcDamageState() */

void __thiscall GridItemSteamTrain::calcDamageState(GridItemSteamTrain *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int local_10;
  int local_c;
  long local_8;
  
  lVar4 = *(long *)this;
  iVar1 = *(int *)(this + 0x1f8);
  pcVar3 = *(code **)(lVar4 + 0x1d8);
  local_8 = ___stack_chk_guard;
  if (pcVar3 == GridItem::GetHitpoints) {
    fVar5 = (float)GridItem::GetHitpoints((GridItem *)this);
    pcVar3 = *(code **)(lVar4 + 0x1e0);
  }
  else {
    fVar5 = (float)(*pcVar3)();
    pcVar3 = *(code **)(*(long *)this + 0x1e0);
  }
  if (pcVar3 == GridItem::GetMaxHitpoints) {
    fVar6 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar6 = (float)(*pcVar3)();
  }
  local_c = *(int *)(this + 0x1f8) + -1;
  local_10 = iVar1 - (int)((fVar5 * (float)iVar1) / fVar6);
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*piVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::onApplyDrawClipRect(Sexy::Graphics*) */

void __thiscall GridItemSteamTrain::onApplyDrawClipRect(GridItemSteamTrain *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = FUN_03c3ed1c(*(undefined4 *)(this + 0x1ec));
  if (iVar1 == iVar2) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    Sexy::Insets::Insets(aIStack_18,(int)(*pfVar3 - 800.0),(int)(pfVar3[1] - 200.0),800,400);
    fVar4 = (float)FUN_03c3f334(0x3f800000);
    Sexy::TRect<int>::Scale((TRect<int> *)aIStack_18,(double)fVar4,(double)fVar4);
    Sexy::Graphics::SetClipRect(param_1,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSteamTrain::isDoneMoving() const */

bool __thiscall GridItemSteamTrain::isDoneMoving(GridItemSteamTrain *this)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = FUN_03c3ed0c(this[0x1bd]);
  if (cVar2 != '\0') {
    return true;
  }
  bVar1 = false;
  if (*(int *)(this + 0x1e8) - 1U < 2) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x1d4) <= fVar3) {
      return true;
    }
    fVar3 = (float)PVZ_EOT();
    bVar1 = *(float *)(this + 0x1d0) == fVar3;
  }
  return bVar1;
}


/* GridItemSteamTrain::SetMaxHP(float) */

void __thiscall GridItemSteamTrain::SetMaxHP(GridItemSteamTrain *this,float param_1)

{
  GridItemSteamTrainProps *pGVar1;
  float fVar2;
  
  pGVar1 = GridItem::GetProps<GridItemSteamTrainProps>();
  if (pGVar1 != (GridItemSteamTrainProps *)0x0) {
    fVar2 = *(float *)(pGVar1 + 0x140);
    FUN_03c3ec94(param_1 * fVar2,this + 300);
    FUN_03c3ec9c(param_1 * fVar2,this + 0x128);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::SetTrainState(SteamTrainState) */

void __thiscall GridItemSteamTrain::SetTrainState(GridItemSteamTrain *this,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemSteamTrainProps *pGVar4;
  GridItemSteamTrainAnimRig *this_00;
  GridItemSteamTrainAnimRig *this_01;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03c3ed0c(this[0x1bd]);
  if ((cVar1 == '\0') && (*(int *)(this + 0x1e8) != param_2)) {
    *(int *)(this + 0x1e8) = param_2;
    if (param_2 == 1) {
      pGVar4 = GridItem::GetProps<GridItemSteamTrainProps>();
      fVar5 = (float)PVZ_T();
      *(float *)(this + 0x1f0) = fVar5 + *(float *)(pGVar4 + 0x144);
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      GridItemSteamTrainAnimRig::PlayIdle(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else if (param_2 == 2) {
      pGVar4 = GridItem::GetProps<GridItemSteamTrainProps>();
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      GridItemSteamTrainAnimRig::PlayIdle(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      iVar3 = SharkMinion::getRow((SharkMinion *)this);
      Sexy::Point::Point((Point *)aRStack_10,-1,iVar3);
      (**(code **)(*(long *)this + 0x2d0))
                ((float)(iVar2 + 1) * *(float *)(pGVar4 + 0x138),this,aRStack_10);
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSteamTrain::calcCollisionRect() */

void GridItemSteamTrain::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  GridItemPropertySheet *pGVar5;
  Insets *in_x8;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(in_x0 + 0x1c);
  fVar6 = (float)FUN_03c3ef48(*(undefined4 *)(in_x0 + 0x18),fVar7,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (in_x8,(int)(fVar6 - (float)iVar1 * 0.5),(int)(fVar7 - (float)iVar2 * 0.5),
             (int)(float)iVar3,(int)(float)iVar4);
  pGVar5 = GridItem::GetProps<GridItemPropertySheet>();
  if (pGVar5 != (GridItemPropertySheet *)0x0) {
    iVar1 = *(int *)(pGVar5 + 0x18);
    iVar2 = *(int *)(pGVar5 + 0x1c);
    iVar3 = *(int *)(pGVar5 + 0x20);
    *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar5 + 0x14);
    *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + iVar1;
    *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar2;
    *(int *)(in_x8 + 0xc) = *(int *)(in_x8 + 0xc) + iVar3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::checkEdge() */

void __thiscall GridItemSteamTrain::checkEdge(GridItemSteamTrain *this)

{
  char cVar1;
  code *pcVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = reachEdge(this);
  if (cVar1 != '\0') {
    pcVar2 = *(code **)(*(long *)this + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,2,0,aPStack_78,0);
    (*pcVar2)(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSteamTrain::updateState() */

void __thiscall GridItemSteamTrain::updateState(GridItemSteamTrain *this)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_03c3ed10(*(undefined4 *)(this + 0x1e8));
  if (iVar1 == 1) {
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x1f0) <= fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x1f0) = uVar3;
      SetTrainState(this,2);
      return;
    }
  }
  else if (iVar1 == 2) {
    checkEdge(this);
    (**(code **)(*(long *)this + 0x2f8))(this);
  }
  return;
}


/* GridItemSteamTrain::onUpdate() */

void __thiscall GridItemSteamTrain::onUpdate(GridItemSteamTrain *this)

{
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  updateState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::onKilled() */

void __thiscall GridItemSteamTrain::onKilled(GridItemSteamTrain *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemSteamTrainProps *pGVar4;
  long lVar5;
  undefined8 *puVar6;
  Plant *this_00;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  DamageInfo *pDVar11;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = reachEdge(this);
  if ((cVar1 != '\0') &&
     (pGVar4 = GridItem::GetProps<GridItemSteamTrainProps>(),
     pGVar4 != (GridItemSteamTrainProps *)0x0)) {
    uVar8 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Insets::Insets(aIStack_90,iVar2 + -1,iVar3 + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,
               aIStack_90);
    uVar9 = local_80;
    lVar5 = FUN_03c3ed5c(local_80,local_78);
    if (lVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_03c3eda0(uVar9,uVar8);
        this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
        if ((((this_00 != (Plant *)0x0) &&
             (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,(RealObject *)this),
             cVar1 != '\0')) && (cVar1 = Plant::CanBeTargeted(this_00), cVar1 != '\0')) &&
           (cVar1 = Plant::CanBeTargetedBy((BoardEntity *)this_00), cVar1 != '\0')) {
                    /* WARNING: Load size is inaccurate */
          pDVar11._0_4_ = *(DamageInfo **)(pGVar4 + 0x13c);
          pcVar10 = *(code **)(*(long *)this_00 + 0x110);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo(pDVar11._0_4_,local_98,local_94,aDStack_68,this,aPStack_a0,0);
          (*pcVar10)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        uVar9 = local_80;
        uVar8 = uVar8 + 1;
        uVar7 = FUN_03c3ed5c(local_80,local_78);
      } while (uVar8 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::crushEntities() */

void __thiscall GridItemSteamTrain::crushEntities(GridItemSteamTrain *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PlantGroup *this_00;
  undefined8 *puVar5;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar6;
  code *pcVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  uVar4 = operator|(0x10,2);
  (**(code **)(*(long *)this + 0xb0))(aDStack_68,this);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,uVar4,aDStack_68,uVar3,uVar3);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0);
    if (!bVar1) {
LAB_03c4b7d8:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)*puVar5);
    if (bVar1) {
      nop();
      if (this_00 != (PlantGroup *)0x0) {
        cVar2 = PlantGroup::Empty(this_00);
        if (cVar2 == '\0') {
          pcVar7 = *(code **)(*(long *)this_00 + 0x120);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
          (*pcVar7)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
      if ((bVar1) && (cVar2 = RealObject::IsOnTeam(*puVar5,1), cVar2 != '\0')) {
        nop();
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        FUN_05475d88(asStack_98,lVar6 + 8);
        bVar1 = std::operator==(asStack_98,"zombie_pumpkin_imp");
        if (!bVar1) {
          bVar1 = std::operator==(asStack_98,"zombie_pumpkin");
          if (!bVar1) {
            pcVar7 = *(code **)(*(long *)this_01 + 0x120);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
            (*pcVar7)(this_01,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
            std::string::~string(asStack_98);
            goto LAB_03c4b730;
          }
        }
        (**(code **)(*(long *)this_01 + 0x48))(this_01);
        std::string::~string(asStack_98);
        goto LAB_03c4b7d8;
      }
    }
LAB_03c4b730:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::onTakeDamage(DamageInfo const&) */

void GridItemSteamTrain::onTakeDamage(DamageInfo *param_1)

{
  int iVar1;
  RtObject *this;
  GridItemSteamTrainAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onTakeDamage(param_1);
  iVar1 = calcDamageState((GridItemSteamTrain *)param_1);
  if (*(int *)(param_1 + 500) != iVar1) {
    GridItemAnimation::GetAnimRig();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_00 = Sexy::RtObject::Cast<GridItemSteamTrainAnimRig>(this);
    GridItemSteamTrainAnimRig::SetDamageState(this_00,iVar1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(int *)(param_1 + 500) = iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::onGridItemInitialize() */

void __thiscall GridItemSteamTrain::onGridItemInitialize(GridItemSteamTrain *this)

{
  long lVar1;
  GridItemSteamTrainProps *pGVar2;
  RtObject *this_00;
  GridItemSteamTrainAnimRig *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  pGVar2 = GridItem::GetProps<GridItemSteamTrainProps>();
  FUN_03c3ec94(*(undefined4 *)(pGVar2 + 0x10),this + 300);
  FUN_03c3ec9c(*(undefined4 *)(pGVar2 + 0x10),this + 0x128);
  RealObject::JoinTeam((RealObject *)this,2);
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<GridItemSteamTrainAnimRig>(this_00);
  GridItemSteamTrainAnimRig::SetDamageState(this_01,*(int *)(this + 500));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x1f8) = (int)(char)pGVar2[0x148];
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSteamTrain::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSteamTrain::GatherPlantingRestrictions
          (GridItemSteamTrain *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

