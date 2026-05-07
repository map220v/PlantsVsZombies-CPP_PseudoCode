// Class: UISecretStore


/* UISecretStore::ScrollTargetReached(Sexy::ScrollWidget*) */

void UISecretStore::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UISecretStore::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UISecretStore::ScrollTargetReached(UISecretStore *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UISecretStore::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UISecretStore::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UISecretStore::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UISecretStore::ScrollTargetInterrupted(UISecretStore *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretStore::GetLayoutName() */

void __thiscall UISecretStore::GetLayoutName(UISecretStore *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UISecretStore");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UISecretStore::~UISecretStore() */

void __thiscall UISecretStore::~UISecretStore(UISecretStore *this)

{
  *(undefined ***)this = &PTR_GetClass_067762d0;
  *(undefined **)(this + 0xd8) = &DAT_06776630;
  *(undefined ***)(this + 0x138) = &PTR__UISecretStore_06776678;
  UISingletonDialog<UISecretStore>::~UISingletonDialog((UISingletonDialog<UISecretStore> *)this);
  return;
}


/* non-virtual thunk to UISecretStore::~UISecretStore() */

void __thiscall UISecretStore::~UISecretStore(UISecretStore *this)

{
  ~UISecretStore(this + -0x138);
  return;
}


/* UISecretStore::~UISecretStore() */

void __thiscall UISecretStore::~UISecretStore(UISecretStore *this)

{
  ~UISecretStore(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISecretStore::~UISecretStore() */

void __thiscall UISecretStore::~UISecretStore(UISecretStore *this)

{
  ~UISecretStore(this + -0x138);
  return;
}


/* UISecretStore::SyncTime(int) */

void __thiscall UISecretStore::SyncTime(UISecretStore *this,int param_1)

{
  ActivityConfig *this_00;
  undefined8 uVar1;
  
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if (this_00 != (ActivityConfig *)0x0) {
    uVar1 = ActivityConfig::DateMKTime(this_00,param_1);
    *(undefined8 *)(this + 0x150) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretStore::SyncRefreshTime() */

void __thiscall UISecretStore::SyncRefreshTime(UISecretStore *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  piVar5 = (int *)LawnApp::BeijingTime(gLawnApp,&local_10);
  iVar1 = piVar5[1];
  iVar2 = piVar5[2];
  iVar3 = *piVar5;
  lVar6 = LawnApp::GetRealServerTime(gLawnApp);
  lVar4 = ___stack_chk_guard;
  *(long *)(this + 0x158) = lVar6 + (((iVar2 * -0xe10 + iVar1 * -0x3c) - iVar3) + 0x15180);
  if (local_8 == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISecretStore::UISecretStore() */

void __thiscall UISecretStore::UISecretStore(UISecretStore *this)

{
  UISingletonDialog<UISecretStore>::UISingletonDialog((UISingletonDialog<UISecretStore> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_067762d0;
  *(undefined **)(this + 0xd8) = &DAT_06776630;
  *(undefined ***)(this + 0x138) = &PTR__UISecretStore_06776678;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretStore::UpdateTime() */

void __thiscall UISecretStore::UpdateTime(UISecretStore *this)

{
  UIWidgetText *pUVar1;
  long lVar2;
  undefined1 auVar3 [12];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[SECRET_STORE_END_TIME]");
  lVar2 = *(long *)(this + 0x150);
  auVar3 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar2 - auVar3._0_8_),auVar3._8_4_);
  TodReplaceString(awStack_18,L"{TIME}",(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::string(asStack_10,"UIText_Countdown");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,auStack_28);
  }
  TodStringTranslate(L"[SECRET_STORE_END_TIME]");
  lVar2 = *(long *)(this + 0x158);
  auVar3 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar2 - auVar3._0_8_),auVar3._8_4_);
  TodReplaceString(awStack_20,L"{TIME}",awStack_18);
  FUN_054766c8(auStack_28,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  std::string::string(asStack_10,"UIText_Countdown_2");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,auStack_28);
  }
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISecretStore::Update() */

void __thiscall UISecretStore::Update(UISecretStore *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTime(this);
  return;
}


/* UISecretStore::ButtonDepress(int) */

void __thiscall UISecretStore::ButtonDepress(UISecretStore *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UISecretStore>::CloseDialog();
  return;
}


/* non-virtual thunk to UISecretStore::ButtonDepress(int) */

void __thiscall UISecretStore::ButtonDepress(UISecretStore *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UISecretStore::UpdateUI() */

void __thiscall UISecretStore::UpdateUI(UISecretStore *this)

{
  UISecretStoreScrollPanel::UpdateUI
            (*(UISecretStoreScrollPanel **)(this + 0x148),*(PVZ2UIScrollingWidget **)(this + 0x140))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISecretStore::OnCreate() */

void __thiscall UISecretStore::OnCreate(UISecretStore *this)

{
  int iVar1;
  Widget *pWVar2;
  PVZ2UIScrollingWidget *this_00;
  long *plVar3;
  undefined8 uVar4;
  TGALogMgr *pTVar5;
  code *__n;
  TGASecretStore aTStack_e8 [48];
  string asStack_b8 [48];
  ActiveItem aAStack_88 [40];
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_b8,"UIImage_BG");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  *(PVZ2UIScrollingWidget **)(this + 0x140) = this_00;
  std::string::string(asStack_b8,"UIScroll");
  plVar3 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_b8);
  std::string::~string(asStack_b8);
  nop();
  (**(code **)(**(long **)(this + 0x140) + 0x198))
            (*(long **)(this + 0x140),0,0,(int)plVar3[10],*(undefined4 *)((long)plVar3 + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x140),1);
  (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 0x140));
  uVar4 = UISingletonDialog<UISecretStoreScrollPanel>::ShowDialog();
  *(undefined8 *)(this + 0x148) = uVar4;
  __n = *(code **)(**(long **)(this + 0x140) + 0x60);
  (*__n)(*(long **)(this + 0x140),uVar4);
  UpdateUI(this);
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  iVar1 = StringHelper::ToInt(asStack_60);
  SyncTime(this,iVar1);
  SyncRefreshTime(this);
  TGASecretStore::TGASecretStore(aTStack_e8);
  std::string::append((string *)aTStack_e8,"1",(size_t)__n);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGASecretStore::TGASecretStore((TGASecretStore *)asStack_b8,aTStack_e8);
  TGALogMgr::LogSecretStore(pTVar5,asStack_b8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_b8);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_e8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

