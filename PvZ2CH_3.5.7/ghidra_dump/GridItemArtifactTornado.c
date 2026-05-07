// Class: GridItemArtifactTornado


/* GridItemArtifactTornado::onDeadFinished(std::string const&) */

void GridItemArtifactTornado::onDeadFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemArtifactTornado::CalcRenderOrder() const */

void __thiscall GridItemArtifactTornado::CalcRenderOrder(GridItemArtifactTornado *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemArtifactTornado::CalcRenderOrder() const */

void __thiscall GridItemArtifactTornado::CalcRenderOrder(GridItemArtifactTornado *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemArtifactTornado::~GridItemArtifactTornado() */

void __thiscall GridItemArtifactTornado::~GridItemArtifactTornado(GridItemArtifactTornado *this)

{
  *(undefined ***)this = &PTR_GetClass_0668aa40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactTornado_0668acf8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemArtifactTornado::~GridItemArtifactTornado() */

void __thiscall GridItemArtifactTornado::~GridItemArtifactTornado(GridItemArtifactTornado *this)

{
  ~GridItemArtifactTornado(this + -0x10);
  return;
}


/* GridItemArtifactTornado::~GridItemArtifactTornado() */

void __thiscall GridItemArtifactTornado::~GridItemArtifactTornado(GridItemArtifactTornado *this)

{
  ~GridItemArtifactTornado(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArtifactTornado::~GridItemArtifactTornado() */

void __thiscall GridItemArtifactTornado::~GridItemArtifactTornado(GridItemArtifactTornado *this)

{
  ~GridItemArtifactTornado(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTornado::StaticClassInit() */

void GridItemArtifactTornado::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactTornado");
    (*pcVar2)(plVar1,asStack_10,FUN_0375edc8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactTornado::StaticGetClass() */

long * GridItemArtifactTornado::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArtifactTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactTornado::GetClass() const */

long * GridItemArtifactTornado::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArtifactTornado",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactTornado::GridItemArtifactTornado() */

void __thiscall GridItemArtifactTornado::GridItemArtifactTornado(GridItemArtifactTornado *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0668aa40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactTornado_0668acf8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* GridItemArtifactTornado::StaticNew() */

GridItemArtifactTornado * GridItemArtifactTornado::StaticNew(void)

{
  GridItemArtifactTornado *this;
  
  this = ::operator_new(0x1b8);
  GridItemArtifactTornado(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTornado::setState(GridItemArtifactTornadoState) */

void __thiscall GridItemArtifactTornado::setState(GridItemArtifactTornado *this,int param_2)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 2) {
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  else if (param_2 == 3) {
    (**(code **)(*(long *)this + 0x48))();
  }
  else if (param_2 == 1) {
    setState(this,2);
  }
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactTornado::onResetFinished(std::string const&) */

void GridItemArtifactTornado::onResetFinished(string *param_1)

{
  setState((GridItemArtifactTornado *)param_1,2);
  return;
}


/* GridItemArtifactTornado::SetIdle() */

void __thiscall GridItemArtifactTornado::SetIdle(GridItemArtifactTornado *this)

{
  setState(this,2);
  return;
}


/* GridItemArtifactTornado::ResetTimer() */

void __thiscall GridItemArtifactTornado::ResetTimer(GridItemArtifactTornado *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTornado::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
GridItemArtifactTornado::isZombieTypeBlacklisted(GridItemArtifactTornado *this,string *param_1)

{
  char cVar1;
  GridItemArtifactTornadoProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemArtifactTornadoProps>();
  local_18 = FUN_037450a8(*(undefined8 *)(pGVar2 + 0xe8));
  local_10 = FUN_037450f8(*(undefined8 *)(pGVar2 + 0xf0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03751678:
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
      goto LAB_03751678;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTornado::onZombieLanding(Zombie*) */

void __thiscall
GridItemArtifactTornado::onZombieLanding(GridItemArtifactTornado *this,Zombie *param_1)

{
  char cVar1;
  GridItemArtifactTornadoProps *pGVar2;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_1 != (Zombie *)0x0) &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
     (pGVar2 = GridItem::GetProps<GridItemArtifactTornadoProps>(), 0.0 < *(float *)(pGVar2 + 0x100))
     ) {
    DamageInfo::DamageInfo(aDStack_68);
    pGVar2 = GridItem::GetProps<GridItemArtifactTornadoProps>();
    local_60 = *(undefined4 *)(pGVar2 + 0x100);
    (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTornado::tryAbsorbZombies() */

void __thiscall GridItemArtifactTornado::tryAbsorbZombies(GridItemArtifactTornado *this)

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
  ZombieTosserSubSystem *pZVar10;
  GridItemArtifactTornadoProps *pGVar11;
  undefined8 *puVar12;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_e0;
  undefined8 local_d8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  Insets aIStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  iVar8 = FUN_03723b44(*(undefined4 *)(this + 0x130));
  pGVar11 = GridItem::GetProps<GridItemArtifactTornadoProps>();
  iVar1 = *(int *)(pGVar11 + 0xd4);
  iVar9 = FUN_03723b48(*(undefined4 *)(this + 0x134));
  pGVar11 = GridItem::GetProps<GridItemArtifactTornadoProps>();
  iVar2 = *(int *)(pGVar11 + 0xd8);
  pGVar11 = GridItem::GetProps<GridItemArtifactTornadoProps>();
  iVar3 = *(int *)(pGVar11 + 0xd0);
  pGVar11 = GridItem::GetProps<GridItemArtifactTornadoProps>();
  iVar4 = *(int *)(pGVar11 + 0xd4);
  pGVar11 = GridItem::GetProps<GridItemArtifactTornadoProps>();
  iVar5 = *(int *)(pGVar11 + 0xd8);
  pGVar11 = GridItem::GetProps<GridItemArtifactTornadoProps>();
  Sexy::Insets::Insets
            (aIStack_70,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar11 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_d0,2,aIStack_70);
  local_e0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_d0);
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_d0);
  while (bVar6 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8), bVar6) {
    puVar12 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0);
    cVar7 = RealObject::IsOnOpposingTeam((RealObject *)*puVar12,(RealObject *)this);
    if (cVar7 != '\0') {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar7 = isZombieTypeBlacklisted(this,(string *)(lVar13 + 8));
      if ((((cVar7 == '\0') && (bVar6 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar6))
          && (bVar6 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar6)) &&
         ((cVar7 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar7 == '\0' &&
          (cVar7 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar7 == '\0')))) {
        Zombie::GetCurrentTitleStatus();
        if ((((local_58 == '\0') &&
             ((cVar7 = Zombie::HasFogImmune(this_00), cVar7 == '\0' &&
              (cVar7 = Zombie::IsBerserk(this_00), cVar7 == '\0')))) &&
            (cVar7 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar7 == '\0')) &&
           ((cVar7 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar7 == '\0' &&
            (cVar7 = ArtifactSquid::CanBeControlled((ArtifactSquid *)this,this_00), cVar7 != '\0')))
           ) {
          cVar7 = Zombie::CanBeLaunchedByPlantsExtra(this_00);
          TitleStatus::~TitleStatus((TitleStatus *)aIStack_70);
          if (cVar7 != '\0') {
            uVar14 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x41200000,0x3f800000,pZVar10,this_00,uVar14,
                       aRStack_b8,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_b8);
          }
        }
        else {
          TitleStatus::~TitleStatus((TitleStatus *)aIStack_70);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactTornado::onUpdate() */

void __thiscall GridItemArtifactTornado::onUpdate(GridItemArtifactTornado *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) != 2) {
    return;
  }
  fVar1 = (float)PVZ_T();
  if (fVar1 - *(float *)(this + 0x1a8) <= *(float *)(this + 0x1b0)) {
    tryAbsorbZombies(this);
    return;
  }
  setState(this,3);
  return;
}

