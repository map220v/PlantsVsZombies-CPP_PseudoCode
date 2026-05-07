// Class: UIFightZodiacReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacReward::GetLayoutName() */

void __thiscall UIFightZodiacReward::GetLayoutName(UIFightZodiacReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFightZodiacReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIFightZodiacReward::~UIFightZodiacReward() */

void __thiscall UIFightZodiacReward::~UIFightZodiacReward(UIFightZodiacReward *this)

{
  *(undefined ***)this = &PTR_GetClass_066f0ab0;
  *(undefined **)(this + 0xd8) = &DAT_066f0e00;
  UISingletonDialog<UIFightZodiacReward>::~UISingletonDialog
            ((UISingletonDialog<UIFightZodiacReward> *)this);
  return;
}


/* UIFightZodiacReward::~UIFightZodiacReward() */

void __thiscall UIFightZodiacReward::~UIFightZodiacReward(UIFightZodiacReward *this)

{
  ~UIFightZodiacReward(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacReward::InitView() */

void __thiscall UIFightZodiacReward::InitView(UIFightZodiacReward *this)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  UIWidgetText *pUVar6;
  UIWidgetImage *pUVar7;
  UIWidgetImage *pUVar8;
  ProfileMgr *this_00;
  PlayerInfo *pPVar9;
  PVZ2UIButton *pPVar10;
  wchar_t *pwVar11;
  int iVar12;
  PVZ2UIButton *local_38;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = UISingletonDialog<UIFightZodiac>::GetSingletonPtr();
  cVar2 = *(char *)(lVar5 + 0x164);
  cVar3 = *(char *)(lVar5 + 0x165);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(lVar5 + 0x158);
  lVar5 = UISingletonDialog<UIFightZodiac>::GetSingletonPtr();
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(lVar5 + 0x160);
  lVar5 = UISingletonDialog<UIFightZodiac>::GetSingletonPtr();
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(lVar5 + 0x15c);
  TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
  TodReplaceNumberString(awStack_10,L"{NUMBER1}",*(int *)(this + 0x13c));
  FUN_05476c50(awStack_10);
  TodReplaceNumberString(awStack_28,L"{NUMBER2}",0x1e);
  FUN_054766c8(awStack_28,awStack_10);
  FUN_05476c50(awStack_10);
  std::string::string((string *)awStack_10,"UIText_Penny_N");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  nop();
  PuzzleTip::SetTip(pUVar6,awStack_28);
  std::string::string((string *)awStack_10,"UIImage_Penny_Prograss");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  nop();
  std::string::string((string *)awStack_10,"UIImage_Penny_Bar");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)awStack_10);
  *(int *)(pUVar7 + 0x50) =
       (int)((float)*(int *)(pUVar8 + 0x50) * (float)*(int *)(this + 0x13c) * _FUN_039cded4);
  std::string::~string((string *)awStack_10);
  nop();
  if (*(int *)(this + 0x134) == 3) {
    TodStringTranslate(L"[FIGHT_ZODIAC_REWARD_PENNY]");
    TodStringTranslate(L"[PENNY_CHASE]");
    TodReplaceString(awStack_18,L"{TYPE}",awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    std::string::string((string *)awStack_10,"UIText_Penny");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    PuzzleTip::SetTip(pUVar6,awStack_20);
    iVar12 = *(int *)(this + 0x13c);
    if (iVar12 < *(int *)(this + 0x138)) {
      std::string::string((string *)awStack_10,"UIButton_1");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      TodStringTranslate(L"[NUM_OBTAIN]");
      TodReplaceNumberString(awStack_10,L"{NUM}",*(int *)(this + 0x138) - *(int *)(this + 0x13c));
      FUN_05476c50(awStack_10);
      PVZ2UIButton::SetLabelText(pPVar10,awStack_18);
      FUN_05476c50(awStack_18);
      iVar12 = *(int *)(this + 0x13c);
    }
    if (iVar12 == 0x1e) {
      std::string::string((string *)awStack_10,"UIButton_1");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      TodStringTranslate(L"[PLANT_OBTAINED]");
      PVZ2UIButton::SetLabelText(pPVar10,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(*(long *)pPVar10 + 0x188))(pPVar10,1);
    }
    else if (*(int *)(this + 0x138) == iVar12) {
      std::string::string((string *)awStack_10,"UIButton_1");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      TodStringTranslate(L"[PENNY_CHASE]");
      PVZ2UIButton::SetLabelText(pPVar10,awStack_10);
      FUN_05476c50(awStack_10);
    }
    FUN_05476c50(awStack_20);
    goto LAB_039cd5fc;
  }
  if (*(int *)(this + 0x134) == 4) {
    TodStringTranslate(L"[FIGHT_ZODIAC_REWARD_PENNY]");
    TodStringTranslate(L"[PVZ1MODE]");
    TodReplaceString(awStack_18,L"{TYPE}",awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    std::string::string((string *)awStack_10,"UIText_Penny");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    PuzzleTip::SetTip(pUVar6,awStack_20);
    iVar12 = *(int *)(this + 0x13c);
    if (iVar12 < *(int *)(this + 0x138)) {
      TodStringTranslate(L"[NUM_OBTAIN]");
      TodReplaceNumberString(awStack_10,L"{NUM}",*(int *)(this + 0x138) - *(int *)(this + 0x13c));
      FUN_05476c50(awStack_10);
      std::string::string((string *)awStack_10,"UIButton_1");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      PVZ2UIButton::SetLabelText(pPVar10,awStack_18);
      FUN_05476c50(awStack_18);
      iVar12 = *(int *)(this + 0x13c);
    }
    if (iVar12 == 0x1e) goto LAB_039cdcb4;
    if (*(int *)(this + 0x138) == iVar12) {
      std::string::string((string *)awStack_10,"UIButton_1");
      local_38 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      pwVar11 = L"[PVZ1MODE]";
      goto LAB_039cdd60;
    }
  }
  else {
    TodStringTranslate(L"[FIGHT_ZODIAC_REWARD_PENNY]");
    TodStringTranslate(L"[CUSTOMER]");
    TodReplaceString(awStack_18,L"{TYPE}",awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    std::string::string((string *)awStack_10,"UIText_Penny");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    PuzzleTip::SetTip(pUVar6,awStack_20);
    iVar12 = *(int *)(this + 0x13c);
    if (iVar12 < *(int *)(this + 0x138)) {
      TodStringTranslate(L"[NUM_OBTAIN]");
      TodReplaceNumberString(awStack_10,L"{NUM}",*(int *)(this + 0x138) - *(int *)(this + 0x13c));
      FUN_05476c50(awStack_10);
      std::string::string((string *)awStack_10,"UIButton_1");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      PVZ2UIButton::SetLabelText(pPVar10,awStack_18);
      FUN_05476c50(awStack_18);
      iVar12 = *(int *)(this + 0x13c);
    }
    if (iVar12 == 0x1e) {
LAB_039cdcb4:
      std::string::string((string *)awStack_10,"UIButton_1");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      TodStringTranslate(L"[PLANT_OBTAINED]");
      PVZ2UIButton::SetLabelText(pPVar10,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(*(long *)pPVar10 + 0x188))(pPVar10,1);
    }
    else if (*(int *)(this + 0x138) == iVar12) {
      std::string::string((string *)awStack_10,"UIButton_1");
      local_38 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      pwVar11 = L"[CUSTOMER]";
LAB_039cdd60:
      TodStringTranslate(pwVar11);
      PVZ2UIButton::SetLabelText(local_38,awStack_10);
      FUN_05476c50(awStack_10);
    }
  }
  FUN_05476c50(awStack_20);
LAB_039cd5fc:
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar4 = PlayerInfo::IsMonthlyCardActivated(pPVar9,4);
  if (cVar4 == '\0') {
    std::string::string((string *)awStack_10,"UIButton_2");
    pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    TodStringTranslate(L"[BUY_MONTHLY_CARD]");
    PVZ2UIButton::SetLabelText(pPVar10,awStack_10);
    FUN_05476c50(awStack_10);
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    if (cVar2 != '\0') {
      iVar12 = 5;
      std::string::string((string *)awStack_10,"UIButton_2");
      pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      TodStringTranslate(L"[PLANT_OBTAINED]");
      PVZ2UIButton::SetLabelText(pPVar10,awStack_10);
      FUN_05476c50(awStack_10);
      (**(code **)(*(long *)pPVar10 + 0x188))(pPVar10,1);
    }
  }
  TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
  TodReplaceNumberString(awStack_10,L"{NUMBER1}",iVar12);
  FUN_05476c50(awStack_10);
  TodReplaceNumberString(awStack_20,L"{NUMBER2}",5);
  FUN_054766c8(awStack_20,awStack_10);
  FUN_05476c50(awStack_10);
  std::string::string((string *)awStack_10,"UIText_Monthly_Card_N");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  nop();
  PuzzleTip::SetTip(pUVar6,awStack_20);
  std::string::string((string *)awStack_10,"UIImage_Monthly_Card_Prograss");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  nop();
  if (iVar12 == 0) {
    *(undefined4 *)(pUVar7 + 0x50) = 0;
  }
  else {
    std::string::string((string *)awStack_10,"UIImage_Monthly_Card_Bar");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)awStack_10);
    *(undefined4 *)(pUVar7 + 0x50) = *(undefined4 *)(pUVar8 + 0x50);
    std::string::~string((string *)awStack_10);
    nop();
  }
  bVar1 = cVar3 != '\0';
  if (bVar1) {
    std::string::string((string *)awStack_10,"UIButton_3");
    pPVar10 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(pPVar10,awStack_10);
    FUN_05476c50(awStack_10);
    (**(code **)(*(long *)pPVar10 + 0x188))(pPVar10,1);
  }
  TodStringTranslate(L"[RECONSTRUCTION_COMPONENT_NUM]");
  TodReplaceNumberString(awStack_10,L"{NUMBER1}",(uint)bVar1);
  FUN_05476c50(awStack_10);
  TodReplaceNumberString(awStack_18,L"{NUMBER2}",1);
  FUN_054766c8(awStack_18,awStack_10);
  FUN_05476c50(awStack_10);
  std::string::string((string *)awStack_10,"UIText_Free_N");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  nop();
  PuzzleTip::SetTip(pUVar6,awStack_18);
  std::string::string((string *)awStack_10,"UIImage_Free_Prograss");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  nop();
  if (bVar1) {
    std::string::string((string *)awStack_10,"UIImage_Free_Bar");
    pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)awStack_10);
    *(undefined4 *)(pUVar7 + 0x50) = *(undefined4 *)(pUVar8 + 0x50);
    std::string::~string((string *)awStack_10);
    nop();
  }
  else {
    *(undefined4 *)(pUVar7 + 0x50) = 0;
  }
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacReward::OnCreate() */

