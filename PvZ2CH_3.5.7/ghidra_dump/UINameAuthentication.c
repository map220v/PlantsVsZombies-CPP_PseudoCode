// Class: UINameAuthentication


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINameAuthentication::GetLayoutName() */

void __thiscall UINameAuthentication::GetLayoutName(UINameAuthentication *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"NameAuthentication");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINameAuthentication::~UINameAuthentication() */

void __thiscall UINameAuthentication::~UINameAuthentication(UINameAuthentication *this)

{
  *(undefined ***)this = &PTR_GetClass_066c65e0;
  *(undefined **)(this + 0xd8) = &DAT_066c6930;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_066c6978;
  UISingletonDialog<UINameAuthentication>::~UISingletonDialog
            ((UISingletonDialog<UINameAuthentication> *)this);
  return;
}


/* UINameAuthentication::~UINameAuthentication() */

void __thiscall UINameAuthentication::~UINameAuthentication(UINameAuthentication *this)

{
  ~UINameAuthentication(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINameAuthentication::isTextEmpty() */

void __thiscall UINameAuthentication::isTextEmpty(UINameAuthentication *this)

{
  char cVar1;
  undefined1 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x140) + 0x310))(asStack_18,*(long **)(this + 0x140));
  (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
  cVar1 = FUN_0547419c(asStack_18);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = FUN_0547419c(asStack_10);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* UINameAuthentication::trim(std::string&) */

string * __thiscall UINameAuthentication::trim(UINameAuthentication *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_05474750(param_1,&DAT_055b4790,0);
    FUN_0547500c(param_1,0,uVar2);
    lVar3 = FUN_05474868(param_1,&DAT_055b4790,0xffffffffffffffff);
    FUN_0547500c(param_1,lVar3 + 1,0xffffffffffffffff);
  }
  return param_1;
}


/* UINameAuthentication::is_name_valid(std::string const&) */

byte __thiscall UINameAuthentication::is_name_valid(UINameAuthentication *this,string *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_05474184(param_1);
  pcVar4 = (char *)FUN_0547429c(param_1);
  bVar2 = IsAllChinese(pcVar4,iVar3);
  bVar1 = iVar3 - 3U < 0x3fe;
  uVar5 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "UINameAuthentication::is_name_valid valid = %d, lengthCheck = %d, name = %s",
             (ulong)bVar2,(ulong)bVar1,uVar5);
  return bVar1 & bVar2;
}


/* UINameAuthentication::isAllChineseWord(char const*) */

undefined8 __thiscall
UINameAuthentication::isAllChineseWord(UINameAuthentication *this,char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_1);
  if ((int)sVar2 < 1) {
    return 1;
  }
  if (*param_1 < '\0') {
    pcVar1 = param_1 + ((ulong)((int)sVar2 - 1) & 0xfffffffe) + 2;
    do {
      param_1 = param_1 + 2;
      if (param_1 == pcVar1) {
        return 1;
      }
    } while (*param_1 < '\0');
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINameAuthentication::is_cardId_valid(std::string const&) */

void __thiscall UINameAuthentication::is_cardId_valid(UINameAuthentication *this,string *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  uVar1 = SFZHValidate(asStack_10);
  std::string::~string(asStack_10);
  uVar2 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF
            ((wchar_t *)"UINameAuthentication::is_cardId_valid %d, cardID = %s",(ulong)(byte)uVar1,
             uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINameAuthentication::isCanAuth() */

void __thiscall UINameAuthentication::isCanAuth(UINameAuthentication *this)

{
  byte bVar1;
  byte bVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x140) + 0x310))(asStack_18,*(long **)(this + 0x140));
  trim(this,asStack_18);
  bVar1 = is_name_valid(this,asStack_18);
  Sexy::OutputDebugStrF((wchar_t *)"isCanAuth isNameValid = %d",(ulong)bVar1);
  (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_10,*(long **)(this + 0x148));
  trim(this,asStack_10);
  bVar2 = is_cardId_valid(this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2 & bVar1);
}


