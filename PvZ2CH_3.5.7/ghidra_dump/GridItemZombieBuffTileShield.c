// Class: GridItemZombieBuffTileShield


/* GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield() */

void __thiscall
GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield(GridItemZombieBuffTileShield *this)

{
  *(undefined ***)this = &PTR_GetClass_06784310;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBuffTileShield_067845e8;
  GridItemZombieBuffTile::~GridItemZombieBuffTile((GridItemZombieBuffTile *)this);
  return;
}


/* non-virtual thunk to GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield() */

void __thiscall
GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield(GridItemZombieBuffTileShield *this)

{
  ~GridItemZombieBuffTileShield(this + -0x10);
  return;
}


/* GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield() */

void __thiscall
GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield(GridItemZombieBuffTileShield *this)

{
  ~GridItemZombieBuffTileShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield() */

void __thiscall
GridItemZombieBuffTileShield::~GridItemZombieBuffTileShield(GridItemZombieBuffTileShield *this)

{
  ~GridItemZombieBuffTileShield(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileShield::StaticClassInit() */

void GridItemZombieBuffTileShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBuffTileShield");
    (*pcVar2)(plVar1,asStack_10,FUN_03e15b14,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTileShield::StaticGetClass() */

long * GridItemZombieBuffTileShield::StaticGetClass(void)

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
  uVar2 = GridItemZombieBuffTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieBuffTileShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileShield::GetClass() const */

long * GridItemZombieBuffTileShield::GetClass(void)

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
  uVar2 = GridItemZombieBuffTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieBuffTileShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTileShield::GridItemZombieBuffTileShield() */

void __thiscall
GridItemZombieBuffTileShield::GridItemZombieBuffTileShield(GridItemZombieBuffTileShield *this)

{
  GridItemZombieBuffTile::GridItemZombieBuffTile((GridItemZombieBuffTile *)this);
  *(undefined ***)this = &PTR_GetClass_06784310;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBuffTileShield_067845e8;
  return;
}


/* GridItemZombieBuffTileShield::StaticNew() */

GridItemZombieBuffTileShield * GridItemZombieBuffTileShield::StaticNew(void)

{
  GridItemZombieBuffTileShield *this;
  
  this = ::operator_new(0x1b0);
  GridItemZombieBuffTileShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTileShield::doApplyEffect(BoardEntity const*) */

void __thiscall
GridItemZombieBuffTileShield::doApplyEffect(GridItemZombieBuffTileShield *this,BoardEntity *param_1)

{
  long extraout_x0;
  GridItemZombieBuffTileShieldProps *pGVar1;
  BuffShieldSubsystem *pBVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  RtWeakPtr<SpartanBambooMatrixSystem> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (extraout_x0 != 0) {
    ShieldRecord::ShieldRecord((ShieldRecord *)&local_38);
    pGVar1 = GridItem::GetProps<GridItemZombieBuffTileShieldProps>();
    local_38 = *(undefined4 *)(pGVar1 + 0xe4);
    pGVar1 = GridItem::GetProps<GridItemZombieBuffTileShieldProps>();
    local_34 = *(undefined4 *)(pGVar1 + 0xe8);
    pGVar1 = GridItem::GetProps<GridItemZombieBuffTileShieldProps>();
    local_30 = *(undefined4 *)(pGVar1 + 0xec);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(aRStack_28,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    pBVar2 = Board::GetGameSubSystem<BuffShieldSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ZombieRepulseSystem::Item::Item((Item *)aRStack_20,(Item *)&local_38);
    BuffShieldSubsystem::Generate(pBVar2,aRStack_20);
    PVPZoneData::~PVPZoneData((PVPZoneData *)aRStack_20);
    PVPZoneData::~PVPZoneData((PVPZoneData *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

