// Class: NetworkOfferInfo


/* NetworkOfferInfo::NetworkOfferInfo() */

void __thiscall NetworkOfferInfo::NetworkOfferInfo(NetworkOfferInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06983ee0;
  return;
}


/* NetworkOfferInfo::~NetworkOfferInfo() */

void __thiscall NetworkOfferInfo::~NetworkOfferInfo(NetworkOfferInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06983ee0;
  nop();
  return;
}


/* NetworkOfferInfo::~NetworkOfferInfo() */

void __thiscall NetworkOfferInfo::~NetworkOfferInfo(NetworkOfferInfo *this)

{
  ~NetworkOfferInfo(this);
  AK::FreeHook(this);
  return;
}


/* NetworkOfferInfo::StaticNew() */

NetworkOfferInfo * NetworkOfferInfo::StaticNew(void)

{
  NetworkOfferInfo *this;
  
  this = ::operator_new(0x18);
  NetworkOfferInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkOfferInfo::StaticClassInit() */

void NetworkOfferInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkOfferInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04c2a5dc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkOfferInfo::StaticGetClass() */

long * NetworkOfferInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkOfferInfo::GetClass() const */

long * NetworkOfferInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

