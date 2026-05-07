// Class: ZMatchShopMgr


/* ZMatchShopMgr::getMatchTicket() const */

undefined4 __thiscall ZMatchShopMgr::getMatchTicket(ZMatchShopMgr *this)

{
  return *(undefined4 *)(this + 100);
}


/* ZMatchShopMgr::setCurBuyCost(int) */

void __thiscall ZMatchShopMgr::setCurBuyCost(ZMatchShopMgr *this,int param_1)

{
  *(int *)(this + 0x60) = param_1;
  return;
}


/* ZMatchShopMgr::getCurBuyCost() const */

undefined4 __thiscall ZMatchShopMgr::getCurBuyCost(ZMatchShopMgr *this)

{
  return *(undefined4 *)(this + 0x60);
}


/* ZMatchShopMgr::addMatchTicket(int) */

void __thiscall ZMatchShopMgr::addMatchTicket(ZMatchShopMgr *this,int param_1)

{
  *(int *)(this + 100) = *(int *)(this + 100) + param_1;
  return;
}


/* ZMatchShopMgr::SubtractMatchTicket(int) */

void __thiscall ZMatchShopMgr::SubtractMatchTicket(ZMatchShopMgr *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 100) - param_1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(this + 100) = iVar1;
  return;
}


/* ZMatchShopMgr::ZMatchShopMgr() */

void __thiscall ZMatchShopMgr::ZMatchShopMgr(ZMatchShopMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<ZMatchShopMgr>::LazySingleton((LazySingleton<ZMatchShopMgr> *)this);
  *(undefined ***)this = &PTR__ZMatchShopMgr_066c3bb0;
  ZMatch_ShopData::ZMatch_ShopData((ZMatch_ShopData *)(this + 8));
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBuyZWatchTicket);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<ZMatchShopMgr,void(ZMatchShopMgr::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLBuyZMatchTicket,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopMgr::getAfterRefreshCost() */

void __thiscall ZMatchShopMgr::getAfterRefreshCost(ZMatchShopMgr *this)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x20));
  uVar3 = 10;
  if (cVar2 == '\0') {
    uVar6 = *(undefined8 *)(this + 0x20);
    iVar1 = *(int *)(this + 0x54) + -1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    uVar4 = FUN_0390dafc(uVar6,*(undefined8 *)(this + 0x28));
    if ((ulong)(long)iVar1 < uVar4) {
      puVar5 = (undefined4 *)FUN_0390db3c(uVar6,(long)iVar1);
      uVar3 = *puVar5;
    }
    else {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x20));
      puVar5 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_10)
      ;
      uVar3 = *puVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ZMatchShopMgr::getRefrashZMShopCost() */

undefined4 __thiscall ZMatchShopMgr::getRefrashZMShopCost(ZMatchShopMgr *this)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  cVar2 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x20));
  if (cVar2 != '\0') {
    return 10;
  }
  uVar5 = *(undefined8 *)(this + 0x20);
  iVar1 = *(int *)(this + 0x54);
  uVar3 = FUN_0390dafc(uVar5,*(undefined8 *)(this + 0x28));
  if ((ulong)(long)iVar1 < uVar3) {
    puVar4 = (undefined4 *)FUN_0390db3c(uVar5,(long)iVar1);
    return *puVar4;
  }
  puVar4 = (undefined4 *)FUN_0390db3c(uVar5,(long)((int)uVar3 + -1));
  return *puVar4;
}


/* ZMatchShopMgr::OnNotifyBuyZWatchTicket(bool) */

void __thiscall ZMatchShopMgr::OnNotifyBuyZWatchTicket(ZMatchShopMgr *this,bool param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ZMatchShopMgr *pZVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (*(int *)(this + 0x68) != 0) {
    if (*(int *)(this + 0x68) != 1) {
      return;
    }
    MessageRouter::Post<std::string_const&,int,int,char_const*,int,Buy_type>
              ((MessageRouter *)gMessageRouter,Message::BattleBuyTimes,&DAT_055d5970,
               *(undefined4 *)(this + 0x6c),1);
    pZVar2 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
    addMatchTicket(pZVar2,*(int *)(this + 0x6c));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::ZmatchTicketAdd,*(int *)(this + 0x6c));
    return;
  }
  if (param_1) {
    Sexy::OutputDebugStrF((wchar_t *)"UIWorldCupEntrance::OnNotifyBuyWCTicket i_success = %d ",1);
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    if (0x1d < iVar1) {
      pZVar2 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<ZMatchShopMgr,bool>::ICloudRequestCallbackFunction
                (pZVar2,(_func_void_bool_ptr *)this);
      PlayerInfo::SubtractGems
                (this_01,0x1e,0xcc3a,(ICloudRequestCallbackFunctionBase *)pZVar2,0xf,false);
      return;
    }
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"UIWorldCupEntrance::OnNotifyBuyWCTicket i_success = %d ",0);
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopMgr::onUseGemFinish(bool const&) */

