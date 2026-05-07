// Class: GridItemVenom


/* GridItemVenom::CalcRenderOrder() const */

void __thiscall GridItemVenom::CalcRenderOrder(GridItemVenom *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemVenom::CalcRenderOrder() const */

void __thiscall GridItemVenom::CalcRenderOrder(GridItemVenom *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemVenom::~GridItemVenom() */

void __thiscall GridItemVenom::~GridItemVenom(GridItemVenom *this)

{
  *(undefined ***)this = &PTR_GetClass_06745ae0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVenom_06745d98;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemVenom::~GridItemVenom() */

void __thiscall GridItemVenom::~GridItemVenom(GridItemVenom *this)

{
  ~GridItemVenom(this + -0x10);
  return;
}


/* GridItemVenom::~GridItemVenom() */

void __thiscall GridItemVenom::~GridItemVenom(GridItemVenom *this)

{
  ~GridItemVenom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemVenom::~GridItemVenom() */

void __thiscall GridItemVenom::~GridItemVenom(GridItemVenom *this)

{
  ~GridItemVenom(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVenom::StaticClassInit() */

void GridItemVenom::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemVenom");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0718c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVenom::StaticGetClass() */

long * GridItemVenom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVenom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVenom::GetClass() const */

long * GridItemVenom::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVenom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVenom::GridItemVenom() */

void __thiscall GridItemVenom::GridItemVenom(GridItemVenom *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06745ae0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVenom_06745d98;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemVenom::StaticNew() */

GridItemVenom * GridItemVenom::StaticNew(void)

{
  GridItemVenom *this;
  
  this = ::operator_new(0x1b0);
  GridItemVenom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVenom::setState(GridItemVenomState) */

void __thiscall GridItemVenom::setState(GridItemVenom *this,int param_2)

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
      goto LAB_03c0763c;
    }
    if (param_2 != 1) goto LAB_03c0763c;
    param_2 = 2;
  }
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"re4");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
LAB_03c0763c:
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemVenom::SetIdle() */

void __thiscall GridItemVenom::SetIdle(GridItemVenom *this)

{
  setState(this,2);
  return;
}


/* GridItemVenom::ResetTimer() */

void __thiscall GridItemVenom::ResetTimer(GridItemVenom *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVenom::isZombieTypeBlacklisted(std::string const&) */

void __thiscall GridItemVenom::isZombieTypeBlacklisted(GridItemVenom *this,string *param_1)

{
  char cVar1;
  GridItemVenomProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemVenomProps>();
  local_18 = FUN_03c080f4(*(undefined8 *)(pGVar2 + 0xe8));
  local_10 = FUN_03c08144(*(undefined8 *)(pGVar2 + 0xf0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03c08b78:
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
      goto LAB_03c08b78;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVenom::applyVenom() */

void __thiscall GridItemVenom::applyVenom(GridItemVenom *this)

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
  GridItemVenomProps *pGVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar12;
  ZombieRomanBallista *this_02;
  undefined4 *puVar13;
  Zombie *pZVar14;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = FUN_03c05848(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemVenomProps>();
  iVar1 = *(int *)(pGVar10 + 0xd4);
  iVar9 = FUN_03c0584c(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemVenomProps>();
  iVar2 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemVenomProps>();
  iVar3 = *(int *)(pGVar10 + 0xd0);
  pGVar10 = GridItem::GetProps<GridItemVenomProps>();
  iVar4 = *(int *)(pGVar10 + 0xd4);
  pGVar10 = GridItem::GetProps<GridItemVenomProps>();
  iVar5 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemVenomProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
  pGVar10 = GridItem::GetProps<GridItemVenomProps>();
                    /* WARNING: Load size is inaccurate */
  pZVar14._0_4_ = *(Zombie **)(pGVar10 + 0xe4);
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
      if ((((cVar7 == '\0') && (cVar7 = Zombie::IsOnGround(this_00), cVar7 != '\0')) &&
          (cVar7 = Zombie::HasCondition(this_00,0x4d), cVar7 == '\0')) &&
         (((this_00 == (Zombie *)0x0 ||
           (bVar6 = Sexy::RtObject::IsA<ZombieRomanBallista>((RtObject *)this_00), !bVar6)) ||
          ((this_02 = Sexy::RtObject::Cast<ZombieRomanBallista>((RtObject *)this_00),
           this_02 == (ZombieRomanBallista *)0x0 ||
           (cVar7 = ZombieRomanBallista::CanApplySpecialCondition(this_02), cVar7 != '\0')))))) {
        Zombie::ApplyCondition(pZVar14._0_4_,0,this_00,0x4d,1);
        Zombie::SetExtraConditionTracker(0,this_00,0x4d);
        pGVar10 = GridItem::GetProps<GridItemVenomProps>();
        puVar13 = (undefined4 *)FUN_03c05b70(*(undefined8 *)(pGVar10 + 0x100));
        Zombie::SetConditionTracker(*puVar13,this_00,0x4d);
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


/* GridItemVenom::onUpdate() */

void __thiscall GridItemVenom::onUpdate(GridItemVenom *this)

{
  GridItemVenomProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemVenomProps>();
    if (*(float *)(pGVar1 + 0xe0) < fVar2 - fVar3) {
      setState(this,3);
      applyVenom(this);
      return;
    }
  }
  applyVenom(this);
  return;
}

