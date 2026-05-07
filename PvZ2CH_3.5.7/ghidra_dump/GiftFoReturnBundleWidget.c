// Class: GiftFoReturnBundleWidget


/* GiftFoReturnBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall GiftFoReturnBundleWidget::Draw(GiftFoReturnBundleWidget *this,Graphics *param_1)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2728);
  Sexy::Graphics::DrawImage(param_1,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}


/* GiftFoReturnBundleWidget::GiftFoReturnBundleWidget() */

void __thiscall GiftFoReturnBundleWidget::GiftFoReturnBundleWidget(GiftFoReturnBundleWidget *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066409e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06640d08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  FUN_05476574(this + 0x110);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyGiftFoReturn);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<GiftFoReturnBundleWidget,void(GiftFoReturnBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyGiftFoReturn,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnBundleWidget::RefreshInfo() */

void __thiscall GiftFoReturnBundleWidget::RefreshInfo(GiftFoReturnBundleWidget *this)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  NameMapperBase *this_00;
  int *piVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIButton *this_03;
  long lVar5;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_03 = *(PVZ2UIButton **)(this + 0x118);
  local_8 = ___stack_chk_guard;
  if (this_03 != (PVZ2UIButton *)0x0) {
    if (*(int *)(this + 0x108) < 1) {
      TodStringTranslate(L"[RECHARGE_DAILYSIGN_ACTIVITY_GOT]");
      PVZ2UIButton::SetLabelText(this_03,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),1);
    }
    else {
      TodStringTranslate(L"[GET_TRIAL_CARD]");
      PVZ2UIButton::SetLabelText(this_03,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(**(long **)(this + 0x118) + 0x188))(*(long **)(this + 0x118),0);
    }
  }
  plVar3 = *(long **)(this + 0x120);
  if (plVar3 == (long *)0x0) goto LAB_0348dc1c;
  if (*(int *)(this + 0x104) < 1) {
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    goto LAB_0348dc1c;
  }
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8));
  if (cVar1 == '\0') {
    this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
    piVar4 = (int *)FUN_03489ff8(*(undefined8 *)(this + 0xe8),0);
    cVar1 = NameMapperBase::ContainsId(this_00,*piVar4);
    if (cVar1 == '\0') goto LAB_0348dc04;
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    piVar4 = (int *)FUN_03489ff8(*(undefined8 *)(this + 0xe8),0);
    uVar2 = PlayerInfo::IsArtifactUnlocked(this_02,*piVar4);
  }
  else {
LAB_0348dc04:
    uVar2 = 0;
  }
  (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),uVar2);
