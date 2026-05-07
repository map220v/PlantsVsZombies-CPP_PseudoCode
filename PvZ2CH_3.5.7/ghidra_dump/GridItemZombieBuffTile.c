// Class: GridItemZombieBuffTile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTile::CheckGridPlants(int, int) */

void __thiscall
GridItemZombieBuffTile::CheckGridPlants(GridItemZombieBuffTile *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,param_1,param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar2);
    if (((bVar1) && (nop(), this_00 != (Plant *)0x0)) && (0.0 < *(float *)(this_00 + 0xd8))) {
      Plant::beThrown(this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTile::canApplyEffects(BoardEntity const*) */

byte __thiscall
GridItemZombieBuffTile::canApplyEffects(GridItemZombieBuffTile *this,BoardEntity *param_1)

{
  byte bVar1;
  
  bVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this);
  return bVar1 ^ 1;
}


/* GridItemZombieBuffTile::CalcRenderOrder() const */

void __thiscall GridItemZombieBuffTile::CalcRenderOrder(GridItemZombieBuffTile *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemZombieBuffTile::CalcRenderOrder() const */

void __thiscall GridItemZombieBuffTile::CalcRenderOrder(GridItemZombieBuffTile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemZombieBuffTile::~GridItemZombieBuffTile() */

void __thiscall GridItemZombieBuffTile::~GridItemZombieBuffTile(GridItemZombieBuffTile *this)

{
  *(undefined ***)this = &PTR_GetClass_06783f70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBuffTile_06784248;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemZombieBuffTile::~GridItemZombieBuffTile() */

void __thiscall GridItemZombieBuffTile::~GridItemZombieBuffTile(GridItemZombieBuffTile *this)

{
  ~GridItemZombieBuffTile(this + -0x10);
  return;
}


/* GridItemZombieBuffTile::~GridItemZombieBuffTile() */

void __thiscall GridItemZombieBuffTile::~GridItemZombieBuffTile(GridItemZombieBuffTile *this)

{
  ~GridItemZombieBuffTile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemZombieBuffTile::~GridItemZombieBuffTile() */

void __thiscall GridItemZombieBuffTile::~GridItemZombieBuffTile(GridItemZombieBuffTile *this)

{
  ~GridItemZombieBuffTile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTile::StaticClassInit() */

void GridItemZombieBuffTile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieBuffTile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e16830,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTile::StaticGetClass() */

long * GridItemZombieBuffTile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBuffTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTile::GetClass() const */

long * GridItemZombieBuffTile::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemZombieBuffTile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieBuffTile::GridItemZombieBuffTile() */

void __thiscall GridItemZombieBuffTile::GridItemZombieBuffTile(GridItemZombieBuffTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06783f70;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieBuffTile_06784248;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemZombieBuffTile::StaticNew() */

GridItemZombieBuffTile * GridItemZombieBuffTile::StaticNew(void)

{
  GridItemZombieBuffTile *this;
  
  this = ::operator_new(0x1b0);
  GridItemZombieBuffTile(this);
  return this;
}


/* GridItemZombieBuffTile::GetCantPlantReason() const */

undefined8 GridItemZombieBuffTile::GetCantPlantReason(void)

{
  return 0x6d;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTile::doApplyEffects(std::vector<BoardEntity*, std::allocator<BoardEntity*> >
   const&) */

void __thiscall GridItemZombieBuffTile::doApplyEffects(GridItemZombieBuffTile *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03e16b38(*(undefined8 *)param_1);
  local_10 = FUN_03e16b88(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar4 = *puVar3;
    cVar2 = (**(code **)(*(long *)this + 0x2b8))(this,uVar4);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)this + 0x2c0))(this,uVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTile::getValidZombies(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall
GridItemZombieBuffTile::getValidZombies(GridItemZombieBuffTile *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  GridItemZombieBuffTileProps *pGVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = FUN_03e15180(*(undefined4 *)(this + 0x130));
  pGVar8 = GridItem::GetProps<GridItemZombieBuffTileProps>();
  iVar1 = *(int *)(pGVar8 + 0xd4);
  iVar7 = FUN_03e15184(*(undefined4 *)(this + 0x134));
  pGVar8 = GridItem::GetProps<GridItemZombieBuffTileProps>();
  iVar2 = *(int *)(pGVar8 + 0xd8);
  pGVar8 = GridItem::GetProps<GridItemZombieBuffTileProps>();
  iVar3 = *(int *)(pGVar8 + 0xd0);
  pGVar8 = GridItem::GetProps<GridItemZombieBuffTileProps>();
  iVar4 = *(int *)(pGVar8 + 0xd4);
  pGVar8 = GridItem::GetProps<GridItemZombieBuffTileProps>();
  iVar5 = *(int *)(pGVar8 + 0xd8);
  pGVar8 = GridItem::GetProps<GridItemZombieBuffTileProps>();
  Sexy::Insets::Insets
            (aIStack_18,iVar6 - iVar1,iVar7 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar8 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(param_1,2,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTile::applyEffects() */

void __thiscall GridItemZombieBuffTile::applyEffects(GridItemZombieBuffTile *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  getValidZombies(this,(vector *)avStack_20);
  (**(code **)(*(long *)this + 0x2b0))(this,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTile::setState(GridItemZombieBuffTileState) */

void __thiscall GridItemZombieBuffTile::setState(GridItemZombieBuffTile *this,int param_2)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar2 = SharkMinion::getRow((SharkMinion *)this);
    CheckGridPlants(this,iVar1,iVar2);
    GridItemAnimation::GetAnimRig();
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else if (param_2 == 3) {
    (**(code **)(*(long *)this + 0x48))();
  }
  else if (param_2 == 1) {
    GridItemAnimation::GetAnimRig();
    pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"birth");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onResetFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTile::ResetTimer() */

void __thiscall GridItemZombieBuffTile::ResetTimer(GridItemZombieBuffTile *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* GridItemZombieBuffTile::SetIdle() */

void __thiscall GridItemZombieBuffTile::SetIdle(GridItemZombieBuffTile *this)

{
  setState(this,1);
  return;
}


/* GridItemZombieBuffTile::onGridItemInitialize() */

void __thiscall GridItemZombieBuffTile::onGridItemInitialize(GridItemZombieBuffTile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  RealObject::JoinTeam((RealObject *)this,2);
  SetIdle(this);
  return;
}


/* GridItemZombieBuffTile::onResetFinished(std::string const&) */

void GridItemZombieBuffTile::onResetFinished(string *param_1)

{
  setState((GridItemZombieBuffTile *)param_1,2);
  return;
}


/* GridItemZombieBuffTile::onUpdate() */

void __thiscall GridItemZombieBuffTile::onUpdate(GridItemZombieBuffTile *this)

{
  GridItemZombieBuffTileProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemZombieBuffTileProps>();
    if (*(float *)(pGVar1 + 0xe0) < fVar2 - fVar3) {
      setState(this,3);
      (**(code **)(*(long *)this + 0x2a8))(this);
      return;
    }
  }
  (**(code **)(*(long *)this + 0x2a8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieBuffTile::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemZombieBuffTile::GatherPlantingRestrictions
          (GridItemZombieBuffTile *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieBuffTile::getRenderOffset() */

undefined4 GridItemZombieBuffTile::getRenderOffset(void)

{
  undefined4 uVar1;
  
  uVar1 = GridItemAnimation::getRenderOffset();
  return uVar1;
}

