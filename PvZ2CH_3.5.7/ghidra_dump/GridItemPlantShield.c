// Class: GridItemPlantShield


/* GridItemPlantShield::CalcRenderOrder() const */

void __thiscall GridItemPlantShield::CalcRenderOrder(GridItemPlantShield *this)

{
  BoardEntity::CalcRenderOrderFromPosition((SexyVector3 *)(this + 0x18));
  return;
}


/* non-virtual thunk to GridItemPlantShield::CalcRenderOrder() const */

void __thiscall GridItemPlantShield::CalcRenderOrder(GridItemPlantShield *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantShield::onDraw(Sexy::Graphics*) */

void __thiscall GridItemPlantShield::onDraw(GridItemPlantShield *this,Graphics *param_1)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0x1d0) = local_10;
  GridItemAnimation::onDraw((GridItemAnimation *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantShield::getRenderOffset() */

void GridItemPlantShield::getRenderOffset(void)

{
  GridItemBreakableTarget *in_x0;
  undefined4 uVar1;
  undefined4 in_s1;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10[0] = GridItemBreakableTarget::getRenderOffset(in_x0);
  uVar1 = Sexy::SexyVector2::operator+((SexyVector2 *)(in_x0 + 0x1d0),(SexyVector2 *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,in_s1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPlantShield::StaticClassInit() */

void GridItemPlantShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPlantShield");
    (*pcVar2)(plVar1,asStack_10,FUN_03e0367c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPlantShield::StaticGetClass() */

long * GridItemPlantShield::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlantShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlantShield::GetClass() const */

long * GridItemPlantShield::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemPlantShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPlantShield::drawShield(Sexy::Graphics*, Sexy::SexyVector2 const&) */

void __thiscall
GridItemPlantShield::drawShield(GridItemPlantShield *this,Graphics *param_1,SexyVector2 *param_2)

{
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)param_2;
  GridItemAnimation::onDraw((GridItemAnimation *)this,param_1);
  return;
}


/* GridItemPlantShield::GridItemPlantShield() */

void __thiscall GridItemPlantShield::GridItemPlantShield(GridItemPlantShield *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06781780;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPlantShield_06781a60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1d0));
  return;
}


/* GridItemPlantShield::StaticNew() */

GridItemPlantShield * GridItemPlantShield::StaticNew(void)

{
  GridItemPlantShield *this;
  
  this = ::operator_new(0x1d8);
  GridItemPlantShield(this);
  return this;
}


/* GridItemPlantShield::~GridItemPlantShield() */

void __thiscall GridItemPlantShield::~GridItemPlantShield(GridItemPlantShield *this)

{
  *(undefined ***)this = &PTR_GetClass_06781780;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPlantShield_06781a60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c8));
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemPlantShield::~GridItemPlantShield() */

void __thiscall GridItemPlantShield::~GridItemPlantShield(GridItemPlantShield *this)

{
  ~GridItemPlantShield(this + -0x10);
  return;
}


/* GridItemPlantShield::~GridItemPlantShield() */

void __thiscall GridItemPlantShield::~GridItemPlantShield(GridItemPlantShield *this)

{
  ~GridItemPlantShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemPlantShield::~GridItemPlantShield() */

void __thiscall GridItemPlantShield::~GridItemPlantShield(GridItemPlantShield *this)

{
  ~GridItemPlantShield(this + -0x10);
  return;
}


/* GridItemPlantShield::SetOwner(Sexy::RtWeakPtr<GameObject>&) */

void __thiscall GridItemPlantShield::SetOwner(GridItemPlantShield *this,RtWeakPtr *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c8),param_1);
  return;
}


/* GridItemPlantShield::IsOwnedBy(Sexy::RtWeakPtr<GameObject>&) */

void __thiscall GridItemPlantShield::IsOwnedBy(GridItemPlantShield *this,RtWeakPtr *param_1)

{
  Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(this + 0x1c8),(RtWeakPtrBase *)param_1);
  return;
}

