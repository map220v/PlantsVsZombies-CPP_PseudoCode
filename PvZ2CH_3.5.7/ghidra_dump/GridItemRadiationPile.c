// Class: GridItemRadiationPile


/* GridItemRadiationPile::onGridItemInitialize() */

void __thiscall GridItemRadiationPile::onGridItemInitialize(GridItemRadiationPile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRadiationPile::setState(GridItemRadiationPileState) */

void __thiscall GridItemRadiationPile::setState(GridItemRadiationPile *this,int param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != 2) {
    if (param_2 == 3) {
      (**(code **)(*(long *)this + 0x48))();
      goto LAB_03e1b0b0;
    }
    if (param_2 != 1) goto LAB_03e1b0b0;
    param_2 = 2;
  }
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"anim1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
LAB_03e1b0b0:
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemRadiationPile::CalcRenderOrder() const */

void __thiscall GridItemRadiationPile::CalcRenderOrder(GridItemRadiationPile *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemRadiationPile::CalcRenderOrder() const */

void __thiscall GridItemRadiationPile::CalcRenderOrder(GridItemRadiationPile *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemRadiationPile::~GridItemRadiationPile() */

void __thiscall GridItemRadiationPile::~GridItemRadiationPile(GridItemRadiationPile *this)

{
  *(undefined ***)this = &PTR_GetClass_06816900;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRadiationPile_06816bb8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemRadiationPile::~GridItemRadiationPile() */

void __thiscall GridItemRadiationPile::~GridItemRadiationPile(GridItemRadiationPile *this)

{
  ~GridItemRadiationPile(this + -0x10);
  return;
}


/* GridItemRadiationPile::~GridItemRadiationPile() */

void __thiscall GridItemRadiationPile::~GridItemRadiationPile(GridItemRadiationPile *this)

{
  ~GridItemRadiationPile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRadiationPile::~GridItemRadiationPile() */

void __thiscall GridItemRadiationPile::~GridItemRadiationPile(GridItemRadiationPile *this)

{
  ~GridItemRadiationPile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRadiationPile::StaticClassInit() */

void GridItemRadiationPile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRadiationPile");
    (*pcVar2)(plVar1,asStack_10,FUN_042435b8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRadiationPile::StaticGetClass() */

long * GridItemRadiationPile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRadiationPile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRadiationPile::GetClass() const */

long * GridItemRadiationPile::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemRadiationPile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRadiationPile::GridItemRadiationPile() */

void __thiscall GridItemRadiationPile::GridItemRadiationPile(GridItemRadiationPile *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06816900;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRadiationPile_06816bb8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 1;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemRadiationPile::StaticNew() */

GridItemRadiationPile * GridItemRadiationPile::StaticNew(void)

{
  GridItemRadiationPile *this;
  
  this = ::operator_new(0x1b8);
  GridItemRadiationPile(this);
  return this;
}


/* GridItemRadiationPile::ResetTimer() */

void __thiscall GridItemRadiationPile::ResetTimer(GridItemRadiationPile *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRadiationPile::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
GridItemRadiationPile::isZombieTypeBlacklisted(GridItemRadiationPile *this,string *param_1)

{
  char cVar1;
  GridItemRadiationPileProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemRadiationPileProps>();
  local_18 = FUN_04244c38(*(undefined8 *)(pGVar2 + 0xe8));
  local_10 = FUN_04244c88(*(undefined8 *)(pGVar2 + 0xf0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_042461b8:
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
      goto LAB_042461b8;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRadiationPile::applyRadiation() */

void __thiscall GridItemRadiationPile::applyRadiation(GridItemRadiationPile *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  GridItemRadiationPileProps *pGVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar12;
  NukeLauncherSubSystem *this_02;
  float fVar13;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar7 = FUN_04241f70(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemRadiationPileProps>();
  iVar9 = *(int *)(pGVar10 + 0xd4);
  iVar8 = FUN_04241f74(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemRadiationPileProps>();
  iVar1 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemRadiationPileProps>();
  iVar2 = *(int *)(pGVar10 + 0xd0);
  pGVar10 = GridItem::GetProps<GridItemRadiationPileProps>();
  iVar3 = *(int *)(pGVar10 + 0xd4);
  pGVar10 = GridItem::GetProps<GridItemRadiationPileProps>();
  iVar4 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemRadiationPileProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar7 - iVar9,iVar8 - iVar1,iVar2 + 1 + iVar3,
             iVar4 + 1 + *(int *)(pGVar10 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
  GridItem::GetProps<GridItemRadiationPileProps>();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  do {
    bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30);
    if (!bVar5) {
LAB_0424800c:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar6 = RealObject::IsOnOpposingTeam((RealObject *)*puVar11,(RealObject *)this);
    if (cVar6 != '\0') {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar6 = isZombieTypeBlacklisted(this,(string *)(lVar12 + 8));
      if ((((((cVar6 == '\0') && (cVar6 = Zombie::IsOnGround(this_00), cVar6 != '\0')) &&
            (cVar6 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar6 == '\0')) &&
           ((cVar6 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar6 == '\0' &&
            (fVar13 = (float)FUN_04241f9c(*(undefined4 *)(this_00 + 0x280)), 0.0 < fVar13)))) &&
          ((cVar6 = Zombie::HasCondition(this_00,0x58), cVar6 == '\0' &&
           ((cVar6 = FUN_042439ac(*(undefined4 *)(this_00 + 0x28)), cVar6 == '\0' &&
            (cVar6 = Zombie::IsBerserk(this_00), cVar6 == '\0')))))) &&
         ((cVar6 = Zombie::HasFogImmune(this_00), cVar6 == '\0' &&
          ((cVar6 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar6 == '\0' &&
           (cVar6 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar6 == '\0')))))) {
        this_02 = Board::GetGameSubSystem<NukeLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        iVar9 = FUN_04241f6c(*(undefined4 *)(this + 0x50));
        NukeLauncherSubSystem::tryTransform(this_02,this_00,iVar9,*(int *)(this + 0x1b0),false);
        setState(this,3);
        goto LAB_0424800c;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* GridItemRadiationPile::onUpdate() */

void __thiscall GridItemRadiationPile::onUpdate(GridItemRadiationPile *this)

{
  GridItemRadiationPileProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemRadiationPileProps>();
    if (*(float *)(pGVar1 + 0xe0) < fVar2 - fVar3) {
      setState(this,3);
      applyRadiation(this);
      return;
    }
  }
  applyRadiation(this);
  return;
}

