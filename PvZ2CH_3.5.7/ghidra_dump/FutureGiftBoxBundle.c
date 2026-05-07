// Class: FutureGiftBoxBundle


/* FutureGiftBoxBundle::Draw(Sexy::Graphics*) */

void __thiscall FutureGiftBoxBundle::Draw(FutureGiftBoxBundle *this,Graphics *param_1)

{
  (**(code **)(*(long *)this + 800))();
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x330))(this,param_1);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureGiftBoxBundle::DrawBundleTitle(Sexy::Graphics*) */

void __thiscall FutureGiftBoxBundle::DrawBundleTitle(FutureGiftBoxBundle *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf8) != 0) {
    iVar1 = FUN_04e73064(0x1e);
    iVar2 = FUN_04e73064(0);
    iVar3 = FUN_04e73064(0x3c);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50) - iVar3,iVar3);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureGiftBoxBundle::FutureGiftBoxBundle() */

void __thiscall FutureGiftBoxBundle::FutureGiftBoxBundle(FutureGiftBoxBundle *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  TemplateBundleWidget::TemplateBundleWidget((TemplateBundleWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069e5db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e6118;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyWishBundle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<FutureGiftBoxBundle,void(FutureGiftBoxBundle::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyFutureGiftBox,&local_40);
  return;
}


/* FutureGiftBoxBundle::~FutureGiftBoxBundle() */

void __thiscall FutureGiftBoxBundle::~FutureGiftBoxBundle(FutureGiftBoxBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_069e5db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069e6118;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x118));
  TemplateBundleWidget::~TemplateBundleWidget((TemplateBundleWidget *)this);
  return;
}


/* FutureGiftBoxBundle::~FutureGiftBoxBundle() */

void __thiscall FutureGiftBoxBundle::~FutureGiftBoxBundle(FutureGiftBoxBundle *this)

{
  ~FutureGiftBoxBundle(this);
  AK::FreeHook(this);
  return;
}


/* FutureGiftBoxBundle::OnBuyWishBundle(int) */

void __thiscall FutureGiftBoxBundle::OnBuyWishBundle(FutureGiftBoxBundle *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0xe0) != param_1) {
    return;
  }
  iVar1 = *(int *)(this + 0xe4);
  *(int *)(this + 0xe4) = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
  }
  Sexy::LazySingleton<UIFutureGiftBoxMgr>::GetInstance();
  UIFutureGiftBoxMgr::RequestNetwork();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureGiftBoxBundle::SetData(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&) */

void __thiscall FutureGiftBoxBundle::SetData(FutureGiftBoxBundle *this,int param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  UIWidgetText *this_00;
  ulong uVar10;
  UIWidgetImage *this_01;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  code *pcVar14;
  string asStack_20 [8];
  wstring awStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xe4) = param_1;
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x118),param_2);
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x118);
    uVar10 = FUN_04e72bf8(uVar11,*(undefined8 *)(this + 0x120));
    if (uVar10 <= uVar13) break;
    piVar7 = (int *)FUN_04e72c0c(uVar11,uVar13);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,0,false);
    iVar1 = FUN_04e73064(0x14);
    iVar2 = FUN_04e73064(0x5a);
    uVar3 = FUN_04e73064(0xc3);
    uVar4 = FUN_04e73064(0x1e);
    iVar12 = (int)uVar13;
    (**(code **)(*plVar8 + 0x198))(plVar8,iVar1 + iVar2 * iVar12,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,plVar8);
    lVar9 = FUN_04e72c0c(*(undefined8 *)(this + 0x118),uVar13);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar9 + 4));
    Sexy::ToWString(asStack_20);
    this_00 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_00,awStack_18);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    iVar1 = FUN_04e73064(0x37);
    iVar2 = FUN_04e73064(0x5a);
    uVar3 = FUN_04e73064(0xc3);
    uVar4 = FUN_04e73064(0x3c);
    uVar5 = FUN_04e73064(0x1e);
    uVar13 = uVar13 + 1;
    (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar1 + iVar2 * iVar12,uVar3,uVar4,uVar5);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_Outline);
    FUN_04e72bbc(this_00 + 0xe8,uVar11);
    FUN_04e72d40(this_00 + 0xe0);
    pcVar14 = *(code **)(*(long *)this_00 + 0x170);
    Sexy::Color::Color((Color *)awStack_18,1);
    (*pcVar14)(this_00,0,awStack_18);
    lVar9 = *(long *)this;
    this_00[0x6d] = (UIWidgetText)0x0;
    (**(code **)(lVar9 + 0x60))(this,this_00);
  }
  std::string::string((string *)awStack_18,"IMAGE_UI_WISHINGPOOL_GIFT");
  this_01 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_01,(string *)awStack_18);
  std::string::~string((string *)awStack_18);
  nop();
  uVar3 = FUN_04e73064(0xa0);
  uVar4 = FUN_04e73064(0xa5);
  uVar5 = FUN_04e73064(0x27);
  uVar6 = FUN_04e73064(0x26);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureGiftBoxBundle::OnPurchaseButtonDepress() */

