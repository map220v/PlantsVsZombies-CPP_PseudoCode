// Class: PlantFumeshroomSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroomSubSystem::StaticClassInit() */

void PlantFumeshroomSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieStunEffect");
    (*pcVar3)(plVar2,asStack_10,FUN_041fd2c4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantFumeshroomSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_041fd938,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFumeshroomSubSystem::StaticGetClass() */

long * PlantFumeshroomSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFumeshroomSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFumeshroomSubSystem::GetClass() const */

long * PlantFumeshroomSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFumeshroomSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFumeshroomSubSystem::PlantFumeshroomSubSystem() */

void __thiscall PlantFumeshroomSubSystem::PlantFumeshroomSubSystem(PlantFumeshroomSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06808310;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlantFumeshroomSubSystem::StaticNew() */

PlantFumeshroomSubSystem * PlantFumeshroomSubSystem::StaticNew(void)

{
  PlantFumeshroomSubSystem *this;
  
  this = ::operator_new(0x28);
  PlantFumeshroomSubSystem(this);
  return this;
}


/* PlantFumeshroomSubSystem::~PlantFumeshroomSubSystem() */

void __thiscall PlantFumeshroomSubSystem::~PlantFumeshroomSubSystem(PlantFumeshroomSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06808310;
  std::vector<ZombieStunEffect,std::allocator<ZombieStunEffect>>::~vector
            ((vector<ZombieStunEffect,std::allocator<ZombieStunEffect>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantFumeshroomSubSystem::~PlantFumeshroomSubSystem() */

void __thiscall PlantFumeshroomSubSystem::~PlantFumeshroomSubSystem(PlantFumeshroomSubSystem *this)

{
  ~PlantFumeshroomSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroomSubSystem::Update() */

void __thiscall PlantFumeshroomSubSystem::Update(PlantFumeshroomSubSystem *this)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  RtMixedPtrBase *pRVar4;
  ulong uVar5;
  ResourceInfo *pRVar6;
  PopAnimRig *pPVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 0x10);
  uVar10 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_041fc818(uVar9,*(undefined8 *)(this + 0x18));
  uVar5 = 0;
  if (lVar3 != 0) {
    do {
      pRVar4 = (RtMixedPtrBase *)FUN_041fc840(uVar9,uVar10);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
      if (cVar2 == '\0') {
LAB_041fde84:
        pRVar4[0xc] = (RtMixedPtrBase)0x1;
      }
      else {
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar4);
        cVar2 = (**(code **)(*plVar8 + 0x328))();
        if (cVar2 != '\0') goto LAB_041fde84;
        fVar14 = (float)PVZ_T();
        fVar15 = *(float *)(pRVar4 + 8);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
        if (cVar2 == '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)pRVar4);
        }
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        if (pRVar4[0xc] == (RtMixedPtrBase)0x0) {
          Sexy::Color::Color((Color *)&local_48);
          Sexy::Insets::Insets((Insets *)&local_18,0x91,0xff,0x82,0xff);
          local_48 = local_18;
          uStack_40 = uStack_10;
          Sexy::Color::Color((Color *)local_28,1);
          Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_48);
          Sexy::ColorLerp((Sexy *)local_38,fVar14 - fVar15,(Color *)local_28,
                          (RtWeakPtr<Sexy::SoundResource> *)&local_18);
          pPVar7 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)pRVar6);
          PopAnimRig::SetPAMColor(pPVar7,(Color *)local_38);
          if (1.0 < fVar14 - fVar15) {
            pRVar4[0xc] = (RtMixedPtrBase)0x1;
          }
        }
      }
      uVar9 = *(undefined8 *)(this + 0x10);
      uVar10 = uVar10 + 1;
      uVar5 = FUN_041fc818(uVar9,*(undefined8 *)(this + 0x18));
    } while (uVar10 < uVar5);
  }
  uVar1 = (int)uVar5 - 1;
  if ((int)uVar5 != 0) {
    lVar11 = (long)(int)uVar1 + -1;
    lVar3 = lVar11;
    lVar13 = (long)(int)uVar1;
    while( true ) {
      lVar12 = lVar3;
      pRVar4 = (RtMixedPtrBase *)FUN_041fc840(uVar9,lVar13);
      if (pRVar4[0xc] != (RtMixedPtrBase)0x0) {
        cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar4);
        if (cVar2 == '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)pRVar4);
        }
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        if ((pRVar6 != (ResourceInfo *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pRVar6 + 0x328))(pRVar6), cVar2 == '\0')) {
          pPVar7 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)pRVar6);
          Sexy::Color::Color((Color *)&local_18,1);
          PopAnimRig::SetPAMColor(pPVar7,(Color *)&local_18);
        }
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(this + 0x10));
        local_28[0] = __gnu_cxx::
                      __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                      ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                                   *)local_38,lVar13);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)local_28);
        std::vector<ZombieStunEffect,std::allocator<ZombieStunEffect>>::erase
                  ((vector<ZombieStunEffect,std::allocator<ZombieStunEffect>> *)(this + 0x10),
                   local_18);
      }
      if (lVar12 == lVar11 - (ulong)uVar1) break;
      uVar9 = *(undefined8 *)(this + 0x10);
      lVar3 = lVar12 + -1;
      lVar13 = lVar12;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFumeshroomSubSystem::CauseZombieStun(Zombie*, float) */

void __thiscall
PlantFumeshroomSubSystem::CauseZombieStun
          (PlantFumeshroomSubSystem *this,Zombie *param_1,float param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  ZombieStunEffect aZStack_18 [8];
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieStunEffect::ZombieStunEffect(aZStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aZStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  local_10 = PVZ_T();
  local_c = 0;
  Zombie::ApplyCondition((Zombie *)param_2,0,param_1,0x18,1);
  std::vector<ZombieStunEffect,std::allocator<ZombieStunEffect>>::push_back
            ((vector<ZombieStunEffect,std::allocator<ZombieStunEffect>> *)(this + 0x10),aZStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aZStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

