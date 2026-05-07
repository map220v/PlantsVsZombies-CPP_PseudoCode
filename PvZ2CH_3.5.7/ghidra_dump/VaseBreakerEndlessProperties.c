// Class: VaseBreakerEndlessProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerEndlessProperties::StaticClassInit() */

void VaseBreakerEndlessProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerEndlessStarZombiePlantPair");
    (*pcVar3)(plVar2,asStack_10,FUN_0497f63c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseBreakerEndlessEntityAndCountPair");
    (*pcVar3)(plVar2,asStack_10,FUN_0497f4f0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseBreakerEndlessStage");
    (*pcVar3)(plVar2,asStack_10,FUN_04982cc8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseBreakerEndlessProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_049831d0,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerEndlessProperties::StaticGetClass() */

long * VaseBreakerEndlessProperties::StaticGetClass(void)

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
  uVar2 = VaseBreakerProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerEndlessProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerEndlessProperties::GetClass() const */

long * VaseBreakerEndlessProperties::GetClass(void)

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
  uVar2 = VaseBreakerProperties::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerEndlessProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerEndlessProperties::getStageForLevel(int) const */

void __thiscall
VaseBreakerEndlessProperties::getStageForLevel(VaseBreakerEndlessProperties *this,int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(this + 0x58);
  iVar6 = -1;
  lVar3 = FUN_0497f1bc(uVar7,*(undefined8 *)(this + 0x60));
  lVar5 = 0;
  if (lVar3 != 0) {
    do {
      piVar4 = (int *)FUN_0497f1ec(uVar7,lVar5);
      iVar1 = *piVar4;
      iVar2 = iVar6;
      if (iVar1 <= param_1) {
        iVar2 = (int)lVar5;
        if ((iVar6 != -1) &&
           (piVar4 = (int *)FUN_0497f1ec(uVar7,(long)iVar6), iVar2 = iVar6, *piVar4 < iVar1)) {
          iVar2 = (int)lVar5;
        }
      }
      iVar6 = iVar2;
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar3);
  }
  FUN_0497f1ec(uVar7,(long)iVar6);
  return;
}


/* VaseBreakerEndlessProperties::getEscalationCountForLevel(int) const */

int __thiscall
VaseBreakerEndlessProperties::getEscalationCountForLevel
          (VaseBreakerEndlessProperties *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)getStageForLevel(this,param_1);
  iVar1 = piVar3[1];
  if (0 < iVar1) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (param_1 - *piVar3) / iVar1;
    }
    return iVar2;
  }
  return 0;
}


/* VaseBreakerEndlessProperties::VaseBreakerEndlessProperties() */

void __thiscall
VaseBreakerEndlessProperties::VaseBreakerEndlessProperties(VaseBreakerEndlessProperties *this)

