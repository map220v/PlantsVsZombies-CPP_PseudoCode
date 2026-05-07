// Class: RechargeWelfareUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::getWidth() */

void __thiscall RechargeWelfareUI::getWidth(RechargeWelfareUI *this)

{
  undefined4 uVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Back");
  lVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 == 0) {
    uVar1 = *(undefined4 *)(this + 0x50);
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::getMX() */

void __thiscall RechargeWelfareUI::getMX(RechargeWelfareUI *this)

{
  undefined4 uVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Back");
  lVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (lVar2 == 0) {
    uVar1 = *(undefined4 *)(this + 0x48);
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::GetCostTextWidget() */

void __thiscall RechargeWelfareUI::GetCostTextWidget(RechargeWelfareUI *this)

{
  UIWidgetText *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Tab1_Cost_Text");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pUVar1);
}


/* RechargeWelfareUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void RechargeWelfareUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeWelfareUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
RechargeWelfareUI::ScrollTargetReached(RechargeWelfareUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* RechargeWelfareUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void RechargeWelfareUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to RechargeWelfareUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
RechargeWelfareUI::ScrollTargetInterrupted(RechargeWelfareUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::GetLayoutName() */

void __thiscall RechargeWelfareUI::GetLayoutName(RechargeWelfareUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"WelfareEventUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* RechargeWelfareUI::OnCreate() */

undefined8 __thiscall RechargeWelfareUI::OnCreate(RechargeWelfareUI *this)

{
  UI::Dialog::OnCreate((Dialog *)this);
  (**(code **)(*(long *)this + 0x350))(this);
  return 1;
}


/* RechargeWelfareUI::CheckTargetActivityItem(int) */

undefined1 __thiscall
RechargeWelfareUI::CheckTargetActivityItem(RechargeWelfareUI *this,int param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x1c0);
  lVar1 = FUN_03ac1fcc(uVar4,*(undefined8 *)(this + 0x1c8));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    piVar2 = (int *)FUN_03ac1fe0(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*piVar2 != param_1);
  return (char)piVar2[2];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::RechargeWelfareUI() */

void __thiscall RechargeWelfareUI::RechargeWelfareUI(RechargeWelfareUI *this)

{
  undefined *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<RechargeWelfareUI>::UISingletonDialog
            ((UISingletonDialog<RechargeWelfareUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 1;
  *(undefined ***)this = &PTR_GetClass_0671cca0;
  *(undefined **)(this + 0xd8) = &DAT_0671d008;
  *(undefined ***)(this + 0x138) = &PTR__RechargeWelfareUI_0671d050;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x148));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  Sexy::Insets::Insets((Insets *)(this + 0x1d8));
  *(undefined8 *)(this + 0x1e8) = 0;
  FUN_05476574(this + 0x1f0);
  *(undefined8 *)(this + 0x1f8) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<RechargeWelfareUI,void(RechargeWelfareUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAwardPlantID);
  local_80 = local_20;
  uStack_78 = uStack_18;
  local_70 = local_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<RechargeWelfareUI,void(RechargeWelfareUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::CRChargeRewardPlantID,&local_80);
  std::
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  ::clear((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
           *)(this + 0x148));
  nop();
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::clear((map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
           *)(this + 0x178));
  TodStringTranslate(L"[WELFARE_EVENT_TITLE]");
  FUN_054766c8(this + 0x1f0,auStack_40);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::DisabledAllButtons() */

void __thiscall RechargeWelfareUI::DisabledAllButtons(RechargeWelfareUI *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  PVZ2UIButton *pPVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                      *)(this + 0x148));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x148));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    plVar3 = (long *)Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar2 + 8));
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::string::string((string *)&local_10,"buttonClose");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (pPVar4 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::EnabledAllButtons() */

void __thiscall RechargeWelfareUI::EnabledAllButtons(RechargeWelfareUI *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  PVZ2UIButton *pPVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                      *)(this + 0x148));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x148));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    plVar3 = (long *)Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar2 + 8));
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::string::string((string *)&local_10,"buttonClose");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (pPVar4 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::~RechargeWelfareUI() */

void __thiscall RechargeWelfareUI::~RechargeWelfareUI(RechargeWelfareUI *this)

{
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0671cca0;
  *(undefined **)(this + 0xd8) = &DAT_0671d008;
  *(undefined ***)(this + 0x138) = &PTR__RechargeWelfareUI_0671d050;
  local_18 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(long **)(lVar2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 8) + 8))();
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  ::clear(this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x1f0);
  std::vector<FestivalEntryData,std::allocator<FestivalEntryData>>::~vector
            ((vector<FestivalEntryData,std::allocator<FestivalEntryData>> *)(this + 0x1c0));
  std::vector<FestivalTab,std::allocator<FestivalTab>>::~vector
            ((vector<FestivalTab,std::allocator<FestivalTab>> *)(this + 0x1a8));
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::~map((map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
          *)(this + 0x178));
  std::
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  ::~map(this_00);
  UISingletonDialog<RechargeWelfareUI>::~UISingletonDialog
            ((UISingletonDialog<RechargeWelfareUI> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeWelfareUI::~RechargeWelfareUI() */

void __thiscall RechargeWelfareUI::~RechargeWelfareUI(RechargeWelfareUI *this)

{
  ~RechargeWelfareUI(this + -0x138);
  return;
}


/* RechargeWelfareUI::~RechargeWelfareUI() */

void __thiscall RechargeWelfareUI::~RechargeWelfareUI(RechargeWelfareUI *this)

{
  ~RechargeWelfareUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RechargeWelfareUI::~RechargeWelfareUI() */

void __thiscall RechargeWelfareUI::~RechargeWelfareUI(RechargeWelfareUI *this)

{
  ~RechargeWelfareUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::Draw(Sexy::Graphics*) */

void __thiscall RechargeWelfareUI::Draw(RechargeWelfareUI *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,(Insets *)local_18);
  cVar1 = std::vector<FestivalEntryData,std::allocator<FestivalEntryData>>::empty
                    ((vector<FestivalEntryData,std::allocator<FestivalEntryData>> *)(this + 0x1c0));
  if (cVar1 == '\0') {
    UI::Dialog::Draw((Dialog *)this,param_1);
    local_20 = std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                        *)(this + 0x148));
    local_18[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x148));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)local_18),
          bVar2) {
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      (**(code **)(**(long **)(lVar3 + 8) + 0x20))(*(long **)(lVar3 + 8),param_1);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
RechargeWelfareUI::DrawAll(RechargeWelfareUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *this_00;
  undefined8 uVar12;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = std::vector<FestivalEntryData,std::allocator<FestivalEntryData>>::empty
                    ((vector<FestivalEntryData,std::allocator<FestivalEntryData>> *)(this + 0x1c0));
  if (cVar3 == '\0') {
    TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
    local_20 = std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                        *)(this + 0x148));
    local_18[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x148));
    while (bVar4 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)local_18),
          bVar4) {
      lVar9 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
      (**(code **)(**(long **)(lVar9 + 8) + 0x28))(*(long **)(lVar9 + 8),param_2);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    }
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f70);
    iVar1 = *(int *)(this + 0x50);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f70);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar6 = FUN_03ac4800(2);
    iVar2 = *(int *)(this + 0x4c);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f70);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    this_00 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac7f70);
    iVar8 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage(param_2,pIVar10,(iVar1 - iVar5) / 2,iVar6 + iVar2,iVar7,iVar8);
    uVar12 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
    iVar5 = FUN_03ac4800(0x11);
    iVar1 = *(int *)(this + 0x4c);
    iVar2 = *(int *)(this + 0x50);
    FUN_05477b24((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20,this + 0x1f0);
    Sexy::Color::Color((Color *)local_18,1);
    Sexy::PrimeTypeface::DrawString_Line
              ((PrimeTypeface *)0x0,(float)(iVar5 + iVar1),(float)iVar2,uVar12,param_2,
               (_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20,1,
               (rbtree_iterator *)local_18,0);
    FUN_05476c50((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::Update() */

void __thiscall RechargeWelfareUI::Update(RechargeWelfareUI *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                      *)(this + 0x148));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x148));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    (**(code **)(**(long **)(lVar2 + 8) + 0x48))(*(long **)(lVar2 + 8));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (*(long **)(this + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f8) + 0x108))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::HasTargetActivityOpen(FestivalTab) */

