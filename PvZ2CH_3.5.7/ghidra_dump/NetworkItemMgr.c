// Class: NetworkItemMgr


/* NetworkItemMgr::~NetworkItemMgr() */

void __thiscall NetworkItemMgr::~NetworkItemMgr(NetworkItemMgr *this)

{
  *(undefined ***)this = &PTR__NetworkItemMgr_06982050;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<NetworkItemMgr>::~LazySingleton((LazySingleton<NetworkItemMgr> *)this);
  return;
}


/* NetworkItemMgr::~NetworkItemMgr() */

void __thiscall NetworkItemMgr::~NetworkItemMgr(NetworkItemMgr *this)

{
  ~NetworkItemMgr(this);
  AK::FreeHook(this);
  return;
}


/* NetworkItemMgr::ReachMaxRetry() */

byte __thiscall NetworkItemMgr::ReachMaxRetry(NetworkItemMgr *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (2 < *(int *)(this + 0xc)) {
    bVar1 = (byte)this[8] ^ 1;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::ShowWaitingDialog() */

void __thiscall NetworkItemMgr::ShowWaitingDialog(NetworkItemMgr *this)

{
  LawnApp *this_00;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x10] == (NetworkItemMgr)0x0) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
    this_00 = gLawnApp;
    TodStringTranslate(L"[SYNCING]");
    LawnApp::ShowWaitingDialog(this_00,awStack_10,0x28,300,400);
    FUN_05476c50(awStack_10);
    this[0x10] = (NetworkItemMgr)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkItemMgr::KillWaitingDialog() */

void __thiscall NetworkItemMgr::KillWaitingDialog(NetworkItemMgr *this)

{
  if (this[0x10] != (NetworkItemMgr)0x0) {
    LawnApp::KillWaitingDialog(gLawnApp);
    this[0x10] = (NetworkItemMgr)0x0;
  }
  return;
}


/* NetworkItemMgr::RemoveSyncCache(std::vector<NetworkItemInfo, std::allocator<NetworkItemInfo> >
   const&) */

void __thiscall NetworkItemMgr::RemoveSyncCache(NetworkItemMgr *this,vector *param_1)

{
  NetworkMgr *this_00;
  long lVar1;
  NetworkCacheQueue *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  lVar1 = NetworkMgr::GetNewNetWorkProcess(this_00);
  if ((lVar1 != 0) &&
     (this_01 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue(),
     this_01 != (NetworkCacheQueue *)0x0)) {
    NetworkCacheQueue::removeSyncItemFragment(this_01,param_1);
    INetworkMsgProcess::SaveCache();
    return;
  }
  return;
}


/* NetworkItemMgr::ClearSyncCache() */

void NetworkItemMgr::ClearSyncCache(void)

{
  NetworkMgr *this;
  long lVar1;
  NetworkCacheQueue *this_00;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  lVar1 = NetworkMgr::GetNewNetWorkProcess(this);
  if ((lVar1 != 0) &&
     (this_00 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue(),
     this_00 != (NetworkCacheQueue *)0x0)) {
    NetworkCacheQueue::clearItemFragmentCache(this_00);
    INetworkMsgProcess::SaveCache();
    return;
  }
  return;
}


/* NetworkItemMgr::InsertSyncCache(std::vector<NetworkItemInfo, std::allocator<NetworkItemInfo> >
   const&) */

void __thiscall NetworkItemMgr::InsertSyncCache(NetworkItemMgr *this,vector *param_1)

{
  NetworkMgr *this_00;
  long lVar1;
  NetworkCacheQueue *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  lVar1 = NetworkMgr::GetNewNetWorkProcess(this_00);
  if ((lVar1 != 0) &&
     (this_01 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue(),
     this_01 != (NetworkCacheQueue *)0x0)) {
    NetworkCacheQueue::insertItemFragmentCache(this_01,param_1);
    INetworkMsgProcess::SaveCache();
    return;
  }
  return;
}


/* NetworkItemMgr::HasNetworkCacheSyncComplete() */

undefined8 NetworkItemMgr::HasNetworkCacheSyncComplete(void)

{
  NetworkMgr *this;
  long lVar1;
  NetworkCacheQueue *this_00;
  undefined8 uVar2;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  lVar1 = NetworkMgr::GetNewNetWorkProcess(this);
  if ((lVar1 != 0) &&
     (this_00 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue(),
     this_00 != (NetworkCacheQueue *)0x0)) {
    uVar2 = NetworkCacheQueue::isItemCacheEmpty(this_00);
    return uVar2;
  }
  return 0;
}


/* NetworkItemMgr::NeedSync() */

byte __thiscall NetworkItemMgr::NeedSync(NetworkItemMgr *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = HasNetworkCacheSyncComplete();
  if ((((cVar1 == '\0') && (this[8] == (NetworkItemMgr)0x0)) && (*(int *)(this + 0xc) < 3)) &&
     (cVar1 = (**(code **)(*gLawnApp + 0x2b8))(gLawnApp), cVar1 == '\0')) {
    bVar2 = (byte)this[0x12] ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::onMsgError(int, std::string const&) */

void __thiscall NetworkItemMgr::onMsgError(NetworkItemMgr *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [1832];
  string asStack_5c0 [1464];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_5c0);
  if (cVar1 != '\0') {
    this[8] = (NetworkItemMgr)0x0;
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::TrySyncManually() */

void __thiscall NetworkItemMgr::TrySyncManually(NetworkItemMgr *this)

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
  FUN_05478178(awStack_58,L"[SYNCING_FAILED_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[SYNCING_FAILED_TEXT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSyncManually);
  Sexy::Delegate0::Delegate0<NetworkItemMgr,void(NetworkItemMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::WaitForSync() */

void NetworkItemMgr::WaitForSync(void)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[SYNCING_WAITING_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[SYNCING_WAITING_TEXT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkItemMgr::HandleSyncTask() */

void __thiscall NetworkItemMgr::HandleSyncTask(NetworkItemMgr *this)

{
  if (2 < *(int *)(this + 0xc)) {
    TrySyncManually(this);
    return;
  }
  WaitForSync();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::NetworkItemMgr() */

void __thiscall NetworkItemMgr::NetworkItemMgr(NetworkItemMgr *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NetworkItemMgr>::LazySingleton((LazySingleton<NetworkItemMgr> *)this);
  this[0x13] = (NetworkItemMgr)0x1;
  this[8] = (NetworkItemMgr)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__NetworkItemMgr_06982050;
  this[0x10] = (NetworkItemMgr)0x0;
  this[0x11] = (NetworkItemMgr)0x0;
  this[0x12] = (NetworkItemMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<NetworkItemMgr,void(NetworkItemMgr::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFinishGetPlayerinfo);
  Sexy::Delegate0::Delegate0<NetworkItemMgr,void(NetworkItemMgr::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FinishGetPlayerinfo,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::CheckUnsyncItems(std::vector<NetworkItemInfo, std::allocator<NetworkItemInfo> >
   const&) */

void __thiscall NetworkItemMgr::CheckUnsyncItems(NetworkItemMgr *this,vector *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  DNetwork *this_00;
  ulong uVar6;
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [1832];
  string asStack_5c0 [1464];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  std::string::string(asStack_ce8,"");
  FUN_05462980(auStack_e58,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  FUN_054603b8(auStack_e48,&DAT_05593308);
  uVar6 = 0;
  while (uVar4 = FUN_04c0e578(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8)), uVar6 < uVar4) {
    uVar5 = FUN_054603b8(auStack_e48,&DAT_05593310);
    uVar5 = FUN_054603b8(uVar5,&DAT_05594050);
    lVar2 = FUN_04c0e584(*(undefined8 *)param_1,uVar6);
    uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar2 + 4));
    uVar5 = FUN_054603b8(uVar5,",\"q\":");
    puVar3 = (undefined4 *)FUN_04c0e584(*(undefined8 *)param_1,uVar6);
    uVar5 = FUN_0546065c(uVar5,*puVar3);
    FUN_054603b8(uVar5,&DAT_05593340);
    uVar4 = FUN_04c0e578(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar4 == uVar6 + 1) break;
    FUN_054603b8(auStack_e48,&DAT_05593348);
    uVar6 = uVar6 + 1;
  }
  FUN_054603b8(auStack_e48,&DAT_05593350);
  std::string::string(asStack_eb0,"pl");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(asStack_ce8,auStack_e58);
  FUN_05474278(uVar5,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04c0eca0(afStack_ea8,this);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5c0,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::DoSync() */

void __thiscall NetworkItemMgr::DoSync(NetworkItemMgr *this)

{
  NetworkItemMgr NVar1;
  undefined4 uVar2;
  NetworkMgr *this_00;
  long lVar3;
  NetworkCacheQueue *this_01;
  vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *this_02;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  DNetwork *this_03;
  ulong uVar7;
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [1832];
  string asStack_5c0 [1464];
  long local_8;
  
  NVar1 = this[0x12];
  local_8 = ___stack_chk_guard;
  if (NVar1 == (NetworkItemMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    lVar3 = NetworkMgr::GetNewNetWorkProcess(this_00);
    if ((lVar3 != 0) &&
       (this_01 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue(),
       this_01 != (NetworkCacheQueue *)0x0)) {
      this_02 = (vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)
                NetworkCacheQueue::getItemFragmentCache(this_01);
      NVar1 = (NetworkItemMgr)
              std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::empty(this_02);
      if (NVar1 == (NetworkItemMgr)0x0) {
        this[8] = (NetworkItemMgr)0x1;
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_e88);
        uVar2 = operator|(0x10,8);
        FUN_05462470(auStack_e58,uVar2);
        std::string::string(asStack_ce8,"");
        FUN_05462980(auStack_e58,asStack_ce8);
        std::string::~string(asStack_ce8);
        nop();
        FUN_054603b8(auStack_e48,&DAT_05593308);
        uVar7 = 0;
        while (uVar5 = FUN_04c0e578(*(undefined8 *)this_02,*(undefined8 *)(this_02 + 8)),
              uVar7 < uVar5) {
          uVar6 = FUN_054603b8(auStack_e48,&DAT_05593310);
          uVar6 = FUN_054603b8(uVar6,&DAT_05594050);
          lVar3 = FUN_04c0e58c(*(undefined8 *)this_02,uVar7);
          uVar6 = FUN_0546065c(uVar6,*(undefined4 *)(lVar3 + 4));
          uVar6 = FUN_054603b8(uVar6,",\"q\":");
          puVar4 = (undefined4 *)FUN_04c0e58c(*(undefined8 *)this_02,uVar7);
          uVar6 = FUN_0546065c(uVar6,*puVar4);
          FUN_054603b8(uVar6,&DAT_05593340);
          uVar5 = FUN_04c0e578(*(undefined8 *)this_02,*(undefined8 *)(this_02 + 8));
          if (uVar5 == uVar7 + 1) break;
          FUN_054603b8(auStack_e48,&DAT_05593348);
          uVar7 = uVar7 + 1;
        }
        FUN_054603b8(auStack_e48,&DAT_05593350);
        std::string::string(asStack_eb0,"pl");
        uVar6 = std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                              *)amStack_e88,asStack_eb0);
        FUN_05462824(asStack_ce8,auStack_e58);
        FUN_05474278(uVar6,asStack_ce8);
        std::string::~string(asStack_ce8);
        std::string::~string(asStack_eb0);
        nop();
        this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
        _PacketId::_PacketId((_PacketId *)asStack_ce8);
        FUN_04c0ecfc(afStack_ea8,this);
        std::string::string(asStack_eb0,"[NET_CONNECTING]");
        DNetwork::requestMsg
                  (this_03,asStack_5c0,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
                   asStack_eb0,0);
        std::string::~string(asStack_eb0);
        nop();
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
        _PacketId::~_PacketId((_PacketId *)asStack_ce8);
        FUN_054617bc(auStack_e58);
        std::
        map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
        ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)amStack_e88);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(NVar1);
}


/* NetworkItemMgr::OnSyncManually() */

void __thiscall NetworkItemMgr::OnSyncManually(NetworkItemMgr *this)

{
  char cVar1;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    return;
  }
  DoSync(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::NetworkAddPlantPieceCount(std::vector<NetworkItemInfo,
   std::allocator<NetworkItemInfo> > const&) */

void __thiscall NetworkItemMgr::NetworkAddPlantPieceCount(NetworkItemMgr *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  DNetwork *this_00;
  ulong uVar9;
  undefined8 local_eb0;
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  undefined8 local_e88 [6];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  GAME_ITEM_INFO aGStack_ce8 [1832];
  string asStack_5c0 [1464];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::empty
                    ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)param_1);
  if (cVar1 == '\0') {
    local_eb0 = FUN_04c0f560(*(undefined8 *)param_1);
    local_e88[0] = FUN_04c0f5b0(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_eb0,(__normal_iterator *)local_e88), bVar2
          ) {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_eb0);
      ProfileChangeItemAmount(piVar4[1],*piVar4,false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_ce8);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_eb0);
    }
    InsertSyncCache(this,param_1);
    if (this[8] == (NetworkItemMgr)0x0) {
      this[8] = (NetworkItemMgr)0x1;
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)local_e88);
      uVar3 = operator|(0x10,8);
      FUN_05462470(auStack_e58,uVar3);
      std::string::string((string *)aGStack_ce8,"");
      FUN_05462980(auStack_e58,(string *)aGStack_ce8);
      std::string::~string((string *)aGStack_ce8);
      nop();
      FUN_054603b8(auStack_e48,&DAT_05593308);
      uVar9 = 0;
      while (uVar7 = FUN_04c0e578(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8)),
            uVar9 < uVar7) {
        uVar8 = FUN_054603b8(auStack_e48,&DAT_05593310);
        uVar8 = FUN_054603b8(uVar8,&DAT_05594050);
        lVar5 = FUN_04c0e584(*(undefined8 *)param_1,uVar9);
        uVar8 = FUN_0546065c(uVar8,*(undefined4 *)(lVar5 + 4));
        uVar8 = FUN_054603b8(uVar8,",\"q\":");
        puVar6 = (undefined4 *)FUN_04c0e584(*(undefined8 *)param_1,uVar9);
        uVar8 = FUN_0546065c(uVar8,*puVar6);
        FUN_054603b8(uVar8,&DAT_05593340);
        uVar7 = FUN_04c0e578(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
        if (uVar7 == uVar9 + 1) break;
        FUN_054603b8(auStack_e48,&DAT_05593348);
        uVar9 = uVar9 + 1;
      }
      FUN_054603b8(auStack_e48,&DAT_05593350);
      std::string::string((string *)&local_eb0,"pl");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)local_e88,(string *)&local_eb0);
      FUN_05462824((string *)aGStack_ce8,auStack_e58);
      FUN_05474278(uVar8,(string *)aGStack_ce8);
      std::string::~string((string *)aGStack_ce8);
      std::string::~string((string *)&local_eb0);
      nop();
      this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)aGStack_ce8);
      FUN_04c0edb4(afStack_ea8,this);
      std::string::string((string *)&local_eb0,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_00,asStack_5c0,(map *)local_e88,30.0,(function *)afStack_ea8,true,true,
                 (string *)&local_eb0,0);
      std::string::~string((string *)&local_eb0);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
      _PacketId::~_PacketId((_PacketId *)aGStack_ce8);
      FUN_054617bc(auStack_e58);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)local_e88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::GetUnsyncItems(std::vector<NetworkItemInfo, std::allocator<NetworkItemInfo> >&)
    */

void __thiscall NetworkItemMgr::GetUnsyncItems(NetworkItemMgr *this,vector *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar4;
  vector *pvVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    puVar4 = (undefined8 *)PlayerInfo::GetPlantStarsInfo(this_01);
    pvVar5 = (vector *)WorldMap::GetActionsMgr((WorldMap *)this_01);
    std::vector<int,std::allocator<int>>::vector(avStack_20,pvVar5);
    local_50 = FUN_04c0f420(*puVar4);
    local_48 = FUN_04c0f470(puVar4[1]);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      iVar1 = *piVar6;
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      local_40 = FUN_04c0f9b8(uVar7,uVar8,iVar1);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)&local_30);
      if (bVar2) {
        ServerPlantID::ServerPlantID((ServerPlantID *)&local_30,iVar1);
        uVar3 = ImageLib::Image::GetWidth((Image *)&local_30);
        uVar7 = FUN_04c0f4c0(DAT_06b8e0f8);
        uVar8 = FUN_04c0f510(DAT_06b8e100);
        local_38 = FUN_04c0fbc4(uVar7,uVar8,uVar3);
        local_30 = FUN_04c0f510(DAT_06b8e100);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30)
        ;
        if (bVar2) {
          Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_30);
          local_30 = CONCAT44(uVar3,1);
          std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
                    ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)param_1,
                     (NetworkItemInfo *)&local_30);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::TryCheckUnsyncItems() */

