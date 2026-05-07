// Class: GridItemRenaiTile


/* GridItemRenaiTile::CalcRenderOrder() const */

void __thiscall GridItemRenaiTile::CalcRenderOrder(GridItemRenaiTile *this)

{
  int iVar1;
  
  iVar1 = FUN_03d0de78(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemRenaiTile::CalcRenderOrder() const */

void __thiscall GridItemRenaiTile::CalcRenderOrder(GridItemRenaiTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTile::StaticClassInit() */

void GridItemRenaiTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRenaiTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03d0eb20,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRenaiTile::StaticGetClass() */

long * GridItemRenaiTile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiTile::GetClass() const */

long * GridItemRenaiTile::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRenaiTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRenaiTile::ContainPushableEntity(BoardEntity*) */

bool __thiscall
GridItemRenaiTile::ContainPushableEntity(GridItemRenaiTile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = BoardEntity::CalcColumnPosition(param_1);
  iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  return iVar4 == iVar2 && iVar3 == iVar1;
}


/* GridItemRenaiTile::IsOccupied() */

bool __thiscall GridItemRenaiTile::IsOccupied(GridItemRenaiTile *this)

{
  return *(int *)(this + 0x1a8) == 4;
}


/* GridItemRenaiTile::GetCantPlantReason() const */

undefined8 GridItemRenaiTile::GetCantPlantReason(void)

{
  return 0x62;
}


/* GridItemRenaiTile::~GridItemRenaiTile() */

void __thiscall GridItemRenaiTile::~GridItemRenaiTile(GridItemRenaiTile *this)

{
  *(undefined ***)this = &PTR_GetClass_06763bb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiTile_06763e68;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemRenaiTile::~GridItemRenaiTile() */

void __thiscall GridItemRenaiTile::~GridItemRenaiTile(GridItemRenaiTile *this)

{
  ~GridItemRenaiTile(this + -0x10);
  return;
}


/* GridItemRenaiTile::~GridItemRenaiTile() */

void __thiscall GridItemRenaiTile::~GridItemRenaiTile(GridItemRenaiTile *this)

{
  ~GridItemRenaiTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRenaiTile::~GridItemRenaiTile() */

void __thiscall GridItemRenaiTile::~GridItemRenaiTile(GridItemRenaiTile *this)

{
  ~GridItemRenaiTile(this + -0x10);
  return;
}


/* GridItemRenaiTile::GridItemRenaiTile() */

void __thiscall GridItemRenaiTile::GridItemRenaiTile(GridItemRenaiTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06763bb0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRenaiTile_06763e68;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  this[0x1b8] = (GridItemRenaiTile)0x0;
  return;
}


/* GridItemRenaiTile::StaticNew() */

GridItemRenaiTile * GridItemRenaiTile::StaticNew(void)

{
  GridItemRenaiTile *this;
  
  this = ::operator_new(0x1c0);
  GridItemRenaiTile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTile::onNotifyPlantfoodRelease(Plant*) */

void __thiscall GridItemRenaiTile::onNotifyPlantfoodRelease(GridItemRenaiTile *this,Plant *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Plant *)0x0) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x1b8))(param_1), cVar1 != '\0')) &&
     (cVar1 = ContainPushableEntity(this,(BoardEntity *)param_1), cVar1 != '\0')) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    GridItemSunSeed::setBindZombie((GridItemSunSeed *)this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTile::setState(RenaiTileState) */

void __thiscall GridItemRenaiTile::setState(GridItemRenaiTile *this,int param_2)

{
  GridItemAnimRig_BesiegeGuide *this_00;
  undefined4 uVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto switchD_03d0e99c_default;
  *(int *)(this + 0x1a8) = param_2;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  switch(param_2) {
  case 1:
    GridItemAnimRig_BesiegeGuide::PlayIdle(this_00);
    break;
  case 2:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemRenaiTileAnimRig::PlayTilePushStart((GridItemRenaiTileAnimRig *)this_00,aRStack_50);
    goto LAB_03d0e9fc;
  case 3:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemRenaiTileAnimRig::PlayTilePullStart((GridItemRenaiTileAnimRig *)this_00,aRStack_50);
LAB_03d0e9fc:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    break;
  case 4:
    GridItemRenaiTileAnimRig::PlayTilePushed((GridItemRenaiTileAnimRig *)this_00);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyRenaiTileState,true);
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x1ac) = uVar1;
  }
