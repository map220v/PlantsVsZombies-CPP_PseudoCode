// Class: BesiegeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeProperties::StaticClassInit() */

void BesiegeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BesiegeGrid");
    (*pcVar3)(plVar2,asStack_10,FUN_0478ab04,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TowerDefendPlantUpgradeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0478ad14,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TowerDefendPlantUpgradeTree");
    (*pcVar3)(plVar2,asStack_10,FUN_0478e45c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BesiegeProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0478e53c,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeProperties::StaticGetClass() */

long * BesiegeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BesiegeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BesiegeProperties::GetClass() const */

long * BesiegeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BesiegeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BesiegeProperties::GetModuleClass() const */

long * BesiegeProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BesiegeModule::sClass != (long *)0x0) {
    return BesiegeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BesiegeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BesiegeModule",uVar2,BesiegeModule::StaticNew);
  BesiegeModule::StaticClassInit();
  return BesiegeModule::sClass;
}


/* BesiegeProperties::BesiegeProperties() */

void __thiscall BesiegeProperties::BesiegeProperties(BesiegeProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068d95f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  ObstacleNonSpawnData::ObstacleNonSpawnData((ObstacleNonSpawnData *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x40) = 100;
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}


/* BesiegeProperties::StaticNew() */

BesiegeProperties * BesiegeProperties::StaticNew(void)

{
  BesiegeProperties *this;
  
  this = ::operator_new(0xa0);
  BesiegeProperties(this);
  return this;
}


/* BesiegeProperties::~BesiegeProperties() */

void __thiscall BesiegeProperties::~BesiegeProperties(BesiegeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068d95f0;
  std::vector<BesiegeGrid,std::allocator<BesiegeGrid>>::~vector
            ((vector<BesiegeGrid,std::allocator<BesiegeGrid>> *)(this + 0x88));
  std::vector<BesiegeGrid,std::allocator<BesiegeGrid>>::~vector
            ((vector<BesiegeGrid,std::allocator<BesiegeGrid>> *)(this + 0x68));
  std::vector<TowerDefendPlantUpgradeTree,std::allocator<TowerDefendPlantUpgradeTree>>::~vector
            ((vector<TowerDefendPlantUpgradeTree,std::allocator<TowerDefendPlantUpgradeTree>> *)
             (this + 0x50));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* BesiegeProperties::~BesiegeProperties() */

void __thiscall BesiegeProperties::~BesiegeProperties(BesiegeProperties *this)

{
  ~BesiegeProperties(this);
  AK::FreeHook(this);
  return;
}

