// Class: MissileToeTutorialProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeTutorialProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
MissileToeTutorialProperties::GatherResourceRequirements
          (MissileToeTutorialProperties *this,set *param_1)

{
  string *psVar1;
  long *plVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_18,"banana");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeTutorialProperties::StaticClassInit() */

void MissileToeTutorialProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MissileToeTutorialProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf36b4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MissileToeTutorialProperties::StaticGetClass() */

long * MissileToeTutorialProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeTutorialProperties::GetClass() const */

long * MissileToeTutorialProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MissileToeTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MissileToeTutorialProperties::GetModuleClass() const */

long * MissileToeTutorialProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MissileToeTutorialModule::sClass != (long *)0x0) {
    return MissileToeTutorialModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MissileToeTutorialModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"MissileToeTutorialModule",uVar2,MissileToeTutorialModule::StaticNew);
  MissileToeTutorialModule::StaticClassInit();
  return MissileToeTutorialModule::sClass;
}


/* MissileToeTutorialProperties::MissileToeTutorialProperties() */

void __thiscall
MissileToeTutorialProperties::MissileToeTutorialProperties(MissileToeTutorialProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_067414f0;
  return;
}


/* MissileToeTutorialProperties::StaticNew() */

MissileToeTutorialProperties * MissileToeTutorialProperties::StaticNew(void)

{
  MissileToeTutorialProperties *this;
  
  this = ::operator_new(0x78);
  MissileToeTutorialProperties(this);
  return this;
}


/* MissileToeTutorialProperties::~MissileToeTutorialProperties() */

void __thiscall
MissileToeTutorialProperties::~MissileToeTutorialProperties(MissileToeTutorialProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_067414f0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* MissileToeTutorialProperties::~MissileToeTutorialProperties() */

void __thiscall
MissileToeTutorialProperties::~MissileToeTutorialProperties(MissileToeTutorialProperties *this)

{
  ~MissileToeTutorialProperties(this);
  AK::FreeHook(this);
  return;
}

