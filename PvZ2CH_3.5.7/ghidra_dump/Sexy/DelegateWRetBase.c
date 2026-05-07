// Class: Sexy::DelegateWRetBase<bool>


/* Sexy::DelegateWRetBase<bool>::InvokeUnsafeReturn(void*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::DelegateWRetBase<bool>::InvokeUnsafeReturn
          (DelegateWRetBase<bool> *this,void *param_1,RtInvokeVariant *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x10))((int)this,param_2);
  *(undefined1 *)param_1 = uVar1;
  return;
}


/* Sexy::DelegateWRetBase<bool>::DelegateWRetBase(Sexy::DelegateWRetBase<bool> const&) */

void __thiscall
Sexy::DelegateWRetBase<bool>::DelegateWRetBase
          (DelegateWRetBase<bool> *this,DelegateWRetBase *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined ***)this = &PTR_Invoke_06610e50;
  return;
}


/* Sexy::DelegateWRetBase<bool>::DelegateWRetBase<GridItemCardGameZombie, bool
   (GridItemCardGameZombie::*)(Sexy::Touch
   const&)>(Sexy::CBMemberTranslatorX<GridItemCardGameZombie, bool
   (GridItemCardGameZombie::*)(Sexy::Touch const&)> const&) */

void __thiscall
Sexy::DelegateWRetBase<bool>::
DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
          (DelegateWRetBase<bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e50;
  return;
}


/* Sexy::DelegateWRetBase<Sexy::RtId>::TEMPNAMEPLACEHOLDERVALUE(Sexy::DelegateWRetBase<Sexy::RtId>
   const&) */

DelegateWRetBase<Sexy::RtId> * __thiscall
Sexy::DelegateWRetBase<Sexy::RtId>::operator=
          (DelegateWRetBase<Sexy::RtId> *this,DelegateWRetBase *param_1)

{
  DelegateBase::operator=((DelegateBase *)this,(DelegateBase *)param_1);
  return this;
}


/* Sexy::DelegateWRetBase<bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::DelegateWRetBase<bool>::Invoke
          (DelegateWRetBase<bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 extraout_x1;
  
  bVar2 = (bool)(**(code **)(*(long *)this + 0x10))((char)this,param_2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    uVar1 = RtInvokeVariant::ConvertReturnValueToVariant<bool>(bVar2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 8) = extraout_x1;
  }
  return;
}


/* Sexy::DelegateWRetBase<int>::InvokeUnsafeReturn(void*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::DelegateWRetBase<int>::InvokeUnsafeReturn
          (DelegateWRetBase<int> *this,void *param_1,RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x10))((int)this,param_2);
  *(undefined4 *)param_1 = uVar1;
  return;
}


/* Sexy::DelegateWRetBase<int>::DelegateWRetBase<ZombieIceAgeSki, int
   (ZombieIceAgeSki::*)()>(Sexy::CBMemberTranslatorX<ZombieIceAgeSki, int (ZombieIceAgeSki::*)()>
   const&) */

void __thiscall
Sexy::DelegateWRetBase<int>::DelegateWRetBase<ZombieIceAgeSki,int(ZombieIceAgeSki::*)()>
          (DelegateWRetBase<int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066cdfd0;
  return;
}


/* Sexy::DelegateWRetBase<int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::DelegateWRetBase<int>::Invoke
          (DelegateWRetBase<int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_x1;
  
  iVar2 = (**(code **)(*(long *)this + 0x10))((int)this,param_2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    uVar1 = RtInvokeVariant::ConvertReturnValueToVariant<int>(iVar2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 8) = extraout_x1;
  }
  return;
}


/* Sexy::DelegateWRetBase<bool>::DelegateWRetBase<bool (*)()>(Sexy::CBFunctionTranslatorX<bool
   (*)()> const&) */

void __thiscall
Sexy::DelegateWRetBase<bool>::DelegateWRetBase<bool(*)()>
          (DelegateWRetBase<bool> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610e50;
  return;
}


/* Sexy::DelegateWRetBase<bool>::DelegateWRetBase() */

void __thiscall Sexy::DelegateWRetBase<bool>::DelegateWRetBase(DelegateWRetBase<bool> *this)

