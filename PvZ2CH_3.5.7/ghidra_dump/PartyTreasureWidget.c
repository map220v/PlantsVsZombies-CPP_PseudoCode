// Class: PartyTreasureWidget


/* PartyTreasureWidget::~PartyTreasureWidget() */

void __thiscall PartyTreasureWidget::~PartyTreasureWidget(PartyTreasureWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069f1780;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f1ae8;
  NewTreasureWidget::~NewTreasureWidget((NewTreasureWidget *)this);
  return;
}


/* PartyTreasureWidget::~PartyTreasureWidget() */

void __thiscall PartyTreasureWidget::~PartyTreasureWidget(PartyTreasureWidget *this)

{
  ~PartyTreasureWidget(this);
  AK::FreeHook(this);
  return;
}


/* PartyTreasureWidget::PartyTreasureWidget() */

void __thiscall PartyTreasureWidget::PartyTreasureWidget(PartyTreasureWidget *this)

{
  NewTreasureWidget::NewTreasureWidget((NewTreasureWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069f1780;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069f1ae8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTreasureWidget::BuyConfirm(UIMessageBox*, int) */

void __thiscall
PartyTreasureWidget::BuyConfirm(PartyTreasureWidget *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var2;
  PurchaseBroker *pPVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 0) {
      p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar3 = (PurchaseBroker *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_rightmost(p_Var2);
      std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.PartyEpsActivity6");
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
        __s = "com.popcap.ios.chs.PVZ2.PartyEpsActivity30";
      }
      else if (iVar1 == 2) {
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.PartyEpsActivity68";
      }
      else {
        if (iVar1 != 3) goto LAB_04ea53b8;
        p_Var2 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar3 = (PurchaseBroker *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost(p_Var2);
        __s = "com.popcap.ios.chs.PVZ2.PartyEpsActivity128";
      }
      std::string::string(asStack_10,__s);
      PurchaseBroker::RequestPayment(pPVar3,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
    }
  }
LAB_04ea53b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTreasureWidget::OnPurchaseButtonDepress() */

void __thiscall PartyTreasureWidget::OnPurchaseButtonDepress(PartyTreasureWidget *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CORNUCOPIA_PRESENT_BUY_CONFIRM]");
    UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,BuyConfirm);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<PartyTreasureWidget,void(PartyTreasureWidget::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTreasureWidget::Init(int) */

void __thiscall PartyTreasureWidget::Init(PartyTreasureWidget *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int local_38 [2];
  wstring awStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateBundleWidget::Init((TemplateBundleWidget *)this,param_1);
  this[0x59] = (PartyTreasureWidget)0x0;
  FUN_05476574(awStack_30);
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == 0) {
    FUN_05478178(asStack_28,L"[SECRET_BUY_STR]",(ActivityTypeID *)local_38);
    iVar1 = 6;
  }
  else if (iVar1 == 1) {
    FUN_05478178(asStack_28,L"[SECRET_BUY_STR]",(ActivityTypeID *)local_38);
    iVar1 = 0x1e;
  }
  else if (iVar1 == 2) {
    FUN_05478178(asStack_28,L"[SECRET_BUY_STR]",(ActivityTypeID *)local_38);
    iVar1 = 0x44;
  }
  else {
    if (iVar1 != 3) goto LAB_04eaf340;
    FUN_05478178(asStack_28,L"[SECRET_BUY_STR]",(ActivityTypeID *)local_38);
    iVar1 = 0x80;
  }
  TodReplaceNumberString((wstring *)asStack_28,L"{NUMBER}",iVar1);
  TodStringTranslate((wstring *)asStack_20);
  FUN_054766c8(awStack_30,&local_18);
  FUN_05476c50(&local_18);
  FUN_05476c50((wstring *)asStack_20);
  FUN_05476c50(asStack_28);
  nop();
LAB_04eaf340:
  PVZ2UIButton::SetLabelText(*(PVZ2UIButton **)(this + 0x110),awStack_30);
  lVar6 = *(long *)(this + 0x110);
  iVar1 = FUN_04ea1c84(*(undefined4 *)(lVar6 + 0x48));
  iVar2 = FUN_04ea1c88(*(undefined4 *)(lVar6 + 0x4c));
  iVar3 = FUN_04ea1c8c(*(undefined4 *)(lVar6 + 0x50));
  iVar4 = FUN_04ea1c90(*(undefined4 *)(lVar6 + 0x54));
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,iVar3,iVar4);
  plVar7 = *(long **)(this + 0x110);
  iVar1 = FUN_04ea3948(0x19);
  (**(code **)(*plVar7 + 0x198))(plVar7,local_18,local_14 + iVar1,local_10,local_c);
  std::string::string(asStack_20,"IMAGE_UI_CORNUCOPIA_NEW_TREASURE_BUNDLE_BG");
  uVar5 = StringHelper::ToImage(asStack_20,false);
  *(undefined8 *)(this + 0xf0) = uVar5;
  std::string::~string(asStack_20);
  nop();
  local_38[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_38);
  std::operator+("IMAGE_UI_PARTY_ASSIST_TITLE_",asStack_28);
  uVar5 = StringHelper::ToImage(asStack_20,false);
  *(undefined8 *)(this + 0xf8) = uVar5;
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  local_38[0] = *(int *)(this + 0xe0) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_38);
  std::operator+("IMAGE_UI_PARTY_ASSIST_SHOP_REWARD_",asStack_28);
  uVar5 = StringHelper::ToImage(asStack_20,false);
  *(undefined8 *)(this + 0x100) = uVar5;
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  FUN_05476c50(awStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

