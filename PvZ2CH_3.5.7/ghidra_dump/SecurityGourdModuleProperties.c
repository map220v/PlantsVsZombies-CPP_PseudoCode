// Class: SecurityGourdModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModuleProperties::StaticClassInit() */

void SecurityGourdModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SecurityGourdModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036e745c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecurityGourdModuleProperties::StaticGetClass() */

long * SecurityGourdModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SecurityGourdModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SecurityGourdModuleProperties::GetClass() const */

long * SecurityGourdModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SecurityGourdModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SecurityGourdModuleProperties::GetModuleClass() const */

long * SecurityGourdModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SecurityGourdModule::sClass != (long *)0x0) {
    return SecurityGourdModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SecurityGourdModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SecurityGourdModule",uVar2,SecurityGourdModule::StaticNew);
  SecurityGourdModule::StaticClassInit();
  return SecurityGourdModule::sClass;
}


/* SecurityGourdModuleProperties::SecurityGourdModuleProperties() */

void __thiscall
SecurityGourdModuleProperties::SecurityGourdModuleProperties(SecurityGourdModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06686010;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* SecurityGourdModuleProperties::StaticNew() */

SecurityGourdModuleProperties * SecurityGourdModuleProperties::StaticNew(void)

{
  SecurityGourdModuleProperties *this;
  
  this = ::operator_new(0x78);
  SecurityGourdModuleProperties(this);
  return this;
}


/* SecurityGourdModuleProperties::~SecurityGourdModuleProperties() */

void __thiscall
SecurityGourdModuleProperties::~SecurityGourdModuleProperties(SecurityGourdModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06686010;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x60));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SecurityGourdModuleProperties::~SecurityGourdModuleProperties() */

void __thiscall
SecurityGourdModuleProperties::~SecurityGourdModuleProperties(SecurityGourdModuleProperties *this)

{
  ~SecurityGourdModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecurityGourdModuleProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
SecurityGourdModuleProperties::GatherResourceRequirements
          (SecurityGourdModuleProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::GatherResourceRequirements((LevelModuleProperties *)this,param_1);
  std::string::string(asStack_10,"Anim_SecurityGourds");
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

