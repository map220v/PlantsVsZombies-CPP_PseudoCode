// Class: ZombiePushGridItemActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGridItemActionDefinition::StaticClassInit() */

void ZombiePushGridItemActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePushGridItemActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0462a7f0,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePushGridItemActionDefinition::StaticGetClass() */

long * ZombiePushGridItemActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePushGridItemActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePushGridItemActionDefinition::GetClass() const */

long * ZombiePushGridItemActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePushGridItemActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGridItemActionDefinition::getGridPushDestination(GridItem*) const */

void ZombiePushGridItemActionDefinition::getGridPushDestination(GridItem *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  Point *in_x8;
  undefined1 auVar1 [16];
  TPoint<int> aTStack_20 [8];
  Point aPStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar1 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x1);
  BoardTransforms::BoardSpaceToGridUnbounded(auVar1._0_8_,auVar1._8_8_);
  Sexy::Point::Point(aPStack_18,-1,0);
  Sexy::TPoint<int>::operator+(aTStack_20,(TPoint *)aPStack_18);
  Sexy::Point::Point(in_x8,aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePushGridItemActionDefinition::isGriditemInFlight(GridItem const*) const */

undefined1 __thiscall
ZombiePushGridItemActionDefinition::isGriditemInFlight
          (ZombiePushGridItemActionDefinition *this,GridItem *param_1)

{
  undefined1 uVar1;
  GridItemBoardEntityConditionTarget *pGVar2;
  
  if ((param_1 != (GridItem *)0x0) &&
     (pGVar2 = Sexy::RtObject::Cast<GridItemBoardEntityConditionTarget>((RtObject *)param_1),
     pGVar2 != (GridItemBoardEntityConditionTarget *)0x0)) {
    uVar1 = (**(code **)(*(long *)pGVar2 + 0x2b0))();
    return uVar1;
  }
  return 0;
}


/* ZombiePushGridItemActionDefinition::ZombiePushGridItemActionDefinition() */

void __thiscall
ZombiePushGridItemActionDefinition::ZombiePushGridItemActionDefinition
          (ZombiePushGridItemActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_0687e7a0;
  GridItemRestrictionSet::GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x38));
  GridItemRestrictionSet::GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x60));
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 0x88));
  *(undefined4 *)(this + 0xb0) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0xb4));
  return;
}


/* ZombiePushGridItemActionDefinition::StaticNew() */

ZombiePushGridItemActionDefinition * ZombiePushGridItemActionDefinition::StaticNew(void)

{
  ZombiePushGridItemActionDefinition *this;
  
  this = ::operator_new(200);
  ZombiePushGridItemActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGridItemActionDefinition::FindReachableGridItem(Zombie*) const */

void __thiscall
ZombiePushGridItemActionDefinition::FindReachableGridItem
          (ZombiePushGridItemActionDefinition *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 extraout_x0;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_48 [4];
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  (**(code **)(*(long *)param_1 + 0xd0))(auStack_48,param_1);
  Sexy::Insets::Insets((Insets *)&local_30,(Insets *)(this + 0xb4));
  fVar6 = *(float *)(param_1 + 0x1c);
  fVar5 = (float)FUN_04629d20(*(undefined4 *)(param_1 + 0x18),fVar6,*(undefined4 *)(param_1 + 0x20))
  ;
  local_30 = (int)(((float)local_30 + fVar5) - (float)local_28);
  local_2c = (int)(((float)local_2c + fVar6) - (float)local_24);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,4,(Insets *)&local_30,iVar3,iVar3 + local_44 + -1);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar1 = GridItemRestrictionSet::IsIncluded((GridItem *)(this + 0x38));
    uVar4 = extraout_x0;
    if (cVar1 != '\0') goto LAB_0462bbdc;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  uVar4 = 0;
LAB_0462bbdc:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* ZombiePushGridItemActionDefinition::FindGriditemAt(Sexy::Point const&) const */

void __thiscall
ZombiePushGridItemActionDefinition::FindGriditemAt
          (ZombiePushGridItemActionDefinition *this,Point *param_1)

{
  findFirstGridItemInSetAt(param_1,(GridItemRestrictionSet *)(this + 0x38));
  return;
}


/* ZombiePushGridItemActionDefinition::findPushBlockerAt(Sexy::Point const&) const */

void __thiscall
ZombiePushGridItemActionDefinition::findPushBlockerAt
          (ZombiePushGridItemActionDefinition *this,Point *param_1)

{
  findFirstGridItemInSetAt(param_1,(GridItemRestrictionSet *)(this + 0x60));
  return;
}


/* ZombiePushGridItemActionDefinition::isPushBlockedAt(Sexy::Point const&) const */

undefined8 __thiscall
ZombiePushGridItemActionDefinition::isPushBlockedAt
          (ZombiePushGridItemActionDefinition *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*(int *)param_1 < 0) || (lVar2 = findPushBlockerAt(this,param_1), lVar2 != 0)) ||
     ((lVar2 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0)), lVar2 != 0 &&
      (cVar1 = PlantGroup::HasNoncrushablePlant(), cVar1 != '\0')))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGridItemActionDefinition::findPlantAt(Sexy::Point const&) const */

