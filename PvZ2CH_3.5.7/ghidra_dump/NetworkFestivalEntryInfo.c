// Class: NetworkFestivalEntryInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkFestivalEntryInfo::StaticClassInit() */

void NetworkFestivalEntryInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkFestivalEntryData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ac1d9c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkShopContentData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ac1318,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkFestivalEntryInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03acf7b8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkFestivalEntryInfo::StaticGetClass() */

long * NetworkFestivalEntryInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkFestivalEntryInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkFestivalEntryInfo::GetClass() const */

long * NetworkFestivalEntryInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkFestivalEntryInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkFestivalEntryInfo::NetworkFestivalEntryInfo() */

void __thiscall NetworkFestivalEntryInfo::NetworkFestivalEntryInfo(NetworkFestivalEntryInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0671c7a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  return;
}


/* NetworkFestivalEntryInfo::StaticNew() */

NetworkFestivalEntryInfo * NetworkFestivalEntryInfo::StaticNew(void)

{
  NetworkFestivalEntryInfo *this;
  
  this = ::operator_new(0x30);
  NetworkFestivalEntryInfo(this);
  return this;
}


/* NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo() */

void __thiscall NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo(NetworkFestivalEntryInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0671c7a0;
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::vector<NetworkFestivalEntryData,std::allocator<NetworkFestivalEntryData>>::~vector
            ((vector<NetworkFestivalEntryData,std::allocator<NetworkFestivalEntryData>> *)(this + 8)
            );
  nop();
  return;
}


/* NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo() */

void __thiscall NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo(NetworkFestivalEntryInfo *this)

{
  ~NetworkFestivalEntryInfo(this);
  AK::FreeHook(this);
  return;
}

