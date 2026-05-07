// Class: DaveClubUI


/* DaveClubUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void DaveClubUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DaveClubUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall DaveClubUI::ScrollTargetReached(DaveClubUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* DaveClubUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DaveClubUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DaveClubUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall DaveClubUI::ScrollTargetInterrupted(DaveClubUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubUI::GetLayoutName() */

void __thiscall DaveClubUI::GetLayoutName(DaveClubUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"DaveClubUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* DaveClubUI::ButtonDepress(int) */

void __thiscall DaveClubUI::ButtonDepress(DaveClubUI *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<DaveClubUI>::CloseDialog();
  return;
}


/* non-virtual thunk to DaveClubUI::ButtonDepress(int) */

void __thiscall DaveClubUI::ButtonDepress(DaveClubUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubUI::DaveClubUI() */

void __thiscall DaveClubUI::DaveClubUI(DaveClubUI *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *this_00;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<DaveClubUI>::UISingletonDialog((UISingletonDialog<DaveClubUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_066d3fa0;
  *(undefined **)(this + 0xd8) = &DAT_066d4300;
  *(undefined ***)(this + 0x138) = &PTR__DaveClubUI_066d4348;
  *(undefined8 *)(this + 0x148) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_18,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar1,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_18,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_18,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)&local_18,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_18,false);
  std::string::~string((string *)&local_18);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    iVar3 = FUN_03960734(10);
    iVar4 = FUN_03960734(5);
    iVar5 = FUN_03960734(0x174);
    Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,iVar2,iVar5);
    *(undefined8 *)(this + 0x150) = local_18;
    *(undefined8 *)(this + 0x158) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubUI::~DaveClubUI() */

void __thiscall DaveClubUI::~DaveClubUI(DaveClubUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066d3fa0;
  *(undefined **)(this + 0xd8) = &DAT_066d4300;
  *(undefined ***)(this + 0x138) = &PTR__DaveClubUI_066d4348;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<DaveClubBonus,std::allocator<DaveClubBonus>>::~vector
            ((vector<DaveClubBonus,std::allocator<DaveClubBonus>> *)(this + 0x160));
  UISingletonDialog<DaveClubUI>::~UISingletonDialog((UISingletonDialog<DaveClubUI> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DaveClubUI::~DaveClubUI() */

void __thiscall DaveClubUI::~DaveClubUI(DaveClubUI *this)

{
  ~DaveClubUI(this + -0x138);
  return;
}


/* DaveClubUI::~DaveClubUI() */

void __thiscall DaveClubUI::~DaveClubUI(DaveClubUI *this)

{
  ~DaveClubUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DaveClubUI::~DaveClubUI() */

void __thiscall DaveClubUI::~DaveClubUI(DaveClubUI *this)

{
  ~DaveClubUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubUI::loadData() */

void __thiscall DaveClubUI::loadData(DaveClubUI *this)

{
  char cVar1;
  int iVar2;
  DaveClubConfig aDStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039603b4(local_80);
  if (cVar1 != '\0') {
    DaveClubConfig::DaveClubConfig(aDStack_a8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aDStack_a8);
    iVar2 = FUN_039603c0(local_a0,local_98);
    if ((cVar1 == '\0') || (local_70 <= (iVar2 < 1))) {
      DaveClubConfig::~DaveClubConfig(aDStack_a8);
      ActiveItem::~ActiveItem(aAStack_88);
      goto LAB_039622a0;
    }
    std::vector<DaveClubBonus,std::allocator<DaveClubBonus>>::operator=
              ((vector<DaveClubBonus,std::allocator<DaveClubBonus>> *)(this + 0x160),
               (vector *)&local_a0);
    DaveClubConfig::~DaveClubConfig(aDStack_a8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_039622a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubUI::OnCreate() */

void __thiscall DaveClubUI::OnCreate(DaveClubUI *this)

{
  int iVar1;
  Widget *pWVar2;
  PVZ2UIScrollingWidget *this_00;
  long *plVar3;
  DaveClubActivityScrollPanel *this_01;
  long lVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  loadData(this);
  std::string::string(asStack_18,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,false);
  lVar4 = *(long *)(this + 0x140);
  *(int *)(pWVar2 + 0x4c) = *(int *)(pWVar2 + 0x4c) + -10;
  if (lVar4 != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
  }
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_00;
  Sexy::Insets::Insets((Insets *)asStack_18,(Insets *)(this + 0x150));
  std::string::string(asStack_20,"UIImage_2");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  iVar1 = FUN_03960734(0x32);
  local_10 = local_10 + iVar1;
  (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),asStack_18);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),2);
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 0x140));
  this_01 = ::operator_new(0x110);
  DaveClubActivityScrollPanel::DaveClubActivityScrollPanel
            (this_01,(TRect *)(this + 0x150),(vector *)(this + 0x160));
  *(DaveClubActivityScrollPanel **)(this + 0x148) = this_01;
  (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

