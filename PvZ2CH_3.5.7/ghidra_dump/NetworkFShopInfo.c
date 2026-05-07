// Class: NetworkFShopInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkFShopInfo::StaticClassInit() */

void NetworkFShopInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkFShopContentData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ac1698,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkFShopInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03ad0de4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkFShopInfo::StaticGetClass() */

long * NetworkFShopInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkFShopInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkFShopInfo::GetClass() const */

long * NetworkFShopInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkFShopInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkFShopInfo::NetworkFShopInfo() */

void __thiscall NetworkFShopInfo::NetworkFShopInfo(NetworkFShopInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0671d830;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NetworkFShopInfo::StaticNew() */

NetworkFShopInfo * NetworkFShopInfo::StaticNew(void)

{
  NetworkFShopInfo *this;
  
  this = ::operator_new(0x20);
  NetworkFShopInfo(this);
  return this;
}


/* NetworkFShopInfo::~NetworkFShopInfo() */

void __thiscall NetworkFShopInfo::~NetworkFShopInfo(NetworkFShopInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0671d830;
  std::vector<NetworkFShopContentData,std::allocator<NetworkFShopContentData>>::~vector
            ((vector<NetworkFShopContentData,std::allocator<NetworkFShopContentData>> *)(this + 8));
  nop();
  return;
}


/* NetworkFShopInfo::~NetworkFShopInfo() */

void __thiscall NetworkFShopInfo::~NetworkFShopInfo(NetworkFShopInfo *this)

{
  ~NetworkFShopInfo(this);
  AK::FreeHook(this);
  return;
}