void __thiscall FutureGiftBoxBundle::OnPurchaseButtonDepress(FutureGiftBoxBundle *this)

{
  int iVar1;
  undefined8 uVar2;
  DNetwork *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  PurchaseBroker *this_01;
  char *__s;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3152];
  string asStack_98 [144];
  long local_8;
  
  iVar1 = *(int *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
    FUN_05474278(uVar2,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_04e73008(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_98,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  else {
    if (iVar1 == 1) {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var3);
      __s = "com.popcap.ios.chs.PVZ2.FutureGiftBox6";
    }
    else if (iVar1 == 2) {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var3);
      __s = "com.popcap.ios.chs.PVZ2.FutureGiftBox30";
    }
    else if (iVar1 == 3) {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var3);
      __s = "com.popcap.ios.chs.PVZ2.FutureGiftBox98";
    }
    else {
      if (iVar1 != 4) goto LAB_04e75090;
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(p_Var3);
      __s = "com.popcap.ios.chs.PVZ2.FutureGiftBox128";
    }
    std::string::string(asStack_ce8,__s);
    PurchaseBroker::RequestPayment(this_01,asStack_ce8,0);
    std::string::~string(asStack_ce8);
    nop();
  }
LAB_04e75090:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureGiftBoxBundle::Init(int) */

void __thiscall FutureGiftBoxBundle::Init(FutureGiftBoxBundle *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  PVZ2UIButton *this_00;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  int local_80 [2];
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateBundleWidget::Init((TemplateBundleWidget *)this,param_1);
  FUN_05476574(awStack_88);
  iVar2 = *(int *)(this + 0xe0);
  if (iVar2 == 0) {
    FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
    TodReplaceNumberString((wstring *)local_80,L"{NUMBER}",0);
    TodStringTranslate((wstring *)asStack_78);
    FUN_054766c8(awStack_88,asStack_40);
    FUN_05476c50(asStack_40);
    FUN_05476c50((wstring *)asStack_78);
    FUN_05476c50((ActivityTypeID *)local_80);
    nop();
  }
  else {
    if (iVar2 == 1) {
      FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
      iVar2 = 6;
    }
    else if (iVar2 == 2) {
      FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
      iVar2 = 0x1e;
    }
    else if (iVar2 == 3) {
      FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
      iVar2 = 0x62;
    }
    else {
      if (iVar2 != 4) goto LAB_04e76458;
      FUN_05478178((ActivityTypeID *)local_80,L"[SECRET_BUY_STR]",auStack_90);
      iVar2 = 0x80;
    }
    TodReplaceNumberString((wstring *)local_80,L"{NUMBER}",iVar2);
    TodStringTranslate((wstring *)asStack_78);
    FUN_054766c8(awStack_88,asStack_40);
    FUN_05476c50(asStack_40);
    FUN_05476c50((wstring *)asStack_78);
    FUN_05476c50((ActivityTypeID *)local_80);
    nop();
  }
LAB_04e76458:
  PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x110),awStack_88);
  this_00 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ba0038,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b9fe10,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  std::operator+("IMAGE_UI_FUTUREGIFTBOX_BUNDLE",asStack_78);
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0xf0) = uVar1;
  std::string::~string(asStack_40);
  std::string::~string(asStack_78);
  local_80[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_80);
  std::operator+("IMAGE_UI_WISHINGPOOL_BUNDLE",asStack_78);
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0x100) = uVar1;
  std::string::~string(asStack_40);
  std::string::~string(asStack_78);
  std::string::string(asStack_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_WISHING_COIN");
  uVar1 = StringHelper::ToImage(asStack_40,false);
  *(undefined8 *)(this + 0x108) = uVar1;
  std::string::~string(asStack_40);
  nop();
  FUN_05476c50(awStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