void __thiscall RechargeWelfareUI::HasTargetActivityOpen(RechargeWelfareUI *this,undefined4 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
             ::find((map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
                     *)(this + 0x178),(FestivalTab *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x178));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar2 = 0;
  if (bVar1) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar2 = CheckTargetActivityItem(this,*(int *)(lVar3 + 4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::SortTabBtns(std::vector<PVZ2UIButton*, std::allocator<PVZ2UIButton*> >&) */

void __thiscall RechargeWelfareUI::SortTabBtns(RechargeWelfareUI *this,vector *param_1)

{
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  this_00 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             *)(this + 0x148);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::clear
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)param_1);
  uVar8 = *(undefined8 *)(this + 0x1a8);
  lVar2 = FUN_03ac1fb8(uVar8,*(undefined8 *)(this + 0x1b0));
  if (lVar2 != 0) {
    do {
      piVar3 = (int *)FUN_03ac1fc4(uVar8,uVar7);
      local_1c = *piVar3;
      local_18 = std::
                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                 ::find(this_00,&local_1c);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar1) {
        puVar5 = (undefined4 *)FUN_03ac1fc4(*(undefined8 *)(this + 0x1a8),uVar7);
        local_18 = CONCAT44(local_18._4_4_,*puVar5);
        puVar6 = (undefined8 *)
                 std::
                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                 ::operator[](this_00,(int *)&local_18);
        local_10 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)*puVar6);
        std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
                  ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)param_1,
                   (PVZ2UIButton **)&local_10);
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(this + 0x1a8);
      uVar4 = FUN_03ac1fb8(uVar8,*(undefined8 *)(this + 0x1b0));
    } while (uVar7 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::InitActivityID() */

void __thiscall RechargeWelfareUI::InitActivityID(RechargeWelfareUI *this)

{
  map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  wchar_t local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_2c = 4;
  local_28[0] = 0x29e3;
  local_8 = ___stack_chk_guard;
  this_00 = (map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
             *)(this + 0x178);
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xb;
  local_28[0] = 0x2a00;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0xe;
  local_28[0] = 0x2a11;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1a;
  local_28[0] = 0x29f5;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  local_2c = 0x1f;
  local_28[0] = 0x2a5c;
  local_20[0] = std::make_pair<FestivalTab,ActivityTypeID>
                          ((FestivalTab *)&local_2c,(ActivityTypeID *)local_28);
  std::map<FestivalTab,int,std::less<FestivalTab>,std::allocator<std::pair<FestivalTab_const,int>>>
  ::insert<std::pair<FestivalTab,ActivityTypeID>,void>(this_00,(pair *)local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_2c = 1;
  local_30 = L'⩓';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)local_28,&local_30,(wchar_t *)&local_2c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)local_28);
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  INetworkMsgProcess::RequestActivityList(this_02,(vector *)local_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::SetCurrentTab(int) */

void __thiscall RechargeWelfareUI::SetCurrentTab(RechargeWelfareUI *this,int param_1)

{
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_00;
  bool bVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  wchar_t local_30 [2];
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             *)(this + 0x148);
  *(int *)(this + 0x140) = param_1;
  local_8 = ___stack_chk_guard;
  local_28 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_20[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
    if (!bVar1) break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    if (*piVar2 != *(int *)(this + 0x140)) {
      (**(code **)(**(long **)(piVar2 + 2) + 0x18))(*(long **)(piVar2 + 2),0);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
  }
  plVar3 = (long *)std::
                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                   ::operator[](this_00,(int *)(this + 0x140));
  if (*plVar3 != 0) {
    puVar4 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_00,(int *)(this + 0x140));
    (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,1);
  }
  switch(param_1) {
  case 2:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩦';
    break;
  case 3:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧍';
    break;
  case 4:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧣';
    break;
  case 5:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧨';
    break;
  case 6:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨉';
    break;
  case 7:
    BossChallenge::RequestDatas();
    goto switchD_03ad738c_caseD_a;
  case 8:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨞';
    break;
  case 9:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⪏';
    break;
  default:
    goto switchD_03ad738c_caseD_a;
  case 0xb:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨀';
    break;
  case 0xc:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨴';
    break;
  case 0xd:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨇';
    break;
  case 0xe:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨑';
    break;
  case 0xf:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩄';
    break;
  case 0x10:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨗';
    break;
  case 0x11:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨖';
    break;
  case 0x12:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨤';
    break;
  case 0x13:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨬';
    break;
  case 0x14:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨭';
    break;
  case 0x15:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨾';
    break;
  case 0x16:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨂';
    break;
  case 0x17:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨺';
    break;
  case 0x18:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨛';
    break;
  case 0x19:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨲';
    break;
  case 0x1a:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⧵';
    break;
  case 0x1f:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⩜';
    break;
  case 0x20:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨓';
    break;
  case 0x22:
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_30[0] = L'⨏';
  }
  local_30[1] = 1;
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)&local_28);
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  INetworkMsgProcess::RequestActivityList(this_02,(vector *)local_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
switchD_03ad738c_caseD_a:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::Layout() */

void __thiscall RechargeWelfareUI::Layout(RechargeWelfareUI *this)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 0;
  std::string::string((string *)&local_10,"Pannel");
  iVar7 = 0;
  bVar1 = false;
  lVar3 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  local_18 = std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::begin((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                      *)(this + 0x148));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x148));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar4 = Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar4 + 8));
    if (*(char *)(lVar4 + 0x6c) == '\0') {
      piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      if (*(int *)(this + 0x140) == *piVar5) {
        bVar1 = true;
      }
    }
    else {
      *(int *)(lVar4 + 0x4c) = iVar6;
      iVar6 = iVar6 + *(int *)(lVar4 + 0x54);
      if (iVar7 == 0) {
        piVar5 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18
                                  );
        iVar7 = *piVar5;
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  *(int *)(lVar3 + 0x54) = iVar6;
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(lVar3 + 0x20),2);
  if (bVar1) {
    SetCurrentTab(this,iVar7);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::ButtonDepress(int) */

void __thiscall RechargeWelfareUI::ButtonDepress(RechargeWelfareUI *this,int param_1)

{
  GameStateMgr *pGVar1;
  LawnApp *this_00;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  MiniGameDialogAdaptor *this_01;
  ArcadeMode *pAVar5;
  wchar_t *pwVar6;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  pGVar1 = gGameStateMgr;
  local_8 = ___stack_chk_guard;
  if (param_1 - 1U < 0x25) {
    SetCurrentTab(this,param_1);
    goto LAB_03ad78e4;
  }
  switch(param_1) {
  case 0x65:
    iVar2 = *(int *)(this + 0x140);
    switch(iVar2) {
    case 8:
      std::string::string((string *)awStack_10,"OpenPlantTreeMain");
      Cpp2Lua((string *)awStack_10);
      std::string::~string((string *)awStack_10);
      nop();
      break;
    case 9:
      lVar4 = ArcadePropertySheet::Get();
      this_01 = ::operator_new(0x1c0);
      MiniGameDialogAdaptor::MiniGameDialogAdaptor(this_01);
      pAVar5 = (ArcadeMode *)FUN_03ac2948(*(undefined8 *)(lVar4 + 0x10));
      MiniGameDialogAdaptor::ConfigureForMiniGame(this_01,pAVar5);
      HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_01);
      break;
    default:
      goto switchD_03ad7a3c_caseD_a;
    case 0xd:
      GameStateMgr::ShowRedPack(gGameStateMgr,0,5,5);
      break;
    case 0x12:
      std::string::string((string *)awStack_10,"SecretGacha");
      GameStateMgr::ShowStore(pGVar1,(string *)awStack_10,5,5);
      std::string::~string((string *)awStack_10);
      nop();
    }
    goto LAB_03ad78e4;
  case 0x66:
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
    goto LAB_03ad78e4;
  case 0x67:
    std::string::string((string *)awStack_10,"challengeChrismasMedal");
    UIBuyCrystal::create((string *)awStack_10,true);
    std::string::~string((string *)awStack_10);
    nop();
  default:
    iVar2 = *(int *)(this + 0x140);
switchD_03ad7a3c_caseD_a:
    if (iVar2 - 1U < 0x25) {
      puVar3 = (undefined8 *)
               std::
               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                             *)(this + 0x148),(int *)(this + 0x140));
      (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,param_1);
    }
    goto LAB_03ad78e4;
  case 0x6e:
    pwVar6 = L"Festival2019_Cracker";
    break;
  case 0x6f:
    pwVar6 = L"Festival2019_RedPacket";
  }
  FUN_05478178(awStack_10,pwVar6,auStack_18);
  LawnApp::ShowProbabilityDialog(this_00,awStack_10);
  FUN_05476c50(awStack_10);
  nop();
LAB_03ad78e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RechargeWelfareUI::ButtonDepress(int) */

