// Class: GridItemShadowVanillaShadowEnergy


/* GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy() */

void __thiscall
GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy
          (GridItemShadowVanillaShadowEnergy *this)

{
  *(undefined ***)this = &PTR_GetClass_069a19b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemShadowVanillaShadowEnergy_069a1c68;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy() */

void __thiscall
GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy
          (GridItemShadowVanillaShadowEnergy *this)

{
  ~GridItemShadowVanillaShadowEnergy(this + -0x10);
  return;
}


/* GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy() */

void __thiscall
GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy
          (GridItemShadowVanillaShadowEnergy *this)

{
  ~GridItemShadowVanillaShadowEnergy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy() */

void __thiscall
GridItemShadowVanillaShadowEnergy::~GridItemShadowVanillaShadowEnergy
          (GridItemShadowVanillaShadowEnergy *this)

{
  ~GridItemShadowVanillaShadowEnergy(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaShadowEnergy::StaticClassInit() */

void GridItemShadowVanillaShadowEnergy::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemShadowVanillaShadowEnergy");
    (*pcVar2)(plVar1,asStack_10,FUN_04cdfed0,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemShadowVanillaShadowEnergy::StaticGetClass() */

long * GridItemShadowVanillaShadowEnergy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemShadowVanillaShadowEnergy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemShadowVanillaShadowEnergy::GetClass() const */

long * GridItemShadowVanillaShadowEnergy::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemShadowVanillaShadowEnergy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemShadowVanillaShadowEnergy::GridItemShadowVanillaShadowEnergy() */

void __thiscall
GridItemShadowVanillaShadowEnergy::GridItemShadowVanillaShadowEnergy
          (GridItemShadowVanillaShadowEnergy *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069a19b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemShadowVanillaShadowEnergy_069a1c68;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GridItemShadowVanillaShadowEnergy::StaticNew() */

GridItemShadowVanillaShadowEnergy * GridItemShadowVanillaShadowEnergy::StaticNew(void)

{
  GridItemShadowVanillaShadowEnergy *this;
  
  this = ::operator_new(0x1b8);
  GridItemShadowVanillaShadowEnergy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaShadowEnergy::onGridItemInitialize() */

void __thiscall
GridItemShadowVanillaShadowEnergy::onGridItemInitialize(GridItemShadowVanillaShadowEnergy *this)

{
  GridItemShadowVanillaShadowEnergyProps *pGVar1;
  PopAnimRig *pPVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar3;
  pGVar1 = GridItem::GetProps<GridItemShadowVanillaShadowEnergyProps>();
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(pGVar1 + 0xd0);
  pGVar1 = GridItem::GetProps<GridItemShadowVanillaShadowEnergyProps>();
  *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(pGVar1 + 0xd4);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"plantfood2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemShadowVanillaShadowEnergy::DamageEntity() */

void __thiscall
GridItemShadowVanillaShadowEnergy::DamageEntity(GridItemShadowVanillaShadowEnergy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar1 = FUN_04cde2cc(*(undefined4 *)(this + 0x130));
  uVar2 = FUN_04cde2d0(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,uVar1,
             uVar2);
  lVar3 = FUN_04cde368(local_20,local_18);
  if (lVar3 != 0) {
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    FUN_04ce3b34(uVar4,uVar5,this);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemShadowVanillaShadowEnergy::KillGridItem() */

void __thiscall
GridItemShadowVanillaShadowEnergy::KillGridItem(GridItemShadowVanillaShadowEnergy *this)

{
  DamageEntity(this);
  GridItem::KillGridItem((GridItem *)this);
  return;
}


/* GridItemShadowVanillaShadowEnergy::onUpdate() */

void __thiscall GridItemShadowVanillaShadowEnergy::onUpdate(GridItemShadowVanillaShadowEnergy *this)

{
  char cVar1;
  
  cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1b0),*(float *)(this + 0x1a8));
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x230))(this);
  }
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  return;
}

