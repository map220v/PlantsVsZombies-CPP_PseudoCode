// Class: PowerupVaseBreakerMove


/* PowerupVaseBreakerMove::ShouldHighlightAllVases() */

byte __thiscall PowerupVaseBreakerMove::ShouldHighlightAllVases(PowerupVaseBreakerMove *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x108));
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* PowerupVaseBreakerMove::StaticGetClass() */

long * PowerupVaseBreakerMove::StaticGetClass(void)

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
  uVar2 = PowerupTouchBased::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupVaseBreakerMove",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerMove::GetClass() const */

long * PowerupVaseBreakerMove::GetClass(void)

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
  uVar2 = PowerupTouchBased::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupVaseBreakerMove",uVar2,StaticNew);
  return sClass;
}


/* PowerupVaseBreakerMove::PowerupVaseBreakerMove() */

void __thiscall PowerupVaseBreakerMove::PowerupVaseBreakerMove(PowerupVaseBreakerMove *this)

{
  PowerupTouchBased::PowerupTouchBased((PowerupTouchBased *)this);
  *(undefined ***)this = &PTR_GetClass_069170a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  this[0x118] = (PowerupVaseBreakerMove)0x0;
  this[0x119] = (PowerupVaseBreakerMove)0x0;
  return;
}


/* PowerupVaseBreakerMove::StaticNew() */

PowerupVaseBreakerMove * PowerupVaseBreakerMove::StaticNew(void)

{
  PowerupVaseBreakerMove *this;
  
  this = ::operator_new(0x120);
  PowerupVaseBreakerMove(this);
  return this;
}


/* PowerupVaseBreakerMove::~PowerupVaseBreakerMove() */

void __thiscall PowerupVaseBreakerMove::~PowerupVaseBreakerMove(PowerupVaseBreakerMove *this)

{
  *(undefined ***)this = &PTR_GetClass_069170a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  PowerupTouchBased::~PowerupTouchBased((PowerupTouchBased *)this);
  return;
}


/* PowerupVaseBreakerMove::~PowerupVaseBreakerMove() */

void __thiscall PowerupVaseBreakerMove::~PowerupVaseBreakerMove(PowerupVaseBreakerMove *this)

{
  ~PowerupVaseBreakerMove(this);
  AK::FreeHook(this);
  return;
}


/* PowerupVaseBreakerMove::clearSelection() */

void __thiscall PowerupVaseBreakerMove::clearSelection(PowerupVaseBreakerMove *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  GridItemVase *this_01;
  
  this_00 = (RtWeakPtr *)(this + 0x108);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  this_01 = (GridItemVase *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItemVase::SetSelectedForMove(this_01,false);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* PowerupVaseBreakerMove::onTouchCanceled() */

void __thiscall PowerupVaseBreakerMove::onTouchCanceled(PowerupVaseBreakerMove *this)

{
  clearSelection(this);
  this[0x118] = (PowerupVaseBreakerMove)0x0;
  this[0x119] = (PowerupVaseBreakerMove)0x0;
  return;
}


/* PowerupVaseBreakerMove::queueSelectedVase() */

void __thiscall PowerupVaseBreakerMove::queueSelectedVase(PowerupVaseBreakerMove *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  
  this_00 = (RtWeakPtr *)(this + 0x108);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),this_00);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* PowerupVaseBreakerMove::selectQueuedVase() */

void __thiscall PowerupVaseBreakerMove::selectQueuedVase(PowerupVaseBreakerMove *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  
  this_00 = (RtWeakPtr *)(this + 0x110);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x108),this_00);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* PowerupVaseBreakerMove::clearQueuedVase() */

