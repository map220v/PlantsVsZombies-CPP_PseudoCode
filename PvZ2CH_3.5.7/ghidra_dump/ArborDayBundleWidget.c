// Class: ArborDayBundleWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayBundleWidget::DrawBundleRewards(Sexy::Graphics*) */

void __thiscall
ArborDayBundleWidget::DrawBundleRewards(ArborDayBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x108) != 0) {
    iVar2 = FUN_03a22530(0x78);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_03a22530(0xb4);
    iVar4 = FUN_03a22530(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar4,iVar4);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xec));
  Sexy::ToWString(asStack_38);
  iVar2 = FUN_03a22530(0x5a);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03a22530(0xb4);
  iVar4 = FUN_03a22530(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1 - iVar2,iVar3,iVar4,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,(Color *)aIStack_18,3,0);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayBundleWidget::OnBuyKettle(int) */

void __thiscall ArborDayBundleWidget::OnBuyKettle(ArborDayBundleWidget *this,int param_1)

{
  int iVar1;
  UIArborDay *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == param_1) {
    iVar1 = *(int *)(this + 0xe4);
    *(int *)(this + 0xe4) = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)(**(long **)(this + 0x110) + 0x188))(*(long **)(this + 0x110),1);
    }
    this_00 = (UIArborDay *)UISingletonDialog<UIArborDay>::GetSingletonPtr();
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    std::string::string(asStack_10,"mat_arborday_kettle");
    iVar1 = PlayerInfo::GetMaterialNum(this_02,asStack_10);
    UIArborDay::SetCurrentKettle(this_00,iVar1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayBundleWidget::OnPurchaseButtonDepress() */

void __thiscall ArborDayBundleWidget::OnPurchaseButtonDepress(ArborDayBundleWidget *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    FUN_05478178(awStack_50,L"[ARBORDAY_BUY_BUNDLE_CONFIRM]",auStack_58);
    TodReplaceNumberString(awStack_50,L"{NUM}",*(int *)(this + 0x118));
    FUN_05476c50(awStack_50);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string((string *)awStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmBuy);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<ArborDayBundleWidget,void(ArborDayBundleWidget::*)(UIMessageBox*,int)>
              (aDStack_38,awStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArborDayBundleWidget::~ArborDayBundleWidget() */

void __thiscall ArborDayBundleWidget::~ArborDayBundleWidget(ArborDayBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066ff360;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ff6c8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x118));
  TemplateBundleWidget::~TemplateBundleWidget((TemplateBundleWidget *)this);
  return;
}


/* ArborDayBundleWidget::~ArborDayBundleWidget() */

void __thiscall ArborDayBundleWidget::~ArborDayBundleWidget(ArborDayBundleWidget *this)

{
  ~ArborDayBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* ArborDayBundleWidget::ArborDayBundleWidget(ArborPresentData) */

void __thiscall
ArborDayBundleWidget::ArborDayBundleWidget
          (ArborDayBundleWidget *this,EggRechargeBundleData *param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  TemplateBundleWidget::TemplateBundleWidget((TemplateBundleWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066ff360;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066ff6c8;
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x118));
  EggRechargeBundleData::operator=((EggRechargeBundleData *)(this + 0x118),param_2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyKettle);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArborDayBundleWidget,void(ArborDayBundleWidget::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyArborDayKettle,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayBundleWidget::ConfirmBuy(UIMessageBox*, int) */

void __thiscall
ArborDayBundleWidget::ConfirmBuy(ArborDayBundleWidget *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar2;
  long lVar3;
  undefined8 uVar4;
  DNetwork *this_03;
  wstring awStack_d48 [8];
  wstring awStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2592];
  string asStack_2c8 [704];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetNumGems(this_01,true);
    if (iVar1 < *(int *)(this + 0x118)) {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[ARBORDAY_GEM_NOT_ENOUGH]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_02,awStack_d40,awStack_d48);
        std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage(asStack_ce8,false);
        UIMessageBox::SetBackground(this_02,pIVar2);
        std::string::~string(asStack_ce8);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(this_02);
        thunk_FUN_05477b9c(lVar3 + 0xd8,amStack_d18);
        FUN_05476c50(amStack_d18);
        FUN_05476c50(awStack_d40);
        FUN_05476c50(awStack_d48);
      }
    }
    else {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      std::string::string((string *)awStack_d40,"bi");
      uVar4 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,(string *)awStack_d40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
      FUN_05474278(uVar4,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string((string *)awStack_d40);
      nop();
      this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_03a22198(afStack_d38,this);
      std::string::string((string *)awStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_03,asStack_2c8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
                 (string *)awStack_d40,0);
      std::string::~string((string *)awStack_d40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_d18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayBundleWidget::Init(int) */

void __thiscall ArborDayBundleWidget::Init(ArborDayBundleWidget *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Image *pIVar4;
  UIWidgetImage *this_00;
  undefined8 uVar5;
  long *plVar6;
  PVZ2UIButton *this_01;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  int local_80 [2];
  wstring awStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateBundleWidget::Init((TemplateBundleWidget *)this,param_1);
  FUN_05476574(awStack_88);
  FUN_05478178((wstring *)local_80,L"[ARBORDAY_PRESENT_PRICE_DESC]",auStack_90);
  TodReplaceNumberString((wstring *)local_80,L"{NUMS}",*(int *)(this + 0x118));
  TodStringTranslate(awStack_78);
  FUN_054766c8(awStack_88,(string *)local_40);
  FUN_05476c50((string *)local_40);
  FUN_05476c50(awStack_78);
  FUN_05476c50((wstring *)local_80);
  nop();
  PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x110),awStack_88);
  this_01 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac35b8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ac35b8,3);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3708);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,pIVar4);
  uVar1 = FUN_03a22530(0xb);
  uVar2 = FUN_03a22530(10);
  uVar3 = FUN_03a22530(0x19);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_00,(string *)local_40,0.0);
  plVar6 = *(long **)(this + 0x110);
  this_00[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(*plVar6 + 0x60))(plVar6,this_00);
  std::string::string((string *)local_40,"IMAGE_UI_ARBORDAY_BUNDLE_BG");
  uVar5 = StringHelper::ToImage((string *)local_40,false);
  *(undefined8 *)(this + 0xf0) = uVar5;
  std::string::~string((string *)local_40);
  nop();
  local_80[0] = *(int *)(this + 0xe0) + 2;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_80);
  std::operator+("IMAGE_UI_ARBORDAY_BUNDLE_TITLE",(string *)awStack_78);
  uVar5 = StringHelper::ToImage((string *)local_40,false);
  *(undefined8 *)(this + 0xf8) = uVar5;
  std::string::~string((string *)local_40);
  std::string::~string((string *)awStack_78);
  local_80[0] = *(int *)(this + 0xe0) + 2;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_80);
  std::operator+("IMAGE_UI_ARBORDAY_BUNDLE_IMG",(string *)awStack_78);
  uVar5 = StringHelper::ToImage((string *)local_40,false);
  *(undefined8 *)(this + 0x100) = uVar5;
  std::string::~string((string *)local_40);
  std::string::~string((string *)awStack_78);
  std::string::string((string *)local_40,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_ARBORDAY_KETTLE");
  uVar5 = StringHelper::ToImage((string *)local_40,false);
  *(undefined8 *)(this + 0x108) = uVar5;
  std::string::~string((string *)local_40);
  nop();
  FUN_05476c50(awStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

