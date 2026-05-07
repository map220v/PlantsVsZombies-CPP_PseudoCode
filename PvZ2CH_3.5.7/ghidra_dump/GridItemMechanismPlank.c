// Class: GridItemMechanismPlank


/* GridItemMechanismPlank::onCancelEvent() */

void __thiscall GridItemMechanismPlank::onCancelEvent(GridItemMechanismPlank *this)

{
  *(undefined8 *)(this + 0x198) = 0;
  return;
}


/* GridItemMechanismPlank::CalcRenderOrder() const */

void GridItemMechanismPlank::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x61a81,0,0);
  return;
}


/* non-virtual thunk to GridItemMechanismPlank::CalcRenderOrder() const */

void __thiscall GridItemMechanismPlank::CalcRenderOrder(GridItemMechanismPlank *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::canMoveTo(int, int) const */

void __thiscall
GridItemMechanismPlank::canMoveTo(GridItemMechanismPlank *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  cVar2 = Board::IsGridSquareLocked(this_00,param_1,param_2);
  if (cVar2 == '\0') {
    std::string::string(asStack_10,"mechanismplank");
    lVar4 = Board::GetGridItemAt(this_00,asStack_10,param_1,param_2);
    bVar1 = false;
    if (lVar4 == 0) {
      iVar3 = Board::GetGridSquareType(*(Board **)(gLawnApp + 0x9f0),param_1,param_2);
      bVar1 = iVar3 == 6;
    }
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar1 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* GridItemMechanismPlank::GridItemMechanismPlank() */

void __thiscall GridItemMechanismPlank::GridItemMechanismPlank(GridItemMechanismPlank *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a4) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_067811e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMechanismPlank_06781478;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  return;
}


/* GridItemMechanismPlank::StaticNew() */

GridItemMechanismPlank * GridItemMechanismPlank::StaticNew(void)

{
  GridItemMechanismPlank *this;
  
  this = ::operator_new(0x1c8);
  GridItemMechanismPlank(this);
  return this;
}


/* GridItemMechanismPlank::~GridItemMechanismPlank() */

void __thiscall GridItemMechanismPlank::~GridItemMechanismPlank(GridItemMechanismPlank *this)

{
  *(undefined ***)this = &PTR_GetClass_067811e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMechanismPlank_06781478;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemMechanismPlank::~GridItemMechanismPlank() */

void __thiscall GridItemMechanismPlank::~GridItemMechanismPlank(GridItemMechanismPlank *this)

{
  ~GridItemMechanismPlank(this + -0x10);
  return;
}


/* GridItemMechanismPlank::~GridItemMechanismPlank() */

void __thiscall GridItemMechanismPlank::~GridItemMechanismPlank(GridItemMechanismPlank *this)

{
  ~GridItemMechanismPlank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMechanismPlank::~GridItemMechanismPlank() */

void __thiscall GridItemMechanismPlank::~GridItemMechanismPlank(GridItemMechanismPlank *this)

{
  ~GridItemMechanismPlank(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::canMoveable() */

void __thiscall GridItemMechanismPlank::canMoveable(GridItemMechanismPlank *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Plant *this_00;
  undefined8 uVar4;
  int iVar5;
  Board *pBVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(pBVar6 + 0xf8)) {
    iVar5 = 0;
    do {
      std::string::string(asStack_10,"mechanismplank");
      iVar2 = FUN_03e00e10(*(undefined4 *)(this + 0x134));
      lVar3 = Board::GetGridItemAt(pBVar6,asStack_10,iVar5,iVar2);
      std::string::~string(asStack_10);
      nop();
      if (lVar3 != 0) {
        pBVar6 = *(Board **)(gLawnApp + 0x9f0);
        iVar2 = FUN_03e00e10(*(undefined4 *)(this + 0x134));
        cVar1 = Board::IsGridSquareLocked(pBVar6,iVar5,iVar2);
        if (cVar1 == '\0') {
          std::string::string(asStack_10,"");
          this_00 = (Plant *)Board::GetPlantAt(pBVar6,iVar5,iVar2,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (this_00 == (Plant *)0x0) goto LAB_03e013dc;
          Plant::GetType();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          FUN_05475d88(asStack_20,lVar3 + 8);
          cVar1 = GridItemRailcart::IsAStationaryPlant(asStack_20);
          if (cVar1 == '\0') {
            if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
              cVar1 = Plant::IsInPlantFoodState(this_00);
            }
            else {
              cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
            }
            if (cVar1 != '\0') {
              Plant::GetType();
              lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
              FUN_05475d88(asStack_10,lVar3 + 8);
              cVar1 = GridItemRailcart::IsAStationaryPlantfoodPlant(asStack_10);
              if (cVar1 == '\0') {
                cVar1 = (**(code **)(*(long *)this_00 + 0x200))(this_00);
              }
              std::string::~string(asStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
              goto LAB_03e013c8;
            }
            cVar1 = (**(code **)(*(long *)this_00 + 0x200))(this_00);
            std::string::~string(asStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          }
          else {
LAB_03e013c8:
            std::string::~string(asStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          }
          if (cVar1 == '\0') goto LAB_03e013dc;
        }
        uVar4 = 0;
        goto LAB_03e01438;
      }
LAB_03e013dc:
      iVar5 = iVar5 + 1;
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    } while (iVar5 < *(int *)(pBVar6 + 0xf8));
  }
  uVar4 = 1;
LAB_03e01438:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::registerForEvents() */

void __thiscall GridItemMechanismPlank::registerForEvents(GridItemMechanismPlank *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<GridItemMechanismPlank,bool(GridItemMechanismPlank::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelEvent);
  Sexy::Delegate0::Delegate0<GridItemMechanismPlank,void(GridItemMechanismPlank::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,1,aRStack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::onDraw(Sexy::Graphics*) */

void __thiscall GridItemMechanismPlank::onDraw(GridItemMechanismPlank *this,Graphics *param_1)

{
  long lVar1;
  int iVar2;
  Image *pIVar3;
  float fVar4;
  float fVar5;
  int local_10;
  CachedResourcePtr<Sexy::Image> *this_00;
  
  lVar1 = ___stack_chk_guard;
  fVar5 = *(float *)(this + 0x1c);
  fVar4 = (float)FUN_03e00e34(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar4 = (float)FUN_03e00f68((fVar4 + DAT_06adc080) - (float)iVar2 * 0.5);
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar5 = (float)FUN_03e00f68((fVar5 + DAT_06adc084) - (float)iVar2 * 0.5);
  GridItem::GetGridLocation();
  if (local_10 == 0) {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06adbfe8;
  }
  else {
    GridItem::GetGridLocation();
    if (local_10 == 4) {
      this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06adc028;
    }
    else {
      this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06adc098;
    }
  }
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_00);
  Sexy::Graphics::DrawImageF(param_1,pIVar3,fVar4,fVar5);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::updateAttachedPlant() */

void __thiscall GridItemMechanismPlank::updateAttachedPlant(GridItemMechanismPlank *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PlantGroup *this_01;
  ResourceInfo *pRVar5;
  SexyVector3 *this_02;
  long lVar6;
  GridItem *this_03;
  Plant *pPVar7;
  code *pcVar8;
  float fVar9;
  undefined4 uVar10;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar2 = FUN_03e00e00(*(undefined4 *)(lVar6 + 0x1d0));
    if (cVar2 == '\0') {
      pPVar7 = *(Plant **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      this_01 = (PlantGroup *)Board::FindPlantGroup(pPVar7);
      if (this_01 != (PlantGroup *)0x0) {
        while( true ) {
          cVar2 = PlantGroup::Empty(this_01);
          if (cVar2 != '\0') break;
          PlantGroup::GetTopPlant(this_01);
          pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          iVar3 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
          iVar4 = FUN_03e00e10(*(undefined4 *)(this + 0x134));
          Board::MovePlant(*(Board **)(gLawnApp + 0x9f0),(Plant *)pRVar5,iVar3,iVar4,false);
          pcVar8 = *(code **)(*(long *)pRVar5 + 0x78);
          this_02 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
          fVar9 = (float)FUN_03e00f68(0xc1200000);
          uVar10 = 0;
          EATextSquish::Vec3::Vec3(aVStack_28,0.0,fVar9,0.0);
          local_18 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)aVStack_28);
          local_14 = fVar9;
          local_10 = uVar10;
          (*pcVar8)(pRVar5,(RtWeakPtr *)&local_18);
        }
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
        goto joined_r0x03e01acc;
      }
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
joined_r0x03e01acc:
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    GridItem::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    cVar2 = GridItemRailcart::IsAStationaryGridItem((string *)(lVar6 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if (cVar2 == '\0') {
      this_03 = (GridItem *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
      iVar3 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
      iVar4 = FUN_03e00e10(*(undefined4 *)(this + 0x134));
      GridItem::SetGridLocation(this_03,iVar3,iVar4);
    }
  }
  MessageRouter::Post<GridItemMechanismPlank*,GridItemMechanismPlank*>
            ((MessageRouter *)gMessageRouter,Message::MechanismPlankMoved,this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::onUpdate() */

void __thiscall GridItemMechanismPlank::onUpdate(GridItemMechanismPlank *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a0) == 1) {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = *(undefined4 *)(puVar3 + 1);
    fStack_14 = (float)((ulong)*puVar3 >> 0x20);
    fVar4 = fStack_14 - *(float *)(this + 0x1b0);
    local_18 = (float)*puVar3;
    _local_18 = CONCAT44(fVar4,local_18);
    iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x1a4));
    if ((float)iVar1 < fVar4) goto LAB_03e01bd8;
LAB_03e01c5c:
    iVar1 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
    GridItem::SetGridLocation((GridItem *)this,iVar1,*(int *)(this + 0x1a4));
    *(undefined4 *)(this + 0x1a0) = 0;
    iVar1 = *(int *)(this + 0x1a4);
    *(int *)(this + 0x1a8) = iVar1;
    *(undefined4 *)(this + 0x1a4) = 0xffffffff;
    iVar2 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
    Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar2,iVar1,false);
  }
  else {
    if (*(int *)(this + 0x1a0) != 2) goto LAB_03e01b78;
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = *(undefined4 *)(puVar3 + 1);
    fStack_14 = (float)((ulong)*puVar3 >> 0x20);
    fVar4 = *(float *)(this + 0x1b0) + fStack_14;
    local_18 = (float)*puVar3;
    _local_18 = CONCAT44(fVar4,local_18);
    iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x1a4));
    if ((float)iVar1 <= fVar4) goto LAB_03e01c5c;
LAB_03e01bd8:
    iVar1 = BoardTransforms::BoardSpaceToGridX(local_18);
    iVar2 = BoardTransforms::BoardSpaceToGridY(fStack_14);
    GridItem::SetGridLocation((GridItem *)this,iVar1,iVar2);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
  }
  updateAttachedPlant(this);
LAB_03e01b78:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::setMovement(int, MechanismPlankMoveDirection) */

void __thiscall
GridItemMechanismPlank::setMovement(GridItemMechanismPlank *this,int param_1,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  GridItemMechanismPlank *extraout_x0;
  ulong uVar7;
  undefined8 uVar8;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar1 = *(int *)(this + 0x1a0);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(this + 0x1a4);
  if (iVar1 == 0) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    iVar1 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
    iVar2 = FUN_03e00e10(*(undefined4 *)(this + 0x134));
    std::string::string((string *)&local_20,"");
    lVar5 = Board::GetPlantAt(this_00,iVar1,iVar2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    if (lVar5 == 0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b8),(RtWeakPtr *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1b8),(RtWeakPtrBase *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    }
    uVar7 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar3 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
    uVar4 = FUN_03e00e10(*(undefined4 *)(this + 0x134));
    EntityFinder::GetEntitiesAtGridSquare((string *)&local_20,4,uVar3,uVar4);
    uVar8 = local_20;
    uVar6 = FUN_03e00e20(local_20,local_18);
    if (uVar6 != 0) {
      do {
        FUN_03e00e2c(uVar8,uVar7);
        nop();
        if (this != extraout_x0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x1c0),
                     (RtWeakPtrBase *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          uVar8 = local_20;
          uVar6 = FUN_03e00e20(local_20,local_18);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else if (((param_3 == 2) && (iVar1 == 1)) || ((param_3 == 1 && (iVar1 == 2)))) {
    iVar1 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
    Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar1,iVar2,false);
  }
  *(int *)(this + 0x1a4) = param_1;
  *(int *)(this + 0x1a0) = param_3;
  iVar1 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
  Board::SetGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar1,param_1,true);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::tryMoveUp() */

void __thiscall GridItemMechanismPlank::tryMoveUp(GridItemMechanismPlank *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemMechanismPlank *pGVar4;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a0) != 1) {
    if (*(int *)(this + 0x1a0) == 2) {
      iVar2 = *(int *)(this + 0x1a8);
      if (iVar2 == -1) goto LAB_03e01f94;
    }
    else {
      iVar2 = SharkMinion::getRow((SharkMinion *)this);
      *(int *)(this + 0x1a8) = iVar2;
      if (iVar2 < 1) {
        if ((iVar2 != 0) || (*(int *)(this + 0x1a0) != 2)) goto LAB_03e01f94;
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -1;
      }
    }
    cVar1 = canMoveable(this);
    if (cVar1 != '\0') {
      iVar3 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
      cVar1 = canMoveTo(this,iVar3,iVar2);
      if (cVar1 != '\0') {
        setMovement(this,iVar2,1);
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        if (0 < *(int *)(this_00 + 0xf8)) {
          iVar2 = 0;
          do {
            std::string::string(asStack_10,"mechanismplank");
            iVar3 = SharkMinion::getRow((SharkMinion *)this);
            pGVar4 = (GridItemMechanismPlank *)Board::GetGridItemAt(this_00,asStack_10,iVar2,iVar3);
            std::string::~string(asStack_10);
            nop();
            if ((pGVar4 != (GridItemMechanismPlank *)0x0) && (pGVar4 != this)) {
              nop();
              setMovement();
            }
            iVar2 = iVar2 + 1;
            this_00 = *(Board **)(gLawnApp + 0x9f0);
          } while (iVar2 < *(int *)(this_00 + 0xf8));
        }
      }
    }
  }
LAB_03e01f94:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::tryMoveDown() */

void __thiscall GridItemMechanismPlank::tryMoveDown(GridItemMechanismPlank *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemMechanismPlank *pGVar4;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a0) != 2) {
    if (*(int *)(this + 0x1a0) == 1) {
      iVar2 = *(int *)(this + 0x1a8);
    }
    else {
      iVar2 = SharkMinion::getRow((SharkMinion *)this);
      *(int *)(this + 0x1a8) = iVar2;
      iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1;
      if (iVar2 < iVar3) {
        iVar2 = iVar2 + 1;
      }
      else if ((iVar2 != iVar3) || (*(int *)(this + 0x1a0) != 1)) goto LAB_03e02154;
    }
    if ((iVar2 != -1) && (cVar1 = canMoveable(this), cVar1 != '\0')) {
      iVar3 = FUN_03e00e0c(*(undefined4 *)(this + 0x130));
      cVar1 = canMoveTo(this,iVar3,iVar2);
      if (cVar1 != '\0') {
        setMovement(this,iVar2,2);
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        if (0 < *(int *)(this_00 + 0xf8)) {
          iVar2 = 0;
          do {
            std::string::string(asStack_10,"mechanismplank");
            iVar3 = SharkMinion::getRow((SharkMinion *)this);
            pGVar4 = (GridItemMechanismPlank *)Board::GetGridItemAt(this_00,asStack_10,iVar2,iVar3);
            std::string::~string(asStack_10);
            nop();
            if ((pGVar4 != (GridItemMechanismPlank *)0x0) && (pGVar4 != this)) {
              nop();
              setMovement();
            }
            iVar2 = iVar2 + 1;
            this_00 = *(Board **)(gLawnApp + 0x9f0);
          } while (iVar2 < *(int *)(this_00 + 0xf8));
        }
      }
    }
  }
LAB_03e02154:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::onTouchEvent(Sexy::Touch const&) */

void __thiscall GridItemMechanismPlank::onTouchEvent(GridItemMechanismPlank *this,Touch *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  TRect<int> *this_00;
  int iVar6;
  Board *pBVar7;
  float fVar8;
  float fVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x198) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    fVar8 = (float)FUN_03e00f78((float)*(int *)(param_1 + 0x10));
    fVar9 = (float)FUN_03e00f78((float)*(int *)(param_1 + 0x14));
    this_00 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
    cVar2 = Sexy::TRect<int>::Contains(this_00,(int)fVar8,(int)fVar9);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      *(undefined8 *)(this + 0x198) = *(undefined8 *)param_1;
      *(undefined4 *)(this + 0x1ac) = uVar1;
      goto LAB_03e022d8;
    }
  }
  else if (*(long *)(this + 0x198) == *(long *)param_1) {
    if (*(int *)(param_1 + 0x30) == 4) {
LAB_03e02444:
      *(undefined8 *)(this + 0x198) = 0;
    }
    else if (*(int *)(param_1 + 0x30) == 3) {
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      if (0 < *(int *)(pBVar7 + 0xf8)) {
        iVar6 = 0;
        do {
          std::string::string(asStack_10,"mechanismplank");
          iVar3 = SharkMinion::getRow((SharkMinion *)this);
          lVar5 = Board::GetGridItemAt(pBVar7,asStack_10,iVar6,iVar3);
          std::string::~string(asStack_10);
          nop();
          if (lVar5 != 0) {
            pBVar7 = *(Board **)(gLawnApp + 0x9f0);
            iVar3 = FUN_03e00e0c(*(undefined4 *)(lVar5 + 0x130));
            iVar4 = FUN_03e00e10(*(undefined4 *)(lVar5 + 0x134));
            std::string::string(asStack_10,"");
            lVar5 = Board::GetPlantAt(pBVar7,iVar3,iVar4,asStack_10);
            std::string::~string(asStack_10);
            nop();
            if ((lVar5 != 0) &&
               (cVar2 = FUN_03e00e00(*(undefined4 *)(lVar5 + 0x1d0)), cVar2 != '\0'))
            goto LAB_03e02444;
          }
          iVar6 = iVar6 + 1;
          pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        } while (iVar6 < *(int *)(pBVar7 + 0xf8));
      }
      if (*(int *)(param_1 + 0x14) < *(int *)(this + 0x1ac)) {
        tryMoveUp(this);
        *(undefined8 *)(this + 0x198) = 0;
      }
      else {
        if (*(int *)(param_1 + 0x14) <= *(int *)(this + 0x1ac)) goto LAB_03e02444;
        tryMoveDown(this);
        *(undefined8 *)(this + 0x198) = 0;
      }
    }
  }
  cVar2 = '\0';
LAB_03e022d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMechanismPlank::StaticClassInit() */

void GridItemMechanismPlank::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PlankUp",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"PlankDown",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"MechanismPlankMoveDirection");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"GridItemMechanismPlank");
    (*pcVar3)(plVar2,avStack_20,FUN_03e026c4,0x1c8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMechanismPlank::StaticGetClass() */

long * GridItemMechanismPlank::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMechanismPlank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMechanismPlank::GetClass() const */

long * GridItemMechanismPlank::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemMechanismPlank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMechanismPlank::onGridItemInitialize() */

void __thiscall GridItemMechanismPlank::onGridItemInitialize(GridItemMechanismPlank *this)

{
  int iVar1;
  
  GridItem::onGridItemInitialize((GridItem *)this);
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0xffffffff;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined4 *)(this + 0x1ac) = 0;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(float *)(this + 0x1b0) = (float)iVar1;
  return;
}

