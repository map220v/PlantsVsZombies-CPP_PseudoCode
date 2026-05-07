// Class: GridSquareAlarmSagittifoliaFencePiece


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareAlarmSagittifoliaFencePiece::getAnimName() */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::getAnimName(GridSquareAlarmSagittifoliaFencePiece *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"animation");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareAlarmSagittifoliaFencePiece::StaticClassInit() */

void GridSquareAlarmSagittifoliaFencePiece::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridSquareAlarmSagittifoliaFencePiece");
    (*pcVar2)(plVar1,asStack_10,FUN_03e892a0,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareAlarmSagittifoliaFencePiece::StaticGetClass() */

long * GridSquareAlarmSagittifoliaFencePiece::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareAlarmSagittifoliaFencePiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareAlarmSagittifoliaFencePiece::GetClass() const */

long * GridSquareAlarmSagittifoliaFencePiece::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"GridSquareAlarmSagittifoliaFencePiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareAlarmSagittifoliaFencePiece::getPamName() */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::getPamName(GridSquareAlarmSagittifoliaFencePiece *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ALARMSAGITTIFOLIA_LINE");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece() */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece
          (GridSquareAlarmSagittifoliaFencePiece *this)

{
  *(undefined ***)this = &PTR_GetClass_0678f8e0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareAlarmSagittifoliaFencePiece_0678fac8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to
   GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece() */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece
          (GridSquareAlarmSagittifoliaFencePiece *this)

{
  ~GridSquareAlarmSagittifoliaFencePiece(this + -0x10);
  return;
}


/* GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece() */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece
          (GridSquareAlarmSagittifoliaFencePiece *this)

{
  ~GridSquareAlarmSagittifoliaFencePiece(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece() */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::~GridSquareAlarmSagittifoliaFencePiece
          (GridSquareAlarmSagittifoliaFencePiece *this)

{
  ~GridSquareAlarmSagittifoliaFencePiece(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareAlarmSagittifoliaFencePiece::GridSquareAlarmSagittifoliaFencePiece() */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::GridSquareAlarmSagittifoliaFencePiece
          (GridSquareAlarmSagittifoliaFencePiece *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678f8e0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareAlarmSagittifoliaFencePiece_0678fac8;
  Sexy::Point::Point((Point *)(this + 0xa4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xa4) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareAlarmSagittifoliaFencePiece::StaticNew() */

GridSquareAlarmSagittifoliaFencePiece * GridSquareAlarmSagittifoliaFencePiece::StaticNew(void)

{
  GridSquareAlarmSagittifoliaFencePiece *this;
  
  this = ::operator_new(0xb8);
  GridSquareAlarmSagittifoliaFencePiece(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareAlarmSagittifoliaFencePiece::createEffect() */

void GridSquareAlarmSagittifoliaFencePiece::createEffect(void)

{
  undefined4 uVar1;
  GridSquareAlarmSagittifoliaFencePiece *in_x0;
  Board *this;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  int local_40;
  int local_3c;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  float local_28 [2];
  undefined4 local_20;
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(in_x0 + 0xa4),___stack_chk_guard);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_40,(TPoint *)local_28);
  EATextSquish::Vec3::Vec3((Vec3 *)local_28,(float)local_40,(float)local_3c,0.0);
  this = *(Board **)(gLawnApp + 0x9f0);
  if (this[0x119] != (Board)0x0) {
    local_20 = Board::calculateRoofOffsetZ(local_28[0]);
    this = *(Board **)(gLawnApp + 0x9f0);
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(this);
  getPamName(in_x0);
  GetPAMByName(asStack_38);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  getAnimName(in_x0);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,aRStack_30,2);
  std::string::~string((string *)aRStack_30);
  (**(code **)(*(long *)this_00 + 0xb8))(0x3f8ccccd,0x3fa66666,this_00);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)local_28,-1);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(this_00,0.57,0.63);
  uVar1 = Board::MakeRenderOrder(0x61cd8,*(undefined4 *)(in_x0 + 0xa8),0);
  FUN_03e882d0(this_00 + 0x1c,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareAlarmSagittifoliaFencePiece::StartEffect(Sexy::Point) */

void __thiscall
GridSquareAlarmSagittifoliaFencePiece::StartEffect
          (GridSquareAlarmSagittifoliaFencePiece *this,undefined8 *param_2)

{
  Point *extraout_x1;
  int local_30;
  int local_2c;
  Vec3 aVStack_28 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0xa4) = *param_2;
  local_8 = ___stack_chk_guard;
  createEffect();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xa4),extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_30,(TPoint *)aVStack_28);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)local_30,(float)local_2c,0.0);
  BoardEntity::PlaceOnBoard((SexyVector3 *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

