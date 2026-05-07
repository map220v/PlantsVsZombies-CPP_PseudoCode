// Class: BeghouledZombieSpawnerProperties


/* BeghouledZombieSpawnerProperties::GetModuleClass() const */

long * BeghouledZombieSpawnerProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BeghouledZombieSpawnerModule::sClass != (long *)0x0) {
    return BeghouledZombieSpawnerModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BeghouledZombieSpawnerModule::sClass = plVar1;
  uVar2 = SimpleZombieSpawnerModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledZombieSpawnerModule",uVar2,BeghouledZombieSpawnerModule::StaticNew);
  BeghouledZombieSpawnerModule::StaticClassInit();
  return BeghouledZombieSpawnerModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledZombieSpawnerProperties::StaticClassInit() */

void BeghouledZombieSpawnerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MatchStageMap");
    (*pcVar3)(plVar2,asStack_10,FUN_03bad378,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BeghouledZombieSpawnerProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03badc18,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledZombieSpawnerProperties::StaticGetClass() */

long * BeghouledZombieSpawnerProperties::StaticGetClass(void)

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
  uVar2 = SimpleZombieSpawnerProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledZombieSpawnerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledZombieSpawnerProperties::GetClass() const */

long * BeghouledZombieSpawnerProperties::GetClass(void)

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
  uVar2 = SimpleZombieSpawnerProperties::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledZombieSpawnerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledZombieSpawnerProperties::BeghouledZombieSpawnerProperties() */

void __thiscall
BeghouledZombieSpawnerProperties::BeghouledZombieSpawnerProperties
          (BeghouledZombieSpawnerProperties *this)

{
  SimpleZombieSpawnerProperties::SimpleZombieSpawnerProperties
            ((SimpleZombieSpawnerProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06737a10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* BeghouledZombieSpawnerProperties::StaticNew() */

BeghouledZombieSpawnerProperties * BeghouledZombieSpawnerProperties::StaticNew(void)

{
  BeghouledZombieSpawnerProperties *this;
  
  this = ::operator_new(0x70);
  BeghouledZombieSpawnerProperties(this);
  return this;
}


/* BeghouledZombieSpawnerProperties::~BeghouledZombieSpawnerProperties() */

void __thiscall
BeghouledZombieSpawnerProperties::~BeghouledZombieSpawnerProperties
          (BeghouledZombieSpawnerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06737a10;
  std::vector<MatchStageMap,std::allocator<MatchStageMap>>::~vector
            ((vector<MatchStageMap,std::allocator<MatchStageMap>> *)(this + 0x58));
  SimpleZombieSpawnerProperties::~SimpleZombieSpawnerProperties
            ((SimpleZombieSpawnerProperties *)this);
  return;
}


/* BeghouledZombieSpawnerProperties::~BeghouledZombieSpawnerProperties() */

void __thiscall
BeghouledZombieSpawnerProperties::~BeghouledZombieSpawnerProperties
          (BeghouledZombieSpawnerProperties *this)

{
  ~BeghouledZombieSpawnerProperties(this);
  AK::FreeHook(this);
  return;
}

