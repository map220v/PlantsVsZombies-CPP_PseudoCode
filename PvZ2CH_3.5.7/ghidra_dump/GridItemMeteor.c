// Class: GridItemMeteor


/* GridItemMeteor::CalcRenderOrder() const */

void __thiscall GridItemMeteor::CalcRenderOrder(GridItemMeteor *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61a8a,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemMeteor::CalcRenderOrder() const */

void __thiscall GridItemMeteor::CalcRenderOrder(GridItemMeteor *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteor::StaticClassInit() */

void GridItemMeteor::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemMeteor");
    (*pcVar2)(plVar1,asStack_10,FUN_03776b30,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemMeteor::StaticGetClass() */

long * GridItemMeteor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMeteor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemMeteor::GetClass() const */

long * GridItemMeteor::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemMeteor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteor::setState(GridItemMeteorState) */

void __thiscall GridItemMeteor::setState(GridItemMeteor *this,int param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1c4) == 0) {
    __s = "idle1";
  }
  else if (*(int *)(this + 0x1c4) == 1) {
    __s = "idle2";
  }
  else {
    __s = "idle3";
  }
  std::string::string(asStack_48,__s);
  nop();
  if (param_2 != 2) {
    if (param_2 == 3) {
      (**(code **)(*(long *)this + 0x48))(this);
      goto LAB_0373e008;
    }
    if (param_2 != 1) goto LAB_0373e008;
    param_2 = 2;
  }
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
LAB_0373e008:
  *(int *)(this + 0x1ac) = param_2;
  std::string::~string(asStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemMeteor::SetIdle() */

void __thiscall GridItemMeteor::SetIdle(GridItemMeteor *this)

{
  setState(this,2);
  return;
}


/* GridItemMeteor::ResetTimer() */

void __thiscall GridItemMeteor::ResetTimer(GridItemMeteor *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  setState(this,1);
  return;
}


/* GridItemMeteor::GridItemMeteor() */

void __thiscall GridItemMeteor::GridItemMeteor(GridItemMeteor *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0668b4f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMeteor_0668b7a8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  return;
}


/* GridItemMeteor::StaticNew() */

GridItemMeteor * GridItemMeteor::StaticNew(void)

{
  GridItemMeteor *this;
  
  this = ::operator_new(0x1e0);
  GridItemMeteor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteor::isZombieTypeBlacklisted(std::string const&) */

void __thiscall GridItemMeteor::isZombieTypeBlacklisted(GridItemMeteor *this,string *param_1)

{
  char cVar1;
  GridItemMeteorProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemMeteorProps>();
  local_18 = FUN_037450a8(*(undefined8 *)(pGVar2 + 0xe0));
  local_10 = FUN_037450f8(*(undefined8 *)(pGVar2 + 0xe8));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03751e58:
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
      goto LAB_03751e58;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteor::applyBurning() */

void __thiscall GridItemMeteor::applyBurning(GridItemMeteor *this)

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
  GridItemMeteorProps *pGVar10;
  undefined8 *puVar11;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = FUN_03723b44(*(undefined4 *)(this + 0x130));
  pGVar10 = GridItem::GetProps<GridItemMeteorProps>();
  iVar1 = *(int *)(pGVar10 + 0xd4);
  iVar9 = FUN_03723b48(*(undefined4 *)(this + 0x134));
  pGVar10 = GridItem::GetProps<GridItemMeteorProps>();
  iVar2 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemMeteorProps>();
  iVar3 = *(int *)(pGVar10 + 0xd0);
  pGVar10 = GridItem::GetProps<GridItemMeteorProps>();
  iVar4 = *(int *)(pGVar10 + 0xd4);
  pGVar10 = GridItem::GetProps<GridItemMeteorProps>();
  iVar5 = *(int *)(pGVar10 + 0xd8);
  pGVar10 = GridItem::GetProps<GridItemMeteorProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar8 - iVar1,iVar9 - iVar2,iVar3 + 1 + iVar4,
             iVar5 + 1 + *(int *)(pGVar10 + 0xdc));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
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
      if (((((((cVar7 == '\0') &&
              (cVar7 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar7 == '\0')) &&
             (cVar7 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar7 == '\0')) &&
            ((fVar14 = (float)FUN_03723b88(*(undefined4 *)(this_00 + 0x280)), 0.0 < fVar14 &&
             (cVar7 = FUN_0373c274(*(undefined4 *)(this_00 + 0x28)), cVar7 == '\0')))) &&
           ((cVar7 = Zombie::IsBerserk(this_00), cVar7 == '\0' &&
            ((cVar7 = Zombie::HasFogImmune(this_00), cVar7 == '\0' &&
             (cVar7 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar7 == '\0')))))) &&
          (cVar7 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar7 == '\0')) &&
         (((((bVar6 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar6 &&
             (bVar6 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar6)) &&
            (bVar6 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this_00), !bVar6)) &&
           (((bVar6 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this_00), !bVar6 &&
             (bVar6 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)this_00), !bVar6)) &&
            ((bVar6 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)this_00), !bVar6 &&
             ((bVar6 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)this_00), !bVar6 &&
              (bVar6 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)this_00), !bVar6))))
            )))) && ((bVar6 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)this_00), !bVar6
                     && (bVar6 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this_00),
                        !bVar6)))))) {
        if (*(float *)(this + 0x1bc) <= 0.0) {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1b8),0,this_00,0x75,1);
          uVar13 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
          ZombieConditionTracker::SetAdditionalValue
                    (*(ZombieConditionTracker **)(this + 0x1b4),uVar13,0x75);
        }
        else {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(this + 0x1c0),0,this_00,0x76,1);
          uVar13 = Zombie::GetConditionTracker(this_00);
                    /* WARNING: Load size is inaccurate */
          ZombieConditionTracker::SetAdditionalValue
                    (*(ZombieConditionTracker **)(this + 0x1bc),uVar13,0x76);
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


