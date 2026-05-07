// Class: Network_NewPVPPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Network_NewPVPPropertySheet::StaticClassInit() */

void Network_NewPVPPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"Network_NewPVPZombieLevelInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034adc48,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPZombiePacketInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034db5c4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPPlantPacketInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034adaf4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPZombieSkillInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034af230,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPZombieUpgradeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034af000,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPSunUpgradeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034aed64,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPZombieLevelUpValueData");
    (*pcVar3)(plVar2,asStack_10,FUN_034aeb34,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPZombieLevelUpData");
    (*pcVar3)(plVar2,asStack_10,FUN_034db7bc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_034dbcfc,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Network_NewPVPPropertySheet::StaticGetClass() */

long * Network_NewPVPPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Network_NewPVPPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Network_NewPVPPropertySheet::GetClass() const */

long * Network_NewPVPPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"Network_NewPVPPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Network_NewPVPPropertySheet::Network_NewPVPPropertySheet() */

void __thiscall
Network_NewPVPPropertySheet::Network_NewPVPPropertySheet(Network_NewPVPPropertySheet *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x18) = 5;
  *(undefined ***)(this + 8) = &PTR__Network_NewPVPPropertySheet_06647658;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 200;
  *(undefined4 *)(this + 0x24) = 10000;
  *(undefined ***)this = &PTR_GetClass_066475f0;
  *(undefined4 *)(this + 0x28) = 100;
  *(undefined4 *)(this + 0x2c) = 10;
  *(undefined4 *)(this + 0x14) = 0x40000000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  return;
}


/* Network_NewPVPPropertySheet::StaticNew() */

Network_NewPVPPropertySheet * Network_NewPVPPropertySheet::StaticNew(void)

{
  Network_NewPVPPropertySheet *this;
  
  this = ::operator_new(0x118);
  Network_NewPVPPropertySheet(this);
  return this;
}


/* Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet() */

void __thiscall
Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet(Network_NewPVPPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_066475f0;
  *(undefined ***)(this + 8) = &PTR__Network_NewPVPPropertySheet_06647658;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x100));
  std::vector<Network_NewPVPZombieLevelUpData,std::allocator<Network_NewPVPZombieLevelUpData>>::
  ~vector((vector<Network_NewPVPZombieLevelUpData,std::allocator<Network_NewPVPZombieLevelUpData>> *
          )(this + 0xe8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xd0));
  std::vector<Network_NewPVPSunUpgradeInfo,std::allocator<Network_NewPVPSunUpgradeInfo>>::~vector
            ((vector<Network_NewPVPSunUpgradeInfo,std::allocator<Network_NewPVPSunUpgradeInfo>> *)
             (this + 0xb8));
  std::vector<Network_NewPVPZombieUpgradeInfo,std::allocator<Network_NewPVPZombieUpgradeInfo>>::
  ~vector((vector<Network_NewPVPZombieUpgradeInfo,std::allocator<Network_NewPVPZombieUpgradeInfo>> *
          )(this + 0x90));
  std::vector<Network_NewPVPZombieSkillInfo,std::allocator<Network_NewPVPZombieSkillInfo>>::~vector
            ((vector<Network_NewPVPZombieSkillInfo,std::allocator<Network_NewPVPZombieSkillInfo>> *)
             (this + 0x78));
  std::vector<Network_NewPVPPlantPacketInfo,std::allocator<Network_NewPVPPlantPacketInfo>>::~vector
            ((vector<Network_NewPVPPlantPacketInfo,std::allocator<Network_NewPVPPlantPacketInfo>> *)
             (this + 0x60));
  std::vector<Network_NewPVPZombiePacketInfo,std::allocator<Network_NewPVPZombiePacketInfo>>::
  ~vector((vector<Network_NewPVPZombiePacketInfo,std::allocator<Network_NewPVPZombiePacketInfo>> *)
          (this + 0x48));
  std::vector<S2C_ZombieLevelStat,std::allocator<S2C_ZombieLevelStat>>::~vector
            ((vector<S2C_ZombieLevelStat,std::allocator<S2C_ZombieLevelStat>> *)(this + 0x30));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet() */

void __thiscall
Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet(Network_NewPVPPropertySheet *this)

{
  ~Network_NewPVPPropertySheet(this + -8);
  return;
}


/* Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet() */

void __thiscall
Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet(Network_NewPVPPropertySheet *this)

{
  ~Network_NewPVPPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet() */

void __thiscall
Network_NewPVPPropertySheet::~Network_NewPVPPropertySheet(Network_NewPVPPropertySheet *this)

{
  ~Network_NewPVPPropertySheet(this + -8);
  return;
}

