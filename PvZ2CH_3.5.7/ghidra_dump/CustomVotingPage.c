// Class: CustomVotingPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingPage::GetLayoutName() */

void __thiscall CustomVotingPage::GetLayoutName(CustomVotingPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalCustomVoting");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CustomVotingPage::~CustomVotingPage() */

void __thiscall CustomVotingPage::~CustomVotingPage(CustomVotingPage *this)

{
  *(undefined ***)this = &PTR_GetClass_06722890;
  *(undefined **)(this + 0xd8) = &DAT_06722be0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<CustomVotingPage>::~UISingletonDialog
            ((UISingletonDialog<CustomVotingPage> *)this);
  return;
}


/* CustomVotingPage::~CustomVotingPage() */

void __thiscall CustomVotingPage::~CustomVotingPage(CustomVotingPage *this)

{
  ~CustomVotingPage(this);
  AK::FreeHook(this);
  return;
}


/* CustomVotingPage::CustomVotingPage() */

void __thiscall CustomVotingPage::CustomVotingPage(CustomVotingPage *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<CustomVotingPage>::UISingletonDialog
            ((UISingletonDialog<CustomVotingPage> *)this);
  this[0x131] = (CustomVotingPage)0x0;
  *(undefined ***)this = &PTR_GetClass_06722890;
  *(undefined **)(this + 0xd8) = &DAT_06722be0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<CustomVotingPage,void(CustomVotingPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingPage::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
CustomVotingPage::onNotifyRefreshActivityList(CustomVotingPage *this,bool param_1,set *param_2)

{
  bool bVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x131] != (CustomVotingPage)0x0) {
    this[0x131] = (CustomVotingPage)0x0;
    if (param_1) {
      local_20[0] = 0x2a3e;
      local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_20);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar1) {
        UISingletonDialog<UICustomVoting>::ShowDialog();
      }
    }
    else {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[CHRISTMAS_GOLDEN_EGG_CLOSED_TITLE]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,(wstring *)local_20,awStack_28);
        std::string::string((string *)&local_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar2 = (Image *)StringHelper::ToImage((string *)&local_10,false);
        UIMessageBox::SetBackground(this_00,pIVar2);
        std::string::~string((string *)&local_10);
        nop();
        lVar3 = UIMessageBox::GetButtonCancel(this_00);
        thunk_FUN_05477b9c(lVar3 + 0xd8,&local_18);
        FUN_05476c50(&local_18);
        FUN_05476c50((wstring *)local_20);
        FUN_05476c50(awStack_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingPage::ButtonDepress(int) */

void __thiscall CustomVotingPage::ButtonDepress(CustomVotingPage *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f9) {
    this[0x131] = (CustomVotingPage)0x1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    local_30[1] = 1;
    local_30[0] = L'⨾';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
               (pair *)apStack_28);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CustomVotingPage::ButtonDepress(int) */

void __thiscall CustomVotingPage::ButtonDepress(CustomVotingPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingPage::Update() */

void __thiscall CustomVotingPage::Update(CustomVotingPage *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIText_Timer");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  FUN_05476574(auStack_a0);
  if (pUVar2 == (UIWidgetText *)0x0) goto LAB_03ad9aa0;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = (lVar3 + 0x1c200) % 0x15180;
  lVar4 = 0x15180 - lVar3;
  if (lVar3 < 0x7e92) {
    DAT_06ac81d8 = '\0';
LAB_03ad99a0:
    if (0 < iVar1) goto LAB_03ad99a8;
LAB_03ad9af0:
    iVar1 = (int)(lVar4 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",asStack_90,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar1 + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar4 + iVar1 * -0x3c));
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
  }
  else {
    if (DAT_06ac81d8 != '\0') goto LAB_03ad99a0;
    DAT_06ac81d8 = '\x01';
    if (iVar1 < 1) goto LAB_03ad9af0;
LAB_03ad99a8:
    FUN_05478178(asStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a8);
    TodReplaceNumberString((wstring *)asStack_90,L"{DAY_COUNT}",iVar1);
    FUN_05476c50(asStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",asStack_90,lVar4 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar4 / 0x3c) + (int)((lVar4 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
    FUN_0342e660(asStack_90,auStack_98,auStack_a0);
    FUN_054766c8(auStack_a0,asStack_90);
    FUN_05476c50(asStack_90);
    FUN_05476c50(auStack_98);
  }
  PuzzleTip::SetTip(pUVar2,auStack_a0);
  ActiveItem::~ActiveItem(aAStack_88);
LAB_03ad9aa0:
  FUN_05476c50(auStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

