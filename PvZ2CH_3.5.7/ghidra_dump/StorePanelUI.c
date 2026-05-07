// Class: StorePanelUI


/* StorePanelUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void StorePanelUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to StorePanelUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall StorePanelUI::ScrollTargetReached(StorePanelUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* StorePanelUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void StorePanelUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to StorePanelUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall StorePanelUI::ScrollTargetInterrupted(StorePanelUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* StorePanelUI::onCancel() */

void StorePanelUI::onCancel(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::onRechargeNow() */

void StorePanelUI::onRechargeNow(void)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  WorldMap *pWVar4;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  iVar3 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar3 < 0x43) || (iVar3 = LawnApp::GetPlatform(gLawnApp), 0xb2 < iVar3)) {
    iVar3 = LawnApp::GetPlatform(gLawnApp);
    if ((iVar3 < 0xf) || (iVar3 = LawnApp::GetPlatform(gLawnApp), 0x39 < iVar3)) {
      pLVar1 = gLawnApp;
      cVar2 = LawnApp::HasSpecialGemOffer(gLawnApp);
      if (cVar2 == '\0') {
        pWVar4 = (WorldMap *)LawnApp::GetWorldMap(pLVar1);
        __s = "Gems";
      }
      else {
        pWVar4 = (WorldMap *)LawnApp::GetWorldMap(pLVar1);
        __s = "GemsExtra";
      }
      goto LAB_03396358;
    }
  }
  pLVar1 = gLawnApp;
  cVar2 = LawnApp::HasSpecialGemOffer(gLawnApp);
  if (cVar2 == '\0') {
    pWVar4 = (WorldMap *)LawnApp::GetWorldMap(pLVar1);
    __s = "GemsFor360";
  }
  else {
    pWVar4 = (WorldMap *)LawnApp::GetWorldMap(pLVar1);
    __s = "GemsFor360Extra";
  }
