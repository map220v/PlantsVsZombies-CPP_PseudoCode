// Class: NetworkVivoGachaList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkVivoGachaList::StaticClassInit() */

void NetworkVivoGachaList::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkVivoGachaList");
    (*pcVar2)(plVar1,asStack_10,FUN_038fea1c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkVivoGachaList::StaticGetClass() */

long * NetworkVivoGachaList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkVivoGachaList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkVivoGachaList::GetClass() const */

long * NetworkVivoGachaList::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkVivoGachaList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkVivoGachaList::NetworkVivoGachaList() */

void __thiscall NetworkVivoGachaList::NetworkVivoGachaList(NetworkVivoGachaList *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066bf260;
  *(undefined ***)(this + 8) = &PTR__NetworkVivoGachaList_066bf2c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkVivoGachaList::StaticNew() */

NetworkVivoGachaList * NetworkVivoGachaList::StaticNew(void)

{
  NetworkVivoGachaList *this;
  
  this = ::operator_new(0x38);
  NetworkVivoGachaList(this);
  return this;
}


/* NetworkVivoGachaList::~NetworkVivoGachaList() */

void __thiscall NetworkVivoGachaList::~NetworkVivoGachaList(NetworkVivoGachaList *this)

{
  *(undefined ***)this = &PTR_GetClass_066bf260;
  *(undefined ***)(this + 8) = &PTR__NetworkVivoGachaList_066bf2c8;
  std::vector<GiftItem,std::allocator<GiftItem>>::~vector
            ((vector<GiftItem,std::allocator<GiftItem>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkVivoGachaList::~NetworkVivoGachaList() */

void __thiscall NetworkVivoGachaList::~NetworkVivoGachaList(NetworkVivoGachaList *this)

{
  ~NetworkVivoGachaList(this + -8);
  return;
}


/* NetworkVivoGachaList::~NetworkVivoGachaList() */

void __thiscall NetworkVivoGachaList::~NetworkVivoGachaList(NetworkVivoGachaList *this)

{
  ~NetworkVivoGachaList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkVivoGachaList::~NetworkVivoGachaList() */

void __thiscall NetworkVivoGachaList::~NetworkVivoGachaList(NetworkVivoGachaList *this)

{
  ~NetworkVivoGachaList(this + -8);
  return;
}

