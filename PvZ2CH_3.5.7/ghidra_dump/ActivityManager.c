// Class: ActivityManager


/* ActivityManager::onNetworkError(int) */

void ActivityManager::onNetworkError(int param_1)

{
  if (0.0 < *(float *)((ulong)(uint)param_1 + 0xc)) {
    *(undefined4 *)((ulong)(uint)param_1 + 0xc) = 0xbf800000;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::RequestUseGem(int, int, bool) */

void __thiscall
ActivityManager::RequestUseGem(ActivityManager *this,int param_1,int param_2,bool param_3)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,(_func_void *)0x0);
  INetworkMsgProcess::ICloudRequestUseGem(this_01,param_1,param_2,(DRefPtr *)aeStack_10,1,param_3);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::OnBuyItemFinish(MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*,
   S2C_PlayerInfo const*) */

void ActivityManager::OnBuyItemFinish
               (MsgResultInfo *param_1,S2C_ICloud_GetConsumeGemInfo *param_2,S2C_PlayerInfo *param_3
               )

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_2 != (S2C_ICloud_GetConsumeGemInfo *)0x0) && (param_3 != (S2C_PlayerInfo *)0x0)) &&
     (*(int *)param_2 == 0)) {
    std::string::string(asStack_10,"OnBuyItemFinish");
    Cpp2Lua<int>(asStack_10,*(int *)(param_3 + 0x6c));
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityManager::Update() */

void __thiscall ActivityManager::Update(ActivityManager *this)

{
  WorldMapActivityBtnTurnChangeManager *this_00;
  float fVar1;
  
  if ((0.0 < *(float *)(this + 0xc)) && (fVar1 = (float)PVZ_T(), *(float *)(this + 0xc) <= fVar1)) {
    *(undefined4 *)(this + 0xc) = 0xbf800000;
  }
  this_00 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  WorldMapActivityBtnTurnChangeManager::update(this_00);
  return;
}


/* ActivityManager::ActivityManager() */

void __thiscall ActivityManager::ActivityManager(ActivityManager *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<ActivityManager>::LazySingleton((LazySingleton<ActivityManager> *)this);
  this[8] = (ActivityManager)0x0;
  *(undefined ***)this = &PTR__ActivityManager_06974930;
  *(undefined4 *)(this + 0xc) = 0xbf800000;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ActivityManager,void(ActivityManager::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityManager,void(ActivityManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyItemFinish);
  local_a0 = local_8;
  local_b0 = local_18;
  uStack_a8 = uStack_10;
  MessageRouter::
  Subscribe<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<ActivityManager,void(ActivityManager::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>>
            ((MessageRouter *)puVar1,Message::BuyItemFinish,&local_b0);
  return;
}


/* ActivityManager::~ActivityManager() */

void __thiscall ActivityManager::~ActivityManager(ActivityManager *this)

{
  *(undefined ***)this = &PTR__ActivityManager_06974930;
  std::map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>::~map
            ((map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>> *)
             (this + 0x10));
  Sexy::LazySingleton<ActivityManager>::~LazySingleton((LazySingleton<ActivityManager> *)this);
  return;
}


/* ActivityManager::~ActivityManager() */

void __thiscall ActivityManager::~ActivityManager(ActivityManager *this)

{
  ~ActivityManager(this);
  AK::FreeHook(this);
  return;
}


/* ActivityManager::Reset() */

void __thiscall ActivityManager::Reset(ActivityManager *this)

{
  std::map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>::clear
            ((map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>> *)
             (this + 0x10));
  this[8] = (ActivityManager)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::Request(int, bool, int) */

void __thiscall ActivityManager::Request(ActivityManager *this,int param_1,bool param_2,int param_3)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_34;
  undefined1 auStack_30 [4];
  wchar_t local_2c;
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  local_2c = L'\x01';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,&local_34,&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,apStack_28,1,auStack_30);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,param_3,param_2);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::GetActiveItem(int) */

void ActivityManager::GetActiveItem(int param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ActiveItem *in_x8;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveItem::ActiveItem(in_x8);
  local_18 = std::map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
             ::find((map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                     *)((ulong)(uint)param_1 + 0x10),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)((ulong)(uint)param_1 + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    ActiveItem::operator=(in_x8,(ActiveItem *)(lVar3 + 8));
    cVar2 = FUN_0547419c(in_x8 + 0x40);
    if (cVar2 == '\0') {
      FUN_05475ad8(in_x8 + 0x40,&DAT_055b4790);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::SetActivityPopuped(int) */

void __thiscall ActivityManager::SetActivityPopuped(ActivityManager *this,int param_1)

{
  bool bVar1;
  long lVar2;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
             ::find((map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                     *)(this + 0x10),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityManager::SetActiveUpdateNotice(int, std::function<void (ActiveItem*)>) */

void __thiscall
ActivityManager::SetActiveUpdateNotice(ActivityManager *this,int param_1,function *param_3)

{
  long lVar1;
  int local_4;
  
  local_4 = param_1;
  lVar1 = std::map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>::
          operator[]((map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                      *)(this + 0x10),&local_4);
  std::function<void(ActiveItem*)>::operator=((function<void(ActiveItem*)> *)(lVar1 + 0x60),param_3)
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::SerializeMessage(std::string const&, std::set<int, std::less<int>,
   std::allocator<int> >&) */

void __thiscall
ActivityManager::SerializeMessage(ActivityManager *this,string *param_1,set *param_2)

{
  map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>> *this_00;
  char cVar1;
  char cVar2;
  char *pcVar3;
  RtSerialRtonReader *this_01;
  long *plVar4;
  ActiveItem *pAVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  uint local_160;
  uint local_15c;
  string asStack_158 [8];
  RtSerialRtonKey aRStack_150 [8];
  undefined8 local_148 [3];
  RtSerialRtonReader aRStack_130 [40];
  RtSerialBuffer aRStack_108 [48];
  RtSerialRtonKey aRStack_d8 [48];
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)param_2);
  Set8BytesTo0(asStack_158);
  Sexy::RtSerialBuffer::RtSerialBuffer(aRStack_108,(uchar *)0x0,0);
  Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8,aRStack_108);
  pcVar3 = (char *)FUN_0547429c(param_1);
  cVar1 = Sexy::RtSerial::JsonToRton(pcVar3,aRStack_a8,asStack_158);
  if (cVar1 == '\0') {
    uVar7 = FUN_0547429c(asStack_158);
    Sexy::OutputDebugStrF(L"猥",uVar7);
  }
  else {
    Sexy::RtSerialRtonReader::RtSerialRtonReader(aRStack_130,aRStack_108);
    Sexy::RtSerialRtonSync::RtSerialRtonSync((RtSerialRtonSync *)local_148,aRStack_130);
    this_01 = (RtSerialRtonReader *)FUN_04b9be40(local_148[0]);
    Sexy::RtSerialRtonReader::BeginDocumentObject(this_01);
    local_160 = 0;
    Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_d8,"d");
    cVar2 = Sexy::RtSerialRtonReader::BeginArray(aRStack_130,aRStack_d8,&local_160);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_d8);
    if (cVar2 != '\0') {
      if (local_160 != 0) {
        uVar10 = 0;
        do {
          auVar11 = Sexy::RtSerialRtonReader::GetCurrentScope(aRStack_130);
          auVar11 = FUN_04b9c354(auVar11._0_8_,auVar11._8_8_,uVar10);
          std::string::string((string *)aRStack_d8,"id");
          auVar11 = FUN_04b9c41c(auVar11._0_8_,auVar11._8_8_ & 0xffffffff,aRStack_d8);
          std::string::~string((string *)aRStack_d8);
          nop();
          FUN_04b9c3b8(auVar11._0_8_,auVar11._8_8_);
          local_15c = FUN_04b9c05c();
          Sexy::OutputDebugStrF((wchar_t *)"change list id : %d",(ulong)local_15c);
          if (0 < (int)local_15c) {
            this_00 = (map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                       *)(this + 0x10);
            std::set<int,std::less<int>,std::allocator<int>>::insert
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_15c);
            plVar4 = (long *)std::
                             map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                             ::operator[](this_00,(int *)&local_15c);
            pcVar9 = *(code **)(*plVar4 + 0x30);
            Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_150,"");
            Sexy::RtSerializeContext::RtSerializeContext
                      ((RtSerializeContext *)aRStack_d8,(RtSerialRtonSync *)local_148,aRStack_150,0)
            ;
            (*pcVar9)(plVar4,aRStack_d8);
            Sexy::RtSerializeContext::~RtSerializeContext((RtSerializeContext *)aRStack_d8);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_150);
            pAVar5 = (ActiveItem *)
                     std::
                     map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                     ::operator[](this_00,(int *)&local_15c);
            ActiveItem::RefreshDate(pAVar5);
            pAVar5 = (ActiveItem *)
                     std::
                     map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                     ::operator[](this_00,(int *)&local_15c);
            ActiveItem::Notify(pAVar5);
            uVar8 = (ulong)local_15c;
            lVar6 = std::
                    map<int,ActiveItem,std::less<int>,std::allocator<std::pair<int_const,ActiveItem>>>
                    ::operator[](this_00,(int *)&local_15c);
            Sexy::OutputDebugStrF((wchar_t *)"id:%d op:%d",uVar8,(ulong)*(byte *)(lVar6 + 0x18));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_160);
      }
      Sexy::RtSerialRtonReader::EndArray(aRStack_130);
    }
    Sexy::RtSerialRtonReader::EndDocumentObject(this_01);
    Sexy::RtSerialRtonReader::~RtSerialRtonReader(aRStack_130);
  }
  Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
  Sexy::RtSerialBuffer::~RtSerialBuffer(aRStack_108);
  std::string::~string(asStack_158);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::Initialse() */

void __thiscall ActivityManager::Initialse(ActivityManager *this)

{
  ActivityManager AVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  float fVar6;
  wchar_t local_50;
  wchar_t local_4c;
  pair<wchar_t_const,wchar_t> apStack_48 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  AVar1 = this[8];
  local_8 = ___stack_chk_guard;
  if ((uint)(byte)AVar1 == L'\0') {
    this[8] = (ActivityManager)0x1;
    FUN_04b9c308(afStack_28);
    SetActiveUpdateNotice(this,0x2983,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
    local_4c = (wchar_t)(byte)AVar1;
    local_50 = (uint)(byte)AVar1;
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥩';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥬';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥭';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥮';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥯';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥱';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥰';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥳';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥴';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥸';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥹';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦃';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    cVar2 = LawnApp::IsChannelWithBigDeal();
    if (cVar2 != '\0') {
      local_4c = L'\x01';
      local_50 = L'⥺';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
                 (pair *)apStack_48);
    }
    local_50 = L'⥼';
    local_4c = L'\x01';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⥿';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦀';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦂';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦄';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦅';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨞';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦐';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦔';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦑';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧥';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦒';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦚';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦜';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦵';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⦸';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧃';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧄';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧂';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧌';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⧐';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧑';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨱';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧖';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧗';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⩓';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧣';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧢';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⧨';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧸';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧱';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨊';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧹';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨏';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨝';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨤';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨀';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨑';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨦';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨬';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨭';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨳';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⧁';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨸';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⨹';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⨰';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⨲';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⨉';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⥻';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⨓';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⩌';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⩔';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⩛';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⩞';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⩟';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⩶';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⩹';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⩺';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⩦';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⩲';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⪆';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    iVar3 = LawnApp::GetPlatform(gLawnApp);
    if (iVar3 == 0x67) {
      local_4c = L'\0';
      local_50 = L'⨽';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
                 (pair *)apStack_48);
    }
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(2,false,pPVar5);
    if (cVar2 != '\0') {
      local_50 = L'⩡';
      local_4c = L'\x01';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
                 (pair *)apStack_48);
      Sexy::OutputDebugStrF((wchar_t *)"ActivityManager::Request Activity_UnchartedMode");
    }
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    cVar2 = ProfileUtils::HasCompletedSecondWorldLevel(7,false,pPVar5);
    if (cVar2 != '\0') {
      local_50 = L'⩥';
      local_4c = L'\x01';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
                 (pair *)apStack_48);
    }
    local_50 = L'⩫';
    local_4c = L'\x01';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
    cVar2 = PlayerInfo::PlayerHasCompletedTutorial(pPVar5,0x17);
    if (cVar2 != '\0') {
      local_4c = L'\0';
      local_50 = L'⩯';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
                 (pair *)apStack_48);
    }
    local_50 = L'⩴';
    local_4c = L'\x01';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⪃';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⪄';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\0';
    local_50 = L'⪈';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⪉';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⪋';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⪌';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    local_4c = L'\x01';
    local_50 = L'⪎';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_48,&local_50,&local_4c);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40,
               (pair *)apStack_48);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_40,0,true);
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0xc) = fVar6 + 10.0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::InitLevelOfTheDayActivity(ActivityTypeID, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityManager::InitLevelOfTheDayActivity
          (int param_1,int param_2,set<int,std::less<int>,std::allocator<int>> *param_3)

{
  bool bVar1;
  ProfileMgr *this;
  undefined8 uVar2;
  int local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_b4 = param_2;
  local_b0 = std::set<int,std::less<int>,std::allocator<int>>::find(param_3,&local_b4);
  local_a0 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_3);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_b0,(rbtree_iterator *)&local_a0);
  if (bVar1) {
    LevelofTheDayActivityInfo::LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_a0);
    GetActiveItem(param_1);
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_a0);
    ActiveItem::~ActiveItem(aAStack_88);
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar2 = ProfileMgr::GetCurrentProfile(this);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_b0);
    local_b0 = CONCAT44(local_94,local_98);
    local_a8 = local_90;
    GetActiveItem(param_1);
    PlayerInfo::SetLevelOfTheDayInfo(uVar2,local_70,local_b0,local_a8,param_2);
    ActiveItem::~ActiveItem(aAStack_88);
    LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_a0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityManager::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityManager::onNotifyRefreshActivityList(ActivityManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  PennyTaskManager *this_00;
  WorldMapActivityBtnTurnChangeManager *pWVar6;
  HappyVaseBreakerTaskManager *this_01;
  UIMiniGameRankAward *this_02;
  CardGameNetworkMgr *this_03;
  UnchartedModeNetworkMgr *this_04;
  ulong uVar7;
  DiscountShopActivityManager *pDVar8;
  RechargeDailySignActivityManager *pRVar9;
  ProfileMgr *pPVar10;
  string *psVar11;
  PlayerInfo *pPVar12;
  SpringChargeManager *this_05;
  undefined8 uVar13;
  uint *puVar14;
  MysteryCrystalMgr *this_06;
  BaseBufferResource *pBVar15;
  SporeshroomSubsystem *pSVar16;
  WorldMap_LuaButtonsImpl *pWVar17;
  NewYearChargeManager *this_07;
  long lVar18;
  PennyClassroomManager *pPVar19;
  PennyGiftBoxManager *this_08;
  UIFutureGiftBoxMgr *this_09;
  AccumulatedLoginManager *this_10;
  ChristmasChargeManager *pCVar20;
  NetworkMgr *pNVar21;
  long *plVar22;
  DFileHandler *pDVar23;
  FirstRechargeExtraManager *pFVar24;
  undefined8 local_308;
  ActiveItem aAStack_300 [8];
  undefined4 local_2f8;
  char local_2e8;
  ActiveItem aAStack_280 [8];
  undefined4 local_278;
  char local_268;
  undefined8 local_200;
  int local_1f8;
  undefined8 local_138;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined8 local_110;
  int local_108;
  undefined4 uStack_104;
  undefined4 local_f8;
  vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>> avStack_f0 [32];
  undefined1 auStack_d0 [96];
  int local_70;
  long local_68;
  int local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0xc)) {
    *(undefined4 *)(this + 0xc) = 0xbf800000;
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a72);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    UIWishingPool::SynchronizeResVersion();
  }
  local_308 = CONCAT44(local_308._4_4_,0x29cc);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  iVar3 = (int)this;
  if (bVar1) {
    LevelofTheDayActivityInfo::LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
    GetActiveItem(iVar3);
    ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
    ActiveItem::~ActiveItem(aAStack_280);
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar13 = ProfileMgr::GetCurrentProfile(pPVar10);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_200);
    local_200 = CONCAT44(local_12c,local_130);
    local_1f8 = local_128;
    GetActiveItem(iVar3);
    PlayerInfo::SetLevelOfTheDayInfo(uVar13,local_268,local_200,local_1f8,0x29cc);
    ActiveItem::~ActiveItem(aAStack_280);
    LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2990);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    LevelofTheDayActivityInfo::LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
    GetActiveItem(iVar3);
    ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
    ActiveItem::~ActiveItem(aAStack_280);
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar13 = ProfileMgr::GetCurrentProfile(pPVar10);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_200);
    local_200 = CONCAT44(local_12c,local_130);
    local_1f8 = local_128;
    GetActiveItem(iVar3);
    PlayerInfo::SetLevelOfTheDayInfo(uVar13,local_268,local_200,local_1f8,0x2990);
    ActiveItem::~ActiveItem(aAStack_280);
    LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2994);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    LevelofTheDayActivityInfo::LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
    GetActiveItem(iVar3);
    ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
    ActiveItem::~ActiveItem(aAStack_280);
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar13 = ProfileMgr::GetCurrentProfile(pPVar10);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_200);
    local_200 = CONCAT44(local_12c,local_130);
    local_1f8 = local_128;
    GetActiveItem(iVar3);
    PlayerInfo::SetLevelOfTheDayInfo(uVar13,local_268,local_200,local_1f8,0x2994);
    ActiveItem::~ActiveItem(aAStack_280);
    LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2991);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    LevelofTheDayActivityInfo::LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
    GetActiveItem(iVar3);
    ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
    ActiveItem::~ActiveItem(aAStack_280);
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar13 = ProfileMgr::GetCurrentProfile(pPVar10);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_200);
    local_200 = CONCAT44(local_12c,local_130);
    local_1f8 = local_128;
    GetActiveItem(iVar3);
    PlayerInfo::SetLevelOfTheDayInfo(uVar13,local_268,local_200,local_1f8,0x2991);
    ActiveItem::~ActiveItem(aAStack_280);
    LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
  }
  local_308 = CONCAT44(local_308._4_4_,0x29e5);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    LevelofTheDayActivityInfo::LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
    GetActiveItem(iVar3);
    ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
    ActiveItem::~ActiveItem(aAStack_280);
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar13 = ProfileMgr::GetCurrentProfile(pPVar10);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_200);
    local_200 = CONCAT44(local_12c,local_130);
    local_1f8 = local_128;
    GetActiveItem(iVar3);
    PlayerInfo::SetLevelOfTheDayInfo(uVar13,local_268,local_200,local_1f8,0x29e5);
    ActiveItem::~ActiveItem(aAStack_280);
    LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
  }
  InitLevelOfTheDayActivity(this,0x2a0a,param_2);
  local_308 = CONCAT44(local_308._4_4_,0x2992);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    LevelofTheDayActivityInfo::LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
    GetActiveItem(iVar3);
    ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
    ActiveItem::~ActiveItem(aAStack_280);
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar13 = ProfileMgr::GetCurrentProfile(pPVar10);
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_200);
    local_200 = CONCAT44(local_12c,local_130);
    local_1f8 = local_128;
    GetActiveItem(iVar3);
    PlayerInfo::SetLevelOfTheDayInfo(uVar13,local_268,local_200,local_1f8,0x2992);
    ActiveItem::~ActiveItem(aAStack_280);
    LevelofTheDayActivityInfo::~LevelofTheDayActivityInfo((LevelofTheDayActivityInfo *)&local_138);
  }
  local_308 = CONCAT44(local_308._4_4_,0x29b0);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      MiniGameRankItemConfig::MiniGameRankItemConfig((MiniGameRankItemConfig *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        cVar2 = std::vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>>::empty
                          (avStack_f0);
        if ((cVar2 == '\0') &&
           (uVar7 = std::set<int,std::less<int>,std::allocator<int>>::size
                              ((set<int,std::less<int>,std::allocator<int>> *)param_2), 2 < uVar7))
        {
          this_02 = (UIMiniGameRankAward *)UISingletonDialog<UIMiniGameRankAward>::ShowDialog();
          FUN_05475d88((rbtree_iterator *)&local_200,auStack_d0);
          UIMiniGameRankAward::loadData(this_02,avStack_f0,local_f8,(rbtree_iterator *)&local_200);
          std::string::~string((string *)&local_200);
          UIMiniGameRankAward::initView(this_02);
          MiniGameRankItemConfig::~MiniGameRankItemConfig((MiniGameRankItemConfig *)&local_138);
          ActiveItem::~ActiveItem(aAStack_280);
          goto LAB_04ba03d8;
        }
      }
      MiniGameRankItemConfig::~MiniGameRankItemConfig((MiniGameRankItemConfig *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
LAB_04ba03d8:
  local_308 = CONCAT44(local_308._4_4_,0x2a00);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    if (local_268 != '\0') {
      NetworkConsumeAndReceive::NetworkConsumeAndReceive((NetworkConsumeAndReceive *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
      if (cVar2 != '\0') {
        PlayerInfo::CheckConsumptionActivityVersion(pPVar12,local_108);
      }
      NetworkConsumeAndReceive::~NetworkConsumeAndReceive((NetworkConsumeAndReceive *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a26);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      this_01 = (HappyVaseBreakerTaskManager *)
                Sexy::LazySingleton<HappyVaseBreakerTaskManager>::GetInstancePtr();
      HappyVaseBreakerTaskManager::Initialize(this_01);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a33);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    lVar5 = UISingletonDialog<UIPennyGuide>::GetSingletonPtr();
    if (lVar5 != 0) goto LAB_04ba0488;
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      this_00 = (PennyTaskManager *)Sexy::LazySingleton<PennyTaskManager>::GetInstancePtr();
      PennyTaskManager::Init(this_00);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a2c);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_2f8);
    if ((cVar2 != '\0') && (local_2e8 != '\0')) {
      pRVar9 = (RechargeDailySignActivityManager *)
               Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
      ActiveItem::ActiveItem(aAStack_280,aAStack_300);
      RechargeDailySignActivityManager::Init(pRVar9,aAStack_280);
      ActiveItem::~ActiveItem(aAStack_280);
    }
    ActiveItem::~ActiveItem(aAStack_300);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a2d);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_2f8);
    if ((cVar2 != '\0') && (local_2e8 != '\0')) {
      pDVar8 = (DiscountShopActivityManager *)
               Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
      ActiveItem::ActiveItem(aAStack_280,aAStack_300);
      DiscountShopActivityManager::Init(pDVar8,aAStack_280);
      ActiveItem::~ActiveItem(aAStack_280);
    }
    ActiveItem::~ActiveItem(aAStack_300);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a5b);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)&local_200);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_200);
      if (cVar2 != '\0') {
        pPVar19 = (PennyClassroomManager *)
                  Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
        NetworkPennyClassroomData::NetworkPennyClassroomData
                  ((NetworkPennyClassroomData *)&local_138,(NetworkPennyClassroomData *)&local_200);
        PennyClassroomManager::LoadData(pPVar19,(LevelofTheDayActivityInfo *)&local_138);
        NetworkPennyClassroomData::~NetworkPennyClassroomData
                  ((NetworkPennyClassroomData *)&local_138);
      }
      NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)&local_200)
      ;
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x29b3);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      lVar5 = local_68;
      if (cVar2 != '\0') {
        pBVar15 = (BaseBufferResource *)ServerTime::Instance();
        lVar18 = Sexy::BaseBufferResource::GetPtr(pBVar15);
        cVar2 = LawnApp::isSameDay(gLawnApp,lVar5,lVar18);
        if (cVar2 == '\0') {
          pCVar20 = (ChristmasChargeManager *)
                    Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getChristmasValuablePlantID(pCVar20);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID not same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
          if (0 < (int)uVar4) {
            pNVar21 = (NetworkMgr *)NetworkMgr::Instance();
            plVar22 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar21);
            (**(code **)(*plVar22 + 600))(plVar22,0x29b3,uVar4);
          }
        }
        else {
          Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getCurPlantIDFromServer();
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID is same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
        }
        pWVar17 = (WorldMap_LuaButtonsImpl *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        WorldMap_LuaButtonsImpl::RegisterHandler(pWVar17,local_70);
        pSVar16 = (SporeshroomSubsystem *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        SporeshroomSubsystem::RecordSporeshroomLevel(pSVar16,local_60);
        ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig
                  ((ChagreDoubleFesivalConfig *)&local_138);
        ActiveItem::~ActiveItem(aAStack_280);
        goto LAB_04ba05d8;
      }
      ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138)
      ;
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
LAB_04ba05d8:
  local_308 = CONCAT44(local_308._4_4_,0x29bb);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      lVar5 = local_68;
      if (cVar2 != '\0') {
        pBVar15 = (BaseBufferResource *)ServerTime::Instance();
        lVar18 = Sexy::BaseBufferResource::GetPtr(pBVar15);
        cVar2 = LawnApp::isSameDay(gLawnApp,lVar5,lVar18);
        if (cVar2 == '\0') {
          pCVar20 = (ChristmasChargeManager *)
                    Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getChristmasValuablePlantID(pCVar20);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID not same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
          if (0 < (int)uVar4) {
            pNVar21 = (NetworkMgr *)NetworkMgr::Instance();
            plVar22 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar21);
            (**(code **)(*plVar22 + 600))(plVar22,0x29bb,uVar4);
          }
        }
        else {
          Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getCurPlantIDFromServer();
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID is same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
        }
        pWVar17 = (WorldMap_LuaButtonsImpl *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        WorldMap_LuaButtonsImpl::RegisterHandler(pWVar17,local_70);
        pSVar16 = (SporeshroomSubsystem *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        SporeshroomSubsystem::RecordSporeshroomLevel(pSVar16,local_60);
        ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig
                  ((ChagreDoubleFesivalConfig *)&local_138);
        ActiveItem::~ActiveItem(aAStack_280);
        goto LAB_04ba0610;
      }
      ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138)
      ;
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
LAB_04ba0610:
  local_308 = CONCAT44(local_308._4_4_,0x29c6);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      lVar5 = local_68;
      if (cVar2 != '\0') {
        pBVar15 = (BaseBufferResource *)ServerTime::Instance();
        lVar18 = Sexy::BaseBufferResource::GetPtr(pBVar15);
        cVar2 = LawnApp::isSameDay(gLawnApp,lVar5,lVar18);
        if (cVar2 == '\0') {
          pCVar20 = (ChristmasChargeManager *)
                    Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getChristmasValuablePlantID(pCVar20);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID not same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
          if (0 < (int)uVar4) {
            pNVar21 = (NetworkMgr *)NetworkMgr::Instance();
            plVar22 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar21);
            (**(code **)(*plVar22 + 600))(plVar22,0x29c6,uVar4);
          }
        }
        else {
          Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getCurPlantIDFromServer();
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID is same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
        }
        pWVar17 = (WorldMap_LuaButtonsImpl *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        WorldMap_LuaButtonsImpl::RegisterHandler(pWVar17,local_70);
        pSVar16 = (SporeshroomSubsystem *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        SporeshroomSubsystem::RecordSporeshroomLevel(pSVar16,local_60);
        ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig
                  ((ChagreDoubleFesivalConfig *)&local_138);
        ActiveItem::~ActiveItem(aAStack_280);
        goto LAB_04ba0648;
      }
      ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138)
      ;
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
LAB_04ba0648:
  local_308 = CONCAT44(local_308._4_4_,0x29db);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        pBVar15 = (BaseBufferResource *)ServerTime::Instance();
        lVar5 = Sexy::BaseBufferResource::GetPtr(pBVar15);
        cVar2 = LawnApp::isSameDay(gLawnApp,local_68,lVar5);
        if (cVar2 == '\0') {
          pCVar20 = (ChristmasChargeManager *)
                    Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getChristmasValuablePlantID(pCVar20);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID not same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
          if (0 < (int)uVar4) {
            pNVar21 = (NetworkMgr *)NetworkMgr::Instance();
            plVar22 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar21);
            (**(code **)(*plVar22 + 600))(plVar22,0x29db,uVar4);
          }
        }
        else {
          Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          uVar4 = ChristmasChargeManager::getCurPlantIDFromServer();
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() plantID is same Day= %d",
                     (ulong)uVar4);
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,uVar4);
        }
        pWVar17 = (WorldMap_LuaButtonsImpl *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        WorldMap_LuaButtonsImpl::RegisterHandler(pWVar17,local_70);
        pSVar16 = (SporeshroomSubsystem *)
                  Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
        SporeshroomSubsystem::RecordSporeshroomLevel(pSVar16,local_60);
        ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig
                  ((ChagreDoubleFesivalConfig *)&local_138);
        ActiveItem::~ActiveItem(aAStack_280);
        goto LAB_04ba0680;
      }
      ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig((ChagreDoubleFesivalConfig *)&local_138)
      ;
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
LAB_04ba0680:
  local_308 = CONCAT44(local_308._4_4_,0x29e3);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      NewYearChargeConfig::NewYearChargeConfig((NewYearChargeConfig *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
        cVar2 = NewYearChargeManager::IsDuringAcivity();
        if (cVar2 != '\0') {
          Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
          iVar3 = NewYearChargeManager::getCurPlantIDFromServer();
          pDVar23 = (DFileHandler *)Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
          DFileHandler::setSercetType(pDVar23,iVar3);
        }
        pSVar16 = (SporeshroomSubsystem *)
                  Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
        SporeshroomSubsystem::RecordSporeshroomLevel(pSVar16,local_128);
        pWVar17 = (WorldMap_LuaButtonsImpl *)
                  Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
        WorldMap_LuaButtonsImpl::RegisterHandler(pWVar17,local_12c);
        this_07 = (NewYearChargeManager *)
                  Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
        NewYearChargeManager::CheckAlter(this_07);
        NewYearChargeConfig::~NewYearChargeConfig((NewYearChargeConfig *)&local_138);
        ActiveItem::~ActiveItem(aAStack_280);
        goto LAB_04ba06b8;
      }
      NewYearChargeConfig::~NewYearChargeConfig((NewYearChargeConfig *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
LAB_04ba06b8:
  local_308 = CONCAT44(local_308._4_4_,0x29e6);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if (cVar2 != '\0') {
      SpringDailyLoginConfig::SpringDailyLoginConfig((SpringDailyLoginConfig *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
        if (pPVar12 != (PlayerInfo *)0x0) {
          this_05 = (SpringChargeManager *)
                    Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
          SpringChargeManager::loadData(this_05,(SpringDailyLoginConfig *)&local_138);
          uVar13 = FUN_04b9bedc(local_110,CONCAT44(uStack_104,local_108));
          Sexy::OutputDebugStrF((wchar_t *)"Activity_SpringDailyReward_2019 %d\n",uVar13);
          local_308 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)&local_110);
          local_200 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_110);
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_308,(__normal_iterator *)&local_200)
                , bVar1) {
            puVar14 = (uint *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_308);
            uVar4 = *puVar14;
            Sexy::OutputDebugStrF
                      ((wchar_t *)"Activity_SpringDailyReward_2019 it =%d\n",(ulong)uVar4);
            PlayerInfo::addExperiencePlants(pPVar12,uVar4);
            eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                      ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_308);
          }
        }
      }
      SpringDailyLoginConfig::~SpringDailyLoginConfig((SpringDailyLoginConfig *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x29ba);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    if (local_268 != '\0') {
      LanternRiddlesInfo::LanternRiddlesInfo((LanternRiddlesInfo *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        lVar5 = ProfileMgr::GetCurrentProfile(pPVar10);
        FUN_04b9bec4(lVar5 + 0xf60,local_130);
        FUN_04b9becc(lVar5 + 0xf68,local_128);
      }
      LanternRiddlesInfo::~LanternRiddlesInfo((LanternRiddlesInfo *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x29c1);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      FirstRechargeExtraNetworkData::FirstRechargeExtraNetworkData
                ((FirstRechargeExtraNetworkData *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        cVar2 = FirstRechargeExtraNetworkData::IsNoRecharge
                          ((FirstRechargeExtraNetworkData *)&local_138);
        if (cVar2 == '\0') {
          bVar1 = (bool)FirstRechargeExtraNetworkData::IsPopUp
                                  ((FirstRechargeExtraNetworkData *)&local_138);
          pFVar24 = (FirstRechargeExtraManager *)
                    Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
          FirstRechargeExtraManager::LoadData
                    (pFVar24,(FirstRechargeExtraNetworkData *)&local_138,bVar1);
        }
        else {
          pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          psVar11 = (string *)ProfileMgr::GetCurrentProfile(pPVar10);
          std::string::string((string *)&local_308,"firstrecharge");
          PlayerInfo::GetEventRecordByName(psVar11);
          std::string::~string((string *)&local_308);
          nop();
          cVar2 = TimeUtil::IsToday(local_200);
          if (cVar2 == '\0') {
            pFVar24 = (FirstRechargeExtraManager *)
                      Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
            FirstRechargeExtraManager::LoadData
                      (pFVar24,(FirstRechargeExtraNetworkData *)&local_138,true);
          }
          GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                    ((GridItemCardGameZombieActionData *)&local_200);
        }
      }
      FirstRechargeExtraNetworkData::~FirstRechargeExtraNetworkData
                ((FirstRechargeExtraNetworkData *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a39);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    if (local_268 != '\0') {
      this_06 = (MysteryCrystalMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
      MysteryCrystalMgr::Init(this_06,false);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a61);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    this_04 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstance()
    ;
    UnchartedModeNetworkMgr::syncMainEntryInfo(this_04);
    Sexy::OutputDebugStrF((wchar_t *)"ActivityManager Activity_UnchartedMode suncMainEntryInfo");
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a65);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    this_03 = (CardGameNetworkMgr *)Sexy::LazySingleton<CardGameNetworkMgr>::GetInstance();
    CardGameNetworkMgr::syncMainEntryInfo(this_03);
  }
  local_138 = CONCAT44(local_138._4_4_,0x2a6b);
  std::set<int,std::less<int>,std::allocator<int>>::find
            ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_138);
  std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::end
            ((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)param_2);
  local_308 = CONCAT44(local_308._4_4_,0x2a83);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      FutureGiftBoxData::FutureGiftBoxData((FutureGiftBoxData *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        this_09 = (UIFutureGiftBoxMgr *)Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstance();
        UIFutureGiftBoxMgr::LoadData(this_09,(FutureGiftBoxData *)&local_138);
      }
      FutureGiftBoxData::~FutureGiftBoxData((FutureGiftBoxData *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a84);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      PennyGiftBoxData::PennyGiftBoxData((PennyGiftBoxData *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        this_08 = (PennyGiftBoxManager *)Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
        PennyGiftBoxManager::LoadData(this_08);
      }
      PennyGiftBoxData::~PennyGiftBoxData((PennyGiftBoxData *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x2a8a);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    GetActiveItem(iVar3);
    cVar2 = FUN_04b9be44(local_278);
    if ((cVar2 != '\0') && (local_268 != '\0')) {
      AccumulatedLoginData::AccumulatedLoginData((AccumulatedLoginData *)&local_138);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
      if (cVar2 != '\0') {
        this_10 = (AccumulatedLoginManager *)
                  Sexy::LazySingleton<AccumulatedLoginManager>::GetInstancePtr();
        AccumulatedLoginManager::LoadData(this_10);
      }
      AccumulatedLoginData::~AccumulatedLoginData((AccumulatedLoginData *)&local_138);
    }
    ActiveItem::~ActiveItem(aAStack_280);
  }
  local_308 = CONCAT44(local_308._4_4_,0x29c3);
  local_200 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_308);
  local_138 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_200,(rbtree_iterator *)&local_138);
  if (bVar1) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"ChristmasChargeManager::GetInstancePtr() Activity_Turn_charge ");
    uVar7 = std::set<int,std::less<int>,std::allocator<int>>::size
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    if (2 < uVar7) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      GetActiveItem(iVar3);
      cVar2 = FUN_04b9be44(local_278);
      if ((cVar2 != '\0') && (local_268 != '\0')) {
        ActivityTurnChangeConfig::ActivityTurnChangeConfig((ActivityTurnChangeConfig *)&local_138);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)&local_138);
        if (cVar2 != '\0') {
          pWVar6 = (WorldMapActivityBtnTurnChangeManager *)
                   Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
          WorldMapActivityBtnTurnChangeManager::loadData
                    (pWVar6,(ActivityTurnChangeConfig *)&local_138);
          ActivityTurnChangeConfig::~ActivityTurnChangeConfig
                    ((ActivityTurnChangeConfig *)&local_138);
          ActiveItem::~ActiveItem(aAStack_280);
          goto LAB_04ba0904;
        }
        ActivityTurnChangeConfig::~ActivityTurnChangeConfig((ActivityTurnChangeConfig *)&local_138);
      }
      ActiveItem::~ActiveItem(aAStack_280);
    }
  }
LAB_04ba0904:
  lVar5 = Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  cVar2 = FUN_04b9bed4(*(undefined1 *)(lVar5 + 0x61));
  if (cVar2 == '\0') {
    pWVar6 = (WorldMapActivityBtnTurnChangeManager *)
             Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
    WorldMapActivityBtnTurnChangeManager::setIsInit(pWVar6,true);
  }
LAB_04ba0488:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