void __thiscall RechargeWelfareUI::ButtonDepress(RechargeWelfareUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::onNotifyAwardPlantID(bool) */

void __thiscall RechargeWelfareUI::onNotifyAwardPlantID(RechargeWelfareUI *this,bool param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  long lVar4;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  wstring awStack_a8 [8];
  wstring awStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if (((cVar1 != '\0') && (local_70 != '\0')) &&
       (lVar4 = UISingletonDialog<UIChagreDouble>::GetSingletonPtr(), lVar4 == 0)) {
      UISingletonDialog<UIChagreDouble>::ShowDialog();
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    FUN_05478178(awStack_a8,L"[REVIVE_TIP]",auStack_b8);
    FUN_05478178(awStack_a0,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",auStack_b0);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_a8,awStack_a0);
    FUN_05476c50(awStack_a0);
    nop();
    FUN_05476c50(awStack_a8);
    nop();
    FUN_05478178(awStack_a8,L"[DIALOG_STRING_OK]",auStack_b0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>((Delegate0 *)aAStack_88,awStack_a0);
    PVZ2UIDialog::AddButton(pPVar3,awStack_a8,(Delegate0 *)aAStack_88,param_1);
    FUN_05476c50(awStack_a8);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeWelfareUI::CheckAnyNotReceivedReward() */

byte RechargeWelfareUI::CheckAnyNotReceivedReward(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = UIConsumeAndReceiveExtra::HasAnyNotReceivedReward();
  bVar2 = ConsumeAndReceivePage::HasAnyNotReceivedReward();
  return bVar2 | bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::CheckActivityOpenAtLeastOne() */

void RechargeWelfareUI::CheckActivityOpenAtLeastOne(void)

{
  char cVar1;
  int iVar2;
  undefined8 local_b0;
  undefined8 local_a8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
  local_a8._0_4_ = 0x29e3;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a00;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8._0_4_ = 0x2a11;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_a8 = CONCAT44(local_a8._4_4_,0x29f5);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_a0,(int *)&local_a8);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_a0);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_a0);
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!(bool)cVar1) {
LAB_03ada500:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_a0);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 != '\0') && (local_70 != '\0')) {
      ActiveItem::~ActiveItem(aAStack_88);
      cVar1 = local_70;
      goto LAB_03ada500;
    }
    ActiveItem::~ActiveItem(aAStack_88);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::InitView() */

void __thiscall RechargeWelfareUI::InitView(RechargeWelfareUI *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LotteryResultProgressBar *pLVar6;
  PVZ2UIButton *pPVar7;
  FestivalGameTabUI *pFVar8;
  undefined8 *puVar9;
  CShopTabUI *this_00;
  DefaultTabUI *pDVar10;
  CrackerTabUI_PlantTree *this_01;
  CrackerTabUI *this_02;
  FestivalRechargeTabUI *this_03;
  OneYuanTabUI *this_04;
  RedPacketTab *this_05;
  FestivalLotteryTab *this_06;
  SecretGachaTab *this_07;
  SalesProgressBar *this_08;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  PVZ2UIScrollingWidget *this_09;
  RechargeWelfareUI *pRVar14;
  long *plVar15;
  RechargeWelfareUI *pRVar16;
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_10;
  code *pcVar17;
  undefined8 local_118;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_110 [24];
  string asStack_f8 [56];
  undefined8 local_c0;
  undefined8 uStack_b8;
  string asStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_110);
  std::string::string(asStack_f8,"Btn_Goto");
  UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_f8);
  PVZ2UIButton::getContentsRect();
  *(undefined8 *)(this + 0x1d8) = local_c0;
  *(undefined8 *)(this + 0x1e0) = uStack_b8;
  std::string::~string(asStack_f8);
  nop();
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  std::string::string((string *)&local_c0,"Btn_Goto");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
  std::string::~string((string *)&local_c0);
  nop();
  (**(code **)(*(long *)pPVar7 + 0x1a8))
            (pPVar7,(iVar3 - *(int *)(pPVar7 + 0x50)) / 2,*(undefined4 *)(pPVar7 + 0x4c));
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03ac12f8(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    NetworkFestivalEntryInfo::NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_c0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_c0);
    if (cVar1 != '\0') {
      bVar2 = std::operator!=(asStack_98,"");
      if (bVar2) {
        Sexy::ToWString(asStack_98);
        cVar1 = TodStringListExists((wstring *)asStack_f8);
        FUN_05476c50(asStack_f8);
        if (cVar1 != '\0') {
          Sexy::ToWString(asStack_98);
          TodStringTranslate((wstring *)&local_118);
          FUN_054766c8(this + 0x1f0,asStack_f8);
          FUN_05476c50(asStack_f8);
          FUN_05476c50((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
        }
      }
    }
    NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,1);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_1");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 1) {
      *(undefined4 *)(this + 0x140) = 0x22;
    }
  }
  else {
    pFVar8 = ::operator_new(0x38);
    FestivalGameTabUI::FestivalGameTabUI(pFVar8,1,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,1);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           *)(this + 0x148),(int *)&local_c0);
    *puVar9 = pFVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pFVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  this_10 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             *)(this + 0x148);
  cVar1 = HasTargetActivityOpen(this,0x22);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_2");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x22) {
      *(undefined4 *)(this + 0x140) = 3;
    }
  }
  else {
    this_00 = ::operator_new(0x60);
    CShopTabUI::CShopTabUI(this_00,0x22,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x22);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_00;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_00);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,3);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_3");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 3) {
      *(undefined4 *)(this + 0x140) = 4;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,3,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,3);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,4);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_4");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 4) {
      *(undefined4 *)(this + 0x140) = 5;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,4,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,4);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,5);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_5");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 5) {
      *(undefined4 *)(this + 0x140) = 7;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,5,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,5);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,6);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_6");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 6) {
      *(undefined4 *)(this + 0x140) = 0x22;
    }
  }
  else {
    pFVar8 = ::operator_new(0x38);
    FestivalGameTabUI::FestivalGameTabUI(pFVar8,6,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,6);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pFVar8;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pFVar8);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,7);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_7");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 7) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,7,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,7);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,8);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_8");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 8) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    this_01 = ::operator_new(0x50);
    CrackerTabUI_PlantTree::CrackerTabUI_PlantTree(this_01,8,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,8);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_01;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_01);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,9);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_9");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 9) {
      *(undefined4 *)(this + 0x140) = 0xb;
    }
  }
  else {
    this_02 = ::operator_new(0x50);
    CrackerTabUI::CrackerTabUI(this_02,9,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,9);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_02;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_02);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,10);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_10");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 10) {
      *(undefined4 *)(this + 0x140) = 0xb;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,10,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,10);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0xb);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_11");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xb) {
      *(undefined4 *)(this + 0x140) = 0xc;
    }
  }
  else {
    this_03 = ::operator_new(0x38);
    FestivalRechargeTabUI::FestivalRechargeTabUI(this_03,0xb,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xb);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_03;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_03);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0xc);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_12");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xc) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0xc,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xc);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0xd);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_13");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xd) {
      *(undefined4 *)(this + 0x140) = 0xe;
    }
  }
  else {
    this_04 = ::operator_new(0x58);
    OneYuanTabUI::OneYuanTabUI(this_04,0xd,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xd);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_04;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_04);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0xe);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_14");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xe) {
      *(undefined4 *)(this + 0x140) = 0xf;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0xe,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xe);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0xf);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_15");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0xf) {
      *(undefined4 *)(this + 0x140) = 0x10;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0xf,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0xf);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x10);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_16");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x10) {
      *(undefined4 *)(this + 0x140) = 0x11;
    }
  }
  else {
    this_05 = ::operator_new(0x70);
    RedPacketTab::RedPacketTab(this_05,0x10,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x10);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_05;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_05);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x11);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_17");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x11) {
      *(undefined4 *)(this + 0x140) = 0x12;
    }
  }
  else {
    this_06 = ::operator_new(0x78);
    FestivalLotteryTab::FestivalLotteryTab(this_06,0x11,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x11);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_06;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_06);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x12);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_18");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x12) {
      *(undefined4 *)(this + 0x140) = 0x13;
    }
  }
  else {
    this_07 = ::operator_new(0x30);
    SecretGachaTab::SecretGachaTab(this_07,0x12,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x12);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = this_07;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_07);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x13);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_19");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x13) {
      *(undefined4 *)(this + 0x140) = 0x14;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x13,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x13);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x14);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_20");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x14) {
      *(undefined4 *)(this + 0x140) = 0x15;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x14,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x14);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x15);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_21");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x15) {
      *(undefined4 *)(this + 0x140) = 0x16;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x15,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x15);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x16);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_22");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x16) {
      *(undefined4 *)(this + 0x140) = 0x17;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x16,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x16);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x17);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_23");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x17) {
      *(undefined4 *)(this + 0x140) = 0x18;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x17,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x17);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x18);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_24");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x18) {
      *(undefined4 *)(this + 0x140) = 0x19;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x18,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x18);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x19);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_25");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x19) {
      *(undefined4 *)(this + 0x140) = 0x1a;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x19,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x19);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x1a);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_26");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1a) {
      *(undefined4 *)(this + 0x140) = 0x1b;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x1a,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1a);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x1b);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_27");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1b) {
      *(undefined4 *)(this + 0x140) = 0x1c;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x1b,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1b);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x1c);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_28");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1c) {
      *(undefined4 *)(this + 0x140) = 0x1d;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x1c,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1c);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x1d);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_29");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1d) {
      *(undefined4 *)(this + 0x140) = 0x1e;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x1d,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1d);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x1e);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_30");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1e) {
      *(undefined4 *)(this + 0x140) = 0x1f;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x1e,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1e);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  cVar1 = HasTargetActivityOpen(this,0x1f);
  if (cVar1 == '\0') {
    std::string::string((string *)&local_c0,"UIButton_31");
    pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if (pPVar7 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
    }
    if (*(int *)(this + 0x140) == 0x1f) {
      *(undefined4 *)(this + 0x140) = 0x26;
    }
  }
  else {
    pDVar10 = ::operator_new(0x38);
    DefaultTabUI::DefaultTabUI(pDVar10,0x1f,(Dialog *)this);
    local_c0 = CONCAT44(local_c0._4_4_,0x1f);
    puVar9 = (undefined8 *)
             std::
             map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
             ::operator[](this_10,(int *)&local_c0);
    *puVar9 = pDVar10;
    local_c0 = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)pDVar10);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110,
               (PVZ2UIButton **)&local_c0);
  }
  iVar3 = 0;
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8ab8);
  LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  this_08 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8ab8);
  SalesProgressBar::GetCurrentLevel(this_08);
  local_118 = std::
              map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
              ::begin(this_10);
  while( true ) {
    local_c0 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_10);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_118,(rbtree_iterator *)&local_c0);
    if (!bVar2) break;
    lVar13 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
    pPVar7 = (PVZ2UIButton *)Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar13 + 8));
    puVar11 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118)
    ;
    Sexy::StrFormat("IMAGE_UI_FESTIVALCENTER_TABBTN%d_N",(string *)&local_c0,(ulong)*puVar11);
    pLVar6 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)&local_c0,false);
    std::string::~string((string *)&local_c0);
    puVar11 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118)
    ;
    Sexy::StrFormat("IMAGE_UI_FESTIVALCENTER_TABBTN%d_D",(string *)&local_c0,(ulong)*puVar11);
    uVar12 = StringHelper::ToImage((string *)&local_c0,false);
    std::string::~string((string *)&local_c0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_f8,pLVar6,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_c0,uVar12,2);
    PVZ2UIButton::SetRadioStates(pPVar7,(PVZ2UIImage *)asStack_f8,(PVZ2UIImage *)&local_c0,false);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_c0,
               (vector *)avStack_110);
    PVZ2UIButton::LinkRadioButtons(pPVar7,(string *)&local_c0);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_c0);
    FUN_03ac2958(pPVar7 + 0x2c0);
    pcVar17 = *(code **)(*(long *)pPVar7 + 0x198);
    uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    uVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar6);
    (*pcVar17)(pPVar7,0,iVar3,uVar4,uVar5);
    iVar3 = iVar3 + *(int *)(pPVar7 + 0x54);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_118);
  }
  std::string::string((string *)&local_c0,"Pannel");
  lVar13 = UI::Dialog::GetWidget((Dialog *)this,(string *)&local_c0);
  std::string::~string((string *)&local_c0);
  nop();
  Sexy::Insets::Insets
            ((Insets *)&local_c0,*(int *)(lVar13 + 0x48),*(int *)(lVar13 + 0x4c),
             *(int *)(lVar13 + 0x50),*(int *)(lVar13 + 0x54));
  (**(code **)(**(long **)(lVar13 + 0x20) + 0x68))(*(long **)(lVar13 + 0x20),lVar13);
  *(int *)(lVar13 + 0x54) = iVar3;
  this_09 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_09,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)this_09 + 0x1a0))(this_09,(string *)&local_c0);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_09,2);
  std::string::string(asStack_f8,"UIImage_Back");
  pRVar14 = (RechargeWelfareUI *)UI::Dialog::GetWidget((Dialog *)this,asStack_f8);
  std::string::~string(asStack_f8);
  nop();
  pRVar16 = this;
  if (pRVar14 != (RechargeWelfareUI *)0x0) {
    pRVar16 = pRVar14;
  }
  (**(code **)(*(long *)pRVar16 + 0x60))(pRVar16,this_09);
  (**(code **)(*(long *)this_09 + 0x60))(this_09,lVar13);
  lVar13 = gLawnApp;
  iVar3 = FUN_03ac4800(0x1c);
  (**(code **)(*(long *)pRVar16 + 0x1a8))
            (pRVar16,(*(int *)(lVar13 + 0xd4) - *(int *)(pRVar16 + 0x50)) / 2,
             iVar3 + (*(int *)(lVar13 + 0xd8) - *(int *)(pRVar16 + 0x54)) / 2);
  std::string::string(asStack_f8,"Btn_Check_RedPack");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_f8);
  std::string::~string(asStack_f8);
  nop();
  if (pPVar7 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
  }
  std::string::string(asStack_f8,"Btn_Check");
  pPVar7 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_f8);
  std::string::~string(asStack_f8);
  nop();
  if (pPVar7 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar7 + 0x158))(pPVar7,0);
  }
  std::string::string(asStack_f8,"Tab1_Cost_Back");
  plVar15 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_f8);
  std::string::~string(asStack_f8);
  nop();
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x158))(plVar15,0);
  }
  iVar3 = 1;
  cVar1 = HasTargetActivityOpen(this,s_ShowTab);
  if (cVar1 == '\0') {
    do {
      cVar1 = HasTargetActivityOpen(this,iVar3);
      if (cVar1 != '\0') {
        SetCurrentTab(this,iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x26);
  }
  else {
    SetCurrentTab(this,s_ShowTab);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_110);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::SyncActivityData(NetworkFestivalEntryInfo const&) */

void __thiscall
RechargeWelfareUI::SyncActivityData(RechargeWelfareUI *this,NetworkFestivalEntryInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = FUN_03ac1f60(uVar7,*(undefined8 *)(param_1 + 0x10));
    if (uVar5 <= uVar6) break;
    puVar4 = (undefined4 *)FUN_03ac1f90(uVar7,uVar6);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar3 = *(undefined1 *)(puVar4 + 2);
    PVZ1ModeLevelBonusData::PVZ1ModeLevelBonusData((PVZ1ModeLevelBonusData *)&local_18);
    local_18 = uVar1;
    local_14 = uVar2;
    local_10 = uVar3;
    std::vector<FestivalEntryData,std::allocator<FestivalEntryData>>::push_back
              ((vector<FestivalEntryData,std::allocator<FestivalEntryData>> *)(this + 0x1c0),
               (FestivalEntryData *)&local_18);
    uVar6 = uVar6 + 1;
  }
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeWelfareUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
RechargeWelfareUI::onNotifyRefreshActivityList(RechargeWelfareUI *this,bool param_1,set *param_2)

{
  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
  *this_00;
  LawnApp *pLVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  PVZ2UIDialog *pPVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  DailyAchievement *pDVar12;
  ConsumeAndReceivePage *this_01;
  UIConsumeAndReceiveExtra *this_02;
  Dialog *this_03;
  RtObject *this_04;
  UIBossMedalLottery *this_05;
  ProfileMgr *pPVar13;
  PlayerInfo *pPVar14;
  StoneLotteryNationalDay *this_06;
  BaseBufferResource *this_07;
  long lVar15;
  DFileHandler *this_08;
  DailySignPage *this_09;
  RechargeDailySignActivityManager *pRVar16;
  DiscountShopActivityManager *pDVar17;
  DiscountShopActivityUI *this_10;
  RechargeDailySignActivityUI *this_11;
  ulong uVar18;
  TGALogMgr *pTVar19;
  UIRechargeReward *this_12;
  wchar_t *pwVar20;
  undefined4 uVar21;
  size_t __n;
  size_t sVar22;
  Delegate0 *local_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined4 local_1a0 [10];
  undefined8 local_178 [5];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  int local_120;
  Delegate0 aDStack_108 [8];
  undefined4 local_100;
  char local_f0;
  Delegate0 aDStack_88 [8];
  undefined4 local_80;
  char local_70;
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) goto LAB_03ae7458;
  local_1a0[0] = 0x2a53;
  local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_1a0)
  ;
  local_150 = std::
              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)param_2);
  bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
  if (bVar2) {
    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar5);
    if (local_70 == '\0') goto LAB_03ae7604;
    NetworkFestivalEntryInfo::NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_150);
    cVar4 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_88,(RtObject *)&local_150);
    pLVar1 = gLawnApp;
    if (cVar4 == '\0') {
      FUN_05478178((NetworkRedPacketInfo *)local_1a0,&DAT_056f11a8,auStack_1b0);
      FUN_05478178((rbtree_iterator *)local_178,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_1a8);
      pPVar7 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_1a0,(wstring *)local_178);
      FUN_05476c50((rbtree_iterator *)local_178);
      nop();
      FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
      nop();
      FUN_05478178((NetworkRedPacketInfo *)local_1a0,L"[BUTTON_OK]",auStack_1a8);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                (aDStack_108,(rbtree_iterator *)local_178);
