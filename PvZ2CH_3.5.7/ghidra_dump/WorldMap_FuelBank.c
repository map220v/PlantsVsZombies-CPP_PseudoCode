// Class: WorldMap_FuelBank


/* WorldMap_FuelBank::~WorldMap_FuelBank() */

void __thiscall WorldMap_FuelBank::~WorldMap_FuelBank(WorldMap_FuelBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0667bed0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_FuelBank_0667c078;
  FuelBank::~FuelBank((FuelBank *)this);
  return;
}


/* non-virtual thunk to WorldMap_FuelBank::~WorldMap_FuelBank() */

void __thiscall WorldMap_FuelBank::~WorldMap_FuelBank(WorldMap_FuelBank *this)

{
  ~WorldMap_FuelBank(this + -0x10);
  return;
}


/* WorldMap_FuelBank::~WorldMap_FuelBank() */

void __thiscall WorldMap_FuelBank::~WorldMap_FuelBank(WorldMap_FuelBank *this)

{
  ~WorldMap_FuelBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_FuelBank::~WorldMap_FuelBank() */

void __thiscall WorldMap_FuelBank::~WorldMap_FuelBank(WorldMap_FuelBank *this)

{
  ~WorldMap_FuelBank(this + -0x10);
  return;
}


/* WorldMap_FuelBank::WorldMap_FuelBank() */

void __thiscall WorldMap_FuelBank::WorldMap_FuelBank(WorldMap_FuelBank *this)

{
  FuelBank::FuelBank((FuelBank *)this);
  *(undefined ***)this = &PTR_GetClass_0667bed0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_FuelBank_0667c078;
  return;
}


/* WorldMap_FuelBank::StaticNew() */

WorldMap_FuelBank * WorldMap_FuelBank::StaticNew(void)

{
  WorldMap_FuelBank *this;
  
  this = ::operator_new(0x1c8);
  WorldMap_FuelBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_FuelBank::StaticClassInit() */

void WorldMap_FuelBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_FuelBank");
    (*pcVar2)(plVar1,asStack_10,FUN_03688e78,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_FuelBank::StaticGetClass() */

long * WorldMap_FuelBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_FuelBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_FuelBank::GetClass() const */

long * WorldMap_FuelBank::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_FuelBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_FuelBank::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_FuelBank::updateButtonStates(WorldMap_FuelBank *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_03688cd4(this + 0x160);
  }
  else {
    cVar1 = FUN_03688cdc(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Press");
    }
    FUN_03688cd4(this + 0x160,param_3);
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
    LawnApp::ShowCoinStore(gLawnApp,8);
    return;
  }
  return;
}