switchD_03d0e99c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemRenaiTile::onAnimDone(std::string const&) */

void GridItemRenaiTile::onAnimDone(string *param_1)

{
  if (*(int *)(param_1 + 0x1a8) == 2) {
    setState((GridItemRenaiTile *)param_1,4);
    return;
  }
  if (*(int *)(param_1 + 0x1a8) != 3) {
    return;
  }
  setState((GridItemRenaiTile *)param_1,1);
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::NotifyRenaiTileState,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRenaiTile::findTargets() */

void __thiscall GridItemRenaiTile::findTargets(GridItemRenaiTile *this)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  GridItemRenaiTileProps *pGVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  GridItem *pGVar9;
  Zombie *this_00;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
  if ((!bVar1) ||
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1b0)), cVar2 == '\0')) {
    uVar10 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    BoardEntity::CalcGridPosition();
    uVar4 = operator|(2,4);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
               local_38,local_34);
    pGVar5 = GridItem::GetProps<GridItemRenaiTileProps>();
    Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(pGVar5 + 0xd4));
    uVar11 = local_20;
    local_30 = (int)((float)local_30 + *(float *)(this + 0x18));
    local_2c = (int)((float)local_2c + *(float *)(this + 0x1c));
    lVar6 = FUN_03d0deb0(local_20,local_18);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_03d0debc(uVar11,uVar10);
        cVar2 = (**(code **)(*(long *)*puVar7 + 0x1b8))((long *)*puVar7);
        if (cVar2 != '\0') {
          puVar7 = (undefined8 *)FUN_03d0debc(local_20,uVar10);
          pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
          if (pGVar9 != (GridItem *)0x0) goto LAB_03d0f548;
          FUN_03d0debc(local_20,uVar10);
          nop();
          cVar3 = (**(code **)(*(long *)this_00 + 0x328))();
          if ((cVar3 == '\0') && (cVar3 = Zombie::IsOnGround(this_00), cVar3 != '\0'))
          goto LAB_03d0f548;
        }
        uVar11 = local_20;
        uVar10 = uVar10 + 1;
        uVar8 = FUN_03d0deb0(local_20,local_18);
      } while (uVar10 < uVar8);
    }
    cVar2 = '\0';
LAB_03d0f548:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* GridItemRenaiTile::getRenaiTileDirection() const */

undefined4 GridItemRenaiTile::getRenaiTileDirection(void)

{
  GridItemRenaiTileProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemRenaiTileProps>();
  return *(undefined4 *)(pGVar1 + 0xd0);
}


/* GridItemRenaiTile::IsLeftTile() */

bool GridItemRenaiTile::IsLeftTile(void)

{
  int iVar1;
  
  iVar1 = getRenaiTileDirection();
  return iVar1 == 0;
}


/* GridItemRenaiTile::registerForEvents() */

void __thiscall GridItemRenaiTile::registerForEvents(GridItemRenaiTile *this)

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
            ((ReceivedDataCallback *)this,onNotifyPlantfoodRelease);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemRenaiTile,void(GridItemRenaiTile::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::NotifyPlantfoodRelease,&local_40);
  return;
}


/* GridItemRenaiTile::onUpdate() */

void __thiscall GridItemRenaiTile::onUpdate(GridItemRenaiTile *this)

{
  char cVar1;
  GridItemRenaiTileProps *pGVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if ((*(int *)(this + 0x1a8) != 0) && (nop(), 1 < *(int *)(this + 0x1a8) - 2U)) {
    cVar1 = findTargets(this);
    if (cVar1 == '\0') {
      if (*(int *)(this + 0x1a8) == 4) {
        fVar3 = (float)PVZ_T();
        fVar5 = *(float *)(this + 0x1ac);
        pGVar2 = GridItem::GetProps<GridItemRenaiTileProps>();
        if (*(float *)(pGVar2 + 0xe4) < fVar3 - fVar5) {
          uVar4 = PVZ_EOT();
          *(undefined4 *)(this + 0x1ac) = uVar4;
          setState(this,3);
          return;
        }
      }
    }
    else if (*(int *)(this + 0x1a8) == 1) {
      setState(this,2);
      return;
    }
  }
  return;
}