LAB_03ae7700:
      local_1b8 = aDStack_108;
      PVZ2UIDialog::AddButton(pPVar7,(NetworkRedPacketInfo *)local_1a0,local_1b8,1);
      FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
      nop();
    }
    else {
      lVar11 = FUN_03ac1f60(local_148,local_140);
      pLVar1 = gLawnApp;
      if (lVar11 == 0) {
        FUN_05478178((NetworkRedPacketInfo *)local_1a0,&DAT_056f11a8,auStack_1b0);
        FUN_05478178((rbtree_iterator *)local_178,L"[WECHAT_ACTIVITY_EMPTY_CONFIG]",auStack_1a8);
        pPVar7 = (PVZ2UIDialog *)
                 LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_1a0,(wstring *)local_178);
        FUN_05476c50((rbtree_iterator *)local_178);
        nop();
        FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
        nop();
        FUN_05478178((NetworkRedPacketInfo *)local_1a0,L"[BUTTON_OK]",auStack_1a8);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                  (aDStack_108,(rbtree_iterator *)local_178);
        goto LAB_03ae7700;
      }
      SyncActivityData(this,(NetworkFestivalEntryInfo *)&local_150);
    }
    NetworkFestivalEntryInfo::~NetworkFestivalEntryInfo((NetworkFestivalEntryInfo *)&local_150);
LAB_03ae7604:
    ActiveItem::~ActiveItem((ActiveItem *)aDStack_88);
  }
  else {
    local_1a0[0] = 0x2a09;
    local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                              (int *)local_1a0);
    local_150 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)param_2);
    bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
    if (bVar2) {
      bVar2 = false;
      if (*(int *)(this + 0x140) == 6) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        plVar8 = (long *)UISingletonDialog<UIRenaissanceChallenge>::GetSingletonPtr();
        if (plVar8 == (long *)0x0) {
          UISingletonDialog<UIRenaissanceChallenge>::ShowDialog();
        }
        else {
          (**(code **)(*plVar8 + 0x108))();
        }
        local_150 = CONCAT44(local_150._4_4_,6);
        puVar9 = (undefined8 *)
                 std::
                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                 ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                               *)(this + 0x148),(int *)&local_150);
        plVar8 = (long *)*puVar9;
        uVar10 = UISingletonDialog<UIRenaissanceChallenge>::GetSingletonPtr();
        goto LAB_03ae7874;
      }
LAB_03ae7514:
      pLVar1 = gLawnApp;
      FUN_05478178((rbtree_iterator *)local_178,L"[REVIVE_TIP]",auStack_1a8);
      FUN_05478178((NetworkFestivalEntryInfo *)&local_150,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                   (NetworkRedPacketInfo *)local_1a0);
      pPVar7 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_178,(wstring *)&local_150);
      FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
      nop();
      FUN_05476c50((rbtree_iterator *)local_178);
      nop();
      FUN_05478178((rbtree_iterator *)local_178,L"[DIALOG_STRING_OK]",
                   (NetworkRedPacketInfo *)local_1a0);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                (aDStack_88,(NetworkFestivalEntryInfo *)&local_150);
    }
    else {
      local_1a0[0] = 0x2a13;
      local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                (int *)local_1a0);
      local_150 = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
      bVar3 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
      if (!bVar3) {
        local_1a0[0] = 0x2a0f;
        local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                 ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                  (int *)local_1a0);
        local_150 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_2);
        bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
        if (bVar2) {
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          if (local_70 == '\0') goto LAB_03ae7aec;
          NetworkShopInfo::NetworkShopInfo((NetworkShopInfo *)&local_150);
          cVar4 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_88,(RtObject *)&local_150);
          pLVar1 = gLawnApp;
          if (cVar4 == '\0') {
            FUN_05478178((NetworkRedPacketInfo *)local_1a0,&DAT_056f11a8,auStack_1b0);
            FUN_05478178((rbtree_iterator *)local_178,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_1a8);
            pPVar7 = (PVZ2UIDialog *)
                     LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_1a0,(wstring *)local_178);
            FUN_05476c50((rbtree_iterator *)local_178);
            nop();
            FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
            nop();
            FUN_05478178((NetworkRedPacketInfo *)local_1a0,L"[BUTTON_OK]",auStack_1a8);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
            Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                      (aDStack_108,(rbtree_iterator *)local_178);