/* UINameAuthentication::AllisNum(std::string) */

undefined8 __thiscall UINameAuthentication::AllisNum(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar2 = FUN_05474184(param_2);
  if (lVar2 != 0) {
    do {
      pbVar3 = (byte *)FUN_05474ee8(param_2,uVar5);
      bVar1 = *pbVar3;
      if (((((int)uVar5 != 0x11) && ((int)uVar5 != 0xe)) ||
          (pbVar3 = (byte *)FUN_05474ee8(param_2,uVar5), 0x19 < (byte)((*pbVar3 & 0xdf) + 0xbf))) &&
         (9 < bVar1 - 0x30)) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = FUN_05474184(param_2);
    } while (uVar5 < uVar4);
  }
  return 1;
}


/* UINameAuthentication::UINameAuthentication() */

void __thiscall UINameAuthentication::UINameAuthentication(UINameAuthentication *this)

{
  UISingletonDialog<UINameAuthentication>::UISingletonDialog
            ((UISingletonDialog<UINameAuthentication> *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066c65e0;
  *(undefined **)(this + 0xd8) = &DAT_066c6930;
  *(undefined ***)(this + 0x138) = &PTR_EditWidgetText_066c6978;
  Sexy::Delegate2<UINameAuthentication*,int>::Delegate2((DummyInit *)(this + 0x150));
  return;
}


/* UINameAuthentication::ShowDialog(bool) */

void UINameAuthentication::ShowDialog(bool param_1)

{
  _shouldLogStatus = param_1;
  UISingletonDialog<UINameAuthentication>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINameAuthentication::OnCreate() */

void __thiscall UINameAuthentication::OnCreate(UINameAuthentication *this)

{
  undefined4 uVar1;
  Widget *pWVar2;
  UIWidgetText *pUVar3;
  UIWidgetText *pUVar4;
  UIWidgetText *pUVar5;
  EditWidget *pEVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,false);
  *(int *)(pWVar2 + 0x4c) = *(int *)(pWVar2 + 0x4c) + -0x32;
  std::string::string(asStack_10,"UIText_InputName");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  std::string::string(asStack_10,"UIText_InputCard");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  std::string::string(asStack_10,"UIText_Suc");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x180) = pUVar5;
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),0);
  std::string::string(asStack_10,"UIText_error1");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x188) = pUVar5;
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x188) + 0x158))(*(long **)(this + 0x188),0);
  std::string::string(asStack_10,"UIText_error2");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 400) = pUVar5;
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 400) + 0x158))(*(long **)(this + 400),0);
  pEVar6 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(pEVar6,0,(EditListener *)(this + 0x138));
  *(EditWidget **)(this + 0x140) = pEVar6;
  pcVar8 = *(code **)(*(long *)pEVar6 + 0x330);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar8)(pEVar6,uVar7,0);
  TodStringTranslate(L"[AUTHENTICATION_PLACE_NAME]");
  (**(code **)(**(long **)(this + 0x140) + 0x340))(*(long **)(this + 0x140),auStack_18,1);
  (**(code **)(*(long *)pWVar2 + 0x60))(pWVar2,*(undefined8 *)(this + 0x140));
  plVar9 = *(long **)(this + 0x140);
  uVar1 = FUN_0391f5b0();
  (**(code **)(*plVar9 + 0x198))
            (plVar9,*(undefined4 *)(pUVar3 + 0x48),*(undefined4 *)(pUVar3 + 0x4c),
             *(undefined4 *)(pUVar3 + 0x50),uVar1);
  pEVar6 = ::operator_new(0x180);
  Sexy::EditWidget::EditWidget(pEVar6,0,(EditListener *)(this + 0x138));
  *(EditWidget **)(this + 0x148) = pEVar6;
  TodStringTranslate(L"[AUTHENTICATION_PLACE_CARDID]");
  FUN_054766c8(auStack_18,asStack_10);
  FUN_05476c50(asStack_10);
  (**(code **)(**(long **)(this + 0x148) + 0x340))(*(long **)(this + 0x148),auStack_18,1);
  plVar9 = *(long **)(this + 0x148);
  pcVar8 = *(code **)(*plVar9 + 0x330);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar8)(plVar9,uVar7,0);
  (**(code **)(*(long *)pWVar2 + 0x60))(pWVar2,*(undefined8 *)(this + 0x148));
  plVar9 = *(long **)(this + 0x148);
  uVar1 = FUN_0391f5b0();
  (**(code **)(*plVar9 + 0x198))
            (plVar9,*(undefined4 *)(pUVar4 + 0x48),*(undefined4 *)(pUVar4 + 0x4c),
             *(undefined4 *)(pUVar4 + 0x50),uVar1);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UINameAuthentication::authName() */

