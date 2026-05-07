// Class: GridItemRailcart


/* GridItemRailcart::onCancelEvent() */

void __thiscall GridItemRailcart::onCancelEvent(GridItemRailcart *this)

{
  *(undefined8 *)(this + 0x198) = 0;
  return;
}


/* GridItemRailcart::CalcRenderOrder() const */

void __thiscall GridItemRailcart::CalcRenderOrder(GridItemRailcart *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03e05928(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61ae5,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemRailcart::CalcRenderOrder() const */

void __thiscall GridItemRailcart::CalcRenderOrder(GridItemRailcart *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcart::StaticClassInit() */

void GridItemRailcart::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRailcart");
    (*pcVar2)(plVar1,asStack_10,FUN_03e05ba8,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRailcart::StaticGetClass() */

long * GridItemRailcart::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRailcart",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRailcart::GetClass() const */

long * GridItemRailcart::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRailcart",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRailcart::~GridItemRailcart() */

void __thiscall GridItemRailcart::~GridItemRailcart(GridItemRailcart *this)

{
  *(undefined ***)this = &PTR_GetClass_06781d00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRailcart_06781f98;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemRailcart::~GridItemRailcart() */

void __thiscall GridItemRailcart::~GridItemRailcart(GridItemRailcart *this)

{
  ~GridItemRailcart(this + -0x10);
  return;
}


/* GridItemRailcart::~GridItemRailcart() */

void __thiscall GridItemRailcart::~GridItemRailcart(GridItemRailcart *this)

{
  ~GridItemRailcart(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRailcart::~GridItemRailcart() */

void __thiscall GridItemRailcart::~GridItemRailcart(GridItemRailcart *this)

{
  ~GridItemRailcart(this + -0x10);
  return;
}


/* GridItemRailcart::GridItemRailcart() */

void __thiscall GridItemRailcart::GridItemRailcart(GridItemRailcart *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06781d00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRailcart_06781f98;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  *(undefined8 *)(this + 0x198) = 0;
  return;
}


/* GridItemRailcart::StaticNew() */

GridItemRailcart * GridItemRailcart::StaticNew(void)

{
  GridItemRailcart *this;
  
  this = ::operator_new(0x1a8);
  GridItemRailcart(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcart::registerForEvents() */

void __thiscall GridItemRailcart::registerForEvents(GridItemRailcart *this)

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
  Delegate1wRet<GridItemRailcart,bool(GridItemRailcart::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelEvent);
  Sexy::Delegate0::Delegate0<GridItemRailcart,void(GridItemRailcart::*)()>(aDStack_38,aCStack_80);
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
/* GridItemRailcart::parseCartImage() */

void __thiscall GridItemRailcart::parseCartImage(GridItemRailcart *this)

{
  GridItemRailcartPropertySheet *pGVar1;
  undefined8 uVar2;
  InfoClass *pIVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemRailcartPropertySheet>();
  uVar2 = FUN_0547429c(pGVar1 + 0x98);
  Sexy::StrFormat("%s_MINING_CART",asStack_18,uVar2);
  pIVar3 = Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
                     (*(ResourceManager **)(gLawnApp + 0x848),asStack_18);
  if (pIVar3 != (InfoClass *)0x0) {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcart::onDraw(Sexy::Graphics*) */

void __thiscall GridItemRailcart::onDraw(GridItemRailcart *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  float fVar4;
  GraphicsAutoState aGStack_20 [8];
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  GridItem::GetGridLocation();
  local_18 = (float)(iVar2 * local_10 + 200);
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  GridItem::GetGridLocation();
  local_14 = (float)(iVar2 * local_c + 0xa0);
  if (((DAT_06adc2c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06adc2c8), iVar2 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06adc340,2.0,5.0);
    __cxa_guard_release(&DAT_06adc2c8);
  }
  Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_18,(TPoint *)&DAT_06adc340);
  fVar4 = (float)FUN_03e05a48();
  Sexy::SexyVector2::operator*=((SexyVector2 *)&local_18,fVar4);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x1a0));
  if (cVar1 != '\0') {
    parseCartImage(this);
  }
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a0));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,(int)local_18,(int)local_14);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcart::IsAStationaryPlantfoodPlant(std::string) */

void GridItemRailcart::IsAStationaryPlantfoodPlant(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06adc300);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06adc300);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06adc300);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcart::IsAStationaryPlant(std::string) */

void GridItemRailcart::IsAStationaryPlant(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06adc2b0);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06adc2b0);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06adc2b0);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcart::IsAStationaryGridItem(std::string const&) */

void GridItemRailcart::IsAStationaryGridItem(string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06adc2e8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06adc2e8);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06adc2e8);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRailcart::handleCartMoving(Sexy::Touch const&) */

void __thiscall GridItemRailcart::handleCartMoving(GridItemRailcart *this,Touch *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Plant *pPVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *extraout_x0;
  char *pcVar15;
  int iVar16;
  Board *pBVar17;
  ulong uVar18;
  code *pcVar19;
  float fVar20;
  int local_60;
  int local_5c;
  undefined8 local_58;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  int local_38 [6];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar17 = *(Board **)(gLawnApp + 0x9f0);
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  cVar3 = Board::IsGridSquareLocked(pBVar17,local_38[0],local_20._4_4_);
  if (cVar3 == '\0') {
    fVar20 = (float)FUN_03e05a5c((float)*(int *)(param_1 + 0x14));
    Sexy::Point::Point((Point *)&local_60);
    local_60 = FUN_03e05924(*(undefined4 *)(this + 0x130));
    iVar5 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(fVar20);
    local_5c = iVar5;
    iVar6 = FUN_03e05928(*(undefined4 *)(this + 0x134));
    iVar1 = local_60;
    iVar8 = -1;
    if (-1 < iVar5 - iVar6) {
      iVar8 = 1;
    }
    iVar16 = iVar8 + iVar6;
    if (iVar16 != iVar8 + iVar5) {
      pBVar17 = *(Board **)(gLawnApp + 0x9f0);
      do {
        iVar7 = Board::GetGridSquareType(pBVar17,iVar1,iVar16);
        if (iVar7 != 4) {
          iVar5 = iVar16 - iVar8;
          local_5c = iVar5;
          break;
        }
        iVar16 = iVar16 + iVar8;
      } while (iVar16 != iVar8 + iVar5);
    }
    if (iVar6 != iVar5) {
      pBVar17 = *(Board **)(gLawnApp + 0x9f0);
      iVar8 = FUN_03e05924(*(undefined4 *)(this + 0x130));
      std::string::string((string *)&local_20,"");
      pPVar11 = (Plant *)Board::GetPlantAt(pBVar17,iVar8,iVar6,(string *)&local_20);
      std::string::~string((string *)&local_20);
      nop();
      if (pPVar11 != (Plant *)0x0) {
        Plant::GetType();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        FUN_05475d88(asStack_40,lVar12 + 8);
        cVar3 = IsAStationaryPlant(asStack_40);
        if (cVar3 == '\0') {
          if (*(code **)(*(long *)pPVar11 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar3 = Plant::IsInPlantFoodState(pPVar11);
          }
          else {
            cVar3 = (**(code **)(*(long *)pPVar11 + 0x1f8))();
          }
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*(long *)pPVar11 + 0x200))(pPVar11);
          }
          else {
            Plant::GetType();
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
            FUN_05475d88((string *)&local_20,lVar12 + 8);
            cVar3 = IsAStationaryPlantfoodPlant((string *)&local_20);
            if (cVar3 == '\0') {
              cVar3 = (**(code **)(*(long *)pPVar11 + 0x200))(pPVar11);
            }
            std::string::~string((string *)&local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
          }
        }
        std::string::~string(asStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (cVar3 != '\0') goto LAB_03e06680;
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
      uVar9 = FUN_03e05924(*(undefined4 *)(this + 0x130));
      uVar10 = FUN_03e05928(*(undefined4 *)(this + 0x134));
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38,1,uVar9,
                 uVar10);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_38);
      while( true ) {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_38);
        bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_20)
        ;
        if (!bVar4) break;
        puVar13 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        pPVar11 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar13);
        if (pPVar11 != (Plant *)0x0) {
          Plant::GetType();
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
          FUN_05475d88((string *)aRStack_48,lVar12 + 8);
          cVar3 = IsAStationaryPlant((string *)aRStack_48);
          if (cVar3 == '\0') {
            if (*(code **)(*(long *)pPVar11 + 0x1f8) == Plant::IsInPlantFoodState) {
              cVar3 = Plant::IsInPlantFoodState(pPVar11);
            }
            else {
              cVar3 = (**(code **)(*(long *)pPVar11 + 0x1f8))();
            }
            if (cVar3 == '\0') {
              cVar3 = (**(code **)(*(long *)pPVar11 + 0x200))(pPVar11);
              goto LAB_03e06880;
            }
            Plant::GetType();
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
            FUN_05475d88((string *)&local_20,lVar12 + 8);
            cVar3 = IsAStationaryPlantfoodPlant((string *)&local_20);
            if (cVar3 == '\0') {
              cVar3 = (**(code **)(*(long *)pPVar11 + 0x200))(pPVar11);
            }
            std::string::~string((string *)&local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
            std::string::~string((string *)aRStack_48);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          }
          else {
LAB_03e06880:
            std::string::~string((string *)aRStack_48);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          }
          if (cVar3 == '\0') {
            Board::MovePlant(*(Board **)(gLawnApp + 0x9f0),pPVar11,local_60,local_5c,false);
          }
        }
        FUN_03e05dac((__normal_iterator *)&local_58);
      }
      uVar18 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      uVar9 = FUN_03e05924(*(undefined4 *)(this + 0x130));
      uVar10 = FUN_03e05928(*(undefined4 *)(this + 0x134));
      EntityFinder::GetEntitiesAtGridSquare((string *)&local_20,4,uVar9,uVar10);
      while (uVar2 = local_20, uVar14 = FUN_03e0595c(local_20,local_18), uVar18 < uVar14) {
        FUN_03e05968(uVar2,uVar18);
        nop();
        GridItem::GetType();
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
        cVar3 = IsAStationaryGridItem((string *)(lVar12 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40)
        ;
        if (cVar3 == '\0') {
          uVar18 = uVar18 + 1;
          pcVar19 = *(code **)(*extraout_x0 + 0x1f0);
          Sexy::Point::Point((Point *)asStack_40,(TPoint *)&local_60);
          (*pcVar19)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_40,1);
        }
        else {
          uVar18 = uVar18 + 1;
        }
      }
      Board::CancelTouch(*(Board **)(gLawnApp + 0x9f0),param_1,this);
      pcVar15 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar15,"Play_UI_Game_RailRoadTrack_Move");
      MessageRouter::Post<GridItemRailcart*,GridItemRailcart*>
                ((MessageRouter *)gMessageRouter,Message::RailcartMoved,this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
    }
  }
LAB_03e06680:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemRailcart::onTouchEvent(Sexy::Touch const&) */

char __thiscall GridItemRailcart::onTouchEvent(GridItemRailcart *this,Touch *param_1)

{
  char cVar1;
  TRect<int> *this_00;
  float fVar2;
  float fVar3;
  
  if ((*(long *)(this + 0x198) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    fVar2 = (float)FUN_03e05a5c((float)*(int *)(param_1 + 0x10));
    fVar3 = (float)FUN_03e05a5c((float)*(int *)(param_1 + 0x14));
    this_00 = (TRect<int> *)(**(code **)(*(long *)this + 0x178))(this);
    cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar2,(int)fVar3);
    if (cVar1 != '\0') {
      *(undefined8 *)(this + 0x198) = *(undefined8 *)param_1;
      return cVar1;
    }
  }
  else if (*(long *)(this + 0x198) == *(long *)param_1) {
    if (*(int *)(param_1 + 0x30) - 3U < 2) {
      *(undefined8 *)(this + 0x198) = 0;
      return '\0';
    }
    if (*(int *)(param_1 + 0x30) == 1) {
      handleCartMoving(this,param_1);
    }
  }
  return '\0';
}