/* GridItemMeteor::~GridItemMeteor() */

void __thiscall GridItemMeteor::~GridItemMeteor(GridItemMeteor *this)

{
  *(undefined ***)this = &PTR_GetClass_0668b4f0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemMeteor_0668b7a8;
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::~vector
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x1c8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemMeteor::~GridItemMeteor() */

void __thiscall GridItemMeteor::~GridItemMeteor(GridItemMeteor *this)

{
  ~GridItemMeteor(this + -0x10);
  return;
}


/* GridItemMeteor::~GridItemMeteor() */

void __thiscall GridItemMeteor::~GridItemMeteor(GridItemMeteor *this)

{
  ~GridItemMeteor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemMeteor::~GridItemMeteor() */

void __thiscall GridItemMeteor::~GridItemMeteor(GridItemMeteor *this)

{
  ~GridItemMeteor(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteor::onGridItemInitialize() */

void __thiscall GridItemMeteor::onGridItemInitialize(GridItemMeteor *this)

{
  char cVar1;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  ulong uVar4;
  string *psVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  string asStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  RtName aRStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  ResourceInfo *local_28;
  RtWeakPtr<PowerPropertySheet> aRStack_20 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_18 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar8 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar8;
  cVar1 = FUN_03726cf4();
  if (cVar1 != '\0') {
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_58,"TorchwoodDefault");
    Sexy::ToWString(asStack_58);
    Sexy::RtName::RtName((RtName *)&local_28,(wstring *)aRStack_50);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>
              ((RtWeakPtr *)&local_40,uVar2,5,(RtName *)&local_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Sexy::RtName::~RtName((RtName *)&local_28);
    FUN_05476c50(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    std::vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>>::vector
              ((vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>> *)
               &local_40,(vector *)(pRVar3 + 0x4f8));
    for (uVar7 = 0; uVar4 = FUN_037246a4(local_40,local_38), uVar7 < uVar4; uVar7 = uVar7 + 1) {
      FUN_0373c3fc((RtName *)&local_28);
      uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
      psVar5 = (string *)FUN_037246b0(local_40,uVar7);
      Sexy::ToWString(psVar5);
      Sexy::RtName::RtName(aRStack_50,awStack_60);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(asStack_58,uVar2,0xc,aRStack_50);
      local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      Sexy::RtName::~RtName(aRStack_50);
      FUN_05476c50(awStack_60);
      lVar6 = FUN_037246b0(local_40,uVar7);
      lVar6 = FUN_05474178(lVar6 + 8);
      if (lVar6 != 0) {
        uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
        lVar6 = FUN_037246b0(local_40,uVar7);
        Sexy::ToWString((string *)(lVar6 + 8));
        Sexy::RtName::RtName(aRStack_50,awStack_60);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>(asStack_58,uVar2,0xc,aRStack_50);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_20,(RtWeakPtr *)asStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
        Sexy::RtName::~RtName(aRStack_50);
        FUN_05476c50(awStack_60);
        uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
        lVar6 = FUN_037246b0(local_40,uVar7);
        Sexy::ToWString((string *)(lVar6 + 0x10));
        Sexy::RtName::RtName(aRStack_50,awStack_60);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>(asStack_58,uVar2,0xc,aRStack_50);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_18,(RtWeakPtr *)asStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
        Sexy::RtName::~RtName(aRStack_50);
        FUN_05476c50(awStack_60);
        uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
        lVar6 = FUN_037246b0(local_40,uVar7);
        FUN_031f5e7c(asStack_68,"Avatar",lVar6 + 0x10);
        Sexy::ToWString(asStack_68);
        Sexy::RtName::RtName(aRStack_50,awStack_60);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>(asStack_58,uVar2,0xc,aRStack_50);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_10,(RtWeakPtr *)asStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
        Sexy::RtName::~RtName(aRStack_50);
        FUN_05476c50(awStack_60);
        std::string::~string(asStack_68);
        FUN_0375aaf4((RtName *)&local_28);
      }
      FUN_0373c4e4((RtName *)&local_28);
    }
    std::vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>>::~vector
              ((vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>> *)
               &local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteor::convertProjectile(Projectile*, Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
GridItemMeteor::convertProjectile(GridItemMeteor *this,Projectile *param_1,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  Projectile::SetPropertySheet(param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (*(code **)(*(long *)param_1 + 0x130) != Projectile::onProjectileConverted) {
    (**(code **)(*(long *)param_1 + 0x130))(param_1);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::push_back
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x1c8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemMeteor::onUpdate() */

void __thiscall GridItemMeteor::onUpdate(GridItemMeteor *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ResourceInfo *this_00;
  long lVar8;
  RtWeakPtrBase *pRVar9;
  ResourceInfo *pRVar10;
  float *pfVar11;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if ((*(int *)(this + 0x1ac) == 2) &&
     (fVar15 = (float)PVZ_T(), *(float *)(this + 0x1b0) < fVar15 - *(float *)(this + 0x1a8))) {
    setState(this,3);
  }
  applyBurning(this);
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar7,0x2b);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_38);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtId::~RtId((RtId *)&local_38);
    iVar4 = FUN_03723ae0(*(undefined4 *)(this_00 + 0xa8));
    iVar5 = SharkMinion::getRow((SharkMinion *)this);
    iVar6 = extraout_w1;
    if (iVar4 == iVar5) {
      lVar8 = Projectile::GetProps((Projectile *)this_00);
      uVar7 = DAT_06aaf778;
      auVar16 = FUN_0372384c(DAT_06aaf778,DAT_06aaf780);
      uVar12 = auVar16._8_8_;
      lVar13 = 0;
      do {
        lVar14 = lVar13;
        iVar6 = (int)uVar12;
        if (lVar14 == auVar16._0_8_) goto LAB_037814bc;
        auVar17 = FUN_03723858(uVar7,lVar14);
        uVar12 = auVar17._8_8_;
        lVar13 = lVar14 + 1;
      } while (lVar8 != *auVar17._0_8_);
      uVar7 = *(undefined8 *)(this + 0x1c8);
      iVar6 = FUN_037246b8(uVar7,*(undefined8 *)(this + 0x1d0));
      uVar1 = iVar6 - 1;
      if (-1 < (int)uVar1) {
        lVar8 = (long)(int)uVar1;
        lVar13 = lVar8 + -1;
        while( true ) {
          pRVar9 = (RtWeakPtrBase *)FUN_037246e0(uVar7,lVar8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar9);
          cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
          if (cVar3 == '\0') {
            local_40 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(this + 0x1c8));
            local_38 = __gnu_cxx::
                       __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                       ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                    *)&local_40,lVar8);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_30,(__normal_iterator *)&local_38);
            std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::
            erase((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *
                  )(this + 0x1c8),local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          }
          else {
            pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
            if (this_00 == pRVar10) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
              iVar6 = extraout_w1_01;
              goto LAB_037814bc;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
          }
          if (lVar8 + -1 == lVar13 - (ulong)uVar1) break;
          lVar8 = lVar8 + -1;
          uVar7 = *(undefined8 *)(this + 0x1c8);
        }
      }
      pfVar11 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this_00);
      fVar15 = *pfVar11;
      pfVar11 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)this);
      iVar6 = (int)*pfVar11 + -0x20;
      if ((iVar6 <= (int)fVar15) && ((int)fVar15 <= (int)*pfVar11 + 0x20)) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_38);
        iVar6 = *(int *)(this + 0x1c4);
        if (iVar6 == 0) {
LAB_0378177c:
          lVar13 = FUN_03723858(DAT_06aaf778,lVar14);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_38,(RtWeakPtr *)(lVar13 + 8));
        }
        else if (iVar6 == 1) {
LAB_03781750:
          lVar13 = FUN_03723858(DAT_06aaf778,lVar14);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_38,(RtWeakPtr *)(lVar13 + 0x10));
          cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_38);
          if (cVar3 != '\0') goto LAB_0378177c;
        }
        else if (iVar6 == 2) {
          lVar13 = FUN_03723858(DAT_06aaf778,lVar14);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_38,(RtWeakPtr *)(lVar13 + 0x18));
          cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_38);
          if (cVar3 != '\0') goto LAB_03781750;
        }
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_38);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_38);
          convertProjectile(this,this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
        iVar6 = extraout_w1_00;
      }
    }
LAB_037814bc:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar6);
  } while( true );
}

