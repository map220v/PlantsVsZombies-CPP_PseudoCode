// Class: GridItemGravestone


/* GridItemGravestone::CanBeTargetedBy(BoardEntity const*) const */

bool GridItemGravestone::CanBeTargetedBy(BoardEntity *param_1)

{
  return *(int *)(param_1 + 0x1a8) != 0;
}


/* GridItemGravestone::GridItemGravestone() */

void __thiscall GridItemGravestone::GridItemGravestone(GridItemGravestone *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_06780910;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestone_06780bd0;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1d0) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1d4) = uVar1;
  *(undefined4 *)(this + 0x1d8) = 0x3f800000;
  return;
}


/* GridItemGravestone::getRenderOffset() */

undefined1  [16] GridItemGravestone::getRenderOffset(void)

{
  GridItemGravestonePropertySheet *pGVar1;
  undefined1 auVar2 [16];
  
  pGVar1 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(pGVar1 + 0xe8) & 0xffffffff;
  return auVar2;
}


/* GridItemGravestone::GetGridExtents() const */

void __thiscall GridItemGravestone::GetGridExtents(GridItemGravestone *this)

{
  GridItemGravestonePropertySheet *pGVar1;
  Point *in_x8;
  
  pGVar1 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  Sexy::Point::Point(in_x8,(TPoint *)(pGVar1 + 0xf8));
  return;
}


/* GridItemGravestone::~GridItemGravestone() */

void __thiscall GridItemGravestone::~GridItemGravestone(GridItemGravestone *this)

