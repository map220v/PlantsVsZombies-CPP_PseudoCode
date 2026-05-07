// Class: NetworkfthShopInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkfthShopInfo::StaticClassInit() */

void NetworkfthShopInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkfthCostData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ac18c4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkfthShopContentData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ad0f94,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkfthShopInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03ad1270,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkfthShopInfo::StaticGetClass() */

long * NetworkfthShopInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkfthShopInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkfthShopInfo::GetClass() const */

long * NetworkfthShopInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkfthShopInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkfthShopInfo::NetworkfthShopInfo() */

void __thiscall NetworkfthShopInfo::NetworkfthShopInfo(NetworkfthShopInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0671d890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NetworkfthShopInfo::StaticNew() */

NetworkfthShopInfo * NetworkfthShopInfo::StaticNew(void)

{
  NetworkfthShopInfo *this;
  
  this = ::operator_new(0x20);
  NetworkfthShopInfo(this);
  return this;
}


/* NetworkfthShopInfo::~NetworkfthShopInfo() */

void __thiscall NetworkfthShopInfo::~NetworkfthShopInfo(NetworkfthShopInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0671d890;
  std::vector<NetworkfthShopContentData,std::allocator<NetworkfthShopContentData>>::~vector
            ((vector<NetworkfthShopContentData,std::allocator<NetworkfthShopContentData>> *)
             (this + 8));
  nop();
  return;
}


/* NetworkfthShopInfo::~NetworkfthShopInfo() */

void __thiscall NetworkfthShopInfo::~NetworkfthShopInfo(NetworkfthShopInfo *this)

{
  ~NetworkfthShopInfo(this);
  AK::FreeHook(this);
  return;
}

