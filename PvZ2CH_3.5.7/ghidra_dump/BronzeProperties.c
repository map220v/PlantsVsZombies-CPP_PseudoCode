// Class: BronzeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeProperties::StaticClassInit() */

void BronzeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ItemDescription");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd49ac,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ModuleData");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd5850,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BronzeProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_03dd5a48,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BronzeProperties::StaticGetClass() */

long * BronzeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BronzeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BronzeProperties::GetClass() const */

long * BronzeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BronzeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BronzeProperties::GetModuleClass() const */

long * BronzeProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BronzeModule::sClass != (long *)0x0) {
    return BronzeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BronzeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BronzeModule",uVar2,BronzeModule::StaticNew);
  BronzeModule::StaticClassInit();
  return BronzeModule::sClass;
}


/* BronzeProperties::BronzeProperties() */

void __thiscall BronzeProperties::BronzeProperties(BronzeProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0677db40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<BronzeProperties::ModuleData,std::allocator<BronzeProperties::ModuleData>>::clear
            ((vector<BronzeProperties::ModuleData,std::allocator<BronzeProperties::ModuleData>> *)
             (this + 0x48));
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* BronzeProperties::StaticNew() */

BronzeProperties * BronzeProperties::StaticNew(void)

{
  BronzeProperties *this;
  
  this = ::operator_new(0x60);
  BronzeProperties(this);
  return this;
}


/* BronzeProperties::~BronzeProperties() */

void __thiscall BronzeProperties::~BronzeProperties(BronzeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0677db40;
  std::vector<BronzeProperties::ModuleData,std::allocator<BronzeProperties::ModuleData>>::~vector
            ((vector<BronzeProperties::ModuleData,std::allocator<BronzeProperties::ModuleData>> *)
             (this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* BronzeProperties::~BronzeProperties() */

void __thiscall BronzeProperties::~BronzeProperties(BronzeProperties *this)

{
  ~BronzeProperties(this);
  AK::FreeHook(this);
  return;
}

