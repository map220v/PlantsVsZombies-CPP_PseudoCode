// Class: BananaTutorialProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialProperties::StaticClassInit() */

void BananaTutorialProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BananaTutorialProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_041ee3ac,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BananaTutorialProperties::StaticGetClass() */

long * BananaTutorialProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BananaTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BananaTutorialProperties::GetClass() const */

long * BananaTutorialProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BananaTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BananaTutorialProperties::GetModuleClass() const */

long * BananaTutorialProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BananaTutorialModule::sClass != (long *)0x0) {
    return BananaTutorialModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BananaTutorialModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"BananaTutorialModule",uVar2,BananaTutorialModule::StaticNew);
  BananaTutorialModule::StaticClassInit();
  return BananaTutorialModule::sClass;
}


/* BananaTutorialProperties::BananaTutorialProperties() */

void __thiscall BananaTutorialProperties::BananaTutorialProperties(BananaTutorialProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06805990;
  return;
}


/* BananaTutorialProperties::StaticNew() */

BananaTutorialProperties * BananaTutorialProperties::StaticNew(void)

{
  BananaTutorialProperties *this;
  
  this = ::operator_new(0x78);
  BananaTutorialProperties(this);
  return this;
}


/* BananaTutorialProperties::~BananaTutorialProperties() */

void __thiscall BananaTutorialProperties::~BananaTutorialProperties(BananaTutorialProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06805990;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* BananaTutorialProperties::~BananaTutorialProperties() */

void __thiscall BananaTutorialProperties::~BananaTutorialProperties(BananaTutorialProperties *this)

{
  ~BananaTutorialProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaTutorialProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
BananaTutorialProperties::GatherResourceRequirements(BananaTutorialProperties *this,set *param_1)

{
  char cVar1;
  string *psVar2;
  long *plVar3;
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"banana");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    (**(code **)(*plVar3 + 0x48))(plVar3,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

