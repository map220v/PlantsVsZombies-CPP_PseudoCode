// Class: NetworkNewerPresent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkNewerPresent::StaticClassInit() */

void NetworkNewerPresent::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkPresentContent");
    (*pcVar3)(plVar2,asStack_10,FUN_03dbe5d0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkNewerPresent");
    (*pcVar3)(plVar2,asStack_10,FUN_03dc07c0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkNewerPresent::StaticGetClass() */

long * NetworkNewerPresent::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkNewerPresent::GetClass() const */

long * NetworkNewerPresent::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NetworkNewerPresent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkNewerPresent::NetworkNewerPresent() */

void __thiscall NetworkNewerPresent::NetworkNewerPresent(NetworkNewerPresent *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06779a30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* NetworkNewerPresent::StaticNew() */

NetworkNewerPresent * NetworkNewerPresent::StaticNew(void)

{
  NetworkNewerPresent *this;
  
  this = ::operator_new(0x50);
  NetworkNewerPresent(this);
  return this;
}


/* NetworkNewerPresent::~NetworkNewerPresent() */

void __thiscall NetworkNewerPresent::~NetworkNewerPresent(NetworkNewerPresent *this)

{
  *(undefined ***)this = &PTR_GetClass_06779a30;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::
  vector<std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>,std::allocator<std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>>>
  ::~vector((vector<std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>,std::allocator<std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>>>
             *)(this + 8));
  nop();
  return;
}


/* NetworkNewerPresent::~NetworkNewerPresent() */

void __thiscall NetworkNewerPresent::~NetworkNewerPresent(NetworkNewerPresent *this)

{
  ~NetworkNewerPresent(this);
  AK::FreeHook(this);
  return;
}

