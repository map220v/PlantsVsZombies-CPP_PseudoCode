// Class: SimpleZombieSpawnerProperties


/* SimpleZombieSpawnerProperties::SimpleZombieSpawnerProperties() */

void __thiscall
SimpleZombieSpawnerProperties::SimpleZombieSpawnerProperties(SimpleZombieSpawnerProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684cbb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* SimpleZombieSpawnerProperties::~SimpleZombieSpawnerProperties() */

void __thiscall
SimpleZombieSpawnerProperties::~SimpleZombieSpawnerProperties(SimpleZombieSpawnerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0684cbb0;
  std::vector<ZSEntryList,std::allocator<ZSEntryList>>::~vector
            ((vector<ZSEntryList,std::allocator<ZSEntryList>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SimpleZombieSpawnerProperties::~SimpleZombieSpawnerProperties() */

void __thiscall
SimpleZombieSpawnerProperties::~SimpleZombieSpawnerProperties(SimpleZombieSpawnerProperties *this)

{
  ~SimpleZombieSpawnerProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SimpleZombieSpawnerProperties::StaticClassInit() */

void SimpleZombieSpawnerProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieSpawnerEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_04463400,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZSEntryList");
    (*pcVar3)(plVar2,asStack_10,FUN_04463edc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SimpleZombieSpawnerProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_044641b4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SimpleZombieSpawnerProperties::StaticGetClass() */

long * SimpleZombieSpawnerProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SimpleZombieSpawnerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SimpleZombieSpawnerProperties::GetClass() const */

long * SimpleZombieSpawnerProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SimpleZombieSpawnerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SimpleZombieSpawnerProperties::GetModuleClass() const */

long * SimpleZombieSpawnerProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SimpleZombieSpawnerModule::sClass != (long *)0x0) {
    return SimpleZombieSpawnerModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SimpleZombieSpawnerModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SimpleZombieSpawnerModule",uVar2,SimpleZombieSpawnerModule::StaticNew);
  SimpleZombieSpawnerModule::StaticClassInit();
  return SimpleZombieSpawnerModule::sClass;
}


/* SimpleZombieSpawnerProperties::StaticNew() */

SimpleZombieSpawnerProperties * SimpleZombieSpawnerProperties::StaticNew(void)

{
  SimpleZombieSpawnerProperties *this;
  
  this = ::operator_new(0x58);
  SimpleZombieSpawnerProperties(this);
  return this;
}

