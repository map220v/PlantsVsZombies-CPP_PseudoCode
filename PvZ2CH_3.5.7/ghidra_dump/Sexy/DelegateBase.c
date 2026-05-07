// Class: Sexy::DelegateBase


/* Sexy::DelegateBase::InvokeUnsafeReturn(void*, Sexy::RtInvokeVariant const*) const */

void Sexy::DelegateBase::InvokeUnsafeReturn(void *param_1,RtInvokeVariant *param_2)

{
  (*(code *)**(undefined8 **)param_1)(param_1,0);
  return;
}


/* Sexy::DelegateBase::DelegateBase(Sexy::DelegateBase&&) */

void __thiscall Sexy::DelegateBase::DelegateBase(DelegateBase *this,DelegateBase *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)this = &PTR___cxa_pure_virtual_06608310;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar3;
  return;
}


/* Sexy::DelegateBase::TEMPNAMEPLACEHOLDERVALUE(Sexy::DelegateBase const&) */

void __thiscall Sexy::DelegateBase::operator=(DelegateBase *this,DelegateBase *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar2;
  return;
}


/* Sexy::DelegateBase::DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback, void
   (Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>(Sexy::CBMemberTranslatorX<Sexy::AndroidHttpTransaction::ReceivedDataCallback,
   void (Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()> const&) */

void __thiscall
Sexy::DelegateBase::
DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
          (DelegateBase *this,CBMemberTranslatorX *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined ***)this = &PTR___cxa_pure_virtual_06608310;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* Sexy::DelegateBase::DelegateBase() */

void __thiscall Sexy::DelegateBase::DelegateBase(DelegateBase *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_06608310;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* Sexy::DelegateBase::DelegateBase<Sexy::RtId
   (*)(Sexy::RtObject*)>(Sexy::CBFunctionTranslatorX<Sexy::RtId (*)(Sexy::RtObject*)> const&) */

void __thiscall
Sexy::DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>
          (DelegateBase *this,CBFunctionTranslatorX *param_1)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_06608310;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}


/* Sexy::DelegateBase::Invoke(void*, Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::DelegateBase::Invoke
          (DelegateBase *this,void *param_1,RtInvokeVariant *param_2,RtInvokeVariant *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x18);
  *(void **)(this + 0x18) = param_1;
  (*(code *)**(undefined8 **)this)(this,param_2,param_3);
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


/* Sexy::DelegateBase::DelegateBase<Sexy::RtDb, Sexy::Event1<Sexy::RtDbTable const&>
   Sexy::RtDb::*>(Sexy::CBMemberTranslatorX<Sexy::RtDb, Sexy::Event1<Sexy::RtDbTable const&>
   Sexy::RtDb::*> const&) */

void __thiscall
Sexy::DelegateBase::DelegateBase<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>
          (DelegateBase *this,CBMemberTranslatorX *param_1)

{
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined ***)this = &PTR___cxa_pure_virtual_06608310;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return;
}

