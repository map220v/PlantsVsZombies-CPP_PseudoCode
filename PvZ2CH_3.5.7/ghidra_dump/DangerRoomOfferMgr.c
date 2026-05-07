// Class: DangerRoomOfferMgr


/* DangerRoomOfferMgr::~DangerRoomOfferMgr() */

void __thiscall DangerRoomOfferMgr::~DangerRoomOfferMgr(DangerRoomOfferMgr *this)

{
  *(undefined ***)this = &PTR__DangerRoomOfferMgr_06984fc0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<DangerRoomOfferMgr>::~LazySingleton((LazySingleton<DangerRoomOfferMgr> *)this)
  ;
  return;
}


/* DangerRoomOfferMgr::~DangerRoomOfferMgr() */

void __thiscall DangerRoomOfferMgr::~DangerRoomOfferMgr(DangerRoomOfferMgr *this)

{
  ~DangerRoomOfferMgr(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomOfferMgr::IsUIActive() */

undefined1 DangerRoomOfferMgr::IsUIActive(void)

{
  return DangerRoomSpecialOfferUI::s_isActive;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomOfferMgr::GetTargetBundlePrice(int) */

void DangerRoomOfferMgr::GetTargetBundlePrice(int param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ulong uVar5;
  string *psVar6;
  int iVar7;
  ulong uVar8;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar6 = asStack_30;
  Sexy::StrFormat("dangerroomspecialoffer_%d",asStack_28);
  std::string::string(asStack_18,"iOS PvZ2 Gem Store");
  std::string::string(asStack_10,"GemsAddition");
  Magento::GetStoreCategory((Magento *)asStack_18,asStack_10,psVar6);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  uVar5 = 0;
  if (bVar1) {
    do {
      uVar8 = uVar5;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar5 = FUN_04c321f4(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
      if (uVar5 <= uVar8) goto LAB_04c331c0;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04c32200(*(undefined8 *)(lVar4 + 0x60),uVar8);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      cVar2 = std::operator==((string *)(lVar4 + 0x80),asStack_28);
      uVar5 = uVar8 + 1;
    } while (cVar2 == '\0');
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04c32200(*(undefined8 *)(lVar4 + 0x60),uVar8);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    lVar4 = FUN_04c323d4(*(undefined8 *)(lVar4 + 0xb0));
    iVar7 = (int)*(float *)(lVar4 + 8);
  }
  else {
LAB_04c331c0:
    iVar7 = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomOfferMgr::GetTargetBundleSku(int) */

void DangerRoomOfferMgr::GetTargetBundleSku(int param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ulong uVar5;
  string *psVar6;
  string *in_x8;
  ulong uVar7;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("dangerroomspecialoffer_%d",asStack_28);
  psVar6 = asStack_30;
  std::string::string(asStack_18,"iOS PvZ2 Gem Store");
  std::string::string(asStack_10,"GemsAddition");
  Magento::GetStoreCategory((Magento *)asStack_18,asStack_10,psVar6);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  uVar5 = 0;
  if (bVar1) {
    do {
      uVar7 = uVar5;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar5 = FUN_04c321f4(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
      if (uVar5 <= uVar7) goto LAB_04c33350;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04c32200(*(undefined8 *)(lVar4 + 0x60),uVar7);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
      cVar2 = std::operator==((string *)(lVar4 + 0x80),asStack_28);
      uVar5 = uVar7 + 1;
    } while (cVar2 == '\0');
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04c32200(*(undefined8 *)(lVar4 + 0x60),uVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    FUN_05475d88();
  }
  else {
LAB_04c33350:
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DangerRoomOfferMgr::DangerRoomOfferMgr() */

void __thiscall DangerRoomOfferMgr::DangerRoomOfferMgr(DangerRoomOfferMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<DangerRoomOfferMgr>::LazySingleton((LazySingleton<DangerRoomOfferMgr> *)this);
  *(undefined ***)this = &PTR__DangerRoomOfferMgr_06984fc0;
  DangerRoomSpecialOfferInfo::DangerRoomSpecialOfferInfo((DangerRoomSpecialOfferInfo *)(this + 8));
  this[0x28] = (DangerRoomOfferMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyBundlePurchased);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&,Sexy::CBMemberTranslatorX<DangerRoomOfferMgr,void(DangerRoomOfferMgr::*)(int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyBundlePurchased,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomOfferMgr::BuyOffer(std::string const&, DangerRoomSpecialOfferInfo const&) */

void __thiscall
DangerRoomOfferMgr::BuyOffer
          (DangerRoomOfferMgr *this,string *param_1,DangerRoomSpecialOfferInfo *param_2)

{
  undefined8 uVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  undefined4 local_38;
  undefined4 local_34;
  PurchasedBundleInfo aPStack_30 [16];
  vector<bundleItemInfo,std::allocator<bundleItemInfo>> avStack_20 [24];
  long local_8;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x10);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 0x18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::RequestPayment(this_01,param_1,0);
  PurchasedBundleInfo::PurchasedBundleInfo(aPStack_30);
  std::operator+(param_1,"_new");
  FUN_05474278(aPStack_30,(string *)&local_38);
  std::string::~string((string *)&local_38);
  local_38 = *(undefined4 *)(this + 0x1c);
  local_34 = *(undefined4 *)(this + 8);
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::push_back
            (avStack_20,(bundleItemInfo *)&local_38);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  PlayerInfo::SetBundleInPurchase(this_03,aPStack_30);
  PurchasedBundleInfo::~PurchasedBundleInfo(aPStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomOfferMgr::onNotifyBundlePurchased(int, std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&) */

void __thiscall
DangerRoomOfferMgr::onNotifyBundlePurchased(DangerRoomOfferMgr *this,int param_1,vector *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  ProfileMgr *this_00;
  PlayerInfo *pPVar5;
  char *pcVar6;
  TGALogMgr *pTVar7;
  size_t __n;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  GAME_ITEM_INFO aGStack_38 [8];
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b8);
    local_c8 = FUN_04c3343c(*(undefined8 *)param_2);
    local_c0 = FUN_04c3348c(*(undefined8 *)(param_2 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
      ProfileChangeItemAmount(*piVar4,piVar4[1],false);
      local_a0 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            amStack_68,(int *)aGStack_38);
      local_88 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_68);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_a0,(rbtree_iterator *)&local_88);
      if (bVar1) {
        lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_a0);
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + local_30;
      }
      else {
        piVar4 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)amStack_68,(int *)aGStack_38);
        *piVar4 = local_30;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_b8,(int *)aGStack_38);
      }
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
    }
    UIRedPacketResult::create((map *)amStack_68,(vector *)avStack_b8,true);
    LawnApp::KillDangerRoomSpecialOfferUI(gLawnApp);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    PlayerInfo::GetDangerRoomSpecialOfferSaveData();
    __n = 1;
    local_a0 = CONCAT71(local_a0._1_7_,1);
    local_e0 = local_90;
    local_f0 = local_a0;
    uStack_e8 = uStack_98;
    PlayerInfo::SetDangerRoomSpecialOfferSaveData(pPVar5,&local_f0);
    iVar2 = GetTargetBundlePrice((int)this);
    TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_88);
    std::string::append((string *)&local_88,"3",__n);
    DString::DString((DString *)aGStack_38,*(int *)(this + 0x1c));
    pcVar6 = (char *)DString::c_str((DString *)aGStack_38);
    std::string::append(asStack_80,pcVar6,__n);
    DString::~DString((DString *)aGStack_38);
    DString::DString((DString *)aGStack_38,*(int *)(this + 8));
    pcVar6 = (char *)DString::c_str((DString *)aGStack_38);
    std::string::append(asStack_78,pcVar6,__n);
    DString::~DString((DString *)aGStack_38);
    DString::DString((DString *)aGStack_38,iVar2);
    pcVar6 = (char *)DString::c_str((DString *)aGStack_38);
    std::string::append(asStack_70,pcVar6,__n);
    DString::~DString((DString *)aGStack_38);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    InvitationPlayerInfo::InvitationPlayerInfo
              ((InvitationPlayerInfo *)aGStack_38,(InvitationPlayerInfo *)&local_88);
    TGALogMgr::LogDangerRoomSpecialOffer(pTVar7,aGStack_38);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aGStack_38);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)&local_88);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_b8);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomOfferMgr::requestBuyOffer(std::string const&, bool) */

void __thiscall
DangerRoomOfferMgr::requestBuyOffer(DangerRoomOfferMgr *this,string *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  char *pcVar4;
  DNetwork *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  int *piVar5;
  int iVar6;
  DangerRoomOfferMgr *local_d90;
  undefined8 uStack_d88;
  string *local_d80;
  undefined8 uStack_d78;
  string asStack_d68 [8];
  string asStack_d60 [8];
  function<bool(Sexy::Touch_const&)> afStack_d58 [32];
  DangerRoomOfferMgr *local_d38;
  int local_d30;
  int local_d2c;
  string *local_d28;
  undefined1 local_d20;
  undefined7 uStack_d1f;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [16];
  undefined8 local_cd8;
  string asStack_5e0 [1496];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+(param_1,"_new");
  if (param_2) {
    PurchasedBundleInfo::PurchasedBundleInfo((PurchasedBundleInfo *)aDStack_ce8);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    cVar1 = PlayerInfo::GetBundleInPurchase
                      (this_02,asStack_d68,(PurchasedBundleInfo *)aDStack_ce8,0);
    if (cVar1 == '\0') {
      iVar2 = 0;
      iVar6 = 0;
    }
    else {
      piVar5 = (int *)FUN_04c323d8(local_cd8);
      iVar2 = *piVar5;
      iVar6 = piVar5[1];
    }
    PurchasedBundleInfo::~PurchasedBundleInfo((PurchasedBundleInfo *)aDStack_ce8);
  }
  else {
    iVar2 = *(int *)(this + 0x1c);
    iVar6 = *(int *)(this + 8);
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string((string *)&local_d38,"oi");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,(string *)&local_d38);
  DString::DString(aDStack_ce8,iVar2);
  pcVar4 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)psVar3);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&local_d38);
  nop();
  std::string::string((string *)&local_d38,"p");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,(string *)&local_d38);
  DString::DString(aDStack_ce8,iVar6);
  pcVar4 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar3,pcVar4,(size_t)psVar3);
  DString::~DString(aDStack_ce8);
  std::string::~string((string *)&local_d38);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  uStack_d78 = CONCAT71(uStack_d1f,param_2);
  uStack_d88 = CONCAT44(iVar6,iVar2);
  local_d90 = this;
  local_d80 = asStack_d68;
  local_d38 = this;
  local_d30 = iVar2;
  local_d2c = iVar6;
  local_d28 = asStack_d68;
  local_d20 = param_2;
  FUN_04c325ec(afStack_d58,&local_d90);
  std::string::string(asStack_d60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5e0,(map *)amStack_d18,30.0,(function *)afStack_d58,true,true,
             asStack_d60,0);
  std::string::~string(asStack_d60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d58);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  std::string::~string(asStack_d68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

