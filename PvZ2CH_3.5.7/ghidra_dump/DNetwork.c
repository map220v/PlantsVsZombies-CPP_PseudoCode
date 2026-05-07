// Class: DNetwork


/* DNetwork::removeRequestMsg(std::string const&) */

void __thiscall DNetwork::removeRequestMsg(DNetwork *this,string *param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  if (this_01 != (INetworkMsgProcess *)0x0) {
    INetworkMsgProcess::removeRequestMsg(this_01,param_1);
    return;
  }
  return;
}


/* DNetwork::DNetwork() */

void __thiscall DNetwork::DNetwork(DNetwork *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR__DNetwork_06a24a80;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onServerMsgError);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<DNetwork,void(DNetwork::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::ServerMsgError,&local_40);
  return;
}


/* DNetwork::~DNetwork() */

void __thiscall DNetwork::~DNetwork(DNetwork *this)

{
  *(undefined ***)this = &PTR__DNetwork_06a24a80;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 8));
  return;
}


/* DNetwork::~DNetwork() */

void __thiscall DNetwork::~DNetwork(DNetwork *this)

{
  ~DNetwork(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNetwork::flush(std::string const&) */

void __thiscall DNetwork::flush(DNetwork *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  bool bVar1;
  undefined4 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::find(this_00,param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    puVar2 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[](this_00,param_1);
    *puVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNetwork::onServerMsgError(std::string const&) */

void DNetwork::onServerMsgError(string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>> *this
  ;
  bool bVar1;
  undefined4 *puVar2;
  string *in_x1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  this = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(param_1 + 8);
  lStack_8 = ___stack_chk_guard;
  uStack_18 = std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::find(this,in_x1);
  uStack_10 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&uStack_18,(rbtree_iterator *)&uStack_10);
  if (bVar1) {
    puVar2 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[](this,in_x1);
    *puVar2 = 0;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNetwork::requestNetworkMsg(std::string const&, std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > >&, float,
   std::function<void (std::string const&)> const&, bool, bool) */

void __thiscall
DNetwork::requestNetworkMsg
          (DNetwork *this,string *param_1,map *param_2,float param_3,function *param_4,bool param_5,
          bool param_6)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  DTimerManager *this_02;
  string asStack_98 [8];
  function afStack_90 [32];
  undefined1 auStack_70 [8];
  DNetwork *local_68;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  amStack_60 [48];
  function<void(std::string_const&)> afStack_30 [32];
  undefined1 local_10;
  undefined1 local_f;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  if (this_01 != (INetworkMsgProcess *)0x0) {
    std::string::string(asStack_98,"[NET_CONNECTING]");
    INetworkMsgProcess::requestMsg(this_01,param_1,param_2,param_4,param_5,param_6,asStack_98);
    std::string::~string(asStack_98);
    nop();
    this_02 = (DTimerManager *)DTimerManager::getInstane();
    FUN_05475d88(auStack_70,param_1);
    local_68 = this;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::map(amStack_60,param_2);
    std::function<void(std::string_const&)>::function(afStack_30,param_4);
    local_10 = param_5;
    local_f = param_6;
    local_c = param_3;
    FUN_04f8e0c0(afStack_90,auStack_70);
    DTimerManager::addTimer(this_02,param_1,afStack_90,param_3,1);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_90);
    FUN_04f8e568(auStack_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_01 != (INetworkMsgProcess *)0x0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DNetwork::requestMsg(std::string const&, std::map<std::string, std::string, std::less<std::string
   >, std::allocator<std::pair<std::string const, std::string > > >&, float, std::function<void
   (std::string const&)> const&, bool, bool, std::string const&, int) */

void __thiscall
DNetwork::requestMsg
          (DNetwork *this,string *param_1,map *param_2,float param_3,function *param_4,bool param_5,
          bool param_6,string *param_7,int param_8)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  DTimerManager *this_00;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    this_00 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_30,"DNetwork_disconnect");
    FUN_04f8d4c8(afStack_28);
    DTimerManager::addTimer(this_00,asStack_30,(function *)afStack_28,0.01,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::string::~string(asStack_30);
    nop();
    uVar2 = 0;
  }
  else {
    cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x1000000);
    if ((cVar1 != '\0') && (0 < param_8)) {
      piVar3 = (int *)std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                    *)(this + 8),param_1);
      *piVar3 = param_8;
    }
    uVar2 = requestNetworkMsg(this,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

