// Class: PlantWarsCreditModuleProperties


/* PlantWarsCreditModuleProperties::GetModuleClass() const */

long * PlantWarsCreditModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantWarsCreditModule::sClass != (long *)0x0) {
    return PlantWarsCreditModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantWarsCreditModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsCreditModule",uVar2,PlantWarsCreditModule::StaticNew);
  PlantWarsCreditModule::StaticClassInit();
  return PlantWarsCreditModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModuleProperties::StaticClassInit() */

void PlantWarsCreditModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsCreditModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03415540,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsCreditModuleProperties::StaticGetClass() */

long * PlantWarsCreditModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsCreditModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsCreditModuleProperties::GetClass() const */

long * PlantWarsCreditModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWarsCreditModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsCreditModuleProperties::PlantWarsCreditModuleProperties() */

void __thiscall
PlantWarsCreditModuleProperties::PlantWarsCreditModuleProperties
          (PlantWarsCreditModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06620990;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  return;
}


/* PlantWarsCreditModuleProperties::StaticNew() */

PlantWarsCreditModuleProperties * PlantWarsCreditModuleProperties::StaticNew(void)

{
  PlantWarsCreditModuleProperties *this;
  
  this = ::operator_new(0x70);
  PlantWarsCreditModuleProperties(this);
  return this;
}


/* PlantWarsCreditModuleProperties::~PlantWarsCreditModuleProperties() */

void __thiscall
PlantWarsCreditModuleProperties::~PlantWarsCreditModuleProperties
          (PlantWarsCreditModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06620990;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantWarsCreditModuleProperties::~PlantWarsCreditModuleProperties() */

void __thiscall
PlantWarsCreditModuleProperties::~PlantWarsCreditModuleProperties
          (PlantWarsCreditModuleProperties *this)

{
  ~PlantWarsCreditModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsCreditModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
PlantWarsCreditModuleProperties::GatherResourceRequirements
          (PlantWarsCreditModuleProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  std::string::string(asStack_10,"GameUpgrades");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_PlantFamily");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_PlantWars");
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