void __thiscall ZMatchShopMgr::onUseGemFinish(ZMatchShopMgr *this,bool *param_1)

{
  UIMessageBox *pUVar1;
  ZMatchShopMgr *this_00;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)"ZMatchTicketShop::onUseGemFinish isSuccess = %d ",(ulong)*param_1);
  if (*param_1 == false) {
    pUVar1 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar1 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar1,2);
      std::string::string(asStack_20,"[ZMATCHSHOP_BUYTIMES_LIMIT]");
      std::string::string(asStack_18,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(pUVar1,asStack_20,asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      UIMessageBox::SetTextFont(pUVar1,0x75);
      UIMessageBox::SetTitleFont(pUVar1,0x75);
      Sexy::Color::Color((Color *)asStack_18,1);
      UIMessageBox::SetTextColor(pUVar1,asStack_18);
    }
  }
  else {
    MessageRouter::Post<std::string_const&,int,int,char_const*,int,Buy_type>
              ((MessageRouter *)gMessageRouter,Message::BattleBuyTimes,"Diamonds",
               *(undefined4 *)(this + 0x6c),*(undefined4 *)(this + 0x68));
    pUVar1 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar1 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar1,2);
      std::string::string(asStack_20,"[SALES_BUY_SUCCESS_TITLE]");
      std::string::string(asStack_18,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(pUVar1,asStack_20,asStack_18);
      std::string::~string(asStack_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      UIMessageBox::SetTextFont(pUVar1,0x75);
      UIMessageBox::SetTitleFont(pUVar1,0x75);
      Sexy::Color::Color((Color *)asStack_18,1);
      UIMessageBox::SetTextColor(pUVar1,asStack_18);
    }
    this_00 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
    addMatchTicket(this_00,*(int *)(this + 0x6c));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::ZmatchTicketAdd,*(int *)(this + 0x6c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopMgr::BuyFinish(S2C_BuyZMatchShopData const&) */

void __thiscall ZMatchShopMgr::BuyFinish(ZMatchShopMgr *this,S2C_BuyZMatchShopData *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int *piVar5;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  GAME_ITEM_INFO aGStack_38 [8];
  int local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  ProfileChangeItemAmount(*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),false);
  local_90 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        amStack_68,(int *)aGStack_38);
  local_88 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)amStack_68);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_90,(rbtree_iterator *)&local_88);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_90);
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + local_30;
  }
  else {
    piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_68,(int *)aGStack_38);
    *piVar5 = local_30;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_80,(int *)aGStack_38);
  }
  UIRedPacketResult::create((map *)amStack_68,(vector *)avStack_80,true);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = PlayerInfo::GetMaterialNum(this_01,0x59f4);
  iVar3 = getCurBuyCost(this);
  PlayerInfo::SetMaterialNum(this_01,0x59f4,iVar2 - iVar3);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::BattleShop,*(int *)(param_1 + 0x14),iVar3);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::ZMatchShopItemBuyFinish,
             *(int *)(param_1 + 0x14),*(int *)(param_1 + 0x1c));
  GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_80);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZMatchShopMgr::~ZMatchShopMgr() */

void __thiscall ZMatchShopMgr::~ZMatchShopMgr(ZMatchShopMgr *this)

{
  *(undefined ***)this = &PTR__ZMatchShopMgr_066c3bb0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  ZMatch_ShopData::~ZMatch_ShopData((ZMatch_ShopData *)(this + 8));
  Sexy::LazySingleton<ZMatchShopMgr>::~LazySingleton((LazySingleton<ZMatchShopMgr> *)this);
  return;
}


/* ZMatchShopMgr::~ZMatchShopMgr() */

void __thiscall ZMatchShopMgr::~ZMatchShopMgr(ZMatchShopMgr *this)

{
  ~ZMatchShopMgr(this);
  AK::FreeHook(this);
  return;
}


/* ZMatchShopMgr::loadData(ZMatch_ShopData const&) */

void __thiscall ZMatchShopMgr::loadData(ZMatchShopMgr *this,ZMatch_ShopData *param_1)