LAB_0348dc1c:
  lVar5 = *(long *)(this + 0x128);
  if (lVar5 != 0) {
    FUN_05478178(awStack_18,L"[MONTHLY_CARD_BUY_TIMES]",auStack_20);
    TodReplaceNumberString(awStack_18,L"{NUM}",*(int *)(this + 0x104));
    PuzzleTip::SetTip(lVar5,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiftFoReturnBundleWidget::OnBuyGiftFoReturn(int) */

void __thiscall
GiftFoReturnBundleWidget::OnBuyGiftFoReturn(GiftFoReturnBundleWidget *this,int param_1)

{
  if (*(int *)(this + 0x100) != param_1) {
    return;
  }
  *(int *)(this + 0x104) = *(int *)(this + 0x104) + -1;
  RefreshInfo(this);
  return;
}


/* GiftFoReturnBundleWidget::~GiftFoReturnBundleWidget() */

void __thiscall GiftFoReturnBundleWidget::~GiftFoReturnBundleWidget(GiftFoReturnBundleWidget *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06640d08;
  *(undefined ***)this = &PTR_GetClass_066409e0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x110);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GiftFoReturnBundleWidget::~GiftFoReturnBundleWidget() */

void __thiscall GiftFoReturnBundleWidget::~GiftFoReturnBundleWidget(GiftFoReturnBundleWidget *this)

{
  ~GiftFoReturnBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnBundleWidget::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo>
   > const&, int, int, int) */

void __thiscall
GiftFoReturnBundleWidget::InitView
          (GiftFoReturnBundleWidget *this,int param_1,vector *param_2,int param_3,int param_4,
          int param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  UIWidgetText *pUVar7;
  long *plVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  code *pcVar11;
  int iVar12;
  undefined1 auStack_b8 [8];
  wstring awStack_b0 [8];
  GAME_ITEM_INFO aGStack_a8 [4];
  int local_a4;
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8),param_2);
  *(int *)(this + 0x100) = param_3;
  *(int *)(this + 0x104) = param_4;
  *(int *)(this + 0x108) = param_5;
  if ((param_3 - 6U < 2) || (iVar12 = 0x2d, (uint)param_3 < 2)) {
    iVar12 = 0x44;
  }
  cVar1 = std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::empty
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)param_2);
  if (cVar1 == '\0') {
    piVar6 = (int *)FUN_0348a244(*(undefined8 *)param_2);
    GetGameItemInfo(*piVar6,0x7fffffff,0);
    pUVar7 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar7,awStack_80);
    uVar2 = FUN_0348b398(0x28);
    (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,0,0,*(undefined4 *)(this + 0x50),uVar2);
    UIWidgetText::SetFontIndex(pUVar7,0x77);
    FUN_03489fb4(pUVar7 + 0xe0,5);
    pcVar11 = *(code **)(*(long *)pUVar7 + 0x170);
    Sexy::Color::Color((Color *)awStack_40,1);
    (*pcVar11)(pUVar7,0,awStack_40);
    (**(code **)(*(long *)this + 0x60))(this,pUVar7);
    piVar6 = (int *)FUN_0348a244(*(undefined8 *)param_2);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],false);
    uVar2 = FUN_0348b398(0x37);
    uVar3 = FUN_0348b398(0x28);
    uVar4 = FUN_0348b398(0x46);
    (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,plVar8);
    FUN_05478178(awStack_b0,L"[DANGERROOM_SPECIAL_PURCHASE_BTN_DISCOUNT_PRICE]",auStack_b8);
    TodReplaceNumberString(awStack_b0,L"{NUMBER}",iVar12);
    Sexy::Color::Color((Color *)awStack_40,1);
    pPVar9 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar9,0x142,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)awStack_40);
    *(PVZ2UIButton **)(this + 0x120) = pPVar9;
    FUN_05476c50(awStack_78);
    FUN_05476c50(awStack_b0);
    nop();
    pPVar9 = *(PVZ2UIButton **)(this + 0x120);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa21d0,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06aa24c0,3);
    PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)awStack_40);
    plVar8 = *(long **)(this + 0x120);
    uVar2 = FUN_0348b398(0x5a);
    uVar3 = FUN_0348b398(0x6e);
    uVar4 = FUN_0348b398(0x55);
    uVar5 = FUN_0348b398(0x23);
    (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
    plVar8 = *(long **)(this + 0x120);
    pcVar11 = *(code **)(*plVar8 + 800);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_16);
    (*pcVar11)(plVar8,uVar10);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
    FUN_05478178(awStack_78,L"[MONTHLY_CARD_BUY_TIMES]",awStack_b0);
    TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(this + 0x104));
    pUVar7 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar7,awStack_40);
    *(UIWidgetText **)(this + 0x128) = pUVar7;
    FUN_05476c50(awStack_40);
    FUN_05476c50(awStack_78);
    nop();
    plVar8 = *(long **)(this + 0x128);
    uVar2 = FUN_0348b398(0);
    uVar3 = FUN_0348b398(0x93);
    uVar4 = FUN_0348b398(0x14);
    (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,*(undefined4 *)(this + 0x50),uVar4);
    UIWidgetText::SetFontIndex(*(UIWidgetText **)(this + 0x128),0xa4);
    FUN_03489fb4(*(long *)(this + 0x128) + 0xe0,5);
    plVar8 = *(long **)(this + 0x128);
    pcVar11 = *(code **)(*plVar8 + 0x170);
    Sexy::Color::Color((Color *)awStack_40,0x66,0x37,0);
    (*pcVar11)(plVar8,0,awStack_40);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
    if (local_a4 - 1U < 2) {
      FUN_05478178(awStack_78,L"[GIFT_RETURN_VALIDITY]",awStack_b0);
      TodReplaceNumberString(awStack_78,L"{NUM}",3);
      pUVar7 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar7,awStack_40);
      FUN_05476c50(awStack_40);
      FUN_05476c50(awStack_78);
      nop();
      uVar2 = FUN_0348b398(10);
      uVar3 = FUN_0348b398(0x5a);
      uVar4 = FUN_0348b398(0x4b);
      uVar5 = FUN_0348b398(0x14);
      (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,uVar2,uVar3,uVar4,uVar5);
      UIWidgetText::SetFontIndex(pUVar7,0xa5);
      FUN_03489fb4(pUVar7 + 0xe0,5);
      pcVar11 = *(code **)(*(long *)pUVar7 + 0x170);
      Sexy::Color::Color((Color *)awStack_40,0x66,0x37,0);
      (*pcVar11)(pUVar7,0,awStack_40);
      (**(code **)(*(long *)this + 0x60))(this,pUVar7);
      FUN_05478178(awStack_78,&DAT_056f11a8,awStack_b0);
      Sexy::Color::Color((Color *)awStack_40,1);
      pPVar9 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar9,0x137,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)awStack_40);
      *(PVZ2UIButton **)(this + 0x118) = pPVar9;
      FUN_05476c50(awStack_78);
      nop();
      pPVar9 = *(PVZ2UIButton **)(this + 0x118);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa2280,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06aa2230,3);
      PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)awStack_40);
      plVar8 = *(long **)(this + 0x118);
      uVar2 = FUN_0348b398(5);
      uVar3 = FUN_0348b398(0x6e);
      uVar4 = FUN_0348b398(0x55);
      uVar5 = FUN_0348b398(0x23);
      (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
      plVar8 = *(long **)(this + 0x118);
      pcVar11 = *(code **)(*plVar8 + 800);
      uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_16);
      (*pcVar11)(plVar8,uVar10);
      (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
    }
    else if (local_a4 == 0x4000) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      piVar6 = (int *)FUN_0348a244(*(undefined8 *)param_2);
      cVar1 = PlayerInfo::IsArtifactUnlocked(this_01,*piVar6);
      if (cVar1 != '\0') {
        (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),1);
      }
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_a8);
  }
  if (param_3 == -1) {
    (**(code **)(*(long *)this + 0x158))(this,0);
  }
  RefreshInfo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiftFoReturnBundleWidget::ObatainTrialCard() */

