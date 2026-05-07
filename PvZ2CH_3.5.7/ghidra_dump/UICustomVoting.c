// Class: UICustomVoting


/* UICustomVoting::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICustomVoting::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomVoting::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UICustomVoting::ScrollTargetReached(UICustomVoting *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UICustomVoting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICustomVoting::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICustomVoting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UICustomVoting::ScrollTargetInterrupted(UICustomVoting *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomVoting::GetLayoutName() */

void __thiscall UICustomVoting::GetLayoutName(UICustomVoting *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICustomVoting");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICustomVoting::GetTickets() */

undefined4 __thiscall UICustomVoting::GetTickets(UICustomVoting *this)

{
  return *(undefined4 *)(this + 0x140);
}


/* UICustomVoting::VotedTicketsAdd() */

void __thiscall UICustomVoting::VotedTicketsAdd(UICustomVoting *this)

{
  *(int *)(this + 0x144) = *(int *)(this + 0x144) + 1;
  return;
}


/* UICustomVoting::GetVotedTickets() */

undefined4 __thiscall UICustomVoting::GetVotedTickets(UICustomVoting *this)

{
  return *(undefined4 *)(this + 0x144);
}


/* UICustomVoting::CloseVotingReward() */

void __thiscall UICustomVoting::CloseVotingReward(UICustomVoting *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x150);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  return;
}


/* UICustomVoting::OnClose() */

void __thiscall UICustomVoting::OnClose(UICustomVoting *this)

