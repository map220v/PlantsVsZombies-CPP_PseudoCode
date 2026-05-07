// Class: GridItemPotionPoisonPile


/* GridItemPotionPoisonPile::CalcRenderOrder() const */

void __thiscall GridItemPotionPoisonPile::CalcRenderOrder(GridItemPotionPoisonPile *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemPotionPoisonPile::CalcRenderOrder() const */

void __thiscall GridItemPotionPoisonPile::CalcRenderOrder(GridItemPotionPoisonPile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemPotionPoisonPile::~GridItemPotionPoisonPile() */

void __thiscall GridItemPotionPoisonPile::~GridItemPotionPoisonPile(GridItemPotionPoisonPile *this)

{
  *(undefined ***)this = &PTR_GetClass_06784ea0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPotionPoisonPile_06785158;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemPotionPoisonPile::~GridItemPotionPoisonPile() */

void __thiscall GridItemPotionPoisonPile::~GridItemPotionPoisonPile(GridItemPotionPoisonPile *this)

{
  ~GridItemPotionPoisonPile(this + -0x10);
  return;
}


/* GridItemPotionPoisonPile::~GridItemPotionPoisonPile() */

void __thiscall GridItemPotionPoisonPile::~GridItemPotionPoisonPile(GridItemPotionPoisonPile *this)

{
  ~GridItemPotionPoisonPile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemPotionPoisonPile::~GridItemPotionPoisonPile() */

void __thiscall GridItemPotionPoisonPile::~GridItemPotionPoisonPile(GridItemPotionPoisonPile *this)

{
  ~GridItemPotionPoisonPile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPotionPoisonPile::StaticClassInit() */

void GridItemPotionPoisonPile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemPotionPoisonPile");
    (*pcVar2)(plVar1,asStack_10,FUN_03e1a02c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPotionPoisonPile::StaticGetClass() */

long * GridItemPotionPoisonPile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPotionPoisonPile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPotionPoisonPile::GetClass() const */

long * GridItemPotionPoisonPile::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemPotionPoisonPile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemPotionPoisonPile::GridItemPotionPoisonPile() */

void __thiscall GridItemPotionPoisonPile::GridItemPotionPoisonPile(GridItemPotionPoisonPile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06784ea0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemPotionPoisonPile_06785158;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = uVar1;
  return;
}


/* GridItemPotionPoisonPile::StaticNew() */

GridItemPotionPoisonPile * GridItemPotionPoisonPile::StaticNew(void)

{
  GridItemPotionPoisonPile *this;
  
  this = ::operator_new(0x1b8);
  GridItemPotionPoisonPile(this);
  return this;
}


/* GridItemPotionPoisonPile::onGridItemInitialize() */

void __thiscall GridItemPotionPoisonPile::onGridItemInitialize(GridItemPotionPoisonPile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = uVar1;
  return;
}


/* GridItemPotionPoisonPile::ResetTimer() */

void __thiscall GridItemPotionPoisonPile::ResetTimer(GridItemPotionPoisonPile *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = uVar1;
  GridItemRadiationPile::setState((GridItemRadiationPile *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemPotionPoisonPile::applyPoison() */

void __thiscall GridItemPotionPoisonPile::applyPoison(GridItemPotionPoisonPile *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  GridItemPotionPoisonPileProps *pGVar10;
  undefined8 *puVar11;
  long *extraout_x0;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  Insets aIStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  iVar8 = FUN_03e19878(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
  iVar1 = *(int *)(pGVar10 + 0xd4);
  iVar9 = FUN_03e1987c(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
  iVar2 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
  iVar3 = *(int *)(pGVar10 + 0xd0);
  pGVar10 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
  iVar4 = *(int *)(pGVar10 + 0xd4);
  pGVar10 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
  iVar5 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
  Sexy::Insets::Insets
            (aIStack_68,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_80,1,aIStack_68);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar7 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar7) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    cVar6 = RealObject::IsOnOpposingTeam((RealObject *)*puVar11,(RealObject *)this);
    if (((cVar6 != '\0') && (nop(), extraout_x0 != (long *)0x0)) &&
       (0.0 < *(float *)(extraout_x0 + 0x1b))) {
      DamageInfo::DamageInfo((DamageInfo *)aIStack_68);
      pGVar10 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
      local_60 = *(undefined4 *)(pGVar10 + 0xe8);
      (**(code **)(*extraout_x0 + 0x110))(extraout_x0,aIStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aIStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemPotionPoisonPile::onUpdate() */

void __thiscall GridItemPotionPoisonPile::onUpdate(GridItemPotionPoisonPile *this)

{
  GridItemPotionPoisonPileProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
    if (*(float *)(pGVar1 + 0xe0) < fVar2 - fVar3) {
      GridItemRadiationPile::setState((GridItemRadiationPile *)this,3);
    }
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1b0) < fVar2) {
    applyPoison(this);
    fVar2 = (float)PVZ_T();
    pGVar1 = GridItem::GetProps<GridItemPotionPoisonPileProps>();
    *(float *)(this + 0x1b0) = fVar2 + *(float *)(pGVar1 + 0xe4);
  }
  return;
}


/* GridItemPotionPoisonPile::SetIdle() */

void __thiscall GridItemPotionPoisonPile::SetIdle(GridItemPotionPoisonPile *this)

{
  GridItemRadiationPile::setState((GridItemRadiationPile *)this,2);
  return;
}

