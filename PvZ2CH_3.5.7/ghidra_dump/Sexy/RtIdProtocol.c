// Class: Sexy::RtIdProtocol


/* Sexy::RtIdProtocol::RtIdProtocol() */

void __thiscall Sexy::RtIdProtocol::RtIdProtocol(RtIdProtocol *this)

{
  RtProtocol::RtProtocol((RtProtocol *)this);
  *(undefined ***)this = &PTR_GetClass_06a309d0;
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet((DummyInit *)(this + 8));
  return;
}


/* Sexy::RtIdProtocol::StaticGetClass() */

long * Sexy::RtIdProtocol::StaticGetClass(void)

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
  uVar2 = RtProtocol::StaticGetClass();
  (*pcVar3)(plVar1,"RtIdProtocol",uVar2,StaticNew);
  return sClass;
}


/* Sexy::RtIdProtocol::GetClass() const */

long * Sexy::RtIdProtocol::GetClass(void)

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
  uVar2 = RtProtocol::StaticGetClass();
  (*pcVar3)(plVar1,"RtIdProtocol",uVar2,StaticNew);
  return sClass;
}


/* Sexy::RtIdProtocol::~RtIdProtocol() */

void __thiscall Sexy::RtIdProtocol::~RtIdProtocol(RtIdProtocol *this)

{
  *(undefined ***)this = &PTR_GetClass_06a309d0;
  RtProtocol::~RtProtocol((RtProtocol *)this);
  return;
}


/* Sexy::RtIdProtocol::~RtIdProtocol() */

void __thiscall Sexy::RtIdProtocol::~RtIdProtocol(RtIdProtocol *this)

{
  ~RtIdProtocol(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::RtIdProtocol::GetDelegate() */

Delegate1wRet<Sexy::RtId,Sexy::RtObject*> * Sexy::RtIdProtocol::GetDelegate(void)

{
  long in_x0;
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*> *in_x8;
  
  Delegate1wRet<Sexy::RtId,Sexy::RtObject*>::Delegate1wRet(in_x8,(Delegate1wRet *)(in_x0 + 8));
  return in_x8;
}


/* Sexy::RtIdProtocol::SetDelegate(Sexy::Delegate1wRet<Sexy::RtId, Sexy::RtObject*> const&) */

void __thiscall Sexy::RtIdProtocol::SetDelegate(RtIdProtocol *this,Delegate1wRet *param_1)

{
  Delegate1wRet<bool,SexyURL_const&>::operator=
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 8),param_1);
  return;
}


/* Sexy::RtIdProtocol::StaticNew() */

RtIdProtocol * Sexy::RtIdProtocol::StaticNew(void)

{
  RtIdProtocol *this;
  
  this = ::operator_new(0x38);
  RtIdProtocol(this);
  return this;
}