{
  *(undefined ***)this = &PTR_GetClass_06780910;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGravestone_06780bd0;
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemGravestone::~GridItemGravestone() */

void __thiscall GridItemGravestone::~GridItemGravestone(GridItemGravestone *this)

{
  ~GridItemGravestone(this + -0x10);
  return;
}


/* GridItemGravestone::~GridItemGravestone() */

void __thiscall GridItemGravestone::~GridItemGravestone(GridItemGravestone *this)

{
  ~GridItemGravestone(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGravestone::~GridItemGravestone() */

void __thiscall GridItemGravestone::~GridItemGravestone(GridItemGravestone *this)

{
  ~GridItemGravestone(this + -0x10);
  return;
}


/* GridItemGravestone::IsDamageableByPlants() const */

bool __thiscall GridItemGravestone::IsDamageableByPlants(GridItemGravestone *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = RealObject::IsOnTeam(this,2);
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(this + 0x1a8) != 0;
  }
  return bVar1;
}


/* GridItemGravestone::CalcRenderOrder() const */

void __thiscall GridItemGravestone::CalcRenderOrder(GridItemGravestone *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03dfe7c4(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemGravestone::CalcRenderOrder() const */

void __thiscall GridItemGravestone::CalcRenderOrder(GridItemGravestone *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemGravestone::StaticNew() */

GridItemGravestone * GridItemGravestone::StaticNew(void)

{
  GridItemGravestone *this;
  
  this = ::operator_new(0x1e0);
  GridItemGravestone(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::StaticClassInit() */

void GridItemGravestone::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGravestone");
    (*pcVar2)(plVar1,asStack_10,FUN_03dff92c,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestone::StaticGetClass() */

long * GridItemGravestone::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestone::GetClass() const */

long * GridItemGravestone::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemGravestone",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGravestone::spawnDirt() */

void __thiscall GridItemGravestone::spawnDirt(GridItemGravestone *this)

{
  EntityComponent_GroundEffect::SetGroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1b0),this,3,1);
  return;
}


/* GridItemGravestone::SetRiseDelay(float) */

void __thiscall GridItemGravestone::SetRiseDelay(GridItemGravestone *this,float param_1)

{
  *(float *)(this + 0x1d4) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::GetCantPlantReason() const */

void GridItemGravestone::GetCantPlantReason(void)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator==("lollipops",(string *)(lVar3 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar2 = 0xb;
  if (!bVar1) {
    uVar2 = 0x12;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::calcDamageState() */

void __thiscall GridItemGravestone::calcDamageState(GridItemGravestone *this)

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
  iVar1 = *(int *)(this + 0x1dc);
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
  local_c = *(int *)(this + 0x1dc) + -1;
  local_10 = iVar1 - (int)((fVar5 * (float)iVar1) / fVar6);
  piVar2 = eastl::min_alt<int>(&local_10,&local_c);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*piVar2);
  }
  return;
}


/* GridItemGravestone::setState(GravestoneState) */

void __thiscall GridItemGravestone::setState(GridItemGravestone *this,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x1a8) != param_2) {
    switch(param_2) {
    case 0:
    case 4:
      (**(code **)(*(long *)this + 0x80))(this,1);
      break;
    case 1:
      uVar2 = Sexy::Rand(0.5);
      *(undefined4 *)(this + 0x1d4) = uVar2;
      (**(code **)(*(long *)this + 0x80))(this,1);
      break;
    case 2:
      RealObject::SetUseGroundClipRect((RealObject *)this,true);
      pcVar1 = *(code **)(*(long *)this + 0x80);
      *(undefined4 *)(this + 0x1d4) = 0x3f800000;
      (*pcVar1)(this,0);
      break;
    case 3:
      GridItemEightiesArcadeCabinet::setRiseHeight((GridItemEightiesArcadeCabinet *)this,1000.0);
      (**(code **)(*(long *)this + 0x80))(this,0);
      break;
    case 5:
      spawnDirt(this);
      pcVar1 = *(code **)(*(long *)this + 0x80);
      *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(this + 0x1d8);
      (*pcVar1)(this,1);
    }
    *(int *)(this + 0x1a8) = param_2;
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  return;
}


/* GridItemGravestone::onEnableGridItems() */

void __thiscall GridItemGravestone::onEnableGridItems(GridItemGravestone *this)

{
  if (*(int *)(this + 0x1a8) != 0) {
    return;
  }
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::updateState() */

void __thiscall GridItemGravestone::updateState(GridItemGravestone *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  iVar2 = *(int *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 2) goto LAB_03dff42c;
LAB_03dff3b8:
  if ((iVar2 != 5) && ((iVar2 != 1 || (*(float *)(this + 0x1d0) < *(float *)(this + 0x1d4))))) {
LAB_03dff3c8:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  setState(this,2);
  do {
    iVar1 = iVar2;
    iVar2 = *(int *)(this + 0x1a8);
    while( true ) {
      if (iVar1 == iVar2) goto LAB_03dff3c8;
      if (iVar2 != 2) goto LAB_03dff3b8;
LAB_03dff42c:
      fVar3 = *(float *)(this + 0x1d0);
      if (0.15 <= fVar3) {
        spawnDirt(this);
        fVar3 = *(float *)(this + 0x1d0);
      }
      local_10 = 0;
      local_c = 1000;
      iVar1 = CurveLerp<int>(0,*(undefined4 *)(this + 0x1d4),fVar3,&local_10,&local_c,4);
      GridItemEightiesArcadeCabinet::setRiseHeight
                ((GridItemEightiesArcadeCabinet *)this,(float)iVar1);
      if (*(float *)(this + 0x1d0) < *(float *)(this + 0x1d4)) break;
      EntityComponent_GroundEffect::ClearGroundEffect
                ((EntityComponent_GroundEffect *)(this + 0x1b0),(RealObject *)this);
      setState(this,3);
      iVar1 = iVar2;
      iVar2 = *(int *)(this + 0x1a8);
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::initializeAnimRig() */

void __thiscall GridItemGravestone::initializeAnimRig(GridItemGravestone *this)

{
  GridItemGravestonePropertySheet *pGVar1;
  RtObject *this_00;
  GravestoneAnimRig *pGVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar2 = Sexy::RtObject::Cast<GravestoneAnimRig>(this_00);
  (**(code **)(*(long *)pGVar2 + 0x110))(pGVar2,*(undefined4 *)(this + 0x1ac),pGVar1[0x100]);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::spawnBreakEffect(int) */

void __thiscall GridItemGravestone::spawnBreakEffect(GridItemGravestone *this,int param_1)

{
  char cVar1;
  int iVar2;
  GridItemGravestonePropertySheet *pGVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  undefined8 *puVar5;
  string asStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  cVar1 = FUN_0547419c((string *)(pGVar3 + 0xd8));
  if (cVar1 == '\0') {
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    if (((DAT_06adbf58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06adbf58), iVar2 != 0)) {
      Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06adbf18,0.0,35.0);
      __cxa_guard_release(&DAT_06adbf58);
    }
    GetPAMByName((string *)(pGVar3 + 0xd8));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_18 = (float)*puVar5;
    local_10 = DAT_06adbf1c + *(float *)(puVar5 + 1);
    _local_18 = CONCAT44((int)((ulong)*puVar5 >> 0x20),DAT_06adbf18 + local_18);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    iVar2 = (**(code **)(*(long *)this + 0x170))(this);
    FUN_03dfe7a8(this_00 + 0x1c,iVar2 + 1);
    if (param_1 == 0) {
      std::string::string(asStack_20,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_20,0);
      std::string::~string(asStack_20);
      nop();
    }
    else {
      Sexy::StrFormat("animation%d",asStack_20,(ulong)(param_1 + 1));
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_20,0);
      std::string::~string(asStack_20);
    }
  }
  RealObject::PlayPositionalSound((RealObject *)this,(string *)(pGVar3 + 0xe0),0.0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::onTakeDamage(DamageInfo const&) */

void GridItemGravestone::onTakeDamage(DamageInfo *param_1)

{
  int iVar1;
  GridItemGravestonePropertySheet *pGVar2;
  RtObject *this;
  GravestoneAnimRig *pGVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = calcDamageState((GridItemGravestone *)param_1);
  if (*(int *)(param_1 + 0x1ac) != iVar1) {
    if ((1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1dc))) {
      spawnBreakEffect((GridItemGravestone *)param_1,iVar1 + -2);
    }
    pGVar2 = GridItem::GetProps<GridItemGravestonePropertySheet>();
    GridItemAnimation::GetAnimRig();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pGVar3 = Sexy::RtObject::Cast<GravestoneAnimRig>(this);
    (**(code **)(*(long *)pGVar3 + 0x110))(pGVar3,iVar1,pGVar2[0x100]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    *(int *)(param_1 + 0x1ac) = iVar1;
  }
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar4 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar4 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (fVar4 <= 0.0) {
    spawnBreakEffect((GridItemGravestone *)param_1,*(int *)(param_1 + 0x1dc) + -2);
  }
  (**(code **)(*(long *)param_1 + 0x288))(0x3e800000,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestone::CanBeEatenByGravebuster() const */

GridItemGravestonePropertySheet GridItemGravestone::CanBeEatenByGravebuster(void)

{
  GridItemGravestonePropertySheet *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  return pGVar1[0xf0];
}


/* GridItemGravestone::GetEatTimeOverride() const */

undefined4 GridItemGravestone::GetEatTimeOverride(void)

{
  GridItemGravestonePropertySheet *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  return *(undefined4 *)(pGVar1 + 0xf4);
}


/* GridItemGravestone::HasEatTimeOverride() const */

bool GridItemGravestone::HasEatTimeOverride(void)

{
  float fVar1;
  
  fVar1 = (float)GetEatTimeOverride();
  return fVar1 != -1.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::calcCollisionRect() */

void GridItemGravestone::calcCollisionRect(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_x0;
  GridItemGravestonePropertySheet *pGVar7;
  Insets *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar7 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  Sexy::Point::Point((Point *)&local_10,(TPoint *)(pGVar7 + 0xf8));
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = iVar2 * local_10;
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar4 = FUN_03dfe7c0(*(undefined4 *)(in_x0 + 0x130));
  iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = FUN_03dfe7c4(*(undefined4 *)(in_x0 + 0x134));
  iVar6 = BoardTransforms::GridToBoardSpaceY(iVar6);
  Sexy::Insets::Insets
            (in_x8,(int)((double)iVar4 + (double)iVar5 * ((double)local_10 + -1.0) * 0.5) -
                   iVar2 / 2,(iVar6 + -0x19) - (iVar3 * local_c) / 2,iVar2,iVar3 * local_c);
  lVar1 = ___stack_chk_guard;
  iVar2 = *(int *)(pGVar7 + 0x18);
  *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar7 + 0x14);
  *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + iVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::onGridItemInitialize() */

void __thiscall GridItemGravestone::onGridItemInitialize(GridItemGravestone *this)

{
  undefined1 uVar1;
  int iVar2;
  GridItemGravestonePropertySheet *pGVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  RtObject *this_00;
  PoolDaylightStage *pPVar7;
  GameObjectDictionary *this_01;
  AttachedEffect *this_02;
  ResourceInfo *pRVar8;
  StandaloneEffect *this_03;
  code *pcVar9;
  undefined4 uVar10;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar3 = GridItem::GetProps<GridItemGravestonePropertySheet>();
  FUN_03dfe7b0(*(undefined4 *)(pGVar3 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03dfe7b8(this + 0x128);
  *(int *)(this + 0x1dc) = (int)(char)pGVar3[0xd0];
  *(undefined4 *)(this + 0x1d8) = 0x3f800000;
  *(undefined4 *)(this + 0x1d0) = 0;
  uVar10 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1d4) = uVar10;
  initializeAnimRig(this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  uVar1 = FUN_03dfe7f8(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa03));
  setState(this,uVar1);
  RealObject::JoinTeam((RealObject *)this,2);
  MessageRouter::Broadcast<GridItemGravestone*,GridItemGravestone*>
            ((MessageRouter *)gMessageRouter,Message::GravestoneCreated,this);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  lVar5 = Board::FindRegionWithFlags(*(undefined8 *)(gLawnApp + 0x9f0),lVar4,2);
  lVar6 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar6 == 0) {
    pPVar7 = (PoolDaylightStage *)0x0;
  }
  else {
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    pPVar7 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
  }
  if (lVar5 != 0) {
    this_01 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
    std::string::string((string *)&local_18,"water_effect");
    this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,(string *)&local_18);
    std::string::~string((string *)&local_18);
    nop();
    std::string::string(asStack_20,"POPANIM_BACKGROUNDS_WATER_ZOMBIE_RIPPLE");
    GetPAMByName(asStack_20);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    AttachedEffect::InitializeWithAnimation(this_02,(PopAnim *)pRVar8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string((string *)&local_18,"ripple");
    AttachedEffect::PlayAnimLooped(this_02,(string *)&local_18,2);
    std::string::~string((string *)&local_18);
    nop();
    pcVar9 = *(code **)(*(long *)this_02 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,-5.0,0.0);
    (*pcVar9)(this_02,this,(string *)&local_18,1);
    if ((pPVar7 != (PoolDaylightStage *)0x0) &&
       (iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(lVar4 + 4)), iVar2 == 3)) {
      Sexy::Insets::Insets((Insets *)&local_18);
      local_18 = 0;
      local_14 = 0;
      local_10 = FUN_03dfe924(1000);
      local_c = FUN_03dfe924(0x1cc);
      this_03 = (StandaloneEffect *)AttachedEffect::GetEffect(this_02);
      StandaloneEffect::SetClipRect(this_03,(TRect *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::registerForEvents() */

void __thiscall GridItemGravestone::registerForEvents(GridItemGravestone *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onEnableGridItems);
  Sexy::Delegate0::Delegate0<GridItemGravestone,void(GridItemGravestone::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::EnableGridItems,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGravestone::onDestroy() */

void __thiscall GridItemGravestone::onDestroy(GridItemGravestone *this)

{
  GridItem::onDestroy((GridItem *)this);
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x1b0));
  MessageRouter::Broadcast<GridItemGravestone*,GridItemGravestone*>
            ((MessageRouter *)gMessageRouter,Message::GravestoneDestroyed,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemGravestone::GatherPlantingRestrictions
          (GridItemGravestone *this,PlantType *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  if ((param_1 == (PlantType *)0x0) ||
     (bVar1 = std::operator==((string *)(param_1 + 8),"gravebuster"), !bVar1)) {
    local_c = (**(code **)(*(long *)this + 0x2a8))(this);
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  else {
    cVar2 = GridItemWizardCrucible::canDoTrigger(this);
    if ((cVar2 == '\0') || (cVar2 = CanBeEatenByGravebuster(), cVar2 == '\0')) {
      local_c = 8;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                 (PlantingReason *)&local_c);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemGravestone::onUpdate() */

void __thiscall GridItemGravestone::onUpdate(GridItemGravestone *this)

{
  code *pcVar1;
  float fVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_Dt();
  pcVar1 = *(code **)(*(long *)this + 0xa8);
  *(float *)(this + 0x1d0) = *(float *)(this + 0x1d0) + fVar2;
  (*pcVar1)(this,0);
  RealObject::SetUseGroundClipRect((RealObject *)this,true);
  updateState(this);
  return;
}


/* GridItemGravestone::SetBeingEaten() */

void __thiscall GridItemGravestone::SetBeingEaten(GridItemGravestone *this)

{
  setState(this,4);
  return;
}


/* GridItemGravestone::FinishEatingAndDestroy() */

void __thiscall GridItemGravestone::FinishEatingAndDestroy(GridItemGravestone *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (*(code **)(lVar1 + 0x280) != GridItem::onKilled) {
    (**(code **)(lVar1 + 0x280))();
    lVar1 = *(long *)this;
  }
  (**(code **)(lVar1 + 0x48))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGravestone::CancelBeingEaten(float) */

void __thiscall GridItemGravestone::CancelBeingEaten(GridItemGravestone *this,float param_1)

{
  float *pfVar1;
  float local_14 [2];
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0.5;
  local_14[0] = param_1;
  pfVar1 = eastl::max_alt<float>(local_14,&local_c);
  *(float *)(this + 0x1d8) = *pfVar1;
  setState(this,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

