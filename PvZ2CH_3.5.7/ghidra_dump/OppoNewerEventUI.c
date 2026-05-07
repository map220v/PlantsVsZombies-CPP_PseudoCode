// Class: OppoNewerEventUI


/* OppoNewerEventUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void OppoNewerEventUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to OppoNewerEventUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall OppoNewerEventUI::ScrollTargetReached(OppoNewerEventUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* OppoNewerEventUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void OppoNewerEventUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to OppoNewerEventUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
OppoNewerEventUI::ScrollTargetInterrupted(OppoNewerEventUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::GetLayoutName() */

void __thiscall OppoNewerEventUI::GetLayoutName(OppoNewerEventUI *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"OppoNewerEventUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* OppoNewerEventUI::OppoNewerEventUI() */

void __thiscall OppoNewerEventUI::OppoNewerEventUI(OppoNewerEventUI *this)

{
  UISingletonDialog<OppoNewerEventUI>::UISingletonDialog
            ((UISingletonDialog<OppoNewerEventUI> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 1;
  *(undefined ***)this = &PTR_GetClass_066bf700;
  *(undefined **)(this + 0xd8) = &DAT_066bfa60;
  *(undefined ***)(this + 0x138) = &PTR__OppoNewerEventUI_066bfaa8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x148));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x178));
  std::
  map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>::
  clear((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
         *)(this + 0x148));
  nop();
  std::
  map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
  ::clear((map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
           *)(this + 0x178));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::DisabledAllButtons() */

