// Class: CallofWishPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::GetLayoutName() */

void __thiscall CallofWishPage::GetLayoutName(CallofWishPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"CallofWishPage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CallofWishPage::~CallofWishPage() */

void __thiscall CallofWishPage::~CallofWishPage(CallofWishPage *this)

{
  *(undefined ***)this = &PTR_GetClass_066f1bf0;
  *(undefined **)(this + 0xd8) = &DAT_066f1f40;
  UISingletonDialog<CallofWishPage>::~UISingletonDialog((UISingletonDialog<CallofWishPage> *)this);
  return;
}


/* CallofWishPage::~CallofWishPage() */

void __thiscall CallofWishPage::~CallofWishPage(CallofWishPage *this)

{
  ~CallofWishPage(this);
  AK::FreeHook(this);
  return;
}


/* CallofWishPage::CallofWishPage() */

void __thiscall CallofWishPage::CallofWishPage(CallofWishPage *this)

{
  UISingletonDialog<CallofWishPage>::UISingletonDialog((UISingletonDialog<CallofWishPage> *)this);
  *(undefined ***)this = &PTR_GetClass_066f1bf0;
  *(undefined **)(this + 0xd8) = &DAT_066f1f40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::SetUpPlantWishDisplay(int, std::vector<int, std::allocator<int> > const&) */

void __thiscall
CallofWishPage::SetUpPlantWishDisplay(CallofWishPage *this,int param_1,vector *param_2)

{
  ulong uVar1;
  UIWidgetImage *pUVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    uVar5 = *(undefined8 *)param_2;
    uVar1 = FUN_039d2760(uVar5,*(undefined8 *)(param_2 + 8));
    if ((ulong)(long)param_1 < uVar1) {
      puVar4 = (undefined4 *)FUN_039d276c(uVar5,(long)param_1);
      uVar7 = *puVar4;
      goto LAB_039d4648;
    }
  }
  uVar7 = 0x3e9;
LAB_039d4648:
  uVar1 = 0;
  std::string::string(asStack_10,"UIImage_WishMain");
  uVar6 = 0;
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  FUN_039d4508(uVar7,pUVar2);
  std::string::~string(asStack_10);
  nop();
  uVar5 = *(undefined8 *)param_2;
  uVar3 = FUN_039d2760(uVar5,*(undefined8 *)(param_2 + 8));
  if (uVar3 != 0) {
    do {
      if ((long)param_1 != uVar1) {
        uVar6 = uVar6 + 1;
        puVar4 = (undefined4 *)FUN_039d276c(uVar5,uVar1);
        uVar7 = *puVar4;
        Sexy::StrFormat("UIImage_WishSub%d",asStack_10,(ulong)uVar6);
        pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
        FUN_039d4508(uVar7,pUVar2);
        std::string::~string(asStack_10);
        uVar5 = *(undefined8 *)param_2;
        uVar3 = FUN_039d2760(uVar5,*(undefined8 *)(param_2 + 8));
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::SetUpAccumText(int, int) */

void __thiscall CallofWishPage::SetUpAccumText(CallofWishPage *this,int param_1,int param_2)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_CallTimes");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    FUN_05476574(awStack_20);
    if (param_2 == 0) {
      TodStringTranslate(L"[CALL_OF_WISH_ALL_ACCUM]");
    }
    else {
      FUN_05478178(awStack_18,L"[CALL_OF_WISH_ACCUM]",auStack_28);
      TodReplaceNumberString(awStack_18,L"{NUM1}",param_1);
      FUN_054766c8(awStack_20,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      nop();
      TodReplaceNumberString(awStack_20,L"{NUM2}",param_2);
    }
    FUN_054766c8(awStack_20,asStack_10);
    FUN_05476c50(asStack_10);
    PuzzleTip::SetTip(pUVar1,awStack_20);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::SetUpButtons() */

void __thiscall CallofWishPage::SetUpButtons(CallofWishPage *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetImage *this_02;
  UIWidgetImage *this_03;
  UIWidgetText *this_04;
  UIWidgetText *this_05;
  UIWidgetText *pUVar2;
  UIWidgetText *pUVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_callofwish_ticket");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(this + 0x13c) = iVar1;
  std::string::string(asStack_10,"UIImage_WishBtn_Gem1");
  this_02 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_WishBtn_Gem10");
  this_03 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_WishBtn_Gem1");
  this_04 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_WishBtn_Gem10");
  this_05 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Wish1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Wish10");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (iVar1 < 1) {
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_GEM");
    UIWidgetImage::SetImage(this_02,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"200");
    UIWidgetText::SetString(this_04,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::string(asStack_10,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_CALLOFWISH_TICKET");
    UIWidgetImage::SetImage(this_02,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"1");
    UIWidgetText::SetString(this_04,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (9 < iVar1) {
      std::string::string(asStack_10,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_CALLOFWISH_TICKET");
      UIWidgetImage::SetImage(this_03,asStack_10);
      std::string::~string(asStack_10);
      nop();
      __s = "10";
      goto LAB_039d4bc8;
    }
  }
  std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_GEM");
  UIWidgetImage::SetImage(this_03,asStack_10);
  std::string::~string(asStack_10);
  nop();
  __s = "1900";
LAB_039d4bc8:
  std::string::string(asStack_10,__s);
  UIWidgetText::SetString(this_05,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_02[0x6d] = (UIWidgetImage)0x0;
  this_03[0x6d] = (UIWidgetImage)0x0;
  this_04[0x6d] = (UIWidgetText)0x0;
  this_05[0x6d] = (UIWidgetText)0x0;
  pUVar2[0x6d] = (UIWidgetText)0x0;
  pUVar3[0x6d] = (UIWidgetText)0x0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::SetUpTicket() */

void __thiscall CallofWishPage::SetUpTicket(CallofWishPage *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *this_02;
  undefined4 local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"UIText_Ticket");
  this_02 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_02 != (UIWidgetText *)0x0) {
    std::string::string(asStack_18,"mat_callofwish_ticket");
    local_1c = PlayerInfo::GetMaterialNum(this_01,asStack_18);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1c);
    UIWidgetText::SetString(this_02,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishPage::InitView() */

void __thiscall CallofWishPage::InitView(CallofWishPage *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  CallofWishManager *this_00;
  
  lVar3 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  iVar1 = *(int *)(lVar3 + 0x1c);
  lVar3 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  SetUpPlantWishDisplay(this,iVar1,(vector *)(lVar3 + 0x20));
  lVar3 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  iVar1 = *(int *)(lVar3 + 0xa0);
  this_00 = (CallofWishManager *)Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
  iVar2 = CallofWishManager::GetAccumLadder(this_00);
  SetUpAccumText(this,iVar1,iVar2);
  SetUpButtons(this);
  SetUpTicket(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::OnCreate() */

void __thiscall CallofWishPage::OnCreate(CallofWishPage *this)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::CallWishs(UIMessageBox*, int) */

void __thiscall CallofWishPage::CallWishs(CallofWishPage *this,UIMessageBox *param_1,int param_2)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2104];
  string asStack_4b0 [1192];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"ai");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0x2a4f;
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
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x134));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"n");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x138));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_039d3328(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_4b0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::determineSelect(UIMessageBox*, int) */

void __thiscall
CallofWishPage::determineSelect(CallofWishPage *this,UIMessageBox *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  UICustomVoting *this_00;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  DNetwork *this_01;
  ulong uVar8;
  undefined4 local_d4c;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2096];
  string asStack_4b8 [1200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if ((param_2 == 1) &&
     (this_00 = (UICustomVoting *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr(),
     this_00 != (UICustomVoting *)0x0)) {
    iVar3 = UICustomVoting::GetTickets(this_00);
    UISingletonDialog<UICommonItemSelect>::CloseDialog();
    local_d4c = 0;
    uVar8 = 0;
    do {
      lVar5 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      uVar1 = (undefined4)uVar8;
      uVar6 = FUN_039d2760(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28));
      uVar2 = local_d4c;
      if (uVar6 <= uVar8) break;
      lVar5 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      piVar4 = (int *)FUN_039d2790(*(undefined8 *)(lVar5 + 0x20),uVar8);
      uVar8 = uVar8 + 1;
      uVar2 = uVar1;
    } while (iVar3 != *piVar4);
    local_d4c = uVar2;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"ai");
    uVar7 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    local_d48[0] = 0x2a4f;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
    FUN_05474278(uVar7,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"i");
    uVar7 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4c);
    FUN_05474278(uVar7,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_039d3384(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_4b8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::SelectPlant() */

void __thiscall CallofWishPage::SelectPlant(CallofWishPage *this)

{
  UICommonItemSelect *this_00;
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_50;
  undefined4 local_4c;
  string asStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::ShowDialog();
  std::string::string(asStack_40,"[CALL_OF_WISH_SELECT_PLANT_TITLE]");
  UICommonItemSelect::SetTitle(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"[CALL_OF_WISH_SELECT_PLANT_DESCRIPTION]");
  UICommonItemSelect::SetDescription(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_40);
  uVar4 = 0;
  while( true ) {
    lVar2 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    uVar3 = FUN_039d2760(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
    if (uVar3 <= uVar4) break;
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_50);
    lVar2 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    puVar1 = (undefined4 *)FUN_039d2790(*(undefined8 *)(lVar2 + 0x20),uVar4);
    local_50 = *puVar1;
    local_4c = 1;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)asStack_40,
               (S2C_BonusInfo *)&local_50);
    uVar4 = uVar4 + 1;
  }
  (**(code **)(*(long *)this_00 + 0x350))(this_00,asStack_40);
  FUN_039d3498(afStack_28,this);
  UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishPage::ButtonDepress(int) */

void __thiscall CallofWishPage::ButtonDepress(CallofWishPage *this,int param_1)

{
  LawnApp *this_00;
  int iVar1;
  wchar_t *pwVar2;
  UIMessageBox *pUVar3;
  Image *pIVar4;
  long lVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *pPVar7;
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 0x65:
    FUN_05478178((wstring *)asStack_50,L"CallofWish",awStack_58);
    LawnApp::ShowProbabilityDialog(this_00,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    break;
  case 0x66:
    SelectPlant(this);
    break;
  case 0x67:
    *(undefined4 *)(this + 0x138) = 1;
    FUN_05476574(awStack_70);
    if (0 < *(int *)(this + 0x13c)) {
      *(undefined4 *)(this + 0x134) = 1;
      pwVar2 = L"[CALL_OF_WISH_ONCE_USE_TICKET]";
      goto LAB_039d97ac;
    }
    *(undefined4 *)(this + 0x134) = 2;
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    iVar1 = PlayerInfo::GetNumGems(pPVar7,false);
    if (199 < iVar1) {
      pwVar2 = L"[CALL_OF_WISH_ONCE_USE_GEM]";
      goto LAB_039d97ac;
    }
LAB_039d99c4:
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar3,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[GEM_NOT_ENOUGH_DIALOG_TITLE]");
      UIMessageBox::SetMessage(pUVar3,awStack_58,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar4);
      std::string::~string(asStack_50);
      nop();
      lVar5 = UIMessageBox::GetButtonCancel(pUVar3);
      thunk_FUN_05477b9c(lVar5 + 0xd8,awStack_60);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
    goto LAB_039d98a8;
  case 0x68:
    *(undefined4 *)(this + 0x138) = 10;
    FUN_05476574(awStack_70);
    if (*(int *)(this + 0x13c) < 10) {
      *(undefined4 *)(this + 0x134) = 2;
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
      iVar1 = PlayerInfo::GetNumGems(pPVar7,false);
      if (iVar1 < 0x76c) goto LAB_039d99c4;
      pwVar2 = L"[CALL_OF_WISH_TENTH_USE_GEM]";
    }
    else {
      pwVar2 = L"[CALL_OF_WISH_TENTH_USE_TICKET]";
      *(undefined4 *)(this + 0x134) = 1;
    }
LAB_039d97ac:
    TodStringTranslate(pwVar2);
    FUN_054766c8(awStack_70,asStack_50);
    FUN_05476c50(asStack_50);
    pUVar3 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar3 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar3,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar3,awStack_70,awStack_60);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar4 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar3,pIVar4);
      std::string::~string(asStack_50);
      nop();
      lVar5 = UIMessageBox::GetButtonOK(pUVar3);
      thunk_FUN_05477b9c(lVar5 + 0xd8,awStack_58);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,CallWishs);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<CallofWishPage,void(CallofWishPage::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
      UIMessageBox::SetCallback(pUVar3,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
    }
LAB_039d98a8:
    FUN_05476c50(awStack_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to CallofWishPage::ButtonDepress(int) */

void __thiscall CallofWishPage::ButtonDepress(CallofWishPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

