// Class: BeghouledPresetProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledPresetProperties::StaticClassInit() */

void BeghouledPresetProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeghouledUpgradeMap");
    (*pcVar3)(plVar2,asStack_10,FUN_03ba1ed0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BeghouledPresetProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03ba5468,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledPresetProperties::StaticGetClass() */

long * BeghouledPresetProperties::StaticGetClass(void)

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
  uVar2 = BeghouledProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledPresetProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledPresetProperties::GetClass() const */

long * BeghouledPresetProperties::GetClass(void)

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
  uVar2 = BeghouledProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledPresetProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledPresetProperties::BeghouledPresetProperties() */

void __thiscall
BeghouledPresetProperties::BeghouledPresetProperties(BeghouledPresetProperties *this)

{
  BeghouledProperties::BeghouledProperties((BeghouledProperties *)this);
  *(undefined4 *)(this + 0x40) = 10;
  *(undefined ***)this = &PTR_GetClass_067373b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* BeghouledPresetProperties::StaticNew() */

BeghouledPresetProperties * BeghouledPresetProperties::StaticNew(void)

{
  BeghouledPresetProperties *this;
  
  this = ::operator_new(0x78);
  BeghouledPresetProperties(this);
  return this;
}


/* BeghouledPresetProperties::~BeghouledPresetProperties() */

void __thiscall
BeghouledPresetProperties::~BeghouledPresetProperties(BeghouledPresetProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067373b0;
  std::vector<BeghouledUpgradeMap,std::allocator<BeghouledUpgradeMap>>::~vector
            ((vector<BeghouledUpgradeMap,std::allocator<BeghouledUpgradeMap>> *)(this + 0x60));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x48));
  BeghouledProperties::~BeghouledProperties((BeghouledProperties *)this);
  return;
}


/* BeghouledPresetProperties::~BeghouledPresetProperties() */

void __thiscall
BeghouledPresetProperties::~BeghouledPresetProperties(BeghouledPresetProperties *this)

{
  ~BeghouledPresetProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledPresetProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
BeghouledPresetProperties::GatherResourceRequirements(BeghouledPresetProperties *this,set *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  string *psVar4;
  GridItemType *this_00;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PresetPlantModuleProperties::GatherResourceRequirements
            ((PresetPlantModuleProperties *)this,param_1);
  local_20 = FUN_03ba4338(*(undefined8 *)(this + 0x48));
  local_18 = FUN_03ba4388(*(undefined8 *)(this + 0x50));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar2);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    (**(code **)(*plVar3 + 0x48))(plVar3,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string((string *)aRStack_10,"crater");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar4);
  std::string::~string((string *)aRStack_10);
  nop();
  this_00 = (GridItemType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  GridItemType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

