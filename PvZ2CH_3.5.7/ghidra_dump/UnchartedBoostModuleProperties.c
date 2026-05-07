// Class: UnchartedBoostModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModuleProperties::StaticClassInit() */

void UnchartedBoostModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedBoostModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0340c390,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedBoostModuleProperties::StaticGetClass() */

long * UnchartedBoostModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedBoostModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedBoostModuleProperties::GetClass() const */

long * UnchartedBoostModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"UnchartedBoostModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedBoostModuleProperties::GetModuleClass() const */

long * UnchartedBoostModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (UnchartedBoostModule::sClass != (long *)0x0) {
    return UnchartedBoostModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  UnchartedBoostModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedBoostModule",uVar2,UnchartedBoostModule::StaticNew);
  UnchartedBoostModule::StaticClassInit();
  return UnchartedBoostModule::sClass;
}


/* UnchartedBoostModuleProperties::UnchartedBoostModuleProperties() */

void __thiscall
UnchartedBoostModuleProperties::UnchartedBoostModuleProperties(UnchartedBoostModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0661fc00;
  return;
}


/* UnchartedBoostModuleProperties::StaticNew() */

UnchartedBoostModuleProperties * UnchartedBoostModuleProperties::StaticNew(void)

{
  UnchartedBoostModuleProperties *this;
  
  this = ::operator_new(0x40);
  UnchartedBoostModuleProperties(this);
  return this;
}


/* UnchartedBoostModuleProperties::~UnchartedBoostModuleProperties() */

void __thiscall
UnchartedBoostModuleProperties::~UnchartedBoostModuleProperties
          (UnchartedBoostModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0661fc00;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* UnchartedBoostModuleProperties::~UnchartedBoostModuleProperties() */

void __thiscall
UnchartedBoostModuleProperties::~UnchartedBoostModuleProperties
          (UnchartedBoostModuleProperties *this)

{
  ~UnchartedBoostModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedBoostModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
UnchartedBoostModuleProperties::GatherResourceRequirements
          (UnchartedBoostModuleProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  std::string::string(asStack_10,"PlantCherryBomb");
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

