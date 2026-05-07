// Class: NetworkRedPackDisplayInfo


/* NetworkRedPackDisplayInfo::NetworkRedPackDisplayInfo() */

void __thiscall
NetworkRedPackDisplayInfo::NetworkRedPackDisplayInfo(NetworkRedPackDisplayInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06800460;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NetworkRedPackDisplayInfo::~NetworkRedPackDisplayInfo() */

void __thiscall
NetworkRedPackDisplayInfo::~NetworkRedPackDisplayInfo(NetworkRedPackDisplayInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06800460;
  std::vector<NetworkRedPackDisplayData,std::allocator<NetworkRedPackDisplayData>>::~vector
            ((vector<NetworkRedPackDisplayData,std::allocator<NetworkRedPackDisplayData>> *)
             (this + 8));
  nop();
  return;
}


/* NetworkRedPackDisplayInfo::~NetworkRedPackDisplayInfo() */

void __thiscall
NetworkRedPackDisplayInfo::~NetworkRedPackDisplayInfo(NetworkRedPackDisplayInfo *this)

{
  ~NetworkRedPackDisplayInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRedPackDisplayInfo::StaticClassInit() */

void NetworkRedPackDisplayInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkRedPackDisplayData");
    (*pcVar3)(plVar2,asStack_10,FUN_041bbed8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkRedPackDisplayInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_041bffec,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkRedPackDisplayInfo::StaticGetClass() */

long * NetworkRedPackDisplayInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRedPackDisplayInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRedPackDisplayInfo::GetClass() const */

long * NetworkRedPackDisplayInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRedPackDisplayInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRedPackDisplayInfo::StaticNew() */

NetworkRedPackDisplayInfo * NetworkRedPackDisplayInfo::StaticNew(void)

{
  NetworkRedPackDisplayInfo *this;
  
  this = ::operator_new(0x28);
  NetworkRedPackDisplayInfo(this);
  return this;
}

