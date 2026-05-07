// Class: GridItemChristmasProtect


/* GridItemChristmasProtect::~GridItemChristmasProtect() */

void __thiscall GridItemChristmasProtect::~GridItemChristmasProtect(GridItemChristmasProtect *this)

{
  *(undefined ***)this = &PTR_GetClass_06788690;
  *(undefined ***)(this + 0x10) = &PTR__GridItemChristmasProtect_06788948;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemChristmasProtect::~GridItemChristmasProtect() */

void __thiscall GridItemChristmasProtect::~GridItemChristmasProtect(GridItemChristmasProtect *this)

{
  ~GridItemChristmasProtect(this + -0x10);
  return;
}


/* GridItemChristmasProtect::~GridItemChristmasProtect() */

void __thiscall GridItemChristmasProtect::~GridItemChristmasProtect(GridItemChristmasProtect *this)

{
  ~GridItemChristmasProtect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemChristmasProtect::~GridItemChristmasProtect() */

void __thiscall GridItemChristmasProtect::~GridItemChristmasProtect(GridItemChristmasProtect *this)

{
  ~GridItemChristmasProtect(this + -0x10);
  return;
}


/* GridItemChristmasProtect::CalcRenderOrder() const */

void __thiscall GridItemChristmasProtect::CalcRenderOrder(GridItemChristmasProtect *this)

{
  int iVar1;
  
  iVar1 = FUN_03e2df28(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemChristmasProtect::CalcRenderOrder() const */

void __thiscall GridItemChristmasProtect::CalcRenderOrder(GridItemChristmasProtect *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemChristmasProtect::GridItemChristmasProtect() */

void __thiscall GridItemChristmasProtect::GridItemChristmasProtect(GridItemChristmasProtect *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06788690;
  *(undefined ***)(this + 0x10) = &PTR__GridItemChristmasProtect_06788948;
  return;
}


/* GridItemChristmasProtect::StaticNew() */

GridItemChristmasProtect * GridItemChristmasProtect::StaticNew(void)

{
  GridItemChristmasProtect *this;
  
  this = ::operator_new(0x1b0);
  GridItemChristmasProtect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemChristmasProtect::StaticClassInit() */

void GridItemChristmasProtect::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemChristmasProtect");
    (*pcVar2)(plVar1,asStack_10,FUN_03e2e0f0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemChristmasProtect::StaticGetClass() */

long * GridItemChristmasProtect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemChristmasProtect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemChristmasProtect::GetClass() const */

long * GridItemChristmasProtect::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemChristmasProtect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemChristmasProtect::onTakeDamage(DamageInfo const&) */

void GridItemChristmasProtect::onTakeDamage(DamageInfo *param_1)

{
  long *plVar1;
  char *__s;
  long lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar4 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar4 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (fVar4 <= 0.0) goto LAB_03e2e338;
  lVar2 = *(long *)param_1;
  if (*(code **)(lVar2 + 0x1d8) == GridItem::GetHitpoints) {
    fVar4 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar4 = (float)(**(code **)(lVar2 + 0x1d8))();
    lVar2 = *(long *)param_1;
  }
  if (*(code **)(lVar2 + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)param_1);
    if (fVar4 < fVar5 * 0.33) goto LAB_03e2e384;
LAB_03e2e2f0:
    lVar2 = *(long *)param_1;
    if (*(code **)(lVar2 + 0x1d8) == GridItem::GetHitpoints) {
      fVar4 = (float)GridItem::GetHitpoints((GridItem *)param_1);
    }
    else {
      fVar4 = (float)(**(code **)(lVar2 + 0x1d8))();
      lVar2 = *(long *)param_1;
    }
    if (*(code **)(lVar2 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)param_1);
    }
    else {
      fVar5 = (float)(**(code **)(lVar2 + 0x1e0))();
    }
    if (fVar5 * 0.66 <= fVar4) goto LAB_03e2e338;
    GridItemAnimation::GetAnimRig();
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    __s = "b";
  }
  else {
    fVar5 = (float)(**(code **)(lVar2 + 0x1e0))();
    if (fVar5 * 0.33 <= fVar4) goto LAB_03e2e2f0;
LAB_03e2e384:
    GridItemAnimation::GetAnimRig();
    plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    __s = "a";
  }
  pcVar3 = *(code **)(*plVar1 + 0x78);
  std::string::string(asStack_28,__s);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar3)(plVar1,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
LAB_03e2e338:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemChristmasProtect::onGridItemInitialize() */

void __thiscall GridItemChristmasProtect::onGridItemInitialize(GridItemChristmasProtect *this)

{
  GridItemPropertySheet *pGVar1;
  long *plVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RealObject::JoinTeam((RealObject *)this,1);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemPropertySheet>();
  FUN_03e2df18(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03e2df20(this + 0x128);
  *(undefined4 *)(this + 0x1a8) = 0;
  GridItemAnimation::GetAnimRig();
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  pcVar3 = *(code **)(*plVar2 + 0x78);
  std::string::string(asStack_28,"c");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar3)(plVar2,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemChristmasProtect::TakeStealed() */

void __thiscall GridItemChristmasProtect::TakeStealed(GridItemChristmasProtect *this)

{
  code *pcVar1;
  code *pcVar2;
  float fVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  *(int *)(this + 0x1a8) = *(int *)(this + 0x1a8) + 1;
  pcVar1 = *(code **)(*(long *)this + 0x1e0);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x110);
  if (pcVar1 == GridItem::GetMaxHitpoints) {
    fVar3 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    fVar3 = (float)(*pcVar1)();
  }
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)(fVar3 * 0.33),local_70,local_6c,aDStack_68,aPStack_78,0);
  (*pcVar2)(this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemChristmasProtect::onDestroy() */

void __thiscall GridItemChristmasProtect::onDestroy(GridItemChristmasProtect *this)

{
  GridItem::onDestroy((GridItem *)this);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}