{
  UI::Dialog::OnClose((Dialog *)this);
  UIBossMedalLottery::ClearQuickWidget((UIBossMedalLottery *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomVoting::UpdateTicket() */

void __thiscall UICustomVoting::UpdateTicket(UICustomVoting *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Ticket");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d",asStack_10,(ulong)*(uint *)(this + 0x140));
    PuzzleTip::SetTip(pUVar1,asStack_10);
    FUN_05476c50(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomVoting::SetTickets(int) */

void __thiscall UICustomVoting::SetTickets(UICustomVoting *this,int param_1)

{
  *(int *)(this + 0x140) = param_1;
  UpdateTicket(this);
  return;
}


/* UICustomVoting::UICustomVoting() */

void __thiscall UICustomVoting::UICustomVoting(UICustomVoting *this)

{
  UISingletonDialog<UICustomVoting>::UISingletonDialog((UISingletonDialog<UICustomVoting> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined ***)this = &PTR_GetClass_06707ea0;
  *(undefined **)(this + 0xd8) = &DAT_06708200;
  *(undefined ***)(this + 0x138) = &PTR__UICustomVoting_06708248;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::vector<CustomVotingGridItem*,std::allocator<CustomVotingGridItem*>>::clear
            ((vector<CustomVotingGridItem*,std::allocator<CustomVotingGridItem*>> *)(this + 0x158));
  return;
}


/* UICustomVoting::~UICustomVoting() */

void __thiscall UICustomVoting::~UICustomVoting(UICustomVoting *this)

{
  *(undefined ***)this = &PTR_GetClass_06707ea0;
  *(undefined **)(this + 0xd8) = &DAT_06708200;
  *(undefined ***)(this + 0x138) = &PTR__UICustomVoting_06708248;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<CustomVotingGridItem*,std::allocator<CustomVotingGridItem*>>::~vector
            ((vector<CustomVotingGridItem*,std::allocator<CustomVotingGridItem*>> *)(this + 0x158));
  UISingletonDialog<UICustomVoting>::~UISingletonDialog((UISingletonDialog<UICustomVoting> *)this);
  return;
}


/* non-virtual thunk to UICustomVoting::~UICustomVoting() */

void __thiscall UICustomVoting::~UICustomVoting(UICustomVoting *this)

{
  ~UICustomVoting(this + -0x138);
  return;
}


/* UICustomVoting::~UICustomVoting() */

void __thiscall UICustomVoting::~UICustomVoting(UICustomVoting *this)

{
  ~UICustomVoting(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICustomVoting::~UICustomVoting() */

void __thiscall UICustomVoting::~UICustomVoting(UICustomVoting *this)

{
  ~UICustomVoting(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomVoting::UpdateTimer() */

void __thiscall UICustomVoting::UpdateTimer(UICustomVoting *this)

{
  int iVar1;
  UIWidgetText *pUVar2;
  long lVar3;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_90,"UIText_Time");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_90);
  std::string::~string(asStack_90);
  nop();
  FUN_05476574(auStack_a0);
  if (pUVar2 != (UIWidgetText *)0x0) {
    iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar1);
    iVar1 = ActiveItem::GetLeftDays(aAStack_88);
    lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
    lVar3 = 0x15180 - (lVar3 + 0x1c200) % 0x15180;
    if (iVar1 < 1) {
      iVar1 = (int)(lVar3 / 0x3c);
      Sexy::StrFormat(L"%02d: %02d: %02d",asStack_90,lVar3 / 0xe10 & 0xffffffff,
                      (ulong)(uint)(iVar1 + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c),
                      (ulong)(uint)((int)lVar3 + iVar1 * -0x3c));
      FUN_054766c8(auStack_a0,asStack_90);
      FUN_05476c50(asStack_90);
    }
    else {
      FUN_05478178(asStack_90,L"[TOTAL_LOGIN_DAYS]",auStack_a8);
      TodReplaceNumberString((wstring *)asStack_90,L"{DAY_COUNT}",iVar1);
      FUN_05476c50(asStack_90);
      nop();
      Sexy::StrFormat(L"%02d:%02d",asStack_90,lVar3 / 0xe10 & 0xffffffff,
                      (ulong)(uint)((int)(lVar3 / 0x3c) + (int)((lVar3 / 0x3c) / 0x3c) * -0x3c));
      FUN_054766c8(auStack_a0,asStack_90);
      FUN_05476c50(asStack_90);
      FUN_0342e660(asStack_90,auStack_98,auStack_a0);
      FUN_054766c8(auStack_a0,asStack_90);
      FUN_05476c50(asStack_90);
      FUN_05476c50(auStack_98);
    }
    PuzzleTip::SetTip(pUVar2,auStack_a0);
    ActiveItem::~ActiveItem(aAStack_88);
  }
  FUN_05476c50(auStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICustomVoting::Update() */

void __thiscall UICustomVoting::Update(UICustomVoting *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  return;
}


/* UICustomVoting::ShowVotingReward() */

void __thiscall UICustomVoting::ShowVotingReward(UICustomVoting *this)

{
  long *plVar1;
  VotingRewardUI *this_00;
  
  plVar1 = *(long **)(this + 0x150);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    return;
  }
  this_00 = ::operator_new(0xf0);
  VotingRewardUI::VotingRewardUI(this_00);
  *(VotingRewardUI **)(this + 0x150) = this_00;
  VotingRewardUI::InitView(this_00);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x150));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x150));
  return;
}


/* UICustomVoting::ButtonDepress(int) */

void __thiscall UICustomVoting::ButtonDepress(UICustomVoting *this,int param_1)

{
  if (param_1 == 0x14) {
    ShowVotingReward(this);
    return;
  }
  if (param_1 == 0x58) {
    UISingletonDialog<UICustomVoting>::CloseDialog();
    return;
  }
  return;
}


/* non-virtual thunk to UICustomVoting::ButtonDepress(int) */

void __thiscall UICustomVoting::ButtonDepress(UICustomVoting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomVoting::InitView() */

void __thiscall UICustomVoting::InitView(UICustomVoting *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Widget *pWVar11;
  PVZ2UIScrollingWidget *this_00;
  CustomVotingGridItem *pCVar12;
  CustomVotingItemData *pCVar13;
  ulong uVar14;
  code *pcVar15;
  ulong uVar16;
  CustomVotingGridItem *local_f0;
  string asStack_e8 [16];
  CustomVotingData aCStack_d8 [24];
  undefined8 local_c0;
  undefined8 local_b8;
  int local_90;
  undefined4 local_8c;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03a48870(10);
  iVar3 = FUN_03a48870(5);
  iVar4 = FUN_03a48870(0);
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  cVar1 = FUN_03a47d70(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    CustomVotingData::CustomVotingData(aCStack_d8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aCStack_d8);
    if (cVar1 != '\0') {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_c0);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_c0);
      FUN_03a4af78(uVar9,uVar10);
      std::string::string(asStack_e8,"Widget_Panel");
      pWVar11 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_e8);
      std::string::~string(asStack_e8);
      nop();
      this_00 = ::operator_new(0x248);
      PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
      (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,this_00);
      uVar6 = FUN_03a48870(8);
      iVar5 = FUN_03a48870(0x10);
      (**(code **)(*(long *)this_00 + 0x198))
                (this_00,0,uVar6,*(undefined4 *)(pWVar11 + 0x50),*(int *)(pWVar11 + 0x54) - iVar5);
      Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
      pWVar11 = ::operator_new(0xd8);
      Sexy::Widget::Widget(pWVar11);
      iVar7 = FUN_03a48870(10);
      iVar5 = *(int *)(this_00 + 0x50);
      iVar8 = FUN_03a48870(0x14);
      (**(code **)(*(long *)pWVar11 + 0x198))
                (pWVar11,iVar7,iVar7,iVar5 - iVar7,*(int *)(this_00 + 0x54) - iVar8);
      iVar5 = *(int *)(this_00 + 0x50) + iVar2 * -2 + iVar3 * -3;
      iVar7 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar7 = iVar5;
      }
      iVar5 = (int)((double)((*(int *)(this_00 + 0x54) + iVar3 * -2) - iVar4) * 0.5555555555555556);
      uVar16 = 0;
      while( true ) {
        uVar14 = FUN_03a47fd4(local_c0,local_b8);
        if (uVar14 <= uVar16) break;
        Sexy::Insets::Insets
                  ((Insets *)asStack_e8,iVar2 + ((uint)uVar16 & 3) * (iVar3 + (iVar7 >> 2)),
                   iVar3 + ((int)(uint)uVar16 >> 2) * (iVar5 + iVar4),iVar7 >> 2,iVar5);
        pCVar12 = ::operator_new(0x180);
        memset(pCVar12,0,0x180);
        CustomVotingGridItem::CustomVotingGridItem(pCVar12);
        local_f0 = pCVar12;
        (**(code **)(*(long *)pCVar12 + 0x1a0))(pCVar12,asStack_e8);
        pCVar12 = local_f0;
        pCVar13 = (CustomVotingItemData *)FUN_03a47ffc(local_c0,uVar16);
        CustomVotingGridItem::Init(pCVar12,pCVar13);
        std::vector<CustomVotingGridItem*,std::allocator<CustomVotingGridItem*>>::push_back
                  ((vector<CustomVotingGridItem*,std::allocator<CustomVotingGridItem*>> *)
                   (this + 0x158),&local_f0);
        (**(code **)(*(long *)pWVar11 + 0x60))(pWVar11,local_f0);
        uVar16 = uVar16 + 1;
      }
      iVar2 = (int)(uVar14 >> 2);
      if ((uVar14 & 3) != 0) {
        iVar2 = iVar2 + 1;
      }
      pcVar15 = *(code **)(*(long *)this_00 + 0x60);
      *(int *)(pWVar11 + 0x54) = iVar3 + iVar2 * iVar3 + iVar5 * iVar2;
      (*pcVar15)(this_00,pWVar11);
      *(undefined4 *)(this + 0x144) = local_8c;
      SetTickets(this,local_90);
    }
    CustomVotingData::~CustomVotingData(aCStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICustomVoting::OnCreate() */

void __thiscall UICustomVoting::OnCreate(UICustomVoting *this)

{
  UIWidgetBackground *pUVar1;
  TGALogMgr *pTVar2;
  TGAAccumulatedLoginData *__n;
  TGAAccumulatedLoginData aTStack_48 [32];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  __n = aTStack_48;
  std::string::string(asStack_28,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_28);
  std::string::~string(asStack_28);
  nop();
  if (pUVar1 != (UIWidgetBackground *)0x0) {
    *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  }
  InitView(this);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_48);
  std::string::append((string *)aTStack_48,"1",(size_t)__n);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)asStack_28,(InvitationPlayerInfo *)aTStack_48);
  TGALogMgr::LogCustomVoting(pTVar2,asStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

