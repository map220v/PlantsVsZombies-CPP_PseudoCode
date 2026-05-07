// Class: GridItemPowerTile


/* GridItemPowerTile::IsDisabled() const */

void __thiscall GridItemPowerTile::IsDisabled(GridItemPowerTile *this)

{
  FUN_03d52f14(*(undefined4 *)(this + 0x28));
  return;
}


/* GridItemPowerTile::~GridItemPowerTile() */

void __thiscall GridItemPowerTile::~GridItemPowerTile(GridItemPowerTile *this)

{
  *(undefined ***)this = &PTR_GetClass_06782990;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPowerTile_06782c48;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemPowerTile::~GridItemPowerTile() */

void __thiscall GridItemPowerTile::~GridItemPowerTile(GridItemPowerTile *this)

{
  ~GridItemPowerTile(this + -0x10);
  return;
}


/* GridItemPowerTile::~GridItemPowerTile() */

void __thiscall GridItemPowerTile::~GridItemPowerTile(GridItemPowerTile *this)

{
  ~GridItemPowerTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemPowerTile::~GridItemPowerTile() */

void __thiscall GridItemPowerTile::~GridItemPowerTile(GridItemPowerTile *this)

{
  ~GridItemPowerTile(this + -0x10);
  return;
}


/* GridItemPowerTile::CalcRenderOrder() const */

void __thiscall GridItemPowerTile::CalcRenderOrder(GridItemPowerTile *this)

{
  int iVar1;
  
  iVar1 = FUN_03e0c0e8(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemPowerTile::CalcRenderOrder() const */

void __thiscall GridItemPowerTile::CalcRenderOrder(GridItemPowerTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemPowerTile::GridItemPowerTile() */

void __thiscall GridItemPowerTile::GridItemPowerTile(GridItemPowerTile *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  this[0x1a5] = (GridItemPowerTile)0x0;
  *(undefined ***)this = &PTR_GetClass_06782990;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPowerTile_06782c48;
  return;
}


/* GridItemPowerTile::StaticNew() */

GridItemPowerTile * GridItemPowerTile::StaticNew(void)

{
  GridItemPowerTile *this;
  
  this = ::operator_new(0x1a8);
  GridItemPowerTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::StaticClassInit() */

void GridItemPowerTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPowerTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e0c32c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPowerTile::StaticGetClass() */

long * GridItemPowerTile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPowerTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPowerTile::GetClass() const */

long * GridItemPowerTile::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPowerTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::onRegionChanged(BoardRegion*) */

void GridItemPowerTile::onRegionChanged(BoardRegion *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  Board *this;
  Point aPStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = *(Board **)(gLawnApp + 0x9f0);
  pcVar2 = *(code **)(*(long *)param_1 + 0x80);
  GridItem::GetGridLocation();
  uVar1 = Board::IsShallowWater(this,aPStack_10);
  (*pcVar2)(param_1,uVar1);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::SetIsOccupied(bool) */

void __thiscall GridItemPowerTile::SetIsOccupied(GridItemPowerTile *this,bool param_1)

{
  bool bVar1;
  RtObject *this_00;
  EffectAnimRig_LinkedTile *pEVar2;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pEVar2 = Sexy::RtObject::Cast<EffectAnimRig_LinkedTile>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (pEVar2 != (EffectAnimRig_LinkedTile *)0x0) {
      FUN_03e0c110(pEVar2 + 0x20d,param_1);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::OnPropagatedTo() */

void GridItemPowerTile::OnPropagatedTo(void)

{
  bool bVar1;
  RtObject *this;
  EffectAnimRig_LinkedTile *this_00;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_00 = Sexy::RtObject::Cast<EffectAnimRig_LinkedTile>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (this_00 != (EffectAnimRig_LinkedTile *)0x0) {
      EffectAnimRig_LinkedTile::PlayPlantEnteredTile(this_00);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::OnOccupantPlantfooded() */

void __thiscall GridItemPowerTile::OnOccupantPlantfooded(GridItemPowerTile *this)

{
  bool bVar1;
  RtObject *this_00;
  EffectAnimRig_LinkedTile *this_01;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    this_01 = Sexy::RtObject::Cast<EffectAnimRig_LinkedTile>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (this_01 != (EffectAnimRig_LinkedTile *)0x0) {
      EffectAnimRig_LinkedTile::PlayActivation(this_01);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  this[0x1a5] = (GridItemPowerTile)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::onGridItemInitialize() */

void __thiscall GridItemPowerTile::onGridItemInitialize(GridItemPowerTile *this)

{
  RtObject *this_00;
  EffectAnimRig_LinkedTile *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this[0x1a5] = (GridItemPowerTile)0x0;
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<EffectAnimRig_LinkedTile>(this_00);
  EffectAnimRig_LinkedTile::PlayIdle(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  MessageRouter::Broadcast<GridItem*,GridItemPowerTile*>
            ((MessageRouter *)gMessageRouter,Message::PowerTilePlaced,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::onPlaceOnBoard() */

void __thiscall GridItemPowerTile::onPlaceOnBoard(GridItemPowerTile *this)

{
  long lVar1;
  long lVar2;
  Board *this_00;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar1 = Board::GetPlantAt(this_00,local_18,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar2 = FUN_03e0cb30(local_18,local_14);
  SetIsOccupied(this,lVar2 != 0 || lVar1 != 0);
  GridItemGoldTile::updateVisibility((GridItemGoldTile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPowerTile::GetTileClass() const */

undefined4 GridItemPowerTile::GetTileClass(void)

{
  GridItemPowerTileProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemPowerTileProps>();
  return *(undefined4 *)(pGVar1 + 0xd0);
}


/* GridItemPowerTile::registerForEvents() */

void __thiscall GridItemPowerTile::registerForEvents(GridItemPowerTile *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRegionChanged);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BoardRegion*,Sexy::CBMemberTranslatorX<GridItemPowerTile,void(GridItemPowerTile::*)(BoardRegion*)>>
            ((MessageRouter *)puVar1,Message::BoardRegionResized,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPowerTile::onUpdate() */

void __thiscall GridItemPowerTile::onUpdate(GridItemPowerTile *this)

{
  bool bVar1;
  char cVar2;
  Plant *this_00;
  RtObject *this_01;
  EffectAnimRig_LinkedTile *this_02;
  Board *this_03;
  int local_20;
  int local_14;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (this[0x1a5] != (GridItemPowerTile)0x0) {
    GridItemAnimation::GetAnimRig();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (bVar1) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      GridItem::GetGridLocation();
      GridItem::GetGridLocation();
      std::string::string((string *)aRStack_10,"");
      this_00 = (Plant *)Board::GetPlantAt(this_03,local_20,local_14,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      if (this_00 != (Plant *)0x0) {
        if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar2 = Plant::IsInPlantFoodState(this_00);
        }
        else {
          cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))();
        }
        if (cVar2 != '\0') goto LAB_03e0d2e0;
      }
      this[0x1a5] = (GridItemPowerTile)0x0;
      GridItemAnimation::GetAnimRig();
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      this_02 = Sexy::RtObject::Cast<EffectAnimRig_LinkedTile>(this_01);
      EffectAnimRig_LinkedTile::PlayIdle(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
LAB_03e0d2e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

