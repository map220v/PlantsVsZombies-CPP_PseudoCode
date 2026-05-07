// Class: TowerDefendProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendProperties::StaticClassInit() */

void TowerDefendProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TowerDefendPlantUpgradeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03ddd810,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TowerDefendPlantUpgradeTree");
    (*pcVar3)(plVar2,asStack_10,FUN_03de0240,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TowerDefendRoad");
    (*pcVar3)(plVar2,asStack_10,FUN_03ddd64c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TowerDefendProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03de05d4,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendProperties::StaticGetClass() */

long * TowerDefendProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TowerDefendProperties::GetClass() const */

long * TowerDefendProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TowerDefendProperties::GetModuleClass() const */

long * TowerDefendProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TowerDefendModule::sClass != (long *)0x0) {
    return TowerDefendModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TowerDefendModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"TowerDefendModule",uVar2,TowerDefendModule::StaticNew);
  TowerDefendModule::StaticClassInit();
  return TowerDefendModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendProperties::TowerDefendProperties() */

void __thiscall TowerDefendProperties::TowerDefendProperties(TowerDefendProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0677e340;
  Set8BytesTo0((string *)(this + 0x48));
  Set8BytesTo0((string *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::string::append((string *)(this + 0x50),"house_3",in_x2);
  std::string::append((string *)(this + 0x48),"POPANIM_TOWERDEFEND_HOUSE_PIG_1",in_x2);
  *(undefined4 *)(this + 0x40) = _FUN_03ddfe18;
  return;
}


/* TowerDefendProperties::StaticNew() */

TowerDefendProperties * TowerDefendProperties::StaticNew(void)

{
  TowerDefendProperties *this;
  
  this = ::operator_new(0xa0);
  TowerDefendProperties(this);
  return this;
}


/* TowerDefendProperties::~TowerDefendProperties() */

void __thiscall TowerDefendProperties::~TowerDefendProperties(TowerDefendProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0677e340;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x88));
  std::vector<TowerDefendPlantUpgradeTree,std::allocator<TowerDefendPlantUpgradeTree>>::~vector
            ((vector<TowerDefendPlantUpgradeTree,std::allocator<TowerDefendPlantUpgradeTree>> *)
             (this + 0x70));
  std::vector<TowerDefendRoad,std::allocator<TowerDefendRoad>>::~vector
            ((vector<TowerDefendRoad,std::allocator<TowerDefendRoad>> *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* TowerDefendProperties::~TowerDefendProperties() */

void __thiscall TowerDefendProperties::~TowerDefendProperties(TowerDefendProperties *this)

{
  ~TowerDefendProperties(this);
  AK::FreeHook(this);
  return;
}

