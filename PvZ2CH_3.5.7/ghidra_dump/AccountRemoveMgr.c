// Class: AccountRemoveMgr


/* AccountRemoveMgr::onMsgError(int, std::string const&) */

int AccountRemoveMgr::onMsgError(int param_1,string *param_2)

{
  return param_1;
}


/* AccountRemoveMgr::~AccountRemoveMgr() */

void __thiscall AccountRemoveMgr::~AccountRemoveMgr(AccountRemoveMgr *this)

{
  *(undefined ***)this = &PTR__AccountRemoveMgr_06615640;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<AccountRemoveMgr>::~LazySingleton((LazySingleton<AccountRemoveMgr> *)this);
  return;
}


/* AccountRemoveMgr::~AccountRemoveMgr() */

void __thiscall AccountRemoveMgr::~AccountRemoveMgr(AccountRemoveMgr *this)

{
  ~AccountRemoveMgr(this);
  AK::FreeHook(this);
  return;
}


/* AccountRemoveMgr::DisplayUI() */

void __thiscall AccountRemoveMgr::DisplayUI(AccountRemoveMgr *this)

{
  AccountRemove::create(*(undefined4 *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountRemoveMgr::DeleteLocalProfile() */

void AccountRemoveMgr::DeleteLocalProfile(void)

{
  ProfileMgr *this;
  wstring *pwVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  pwVar1 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  PlayerInfo::AM_GetName();
  ProfileMgr::DeleteProfile(pwVar1);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccountRemoveMgr::AccountRemoveMgr() */

void __thiscall AccountRemoveMgr::AccountRemoveMgr(AccountRemoveMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<AccountRemoveMgr>::LazySingleton((LazySingleton<AccountRemoveMgr> *)this);
  *(undefined ***)this = &PTR__AccountRemoveMgr_06615640;
  Set8BytesTo0((string *)(this + 0x10));
  this[8] = (AccountRemoveMgr)0x0;
  this[9] = (AccountRemoveMgr)0x0;
  this[10] = (AccountRemoveMgr)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<AccountRemoveMgr,void(AccountRemoveMgr::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_40);
  return;
}


/* AccountRemoveMgr::onCheckAccount(bool) */

void __thiscall AccountRemoveMgr::onCheckAccount(AccountRemoveMgr *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  
  if (!param_1) {
    lVar1 = AccountRemove::get();
    if (lVar1 != 0) {
      plVar2 = (long *)AccountRemove::get();
      (**(code **)(*plVar2 + 0x348))();
    }
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::FinishCheckAccount,
               (*(uint *)(this + 0x18) & 0xfffffffd) == 0);
    return;
  }
  DisplayUI(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountRemoveMgr::RecoverAccount() */

void __thiscall AccountRemoveMgr::RecoverAccount(AccountRemoveMgr *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2712];
  string asStack_250 [584];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_033b4970(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_250,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountRemoveMgr::CheckAccount(bool) */

void __thiscall AccountRemoveMgr::CheckAccount(AccountRemoveMgr *this,bool param_1)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2720];
  string asStack_248 [576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_033b49cc(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_248,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccountRemoveMgr::TryCheckAccount(bool) */

void __thiscall AccountRemoveMgr::TryCheckAccount(AccountRemoveMgr *this,bool param_1)

{
  char cVar1;
  
  cVar1 = FUN_033b3514(this[8]);
  if (cVar1 == '\0') {
    CheckAccount(this,param_1);
    return;
  }
  onCheckAccount(this,param_1);
  return;
}

