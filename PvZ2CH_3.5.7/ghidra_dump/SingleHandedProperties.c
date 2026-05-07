// Class: SingleHandedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedProperties::StaticClassInit() */

void SingleHandedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SingleWeaponData");
    (*pcVar3)(plVar2,asStack_10,FUN_04361e68,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpecialWaveData");
    (*pcVar3)(plVar2,asStack_10,FUN_04361b28,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SingleHandedProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04363798,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SingleHandedProperties::StaticGetClass() */

long * SingleHandedProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SingleHandedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SingleHandedProperties::GetClass() const */

long * SingleHandedProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SingleHandedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SingleHandedProperties::GetModuleClass() const */

long * SingleHandedProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SingleHandedModule::sClass != (long *)0x0) {
    return SingleHandedModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SingleHandedModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SingleHandedModule",uVar2,SingleHandedModule::StaticNew);
  SingleHandedModule::StaticClassInit();
  return SingleHandedModule::sClass;
}


/* SingleHandedProperties::SingleHandedProperties() */

void __thiscall SingleHandedProperties::SingleHandedProperties(SingleHandedProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06835280;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  Set8BytesTo0((string *)(this + 0x70));
  std::string::append((string *)(this + 0x70),"peashooter",in_x2);
  *(undefined4 *)(this + 0x7c) = 3;
  *(undefined4 *)(this + 0x78) = 0x3f000000;
  *(undefined4 *)(this + 0x80) = 0x41200000;
  *(undefined4 *)(this + 0x84) = 0x40400000;
  *(undefined4 *)(this + 0x88) = 0x43fa0000;
  *(undefined4 *)(this + 0x8c) = 0x40000000;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0x3f800000;
  return;
}


/* SingleHandedProperties::StaticNew() */

SingleHandedProperties * SingleHandedProperties::StaticNew(void)

{
  SingleHandedProperties *this;
  
  this = ::operator_new(0x98);
  SingleHandedProperties(this);
  return this;
}


/* SingleHandedProperties::~SingleHandedProperties() */

void __thiscall SingleHandedProperties::~SingleHandedProperties(SingleHandedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06835280;
  std::string::~string((string *)(this + 0x70));
  std::vector<SingleWeaponData,std::allocator<SingleWeaponData>>::~vector
            ((vector<SingleWeaponData,std::allocator<SingleWeaponData>> *)(this + 0x58));
  std::vector<SpecialWaveData,std::allocator<SpecialWaveData>>::~vector
            ((vector<SpecialWaveData,std::allocator<SpecialWaveData>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SingleHandedProperties::~SingleHandedProperties() */

void __thiscall SingleHandedProperties::~SingleHandedProperties(SingleHandedProperties *this)

{
  ~SingleHandedProperties(this);
  AK::FreeHook(this);
  return;
}