void __thiscall NetworkItemMgr::TryCheckUnsyncItems(NetworkItemMgr *this)

{
  char cVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  cVar1 = '\x01';
  local_8 = ___stack_chk_guard;
  if (this[0x13] != (NetworkItemMgr)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    GetUnsyncItems(this,(vector *)avStack_20);
    cVar1 = std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::empty
                      ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_20);
    if (cVar1 == '\0') {
      CheckUnsyncItems(this,(vector *)avStack_20);
    }
    else {
      this[0x13] = (NetworkItemMgr)0x0;
    }
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::onFinishGetPlayerinfo() */

void __thiscall NetworkItemMgr::onFinishGetPlayerinfo(NetworkItemMgr *this)

{
  char cVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long lStack_8;
  
  cVar1 = '\x01';
  lStack_8 = ___stack_chk_guard;
  if (this[0x13] != (NetworkItemMgr)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    GetUnsyncItems(this,(vector *)avStack_20);
    cVar1 = std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::empty
                      ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_20);
    if (cVar1 == '\0') {
      CheckUnsyncItems(this,(vector *)avStack_20);
    }
    else {
      this[0x13] = (NetworkItemMgr)0x0;
    }
    std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
              ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_20);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkItemMgr::NetworkSetPlantLevel(int, int) */

void __thiscall NetworkItemMgr::NetworkSetPlantLevel(NetworkItemMgr *this,int param_1,int param_2)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1840];
  string asStack_5b8 [1456];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n_00 = auStack_d48;
  __n = __n_00;
  std::string::string(asStack_d40,"i");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"q");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04c0ed58(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5b8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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

