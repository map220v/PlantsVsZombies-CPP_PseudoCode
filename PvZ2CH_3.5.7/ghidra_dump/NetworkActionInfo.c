// Class: NetworkActionInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkActionInfo::StaticClassInit() */

void NetworkActionInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkActionInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04543ce0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkActionInfo::StaticGetClass() */

long * NetworkActionInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkActionInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkActionInfo::GetClass() const */

long * NetworkActionInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkActionInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkActionInfo::NetworkActionInfo() */

void __thiscall NetworkActionInfo::NetworkActionInfo(NetworkActionInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_068582b0;
  *(undefined ***)(this + 8) = &PTR__NetworkActionInfo_06858318;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkActionInfo::StaticNew() */

NetworkActionInfo * NetworkActionInfo::StaticNew(void)

{
  NetworkActionInfo *this;
  
  this = ::operator_new(0x30);
  NetworkActionInfo(this);
  return this;
}


/* NetworkActionInfo::~NetworkActionInfo() */

void __thiscall NetworkActionInfo::~NetworkActionInfo(NetworkActionInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_068582b0;
  *(undefined ***)(this + 8) = &PTR__NetworkActionInfo_06858318;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkActionInfo::~NetworkActionInfo() */

void __thiscall NetworkActionInfo::~NetworkActionInfo(NetworkActionInfo *this)

{
  ~NetworkActionInfo(this + -8);
  return;
}


/* NetworkActionInfo::~NetworkActionInfo() */

void __thiscall NetworkActionInfo::~NetworkActionInfo(NetworkActionInfo *this)

{
  ~NetworkActionInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkActionInfo::~NetworkActionInfo() */

void __thiscall NetworkActionInfo::~NetworkActionInfo(NetworkActionInfo *this)

{
  ~NetworkActionInfo(this + -8);
  return;
}