{
  int iVar1;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  ZMatch_ShopData::operator=((ZMatch_ShopData *)(this + 8),param_1);
  lVar2 = UISingletonDialog<ZMatchShopDlg>::GetSingletonPtr();
  if (lVar2 != 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    PlayerInfo::GetMaterialNum(this_01,0x59f4);
    PlayerInfo::SetMaterialNum(this_01,0x59f4,*(int *)(this + 0x50));
    iVar1 = UISingletonDialog<ZMatchShopDlg>::GetSingletonPtr();
    ZMatchShopDlg::BuyFinish(iVar1);
    return;
  }
  UISingletonDialog<ZMatchShopDlg>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchShopMgr::BuyTicket(btn_buyTicket) */

void __thiscall ZMatchShopMgr::BuyTicket(ZMatchShopMgr *this,int param_2,size_t param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  TGALogMgr *pTVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  PurchaseBroker *pPVar6;
  MagentoProductProps *pMVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 *__n;
  float fVar8;
  undefined1 auStack_158 [8];
  RtWeakPtr aRStack_150 [8];
  DString aDStack_148 [16];
  TGALogJoustData aTStack_138 [16];
  string asStack_128 [8];
  string asStack_120 [16];
  string asStack_110 [8];
  string asStack_108 [104];
  TGALogJoustData aTStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGALogJoustData::TGALogJoustData(aTStack_138);
  if (param_2 == 2) {
    *(undefined4 *)(this + 0x68) = 1;
    *(undefined4 *)(this + 0x6c) = 1;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var5);
    __n = auStack_158;
    std::string::string((string *)aDStack_148,"com.popcap.pvz2.battlez.1");
    PurchaseBroker::RequestPayment(pPVar6,(string *)aDStack_148,0);
    std::string::~string((string *)aDStack_148);
    nop();
    std::string::string((string *)aDStack_148,"com.popcap.pvz2.battlez.1");
    Magento::GetProductPtr((Magento *)aDStack_148,extraout_x1_00);
    std::string::~string((string *)aDStack_148);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_150);
    if (bVar1) {
      pMVar7 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_150);
      fVar8 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
      DString::DString(aDStack_148,fVar8);
      pcVar3 = (char *)DString::c_str(aDStack_148);
      std::string::append(asStack_108,pcVar3,(size_t)__n);
      DString::~DString(aDStack_148);
    }
    iVar2 = JoustUtils::PlayerGetLeague();
    DString::DString(aDStack_148,iVar2);
    pcVar3 = (char *)DString::c_str(aDStack_148);
    std::string::append((string *)aTStack_138,pcVar3,(size_t)__n);
    DString::~DString(aDStack_148);
    pcVar3 = "1";
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 1) {
        *(undefined4 *)(this + 0x6c) = 1;
        *(undefined4 *)(this + 0x68) = 0;
        OnNotifyBuyZWatchTicket(this,true);
        iVar2 = JoustUtils::PlayerGetLeague();
        DString::DString(aDStack_148,iVar2);
        pcVar3 = (char *)DString::c_str(aDStack_148);
        std::string::append((string *)aTStack_138,pcVar3,param_3);
        DString::~DString(aDStack_148);
        std::string::append(asStack_120,"30",param_3);
        std::string::append(asStack_128,"0",param_3);
        std::string::append(asStack_110,"1",param_3);
        pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
        TGALogMgr::LogJoust(pTVar4,3,aTStack_a0);
        TGALogJoustData::~TGALogJoustData(aTStack_a0);
      }
      goto LAB_03912114;
    }
    *(undefined4 *)(this + 0x68) = 1;
    *(undefined4 *)(this + 0x6c) = 10;
    p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var5);
    __n = auStack_158;
    std::string::string((string *)aDStack_148,"com.popcap.pvz2.battlez.6");
    PurchaseBroker::RequestPayment(pPVar6,(string *)aDStack_148,0);
    std::string::~string((string *)aDStack_148);
    nop();
    std::string::string((string *)aDStack_148,"com.popcap.pvz2.battlez.6");
    Magento::GetProductPtr((Magento *)aDStack_148,extraout_x1);
    std::string::~string((string *)aDStack_148);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_150);
    if (bVar1) {
      pMVar7 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_150);
      fVar8 = (float)MagentoProductProps::GetPriceInUSD(pMVar7,false);
      DString::DString(aDStack_148,fVar8);
      pcVar3 = (char *)DString::c_str(aDStack_148);
      std::string::append(asStack_108,pcVar3,(size_t)__n);
      DString::~DString(aDStack_148);
    }
    iVar2 = JoustUtils::PlayerGetLeague();
    DString::DString(aDStack_148,iVar2);
    pcVar3 = (char *)DString::c_str(aDStack_148);
    std::string::append((string *)aTStack_138,pcVar3,(size_t)__n);
    DString::~DString(aDStack_148);
    pcVar3 = "10";
  }
  std::string::append(asStack_110,pcVar3,(size_t)__n);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
  TGALogMgr::LogJoust(pTVar4,3,aTStack_a0);
  TGALogJoustData::~TGALogJoustData(aTStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_150);
LAB_03912114:
  TGALogJoustData::~TGALogJoustData(aTStack_138);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

