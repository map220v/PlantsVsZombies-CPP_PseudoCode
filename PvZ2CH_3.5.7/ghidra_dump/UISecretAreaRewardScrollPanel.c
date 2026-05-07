// Class: UISecretAreaRewardScrollPanel


/* UISecretAreaRewardScrollPanel::ButtonPress(int) */

int UISecretAreaRewardScrollPanel::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UISecretAreaRewardScrollPanel::ButtonPress(int) */

void __thiscall
UISecretAreaRewardScrollPanel::ButtonPress(UISecretAreaRewardScrollPanel *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretAreaRewardScrollPanel::GetLayoutName() */

void __thiscall UISecretAreaRewardScrollPanel::GetLayoutName(UISecretAreaRewardScrollPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISecretAreaRewardScrollPanel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UISecretAreaRewardScrollPanel::AddButton(Sexy::Widget*, int, std::string const&, std::string
   const&, int, int, int, int, Sexy::ButtonListener*) */

NewerPresentButton * __thiscall
UISecretAreaRewardScrollPanel::AddButton
          (UISecretAreaRewardScrollPanel *this,Widget *param_1,int param_2,string *param_3,
          string *param_4,int param_5,int param_6,int param_7,int param_8,ButtonListener *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentButton *this_00;
  
  this_00 = ::operator_new(0x310);
  NewerPresentButton::NewerPresentButton(this_00,param_2,param_3,param_4,param_9);
  Lua::CUIButton::SetImageType((CUIButton *)this_00,2);
  uVar1 = FUN_03dcc2c4(param_5);
  uVar2 = FUN_03dcc2c4(param_6);
  uVar3 = FUN_03dcc2c4(param_7);
  uVar4 = FUN_03dcc2c4(param_8);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UISecretAreaRewardScrollPanel::AddImage(Sexy::Widget*, std::string const&, int, int, int, int) */

NewerPresentImage * __thiscall
UISecretAreaRewardScrollPanel::AddImage
          (UISecretAreaRewardScrollPanel *this,Widget *param_1,string *param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentImage *this_00;
  
  this_00 = ::operator_new(0x128);
  NewerPresentImage::NewerPresentImage(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dcc2c4(param_3);
  uVar2 = FUN_03dcc2c4(param_4);
  uVar3 = FUN_03dcc2c4(param_5);
  uVar4 = FUN_03dcc2c4(param_6);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UISecretAreaRewardScrollPanel::AddImage(Sexy::Widget*, std::string const&, int, int) */

NewerPresentImage * __thiscall
UISecretAreaRewardScrollPanel::AddImage
          (UISecretAreaRewardScrollPanel *this,Widget *param_1,string *param_2,int param_3,
          int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NewerPresentImage *this_00;
  
  this_00 = ::operator_new(0x128);
  NewerPresentImage::NewerPresentImage(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dcc2c4(param_3);
  uVar2 = FUN_03dcc2c4(param_4);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar2,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UISecretAreaRewardScrollPanel::AddText(Sexy::Widget*, std::wstring const&, int, int, int, int) */

NewerPresentText * __thiscall
UISecretAreaRewardScrollPanel::AddText
          (UISecretAreaRewardScrollPanel *this,Widget *param_1,wstring *param_2,int param_3,
          int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  NewerPresentText *this_00;
  
  this_00 = ::operator_new(0x100);
  NewerPresentText::NewerPresentText(this_00,param_2);
  (**(code **)(*(long *)this_00 + 0x90))(this_00,1);
  uVar1 = FUN_03dcc2c4(param_3);
  uVar2 = FUN_03dcc2c4(param_4);
  uVar3 = FUN_03dcc2c4(param_5);
  uVar4 = FUN_03dcc2c4(param_6);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this_00);
  return this_00;
}


/* UISecretAreaRewardScrollPanel::UISecretAreaRewardScrollPanel() */

void __thiscall
UISecretAreaRewardScrollPanel::UISecretAreaRewardScrollPanel(UISecretAreaRewardScrollPanel *this)

{
  UISingletonDialog<UISecretAreaRewardScrollPanel>::UISingletonDialog
            ((UISingletonDialog<UISecretAreaRewardScrollPanel> *)this);
  *(undefined4 *)(this + 0x134) = 7;
  *(undefined4 *)(this + 0x13c) = 0x40e00000;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677c530;
  *(undefined ***)this = &PTR_GetClass_0677c1e0;
  *(undefined4 *)(this + 0x138) = 1;
  *(undefined4 *)(this + 0x140) = 0x41a80000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  return;
}


/* UISecretAreaRewardScrollPanel::~UISecretAreaRewardScrollPanel() */

void __thiscall
UISecretAreaRewardScrollPanel::~UISecretAreaRewardScrollPanel(UISecretAreaRewardScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0677c1e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0677c530;
  std::vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>>::~vector
            ((vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>> *)
             (this + 0x148));
  UISingletonDialog<UISecretAreaRewardScrollPanel>::~UISingletonDialog
            ((UISingletonDialog<UISecretAreaRewardScrollPanel> *)this);
  return;
}


/* UISecretAreaRewardScrollPanel::~UISecretAreaRewardScrollPanel() */

void __thiscall
UISecretAreaRewardScrollPanel::~UISecretAreaRewardScrollPanel(UISecretAreaRewardScrollPanel *this)

{
  ~UISecretAreaRewardScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretAreaRewardScrollPanel::ButtonDepress(int) */

void __thiscall
UISecretAreaRewardScrollPanel::ButtonDepress(UISecretAreaRewardScrollPanel *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  undefined8 uVar3;
  ProfileMgr *this_02;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 1000) {
    this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    uVar3 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this_01);
    FUN_05475d88((string *)awStack_48,uVar3);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_02);
    std::string::string(asStack_40,"world");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(uVar3,(string *)awStack_48);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"index");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    FUN_054751c4(uVar3,param_1);
    std::string::~string(asStack_40);
    nop();
    lVar2 = UISingletonDialog<UISecretAreaReward>::GetSingletonPtr();
    FUN_03dcb6d8(lVar2 + 0x140,param_1);
    this_03 = (NetworkMgr *)NetworkMgr::Instance();
    this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
    INetworkMsgProcess::RequestSecretAreaReward(this_04,(string *)awStack_48,param_1);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    std::string::~string((string *)awStack_48);
  }
  else {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      FUN_05476574(awStack_48);
      TodStringTranslate(L"[SECRET_AREA_STAR_NOT_ENOUGH]");
      FUN_054766c8(awStack_48,asStack_38);
      FUN_05476c50(asStack_38);
      TodReplaceNumberString(awStack_48,L"{NUM}",(param_1 + -999) * 3);
      FUN_054766c8(awStack_48,asStack_38);
      FUN_05476c50(asStack_38);
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_48,awStack_50);
      std::string::string(asStack_38,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_38,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_38);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar2 + 0xd8,asStack_40);
      FUN_05476c50(asStack_40);
      FUN_05476c50(awStack_48);
      FUN_05476c50(awStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UISecretAreaRewardScrollPanel::ButtonDepress(int) */

void __thiscall
UISecretAreaRewardScrollPanel::ButtonDepress(UISecretAreaRewardScrollPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretAreaRewardScrollPanel::UpdateUI(PVZ2UIScrollingWidget*) */

void __thiscall
UISecretAreaRewardScrollPanel::UpdateUI
          (UISecretAreaRewardScrollPanel *this,PVZ2UIScrollingWidget *param_1)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  UnchartedModeNetworkMgr *this_01;
  UnchartedModeWorldData *pUVar2;
  Widget *pWVar3;
  ulong uVar4;
  long lVar5;
  Widget *pWVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  string asStack_138 [8];
  string asStack_130 [8];
  string asStack_128 [8];
  UnchartedModeWorldData aUStack_120 [24];
  int local_108;
  int local_104;
  undefined8 local_88;
  undefined8 local_80;
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  pUVar2 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this_01);
  iVar9 = 10;
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar2);
  *(float *)(this + 0x140) = (float)local_104;
  *(float *)(this + 0x13c) = (float)local_108;
  uVar1 = FUN_03dcb6ec(local_88,local_80);
  *(undefined4 *)(this + 0x134) = uVar1;
  std::vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>>::operator=
            ((vector<UnchartedModeStarRewardData,std::allocator<UnchartedModeStarRewardData>> *)
             (this + 0x148),(vector *)&local_88);
  std::string::string(asStack_128,"UIImage_BG");
  pWVar3 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  (**(code **)(*(long *)pWVar3 + 0x80))(pWVar3,1,1);
  while( true ) {
    iVar7 = (int)uVar8;
    uVar4 = FUN_03dcb6ec(*(undefined8 *)(this + 0x148),*(undefined8 *)(this + 0x150));
    if (uVar4 <= uVar8) break;
    Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    UnchartedModeNetworkMgr::GetWorldResourcePrefix();
    Sexy::StrFormat("_STAR_REWARD_%d",asStack_128,(ulong)(iVar7 + 1));
    std::operator+(asStack_130,asStack_128);
    std::string::~string(asStack_128);
    std::string::~string(asStack_130);
    lVar5 = FUN_03dcb6f8(*(undefined8 *)(this + 0x148),uVar8);
    if (*(int *)(lVar5 + 8) == 1) {
      pWVar6 = (Widget *)AddImage(this,pWVar3,asStack_138,iVar9,1,0xaa,0x118);
      std::string::string(asStack_128,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_GRAY_MASK");
      pWVar6 = (Widget *)AddImage(this,pWVar6,asStack_128,10,0,0xaa,0x118);
      std::string::~string(asStack_128);
      nop();
      std::string::string(asStack_128,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_BUY_ALREADY");
      AddImage(this,pWVar6,asStack_128,0x36,0x5a);
      std::string::~string(asStack_128);
      nop();
      std::string::string(asStack_128,"IMAGE_UI_BUNDLE_ARTIFACT_PRESENT_BUY_ALREADY_TEXT");
      AddImage(this,pWVar6,asStack_128,0x2c,0xa0);
      std::string::~string(asStack_128);
      nop();
    }
    else {
      if (*(float *)(this + 0x13c) < (float)*(int *)(lVar5 + 0xc)) {
        iVar7 = iVar7 + 1000;
      }
      AddButton(this,pWVar3,iVar7,asStack_138,asStack_138,iVar9,1,0xaa,0x118,
                (ButtonListener *)(this + 0xd8));
    }
    uVar8 = uVar8 + 1;
    iVar9 = iVar9 + 0xb4;
    std::string::~string(asStack_138);
  }
  Sexy::ScrollWidget::ClientSizeChanged((ScrollWidget *)param_1);
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

