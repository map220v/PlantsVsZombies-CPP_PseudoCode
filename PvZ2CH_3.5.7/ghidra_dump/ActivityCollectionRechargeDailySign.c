// Class: ActivityCollectionRechargeDailySign


/* ActivityCollectionRechargeDailySign::ButtonDepress(int) */

int ActivityCollectionRechargeDailySign::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ActivityCollectionRechargeDailySign::ButtonDepress(int) */

void __thiscall
ActivityCollectionRechargeDailySign::ButtonDepress
          (ActivityCollectionRechargeDailySign *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* ActivityCollectionRechargeDailySign::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionRechargeDailySign::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  return;
}


/* non-virtual thunk to
   ActivityCollectionRechargeDailySign::RefreshContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionRechargeDailySign::RefreshContainer
          (ActivityCollectionRechargeDailySign *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRechargeDailySign::GetLayoutName() */

void __thiscall
ActivityCollectionRechargeDailySign::GetLayoutName(ActivityCollectionRechargeDailySign *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRechargeDailySignActivityNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRechargeDailySign::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionRechargeDailySign::InitContainer
          (ActivityCollectionRechargeDailySign *this,ActivityCollectionTabBase *param_1)

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


/* non-virtual thunk to
   ActivityCollectionRechargeDailySign::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionRechargeDailySign::InitContainer
          (ActivityCollectionRechargeDailySign *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRechargeDailySign::ShowTips() */

void ActivityCollectionRechargeDailySign::ShowTips(void)

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
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_RECHARGEDAILYSIGN_TIPS]",auStack_58);
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
/* ActivityCollectionRechargeDailySign::ActivityCollectionRechargeDailySign() */

void __thiscall
ActivityCollectionRechargeDailySign::ActivityCollectionRechargeDailySign
          (ActivityCollectionRechargeDailySign *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ActivityCollectionRechargeDailySign>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionRechargeDailySign> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  this[0x140] = (ActivityCollectionRechargeDailySign)0x0;
  *(undefined ***)this = &PTR_GetClass_0662e250;
  *(undefined **)(this + 0xd8) = &DAT_0662e5b0;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662e5f8;
  *(undefined8 *)(this + 0x148) = 0;
  FUN_05478178(this + 0x150,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x158),1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  *(undefined4 *)(this + 0x168) = 0x2a2c;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionRechargeDailySign,void(ActivityCollectionRechargeDailySign::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionRechargeDailySign::~ActivityCollectionRechargeDailySign() */

void __thiscall
ActivityCollectionRechargeDailySign::~ActivityCollectionRechargeDailySign
          (ActivityCollectionRechargeDailySign *this)

{
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_0662e5f8;
  *(undefined ***)this = &PTR_GetClass_0662e250;
  *(undefined **)(this + 0xd8) = &DAT_0662e5b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<RechargeDailySignWidgetNew*,std::allocator<RechargeDailySignWidgetNew*>>::~vector
            ((vector<RechargeDailySignWidgetNew*,std::allocator<RechargeDailySignWidgetNew*>> *)
             (this + 0x170));
  FUN_05476c50(this + 0x150);
  UISingletonDialog<ActivityCollectionRechargeDailySign>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionRechargeDailySign> *)this);
  return;
}


/* ActivityCollectionRechargeDailySign::~ActivityCollectionRechargeDailySign() */

void __thiscall
ActivityCollectionRechargeDailySign::~ActivityCollectionRechargeDailySign
          (ActivityCollectionRechargeDailySign *this)

