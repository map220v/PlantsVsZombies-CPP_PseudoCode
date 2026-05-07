// Class: AuthMgr


/* AuthMgr::SetLimitDesc(std::wstring const&) */

void AuthMgr::SetLimitDesc(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x20);
  return;
}


/* AuthMgr::SetDesc(std::wstring const&) */

void AuthMgr::SetDesc(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x28);
  return;
}


/* AuthMgr::SetToken(std::string const&) */

void AuthMgr::SetToken(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x38);
  return;
}


/* AuthMgr::SetCharacterId(std::string const&) */

void AuthMgr::SetCharacterId(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x30);
  return;
}


/* AuthMgr::onMsgError(int, std::string const&) */

int AuthMgr::onMsgError(int param_1,string *param_2)

{
  return param_1;
}


/* AuthMgr::~AuthMgr() */

void __thiscall AuthMgr::~AuthMgr(AuthMgr *this)

{
  *(undefined ***)this = &PTR__AuthMgr_06982010;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  FUN_05476c50(this + 0x28);
  FUN_05476c50(this + 0x20);
  Sexy::LazySingleton<AuthMgr>::~LazySingleton((LazySingleton<AuthMgr> *)this);
  return;
}


/* AuthMgr::~AuthMgr() */

void __thiscall AuthMgr::~AuthMgr(AuthMgr *this)

{
  ~AuthMgr(this);
  AK::FreeHook(this);
  return;
}


/* AuthMgr::OnReachLimit() */

void AuthMgr::OnReachLimit(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Android::Device::ExitApp();
  return;
}


/* AuthMgr::SetAuthInfo(bool, bool) */

void __thiscall AuthMgr::SetAuthInfo(AuthMgr *this,bool param_1,bool param_2)

{
  this[8] = (AuthMgr)param_1;
  this[9] = (AuthMgr)param_2;
  return;
}


/* AuthMgr::CheckLegal() */

void __thiscall AuthMgr::CheckLegal(AuthMgr *this)

{
  char cVar1;
  
  cVar1 = BigInt::IsNegative((BigInt *)this);
  if (cVar1 != '\0') {
    this[9] = (AuthMgr)(*(int *)(this + 0xc) < 0x12);
  }
  return;
}


/* AuthMgr::NeedCheck() */

AuthMgr __thiscall AuthMgr::NeedCheck(AuthMgr *this)

{
  char cVar1;
  AuthMgr AVar2;
  
  cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x20000);
  AVar2 = (AuthMgr)0x0;
  if ((cVar1 != '\0') && (AVar2 = (AuthMgr)0x0, this[9] != (AuthMgr)0x0)) {
    AVar2 = this[8];
  }
  return AVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AuthMgr::HandleReachLimit() */

void AuthMgr::HandleReachLimit(void)

{
  ReceivedDataCallback RVar1;
  LawnApp *this;
  int iVar2;
  int iVar3;
  ReceivedDataCallback *in_x0;
  PVZ2UIDialog *pPVar4;
  PrimeTypeface *pPVar5;
  wstring *in_x1;
  string *extraout_x1;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  RVar1 = in_x0[0x1d];
  local_8 = ___stack_chk_guard;
  if (RVar1 != (ReceivedDataCallback)0x0) {
    iVar2 = FUN_04c0d828(600);
    iVar3 = FUN_04c0d828(300);
    pPVar4 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[NO_AUTH_TITLE]",asStack_58);
    PVZ2UIDialog::SetHeaderLabel(pPVar4,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[NO_AUTH_DESC]",asStack_58);
    PVZ2UIDialog::SetFooterLabel(pPVar4,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    PVZ2UIDialog::SetFooterAlign(pPVar4,5);
    iVar2 = FUN_04c0d828(2);
    PVZ2UIDialog::SetFooterBottomPadding(pPVar4,iVar2);
    PVZ2UIDialog::SetBackgroundDarken(pPVar4,true,0.5);
    FUN_05478178(asStack_58,L"[OVERVIEW_CONFIRM]",awStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,asStack_58,aDStack_38,0);
    FUN_05476c50(asStack_58);
    nop();
  }
  else {
    Sexy::ToWString((Sexy *)(in_x0 + 0x20),in_x1);
    this = gLawnApp;
    iVar2 = FUN_04c0d828(400);
    iVar3 = FUN_04c0d828(0xfa);
    pPVar4 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(this,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    std::string::string(asStack_58,"[AUTH_LIMIT_TITLE]");
    Sexy::StringToWString((Sexy *)asStack_58,extraout_x1);
    PVZ2UIDialog::SetHeaderLabel(pPVar4,awStack_50);
    FUN_05476c50(awStack_50);
    std::string::~string(asStack_58);
    nop();
    PVZ2UIDialog::SetFooterLabel(pPVar4,awStack_60);
    pPVar5 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(pPVar4,pPVar5,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar5 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(pPVar4,pPVar5,(Color *)awStack_50);
    FUN_05478178(asStack_58,L"[BUTTON_OK]",auStack_68);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (in_x0,OnReachLimit);
    Sexy::Delegate0::Delegate0<AuthMgr,void(AuthMgr::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar4,asStack_58,aDStack_38,0);
    FUN_05476c50(asStack_58);
    nop();
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(RVar1 == (ReceivedDataCallback)0x0);
}


/* AuthMgr::AuthMgr() */

void __thiscall AuthMgr::AuthMgr(AuthMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<AuthMgr>::LazySingleton((LazySingleton<AuthMgr> *)this);
  *(undefined ***)this = &PTR__AuthMgr_06982010;
  LocalAuthInfo::LocalAuthInfo((LocalAuthInfo *)(this + 8));
  FUN_05476574(this + 0x20);
  FUN_05476574(this + 0x28);
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0((string *)(this + 0x38));
  this[0x1c] = (AuthMgr)0x0;
  this[0x1d] = (AuthMgr)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  FUN_054772c4(this + 0x20,&DAT_056f11a8);
  FUN_054772c4(this + 0x28,&DAT_056f11a8);
  std::string::append((string *)(this + 0x30),"",in_x2);
  std::string::append((string *)(this + 0x38),"",in_x2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<AuthMgr,void(AuthMgr::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AuthMgr::StartRequest() */

void __thiscall AuthMgr::StartRequest(AuthMgr *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1456];
  string asStack_738 [1840];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04c0d7cc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_738,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
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


/* AuthMgr::Update(float) */

void __thiscall AuthMgr::Update(AuthMgr *this,float param_1)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  cVar1 = NeedCheck(this);
  if (cVar1 != '\0') {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    if (*(code **)(*(long *)this_01 + 0x28) == INetworkMsgProcess::IsLogined) {
      cVar1 = INetworkMsgProcess::IsLogined(this_01);
    }
    else {
      cVar1 = (**(code **)(*(long *)this_01 + 0x28))();
    }
    if (((cVar1 != '\0') && (*(float *)(this + 0x18) != 0.0)) && (this[0x1c] == (AuthMgr)0x0)) {
      *(float *)(this + 0x14) = *(float *)(this + 0x14) - param_1;
      cVar1 = LawnApp::IsNetworkModuleOK();
      if ((cVar1 != '\0') && (*(float *)(this + 0x14) <= 0.0)) {
        StartRequest(this);
        *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x18);
      }
    }
  }
  return;
}

