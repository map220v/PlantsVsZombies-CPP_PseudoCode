// Class: VotingRewardUI


/* VotingRewardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void VotingRewardUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to VotingRewardUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall VotingRewardUI::ScrollTargetReached(VotingRewardUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* VotingRewardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void VotingRewardUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to VotingRewardUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall VotingRewardUI::ScrollTargetInterrupted(VotingRewardUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* VotingRewardUI::~VotingRewardUI() */

void __thiscall VotingRewardUI::~VotingRewardUI(VotingRewardUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06707760;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06707a98;
  *(undefined ***)(this + 0xe0) = &PTR__VotingRewardUI_06707ae0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to VotingRewardUI::~VotingRewardUI() */

void __thiscall VotingRewardUI::~VotingRewardUI(VotingRewardUI *this)

{
  ~VotingRewardUI(this + -0xe0);
  return;
}


/* VotingRewardUI::~VotingRewardUI() */

void __thiscall VotingRewardUI::~VotingRewardUI(VotingRewardUI *this)

{
  ~VotingRewardUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VotingRewardUI::~VotingRewardUI() */

void __thiscall VotingRewardUI::~VotingRewardUI(VotingRewardUI *this)

{
  ~VotingRewardUI(this + -0xe0);
  return;
}


/* VotingRewardUI::VotingRewardUI() */

void __thiscall VotingRewardUI::VotingRewardUI(VotingRewardUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06707760;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06707a98;
  *(undefined ***)(this + 0xe0) = &PTR__VotingRewardUI_06707ae0;
  return;
}


/* VotingRewardUI::ButtonDepress(int) */

VotingRewardUI * __thiscall VotingRewardUI::ButtonDepress(VotingRewardUI *this,int param_1)

{
  UICustomVoting *this_00;
  VotingRewardUI *pVVar1;
  
  if ((param_1 == 0x58) &&
     (this_00 = (UICustomVoting *)UISingletonDialog<UICustomVoting>::GetSingletonPtr(),
     this = (VotingRewardUI *)0x0, this_00 != (UICustomVoting *)0x0)) {
    pVVar1 = (VotingRewardUI *)UICustomVoting::CloseVotingReward(this_00);
    return pVVar1;
  }
  return this;
}


/* non-virtual thunk to VotingRewardUI::ButtonDepress(int) */

void __thiscall VotingRewardUI::ButtonDepress(VotingRewardUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotingRewardUI::InitView() */

void __thiscall VotingRewardUI::InitView(VotingRewardUI *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  VotingRewardGridItem *this_02;
  CustomVotingItemData *pCVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  code *pcVar17;
  PVZ2UIButton *pPVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  undefined1 auStack_150 [8];
  PVZ2UIImage aPStack_148 [56];
  Insets aIStack_110 [56];
  CustomVotingData aCStack_d8 [48];
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  *(undefined8 *)(this + 0xe8) = 0;
  this[0x59] = (VotingRewardUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar2 = FUN_03a48870(0x32);
  iVar3 = FUN_03a48870(0x50);
  iVar12 = *(int *)(this + 0x50);
  iVar4 = FUN_03a48870(600);
  iVar16 = *(int *)(this + 0x54);
  iVar5 = FUN_03a48870(0x17c);
  iVar6 = FUN_03a48870(8);
  iVar7 = FUN_03a48870(0x14);
  iVar8 = FUN_03a48870(5);
  iVar9 = FUN_03a48870(0);
  iVar10 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar10);
  cVar1 = FUN_03a47d70(local_80);
  if ((cVar1 == '\0') || (local_70 == '\0')) goto LAB_03a4b87c;
  CustomVotingData::CustomVotingData(aCStack_d8);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aCStack_d8);
  if (cVar1 != '\0') {
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    iVar10 = FUN_03a48870(600);
    iVar11 = FUN_03a48870(0x17c);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(iVar12 / 2 - iVar4 / 2) + iVar2,((iVar16 / 2 - iVar5 / 2) + iVar3) - iVar6,
               iVar10 + iVar2 * -2,(int)((double)iVar11 - (double)iVar3 * 1.4));
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    iVar12 = FUN_03a48870(10);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,iVar12,0,*(int *)(this_00 + 0x50) - iVar12,*(undefined4 *)(this_00 + 0x54));
    iVar12 = *(int *)(this_00 + 0x50) + iVar7 * -2 + iVar8 * -3;
    iVar16 = iVar12 + 3;
    if (-1 < iVar12) {
      iVar16 = iVar12;
    }
    iVar12 = (int)((double)((*(int *)(this_00 + 0x54) + iVar8 * -2) - iVar9) * 0.7142857142857143);
    uVar20 = 0;
    while( true ) {
      uVar19 = (uint)uVar20;
      uVar14 = FUN_03a47fd4(local_a8,local_a0);
      if (uVar14 <= uVar20) break;
      Sexy::Insets::Insets
                (aIStack_110,iVar7 + (uVar19 & 3) * (iVar8 + (iVar16 >> 2)),
                 iVar8 + ((int)uVar19 >> 2) * (iVar12 + iVar9),iVar16 >> 2,iVar12);
      this_02 = ::operator_new(0x100);
      memset(this_02,0,0x100);
      VotingRewardGridItem::VotingRewardGridItem(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_110);
      pCVar13 = (CustomVotingItemData *)FUN_03a47ffc(local_a8,uVar20);
      VotingRewardGridItem::InitView(this_02,pCVar13,uVar19);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      uVar20 = uVar20 + 1;
    }
    iVar16 = (int)(uVar14 >> 2);
    if ((uVar14 & 3) != 0) {
      iVar16 = iVar16 + 1;
    }
    pcVar17 = *(code **)(*(long *)this_00 + 0x60);
    *(int *)(this_01 + 0x54) = iVar8 + iVar16 * iVar8 + iVar12 * iVar16;
    (*pcVar17)(this_00,this_01);
    plVar21 = *(long **)(this + 0xe8);
    if (plVar21 == (long *)0x0) {
      FUN_05478178(aPStack_148,&DAT_056f11a8,auStack_150);
      Sexy::Color::Color((Color *)aIStack_110,1);
      pPVar18 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar18,0x58,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_148,
                 (Color *)aIStack_110);
      *(PVZ2UIButton **)(this + 0xe8) = pPVar18;
      FUN_05476c50(aPStack_148);
      nop();
      plVar21 = *(long **)(this + 0xe8);
      if (plVar21 == (long *)0x0) goto LAB_03a4b874;
    }
    pcVar17 = *(code **)(*plVar21 + 0x1a0);
    iVar2 = FUN_03a48870(0x10e);
    iVar12 = *(int *)(this + 0x50);
    iVar3 = FUN_03a48870(0xcd);
    iVar16 = *(int *)(this + 0x54);
    iVar4 = FUN_03a48870(0x36);
    Sexy::Insets::Insets(aIStack_110,iVar2 + iVar12 / 2,iVar16 / 2 - iVar3,iVar4,iVar4);
    (*pcVar17)(plVar21,aIStack_110);
    pPVar18 = *(PVZ2UIButton **)(this + 0xe8);
    PVZ2UIImage::PVZ2UIImage(aPStack_148,&DAT_06ac5058,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_110,&DAT_06ac52d8,2);
    PVZ2UIButton::SetDialogStates(pPVar18,aPStack_148,(PVZ2UIImage *)aIStack_110);
    plVar21 = *(long **)(this + 0xe8);
    pcVar17 = *(code **)(*plVar21 + 800);
    uVar15 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar17)(plVar21,uVar15);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  }
