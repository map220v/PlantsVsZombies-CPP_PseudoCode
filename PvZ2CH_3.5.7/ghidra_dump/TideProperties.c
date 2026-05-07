// Class: TideProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideProperties::StaticClassInit() */

void TideProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TideProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0435e0d8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TideProperties::StaticGetClass() */

long * TideProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TideProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TideProperties::GetClass() const */

long * TideProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"TideProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TideProperties::GetModuleClass() const */

long * TideProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TideModule::sClass != (long *)0x0) {
    return TideModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TideModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"TideModule",uVar2,TideModule::StaticNew);
  TideModule::StaticClassInit();
  return TideModule::sClass;
}


/* TideProperties::TideProperties() */

void __thiscall TideProperties::TideProperties(TideProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  this[0x44] = (TideProperties)0x1;
  *(undefined ***)this = &PTR_GetClass_06834e60;
  *(undefined4 *)(this + 0x40) = 0x40000000;
  return;
}


/* TideProperties::StaticNew() */

TideProperties * TideProperties::StaticNew(void)

{
  TideProperties *this;
  
  this = ::operator_new(0x48);
  TideProperties(this);
  return this;
}


/* TideProperties::~TideProperties() */

void __thiscall TideProperties::~TideProperties(TideProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06834e60;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* TideProperties::~TideProperties() */

void __thiscall TideProperties::~TideProperties(TideProperties *this)

{
  ~TideProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideProperties::GatherResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) const */

void __thiscall TideProperties::GatherResourceRequirements(TideProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  std::string::string(asStack_10,"DelayLoad_Background_Beach");
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

