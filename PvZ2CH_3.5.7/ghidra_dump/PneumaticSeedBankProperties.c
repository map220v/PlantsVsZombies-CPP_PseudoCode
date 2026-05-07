// Class: PneumaticSeedBankProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticSeedBankProperties::StaticClassInit() */

void PneumaticSeedBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PneumaticPlantEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_042f1464,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PneumaticDelayCondition");
    (*pcVar3)(plVar2,asStack_10,FUN_042f0e90,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PneumaticSeedBankProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_042f452c,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PneumaticSeedBankProperties::StaticGetClass() */

long * PneumaticSeedBankProperties::StaticGetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PneumaticSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PneumaticSeedBankProperties::GetClass() const */

long * PneumaticSeedBankProperties::GetClass(void)

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
  uVar2 = SeedBankProperties::StaticGetClass();
  (*pcVar3)(plVar1,"PneumaticSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PneumaticSeedBankProperties::PneumaticSeedBankProperties() */

void __thiscall
PneumaticSeedBankProperties::PneumaticSeedBankProperties(PneumaticSeedBankProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06831580;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  this[0xd0] = (PneumaticSeedBankProperties)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* PneumaticSeedBankProperties::StaticNew() */

PneumaticSeedBankProperties * PneumaticSeedBankProperties::StaticNew(void)

{
  PneumaticSeedBankProperties *this;
  
  this = ::operator_new(0x108);
  PneumaticSeedBankProperties(this);
  return this;
}


/* PneumaticSeedBankProperties::~PneumaticSeedBankProperties() */

void __thiscall
PneumaticSeedBankProperties::~PneumaticSeedBankProperties(PneumaticSeedBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06831580;
  std::vector<PneumaticDelayCondition,std::allocator<PneumaticDelayCondition>>::~vector
            ((vector<PneumaticDelayCondition,std::allocator<PneumaticDelayCondition>> *)
             (this + 0xf0));
  std::vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>>::~vector
            ((vector<PneumaticPlantEntry,std::allocator<PneumaticPlantEntry>> *)(this + 0xd8));
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* PneumaticSeedBankProperties::~PneumaticSeedBankProperties() */

void __thiscall
PneumaticSeedBankProperties::~PneumaticSeedBankProperties(PneumaticSeedBankProperties *this)

{
  ~PneumaticSeedBankProperties(this);
  AK::FreeHook(this);
  return;
}

