// Class: GridItemElectricStrom


/* GridItemElectricStrom::onDeadFinished(std::string const&) */

void GridItemElectricStrom::onDeadFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* GridItemElectricStrom::CalcRenderOrder() const */

void __thiscall GridItemElectricStrom::CalcRenderOrder(GridItemElectricStrom *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemElectricStrom::CalcRenderOrder() const */

void __thiscall GridItemElectricStrom::CalcRenderOrder(GridItemElectricStrom *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemElectricStrom::~GridItemElectricStrom() */

void __thiscall GridItemElectricStrom::~GridItemElectricStrom(GridItemElectricStrom *this)

{
  *(undefined ***)this = &PTR_GetClass_067485d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemElectricStrom_06748888;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemElectricStrom::~GridItemElectricStrom() */

void __thiscall GridItemElectricStrom::~GridItemElectricStrom(GridItemElectricStrom *this)

{
  ~GridItemElectricStrom(this + -0x10);
  return;
}


/* GridItemElectricStrom::~GridItemElectricStrom() */

void __thiscall GridItemElectricStrom::~GridItemElectricStrom(GridItemElectricStrom *this)

{
  ~GridItemElectricStrom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemElectricStrom::~GridItemElectricStrom() */

void __thiscall GridItemElectricStrom::~GridItemElectricStrom(GridItemElectricStrom *this)

{
  ~GridItemElectricStrom(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricStrom::StaticClassInit() */

void GridItemElectricStrom::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemElectricStrom");
    (*pcVar2)(plVar1,asStack_10,FUN_03c14fdc,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricStrom::StaticGetClass() */

long * GridItemElectricStrom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricStrom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricStrom::GetClass() const */

long * GridItemElectricStrom::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemElectricStrom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemElectricStrom::GridItemElectricStrom() */

void __thiscall GridItemElectricStrom::GridItemElectricStrom(GridItemElectricStrom *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_067485d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemElectricStrom_06748888;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* GridItemElectricStrom::StaticNew() */

GridItemElectricStrom * GridItemElectricStrom::StaticNew(void)

{
  GridItemElectricStrom *this;
  
  this = ::operator_new(0x1b0);
  GridItemElectricStrom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricStrom::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
GridItemElectricStrom::isZombieTypeBlacklisted(GridItemElectricStrom *this,string *param_1)

{
  char cVar1;
  GridItemElectricStromProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemElectricStromProps>();
  local_18 = FUN_03c13cdc(*(undefined8 *)(pGVar2 + 0xe8));
  local_10 = FUN_03c13d2c(*(undefined8 *)(pGVar2 + 0xf0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03c14294:
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
      goto LAB_03c14294;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricStrom::setState(GridItemElectricStromState) */

void __thiscall GridItemElectricStrom::setState(GridItemElectricStrom *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  PopAnimRig *local_a0;
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
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    std::string::string(asStack_58,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else {
    if (param_2 == 3) {
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"idle2");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      __s = "onDeadFinished";
    }
    else {
      if (param_2 != 1) goto LAB_03c144e0;
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"idle1");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      __s = "onResetFinished";
    }
    std::string::string(asStack_58,__s);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(local_a0,asStack_68,0,aRStack_50);
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
LAB_03c144e0:
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricStrom::ResetTimer() */

void __thiscall GridItemElectricStrom::ResetTimer(GridItemElectricStrom *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* GridItemElectricStrom::onResetFinished(std::string const&) */

void GridItemElectricStrom::onResetFinished(string *param_1)

{
  setState((GridItemElectricStrom *)param_1,2);
  return;
}


/* GridItemElectricStrom::SetIdle() */

void __thiscall GridItemElectricStrom::SetIdle(GridItemElectricStrom *this)

{
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemElectricStrom::onZombieLanding(Zombie*) */

void __thiscall GridItemElectricStrom::onZombieLanding(GridItemElectricStrom *this,Zombie *param_1)

{
  char cVar1;
  GridItemElectricStromProps *pGVar2;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Zombie *)0x0) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) {
    DamageInfo::DamageInfo(aDStack_68);
    pGVar2 = GridItem::GetProps<GridItemElectricStromProps>();
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
/* GridItemElectricStrom::tryAbsorbZombies() */

void __thiscall GridItemElectricStrom::tryAbsorbZombies(GridItemElectricStrom *this)

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
  GridItemElectricStromProps *pGVar11;
  undefined8 *puVar12;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_f0;
  undefined8 local_e8;
  RtMixedPtr aRStack_e0 [8];
  RtId aRStack_d8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b8 [72];
  Insets aIStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  iVar8 = FUN_03c0fd78(*(undefined4 *)(this + 0x130));
  pGVar11 = GridItem::GetProps<GridItemElectricStromProps>();
  iVar1 = *(int *)(pGVar11 + 0xd4);
  iVar9 = FUN_03c0fd7c(*(undefined4 *)(this + 0x134));
  pGVar11 = GridItem::GetProps<GridItemElectricStromProps>();
  iVar2 = *(int *)(pGVar11 + 0xd8);
  pGVar11 = GridItem::GetProps<GridItemElectricStromProps>();
  iVar3 = *(int *)(pGVar11 + 0xd0);
  pGVar11 = GridItem::GetProps<GridItemElectricStromProps>();
  iVar4 = *(int *)(pGVar11 + 0xd4);
  pGVar11 = GridItem::GetProps<GridItemElectricStromProps>();
  iVar5 = *(int *)(pGVar11 + 0xd8);
  pGVar11 = GridItem::GetProps<GridItemElectricStromProps>();
  Sexy::Insets::Insets
            (aIStack_70,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar11 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_d0,2,aIStack_70);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_d0);
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_d0);
  while (bVar6 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8), bVar6) {
    puVar12 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
    cVar7 = RealObject::IsOnOpposingTeam((RealObject *)*puVar12,(RealObject *)this);
    if (cVar7 != '\0') {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar7 = isZombieTypeBlacklisted(this,(string *)(lVar13 + 8));
      if (((cVar7 == '\0') && (cVar7 = Zombie::IsOnGround(this_00), cVar7 != '\0')) &&
         (bVar6 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar6)) {
        Zombie::GetCurrentTitleStatus();
        if ((((local_58 != '\0') ||
             (cVar7 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar7 != '\0')) ||
            ((cVar7 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar7 != '\0' ||
             ((bVar6 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar6 ||
              (cVar7 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar7 != '\0')))))) ||
           (cVar7 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar7 != '\0')) {
          TitleStatus::~TitleStatus((TitleStatus *)aIStack_70);
        }
        else {
          cVar7 = Zombie::IsControlled(this_00);
          TitleStatus::~TitleStatus((TitleStatus *)aIStack_70);
          if (cVar7 == '\0') {
            uVar14 = std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            ToolPacketData::GetProps();
            Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_e0);
            std::string::string((string *)aIStack_70,"onZombieLanding");
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_b8,aRStack_d8,
                       aIStack_70);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x41200000,0x3f800000,pZVar10,this_00,uVar14,
                       aRStack_b8,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate(aRStack_b8);
            std::string::~string((string *)aIStack_70);
            nop();
            Sexy::RtId::~RtId(aRStack_d8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemElectricStrom::onUpdate() */

void __thiscall GridItemElectricStrom::onUpdate(GridItemElectricStrom *this)

{
  GridItemElectricStromProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) != 2) {
    return;
  }
  fVar2 = (float)PVZ_T();
  fVar3 = *(float *)(this + 0x1a8);
  pGVar1 = GridItem::GetProps<GridItemElectricStromProps>();
  if (fVar2 - fVar3 <= *(float *)(pGVar1 + 0xe0)) {
    tryAbsorbZombies(this);
    return;
  }
  setState(this,3);
  return;
}

