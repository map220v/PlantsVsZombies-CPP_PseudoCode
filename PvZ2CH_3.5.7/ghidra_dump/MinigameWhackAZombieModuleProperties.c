// Class: MinigameWhackAZombieModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameWhackAZombieModuleProperties::StaticClassInit() */

void MinigameWhackAZombieModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MinigameWhackAZombieModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0dfa4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameWhackAZombieModuleProperties::StaticGetClass() */

long * MinigameWhackAZombieModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MinigameWhackAZombieModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MinigameWhackAZombieModuleProperties::GetClass() const */

long * MinigameWhackAZombieModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MinigameWhackAZombieModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MinigameWhackAZombieModuleProperties::GetModuleClass() const */

long * MinigameWhackAZombieModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MinigameWhackAZombieModule::sClass != (long *)0x0) {
    return MinigameWhackAZombieModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MinigameWhackAZombieModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"MinigameWhackAZombieModule",uVar2,MinigameWhackAZombieModule::StaticNew);
  MinigameWhackAZombieModule::StaticClassInit();
  return MinigameWhackAZombieModule::sClass;
}


/* MinigameWhackAZombieModuleProperties::MinigameWhackAZombieModuleProperties() */

void __thiscall
MinigameWhackAZombieModuleProperties::MinigameWhackAZombieModuleProperties
          (MinigameWhackAZombieModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0692dd10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *(undefined4 *)(this + 0x40) = 1;
  return;
}


/* MinigameWhackAZombieModuleProperties::StaticNew() */

MinigameWhackAZombieModuleProperties * MinigameWhackAZombieModuleProperties::StaticNew(void)

{
  MinigameWhackAZombieModuleProperties *this;
  
  this = ::operator_new(0x78);
  MinigameWhackAZombieModuleProperties(this);
  return this;
}


/* MinigameWhackAZombieModuleProperties::~MinigameWhackAZombieModuleProperties() */

void __thiscall
MinigameWhackAZombieModuleProperties::~MinigameWhackAZombieModuleProperties
          (MinigameWhackAZombieModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0692dd10;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x60));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* MinigameWhackAZombieModuleProperties::~MinigameWhackAZombieModuleProperties() */

void __thiscall
MinigameWhackAZombieModuleProperties::~MinigameWhackAZombieModuleProperties
          (MinigameWhackAZombieModuleProperties *this)

{
  ~MinigameWhackAZombieModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameWhackAZombieModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
MinigameWhackAZombieModuleProperties::GatherResourceRequirements
          (MinigameWhackAZombieModuleProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"WhackZombieUIGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

