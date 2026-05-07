// Class: ConveyorSeedBankProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConveyorSeedBankProperties::StaticClassInit() */

void ConveyorSeedBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConveyorPlantEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_04415fb0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConveyorSpeedCondition");
    (*pcVar3)(plVar2,asStack_10,FUN_04415d60,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConveyorDropDelayCondition");
    (*pcVar3)(plVar2,asStack_10,FUN_04415c14,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConveyorSeedBankProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04419de0,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConveyorSeedBankProperties::ConveyorSeedBankProperties() */

void __thiscall
ConveyorSeedBankProperties::ConveyorSeedBankProperties(ConveyorSeedBankProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06848350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  this[0xd0] = (ConveyorSeedBankProperties)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* ConveyorSeedBankProperties::StaticNew() */

ConveyorSeedBankProperties * ConveyorSeedBankProperties::StaticNew(void)

{
  ConveyorSeedBankProperties *this;
  
  this = ::operator_new(0x120);
  ConveyorSeedBankProperties(this);
  return this;
}


/* ConveyorSeedBankProperties::~ConveyorSeedBankProperties() */

void __thiscall
ConveyorSeedBankProperties::~ConveyorSeedBankProperties(ConveyorSeedBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06848350;
  std::vector<ConveyorDropDelayCondition,std::allocator<ConveyorDropDelayCondition>>::~vector
            ((vector<ConveyorDropDelayCondition,std::allocator<ConveyorDropDelayCondition>> *)
             (this + 0x108));
  std::vector<ConveyorSpeedCondition,std::allocator<ConveyorSpeedCondition>>::~vector
            ((vector<ConveyorSpeedCondition,std::allocator<ConveyorSpeedCondition>> *)(this + 0xf0))
  ;
  std::vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>>::~vector
            ((vector<ConveyorPlantEntry,std::allocator<ConveyorPlantEntry>> *)(this + 0xd8));
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* ConveyorSeedBankProperties::~ConveyorSeedBankProperties() */

void __thiscall
ConveyorSeedBankProperties::~ConveyorSeedBankProperties(ConveyorSeedBankProperties *this)

{
  ~ConveyorSeedBankProperties(this);
  AK::FreeHook(this);
  return;
}


/* ConveyorSeedBankProperties::StaticGetClass() */

long * ConveyorSeedBankProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ConveyorSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConveyorSeedBankProperties::GetClass() const */

long * ConveyorSeedBankProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ConveyorSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

