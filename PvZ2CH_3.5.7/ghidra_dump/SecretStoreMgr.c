// Class: SecretStoreMgr


/* SecretStoreMgr::RequestNetwork() */

void __thiscall SecretStoreMgr::RequestNetwork(SecretStoreMgr *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a32,true,0);
  this[0x3c] = (SecretStoreMgr)0x1;
  return;
}


/* SecretStoreMgr::onResultClosed() */

void __thiscall SecretStoreMgr::onResultClosed(SecretStoreMgr *this)

{
  if (this[0x3d] != (SecretStoreMgr)0x0) {
    RequestNetwork(this);
    this[0x3d] = (SecretStoreMgr)0x0;
  }
  return;
}


/* SecretStoreMgr::Close() */

void SecretStoreMgr::Close(void)

{
  if (UISingletonDialog<UISecretStore>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UISecretStore>::m_pInstance + 0x318))();
    UISingletonDialog<UISecretStore>::m_pInstance = (long *)0x0;
  }
  return;
}


/* SecretStoreMgr::IsActive() */

bool SecretStoreMgr::IsActive(void)

{
  long lVar1;
  
  lVar1 = UISingletonDialog<UISecretStore>::GetSingletonPtr();
  return lVar1 != 0;
}


/* SecretStoreMgr::GetNumBundles() */

void __thiscall SecretStoreMgr::GetNumBundles(SecretStoreMgr *this)

