// Class: NetworkGetMysteryStore


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkGetMysteryStore::StaticClassInit() */

void NetworkGetMysteryStore::StaticClassInit(void)

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
    std::string::string(asStack_10,"StoreData");
    (*pcVar3)(plVar2,asStack_10,FUN_03d9a310,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkGetMysteryStore");
    (*pcVar3)(plVar2,asStack_10,FUN_03d9cfc8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkGetMysteryStore::StaticGetClass() */

long * NetworkGetMysteryStore::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkGetMysteryStore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkGetMysteryStore::GetClass() const */

long * NetworkGetMysteryStore::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkGetMysteryStore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkGetMysteryStore::NetworkGetMysteryStore() */

void __thiscall NetworkGetMysteryStore::NetworkGetMysteryStore(NetworkGetMysteryStore *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06773c30;
  *(undefined ***)(this + 8) = &PTR__NetworkGetMysteryStore_06773c98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* NetworkGetMysteryStore::StaticNew() */

NetworkGetMysteryStore * NetworkGetMysteryStore::StaticNew(void)

{
  NetworkGetMysteryStore *this;
  
  this = ::operator_new(0x50);
  NetworkGetMysteryStore(this);
  return this;
}


/* NetworkGetMysteryStore::~NetworkGetMysteryStore() */

void __thiscall NetworkGetMysteryStore::~NetworkGetMysteryStore(NetworkGetMysteryStore *this)

{
  *(undefined ***)this = &PTR_GetClass_06773c30;
  *(undefined ***)(this + 8) = &PTR__NetworkGetMysteryStore_06773c98;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::~vector((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkGetMysteryStore::~NetworkGetMysteryStore() */

void __thiscall NetworkGetMysteryStore::~NetworkGetMysteryStore(NetworkGetMysteryStore *this)

{
  ~NetworkGetMysteryStore(this + -8);
  return;
}


/* NetworkGetMysteryStore::~NetworkGetMysteryStore() */

void __thiscall NetworkGetMysteryStore::~NetworkGetMysteryStore(NetworkGetMysteryStore *this)

{
  ~NetworkGetMysteryStore(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkGetMysteryStore::~NetworkGetMysteryStore() */

void __thiscall NetworkGetMysteryStore::~NetworkGetMysteryStore(NetworkGetMysteryStore *this)

{
  ~NetworkGetMysteryStore(this + -8);
  return;
}


/* NetworkGetMysteryStore::TEMPNAMEPLACEHOLDERVALUE(NetworkGetMysteryStore const&) */

NetworkGetMysteryStore * __thiscall
NetworkGetMysteryStore::operator=(NetworkGetMysteryStore *this,NetworkGetMysteryStore *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::
  vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
  ::operator=((vector<std::vector<StoreData,std::allocator<StoreData>>,std::allocator<std::vector<StoreData,std::allocator<StoreData>>>>
               *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = uVar1;
  return this;
}

