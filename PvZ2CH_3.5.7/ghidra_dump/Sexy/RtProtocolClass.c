// Class: Sexy::RtProtocolClass


/* Sexy::RtProtocolClass::RtProtocolClass() */

void __thiscall Sexy::RtProtocolClass::RtProtocolClass(RtProtocolClass *this)

{
  RtClass::RtClass((RtClass *)this);
  *(undefined ***)this = &PTR_GetClass_06a30b00;
  return;
}


/* Sexy::RtProtocolClass::StaticNew() */

RtProtocolClass * Sexy::RtProtocolClass::StaticNew(void)

{
  RtProtocolClass *this;
  
  this = ::operator_new(0x48);
  RtProtocolClass(this);
  return this;
}


/* Sexy::RtProtocolClass::~RtProtocolClass() */

void __thiscall Sexy::RtProtocolClass::~RtProtocolClass(RtProtocolClass *this)

{
  *(undefined ***)this = &PTR_GetClass_06a30b00;
  RtClass::~RtClass((RtClass *)this);
  return;
}


/* Sexy::RtProtocolClass::~RtProtocolClass() */

void __thiscall Sexy::RtProtocolClass::~RtProtocolClass(RtProtocolClass *this)

{
  ~RtProtocolClass(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::RtProtocolClass::StaticGetClass() */

long * Sexy::RtProtocolClass::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtClass::StaticGetClass();
  (*pcVar3)(plVar1,"RtProtocolClass",uVar2,StaticNew);
  return sClass;
}


/* Sexy::RtProtocolClass::GetClass() const */

long * Sexy::RtProtocolClass::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtClass::StaticGetClass();
  (*pcVar3)(plVar1,"RtProtocolClass",uVar2,StaticNew);
  return sClass;
}

