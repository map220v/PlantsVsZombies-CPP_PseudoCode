// Class: EndurianGasSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndurianGasSubsystem::StaticClassInit() */

void EndurianGasSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"EndurianGasSubsystemItem");
    (*pcVar3)(plVar2,asStack_10,FUN_040e7104,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EndurianGasSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_040e72fc,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EndurianGasSubsystem::StaticGetClass() */

long * EndurianGasSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"EndurianGasSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EndurianGasSubsystem::GetClass() const */

long * EndurianGasSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"EndurianGasSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EndurianGasSubsystem::IsBlackList(Zombie*) */

byte __thiscall EndurianGasSubsystem::IsBlackList(EndurianGasSubsystem *this,Zombie *param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(ZombieRestrictionSet **)(this + 0x10) != (ZombieRestrictionSet *)0x0) {
    bVar1 = ZombieRestrictionSet::IsIncluded(*(ZombieRestrictionSet **)(this + 0x10),param_1);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndurianGasSubsystem::Unregister(Sexy::RtWeakPtr<Plant> const&) */

void __thiscall EndurianGasSubsystem::Unregister(EndurianGasSubsystem *this,RtWeakPtr *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x20));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_1);
  FUN_040e66a4(uVar1,uVar2,aRStack_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndurianGasSubsystem::EndurianGasSubsystem() */

void __thiscall EndurianGasSubsystem::EndurianGasSubsystem(EndurianGasSubsystem *this)

{
  char cVar1;
  undefined8 uVar2;
  long extraout_x0;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  wstring awStack_28 [8];
  string asStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_067de750;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x18) = 0;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_20,"EndurianDefault");
  Sexy::ToWString(asStack_20);
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,5,aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_28);
  std::string::~string(asStack_20);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    nop();
    *(long *)(this + 0x10) = extraout_x0 + 0x2d8;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EndurianGasSubsystem::StaticNew() */

EndurianGasSubsystem * EndurianGasSubsystem::StaticNew(void)

{
  EndurianGasSubsystem *this;
  
  this = ::operator_new(0x38);
  EndurianGasSubsystem(this);
  return this;
}


/* EndurianGasSubsystem::~EndurianGasSubsystem() */

void __thiscall EndurianGasSubsystem::~EndurianGasSubsystem(EndurianGasSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067de750;
  std::vector<EndurianGasSubsystem::Item,std::allocator<EndurianGasSubsystem::Item>>::~vector
            ((vector<EndurianGasSubsystem::Item,std::allocator<EndurianGasSubsystem::Item>> *)
             (this + 0x20));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* EndurianGasSubsystem::~EndurianGasSubsystem() */

void __thiscall EndurianGasSubsystem::~EndurianGasSubsystem(EndurianGasSubsystem *this)

{
  ~EndurianGasSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndurianGasSubsystem::Register(Sexy::RtWeakPtr<Plant> const&, float) */

void __thiscall
EndurianGasSubsystem::Register(EndurianGasSubsystem *this,RtWeakPtr *param_1,float param_2)

{
  vector<EndurianGasSubsystem::Item,std::allocator<EndurianGasSubsystem::Item>> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  Item aIStack_18 [16];
  long local_8;
  
  this_00 = (vector<EndurianGasSubsystem::Item,std::allocator<EndurianGasSubsystem::Item>> *)
            (this + 0x20);
  local_8 = ___stack_chk_guard;
  Item::Item(aIStack_18,param_2,param_1);
  std::vector<EndurianGasSubsystem::Item,std::allocator<EndurianGasSubsystem::Item>>::push_back
            (this_00,aIStack_18);
  WidgetImg::~WidgetImg((WidgetImg *)aIStack_18);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_00);
  FUN_040e9630(uVar1,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndurianGasSubsystem::Update() */

void __thiscall EndurianGasSubsystem::Update(EndurianGasSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ResourceInfo *this_01;
  undefined8 *puVar5;
  undefined8 uVar6;
  ResourceInfo *pRVar7;
  Zombie *pZVar8;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  DamageInfo *pDVar12;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  Zombie *local_d0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  Insets aIStack_a8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_040e49f4(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887));
  if ((cVar1 != '\0') && (fVar11 = (float)PVZ_T(), *(float *)(this + 0x18) < fVar11)) {
    fVar11 = (float)PVZ_T();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x20);
    *(float *)(this + 0x18) = fVar11 + 1.0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
    local_e8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_e8,(__normal_iterator *)local_68);
      if (!bVar2) break;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
      this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar4 + 8));
      if (this_01 == (ResourceInfo *)0x0) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_68,(__normal_iterator *)&local_e8);
        local_e8 = std::
                   vector<EndurianGasSubsystem::Item,std::allocator<EndurianGasSubsystem::Item>>::
                   erase((vector<EndurianGasSubsystem::Item,std::allocator<EndurianGasSubsystem::Item>>
                          *)this_00,local_68[0]);
      }
      else {
        cVar1 = FUN_040e58e0(*(undefined4 *)(this_01 + 0x28));
        if ((cVar1 == '\0') && (cVar1 = Plant::IsIceblocked((Plant *)this_01), cVar1 == '\0')) {
          Sexy::Insets::Insets
                    (aIStack_a8,*(int *)(this_01 + 0x114) + -1,*(int *)(this_01 + 0x110) + -1,3,3);
          puVar5 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e8);
                    /* WARNING: Load size is inaccurate */
          pDVar12._0_4_ = *puVar5;
          uVar6 = operator|(0x100,8);
          pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(puVar5 + 1));
          Sexy::Point::Point((Point *)&local_b0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar12._0_4_,local_80,local_7c,(DamageInfo *)local_68,uVar6,pRVar7,
                     (Point *)&local_b0,0);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
          EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_80,2,aIStack_a8);
          local_e0 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_80);
          local_d8 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_80);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8),
                bVar2) {
            puVar5 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_e0);
            pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
            local_d0 = pZVar8;
            if (pZVar8 != (Zombie *)0x0) {
              uVar3 = FUN_040e48ec(*(undefined4 *)(this_01 + 0x24));
              cVar1 = RealObject::IsOnOpposingTeam(pZVar8,uVar3);
              if ((cVar1 != '\0') &&
                 (cVar1 = (**(code **)(*(long *)local_d0 + 0x328))(local_d0), pZVar8 = local_d0,
                 cVar1 == '\0')) {
                pcVar10 = *(code **)(*(long *)local_d0 + 0x3d0);
                Plant::GetType();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          (aRStack_c0,(RtWeakPtrBase *)aRStack_c8);
                cVar1 = (*pcVar10)(pZVar8,aRStack_c0,0);
                if ((cVar1 == '\0') || (cVar1 = IsBlackList(this,local_d0), cVar1 != '\0')) {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
                }
                else {
                  uVar6 = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                   *)avStack_98);
                  uVar9 = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)avStack_98);
                  local_b8 = std::
                             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Zombie*>
                                       (uVar6,uVar9,&local_d0);
                  local_b0 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)avStack_98);
                  bVar2 = __gnu_cxx::operator==
                                    ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
                  if (bVar2) {
                    (**(code **)(*(long *)local_d0 + 0x110))(local_d0,(DamageInfo *)local_68);
                    ToolPacketData::GetProps();
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)&local_b0,
                               (RtWeakPtrBase *)&local_b8);
                    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                    push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                               *)avStack_98,(RtWeakPtr *)&local_b0);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
                  }
                }
              }
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_e0);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        FUN_040e5f44((__normal_iterator *)&local_e8);
      }
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)avStack_98
              );
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