void __thiscall GiftFoReturnBundleWidget::ObatainTrialCard(GiftFoReturnBundleWidget *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2928];
  string asStack_178 [368];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"index");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0348b16c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_178,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* GiftFoReturnBundleWidget::ButtonDepress(int) */

void __thiscall GiftFoReturnBundleWidget::ButtonDepress(GiftFoReturnBundleWidget *this,int param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x137) {
    ObatainTrialCard(this);
  }
  else if (param_1 == 0x142) {
    iVar1 = *(int *)(this + 0x100);
    if (iVar1 == 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.GiftFoReturn1");
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      if (iVar1 == 1) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn2";
      }
      else if (iVar1 == 2) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn3";
      }
      else if (iVar1 == 3) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn4";
      }
      else if (iVar1 == 4) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn5";
      }
      else if (iVar1 == 5) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn6";
      }
      else if (iVar1 == 6) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn7";
      }
      else if (iVar1 == 7) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn8";
      }
      else if (iVar1 == 8) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn9";
      }
      else if (iVar1 == 9) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn10";
      }
      else if (iVar1 == 10) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn11";
      }
      else {
        if (iVar1 != 0xb) goto LAB_03491f14;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.GiftFoReturn12";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_03491f14:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to GiftFoReturnBundleWidget::ButtonDepress(int) */

void __thiscall GiftFoReturnBundleWidget::ButtonDepress(GiftFoReturnBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

