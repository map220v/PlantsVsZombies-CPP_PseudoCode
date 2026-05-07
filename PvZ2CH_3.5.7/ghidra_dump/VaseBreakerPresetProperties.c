// Class: VaseBreakerPresetProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerPresetProperties::StaticClassInit() */

void VaseBreakerPresetProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerPresetProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04982818,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerPresetProperties::StaticGetClass() */

long * VaseBreakerPresetProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerPresetProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerPresetProperties::GetClass() const */

long * VaseBreakerPresetProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerPresetProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerPresetProperties::VaseBreakerPresetProperties() */

void __thiscall
VaseBreakerPresetProperties::VaseBreakerPresetProperties(VaseBreakerPresetProperties *this)

{
  size_t __n;
  
  VaseBreakerProperties::VaseBreakerProperties((VaseBreakerProperties *)this);
  *(undefined4 *)(this + 0x40) = 5;
  __n = 8;
  *(undefined4 *)(this + 0x44) = 8;
  *(undefined ***)this = &PTR_GetClass_06918830;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  Set8BytesTo0((string *)(this + 0x80));
  std::string::append((string *)(this + 0x80),"",__n);
  return;
}


/* VaseBreakerPresetProperties::StaticNew() */

VaseBreakerPresetProperties * VaseBreakerPresetProperties::StaticNew(void)

{
  VaseBreakerPresetProperties *this;
  
  this = ::operator_new(0x88);
  VaseBreakerPresetProperties(this);
  return this;
}


/* VaseBreakerPresetProperties::~VaseBreakerPresetProperties() */

void __thiscall
VaseBreakerPresetProperties::~VaseBreakerPresetProperties(VaseBreakerPresetProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06918830;
  std::string::~string((string *)(this + 0x80));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x68));
  std::vector<VaseContentProperties,std::allocator<VaseContentProperties>>::~vector
            ((vector<VaseContentProperties,std::allocator<VaseContentProperties>> *)(this + 0x48));
  VaseBreakerProperties::~VaseBreakerProperties((VaseBreakerProperties *)this);
  return;
}


/* VaseBreakerPresetProperties::~VaseBreakerPresetProperties() */

void __thiscall
VaseBreakerPresetProperties::~VaseBreakerPresetProperties(VaseBreakerPresetProperties *this)

{
  ~VaseBreakerPresetProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerPresetProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void VaseBreakerPresetProperties::GatherResourceRequirements(set *param_1)

{
  string *psVar1;
  GridItemType *this;
  set *in_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)param_1,in_x1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_10,"vase");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  GridItemType::AddResourceRequirements(this,in_x1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerPresetProperties::ConfigureModule(VaseBreakerModule*) const */

void __thiscall
VaseBreakerPresetProperties::ConfigureModule
          (VaseBreakerPresetProperties *this,VaseBreakerModule *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  VaseConfiguration *pVVar10;
  int iVar11;
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_80 = FUN_049812f8(*(undefined8 *)(this + 0x48));
  local_78 = FUN_04981348(*(undefined8 *)(this + 0x50));
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
  if (bVar2) {
    do {
      iVar11 = 0;
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      iVar3 = *(int *)(lVar4 + 0x18);
      if (0 < iVar3) {
        do {
          while (lVar8 = FUN_05474184(lVar4 + 8), lVar8 == 0) {
            lVar8 = FUN_05474184(lVar4);
            if (lVar8 == 0) {
              lVar8 = FUN_05474184(lVar4 + 0x10);
              if (lVar8 != 0) {
                psVar5 = (string *)
                         Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
                ;
                ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar5);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_70);
                VaseConfiguration::VaseConfiguration
                          ((VaseConfiguration *)local_60,(RtWeakPtr<Sexy::SoundResource> *)&local_68
                           ,0);
                std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
                          ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_50,
                           (VaseConfiguration *)local_60);
                std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_60);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
                iVar3 = *(int *)(lVar4 + 0x18);
              }
            }
            else {
              psVar5 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
              ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_70);
              VaseConfiguration::VaseConfiguration
                        ((VaseConfiguration *)local_60,(RtWeakPtr<Sexy::SoundResource> *)&local_68,0
                        );
              std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
                        ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_50,
                         (VaseConfiguration *)local_60);
              std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_60);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
              iVar3 = FUN_0497f154(local_50,local_48);
              local_60[0] = CONCAT44(local_60[0]._4_4_,iVar3 + -1);
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)&local_20,(int *)local_60);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
              iVar3 = *(int *)(lVar4 + 0x18);
            }
            iVar11 = iVar11 + 1;
            if (iVar3 <= iVar11) goto LAB_049850cc;
          }
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          iVar11 = iVar11 + 1;
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_70);
          VaseConfiguration::VaseConfiguration
                    ((VaseConfiguration *)local_60,(RtWeakPtr<Sexy::SoundResource> *)&local_68,0);
          std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::push_back
                    ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_50,
                     (VaseConfiguration *)local_60);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          iVar3 = FUN_0497f154(local_50,local_48);
          local_60[0] = CONCAT44(local_60[0]._4_4_,iVar3 + -1);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_38,(int *)local_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
          iVar3 = *(int *)(lVar4 + 0x18);
        } while (iVar11 < iVar3);
      }
LAB_049850cc:
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_80);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
    } while (bVar2);
  }
  if (0 < *(int *)(this + 0x60)) {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar6,uVar7);
    iVar11 = *(int *)(this + 0x60);
    if (0 < iVar11) {
      lVar8 = FUN_0497eff0(local_38,local_30);
      uVar6 = local_50;
      lVar4 = 0;
      do {
        if (lVar4 == lVar8) break;
        lVar1 = lVar4 + 1;
        piVar9 = (int *)FUN_0497f17c(local_38,lVar4);
        lVar4 = FUN_0497f184(uVar6,(long)*piVar9);
        *(undefined1 *)(lVar4 + 8) = 1;
        lVar4 = lVar1;
      } while ((int)lVar1 < iVar11);
    }
  }
  if (0 < *(int *)(this + 100)) {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar6,uVar7);
    iVar11 = *(int *)(this + 100);
    if (0 < iVar11) {
      lVar8 = FUN_0497eff0(local_20,local_18);
      lVar4 = 0;
      do {
        if (lVar4 == lVar8) break;
        lVar1 = lVar4 + 1;
        piVar9 = (int *)FUN_0497f17c(local_20,lVar4);
        lVar4 = FUN_0497f184(local_50,(long)*piVar9);
        *(undefined1 *)(lVar4 + 8) = 1;
        lVar4 = lVar1;
      } while ((int)lVar1 < iVar11);
    }
  }
  VaseBreakerModule::SetVaseSpawnInfo
            (param_1,*(int *)(this + 0x40),*(int *)(this + 0x44),(vector *)(this + 0x68));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
  local_60[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_50);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_60)
        , bVar2) {
    pVVar10 = (VaseConfiguration *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    VaseBreakerModule::AddVase(param_1,pVVar10);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_68);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_38);
  std::vector<VaseConfiguration,std::allocator<VaseConfiguration>>::~vector
            ((vector<VaseConfiguration,std::allocator<VaseConfiguration>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