LAB_03396358:
  std::string::string(asStack_10,__s);
  WorldMap::SwitchToStore(pWVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StorePanelUI::IsGemStore() */

bool __thiscall StorePanelUI::IsGemStore(StorePanelUI *this)

{
  string *psVar1;
  bool bVar2;
  
  psVar1 = (string *)(this + 0xe8);
  bVar2 = std::operator==(psVar1,"Gems");
  if (((!bVar2) && (bVar2 = std::operator==(psVar1,"GemsFor360"), !bVar2)) &&
     (bVar2 = std::operator==(psVar1,"GemsExtra"), !bVar2)) {
    bVar2 = std::operator==(psVar1,"GemsFor360Extra");
    return bVar2;
  }
  return true;
}


/* StorePanelUI::Update() */

void __thiscall StorePanelUI::Update(StorePanelUI *this)

{
  char cVar1;
  long lVar2;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  cVar1 = FUN_03395420(*(undefined1 *)(lVar2 + 0x38));
  if (cVar1 != '\0') {
    Sexy::LazySingleton<GachaMgr>::GetInstance();
    GachaMgr::PopDelayDialog();
    lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    FUN_03395424(lVar2 + 0x38,0);
    return;
  }
  lVar2 = Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  cVar1 = FUN_03395430(*(undefined1 *)(lVar2 + 8));
  if (cVar1 == '\0') {
    return;
  }
  Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  GachaMgr::PopDelayDialog();
  lVar2 = Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
  FUN_03395434(lVar2 + 8,0);
  return;
}


/* StorePanelUI::StorePanelUI() */

void __thiscall StorePanelUI::StorePanelUI(StorePanelUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06612be0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06612f18;
  *(undefined ***)(this + 0xe0) = &PTR__StorePanelUI_06612f60;
  Set8BytesTo0(this + 0xe8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::OnNotifySyncActivityData(bool) */

void __thiscall StorePanelUI::OnNotifySyncActivityData(StorePanelUI *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ProfileMgr *this_02;
  long lVar9;
  GachaMgr *pGVar10;
  SecretGachaMgr *this_03;
  float local_3c;
  Insets aIStack_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    bVar1 = std::operator==((string *)(this + 0xe8),"Gacha");
    if (bVar1) {
      iVar3 = FUN_033961ec(10);
      iVar4 = FUN_033961ec(0x50);
      iVar7 = *(int *)(gLawnApp + 0x724);
      iVar5 = FUN_033961ec(0x1e);
      iVar6 = FUN_033961ec(0x14);
      iVar6 = (((iVar7 - iVar4) - iVar5) - iVar6) / 3 - iVar6;
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
      this_01 = ::operator_new(0xd8);
      Sexy::Widget::Widget(this_01);
      iVar7 = FUN_033961ec(0);
      Sexy::Insets::Insets(aIStack_38,iVar7,iVar7,*(int *)(this + 0x50),*(int *)(this + 0x54));
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_38);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_38);
      Sexy::Insets::Insets((Insets *)&local_28,0,0,0,0);
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar9 = ProfileMgr::GetCurrentProfile(this_02);
      iVar7 = 0;
      do {
        iVar4 = FUN_033961ec(10);
        iVar5 = FUN_033961ec(400);
        iVar8 = FUN_033961ec(0x19);
        Sexy::Insets::Insets((Insets *)&local_18,iVar3 + iVar4,iVar8,iVar6,iVar5);
        iVar5 = FUN_03395418(*(undefined4 *)(lVar9 + 0x40));
        if ((iVar5 == 0x18) && (iVar7 == 2)) {
          local_28 = local_18;
          local_20 = uStack_10;
        }
        pGVar10 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
        iVar3 = iVar6 + iVar3 + iVar4;
        iVar4 = iVar7 + 1;
        GachaMgr::CreateTargetGachaItem(pGVar10,iVar7,(Insets *)&local_18,this_01);
        iVar7 = iVar4;
      } while (iVar4 != 4);
      iVar7 = FUN_033961ec(0xf);
      lVar9 = *(long *)this;
      *(int *)(this_01 + 0x50) = iVar3 + iVar7;
      (**(code **)(lVar9 + 0x60))(this,this_00);
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      if ((int)local_20 != 0) {
        iVar3 = *(int *)(this_00 + 0x50);
        Sexy::ScrollWidget::GetScrollMin();
        Sexy::Point::Point((Point *)&local_18,((int)local_28 + (int)local_20 / 2) - iVar3 / 2,
                           (int)local_3c);
        Sexy::ScrollWidget::ScrollToPoint((ScrollWidget *)this_00,(Point *)&local_18,false);
      }
      MessageRouter::Post<std::string_const&,char_const*>
                ((MessageRouter *)gMessageRouter,Message::JoinActivity,"New_Penny_Gacha");
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      bVar2 = std::operator==((string *)(this + 0xe8),"SecretGacha");
      if (bVar2) {
        Sexy::Insets::Insets
                  ((Insets *)&local_18,0,(uint)bVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
        this_03 = (SecretGachaMgr *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
        SecretGachaMgr::CreateMainUI(this_03,(TRect *)&local_18,(Widget *)this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StorePanelUI::~StorePanelUI() */

void __thiscall StorePanelUI::~StorePanelUI(StorePanelUI *this)

{
  GachaMgr *this_00;
  
  *(undefined ***)this = &PTR_GetClass_06612be0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06612f18;
  *(undefined ***)(this + 0xe0) = &PTR__StorePanelUI_06612f60;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  GachaMgr::RemoveAllDisplayers(this_00);
  std::vector<PlantBagItemData,std::allocator<PlantBagItemData>>::~vector
            ((vector<PlantBagItemData,std::allocator<PlantBagItemData>> *)(this + 0x118));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::~vector
            ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
             (this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to StorePanelUI::~StorePanelUI() */

void __thiscall StorePanelUI::~StorePanelUI(StorePanelUI *this)

{
  ~StorePanelUI(this + -0xe0);
  return;
}


/* StorePanelUI::~StorePanelUI() */

void __thiscall StorePanelUI::~StorePanelUI(StorePanelUI *this)

{
  ~StorePanelUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StorePanelUI::~StorePanelUI() */

void __thiscall StorePanelUI::~StorePanelUI(StorePanelUI *this)

{
  ~StorePanelUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::PaySucess(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void StorePanelUI::PaySucess
               (RtWeakPtr<Sexy::ResourceInfo> *param_1,char param_2,undefined8 param_3,
               undefined8 param_4,string *param_5)

{
  uint uVar1;
  undefined *puVar2;
  LawnApp *pLVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  PlayerInfo *this;
  long lVar7;
  MessageRouter *pMVar8;
  MagentoProductProps *this_00;
  TGALogMgr *this_01;
  ServerTime *this_02;
  CServerTimeHandler_SingleGacha *this_03;
  long lVar9;
  GroupInfo *pGVar10;
  string *psVar11;
  long extraout_x0;
  char *pcVar12;
  float fVar13;
  RtWeakPtr aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  bVar4 = std::operator==((string *)(lVar7 + 0x78),"coin");
  if (bVar4) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    iVar6 = *(int *)(lVar7 + 0x90);
    PlayerInfo::AddCoins(this,iVar6);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::CoinsPurchasedFromStore,iVar6);
    puVar2 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)param_1);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar2,Message::ItemPurchaseInfo2,
               (RtWeakPtr<Sexy::SoundResource> *)asStack_20,"Store|PvE_Store",0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    this_00 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    fVar13 = (float)MagentoProductProps::GetPriceInUSD(this_00,true);
    this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    uVar1 = (int)fVar13 >> 0x1f;
    TGALogMgr::LogCoin(this_01,iVar6,0,((int)fVar13 ^ uVar1) - uVar1);
    goto LAB_0339e468;
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  bVar4 = std::operator==((string *)(lVar7 + 0x78),"gem");
  if (bVar4) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    iVar6 = *(int *)(lVar7 + 0x90);
    PlayerInfo::AddGems(this,iVar6,true);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::GemsPurchasedFromStore,iVar6);
    puVar2 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)param_1);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar2,Message::ItemPurchaseInfo2,
               (RtWeakPtr<Sexy::SoundResource> *)asStack_20,"Store|PvE_Store",0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    goto LAB_0339e468;
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  bVar4 = std::operator==((string *)(lVar7 + 0x78),"sun");
  if (bVar4) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::SunAdd,*(int *)(lVar7 + 0x90));
    goto LAB_0339e468;
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  bVar4 = std::operator==((string *)(lVar7 + 0x78),"plant");
  if (bVar4) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    cVar5 = PlayerInfo::GetIsPlantUnlocked(this,(string *)(lVar7 + 0x80));
    if (cVar5 == '\0') {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
      PlayerInfo::HandlePurchase(this,(string *)(lVar7 + 0x10),(vector *)asStack_20);
      std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
                ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)asStack_20);
    }
    else {
      std::string::string(asStack_30,"iOS PvZ2 Plant Store");
      std::string::string(asStack_28,"Plant Pieces");
      std::string::string(asStack_20,"plant");
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      Magento::FindStoreProduct
                ((Magento *)asStack_30,asStack_28,asStack_20,(string *)(lVar7 + 0x80),param_5);
      std::string::~string(asStack_20);
      nop();
      std::string::~string(asStack_28);
      nop();
      std::string::~string(asStack_30);
      nop();
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
      if (bVar4) {
        iVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        PlayerInfo::AddPlantPieceCount
                  ((string *)this,iVar6 + 0x80,SUB41(*(undefined4 *)(lVar7 + 0x90),0));
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    goto LAB_0339e384;
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  bVar4 = std::operator==((string *)(lVar7 + 0x78),"avatar");
  if (bVar4) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    PlayerInfo::HandlePurchase(this,(string *)(lVar7 + 0x10),(vector *)asStack_20);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)asStack_20);
    goto LAB_0339e468;
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  bVar4 = std::operator==((string *)(lVar7 + 0x78),"gacha");
  if (bVar4) {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    bVar4 = std::operator==((string *)(lVar7 + 0x80),"gacha_diamond10");
    if (bVar4) {
      std::string::string(asStack_20,"gacha_diamond10");
      pGVar10 = ::operator_new(0x10);
      Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo
                (pGVar10,asStack_20,1,*(uint *)(gLawnApp + 0x28f8));
      std::string::~string(asStack_20);
      nop();
      pLVar3 = gLawnApp;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      LawnApp::ShowGachaUI(pLVar3,(string *)(lVar7 + 0x80),true);
      MessageRouter::Post<EventMetrics*,int,EventMetrics*,int>
                ((MessageRouter *)gMessageRouter,Message::EventPurchase,(EventMetrics *)pGVar10,
                 *(int *)(gLawnApp + 0x28fc));
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)pGVar10);
      AK::FreeHook(pGVar10);
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    else {
      iVar6 = FUN_03395418(*(undefined4 *)(this + 0x40));
      if (iVar6 == 0x17) {
        std::string::string(asStack_20,"gacha_free");
        pGVar10 = ::operator_new(0x10);
        Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(pGVar10,asStack_20,1,0);
        std::string::~string(asStack_20);
        nop();
        pLVar3 = gLawnApp;
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
        LawnApp::ShowGachaUI(pLVar3,(string *)(lVar7 + 0x80),false);
        MessageRouter::Post((_func_void *)gMessageRouter);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)pGVar10);
        AK::FreeHook(pGVar10);
      }
      else {
        this_02 = (ServerTime *)ServerTime::Instance();
        this_03 = ::operator_new(8);
        CServerTimeHandler_SingleGacha::CServerTimeHandler_SingleGacha(this_03);
        ServerTime::GetServerTimeFromNet(this_02,(CServerTimeHandler *)this_03,true);
      }
    }
    goto LAB_0339e468;
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
  bVar4 = std::operator==((string *)(lVar7 + 0x78),"plant_piece");
  if (bVar4) {
    if (param_2 == '\0') {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      lVar9 = FUN_05474184(lVar9 + 0x80);
      FUN_05475ffc(asStack_20,lVar7 + 0x80,0xc,lVar9 + -0xc);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      PlayerInfo::AddPlantPieceCount
                ((string *)this,(int)asStack_20,SUB41(*(undefined4 *)(lVar7 + 0x90),0));
      std::string::~string(asStack_20);
    }
LAB_0339e384:
    puVar2 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)param_1);
    MessageRouter::Post<MagentoProductProps*,Sexy::RtWeakPtr<MagentoProductProps>>
              ((MessageRouter *)puVar2,Message::ItemPurchasedFromStore,
               (RtWeakPtr<Sexy::SoundResource> *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    pMVar8 = (MessageRouter *)gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)param_1);
    pcVar12 = "Store|PvE_Store";
  }
  else {
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    bVar4 = std::operator==((string *)(lVar7 + 0x78),"avatar_piece");
    if (bVar4) {
      if (param_2 == '\0') {
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
        lVar9 = FUN_05474184(lVar9 + 0x80);
        FUN_05475ffc(asStack_20,lVar7 + 0x80,0xd,lVar9 + -0xd);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
        PlayerInfo::AddAvatarPiecesCount(this,asStack_20,0,*(undefined4 *)(lVar7 + 0x90),1);
        std::string::~string(asStack_20);
      }
      goto LAB_0339e384;
    }
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    bVar4 = std::operator==((string *)(lVar7 + 0x78),"accessory_piece");
    if (bVar4) {
      psVar11 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar11);
      cVar5 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_30);
      if (cVar5 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
        nop();
        FUN_05475d88(asStack_28,extraout_x0 + 0x98);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
        PlayerInfo::AddAccessoryPieceCount(this,asStack_28,*(int *)(lVar7 + 0x90),true);
        puVar2 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)param_1);
        MessageRouter::Post<MagentoProductProps*,Sexy::RtWeakPtr<MagentoProductProps>>
                  ((MessageRouter *)puVar2,Message::ItemPurchasedFromStore,
                   (RtWeakPtr<Sexy::SoundResource> *)asStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
        puVar2 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)param_1);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                  ((MessageRouter *)puVar2,Message::ItemPurchaseInfo2,
                   (RtWeakPtr<Sexy::SoundResource> *)asStack_20,"Store|PvE_Store",0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20)
        ;
        std::string::~string(asStack_28);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
      goto LAB_0339e468;
    }
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    bVar4 = std::operator==((string *)(lVar7 + 0x78),"redpack");
    if (!bVar4) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
      bVar4 = std::operator==((string *)(lVar7 + 0x78),"zongzi");
      if (!bVar4) goto LAB_0339e468;
    }
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    PlayerInfo::AddRedPacket(this,*(int *)(lVar7 + 0x90));
    puVar2 = gMessageRouter;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_1);
    MessageRouter::Post<int,int>
              ((MessageRouter *)puVar2,Message::RedPackPurchased,*(int *)(lVar7 + 0x90));
    pMVar8 = (MessageRouter *)gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)param_1);
    pcVar12 = "Event|Gacha_Redenvelope";
  }
  MessageRouter::
  Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
            (pMVar8,Message::ItemPurchaseInfo2,(RtWeakPtr<Sexy::ResourceInfo> *)asStack_20,pcVar12,0
            );
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
LAB_0339e468:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::ButtonDepress(int) */

