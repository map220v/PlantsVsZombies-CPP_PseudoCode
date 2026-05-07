// Class: PVPSeedBankProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPSeedBankProperties::StaticClassInit() */

void PVPSeedBankProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPSeedSkill");
    (*pcVar3)(plVar2,asStack_10,FUN_04ab1d00,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVPSeedPlant");
    (*pcVar3)(plVar2,asStack_10,FUN_04ab1b3c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVPSeedZombie");
    (*pcVar3)(plVar2,asStack_10,FUN_04ab19f0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVPSeedBankProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04ab36e4,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPSeedBankProperties::StaticGetClass() */

long * PVPSeedBankProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVPSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSeedBankProperties::GetClass() const */

long * PVPSeedBankProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PVPSeedBankProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPSeedBankProperties::PVPSeedBankProperties() */

void __thiscall PVPSeedBankProperties::PVPSeedBankProperties(PVPSeedBankProperties *this)

{
  SeedBankProperties::SeedBankProperties((SeedBankProperties *)this);
  *(undefined4 *)(this + 0xd0) = 0x32;
  *(undefined ***)this = &PTR_GetClass_06948280;
  *(undefined4 *)(this + 0xd4) = 0x1e;
  *(undefined4 *)(this + 0xd8) = 5;
  *(undefined4 *)(this + 0xdc) = 0x14;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  this[0x45] = (PVPSeedBankProperties)0x1;
  return;
}


/* PVPSeedBankProperties::StaticNew() */

PVPSeedBankProperties * PVPSeedBankProperties::StaticNew(void)

{
  PVPSeedBankProperties *this;
  
  this = ::operator_new(0x128);
  PVPSeedBankProperties(this);
  return this;
}


/* PVPSeedBankProperties::~PVPSeedBankProperties() */

void __thiscall PVPSeedBankProperties::~PVPSeedBankProperties(PVPSeedBankProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06948280;
  std::vector<PVPSeedZombie,std::allocator<PVPSeedZombie>>::~vector
            ((vector<PVPSeedZombie,std::allocator<PVPSeedZombie>> *)(this + 0x110));
  std::vector<PVPSeedPlant,std::allocator<PVPSeedPlant>>::~vector
            ((vector<PVPSeedPlant,std::allocator<PVPSeedPlant>> *)(this + 0xf8));
  std::vector<PVPSeedSkill,std::allocator<PVPSeedSkill>>::~vector
            ((vector<PVPSeedSkill,std::allocator<PVPSeedSkill>> *)(this + 0xe0));
  SeedBankProperties::~SeedBankProperties((SeedBankProperties *)this);
  return;
}


/* PVPSeedBankProperties::~PVPSeedBankProperties() */

void __thiscall PVPSeedBankProperties::~PVPSeedBankProperties(PVPSeedBankProperties *this)

{
  ~PVPSeedBankProperties(this);
  AK::FreeHook(this);
  return;
}


/* PVPSeedBankProperties::GetModuleClass() const */

long * PVPSeedBankProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PVPSeedBankModule::sClass != (long *)0x0) {
    return PVPSeedBankModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PVPSeedBankModule::sClass = plVar1;
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"PVPSeedBankModule",uVar2,PVPSeedBankModule::StaticNew);
  PVPSeedBankModule::StaticClassInit();
  return PVPSeedBankModule::sClass;
}