void __thiscall UIFightZodiacReward::OnCreate(UIFightZodiacReward *this)

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
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIFightZodiacReward::UIFightZodiacReward() */

void __thiscall UIFightZodiacReward::UIFightZodiacReward(UIFightZodiacReward *this)

{
  UISingletonDialog<UIFightZodiacReward>::UISingletonDialog
            ((UISingletonDialog<UIFightZodiacReward> *)this);
  *(undefined4 *)(this + 0x134) = 3;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined ***)this = &PTR_GetClass_066f0ab0;
  *(undefined **)(this + 0xd8) = &DAT_066f0e00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiacReward::requestReward(int) */

void __thiscall UIFightZodiacReward::requestReward(UIFightZodiacReward *this,int param_1)

{
  ProfileMgr *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  int local_d54 [3];
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1720];
  string asStack_630 [1576];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a45;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_039cbf78(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_630,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* UIFightZodiacReward::ButtonDepress(int) */

void __thiscall UIFightZodiacReward::ButtonDepress(UIFightZodiacReward *this,int param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  RtObject *pRVar3;
  WorldMap_ChallengeButton *pWVar4;
  int iVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x96) {
    iVar5 = *(int *)(this + 0x134);
    if (iVar5 == 3) {
      if (*(int *)(this + 0x13c) < *(int *)(this + 0x138)) goto LAB_039d00b0;
      if (*(int *)(this + 0x13c) != *(int *)(this + 0x138)) goto LAB_039d00b4;
      RiftUtils::SendGet_MainEntry();
    }
    else if (iVar5 == 4) {
      if (*(int *)(this + 0x13c) < *(int *)(this + 0x138)) goto LAB_039d00b0;
      if (*(int *)(this + 0x13c) != *(int *)(this + 0x138)) goto LAB_039d00b4;
      std::string::string(asStack_10,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((pRVar3 == (RtObject *)0x0) ||
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3),
         pWVar4 == (WorldMap_ChallengeButton *)0x0)) goto LAB_039d00b4;
      cVar1 = PVZ1ModeUtils::HasCompleteTutorial();
      if (cVar1 == '\0') {
        PVZ1ModeUtils::EnterTutorial();
      }
      else {
        PVZ1ModeUtils::SendGet_MainEntry(false);
      }
      pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
      PlayerInfo::SetPVZ1ModeFirstPlay(pPVar2,false);
    }
    else {
      if (*(int *)(this + 0x13c) < *(int *)(this + 0x138)) {
        requestReward(this,5);
        goto LAB_039d00b4;
      }
      if (*(int *)(this + 0x13c) != *(int *)(this + 0x138)) goto LAB_039d00b4;
      std::string::string(asStack_10,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((pRVar3 != (RtObject *)0x0) &&
         (pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3),
         pWVar4 != (WorldMap_ChallengeButton *)0x0)) {
        WorldMap_ChallengeButton::RequestData(pWVar4,0x2a58);
      }
    }
    UISingletonDialog<UIFightZodiacReward>::CloseDialog();
    UISingletonDialog<UIFightZodiac>::CloseDialog();
    LawnApp::KillActivityCollection(gLawnApp);
  }
  else {
    if (param_1 < 0x97) {
      if (param_1 == 0x58) {
        UISingletonDialog<UIFightZodiacReward>::CloseDialog();
      }
      goto LAB_039d00b4;
    }
    if (param_1 == 0xa0) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar2,4);
      if (cVar1 == '\0') {
        std::string::string(asStack_10,"OpenMonthlyCardUI");
        Cpp2Lua(asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        requestReward(this,1);
      }
      goto LAB_039d00b4;
    }
    if (param_1 != 0xaa) goto LAB_039d00b4;
    iVar5 = 2;
LAB_039d00b0:
    requestReward(this,iVar5);
  }
LAB_039d00b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIFightZodiacReward::ButtonDepress(int) */

void __thiscall UIFightZodiacReward::ButtonDepress(UIFightZodiacReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

