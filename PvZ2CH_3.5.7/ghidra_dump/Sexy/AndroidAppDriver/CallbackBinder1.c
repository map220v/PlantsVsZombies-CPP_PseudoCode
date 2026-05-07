// Class: Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>


/* Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   Sexy::IPurchaseDriver::CauseForIncompletion>::Func() */

void __thiscall
Sexy::AndroidAppDriver::
CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>::Func
          (CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion> *this
          )

{
  long lVar1;
  
  lVar1 = (long)*(ulong *)(this + 0x40) >> 1;
  if ((*(ulong *)(this + 0x40) & 1) != 0) {
    (**(code **)(*(long *)(*(long *)(this + 0x30) + lVar1) + *(long *)(this + 0x38)))
              (*(long *)(this + 0x30) + lVar1,this + 0x48);
    AK::FreeHook(this);
    return;
  }
  (**(code **)(this + 0x38))(*(long *)(this + 0x30) + lVar1,this + 0x48);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter, std::string >::~CallbackBinder1()
    */

void __thiscall
Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>::~CallbackBinder1
          (CallbackBinder1<Sexy::IPurchaseAdapter,std::string> *this)

{
  std::string::~string((string *)(this + 0x48));
  return;
}


/* Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter, std::string >::Func() */

void __thiscall
Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>::Func
          (CallbackBinder1<Sexy::IPurchaseAdapter,std::string> *this)

{
  long lVar1;
  
  lVar1 = (long)*(ulong *)(this + 0x40) >> 1;
  if ((*(ulong *)(this + 0x40) & 1) == 0) {
    (**(code **)(this + 0x38))(*(long *)(this + 0x30) + lVar1,this + 0x48);
    ~CallbackBinder1(this);
    AK::FreeHook(this);
    return;
  }
  (**(code **)(*(long *)(*(long *)(this + 0x30) + lVar1) + *(long *)(this + 0x38)))
            (*(long *)(this + 0x30) + lVar1,this + 0x48);
  ~CallbackBinder1(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter, std::string
   >::CallbackBinder1(Sexy::IPurchaseAdapter&, void (Sexy::IPurchaseAdapter::*)(std::string const&),
   std::string const&) */

void Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>::CallbackBinder1
               (IPurchaseAdapter *param_1,_func_void_string_ptr *param_2,string *param_3)

{
  undefined8 in_x3;
  undefined8 in_x4;
  CBMemberTranslatorX aCStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,Func);
  Delegate0::
  Delegate0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>,void(Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,std::string>::*)()>
            ((Delegate0 *)param_1,aCStack_20);
  *(_func_void_string_ptr **)(param_1 + 0x30) = param_2;
  *(string **)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x40) = in_x3;
  FUN_05475d88(param_1 + 0x48,in_x4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,
   Sexy::IPurchaseDriver::CauseForIncompletion>::CallbackBinder1(Sexy::IPurchaseAdapter&, void
   (Sexy::IPurchaseAdapter::*)(Sexy::IPurchaseDriver::CauseForIncompletion const&),
   Sexy::IPurchaseDriver::CauseForIncompletion const&) */

void Sexy::AndroidAppDriver::
     CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>::
     CallbackBinder1(IPurchaseAdapter *param_1,_func_void_CauseForIncompletion_ptr *param_2,
                    CauseForIncompletion *param_3)

{
  long lVar1;
  undefined8 in_x3;
  undefined4 *in_x4;
  CBMemberTranslatorX aCStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,Func);
  Delegate0::
  Delegate0<Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>,void(Sexy::AndroidAppDriver::CallbackBinder1<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>::*)()>
            ((Delegate0 *)param_1,aCStack_20);
  *(_func_void_CauseForIncompletion_ptr **)(param_1 + 0x30) = param_2;
  lVar1 = ___stack_chk_guard;
  *(CauseForIncompletion **)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x40) = in_x3;
  *(undefined4 *)(param_1 + 0x48) = *in_x4;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