{
  DelegateBase::DelegateBase((DelegateBase *)this);
  *(undefined ***)this = &PTR_Invoke_06610e50;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DelegateWRetBase<std::string >::InvokeUnsafeReturn(void*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::DelegateWRetBase<std::string>::InvokeUnsafeReturn
          (DelegateWRetBase<std::string> *this,void *param_1,RtInvokeVariant *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x10))(asStack_10,this,param_2);
  FUN_05474278(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DelegateWRetBase<std::string >::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::DelegateWRetBase<std::string>::Invoke
          (DelegateWRetBase<std::string> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  undefined1 auVar1 [16];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x10))(asStack_18,this,param_2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    FUN_05475d88(asStack_10,asStack_18);
    auVar1 = FUN_044030e8();
    *(undefined1 (*) [16])param_1 = auVar1;
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::DelegateWRetBase<std::string >::DelegateWRetBase<PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&, int)>(Sexy::CBMemberTranslatorX<PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&, int)> const&) */

void __thiscall
Sexy::DelegateWRetBase<std::string>::
DelegateWRetBase<PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
          (DelegateWRetBase<std::string> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06847b20;
  return;
}


/* Sexy::DelegateWRetBase<float>::InvokeUnsafeReturn(void*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::DelegateWRetBase<float>::InvokeUnsafeReturn
          (DelegateWRetBase<float> *this,void *param_1,RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x10))(this,param_2);
  *(undefined4 *)param_1 = uVar1;
  return;
}


/* Sexy::DelegateWRetBase<float>::DelegateWRetBase<Zombie, float (Zombie::*)()
   const>(Sexy::CBMemberTranslatorX<Zombie, float (Zombie::*)() const> const&) */

void __thiscall
Sexy::DelegateWRetBase<float>::DelegateWRetBase<Zombie,float(Zombie::*)()const>
          (DelegateWRetBase<float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0686b360;
  return;
}


/* Sexy::DelegateWRetBase<float>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::DelegateWRetBase<float>::Invoke
          (DelegateWRetBase<float> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x10))(this,param_2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    auVar2 = RtInvokeVariant::ConvertReturnValueToVariant<float>(fVar1);
    *(undefined1 (*) [16])param_1 = auVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DelegateWRetBase<Sexy::RtId>::InvokeUnsafeReturn(void*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::DelegateWRetBase<Sexy::RtId>::InvokeUnsafeReturn
          (DelegateWRetBase<Sexy::RtId> *this,void *param_1,RtInvokeVariant *param_2)

{
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x10))(aRStack_10,this,param_2);
  RtId::operator=(param_1,aRStack_10);
  RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::DelegateWRetBase<Sexy::RtId>::DelegateWRetBase() */

void __thiscall
Sexy::DelegateWRetBase<Sexy::RtId>::DelegateWRetBase(DelegateWRetBase<Sexy::RtId> *this)

{
  DelegateBase::DelegateBase((DelegateBase *)this);
  *(undefined ***)this = &PTR_Invoke_06a2ef90;
  return;
}


/* Sexy::DelegateWRetBase<Sexy::RtId>::DelegateWRetBase<Sexy::RtId
   (*)(Sexy::RtObject*)>(Sexy::CBFunctionTranslatorX<Sexy::RtId (*)(Sexy::RtObject*)> const&) */

void __thiscall
Sexy::DelegateWRetBase<Sexy::RtId>::DelegateWRetBase<Sexy::RtId(*)(Sexy::RtObject*)>
          (DelegateWRetBase<Sexy::RtId> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06a2ef90;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DelegateWRetBase<Sexy::RtId>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::DelegateWRetBase<Sexy::RtId>::Invoke
          (DelegateWRetBase<Sexy::RtId> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  undefined1 auVar1 [16];
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x10))(aRStack_18,this,param_2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtId::RtId(aRStack_10,aRStack_18);
    auVar1 = RtInvokeVariant::ConvertReturnValueToVariant<Sexy::RtId>(aRStack_10);
    *(undefined1 (*) [16])param_1 = auVar1;
    RtId::~RtId(aRStack_10);
  }
  RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::DelegateWRetBase<Sexy::RtId>::DelegateWRetBase(Sexy::DelegateWRetBase<Sexy::RtId> const&)
    */

void __thiscall
Sexy::DelegateWRetBase<Sexy::RtId>::DelegateWRetBase
          (DelegateWRetBase<Sexy::RtId> *this,DelegateWRetBase *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined ***)this = &PTR_Invoke_06a2ef90;
  return;
}


/* Sexy::DelegateWRetBase<int>::DelegateWRetBase() */

void __thiscall Sexy::DelegateWRetBase<int>::DelegateWRetBase(DelegateWRetBase<int> *this)

{
  DelegateBase::DelegateBase((DelegateBase *)this);
  *(undefined ***)this = &PTR_Invoke_066cdfd0;
  return;
}

