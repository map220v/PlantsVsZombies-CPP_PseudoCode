// Class: ComponentWarmingRadius


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadius::StaticClassInit() */

void ComponentWarmingRadius::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentWarmingRadiusProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03b89958,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentWarmingRadius");
    (*pcVar3)(plVar2,asStack_10,FUN_03b89b88,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentWarmingRadius::StaticGetClass() */

long * ComponentWarmingRadius::StaticGetClass(void)

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
  uVar2 = ComponentRadiusBurst::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentWarmingRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentWarmingRadius::GetClass() const */

long * ComponentWarmingRadius::GetClass(void)

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
  uVar2 = ComponentRadiusBurst::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentWarmingRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentWarmingRadius::ComponentWarmingRadius() */

void __thiscall ComponentWarmingRadius::ComponentWarmingRadius(ComponentWarmingRadius *this)

{
  ComponentRadiusBurst::ComponentRadiusBurst((ComponentRadiusBurst *)this);
  *(undefined ***)this = &PTR_GetClass_06735b00;
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x120));
  return;
}


/* ComponentWarmingRadius::StaticNew() */

ComponentWarmingRadius * ComponentWarmingRadius::StaticNew(void)

{
  ComponentWarmingRadius *this;
  
  this = ::operator_new(0x238);
  ComponentWarmingRadius(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadius::getGlobalProps() const */

void __thiscall ComponentWarmingRadius::getGlobalProps(ComponentWarmingRadius *this)

{
  undefined8 uVar1;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"ComponentWarmingRadiusGlobalProperties");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(uVar1,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadius::thawGridItems() */

void __thiscall ComponentWarmingRadius::thawGridItems(ComponentWarmingRadius *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  RtObject *this_00;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_e0 [24];
  DamageInfo aDStack_c8 [96];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_e0);
  (**(code **)(*(long *)this + 0xa0))(this,avStack_e0);
  getGlobalProps(this);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_e0);
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_e0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
    this_00 = (RtObject *)*puVar3;
    DamageInfo::DamageInfo(aDStack_c8);
    if (((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<GridItem>(this_00), bVar1)) &&
       (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0')) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_f8);
      nop();
      cVar2 = GridItemRestrictionSet::IsIncluded((GridItem *)(lVar4 + 0x10));
      if (cVar2 != '\0') {
        pcVar5 = *(code **)(*(long *)this_00 + 0x110);
        DamageInfoProps::BuildDamageInfo();
        (*pcVar5)(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    DamageInfo::~DamageInfo(aDStack_c8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_f8);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadius::thawPlants() */

void __thiscall ComponentWarmingRadius::thawPlants(ComponentWarmingRadius *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  RtObject *this_00;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  (**(code **)(*(long *)this + 0xb0))(this,avStack_80);
  getGlobalProps(this);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_00 = (RtObject *)*puVar3;
    bVar1 = Sexy::RtObject::IsA<PlantGroup>(this_00);
    if ((bVar1) && (cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 != '\0')) {
      pcVar4 = *(code **)(*(long *)this_00 + 0x110);
      DamageInfoProps::BuildDamageInfo();
      (*pcVar4)(this_00,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentWarmingRadius::beginApply() */

void __thiscall ComponentWarmingRadius::beginApply(ComponentWarmingRadius *this)

{
  thawGridItems(this);
  thawPlants(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentWarmingRadius::shouldBeEnabledInCurrentLevel() const */

void __thiscall ComponentWarmingRadius::shouldBeEnabledInCurrentLevel(ComponentWarmingRadius *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  LevelModule *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  RiftThemeBlizzard *pRVar8;
  RtWeakPtrBase *pRVar9;
  long extraout_x0;
  RtObject *pRVar10;
  long extraout_x0_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar11;
  long extraout_x0_01;
  long *extraout_x0_02;
  long *plVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
     (lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), lVar5 == 0)) {
    bVar1 = false;
    goto LAB_03b8ab5c;
  }
  this_00 = (LevelModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  LevelModule::GetPropsPtr(this_00);
  getGlobalProps(this);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
  pvVar11 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(lVar5 + 0x38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(pvVar11);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(pvVar11);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(pvVar11);
  local_38[0] = std::
                find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<LevelModuleProperties_const>*,std::vector<Sexy::RtWeakPtr<LevelModuleProperties_const>,std::allocator<Sexy::RtWeakPtr<LevelModuleProperties_const>>>>,Sexy::RtWeakPtr<LevelModuleProperties_const>>
                          (uVar6,uVar7,aRStack_a0);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_38);
  if ((((bVar1) ||
       (pRVar8 = RiftUtils::GetThemeByClass<RiftThemeBlizzard>(), pRVar8 != (RiftThemeBlizzard *)0x0
       )) || (cVar2 = NewPVPUtils::IsPlayingNewPVP(), cVar2 != '\0')) ||
     ((cVar2 = CustomLevelUtils::IsCustomLevel(), cVar2 != '\0' ||
      (iVar4 = PVZ2UnchartedModeUtils::GetUnchartedWorldType(), iVar4 == 3)))) {
    bVar1 = true;
  }
  else {
    lVar5 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    local_88 = FUN_02fd3c94(*(undefined8 *)(lVar5 + 0x88));
    local_80 = FUN_02fd3ce4(*(undefined8 *)(lVar5 + 0x90));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1)
    {
      pRVar9 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,pRVar9);
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_90);
      if (bVar3) {
        pRVar10 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
        bVar3 = Sexy::RtObject::IsA<InitialPlantProperties>(pRVar10);
        if (!bVar3) goto LAB_03b8ac68;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
        nop();
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(extraout_x0 + 0x40));
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(extraout_x0 + 0x40));
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)local_38),
              bVar3) {
          lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          if ((*(uint *)(lVar5 + 0x10) & 0xfffffffd) == 0x25) goto LAB_03b8ad14;
          std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                    ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
        }
      }
      else {
LAB_03b8ac68:
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_90);
        if (bVar3) {
          pRVar10 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          bVar3 = Sexy::RtObject::IsA<InitialZombieProperties>(pRVar10);
          if (bVar3) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            nop();
            local_40 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(extraout_x0_01 + 0x40));
            local_38[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)(extraout_x0_01 + 0x40));
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_40,(__normal_iterator *)local_38),
                  bVar3) {
              lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
              if (*(int *)(lVar5 + 0x14) == 0x27) goto LAB_03b8ad14;
              std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                        ((move_iterator<Sexy::LeaderboardEntry*> *)&local_40);
            }
            goto LAB_03b8ac88;
          }
        }
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_90);
        if (bVar3) {
          pRVar10 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
          bVar3 = Sexy::RtObject::IsA<WaveManagerModuleProperties>(pRVar10);
          if (bVar3) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
            nop();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      (aRStack_78,(RtWeakPtrBase *)(extraout_x0_00 + 0x40));
            bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_78);
            if (bVar3) {
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
              local_70 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(lVar5 + 0x10));
              local_68 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(lVar5 + 0x10));
              while (bVar3 = __gnu_cxx::operator!=
                                       ((__normal_iterator *)&local_70,
                                        (__normal_iterator *)&local_68), bVar3) {
                pvVar11 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70)
                ;
                local_58 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin(pvVar11);
                local_50 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end(pvVar11);
                while (bVar3 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_58,
                                          (__normal_iterator *)&local_50), bVar3) {
                  pRVar9 = (RtWeakPtrBase *)
                           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,pRVar9);
                  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_60);
                  if (bVar3) {
                    pRVar10 = (RtObject *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
                    bVar3 = Sexy::RtObject::IsA<FrostWindWaveActionProps>(pRVar10);
                    if (bVar3) {
LAB_03b8af64:
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
                      goto LAB_03b8ad14;
                    }
                  }
                  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_60);
                  if (bVar3) {
                    pRVar10 = (RtObject *)
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
                    bVar3 = Sexy::RtObject::IsA<ZombieSpawnerActionProps>(pRVar10);
                    if (bVar3) {
                      std::
                      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                             *)local_38);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
                      nop();
                      (**(code **)(*extraout_x0_02 + 0x88))();
                      local_48 = std::
                                 set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                                 ::begin((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                                          *)local_38);
                      local_40 = std::
                                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)local_38);
                      while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_48,
                                                       (rbtree_iterator *)&local_40), bVar3) {
                        plVar12 = (long *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>
                                          ::operator*((
                                                  _Rb_tree_iterator<std::pair<int_const,std::wstring>>
                                                  *)&local_48);
                        bVar3 = std::operator==((string *)(*plVar12 + 8),"iceage_hunter");
                        if (bVar3) {
                          std::
                          set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                          ::~set((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                                  *)local_38);
                          goto LAB_03b8af64;
                        }
                        std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                                  ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
                      }
                      std::
                      set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                      ::~set((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                              *)local_38);
                    }
                  }
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
                  eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                            ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
                }
                std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                          ((move_iterator<Sexy::LeaderboardEntry*> *)&local_70);
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
          }
        }
      }
