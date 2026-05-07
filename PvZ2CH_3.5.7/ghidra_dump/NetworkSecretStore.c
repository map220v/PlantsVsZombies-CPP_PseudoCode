// Class: NetworkSecretStore


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkSecretStore::StaticClassInit() */

void NetworkSecretStore::StaticClassInit(void)

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
    std::string::string(asStack_10,"SecretStoreContent");
    (*pcVar3)(plVar2,asStack_10,FUN_03da0a30,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SecretStoreBundle");
    (*pcVar3)(plVar2,asStack_10,FUN_03da47a8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkSecretStore");
    (*pcVar3)(plVar2,asStack_10,FUN_03da4a84,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkSecretStore::StaticGetClass() */

long * NetworkSecretStore::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSecretStore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSecretStore::GetClass() const */

long * NetworkSecretStore::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkSecretStore",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkSecretStore::NetworkSecretStore() */

void __thiscall NetworkSecretStore::NetworkSecretStore(NetworkSecretStore *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_067766c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NetworkSecretStore::StaticNew() */

NetworkSecretStore * NetworkSecretStore::StaticNew(void)

{
  NetworkSecretStore *this;
  
  this = ::operator_new(0x20);
  NetworkSecretStore(this);
  return this;
}


/* NetworkSecretStore::~NetworkSecretStore() */

void __thiscall NetworkSecretStore::~NetworkSecretStore(NetworkSecretStore *this)

{
  *(undefined ***)this = &PTR_GetClass_067766c0;
  std::vector<SecretStoreBundle,std::allocator<SecretStoreBundle>>::~vector
            ((vector<SecretStoreBundle,std::allocator<SecretStoreBundle>> *)(this + 8));
  nop();
  return;
}


/* NetworkSecretStore::~NetworkSecretStore() */

void __thiscall NetworkSecretStore::~NetworkSecretStore(NetworkSecretStore *this)

{
  ~NetworkSecretStore(this);
  AK::FreeHook(this);
  return;
}

