// Class: GridSquareElectricCurrantGlowPiece


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantGlowPiece::StaticClassInit() */

void GridSquareElectricCurrantGlowPiece::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridSquareElectricCurrantGlowPiece");
    (*pcVar2)(plVar1,asStack_10,FUN_03e87fc4,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridSquareElectricCurrantGlowPiece::StaticGetClass() */

long * GridSquareElectricCurrantGlowPiece::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridSquareElectricCurrantGlowPiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridSquareElectricCurrantGlowPiece::GetClass() const */

long * GridSquareElectricCurrantGlowPiece::GetClass(void)

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
  (*pcVar3)(plVar1,"GridSquareElectricCurrantGlowPiece",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantGlowPiece::getPamName() */

void GridSquareElectricCurrantGlowPiece::getPamName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0xa1) == '\0') {
    __s = "POPANIM_EFFECTS_ELECTRICCURRANT_GROUNDEFFECT_CENTER";
  }
  else {
    __s = "POPANIM_EFFECTS_ELECTRICCURRANT_GROUNDEFFECT_PF_CENTER";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantGlowPiece::getAnimName() */

void GridSquareElectricCurrantGlowPiece::getAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0xa2) == '\0') {
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


/* GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece() */

void __thiscall
GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece
          (GridSquareElectricCurrantGlowPiece *this)

{
  *(undefined ***)this = &PTR_GetClass_0678f6c0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareElectricCurrantGlowPiece_0678f8a8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece() */

void __thiscall
GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece
          (GridSquareElectricCurrantGlowPiece *this)

{
  ~GridSquareElectricCurrantGlowPiece(this + -0x10);
  return;
}


/* GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece() */

void __thiscall
GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece
          (GridSquareElectricCurrantGlowPiece *this)

{
  ~GridSquareElectricCurrantGlowPiece(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece() */

void __thiscall
GridSquareElectricCurrantGlowPiece::~GridSquareElectricCurrantGlowPiece
          (GridSquareElectricCurrantGlowPiece *this)

{
  ~GridSquareElectricCurrantGlowPiece(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantGlowPiece::GridSquareElectricCurrantGlowPiece() */

void __thiscall
GridSquareElectricCurrantGlowPiece::GridSquareElectricCurrantGlowPiece
          (GridSquareElectricCurrantGlowPiece *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678f6c0;
  *(undefined ***)(this + 0x10) = &PTR__GridSquareElectricCurrantGlowPiece_0678f8a8;
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


/* GridSquareElectricCurrantGlowPiece::StaticNew() */

GridSquareElectricCurrantGlowPiece * GridSquareElectricCurrantGlowPiece::StaticNew(void)

{
  GridSquareElectricCurrantGlowPiece *this;
  
  this = ::operator_new(0xb8);
  GridSquareElectricCurrantGlowPiece(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantGlowPiece::createEffect(RealObject*) */

void GridSquareElectricCurrantGlowPiece::createEffect(RealObject *param_1)

{
  undefined4 uVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  RealObject *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  float fVar3;
  float fVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  getPamName();
  GetPAMByName(asStack_18);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  Effect_PopAnim::SetCentered(this,true);
  fVar3 = (float)FUN_03e86f7c(0);
  fVar4 = (float)FUN_03e86f7c(0xc1900000);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_10,fVar3,fVar4);
  StandaloneEffect::SetAttached((StandaloneEffect *)this,in_x1,(SexyVector2 *)aRStack_10,1);
  uVar1 = Board::MakeRenderOrder(0x61c74,*(undefined4 *)(param_1 + 0xa8),0);
  FUN_03e86f64(this + 0x1c,uVar1);
  getAnimName();
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,aRStack_10,0);
  std::string::~string((string *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantGlowPiece::ApplyPlantfood(RealObject*) */

void GridSquareElectricCurrantGlowPiece::ApplyPlantfood(RealObject *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0xa1] == (RealObject)0x0) {
    this = (RtMixedPtrBase *)(param_1 + 0xb0);
    param_1[0xa1] = (RealObject)0x1;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (**(code **)(*plVar2 + 0x48))();
    }
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
    createEffect(param_1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridSquareElectricCurrantGlowPiece::StartEffect(Sexy::Point, bool, bool, RealObject*) */

void GridSquareElectricCurrantGlowPiece::StartEffect
               (RealObject *param_1,undefined8 *param_2,RealObject param_3,RealObject param_4)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar1 = *param_2;
  param_1[0xa1] = param_3;
  param_1[0xa2] = param_4;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(param_1 + 0xa4) = uVar1;
  createEffect(param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0xb0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (param_1[0xa1] != (RealObject)0x0) {
    ApplyPlantfood(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

