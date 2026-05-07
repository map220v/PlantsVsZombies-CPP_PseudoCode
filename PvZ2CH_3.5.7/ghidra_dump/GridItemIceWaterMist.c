// Class: GridItemIceWaterMist


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceWaterMist::StaticClassInit() */

void GridItemIceWaterMist::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIceWaterMist");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc5d24,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceWaterMist::StaticGetClass() */

long * GridItemIceWaterMist::StaticGetClass(void)

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
  uVar2 = GridItemWaterMist::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceWaterMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIceWaterMist::GetClass() const */

long * GridItemIceWaterMist::GetClass(void)

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
  uVar2 = GridItemWaterMist::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemIceWaterMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceWaterMist::onDestroy() */

void __thiscall GridItemIceWaterMist::onDestroy(GridItemIceWaterMist *this)

{
  WaterMistTileSubSystem *pWVar1;
  code *pcVar2;
  Point aPStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (this[0x1c8] == (GridItemIceWaterMist)0x0) {
    pWVar1 = Board::GetGameSubSystem<WaterMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    pcVar2 = *(code **)(*(long *)pWVar1 + 0xa0);
    Sexy::Point::Point(aPStack_10,(TPoint *)(this + 0x1b4));
    (*pcVar2)(pWVar1,aPStack_10);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceWaterMist::GridItemIceWaterMist() */

void __thiscall GridItemIceWaterMist::GridItemIceWaterMist(GridItemIceWaterMist *this)

{
  GridItemWaterMist::GridItemWaterMist((GridItemWaterMist *)this);
  *(undefined ***)this = &PTR_GetClass_0699ac60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIceWaterMist_0699af28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  return;
}


/* GridItemIceWaterMist::StaticNew() */

GridItemIceWaterMist * GridItemIceWaterMist::StaticNew(void)

{
  GridItemIceWaterMist *this;
  
  this = ::operator_new(0x210);
  GridItemIceWaterMist(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceWaterMist::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
GridItemIceWaterMist::isZombieTypeBlacklisted(GridItemIceWaterMist *this,string *param_1)

{
  char cVar1;
  GridItemIceWaterMistProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemIceWaterMistProps>();
  local_18 = FUN_04cc18ec(*(undefined8 *)(pGVar2 + 0x100));
  local_10 = FUN_04cc193c(*(undefined8 *)(pGVar2 + 0x108));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_04cc2d84:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_04cc2d84;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIceWaterMist::applyChill() */

void __thiscall GridItemIceWaterMist::applyChill(GridItemIceWaterMist *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  GridItemIceWaterMistProps *pGVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar12;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = FUN_04cbfbdc(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemIceWaterMistProps>();
  iVar1 = *(int *)(pGVar10 + 0xf4);
  iVar9 = FUN_04cbfbe0(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemIceWaterMistProps>();
  iVar2 = *(int *)(pGVar10 + 0xf8);
  pGVar10 = GridItem::GetProps<GridItemIceWaterMistProps>();
  iVar3 = *(int *)(pGVar10 + 0xf0);
  pGVar10 = GridItem::GetProps<GridItemIceWaterMistProps>();
  iVar4 = *(int *)(pGVar10 + 0xf4);
  pGVar10 = GridItem::GetProps<GridItemIceWaterMistProps>();
  iVar5 = *(int *)(pGVar10 + 0xf8);
  pGVar10 = GridItem::GetProps<GridItemIceWaterMistProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0xfc));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar6 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar6) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar7 = RealObject::IsOnOpposingTeam((RealObject *)*puVar11,(RealObject *)this);
    if (cVar7 != '\0') {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar7 = isZombieTypeBlacklisted(this,(string *)(lVar12 + 8));
      if ((cVar7 == '\0') && (cVar7 = Zombie::IsOnGround(this_00), cVar7 != '\0')) {
        cVar7 = Zombie::HasCondition(this_00,0);
        if (cVar7 == '\0') {
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0,1);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIceWaterMist::~GridItemIceWaterMist() */

void __thiscall GridItemIceWaterMist::~GridItemIceWaterMist(GridItemIceWaterMist *this)

{
  *(undefined ***)this = &PTR_GetClass_0699ac60;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIceWaterMist_0699af28;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1f8));
  GridItemWaterMist::~GridItemWaterMist((GridItemWaterMist *)this);
  return;
}


/* non-virtual thunk to GridItemIceWaterMist::~GridItemIceWaterMist() */

void __thiscall GridItemIceWaterMist::~GridItemIceWaterMist(GridItemIceWaterMist *this)

{
  ~GridItemIceWaterMist(this + -0x10);
  return;
}


/* GridItemIceWaterMist::~GridItemIceWaterMist() */

void __thiscall GridItemIceWaterMist::~GridItemIceWaterMist(GridItemIceWaterMist *this)

{
  ~GridItemIceWaterMist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemIceWaterMist::~GridItemIceWaterMist() */

void __thiscall GridItemIceWaterMist::~GridItemIceWaterMist(GridItemIceWaterMist *this)

{
  ~GridItemIceWaterMist(this + -0x10);
  return;
}


/* GridItemIceWaterMist::onUpdate() */

void __thiscall GridItemIceWaterMist::onUpdate(GridItemIceWaterMist *this)

{
  GridItemWaterMist::onUpdate((GridItemWaterMist *)this);
  applyChill(this);
  return;
}

