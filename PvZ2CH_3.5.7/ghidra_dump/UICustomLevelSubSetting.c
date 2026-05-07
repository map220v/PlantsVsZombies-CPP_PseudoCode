// Class: UICustomLevelSubSetting


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSubSetting::GetLayoutName() */

void __thiscall UICustomLevelSubSetting::GetLayoutName(UICustomLevelSubSetting *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomLevelSubSetting");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomLevelSubSetting::~UICustomLevelSubSetting() */

void __thiscall UICustomLevelSubSetting::~UICustomLevelSubSetting(UICustomLevelSubSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_06795720;
  *(undefined **)(this + 0xd8) = &DAT_06795a78;
  *(undefined **)(this + 0x138) = &DAT_06795ac0;
  UISingletonDialog<UICustomLevelSubSetting>::~UISingletonDialog
            ((UISingletonDialog<UICustomLevelSubSetting> *)this);
  return;
}


/* UICustomLevelSubSetting::~UICustomLevelSubSetting() */

void __thiscall UICustomLevelSubSetting::~UICustomLevelSubSetting(UICustomLevelSubSetting *this)

{
  ~UICustomLevelSubSetting(this);
  AK::FreeHook(this);
  return;
}


/* UICustomLevelSubSetting::UICustomLevelSubSetting() */

void __thiscall UICustomLevelSubSetting::UICustomLevelSubSetting(UICustomLevelSubSetting *this)

{
  UISingletonDialog<UICustomLevelSubSetting>::UISingletonDialog
            ((UISingletonDialog<UICustomLevelSubSetting> *)this);
  UI::RadioListener::RadioListener((RadioListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_06795720;
  *(undefined **)(this + 0xd8) = &DAT_06795a78;
  *(undefined **)(this + 0x138) = &DAT_06795ac0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSubSetting::OnCreate() */

void __thiscall UICustomLevelSubSetting::OnCreate(UICustomLevelSubSetting *this)

{
  bool bVar1;
  undefined4 uVar2;
  UIWidgetBackground *pUVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(pUVar3 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50)) / 2;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSubSetting::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall
UICustomLevelSubSetting::RadioSelectionChanged(UICustomLevelSubSetting *this,UIWidgetRadio *param_1)

{
  UIWidgetRadio *pUVar1;
  UIWidgetRadio *pUVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UICustomLevelChooseLevel *pUVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIRadio_Recommend_Enable");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetRadio>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIRadio_Recommend_Disable");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetRadio>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (param_1 == pUVar1) {
    PlayerInfo::SetCustomLevelGuessLikeEnable(this_01,false);
    pUVar3 = (UICustomLevelChooseLevel *)
             UISingletonDialog<UICustomLevelChooseLevel>::GetSingletonPtr();
    UICustomLevelChooseLevel::OnSetCustomLevelGuessLikeEnable(pUVar3,false);
  }
  else if (param_1 == pUVar2) {
    PlayerInfo::SetCustomLevelGuessLikeEnable(this_01,true);
    pUVar3 = (UICustomLevelChooseLevel *)
             UISingletonDialog<UICustomLevelChooseLevel>::GetSingletonPtr();
    UICustomLevelChooseLevel::OnSetCustomLevelGuessLikeEnable(pUVar3,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelSubSetting::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall
UICustomLevelSubSetting::RadioSelectionChanged(UICustomLevelSubSetting *this,UIWidgetRadio *param_1)

{
  RadioSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSubSetting::ButtonDepress(int) */

void __thiscall UICustomLevelSubSetting::ButtonDepress(UICustomLevelSubSetting *this,int param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PVZ2UIButton *pPVar5;
  DNetwork *this_00;
  CustomLevelSettingManager *pCVar6;
  UICustomLevelMobileLink *this_01;
  code *pcVar7;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2512];
  string asStack_318 [784];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xde) {
    UISingletonDialog<UICustomLevelMobileLink>::ShowDialog();
    pCVar6 = (CustomLevelSettingManager *)
             Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
    cVar2 = CustomLevelSettingManager::GetLinkState(pCVar6);
    if (cVar2 != '\0') {
      pCVar6 = (CustomLevelSettingManager *)
               Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
      iVar3 = CustomLevelSettingManager::GetRelinkDays(pCVar6);
      if (iVar3 < 0) {
        this_01 = (UICustomLevelMobileLink *)
                  UISingletonDialog<UICustomLevelMobileLink>::GetSingletonPtr();
        UICustomLevelMobileLink::MarkRelink(this_01);
        UISingletonDialog<UICustomLevelSubSetting>::CloseDialog();
        goto LAB_03f13070;
      }
    }
  }
  else {
    if (0xde < param_1) {
      if (param_1 == 0x14d) {
        std::string::string(asStack_ce8,"UIButton_Verified_Goto");
        pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_ce8);
        std::string::~string(asStack_ce8);
        nop();
        (**(code **)(*(long *)pPVar5 + 0x188))(pPVar5,1);
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_d18);
        this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
        _PacketId::_PacketId((_PacketId *)asStack_ce8);
        FUN_03f10a3c(afStack_d38,this,pPVar5);
        std::string::string(asStack_d40,"[NET_CONNECTING]");
        DNetwork::requestMsg
                  (this_00,asStack_318,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
      else if (param_1 == 0x1bc) {
        lVar4 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
        cVar2 = FUN_0547419c(lVar4 + 0x20);
        plVar1 = gLawnApp;
        if (cVar2 == '\0') {
          pcVar7 = *(code **)(*gLawnApp + 0x168);
          lVar4 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
          (*pcVar7)(plVar1,lVar4 + 0x20,0);
        }
      }
      goto LAB_03f13070;
    }
    if (param_1 != 0x58) goto LAB_03f13070;
  }
  UISingletonDialog<UICustomLevelSubSetting>::CloseDialog();
LAB_03f13070:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICustomLevelSubSetting::ButtonDepress(int) */

void __thiscall UICustomLevelSubSetting::ButtonDepress(UICustomLevelSubSetting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomLevelSubSetting::InitView(int) */

void __thiscall UICustomLevelSubSetting::InitView(UICustomLevelSubSetting *this,int param_1)

{
  char cVar1;
  int iVar2;
  Widget *pWVar3;
  Widget *pWVar4;
  Widget *pWVar5;
  Widget *pWVar6;
  UIWidgetText *pUVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetRadio *this_02;
  UIWidgetRadio *this_03;
  long lVar8;
  PVZ2UIButton *pPVar9;
  CustomLevelSettingManager *pCVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  DNetwork *this_05;
  int iVar14;
  int iVar15;
  string asStack_d48 [8];
  wstring awStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  wstring awStack_d18 [48];
  string asStack_ce8 [2504];
  string asStack_320 [792];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x140) = param_1;
  std::string::string(asStack_ce8,"Widget_Item1");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"Widget_Item2");
  pWVar4 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"Widget_Item3");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"Widget_Item4");
  pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"UIText_Title");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  (**(code **)(*(long *)pWVar3 + 0x158))(pWVar3,0);
  (**(code **)(*(long *)pWVar4 + 0x158))(pWVar4,0);
  (**(code **)(*(long *)pWVar5 + 0x158))(pWVar5,0);
  (**(code **)(*(long *)pWVar6 + 0x158))(pWVar6,0);
  if (param_1 == 0xb) {
    (**(code **)(*(long *)pWVar3 + 0x158))(pWVar3,1);
    TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_RECOMMEND]");
    PuzzleTip::SetTip(pUVar7,asStack_ce8);
    FUN_05476c50(asStack_ce8);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = PlayerInfo::GetCustomLevelGuessLikeEnable(this_01);
    std::string::string(asStack_ce8,"UIRadio_Recommend_Enable");
    this_02 = UI::Dialog::GetWidget<UIWidgetRadio>((Dialog *)this,asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    std::string::string(asStack_ce8,"UIRadio_Recommend_Disable");
    this_03 = UI::Dialog::GetWidget<UIWidgetRadio>((Dialog *)this,asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    if (cVar1 == '\0') {
      UIWidgetRadio::SetSelected(this_02,true);
      UIWidgetRadio::SetSelected(this_03,false);
    }
    else {
      UIWidgetRadio::SetSelected(this_02,false);
      UIWidgetRadio::SetSelected(this_03,true);
    }
    *(UICustomLevelSubSetting **)(this_02 + 0x1b0) = this + 0x138;
    *(UICustomLevelSubSetting **)(this_03 + 0x1b0) = this + 0x138;
    goto LAB_03f132ac;
  }
  if (param_1 != 0x16) {
    if (param_1 == 0x21) {
      (**(code **)(*(long *)pWVar5 + 0x158))(pWVar5,1);
      TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_CERTIFICATION]");
      PuzzleTip::SetTip(pUVar7,asStack_ce8);
      FUN_05476c50(asStack_ce8);
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)awStack_d18);
      this_05 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_03f10a98(afStack_d38,this);
      std::string::string((string *)awStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_05,asStack_320,(map *)awStack_d18,30.0,(function *)afStack_d38,true,true,
                 (string *)awStack_d40,0);
      std::string::~string((string *)awStack_d40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)awStack_d18);
    }
    else if (param_1 == 0x2c) {
      (**(code **)(*(long *)pWVar6 + 0x158))(pWVar6,1);
      TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_ACTIVATION]");
      PuzzleTip::SetTip(pUVar7,asStack_ce8);
      FUN_05476c50(asStack_ce8);
      lVar8 = Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
      cVar1 = FUN_03f102e8(*(undefined1 *)(lVar8 + 0x19));
      if (cVar1 == '\0') {
        std::string::string(asStack_ce8,"UIButton_Activated_Goto");
        pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_ce8);
        (**(code **)(*(long *)pPVar9 + 0x158))(pPVar9,0);
        std::string::~string(asStack_ce8);
        nop();
      }
    }
    goto LAB_03f132ac;
  }
  (**(code **)(*(long *)pWVar4 + 0x158))(pWVar4,1);
  TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_PHONE]");
  PuzzleTip::SetTip(pUVar7,asStack_ce8);
  FUN_05476c50(asStack_ce8);
  std::string::string(asStack_ce8,"UIButton_Link_Goto");
  pPVar9 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"UIText_Link_Hint");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  pCVar10 = (CustomLevelSettingManager *)
            Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
  cVar1 = CustomLevelSettingManager::GetLinkState(pCVar10);
  if (cVar1 == '\0') goto LAB_03f132ac;
  pCVar10 = (CustomLevelSettingManager *)
            Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
  iVar2 = CustomLevelSettingManager::GetRelinkDays(pCVar10);
  this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CustomLevelSettingManager>::GetInstancePtr();
  uVar11 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_04);
  FUN_05475d88(asStack_d48,uVar11);
  uVar12 = FUN_05474178(asStack_d48);
  if (uVar12 < 7) {
    iVar14 = 0;
    iVar15 = (int)(uVar12 >> 1);
    if (iVar15 != 0) goto LAB_03f13544;
  }
  else {
    iVar15 = 7;
    iVar14 = 3;
LAB_03f13544:
    lVar8 = (long)iVar14;
    do {
      iVar14 = iVar14 + 1;
      puVar13 = (undefined1 *)FUN_05474ee8(asStack_d48,lVar8);
      *puVar13 = 0x2a;
      lVar8 = lVar8 + 1;
    } while (iVar14 < iVar15);
  }
  if (iVar2 < 0) {
    TodStringTranslate(L"[GOTO_RELINK]");
    PVZ2UIButton::SetLabelText(pPVar9,(wstring *)asStack_ce8);
    FUN_05476c50(asStack_ce8);
    Sexy::ToWString(asStack_d48);
    TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_PHONE_HINT3]");
    TodReplaceString((wstring *)asStack_ce8,L"{NUMBER1}",awStack_d40);
  }
  else {
    (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,1);
    TodStringTranslate(L"[PHONE_LINKED]");
    PVZ2UIButton::SetLabelText(pPVar9,(wstring *)asStack_ce8);
    FUN_05476c50(asStack_ce8);
    Sexy::ToWString(asStack_d48);
    TodStringTranslate(L"[CUSTOM_LEVEL_SETTING_PHONE_HINT2]");
    TodReplaceString((wstring *)asStack_ce8,L"{NUMBER1}",awStack_d40);
    FUN_05476c50(asStack_ce8);
    TodReplaceNumberString(awStack_d18,L"{NUMBER2}",iVar2);
    FUN_054766c8(awStack_d18,asStack_ce8);
  }
  FUN_05476c50(asStack_ce8);
  PuzzleTip::SetTip(pUVar7,awStack_d18);
  FUN_05476c50(awStack_d18);
  FUN_05476c50(awStack_d40);
  std::string::~string(asStack_d48);
LAB_03f132ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