LAB_03b8ac88:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
  }
LAB_03b8ab4c:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
LAB_03b8ab5c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
LAB_03b8ad14:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  goto LAB_03b8ab4c;
}


/* ComponentWarmingRadius::SetRadiusProps(ComponentWarmingRadiusProps const&) */

void __thiscall
ComponentWarmingRadius::SetRadiusProps
          (ComponentWarmingRadius *this,ComponentWarmingRadiusProps *param_1)

{
  char cVar1;
  float fVar2;
  
  ComponentRadiusBurst::SetRadiusProps
            ((ComponentRadiusBurst *)this,(ComponentRadiusBurstProps *)param_1);
  ComponentWarmingRadiusProps::operator=((ComponentWarmingRadiusProps *)(this + 0x120),param_1);
  cVar1 = shouldBeEnabledInCurrentLevel(this);
  if (cVar1 != '\0') {
    return;
  }
  fVar2 = (float)PVZ_EOT();
  ComponentRadiusBurst::updateTimes((ComponentRadiusBurst *)this,fVar2);
  return;
}


/* ComponentWarmingRadius::~ComponentWarmingRadius() */

void __thiscall ComponentWarmingRadius::~ComponentWarmingRadius(ComponentWarmingRadius *this)

{
  *(undefined ***)this = &PTR_GetClass_06735b00;
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps
            ((ComponentWarmingRadiusProps *)(this + 0x120));
  ComponentRadiusBurst::~ComponentRadiusBurst((ComponentRadiusBurst *)this);
  return;
}


/* ComponentWarmingRadius::~ComponentWarmingRadius() */

void __thiscall ComponentWarmingRadius::~ComponentWarmingRadius(ComponentWarmingRadius *this)

{
  ~ComponentWarmingRadius(this);
  AK::FreeHook(this);
  return;
}