LAB_03a4b874:
  CustomVotingData::~CustomVotingData(aCStack_d8);
LAB_03a4b87c:
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotingRewardUI::Draw(Sexy::Graphics*) */

void __thiscall VotingRewardUI::Draw(VotingRewardUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03a48870(600);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03a48870(0x17c);
  Sexy::Insets::Insets
            (aIStack_18,iVar1 / 2 - iVar2 / 2,*(int *)(this + 0x54) / 2 - iVar3 / 2,iVar2,iVar3);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5330);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  iVar3 = FUN_03a48870(600);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_03a48870(0x14);
  iVar5 = FUN_03a48870(0x17c);
  iVar2 = *(int *)(this + 0x54);
  iVar6 = FUN_03a48870(0x3f);
  iVar7 = FUN_03a48870(0x28);
  iVar8 = FUN_03a48870(0x55);
  Sexy::Insets::Insets
            (aIStack_18,(iVar1 / 2 - iVar3 / 2) + iVar4,(iVar2 / 2 - iVar5 / 2) + iVar6,
             iVar3 - iVar7,iVar5 - iVar8);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5190);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  TodStringTranslate(L"[VOTE_REWARD]");
  iVar2 = FUN_03a48870(0x17c);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_03a48870(0x14);
  iVar4 = FUN_03a48870(0x23);
  Sexy::Insets::Insets(aIStack_28,0,(iVar1 / 2 - iVar2 / 2) + iVar3,*(int *)(this + 0x50),iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

