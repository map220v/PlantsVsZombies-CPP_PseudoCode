// Class: VotedDisplayUI


/* VotedDisplayUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void VotedDisplayUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to VotedDisplayUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall VotedDisplayUI::ScrollTargetReached(VotedDisplayUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* VotedDisplayUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void VotedDisplayUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to VotedDisplayUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall VotedDisplayUI::ScrollTargetInterrupted(VotedDisplayUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* VotedDisplayUI::~VotedDisplayUI() */

void __thiscall VotedDisplayUI::~VotedDisplayUI(VotedDisplayUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066ed7d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066edb08;
  *(undefined ***)(this + 0xe0) = &PTR__VotedDisplayUI_066edb50;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to VotedDisplayUI::~VotedDisplayUI() */

void __thiscall VotedDisplayUI::~VotedDisplayUI(VotedDisplayUI *this)

{
  ~VotedDisplayUI(this + -0xe0);
  return;
}


/* VotedDisplayUI::~VotedDisplayUI() */

void __thiscall VotedDisplayUI::~VotedDisplayUI(VotedDisplayUI *this)

{
  ~VotedDisplayUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to VotedDisplayUI::~VotedDisplayUI() */

void __thiscall VotedDisplayUI::~VotedDisplayUI(VotedDisplayUI *this)

{
  ~VotedDisplayUI(this + -0xe0);
  return;
}


/* VotedDisplayUI::VotedDisplayUI() */

void __thiscall VotedDisplayUI::VotedDisplayUI(VotedDisplayUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066ed7d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066edb08;
  *(undefined ***)(this + 0xe0) = &PTR__VotedDisplayUI_066edb50;
  return;
}


/* VotedDisplayUI::ButtonDepress(int) */

VotedDisplayUI * __thiscall VotedDisplayUI::ButtonDepress(VotedDisplayUI *this,int param_1)

{
  UILimitGroupBuy *this_00;
  VotedDisplayUI *pVVar1;
  
  if ((param_1 == 0x58) &&
     (this_00 = (UILimitGroupBuy *)UISingletonDialog<UILimitGroupBuy>::GetSingletonPtr(),
     this = (VotedDisplayUI *)0x0, this_00 != (UILimitGroupBuy *)0x0)) {
    pVVar1 = (VotedDisplayUI *)UILimitGroupBuy::CloseVotedDisplay(this_00);
    return pVVar1;
  }
  return this;
}


/* non-virtual thunk to VotedDisplayUI::ButtonDepress(int) */

void __thiscall VotedDisplayUI::ButtonDepress(VotedDisplayUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotedDisplayUI::InitView() */

void __thiscall VotedDisplayUI::InitView(VotedDisplayUI *this)

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
  ShowVotingGridItem *this_02;
  LimitGroupBuyItemInfo *pLVar13;
  ulong uVar14;
  code *pcVar15;
  PVZ2UIButton *pPVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  undefined1 auStack_168 [8];
  PVZ2UIImage aPStack_160 [56];
  Insets aIStack_128 [56];
  LimitGroupBuyInfo aLStack_f0 [48];
  undefined8 local_c0;
  undefined8 local_b8;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  *(undefined8 *)(this + 0xe8) = 0;
  this[0x59] = (VotedDisplayUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  iVar2 = FUN_039c2d44(0x32);
  iVar3 = FUN_039c2d44(0x50);
  iVar12 = *(int *)(this + 0x50);
  iVar4 = FUN_039c2d44(0x2a8);
  iVar19 = *(int *)(this + 0x54);
  iVar5 = FUN_039c2d44(500);
  iVar6 = FUN_039c2d44(0x24);
  iVar7 = FUN_039c2d44(10);
  iVar8 = FUN_039c2d44(5);
  iVar9 = FUN_039c2d44(6);
  iVar10 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar10);
  cVar1 = FUN_039c2234(local_80);
  if ((cVar1 == '\0') || (local_70 == '\0')) goto LAB_039c7c9c;
  LimitGroupBuyInfo::LimitGroupBuyInfo(aLStack_f0);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_f0);
  if (cVar1 != '\0') {
    this_00 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    iVar10 = FUN_039c2d44(0x2a8);
    iVar11 = FUN_039c2d44(500);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(iVar12 / 2 - iVar4 / 2) + iVar2,(iVar19 / 2 - iVar5 / 2) + iVar3 + iVar6,
               iVar10 + iVar2 * -2,(int)((double)iVar11 - (double)iVar3 * 1.8));
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    iVar12 = FUN_039c2d44(10);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,iVar12,0,*(int *)(this_00 + 0x50) - iVar12,*(undefined4 *)(this_00 + 0x54));
    iVar19 = *(int *)(this_00 + 0x50) + iVar7 * -5;
    iVar12 = iVar19 + 3;
    if (-1 < iVar19) {
      iVar12 = iVar19;
    }
    iVar19 = (int)((double)((*(int *)(this_00 + 0x54) + iVar8 * -2) - iVar9) * 0.4347826086956522);
    uVar17 = 0;
    while( true ) {
      uVar14 = FUN_039c2664(local_c0,local_b8);
      if (uVar14 <= uVar17) break;
      Sexy::Insets::Insets
                (aIStack_128,iVar7 + ((uint)uVar17 & 3) * (iVar7 + (iVar12 >> 2)),
                 iVar8 + ((int)(uint)uVar17 >> 2) * (iVar19 + iVar9),iVar12 >> 2,iVar19);
      this_02 = ::operator_new(0xf8);
      memset(this_02,0,0xf8);
      ShowVotingGridItem::ShowVotingGridItem(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_128);
      pLVar13 = (LimitGroupBuyItemInfo *)FUN_039c2644(local_c0,uVar17);
      ShowVotingGridItem::Init(this_02,pLVar13);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      uVar17 = uVar17 + 1;
    }
    iVar12 = (int)(uVar14 >> 2);
    if ((uVar14 & 3) != 0) {
      iVar12 = iVar12 + 1;
    }
    pcVar15 = *(code **)(*(long *)this_00 + 0x60);
    *(int *)(this_01 + 0x54) = iVar8 + iVar12 * iVar8 + iVar19 * iVar12;
    (*pcVar15)(this_00,this_01);
    plVar18 = *(long **)(this + 0xe8);
    if (plVar18 == (long *)0x0) {
      FUN_05478178(aPStack_160,&DAT_056f11a8,auStack_168);
      Sexy::Color::Color((Color *)aIStack_128,1);
      pPVar16 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar16,0x58,(ButtonListener *)(this + 0xd8),(wstring *)aPStack_160,
                 (Color *)aIStack_128);
      *(PVZ2UIButton **)(this + 0xe8) = pPVar16;
      FUN_05476c50(aPStack_160);
      nop();
      plVar18 = *(long **)(this + 0xe8);
      if (plVar18 == (long *)0x0) goto LAB_039c7c94;
    }
    pcVar15 = *(code **)(*plVar18 + 0x1a0);
    iVar2 = FUN_039c2d44(0x136);
    iVar12 = *(int *)(this + 0x50);
    iVar3 = FUN_039c2d44(0xfa);
    iVar19 = *(int *)(this + 0x54);
    iVar4 = FUN_039c2d44(0x36);
    Sexy::Insets::Insets(aIStack_128,iVar2 + iVar12 / 2,iVar19 / 2 - iVar3,iVar4,iVar4);
    (*pcVar15)(plVar18,aIStack_128);
    pPVar16 = *(PVZ2UIButton **)(this + 0xe8);
    PVZ2UIImage::PVZ2UIImage(aPStack_160,&DAT_06ac0ae0,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_128,&DAT_06ac0818,2);
    PVZ2UIButton::SetDialogStates(pPVar16,aPStack_160,(PVZ2UIImage *)aIStack_128);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  }