void __thiscall PowerupVaseBreakerMove::clearQueuedVase(PowerupVaseBreakerMove *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  GridItemVase *this_01;
  
  this_00 = (RtWeakPtr *)(this + 0x110);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  this_01 = (GridItemVase *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GridItemVase::SetSelectedForMove(this_01,false);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  return;
}


/* PowerupVaseBreakerMove::onExitState_Selected(PowerupState) */

void __thiscall PowerupVaseBreakerMove::onExitState_Selected(PowerupVaseBreakerMove *this)

{
  nop();
  clearSelection(this);
  clearQueuedVase(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerMove::getFirstVaseAt(Sexy::Point const&) const */

void __thiscall PowerupVaseBreakerMove::getFirstVaseAt(PowerupVaseBreakerMove *this,Point *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  GridItemVase *pGVar5;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Board::GetGridItemsAt
            (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),(vector *)&local_20
            );
  Sexy::Point::Point(aPStack_28);
  uVar4 = 0;
  do {
    uVar1 = local_20;
    uVar3 = FUN_0496ef04(local_20,local_18);
    if (uVar3 <= uVar4) {
      pGVar5 = (GridItemVase *)0x0;
      break;
    }
    puVar2 = (undefined8 *)FUN_0496ef10(uVar1,uVar4);
    pGVar5 = Sexy::RtObject::Cast<GridItemVase>((RtObject *)*puVar2);
    uVar4 = uVar4 + 1;
  } while (pGVar5 == (GridItemVase *)0x0);
  std::vector<GridItem*,std::allocator<GridItem*>>::~vector
            ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pGVar5);
  }
  return;
}


/* PowerupVaseBreakerMove::onEnterState_Activated(PowerupState) */

