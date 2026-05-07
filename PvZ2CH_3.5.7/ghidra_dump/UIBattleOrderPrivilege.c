// Class: UIBattleOrderPrivilege


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderPrivilege::GetLayoutName() */

void __thiscall UIBattleOrderPrivilege::GetLayoutName(UIBattleOrderPrivilege *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIBattleOrderPrivilege");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIBattleOrderPrivilege::~UIBattleOrderPrivilege() */

void __thiscall UIBattleOrderPrivilege::~UIBattleOrderPrivilege(UIBattleOrderPrivilege *this)

{
  *(undefined ***)this = &PTR_GetClass_06702540;
  *(undefined **)(this + 0xd8) = &DAT_06702890;
  UISingletonDialog<UIBattleOrderPrivilege>::~UISingletonDialog
            ((UISingletonDialog<UIBattleOrderPrivilege> *)this);
  return;
}


/* UIBattleOrderPrivilege::~UIBattleOrderPrivilege() */

void __thiscall UIBattleOrderPrivilege::~UIBattleOrderPrivilege(UIBattleOrderPrivilege *this)

{
  ~UIBattleOrderPrivilege(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderPrivilege::CheckThemeVersion() */

void __thiscall UIBattleOrderPrivilege::CheckThemeVersion(UIBattleOrderPrivilege *this)

{
  UIWidgetText *pUVar1;
  undefined8 uVar2;
  UIWidgetImage *this_00;
  Image *pIVar3;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"UIText_Title");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  UIBattleOrder::GetThemeVersionSuffixUpper();
  uVar2 = FUN_0547429c(asStack_28);
  Sexy::StrFormat("[BATTLE_ORDER_%s]",asStack_20,uVar2);
  Sexy::ToWString(asStack_20);
  TodStringTranslate(awStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_20,"UIImage_Background");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
  UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
  UIBattleOrder::GetThemeVersionSuffixUpper();
  std::operator+("IMAGE_UI_BATTLEORDER_PRIVILEGE_BG_",(string *)awStack_18);
  pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
  UIWidgetImage::SetImage(this_00,pIVar3);
  std::string::~string(asStack_10);
  std::string::~string((string *)awStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderPrivilege::OnCreate() */

void __thiscall UIBattleOrderPrivilege::OnCreate(UIBattleOrderPrivilege *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  CheckThemeVersion(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderPrivilege::ButtonDepress(int) */

void __thiscall UIBattleOrderPrivilege::ButtonDepress(UIBattleOrderPrivilege *this,int param_1)

{
  UIMessageBox *this_00;
  undefined8 uVar1;
  Image *pIVar2;
  long lVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PurchaseBroker *this_02;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x2c) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_01);
    std::string::string((string *)awStack_10,"com.popcap.ios.chs.PVZ2.summercamp68");
    PurchaseBroker::RequestPayment(this_02,(string *)awStack_10,0);
    std::string::~string((string *)awStack_10);
    nop();
  }
  else if (param_1 == 0x20) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
      UIBattleOrder::GetThemeVersionSuffixUpper();
      uVar1 = FUN_0547429c(asStack_20);
      Sexy::StrFormat("[BATTLE_ORDER_ACTIVITY_DESCRIPTION_%s]",asStack_18,uVar1);
      Sexy::ToWString(asStack_18);
      TodStringTranslate(awStack_10);
      FUN_05476c50(awStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_28,awStack_30);
      std::string::string((string *)awStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage((string *)awStack_10,false);
      UIMessageBox::SetBackground(this_00,pIVar2);
      std::string::~string((string *)awStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar3 + 0xd8,asStack_18);
      FUN_05476c50(asStack_18);
      FUN_05476c50(awStack_28);
      FUN_05476c50(awStack_30);
    }
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIBattleOrderPrivilege>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIBattleOrderPrivilege::ButtonDepress(int) */

void __thiscall UIBattleOrderPrivilege::ButtonDepress(UIBattleOrderPrivilege *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIBattleOrderPrivilege::UIBattleOrderPrivilege() */

void __thiscall UIBattleOrderPrivilege::UIBattleOrderPrivilege(UIBattleOrderPrivilege *this)

{
  UISingletonDialog<UIBattleOrderPrivilege>::UISingletonDialog
            ((UISingletonDialog<UIBattleOrderPrivilege> *)this);
  *(undefined ***)this = &PTR_GetClass_06702540;
  *(undefined **)(this + 0xd8) = &DAT_06702890;
  return;
}

