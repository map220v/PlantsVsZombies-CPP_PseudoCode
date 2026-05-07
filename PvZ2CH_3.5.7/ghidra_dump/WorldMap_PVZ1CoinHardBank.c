// Class: WorldMap_PVZ1CoinHardBank


/* WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank() */

void __thiscall
WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank(WorldMap_PVZ1CoinHardBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06669c20;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PVZ1CoinHardBank_06669dc8;
  WorldMap_PVZ1CoinBank::~WorldMap_PVZ1CoinBank((WorldMap_PVZ1CoinBank *)this);
  return;
}


/* non-virtual thunk to WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank() */

void __thiscall
WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank(WorldMap_PVZ1CoinHardBank *this)

{
  ~WorldMap_PVZ1CoinHardBank(this + -0x10);
  return;
}


/* WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank() */

void __thiscall
WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank(WorldMap_PVZ1CoinHardBank *this)

{
  ~WorldMap_PVZ1CoinHardBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank() */

void __thiscall
WorldMap_PVZ1CoinHardBank::~WorldMap_PVZ1CoinHardBank(WorldMap_PVZ1CoinHardBank *this)

{
  ~WorldMap_PVZ1CoinHardBank(this + -0x10);
  return;
}


/* WorldMap_PVZ1CoinHardBank::WorldMap_PVZ1CoinHardBank() */

void __thiscall
WorldMap_PVZ1CoinHardBank::WorldMap_PVZ1CoinHardBank(WorldMap_PVZ1CoinHardBank *this)

{
  WorldMap_PVZ1CoinBank::WorldMap_PVZ1CoinBank((WorldMap_PVZ1CoinBank *)this);
  *(undefined ***)this = &PTR_GetClass_06669c20;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PVZ1CoinHardBank_06669dc8;
  return;
}


/* WorldMap_PVZ1CoinHardBank::StaticNew() */

WorldMap_PVZ1CoinHardBank * WorldMap_PVZ1CoinHardBank::StaticNew(void)

{
  WorldMap_PVZ1CoinHardBank *this;
  
  this = ::operator_new(0x1c8);
  WorldMap_PVZ1CoinHardBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PVZ1CoinHardBank::StaticClassInit() */

void WorldMap_PVZ1CoinHardBank::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WorldMap_PVZ1CoinHardBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0361cad0,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PVZ1CoinHardBank::StaticGetClass() */

long * WorldMap_PVZ1CoinHardBank::StaticGetClass(void)

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
  uVar2 = WorldMap_PVZ1CoinBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PVZ1CoinHardBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PVZ1CoinHardBank::GetClass() const */

long * WorldMap_PVZ1CoinHardBank::GetClass(void)

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
  uVar2 = WorldMap_PVZ1CoinBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PVZ1CoinHardBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