void UINameAuthentication::authName(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::setIsAuthIDCard(this_00,true);
    UISingletonDialog<UINameAuthentication>::CloseDialog();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINameAuthentication::ButtonDepress(int) */

void __thiscall UINameAuthentication::ButtonDepress(UINameAuthentication *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  wstring *pwVar3;
  wchar_t *pwVar4;
  NetworkMgr *this_01;
  androidNetworkMsgProcess *this_02;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) {
    if (param_1 != 1) goto LAB_03920200;
    FUN_05478178(asStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
    FUN_05478178(asStack_10,L"[NETWORK_NOT_CONNECTED_AUTHEN_CHECK_FAILED]",auStack_20);
    cVar1 = LawnApp::CheckNetWork(this_00,(wstring *)asStack_18,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    nop();
    FUN_05476c50(asStack_18);
    nop();
    if (cVar1 == '\0') goto LAB_03920200;
    cVar1 = isTextEmpty(this);
    if (cVar1 == '\0') {
      cVar1 = isCanAuth(this);
      if (cVar1 == '\0') {
        pwVar3 = (wstring *)UISingletonDialog<UIAuthenticationDialog>::ShowDialog();
        pwVar4 = L"[AUTHENTICATION_ERROR2]";
      }
      else {
        iVar2 = LawnApp::GetPlatform(gLawnApp);
        if ((iVar2 == 0x59) || (iVar2 = LawnApp::GetPlatform(gLawnApp), iVar2 == 0x25)) {
          this_01 = (NetworkMgr *)NetworkMgr::Instance();
          this_02 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
          (**(code **)(**(long **)(this + 0x148) + 0x310))(asStack_18,*(long **)(this + 0x148));
          (**(code **)(**(long **)(this + 0x140) + 0x310))(asStack_10,*(long **)(this + 0x140));
          androidNetworkMsgProcess::UploadIdentification
                    (this_02,asStack_18,asStack_10,(bool)_shouldLogStatus);
          std::string::~string(asStack_10);
          std::string::~string(asStack_18);
        }
        authName();
        MessageRouter::Post<bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::NameAuthenticationSuc,true);
        pwVar3 = (wstring *)UISingletonDialog<UIAuthenticationDialog>::ShowDialog();
        pwVar4 = L"[AUTHENTICATION_SUC]";
      }
    }
    else {
      pwVar3 = (wstring *)UISingletonDialog<UIAuthenticationDialog>::ShowDialog();
      pwVar4 = L"[AUTHENTICATION_ERROR1]";
    }
    TodStringTranslate(pwVar4);
    UIAuthenticationDialog::setDialogTxt(pwVar3);
    FUN_05476c50(asStack_10);
  }
  UISingletonDialog<UINameAuthentication>::CloseDialog();
LAB_03920200:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINameAuthentication::ButtonDepress(int) */

void __thiscall UINameAuthentication::ButtonDepress(UINameAuthentication *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

