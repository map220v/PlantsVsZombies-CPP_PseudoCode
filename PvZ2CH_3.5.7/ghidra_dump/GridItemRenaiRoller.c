// Class: GridItemRenaiRoller


/* GridItemRenaiRoller::onBreakAnimDone(std::string const&) */

void GridItemRenaiRoller::onBreakAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x230))();
  return;
}


/* GridItemRenaiRoller::onRollerLoopAnimDone(std::string const&) */

void GridItemRenaiRoller::onRollerLoopAnimDone(string *param_1)

{
  return;
}


/* GridItemRenaiRoller::isDoneMoving() const */

bool __thiscall GridItemRenaiRoller::isDoneMoving(GridItemRenaiRoller *this)

{
  return *(int *)(this + 0x1e8) == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::MoveOverTimeTo(Sexy::Point const&, float) */

void __thiscall
GridItemRenaiRoller::MoveOverTimeTo(GridItemRenaiRoller *this,Point *param_1,float param_2)

{
  Point *pPVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iStack_18;
  int iStack_14;
  undefined8 uStack_10;
  Point *pPStack_8;
  
  pPStack_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  fVar2 = (float)PVZ_T();
  uVar4 = *(undefined4 *)(this + 0x1c);
  *(float *)(this + 0x1d0) = fVar2;
  *(float *)(this + 0x1d4) = fVar2 + param_2;
  uVar3 = FUN_03e209c0(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  *(undefined4 *)(this + 0x1d8) = uVar3;
  *(undefined4 *)(this + 0x1dc) = uVar4;
  Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_10,(float)iStack_18,(float)iStack_14);
  pPVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1e0) = uStack_10;
  if (pPStack_8 == pPVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiRoller::IsControlled() const */

void __thiscall GridItemRenaiRoller::IsControlled(GridItemRenaiRoller *this)

{
  char cVar1;
  
  cVar1 = FUN_03d0ab10(*(undefined4 *)(this + 0x1e8),1);
  if (cVar1 != '\0') {
    return;
  }
  GridItemBoardEntityConditionTarget::IsControlled((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::StaticClassInit() */

void GridItemRenaiRoller::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiRoller");
    (*pcVar2)(plVar1,asStack_10,FUN_03d0be00,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiRoller::StaticGetClass() */

long * GridItemRenaiRoller::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiRoller",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiRoller::GetClass() const */

long * GridItemRenaiRoller::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiRoller",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiRoller::GridItemRenaiRoller() */

void __thiscall GridItemRenaiRoller::GridItemRenaiRoller(GridItemRenaiRoller *this)

{
  undefined4 uVar1;
  
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06763680;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiRoller_06763990;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1f0) = uVar1;
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  *(undefined4 *)(this + 0x1fc) = 0xffffffff;
  *(undefined4 *)(this + 500) = 0;
  return;
}


/* GridItemRenaiRoller::StaticNew() */

GridItemRenaiRoller * GridItemRenaiRoller::StaticNew(void)

{
  GridItemRenaiRoller *this;
  
  this = ::operator_new(0x200);
  GridItemRenaiRoller(this);
  return this;
}


/* GridItemRenaiRoller::reachFinalLocation(RollerState) */

bool __thiscall GridItemRenaiRoller::reachFinalLocation(GridItemRenaiRoller *this,int param_2)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = true;
  if (*(float *)(this + 500) != 0.0) {
    if (param_2 == 4) {
      fVar2 = (float)FUN_03d0ab70(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                  *(undefined4 *)(this + 0x20));
      return fVar2 <= *(float *)(this + 500);
    }
    fVar2 = (float)FUN_03d0ab70(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    bVar1 = *(float *)(this + 500) <= fVar2;
  }
  return bVar1;
}


/* GridItemRenaiRoller::GetCantPlantReason() const */

undefined8 GridItemRenaiRoller::GetCantPlantReason(void)

{
  return 0x5f;
}


/* GridItemRenaiRoller::canChangeState(RollerState) */

undefined4 __thiscall GridItemRenaiRoller::canChangeState(GridItemRenaiRoller *this,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 != 2) {
    return 1;
  }
  cVar1 = FUN_03d0ab10(*(undefined4 *)(this + 0x1e8),0);
  if ((cVar1 != '\0') && (iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this), iVar2 == 0))
  {
    return 0;
  }
  return 1;
}


/* GridItemRenaiRoller::resetValues() */

void __thiscall GridItemRenaiRoller::resetValues(GridItemRenaiRoller *this)

{
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  return;
}


/* GridItemRenaiRoller::~GridItemRenaiRoller() */

void __thiscall GridItemRenaiRoller::~GridItemRenaiRoller(GridItemRenaiRoller *this)

{
  *(undefined ***)this = &PTR_GetClass_06763680;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiRoller_06763990;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemRenaiRoller::~GridItemRenaiRoller() */

void __thiscall GridItemRenaiRoller::~GridItemRenaiRoller(GridItemRenaiRoller *this)

{
  ~GridItemRenaiRoller(this + -0x10);
  return;
}


/* GridItemRenaiRoller::~GridItemRenaiRoller() */

void __thiscall GridItemRenaiRoller::~GridItemRenaiRoller(GridItemRenaiRoller *this)

{
  ~GridItemRenaiRoller(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRenaiRoller::~GridItemRenaiRoller() */

void __thiscall GridItemRenaiRoller::~GridItemRenaiRoller(GridItemRenaiRoller *this)

{
  ~GridItemRenaiRoller(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::drawRollerAnim(Sexy::Graphics*) */

void __thiscall GridItemRenaiRoller::drawRollerAnim(GridItemRenaiRoller *this,Graphics *param_1)

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
    fVar4 = (float)FUN_03d0acc4(*puVar3);
    fVar5 = (float)FUN_03d0acc4(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_03d0acd4(((double)local_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_03d0aa48((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_03d0acc4(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_03d0acc4(-(fVar13 * fVar15 * fVar12));
    FUN_03d0aa48(uVar8,uVar9,auStack_28,auStack_1c);
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
/* GridItemRenaiRoller::onDraw(Sexy::Graphics*) */

void __thiscall GridItemRenaiRoller::onDraw(GridItemRenaiRoller *this,Graphics *param_1)

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
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar4 = (float)FUN_03d0acc4(*puVar3);
    fVar5 = (float)FUN_03d0acc4(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(aiStack_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_03d0acd4(((double)aiStack_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_03d0aa48((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_03d0acc4(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_03d0acc4(-(fVar13 * fVar15 * fVar12));
    FUN_03d0aa48(uVar8,uVar9,auStack_28,auStack_1c);
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
/* GridItemRenaiRoller::onRollAnimDone(std::string const&) */

void GridItemRenaiRoller::onRollAnimDone(string *param_1)

{
  PopAnimRig *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (extraout_x0 != (PopAnimRig *)0x0) {
    std::string::string((string *)aRStack_40,"waggle");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(extraout_x0,aRStack_40,0,aDStack_38);
    std::string::~string((string *)aRStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::isSameLocation(Sexy::Point const&) */

void __thiscall GridItemRenaiRoller::isSameLocation(GridItemRenaiRoller *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03d0aaf4(*(undefined4 *)(this + 0x130));
  iVar2 = FUN_03d0aaf8(*(undefined4 *)(this + 0x134));
  Sexy::Insets::Insets(aIStack_18,iVar1 + -1,iVar2,3,1);
  Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,(TPoint *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::adjustRollAnim(RollerAnimState, bool) */

void __thiscall
GridItemRenaiRoller::adjustRollAnim(GridItemRenaiRoller *this,int param_2,char param_3)

{
  int iVar1;
  PopAnimRig *this_00;
  char *__s;
  float fVar2;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    __s = "roll_left";
  }
  else {
    __s = "roll_right";
  }
  std::string::string(asStack_48,__s);
  nop();
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (this_00 != (PopAnimRig *)0x0) {
    if (*(int *)(this + 0x1fc) == -1) {
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(this_00,asStack_48,0,aDStack_38);
    }
    else {
      fVar2 = (float)PopAnimRig::GetCurrentFrameInAnimation(this_00);
      if (*(int *)(this + 0x1fc) != param_2) {
        iVar1 = PopAnimRig::CalcAnimLength(this_00,asStack_48);
        fVar2 = (float)iVar1 - fVar2;
      }
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(this_00,asStack_48,0,aDStack_38);
      PopAnimRig::SetCurrentFrameInAnimation(this_00,fVar2);
    }
    if ((param_3 == '\0') && (0 < *(int *)(this + 0x1f8))) {
      (**(code **)(*(long *)this_00 + 0x80))
                (*(undefined4 *)(&DAT_057525c0 + (long)(*(int *)(this + 0x1f8) + -1) * 4),this_00);
    }
  }
  *(int *)(this + 0x1fc) = param_2;
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::playLinkedLoopAnim() */

void __thiscall GridItemRenaiRoller::playLinkedLoopAnim(GridItemRenaiRoller *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  long *plVar3;
  char *__s;
  undefined4 uVar4;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  uVar4 = *(undefined4 *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03d0ab10(uVar4,2);
  if ((cVar1 == '\0') && (cVar1 = FUN_03d0ab10(uVar4,4), cVar1 == '\0')) {
    __s = "right_dust1";
  }
  else {
    __s = "left_dust1";
  }
  std::string::string(asStack_48,__s);
  nop();
  GridItemAnimation::GetLinkedAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (0 < *(int *)(this + 0x1f8)) {
    uVar4 = *(undefined4 *)(&DAT_057525c0 + (long)(*(int *)(this + 0x1f8) + -1) * 4);
    GridItemAnimation::GetLinkedAnimRig();
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    (**(code **)(*plVar3 + 0x80))(uVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::onLinkedOnAnimDone(std::string const&) */

void GridItemRenaiRoller::onLinkedOnAnimDone(string *param_1)

{
  char cVar1;
  PopAnimRig *pPVar2;
  long *plVar3;
  char *__s;
  undefined4 uVar4;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1e8);
  lStack_8 = ___stack_chk_guard;
  cVar1 = FUN_03d0ab10(uVar4,2);
  if ((cVar1 == '\0') && (cVar1 = FUN_03d0ab10(uVar4,4), cVar1 == '\0')) {
    __s = "right_dust1";
  }
  else {
    __s = "left_dust1";
  }
  std::string::string(asStack_48,__s);
  nop();
  GridItemAnimation::GetLinkedAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (0 < *(int *)(param_1 + 0x1f8)) {
    uVar4 = *(undefined4 *)(&DAT_057525c0 + (long)(*(int *)(param_1 + 0x1f8) + -1) * 4);
    GridItemAnimation::GetLinkedAnimRig();
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    (**(code **)(*plVar3 + 0x80))(uVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  std::string::~string(asStack_48);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::onPostLoad() */

void __thiscall GridItemRenaiRoller::onPostLoad(GridItemRenaiRoller *this)

{
  bool bVar1;
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::onPostLoad((BoardEntity *)this);
  GridItemAnimation::GetAnimRig();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_58);
  if (bVar1) {
    this_00 = (TimeChallengeEndLevelUI *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x2f8);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<GridItemRenaiRoller,void(GridItemRenaiRoller::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiRoller::getRenderOffset() */

undefined1  [16] GridItemRenaiRoller::getRenderOffset(void)

{
  GridItemRenaiRollerProps *pGVar1;
  undefined1 auVar2 [16];
  
  pGVar1 = GridItem::GetProps<GridItemRenaiRollerProps>();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulong *)(pGVar1 + 0xa8) & 0xffffffff;
  return auVar2;
}


/* GridItemRenaiRoller::CalcRollTime(int, int) */

float __thiscall
GridItemRenaiRoller::CalcRollTime(GridItemRenaiRoller *this,int param_1,int param_2)

{
  int iVar1;
  GridItemRenaiRollerProps *pGVar2;
  float *pfVar3;
  float fVar4;
  
  fVar4 = ABS((float)(param_2 - param_1));
  if (fVar4 == 0.0) {
    fVar4 = (float)FUN_03d0ab70(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_2);
    fVar4 = ABS(fVar4 - (float)iVar1) * 0.01;
  }
  pGVar2 = GridItem::GetProps<GridItemRenaiRollerProps>();
  pfVar3 = (float *)FUN_03d0ab68(*(undefined8 *)(pGVar2 + 0x158),*(undefined4 *)(this + 0x1f8));
  return fVar4 * *pfVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::doReverseRoll(bool, int) */

void __thiscall
GridItemRenaiRoller::doReverseRoll(GridItemRenaiRoller *this,bool param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  playLinkedLoopAnim(this);
  adjustRollAnim(this,!param_1,0);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point(aPStack_10,param_2,iVar2);
  pcVar3 = *(code **)(*(long *)this + 0x2d0);
  CalcRollTime(this,iVar1,param_2);
  (*pcVar3)(this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiRoller::calcCollisionRect() */

void GridItemRenaiRoller::calcCollisionRect(void)

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
  fVar5 = (float)FUN_03d0ab70(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8,(int)(fVar5 - 21.0),(int)(fVar6 - 75.0),0x3c,0x4c);
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


/* GridItemRenaiRoller::onDrawShadow(Sexy::Graphics*) */

void __thiscall GridItemRenaiRoller::onDrawShadow(GridItemRenaiRoller *this,Graphics *param_1)

{
  float *pfVar1;
  Image *pIVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  pIVar2 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad5de0);
  fVar3 = (float)FUN_03d0acc4((float)(int)fVar3 - 40.0);
  fVar4 = (float)FUN_03d0acc4((float)(int)fVar4 - 24.0);
  Sexy::Graphics::DrawImage(param_1,pIVar2,(int)fVar3,(int)fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::playLinkedAnim(bool, RollerState) */

void __thiscall
GridItemRenaiRoller::playLinkedAnim(GridItemRenaiRoller *this,char param_1,int param_3)

{
  char cVar1;
  PopAnimRig *pPVar2;
  char *pcVar3;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == '\0') {
    if ((param_3 - 2U & 0xfffffffd) == 0) {
      pcVar3 = "left_dust_off";
    }
    else {
      pcVar3 = "right_dust_off";
    }
    std::string::string((string *)aRStack_60,pcVar3);
    nop();
    GridItemAnimation::GetLinkedAnimRig();
    pPVar2 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    Sexy::Delegate1<std::string_const&>::Delegate1((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndStop(pPVar2,(string *)aRStack_60,0,(DummyInit *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    std::string::~string((string *)aRStack_60);
  }
  else {
    cVar1 = FUN_03d0ab10(*(undefined4 *)(this + 0x1e8),2);
    if (cVar1 == '\0') {
      pcVar3 = "right_dust_on";
    }
    else {
      pcVar3 = "left_dust_on";
    }
    std::string::string(asStack_78,pcVar3);
    nop();
    GridItemAnimation::GetLinkedAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onLinkedOnAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar2,asStack_78,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    std::string::~string(asStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::doRoll(bool, bool) */

void __thiscall GridItemRenaiRoller::doRoll(GridItemRenaiRoller *this,bool param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    playLinkedAnim(this,1,0xffffffff);
  }
  else {
    playLinkedLoopAnim(this);
  }
  if (param_1) {
    adjustRollAnim(this,0,0);
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar2 = SharkMinion::getRow((SharkMinion *)this);
    iVar3 = -3;
  }
  else {
    adjustRollAnim(this,1,0);
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar2 = SharkMinion::getRow((SharkMinion *)this);
    iVar3 = DAT_06ad5e08;
  }
  Sexy::Point::Point(aPStack_10,iVar3,iVar2);
  pcVar4 = *(code **)(*(long *)this + 0x2d0);
  CalcRollTime(this,iVar1,iVar3);
  (*pcVar4)(this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::setState(RollerState) */

void __thiscall GridItemRenaiRoller::setState(GridItemRenaiRoller *this,int param_2)

{
  int iVar1;
  long *extraout_x0;
  long *plVar2;
  PopAnimRig *pPVar3;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  if ((iVar1 != param_2) || (iVar1 - 2U < 2)) {
    *(int *)(this + 0x1e8) = param_2;
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    (**(code **)(*extraout_x0 + 0x88))(extraout_x0);
    GridItemAnimation::GetLinkedAnimRig();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    (**(code **)(*plVar2 + 0x88))();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    switch(param_2) {
    case 0:
      resetValues(this);
      GridItemAnimation::GetAnimRig();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      if (this_00 != (PopAnimRig *)0x0) {
        PopAnimRig::SetPaused(this_00,true);
      }
      if (iVar1 != -1) {
        playLinkedAnim(this,0,iVar1);
      }
      break;
    case 1:
      GridItemAnimation::GetAnimRig();
      pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"death");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aRStack_58,"onBreakAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      break;
    case 2:
      doRoll(this,true,iVar1 == 0);
      break;
    case 3:
      doRoll(this,false,iVar1 == 0);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::onGridItemInitialize() */

void __thiscall GridItemRenaiRoller::onGridItemInitialize(GridItemRenaiRoller *this)

{
  char cVar1;
  GridItemRenaiRollerProps *pGVar2;
  TimeChallengeEndLevelUI *this_00;
  GridItemMazeStatueAnimRig *this_01;
  GameObjectDictionary *this_02;
  AttachedEffect *this_03;
  ResourceInfo *pRVar3;
  code *pcVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar2 = GridItem::GetProps<GridItemRenaiRollerProps>();
  uVar5 = *(undefined4 *)(pGVar2 + 0x10);
  FUN_03d0aae4(uVar5,this + 300);
  FUN_03d0aaec(uVar5,this + 0x128);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f8);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemRenaiRoller,void(GridItemRenaiRoller::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  nop();
  GridItemMazeStatueAnimRig::PlayIdle(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  pGVar2 = GridItem::GetProps<GridItemRenaiRollerProps>();
  cVar1 = FUN_0547419c((string *)(pGVar2 + 0xb8));
  if (cVar1 == '\0') {
    this_02 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
    std::string::string((string *)aRStack_50,"linkedEffect");
    this_03 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_02,(string *)aRStack_50);
    std::string::~string((string *)aRStack_50);
    nop();
    GetPAMByName((string *)(pGVar2 + 0xb8));
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
    AttachedEffect::InitializeWithAnimation(this_03,(PopAnim *)pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    pcVar4 = *(code **)(*(long *)this_03 + 0x18);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_50,*(float *)(pGVar2 + 0xc0),*(float *)(pGVar2 + 0xc4),
               *(float *)(pGVar2 + 200));
    (*pcVar4)(this_03,this,aRStack_50,*(undefined4 *)(pGVar2 + 0xcc));
    this[0x194] = (GridItemRenaiRoller)0x1;
  }
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::updatePosition() */

void GridItemRenaiRoller::updatePosition(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  GridItemAnimation *in_x0;
  GridItemRenaiRollerProps *pGVar5;
  AttachedEffect *this;
  StandaloneEffect *this_00;
  long lVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  undefined4 in_s2;
  float local_38;
  float local_34;
  float local_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  uVar1 = *(undefined4 *)(in_x0 + 0x1e8);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_03d0ab10(uVar1,4);
  if ((cVar2 != '\0') || (cVar2 = FUN_03d0ab10(uVar1,5), cVar2 != '\0')) {
    GridItemEgg::getState((GridItemEgg *)in_x0);
    cVar2 = reachFinalLocation();
    if (cVar2 != '\0') {
      setState();
    }
  }
  DVec3::DVec3((DVec3 *)&local_38);
  cVar2 = (**(code **)(*(long *)in_x0 + 0x2f0))();
  if (cVar2 == '\0') {
    fVar7 = (float)(**(code **)(*(long *)in_x0 + 0x2e8))();
    lVar6 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
    local_20 = *(undefined4 *)(lVar6 + 8);
    local_28 = fVar7;
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar7);
    iVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(in_s1);
    Sexy::Point::Point((Point *)local_18,iVar3,iVar4);
    GridItem::SetGridLocationUnbounded();
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar9 = *(float *)(in_x0 + 0x1c);
    fVar8 = (float)FUN_03d0ab70(*(undefined4 *)(in_x0 + 0x18),fVar9,*(undefined4 *)(in_x0 + 0x20));
    in_s2 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar7 - fVar8,in_s1 - fVar9,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)local_18);
    Sexy::FastCurve::SetOutRange((FastCurve *)local_18,local_38,local_34);
    FUN_03d0aafc(local_18[0],in_x0 + 0x1a8);
  }
  cVar2 = GridItemAnimation::HasLinkedAnimRig(in_x0);
  if (cVar2 != '\0') {
    pGVar5 = GridItem::GetProps<GridItemRenaiRollerProps>();
    this = (AttachedEffect *)GridItemAnimation::GetLinkedEffect(in_x0);
    if (this != (AttachedEffect *)0x0) {
      this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
      local_18[0] = Sexy::SexyVector3::operator+
                              ((SexyVector3 *)(pGVar5 + 0xc0),(SexyVector3 *)&local_38);
      local_10 = in_s2;
      StandaloneEffect::SetAttachmentOffset(this_00,(SexyVector3 *)local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiRoller::checkStopLocation() */

void __thiscall GridItemRenaiRoller::checkStopLocation(GridItemRenaiRoller *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  fVar5 = (float)FUN_03d0ab70(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
  uVar1 = *(undefined4 *)(this + 0x1e8);
  cVar2 = FUN_03d0ab10(uVar1,2);
  if (cVar2 == '\0') {
    cVar2 = FUN_03d0ab10(uVar1,3);
    if (cVar2 == '\0') {
      iVar3 = -1;
    }
    else if (fVar5 < (float)iVar4) {
      setState(this,5);
    }
    else {
      setState(this,4);
      doReverseRoll(this,true,iVar3);
    }
  }
  else if (fVar5 < (float)iVar4) {
    setState(this,5);
    doReverseRoll(this,false,iVar3);
  }
  else {
    setState(this,4);
  }
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
  *(float *)(this + 500) = (float)iVar3;
  return;
}


/* GridItemRenaiRoller::stopMoving() */

void __thiscall GridItemRenaiRoller::stopMoving(GridItemRenaiRoller *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  fVar5 = (float)FUN_03d0ab70(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
  uVar1 = *(undefined4 *)(this + 0x1e8);
  cVar2 = FUN_03d0ab10(uVar1,2);
  if (cVar2 == '\0') {
    cVar2 = FUN_03d0ab10(uVar1,3);
    if (cVar2 == '\0') {
      iVar3 = -1;
    }
    else if (fVar5 < (float)iVar4) {
      setState(this,5);
    }
    else {
      setState(this,4);
      doReverseRoll(this,true,iVar3);
    }
  }
  else if (fVar5 < (float)iVar4) {
    setState(this,5);
    doReverseRoll(this,false,iVar3);
  }
  else {
    setState(this,4);
  }
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
  *(float *)(this + 500) = (float)iVar3;
  return;
}


/* GridItemRenaiRoller::checkEdge() */

void __thiscall GridItemRenaiRoller::checkEdge(GridItemRenaiRoller *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar1 = *(undefined4 *)(this + 0x1e8);
  cVar2 = FUN_03d0ab10(uVar1,2);
  if ((cVar2 == '\0') && (cVar2 = FUN_03d0ab10(uVar1,4), cVar2 == '\0')) {
    if (DAT_06ad5e08 <= iVar3) {
LAB_03d0d764:
      setState(this,1);
      return;
    }
  }
  else if (iVar3 < 1) {
    fVar4 = (float)FUN_03d0ab70(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
    if (fVar4 <= (float)iVar3) {
      uVar1 = *(undefined4 *)(this + 0x1e8);
      cVar2 = FUN_03d0ab10(uVar1,2);
      if ((cVar2 != '\0') || (cVar2 = FUN_03d0ab10(uVar1,4), cVar2 != '\0')) {
        setState(this,0);
        return;
      }
      goto LAB_03d0d764;
    }
  }
  return;
}


/* GridItemRenaiRoller::onDestroy() */

void __thiscall GridItemRenaiRoller::onDestroy(GridItemRenaiRoller *this)

{
  GridItem::onDestroy((GridItem *)this);
  MessageRouter::Post<GridItemRenaiRoller*,GridItemRenaiRoller*>
            ((MessageRouter *)gMessageRouter,Message::NotifyRollerDestroy,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::damageEntities() */

void __thiscall GridItemRenaiRoller::damageEntities(GridItemRenaiRoller *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GridItemRenaiRollerProps *pGVar4;
  long *extraout_x0;
  undefined8 *puVar5;
  long *extraout_x0_00;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DamageInfo *pDVar9;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pGVar4 = GridItem::GetProps<GridItemRenaiRollerProps>();
  uVar8 = *(undefined4 *)(pGVar4 + 0x138);
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  uVar3 = operator|(2,1);
  uVar7 = *(undefined4 *)(this + 0x1c);
  local_68 = FUN_03d0ab70(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
  local_64 = uVar7;
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar8,avStack_80,uVar3,(DamageInfo *)&local_68,uVar2,uVar2);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar5);
    if (bVar1) {
      nop();
      pcVar6 = *(code **)(*extraout_x0 + 0x120);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)&local_68,0x200000,this,
                 aPStack_90,0);
      (*pcVar6)(extraout_x0,(DamageInfo *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
      if (bVar1) {
        nop();
        pcVar6 = *(code **)(*extraout_x0_00 + 0x110);
        pGVar4 = GridItem::GetProps<GridItemRenaiRollerProps>();
        puVar5 = (undefined8 *)
                 FUN_03d0ab68(*(undefined8 *)(pGVar4 + 0x140),*(undefined4 *)(this + 0x1f8));
                    /* WARNING: Load size is inaccurate */
        pDVar9._0_4_ = *puVar5;
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  (pDVar9._0_4_,local_88,local_84,(DamageInfo *)&local_68,0x200000,this,aPStack_90,0
                  );
        (*pcVar6)(extraout_x0_00,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiRoller::checkCollision() */

void __thiscall GridItemRenaiRoller::checkCollision(GridItemRenaiRoller *this)

{
  GridItemRenaiRollerProps *pGVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_T();
  fVar4 = *(float *)(this + 0x1f0);
  pGVar1 = GridItem::GetProps<GridItemRenaiRollerProps>();
  if (fVar2 - fVar4 <= *(float *)(pGVar1 + 0x13c)) {
    return;
  }
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1f0) = uVar3;
  damageEntities(this);
  return;
}


/* GridItemRenaiRoller::updateState() */

void __thiscall GridItemRenaiRoller::updateState(GridItemRenaiRoller *this)

{
  int iVar1;
  
  iVar1 = GridItemEgg::getState((GridItemEgg *)this);
  if (iVar1 - 2U < 4) {
    checkEdge(this);
    checkCollision(this);
    return;
  }
  return;
}


/* GridItemRenaiRoller::onUpdate() */

void __thiscall GridItemRenaiRoller::onUpdate(GridItemRenaiRoller *this)

{
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  updateState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiRoller::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemRenaiRoller::GatherPlantingRestrictions
          (GridItemRenaiRoller *this,PlantType *param_1,vector *param_2)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  cVar1 = FUN_03d0ab10(*(undefined4 *)(this + 0x1e8),0);
  if (cVar1 != '\0') {
    local_c = GetCantPlantReason();
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

