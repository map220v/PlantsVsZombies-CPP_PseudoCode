// Class: ZombiePotionModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModuleProperties::StaticClassInit() */

void ZombiePotionModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePotionModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0449ec34,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePotionModuleProperties::StaticGetClass() */

long * ZombiePotionModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePotionModuleProperties::GetClass() const */

long * ZombiePotionModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePotionModuleProperties::GetModuleClass() const */

long * ZombiePotionModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombiePotionModule::sClass != (long *)0x0) {
    return ZombiePotionModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombiePotionModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionModule",uVar2,ZombiePotionModule::StaticNew);
  ZombiePotionModule::StaticClassInit();
  return ZombiePotionModule::sClass;
}


/* ZombiePotionModuleProperties::ZombiePotionModuleProperties() */

void __thiscall
ZombiePotionModuleProperties::ZombiePotionModuleProperties(ZombiePotionModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06851e30;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined4 *)(this + 0x48) = 0xf;
  *(undefined4 *)(this + 0x4c) = 3;
  return;
}


/* ZombiePotionModuleProperties::StaticNew() */

ZombiePotionModuleProperties * ZombiePotionModuleProperties::StaticNew(void)

{
  ZombiePotionModuleProperties *this;
  
  this = ::operator_new(0x68);
  ZombiePotionModuleProperties(this);
  return this;
}


/* ZombiePotionModuleProperties::~ZombiePotionModuleProperties() */

void __thiscall
ZombiePotionModuleProperties::~ZombiePotionModuleProperties(ZombiePotionModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06851e30;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombiePotionModuleProperties::~ZombiePotionModuleProperties() */

void __thiscall
ZombiePotionModuleProperties::~ZombiePotionModuleProperties(ZombiePotionModuleProperties *this)

{
  ~ZombiePotionModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
ZombiePotionModuleProperties::GatherResourceRequirements
          (ZombiePotionModuleProperties *this,set *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  string *psVar3;
  GridItemType *this_00;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  local_20 = FUN_0449eef4(*(undefined8 *)(this + 0x50));
  local_18 = FUN_0449ef44(*(undefined8 *)(this + 0x58));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    FUN_05475d88(asStack_28,uVar2);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    GridItemType::AddResourceRequirements(this_00,param_1);
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

