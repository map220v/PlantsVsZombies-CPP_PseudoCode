// Class: GridItemGridRegionAreaOfEffectTrap


/* GridItemGridRegionAreaOfEffectTrap::CanTriggerTile() */

bool __thiscall
GridItemGridRegionAreaOfEffectTrap::CanTriggerTile(GridItemGridRegionAreaOfEffectTrap *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = GridItemTriggerTile::isTimeForNextTrigger((GridItemTriggerTile *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(this + 0x1b0) == 0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGridRegionAreaOfEffectTrap::StaticClassInit() */

void GridItemGridRegionAreaOfEffectTrap::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGridRegionAreaOfEffectTrap");
    (*pcVar2)(plVar1,asStack_10,FUN_03e30b8c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGridRegionAreaOfEffectTrap::StaticGetClass() */

long * GridItemGridRegionAreaOfEffectTrap::StaticGetClass(void)

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
  uVar2 = GridItemTriggerTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGridRegionAreaOfEffectTrap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGridRegionAreaOfEffectTrap::GetClass() const */

long * GridItemGridRegionAreaOfEffectTrap::GetClass(void)

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
  uVar2 = GridItemTriggerTile::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGridRegionAreaOfEffectTrap",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGridRegionAreaOfEffectTrap::getLargestGridDistanceFromOurPosition(Sexy::Point const&)
   const */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::getLargestGridDistanceFromOurPosition
          (GridItemGridRegionAreaOfEffectTrap *this,Point *param_1)

{
  uint uVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  uVar1 = *(int *)param_1 - local_10 >> 0x1f;
  local_18 = (*(int *)param_1 - local_10 ^ uVar1) - uVar1;
  uVar1 = *(int *)(param_1 + 4) - local_c >> 0x1f;
  local_14 = (*(int *)(param_1 + 4) - local_c ^ uVar1) - uVar1;
  piVar2 = eastl::max_alt<int>(&local_18,&local_14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar2);
}


/* GridItemGridRegionAreaOfEffectTrap::GridItemGridRegionAreaOfEffectTrap() */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::GridItemGridRegionAreaOfEffectTrap
          (GridItemGridRegionAreaOfEffectTrap *this)

{
  undefined4 uVar1;
  
  GridItemTriggerTile::GridItemTriggerTile((GridItemTriggerTile *)this);
  *(undefined ***)this = &PTR_GetClass_06788de0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGridRegionAreaOfEffectTrap_067890c0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* GridItemGridRegionAreaOfEffectTrap::StaticNew() */

GridItemGridRegionAreaOfEffectTrap * GridItemGridRegionAreaOfEffectTrap::StaticNew(void)

{
  GridItemGridRegionAreaOfEffectTrap *this;
  
  this = ::operator_new(0x1d0);
  GridItemGridRegionAreaOfEffectTrap(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGridRegionAreaOfEffectTrap::onGridItemInitialize() */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::onGridItemInitialize(GridItemGridRegionAreaOfEffectTrap *this)

{
  GridItemGridRegionAreaOfEffectTrapProps *pGVar1;
  RtObject *this_00;
  EffectAnimRig_SwitchTile *this_01;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemRadiationPile::onGridItemInitialize((GridItemRadiationPile *)this);
  pGVar1 = GridItem::GetProps<GridItemGridRegionAreaOfEffectTrapProps>();
  FUN_03e301a8(this + 0x24);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1ac) = uVar2;
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<EffectAnimRig_SwitchTile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  EffectAnimRig_SwitchTile::SetBaseAnimName(this_01,(string *)(pGVar1 + 0x108));
  EffectAnimRig_SwitchTile::PlaySwitchUp(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGridRegionAreaOfEffectTrap::spawnDamageEffectAtGridLocation(Sexy::Point const&) const */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::spawnDamageEffectAtGridLocation
          (GridItemGridRegionAreaOfEffectTrap *this,Point *param_1)

{
  GridItemGridRegionAreaOfEffectTrapProps *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemGridRegionAreaOfEffectTrapProps>();
  Board::AddEffectObject
            (*(Board **)(gLawnApp + 0x9f0),(string *)(pGVar1 + 0x100),*(int *)param_1,
             *(int *)(param_1 + 4));
  return;
}


/* GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap() */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap
          (GridItemGridRegionAreaOfEffectTrap *this)

{
  *(undefined ***)this = &PTR_GetClass_06788de0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGridRegionAreaOfEffectTrap_067890c0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x1b8));
  GridItemTriggerTile::~GridItemTriggerTile((GridItemTriggerTile *)this);
  return;
}


/* non-virtual thunk to GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap() */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap
          (GridItemGridRegionAreaOfEffectTrap *this)

{
  ~GridItemGridRegionAreaOfEffectTrap(this + -0x10);
  return;
}


/* GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap() */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap
          (GridItemGridRegionAreaOfEffectTrap *this)

{
  ~GridItemGridRegionAreaOfEffectTrap(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap() */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::~GridItemGridRegionAreaOfEffectTrap
          (GridItemGridRegionAreaOfEffectTrap *this)

{
  ~GridItemGridRegionAreaOfEffectTrap(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGridRegionAreaOfEffectTrap::handleTargetCollisions(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > const&) */

void GridItemGridRegionAreaOfEffectTrap::handleTargetCollisions(vector *param_1)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  GridItemGridRegionAreaOfEffectTrapProps *pGVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  RtObject *this_00;
  EffectAnimRig_SwitchTile *this_01;
  undefined4 uVar10;
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar6 = GridItem::GetProps<GridItemGridRegionAreaOfEffectTrapProps>();
  iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar5 = SharkMinion::getRow((SharkMinion *)param_1);
  local_18[0] = 0;
  local_10[0] = iVar4 - *(int *)(pGVar6 + 0x110);
  piVar7 = eastl::max_alt<int>(local_18,local_10);
  iVar1 = *piVar7;
  local_18[0] = BoardConstants::NUMBER_OF_COLUMNS();
  local_18[0] = local_18[0] + -1;
  local_10[0] = *(int *)(pGVar6 + 0x110) + iVar4;
  piVar7 = eastl::min_alt<int>(local_18,local_10);
  iVar4 = *piVar7;
  local_18[0] = 0;
  this = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(param_1 + 0x1b8);
  local_10[0] = iVar5 - *(int *)(pGVar6 + 0x114);
  piVar7 = eastl::max_alt<int>(local_18,local_10);
  iVar2 = *piVar7;
  local_18[0] = BoardConstants::NUMBER_OF_ROWS();
  local_18[0] = local_18[0] + -1;
  local_10[0] = *(int *)(pGVar6 + 0x114) + iVar5;
  piVar7 = eastl::min_alt<int>(local_18,local_10);
  iVar5 = *piVar7;
  for (; iVar3 = iVar2, iVar1 <= iVar4; iVar1 = iVar1 + 1) {
    for (; iVar3 <= iVar5; iVar3 = iVar3 + 1) {
      Sexy::Point::Point((Point *)local_10,iVar1,iVar3);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this,(Point *)local_10);
    }
  }
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  FUN_03e31bb4(uVar8,uVar9,param_1);
  uVar10 = PVZ_T();
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  *(undefined4 *)(param_1 + 0x1ac) = uVar10;
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  this_01 = Sexy::RtObject::Cast<EffectAnimRig_SwitchTile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  EffectAnimRig_SwitchTile::PlaySwitchDown(this_01);
  std::string::string((string *)local_10,"Play_LostCity_Trap_TriggerPlate");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)local_10,0.0);
  std::string::~string((string *)local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGridRegionAreaOfEffectTrap::onUpdate() */

void __thiscall
GridItemGridRegionAreaOfEffectTrap::onUpdate(GridItemGridRegionAreaOfEffectTrap *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_01;
  EffectAnimRig_SwitchTile *this_02;
  GridItemGridRegionAreaOfEffectTrapProps *pGVar4;
  Point *pPVar5;
  float fVar6;
  undefined4 uVar7;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  iVar2 = *(int *)(this + 0x1b0);
  if (iVar2 == 1) {
    this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x1b8);
    pGVar4 = GridItem::GetProps<GridItemGridRegionAreaOfEffectTrapProps>();
    cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(this_00);
    if (cVar1 == '\0') {
      fVar6 = (float)PVZ_T();
      if (*(float *)(this + 0x1ac) <= fVar6) {
        pPVar5 = (Point *)std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)this_00);
        iVar2 = getLargestGridDistanceFromOurPosition(this,pPVar5);
        do {
          pPVar5 = (Point *)std::
                            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)this_00);
          spawnDamageEffectAtGridLocation(this,pPVar5);
          FUN_03e30198(this + 0x1c0);
          cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty(this_00);
          if (cVar1 == '\0') {
            pPVar5 = (Point *)std::
                              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                      *)this_00);
            iVar3 = getLargestGridDistanceFromOurPosition(this,pPVar5);
          }
          else {
            iVar3 = std::numeric_limits<int>::max();
          }
        } while (iVar3 <= iVar2);
        fVar6 = (float)PVZ_T();
        *(float *)(this + 0x1ac) = fVar6 + *(float *)(pGVar4 + 0x118);
      }
    }
    else {
      *(undefined4 *)(this + 0x1b0) = 2;
      GridItemTriggerTile::resetTriggerTime((GridItemTriggerTile *)this);
      uVar7 = PVZ_EOT();
      *(undefined4 *)(this + 0x1ac) = uVar7;
    }
  }
  else if (iVar2 == 2) {
    cVar1 = GridItemTriggerTile::isTimeForNextTrigger((GridItemTriggerTile *)this);
    if (cVar1 != '\0') {
      GridItemAnimation::GetAnimRig();
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      this_02 = Sexy::RtObject::Cast<EffectAnimRig_SwitchTile>(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
      EffectAnimRig_SwitchTile::PlaySwitchUp(this_02);
      std::string::string((string *)avStack_20,"Play_LostCity_Trap_TriggerPlate");
      RealObject::PlayPositionalSound((RealObject *)this,(string *)avStack_20,0.0);
      std::string::~string((string *)avStack_20);
      nop();
      *(undefined4 *)(this + 0x1b0) = 0;
    }
  }
  else if ((iVar2 == 0) &&
          (cVar1 = GridItemTriggerTile::isTimeForNextTrigger((GridItemTriggerTile *)this),
          cVar1 != '\0')) {
    (**(code **)(*(long *)this + 0x2b8))(avStack_20,this);
    cVar1 = GridItemTriggerTile::isThereValidTriggeringEntity
                      ((GridItemTriggerTile *)this,(vector *)avStack_20);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x2c8))(this,avStack_20);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

