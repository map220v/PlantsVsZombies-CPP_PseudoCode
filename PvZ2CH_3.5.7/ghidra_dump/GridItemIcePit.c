// Class: GridItemIcePit


/* GridItemIcePit::CalcRenderOrder() const */

void __thiscall GridItemIcePit::CalcRenderOrder(GridItemIcePit *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemIcePit::CalcRenderOrder() const */

void __thiscall GridItemIcePit::CalcRenderOrder(GridItemIcePit *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemIcePit::~GridItemIcePit() */

void __thiscall GridItemIcePit::~GridItemIcePit(GridItemIcePit *this)

{
  *(undefined ***)this = &PTR_GetClass_06741a00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIcePit_06741cb8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemIcePit::~GridItemIcePit() */

void __thiscall GridItemIcePit::~GridItemIcePit(GridItemIcePit *this)

{
  ~GridItemIcePit(this + -0x10);
  return;
}


/* GridItemIcePit::~GridItemIcePit() */

void __thiscall GridItemIcePit::~GridItemIcePit(GridItemIcePit *this)

{
  ~GridItemIcePit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemIcePit::~GridItemIcePit() */

void __thiscall GridItemIcePit::~GridItemIcePit(GridItemIcePit *this)

{
  ~GridItemIcePit(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcePit::StaticClassInit() */

void GridItemIcePit::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemIcePit");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf3f08,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemIcePit::StaticGetClass() */

long * GridItemIcePit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIcePit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcePit::GetClass() const */

long * GridItemIcePit::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemIcePit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemIcePit::GridItemIcePit() */

void __thiscall GridItemIcePit::GridItemIcePit(GridItemIcePit *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06741a00;
  *(undefined ***)(this + 0x10) = &PTR__GridItemIcePit_06741cb8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemIcePit::StaticNew() */

GridItemIcePit * GridItemIcePit::StaticNew(void)

{
  GridItemIcePit *this;
  
  this = ::operator_new(0x1b0);
  GridItemIcePit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcePit::setState(GridItemIcePitState) */

void __thiscall GridItemIcePit::setState(GridItemIcePit *this,int param_2)

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
      goto LAB_03bf4a00;
    }
    if (param_2 != 1) goto LAB_03bf4a00;
    param_2 = 2;
  }
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"animation3");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
LAB_03bf4a00:
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemIcePit::SetIdle() */

void __thiscall GridItemIcePit::SetIdle(GridItemIcePit *this)

{
  setState(this,2);
  return;
}


/* GridItemIcePit::ResetTimer() */

void __thiscall GridItemIcePit::ResetTimer(GridItemIcePit *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcePit::isZombieTypeBlacklisted(std::string const&) */

void __thiscall GridItemIcePit::isZombieTypeBlacklisted(GridItemIcePit *this,string *param_1)

{
  char cVar1;
  GridItemIcePitProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemIcePitProps>();
  local_18 = FUN_03bf5e00(*(undefined8 *)(pGVar2 + 0xe8));
  local_10 = FUN_03bf5e50(*(undefined8 *)(pGVar2 + 0xf0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03bf6a08:
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
      goto LAB_03bf6a08;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemIcePit::applyIcePit() */

void __thiscall GridItemIcePit::applyIcePit(GridItemIcePit *this)

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
  GridItemIcePitProps *pGVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar12;
  Zombie *pZVar13;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = FUN_03bf258c(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemIcePitProps>();
  iVar1 = *(int *)(pGVar10 + 0xd4);
  iVar9 = FUN_03bf2590(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemIcePitProps>();
  iVar2 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemIcePitProps>();
  iVar3 = *(int *)(pGVar10 + 0xd0);
  pGVar10 = GridItem::GetProps<GridItemIcePitProps>();
  iVar4 = *(int *)(pGVar10 + 0xd4);
  pGVar10 = GridItem::GetProps<GridItemIcePitProps>();
  iVar5 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemIcePitProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
  pGVar10 = GridItem::GetProps<GridItemIcePitProps>();
                    /* WARNING: Load size is inaccurate */
  pZVar13._0_4_ = *(Zombie **)(pGVar10 + 0xe4);
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
          (cVar7 = Zombie::IsBerserk(this_00), cVar7 == '\0')) &&
         ((cVar7 = Zombie::HasFogImmune(this_00), cVar7 == '\0' &&
          (cVar7 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar7 == '\0')))) {
        cVar7 = (**(code **)(*(long *)this_00 + 0x508))(this_00);
        if (cVar7 == '\0') {
          Zombie::ApplyCondition(pZVar13._0_4_,0,this_00,0,1);
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


/* GridItemIcePit::onUpdate() */

void __thiscall GridItemIcePit::onUpdate(GridItemIcePit *this)

{
  GridItemIcePitProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1a8);
    pGVar1 = GridItem::GetProps<GridItemIcePitProps>();
    if (*(float *)(pGVar1 + 0xe0) < fVar2 - fVar3) {
      setState(this,3);
      applyIcePit(this);
      return;
    }
  }
  applyIcePit(this);
  return;
}

