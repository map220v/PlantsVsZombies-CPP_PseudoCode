// Class: NetworkDangerRoomSpecialOfferInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkDangerRoomSpecialOfferInfo::StaticClassInit() */

void NetworkDangerRoomSpecialOfferInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkDangerRoomSpecialOfferInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04c33954,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkDangerRoomSpecialOfferInfo::StaticGetClass() */

long * NetworkDangerRoomSpecialOfferInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDangerRoomSpecialOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDangerRoomSpecialOfferInfo::GetClass() const */

long * NetworkDangerRoomSpecialOfferInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDangerRoomSpecialOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDangerRoomSpecialOfferInfo::NetworkDangerRoomSpecialOfferInfo() */

void __thiscall
NetworkDangerRoomSpecialOfferInfo::NetworkDangerRoomSpecialOfferInfo
          (NetworkDangerRoomSpecialOfferInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06984af0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* NetworkDangerRoomSpecialOfferInfo::StaticNew() */

NetworkDangerRoomSpecialOfferInfo * NetworkDangerRoomSpecialOfferInfo::StaticNew(void)

{
  NetworkDangerRoomSpecialOfferInfo *this;
  
  this = ::operator_new(0x20);
  NetworkDangerRoomSpecialOfferInfo(this);
  return this;
}


/* NetworkDangerRoomSpecialOfferInfo::~NetworkDangerRoomSpecialOfferInfo() */

void __thiscall
NetworkDangerRoomSpecialOfferInfo::~NetworkDangerRoomSpecialOfferInfo
          (NetworkDangerRoomSpecialOfferInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06984af0;
  std::vector<DangerRoomSpecialOfferConfig,std::allocator<DangerRoomSpecialOfferConfig>>::~vector
            ((vector<DangerRoomSpecialOfferConfig,std::allocator<DangerRoomSpecialOfferConfig>> *)
             (this + 8));
  nop();
  return;
}


/* NetworkDangerRoomSpecialOfferInfo::~NetworkDangerRoomSpecialOfferInfo() */

void __thiscall
NetworkDangerRoomSpecialOfferInfo::~NetworkDangerRoomSpecialOfferInfo
          (NetworkDangerRoomSpecialOfferInfo *this)

{
  ~NetworkDangerRoomSpecialOfferInfo(this);
  AK::FreeHook(this);
  return;
}

