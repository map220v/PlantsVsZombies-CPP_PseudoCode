// Class: DailySignPage


/* DailySignPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void DailySignPage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall DailySignPage::ScrollTargetReached(DailySignPage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* DailySignPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DailySignPage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DailySignPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall DailySignPage::ScrollTargetInterrupted(DailySignPage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignPage::GetLayoutName() */

void __thiscall DailySignPage::GetLayoutName(DailySignPage *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DailySignPage");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignPage::UpdateTimeLabel() */

void __thiscall DailySignPage::UpdateTimeLabel(DailySignPage *this)

{
  long lVar1;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetRealServerTime(gLawnApp);
  FUN_05476574(auStack_20);
  lVar1 = *(long *)(this + 0x1a0);
  if (lVar1 < 0x15181) {
    StringHelper::ToTimeString((StringHelper *)0x1,(float)lVar1,(int)lVar1);
    FUN_054766c8(auStack_20,auStack_10);
    FUN_05476c50(auStack_10);
  }
  else {
    std::string::string(asStack_18,"[ZEN_GARDEN_TIMESPAN_D]");
    StringHelper::ReplaceNumberString
              ((StringHelper *)asStack_18,(string *)&DAT_0570bbc8,
               (wchar_t *)(*(long *)(this + 0x1a0) / 0x15180),
               SUB164(SEXT816(*(long *)(this + 0x1a0)) * SEXT816(0x1845c8a0ce512957),8));
    FUN_054766c8(auStack_20,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (*(long *)(this + 0x198) != 0) {
    PuzzleTip::SetTip(*(long *)(this + 0x198),auStack_20);
  }
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignPage::ButtonDepress(int) */

void __thiscall DailySignPage::ButtonDepress(DailySignPage *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
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


/* non-virtual thunk to DailySignPage::ButtonDepress(int) */

void __thiscall DailySignPage::ButtonDepress(DailySignPage *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* DailySignPage::DailySignPage() */

void __thiscall DailySignPage::DailySignPage(DailySignPage *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<DailySignPage>::UISingletonDialog((UISingletonDialog<DailySignPage> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066d98e0;
  *(undefined **)(this + 0xd8) = &DAT_066d9c40;
  *(undefined ***)(this + 0x138) = &PTR__DailySignPage_066d9c88;
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  PiggyBankRewardData::PiggyBankRewardData((PiggyBankRewardData *)(this + 0x158));
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0x1a8] = (DailySignPage)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyPiggyBank);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<DailySignPage,void(DailySignPage::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinish,&local_40);
  return;
}


/* DailySignPage::~DailySignPage() */

void __thiscall DailySignPage::~DailySignPage(DailySignPage *this)

{
  *(undefined ***)(this + 0x138) = &PTR__DailySignPage_066d9c88;
  *(undefined ***)this = &PTR_GetClass_066d98e0;
  *(undefined **)(this + 0xd8) = &DAT_066d9c40;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<DailySignBanner*,std::allocator<DailySignBanner*>>::~vector
            ((vector<DailySignBanner*,std::allocator<DailySignBanner*>> *)(this + 0x1b0));
  PiggyBankRewardData::~PiggyBankRewardData((PiggyBankRewardData *)(this + 0x158));
  UISingletonDialog<DailySignPage>::~UISingletonDialog((UISingletonDialog<DailySignPage> *)this);
  return;
}


/* non-virtual thunk to DailySignPage::~DailySignPage() */

void __thiscall DailySignPage::~DailySignPage(DailySignPage *this)

{
  ~DailySignPage(this + -0x138);
  return;
}


/* DailySignPage::~DailySignPage() */

void __thiscall DailySignPage::~DailySignPage(DailySignPage *this)

{
  ~DailySignPage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DailySignPage::~DailySignPage() */

void __thiscall DailySignPage::~DailySignPage(DailySignPage *this)

{
  ~DailySignPage(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignPage::onBuyPiggyBank(bool, int) */

void __thiscall DailySignPage::onBuyPiggyBank(DailySignPage *this,bool param_1,int param_2)

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
/* DailySignPage::loadData() */

void __thiscall DailySignPage::loadData(DailySignPage *this)

{
  DailySignPage DVar1;
  char cVar2;
  int iVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03979084(local_80);
  if (cVar2 != '\0') {
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x158));
    if ((cVar2 == '\0') || (local_70 == '\0')) {
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_0397b38c;
    }
    iVar3 = ActiveItem::GetLeftTimes(aAStack_88);
    *(long *)(this + 0x1a0) = (long)iVar3;
  }
  LawnApp::GetRealServerTime(gLawnApp);
  DVar1 = (DailySignPage)0x0;
  if (0xa8c00 < *(long *)(this + 0x1a0)) {
    DVar1 = (DailySignPage)(*(int *)(this + 0x160) == 0);
  }
  this[0x1a8] = DVar1;
  ActiveItem::~ActiveItem(aAStack_88);
LAB_0397b38c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignPage::updateUIData() */

void __thiscall DailySignPage::updateUIData(DailySignPage *this)

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
             *)(this + 0x168);
  loadData(this);
  uVar8 = 0;
  while( true ) {
    uVar6 = FUN_039791e8(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
    if (uVar6 <= uVar8) break;
    iVar1 = *(int *)(this + 0x160);
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
    puVar5 = (undefined8 *)FUN_039791f4(*(undefined8 *)(this + 0x1b0),uVar8);
    DailySignBanner::UpdateUI((DailySignBanner *)*puVar5,(int)uVar8 < iVar1,bVar2);
    uVar8 = uVar8 + 1;
  }
  if (this[0x1a8] == (DailySignPage)0x0) {
    std::string::string((string *)&local_10,"UIButton_Buy");
    plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    (**(code **)(*plVar7 + 0x158))(plVar7,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignPage::InitView() */

void __thiscall DailySignPage::InitView(DailySignPage *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ulong uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  DailySignBanner *pDVar11;
  undefined8 *puVar12;
  ulong uVar13;
  UIWidgetText *pUVar14;
  TGALogMgr *pTVar15;
  long lVar16;
  __normal_iterator *__n;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48 [4];
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  loadData(this);
  std::string::string((string *)local_28,"UIImage_2");
  plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_28);
  std::string::~string((string *)local_28);
  nop();
  iVar4 = FUN_039794f8(0x14);
  *(int *)(this + 0x148) = iVar4;
  iVar5 = FUN_039794f8(10);
  lVar16 = plVar7[10];
  iVar2 = *(int *)((long)plVar7 + 0x54);
  *(int *)(this + 0x14c) = iVar5;
  *(int *)(this + 0x150) = (int)lVar16 + iVar4 * -2;
  *(int *)(this + 0x154) = iVar2 + iVar5 * -2;
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  lVar16 = *(long *)this_01;
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_01;
  (**(code **)(lVar16 + 0x1a0))(this_01,this + 0x148);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar7 + 0x60))(plVar7,*(undefined8 *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)&local_58);
  local_58 = 0;
  iVar2 = *(int *)(this + 0x154);
  local_50 = *(undefined4 *)(this + 0x150);
  local_4c = iVar2 + 3;
  if (-1 < iVar2) {
    local_4c = iVar2;
  }
  local_4c = local_4c >> 2;
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  iVar4 = FUN_039791e8(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
  iVar2 = local_4c;
  iVar5 = FUN_039794f8(7);
  uVar6 = FUN_039794f8(0);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,uVar6,uVar6,*(undefined4 *)(this + 0x150),iVar4 * iVar2 + iVar5 * (iVar4 + -1))
  ;
  (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_02);
  uVar8 = FUN_039791e8(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
  std::vector<DailySignBanner*,std::allocator<DailySignBanner*>>::resize
            ((vector<DailySignBanner*,std::allocator<DailySignBanner*>> *)(this + 0x1b0),uVar8);
  uVar8 = 0;
  while( true ) {
    uVar1 = uVar8 + 1;
    uVar13 = FUN_039791e8(*(undefined8 *)(this + 0x180),*(undefined8 *)(this + 0x188));
    iVar2 = local_4c;
    if (uVar13 <= uVar8) break;
    iVar5 = FUN_039794f8(7);
    iVar4 = *(int *)(this + 0x160);
    local_54 = (iVar2 + iVar5) * (int)uVar8;
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
    local_5c = (undefined4)uVar1;
    local_48[0] = std::
                  find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                            (uVar9,uVar10,&local_5c);
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_48,(__normal_iterator *)local_28);
    uVar9 = FUN_039791fc(*(undefined8 *)(this + 0x180),uVar8);
    Sexy::Insets::Insets((Insets *)local_28,(Insets *)&local_58);
    pDVar11 = ::operator_new(0x100);
    DailySignBanner::DailySignBanner
              (pDVar11,uVar1 & 0xffffffff,(int)uVar8 < iVar4,bVar3,uVar9,(string *)local_28);
    puVar12 = (undefined8 *)FUN_039791f4(*(undefined8 *)(this + 0x1b0),uVar8);
    *puVar12 = pDVar11;
    puVar12 = (undefined8 *)FUN_039791f4(*(undefined8 *)(this + 0x1b0),uVar8);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,*puVar12);
    uVar8 = uVar1;
  }
  if (this[0x1a8] == (DailySignPage)0x0) {
    std::string::string((string *)local_28,"UIButton_Buy");
    plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_28);
    std::string::~string((string *)local_28);
    nop();
    (**(code **)(*plVar7 + 0x158))(plVar7,0);
  }
  __n = (__normal_iterator *)local_48;
  std::string::string((string *)local_28,"UIText_leftTime");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_28);
  *(UIWidgetText **)(this + 0x198) = pUVar14;
  std::string::~string((string *)local_28);
  nop();
  UpdateTimeLabel(this);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_48);
  std::string::append((string *)local_48,"1",(size_t)__n);
  pTVar15 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)local_28,(InvitationPlayerInfo *)local_48);
  TGALogMgr::LogPigBank(pTVar15,(string *)local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignPage::OnCreate() */

char __thiscall DailySignPage::OnCreate(DailySignPage *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}

