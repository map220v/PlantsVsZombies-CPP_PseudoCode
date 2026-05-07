// Class: GridItemMazeStatue


/* GridItemMazeStatue::IsControlled() const */

undefined8 __thiscall GridItemMazeStatue::IsControlled(GridItemMazeStatue *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x2f0))();
  if (cVar1 != '\0') {
    uVar2 = GridItemBreakableTarget::IsControlled((GridItemBreakableTarget *)this);
    return uVar2;
  }
  return 1;
}


/* GridItemMazeStatue::SetTargetPosition(Sexy::Point const&) */

void __thiscall GridItemMazeStatue::SetTargetPosition(GridItemMazeStatue *this,Point *param_1)

{
  *(undefined8 *)(this + 0x210) = *(undefined8 *)param_1;
  return;
}


/* GridItemMazeStatue::onTouchCancelEvent() */

void __thiscall GridItemMazeStatue::onTouchCancelEvent(GridItemMazeStatue *this)

{
  *(undefined8 *)(this + 0x218) = 0;
  this[0x220] = (GridItemMazeStatue)0x0;
  return;
}


/* GridItemMazeStatue::onAnimEnded(std::string const&) */

void GridItemMazeStatue::onAnimEnded(string *param_1)

{
  if (*(int *)(param_1 + 0x1e8) != 4) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemMazeStatue::CalcRenderOrder() const */

void __thiscall GridItemMazeStatue::CalcRenderOrder(GridItemMazeStatue *this)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = FUN_03d1aea8(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104));
  if (iVar1 != 9) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    Board::MakeRenderOrder(0x61e68,(int)pfVar2[1],(int)-*pfVar2);
    return;
  }
  GridItemBoardEntityConditionTarget::CalcRenderOrder((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemMazeStatue::CalcRenderOrder() const */

void __thiscall GridItemMazeStatue::CalcRenderOrder(GridItemMazeStatue *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::StaticClassInit() */

void GridItemMazeStatue::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMazeStatue");
    (*pcVar2)(plVar1,asStack_10,FUN_03d1c1d0,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMazeStatue::StaticGetClass() */

long * GridItemMazeStatue::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMazeStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMazeStatue::GetClass() const */

long * GridItemMazeStatue::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMazeStatue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMazeStatue::IsDisableForTouch() */

void __thiscall GridItemMazeStatue::IsDisableForTouch(GridItemMazeStatue *this)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(this + 0x1e8);
  cVar2 = FUN_03d1ae9c(uVar1,1);
  if (((cVar2 == '\0') && (cVar2 = FUN_03d1ae9c(uVar1,2), cVar2 == '\0')) &&
     (cVar2 = FUN_03d1ae9c(uVar1,3), cVar2 == '\0')) {
    FUN_03d1ae9c(uVar1,4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::SetFinalPosition() */

void __thiscall GridItemMazeStatue::SetFinalPosition(GridItemMazeStatue *this)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  fVar4 = *(float *)(this + 0x204);
  fVar1 = (float)Sexy::SexyMath::DegToRad(*(float *)(this + 0x1f8));
  dVar2 = cos((double)fVar1);
  fVar3 = *(float *)(this + 0x1fc);
  local_18 = (float)((double)*(float *)(this + 0x200) + (double)fVar3 * dVar2);
  dVar2 = sin((double)fVar1);
  local_10 = 0;
  local_14 = (float)((double)fVar4 + (double)fVar3 * dVar2);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMazeStatue::updateState() */

void __thiscall GridItemMazeStatue::updateState(GridItemMazeStatue *this)

{
  int iVar1;
  
  iVar1 = GridItemEgg::getState((GridItemEgg *)this);
  if (iVar1 - 1U < 2) {
    (**(code **)(*(long *)this + 0x2e0))(this);
  }
  return;
}


/* GridItemMazeStatue::onUpdate() */

void __thiscall GridItemMazeStatue::onUpdate(GridItemMazeStatue *this)

{
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  updateState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::ResetLocation() */

void __thiscall GridItemMazeStatue::ResetLocation(GridItemMazeStatue *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar4 = pfVar3[1];
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(fVar4);
  Sexy::Point::Point(aPStack_10,iVar1,iVar2);
  GridItem::SetGridLocationUnbounded((GridItem *)this,aPStack_10,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMazeStatue::onNotifyStatueEnable(bool) */

void __thiscall GridItemMazeStatue::onNotifyStatueEnable(GridItemMazeStatue *this,bool param_1)

{
  if (param_1) {
    ResetLocation(this);
  }
  FUN_03d1ae94(this + 0x221,param_1);
  return;
}


/* GridItemMazeStatue::GridItemMazeStatue() */

void __thiscall GridItemMazeStatue::GridItemMazeStatue(GridItemMazeStatue *this)

{
  undefined4 uVar1;
  
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06764f30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMazeStatue_06765240;
  DVec3::DVec3((DVec3 *)(this + 0x200));
  Sexy::Point::Point((Point *)(this + 0x210));
  *(undefined4 *)(this + 0x1e8) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x218) = 0;
  this[0x220] = (GridItemMazeStatue)0x0;
  this[0x221] = (GridItemMazeStatue)0x0;
  this[0x222] = (GridItemMazeStatue)0x0;
  *(undefined4 *)(this + 0x1ec) = uVar1;
  *(undefined4 *)(this + 0x1f0) = uVar1;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x20c) = uVar1;
  return;
}


/* GridItemMazeStatue::StaticNew() */

GridItemMazeStatue * GridItemMazeStatue::StaticNew(void)

{
  GridItemMazeStatue *this;
  
  this = ::operator_new(0x228);
  GridItemMazeStatue(this);
  return this;
}


/* GridItemMazeStatue::~GridItemMazeStatue() */

void __thiscall GridItemMazeStatue::~GridItemMazeStatue(GridItemMazeStatue *this)

{
  *(undefined ***)this = &PTR_GetClass_06764f30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMazeStatue_06765240;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemMazeStatue::~GridItemMazeStatue() */

void __thiscall GridItemMazeStatue::~GridItemMazeStatue(GridItemMazeStatue *this)

{
  ~GridItemMazeStatue(this + -0x10);
  return;
}


/* GridItemMazeStatue::~GridItemMazeStatue() */

void __thiscall GridItemMazeStatue::~GridItemMazeStatue(GridItemMazeStatue *this)

{
  ~GridItemMazeStatue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMazeStatue::~GridItemMazeStatue() */

void __thiscall GridItemMazeStatue::~GridItemMazeStatue(GridItemMazeStatue *this)

{
  ~GridItemMazeStatue(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::drawStatueAnim(Sexy::Graphics*) */

void __thiscall GridItemMazeStatue::drawStatueAnim(GridItemMazeStatue *this,Graphics *param_1)

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
    fVar4 = (float)FUN_03d1b168(*puVar3);
    fVar5 = (float)FUN_03d1b168(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_03d1b178(((double)local_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_03d1adb0((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_03d1b168(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_03d1b168(-(fVar13 * fVar15 * fVar12));
    FUN_03d1adb0(uVar8,uVar9,auStack_28,auStack_1c);
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
/* GridItemMazeStatue::onDraw(Sexy::Graphics*) */

void __thiscall GridItemMazeStatue::onDraw(GridItemMazeStatue *this,Graphics *param_1)

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
    fVar4 = (float)FUN_03d1b168(*puVar3);
    fVar5 = (float)FUN_03d1b168(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(aiStack_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_03d1b178(((double)aiStack_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_03d1adb0((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_03d1b168(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_03d1b168(-(fVar13 * fVar15 * fVar12));
    FUN_03d1adb0(uVar8,uVar9,auStack_28,auStack_1c);
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


/* GridItemMazeStatue::isDoneMoving() const */

bool __thiscall GridItemMazeStatue::isDoneMoving(GridItemMazeStatue *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  bVar1 = true;
  if (fVar2 < *(float *)(this + 0x1f0)) {
    fVar2 = (float)PVZ_EOT();
    bVar1 = *(float *)(this + 0x1ec) == fVar2;
  }
  return bVar1;
}


/* GridItemMazeStatue::MoveOverTimeTo(float) */

void __thiscall GridItemMazeStatue::MoveOverTimeTo(GridItemMazeStatue *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1ec) = fVar1;
  *(float *)(this + 0x1f0) = fVar1 + *(float *)(this + 0x20c);
  *(float *)(this + 0x1f8) = param_1 + *(float *)(this + 500);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::getNextBoardPosition() */

void __thiscall GridItemMazeStatue::getNextBoardPosition(GridItemMazeStatue *this)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  uVar5 = *(undefined4 *)(this + 0x1ec);
  uVar4 = *(undefined4 *)(this + 0x1f0);
  uVar1 = PVZ_T();
  fVar2 = CurveLerp<float>(uVar5,uVar4,uVar1,this + 500,this + 0x1f8,1);
  fVar2 = (float)Sexy::SexyMath::DegToRad(fVar2);
  fVar7 = *(float *)(this + 0x204);
  dVar3 = cos((double)fVar2);
  fVar6 = *(float *)(this + 0x1fc);
  local_10 = (float)((double)*(float *)(this + 0x200) + (double)fVar6 * dVar3);
  dVar3 = sin((double)fVar2);
  fStack_c = (float)((double)fVar7 + (double)fVar6 * dVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,fStack_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::onPostLoad() */

void __thiscall GridItemMazeStatue::onPostLoad(GridItemMazeStatue *this)

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
    Delegate4<GridItemMazeStatue,void(GridItemMazeStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::registerForEvents() */

void __thiscall GridItemMazeStatue::registerForEvents(GridItemMazeStatue *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<GridItemMazeStatue,bool(GridItemMazeStatue::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchCancelEvent);
  Sexy::Delegate0::Delegate0<GridItemMazeStatue,void(GridItemMazeStatue::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,1,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStatueReveal);
  Sexy::Delegate0::Delegate0<GridItemMazeStatue,void(GridItemMazeStatue::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyStatueReveal,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStatueEnable);
  local_d0 = local_80;
  uStack_c8 = uStack_78;
  local_c0 = local_70;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<GridItemMazeStatue,void(GridItemMazeStatue::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyStatueEnable,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStatueBreak);
  Sexy::Delegate0::Delegate0<GridItemMazeStatue,void(GridItemMazeStatue::*)()>
            (aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyStatueBreak,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::setState(MazeStatueState) */

void __thiscall GridItemMazeStatue::setState(GridItemMazeStatue *this,int param_2)

{
  GridItemMazeStatue GVar1;
  GridItemMazeStatueAnimRig *extraout_x0;
  GridItemMazeStatueAnimRig *extraout_x0_00;
  float fVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1e8) == param_2) goto switchD_03d1cf38_default;
  *(int *)(this + 0x1e8) = param_2;
  switch(param_2) {
  case 1:
  case 2:
    if (param_2 == 1) {
      fVar2 = 90.0;
    }
    else {
      fVar2 = -90.0;
    }
    MoveOverTimeTo(this,fVar2);
    goto switchD_03d1cf38_default;
  case 3:
    if (this[0x222] == (GridItemMazeStatue)0x0) goto switchD_03d1cf38_default;
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemMazeStatueAnimRig::PlayReveal(extraout_x0,aRStack_50);
    break;
  case 4:
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    GVar1 = this[0x222];
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimEnded");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemMazeStatueAnimRig::PlayBreak(extraout_x0_00,GVar1,aRStack_50);
    break;
  default:
    goto switchD_03d1cf38_default;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_03d1cf38_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::onGridItemInitialize() */

void __thiscall GridItemMazeStatue::onGridItemInitialize(GridItemMazeStatue *this)

{
  GridItemMazeStatueProps *pGVar1;
  TimeChallengeEndLevelUI *this_00;
  GridItemMazeStatueAnimRig *this_01;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemMazeStatueProps>();
  uVar2 = *(undefined4 *)(pGVar1 + 0x10);
  FUN_03d1ae70(uVar2,this + 300);
  FUN_03d1ae78(uVar2,this + 0x128);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f8);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemMazeStatue,void(GridItemMazeStatue::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  nop();
  GridItemMazeStatueAnimRig::PlayIdle(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMazeStatue::BreakStatue() */

void __thiscall GridItemMazeStatue::BreakStatue(GridItemMazeStatue *this)

{
  setState(this,4);
  return;
}


/* GridItemMazeStatue::onNotifyStatueBreak() */

void __thiscall GridItemMazeStatue::onNotifyStatueBreak(GridItemMazeStatue *this)

{
  setState(this,4);
  return;
}


/* GridItemMazeStatue::RevealStatue() */

void __thiscall GridItemMazeStatue::RevealStatue(GridItemMazeStatue *this)

{
  setState(this,3);
  return;
}


/* GridItemMazeStatue::onNotifyStatueReveal() */

void __thiscall GridItemMazeStatue::onNotifyStatueReveal(GridItemMazeStatue *this)

{
  if (this[0x222] == (GridItemMazeStatue)0x0) {
    return;
  }
  RevealStatue(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMazeStatue::updatePosition() */

void GridItemMazeStatue::updatePosition(void)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  long lVar2;
  GridItemMazeStatueProps *pGVar3;
  AttachedEffect *this;
  StandaloneEffect *this_00;
  float fVar4;
  float fVar5;
  float in_s1;
  float fVar6;
  undefined4 in_s2;
  float local_38;
  float local_34;
  float local_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  cVar1 = (**(code **)(*(long *)in_x0 + 0x2f0))();
  if (cVar1 == '\0') {
    fVar4 = (float)(**(code **)(*(long *)in_x0 + 0x2e8))();
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(in_x0);
    local_20 = *(undefined4 *)(lVar2 + 8);
    local_28 = fVar4;
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar6 = *(float *)(in_x0 + 0x1c);
    fVar5 = (float)FUN_03d1aebc(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
    in_s2 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar4 - fVar5,in_s1 - fVar6,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)local_18);
    Sexy::FastCurve::SetOutRange((FastCurve *)local_18,local_38,local_34);
    FUN_03d1ae80(local_18[0],in_x0 + 0x1a8);
    cVar1 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)in_x0);
  }
  else {
    SetFinalPosition((GridItemMazeStatue *)in_x0);
    setState();
    cVar1 = GridItemAnimation::HasLinkedAnimRig((GridItemAnimation *)in_x0);
  }
  if (cVar1 != '\0') {
    pGVar3 = GridItem::GetProps<GridItemMazeStatueProps>();
    this = (AttachedEffect *)GridItemAnimation::GetLinkedEffect((GridItemAnimation *)in_x0);
    if (this != (AttachedEffect *)0x0) {
      this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
      local_18[0] = Sexy::SexyVector3::operator+
                              ((SexyVector3 *)(pGVar3 + 0xc0),(SexyVector3 *)&local_38);
      local_10 = in_s2;
      StandaloneEffect::SetAttachmentOffset(this_00,(SexyVector3 *)local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemMazeStatue::PrepareMoving(Sexy::SexyVector3 const&, float, float, float, MazeStatueState)
    */

void __thiscall
GridItemMazeStatue::PrepareMoving
          (undefined4 param_2,undefined4 param_3,undefined4 param_4,GridItemMazeStatue *this,
          SexyVector3 *param_1,undefined4 param_6)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x200),param_1);
  *(undefined4 *)(this + 500) = param_2;
  *(undefined4 *)(this + 0x1fc) = param_3;
  *(undefined4 *)(this + 0x20c) = param_4;
  setState(this,param_6);
  return;
}


/* GridItemMazeStatue::onDestroy() */

void __thiscall GridItemMazeStatue::onDestroy(GridItemMazeStatue *this)

{
  GridItem::onDestroy((GridItem *)this);
  MessageRouter::Post<GridItemMazeStatue*,GridItemMazeStatue*>
            ((MessageRouter *)gMessageRouter,Message::NotifyStatueDestroy,this);
  return;
}


/* GridItemMazeStatue::onTouchEvent(Sexy::Touch const&) */

char __thiscall GridItemMazeStatue::onTouchEvent(GridItemMazeStatue *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  GridItemMazeStatue GVar3;
  char cVar4;
  StatueMazeModule *this_00;
  TRect<int> *pTVar5;
  Board *this_01;
  float fVar6;
  float fVar7;
  
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  cVar2 = Board::IsPlaying(this_01);
  this_00 = (StatueMazeModule *)FUN_03d1ce9c(*(undefined8 *)(this_01 + 0xad8));
  if (this_00 == (StatueMazeModule *)0x0) {
    GVar3 = (GridItemMazeStatue)0x0;
  }
  else {
    GVar3 = (GridItemMazeStatue)StatueMazeModule::DisabledPlay(this_00);
  }
  if (((cVar2 == '\0') || (cVar4 = IsDisableForTouch(this), cVar4 != '\0')) ||
     ((byte)this[0x221] <= (byte)GVar3)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\0';
    if ((*(long *)(this + 0x218) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
      fVar6 = (float)FUN_03d1b188((float)*(int *)(param_1 + 0x10));
      fVar7 = (float)FUN_03d1b188((float)*(int *)(param_1 + 0x14));
      pTVar5 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
      cVar2 = Sexy::TRect<int>::Contains(pTVar5,(int)fVar6,(int)fVar7);
      if (cVar2 != '\0') {
        *(undefined8 *)(this + 0x218) = *(undefined8 *)param_1;
        this[0x220] = (GridItemMazeStatue)0x1;
        cVar4 = cVar2;
      }
    }
    else if (*(long *)(this + 0x218) == *(long *)param_1) {
      fVar6 = (float)FUN_03d1b188((float)*(int *)(param_1 + 0x10));
      fVar7 = (float)FUN_03d1b188((float)*(int *)(param_1 + 0x14));
      pTVar5 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
      GVar3 = (GridItemMazeStatue)Sexy::TRect<int>::Contains(pTVar5,(int)fVar6,(int)fVar7);
      iVar1 = *(int *)(param_1 + 0x30);
      this[0x220] = GVar3;
      if (iVar1 == 3) {
        if (GVar3 != (GridItemMazeStatue)0x0) {
          MessageRouter::Post<float,float,float,float>
                    ((_func_void_float_float *)gMessageRouter,fVar6,fVar7);
          BreakStatue(this);
          return cVar2;
        }
      }
      else if (iVar1 != 4) {
        return '\0';
      }
      *(undefined8 *)(this + 0x218) = 0;
      this[0x220] = (GridItemMazeStatue)0x0;
      cVar4 = cVar2;
    }
  }
  return cVar4;
}

