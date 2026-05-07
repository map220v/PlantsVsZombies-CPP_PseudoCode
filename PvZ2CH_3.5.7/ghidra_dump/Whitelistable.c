// Class: Whitelistable


/* Whitelistable::onWhitelistingChanged() */

void Whitelistable::onWhitelistingChanged(void)

{
  return;
}


/* Whitelistable::SetWhitelistID(std::string const&) */

void Whitelistable::SetWhitelistID(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 8);
  if (*(code **)(*(long *)param_1 + 0x10) != onWhitelistingChanged) {
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Whitelistable::RegisterForWhitelistEvents() */

void __thiscall Whitelistable::RegisterForWhitelistEvents(Whitelistable *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000010);
  Sexy::Delegate0::Delegate0<Whitelistable,void(Whitelistable::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WhitelistingChanged,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Whitelistable::UnregisterForWhitelistEvents() */

void __thiscall Whitelistable::UnregisterForWhitelistEvents(Whitelistable *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000010);
  Sexy::Delegate0::Delegate0<Whitelistable,void(Whitelistable::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Unsubscribe((MessageRouter *)this_00,Message::WhitelistingChanged,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Whitelistable::isDisabledByWhitelisting() */

void __thiscall Whitelistable::isDisabledByWhitelisting(Whitelistable *this)

{
  WhitelistManager *this_00;
  
  this_00 = (WhitelistManager *)Sexy::LazySingleton<WhitelistManager>::GetInstance();
  WhitelistManager::IsDisabledByWhitelisting(this_00,(string *)(this + 8));
  return;
}


/* Whitelistable::~Whitelistable() */

void __thiscall Whitelistable::~Whitelistable(Whitelistable *this)

{
  *(undefined ***)this = &PTR__Whitelistable_06835b50;
  std::string::~string((string *)(this + 8));
  return;
}


/* Whitelistable::~Whitelistable() */

void __thiscall Whitelistable::~Whitelistable(Whitelistable *this)

{
  ~Whitelistable(this);
  AK::FreeHook(this);
  return;
}


/* Whitelistable::Whitelistable() */

void __thiscall Whitelistable::Whitelistable(Whitelistable *this)

{
  *(undefined ***)this = &PTR__Whitelistable_06835b50;
  Set8BytesTo0(this + 8);
  return;
}

