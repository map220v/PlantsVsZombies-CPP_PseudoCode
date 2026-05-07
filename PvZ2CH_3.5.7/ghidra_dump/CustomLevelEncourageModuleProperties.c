// Class: CustomLevelEncourageModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelEncourageModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
CustomLevelEncourageModuleProperties::GatherResourceRequirements
          (CustomLevelEncourageModuleProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  std::string::string(asStack_10,"Egypt_Gravestone");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Game_Tombstones_Dynamic");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Tombstone_Dark_Effects");
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


/* CustomLevelEncourageModuleProperties::GetModuleClass() const */

long * CustomLevelEncourageModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CustomLevelEncourageModule::sClass != (long *)0x0) {
    return CustomLevelEncourageModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CustomLevelEncourageModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"CustomLevelEncourageModule",uVar2,CustomLevelEncourageModule::StaticNew);
  CustomLevelEncourageModule::StaticClassInit();
  return CustomLevelEncourageModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelEncourageModuleProperties::StaticClassInit() */

void CustomLevelEncourageModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomLevelEncourageModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_035e134c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelEncourageModuleProperties::StaticGetClass() */

long * CustomLevelEncourageModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelEncourageModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelEncourageModuleProperties::GetClass() const */

long * CustomLevelEncourageModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomLevelEncourageModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomLevelEncourageModuleProperties::CustomLevelEncourageModuleProperties() */

void __thiscall
CustomLevelEncourageModuleProperties::CustomLevelEncourageModuleProperties
          (CustomLevelEncourageModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  this[0x40] = (CustomLevelEncourageModuleProperties)0x1;
  this[0x41] = (CustomLevelEncourageModuleProperties)0x1;
  this[0x42] = (CustomLevelEncourageModuleProperties)0x1;
  *(undefined ***)this = &PTR_GetClass_0665eed0;
  return;
}


/* CustomLevelEncourageModuleProperties::StaticNew() */

CustomLevelEncourageModuleProperties * CustomLevelEncourageModuleProperties::StaticNew(void)

{
  CustomLevelEncourageModuleProperties *this;
  
  this = ::operator_new(0x48);
  CustomLevelEncourageModuleProperties(this);
  return this;
}


/* CustomLevelEncourageModuleProperties::~CustomLevelEncourageModuleProperties() */

void __thiscall
CustomLevelEncourageModuleProperties::~CustomLevelEncourageModuleProperties
          (CustomLevelEncourageModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0665eed0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* CustomLevelEncourageModuleProperties::~CustomLevelEncourageModuleProperties() */

void __thiscall
CustomLevelEncourageModuleProperties::~CustomLevelEncourageModuleProperties
          (CustomLevelEncourageModuleProperties *this)

{
  ~CustomLevelEncourageModuleProperties(this);
  AK::FreeHook(this);
  return;
}

