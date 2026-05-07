// Class: GridItemSchoolBus


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::StaticClassInit() */

void GridItemSchoolBus::StaticClassInit(void)

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
    std::string::string(asStack_10,"SchoolBusZombieDes");
    (*pcVar3)(plVar2,asStack_10,FUN_033e1458,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GriditemSchoolBusParams");
    (*pcVar3)(plVar2,asStack_10,FUN_033e5460,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemSchoolBus");
    (*pcVar3)(plVar2,asStack_10,FUN_033e4f20,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBus::StaticGetClass() */

long * GridItemSchoolBus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSchoolBus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSchoolBus::GetClass() const */

long * GridItemSchoolBus::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemSchoolBus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSchoolBus::GetCantPlantReason() const */

undefined8 GridItemSchoolBus::GetCantPlantReason(void)

{
  return 0x60;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::drawSchoolBusAnim(Sexy::Graphics*) */

void __thiscall GridItemSchoolBus::drawSchoolBusAnim(GridItemSchoolBus *this,Graphics *param_1)

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
    iVar2 = FUN_033e1924();
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_4c);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar5 = (float)FUN_033e1938((float)iVar3 - *(float *)(lVar4 + 8) * *(float *)(param_1 + 0x1c));
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar11 = 0.0;
    dVar10 = (double)FUN_033e1970(((double)local_48[0] + -1.0) * 0.5 * (double)iVar3);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar12 = fVar11;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar14 = *(float *)(param_1 + 0x18);
    fVar13 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar14,fVar12 * fVar13);
    FUN_033e11c8((float)(int)((double)iVar2 + dVar10),(float)(int)fVar5,auStack_28,auStack_1c);
    uVar8 = FUN_033e1938(-(fVar7 * fVar14 * fVar6));
    uVar9 = FUN_033e1938(-(fVar12 * fVar13 * fVar11));
    FUN_033e11c8(uVar8,uVar9,auStack_28,auStack_1c);
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
/* GridItemSchoolBus::onDraw(Sexy::Graphics*) */

void __thiscall GridItemSchoolBus::onDraw(GridItemSchoolBus *this,Graphics *param_1)

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
    iVar2 = FUN_033e1924();
    iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iStack_4c);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar5 = (float)FUN_033e1938((float)iVar3 - *(float *)(lVar4 + 8) * *(float *)(param_1 + 0x1c));
    (**(code **)(*(long *)this + 0xd0))(aiStack_48,this);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar11 = 0.0;
    dVar10 = (double)FUN_033e1970(((double)aiStack_48[0] + -1.0) * 0.5 * (double)iVar3);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar12 = fVar11;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar14 = *(float *)(param_1 + 0x18);
    fVar13 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar14,fVar12 * fVar13);
    FUN_033e11c8((float)(int)((double)iVar2 + dVar10),(float)(int)fVar5,auStack_28,auStack_1c);
    uVar8 = FUN_033e1938(-(fVar7 * fVar14 * fVar6));
    uVar9 = FUN_033e1938(-(fVar12 * fVar13 * fVar11));
    FUN_033e11c8(uVar8,uVar9,auStack_28,auStack_1c);
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
/* GridItemSchoolBus::TakeDamage(DamageInfo const&) */

void __thiscall GridItemSchoolBus::TakeDamage(GridItemSchoolBus *this,DamageInfo *param_1)

