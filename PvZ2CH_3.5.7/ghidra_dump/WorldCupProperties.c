// Class: WorldCupProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupProperties::StaticClassInit() */

void WorldCupProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldCupProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04c37cc0,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldCupProperties::StaticGetClass() */

long * WorldCupProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldCupProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldCupProperties::GetClass() const */

long * WorldCupProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldCupProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldCupProperties::GetModuleClass() const */

long * WorldCupProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroWorldCup::sClass != (long *)0x0) {
    return IntroWorldCup::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroWorldCup::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroWorldCup",uVar2,IntroWorldCup::StaticNew);
  IntroWorldCup::StaticClassInit();
  return IntroWorldCup::sClass;
}


/* WorldCupProperties::WorldCupProperties() */

void __thiscall WorldCupProperties::WorldCupProperties(WorldCupProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = (WorldCupProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_06985330;
  return;
}


/* WorldCupProperties::StaticNew() */

WorldCupProperties * WorldCupProperties::StaticNew(void)

{
  WorldCupProperties *this;
  
  this = ::operator_new(0x80);
  WorldCupProperties(this);
  return this;
}


/* WorldCupProperties::~WorldCupProperties() */

void __thiscall WorldCupProperties::~WorldCupProperties(WorldCupProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06985330;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* WorldCupProperties::~WorldCupProperties() */

void __thiscall WorldCupProperties::~WorldCupProperties(WorldCupProperties *this)

{
  ~WorldCupProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall
WorldCupProperties::GatherResourceRequirements(WorldCupProperties *this,set *param_1)

{
  string *psVar1;
  GridItemType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_10,"obstacle");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  GridItemType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

