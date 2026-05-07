// Class: NewPVPCoinBank


/* NewPVPCoinBank::~NewPVPCoinBank() */

void __thiscall NewPVPCoinBank::~NewPVPCoinBank(NewPVPCoinBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0664c380;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPCoinBank_0664c528;
  FuelBank::~FuelBank((FuelBank *)this);
  return;
}


/* non-virtual thunk to NewPVPCoinBank::~NewPVPCoinBank() */

void __thiscall NewPVPCoinBank::~NewPVPCoinBank(NewPVPCoinBank *this)

{
  ~NewPVPCoinBank(this + -0x10);
  return;
}


/* NewPVPCoinBank::~NewPVPCoinBank() */

void __thiscall NewPVPCoinBank::~NewPVPCoinBank(NewPVPCoinBank *this)

{
  ~NewPVPCoinBank(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPCoinBank::~NewPVPCoinBank() */

void __thiscall NewPVPCoinBank::~NewPVPCoinBank(NewPVPCoinBank *this)

{
  ~NewPVPCoinBank(this + -0x10);
  return;
}


/* NewPVPCoinBank::NewPVPCoinBank() */

void __thiscall NewPVPCoinBank::NewPVPCoinBank(NewPVPCoinBank *this)

{
  FuelBank::FuelBank((FuelBank *)this);
  *(undefined ***)this = &PTR_GetClass_0664c380;
  *(undefined ***)(this + 0x10) = &PTR__NewPVPCoinBank_0664c528;
  return;
}


/* NewPVPCoinBank::StaticNew() */

NewPVPCoinBank * NewPVPCoinBank::StaticNew(void)

{
  NewPVPCoinBank *this;
  
  this = ::operator_new(0x1c8);
  NewPVPCoinBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPCoinBank::StaticClassInit() */

void NewPVPCoinBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPCoinBank");
    (*pcVar2)(plVar1,asStack_10,FUN_034bff94,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPCoinBank::StaticGetClass() */

long * NewPVPCoinBank::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPCoinBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPCoinBank::GetClass() const */

long * NewPVPCoinBank::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPCoinBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPCoinBank::updateButtonStates(int, int, bool) */

void __thiscall
NewPVPCoinBank::updateButtonStates(NewPVPCoinBank *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_034ad7d4(this + 0x160);
  }
  else {
    cVar1 = FUN_034ad7dc(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Press");
    }
    FUN_034ad7d4(this + 0x160,param_3);
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
    return;
  }
  return;
}

