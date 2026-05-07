// Class: ShadowpeashooterBlackHole


/* ShadowpeashooterBlackHole::onDeadFinished(std::string const&) */

void ShadowpeashooterBlackHole::onDeadFinished(string *param_1)

{
  param_1[0x1b0] = (string)0x1;
  return;
}


/* ShadowpeashooterBlackHole::CalcRenderOrder() const */

void __thiscall ShadowpeashooterBlackHole::CalcRenderOrder(ShadowpeashooterBlackHole *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to ShadowpeashooterBlackHole::CalcRenderOrder() const */

void __thiscall ShadowpeashooterBlackHole::CalcRenderOrder(ShadowpeashooterBlackHole *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHole::StaticClassInit() */

void ShadowpeashooterBlackHole::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SwallowHoleItem");
    (*pcVar3)(plVar2,asStack_10,FUN_03bc8cd4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ShadowpeashooterBlackHole");
    (*pcVar3)(plVar2,asStack_10,FUN_03bc9684,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowpeashooterBlackHole::StaticGetClass() */

long * ShadowpeashooterBlackHole::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowpeashooterBlackHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowpeashooterBlackHole::GetClass() const */

long * ShadowpeashooterBlackHole::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowpeashooterBlackHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowpeashooterBlackHole::ShadowpeashooterBlackHole() */

void __thiscall
ShadowpeashooterBlackHole::ShadowpeashooterBlackHole(ShadowpeashooterBlackHole *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0673ad10;
  *(undefined ***)(this + 0x10) = &PTR__ShadowpeashooterBlackHole_0673afc8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  this[0x1b0] = (ShadowpeashooterBlackHole)0x0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* ShadowpeashooterBlackHole::StaticNew() */

ShadowpeashooterBlackHole * ShadowpeashooterBlackHole::StaticNew(void)

{
  ShadowpeashooterBlackHole *this;
  
  this = ::operator_new(0x1d0);
  ShadowpeashooterBlackHole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHole::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
ShadowpeashooterBlackHole::isZombieTypeBlacklisted(ShadowpeashooterBlackHole *this,string *param_1)

{
  char cVar1;
  ShadowpeashooterBlackHoleProps *pSVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
  local_18 = FUN_03bc6a04(*(undefined8 *)(pSVar2 + 0xe8));
  local_10 = FUN_03bc6a54(*(undefined8 *)(pSVar2 + 0xf0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03bc7660:
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
      goto LAB_03bc7660;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHole::setState(ShadowpeashooterBlackHoleState) */

void __thiscall ShadowpeashooterBlackHole::setState(ShadowpeashooterBlackHole *this,int param_2)

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
    std::string::string(asStack_58,"loop");
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
      std::string::string(asStack_68,"end");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      __s = "onDeadFinished";
    }
    else {
      if (param_2 != 1) goto LAB_03bc7ec0;
      GridItemAnimation::GetAnimRig();
      local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
      std::string::string(asStack_68,"spawn");
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
LAB_03bc7ec0:
  *(int *)(this + 0x1ac) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowpeashooterBlackHole::SetIdle() */

void __thiscall ShadowpeashooterBlackHole::SetIdle(ShadowpeashooterBlackHole *this)

{
  setState(this,2);
  return;
}


/* ShadowpeashooterBlackHole::ResetTimer() */

void __thiscall ShadowpeashooterBlackHole::ResetTimer(ShadowpeashooterBlackHole *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* ShadowpeashooterBlackHole::onResetFinished(std::string const&) */

void ShadowpeashooterBlackHole::onResetFinished(string *param_1)

{
  setState((ShadowpeashooterBlackHole *)param_1,2);
  return;
}


/* ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole() */

void __thiscall
ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole(ShadowpeashooterBlackHole *this)

{
  *(undefined ***)this = &PTR_GetClass_0673ad10;
  *(undefined ***)(this + 0x10) = &PTR__ShadowpeashooterBlackHole_0673afc8;
  std::vector<SwallowHoleItem,std::allocator<SwallowHoleItem>>::~vector
            ((vector<SwallowHoleItem,std::allocator<SwallowHoleItem>> *)(this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole() */

void __thiscall
ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole(ShadowpeashooterBlackHole *this)

{
  ~ShadowpeashooterBlackHole(this + -0x10);
  return;
}


/* ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole() */

void __thiscall
ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole(ShadowpeashooterBlackHole *this)

{
  ~ShadowpeashooterBlackHole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole() */

void __thiscall
ShadowpeashooterBlackHole::~ShadowpeashooterBlackHole(ShadowpeashooterBlackHole *this)

{
  ~ShadowpeashooterBlackHole(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHole::tryAbsorbZombies() */

void __thiscall ShadowpeashooterBlackHole::tryAbsorbZombies(ShadowpeashooterBlackHole *this)

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
  ShadowpeashooterBlackHoleProps *pSVar11;
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
  iVar8 = FUN_03bc59d4(*(undefined4 *)(this + 0x130));
  pSVar11 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
  iVar1 = *(int *)(pSVar11 + 0xd4);
  iVar9 = FUN_03bc59d8(*(undefined4 *)(this + 0x134));
  pSVar11 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
  iVar2 = *(int *)(pSVar11 + 0xd8);
  pSVar11 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
  iVar3 = *(int *)(pSVar11 + 0xd0);
  pSVar11 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
  iVar4 = *(int *)(pSVar11 + 0xd4);
  pSVar11 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
  iVar5 = *(int *)(pSVar11 + 0xd8);
  pSVar11 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
  Sexy::Insets::Insets
            (aIStack_70,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pSVar11 + 0xdc));
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
        if (((((local_58 != '\0') ||
              (cVar7 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar7 != '\0')) ||
             ((cVar7 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar7 != '\0' ||
              ((bVar6 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar6 ||
               (cVar7 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar7 != '\0')))))) ||
            (cVar7 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar7 != '\0')) ||
           (((cVar7 = Zombie::IsControlled(this_00), cVar7 != '\0' ||
             (cVar7 = Zombie::IsBerserk(this_00), cVar7 != '\0')) ||
            (cVar7 = Zombie::HasFogImmune(this_00), cVar7 != '\0')))) {
          TitleStatus::~TitleStatus((TitleStatus *)aIStack_70);
        }
        else {
          cVar7 = Zombie::CanTakeFatalDamage(this_00);
          TitleStatus::~TitleStatus((TitleStatus *)aIStack_70);
          if (cVar7 != '\0') {
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHole::onZombieLanding(Zombie*) */

void __thiscall
ShadowpeashooterBlackHole::onZombieLanding(ShadowpeashooterBlackHole *this,Zombie *param_1)

{
  char cVar1;
  long *plVar2;
  float fVar3;
  Zombie *pZVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  FishingZombieInitData aFStack_28 [8];
  float local_20;
  float local_1c;
  Insets aIStack_18 [12];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Zombie *)0x0) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) {
    FishingZombieInitData::FishingZombieInitData(aFStack_28);
    Sexy::Insets::Insets(aIStack_18);
    plVar2 = (long *)Zombie::GetAnimRig(param_1);
    (**(code **)(*plVar2 + 0x90))(plVar2,aIStack_18);
    local_1c = (float)FUN_03bc5ce8();
    local_1c = (float)local_c * 2.5 * local_1c;
    cVar1 = (**(code **)(*(long *)param_1 + 0x378))(param_1);
    if (cVar1 == '\0') {
      fVar3 = 0.9;
    }
    else {
      fVar3 = 0.3;
    }
    local_1c = fVar3 * local_1c;
    Zombie::GetHasPlantFood(param_1);
    Zombie::ClearConditions(param_1);
    Zombie::SetHasPlantFood(SUB81(param_1,0));
    pZVar4._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar4._0_4_,0,param_1,2,1);
    Zombie::SetMarkedForDeath(param_1);
    Zombie::SetIsControlled(param_1,true);
    Zombie::SetIgnoresAllDamage(param_1,true);
    Zombie::SetIgnoresCollisions(param_1,true);
    RealObject::SetUseGroundClipRect((RealObject *)param_1,true);
    RealObject::SetDisableSnapToGround((RealObject *)param_1,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aFStack_28,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    local_20 = (float)PVZ_T();
    local_20 = local_20 + 0.4;
    std::vector<SwallowHoleItem,std::allocator<SwallowHoleItem>>::push_back
              ((vector<SwallowHoleItem,std::allocator<SwallowHoleItem>> *)(this + 0x1b8),
               (SwallowHoleItem *)aFStack_28);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHole::onUpdate() */

void __thiscall ShadowpeashooterBlackHole::onUpdate(ShadowpeashooterBlackHole *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr *this_00;
  RtMixedPtrBase *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  Zombie *this_02;
  long *plVar4;
  RtWeakPtrBase *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  float *pfVar5;
  ShadowpeashooterBlackHoleProps *pSVar6;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_05;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (*(int *)(this + 0x1ac) == 2) {
    fVar8 = (float)PVZ_T();
    fVar9 = *(float *)(this + 0x1a8);
    pSVar6 = GridItem::GetProps<ShadowpeashooterBlackHoleProps>();
    if (fVar8 - fVar9 <= *(float *)(pSVar6 + 0xe0)) {
      tryAbsorbZombies(this);
    }
    else {
      setState(this,3);
    }
  }
  else if (((*(int *)(this + 0x1ac) == 3) && (this[0x1b0] != (ShadowpeashooterBlackHole)0x0)) &&
          (cVar2 = std::vector<SwallowHoleItem,std::allocator<SwallowHoleItem>>::empty
                             ((vector<SwallowHoleItem,std::allocator<SwallowHoleItem>> *)
                              (this + 0x1b8)), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x48))(this);
LAB_03bccb18:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_05 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b8);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_05);
LAB_03bccaa8:
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_05);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
  if (bVar1) {
    do {
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
      ;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (RtMixedPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
        if (cVar2 != '\0') {
          fVar8 = (float)PVZ_T();
          pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          if (fVar8 <= *(float *)(pRVar3 + 8)) goto LAB_03bccc78;
          this_02 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
          Zombie::SetIgnoresAllDamage(this_02,false);
          pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
          cVar2 = (**(code **)(*plVar4 + 0x378))();
          if (cVar2 != '\0') {
            pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
            (**(code **)(*plVar4 + 0x240))();
          }
          pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
          (**(code **)(*plVar4 + 0x80))(plVar4,1);
          pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
          pcVar7 = *(code **)(*plVar4 + 0x120);
          Sexy::Point::Point(aPStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_70,local_6c,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_68,4,aPStack_78,0);
          (*pcVar7)(plVar4,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
          this_03 = (RtWeakPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          Sexy::RtWeakPtrBase::ClearId(this_03);
        }
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_68,(__normal_iterator *)&local_80);
      local_80 = std::vector<SwallowHoleItem,std::allocator<SwallowHoleItem>>::erase
                           ((vector<SwallowHoleItem,std::allocator<SwallowHoleItem>> *)this_05,
                            local_68[0]);
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_05);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
      if (!bVar1) break;
    } while( true );
  }
  goto LAB_03bccb18;
LAB_03bccc78:
  fVar12 = *(float *)(pRVar3 + 0xc);
  fVar8 = (float)PVZ_Dt();
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
  this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_04);
  fVar11 = pfVar5[2];
  fVar10 = *pfVar5;
  fVar9 = pfVar5[1];
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  pcVar7 = *(code **)(*plVar4 + 0x78);
  EATextSquish::Vec3::Vec3((Vec3 *)local_68,fVar10,fVar9,fVar11 - fVar12 * fVar8);
  (*pcVar7)(plVar4,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_68);
  FUN_03bc7034((__normal_iterator *)&local_80);
  goto LAB_03bccaa8;
}

