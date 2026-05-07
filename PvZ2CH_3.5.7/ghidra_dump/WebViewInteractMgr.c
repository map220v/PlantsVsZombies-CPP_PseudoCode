// Class: WebViewInteractMgr


/* WebViewInteractMgr::~WebViewInteractMgr() */

void __thiscall WebViewInteractMgr::~WebViewInteractMgr(WebViewInteractMgr *this)

{
  *(undefined ***)this = &PTR__WebViewInteractMgr_06981f40;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WebInfo::~WebInfo((WebInfo *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  Sexy::LazySingleton<WebViewInteractMgr>::~LazySingleton((LazySingleton<WebViewInteractMgr> *)this)
  ;
  return;
}


/* WebViewInteractMgr::~WebViewInteractMgr() */

void __thiscall WebViewInteractMgr::~WebViewInteractMgr(WebViewInteractMgr *this)

{
  ~WebViewInteractMgr(this);
  AK::FreeHook(this);
  return;
}


/* WebViewInteractMgr::CallCloseWebView() */

void WebViewInteractMgr::CallCloseWebView(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if (lVar1 != 0) {
    FUN_04c07f00(lVar1 + 0x356,1);
  }
  plVar2 = (long *)EASquared::Instance();
  (**(code **)(*plVar2 + 0x40))(plVar2,4);
  plVar2 = (long *)EASquared::Instance();
  (**(code **)(*plVar2 + 0x40))(plVar2,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::CallOpenAd() */

void __thiscall WebViewInteractMgr::CallOpenAd(WebViewInteractMgr *this)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::CheckNetWork(gLawnApp);
  if (cVar1 != '\0') {
    plVar2 = (long *)EASquared::Instance();
    pcVar3 = *(code **)(*plVar2 + 0x28);
    std::string::string(asStack_58,"EA2World");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onWatchedAD);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
    Delegate1<WebViewInteractMgr,void(WebViewInteractMgr::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
              (aDStack_38,aCStack_50);
    (*pcVar3)(plVar2,asStack_58,aDStack_38,1,1,2);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WebViewInteractMgr::WebViewInteractMgr() */

void __thiscall WebViewInteractMgr::WebViewInteractMgr(WebViewInteractMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<WebViewInteractMgr>::LazySingleton((LazySingleton<WebViewInteractMgr> *)this);
  *(undefined ***)this = &PTR__WebViewInteractMgr_06981f40;
  Set8BytesTo0(this + 8);
  WebInfo::WebInfo((WebInfo *)(this + 0x10));
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x38] = (WebViewInteractMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WebViewInteractMgr,void(WebViewInteractMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::UpdateConsumeCashLog(int, int) */

void __thiscall
WebViewInteractMgr::UpdateConsumeCashLog(WebViewInteractMgr *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1d0 [16];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1c0,"");
  nop();
  std::string::string(asStack_1b8,"");
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_2);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1c0,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1b8,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_1b0,"GrowUp_Challenge_Prop_Use");
  FUN_05475d88(asStack_1a0,asStack_1c0);
  FUN_05475d88(asStack_198,asStack_1b8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1a0,2,
             auStack_1d0);
  std::string::string(asStack_1a8,"");
  BehaviorLog::inGameBehavior(asStack_1b0,(vector *)asStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1b8);
  std::string::~string(asStack_1c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WebViewInteractMgr::CallConsumeCash(std::string, int, int) */

void __thiscall
WebViewInteractMgr::CallConsumeCash
          (WebViewInteractMgr *this,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar2;
  int iVar3;
  
  thunk_FUN_05475e00(this + 8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = (int)(this + 8);
  if (this_01 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetNumGems(this_01,true);
    if ((param_3 <= iVar1) &&
       (iVar1 = PlayerInfo::SubtractGems
                          (this_01,param_3,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false),
       -1 < iVar1)) {
      UpdateConsumeCashLog(this,param_3,param_4);
      psVar2 = (string *)Sexy::LazySingleton<ViewContainerMgr>::GetInstance();
      ViewContainerMgr::PassCallConsumeCash(psVar2,iVar3);
      return;
    }
  }
  psVar2 = (string *)Sexy::LazySingleton<ViewContainerMgr>::GetInstance();
  ViewContainerMgr::PassCallConsumeCash(psVar2,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::UpdateScoreStoreBuyLog(int, int, int) */

void __thiscall
WebViewInteractMgr::UpdateScoreStoreBuyLog
          (WebViewInteractMgr *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_1f0 [16];
  string asStack_1e0 [8];
  string asStack_1d8 [8];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [24];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1e0,"");
  nop();
  std::string::string(asStack_1d8,"");
  nop();
  std::string::string(asStack_1d0,"");
  nop();
  std::string::string(asStack_1c8,"");
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(asStack_1e0,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_2);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(asStack_1d8,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_3);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(asStack_1d0,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_3 - param_2);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(asStack_1c8,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1c0,"GrowUp_Challenge_Shop");
  FUN_05475d88(asStack_198,asStack_1e0);
  FUN_05475d88(asStack_190,asStack_1d8);
  FUN_05475d88(asStack_188,asStack_1d0);
  FUN_05475d88(asStack_180,asStack_1c8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_1b0,asStack_198,4,
             auStack_1f0);
  std::string::string(asStack_1b8,"");
  BehaviorLog::inGameBehavior(asStack_1c0,(vector *)asStack_1b0,asStack_1b8);
  std::string::~string(asStack_1b8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_1b0);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1c0);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1c8);
  std::string::~string(asStack_1d0);
  std::string::~string(asStack_1d8);
  std::string::~string(asStack_1e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::UpdateSettlementLog(int) */

void __thiscall WebViewInteractMgr::UpdateSettlementLog(WebViewInteractMgr *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1d0 [16];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  iVar1 = *(int *)(this + 0x3c);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1c0,"");
  nop();
  std::string::string(asStack_1b8,"");
  nop();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1c0,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_1 + iVar1);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1b8,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_1b0,"GrowUp_Challenge");
  FUN_05475d88(asStack_1a0,asStack_1c0);
  FUN_05475d88(asStack_198,asStack_1b8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1a0,2,
             auStack_1d0);
  std::string::string(asStack_1a8,"");
  BehaviorLog::inGameBehavior(asStack_1b0,(vector *)asStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1b8);
  std::string::~string(asStack_1c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::UpdateLotteryLog(int, int) */

void __thiscall
WebViewInteractMgr::UpdateLotteryLog(WebViewInteractMgr *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1d0 [16];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1c0,"");
  nop();
  std::string::string(asStack_1b8,"");
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1c0,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  FUN_0546065c(auStack_168,param_2);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1b8,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_1b0,"GrowUp_Challenge_Lottery_Draw");
  FUN_05475d88(asStack_1a0,asStack_1c0);
  FUN_05475d88(asStack_198,asStack_1b8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1a0,2,
             auStack_1d0);
  std::string::string(asStack_1a8,"");
  BehaviorLog::inGameBehavior(asStack_1b0,(vector *)asStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1b8);
  std::string::~string(asStack_1c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::UpdateAddPlayTimesLog(int) */

void __thiscall WebViewInteractMgr::UpdateAddPlayTimesLog(WebViewInteractMgr *this,int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_1c0 [16];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1b0,"");
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1b0,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_1a8,"GrowUp_Challenge_Time");
  FUN_05475d88(asStack_1a0,asStack_1b0);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1a0,1,
             auStack_1c0);
  std::string::string(asStack_198,"");
  BehaviorLog::inGameBehavior(asStack_1a8,(vector *)asStack_190,asStack_198);
  std::string::~string(asStack_198);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_1a0);
  std::string::~string(asStack_1a8);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::CallLottery(std::string) */

void WebViewInteractMgr::CallLottery(long param_1)

{
  DNetwork *this;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1512];
  string asStack_700 [1784];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 8);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04c08b94(afStack_d38,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this,asStack_700,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,asStack_d40,
             0);
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
/* WebViewInteractMgr::CallScoreStoreInfo(std::string) */

void WebViewInteractMgr::CallScoreStoreInfo(long param_1)

{
  DNetwork *this;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1520];
  string asStack_6f8 [1776];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 8);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04c08bf0(afStack_d38,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this,asStack_6f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,asStack_d40,
             0);
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
/* WebViewInteractMgr::CallAddPlayCount() */

void __thiscall WebViewInteractMgr::CallAddPlayCount(WebViewInteractMgr *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1536];
  string asStack_6e8 [1760];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04c08ca8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_6e8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* WebViewInteractMgr::onWatchedAD(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall WebViewInteractMgr::onWatchedAD(WebViewInteractMgr *this,int param_2)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    CallAddPlayCount(this);
  }
  else {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178(awStack_50,L"[WEB_GAME_WATCH_AD_ERROR]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::RequestAddPlayTimes(int) */

void __thiscall WebViewInteractMgr::RequestAddPlayTimes(WebViewInteractMgr *this,int param_1)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1536];
  string asStack_6e8 [1760];
  long local_8;
  
  *(int *)(this + 0x44) = param_1;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04c08d04(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_6e8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WebViewInteractMgr::CallAddPlayTimes(std::string, int, int) */

void WebViewInteractMgr::CallAddPlayTimes
               (WebViewInteractMgr *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string *psVar2;
  
  thunk_FUN_05475e00(param_1 + 8);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetNumGems(this_00,true);
    if ((param_3 <= iVar1) &&
       (iVar1 = PlayerInfo::SubtractGems
                          (this_00,param_3,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false),
       -1 < iVar1)) {
      RequestAddPlayTimes(param_1,param_3);
      return;
    }
  }
  psVar2 = (string *)Sexy::LazySingleton<ViewContainerMgr>::GetInstance();
  ViewContainerMgr::PassCallConsumeCash(psVar2,(int)(param_1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::RequestNetwork() */

void __thiscall WebViewInteractMgr::RequestNetwork(WebViewInteractMgr *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  this[0x38] = (WebViewInteractMgr)0x1;
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,&DAT_057554f0,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::CreateRequestURL(WebInfo const&) */

void WebViewInteractMgr::CreateRequestURL(WebInfo *param_1)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long in_x1;
  string asStack_1e0 [8];
  DString aDStack_1d8 [16];
  DString aDStack_1c8 [16];
  DString aDStack_1b8 [16];
  DString aDStack_1a8 [16];
  DString aDStack_198 [16];
  DString aDStack_188 [16];
  DString aDStack_178 [16];
  DString aDStack_168 [16];
  DString aDStack_158 [16];
  DString aDStack_148 [16];
  DString aDStack_138 [16];
  DString aDStack_128 [16];
  DString aDStack_118 [16];
  DString aDStack_108 [16];
  DString aDStack_f8 [16];
  DString aDStack_e8 [16];
  DString aDStack_d8 [16];
  DString aDStack_c8 [16];
  DString aDStack_b8 [16];
  DString aDStack_a8 [16];
  DString aDStack_98 [16];
  DString aDStack_88 [16];
  DString aDStack_78 [16];
  DString aDStack_68 [16];
  DString aDStack_58 [16];
  DString aDStack_48 [16];
  DString aDStack_38 [16];
  DString aDStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar1 = PlayerInfo::GetNumGems(this_00,true);
  std::operator+((string *)&DAT_06b8df60,"?");
  DString::DString(aDStack_1d8,iVar1);
  ::operator+("cash=",aDStack_1d8);
  ::operator+(aDStack_1c8,"&");
  ::operator+(aDStack_1b8,"accScore=");
  DString::DString(aDStack_198,*(int *)(in_x1 + 8));
  ::operator+(aDStack_1a8,aDStack_198);
  ::operator+(aDStack_188,"&");
  ::operator+(aDStack_178,"houseIdx=");
  DString::DString(aDStack_158,*(int *)(in_x1 + 0xc));
  ::operator+(aDStack_168,aDStack_158);
  ::operator+(aDStack_148,"&");
  ::operator+(aDStack_138,"tombStoneIdx=");
  DString::DString(aDStack_118,*(int *)(in_x1 + 0x10));
  ::operator+(aDStack_128,aDStack_118);
  ::operator+(aDStack_108,"&");
  ::operator+(aDStack_f8,"playTimes=");
  DString::DString(aDStack_d8,*(int *)(in_x1 + 0x14));
  ::operator+(aDStack_e8,aDStack_d8);
  ::operator+(aDStack_c8,"&");
  ::operator+(aDStack_b8,"lottery=");
  ::operator+(aDStack_a8,(string *)(in_x1 + 0x18));
  ::operator+(aDStack_98,"&");
  ::operator+(aDStack_88,"buyPlayTimes=");
  DString::DString(aDStack_68,*(int *)(in_x1 + 0x20));
  ::operator+(aDStack_78,aDStack_68);
  ::operator+(aDStack_58,"&");
  ::operator+(aDStack_48,"tutorial=");
  DString::DString(aDStack_28,*(int *)(in_x1 + 0x24));
  ::operator+(aDStack_38,aDStack_28);
  DString::operator_cast_to_string(aDStack_18);
  DString::~DString(aDStack_18);
  DString::~DString(aDStack_28);
  DString::~DString(aDStack_38);
  DString::~DString(aDStack_48);
  DString::~DString(aDStack_58);
  DString::~DString(aDStack_68);
  DString::~DString(aDStack_78);
  DString::~DString(aDStack_88);
  DString::~DString(aDStack_98);
  DString::~DString(aDStack_a8);
  DString::~DString(aDStack_b8);
  DString::~DString(aDStack_c8);
  DString::~DString(aDStack_d8);
  DString::~DString(aDStack_e8);
  DString::~DString(aDStack_f8);
  DString::~DString(aDStack_108);
  DString::~DString(aDStack_118);
  DString::~DString(aDStack_128);
  DString::~DString(aDStack_138);
  DString::~DString(aDStack_148);
  DString::~DString(aDStack_158);
  DString::~DString(aDStack_168);
  DString::~DString(aDStack_178);
  DString::~DString(aDStack_188);
  DString::~DString(aDStack_198);
  DString::~DString(aDStack_1a8);
  DString::~DString(aDStack_1b8);
  DString::~DString(aDStack_1c8);
  DString::~DString(aDStack_1d8);
  thunk_FUN_054757c0();
  std::string::~string(asStack_1e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::TryShowWebView() */

void __thiscall WebViewInteractMgr::TryShowWebView(WebViewInteractMgr *this)

{
  long lVar1;
  string *psVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if (lVar1 != 0) {
    FUN_04c07f00(lVar1 + 0x356,0);
  }
  CreateRequestURL((WebInfo *)this);
  psVar2 = (string *)Sexy::LazySingleton<ViewContainerMgr>::GetInstance();
  ViewContainerMgr::ShowWebView(psVar2);
  plVar3 = (long *)EASquared::Instance();
  pcVar4 = *(code **)(*plVar3 + 0x28);
  std::string::string(asStack_40,"EA2Mission");
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38);
  (*pcVar4)(plVar3,asStack_40,aDStack_38,1,2,4);
  std::string::~string(asStack_40);
  nop();
  plVar3 = (long *)EASquared::Instance();
  pcVar4 = *(code **)(*plVar3 + 0x28);
  std::string::string(asStack_40,"EA2Mission");
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38);
  (*pcVar4)(plVar3,asStack_40,aDStack_38,1,2,5);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::RefreshActivity() */

void __thiscall WebViewInteractMgr::RefreshActivity(WebViewInteractMgr *this)

{
  char cVar1;
  int iVar2;
  WebInfo aWStack_b0 [40];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    WebInfo::WebInfo(aWStack_b0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aWStack_b0);
    if (cVar1 != '\0') {
      WebInfo::operator=((WebInfo *)(this + 0x10),aWStack_b0);
      *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x18);
      TryShowWebView(this);
    }
    WebInfo::~WebInfo(aWStack_b0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WebViewInteractMgr::OnNotifyRefreshActivityList(WebViewInteractMgr *this,bool param_1,set *param_2)

{
  LawnApp *this_00;
  bool bVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  int local_60 [2];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_60[0] = 0x29d4;
    local_58 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_60);
    local_50[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50);
    if ((bVar1) && (this[0x38] != (WebViewInteractMgr)0x0)) {
      this[0x38] = (WebViewInteractMgr)0x0;
      RefreshActivity(this);
    }
  }
  else {
    FUN_05478178((wstring *)&local_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((wstring *)local_50,L"[GACHA_ACTIVITY_DATA_LOST]",local_60);
    pPVar2 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(this_00,(wstring *)&local_58,(wstring *)local_50);
    FUN_05476c50((wstring *)local_50);
    nop();
    FUN_05476c50((wstring *)&local_58);
    nop();
    FUN_05478178((wstring *)&local_58,L"[BUTTON_OK]",local_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)local_50);
    PVZ2UIDialog::AddButton(pPVar2,(wstring *)&local_58,aDStack_38,1);
    FUN_05476c50((wstring *)&local_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WebViewInteractMgr::CallSettlement(std::string, int, int, int) */

void __thiscall
WebViewInteractMgr::CallSettlement
          (WebViewInteractMgr *this,undefined8 param_2,int param_3,int param_4,int param_5)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *puVar3;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1504];
  string asStack_708 [1792];
  long local_8;
  
  *(int *)(this + 0x40) = param_3;
  local_8 = ___stack_chk_guard;
  __n = auStack_d48;
  thunk_FUN_05475e00(this + 8);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  puVar3 = __n;
  std::string::string(asStack_d40,"s");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_3);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)puVar3);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  puVar3 = __n;
  std::string::string(asStack_d40,"pil");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_4);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)puVar3);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"zi");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_5);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04c08b38(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_708,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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
/* WebViewInteractMgr::CallScoreStoreBuy(std::string, int) */

void __thiscall
WebViewInteractMgr::CallScoreStoreBuy(WebViewInteractMgr *this,undefined8 param_2,int param_3)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1528];
  string asStack_6f0 [1768];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 8);
  __n = auStack_d48;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"oi");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_3);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04c08c4c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_6f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
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

