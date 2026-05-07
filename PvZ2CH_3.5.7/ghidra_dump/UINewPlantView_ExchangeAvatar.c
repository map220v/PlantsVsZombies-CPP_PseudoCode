// Class: UINewPlantView_ExchangeAvatar


/* UINewPlantView_ExchangeAvatar::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPlantView_ExchangeAvatar::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlantView_ExchangeAvatar::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPlantView_ExchangeAvatar::ScrollTargetReached
          (UINewPlantView_ExchangeAvatar *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPlantView_ExchangeAvatar::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPlantView_ExchangeAvatar::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlantView_ExchangeAvatar::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
UINewPlantView_ExchangeAvatar::ScrollTargetInterrupted
          (UINewPlantView_ExchangeAvatar *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_ExchangeAvatar::GetLayoutName() */

void __thiscall UINewPlantView_ExchangeAvatar::GetLayoutName(UINewPlantView_ExchangeAvatar *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlantView_ExchangeAvatar");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar() */

void __thiscall
UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar(UINewPlantView_ExchangeAvatar *this)

{
  *(undefined ***)this = &PTR_GetClass_066a5500;
  *(undefined **)(this + 0xd8) = &DAT_066a5860;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlantView_ExchangeAvatar_066a58a8;
  std::string::~string((string *)(this + 0x150));
  UISingletonDialog<UINewPlantView_ExchangeAvatar>::~UISingletonDialog
            ((UISingletonDialog<UINewPlantView_ExchangeAvatar> *)this);
  return;
}


/* non-virtual thunk to UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar() */

void __thiscall
UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar(UINewPlantView_ExchangeAvatar *this)

{
  ~UINewPlantView_ExchangeAvatar(this + -0x138);
  return;
}


/* UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar() */

void __thiscall
UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar(UINewPlantView_ExchangeAvatar *this)

{
  ~UINewPlantView_ExchangeAvatar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar() */

void __thiscall
UINewPlantView_ExchangeAvatar::~UINewPlantView_ExchangeAvatar(UINewPlantView_ExchangeAvatar *this)

{
  ~UINewPlantView_ExchangeAvatar(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_ExchangeAvatar::OnCreate() */

void __thiscall UINewPlantView_ExchangeAvatar::OnCreate(UINewPlantView_ExchangeAvatar *this)

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
  if (pUVar1 != (UIWidgetBackground *)0x0) {
    *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UINewPlantView_ExchangeAvatar::UINewPlantView_ExchangeAvatar() */

void __thiscall
UINewPlantView_ExchangeAvatar::UINewPlantView_ExchangeAvatar(UINewPlantView_ExchangeAvatar *this)

{
  UISingletonDialog<UINewPlantView_ExchangeAvatar>::UISingletonDialog
            ((UISingletonDialog<UINewPlantView_ExchangeAvatar> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066a5500;
  *(undefined **)(this + 0xd8) = &DAT_066a5860;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlantView_ExchangeAvatar_066a58a8;
  Set8BytesTo0(this + 0x150);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x158] = (UINewPlantView_ExchangeAvatar)0x1;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_ExchangeAvatar::Update() */

void __thiscall UINewPlantView_ExchangeAvatar::Update(UINewPlantView_ExchangeAvatar *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar2;
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_avatar_ticket");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(int *)(this + 0x15c) != iVar1) {
    *(int *)(this + 0x15c) = iVar1;
    std::string::string(asStack_20,"UITextExplain_1");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
    TodStringTranslate(L"[EXCHANGEAVATAR_TEXT1]");
    TodReplaceNumberString(awStack_18,L"{COUNT}",*(int *)(this + 0x15c));
    PuzzleTip::SetTip(pUVar2,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_ExchangeAvatar::UnlockAvatar() */

void __thiscall UINewPlantView_ExchangeAvatar::UnlockAvatar(UINewPlantView_ExchangeAvatar *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  Sexy::StrFormat("%d",asStack_78,(ulong)*(uint *)(this + 0x164));
  Sexy::StrFormat("%d",asStack_70,(ulong)*(uint *)(this + 0x160));
  std::string::string(asStack_60,"di");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_60);
  thunk_FUN_05475e00(uVar1,asStack_78);
  std::string::~string(asStack_60);
  nop();
  std::string::string(asStack_60,"n");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_60);
  thunk_FUN_05475e00(uVar1,asStack_70);
  std::string::~string(asStack_60);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V514");
  FUN_03814f88(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::string::~string(asStack_70);
  std::string::~string(asStack_78);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_ExchangeAvatar::ButtonDepress(int) */

void __thiscall
UINewPlantView_ExchangeAvatar::ButtonDepress(UINewPlantView_ExchangeAvatar *this,int param_1)

{
  UIWidgetText *pUVar1;
  UIWidgetImage *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == -1) {
    UISingletonDialog<UINewPlantView_ExchangeAvatar>::CloseDialog();
  }
  else if (param_1 == 1) {
    if (this[0x158] == (UINewPlantView_ExchangeAvatar)0x0) {
      LawnApp::ShowCoinStore(gLawnApp,0xc);
      std::string::string(asStack_10,"UITextExplain_4");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"UIImage_Material");
      pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"UITextExplain_5");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"UITextExplain_1");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"UITextExplain_2");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"UITextExplain_3");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
      (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
      std::string::~string(asStack_10);
      nop();
      this[0x158] = (UINewPlantView_ExchangeAvatar)0x1;
    }
    else if (*(int *)(this + 0x15c) < *(int *)(this + 0x160)) {
      if (*(long *)(this + 0x148) != 0) {
        std::string::string(asStack_10,"UITextExplain_4");
        pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
        (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"UIImage_Material");
        pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
        (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"UITextExplain_5");
        pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
        (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"UITextExplain_1");
        pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
        (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"UITextExplain_2");
        pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
        (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
        std::string::~string(asStack_10);
        nop();
        std::string::string(asStack_10,"UITextExplain_3");
        pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
        (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,0);
        std::string::~string(asStack_10);
        nop();
        this[0x158] = (UINewPlantView_ExchangeAvatar)0x0;
      }
    }
    else {
      UnlockAvatar(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPlantView_ExchangeAvatar::ButtonDepress(int) */

void __thiscall
UINewPlantView_ExchangeAvatar::ButtonDepress(UINewPlantView_ExchangeAvatar *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_ExchangeAvatar::InitView(std::string, int, int, int) */

void __thiscall
UINewPlantView_ExchangeAvatar::InitView
          (UINewPlantView_ExchangeAvatar *this,string *param_2,undefined4 param_3,undefined4 param_4
          ,undefined4 param_5)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  UIWidgetBackground *pUVar2;
  char *__s;
  TGALogMgr *this_03;
  UIWidgetText *pUVar3;
  UIWidgetImage *pUVar4;
  DString *__n;
  string asStack_78 [8];
  wstring awStack_70 [8];
  DString aDStack_68 [16];
  string asStack_58 [8];
  string asStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  LawnApp::KillGameMaskUI(gLawnApp);
  std::string::string(asStack_58,"mat_avatar_ticket");
  uVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_58);
  *(undefined4 *)(this + 0x15c) = uVar1;
  std::string::~string(asStack_58);
  nop();
  *(undefined4 *)(this + 0x164) = param_3;
  *(undefined4 *)(this + 0x160) = param_4;
  *(undefined4 *)(this + 0x168) = param_5;
  this_02 = (NameMapperBase *)PlantNameMapper::GetInstance();
  uVar1 = NameMapperBase::GetIdForName(this_02,param_2);
  *(undefined4 *)(this + 0x16c) = uVar1;
  __n = aDStack_68;
  std::string::string(asStack_58,"Background_1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (pUVar2 != (UIWidgetBackground *)0x0) {
    __n = *(DString **)(*(long *)pUVar2 + 0x188);
    (*(code *)__n)(pUVar2,1);
  }
  thunk_FUN_05475e00(this + 0x150,param_2);
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)asStack_58);
  std::string::append(asStack_58,"1",(size_t)__n);
  DString::DString(aDStack_68,*(int *)(this + 0x15c));
  __s = (char *)DString::c_str(aDStack_68);
  std::string::append(asStack_50,__s,(size_t)__n);
  DString::~DString(aDStack_68);
  this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogExchangeAvatar(this_03,(TGAExchangeAvatarData *)asStack_58);
  std::string::string((string *)aDStack_68,"UITextExplain_4");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aDStack_68);
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  std::string::~string((string *)aDStack_68);
  nop();
  std::string::string((string *)aDStack_68,"UIImage_Material");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)aDStack_68);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  std::string::~string((string *)aDStack_68);
  nop();
  std::string::string((string *)aDStack_68,"UITextExplain_5");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aDStack_68);
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  std::string::~string((string *)aDStack_68);
  nop();
  std::string::string((string *)aDStack_68,"UITextExplain_3");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aDStack_68);
  *(UIWidgetText **)(this + 0x148) = pUVar3;
  std::string::~string((string *)aDStack_68);
  nop();
  std::string::string(asStack_78,"UITextExplain_1");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_78);
  TodStringTranslate(L"[EXCHANGEAVATAR_TEXT1]");
  TodReplaceNumberString(awStack_70,L"{COUNT}",*(int *)(this + 0x15c));
  PuzzleTip::SetTip(pUVar3,aDStack_68);
  FUN_05476c50(aDStack_68);
  FUN_05476c50(awStack_70);
  std::string::~string(asStack_78);
  nop();
  std::string::string(asStack_78,"UITextExplain_2");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_78);
  TodStringTranslate(L"[EXCHANGEAVATAR_TEXT2]");
  TodReplaceNumberString(awStack_70,L"{COUNT}",*(int *)(this + 0x160));
  PuzzleTip::SetTip(pUVar3,aDStack_68);
  FUN_05476c50(aDStack_68);
  FUN_05476c50(awStack_70);
  std::string::~string(asStack_78);
  nop();
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