void PowerupVaseBreakerMove::onEnterState_Activated(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_MiniGame_VaseBreak_MoveRelease");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerMove::selectVase(GridItemVase*) */

void __thiscall
PowerupVaseBreakerMove::selectVase(PowerupVaseBreakerMove *this,GridItemVase *param_1)

{
  char *pcVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clearSelection(this);
  if (param_1 != (GridItemVase *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x108),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    GridItemVase::SetSelectedForMove(param_1,true);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_MiniGame_VaseBreak_MovePress");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerMove::onTouchBegin(Sexy::Touch const&) */

void __thiscall PowerupVaseBreakerMove::onTouchBegin(PowerupVaseBreakerMove *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BoardTransforms *this_00;
  GridItemVase *this_01;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if (cVar1 == '\0') {
    Sexy::Point::Point((Point *)&local_20,(TPoint *)(param_1 + 0x10));
    iVar3 = FUN_0496ef74(local_20);
    iVar4 = FUN_0496ef74(local_1c);
    this_00 = (BoardTransforms *)
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar3,(float)iVar4);
    BoardTransforms::BoardSpaceToGrid(this_00,local_18,local_14);
    this_01 = (GridItemVase *)getFirstVaseAt(this,aPStack_10);
    if ((this_01 != (GridItemVase *)0x0) &&
       (cVar2 = GridItemVase::IsBreaking(this_01), cVar2 == '\0')) {
      cVar1 = '\x01';
      selectVase(this,this_01);
    }
  }
  else {
    selectQueuedVase(this);
    this[0x119] = (PowerupVaseBreakerMove)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerMove::canMoveVaseTo(Sexy::Point const&) */

void __thiscall PowerupVaseBreakerMove::canMoveVaseTo(PowerupVaseBreakerMove *this,Point *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long extraout_x0;
  long lVar5;
  Board *this_00;
  undefined8 local_58;
  undefined8 local_50;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_48 [24];
  GridItemRestrictionSet aGStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)param_1 < 0) || (*(int *)(param_1 + 4) < 0)) {
    bVar3 = false;
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_48);
    Board::GetGridItemsAt
              (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4),
               (vector *)avStack_48);
    BasePowerup::GetType((BasePowerup *)this);
    nop();
    GridItemRestrictionSet::GridItemRestrictionSet
              (aGStack_30,(GridItemRestrictionSet *)(extraout_x0 + 0x78));
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_48);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_48);
    while( true ) {
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
      if (!bVar3) break;
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      cVar2 = GridItemRestrictionSet::IsIncluded((GridItem *)aGStack_30);
      if (cVar2 != '\0') {
        bVar3 = false;
        goto LAB_04970844;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    iVar4 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"");
    lVar5 = Board::GetPlantAt(this_00,iVar1,iVar4,(string *)&local_50);
    std::string::~string((string *)&local_50);
    nop();
    if (lVar5 == 0) {
      iVar4 = Board::GetGridSquareType
                        (*(Board **)(gLawnApp + 0x9f0),*(int *)param_1,*(int *)(param_1 + 4));
      bVar3 = iVar4 != 4;
    }
LAB_04970844:
    GridItemRestrictionSet::~GridItemRestrictionSet(aGStack_30);
    std::vector<GridItem*,std::allocator<GridItem*>>::~vector
              ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerMove::onTouchMoved(Sexy::Touch const&) */

void __thiscall PowerupVaseBreakerMove::onTouchMoved(PowerupVaseBreakerMove *this,Touch *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  BoardTransforms *this_01;
  GridItemVase *this_02;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  TPoint aTStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') goto LAB_04970900;
  Sexy::Point::Point((Point *)&local_28,(TPoint *)(param_1 + 0x10));
  iVar2 = FUN_0496ef74(local_28);
  iVar3 = FUN_0496ef74(local_24);
  this_01 = (BoardTransforms *)
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar2,(float)iVar3);
  BoardTransforms::BoardSpaceToGrid(this_01,local_20,local_1c);
  if ((local_18 < 0) || (local_14 < 0)) {
LAB_049709e8:
    if (this[0x118] == (PowerupVaseBreakerMove)0x0) goto LAB_04970900;
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GridItem::GetGridLocation();
    cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&local_18,aTStack_10);
    if (cVar1 == '\0') goto LAB_049709e8;
    this[0x118] = (PowerupVaseBreakerMove)0x1;
  }
  cVar1 = canMoveVaseTo(this,(Point *)&local_18);
  this_02 = (GridItemVase *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  if (cVar1 == '\0') {
    Sexy::Point::Point((Point *)aTStack_10,-1,-1);
  }
  else {
    Sexy::Point::Point((Point *)aTStack_10,(TPoint *)&local_18);
  }
  GridItemVase::SetMovePreviewPosition(this_02,(Point *)aTStack_10);
LAB_04970900:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupVaseBreakerMove::onTouchEnd(Sexy::Touch const&) */

void __thiscall PowerupVaseBreakerMove::onTouchEnd(PowerupVaseBreakerMove *this,Touch *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  BoardTransforms *this_01;
  long *plVar4;
  PowerupManager *this_02;
  code *pcVar5;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  TPoint aTStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') goto LAB_04970a54;
  Sexy::Point::Point((Point *)&local_28,(TPoint *)(param_1 + 0x10));
  iVar2 = FUN_0496ef74(local_28);
  iVar3 = FUN_0496ef74(local_24);
  this_01 = (BoardTransforms *)
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar2,(float)iVar3);
  BoardTransforms::BoardSpaceToGrid(this_01,local_20,local_1c);
  if ((local_18 < 0) || (local_14 < 0)) {
LAB_04970b6c:
    if (this[0x118] != (PowerupVaseBreakerMove)0x0) goto LAB_04970b04;
    if (this[0x119] == (PowerupVaseBreakerMove)0x0) {
      queueSelectedVase(this);
      goto LAB_04970a54;
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GridItem::GetGridLocation();
    cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&local_18,aTStack_10);
    if (cVar1 == '\0') goto LAB_04970b6c;
    this[0x118] = (PowerupVaseBreakerMove)0x1;
LAB_04970b04:
    cVar1 = canMoveVaseTo(this,(Point *)&local_18);
    if (cVar1 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pcVar5 = *(code **)(*plVar4 + 0x1f0);
      Sexy::Point::Point((Point *)aTStack_10,(TPoint *)&local_18);
      (*pcVar5)(plVar4,(Point *)aTStack_10,1);
      cVar1 = BasePowerup::isInState((BasePowerup *)this,2);
      if (cVar1 == '\0') {
        BasePowerup::Activate((BasePowerup *)this);
      }
      BasePowerup::DecrementTimeByUseCost((BasePowerup *)this);
      goto LAB_04970a54;
    }
  }
  this_02 = (PowerupManager *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
  PowerupManager::CancelActivePowerup(this_02);
LAB_04970a54:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