void __thiscall
ZombiePushGridItemActionDefinition::findPlantAt
          (ZombiePushGridItemActionDefinition *this,Point *param_1)

{
  char cVar1;
  undefined8 extraout_x0;
  undefined8 uVar2;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,1,
             *(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  if (cVar1 == '\0') {
    FUN_04629d18(local_20[0]);
    nop();
    uVar2 = extraout_x0;
  }
  else {
    uVar2 = 0;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePushGridItemActionDefinition::CanPushGridItem(Zombie*, GridItem*) const */

void __thiscall
ZombiePushGridItemActionDefinition::CanPushGridItem
          (ZombiePushGridItemActionDefinition *this,Zombie *param_1,GridItem *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  GridItem *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(param_1,0x40);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::HasCondition(param_1,0x41), cVar1 == '\0')) &&
      (cVar1 = Zombie::HasCondition(param_1,0x60), cVar1 == '\0')) &&
     ((cVar1 = Zombie::HasCondition(param_1,0x42), cVar1 == '\0' &&
      (cVar1 = Zombie::HasCondition(param_1,0x43), cVar1 == '\0')))) {
    cVar1 = Zombie::HasCondition(param_1,0x44);
    if (cVar1 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      local_38 = param_2;
      cVar1 = isGriditemInFlight(this,param_2);
      while (cVar1 == '\0') {
        std::vector<GridItem*,std::allocator<GridItem*>>::push_back
                  ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20,&local_38);
        std::
        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
        ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)avStack_20);
        getGridPushDestination((GridItem *)this);
        local_38 = (GridItem *)FindGriditemAt(this,(Point *)&local_28);
        if (local_38 == (GridItem *)0x0) {
LAB_0462cffc:
          std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_20);
          getGridPushDestination((GridItem *)this);
          bVar3 = isPushBlockedAt(this,(Point *)&local_28);
          bVar3 = bVar3 ^ 1;
          std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                    ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
          goto LAB_0462ce98;
        }
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
        local_30 = std::
                   find<__gnu_cxx::__normal_iterator<GridItem**,std::vector<GridItem*,std::allocator<GridItem*>>>,GridItem*>
                             (uVar4,uVar5,&local_38);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (!bVar2) goto LAB_0462cffc;
        cVar1 = isGriditemInFlight(this,local_38);
      }
      std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
      bVar3 = 0;
      goto LAB_0462ce98;
    }
  }
  bVar3 = 0;
LAB_0462ce98:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


/* ZombiePushGridItemActionDefinition::shouldPushGridItem(GridItem*, ZombieWithActions*) const */

undefined8 __thiscall
ZombiePushGridItemActionDefinition::shouldPushGridItem
          (ZombiePushGridItemActionDefinition *this,GridItem *param_1,ZombieWithActions *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(code **)(*(long *)param_2 + 0xa50) == ZombieWithActions::TryJamAction) {
    cVar1 = ZombieWithActions::TryJamAction((GridItem *)param_2);
  }
  else {
    cVar1 = (**(code **)(*(long *)param_2 + 0xa50))();
  }
  if ((cVar1 == '\0') && (cVar1 = CanPushGridItem(this,(Zombie *)param_2,param_1), cVar1 != '\0')) {
    uVar2 = RealObject::IsOnTeam(param_2,2);
    return uVar2;
  }
  return 0;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0462d168 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombiePushGridItemActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombiePushGridItemActionDefinition::TryStartAction
          (ZombiePushGridItemActionDefinition *this,RtWeakPtrBase *param_2,Zombie *param_3)

{
  GridItem *pGVar1;
  ZombieWithActions *pZVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = (GridItem *)FindReachableGridItem(this,param_3);
  if (pGVar1 != (GridItem *)0x0) {
    pZVar2 = (ZombieWithActions *)shouldPushGridItem(this,pGVar1,(ZombieWithActions *)param_3);
    uVar3 = (ulong)pZVar2 & 0xff;
    if (((ulong)pZVar2 & 0xff) != 0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      ZombieWithActions::QueueAction<ZombiePushGriditemActionHandler>(pZVar2,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_0462d124;
    }
  }
  uVar3 = 0;
LAB_0462d124:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZombiePushGridItemActionDefinition::~ZombiePushGridItemActionDefinition() */

void __thiscall
ZombiePushGridItemActionDefinition::~ZombiePushGridItemActionDefinition
          (ZombiePushGridItemActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0687e7a0;
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 0x88));
  GridItemRestrictionSet::~GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x60));
  GridItemRestrictionSet::~GridItemRestrictionSet((GridItemRestrictionSet *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombiePushGridItemActionDefinition::~ZombiePushGridItemActionDefinition() */

void __thiscall
ZombiePushGridItemActionDefinition::~ZombiePushGridItemActionDefinition
          (ZombiePushGridItemActionDefinition *this)

{
  ~ZombiePushGridItemActionDefinition(this);
  AK::FreeHook(this);
  return;
}

