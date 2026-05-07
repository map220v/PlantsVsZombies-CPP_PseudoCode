// Class: ProfilesDialog


/* ProfilesDialog::ScrollTargetReached(Sexy::ScrollWidget*) */

void ProfilesDialog::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ProfilesDialog::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall ProfilesDialog::ScrollTargetReached(ProfilesDialog *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* ProfilesDialog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ProfilesDialog::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ProfilesDialog::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall ProfilesDialog::ScrollTargetInterrupted(ProfilesDialog *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesDialog::Draw(Sexy::Graphics*) */

void __thiscall ProfilesDialog::Draw(ProfilesDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[MAINMENU_SELECT_PLAYER]");
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  iVar2 = FUN_03e98680(0x4b);
  iVar3 = FUN_03e98680(0x1b);
  iVar4 = FUN_03e98680(0x96);
  iVar1 = *(int *)(this + 0x50);
  FUN_05477b24(auStack_20,auStack_28);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_Generic_Title);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar2,(float)iVar3,(float)(iVar1 - iVar4),uVar5,param_1,
             auStack_20,1,aIStack_18,0);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProfilesDialog::~ProfilesDialog() */

void __thiscall ProfilesDialog::~ProfilesDialog(ProfilesDialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06791190;
  *(undefined ***)(this + 0xd8) = &PTR__ProfilesDialog_067914c8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06791510;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to ProfilesDialog::~ProfilesDialog() */

void __thiscall ProfilesDialog::~ProfilesDialog(ProfilesDialog *this)

{
  ~ProfilesDialog(this + -0xd8);
  return;
}


/* ProfilesDialog::~ProfilesDialog() */

void __thiscall ProfilesDialog::~ProfilesDialog(ProfilesDialog *this)

{
  ~ProfilesDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ProfilesDialog::~ProfilesDialog() */

void __thiscall ProfilesDialog::~ProfilesDialog(ProfilesDialog *this)

{
  ~ProfilesDialog(this + -0xd8);
  return;
}


/* ProfilesDialog::ButtonDepress(int) */

void __thiscall ProfilesDialog::ButtonDepress(ProfilesDialog *this,int param_1)

{
  MainMenu *this_00;
  
  if (param_1 != 6) {
    return;
  }
  this_00 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp);
  MainMenu::ScrollLeft(this_00);
  return;
}


/* non-virtual thunk to ProfilesDialog::ButtonDepress(int) */

void __thiscall ProfilesDialog::ButtonDepress(ProfilesDialog *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesDialog::ProfilesDialog() */

void __thiscall ProfilesDialog::ProfilesDialog(ProfilesDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  PrimeText *this_00;
  ProfilesListContainer *this_01;
  PVZ2UIScrollingWidget *this_02;
  PVZ2UIButton *this_03;
  LotteryResultProgressBar *this_04;
  long lVar7;
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06791190;
  *(undefined ***)(this + 0xd8) = &PTR__ProfilesDialog_067914c8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06791510;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  iVar1 = FUN_03e98680(0x1a9);
  iVar2 = FUN_03e98680(0x1be);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar1,iVar2);
  this_01 = ::operator_new(0x100);
  ProfilesListContainer::ProfilesListContainer(this_01,this);
  *(ProfilesListContainer **)(this + 0xe8) = this_01;
  iVar3 = FUN_03e98680(0x175);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae0d20,5);
  UIScrollControl::SetBackground((UIScrollControl *)this_02,aPStack_40);
  uVar4 = FUN_03e98680(0x59);
  iVar1 = FUN_03e98680(0x41);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,(*(int *)(this + 0x50) - iVar3) / 2,uVar4,iVar3,iVar1 * 5);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,*(undefined8 *)(this + 0xe8));
  ProfilesListContainer::Initialize
            (*(ProfilesListContainer **)(this + 0xe8),0,0,*(int *)(this_02 + 0x50),
             *(int *)(this_02 + 0x54));
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_02);
  FUN_05478178(awStack_78,&DAT_056f11a8,aIStack_88);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_03 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_03,6,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar1 = *(int *)(this + 0x50);
  this_04 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0b88);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_04);
  iVar6 = FUN_03e98680(0x1b);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0b88);
  iVar2 = *(int *)(lVar7 + 0x38);
  lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0b88);
  Sexy::Insets::Insets
            (aIStack_88,(iVar3 + (iVar1 - iVar3) / 2) - iVar5,iVar6,iVar2,*(int *)(lVar7 + 0x3c));
  (**(code **)(*(long *)this_03 + 0x1a0))(this_03,aIStack_88);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ae0b88,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ae0a40,1);
  PVZ2UIButton::SetDialogStates(this_03,(PVZ2UIImage *)awStack_78,aPStack_40);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_03);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

