// Class: NewPVPMainEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMainEntry::StaticClassInit() */

void NewPVPMainEntry::StaticClassInit(void)

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
    std::string::string(asStack_10,"Network_NewPVPSmallDuan");
    (*pcVar3)(plVar2,asStack_10,FUN_034dd6a0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPDuanState");
    (*pcVar3)(plVar2,asStack_10,FUN_034ae5f0,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPPlayerInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034cae18,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPZombieRareInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034ae49c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPZombieConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_034dd9e8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPZombiePacketLevelInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034ae348,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPZombiePieceInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034ae1f4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPZombiePlayerInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034ddc8c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPMainEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_034ddf6c,0x2b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMainEntry::StaticGetClass() */

long * NewPVPMainEntry::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPMainEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMainEntry::GetClass() const */

long * NewPVPMainEntry::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPMainEntry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPMainEntry::NewPVPMainEntry() */

void __thiscall NewPVPMainEntry::NewPVPMainEntry(NewPVPMainEntry *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)(this + 8) = &PTR__NewPVPMainEntry_06648068;
  *(undefined4 *)(this + 0x18) = 0x1e;
  *(undefined ***)this = &PTR_GetClass_06648000;
  *(undefined4 *)(this + 0x28) = 5;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x2c) = 3;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x50) = 200;
  Network_NewPVPPropertySheet::Network_NewPVPPropertySheet
            ((Network_NewPVPPropertySheet *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x1a0));
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1b4) = 0x19;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1b8) = 0xf;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  NewPVPPlayerInfo::NewPVPPlayerInfo((NewPVPPlayerInfo *)(this + 0x1d4));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x238));
  PlantAttribute::PlantAttribute((PlantAttribute *)(this + 0x268));
  return;
}


/* NewPVPMainEntry::StaticNew() */

NewPVPMainEntry * NewPVPMainEntry::StaticNew(void)

{
  NewPVPMainEntry *this;
  
  this = ::operator_new(0x2b8);
  NewPVPMainEntry(this);
  return this;
}


/* NewPVPMainEntry::~NewPVPMainEntry() */

void __thiscall NewPVPMainEntry::~NewPVPMainEntry(NewPVPMainEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_06648000;
  *(undefined ***)(this + 8) = &PTR__NewPVPMainEntry_06648068;
  NewPVPZombiePlayerInfo::~NewPVPZombiePlayerInfo((NewPVPZombiePlayerInfo *)(this + 0x268));
  NewPVPZombieConfig::~NewPVPZombieConfig((NewPVPZombieConfig *)(this + 0x238));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x188));
  std::vector<Network_NewPVPSmallDuan,std::allocator<Network_NewPVPSmallDuan>>::~vector
            ((vector<Network_NewPVPSmallDuan,std::allocator<Network_NewPVPSmallDuan>> *)
             (this + 0x170));
  Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet
            ((Network_NewPVPPropertySheet *)(this + 0x58));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPMainEntry::~NewPVPMainEntry() */

void __thiscall NewPVPMainEntry::~NewPVPMainEntry(NewPVPMainEntry *this)

{
  ~NewPVPMainEntry(this + -8);
  return;
}


/* NewPVPMainEntry::~NewPVPMainEntry() */

void __thiscall NewPVPMainEntry::~NewPVPMainEntry(NewPVPMainEntry *this)

{
  ~NewPVPMainEntry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPMainEntry::~NewPVPMainEntry() */

void __thiscall NewPVPMainEntry::~NewPVPMainEntry(NewPVPMainEntry *this)

{
  ~NewPVPMainEntry(this + -8);
  return;
}