{
  VaseBreakerProperties::VaseBreakerProperties((VaseBreakerProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_069188f0;
  std::pair<std::string,std::string>::pair((pair<std::string,std::string> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* VaseBreakerEndlessProperties::StaticNew() */

VaseBreakerEndlessProperties * VaseBreakerEndlessProperties::StaticNew(void)

{
  VaseBreakerEndlessProperties *this;
  
  this = ::operator_new(0x70);
  VaseBreakerEndlessProperties(this);
  return this;
}


/* VaseBreakerEndlessProperties::~VaseBreakerEndlessProperties() */

void __thiscall
VaseBreakerEndlessProperties::~VaseBreakerEndlessProperties(VaseBreakerEndlessProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069188f0;
  std::vector<VaseBreakerEndlessStage,std::allocator<VaseBreakerEndlessStage>>::~vector
            ((vector<VaseBreakerEndlessStage,std::allocator<VaseBreakerEndlessStage>> *)
             (this + 0x58));
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x48));
  VaseBreakerProperties::~VaseBreakerProperties((VaseBreakerProperties *)this);
  return;
}


/* VaseBreakerEndlessProperties::~VaseBreakerEndlessProperties() */

void __thiscall
VaseBreakerEndlessProperties::~VaseBreakerEndlessProperties(VaseBreakerEndlessProperties *this)

{
  ~VaseBreakerEndlessProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerEndlessProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
VaseBreakerEndlessProperties::GatherResourceRequirements
          (VaseBreakerEndlessProperties *this,set *param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  long *plVar5;
  ZombieType *pZVar6;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  VaseBreakerProperties::GatherResourceRequirements((VaseBreakerProperties *)this,param_1);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
  if (bVar1) {
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
  }
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    pZVar6 = (ZombieType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ZombieType::AddInGameResourceRequirements(pZVar6,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  local_30 = FUN_049813f8(*(undefined8 *)(this + 0x58));
  local_28 = FUN_04981448(*(undefined8 *)(this + 0x60));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    do {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      local_20 = FUN_04981498(*(undefined8 *)(lVar4 + 0x18));
      local_18 = FUN_049814e8(*(undefined8 *)(lVar4 + 0x20));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar2 != '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
      }
      local_20 = FUN_04981498(*(undefined8 *)(lVar4 + 0x48));
      local_18 = FUN_049814e8(*(undefined8 *)(lVar4 + 0x50));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar2 != '\0') {
          pZVar6 = (ZombieType *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          ZombieType::AddInGameResourceRequirements(pZVar6,param_1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
      }
      local_20 = FUN_04981498(*(undefined8 *)(lVar4 + 0x60));
      local_18 = FUN_049814e8(*(undefined8 *)(lVar4 + 0x68));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar2 != '\0') {
          pZVar6 = (ZombieType *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          ZombieType::AddInGameResourceRequirements(pZVar6,param_1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
      }
      std::move_iterator<PlantWarsLevelData*>::operator++
                ((move_iterator<PlantWarsLevelData*> *)&local_30);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerEndlessProperties::ConfigureModule(VaseBreakerModule*) const */

void __thiscall
VaseBreakerEndlessProperties::ConfigureModule
          (VaseBreakerEndlessProperties *this,VaseBreakerModule *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  VaseBreakerEndlessStage *this_00;
  string *psVar6;
  long lVar7;
  string *psVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  VaseConfiguration *pVVar12;
  string asStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  undefined8 local_88;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [24];
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = VaseBreakerModule::GetCurrentEndlessWave(param_1);
  if ((0 < *(int *)(this + 0x40)) &&
     (cVar2 = VaseBreakerModule::ForceStartEndlessAtWave(param_1,*(int *)(this + 0x40)),
     cVar2 != '\0')) {
    iVar4 = *(int *)(this + 0x40);
  }
  this_00 = (VaseBreakerEndlessStage *)getStageForLevel(this,iVar4);
  std::string::string(asStack_b8,"special");
  nop();
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  local_78 = FUN_04981498(*(undefined8 *)(this_00 + 0x18));
  local_70 = FUN_049814e8(*(undefined8 *)(this_00 + 0x20));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
  if (bVar3) {
    do {
      psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      cVar2 = std::operator==(psVar6,asStack_b8);
      if (cVar2 == '\0') {
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
      }
      else {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_b0);
      }
      iVar5 = 0;
      if (0 < *(int *)(psVar6 + 8)) {
        do {
          iVar5 = iVar5 + 1;
          local_20[0] = FUN_0497f154(local_68,local_60);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_50,(int *)local_20);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_a0);
          VaseConfiguration::VaseConfiguration((VaseConfiguration *)local_20,aRStack_38,0);
          std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
                    ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_68,
                     (VaseConfiguration *)local_20);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        } while (iVar5 < *(int *)(psVar6 + 8));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_78);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    } while (bVar3);
  }
  local_78 = FUN_04981498(*(undefined8 *)(this_00 + 0x30));
  local_70 = FUN_049814e8(*(undefined8 *)(this_00 + 0x38));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
  if (bVar3) {
    do {
      iVar5 = 0;
      lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
      if (0 < *(int *)(lVar7 + 8)) {
        do {
          iVar5 = iVar5 + 1;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_98);
          VaseConfiguration::VaseConfiguration((VaseConfiguration *)local_20,aRStack_38,0);
          std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
                    ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_68,
                     (VaseConfiguration *)local_20);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        } while (iVar5 < *(int *)(lVar7 + 8));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_78);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    } while (bVar3);
  }
  local_78 = FUN_04981498(*(undefined8 *)(this_00 + 0x48));
  local_70 = FUN_049814e8(*(undefined8 *)(this_00 + 0x50));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
  if (bVar3) {
    do {
      psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
      cVar2 = std::operator==(psVar6,asStack_b8);
      if (cVar2 == '\0') {
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
      }
      else {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_a8);
      }
      iVar5 = 0;
      if (0 < *(int *)(psVar6 + 8)) {
        do {
          iVar5 = iVar5 + 1;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_90);
          VaseConfiguration::VaseConfiguration((VaseConfiguration *)local_20,aRStack_38,0);
          std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
                    ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_68,
                     (VaseConfiguration *)local_20);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        } while (iVar5 < *(int *)(psVar6 + 8));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_78);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    } while (bVar3);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_38);
  iVar5 = getEscalationCountForLevel(this,iVar4);
  VaseBreakerEndlessStage::GetZombieTypesForEscalationCount(this_00,iVar5,(vector *)aRStack_38);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_38);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_38);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_78), bVar3) {
    psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    cVar2 = std::operator==(psVar6,asStack_b8);
    if (cVar2 == '\0') {
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)aRStack_a8);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_70,(RtWeakPtrBase *)aRStack_80);
    VaseConfiguration::VaseConfiguration
              ((VaseConfiguration *)local_20,(RtWeakPtr<Sexy::SoundResource> *)&local_70,0);
    std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
              ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_68,
               (VaseConfiguration *)local_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_50);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_50);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar9,uVar10);
  local_20[0] = FUN_0497eff0(local_50,local_48);
  piVar11 = eastl::min_alt<int>((int *)local_20,(int *)(this_00 + 0x10));
  iVar5 = *piVar11;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      lVar1 = lVar7 + 1;
      piVar11 = (int *)FUN_0497f17c(local_50,lVar7);
      lVar7 = FUN_0497f184(local_68,(long)*piVar11);
      *(undefined1 *)(lVar7 + 8) = 1;
      lVar7 = lVar1;
    } while ((int)lVar1 < iVar5);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  VaseBreakerModule::SetVaseSpawnInfo
            (param_1,*(int *)(this_00 + 8),*(int *)(this_00 + 0xc),(vector *)local_20);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_68);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_68);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar3) {
    pVVar12 = (VaseConfiguration *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    VaseBreakerModule::AddVase(param_1,pVVar12);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_78);
  }
  Board::SetLevelNumber(*(Board **)(gLawnApp + 0x9f0),iVar4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)aRStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
  std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::~vector
            ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
  std::string::~string(asStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