void __thiscall StorePanelUI::ButtonDepress(StorePanelUI *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined *puVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  MagentoProductProps *pMVar9;
  PlayerInfo *pPVar10;
  long lVar11;
  ActivityConfig *pAVar12;
  MessageRouter *pMVar13;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  PVZ2UIImageCard *this_02;
  Image *pIVar14;
  Image *pIVar15;
  wchar_t *pwVar16;
  PVZ2UIDialog *this_03;
  PrimeTypeface *pPVar17;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var18;
  PurchaseBroker *pPVar19;
  PVPManager *this_04;
  ADManager *pAVar20;
  ulong uVar21;
  ICloudRequestSTDCallbackFunction *pIVar22;
  undefined8 uVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  float fVar27;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  code *local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1000) {
    pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    bVar3 = true;
    AudioMgr::SendEvent(pcVar8,"Play_UI_Menu_Buy_Coins");
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_60);
    pPVar10 = (PlayerInfo *)ProfileUtils::Profile();
    lVar11 = FUN_03395464(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
    if (lVar11 != 0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x118);
      iVar6 = 0;
      local_58 = (code *)std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin(this_00);
      while( true ) {
        local_50[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
        uVar24 = (uint)bVar3;
        if (!bVar3) break;
        lVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        iVar6 = iVar6 + (uint)*(ushort *)(lVar11 + 8);
        FUN_03397f70((exception_ptr *)&local_58);
      }
      uVar21 = time((time_t *)0x0);
      Sexy::SRand(uVar21);
      iVar6 = Sexy::Rand(iVar6);
      local_58 = (code *)std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin(this_00);
      while( true ) {
        local_50[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
        if (!bVar3) break;
        lVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        uVar24 = uVar24 + *(ushort *)(lVar11 + 8);
        if (iVar6 < (int)uVar24) {
          bVar3 = false;
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_60,(RtWeakPtr *)(lVar11 + 0x10));
          goto LAB_0339f1b8;
        }
        FUN_03397f70((exception_ptr *)&local_58);
      }
      bVar3 = false;
    }
LAB_0339f1b8:
    cVar4 = PlayerInfo::IsUnlockRechargeNode(pPVar10,10);
    if (cVar4 == '\0') {
      this_02 = ::operator_new(0x120);
      PVZ2UIImageCard::PVZ2UIImageCard(this_02);
      pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bac8);
      pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bb18);
      PVZ2UIImageCard::SetImage(this_02,pIVar14,pIVar15);
      iVar6 = LawnApp::GetPlatform(gLawnApp);
      if (iVar6 - 0xcU < 2) {
        pwVar16 = L"[PLANT_BAG_REWARD_TIPS_QQ]";
      }
      else {
        pwVar16 = L"[PLANT_BAG_REWARD_TIPS]";
      }
      TodStringTranslate(pwVar16);
      PVZ2UISeedChooserPreviewDisplay::SetDescriptionText((wstring *)this_02);
      FUN_05476c50((wstring *)local_50);
      pLVar2 = gLawnApp;
      iVar6 = FUN_033961ec(500);
      iVar26 = FUN_033961ec(0x168);
      this_03 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(pLVar2,(float)iVar6,(float)iVar26,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)local_50,L"[RECHARGE_GET_VIP_TITLE]",&local_58);
      PVZ2UIDialog::SetHeaderLabel(this_03,(wstring *)local_50);
      FUN_05476c50((wstring *)local_50);
      nop();
      pPVar17 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(this_03,pPVar17,(Color *)&PrimeText_Game::Color_Generic_Title);
      PVZ2UIDialog::SetBackgroundDarken(this_03,true,0.5);
      PVZ2UIDialog::SetContents(this_03,(Widget *)this_02);
      FUN_05478178(&local_58,L"[BUTTON_CANCEL]",aRStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onCancel);
      Sexy::Delegate0::Delegate0<StorePanelUI,void(StorePanelUI::*)()>
                (aDStack_38,(wstring *)local_50);
      PVZ2UIDialog::AddButton(this_03,&local_58,aDStack_38,1);
      FUN_05476c50(&local_58);
      nop();
      FUN_05478178(&local_58,L"[BUTTON_RECHARGE_NOW]",aRStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onRechargeNow);
      Sexy::Delegate0::Delegate0<StorePanelUI,void(StorePanelUI::*)()>
                (aDStack_38,(wstring *)local_50);
      PVZ2UIDialog::AddButton(this_03,&local_58,aDStack_38,0);
      FUN_05476c50(&local_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
    }
    else {
      LawnApp::ShowGetPlantBagUI(gLawnApp,(RtWeakPtr *)a_Stack_60,bVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
    }
    goto switchD_0339ee80_default;
  }
  if (param_1 == 2000) {
    pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar8,"Play_UI_Menu_Buy_Coins");
    LawnApp::ShowGetGemsRestoreUI(gLawnApp);
    goto switchD_0339ee80_default;
  }
  pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  lVar25 = (long)param_1;
  AudioMgr::SendEvent(pcVar8,"Play_UI_Menu_Buy_Coins");
  FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
  HotUIWidget::GetPtr();
  pMVar9 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  fVar27 = (float)MagentoProductProps::GetPriceInUSD(pMVar9,true);
  iVar26 = (int)fVar27;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  pPVar10 = (PlayerInfo *)ProfileUtils::Profile();
  FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
  HotUIWidget::GetPtr();
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  iVar6 = *(int *)(lVar11 + 0x18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
  HotUIWidget::GetPtr();
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  bVar3 = std::operator==("plant",(string *)(lVar11 + 0x78));
  if (bVar3) {
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    iVar7 = *(int *)(lVar11 + 0x90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    if (iVar7 < 1) goto LAB_0339ebc0;
    pAVar12 = (ActivityConfig *)LawnApp::GetActivityConfig();
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    iVar26 = ActivityConfig::GetActivityPrice(pAVar12,(string *)(lVar11 + 0x80),false,iVar26);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    pMVar9 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    uVar5 = MagentoProductProps::GetPurchaseType(pMVar9);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    switch(uVar5) {
    case 0:
      iVar6 = PlayerInfo::GetNumGems(pPVar10,true);
      if ((iVar6 < iVar26) ||
         (iVar6 = PlayerInfo::SubtractGems
                            (pPVar10,iVar26,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false),
         iVar6 < 0)) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
        goto switchD_0339ee80_default;
      }
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      puVar1 = gMessageRouter;
      HotUIWidget::GetPtr();
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                ((MessageRouter *)puVar1,Message::PlantUnlockFragment,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_50,iVar6);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)local_50;
      goto LAB_0339efac;
    default:
      goto switchD_0339ee80_default;
    case 2:
      iVar6 = PlayerInfo::GetNumCoins(pPVar10,true);
      if ((iVar6 < iVar26) || (iVar6 = PlayerInfo::SubtractCoins(pPVar10,iVar26), iVar6 < 0)) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,0,0);
        goto switchD_0339ee80_default;
      }
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      puVar1 = gMessageRouter;
      HotUIWidget::GetPtr();
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                ((MessageRouter *)puVar1,Message::PlantUnlockFragment,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_50,iVar6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      puVar1 = gMessageRouter;
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)local_50,lVar11 + 0x80);
      MessageRouter::Post<int,std::string_const&,int,std::string>
                ((MessageRouter *)puVar1,Message::CoinUse,iVar26,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      std::string::~string((string *)local_50);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)&local_58;
