// Class: C2S_PVP_SellZombies


/* C2S_PVP_SellZombies::C2S_PVP_SellZombies() */

void __thiscall C2S_PVP_SellZombies::C2S_PVP_SellZombies(C2S_PVP_SellZombies *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660b620;
  *(undefined ***)(this + 8) = &PTR__C2S_PVP_SellZombies_0660b688;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* C2S_PVP_SellZombies::~C2S_PVP_SellZombies() */

void __thiscall C2S_PVP_SellZombies::~C2S_PVP_SellZombies(C2S_PVP_SellZombies *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b620;
  *(undefined ***)(this + 8) = &PTR__C2S_PVP_SellZombies_0660b688;
  std::vector<C2S_PVP_ZombieNum,std::allocator<C2S_PVP_ZombieNum>>::~vector
            ((vector<C2S_PVP_ZombieNum,std::allocator<C2S_PVP_ZombieNum>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to C2S_PVP_SellZombies::~C2S_PVP_SellZombies() */

void __thiscall C2S_PVP_SellZombies::~C2S_PVP_SellZombies(C2S_PVP_SellZombies *this)

{
  ~C2S_PVP_SellZombies(this + -8);
  return;
}


/* C2S_PVP_SellZombies::~C2S_PVP_SellZombies() */

void __thiscall C2S_PVP_SellZombies::~C2S_PVP_SellZombies(C2S_PVP_SellZombies *this)

{
  ~C2S_PVP_SellZombies(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to C2S_PVP_SellZombies::~C2S_PVP_SellZombies() */

void __thiscall C2S_PVP_SellZombies::~C2S_PVP_SellZombies(C2S_PVP_SellZombies *this)

{
  ~C2S_PVP_SellZombies(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* C2S_PVP_SellZombies::StaticClassInit() */

void C2S_PVP_SellZombies::StaticClassInit(void)

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
    std::string::string(asStack_10,"C2S_PVP_ZombieNum");
    (*pcVar3)(plVar2,asStack_10,FUN_03200150,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"C2S_PVP_SellZombies");
    (*pcVar3)(plVar2,asStack_10,FUN_03232df0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* C2S_PVP_SellZombies::StaticGetClass() */

long * C2S_PVP_SellZombies::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"C2S_PVP_SellZombies",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* C2S_PVP_SellZombies::GetClass() const */

long * C2S_PVP_SellZombies::GetClass(void)

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
  (*pcVar3)(plVar1,"C2S_PVP_SellZombies",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* C2S_PVP_SellZombies::StaticNew() */

C2S_PVP_SellZombies * C2S_PVP_SellZombies::StaticNew(void)

{
  C2S_PVP_SellZombies *this;
  
  this = ::operator_new(0x30);
  C2S_PVP_SellZombies(this);
  return this;
}