LAB_039c7c94:
  LimitGroupBuyInfo::~LimitGroupBuyInfo(aLStack_f0);
LAB_039c7c9c:
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VotedDisplayUI::Draw(Sexy::Graphics*) */

void __thiscall VotedDisplayUI::Draw(VotedDisplayUI *this,Graphics *param_1)

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
  iVar2 = FUN_039c2d44(0x2a8);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_039c2d44(500);
  Sexy::Insets::Insets
            (aIStack_18,iVar1 / 2 - iVar2 / 2,*(int *)(this + 0x54) / 2 - iVar3 / 2,iVar2,iVar3);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0be8);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  iVar3 = FUN_039c2d44(0x2a8);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_039c2d44(0x14);
  iVar5 = FUN_039c2d44(500);
  iVar2 = *(int *)(this + 0x54);
  iVar6 = FUN_039c2d44(0x5f);
  iVar7 = FUN_039c2d44(0x28);
  iVar8 = FUN_039c2d44(0x73);
  Sexy::Insets::Insets
            (aIStack_18,(iVar1 / 2 - iVar3 / 2) + iVar4,(iVar2 / 2 - iVar5 / 2) + iVar6,
             iVar3 - iVar7,iVar5 - iVar8);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0868);
  Draw9SliceImage(param_1,aIStack_18,uVar9);
  TodStringTranslate(L"[VOTE_RESULT]");
  iVar2 = FUN_039c2d44(500);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_039c2d44(0x14);
  iVar4 = FUN_039c2d44(0x23);
  Sexy::Insets::Insets(aIStack_28,0,(iVar1 / 2 - iVar2 / 2) + iVar3,*(int *)(this + 0x50),iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar9,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[VOTE_RESULT_DES]");
  iVar2 = FUN_039c2d44(500);
  iVar1 = *(int *)(this + 0x54);
  iVar3 = FUN_039c2d44(0x41);
  iVar4 = FUN_039c2d44(0x1e);
  Sexy::Insets::Insets(aIStack_18,0,(iVar1 / 2 - iVar2 / 2) + iVar3,*(int *)(this + 0x50),iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  Sexy::Color::Color((Color *)aIStack_28,0x42,0x25,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar9,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

