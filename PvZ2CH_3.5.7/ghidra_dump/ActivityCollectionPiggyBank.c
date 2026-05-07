// Class: ActivityCollectionPiggyBank


/* ActivityCollectionPiggyBank::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionPiggyBank::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionPiggyBank::RefreshContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPiggyBank::RefreshContainer
          (ActivityCollectionPiggyBank *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::GetLayoutName() */

void __thiscall ActivityCollectionPiggyBank::GetLayoutName(ActivityCollectionPiggyBank *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPiggyBankActivityNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPiggyBank::InitContainer
          (ActivityCollectionPiggyBank *this,ActivityCollectionTabBase *param_1)

{
  long *plVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_03428e64(*(undefined8 *)(param_1 + 0x18));
  std::string::string(asStack_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1a8))
              (plVar2,((int)plVar1[10] - (int)plVar2[10]) / 2,*(undefined4 *)((long)plVar2 + 0x4c));
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionPiggyBank::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionPiggyBank::InitContainer
          (ActivityCollectionPiggyBank *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::ButtonDepress(int) */

void __thiscall
ActivityCollectionPiggyBank::ButtonDepress(ActivityCollectionPiggyBank *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_00);
    std::string::string(asStack_10,"com.popcap.ios.chs.PVZ2.Bank30");
    PurchaseBroker::RequestPayment(this_01,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionPiggyBank::ButtonDepress(int) */

void __thiscall
ActivityCollectionPiggyBank::ButtonDepress(ActivityCollectionPiggyBank *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::ShowTips() */

void ActivityCollectionPiggyBank::ShowTips(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_0342d430(0x28a);
    iVar3 = FUN_0342d430(300);
  }
  else {
    iVar2 = FUN_0342d430(600);
    iVar3 = FUN_0342d430(0x15e);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_PIGGYBANK_TIPS]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_0342d430(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::ActivityCollectionPiggyBank() */

void __thiscall
ActivityCollectionPiggyBank::ActivityCollectionPiggyBank(ActivityCollectionPiggyBank *this)

{
  undefined *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ActivityCollectionPiggyBank>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionPiggyBank> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  this[0x140] = (ActivityCollectionPiggyBank)0x0;
  *(undefined ***)this = &PTR_GetClass_0662e9f0;
  *(undefined **)(this + 0xd8) = &DAT_0662ed50;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662ed98;
  *(undefined8 *)(this + 0x148) = 0;
  FUN_05478178(this + 0x150,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x158),1);
  PiggyBankRewardData::PiggyBankRewardData((PiggyBankRewardData *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  *(undefined4 *)(this + 0x168) = 0x2a44;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyPiggyBank);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ActivityCollectionPiggyBank,void(ActivityCollectionPiggyBank::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinish,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionPiggyBank,void(ActivityCollectionPiggyBank::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::onBuyPiggyBank(bool, int) */

void __thiscall
ActivityCollectionPiggyBank::onBuyPiggyBank
          (ActivityCollectionPiggyBank *this,bool param_1,int param_2)

{
  TGALogMgr *pTVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  size_t __n;
  wchar_t local_58 [2];
  pair<wchar_t_const,wchar_t> apStack_50 [8];
  TGAAccumulatedLoginData aTStack_48 [8];
  string asStack_40 [24];
  InvitationPlayerInfo aIStack_28 [32];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  if ((param_2 == 2) && (param_1)) {
    TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_48);
    std::string::append((string *)aTStack_48,"2",__n);
    std::string::append(asStack_40,"30",__n);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,(InvitationPlayerInfo *)aTStack_48);
    TGALogMgr::LogPigBank(pTVar1,aIStack_28);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_28);
    local_58[1] = 1;
    local_58[0] = L'⩄';
    std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_50,local_58,local_58 + 1);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aIStack_28,
               (pair *)apStack_50);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)aIStack_28,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aIStack_28);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::Update() */

void __thiscall ActivityCollectionPiggyBank::Update(ActivityCollectionPiggyBank *this)

{
  ActivityCollectionPiggyBank *pAVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  wstring awStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  iVar2 = ActiveItem::GetLeftDays(aAStack_88);
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
  if (iVar2 < 1) {
    iVar2 = (int)(lVar3 / 0x3c);
    Sexy::StrFormat(L"%02d: %02d: %02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)(iVar2 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                    (ulong)(uint)((int)lVar3 + iVar2 * -0x3c));
    FUN_054766c8(this + 0x150,awStack_90);
    FUN_05476c50(awStack_90);
  }
  else {
    pAVar1 = this + 0x150;
    FUN_05478178(awStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a0);
    TodReplaceNumberString(awStack_90,L"{DAY_COUNT}",iVar2);
    FUN_05476c50(awStack_90);
    nop();
    Sexy::StrFormat(L"%02d:%02d",awStack_90,lVar3 / 0xe10 & 0xffffffff,
                    (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
    FUN_054766c8(pAVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_0342e660(awStack_90,auStack_98,pAVar1);
    FUN_054766c8(pAVar1,awStack_90);
    FUN_05476c50(awStack_90);
    FUN_05476c50(auStack_98);
  }
  if (*(long *)(this + 0x148) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x148),this + 0x150);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::LoadData() */

void __thiscall ActivityCollectionPiggyBank::LoadData(ActivityCollectionPiggyBank *this)

{
  ActivityCollectionPiggyBank AVar1;
  char cVar2;
  int iVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03429840(local_80);
  if (cVar2 != '\0') {
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x178));
    if ((cVar2 == '\0') || (local_70 == '\0')) {
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_03438920;
    }
    iVar3 = ActiveItem::GetLeftTimes(aAStack_88);
    *(long *)(this + 0x170) = (long)iVar3;
  }
  LawnApp::GetRealServerTime(gLawnApp);
  AVar1 = (ActivityCollectionPiggyBank)0x0;
  if (0xa8c00 < *(long *)(this + 0x170)) {
    AVar1 = (ActivityCollectionPiggyBank)(*(int *)(this + 0x180) == 0);
  }
  this[0x1b8] = AVar1;
  ActiveItem::~ActiveItem(aAStack_88);
LAB_03438920:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::UpdateUIData() */

void __thiscall ActivityCollectionPiggyBank::UpdateUIData(ActivityCollectionPiggyBank *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x188);
  LoadData(this);
  uVar8 = 0;
  while( true ) {
    uVar6 = FUN_03429938(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
    if (uVar6 <= uVar8) break;
    iVar1 = *(int *)(this + 0x180);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_1c = (undefined4)(uVar8 + 1);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar3,uVar4,&local_1c);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    puVar5 = (undefined8 *)FUN_03429944(*(undefined8 *)(this + 0x1c0),uVar8);
    DailySignBannerNew::UpdateUI((DailySignBannerNew *)*puVar5,(int)uVar8 < iVar1,bVar2);
    uVar8 = uVar8 + 1;
  }
  if (this[0x1b8] == (ActivityCollectionPiggyBank)0x0) {
    std::string::string((string *)&local_10,"UIButton_Buy");
    plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x158))(plVar7,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityCollectionPiggyBank::onNotifyRefreshActivityList
          (ActivityCollectionPiggyBank *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar2 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_18 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar2,uVar3);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      UpdateUIData(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionPiggyBank::InitView() */

void __thiscall ActivityCollectionPiggyBank::InitView(ActivityCollectionPiggyBank *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UIWidgetText *pUVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  DailySignBannerNew *pDVar11;
  undefined8 *puVar12;
  ulong uVar13;
  TGALogMgr *pTVar14;
  Insets *__n;
  undefined4 local_54;
  undefined8 local_50;
  Insets aIStack_48 [32];
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_28,"UIText_ActivityTime");
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x188);
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
  *(UIWidgetText **)(this + 0x148) = pUVar6;
  std::string::~string((string *)local_28);
  nop();
  LoadData(this);
  std::string::string((string *)local_28,"RewardContainer");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  uVar4 = FUN_03428e5c((int)plVar7[10]);
  iVar5 = FUN_03428e60(*(undefined4 *)((long)plVar7 + 0x54));
  uVar2 = uVar4 + 3;
  if (-1 < (int)uVar4) {
    uVar2 = uVar4;
  }
  __n = (Insets *)(ulong)uVar2;
  uVar8 = FUN_03429938(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
  std::vector<DailySignBannerNew*,std::allocator<DailySignBannerNew*>>::resize
            ((vector<DailySignBannerNew*,std::allocator<DailySignBannerNew*>> *)(this + 0x1c0),uVar8
            );
  uVar8 = 0;
  while( true ) {
    uVar4 = (uint)uVar8;
    uVar1 = uVar8 + 1;
    uVar13 = FUN_03429938(*(undefined8 *)(this + 0x1a0),*(undefined8 *)(this + 0x1a8));
    if (uVar13 <= uVar8) break;
    Sexy::Insets::Insets
              (aIStack_48,(uVar4 & 3) * ((int)uVar2 >> 2),(iVar5 / 2) * ((int)uVar4 >> 2),
               (int)uVar2 >> 2,iVar5 / 2);
    __n = (Insets *)(ulong)((int)uVar4 < *(int *)(this + 0x180));
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
    local_54 = (undefined4)uVar1;
    local_50 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar9,uVar10,&local_54);
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)local_28);
    uVar9 = FUN_0342994c(*(undefined8 *)(this + 0x1a0),uVar8);
    Sexy::Insets::Insets((Insets *)local_28,aIStack_48);
    pDVar11 = ::operator_new(0x110);
    DailySignBannerNew::DailySignBannerNew
              (pDVar11,uVar1 & 0xffffffff,__n,bVar3,uVar9,(string *)local_28);
    puVar12 = (undefined8 *)FUN_03429944(*(undefined8 *)(this + 0x1c0),uVar8);
    *puVar12 = pDVar11;
    puVar12 = (undefined8 *)FUN_03429944(*(undefined8 *)(this + 0x1c0),uVar8);
    (**(code **)(*plVar7 + 0x60))(plVar7,*puVar12);
    uVar8 = uVar1;
  }
  if (this[0x1b8] == (ActivityCollectionPiggyBank)0x0) {
    __n = aIStack_48;
    std::string::string((string *)local_28,"UIButton_Buy");
    plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_28);
    std::string::~string((string *)local_28);
    nop();
    if (plVar7 != (long *)0x0) {
      __n = *(Insets **)(*plVar7 + 0x158);
      (*(code *)__n)(plVar7,0);
    }
  }
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_48);
  std::string::append((string *)aIStack_48,"1",(size_t)__n);
  pTVar14 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)local_28,(InvitationPlayerInfo *)aIStack_48);
  TGALogMgr::LogPigBank(pTVar14,(string *)local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionPiggyBank::OnCreate() */

char __thiscall ActivityCollectionPiggyBank::OnCreate(ActivityCollectionPiggyBank *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* ActivityCollectionPiggyBank::~ActivityCollectionPiggyBank() */

void __thiscall
ActivityCollectionPiggyBank::~ActivityCollectionPiggyBank(ActivityCollectionPiggyBank *this)

{
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662ed98;
  *(undefined ***)this = &PTR_GetClass_0662e9f0;
  *(undefined **)(this + 0xd8) = &DAT_0662ed50;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<DailySignBannerNew*,std::allocator<DailySignBannerNew*>>::~vector
            ((vector<DailySignBannerNew*,std::allocator<DailySignBannerNew*>> *)(this + 0x1c0));
  PiggyBankRewardData::~PiggyBankRewardData((PiggyBankRewardData *)(this + 0x178));
  FUN_05476c50(this + 0x150);
  UISingletonDialog<ActivityCollectionPiggyBank>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionPiggyBank> *)this);
  return;
}


/* ActivityCollectionPiggyBank::~ActivityCollectionPiggyBank() */

void __thiscall
ActivityCollectionPiggyBank::~ActivityCollectionPiggyBank(ActivityCollectionPiggyBank *this)

{
  ~ActivityCollectionPiggyBank(this);
  AK::FreeHook(this);
  return;
}

