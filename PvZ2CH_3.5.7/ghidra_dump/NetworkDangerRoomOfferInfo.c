// Class: NetworkDangerRoomOfferInfo


/* NetworkDangerRoomOfferInfo::~NetworkDangerRoomOfferInfo() */

void __thiscall
NetworkDangerRoomOfferInfo::~NetworkDangerRoomOfferInfo(NetworkDangerRoomOfferInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06984b50;
  nop();
  return;
}


/* NetworkDangerRoomOfferInfo::~NetworkDangerRoomOfferInfo() */

void __thiscall
NetworkDangerRoomOfferInfo::~NetworkDangerRoomOfferInfo(NetworkDangerRoomOfferInfo *this)

{
  ~NetworkDangerRoomOfferInfo(this);
  AK::FreeHook(this);
  return;
}


/* NetworkDangerRoomOfferInfo::NetworkDangerRoomOfferInfo() */

void __thiscall
NetworkDangerRoomOfferInfo::NetworkDangerRoomOfferInfo(NetworkDangerRoomOfferInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06984b50;
  return;
}


/* NetworkDangerRoomOfferInfo::StaticNew() */

NetworkDangerRoomOfferInfo * NetworkDangerRoomOfferInfo::StaticNew(void)

{
  NetworkDangerRoomOfferInfo *this;
  
  this = ::operator_new(0x10);
  NetworkDangerRoomOfferInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkDangerRoomOfferInfo::StaticClassInit() */

void NetworkDangerRoomOfferInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkDangerRoomOfferInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04c32954,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkDangerRoomOfferInfo::StaticGetClass() */

long * NetworkDangerRoomOfferInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDangerRoomOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDangerRoomOfferInfo::GetClass() const */

long * NetworkDangerRoomOfferInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDangerRoomOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

