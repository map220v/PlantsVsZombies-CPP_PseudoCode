// Class: ZMatchTicketShop


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketShop::GetLayoutName() */

void __thiscall ZMatchTicketShop::GetLayoutName(ZMatchTicketShop *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIBuyZKey");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZMatchTicketShop::~ZMatchTicketShop() */

void __thiscall ZMatchTicketShop::~ZMatchTicketShop(ZMatchTicketShop *this)

{
  *(undefined ***)this = &PTR_GetClass_066c37e0;
  *(undefined **)(this + 0xd8) = &DAT_066c3b30;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<ZMatchTicketShop>::~UISingletonDialog
            ((UISingletonDialog<ZMatchTicketShop> *)this);
  return;
}


/* ZMatchTicketShop::~ZMatchTicketShop() */

void __thiscall ZMatchTicketShop::~ZMatchTicketShop(ZMatchTicketShop *this)

{
  ~ZMatchTicketShop(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketShop::OnCreate() */

void __thiscall ZMatchTicketShop::OnCreate(ZMatchTicketShop *this)

{
  UIWidgetText *pUVar1;
  UIWidgetImage *pUVar2;
  Widget *pWVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"UIText_price");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar1[0x6d] = (UIWidgetText)0x0;
  std::string::string(asStack_10,"UIImage_4");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar2[0x6d] = (UIWidgetImage)0x0;
  std::string::string(asStack_10,"Background_0");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  UI::Dialog::SetCenter((Dialog *)this,pWVar3,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ZMatchTicketShop::ZMatchTicketShop() */

void __thiscall ZMatchTicketShop::ZMatchTicketShop(ZMatchTicketShop *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<ZMatchTicketShop>::UISingletonDialog
            ((UISingletonDialog<ZMatchTicketShop> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_066c37e0;
  *(undefined **)(this + 0xd8) = &DAT_066c3b30;
  *(undefined4 *)(this + 0x138) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyBuyZWatchTicket);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<ZMatchTicketShop,void(ZMatchTicketShop::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GLBuyZMatchTicket,&local_40);
  return;
}


/* ZMatchTicketShop::OnNotifyBuyZWatchTicket(bool) */

void __thiscall ZMatchTicketShop::OnNotifyBuyZWatchTicket(ZMatchTicketShop *this,bool param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ZMatchTicketShop *pZVar2;
  ZMatchShopMgr *this_02;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (*(int *)(this + 0x134) != 0) {
    if (*(int *)(this + 0x134) != 1) {
      return;
    }
    MessageRouter::Post<std::string_const&,int,int,char_const*,int,Buy_type>
              ((MessageRouter *)gMessageRouter,Message::BattleBuyTimes,&DAT_055d5970,
               *(undefined4 *)(this + 0x138),1);
    this_02 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
    ZMatchShopMgr::addMatchTicket(this_02,*(int *)(this + 0x138));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::ZmatchTicketAdd,*(int *)(this + 0x138));
    return;
  }
  if (param_1) {
    Sexy::OutputDebugStrF((wchar_t *)"UIWorldCupEntrance::OnNotifyBuyWCTicket i_success = %d ",1);
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    if (0x1d < iVar1) {
      pZVar2 = ::operator_new(0x28);
      ICloudRequestCallbackFunction<ZMatchTicketShop,bool>::ICloudRequestCallbackFunction
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
/* ZMatchTicketShop::onUseGemFinish(bool const&) */

void __thiscall ZMatchTicketShop::onUseGemFinish(ZMatchTicketShop *this,bool *param_1)

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
               *(undefined4 *)(this + 0x138),*(undefined4 *)(this + 0x134));
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
    ZMatchShopMgr::addMatchTicket(this_00,*(int *)(this + 0x138));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::ZmatchTicketAdd,*(int *)(this + 0x138));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatchTicketShop::ButtonDepress(int) */

void __thiscall ZMatchTicketShop::ButtonDepress(ZMatchTicketShop *this,int param_1)

{
  bool bVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  PurchaseBroker *pPVar4;
  MagentoProductProps *pMVar5;
  char *pcVar6;
  TGALogMgr *pTVar7;
  string *extraout_x1;
  string *extraout_x1_00;
  undefined1 *__n;
  size_t __n_00;
  float fVar8;
  undefined1 auStack_158 [8];
  RtWeakPtr aRStack_150 [8];
  string asStack_148 [16];
  TGALogJoustData aTStack_138 [16];
  string asStack_128 [8];
  string asStack_120 [16];
  string asStack_110 [8];
  string asStack_108 [104];
  TGALogJoustData aTStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGALogJoustData::TGALogJoustData(aTStack_138);
  switch(param_1) {
  case 0:
    UISingletonDialog<ZMatchTicketShop>::CloseDialog();
    break;
  case 1:
    __n_00 = 1;
    *(undefined4 *)(this + 0x138) = 1;
    *(undefined4 *)(this + 0x134) = 0;
    OnNotifyBuyZWatchTicket(this,true);
    iVar2 = JoustUtils::PlayerGetLeague();
    DString::DString((DString *)asStack_148,iVar2);
    pcVar6 = (char *)DString::c_str((DString *)asStack_148);
    std::string::append((string *)aTStack_138,pcVar6,__n_00);
    DString::~DString((DString *)asStack_148);
    std::string::append(asStack_120,"30",__n_00);
    std::string::append(asStack_128,"0",__n_00);
    std::string::append(asStack_110,"1",__n_00);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
    TGALogMgr::LogJoust(pTVar7,3,aTStack_a0);
    TGALogJoustData::~TGALogJoustData(aTStack_a0);
    break;
  case 2:
    *(undefined4 *)(this + 0x134) = 1;
    *(undefined4 *)(this + 0x138) = 1;
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var3);
    __n = auStack_158;
    std::string::string(asStack_148,"com.popcap.pvz2.battlez.1");
    PurchaseBroker::RequestPayment(pPVar4,asStack_148,0);
    std::string::~string(asStack_148);
    nop();
    std::string::string(asStack_148,"com.popcap.pvz2.battlez.1");
    Magento::GetProductPtr((Magento *)asStack_148,extraout_x1_00);
    std::string::~string(asStack_148);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_150);
    if (bVar1) {
      pMVar5 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_150);
      fVar8 = (float)MagentoProductProps::GetPriceInUSD(pMVar5,false);
      DString::DString((DString *)asStack_148,fVar8);
      pcVar6 = (char *)DString::c_str((DString *)asStack_148);
      std::string::append(asStack_108,pcVar6,(size_t)__n);
      DString::~DString((DString *)asStack_148);
    }
    iVar2 = JoustUtils::PlayerGetLeague();
    DString::DString((DString *)asStack_148,iVar2);
    pcVar6 = (char *)DString::c_str((DString *)asStack_148);
    std::string::append((string *)aTStack_138,pcVar6,(size_t)__n);
    DString::~DString((DString *)asStack_148);
    pcVar6 = "1";
    goto LAB_03911e84;
  case 3:
    *(undefined4 *)(this + 0x134) = 1;
    *(undefined4 *)(this + 0x138) = 10;
    p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PurchaseBroker *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_rightmost(p_Var3);
    __n = auStack_158;
    std::string::string(asStack_148,"com.popcap.pvz2.battlez.6");
    PurchaseBroker::RequestPayment(pPVar4,asStack_148,0);
    std::string::~string(asStack_148);
    nop();
    std::string::string(asStack_148,"com.popcap.pvz2.battlez.6");
    Magento::GetProductPtr((Magento *)asStack_148,extraout_x1);
    std::string::~string(asStack_148);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_150);
    if (bVar1) {
      pMVar5 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_150);
      fVar8 = (float)MagentoProductProps::GetPriceInUSD(pMVar5,false);
      DString::DString((DString *)asStack_148,fVar8);
      pcVar6 = (char *)DString::c_str((DString *)asStack_148);
      std::string::append(asStack_108,pcVar6,(size_t)__n);
      DString::~DString((DString *)asStack_148);
    }
    iVar2 = JoustUtils::PlayerGetLeague();
    DString::DString((DString *)asStack_148,iVar2);
    pcVar6 = (char *)DString::c_str((DString *)asStack_148);
    std::string::append((string *)aTStack_138,pcVar6,(size_t)__n);
    DString::~DString((DString *)asStack_148);
    pcVar6 = "10";
LAB_03911e84:
    std::string::append(asStack_110,pcVar6,(size_t)__n);
    pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
    TGALogMgr::LogJoust(pTVar7,3,aTStack_a0);
    TGALogJoustData::~TGALogJoustData(aTStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_150);
  }
  TGALogJoustData::~TGALogJoustData(aTStack_138);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to ZMatchTicketShop::ButtonDepress(int) */

void __thiscall ZMatchTicketShop::ButtonDepress(ZMatchTicketShop *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

