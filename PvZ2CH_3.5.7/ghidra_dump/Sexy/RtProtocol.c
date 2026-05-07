// Class: Sexy::RtProtocol


/* Sexy::RtProtocol::RtProtocol() */

void __thiscall Sexy::RtProtocol::RtProtocol(RtProtocol *this)

{
  RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06a30b70;
  return;
}


/* Sexy::RtProtocol::~RtProtocol() */

void __thiscall Sexy::RtProtocol::~RtProtocol(RtProtocol *this)

{
  *(undefined ***)this = &PTR_GetClass_06a30b70;
  nop();
  return;
}


/* Sexy::RtProtocol::~RtProtocol() */

void __thiscall Sexy::RtProtocol::~RtProtocol(RtProtocol *this)

{
  ~RtProtocol(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::RtProtocol::StaticNew() */

RtProtocol * Sexy::RtProtocol::StaticNew(void)

{
  RtProtocol *this;
  
  this = ::operator_new(8);
  RtProtocol(this);
  return this;
}


/* Sexy::RtProtocol::StaticGetClass() */

long * Sexy::RtProtocol::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtProtocolClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RtProtocol",uVar2,StaticNew);
  return sClass;
}


/* Sexy::RtProtocol::GetClass() const */

long * Sexy::RtProtocol::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtProtocolClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RtProtocol",uVar2,StaticNew);
  return sClass;
}