{
  std::
  map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
  ::size((map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
          *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::GetTargetPrice(std::string const&) */

void __thiscall SecretStoreMgr::GetTargetPrice(SecretStoreMgr *this,string *param_1)

{
  char cVar1;
  MagentoProductProps *this_00;
  int iVar2;
  float fVar3;
  RtMixedPtrBase aRStack_10 [8];
  string *local_8;
  
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  Magento::GetProduct((Magento *)param_1,___stack_chk_guard);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    this_00 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    fVar3 = (float)MagentoProductProps::GetPriceInUSD(this_00,false);
    iVar2 = (int)fVar3;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::GetBundleProductPtrByPrice(float, std::string const&) */

void SecretStoreMgr::GetBundleProductPtrByPrice(float param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  RtWeakPtr *pRVar6;
  string *in_x1;
  string *psVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  ulong uVar8;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  psVar7 = asStack_28;
  std::string::string(asStack_18,"iOS PvZ2 Gem Store");
  std::string::string(asStack_10,"GemsAddition");
  Magento::GetStoreCategory((Magento *)asStack_18,asStack_10,psVar7);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar1) {
    while (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar2 != '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar4 = FUN_03da0bf0(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
      if (uVar4 <= uVar8) break;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03da0bfc(*(undefined8 *)(lVar3 + 0x60),uVar8);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      lVar3 = FUN_03da0e18(*(undefined8 *)(lVar3 + 0xb0));
      if (*(float *)(lVar3 + 8) == param_1) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03da0bfc(*(undefined8 *)(lVar3 + 0x60),uVar8);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
        cVar2 = std::operator==((string *)(lVar3 + 0x78),in_x1);
        if (cVar2 != '\0') {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          pRVar6 = (RtWeakPtr *)FUN_03da0bfc(*(undefined8 *)(lVar3 + 0x60),uVar8);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)in_x8,pRVar6);
          break;
        }
      }
      uVar8 = uVar8 + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::GetTargetSkuByPrice(int) */

void SecretStoreMgr::GetTargetSkuByPrice(int param_1)

{
  bool bVar1;
  int in_w1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetBundleProductPtrByPrice((float)in_w1,(string *)(ulong)(uint)param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::SecretStoreMgr() */

void __thiscall SecretStoreMgr::SecretStoreMgr(SecretStoreMgr *this)

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
  Sexy::LazySingleton<SecretStoreMgr>::LazySingleton((LazySingleton<SecretStoreMgr> *)this);
  *(undefined ***)this = &PTR__SecretStoreMgr_06776720;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::
  map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
  ::clear((map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
           *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (SecretStoreMgr)0x0;
  this[0x3d] = (SecretStoreMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<SecretStoreMgr,void(SecretStoreMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onResultClosed);
  Sexy::Delegate0::Delegate0<SecretStoreMgr,void(SecretStoreMgr::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ResultClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecretStoreMgr::~SecretStoreMgr() */

void __thiscall SecretStoreMgr::~SecretStoreMgr(SecretStoreMgr *this)

{
  *(undefined ***)this = &PTR__SecretStoreMgr_06776720;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
  ::~map((map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
          *)(this + 8));
  Sexy::LazySingleton<SecretStoreMgr>::~LazySingleton((LazySingleton<SecretStoreMgr> *)this);
  return;
}


/* SecretStoreMgr::~SecretStoreMgr() */

void __thiscall SecretStoreMgr::~SecretStoreMgr(SecretStoreMgr *this)

{
  ~SecretStoreMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::FindTargetBundle(int) */

void SecretStoreMgr::FindTargetBundle(int param_1)

{
  bool bVar1;
  long lVar2;
  SecretBundleDetail *in_x8;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SecretBundleDetail::SecretBundleDetail(in_x8);
  local_18 = std::
             map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
             ::find((map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
                     *)((ulong)(uint)param_1 + 8),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)((ulong)(uint)param_1 + 8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    SecretBundleDetail::operator=(in_x8,(SecretBundleDetail *)(lVar2 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::RequestReward() */

void __thiscall SecretStoreMgr::RequestReward(SecretStoreMgr *this)

{
  undefined8 uVar1;
  string *psVar2;
  DNetwork *this_00;
  string *psVar3;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1720];
  string asStack_630 [1576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a32;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  psVar3 = asStack_d40;
  std::string::string(asStack_ce8,"t");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  std::string::append(psVar2,"1",(size_t)psVar3);
  std::string::~string(asStack_ce8);
  nop();
  psVar3 = asStack_d40;
  std::string::string(asStack_ce8,"i");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  std::string::append(psVar2,"0",(size_t)psVar3);
  std::string::~string(asStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03da118c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_630,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* SecretStoreMgr::BuyOffer(int, int) */

void SecretStoreMgr::BuyOffer(int param_1,int param_2)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  PurchaseBroker *this_00;
  TGALogMgr *pTVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    RequestReward((SecretStoreMgr *)(ulong)(uint)param_1);
  }
  else {
    GetTargetSkuByPrice(param_1);
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this);
    PurchaseBroker::RequestPayment(this_00,asStack_10,0);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::clearSegments(pTVar1,0x2753);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogSegments(pTVar1,0x2753,1,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::SyncActivityData(NetworkSecretStore const&) */

void __thiscall SecretStoreMgr::SyncActivityData(SecretStoreMgr *this,NetworkSecretStore *param_1)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_a4;
  SecretBundleDetail aSStack_a0 [24];
  vector<SecretStoreContent,std::allocator<SecretStoreContent>> avStack_88 [24];
  undefined1 local_70;
  int local_6c;
  int local_68;
  undefined8 local_64;
  int local_58 [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = (ulong)local_a4;
    uVar1 = FUN_03da0b84(uVar5,*(undefined8 *)(param_1 + 0x10));
    if (uVar1 <= uVar4) break;
    lVar2 = FUN_03da0bb4(uVar5,uVar4);
    uVar5 = SecretStoreUtils::GetAwardDisplayInfoByActId(*(int *)(lVar2 + 8));
    if ((int)uVar5 != 0) {
      uVar1 = 0;
      SecretBundleDetail::SecretBundleDetail(aSStack_a0);
      while( true ) {
        lVar2 = FUN_03da0bb4(*(undefined8 *)(param_1 + 8),(long)local_a4);
        uVar6 = *(undefined8 *)(lVar2 + 0x10);
        uVar4 = FUN_03da0bc0(uVar6,*(undefined8 *)(lVar2 + 0x18));
        if (uVar4 <= uVar1) break;
        piVar3 = (int *)FUN_03da0be8(uVar6,uVar1);
        SecretStoreUtils::GetAwardInfoByActId
                  ((SecretStoreUtils *)(ulong)(uint)piVar3[1],*piVar3,(int)piVar3);
        if (local_58[0] != -1) {
          std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::push_back
                    ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)aSStack_a0,
                     (SecretAwardInfo *)local_58);
        }
        uVar1 = uVar1 + 1;
        PakRecord::~PakRecord((PakRecord *)local_58);
      }
      std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::operator=
                (avStack_88,(vector *)(lVar2 + 0x10));
      piVar3 = (int *)FUN_03da0bb4(*(undefined8 *)(param_1 + 8),(long)local_a4);
      local_68 = *piVar3;
      local_6c = piVar3[1];
      local_70 = local_68 < 1;
      local_64 = uVar5;
      std::make_pair<int&,SecretBundleDetail&>(&local_a4,aSStack_a0);
      std::
      map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
      ::insert<std::pair<int,SecretBundleDetail>,void>
                ((map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
                  *)(this + 8),(pair *)local_58);
      std::pair<int_const,SecretBundleDetail>::~pair((pair<int_const,SecretBundleDetail> *)local_58)
      ;
      SecretBundleDetail::~SecretBundleDetail(aSStack_a0);
    }
    local_a4 = local_a4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::LoadTest() */

void __thiscall SecretStoreMgr::LoadTest(SecretStoreMgr *this)

{
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  NetworkSecretStore aNStack_118 [8];
  vector<SecretStoreBundle,std::allocator<SecretStoreBundle>> avStack_110 [24];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  vector<SecretStoreContent,std::allocator<SecretStoreContent>> avStack_e8 [24];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  vector<SecretStoreContent,std::allocator<SecretStoreContent>> avStack_c0 [24];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  vector<SecretStoreContent,std::allocator<SecretStoreContent>> avStack_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  vector<SecretStoreContent,std::allocator<SecretStoreContent>> avStack_70 [24];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  vector<SecretStoreContent,std::allocator<SecretStoreContent>> avStack_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vector<SecretStoreContent,std::allocator<SecretStoreContent>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
  ::clear((map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
           *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  NetworkSecretStore::NetworkSecretStore(aNStack_118);
  SecretStoreBundle::SecretStoreBundle((SecretStoreBundle *)&local_f8);
  local_f8 = 3;
  local_f4 = 10;
  local_f0 = 0x3f8;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_148);
  local_148 = 5;
  local_144 = 0x458;
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::push_back
            (avStack_e8,(SecretStoreContent *)&local_148);
  SecretStoreBundle::SecretStoreBundle((SecretStoreBundle *)&local_d0);
  local_d0 = 5;
  local_cc = 0x14;
  local_c8 = 0x3f9;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_140);
  local_140 = 5;
  local_13c = 0x45b;
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::push_back
            (avStack_c0,(SecretStoreContent *)&local_140);
  SecretStoreBundle::SecretStoreBundle((SecretStoreBundle *)&local_a8);
  local_a8 = 1;
  local_a4 = 0x1e;
  local_a0 = 0x3fa;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_138);
  local_134 = 0x45d;
  local_138 = 8;
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::push_back
            (avStack_98,(SecretStoreContent *)&local_138);
  SecretStoreBundle::SecretStoreBundle((SecretStoreBundle *)&local_80);
  local_80 = 2;
  local_7c = 0x28;
  local_78 = 0x3fb;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_130);
  local_130 = 1;
  local_12c = 0x457;
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::push_back
            (avStack_70,(SecretStoreContent *)&local_130);
  SecretStoreBundle::SecretStoreBundle((SecretStoreBundle *)&local_58);
  local_58 = 3;
  local_54 = 0x32;
  local_50 = 0x3fc;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_128);
  local_128 = 3;
  local_124 = 0x45e;
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::push_back
            (avStack_48,(SecretStoreContent *)&local_128);
  SecretStoreBundle::SecretStoreBundle((SecretStoreBundle *)&local_30);
  local_30 = 2;
  local_2c = 0x3c;
  local_28 = 0x3fd;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_120);
  local_11c = 0x45a;
  local_120 = 6;
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::push_back
            (avStack_20,(SecretStoreContent *)&local_120);
  std::vector<SecretStoreBundle,std::allocator<SecretStoreBundle>>::push_back
            (avStack_110,(SecretStoreBundle *)&local_f8);
  std::vector<SecretStoreBundle,std::allocator<SecretStoreBundle>>::push_back
            (avStack_110,(SecretStoreBundle *)&local_d0);
  std::vector<SecretStoreBundle,std::allocator<SecretStoreBundle>>::push_back
            (avStack_110,(SecretStoreBundle *)&local_a8);
  std::vector<SecretStoreBundle,std::allocator<SecretStoreBundle>>::push_back
            (avStack_110,(SecretStoreBundle *)&local_80);
  std::vector<SecretStoreBundle,std::allocator<SecretStoreBundle>>::push_back
            (avStack_110,(SecretStoreBundle *)&local_58);
  std::vector<SecretStoreBundle,std::allocator<SecretStoreBundle>>::push_back
            (avStack_110,(SecretStoreBundle *)&local_30);
  SyncActivityData(this,aNStack_118);
  SecretStoreBundle::~SecretStoreBundle((SecretStoreBundle *)&local_30);
  SecretStoreBundle::~SecretStoreBundle((SecretStoreBundle *)&local_58);
  SecretStoreBundle::~SecretStoreBundle((SecretStoreBundle *)&local_80);
  SecretStoreBundle::~SecretStoreBundle((SecretStoreBundle *)&local_a8);
  SecretStoreBundle::~SecretStoreBundle((SecretStoreBundle *)&local_d0);
  SecretStoreBundle::~SecretStoreBundle((SecretStoreBundle *)&local_f8);
  NetworkSecretStore::~NetworkSecretStore(aNStack_118);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* SecretStoreMgr::InitTest() */

void __thiscall SecretStoreMgr::InitTest(SecretStoreMgr *this)

{
  char cVar1;
  
  cVar1 = LoadTest(this);
  if (cVar1 == '\0') {
    return;
  }
  UISingletonDialog<UISecretStore>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::Load() */

void __thiscall SecretStoreMgr::Load(SecretStoreMgr *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  NetworkSecretStore aNStack_a8 [32];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
  ::clear((map<int,SecretBundleDetail,std::less<int>,std::allocator<std::pair<int_const,SecretBundleDetail>>>
           *)(this + 8));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03da0a00(local_80);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_70 != '\0')) {
    NetworkSecretStore::NetworkSecretStore(aNStack_a8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_a8);
    if (cVar2 != '\0') {
      SyncActivityData(this,aNStack_a8);
    }
    NetworkSecretStore::~NetworkSecretStore(aNStack_a8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* SecretStoreMgr::Init() */

void __thiscall SecretStoreMgr::Init(SecretStoreMgr *this)

{
  char cVar1;
  
  cVar1 = Load(this);
  if (cVar1 == '\0') {
    return;
  }
  UISingletonDialog<UISecretStore>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
SecretStoreMgr::onNotifyRefreshActivityList(SecretStoreMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x3c] != (SecretStoreMgr)0x0)) {
    local_1c = 0x2a32;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      Init(this);
      this[0x3c] = (SecretStoreMgr)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::GetTargetSku(int) */

void SecretStoreMgr::GetTargetSku(int param_1)

{
  char *pcVar1;
  int in_w1;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+((string *)&DAT_06ad9810,"0");
  DString::DString(aDStack_18,in_w1);
  pcVar1 = (char *)DString::c_str(aDStack_18);
  std::operator+(asStack_20,pcVar1);
  DString::~DString(aDStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::GetTargetPrice(int) */

void SecretStoreMgr::GetTargetPrice(int param_1)

{
  char cVar1;
  MagentoProductProps *this;
  string *extraout_x1;
  int iVar2;
  float fVar3;
  Magento aMStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  GetTargetSku(param_1);
  Magento::GetProduct(aMStack_18,extraout_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    this = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    fVar3 = (float)MagentoProductProps::GetPriceInUSD(this,false);
    iVar2 = (int)fVar3;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string((string *)aMStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::GetTargetShortDes(int) */

void __thiscall SecretStoreMgr::GetTargetShortDes(SecretStoreMgr *this,int param_1)

{
  char cVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  Magento aMStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  GetTargetSku((int)this);
  Magento::GetProduct(aMStack_30,extraout_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString(aSStack_20,extraout_x1_00);
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string((string *)aSStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::~string((string *)aMStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreMgr::NotifyBundlePurchased(std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&) */

void __thiscall SecretStoreMgr::NotifyBundlePurchased(SecretStoreMgr *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint *puVar6;
  TGALogMgr *pTVar7;
  long lVar8;
  int *piVar9;
  generic_iterator<EA::Text::BmpTextureInfo**,void> *__n;
  string *__n_00;
  string asStack_250 [8];
  string asStack_248 [8];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_220 [24];
  TGASecretStore aTStack_208 [8];
  string asStack_200 [8];
  undefined1 auStack_1f8 [8];
  string asStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  string asStack_1e0 [8];
  undefined8 local_1d8 [6];
  undefined8 local_1a8;
  int local_1a0;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::GetSegForId(iVar2,0x2753);
  bVar1 = std::operator==((string *)&local_1a8,"true");
  std::string::~string((string *)&local_1a8);
  __n_00 = (string *)&local_1a8;
  std::string::string(asStack_250,"");
  nop();
  if (bVar1) {
    TGASecretStore::TGASecretStore(aTStack_208);
    std::string::append((string *)aTStack_208,"2",(size_t)__n_00);
    pcVar5 = "0";
  }
  else {
    iVar2 = Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __n_00 = (string *)0x1;
    TGALogMgr::GetSegForId(iVar2,0x2753);
    FUN_05474278(asStack_250,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    TGASecretStore::TGASecretStore(aTStack_208);
    std::string::append((string *)aTStack_208,"2",(size_t)__n_00);
    pcVar5 = "1";
  }
  std::string::append(asStack_200,pcVar5,(size_t)__n_00);
  iVar2 = 0;
  thunk_FUN_05475e00(auStack_1f8,asStack_250);
  iVar3 = GetTargetPrice(this,asStack_250);
  DString::DString((DString *)&local_1a8,iVar3);
  pcVar5 = (char *)DString::c_str((DString *)&local_1a8);
  std::string::append(asStack_1f0,pcVar5,(size_t)__n_00);
  DString::~DString((DString *)&local_1a8);
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  __n = (generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1d8;
  std::string::string((string *)&local_1a8,"");
  FUN_05462980(auStack_178,(string *)&local_1a8);
  std::string::~string((string *)&local_1a8);
  nop();
  local_1d8[0] = FUN_03da390c(*(undefined8 *)param_1);
  local_1a8 = FUN_03da395c(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)local_1d8,(__normal_iterator *)&local_1a8), bVar1)
  {
    puVar6 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1d8);
    FUN_0546065c(auStack_168,*puVar6);
    FUN_054603b8(auStack_168,&DAT_05593348);
    FUN_0546065c(auStack_168,puVar6[1]);
    FUN_054603b8(auStack_168,&DAT_05594620);
    __n = (generic_iterator<EA::Text::BmpTextureInfo**,void> *)(ulong)*puVar6;
    if (*puVar6 == 0xbc0) {
      iVar2 = iVar2 + puVar6[1];
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1d8);
  }
  FUN_05462824(asStack_248,auStack_178);
  thunk_FUN_05475e00(auStack_1e8,asStack_248);
  DString::DString((DString *)&local_1a8,iVar2);
  pcVar5 = (char *)DString::c_str((DString *)&local_1a8);
  std::string::append(asStack_1e0,pcVar5,(size_t)__n);
  DString::~DString((DString *)&local_1a8);
  pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore((TGASecretStore *)&local_1a8,aTStack_208);
  TGALogMgr::LogSecretStore(pTVar7,(string *)&local_1a8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)&local_1a8);
  pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::clearSegments(pTVar7,0x2753);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)local_1d8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_220);
  local_240 = FUN_03da390c(*(undefined8 *)param_1);
  local_238 = FUN_03da395c(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_240,(__normal_iterator *)&local_238), bVar1)
  {
    piVar9 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_240);
    ProfileChangeItemAmount(*piVar9,piVar9[1],false);
    local_230 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           local_1d8,(int *)&local_1a8);
    local_228 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)local_1d8);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_230,(rbtree_iterator *)&local_228);
    if (bVar1) {
      lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_230);
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + local_1a0;
    }
    else {
      piVar9 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)local_1d8,(int *)&local_1a8);
      *piVar9 = local_1a0;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_220,(int *)&local_1a8);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1a8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_240);
  }
  UIRedPacketResult::create((map *)local_1d8,(vector *)avStack_220,true);
  UISingletonDialog<UISecretStore>::CloseDialog();
  this[0x3d] = (SecretStoreMgr)0x1;
  MessageRouter::Post((_func_void *)gMessageRouter);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_220);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)local_1d8);
  std::string::~string(asStack_248);
  FUN_054617bc(auStack_178);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_208);
  std::string::~string(asStack_250);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

