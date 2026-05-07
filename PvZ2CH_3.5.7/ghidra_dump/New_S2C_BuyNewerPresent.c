// Class: New_S2C_BuyNewerPresent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_BuyNewerPresent::StaticClassInit() */

void New_S2C_BuyNewerPresent::StaticClassInit(void)

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
    std::string::string(asStack_10,"New_S2C_BuyNewerPresent");
    (*pcVar2)(plVar1,asStack_10,FUN_03dc09b0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_BuyNewerPresent::StaticGetClass() */

long * New_S2C_BuyNewerPresent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_BuyNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_BuyNewerPresent::GetClass() const */

long * New_S2C_BuyNewerPresent::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_BuyNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_BuyNewerPresent::New_S2C_BuyNewerPresent() */

void __thiscall New_S2C_BuyNewerPresent::New_S2C_BuyNewerPresent(New_S2C_BuyNewerPresent *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06779a90;
  *(undefined ***)(this + 8) = &PTR__New_S2C_BuyNewerPresent_06779af8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* New_S2C_BuyNewerPresent::StaticNew() */

New_S2C_BuyNewerPresent * New_S2C_BuyNewerPresent::StaticNew(void)

{
  New_S2C_BuyNewerPresent *this;
  
  this = ::operator_new(0x30);
  New_S2C_BuyNewerPresent(this);
  return this;
}


/* New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent() */

void __thiscall New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent(New_S2C_BuyNewerPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_06779a90;
  *(undefined ***)(this + 8) = &PTR__New_S2C_BuyNewerPresent_06779af8;
  std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>::~vector
            ((vector<NetworkPresentContent,std::allocator<NetworkPresentContent>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent() */

void __thiscall New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent(New_S2C_BuyNewerPresent *this)

{
  ~New_S2C_BuyNewerPresent(this + -8);
  return;
}


/* New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent() */

void __thiscall New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent(New_S2C_BuyNewerPresent *this)

{
  ~New_S2C_BuyNewerPresent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent() */

void __thiscall New_S2C_BuyNewerPresent::~New_S2C_BuyNewerPresent(New_S2C_BuyNewerPresent *this)

{
  ~New_S2C_BuyNewerPresent(this + -8);
  return;
}

