// Class: WorldMap_PVZ1EnergyBank


/* WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank() */

void __thiscall WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank(WorldMap_PVZ1EnergyBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06669a40;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PVZ1EnergyBank_06669be8;
  FuelBank::~FuelBank((FuelBank *)this);
  return;
}


/* non-virtual thunk to WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank() */

void __thiscall WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank(WorldMap_PVZ1EnergyBank *this)

{
  ~WorldMap_PVZ1EnergyBank(this + -0x10);
  return;
}


/* WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank() */

void __thiscall WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank(WorldMap_PVZ1EnergyBank *this)

{
  ~WorldMap_PVZ1EnergyBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank() */

void __thiscall WorldMap_PVZ1EnergyBank::~WorldMap_PVZ1EnergyBank(WorldMap_PVZ1EnergyBank *this)

{
  ~WorldMap_PVZ1EnergyBank(this + -0x10);
  return;
}


/* WorldMap_PVZ1EnergyBank::WorldMap_PVZ1EnergyBank() */

void __thiscall WorldMap_PVZ1EnergyBank::WorldMap_PVZ1EnergyBank(WorldMap_PVZ1EnergyBank *this)

{
  FuelBank::FuelBank((FuelBank *)this);
  *(undefined ***)this = &PTR_GetClass_06669a40;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PVZ1EnergyBank_06669be8;
  return;
}


/* WorldMap_PVZ1EnergyBank::StaticNew() */

WorldMap_PVZ1EnergyBank * WorldMap_PVZ1EnergyBank::StaticNew(void)

{
  WorldMap_PVZ1EnergyBank *this;
  
  this = ::operator_new(0x1c8);
  WorldMap_PVZ1EnergyBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PVZ1EnergyBank::StaticClassInit() */

void WorldMap_PVZ1EnergyBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PVZ1EnergyBank");
    (*pcVar2)(plVar1,asStack_10,FUN_0361c52c,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PVZ1EnergyBank::StaticGetClass() */

long * WorldMap_PVZ1EnergyBank::StaticGetClass(void)

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
  uVar2 = FuelBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PVZ1EnergyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PVZ1EnergyBank::GetClass() const */

long * WorldMap_PVZ1EnergyBank::GetClass(void)

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
  uVar2 = FuelBank::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_PVZ1EnergyBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PVZ1EnergyBank::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_PVZ1EnergyBank::updateButtonStates
          (WorldMap_PVZ1EnergyBank *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_0361c388(this + 0x160);
  }
  else {
    cVar1 = FUN_0361c390(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Press");
    }
    FUN_0361c388(this + 0x160,param_3);
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
    LawnApp::ShowCoinStore(gLawnApp,0xb);
    return;
  }
  return;
}