LAB_03ae7dc8:
            local_1b8 = aDStack_108;
            PVZ2UIDialog::AddButton(pPVar7,(NetworkRedPacketInfo *)local_1a0,local_1b8,1);
            FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
            nop();
          }
          else {
            lVar11 = FUN_03ac1fec(local_148,local_140);
            pLVar1 = gLawnApp;
            if (lVar11 == 0) {
              FUN_05478178((NetworkRedPacketInfo *)local_1a0,&DAT_056f11a8,auStack_1b0);
              FUN_05478178((rbtree_iterator *)local_178,L"[WECHAT_ACTIVITY_EMPTY_CONFIG]",
                           auStack_1a8);
              pPVar7 = (PVZ2UIDialog *)
                       LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_1a0,(wstring *)local_178);
              FUN_05476c50((rbtree_iterator *)local_178);
              nop();
              FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
              nop();
              FUN_05478178((NetworkRedPacketInfo *)local_1a0,L"[BUTTON_OK]",auStack_1a8);
              Sexy::
              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                        ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
              Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                        (aDStack_108,(rbtree_iterator *)local_178);
              goto LAB_03ae7dc8;
            }
            local_178[0] = CONCAT44(local_178[0]._4_4_,0x22);
            puVar9 = (undefined8 *)
                     std::
                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                     ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   *)(this + 0x148),(int *)local_178);
            (**(code **)(*(long *)*puVar9 + 0x70))
                      ((long *)*puVar9,(NetworkFestivalEntryInfo *)&local_150);
          }
          NetworkShopInfo::~NetworkShopInfo((NetworkShopInfo *)&local_150);
        }
        else {
          local_1a0[0] = 0x2975;
          local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                    (int *)local_1a0);
          local_150 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
          bVar3 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
          if (bVar3) {
            if (*(int *)(this + 0x140) != 7) goto LAB_03ae7514;
            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar5);
            plVar8 = (long *)UISingletonDialog<FestivalGamePageExtra>::GetSingletonPtr();
            if (plVar8 == (long *)0x0) {
              UISingletonDialog<FestivalGamePageExtra>::ShowDialog();
            }
            else {
              (**(code **)(*plVar8 + 0x108))();
            }
            local_150 = CONCAT44(local_150._4_4_,7);
            puVar9 = (undefined8 *)
                     std::
                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                     ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   *)(this + 0x148),(int *)&local_150);
            plVar8 = (long *)*puVar9;
            uVar10 = UISingletonDialog<FestivalGamePageExtra>::GetSingletonPtr();
            goto LAB_03ae7874;
          }
          local_1a0[0] = 0x2a0a;
          local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                    (int *)local_1a0);
          local_150 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
          bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
          if (bVar2) goto LAB_03ae7458;
          local_1a0[0] = 0x2a8f;
          local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                    (int *)local_1a0);
          local_150 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)param_2);
          bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
          if (bVar2) {
            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar5);
            if (local_70 != '\0') {
              NetworkAchievementItem::NetworkAchievementItem((NetworkAchievementItem *)&local_150);
              cVar4 = ActiveItem::GetDataSerialized((ActiveItem *)aDStack_88,(RtObject *)&local_150)
              ;
              pLVar1 = gLawnApp;
              if (cVar4 == '\0') {
                FUN_05478178((NetworkRedPacketInfo *)local_1a0,&DAT_056f11a8,auStack_1b0);
                FUN_05478178((rbtree_iterator *)local_178,L"[WECHAT_ACTIVITY_DATA_ERROR]",
                             auStack_1a8);
                pPVar7 = (PVZ2UIDialog *)
                         LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_1a0,(wstring *)local_178);
                FUN_05476c50((rbtree_iterator *)local_178);
                nop();
                FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
                nop();
                FUN_05478178((NetworkRedPacketInfo *)local_1a0,L"[BUTTON_OK]",auStack_1a8);
                Sexy::
                MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                          ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                          (aDStack_108,(rbtree_iterator *)local_178);
                PVZ2UIDialog::AddButton(pPVar7,(NetworkRedPacketInfo *)local_1a0,aDStack_108,1);
                FUN_05476c50((NetworkRedPacketInfo *)local_1a0);
                nop();
              }
              else {
                this_00 = (map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           *)(this + 0x148);
                cVar4 = FUN_0547419c(asStack_60);
                if (cVar4 == '\0') {
                  uVar6 = StringHelper::ToInt(asStack_60);
                  local_178[0] = CONCAT44(local_178[0]._4_4_,9);
                  puVar9 = (undefined8 *)
                           std::
                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           ::operator[](this_00,(int *)local_178);
                  (**(code **)(*(long *)*puVar9 + 0x80))((long *)*puVar9,uVar6);
                }
                local_178[0] = CONCAT44(local_178[0]._4_4_,9);
                plVar8 = (long *)std::
                                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                 ::operator[](this_00,(int *)local_178);
                lVar11 = *plVar8;
                if ((lVar11 == 0) ||
                   (cVar4 = FUN_02fd3c78(*(undefined1 *)(lVar11 + 0x38)), cVar4 != '\0')) {
                  pDVar12 = (DailyAchievement *)FUN_02fd3c7c(*(undefined8 *)(lVar11 + 0x40));
                  if (pDVar12 != (DailyAchievement *)0x0) {
                    DailyAchievement::SyncActivityData(pDVar12,(NetworkAchievementItem *)&local_150)
                    ;
                  }
                }
                else {
                  pDVar12 = ::operator_new(0x140);
                  DailyAchievement::DailyAchievement(pDVar12);
                  DailyAchievement::SyncActivityData(pDVar12,(NetworkAchievementItem *)&local_150);
                  local_178[0] = CONCAT44(local_178[0]._4_4_,9);
                  puVar9 = (undefined8 *)
                           std::
                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           ::operator[](this_00,(int *)local_178);
                  (**(code **)(*(long *)*puVar9 + 0x58))((long *)*puVar9,pDVar12);
                }
              }
              NetworkAchievementItem::~NetworkAchievementItem((NetworkAchievementItem *)&local_150);
            }
          }
          else {
            local_1a0[0] = 0x2a07;
            local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                     ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                      (int *)local_1a0);
            local_150 = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)param_2);
            bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
            if (bVar2) {
              iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
              ActivityManager::GetActiveItem(iVar5);
              if (local_70 != '\0') {
                cVar4 = FUN_0547419c(asStack_60);
                if (cVar4 == '\0') {
                  uVar6 = StringHelper::ToInt(asStack_60);
                  uVar21 = 0xd;
                  goto LAB_03ae7f24;
                }
              }
            }
            else {
              local_1a0[0] = 0x2a00;
              local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                        (int *)local_1a0);
              local_150 = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_2);
              bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150);
              if (bVar2) {
                iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                ActivityManager::GetActiveItem(iVar5);
                if (local_70 == '\0') {
LAB_03ae7aec:
                  pLVar1 = gLawnApp;
                  FUN_05478178((rbtree_iterator *)local_178,L"[NETWORK_NOT_CONNECTED_TITLE]",
                               auStack_1a8);
                  FUN_05478178((NetworkFestivalEntryInfo *)&local_150,
                               L"[NETWORK_NOT_CONNECTED_TEXT]",(NetworkRedPacketInfo *)local_1a0);
                  pPVar7 = (PVZ2UIDialog *)
                           LawnApp::ShowPVZ2Dialog
                                     (pLVar1,(wstring *)local_178,(wstring *)&local_150);
                  FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
                  nop();
                  FUN_05476c50((rbtree_iterator *)local_178);
                  nop();
                  pwVar20 = L"[BUTTON_OK]";
LAB_03ae7b6c:
                  bVar2 = false;
                  FUN_05478178((rbtree_iterator *)local_178,pwVar20,
                               (NetworkRedPacketInfo *)local_1a0);
                  Sexy::
                  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                            (aDStack_108,(NetworkFestivalEntryInfo *)&local_150);
LAB_03ae7bac:
                  PVZ2UIDialog::AddButton(pPVar7,(rbtree_iterator *)local_178,aDStack_108,bVar2);
                  FUN_05476c50((rbtree_iterator *)local_178);
                  nop();
                }
                else {
                  this_01 = (ConsumeAndReceivePage *)
                            UISingletonDialog<ConsumeAndReceivePage>::GetSingletonPtr();
                  if (this_01 == (ConsumeAndReceivePage *)0x0) {
                    NetworkConsumeAndReceive::NetworkConsumeAndReceive
                              ((NetworkConsumeAndReceive *)&local_150);
                    cVar4 = ActiveItem::GetDataSerialized
                                      ((ActiveItem *)aDStack_88,(RtObject *)&local_150);
                    pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                    pPVar14 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar13);
                    if (cVar4 != '\0') {
                      PlayerInfo::CheckConsumptionActivityVersion(pPVar14,local_120);
                    }
                    UISingletonDialog<ConsumeAndReceivePage>::ShowDialog();
                    NetworkConsumeAndReceive::~NetworkConsumeAndReceive
                              ((NetworkConsumeAndReceive *)&local_150);
                  }
                  else {
                    ConsumeAndReceivePage::InitView(this_01);
                  }
                  local_150 = CONCAT44(local_150._4_4_,0xb);
                  puVar9 = (undefined8 *)
                           std::
                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                         *)(this + 0x148),(int *)&local_150);
                  plVar8 = (long *)*puVar9;
                  uVar10 = UISingletonDialog<ConsumeAndReceivePage>::GetSingletonPtr();
LAB_03ae7874:
                  (**(code **)(*plVar8 + 0x58))(plVar8,uVar10);
                }
              }
              else {
                local_1a0[0] = 0x2a11;
                local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          (int *)local_1a0);
                local_150 = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
                bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150
                                         );
                if (bVar2) {
                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar5);
                  if (local_70 == '\0') goto LAB_03ae7aec;
                  this_02 = (UIConsumeAndReceiveExtra *)
                            UISingletonDialog<UIConsumeAndReceiveExtra>::GetSingletonPtr();
                  if (this_02 == (UIConsumeAndReceiveExtra *)0x0) {
                    UISingletonDialog<UIConsumeAndReceiveExtra>::ShowDialog();
                  }
                  else {
                    UIConsumeAndReceiveExtra::InitView(this_02);
                  }
                  local_150 = CONCAT44(local_150._4_4_,0xe);
                  puVar9 = (undefined8 *)
                           std::
                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                           ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                         *)(this + 0x148),(int *)&local_150);
                  plVar8 = (long *)*puVar9;
                  uVar10 = UISingletonDialog<UIConsumeAndReceiveExtra>::GetSingletonPtr();
                  goto LAB_03ae7874;
                }
                local_1a0[0] = 0x2a5c;
                local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          (int *)local_1a0);
                local_150 = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_2);
                bVar2 = eastl::operator!=((rbtree_iterator *)local_178,(rbtree_iterator *)&local_150
                                         );
                if (bVar2) {
                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar5);
                  cVar4 = FUN_03ac12f8(local_80);
                  if ((cVar4 != '\0') && (local_70 != '\0')) {
                    bVar2 = false;
                    if (*(int *)(this + 0x140) == 0x1f) {
                      lVar11 = UISingletonDialog<UIArborDay>::GetSingletonPtr();
                      if (lVar11 == 0) {
                        UISingletonDialog<UIArborDay>::ShowDialog();
                      }
                      local_150 = CONCAT44(local_150._4_4_,0x1f);
                      puVar9 = (undefined8 *)
                               std::
                               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                               ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                             *)(this + 0x148),(int *)&local_150);
                      plVar8 = (long *)*puVar9;
                      uVar10 = UISingletonDialog<UIArborDay>::GetSingletonPtr();
                      goto LAB_03ae7874;
                    }