void __thiscall OppoNewerEventUI::DisabledAllButtons(OppoNewerEventUI *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::EnabledAllButtons() */

void __thiscall OppoNewerEventUI::EnabledAllButtons(OppoNewerEventUI *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::~OppoNewerEventUI() */

void __thiscall OppoNewerEventUI::~OppoNewerEventUI(OppoNewerEventUI *this)

{
  map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066bf700;
  *(undefined **)(this + 0xd8) = &DAT_066bfa60;
  *(undefined ***)(this + 0x138) = &PTR__OppoNewerEventUI_066bfaa8;
  local_18 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
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
  map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>::
  clear(this_00);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<OppoNewerDailyAwardUI>::CloseDialog();
  UISingletonDialog<UIOppoNewerChargeDouble>::CloseDialog();
  std::
  map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
  ::~map((map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
          *)(this + 0x178));
  std::
  map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>::
  ~map(this_00);
  UISingletonDialog<OppoNewerEventUI>::~UISingletonDialog
            ((UISingletonDialog<OppoNewerEventUI> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to OppoNewerEventUI::~OppoNewerEventUI() */

void __thiscall OppoNewerEventUI::~OppoNewerEventUI(OppoNewerEventUI *this)

{
  ~OppoNewerEventUI(this + -0x138);
  return;
}


/* OppoNewerEventUI::~OppoNewerEventUI() */

void __thiscall OppoNewerEventUI::~OppoNewerEventUI(OppoNewerEventUI *this)

{
  ~OppoNewerEventUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to OppoNewerEventUI::~OppoNewerEventUI() */

void __thiscall OppoNewerEventUI::~OppoNewerEventUI(OppoNewerEventUI *this)

{
  ~OppoNewerEventUI(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::Draw(Sexy::Graphics*) */

void __thiscall OppoNewerEventUI::Draw(OppoNewerEventUI *this,Graphics *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)local_18,0,0,0,0);
  DrawSpaceSpiral(param_1,0xff,(Insets *)local_18);
  UI::Dialog::Draw((Dialog *)this,param_1);
  local_20 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                      *)(this + 0x148));
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 0x148));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)local_18), bVar1)
  {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    (**(code **)(**(long **)(lVar2 + 8) + 0x20))(*(long **)(lVar2 + 8),param_1);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
OppoNewerEventUI::DrawAll(OppoNewerEventUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Image *pIVar6;
  LotteryResultProgressBar *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  local_18 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                      *)(this + 0x148));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x148));
  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar2
        ) {
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    (**(code **)(**(long **)(lVar5 + 8) + 0x28))(*(long **)(lVar5 + 8),param_2);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8f58);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab8f58);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar4 = FUN_038ff3b8(5);
  Sexy::Graphics::DrawImage(param_2,pIVar6,(iVar1 - iVar3) / 2,*(int *)(this + 0x4c) - iVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::Update() */

void __thiscall OppoNewerEventUI::Update(OppoNewerEventUI *this)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                      *)(this + 0x148));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x148));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    pcVar3 = *(code **)(**(long **)(lVar2 + 8) + 0x48);
    if (pcVar3 != OppoNewerTabBase::Update) {
      (*pcVar3)();
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::OnCreate() */

void __thiscall OppoNewerEventUI::OnCreate(OppoNewerEventUI *this)

{
  undefined4 local_34;
  code *local_30;
  undefined8 local_28;
  pair apStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  local_34 = 1;
  local_28 = 0;
  local_30 = onDailyRewardTab;
  std::make_pair<OppoNewerTab,void(OppoNewerEventUI::*)()>
            ((OppoNewerTab *)&local_34,(_func_void *)&local_30);
  std::
  map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
  ::insert<std::pair<OppoNewerTab,void(OppoNewerEventUI::*)()>,void>
            ((map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
              *)(this + 0x178),apStack_20);
  local_28 = 0;
  local_34 = 2;
  local_30 = onRechargeRewardTab;
  std::make_pair<OppoNewerTab,void(OppoNewerEventUI::*)()>
            ((OppoNewerTab *)&local_34,(_func_void *)&local_30);
  std::
  map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
  ::insert<std::pair<OppoNewerTab,void(OppoNewerEventUI::*)()>,void>
            ((map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
              *)(this + 0x178),apStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::onRechargeRewardTab() */

void __thiscall OppoNewerEventUI::onRechargeRewardTab(OppoNewerEventUI *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"OppoNewerEventUI::onRechargeRewardTab(), start");
  lVar1 = UISingletonDialog<UIOppoNewerChargeDouble>::GetSingletonPtr();
  if (lVar1 == 0) {
    Sexy::OutputDebugStrF((wchar_t *)"OppoNewerEventUI::onRechargeRewardTab(), showdialog");
    UISingletonDialog<UIOppoNewerChargeDouble>::ShowDialog();
  }
  uVar2 = std::
          map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
          ::size((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                  *)(this + 0x148));
  Sexy::OutputDebugStrF((wchar_t *)"OppoNewerEventUI::onRechargeRewardTab(), %d",uVar2);
  local_c = 2;
  puVar3 = (undefined8 *)
           std::
           map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
           ::operator[]((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                         *)(this + 0x148),&local_c);
  plVar4 = (long *)*puVar3;
  uVar2 = UISingletonDialog<UIOppoNewerChargeDouble>::GetSingletonPtr();
  (**(code **)(*plVar4 + 0x50))(plVar4,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::onDailyRewardTab() */

void __thiscall OppoNewerEventUI::onDailyRewardTab(OppoNewerEventUI *this)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UISingletonDialog<OppoNewerDailyAwardUI>::GetSingletonPtr();
  if (plVar1 == (long *)0x0) {
    UISingletonDialog<OppoNewerDailyAwardUI>::ShowDialog();
  }
  else {
    (**(code **)(*plVar1 + 0x358))();
  }
  uVar2 = std::
          map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
          ::size((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                  *)(this + 0x148));
  Sexy::OutputDebugStrF((wchar_t *)"OppoNewerEventUI::onDailyRewardTab(), %d",uVar2);
  local_c = 1;
  puVar3 = (undefined8 *)
           std::
           map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
           ::operator[]((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                         *)(this + 0x148),&local_c);
  plVar1 = (long *)*puVar3;
  uVar2 = UISingletonDialog<OppoNewerDailyAwardUI>::GetSingletonPtr();
  (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::SetCurrentTab(int) */

void __thiscall OppoNewerEventUI::SetCurrentTab(OppoNewerEventUI *this,int param_1)

{
  long lVar1;
  map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
  *this_00;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x140) = param_1;
  this_00 = (map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) break;
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*piVar3 != *(int *)(this + 0x140)) {
      (**(code **)(**(long **)(piVar3 + 2) + 0x18))(*(long **)(piVar3 + 2),0);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  plVar4 = (long *)std::
                   map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                   ::operator[](this_00,(int *)(this + 0x140));
  if (*plVar4 != 0) {
    puVar5 = (undefined8 *)
             std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::operator[](this_00,(int *)(this + 0x140));
    (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,1);
  }
  Sexy::OutputDebugStrF
            ((wchar_t *)"OppoNewerEventUI::SetCurrentTab, Tab: %d",(ulong)*(uint *)(this + 0x140));
  local_10 = CONCAT44(local_10._4_4_,*(undefined4 *)(this + 0x140));
  plVar4 = (long *)std::
                   map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
                   ::operator[]((map<OppoNewerTab,void(OppoNewerEventUI::*)(),std::less<OppoNewerTab>,std::allocator<std::pair<OppoNewerTab_const,void(OppoNewerEventUI::*)()>>>
                                 *)(this + 0x178),(OppoNewerTab *)&local_10);
  pcVar6 = (code *)*plVar4;
  lVar1 = plVar4[1] >> 1;
  if ((plVar4[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(this + lVar1));
  }
  (*pcVar6)(this + lVar1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::Layout() */

void __thiscall OppoNewerEventUI::Layout(OppoNewerEventUI *this)

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
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
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


/* OppoNewerEventUI::ButtonDepress(int) */

void __thiscall OppoNewerEventUI::ButtonDepress(OppoNewerEventUI *this,int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 - 1U < 2) {
    SetCurrentTab(this,param_1);
    return;
  }
  if (param_1 != 0x66) {
    if (1 < *(int *)(this + 0x140) - 1U) {
      return;
    }
    puVar1 = (undefined8 *)
             std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::operator[]((map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
                           *)(this + 0x148),(int *)(this + 0x140));
    (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,param_1);
    return;
  }
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  LawnApp::KillOppoNewerEventUI(gLawnApp);
  return;
}


/* non-virtual thunk to OppoNewerEventUI::ButtonDepress(int) */

void __thiscall OppoNewerEventUI::ButtonDepress(OppoNewerEventUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoNewerEventUI::InitView() */

void __thiscall OppoNewerEventUI::InitView(OppoNewerEventUI *this)

{
  map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  OppoNewerRechargeTabUI *this_01;
  undefined8 *puVar4;
  OppoNewerNewLoginTabUI *this_02;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *this_03;
  PVZ2UIButton *this_04;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  PVZ2UIScrollingWidget *this_05;
  OppoNewerEventUI *pOVar9;
  int iVar10;
  code *pcVar11;
  undefined8 local_98;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  string asStack_78 [56];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  this_00 = (map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             *)(this + 0x148);
  this_01 = ::operator_new(0x38);
  iVar10 = 0;
  OppoNewerRechargeTabUI::OppoNewerRechargeTabUI(this_01,2,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,2);
  puVar4 = (undefined8 *)
           std::
           map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_01;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_01);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  this_02 = ::operator_new(0x38);
  OppoNewerNewLoginTabUI::OppoNewerNewLoginTabUI(this_02,1,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,1);
  puVar4 = (undefined8 *)
           std::
           map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_02;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_02);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9398);
  LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  this_03 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab9398);
  SalesProgressBar::GetCurrentLevel(this_03);
  local_98 = std::
             map<int,OppoNewerTabBase*,std::less<int>,std::allocator<std::pair<int_const,OppoNewerTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_40[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)local_40);
    if (!bVar1) break;
    lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    this_04 = (PVZ2UIButton *)Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar8 + 8));
    puVar6 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_NATIONALCENTER_OPPO_TABBTN%d_N",(string *)local_40,(ulong)*puVar6);
    pLVar5 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    puVar6 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_NATIONALCENTER_OPPO_TABBTN%d_D",(string *)local_40,(ulong)*puVar6);
    uVar7 = StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,pLVar5,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,uVar7,2);
    PVZ2UIButton::SetRadioStates(this_04,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40,false);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40,(vector *)avStack_90)
    ;
    PVZ2UIButton::LinkRadioButtons(this_04,(string *)local_40);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
    FUN_038ff354(this_04 + 0x2c0);
    pcVar11 = *(code **)(*(long *)this_04 + 0x198);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    uVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar5);
    (*pcVar11)(this_04,0,iVar10,uVar2,uVar3);
    iVar10 = iVar10 + *(int *)(this_04 + 0x54);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
  }
  std::string::string((string *)local_40,"Pannel");
  lVar8 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  Sexy::Insets::Insets
            ((Insets *)local_40,*(int *)(lVar8 + 0x48),*(int *)(lVar8 + 0x4c),*(int *)(lVar8 + 0x50)
             ,*(int *)(lVar8 + 0x54));
  (**(code **)(**(long **)(lVar8 + 0x20) + 0x68))(*(long **)(lVar8 + 0x20),lVar8);
  *(int *)(lVar8 + 0x54) = iVar10;
  this_05 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_05,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)this_05 + 0x1a0))(this_05,(string *)local_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_05,2);
  std::string::string(asStack_78,"UIImage_Back");
  pOVar9 = (OppoNewerEventUI *)UI::Dialog::GetWidget((Dialog *)this,asStack_78);
  std::string::~string(asStack_78);
  nop();
  if (pOVar9 == (OppoNewerEventUI *)0x0) {
    pOVar9 = this;
  }
  (**(code **)(*(long *)pOVar9 + 0x60))(pOVar9,this_05);
  (**(code **)(*(long *)this_05 + 0x60))(this_05,lVar8);
  (**(code **)(*(long *)pOVar9 + 0x1a8))
            (pOVar9,(*(int *)(gLawnApp + 0xd4) - *(int *)(pOVar9 + 0x50)) / 2,
             (*(int *)(gLawnApp + 0xd8) - *(int *)(pOVar9 + 0x54)) / 2);
  SetCurrentTab(this,s_ShowTab);
  Layout(this);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