{
  GridItemSchoolBus GVar1;
  bool bVar2;
  float fVar3;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
    fVar3 = (float)GridItem::GetHitpoints((GridItem *)this);
    if (*(float *)(param_1 + 8) < fVar3) goto LAB_033e2b5c;
  }
  else {
    fVar3 = (float)(**(code **)(*(long *)this + 0x1d8))();
    if (*(float *)(param_1 + 8) < fVar3) goto LAB_033e2b5c;
  }
  ToolPacketData::GetProps();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar2) {
    GVar1 = this[0x208];
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (GVar1 == (GridItemSchoolBus)0x0) {
      this[0x208] = (GridItemSchoolBus)0x1;
      (**(code **)(*(long *)this + 0x310))(this);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_033e2b5c:
  GridItemBreakableTarget::TakeDamage((GridItemBreakableTarget *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::isSameLocation(Sexy::Point const&) */

void __thiscall GridItemSchoolBus::isSameLocation(GridItemSchoolBus *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_033e12e0(*(undefined4 *)(this + 0x130));
  iVar2 = FUN_033e12e4(*(undefined4 *)(this + 0x134));
  Sexy::Insets::Insets(aIStack_18,iVar1 + -1,iVar2 + -1,4,2);
  Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,(TPoint *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBus::isDoneMoving() const */

bool __thiscall GridItemSchoolBus::isDoneMoving(GridItemSchoolBus *this)

{
  float fVar1;
  
  if (((*(int *)(this + 0x20c) - 3U < 2) || (*(int *)(this + 0x20c) == 1)) &&
     (fVar1 = (float)PVZ_T(), fVar1 < *(float *)(this + 0x1d4))) {
    fVar1 = (float)PVZ_EOT();
    return *(float *)(this + 0x1d0) == fVar1;
  }
  return true;
}


/* GridItemSchoolBus::GridItemSchoolBus() */

void __thiscall GridItemSchoolBus::GridItemSchoolBus(GridItemSchoolBus *this)

{
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_0661b670;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBus_0661b9a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  DVec3::DVec3((DVec3 *)(this + 0x210));
  this[0x208] = (GridItemSchoolBus)0x0;
  *(undefined4 *)(this + 0x20c) = 0;
  this[0x209] = (GridItemSchoolBus)0x0;
  *(undefined4 *)(this + 0x21c) = 0xffffffff;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  return;
}


/* GridItemSchoolBus::StaticNew() */

GridItemSchoolBus * GridItemSchoolBus::StaticNew(void)

{
  GridItemSchoolBus *this;
  
  this = ::operator_new(0x220);
  GridItemSchoolBus(this);
  return this;
}


/* GridItemSchoolBus::calcCollisionRect() */

void GridItemSchoolBus::calcCollisionRect(void)

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
  fVar6 = (float)FUN_033e170c(*(undefined4 *)(in_x0 + 0x18),fVar7,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (in_x8,(int)(fVar6 - (float)iVar1 * 2.0),(int)(fVar7 - (float)iVar2 * 1.5),
             (int)((float)iVar3 * 3.0),(int)((float)iVar4 * 1.5));
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
/* GridItemSchoolBus::SetBusState(SchoolBusState) */

void __thiscall GridItemSchoolBus::SetBusState(GridItemSchoolBus *this,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemSchoolBusAnimRig *extraout_x0;
  GridItemSchoolBusAnimRig *this_00;
  GridItemSchoolBusAnimRig *this_01;
  int *piVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  int local_60 [2];
  undefined4 local_58 [2];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_033e12fc(this[0x1bd]);
  if ((cVar1 == '\0') && (*(int *)(this + 0x20c) != param_2)) {
    *(int *)(this + 0x20c) = param_2;
    switch(param_2) {
    case 1:
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      nop();
      GridItemSchoolBusAnimRig::PlayMove(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      fVar5 = (float)PVZ_EOT();
      if (*(float *)(this + 0x1d0) == fVar5) {
        iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
        iVar3 = SharkMinion::getRow((SharkMinion *)this);
        *(int *)(this + 0x21c) = iVar2 + 1;
        Sexy::Point::Point((Point *)local_58,-1,iVar3);
        (**(code **)(*(long *)this + 0x2d0))
                  (9.0 / *(float *)(this + 0x1ec),this,(RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      }
      break;
    case 2:
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)local_58,"onBrokenAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)local_60,(string *)local_58);
      GridItemSchoolBusAnimRig::PlayBroken(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)local_58);
      nop();
      Sexy::RtId::~RtId((RtId *)local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      break;
    case 3:
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      nop();
      GridItemSchoolBusAnimRig::PlayBrokenMove(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      if (this[0x209] == (GridItemSchoolBus)0x0) {
        this[0x209] = (GridItemSchoolBus)0x1;
        local_60[0] = BoardEntity::CalcColumnPosition((BoardEntity *)this);
        local_60[0] = local_60[0] + -2;
        local_58[0] = 0xffffffff;
        piVar4 = eastl::max_alt<int>(local_60,(int *)local_58);
        iVar2 = *piVar4;
        iVar3 = SharkMinion::getRow((SharkMinion *)this);
        Sexy::Point::Point((Point *)local_58,iVar2,iVar3);
        fVar5 = (9.0 / *(float *)(this + 0x1ec)) / (float)*(int *)(this + 0x21c);
        iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
        (**(code **)(*(long *)this + 0x2d0))
                  ((fVar5 + fVar5) * (float)(iVar3 - iVar2),this,
                   (RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      }
      break;
    case 4:
      (**(code **)(*(long *)this + 0x300))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBus::onBrokenAnimDone(std::string const&) */

void GridItemSchoolBus::onBrokenAnimDone(string *param_1)

{
  SetBusState((GridItemSchoolBus *)param_1,3);
  return;
}


/* GridItemSchoolBus::onGridItemInitialize() */

void __thiscall GridItemSchoolBus::onGridItemInitialize(GridItemSchoolBus *this)

{
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  FUN_033e12d0(*(undefined4 *)(this + 0x1e8),this + 300);
  FUN_033e12d8(*(undefined4 *)(this + 0x1e8),this + 0x128);
  RealObject::JoinTeam((RealObject *)this,2);
  SetBusState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::getNextBoardPosition() */

void __thiscall GridItemSchoolBus::getNextBoardPosition(GridItemSchoolBus *this)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_20;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBoardEntityConditionTarget::GetOwner();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    GridItemBoardEntityConditionTarget::GetOwner();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar6 = *(undefined4 *)(lVar2 + 0x1c);
    uVar4 = FUN_033e170c(*(undefined4 *)(lVar2 + 0x18),uVar6,*(undefined4 *)(lVar2 + 0x20));
    local_20 = CONCAT44(uVar6,uVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    local_20 = *(undefined8 *)(this + 0x1d8);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar5 = (ulong)*(uint *)(this + 0x1d4);
  uVar6 = *(undefined4 *)(this + 0x1d0);
  uVar4 = PVZ_T();
  iVar3 = *(int *)(this + 0x20c);
  if (((iVar3 != 3) && (bVar1 = iVar3 == 4, iVar3 = 1, bVar1)) &&
     (iVar3 = 3, this[0x209] == (GridItemSchoolBus)0x0)) {
    iVar3 = 1;
  }
  uVar4 = CurveLerp<Sexy::SexyVector2>(uVar6,uVar5,uVar4,&local_20,this + 0x1e0,iVar3);
  local_20 = CONCAT44((int)uVar5,uVar4);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4,uVar5 & 0xffffffff);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::checkEdge() */

void __thiscall GridItemSchoolBus::checkEdge(GridItemSchoolBus *this)

{
  float *pfVar1;
  code *pcVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (*pfVar1 <= 200.0) {
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


/* GridItemSchoolBus::updateState() */

void __thiscall GridItemSchoolBus::updateState(GridItemSchoolBus *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_033e1304(*(undefined4 *)(this + 0x20c));
  switch(uVar1) {
  case 0:
  case 2:
    checkEdge(this);
    break;
  case 1:
  case 3:
    checkEdge(this);
    (**(code **)(*(long *)this + 0x318))(this);
    (**(code **)(*(long *)this + 0x2f8))(this);
    return;
  case 4:
    checkEdge(this);
    (**(code **)(*(long *)this + 0x308))(this);
    (**(code **)(*(long *)this + 0x2f8))(this);
    return;
  }
  (**(code **)(*(long *)this + 0x2f8))(this);
  return;
}


/* GridItemSchoolBus::onUpdate() */

void __thiscall GridItemSchoolBus::onUpdate(GridItemSchoolBus *this)

{
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  updateState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::updatePosition() */

void GridItemSchoolBus::updatePosition(void)

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
  Point aPStack_88 [8];
  FastCurve local_80 [4];
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_78);
  cVar1 = (**(code **)(*(long *)in_x0 + 0x2f0))();
  if (cVar1 == '\0') {
    fVar6 = (float)(**(code **)(*(long *)in_x0 + 0x2e8))();
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar6);
    iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(in_s1);
    Sexy::Point::Point((Point *)&local_68,iVar2,iVar3);
    GridItem::SetGridLocationUnbounded();
    fVar8 = *(float *)(in_x0 + 0x1c);
    fVar7 = (float)FUN_033e170c(*(undefined4 *)(in_x0 + 0x18),fVar8,*(undefined4 *)(in_x0 + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar6 - fVar7,in_s1 - fVar8,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_78,(SexyVector3 *)&local_68);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,local_78,local_74);
    FUN_033e12e8(local_68,local_64,in_x0 + 0x1a8);
    in_s2 = 0;
    pcVar5 = *(code **)(*(long *)in_x0 + 0x78);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar6,in_s1,0.0);
    (*pcVar5)();
  }
  else if ((*(int *)(in_x0 + 0x20c) == 3) && (in_x0[0x208] == (GridItemAnimation)0x0)) {
    in_x0[0x208] = (GridItemAnimation)0x1;
    (**(code **)(*(long *)in_x0 + 0x310))();
    pcVar5 = *(code **)(*(long *)in_x0 + 0x120);
    Sexy::Point::Point(aPStack_88,-1,-1);
    Sexy::FastCurve::SetOutRange(local_80,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,(DamageInfo *)&local_68,2,0,aPStack_88,0);
    (*pcVar5)();
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    in_s2 = local_7c;
  }
  cVar1 = GridItemAnimation::HasLinkedAnimRig(in_x0);
  if (cVar1 != '\0') {
    pGVar4 = GridItem::GetProps<GridItemBoardEntityConditionTargetProps>();
    this = (AttachedEffect *)GridItemAnimation::GetLinkedEffect(in_x0);
    this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
    local_68 = Sexy::SexyVector3::operator+((SexyVector3 *)(pGVar4 + 0xc0),(SexyVector3 *)&local_78)
    ;
    local_60 = in_s2;
    StandaloneEffect::SetAttachmentOffset(this_00,(SexyVector3 *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::crushEntities() */

void __thiscall GridItemSchoolBus::crushEntities(GridItemSchoolBus *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  PlantGroup *this_00;
  long lVar6;
  PlantSpikeweed *pPVar7;
  float *pfVar8;
  float *pfVar9;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  code *pcVar10;
  float fVar11;
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
LAB_033e66e4:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    if ((RtObject *)*puVar5 != (RtObject *)0x0) {
      bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)*puVar5);
      if (bVar1) {
        nop();
        if ((this_00 != (PlantGroup *)0x0) && (cVar2 = PlantGroup::Empty(this_00), cVar2 == '\0')) {
          PlantGroup::GetPlantAtLayer(aRStack_98,this_00,1);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_98);
          if (bVar1) {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
            if (*(long *)(lVar6 + 0xa8) != 0) {
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
              pPVar7 = Sexy::RtObject::Cast<PlantSpikeweed>(*(RtObject **)(lVar6 + 0xa8));
              if (pPVar7 != (PlantSpikeweed *)0x0) {
                pfVar8 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)this);
                pfVar9 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  **)(pPVar7 + 0x10));
                fVar11 = (float)Sexy::SexyMath::Fabs(*pfVar8 - *pfVar9);
                iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
                if (fVar11 <= (float)iVar4 + (float)iVar4) {
                  PlantGroup::TakeSmashAttack(this_00,(BoardEntity *)this);
                  iVar4 = FUN_033e1304(*(undefined4 *)(this + 0x20c));
                  if (iVar4 != 3) {
                    SetBusState(this,2);
                  }
                }
                goto LAB_033e6678;
              }
            }
            pcVar10 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
            (*pcVar10)(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
          }
          else {
            pcVar10 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
            (*pcVar10)(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
          }
LAB_033e6678:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
        }
      }
      else if ((((RtObject *)*puVar5 != (RtObject *)0x0) &&
               (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5), bVar1)) &&
              (cVar2 = RealObject::IsOnTeam(*puVar5,1), cVar2 != '\0')) {
        nop();
        this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        FUN_05475d88(aRStack_98,lVar6 + 8);
        bVar1 = std::operator==((string *)aRStack_98,"zombie_pumpkin_imp");
        if ((bVar1) || (bVar1 = std::operator==((string *)aRStack_98,"zombie_pumpkin"), bVar1)) {
          (**(code **)(*(long *)this_01 + 0x48))(this_01);
          std::string::~string((string *)aRStack_98);
          goto LAB_033e66e4;
        }
        pcVar10 = *(code **)(*(long *)this_01 + 0x120);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_88,local_84,aDStack_68,0x200000,this,aPStack_90,0);
        (*pcVar10)(this_01,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
        std::string::~string((string *)aRStack_98);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  } while( true );
}


/* GridItemSchoolBus::~GridItemSchoolBus() */

void __thiscall GridItemSchoolBus::~GridItemSchoolBus(GridItemSchoolBus *this)

{
  *(undefined ***)this = &PTR_GetClass_0661b670;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBus_0661b9a0;
  std::vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>>::~vector
            ((vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>> *)(this + 0x1f0));
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemSchoolBus::~GridItemSchoolBus() */

void __thiscall GridItemSchoolBus::~GridItemSchoolBus(GridItemSchoolBus *this)

{
  ~GridItemSchoolBus(this + -0x10);
  return;
}


/* GridItemSchoolBus::~GridItemSchoolBus() */

void __thiscall GridItemSchoolBus::~GridItemSchoolBus(GridItemSchoolBus *this)

{
  ~GridItemSchoolBus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSchoolBus::~GridItemSchoolBus() */

void __thiscall GridItemSchoolBus::~GridItemSchoolBus(GridItemSchoolBus *this)

{
  ~GridItemSchoolBus(this + -0x10);
  return;
}


/* GridItemSchoolBus::SetSchoolBusParams(GriditemSchoolBusParams) */

void __thiscall GridItemSchoolBus::SetSchoolBusParams(GridItemSchoolBus *this,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(this + 0x1e8) = *param_2;
  *(undefined4 *)(this + 0x1ec) = uVar1;
  std::vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>>::operator=
            ((vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>> *)(this + 0x1f0),
             (vector *)(param_2 + 2));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::AddSchoolBusWithParams(std::string const&, int, int, GriditemSchoolBusParams,
   int) */

void GridItemSchoolBus::AddSchoolBusWithParams
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,
               GriditemSchoolBusParams *param_4,undefined8 param_5)

{
  string *psVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  RtObject *this;
  GridItemSchoolBus *pGVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  GriditemSchoolBusParams aGStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  pcVar3 = (char *)FUN_0547429c(lVar2 + 0x10);
  uVar4 = Sexy::RtClass::StaticGetClassNamed(pcVar3);
  GameObject::Create(uVar4,0x2f);
  nop();
  pGVar5 = Sexy::RtObject::Cast<GridItemSchoolBus>(this);
  GriditemSchoolBusParams::GriditemSchoolBusParams(aGStack_28,param_4);
  SetSchoolBusParams(pGVar5,aGStack_28);
  GriditemSchoolBusParams::~GriditemSchoolBusParams(aGStack_28);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aGStack_28,(RtWeakPtrBase *)aRStack_30);
  GridItem::GridItemInitialize((GridItem *)pGVar5,aGStack_28,param_2,param_3,param_5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aGStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::spawnImp(SchoolBusZombieDes, int) */

void GridItemSchoolBus::spawnImp
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
  if (((DAT_06a9e4b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06a9e4b8), iVar1 != 0)) {
    param_2 = 0;
    param_3 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06a9e418,-40.0,0.0,0.0);
    __cxa_guard_release(&DAT_06a9e4b8);
  }
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_4);
  local_78 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)&DAT_06a9e418);
  local_74 = (float)param_2;
  local_70 = param_3;
  BoardEntity::PlaceOnBoard(this_00);
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
  local_78 = Sexy::SexyVector3::operator+(pSVar5,(SexyVector3 *)&DAT_06a9e418);
  local_74 = (float)param_2;
  local_70 = param_3;
  iVar1 = BoardTransforms::GridToBoardSpaceY(param_6);
  local_74 = (float)iVar1;
  GridItemBarrel::SetFlyingDestinationWithTravelTime
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
/* GridItemSchoolBus::onSchoolBusBroken() */

void __thiscall GridItemSchoolBus::onSchoolBusBroken(GridItemSchoolBus *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  GriditemBarrelZombieDes *pGVar7;
  ulong uVar8;
  undefined8 uVar9;
  GriditemBarrelZombieDes aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = std::vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>>::empty
                    ((vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>> *)(this + 0x1f0)
                    );
  if (cVar4 == '\0') {
    iVar5 = SharkMinion::getRow((SharkMinion *)this);
    uVar9 = *(undefined8 *)(this + 0x1f0);
    uVar6 = FUN_033e131c(uVar9,*(undefined8 *)(this + 0x1f8));
    if (uVar6 == 1) {
      pGVar7 = (GriditemBarrelZombieDes *)FUN_033e1344(uVar9,0);
      GriditemBarrelZombieDes::GriditemBarrelZombieDes(aGStack_18,pGVar7);
      spawnImp(this,aGStack_18,iVar5);
      PakRecord::~PakRecord((PakRecord *)aGStack_18);
    }
    else {
      iVar1 = -iVar5;
      if (0 < iVar5) {
        iVar1 = -1;
      }
      uVar8 = 0;
      while (bVar3 = uVar8 < uVar6, uVar8 = uVar8 + 2, bVar3) {
        pGVar7 = (GriditemBarrelZombieDes *)FUN_033e1344(uVar9);
        GriditemBarrelZombieDes::GriditemBarrelZombieDes(aGStack_18,pGVar7);
        spawnImp(this,aGStack_18,iVar5 + iVar1);
        PakRecord::~PakRecord((PakRecord *)aGStack_18);
        uVar9 = *(undefined8 *)(this + 0x1f0);
        uVar6 = FUN_033e131c(uVar9,*(undefined8 *)(this + 0x1f8));
      }
      uVar8 = 1;
      while (uVar8 < uVar6) {
        iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1;
        iVar1 = iVar2 - iVar5;
        if (iVar5 < iVar2) {
          iVar1 = 1;
        }
        pGVar7 = (GriditemBarrelZombieDes *)FUN_033e1344(uVar9,uVar8);
        GriditemBarrelZombieDes::GriditemBarrelZombieDes(aGStack_18,pGVar7);
        spawnImp(this,aGStack_18,iVar5 + iVar1);
        PakRecord::~PakRecord((PakRecord *)aGStack_18);
        uVar9 = *(undefined8 *)(this + 0x1f0);
        uVar6 = FUN_033e131c(uVar9,*(undefined8 *)(this + 0x1f8));
        uVar8 = uVar8 + 2;
      }
    }
    std::string::string((string *)aGStack_18,"Play_BarrelBreak");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aGStack_18,0.0);
    std::string::~string((string *)aGStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBus::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSchoolBus::GatherPlantingRestrictions
          (GridItemSchoolBus *this,PlantType *param_1,vector *param_2)

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

