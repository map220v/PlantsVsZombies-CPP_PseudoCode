// Class: HeroPlantModuleProperties


/* HeroPlantModuleProperties::GetModuleClass() const */

long * HeroPlantModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (HeroPlantModule::sClass != (long *)0x0) {
    return HeroPlantModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  HeroPlantModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantModule",uVar2,HeroPlantModule::StaticNew);
  HeroPlantModule::StaticClassInit();
  return HeroPlantModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantModuleProperties::StaticClassInit() */

void HeroPlantModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeroPlantModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_042bbeb4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantModuleProperties::StaticGetClass() */

long * HeroPlantModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantModuleProperties::GetClass() const */

long * HeroPlantModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"HeroPlantModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantModuleProperties::HeroPlantModuleProperties() */

void __thiscall
HeroPlantModuleProperties::HeroPlantModuleProperties(HeroPlantModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0682bfc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* HeroPlantModuleProperties::StaticNew() */

HeroPlantModuleProperties * HeroPlantModuleProperties::StaticNew(void)

{
  HeroPlantModuleProperties *this;
  
  this = ::operator_new(0x58);
  HeroPlantModuleProperties(this);
  return this;
}


/* HeroPlantModuleProperties::~HeroPlantModuleProperties() */

void __thiscall
HeroPlantModuleProperties::~HeroPlantModuleProperties(HeroPlantModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0682bfc0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* HeroPlantModuleProperties::~HeroPlantModuleProperties() */

void __thiscall
HeroPlantModuleProperties::~HeroPlantModuleProperties(HeroPlantModuleProperties *this)

{
  ~HeroPlantModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantModuleProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) const */

void __thiscall
HeroPlantModuleProperties::GatherResourceRequirements(HeroPlantModuleProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  std::string::string(asStack_10,"HeroPlant");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