{
  ~ActivityCollectionRechargeDailySign(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRechargeDailySign::UpdateUI(RechargeDailySignData) */

void __thiscall
ActivityCollectionRechargeDailySign::UpdateUI
          (ActivityCollectionRechargeDailySign *this,long param_2)

{
  undefined8 *puVar1;
  vector *pvVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar3 = FUN_0342986c(uVar6,*(undefined8 *)(param_2 + 0x10));
    if (uVar3 <= uVar5) break;
    puVar1 = (undefined8 *)FUN_03429928(*(undefined8 *)(this + 0x170),uVar5);
    plVar7 = (long *)*puVar1;
    pcVar4 = *(code **)(*plVar7 + 800);
    pvVar2 = (vector *)FUN_03429860(uVar6,uVar5);
    std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::vector
              (avStack_20,pvVar2);
    (*pcVar4)(plVar7,avStack_20);
    std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
              (avStack_20);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRechargeDailySign::InitView() */

void __thiscall
ActivityCollectionRechargeDailySign::InitView(ActivityCollectionRechargeDailySign *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  UIWidgetText *pUVar7;
  RechargeDailySignActivityManager *this_00;
  long *plVar8;
  RechargeDailySignWidgetNew *pRVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  RechargeDailySignWidgetNew *local_40;
  vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> avStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIText_ActivityTime");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  *(UIWidgetText **)(this + 0x148) = pUVar7;
  std::string::~string(asStack_20);
  nop();
  this_00 = (RechargeDailySignActivityManager *)
            Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  iVar2 = RechargeDailySignActivityManager::GetDayLength(this_00);
  std::string::string(asStack_20,"RealContainer");
  plVar8 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  iVar3 = FUN_03428e5c((int)plVar8[10]);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3 / iVar2;
  }
  uVar4 = FUN_03428e60(*(undefined4 *)((long)plVar8 + 0x54));
  iVar3 = FUN_0342d430(0);
  std::vector<RechargeDailySignWidgetNew*,std::allocator<RechargeDailySignWidgetNew*>>::clear
            ((vector<RechargeDailySignWidgetNew*,std::allocator<RechargeDailySignWidgetNew*>> *)
             (this + 0x170));
  if (0 < iVar2) {
    iVar11 = 0;
    iVar10 = 0;
    do {
      pRVar9 = ::operator_new(0x1e0);
      RechargeDailySignWidgetNew::RechargeDailySignWidgetNew
                (pRVar9,(RechargeDailySignActivityUI *)0x0);
      local_40 = pRVar9;
      iVar5 = Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
      RechargeDailySignActivityManager::GetDayData(iVar5);
      pRVar9 = local_40;
      uVar6 = FUN_0342d430(0);
      (**(code **)(*(long *)pRVar9 + 0x198))(pRVar9,iVar11,uVar6,iVar1,uVar4);
      pRVar9 = local_40;
      pcVar12 = *(code **)(*(long *)local_40 + 0x318);
      std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::vector
                ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
                 asStack_20,(vector *)avStack_38);
      iVar5 = iVar10 + 1;
      (*pcVar12)(pRVar9,iVar10,asStack_20);
      std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
                ((vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>> *)
                 asStack_20);
      (**(code **)(*plVar8 + 0x60))(plVar8,local_40);
      std::vector<RechargeDailySignWidgetNew*,std::allocator<RechargeDailySignWidgetNew*>>::
      push_back((vector<RechargeDailySignWidgetNew*,std::allocator<RechargeDailySignWidgetNew*>> *)
                (this + 0x170),&local_40);
      std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>::~vector
                (avStack_38);
      iVar11 = iVar11 + iVar1 + iVar3;
      iVar10 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionRechargeDailySign::OnCreate() */

char __thiscall
ActivityCollectionRechargeDailySign::OnCreate(ActivityCollectionRechargeDailySign *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionRechargeDailySign::onNotifyRefreshActivityList(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&) */

void __thiscall
ActivityCollectionRechargeDailySign::onNotifyRefreshActivityList
          (ActivityCollectionRechargeDailySign *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RechargeDailySignActivityManager *pRVar5;
  undefined4 local_17c;
  undefined8 local_178 [7];
  undefined8 local_140 [7];
  ActiveItem aAStack_108 [128];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar3 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar4 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_17c = *(undefined4 *)(this + 0x168);
    local_178[0] = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar3,uVar4,&local_17c);
    local_140[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)local_140);
    if (bVar1) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      pRVar5 = (RechargeDailySignActivityManager *)
               Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
      ActiveItem::ActiveItem(aAStack_88,aAStack_108);
      RechargeDailySignActivityManager::Init(pRVar5,aAStack_88);
      ActiveItem::~ActiveItem(aAStack_88);
      Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
      RechargeDailySignActivityManager::GetSignData();
      RechargeDailySignData::RechargeDailySignData
                ((RechargeDailySignData *)local_140,(rbtree_iterator *)local_178);
      UpdateUI(this,(RechargeDailySignData *)local_140);
      RechargeDailySignData::~RechargeDailySignData((RechargeDailySignData *)local_140);
      RechargeDailySignData::~RechargeDailySignData((RechargeDailySignData *)local_178);
      ActiveItem::~ActiveItem(aAStack_108);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

