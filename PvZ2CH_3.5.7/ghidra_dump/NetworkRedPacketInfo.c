// Class: NetworkRedPacketInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRedPacketInfo::StaticClassInit() */

void NetworkRedPacketInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkRedPacketInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03acad30,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkRedPacketInfo::StaticGetClass() */

long * NetworkRedPacketInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRedPacketInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRedPacketInfo::GetClass() const */

long * NetworkRedPacketInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRedPacketInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRedPacketInfo::NetworkRedPacketInfo() */

void __thiscall NetworkRedPacketInfo::NetworkRedPacketInfo(NetworkRedPacketInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0671ea70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NetworkRedPacketInfo::StaticNew() */

NetworkRedPacketInfo * NetworkRedPacketInfo::StaticNew(void)

{
  NetworkRedPacketInfo *this;
  
  this = ::operator_new(0x28);
  NetworkRedPacketInfo(this);
  return this;
}


/* NetworkRedPacketInfo::~NetworkRedPacketInfo() */

void __thiscall NetworkRedPacketInfo::~NetworkRedPacketInfo(NetworkRedPacketInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0671ea70;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  nop();
  return;
}


/* NetworkRedPacketInfo::~NetworkRedPacketInfo() */

void __thiscall NetworkRedPacketInfo::~NetworkRedPacketInfo(NetworkRedPacketInfo *this)

{
  ~NetworkRedPacketInfo(this);
  AK::FreeHook(this);
  return;
}

