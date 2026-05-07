// Class: ActiveCenter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenter::GetTabContent() */

void __thiscall ActiveCenter::GetTabContent(ActiveCenter *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"TabContent");
  uVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ActiveCenter::ScrollTargetReached(Sexy::ScrollWidget*) */

void ActiveCenter::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActiveCenter::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall ActiveCenter::ScrollTargetReached(ActiveCenter *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* ActiveCenter::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void ActiveCenter::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to ActiveCenter::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall ActiveCenter::ScrollTargetInterrupted(ActiveCenter *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenter::GetLayoutName() */

void __thiscall ActiveCenter::GetLayoutName(ActiveCenter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ActiveCenter");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ActiveCenter::ActiveCenter() */

void __thiscall ActiveCenter::ActiveCenter(ActiveCenter *this)

{
  UISingletonDialog<ActiveCenter>::UISingletonDialog((UISingletonDialog<ActiveCenter> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 1;
  *(undefined ***)this = &PTR_GetClass_06972c30;
  *(undefined **)(this + 0xd8) = &DAT_06972f90;
  *(undefined ***)(this + 0x138) = &PTR__ActiveCenter_06972fd8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x148));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenter::DisabledAllButtons() */

void __thiscall ActiveCenter::DisabledAllButtons(ActiveCenter *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::begin((map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
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
/* ActiveCenter::EnabledAllButtons() */

void __thiscall ActiveCenter::EnabledAllButtons(ActiveCenter *this)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  BaseBufferResource *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::begin((map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
                      *)(this + 0x148));
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x148));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    this_02 = *(BaseBufferResource **)(lVar4 + 8);
    iVar2 = FUN_04b8e814(*(undefined4 *)(this_02 + 8));
    if (iVar2 == 3) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if ((this_01 != (PlayerInfo *)0x0) &&
         ((iVar2 = PlayerInfo::GetGoldenEggsObjectId(this_01), iVar2 != 0 ||
          (iVar2 = PlayerInfo::TryToResetGoldenEggsObjectId(this_01), iVar2 != 0)))) {
        lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        this_02 = *(BaseBufferResource **)(lVar4 + 8);
        goto LAB_04b8ebc8;
      }
    }
    else {
LAB_04b8ebc8:
      plVar3 = (long *)Sexy::BaseBufferResource::GetPtr(this_02);
      (**(code **)(*plVar3 + 0x188))(plVar3,0);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenter::~ActiveCenter() */

void __thiscall ActiveCenter::~ActiveCenter(ActiveCenter *this)

{
  map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06972c30;
  *(undefined **)(this + 0xd8) = &DAT_06972f90;
  *(undefined ***)(this + 0x138) = &PTR__ActiveCenter_06972fd8;
  local_18 = std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
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
  map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
  ::clear(this_00);
  std::
  map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
  ::~map(this_00);
  UISingletonDialog<ActiveCenter>::~UISingletonDialog((UISingletonDialog<ActiveCenter> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActiveCenter::~ActiveCenter() */

void __thiscall ActiveCenter::~ActiveCenter(ActiveCenter *this)

{
  ~ActiveCenter(this + -0x138);
  return;
}


/* ActiveCenter::~ActiveCenter() */

void __thiscall ActiveCenter::~ActiveCenter(ActiveCenter *this)

{
  ~ActiveCenter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ActiveCenter::~ActiveCenter() */

void __thiscall ActiveCenter::~ActiveCenter(ActiveCenter *this)

{
  ~ActiveCenter(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenter::Draw(Sexy::Graphics*) */

void __thiscall ActiveCenter::Draw(ActiveCenter *this,Graphics *param_1)

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
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::begin((map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
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
/* ActiveCenter::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall ActiveCenter::DrawAll(ActiveCenter *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  local_18 = std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::begin((map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
                      *)(this + 0x148));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x148));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    (**(code **)(**(long **)(lVar2 + 8) + 0x28))(*(long **)(lVar2 + 8),param_2);
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
/* ActiveCenter::Update() */

void __thiscall ActiveCenter::Update(ActiveCenter *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::begin((map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
                      *)(this + 0x148));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x148));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    (**(code **)(**(long **)(lVar2 + 8) + 0x40))(*(long **)(lVar2 + 8));
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
/* ActiveCenter::SetCurrentTab(int) */

void __thiscall ActiveCenter::SetCurrentTab(ActiveCenter *this,int param_1)

{
  map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x140) = param_1;
  this_00 = (map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             *)(this + 0x148);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*piVar2 != *(int *)(this + 0x140)) {
      (**(code **)(**(long **)(piVar2 + 2) + 0x18))(*(long **)(piVar2 + 2),0);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  puVar3 = (undefined8 *)
           std::
           map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
           ::operator[](this_00,(int *)(this + 0x140));
  (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenter::Layout() */

void __thiscall ActiveCenter::Layout(ActiveCenter *this)

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
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::begin((map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
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
/* ActiveCenter::ButtonDepress(int) */

void __thiscall ActiveCenter::ButtonDepress(ActiveCenter *this,int param_1)

{
  GameStateMgr *pGVar1;
  char cVar2;
  undefined8 *puVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int iVar4;
  string local_10 [8];
  long local_8;
  
  pGVar1 = gGameStateMgr;
  local_8 = ___stack_chk_guard;
  if (param_1 - 1U < 6) {
    SetCurrentTab(this,param_1);
    goto LAB_04b8fe1c;
  }
  if (param_1 == 0x65) {
    iVar4 = *(int *)(this + 0x140);
    if (iVar4 == 1) {
      std::string::string(local_10,"ProtectChristmas1");
      GameStateMgr::StartLevel(pGVar1,&DAT_06b88758,local_10,0xffffffff,1,1,0);
      std::string::~string(local_10);
      nop();
      goto LAB_04b8fe1c;
    }
    if (iVar4 == 6) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar2 = PlayerInfo::NeedResetRiddleInfo();
      local_10[0] = (string)PlayerInfo::CanRiddleToday();
      if ((local_10[0] != (string)0x0) && (cVar2 != '\0')) {
        FUN_04b8e87c(this_01 + 0xf5c);
        FUN_04b8e884(this_01 + 0xf58);
      }
      PlayerInfo::saveCurrentProfile(this_01);
      GameStateMgr::ShowLanternRiddles(gGameStateMgr,local_10,5,5);
      goto LAB_04b8fe1c;
    }
  }
  else {
    if (param_1 == 0x66) {
      GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
      goto LAB_04b8fe1c;
    }
    iVar4 = *(int *)(this + 0x140);
  }
  if (iVar4 - 1U < 6) {
    puVar3 = (undefined8 *)
             std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             ::operator[]((map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
                           *)(this + 0x148),(int *)(this + 0x140));
    (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,param_1);
  }
LAB_04b8fe1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActiveCenter::ButtonDepress(int) */

void __thiscall ActiveCenter::ButtonDepress(ActiveCenter *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveCenter::OnCreate() */

void __thiscall ActiveCenter::OnCreate(ActiveCenter *this)

{
  map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ActiveChristmasProtectTab *this_01;
  undefined8 *puVar4;
  ActiveChristmasLotteryTab *this_02;
  GoldenEggUI *this_03;
  DailyAccessoryBonusUI *this_04;
  ActiveRebateTab *this_05;
  ActiveChristmasLanternTab *this_06;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *this_07;
  PVZ2UIButton *this_08;
  uint *puVar6;
  undefined8 uVar7;
  long lVar8;
  PVZ2UIScrollingWidget *this_09;
  ActiveCenter *pAVar9;
  ActiveCenter *pAVar10;
  int iVar11;
  code *pcVar12;
  undefined8 local_98;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  string asStack_78 [56];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar11 = 0;
  this_00 = (map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
             *)(this + 0x148);
  UI::Dialog::OnCreate((Dialog *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  this_01 = ::operator_new(0x58);
  ActiveChristmasProtectTab::ActiveChristmasProtectTab(this_01,1,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,1);
  puVar4 = (undefined8 *)
           std::
           map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_01;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_01);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  this_02 = ::operator_new(0x68);
  ActiveChristmasLotteryTab::ActiveChristmasLotteryTab(this_02,2,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,2);
  puVar4 = (undefined8 *)
           std::
           map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_02;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_02);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  this_03 = ::operator_new(0x228);
  GoldenEggUI::GoldenEggUI(this_03,3,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,3);
  puVar4 = (undefined8 *)
           std::
           map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_03;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_03);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  this_04 = ::operator_new(0x50);
  DailyAccessoryBonusUI::DailyAccessoryBonusUI(this_04,4,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,4);
  puVar4 = (undefined8 *)
           std::
           map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_04;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_04);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  this_05 = ::operator_new(0x38);
  ActiveRebateTab::ActiveRebateTab(this_05,5,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,5);
  puVar4 = (undefined8 *)
           std::
           map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_05;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_05);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  this_06 = ::operator_new(0x28);
  ActiveChristmasLanternTab::ActiveChristmasLanternTab(this_06,6,(Dialog *)this);
  local_40[0] = CONCAT44(local_40[0]._4_4_,6);
  puVar4 = (undefined8 *)
           std::
           map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
           ::operator[](this_00,(int *)local_40);
  *puVar4 = this_06;
  local_40[0] = Sexy::BaseBufferResource::GetPtr((BaseBufferResource *)this_06);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,
             (PVZ2UIButton **)local_40);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88658);
  LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  this_07 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88658);
  SalesProgressBar::GetCurrentLevel(this_07);
  local_98 = std::
             map<int,ActiveCenterTabBase*,std::less<int>,std::allocator<std::pair<int_const,ActiveCenterTabBase*>>>
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
    this_08 = (PVZ2UIButton *)Sexy::BaseBufferResource::GetPtr(*(BaseBufferResource **)(lVar8 + 8));
    puVar6 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_ACTIVECENTER_TABBTN%d_N",(string *)local_40,(ulong)*puVar6);
    pLVar5 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    puVar6 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_98);
    Sexy::StrFormat("IMAGE_UI_ACTIVECENTER_TABBTN%d_D",(string *)local_40,(ulong)*puVar6);
    uVar7 = StringHelper::ToImage((string *)local_40,false);
    std::string::~string((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,pLVar5,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,uVar7,2);
    PVZ2UIButton::SetRadioStates(this_08,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40,false);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40,(vector *)avStack_90)
    ;
    PVZ2UIButton::LinkRadioButtons(this_08,(string *)local_40);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
    FUN_04b8e88c(this_08 + 0x2c0);
    pcVar12 = *(code **)(*(long *)this_08 + 0x198);
    uVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    uVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar5);
    (*pcVar12)(this_08,0,iVar11,uVar2,uVar3);
    iVar11 = iVar11 + *(int *)(this_08 + 0x54);
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
  *(int *)(lVar8 + 0x54) = iVar11;
  this_09 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_09,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)this_09 + 0x1a0))(this_09,(string *)local_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_09,2);
  std::string::string(asStack_78,"UIImage_Back");
  pAVar9 = (ActiveCenter *)UI::Dialog::GetWidget((Dialog *)this,asStack_78);
  std::string::~string(asStack_78);
  nop();
  pAVar10 = this;
  if (pAVar9 != (ActiveCenter *)0x0) {
    pAVar10 = pAVar9;
  }
  (**(code **)(*(long *)pAVar10 + 0x60))(pAVar10,this_09);
  (**(code **)(*(long *)this_09 + 0x60))(this_09,lVar8);
  (**(code **)(*(long *)pAVar10 + 0x1a8))
            (pAVar10,(*(int *)(gLawnApp + 0xd4) - *(int *)(pAVar10 + 0x50)) / 2,
             (*(int *)(gLawnApp + 0xd8) - *(int *)(pAVar10 + 0x54)) / 2);
  SetCurrentTab(this,s_ShowTab);
  s_ShowTab = 1;
  Layout(this);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}

