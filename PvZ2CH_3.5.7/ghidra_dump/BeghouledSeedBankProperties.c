// Class: BeghouledSeedBankProperties


/* BeghouledSeedBankProperties::GetBankType() const */

undefined8 BeghouledSeedBankProperties::GetBankType(void)

{
  return 5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledSeedBankProperties::StaticClassInit() */

void BeghouledSeedBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeghouledSeedBankProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0441a11c,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledSeedBankProperties::BeghouledSeedBankProperties() */

void __thiscall
BeghouledSeedBankProperties::BeghouledSeedBankProperties(BeghouledSeedBankProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined4 *)(this + 0x40) = 2;
  *(undefined ***)this = &PTR_GetClass_06848410;
  return;
}


/* BeghouledSeedBankProperties::StaticNew() */

BeghouledSeedBankProperties * BeghouledSeedBankProperties::StaticNew(void)

{
  BeghouledSeedBankProperties *this;
  
  this = ::operator_new(0xd0);
  BeghouledSeedBankProperties(this);
  return this;
}


/* BeghouledSeedBankProperties::~BeghouledSeedBankProperties() */

void __thiscall
BeghouledSeedBankProperties::~BeghouledSeedBankProperties(BeghouledSeedBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06848410;
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* BeghouledSeedBankProperties::~BeghouledSeedBankProperties() */

void __thiscall
BeghouledSeedBankProperties::~BeghouledSeedBankProperties(BeghouledSeedBankProperties *this)

{
  ~BeghouledSeedBankProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledSeedBankProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
BeghouledSeedBankProperties::GatherResourceRequirements
          (BeghouledSeedBankProperties *this,set *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  string *psVar3;
  long *plVar4;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  local_20 = FUN_04416abc(*(undefined8 *)(this + 0x60));
  local_18 = FUN_04416b0c(*(undefined8 *)(this + 0x68));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar2);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  local_20 = FUN_04416abc(*(undefined8 *)(this + 0x78));
  local_18 = FUN_04416b0c(*(undefined8 *)(this + 0x80));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar2);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    (**(code **)(*plVar4 + 0x48))(plVar4,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledSeedBankProperties::StaticGetClass() */

long * BeghouledSeedBankProperties::StaticGetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledSeedBankProperties::GetClass() const */

long * BeghouledSeedBankProperties::GetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

