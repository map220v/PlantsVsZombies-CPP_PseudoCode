// Class: GridItemBarrel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::SetFlyingDestinationWithTravelTime(Zombie*, Sexy::SexyVector3, float, float,
   bool) */

void GridItemBarrel::SetFlyingDestinationWithTravelTime
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               ZombieTosserSubSystem *param_5,undefined8 param_6,undefined8 param_7)

{
  ZombieTosserSubSystem *pZVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_60 = param_1;
  local_5c = param_2;
  local_58 = param_3;
  pZVar1 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie(param_5._0_4_,param_4,pZVar1,param_7,&local_60,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::StaticClassInit() */

void GridItemBarrel::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GriditemBarrelZombieDes");
    (*pcVar3)(plVar2,asStack_10,FUN_04c76ef4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GriditemBarrelParams");
    (*pcVar3)(plVar2,asStack_10,FUN_04c78ba4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemBarrel");
    (*pcVar3)(plVar2,asStack_10,FUN_04c7887c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrel::StaticGetClass() */

long * GridItemBarrel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBarrel::GetClass() const */

long * GridItemBarrel::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::drawBarrelAnim(Sexy::Graphics*) */

void __thiscall GridItemBarrel::drawBarrelAnim(GridItemBarrel *this,Graphics *param_1)

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
    iVar2 = FUN_04c77104();
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_4c);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar5 = (float)FUN_04c77118((float)iVar3 - *(float *)(lVar4 + 8) * *(float *)(param_1 + 0x1c));
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar11 = 0.0;
    dVar10 = (double)FUN_04c77128(((double)local_48[0] + -1.0) * 0.5 * (double)iVar3);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar12 = fVar11;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar14 = *(float *)(param_1 + 0x18);
    fVar13 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar14,fVar12 * fVar13);
    FUN_04c76cfc((float)(int)((double)iVar2 + dVar10),(float)(int)fVar5,auStack_28,auStack_1c);
    uVar8 = FUN_04c77118(-(fVar7 * fVar14 * fVar6));
    uVar9 = FUN_04c77118(-(fVar12 * fVar13 * fVar11));
    FUN_04c76cfc(uVar8,uVar9,auStack_28,auStack_1c);
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
/* GridItemBarrel::onDraw(Sexy::Graphics*) */

void __thiscall GridItemBarrel::onDraw(GridItemBarrel *this,Graphics *param_1)

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
    iVar2 = FUN_04c77104();
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iStack_4c);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar5 = (float)FUN_04c77118((float)iVar3 - *(float *)(lVar4 + 8) * *(float *)(param_1 + 0x1c));
    (**(code **)(*(long *)this + 0xd0))(aiStack_48,this);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar11 = 0.0;
    dVar10 = (double)FUN_04c77128(((double)aiStack_48[0] + -1.0) * 0.5 * (double)iVar3);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar12 = fVar11;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar14 = *(float *)(param_1 + 0x18);
    fVar13 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar14,fVar12 * fVar13);
    FUN_04c76cfc((float)(int)((double)iVar2 + dVar10),(float)(int)fVar5,auStack_28,auStack_1c);
    uVar8 = FUN_04c77118(-(fVar7 * fVar14 * fVar6));
    uVar9 = FUN_04c77118(-(fVar12 * fVar13 * fVar11));
    FUN_04c76cfc(uVar8,uVar9,auStack_28,auStack_1c);
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
/* GridItemBarrel::TakeDamage(DamageInfo const&) */

void __thiscall GridItemBarrel::TakeDamage(GridItemBarrel *this,DamageInfo *param_1)

{
  GridItemBarrel GVar1;
  bool bVar2;
  float fVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar3 = (float)GridItem::GetHitpoints((GridItem *)this);
    if (*(float *)(param_1 + 8) < fVar3) goto LAB_04c77bc4;
  }
  else {
    fVar3 = (float)(**(code **)(*(long *)this + 0x1d8))();
    if (*(float *)(param_1 + 8) < fVar3) goto LAB_04c77bc4;
  }
  ToolPacketData::GetProps();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar2) {
    GVar1 = this[0x210];
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (GVar1 == (GridItemBarrel)0x0) {
      this[0x210] = (GridItemBarrel)0x1;
      (**(code **)(*(long *)this + 0x2f8))(this);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_04c77bc4:
  GridItemBreakableTarget::TakeDamage((GridItemBreakableTarget *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrel::GridItemBarrel() */

void __thiscall GridItemBarrel::GridItemBarrel(GridItemBarrel *this)

{
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)(this + 0x10) = &PTR__GridItemBarrel_06991fe8;
  *(undefined ***)this = &PTR_GetClass_06991cd0;
  *(undefined4 *)(this + 0x1e8) = 0x453b8000;
  *(undefined4 *)(this + 0x1f0) = 0x453b8000;
  *(undefined4 *)(this + 0x1ec) = 0x3e3d70a4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  this[0x210] = (GridItemBarrel)0x0;
  return;
}


/* GridItemBarrel::StaticNew() */

GridItemBarrel * GridItemBarrel::StaticNew(void)

{
  GridItemBarrel *this;
  
  this = ::operator_new(0x218);
  GridItemBarrel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::onGridItemInitialize() */

void __thiscall GridItemBarrel::onGridItemInitialize(GridItemBarrel *this)

{
  int iVar1;
  GridItemBarrelAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  GridItem::GetProps<GridItemBarrelProps>();
  FUN_04c76dd0(*(undefined4 *)(this + 0x1e8),this + 300);
  FUN_04c76dd8(*(undefined4 *)(this + 0x1e8),this + 0x128);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  GridItemBarrelAnimRig::PlayRoll(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point((Point *)aRStack_10,-1,iVar1);
  (**(code **)(*(long *)this + 0x2d0))(9.0 / *(float *)(this + 0x1ec),this,aRStack_10);
  RealObject::JoinTeam((RealObject *)this,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::updatePosition() */

void GridItemBarrel::updatePosition(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemAnimation *in_x0;
  GridItemBoardEntityConditionTargetProps *pGVar4;
  AttachedEffect *this;
  StandaloneEffect *this_00;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  float fVar8;
  undefined4 in_s2;
  float local_28;
  float local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  cVar1 = (**(code **)(*(long *)in_x0 + 0x2f0))();
  if (cVar1 == '\0') {
    fVar6 = (float)(**(code **)(*(long *)in_x0 + 0x2e8))();
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar6);
    iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(in_s1);
    Sexy::Point::Point((Point *)&local_18,iVar2,iVar3);
    GridItem::SetGridLocationUnbounded();
    fVar8 = *(float *)(in_x0 + 0x1c);
    fVar7 = (float)FUN_04c770a8(*(undefined4 *)(in_x0 + 0x18),fVar8,*(undefined4 *)(in_x0 + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar6 - fVar7,in_s1 - fVar8,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,local_28,local_24);
    FUN_04c76de0(local_18,local_14,in_x0 + 0x1a8);
    in_s2 = 0;
    pcVar5 = *(code **)(*(long *)in_x0 + 0x78);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar6,in_s1,0.0);
    (*pcVar5)();
  }
  cVar1 = GridItemAnimation::HasLinkedAnimRig(in_x0);
  if (cVar1 != '\0') {
    pGVar4 = GridItem::GetProps<GridItemBoardEntityConditionTargetProps>();
    this = (AttachedEffect *)GridItemAnimation::GetLinkedEffect(in_x0);
    this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)(pGVar4 + 0xc0),(SexyVector3 *)&local_28)
    ;
    local_10 = in_s2;
    StandaloneEffect::SetAttachmentOffset(this_00,(SexyVector3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrel::calcCollisionRect() */

void GridItemBarrel::calcCollisionRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  GridItemPropertySheet *pGVar4;
  Insets *in_x8;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar5 = (float)FUN_04c770a8(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)(fVar5 - 30.0),(int)(fVar6 - 60.0),0x3c,0x46);
  pGVar4 = GridItem::GetProps<GridItemPropertySheet>();
  if (pGVar4 != (GridItemPropertySheet *)0x0) {
    iVar1 = *(int *)(pGVar4 + 0x18);
    iVar2 = *(int *)(pGVar4 + 0x1c);
    iVar3 = *(int *)(pGVar4 + 0x20);
    *(int *)in_x8 = *(int *)in_x8 + *(int *)(pGVar4 + 0x14);
    *(int *)(in_x8 + 8) = *(int *)(in_x8 + 8) + iVar1;
    *(int *)(in_x8 + 4) = *(int *)(in_x8 + 4) + iVar2;
    *(int *)(in_x8 + 0xc) = *(int *)(in_x8 + 0xc) + iVar3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::crushEntities() */

void __thiscall GridItemBarrel::crushEntities(GridItemBarrel *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  PlantGroup *this_00;
  PlantSpikeweed *pPVar4;
  undefined8 *puVar5;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar6;
  code *pcVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  RtWeakPtr aRStack_98 [8];
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  GridItem::GetProps<GridItemBarrelProps>();
  uVar3 = operator|(0x10,2);
  (**(code **)(*(long *)this + 0xb0))(aDStack_68,this);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,uVar3,aDStack_68,0xffffffff,0xffffffff);
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
LAB_04c79014:
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
          PlantGroup::GetPlantAtLayer(aRStack_98,this_00,1);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_98);
          if (bVar1) {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
            pPVar4 = Sexy::RtObject::Cast<PlantSpikeweed>(*(RtObject **)(lVar6 + 0xa8));
            if (pPVar4 == (PlantSpikeweed *)0x0) {
              pcVar7 = *(code **)(*(long *)this_00 + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
              (*pcVar7)(this_00,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
            }
            else {
              pcVar7 = *(code **)(*(long *)this + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,2,0,aPStack_90,0);
              (*pcVar7)(this,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
              PlantGroup::TakeSmashAttack(this_00,(BoardEntity *)this);
            }
          }
          else {
            pcVar7 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
            (*pcVar7)(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        }
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
      if ((bVar1) && (cVar2 = RealObject::IsOnTeam(*puVar5,1), cVar2 != '\0')) {
        nop();
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        FUN_05475d88(aRStack_98,lVar6 + 8);
        bVar1 = std::operator==((string *)aRStack_98,"zombie_pumpkin_imp");
        if (!bVar1) {
          bVar1 = std::operator==((string *)aRStack_98,"zombie_pumpkin");
          if (!bVar1) {
            cVar2 = Zombie::CanTakeFatalDamage(this_01);
            if (cVar2 != '\0') {
              pcVar7 = *(code **)(*(long *)this_01 + 0x120);
              Sexy::Point::Point(aPStack_90,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
              (*pcVar7)(this_01,aDStack_68);
              DamageInfo::~DamageInfo(aDStack_68);
            }
            std::string::~string((string *)aRStack_98);
            goto LAB_04c78f6c;
          }
        }
        (**(code **)(*(long *)this_01 + 0x48))(this_01);
        std::string::~string((string *)aRStack_98);
        goto LAB_04c79014;
      }
    }
LAB_04c78f6c:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::blowEntities() */

void __thiscall GridItemBarrel::blowEntities(GridItemBarrel *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  GridItem::GetProps<GridItemBarrelProps>();
  (**(code **)(*(long *)this + 0xb0))(auStack_90,this);
  uVar3 = operator|(1,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,uVar3,auStack_90,0xffffffff,0xffffffff);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar2) {
LAB_04c79288:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    cVar1 = RealObject::IsOnTeam(*puVar4,1);
    if (cVar1 != '\0') {
      pcVar5 = *(code **)(*(long *)this + 0x120);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aDStack_68,2,0,aPStack_a0,0);
      (*pcVar5)(this,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      goto LAB_04c79288;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::onUpdate() */

void __thiscall GridItemBarrel::onUpdate(GridItemBarrel *this)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  code *pcVar4;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  if (this[0x210] == (GridItemBarrel)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if (*pfVar2 <= 200.0) {
      pcVar4 = *(code **)(*(long *)this + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_70,local_6c,(DamageInfo *)aRStack_68,2,0,aPStack_78,0);
      (*pcVar4)(this,(DamageInfo *)aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    GridItem::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    bVar1 = std::operator==((string *)(lVar3 + 8),"barrelpowder");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    if (bVar1) {
      blowEntities(this);
    }
    else {
      (**(code **)(*(long *)this + 0x300))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBarrel::~GridItemBarrel() */

void __thiscall GridItemBarrel::~GridItemBarrel(GridItemBarrel *this)

{
  *(undefined ***)this = &PTR_GetClass_06991cd0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBarrel_06991fe8;
  std::vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>>::~vector
            ((vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>> *)
             (this + 0x1f8));
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemBarrel::~GridItemBarrel() */

void __thiscall GridItemBarrel::~GridItemBarrel(GridItemBarrel *this)

{
  ~GridItemBarrel(this + -0x10);
  return;
}


/* GridItemBarrel::~GridItemBarrel() */

void __thiscall GridItemBarrel::~GridItemBarrel(GridItemBarrel *this)

{
  ~GridItemBarrel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBarrel::~GridItemBarrel() */

void __thiscall GridItemBarrel::~GridItemBarrel(GridItemBarrel *this)

{
  ~GridItemBarrel(this + -0x10);
  return;
}


/* GridItemBarrel::SetBarrelParams(GriditemBarrelParams) */

void __thiscall GridItemBarrel::SetBarrelParams(GridItemBarrel *this,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(this + 0x1e8) = *param_2;
  *(undefined4 *)(this + 0x1ec) = uVar1;
  *(undefined4 *)(this + 0x1f0) = uVar2;
  std::vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>>::operator=
            ((vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>> *)
             (this + 0x1f8),(vector *)(param_2 + 4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::AddGriditemWithParams(std::string const&, int, int, GriditemBarrelParams, int) */

void GridItemBarrel::AddGriditemWithParams
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,
               GriditemBarrelParams *param_4,undefined8 param_5)

{
  string *psVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  RtObject *this;
  GridItemBarrel *pGVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  GriditemBarrelParams aGStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  pcVar3 = (char *)FUN_0547429c(lVar2 + 0x10);
  uVar4 = Sexy::RtClass::StaticGetClassNamed(pcVar3);
  GameObject::Create(uVar4,0x2f);
  nop();
  pGVar5 = Sexy::RtObject::Cast<GridItemBarrel>(this);
  GriditemBarrelParams::GriditemBarrelParams(aGStack_30,param_4);
  SetBarrelParams(pGVar5,aGStack_30);
  GriditemBarrelParams::~GriditemBarrelParams(aGStack_30);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aGStack_30,(RtWeakPtrBase *)aRStack_38);
  GridItem::GridItemInitialize((GridItem *)pGVar5,aGStack_30,param_2,param_3,param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::spawnImp(GriditemBarrelZombieDes, int) */

void GridItemBarrel::spawnImp
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4,undefined4 *param_5,int param_6)

{
  int iVar1;
  string *psVar2;
  ZombieType *this;
  undefined8 uVar3;
  undefined8 uVar4;
  SexyVector3 *this_00;
  SexyVector3 *pSVar5;
  Board *this_01;
  code *pcVar6;
  undefined1 auStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_60;
  undefined1 local_5b;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_60);
  local_60 = *param_5;
  local_5b = 1;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  ZombieType::AddInGameResourceRequirements(this,(set *)amStack_38);
  uVar3 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38);
  uVar4 = std::
          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
          end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)amStack_38);
  std::vector<std::string,std::allocator<std::string>>::
  vector<std::_Rb_tree_const_iterator<std::string>,void>
            ((vector<std::string,std::allocator<std::string>> *)&local_78,uVar3,uVar4,auStack_88);
  Board::LoadResourceGroupsForGameplay(this_01,(vector *)&local_78);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_78);
  pcVar6 = *(code **)(*(long *)this_01 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_78,(RtWeakPtrBase *)aRStack_80);
  this_00 = (SexyVector3 *)
            (*pcVar6)(this_01,(vector<std::string,std::allocator<std::string>> *)&local_78,
                      0xfffffffb,(SpawnZombieParams *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,*param_5);
  (**(code **)(*(long *)this_00 + 0x9d8))(this_00);
  if (((DAT_06b94608 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b94608), iVar1 != 0)) {
    param_2 = 0;
    param_3 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b94610,-40.0,0.0,0.0);
    __cxa_guard_release(&DAT_06b94608);
  }
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  local_78 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)&DAT_06b94610);
  local_74 = (float)param_2;
  local_70 = param_3;
  BoardEntity::PlaceOnBoard(this_00);
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
  local_78 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)&DAT_06b94610);
  local_74 = (float)param_2;
  local_70 = param_3;
  iVar1 = BoardTransforms::GridToBoardSpaceY(param_6);
  local_74 = (float)iVar1;
  SetFlyingDestinationWithTravelTime
            (local_78,local_74,local_70,0x3f000000,0x42800000,param_4,this_00,1);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBarrel::onBarrelBroken() */

void __thiscall GridItemBarrel::onBarrelBroken(GridItemBarrel *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  GriditemBarrelZombieDes *pGVar9;
  long *extraout_x0;
  undefined8 *puVar10;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ResourceInfo *pRVar11;
  long *extraout_x0_00;
  long extraout_x0_01;
  ulong uVar12;
  code *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  DamageInfo *pDVar16;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  string asStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetType();
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  bVar3 = std::operator==((string *)(lVar7 + 8),"barrelmoster");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (bVar3) {
    cVar4 = std::vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>>::empty
                      ((vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>> *)
                       (this + 0x1f8));
    if (cVar4 != '\0') goto LAB_04c7a4f8;
    iVar5 = SharkMinion::getRow((SharkMinion *)this);
    uVar14 = *(undefined8 *)(this + 0x1f8);
    uVar8 = FUN_04c76e04(uVar14,*(undefined8 *)(this + 0x200));
    if (uVar8 == 1) {
      pGVar9 = (GriditemBarrelZombieDes *)FUN_04c76e2c(uVar14,0);
      GriditemBarrelZombieDes::GriditemBarrelZombieDes((GriditemBarrelZombieDes *)aRStack_68,pGVar9)
      ;
      spawnImp(this,aRStack_68,iVar5);
      PakRecord::~PakRecord((PakRecord *)aRStack_68);
    }
    else {
      iVar1 = -iVar5;
      if (0 < iVar5) {
        iVar1 = -1;
      }
      uVar12 = 0;
      while (bVar3 = uVar12 < uVar8, uVar12 = uVar12 + 2, bVar3) {
        pGVar9 = (GriditemBarrelZombieDes *)FUN_04c76e2c(uVar14);
        GriditemBarrelZombieDes::GriditemBarrelZombieDes
                  ((GriditemBarrelZombieDes *)aRStack_68,pGVar9);
        spawnImp(this,aRStack_68,iVar1 + iVar5);
        PakRecord::~PakRecord((PakRecord *)aRStack_68);
        uVar14 = *(undefined8 *)(this + 0x1f8);
        uVar8 = FUN_04c76e04(uVar14,*(undefined8 *)(this + 0x200));
      }
      uVar12 = 1;
      while (uVar12 < uVar8) {
        iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1;
        iVar1 = iVar2 - iVar5;
        if (iVar5 < iVar2) {
          iVar1 = 1;
        }
        pGVar9 = (GriditemBarrelZombieDes *)FUN_04c76e2c(uVar14,uVar12);
        GriditemBarrelZombieDes::GriditemBarrelZombieDes
                  ((GriditemBarrelZombieDes *)aRStack_68,pGVar9);
        spawnImp(this,aRStack_68,iVar5 + iVar1);
        PakRecord::~PakRecord((PakRecord *)aRStack_68);
        uVar14 = *(undefined8 *)(this + 0x1f8);
        uVar8 = FUN_04c76e04(uVar14,*(undefined8 *)(this + 0x200));
        uVar12 = uVar12 + 2;
      }
    }
  }
  else {
    GridItem::GetType();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    bVar3 = std::operator==((string *)(lVar7 + 8),"barrelpowder");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    if (bVar3) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      BoardEntity::CalcGridPosition();
      Sexy::Insets::Insets(aIStack_90,local_c0 + -1,local_bc + -1,3,3);
      uVar14 = operator|(1,2);
      uVar6 = operator|(uVar14,4);
      EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar6,aIStack_90);
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0),
            bVar3) {
        puVar10 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
                    /* WARNING: Load size is inaccurate */
        pDVar16._0_4_ = *(DamageInfo **)(this + 0x1f0);
        bVar3 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar10);
        if (bVar3) {
          nop();
          lVar7 = *extraout_x0;
          plVar15 = extraout_x0;
LAB_04c7a764:
          pcVar13 = *(code **)(lVar7 + 0x110);
          Sexy::Point::Point(aPStack_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar16._0_4_,local_98,local_94,aRStack_68,0x1000,this,aPStack_a0,0);
          (*pcVar13)(plVar15,aRStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        else {
          bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar10);
          if (bVar3) {
            nop();
            MessageRouter::Post<Zombie*,Zombie*>
                      ((MessageRouter *)gMessageRouter,Message::OnZombiePowderKill,this_00);
            this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
            FUN_05475d88(asStack_a8,lVar7 + 8);
            bVar3 = std::operator==(asStack_a8,"zombie_pumpkin_imp");
            if ((bVar3) || (bVar3 = std::operator==(asStack_a8,"zombie_pumpkin"), bVar3)) {
              (**(code **)(*(long *)this_00 + 0x48))(this_00);
              std::string::~string(asStack_a8);
              break;
            }
            pcVar13 = *(code **)(*(long *)this_00 + 0x110);
            Sexy::Point::Point(aPStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar16._0_4_,local_98,local_94,aRStack_68,0x1000,this,aPStack_a0,0);
            (*pcVar13)(this_00,aRStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
            std::string::~string(asStack_a8);
          }
          else {
            bVar3 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar10);
            if (bVar3) {
              ToolPacketData::GetProps();
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
              if (this != (GridItemBarrel *)pRVar11) {
                nop();
                nop();
                if ((extraout_x0_01 == 0) || (*(char *)(extraout_x0_01 + 0x210) == '\0')) {
                  lVar7 = *extraout_x0_00;
                  plVar15 = extraout_x0_00;
                  goto LAB_04c7a764;
                }
              }
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    }
  }
  std::string::string((string *)aRStack_68,"Play_BarrelBreak");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_68,0.0);
  std::string::~string((string *)aRStack_68);
  nop();
LAB_04c7a4f8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

