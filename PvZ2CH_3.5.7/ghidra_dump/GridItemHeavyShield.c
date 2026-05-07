// Class: GridItemHeavyShield


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeavyShield::KillGridItem() */

void __thiscall GridItemHeavyShield::KillGridItem(GridItemHeavyShield *this)

{
  undefined *puVar1;
  long lVar2;
  string asStack_10 [8];
  long lStack_8;
  
  puVar1 = gMessageRouter;
  lStack_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  FUN_05475d88(asStack_10,lVar2 + 8);
  MessageRouter::Broadcast<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::GridItemDestroyed,asStack_10);
  std::string::~string(asStack_10);
  MessageRouter::Broadcast<GridItem*,GridItem*>
            ((MessageRouter *)gMessageRouter,Message::GridItemDestroyedEntity,(GridItem *)this);
  lVar2 = *(long *)this;
  if (*(code **)(lVar2 + 0x280) != GridItem::onKilled) {
    (**(code **)(lVar2 + 0x280))(this);
    lVar2 = *(long *)this;
  }
  (**(code **)(lVar2 + 0x48))(this);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeavyShield::onGridItemInitialize() */

void __thiscall GridItemHeavyShield::onGridItemInitialize(GridItemHeavyShield *this)

{
  this[0x1e0] = (GridItemHeavyShield)0x0;
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  GridItemGravestone::setState((GridItemGravestone *)this,3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeavyShield::CalcDamageState() */

void __thiscall GridItemHeavyShield::CalcDamageState(GridItemHeavyShield *this)

{
  undefined4 uVar1;
  RtObject *this_00;
  GravestoneAnimRig *pGVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = GridItemGravestone::calcDamageState((GridItemGravestone *)this);
  *(undefined4 *)(this + 0x1ac) = uVar1;
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar2 = Sexy::RtObject::Cast<GravestoneAnimRig>(this_00);
  (**(code **)(*(long *)pGVar2 + 0x110))(pGVar2,*(undefined4 *)(this + 0x1ac),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeavyShield::onAnimStoppedCallback(std::string const&) */

void GridItemHeavyShield::onAnimStoppedCallback(string *param_1)

{
  return;
}


/* GridItemHeavyShield::GetCantPlantReason() const */

undefined8 GridItemHeavyShield::GetCantPlantReason(void)

{
  return 0x6e;
}


/* GridItemHeavyShield::GridItemHeavyShield() */

void __thiscall GridItemHeavyShield::GridItemHeavyShield(GridItemHeavyShield *this)

{
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  *(undefined ***)this = &PTR_GetClass_069f8c90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeavyShield_069f8f50;
  return;
}


/* GridItemHeavyShield::StaticNew() */

GridItemHeavyShield * GridItemHeavyShield::StaticNew(void)

{
  GridItemHeavyShield *this;
  
  this = ::operator_new(0x1e8);
  GridItemHeavyShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeavyShield::StaticClassInit() */

void GridItemHeavyShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeavyShield");
    (*pcVar2)(plVar1,asStack_10,FUN_04ed3d94,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeavyShield::StaticGetClass() */

long * GridItemHeavyShield::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeavyShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeavyShield::GetClass() const */

long * GridItemHeavyShield::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeavyShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeavyShield::~GridItemHeavyShield() */

void __thiscall GridItemHeavyShield::~GridItemHeavyShield(GridItemHeavyShield *this)

{
  *(undefined ***)this = &PTR_GetClass_069f8c90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeavyShield_069f8f50;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemHeavyShield::~GridItemHeavyShield() */

void __thiscall GridItemHeavyShield::~GridItemHeavyShield(GridItemHeavyShield *this)

{
  ~GridItemHeavyShield(this + -0x10);
  return;
}


/* GridItemHeavyShield::~GridItemHeavyShield() */

void __thiscall GridItemHeavyShield::~GridItemHeavyShield(GridItemHeavyShield *this)

{
  ~GridItemHeavyShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeavyShield::~GridItemHeavyShield() */

void __thiscall GridItemHeavyShield::~GridItemHeavyShield(GridItemHeavyShield *this)

{
  ~GridItemHeavyShield(this + -0x10);
  return;
}

