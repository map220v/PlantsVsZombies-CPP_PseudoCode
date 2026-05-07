// Class: GridSquareElectricCurrantFencePiece


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantFencePiece::StaticClassInit() */

void GridSquareElectricCurrantFencePiece::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridSquareElectricCurrantFencePiece");
    (*pcVar2)(plVar1,asStack_10,FUN_03e87c98,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareElectricCurrantFencePiece::StaticGetClass() */

long * GridSquareElectricCurrantFencePiece::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridSquareElectricCurrantFencePiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareElectricCurrantFencePiece::GetClass() const */

long * GridSquareElectricCurrantFencePiece::GetClass(void)

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
  (*pcVar3)(plVar1,"GridSquareElectricCurrantFencePiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantFencePiece::getPamName() */

void GridSquareElectricCurrantFencePiece::getPamName(void)

{
  char cVar1;
  long in_x0;
  char *__s;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  cVar1 = FUN_03e86f6c(*(undefined1 *)(in_x0 + 0xa1));
  if (cVar1 == '\0') {
    if (*(char *)(in_x0 + 0xa2) == '\0') {
      __s = "POPANIM_EFFECTS_ELECTRICCURRANT_GROUNDEFFECT_HORIZONTAL";
    }
    else {
      __s = "POPANIM_EFFECTS_ELECTRICCURRANT_GROUNDEFFECT_PF_HORIZONTAL";
    }
  }
  else if (*(char *)(in_x0 + 0xa2) == '\0') {
    __s = "POPANIM_EFFECTS_ELECTRICCURRANT_GROUNDEFFECT_VERTICAL";
  }
  else {
    __s = "POPANIM_EFFECTS_ELECTRICCURRANT_GROUNDEFFECT_PF_VERTICAL";
  }
  std::string::append(in_x8,__s,(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantFencePiece::getAnimName() */

void GridSquareElectricCurrantFencePiece::getAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0xa3) == '\0') {
    __s = "animation";
  }
  else {
    __s = "level_animation";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece() */

void __thiscall
GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece
          (GridSquareElectricCurrantFencePiece *this)

{
  *(undefined ***)this = &PTR_GetClass_0678f4a0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareElectricCurrantFencePiece_0678f688;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece()
    */

void __thiscall
GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece
          (GridSquareElectricCurrantFencePiece *this)

{
  ~GridSquareElectricCurrantFencePiece(this + -0x10);
  return;
}


/* GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece() */

void __thiscall
GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece
          (GridSquareElectricCurrantFencePiece *this)

{
  ~GridSquareElectricCurrantFencePiece(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece()
    */

void __thiscall
GridSquareElectricCurrantFencePiece::~GridSquareElectricCurrantFencePiece
          (GridSquareElectricCurrantFencePiece *this)

{
  ~GridSquareElectricCurrantFencePiece(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantFencePiece::GridSquareElectricCurrantFencePiece() */

void __thiscall
GridSquareElectricCurrantFencePiece::GridSquareElectricCurrantFencePiece
          (GridSquareElectricCurrantFencePiece *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678f4a0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareElectricCurrantFencePiece_0678f688;
  Sexy::Point::Point((Point *)(this + 0xa4));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb0));
  FUN_03e86f74(this + 0xa1);
  Sexy::Point::Point((Point *)&local_10,-1,-1);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xa4) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareElectricCurrantFencePiece::StaticNew() */

GridSquareElectricCurrantFencePiece * GridSquareElectricCurrantFencePiece::StaticNew(void)

{
  GridSquareElectricCurrantFencePiece *this;
  
  this = ::operator_new(0xb8);
  GridSquareElectricCurrantFencePiece(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantFencePiece::createEffect() */

void GridSquareElectricCurrantFencePiece::createEffect(void)

{
  undefined4 uVar1;
  long in_x0;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  int local_40;
  int local_3c;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Vec3 aVStack_28 [32];
  Point *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(in_x0 + 0xa4),___stack_chk_guard);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_40,(TPoint *)aVStack_28);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)local_40,(float)local_3c,0.0);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  getPamName();
  GetPAMByName(asStack_38);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  getAnimName();
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,aRStack_30,2);
  std::string::~string((string *)aRStack_30);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_28,-1);
  Effect_PopAnim::SetCentered(this,true);
  uVar1 = Board::MakeRenderOrder(0x61cd8,*(undefined4 *)(in_x0 + 0xa8),0);
  FUN_03e86f64(this + 0x1c,uVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantFencePiece::ApplyPlantfood() */

void __thiscall
GridSquareElectricCurrantFencePiece::ApplyPlantfood(GridSquareElectricCurrantFencePiece *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xa2] == (GridSquareElectricCurrantFencePiece)0x0) {
    this_00 = (RtMixedPtrBase *)(this + 0xb0);
    this[0xa2] = (GridSquareElectricCurrantFencePiece)0x1;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar2 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
    createEffect();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantFencePiece::StartEffect(Sexy::Point, bool, bool, bool) */

void __thiscall
GridSquareElectricCurrantFencePiece::StartEffect
          (GridSquareElectricCurrantFencePiece *this,undefined8 *param_2,
          GridSquareElectricCurrantFencePiece param_3,GridSquareElectricCurrantFencePiece param_4,
          GridSquareElectricCurrantFencePiece param_5)

{
  Point *extraout_x1;
  Point *extraout_x1_00;
  Point *pPVar1;
  undefined8 uVar2;
  int local_30;
  int local_2c;
  Vec3 aVStack_28 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  uVar2 = *param_2;
  this[0xa1] = param_5;
  this[0xa2] = param_3;
  local_8 = ___stack_chk_guard;
  this[0xa3] = param_4;
  *(undefined8 *)(this + 0xa4) = uVar2;
  createEffect();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xb0),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pPVar1 = extraout_x1;
  if (this[0xa2] != (GridSquareElectricCurrantFencePiece)0x0) {
    ApplyPlantfood(this);
    pPVar1 = extraout_x1_00;
  }
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0xa4),pPVar1);
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

