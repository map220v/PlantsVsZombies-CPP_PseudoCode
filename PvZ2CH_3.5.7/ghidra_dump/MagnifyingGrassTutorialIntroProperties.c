// Class: MagnifyingGrassTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntroProperties::StaticClassInit() */

void MagnifyingGrassTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagnifyingGrassTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e3ed24,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnifyingGrassTutorialIntroProperties::StaticGetClass() */

long * MagnifyingGrassTutorialIntroProperties::StaticGetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MagnifyingGrassTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnifyingGrassTutorialIntroProperties::GetClass() const */

long * MagnifyingGrassTutorialIntroProperties::GetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MagnifyingGrassTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnifyingGrassTutorialIntroProperties::GetModuleClass() const */

long * MagnifyingGrassTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MagnifyingGrassTutorialIntro::sClass != (long *)0x0) {
    return MagnifyingGrassTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MagnifyingGrassTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"MagnifyingGrassTutorialIntro",uVar2,MagnifyingGrassTutorialIntro::StaticNew);
  MagnifyingGrassTutorialIntro::StaticClassInit();
  return MagnifyingGrassTutorialIntro::sClass;
}


/* MagnifyingGrassTutorialIntroProperties::MagnifyingGrassTutorialIntroProperties() */

void __thiscall
MagnifyingGrassTutorialIntroProperties::MagnifyingGrassTutorialIntroProperties
          (MagnifyingGrassTutorialIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678ac30;
  return;
}


/* MagnifyingGrassTutorialIntroProperties::StaticNew() */

MagnifyingGrassTutorialIntroProperties * MagnifyingGrassTutorialIntroProperties::StaticNew(void)

{
  MagnifyingGrassTutorialIntroProperties *this;
  
  this = ::operator_new(0x78);
  MagnifyingGrassTutorialIntroProperties(this);
  return this;
}


/* MagnifyingGrassTutorialIntroProperties::~MagnifyingGrassTutorialIntroProperties() */

void __thiscall
MagnifyingGrassTutorialIntroProperties::~MagnifyingGrassTutorialIntroProperties
          (MagnifyingGrassTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678ac30;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* MagnifyingGrassTutorialIntroProperties::~MagnifyingGrassTutorialIntroProperties() */

void __thiscall
MagnifyingGrassTutorialIntroProperties::~MagnifyingGrassTutorialIntroProperties
          (MagnifyingGrassTutorialIntroProperties *this)

{
  ~MagnifyingGrassTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassTutorialIntroProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
MagnifyingGrassTutorialIntroProperties::GatherResourceRequirements
          (MagnifyingGrassTutorialIntroProperties *this,set *param_1)

{
  string *psVar1;
  long *plVar2;
  ZombieType *this_00;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"magnifyinggrass");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"future_armor1");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  ZombieType::AddInGameResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