LAB_03ae81e0:
                    pLVar1 = gLawnApp;
                    FUN_05478178((rbtree_iterator *)local_178,L"[REVIVE_TIP]",auStack_1a8);
                    FUN_05478178((NetworkFestivalEntryInfo *)&local_150,
                                 L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",(NetworkRedPacketInfo *)local_1a0)
                    ;
                    pPVar7 = (PVZ2UIDialog *)
                             LawnApp::ShowPVZ2Dialog
                                       (pLVar1,(wstring *)local_178,(wstring *)&local_150);
                    FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
                    nop();
                    FUN_05476c50((rbtree_iterator *)local_178);
                    nop();
                    FUN_05478178((rbtree_iterator *)local_178,L"[DIALOG_STRING_OK]",
                                 (NetworkRedPacketInfo *)local_1a0);
                    Sexy::
                    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                              (aDStack_108,(NetworkFestivalEntryInfo *)&local_150);
                    goto LAB_03ae7bac;
                  }
                }
                else {
                  local_1a0[0] = 0x2a34;
                  local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                            (int *)local_1a0);
                  local_150 = std::
                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_2);
                  bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                            (rbtree_iterator *)&local_150);
                  if (bVar2) {
                    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                    ActivityManager::GetActiveItem(iVar5);
                    cVar4 = FUN_03ac12f8(local_80);
                    if ((cVar4 != '\0') && (local_70 != '\0')) {
                      plVar8 = (long *)UISingletonDialog<UILimitLotteryPage>::GetSingletonPtr();
                      if (plVar8 == (long *)0x0) {
                        this_03 = (Dialog *)UISingletonDialog<UILimitLotteryPage>::ShowDialog();
                        if (this_03 != (Dialog *)0x0) {
                          std::string::string((string *)&local_150,"Background_0");
                          this_04 = (RtObject *)UI::Dialog::GetWidget(this_03,(string *)&local_150);
                          std::string::~string((string *)&local_150);
                          nop();
                          if (this_04 != (RtObject *)0x0) {
                            this_05 = Sexy::RtObject::Cast<UIBossMedalLottery>(this_04);
                            if (this_05 != (UIBossMedalLottery *)0x0) {
                              TenYearRecordInfoPage::SetPageIndex
                                        ((TenYearRecordInfoPage *)this_05,0xff);
                            }
                            local_150 = CONCAT44(local_150._4_4_,0xc);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                     ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                            (**(code **)(*(long *)*puVar9 + 0x58))((long *)*puVar9,this_03);
                          }
                        }
                      }
                      else {
                        (**(code **)(*plVar8 + 0x340))(plVar8,1);
                      }
                    }
                  }
                  else {
                    local_1a0[0] = 0x29cd;
                    local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                             ((set<int,std::less<int>,std::allocator<int>> *)param_2
                                              ,(int *)local_1a0);
                    local_150 = std::
                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_2);
                    bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                              (rbtree_iterator *)&local_150);
                    if (bVar2) {
                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                      ActivityManager::GetActiveItem(iVar5);
                      cVar4 = FUN_03ac12f8(local_80);
                      if ((cVar4 != '\0') && (local_70 != '\0')) {
                        if (*(long **)(this + 0x1e8) == (long *)0x0) {
                          this_06 = ::operator_new(0x370);
                          StoneLotteryNationalDay::StoneLotteryNationalDay(this_06);
                          *(StoneLotteryNationalDay **)(this + 0x1e8) = this_06;
                          pPVar13 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
                          pPVar14 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar13);
                          if (pPVar14 != (PlayerInfo *)0x0) {
                            lVar11 = FUN_02fd3c74(*(undefined8 *)(pPVar14 + 0xa70));
                            this_07 = (BaseBufferResource *)ServerTime::Instance();
                            lVar15 = Sexy::BaseBufferResource::GetPtr(this_07);
                            cVar4 = LawnApp::isSameDay(gLawnApp,lVar11,lVar15);
                            if (cVar4 == '\0') {
                              PlayerInfo::ResetLotteryConsumptionGems(pPVar14,true);
                            }
                          }
                          plVar8 = *(long **)(this + 0x1e8);
                          if (plVar8 != (long *)0x0) {
                            local_150 = CONCAT44(local_150._4_4_,3);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                     ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                            (**(code **)(*(long *)*puVar9 + 0x58))
                                      ((long *)*puVar9,*(undefined8 *)(this + 0x1e8));
                            (**(code **)(*plVar8 + 0x338))(plVar8);
                          }
                        }
                        else {
                          (**(code **)(**(long **)(this + 0x1e8) + 0x338))();
                        }
                      }
                    }
                    else {
                      local_1a0[0] = 0x29e3;
                      local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                               ((set<int,std::less<int>,std::allocator<int>> *)
                                                param_2,(int *)local_1a0);
                      local_150 = std::
                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_2);
                      bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                (rbtree_iterator *)&local_150);
                      if (bVar2) {
                        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                        ActivityManager::GetActiveItem(iVar5);
                        cVar4 = FUN_03ac12f8(local_80);
                        if ((cVar4 != '\0') && (local_70 != '\0')) {
                          Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
                          cVar4 = NewYearChargeManager::IsDuringAcivity();
                          pLVar1 = gLawnApp;
                          if (cVar4 == '\0') {
                            FUN_05478178((rbtree_iterator *)local_178,L"[REVIVE_TIP]",auStack_1a8);
                            FUN_05478178((NetworkFestivalEntryInfo *)&local_150,
                                         L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                                         (NetworkRedPacketInfo *)local_1a0);
                            pPVar7 = (PVZ2UIDialog *)
                                     LawnApp::ShowPVZ2Dialog
                                               (pLVar1,(wstring *)local_178,(wstring *)&local_150);
                            FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
                            nop();
                            FUN_05476c50((rbtree_iterator *)local_178);
                            nop();
                            pwVar20 = L"[DIALOG_STRING_OK]";
                            goto LAB_03ae7b6c;
                          }
                          Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
                          iVar5 = NewYearChargeManager::getCurPlantIDFromServer();
                          this_08 = (DFileHandler *)
                                    Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
                          DFileHandler::setSercetType(this_08,iVar5);
                          if (*(int *)(this + 0x140) == 4) {
                            plVar8 = (long *)UISingletonDialog<WeeklyRechargeRewardPage>::
                                             GetSingletonPtr();
                            if (plVar8 == (long *)0x0) {
                              UISingletonDialog<WeeklyRechargeRewardPage>::ShowDialog();
                            }
                            else {
                              (**(code **)(*plVar8 + 0x108))();
                            }
                            local_150 = CONCAT44(local_150._4_4_,4);
                            puVar9 = (undefined8 *)
                                     std::
                                     map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                     ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                            plVar8 = (long *)*puVar9;
                            uVar10 = UISingletonDialog<WeeklyRechargeRewardPage>::GetSingletonPtr();
                            goto LAB_03ae7874;
                          }
                        }
                      }
                      else {
                        local_1a0[0] = 0x2a44;
                        local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                 ((set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                        local_150 = std::
                                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_2);
                        bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                  (rbtree_iterator *)&local_150);
                        if (!bVar2) {
                          local_1a0[0] = 0x2a2c;
                          local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                   ((set<int,std::less<int>,std::allocator<int>> *)
                                                    param_2,(int *)local_1a0);
                          local_150 = std::
                                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_2);
                          bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                    (rbtree_iterator *)&local_150);
                          if (bVar2) {
                            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                            ActivityManager::GetActiveItem(iVar5);
                            cVar4 = FUN_03ac12f8(local_100);
                            if ((cVar4 != '\0') && (local_f0 != '\0')) {
                              pRVar16 = (RechargeDailySignActivityManager *)
                                        Sexy::LazySingleton<RechargeDailySignActivityManager>::
                                        GetInstancePtr();
                              ActiveItem::ActiveItem
                                        ((ActiveItem *)aDStack_88,(ActiveItem *)aDStack_108);
                              RechargeDailySignActivityManager::Init
                                        (pRVar16,(ActiveItem *)aDStack_88);
                              ActiveItem::~ActiveItem((ActiveItem *)aDStack_88);
                              if (*(int *)(this + 0x140) == 0x13) {
                                this_11 = (RechargeDailySignActivityUI *)
                                          UISingletonDialog<RechargeDailySignActivityUI>::
                                          GetSingletonPtr();
                                if (this_11 == (RechargeDailySignActivityUI *)0x0) {
                                  UISingletonDialog<RechargeDailySignActivityUI>::ShowDialog();
                                }
                                else {
                                  RechargeDailySignActivityUI::UpdateUI(this_11);
                                }
                                local_150 = CONCAT44(local_150._4_4_,0x13);
                                puVar9 = (undefined8 *)
                                         std::
                                         map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                         ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                plVar8 = (long *)*puVar9;
                                uVar10 = UISingletonDialog<RechargeDailySignActivityUI>::
                                         GetSingletonPtr();
LAB_03ae88b4:
                                (**(code **)(*plVar8 + 0x58))(plVar8,uVar10);
                              }
                            }
                          }
                          else {
                            local_1a0[0] = 0x2a2d;
                            local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                     ((set<int,std::less<int>,std::allocator<int>> *
                                                      )param_2,(int *)local_1a0);
                            local_150 = std::
                                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)param_2);
                            bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                      (rbtree_iterator *)&local_150);
                            if (!bVar2) {
                              local_1a0[0] = 0x2a3e;
                              local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                                                       ((set<int,std::less<int>,std::allocator<int>>
                                                         *)param_2,(int *)local_1a0);
                              local_150 = std::
                                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 *)param_2);
                              bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                        (rbtree_iterator *)&local_150);
                              if (bVar2) {
                                iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                ActivityManager::GetActiveItem(iVar5);
                                cVar4 = FUN_03ac12f8(local_80);
                                if (((cVar4 != '\0') && (local_70 != '\0')) &&
                                   (*(int *)(this + 0x140) == 0x15)) {
                                  lVar11 = UISingletonDialog<CustomVotingPage>::GetSingletonPtr();
                                  if (lVar11 == 0) {
                                    UISingletonDialog<CustomVotingPage>::ShowDialog();
                                  }
                                  local_150 = CONCAT44(local_150._4_4_,0x15);
                                  puVar9 = (undefined8 *)
                                           std::
                                           map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                           ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                  plVar8 = (long *)*puVar9;
                                  uVar10 = UISingletonDialog<CustomVotingPage>::GetSingletonPtr();
                                  goto LAB_03ae7874;
                                }
                              }
                              else {
                                local_1a0[0] = 0x2a1e;
                                local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::
                                               find((set<int,std::less<int>,std::allocator<int>> *)
                                                    param_2,(int *)local_1a0);
                                local_150 = std::
                                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                          (rbtree_iterator *)&local_150);
                                if (bVar2) {
                                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                  ActivityManager::GetActiveItem(iVar5);
                                  if (local_70 != '\0') {
                                    cVar4 = FUN_0547419c(asStack_60);
                                    if (cVar4 == '\0') {
                                      uVar6 = StringHelper::ToInt(asStack_60);
                                      uVar21 = 8;
LAB_03ae7f24:
                                      local_150 = CONCAT44(local_150._4_4_,uVar21);
                                      puVar9 = (undefined8 *)
                                               std::
                                               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                               ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                      (**(code **)(*(long *)*puVar9 + 0x80))((long *)*puVar9,uVar6);
                                    }
                                  }
                                }
                                else {
                                  local_1a0[0] = 0x2a24;
                                  local_178[0] = std::set<int,std::less<int>,std::allocator<int>>::
                                                 find((set<int,std::less<int>,std::allocator<int>> *
                                                      )param_2,(int *)local_1a0);
                                  local_150 = std::
                                              map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                  bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                            (rbtree_iterator *)&local_150);
                                  if (bVar2) {
                                    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                    ActivityManager::GetActiveItem(iVar5);
                                    if (local_70 != '\0') {
                                      cVar4 = FUN_0547419c(asStack_60);
                                      if (cVar4 == '\0') {
                                        uVar6 = StringHelper::ToInt(asStack_60);
                                        uVar21 = 0x12;
                                        goto LAB_03ae7f24;
                                      }
                                    }
                                  }
                                  else {
                                    local_1a0[0] = 0x29e8;
                                    local_178[0] = std::set<int,std::less<int>,std::allocator<int>>
                                                   ::find((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                    local_150 = std::
                                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                    bVar3 = eastl::operator!=((rbtree_iterator *)local_178,
                                                              (rbtree_iterator *)&local_150);
                                    if (bVar3) {
                                      if (*(int *)(this + 0x140) != 5) goto LAB_03ae7770;
                                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr()
                                      ;
                                      ActivityManager::GetActiveItem(iVar5);
                                      plVar8 = (long *)UISingletonDialog<LimitGroupBuyPage>::
                                                       GetSingletonPtr();
                                      if (plVar8 == (long *)0x0) {
                                        UISingletonDialog<LimitGroupBuyPage>::ShowDialog();
                                      }
                                      else {
                                        (**(code **)(*plVar8 + 0x108))();
                                      }
                                      local_150 = CONCAT44(local_150._4_4_,5);
                                      puVar9 = (undefined8 *)
                                               std::
                                               map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                               ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                      plVar8 = (long *)*puVar9;
                                      uVar10 = UISingletonDialog<LimitGroupBuyPage>::GetSingletonPtr
                                                         ();
                                      goto LAB_03ae7874;
                                    }
                                    local_1a0[0] = 0x2a17;
                                    local_178[0] = std::set<int,std::less<int>,std::allocator<int>>
                                                   ::find((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                    local_150 = std::
                                                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                    bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                              (rbtree_iterator *)&local_150);
                                    sVar22 = (size_t)bVar2;
                                    if (bVar2) {
                                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr()
                                      ;
                                      ActivityManager::GetActiveItem(iVar5);
                                      if (local_70 != '\0') {
                                        NetworkRedPacketInfo::NetworkRedPacketInfo
                                                  ((NetworkRedPacketInfo *)local_1a0);
                                        cVar4 = ActiveItem::GetDataSerialized
                                                          ((ActiveItem *)aDStack_88,
                                                           (RtObject *)local_1a0);
                                        pLVar1 = gLawnApp;
                                        if (cVar4 == '\0') {
                                          FUN_05478178((rbtree_iterator *)local_178,&DAT_056f11a8,
                                                       auStack_1b0);
                                          FUN_05478178((NetworkFestivalEntryInfo *)&local_150,
                                                       L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_1a8);
                                          pPVar7 = (PVZ2UIDialog *)
                                                   LawnApp::ShowPVZ2Dialog
                                                             (pLVar1,(wstring *)local_178,
                                                              (wstring *)&local_150);
                                          FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
                                          nop();
                                          FUN_05476c50((rbtree_iterator *)local_178);
                                          nop();
                                          FUN_05478178((rbtree_iterator *)local_178,L"[BUTTON_OK]",
                                                       auStack_1a8);
                                          Sexy::
                                          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                                    ((ReceivedDataCallback *)gLawnApp,
                                                     LawnApp::KillPVZ2Dialog);
                                          Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                                    (aDStack_108,
                                                     (NetworkFestivalEntryInfo *)&local_150);
                                          PVZ2UIDialog::AddButton
                                                    (pPVar7,(rbtree_iterator *)local_178,aDStack_108
                                                     ,1);
                                          FUN_05476c50((rbtree_iterator *)local_178);
                                          nop();
                                        }
                                        else {
                                          cVar4 = FUN_0547419c(asStack_60);
                                          sVar22 = 0;
                                          if (cVar4 == '\0') {
                                            uVar18 = StringHelper::ToInt(asStack_60);
                                            sVar22 = uVar18 & 0xffffffff;
                                          }
                                          __n = 0x10;
                                          local_150 = CONCAT44(local_150._4_4_,0x10);
                                          puVar9 = (undefined8 *)
                                                   std::
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                          if ((NetworkRedPacketInfo *)*puVar9 !=
                                              (NetworkRedPacketInfo *)0x0) {
                                            RedPacketTab::SyncActivityData
                                                      ((NetworkRedPacketInfo *)*puVar9,
                                                       (int)(NetworkRedPacketInfo *)local_1a0,
                                                       SUB81(sVar22,0));
                                            __n = sVar22;
                                          }
                                          TGANFSLinkageData::TGANFSLinkageData
                                                    ((TGANFSLinkageData *)local_178);
                                          std::string::append((string *)local_178,"1",__n);
                                          pTVar19 = (TGALogMgr *)
                                                    Sexy::LazySingleton<TGALogMgr>::GetInstance();
                                          TGAArtifactPresentData::TGAArtifactPresentData
                                                    ((TGAArtifactPresentData *)&local_150,
                                                     (TGAArtifactPresentData *)local_178);
                                          TGALogMgr::LogFestivalRedPacket
                                                    (pTVar19,(NetworkFestivalEntryInfo *)&local_150)
                                          ;
                                          TGANFSLinkageData::~TGANFSLinkageData
                                                    ((TGANFSLinkageData *)&local_150);
                                          TGANFSLinkageData::~TGANFSLinkageData
                                                    ((TGANFSLinkageData *)local_178);
                                        }
                                        NetworkRedPacketInfo::~NetworkRedPacketInfo
                                                  ((NetworkRedPacketInfo *)local_1a0);
                                      }
                                    }
                                    else {
                                      local_1a0[0] = 0x2a16;
                                      local_178[0] = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                      local_150 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                      bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                                (rbtree_iterator *)&local_150);
                                      if (bVar2) {
                                        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr
                                                          ();
                                        ActivityManager::GetActiveItem(iVar5);
                                        if (local_70 != '\0') {
                                          NetworkLotteryInfo::NetworkLotteryInfo
                                                    ((NetworkLotteryInfo *)local_1a0);
                                          cVar4 = ActiveItem::GetDataSerialized
                                                            ((ActiveItem *)aDStack_88,
                                                             (RtObject *)local_1a0);
                                          pLVar1 = gLawnApp;
                                          if (cVar4 == '\0') {
                                            FUN_05478178((rbtree_iterator *)local_178,&DAT_056f11a8,
                                                         auStack_1b0);
                                            FUN_05478178((NetworkFestivalEntryInfo *)&local_150,
                                                         L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_1a8
                                                        );
                                            pPVar7 = (PVZ2UIDialog *)
                                                     LawnApp::ShowPVZ2Dialog
                                                               (pLVar1,(wstring *)local_178,
                                                                (wstring *)&local_150);
                                            FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
                                            nop();
                                            FUN_05476c50((rbtree_iterator *)local_178);
                                            nop();
                                            FUN_05478178((rbtree_iterator *)local_178,L"[BUTTON_OK]"
                                                         ,auStack_1a8);
                                            Sexy::
                                            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                                      ((ReceivedDataCallback *)gLawnApp,
                                                       LawnApp::KillPVZ2Dialog);
                                            Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                                      (aDStack_108,
                                                       (NetworkFestivalEntryInfo *)&local_150);
                                            PVZ2UIDialog::AddButton
                                                      (pPVar7,(rbtree_iterator *)local_178,
                                                       aDStack_108,1);
                                            FUN_05476c50((rbtree_iterator *)local_178);
                                            nop();
                                          }
                                          else {
                                            cVar4 = FUN_0547419c(asStack_60);
                                            if (cVar4 == '\0') {
                                              uVar18 = StringHelper::ToInt(asStack_60);
                                              sVar22 = uVar18 & 0xffffffff;
                                            }
                                            local_150 = CONCAT44(local_150._4_4_,0x11);
                                            puVar9 = (undefined8 *)
                                                     std::
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                            (**(code **)(*(long *)*puVar9 + 0x60))
                                                      ((long *)*puVar9,
                                                       (NetworkRedPacketInfo *)local_1a0,sVar22,
                                                       local_70);
                                            TGAAccumulatedLoginData::TGAAccumulatedLoginData
                                                      ((TGAAccumulatedLoginData *)local_178);
                                            std::string::append((string *)local_178,"1",sVar22);
                                            pTVar19 = (TGALogMgr *)
                                                      Sexy::LazySingleton<TGALogMgr>::GetInstance();
                                            InvitationPlayerInfo::InvitationPlayerInfo
                                                      ((InvitationPlayerInfo *)&local_150,
                                                       (InvitationPlayerInfo *)local_178);
                                            TGALogMgr::LogCrack(pTVar19,(NetworkFestivalEntryInfo *)
                                                                        &local_150);
                                            TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                                                      ((TGAAccumulatedLoginData *)&local_150);
                                            TGAAccumulatedLoginData::~TGAAccumulatedLoginData
                                                      ((TGAAccumulatedLoginData *)local_178);
                                          }
                                          NetworkLotteryInfo::~NetworkLotteryInfo
                                                    ((NetworkLotteryInfo *)local_1a0);
                                        }
                                      }
                                      else {
                                        local_1a0[0] = 0x2a02;
                                        local_178[0] = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                        local_150 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                        bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                                  (rbtree_iterator *)&local_150);
                                        if (bVar2) {
                                          iVar5 = Sexy::LazySingleton<ActivityManager>::
                                                  GetInstancePtr();
                                          ActivityManager::GetActiveItem(iVar5);
                                          cVar4 = FUN_03ac12f8(local_80);
                                          pLVar1 = gLawnApp;
                                          if ((cVar4 != '\0') && (local_70 != '\0')) {
                                            if (*(int *)(this + 0x140) != 0x16) {
                                              FUN_05478178((rbtree_iterator *)local_178,
                                                           L"[REVIVE_TIP]",auStack_1a8);
                                              FUN_05478178((NetworkFestivalEntryInfo *)&local_150,
                                                           L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                                                           (NetworkRedPacketInfo *)local_1a0);
                                              pPVar7 = (PVZ2UIDialog *)
                                                       LawnApp::ShowPVZ2Dialog
                                                                 (pLVar1,(wstring *)local_178,
                                                                  (wstring *)&local_150);
                                              FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
                                              nop();
                                              FUN_05476c50((rbtree_iterator *)local_178);
                                              nop();
                                              FUN_05478178((rbtree_iterator *)local_178,
                                                           L"[DIALOG_STRING_OK]",
                                                           (NetworkRedPacketInfo *)local_1a0);
                                              Sexy::
                                              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                                        ((ReceivedDataCallback *)gLawnApp,
                                                         LawnApp::KillPVZ2Dialog);
                                              Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                                        (aDStack_108,
                                                         (NetworkFestivalEntryInfo *)&local_150);
                                              bVar2 = false;
                                              goto LAB_03ae7bac;
                                            }
                                            plVar8 = (long *)
                                                  UISingletonDialog<FestivalGamePageMiniGame>::
                                                  GetSingletonPtr();
                                            if (plVar8 == (long *)0x0) {
                                              UISingletonDialog<FestivalGamePageMiniGame>::
                                              ShowDialog();
                                            }
                                            else {
                                              (**(code **)(*plVar8 + 0x108))();
                                            }
                                            local_150 = CONCAT44(local_150._4_4_,0x16);
                                            puVar9 = (undefined8 *)
                                                     std::
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                            plVar8 = (long *)*puVar9;
                                            uVar10 = UISingletonDialog<FestivalGamePageMiniGame>::
                                                     GetSingletonPtr();
                                            goto LAB_03ae7874;
                                          }
                                        }
                                        else {
                                          local_1a0[0] = 0x2a3a;
                                          local_178[0] = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                          local_150 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                          bVar3 = eastl::operator!=((rbtree_iterator *)local_178,
                                                                    (rbtree_iterator *)&local_150);
                                          if (bVar3) {
                                            iVar5 = Sexy::LazySingleton<ActivityManager>::
                                                    GetInstancePtr();
                                            ActivityManager::GetActiveItem(iVar5);
                                            cVar4 = FUN_03ac12f8(local_80);
                                            if ((cVar4 != '\0') && (local_70 != '\0')) {
                                              if (*(int *)(this + 0x140) != 0x17) goto LAB_03ae81e0;
                                              plVar8 = (long *)
                                                  UISingletonDialog<FestivalGamePageAnniversaryTreasure>
                                                  ::GetSingletonPtr();
                                              if (plVar8 == (long *)0x0) {
                                                UISingletonDialog<FestivalGamePageAnniversaryTreasure>
                                                ::ShowDialog();
                                              }
                                              else {
                                                (**(code **)(*plVar8 + 0x108))();
                                              }
                                              local_150 = CONCAT44(local_150._4_4_,0x17);
                                              puVar9 = (undefined8 *)
                                                       std::
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                              plVar8 = (long *)*puVar9;
                                              uVar10 = 
                                                  UISingletonDialog<FestivalGamePageAnniversaryTreasure>
                                                  ::GetSingletonPtr();
                                              goto LAB_03ae7874;
                                            }
                                          }
                                          else {
                                            local_1a0[0] = 0x2a1b;
                                            local_178[0] = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                            local_150 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                            bVar2 = eastl::operator!=((rbtree_iterator *)local_178,
                                                                      (rbtree_iterator *)&local_150)
                                            ;
                                            if (bVar2) {
                                              iVar5 = Sexy::LazySingleton<ActivityManager>::
                                                      GetInstancePtr();
                                              ActivityManager::GetActiveItem(iVar5);
                                              cVar4 = FUN_03ac12f8(local_80);
                                              if ((cVar4 != '\0') && (local_70 != '\0')) {
                                                if (*(int *)(this + 0x140) != 0x18) {
LAB_03ae91dc:
                                                  pLVar1 = gLawnApp;
                                                  FUN_05478178((rbtree_iterator *)local_178,
                                                               L"[REVIVE_TIP]",auStack_1a8);
                                                  FUN_05478178((NetworkFestivalEntryInfo *)
                                                               &local_150,
                                                               L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                                                               (NetworkRedPacketInfo *)local_1a0);
                                                  pPVar7 = (PVZ2UIDialog *)
                                                           LawnApp::ShowPVZ2Dialog
                                                                     (pLVar1,(wstring *)local_178,
                                                                      (wstring *)&local_150);
                                                  FUN_05476c50((NetworkFestivalEntryInfo *)
                                                               &local_150);
                                                  nop();
                                                  FUN_05476c50((rbtree_iterator *)local_178);
                                                  nop();
                                                  FUN_05478178((rbtree_iterator *)local_178,
                                                               L"[DIALOG_STRING_OK]",
                                                               (NetworkRedPacketInfo *)local_1a0);
                                                  Sexy::
                                                  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                                            ((ReceivedDataCallback *)gLawnApp,
                                                             LawnApp::KillPVZ2Dialog);
                                                  Sexy::Delegate0::
                                                  Delegate0<LawnApp,void(LawnApp::*)()>
                                                            (aDStack_108,
                                                             (NetworkFestivalEntryInfo *)&local_150)
                                                  ;
                                                  bVar2 = false;
                                                  goto LAB_03ae7bac;
                                                }
                                                plVar8 = (long *)
                                                  UISingletonDialog<FestivalGamePageLuckyBag>::
                                                  GetSingletonPtr();
                                                if (plVar8 == (long *)0x0) {
                                                  UISingletonDialog<FestivalGamePageLuckyBag>::
                                                  ShowDialog();
                                                }
                                                else {
                                                  (**(code **)(*plVar8 + 0x108))();
                                                }
                                                local_150 = CONCAT44(local_150._4_4_,0x18);
                                                puVar9 = (undefined8 *)
                                                         std::
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                                plVar8 = (long *)*puVar9;
                                                uVar10 = UISingletonDialog<FestivalGamePageLuckyBag>
                                                         ::GetSingletonPtr();
                                                goto LAB_03ae7874;
                                              }
                                            }
                                            else {
                                              local_1a0[0] = 0x2a32;
                                              local_178[0] = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                              local_150 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                              bVar2 = eastl::operator!=((rbtree_iterator *)local_178
                                                                        ,(rbtree_iterator *)
                                                                         &local_150);
                                              if (bVar2) {
                                                iVar5 = Sexy::LazySingleton<ActivityManager>::
                                                        GetInstancePtr();
                                                ActivityManager::GetActiveItem(iVar5);
                                                cVar4 = FUN_03ac12f8(local_80);
                                                if ((cVar4 != '\0') && (local_70 != '\0')) {
                                                  if (*(int *)(this + 0x140) != 0x19)
                                                  goto LAB_03ae91dc;
                                                  plVar8 = (long *)
                                                  UISingletonDialog<FestivalGamePageSecretStore>::
                                                  GetSingletonPtr();
                                                  if (plVar8 == (long *)0x0) {
                                                    UISingletonDialog<FestivalGamePageSecretStore>::
                                                    ShowDialog();
                                                  }
                                                  else {
                                                    (**(code **)(*plVar8 + 0x108))();
                                                  }
                                                  local_150 = CONCAT44(local_150._4_4_,0x19);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                                  plVar8 = (long *)*puVar9;
                                                  uVar10 = 
                                                  UISingletonDialog<FestivalGamePageSecretStore>::
                                                  GetSingletonPtr();
                                                  goto LAB_03ae7874;
                                                }
                                              }
                                              else {
                                                local_1a0[0] = 0x29f5;
                                                local_178[0] = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)local_1a0);
                                                local_150 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                                bVar2 = eastl::operator!=((rbtree_iterator *)
                                                                          local_178,
                                                                          (rbtree_iterator *)
                                                                          &local_150);
                                                if (!bVar2) goto LAB_03ae7458;
                                                iVar5 = Sexy::LazySingleton<ActivityManager>::
                                                        GetInstancePtr();
                                                ActivityManager::GetActiveItem(iVar5);
                                                cVar4 = FUN_03ac12f8(local_80);
                                                if ((cVar4 != '\0') && (local_70 != '\0')) {
                                                  if (*(int *)(this + 0x140) != 0x1a)
                                                  goto LAB_03ae91dc;
                                                  this_12 = (UIRechargeReward *)
                                                            UISingletonDialog<UIRechargeReward>::
                                                            GetSingletonPtr();
                                                  if (this_12 == (UIRechargeReward *)0x0) {
                                                    UISingletonDialog<UIRechargeReward>::ShowDialog
                                                              ();
                                                  }
                                                  else {
                                                    UIRechargeReward::updateUIData(this_12);
                                                  }
                                                  local_150 = CONCAT44(local_150._4_4_,0x1a);
                                                  puVar9 = (undefined8 *)
                                                           std::
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                                  plVar8 = (long *)*puVar9;
                                                  uVar10 = UISingletonDialog<UIRechargeReward>::
                                                           GetSingletonPtr();
                                                  goto LAB_03ae7874;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_03ae7604;
                            }
                            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                            ActivityManager::GetActiveItem(iVar5);
                            cVar4 = FUN_03ac12f8(local_100);
                            if ((cVar4 != '\0') && (local_f0 != '\0')) {
                              pDVar17 = (DiscountShopActivityManager *)
                                        Sexy::LazySingleton<DiscountShopActivityManager>::
                                        GetInstancePtr();
                              ActiveItem::ActiveItem
                                        ((ActiveItem *)aDStack_88,(ActiveItem *)aDStack_108);
                              DiscountShopActivityManager::Init(pDVar17,(ActiveItem *)aDStack_88);
                              ActiveItem::~ActiveItem((ActiveItem *)aDStack_88);
                              if (*(int *)(this + 0x140) == 0x14) {
                                this_10 = (DiscountShopActivityUI *)
                                          UISingletonDialog<DiscountShopActivityUI>::GetSingletonPtr
                                                    ();
                                if (this_10 == (DiscountShopActivityUI *)0x0) {
                                  UISingletonDialog<DiscountShopActivityUI>::ShowDialog();
                                }
                                else {
                                  DiscountShopActivityUI::UpdateUI(this_10);
                                }
                                local_150 = CONCAT44(local_150._4_4_,0x14);
                                puVar9 = (undefined8 *)
                                         std::
                                         map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                         ::operator[]((
                                                  map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                  *)(this + 0x148),(int *)&local_150);
                                plVar8 = (long *)*puVar9;
                                uVar10 = UISingletonDialog<DiscountShopActivityUI>::GetSingletonPtr
                                                   ();
                                goto LAB_03ae88b4;
                              }
                            }
                          }
                          ActiveItem::~ActiveItem((ActiveItem *)aDStack_108);
                          goto LAB_03ae7458;
                        }
                        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                        ActivityManager::GetActiveItem(iVar5);
                        cVar4 = FUN_03ac12f8(local_80);
                        if ((cVar4 != '\0') && (local_70 != '\0')) {
                          this_09 = (DailySignPage *)
                                    UISingletonDialog<DailySignPage>::GetSingletonPtr();
                          if (this_09 == (DailySignPage *)0x0) {
                            UISingletonDialog<DailySignPage>::ShowDialog();
                          }
                          else {
                            DailySignPage::updateUIData(this_09);
                          }
                          local_150 = CONCAT44(local_150._4_4_,0xf);
                          puVar9 = (undefined8 *)
                                   std::
                                   map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                   ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                                                 *)(this + 0x148),(int *)&local_150);
                          plVar8 = (long *)*puVar9;
                          uVar10 = UISingletonDialog<DailySignPage>::GetSingletonPtr();
                          goto LAB_03ae7874;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_03ae7604;
      }
      if (*(int *)(this + 0x140) == 0x20) {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        plVar8 = (long *)UISingletonDialog<FestivalGamePage>::GetSingletonPtr();
        if (plVar8 == (long *)0x0) {
          UISingletonDialog<FestivalGamePage>::ShowDialog();
        }
        else {
          (**(code **)(*plVar8 + 0x108))();
        }
        local_150 = CONCAT44(local_150._4_4_,0x20);
        puVar9 = (undefined8 *)
                 std::
                 map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                 ::operator[]((map<int,FestivalEventTabBase*,std::less<int>,std::allocator<std::pair<int_const,FestivalEventTabBase*>>>
                               *)(this + 0x148),(int *)&local_150);
        plVar8 = (long *)*puVar9;
        uVar10 = UISingletonDialog<FestivalGamePage>::GetSingletonPtr();
        goto LAB_03ae7874;
      }
LAB_03ae7770:
      pLVar1 = gLawnApp;
      FUN_05478178((rbtree_iterator *)local_178,L"[REVIVE_TIP]",auStack_1a8);
      FUN_05478178((NetworkFestivalEntryInfo *)&local_150,L"[CHARGEDOUBLE_FESTIVAL_NOUSE]",
                   (NetworkRedPacketInfo *)local_1a0);
      pPVar7 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)local_178,(wstring *)&local_150);
      FUN_05476c50((NetworkFestivalEntryInfo *)&local_150);
      nop();
      FUN_05476c50((rbtree_iterator *)local_178);
      nop();
      FUN_05478178((rbtree_iterator *)local_178,L"[DIALOG_STRING_OK]",
                   (NetworkRedPacketInfo *)local_1a0);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                (aDStack_88,(NetworkFestivalEntryInfo *)&local_150);
    }
    PVZ2UIDialog::AddButton(pPVar7,(rbtree_iterator *)local_178,aDStack_88,bVar2);
    FUN_05476c50((rbtree_iterator *)local_178);
    nop();
  }
LAB_03ae7458:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