LAB_0339efac:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(this_01);
      puVar1 = gMessageRouter;
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_50,"Store|PvE_Store",iVar6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
      PlayerInfo::HandlePurchase(pPVar10,(string *)(lVar11 + 0x10),(vector *)local_50);
      std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
                ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      goto switchD_0339ee80_default;
    case 3:
      iVar6 = PlayerInfo::GetLeafCurrency(pPVar10);
      if (iVar6 < iVar26) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,6,0);
        goto switchD_0339ee80_default;
      }
LAB_0339ee94:
      PlayerInfo::ChangeLeafs(pPVar10,-iVar26);
      pMVar13 = (MessageRouter *)gMessageRouter;
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      uVar23 = 0;
      break;
    case 4:
      iVar6 = PlayerInfo::GetNumStones(pPVar10,true);
      if ((iVar6 < iVar26) || (iVar6 = PlayerInfo::SubtractStones(pPVar10,iVar26), iVar6 < 0)) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,7,0);
        goto switchD_0339ee80_default;
      }
LAB_0339f068:
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      PlayerInfo::SetStoneBuyed(pPVar10,(string *)(lVar11 + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      pMVar13 = (MessageRouter *)gMessageRouter;
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      uVar23 = 1;
    }
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int,Sexy::RtWeakPtr<MagentoProductProps>,int,int>
              (pMVar13,Message::ItemExChange,(RtWeakPtr<Sexy::ResourceInfo> *)local_50,iVar26,uVar23
              );
LAB_0339eee0:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
LAB_0339f500:
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    PaySucess((RtWeakPtr<Sexy::ResourceInfo> *)local_50,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    goto switchD_0339ee80_default;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
LAB_0339ebc0:
  FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
  HotUIWidget::GetPtr();
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  bVar3 = std::operator==("avatar",(string *)(lVar11 + 0x78));
  if (bVar3) {
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    iVar7 = *(int *)(lVar11 + 0x90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    if (iVar7 < 1) goto LAB_0339ec00;
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    iVar26 = PlayerInfo::GetAvatarPiecesCount(pPVar10,lVar11 + 0x80,0,1);
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    iVar6 = *(int *)(lVar11 + 0x90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    pLVar2 = gLawnApp;
    if (iVar26 < iVar6) {
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      LawnApp::ShowBuyAvatarDialog(pLVar2,(RtWeakPtr<Sexy::ResourceInfo> *)local_50,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      goto switchD_0339ee80_default;
    }
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    puVar1 = gMessageRouter;
    HotUIWidget::GetPtr();
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
              ((MessageRouter *)puVar1,Message::AvatarPiecesAdd,
               (RtWeakPtr<Sexy::ResourceInfo> *)local_50,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    puVar1 = gMessageRouter;
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,
               (RtWeakPtr<Sexy::ResourceInfo> *)local_50,"Store|PvE_Store",0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    goto LAB_0339f500;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
LAB_0339ec00:
  FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
  HotUIWidget::GetPtr();
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  bVar3 = std::operator==("avatar",(string *)(lVar11 + 0x78));
  if (bVar3) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
LAB_0339ec3c:
    lVar11 = LawnApp::GetActivityConfig();
    if (lVar11 != 0) {
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      bVar3 = std::operator==("avatar",(string *)(lVar11 + 0x78));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      pAVar12 = (ActivityConfig *)LawnApp::GetActivityConfig();
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      iVar26 = ActivityConfig::GetActivityPrice(pAVar12,(string *)(lVar11 + 0x80),bVar3,iVar26);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    }
  }
  else {
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    bVar3 = std::operator==("plant",(string *)(lVar11 + 0x78));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    if (bVar3) goto LAB_0339ec3c;
  }
  FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
  HotUIWidget::GetPtr();
  pMVar9 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  uVar5 = MagentoProductProps::GetPurchaseType(pMVar9);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  switch(uVar5) {
  case 0:
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    bVar3 = std::operator==((string *)(lVar11 + 0x78),"pvpCoin");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    if (bVar3) {
      iVar6 = PlayerInfo::GetNumGems(pPVar10,false);
      if (iVar26 <= iVar6) {
        this_04 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        PVPManager::RequestBuyPvpCoin(this_04,param_1);
        break;
      }
LAB_0339fb0c:
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      break;
    }
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    bVar3 = std::operator==((string *)(lVar11 + 0x78),"gacha");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    if (!bVar3) {
      iVar7 = PlayerInfo::GetNumGems(pPVar10,true);
      if (iVar7 < iVar26) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
        break;
      }
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      bVar3 = std::operator==((string *)(lVar11 + 0x80),"fuel");
      if (bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
LAB_0339fb7c:
        FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
        HotUIWidget::GetPtr();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
        ;
        iVar26 = *(int *)(lVar11 + 0x90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      }
      else {
        iVar26 = 1;
        FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
        HotUIWidget::GetPtr();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
        ;
        bVar3 = std::operator==((string *)(lVar11 + 0x80),"pvz1mode_time_energy");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        if (bVar3) goto LAB_0339fb7c;
      }
      local_58 = OnServerGemCallBack_AndroidConvertIos;
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      std::
      bind<void(*)(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>),std::_Placeholder<1>const&,Sexy::RtWeakPtr<MagentoProductProps>>
                ((_func_void_bool_ptr_RtWeakPtr *)&local_58,(_Placeholder *)&DAT_0576d300,
                 (RtWeakPtr *)a_Stack_60);
      std::function<void(bool)>::
      function<std::_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>)>,void>
                ((function<void(bool)> *)aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      pIVar22 = ::operator_new(0x30);
      ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction
                (pIVar22,(function *)aDStack_38);
      PlayerInfo::SubtractGems
                (pPVar10,iVar26,iVar6,(ICloudRequestCallbackFunctionBase *)pIVar22,1,false);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
      std::
      _Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>)>
      ::~_Bind((_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>)>
                *)local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
      break;
    }
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    bVar3 = std::operator==((string *)(lVar11 + 0x80),"gacha_diamond");
    if ((!bVar3) ||
       ((cVar4 = PlayerInfo::canFreeGacha(pPVar10), cVar4 == '\0' &&
        (iVar6 = FUN_03395418(*(undefined4 *)(pPVar10 + 0x40)), iVar6 != 0x17)))) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      iVar6 = PlayerInfo::GetNumGems(pPVar10,true);
      if (iVar26 <= iVar6) {
        FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
        HotUIWidget::GetPtr();
        pMVar9 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
        fVar27 = (float)MagentoProductProps::GetPriceInUSD(pMVar9,false);
        local_58 = OnServerGemCallBack_Gacha_AndroidConvertIos;
        FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
        HotUIWidget::GetPtr();
        std::
        bind<void(*)(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>),std::_Placeholder<1>const&,Sexy::RtWeakPtr<MagentoProductProps>>
                  ((_func_void_bool_ptr_RtWeakPtr *)&local_58,(_Placeholder *)&DAT_0576d300,
                   (RtWeakPtr *)a_Stack_60);
        std::function<void(bool)>::
        function<std::_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>)>,void>
                  ((function<void(bool)> *)aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        pIVar22 = ::operator_new(0x30);
        ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction
                  (pIVar22,(function *)aDStack_38);
        PlayerInfo::SubtractGems
                  (pPVar10,(int)fVar27,0x8a0,(ICloudRequestCallbackFunctionBase *)pIVar22,1,false);
        std::function<bool(Sexy::Touch_const&)>::~function
                  ((function<bool(Sexy::Touch_const&)> *)aDStack_38);
        std::
        _Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>)>
        ::~_Bind((_Bind<void(*(std::_Placeholder<1>,Sexy::RtWeakPtr<MagentoProductProps>))(bool_const&,Sexy::RtWeakPtr<MagentoProductProps>)>
                  *)local_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        break;
      }
      goto LAB_0339fb0c;
    }
    goto LAB_0339eee0;
  case 1:
    p_Var18 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar19 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var18);
    cVar4 = PurchaseBroker::NeedPurchaseWhite(pPVar19);
    if (cVar4 == '\0') {
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      bVar3 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds3");
      if (bVar3) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      }
      else {
        FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
        HotUIWidget::GetPtr();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
        bVar3 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds4");
        if (bVar3) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        }
        else {
          FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
          HotUIWidget::GetPtr();
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          bVar3 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds5");
          if (!bVar3) {
            FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
            HotUIWidget::GetPtr();
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            bVar3 = std::operator==((string *)(lVar11 + 0x10),"com.popcap.ios.chs.PVZ2.diamonds6");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          if (bVar3 == false) goto LAB_0339f6e0;
        }
      }
      puVar1 = gMessageRouter;
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)local_50,lVar11 + 0x10);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::BlackPackageCharge,
                 (RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      std::string::~string((string *)local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    }
LAB_0339f6e0:
    p_Var18 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar19 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(p_Var18);
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    PurchaseBroker::RequestPayment(pPVar19,(string *)(lVar11 + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    break;
  case 2:
    iVar6 = PlayerInfo::GetNumCoins(pPVar10,true);
    if ((iVar6 < iVar26) ||
       (iVar6 = PlayerInfo::SubtractCoins(pPVar10,iVar26), puVar1 = gMessageRouter, iVar6 < 0)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,0,0);
      break;
    }
    FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
    HotUIWidget::GetPtr();
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)local_50,lVar11 + 0x80);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar1,Message::CoinUse,iVar26,
               (RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    std::string::~string((string *)local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    goto LAB_0339f500;
  case 3:
    iVar6 = PlayerInfo::GetLeafCurrency(pPVar10);
    if (iVar26 <= iVar6) goto LAB_0339ee94;
    uVar23 = 6;
    goto LAB_0339f62c;
  case 4:
    iVar6 = PlayerInfo::GetNumStones(pPVar10,true);
    if ((iVar26 <= iVar6) && (iVar6 = PlayerInfo::SubtractStones(pPVar10,iVar26), -1 < iVar6))
    goto LAB_0339f068;
    uVar23 = 7;
LAB_0339f62c:
    LawnApp::ShowGemStoreConfirm(gLawnApp,uVar23,0);
    break;
  case 5:
    cVar4 = LawnApp::CheckNetWork(gLawnApp);
    if (cVar4 != '\0') {
      FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
      HotUIWidget::GetPtr();
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      bVar3 = std::operator==("gem",(string *)(lVar11 + 0x78));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      if (bVar3) {
        pAVar20 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        ADManager::ShowAD(pAVar20,6);
      }
      else {
        FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
        HotUIWidget::GetPtr();
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
        ;
        bVar3 = std::operator==("coin",(string *)(lVar11 + 0x78));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        if (bVar3) {
          pAVar20 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
          ADManager::ShowAD(pAVar20,5);
        }
        else {
          FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
          HotUIWidget::GetPtr();
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
          bVar3 = std::operator==("mystery_crystal",(string *)(lVar11 + 0x78));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
          ;
          if (bVar3) {
            pAVar20 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
            ADManager::ShowAD(pAVar20,7);
          }
          else {
            FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
            HotUIWidget::GetPtr();
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            bVar3 = std::operator==("fuel",(string *)(lVar11 + 0x78));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            if (bVar3) {
              pAVar20 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
              ADManager::ShowAD(pAVar20,10);
            }
            else {
              FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
              HotUIWidget::GetPtr();
              lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
              bVar3 = std::operator==("battlezTicket",(string *)(lVar11 + 0x78));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
              if (bVar3) {
                pAVar20 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
                ADManager::ShowAD(pAVar20,9);
              }
              else {
                FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
                HotUIWidget::GetPtr();
                lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
                bVar3 = std::operator==("sun",(string *)(lVar11 + 0x78));
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
                if (bVar3) {
                  pAVar20 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
                  ADManager::ShowAD(pAVar20,0xe);
                }
                else {
                  FUN_0339545c(*(undefined8 *)(this + 0xf0),lVar25);
                  HotUIWidget::GetPtr();
                  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
                  bVar3 = std::operator==("avatar_ticket",(string *)(lVar11 + 0x78));
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
                  if (bVar3) {
                    pAVar20 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
                    ADManager::ShowAD(pAVar20,0x20);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
switchD_0339ee80_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to StorePanelUI::ButtonDepress(int) */

void __thiscall StorePanelUI::ButtonDepress(StorePanelUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::OnServerGemCallBack_Gacha_AndroidConvertIos(bool const&,
   Sexy::RtWeakPtr<MagentoProductProps>) */

void StorePanelUI::OnServerGemCallBack_Gacha_AndroidConvertIos
               (char *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  LawnApp *pLVar1;
  bool bVar2;
  long lVar3;
  MagentoProductProps *this;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == '\0') {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar2 = std::operator==((string *)(lVar3 + 0x80),"gacha_diamond");
    if (!bVar2) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar2 = std::operator==((string *)(lVar3 + 0x80),"gacha_diamond10");
      if (!bVar2) goto LAB_033a0058;
    }
    this = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    fVar4 = (float)MagentoProductProps::GetPriceInUSD(this,true);
    pLVar1 = gLawnApp;
    *(int *)(gLawnApp + 0x28f8) = (int)fVar4;
    *(int *)(pLVar1 + 0x28fc) = (int)fVar4;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    PaySucess(aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
LAB_033a0058:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::OnServerGemCallBack_AndroidConvertIos(bool const&,
   Sexy::RtWeakPtr<MagentoProductProps>) */

void StorePanelUI::OnServerGemCallBack_AndroidConvertIos
               (char *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  undefined *puVar1;
  MagentoProductProps *this;
  float fVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == '\0') {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  }
  else {
    this = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    fVar2 = (float)MagentoProductProps::GetPriceInUSD(this,true);
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
              ((MessageRouter *)puVar1,Message::ItemPurchase,aRStack_10,(int)fVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_10,"Store|PvE_Store",
               (int)fVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    PaySucess(aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::OnServerGemCallBack(bool const&, Sexy::RtWeakPtr<MagentoProductProps>) */

void StorePanelUI::OnServerGemCallBack(char *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == '\0') {
    LawnApp::ShowGemStoreConfirm(gLawnApp,2);
  }
  else {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar2 = std::operator==((string *)(lVar4 + 0x78),"plant");
    puVar1 = gMessageRouter;
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                ((MessageRouter *)puVar1,Message::PlantUnlockFragment,aRStack_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      puVar1 = gMessageRouter;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_10,"Store|PvE_Store",0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar3 = std::operator==((string *)(lVar4 + 0x78),"avatar");
      puVar1 = gMessageRouter;
      if (bVar3) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                  ((MessageRouter *)puVar1,Message::AvatarPiecesAdd,aRStack_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        puVar1 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                  ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_10,"Store|PvE_Store",
                   bVar2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      else {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                  ((MessageRouter *)puVar1,Message::ItemPurchase,aRStack_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        puVar1 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
                  ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_10,"Store|PvE_Store",
                   bVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    PaySucess(aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::AddComingSoonButtonIfNeeded() */

void __thiscall StorePanelUI::AddComingSoonButtonIfNeeded(StorePanelUI *this)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  PVZ2UIStoreItemDisplayer *pPVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  PVZ2UIStoreItemDisplayer *local_18;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==((string *)(this + 0xe8),"Gacha");
  if ((!bVar2) && (bVar2 = std::operator==((string *)(this + 0xe8),"SecretGacha"), !bVar2)) {
    uVar12 = *(undefined8 *)(this + 0xf0);
    iVar11 = 0;
    lVar7 = FUN_03395450(uVar12,*(undefined8 *)(this + 0xf8));
    lVar10 = 0;
    while (lVar10 != lVar7) {
      lVar1 = lVar10 + 1;
      plVar8 = (long *)FUN_0339545c(uVar12,lVar10);
      lVar10 = lVar1;
      if (*(char *)(*plVar8 + 0x6c) != '\0') {
        iVar11 = iVar11 + 1;
      }
    }
    if (iVar11 == 0) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      pPVar9 = ::operator_new(0x1a0);
      PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer(pPVar9,a_Stack_10,0,this + 0xd8);
      local_18 = pPVar9;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      pPVar9 = local_18;
      uVar3 = FUN_033961ec(10);
      uVar4 = FUN_033961ec(0x19);
      uVar5 = FUN_033961ec(200);
      uVar6 = FUN_033961ec(0x157);
      (**(code **)(*(long *)pPVar9 + 0x198))(pPVar9,uVar3,uVar4,uVar5,uVar6);
      (**(code **)(*(long *)this + 0x60))(this,local_18);
      std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::push_back
                ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
                 (this + 0xf0),&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePanelUI::StorePanelUI(Sexy::TRect<int> const&, Sexy::RtWeakPtr<MagentoCategoryProps> const&)
    */

void __thiscall StorePanelUI::StorePanelUI(StorePanelUI *this,TRect *param_1,RtWeakPtr *param_2)

{
  string *psVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_01;
  ButtonListener *this_02;
  undefined *puVar2;
  TextureInfo *pTVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  long lVar15;
  ulong uVar16;
  RtWeakPtrBase *pRVar17;
  ResourceInfo *pRVar18;
  MagentoProductProps *this_05;
  long lVar19;
  string *psVar20;
  PVZ2UIStoreItemDisplayer *pPVar21;
  undefined2 *puVar22;
  int *piVar23;
  ActivityConfig *this_06;
  PVZ2UIImageWidget *pPVar24;
  Image *pIVar25;
  LotteryResultProgressBar *this_07;
  SalesProgressBar *this_08;
  GachaMgr *this_09;
  SecretGachaMgr *this_10;
  code *pcVar26;
  ulong uVar27;
  float fVar28;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  bool local_62;
  bool local_61;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  PVZ2UIStoreItemDisplayer *local_58;
  undefined8 local_50;
  undefined8 local_48;
  PVZ2UIStoreItemDisplayer *local_38;
  int local_30;
  undefined4 uStack_2c;
  int local_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  undefined6 uStack_16;
  undefined8 local_10;
  long local_8;
  
  psVar1 = (string *)(this + 0xe8);
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0);
  this_01 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  this_02 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_02);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06612be0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06612f18;
  *(undefined ***)(this + 0xe0) = &PTR__StorePanelUI_06612f60;
  Set8BytesTo0(psVar1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(psVar1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  iVar6 = FUN_033961ec(10);
  cVar4 = IsGemStore(this);
  if ((cVar4 != '\0') &&
     (this_06 = (ActivityConfig *)LawnApp::GetActivityConfig(), this_06 != (ActivityConfig *)0x0)) {
    cVar4 = ActivityConfig::IsActivityDays(this_06);
    if (cVar4 == '\0') {
      PlayerInfo::ResetRechargeDoubleData(this_04);
      PlayerInfo::ResetRechargePlantPieceReward(this_04);
    }
    cVar4 = ActivityConfig::IsFirstRechargeAward(this_06);
    if (cVar4 != '\0') {
      LawnApp::GetActivityConfig();
      ActivityConfig::GetActivityStoreBannerImageS();
      bVar5 = std::operator!=((string *)&local_38,"");
      if (bVar5) {
        LawnApp::GetUIImageInfoFromStringId((LawnApp *)gLawnApp,(string *)&local_38);
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        std::string::~string((string *)&local_38);
        if (pRVar18 != (ResourceInfo *)0x0) {
          pPVar24 = ::operator_new(0xe8);
          PVZ2UIImageWidget::PVZ2UIImageWidget(pPVar24);
          LotteryPanel::SetInited((LotteryPanel *)pPVar24,true);
          LevelEditorWaveEventPortalPanel::SetBgImage
                    ((LevelEditorWaveEventPortalPanel *)pPVar24,(Image *)pRVar18);
          iVar7 = FUN_033961ec(300);
          iVar8 = 0;
          if (*(int *)(pRVar18 + 0x3c) != 0) {
            iVar8 = (iVar7 * *(int *)(pRVar18 + 0x38)) / *(int *)(pRVar18 + 0x3c);
          }
          uVar11 = FUN_033961ec(0x19);
          (**(code **)(*(long *)pPVar24 + 0x198))(pPVar24,iVar6,uVar11,iVar8,iVar7);
          Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar24);
          iVar6 = iVar6 + iVar8;
        }
      }
      else {
        std::string::~string((string *)&local_38);
      }
    }
  }
  std::vector<PlantBagItemData,std::allocator<PlantBagItemData>>::clear
            ((vector<PlantBagItemData,std::allocator<PlantBagItemData>> *)this_01);
  if (((DAT_06a9bc60 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_06a9bc60), iVar8 != 0)) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)&DAT_06a9beb0);
    __cxa_guard_release(&DAT_06a9bc60);
    __cxa_atexit(std::
                 map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                 ::~map,&DAT_06a9beb0,&DAT_06a88000);
  }
  lVar15 = std::
           map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
           ::size((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                   *)&DAT_06a9beb0);
  if (lVar15 == 0) {
    std::string::string((string *)&local_20,"chilibean");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 0;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"imitater");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 200;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"torchwood");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 800;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"twinsunflower");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 0;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"coconutcannon");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 200;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"lightningreed");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 800;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"melonpult");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 0x578;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"peapod");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 200;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"gravebuster");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 0;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"kernelpult");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 0x578;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"snowpea");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 0x578;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"repeater");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 0x578;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"spikerock");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 800;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"tallnut");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 800;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"threepeater");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 400;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"wintermelon");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 200;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"peach");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 200;
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"firegourd");
    puVar22 = (undefined2 *)
              std::
              map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
              ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                            *)&DAT_06a9beb0,(string *)&local_20);
    *puVar22 = 200;
    std::string::~string((string *)&local_20);
    nop();
  }
  bVar5 = std::operator==(psVar1,"PvZ2 Stone Plants");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  if (bVar5) {
    uVar27 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    while( true ) {
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      uVar16 = FUN_0339543c(*(undefined8 *)(lVar15 + 0x60),*(undefined8 *)(lVar15 + 0x68));
      if (uVar16 <= uVar27) break;
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pRVar17 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar15 + 0x60),uVar27);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar17);
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      PlayerInfo::CheckStoneStoreRec(this_04,(string *)(lVar15 + 0x10),&local_62,&local_61);
      if ((local_62 != false) || (local_61 != false)) {
        std::
        vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)&local_38,(RtWeakPtr *)&local_20);
      }
      uVar27 = uVar27 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    }
    uVar27 = 0;
    while( true ) {
      pPVar21 = local_38;
      uVar16 = FUN_0339543c(local_38,CONCAT44(uStack_2c,local_30));
      if (uVar16 <= uVar27) break;
      pRVar17 = (RtWeakPtrBase *)FUN_03395448(pPVar21,uVar27);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,pRVar17);
      if (uVar27 != 0) {
        iVar8 = FUN_033961ec(10);
        iVar6 = iVar6 + iVar8;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)aRStack_60);
      pPVar21 = ::operator_new(0x1a0);
      PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                (pPVar21,(string *)&local_20,uVar27 & 0xffffffff,this_02);
      local_58 = pPVar21;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      bVar5 = std::operator==((string *)(lVar15 + 0x78),"bundle");
      if (bVar5) {
        iVar8 = FUN_033961ec(0x143);
      }
      else {
        iVar8 = FUN_033961ec(200);
      }
      cVar4 = IsGemStore(this);
      uVar11 = 0x14a;
      if (cVar4 == '\0') {
        uVar11 = 0x157;
      }
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      bVar5 = std::operator==((string *)(lVar15 + 0x78),"gacha");
      if (bVar5) {
        iVar7 = FUN_033961ec(0x16);
        iVar8 = iVar8 * 2 - iVar7;
      }
      pPVar21 = local_58;
      uVar27 = uVar27 + 1;
      uVar12 = FUN_033961ec(0x19);
      uVar11 = FUN_033961ec(uVar11);
      (**(code **)(*(long *)pPVar21 + 0x198))(pPVar21,iVar6,uVar12,iVar8,uVar11);
      pPVar21 = local_58;
      lVar15 = FUN_03395450(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
      (**(code **)(*(long *)pPVar21 + 0x188))(pPVar21,lVar15 == 0);
      PVZ2UIStoreItemDisplayer::SetIgnoreShowPieces(local_58,true);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_58);
      std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::push_back
                ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
                 this_00,&local_58);
      PlantBagItemData::PlantBagItemData((PlantBagItemData *)&local_20);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)&local_10,(RtWeakPtr *)aRStack_60);
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      thunk_FUN_05475e00((string *)&local_20,lVar15 + 0x80);
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      puVar22 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9beb0,(string *)(lVar15 + 0x80));
      local_18 = *puVar22;
      std::vector<PlantBagItemData,std::allocator<PlantBagItemData>>::push_back
                ((vector<PlantBagItemData,std::allocator<PlantBagItemData>> *)this_01,
                 (PlantBagItemData *)&local_20);
      iVar6 = iVar6 + *(int *)(local_58 + 0x50);
      GridItemZombieMirrorQueenMirror::CopyZombieParams::~CopyZombieParams
                ((CopyZombieParams *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    }
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
               *)&local_38);
  }
  else {
    uVar27 = 0;
    while( true ) {
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      uVar16 = FUN_0339543c(*(undefined8 *)(lVar15 + 0x60),*(undefined8 *)(lVar15 + 0x68));
      if (uVar16 <= uVar27) break;
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pRVar17 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar15 + 0x60),uVar27);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar17);
      pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      cVar4 = PlayerInfo::OwnsItemContainedInProps(this_04,(MagentoProductProps *)pRVar18);
      if (cVar4 == '\0') {
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        bVar5 = std::operator==((string *)(lVar15 + 0x78),"plant");
        if (bVar5) {
          this_05 = (MagentoProductProps *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          fVar28 = (float)MagentoProductProps::GetPriceInUSD(this_05,false);
          if (fVar28 < 0.0) {
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            iVar8 = *(int *)(lVar15 + 0x90);
            lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            iVar7 = PlayerInfo::GetPlantPieceCount(this_04,(string *)(lVar15 + 0x80),false);
            if (iVar7 < iVar8) goto LAB_033a27d0;
          }
        }
        std::
        vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)&local_50,(RtWeakPtr *)&local_20);
      }
