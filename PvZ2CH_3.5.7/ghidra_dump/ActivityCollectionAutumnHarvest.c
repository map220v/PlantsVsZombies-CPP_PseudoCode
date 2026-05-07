// Class: ActivityCollectionAutumnHarvest


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::GetLayoutName() */

void __thiscall
ActivityCollectionAutumnHarvest::GetLayoutName(ActivityCollectionAutumnHarvest *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIAutumnHarvestActivityNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionAutumnHarvest::InitContainer
          (ActivityCollectionAutumnHarvest *this,ActivityCollectionTabBase *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int unaff_w25;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_03428e64(*(undefined8 *)(param_1 + 0x18));
  std::string::string(asStack_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    unaff_w25 = ((int)plVar1[10] - (int)plVar2[10]) / 2;
    (**(code **)(*plVar2 + 0x1a8))(plVar2,unaff_w25,*(undefined4 *)((long)plVar2 + 0x4c));
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  std::string::string(asStack_10,"Container");
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (unaff_w25 < 1) {
    iVar4 = ((int)plVar1[10] - unaff_w25) - *(int *)(lVar3 + 0x50);
  }
  else {
    iVar4 = (int)plVar2[10] - *(int *)(lVar3 + 0x50);
  }
  *(int *)(lVar3 + 0x48) = iVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionAutumnHarvest::InitContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionAutumnHarvest::InitContainer
          (ActivityCollectionAutumnHarvest *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* ActivityCollectionAutumnHarvest::~ActivityCollectionAutumnHarvest() */

void __thiscall
ActivityCollectionAutumnHarvest::~ActivityCollectionAutumnHarvest
          (ActivityCollectionAutumnHarvest *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06630da8;
  *(undefined ***)this = &PTR_GetClass_06630a50;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_06630df0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<ActivityCollectionAutumnHarvest>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionAutumnHarvest> *)this);
  return;
}


/* ActivityCollectionAutumnHarvest::~ActivityCollectionAutumnHarvest() */

void __thiscall
ActivityCollectionAutumnHarvest::~ActivityCollectionAutumnHarvest
          (ActivityCollectionAutumnHarvest *this)

{
  ~ActivityCollectionAutumnHarvest(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::ShowTips() */

void ActivityCollectionAutumnHarvest::ShowTips(void)

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
    iVar3 = FUN_0342d430(0xfa);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_TIPS_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[ACTIVITY_NEW_AUTUMN_HARVEST_TIPS]",auStack_58);
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


/* ActivityCollectionAutumnHarvest::ActivityCollectionAutumnHarvest() */

void __thiscall
ActivityCollectionAutumnHarvest::ActivityCollectionAutumnHarvest
          (ActivityCollectionAutumnHarvest *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<ActivityCollectionAutumnHarvest>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionAutumnHarvest> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  *(undefined4 *)(this + 0x144) = 0x2a8b;
  *(undefined **)(this + 0xd8) = &DAT_06630da8;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_06630df0;
  *(undefined ***)this = &PTR_GetClass_06630a50;
  this[0x140] = (ActivityCollectionAutumnHarvest)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityCollectionAutumnHarvest,void(ActivityCollectionAutumnHarvest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::ButtonDepress(int) */

void __thiscall
ActivityCollectionAutumnHarvest::ButtonDepress(ActivityCollectionAutumnHarvest *this,int param_1)

{
  char cVar1;
  int iVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_b0 [2];
  pair<wchar_t_const,wchar_t> apStack_a8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03429840(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      FestivalGamePageFightZodiac::ShowErrorDialog();
    }
    else {
      this[0x140] = (ActivityCollectionAutumnHarvest)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
      local_b0[1] = 1;
      local_b0[0] = *(wchar_t *)(this + 0x144);
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_a8,local_b0,local_b0 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0,
                 (pair *)apStack_a8);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_a0,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else if (param_1 == 0x3e9) {
    ShowTips();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionAutumnHarvest::ButtonDepress(int) */

void __thiscall
ActivityCollectionAutumnHarvest::ButtonDepress(ActivityCollectionAutumnHarvest *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::showFestivalGameEntrance() */

void ActivityCollectionAutumnHarvest::showFestivalGameEntrance(void)

{
  LawnApp *this;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  wstring awStack_1f8 [8];
  wstring awStack_1f0 [24];
  Delegate0 aDStack_1d8 [48];
  ActiveItem aAStack_1a8 [8];
  undefined4 local_1a0;
  char local_190;
  AutumnHarvestNetworkData aAStack_128 [288];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_1a0);
  if ((cVar1 != '\0') && (local_190 != '\0')) {
    AutumnHarvestNetworkData::AutumnHarvestNetworkData(aAStack_128);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1a8,(RtObject *)aAStack_128);
    this = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_1f8,L"[REVIVE_TIP]",auStack_208);
      FUN_05478178(awStack_1f0,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",auStack_200);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_1f8,awStack_1f0);
      FUN_05476c50(awStack_1f0);
      nop();
      FUN_05476c50(awStack_1f8);
      nop();
      FUN_05478178(awStack_1f8,L"[DIALOG_STRING_OK]",auStack_200);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_1d8,awStack_1f0);
      PVZ2UIDialog::AddButton(pPVar3,awStack_1f8,aDStack_1d8,0);
      FUN_05476c50(awStack_1f8);
      nop();
    }
    else {
      UISingletonDialog<UIAutumnHarvest>::ShowDialog();
    }
    AutumnHarvestNetworkData::~AutumnHarvestNetworkData(aAStack_128);
  }
  ActiveItem::~ActiveItem(aAStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::RefreshMaterial() */

void __thiscall
ActivityCollectionAutumnHarvest::RefreshMaterial(ActivityCollectionAutumnHarvest *this)

{
  char cVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  AutumnHarvestMgr *this_00;
  undefined1 auStack_1b0 [8];
  ActiveItem aAStack_1a8 [8];
  undefined4 local_1a0;
  char local_190;
  string asStack_128 [248];
  uint local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_128,"UIText_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(local_1a0);
  if ((cVar1 != '\0') && (local_190 != '\0')) {
    AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1a8,(RtObject *)asStack_128);
    if (cVar1 != '\0') {
      this_00 = (AutumnHarvestMgr *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
      AutumnHarvestMgr::LoadData(this_00,(AutumnHarvestNetworkData *)asStack_128);
      if (pUVar3 != (UIWidgetText *)0x0) {
        Sexy::StrFormat(L"%d",auStack_1b0,(ulong)local_30);
        PuzzleTip::SetTip(pUVar3,auStack_1b0);
        FUN_05476c50(auStack_1b0);
      }
    }
    AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
  }
  ActiveItem::~ActiveItem(aAStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::InitView() */

void __thiscall ActivityCollectionAutumnHarvest::InitView(ActivityCollectionAutumnHarvest *this)

{
  char cVar1;
  int iVar2;
  UIWidgetText *pUVar3;
  AutumnHarvestMgr *this_00;
  undefined1 auStack_1b0 [8];
  ActiveItem aAStack_1a8 [8];
  undefined4 uStack_1a0;
  char cStack_190;
  string asStack_128 [248];
  uint uStack_30;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_128,"UIText_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_128);
  std::string::~string(asStack_128);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03429840(uStack_1a0);
  if ((cVar1 != '\0') && (cStack_190 != '\0')) {
    AutumnHarvestNetworkData::AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1a8,(RtObject *)asStack_128);
    if (cVar1 != '\0') {
      this_00 = (AutumnHarvestMgr *)Sexy::LazySingleton<AutumnHarvestMgr>::GetInstancePtr();
      AutumnHarvestMgr::LoadData(this_00,(AutumnHarvestNetworkData *)asStack_128);
      if (pUVar3 != (UIWidgetText *)0x0) {
        Sexy::StrFormat(L"%d",auStack_1b0,(ulong)uStack_30);
        PuzzleTip::SetTip(pUVar3,auStack_1b0);
        FUN_05476c50(auStack_1b0);
      }
    }
    AutumnHarvestNetworkData::~AutumnHarvestNetworkData((AutumnHarvestNetworkData *)asStack_128);
  }
  ActiveItem::~ActiveItem(aAStack_1a8);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionAutumnHarvest::OnCreate() */

char __thiscall ActivityCollectionAutumnHarvest::OnCreate(ActivityCollectionAutumnHarvest *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionAutumnHarvest::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ActivityCollectionAutumnHarvest::onNotifyRefreshActivityList
          (ActivityCollectionAutumnHarvest *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RefreshMaterial(this);
  if ((param_1) && (this[0x140] != (ActivityCollectionAutumnHarvest)0x0)) {
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
      showFestivalGameEntrance();
    }
  }
  this[0x140] = (ActivityCollectionAutumnHarvest)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