LAB_033a27d0:
      uVar27 = uVar27 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    }
    iVar8 = FUN_0339543c(local_50,local_48);
    bVar5 = std::operator==(psVar1,"Plants");
    if ((bVar5) && (cVar4 = PlayerInfo::IsFirstBuyPlantBag(this_04), cVar4 != '\0')) {
      pPVar21 = ::operator_new(0x1a0);
      PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer(pPVar21,1000,this_02);
      uVar11 = FUN_033961ec(0xdc);
      (**(code **)(*(long *)pPVar21 + 0x198))(pPVar21,iVar6,0,uVar11,*(undefined4 *)(param_1 + 0xc))
      ;
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar21);
      pPVar24 = ::operator_new(0xe8);
      PVZ2UIImageWidget::PVZ2UIImageWidget(pPVar24);
      pIVar25 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c058);
      LevelEditorWaveEventPortalPanel::SetBgImage
                ((LevelEditorWaveEventPortalPanel *)pPVar24,pIVar25);
      pcVar26 = *(code **)(*(long *)pPVar24 + 0x198);
      uVar11 = FUN_033961ec(6);
      uVar12 = FUN_033961ec(0x1f);
      this_07 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c058);
      uVar13 = LotteryResultProgressBar::GetCurrentLevel(this_07);
      this_08 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c058);
      uVar14 = SalesProgressBar::GetCurrentLevel(this_08);
      (*pcVar26)(pPVar24,uVar11,uVar12,uVar13,uVar14);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pPVar24);
      iVar6 = iVar6 + *(int *)(pPVar21 + 0x50);
    }
    bVar5 = std::operator==(psVar1,"Gacha");
    if (bVar5) {
      cVar4 = LawnApp::IsNetworkModuleOK();
      if (cVar4 == '\0') {
        lVar15 = Sexy::LazySingleton<GachaMgr>::GetInstance();
        FUN_03395424(lVar15 + 0x38,1);
        OnNotifySyncActivityData(this,true);
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        this_09 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
        GachaMgr::RequestGachaInit(this_09);
      }
    }
    else {
      bVar5 = std::operator==(psVar1,"SecretGacha");
      if (bVar5) {
        cVar4 = LawnApp::IsNetworkModuleOK();
        if (cVar4 == '\0') {
          lVar15 = Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
          FUN_03395434(lVar15 + 8,1);
          OnNotifySyncActivityData(this,true);
          iVar7 = 0;
        }
        else {
          this_10 = (SecretGachaMgr *)Sexy::LazySingleton<SecretGachaMgr>::GetInstance();
          SecretGachaMgr::RequestGachaInit(this_10);
          iVar7 = 0;
        }
      }
      else {
        iVar7 = 0;
        if (0 < iVar8) {
          iVar7 = 0;
          lVar15 = 0;
          do {
            pRVar17 = (RtWeakPtrBase *)FUN_03395448(local_50,lVar15);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_58,pRVar17);
            lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            bVar5 = std::operator==((string *)(lVar19 + 0x78),"plant");
            if (bVar5) {
              psVar20 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar20);
              bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
              pTVar3 = gLawnApp;
              if (!bVar5) {
LAB_033a29d4:
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
                goto LAB_033a29dc;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              cVar4 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar3);
              if (cVar4 != '\0') goto LAB_033a29d4;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
LAB_033a2e58:
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            }
            else {
LAB_033a29dc:
              lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              bVar5 = std::operator==((string *)(lVar19 + 0x88),"ad");
              if ((bVar5) && (cVar4 = LawnApp::IsAdChannel((LawnApp *)gLawnApp,3), cVar4 == '\0'))
              goto LAB_033a2e58;
              if (iVar7 != 0) {
                iVar9 = FUN_033961ec(10);
                iVar6 = iVar6 + iVar9;
              }
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_58);
              pPVar21 = ::operator_new(0x1a0);
              PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                        (pPVar21,(string *)&local_20,iVar7,this_02);
              local_38 = pPVar21;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              bVar5 = std::operator==((string *)(lVar19 + 0x78),"bundle");
              if (bVar5) {
                iVar9 = FUN_033961ec(0x143);
              }
              else {
                iVar9 = FUN_033961ec(200);
              }
              lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              bVar5 = std::operator==((string *)(lVar19 + 0x78),"gacha");
              if (bVar5) {
                iVar10 = FUN_033961ec(0x16);
                iVar9 = iVar9 * 2 - iVar10;
              }
              pPVar21 = local_38;
              iVar7 = iVar7 + 1;
              uVar11 = FUN_033961ec(0x19);
              uVar12 = FUN_033961ec(0x157);
              (**(code **)(*(long *)pPVar21 + 0x198))(pPVar21,iVar6,uVar11,iVar9,uVar12);
              pPVar21 = local_38;
              lVar19 = FUN_03395450(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
              (**(code **)(*(long *)pPVar21 + 0x188))(pPVar21,lVar19 == 0);
              Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_38);
              std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::
              push_back((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>
                         *)this_00,&local_38);
              PlantBagItemData::PlantBagItemData((PlantBagItemData *)&local_20);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)&local_10,(RtWeakPtr *)&local_58);
              lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              thunk_FUN_05475e00((string *)&local_20,lVar19 + 0x80);
              lVar19 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              puVar22 = (undefined2 *)
                        std::
                        map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                        ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                                      *)&DAT_06a9beb0,(string *)(lVar19 + 0x80));
              local_18 = *puVar22;
              std::vector<PlantBagItemData,std::allocator<PlantBagItemData>>::push_back
                        ((vector<PlantBagItemData,std::allocator<PlantBagItemData>> *)this_01,
                         (PlantBagItemData *)&local_20);
              iVar6 = iVar6 + *(int *)(local_38 + 0x50);
              GridItemZombieMirrorQueenMirror::CopyZombieParams::~CopyZombieParams
                        ((CopyZombieParams *)&local_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            }
            lVar15 = lVar15 + 1;
          } while ((int)lVar15 < iVar8);
        }
      }
    }
    uVar27 = 0;
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar15 = FUN_0339543c(*(undefined8 *)(lVar15 + 0x60),*(undefined8 *)(lVar15 + 0x68));
    if (lVar15 != 0) {
      do {
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pRVar17 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar15 + 0x60),uVar27);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_58,pRVar17);
        pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_58);
        cVar4 = PlayerInfo::OwnsItemContainedInProps(this_04,(MagentoProductProps *)pRVar18);
        if (cVar4 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
        else {
          if (iVar7 != 0) {
            iVar8 = FUN_033961ec(10);
            iVar6 = iVar6 + iVar8;
          }
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_58);
          pPVar21 = ::operator_new(0x1a0);
          PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                    (pPVar21,(string *)&local_20,iVar7,this_02);
          local_38 = pPVar21;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          bVar5 = std::operator==((string *)(lVar15 + 0x78),"bundle");
          if (bVar5) {
            uVar11 = FUN_033961ec(0x143);
          }
          else {
            uVar11 = FUN_033961ec(200);
          }
          iVar7 = iVar7 + 1;
          IsGemStore(this);
          (**(code **)(*(long *)local_38 + 0x198))
                    (local_38,iVar6,0,uVar11,*(undefined4 *)(param_1 + 0xc));
          pPVar21 = local_38;
          lVar15 = FUN_03395450(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
          (**(code **)(*(long *)pPVar21 + 0x188))(pPVar21,lVar15 == 0);
          Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_38);
          std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::
          push_back((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
                    this_00,&local_38);
          iVar6 = iVar6 + *(int *)(local_38 + 0x50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
        uVar27 = uVar27 + 1;
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        uVar16 = FUN_0339543c(*(undefined8 *)(lVar15 + 0x60),*(undefined8 *)(lVar15 + 0x68));
      } while (uVar27 < uVar16);
    }
    IsGemStore(this);
  }
  Sexy::Insets::Insets((Insets *)&local_38,(Insets *)param_1);
  bVar5 = std::operator!=(psVar1,"SecretGacha");
  if (bVar5) {
    local_20 = FUN_033961ec(10);
    local_20 = local_20 + iVar6;
    piVar23 = eastl::max_alt<int>((int *)(param_1 + 8),&local_20);
    local_30 = *piVar23;
  }
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)&local_38);
  AddComingSoonButtonIfNeeded(this);
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifySyncActivityData);
  local_90 = CONCAT44(uStack_1c,local_20);
  uStack_88 = CONCAT62(uStack_16,local_18);
  local_80 = local_10;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<StorePanelUI,void(StorePanelUI::*)(bool)>>
            ((MessageRouter *)puVar2,Message::NotifySyncActivityData,&local_90);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

