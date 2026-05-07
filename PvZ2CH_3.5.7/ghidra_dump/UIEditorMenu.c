// Class: UIEditorMenu


/* UIEditorMenu::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIEditorMenu::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIEditorMenu::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIEditorMenu::ScrollTargetReached(UIEditorMenu *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* UIEditorMenu::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIEditorMenu::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIEditorMenu::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIEditorMenu::ScrollTargetInterrupted(UIEditorMenu *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* UIEditorMenu::HideMenu() */

void __thiscall UIEditorMenu::HideMenu(UIEditorMenu *this)

{
  (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),0);
  return;
}


/* UIEditorMenu::SetDisabled(bool) */

void __thiscall UIEditorMenu::SetDisabled(UIEditorMenu *this,bool param_1)

{
  long *plVar1;
  
  (**(code **)(*(long *)this + 0x338))();
  plVar1 = *(long **)(this + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,param_1);
  }
  return;
}


/* UIEditorMenu::~UIEditorMenu() */

void __thiscall UIEditorMenu::~UIEditorMenu(UIEditorMenu *this)

{
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_0696ee40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696f190;
  *(undefined ***)(this + 0xe0) = &PTR__UIEditorMenu_0696f1d8;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to UIEditorMenu::~UIEditorMenu() */

void __thiscall UIEditorMenu::~UIEditorMenu(UIEditorMenu *this)

{
  ~UIEditorMenu(this + -0xe0);
  return;
}


/* UIEditorMenu::~UIEditorMenu() */

void __thiscall UIEditorMenu::~UIEditorMenu(UIEditorMenu *this)

{
  ~UIEditorMenu(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIEditorMenu::~UIEditorMenu() */

void __thiscall UIEditorMenu::~UIEditorMenu(UIEditorMenu *this)

{
  ~UIEditorMenu(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditorMenu::OnCreate(int, std::wstring const&, Sexy::Delegate1<int>) */

void __thiscall
UIEditorMenu::OnCreate(UIEditorMenu *this,int param_1,wstring *param_2,Delegate2 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PVZ2UIButton *this_00;
  undefined8 uVar3;
  Widget *this_01;
  PVZ2UIScrollingWidget *this_02;
  long *plVar4;
  code *pcVar5;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_04b7c928(0x46);
  *(undefined4 *)(this + 0x50) = uVar1;
  uVar1 = FUN_04b7c928(0x1e);
  this[0x59] = (UIEditorMenu)0x0;
  *(undefined4 *)(this + 0x54) = uVar1;
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x100),param_4);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,param_1,(ButtonListener *)(this + 0xd8),param_2,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = this_00;
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b872c0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b872f8,2);
  PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  plVar4 = *(long **)(this + 0xe8);
  uVar1 = FUN_04b7c928(0x46);
  uVar2 = FUN_04b7c928(0x1e);
  (**(code **)(*plVar4 + 0x198))(plVar4,0,0,uVar1,uVar2);
  plVar4 = *(long **)(this + 0xe8);
  pcVar5 = *(code **)(*plVar4 + 800);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar5)(plVar4,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  *(Widget **)(this + 0xf8) = this_01;
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xe0));
  *(PVZ2UIScrollingWidget **)(this + 0xf0) = this_02;
  uVar1 = FUN_04b7c928(100);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,uVar1,uVar1);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xf0),2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  (**(code **)(**(long **)(this + 0xf0) + 0x60))
            (*(long **)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  (**(code **)(*(long *)this + 0x338))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIEditorMenu::UIEditorMenu() */

void __thiscall UIEditorMenu::UIEditorMenu(UIEditorMenu *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0696ee40;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696f190;
  *(undefined ***)(this + 0xe0) = &PTR__UIEditorMenu_0696f1d8;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x100));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditorMenu::AddSubMenu(int, std::wstring const&) */

void __thiscall UIEditorMenu::AddSubMenu(UIEditorMenu *this,int param_1,wstring *param_2)

{
  int iVar1;
  undefined4 uVar2;
  PVZ2UIButton *this_00;
  undefined8 uVar3;
  int *piVar4;
  code *pcVar5;
  int local_7c;
  undefined4 local_78 [14];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,param_1,(ButtonListener *)(this + 0xd8),param_2,(Color *)aPStack_40);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b872c0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b872f8,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)local_78,aPStack_40);
  local_7c = FUN_04b7c928(0x6e);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  FUN_05477b24(aPStack_40,param_2);
  local_78[0] = Sexy::PrimeTypeface::StringWidth(uVar3,aPStack_40);
  piVar4 = eastl::max_alt<int>(&local_7c,(int *)local_78);
  iVar1 = *piVar4;
  FUN_05476c50(aPStack_40);
  uVar2 = FUN_04b7c928(0x1e);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,iVar1,uVar2);
  pcVar5 = *(code **)(*(long *)this_00 + 800);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar5)(this_00,uVar3);
  (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* UIEditorMenu::ButtonDepress(int) */

void __thiscall UIEditorMenu::ButtonDepress(UIEditorMenu *this,int param_1)

{
  int iVar1;
  
  if (*(long *)(this + 0xe8) != 0) {
    if (*(int *)(*(long *)(this + 0xe8) + 0xd4) == param_1) {
      if (*(char *)(*(long *)(this + 0xf0) + 0x6c) == '\0') {
        (**(code **)(*(long *)this + 0x330))();
      }
      else {
        (**(code **)(*(long *)this + 0x338))();
      }
    }
    iVar1 = FUN_04b7c910(*(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x118));
    if (iVar1 != 0) {
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x100),
                 (SexyURL *)(ulong)(uint)param_1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UIEditorMenu::ButtonDepress(int) */

void __thiscall UIEditorMenu::ButtonDepress(UIEditorMenu *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditorMenu::ShowMenu() */

void __thiscall UIEditorMenu::ShowMenu(UIEditorMenu *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  long *plVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  uint local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                    ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                     (*(long *)(this + 0xf8) + 8));
  if (cVar2 == '\0') {
    (**(code **)(**(long **)(this + 0xf0) + 0x158))(*(long **)(this + 0xf0),1);
    lVar13 = *(long *)(this + 0xf8);
    local_1c = 0;
    local_18 = FUN_04b7ce18(*(TaskResource **)(lVar13 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(lVar13 + 8));
    iVar11 = 0;
    while( true ) {
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar3) break;
      plVar9 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar13 = *plVar9;
      *(int *)(lVar13 + 0x4c) = iVar11;
      *(undefined4 *)(lVar13 + 0x48) = 0;
      iVar4 = FUN_04b7c928(3);
      iVar11 = iVar11 + iVar4 + *(int *)(lVar13 + 0x54);
      puVar8 = (uint *)eastl::max_alt<int>((int *)&local_1c,(int *)(lVar13 + 0x50));
      local_1c = *puVar8;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    plVar9 = *(long **)(this + 0xf8);
    *(int *)((long)plVar9 + 0x54) = iVar11;
    if (local_1c != 0x6e) {
      plVar12 = *(long **)(this + 0xf0);
      lVar13 = 0;
      if (plVar12 != (long *)0x0) {
        iVar4 = *(int *)(this + 0x4c);
        iVar1 = *(int *)(this + 0x54);
        iVar5 = FUN_04b7c928(5);
        piVar10 = eastl::max_alt<int>((int *)&DAT_057551e0,(int *)&local_1c);
        uVar6 = FUN_04b7c928(*piVar10 + 0x14);
        uVar7 = FUN_04b7c928(300);
        (**(code **)(*plVar12 + 0x198))(plVar12,0,iVar4 + iVar1 + iVar5,uVar6,uVar7);
        plVar9 = *(long **)(this + 0xf8);
        if (plVar9 == (long *)0x0) goto LAB_04b7cff4;
        lVar13 = *(long *)(this + 0xf0);
      }
      (**(code **)(*plVar9 + 0x198))(plVar9,0,0,*(undefined4 *)(lVar13 + 0x50),iVar11);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x338))(this);
  }
LAB_04b7cff4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditorMenu::GetSubMenu(int) */

void __thiscall UIEditorMenu::GetSubMenu(UIEditorMenu *this,int param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  lVar3 = *(long *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04b7ce18(*(TaskResource **)(lVar3 + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(lVar3 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar3 = *plVar2;
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0xd4) == param_1)) goto LAB_04b7d0c4;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  lVar3 = 0;
LAB_04b7d0c4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* UIEditorMenu::Resize(int, int, int, int) */

void __thiscall
UIEditorMenu::Resize(UIEditorMenu *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  int *piVar7;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar6 = *(long **)(this + 0xe8);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x198))(plVar6,0,0,param_3,param_4);
  }
  plVar6 = *(long **)(this + 0xf0);
  if (plVar6 != (long *)0x0) {
    iVar1 = *(int *)(this + 0x4c);
    iVar2 = *(int *)(this + 0x54);
    iVar3 = FUN_04b7c928(5);
    piVar7 = eastl::max_alt<int>((int *)&DAT_057551e0,(int *)&DAT_057551dc);
    uVar4 = FUN_04b7c928(*piVar7 + 0x14);
    uVar5 = FUN_04b7c928(300);
    (**(code **)(*plVar6 + 0x198))(plVar6,0,iVar1 + iVar2 + iVar3,uVar4,uVar5);
  }
  plVar6 = *(long **)(this + 0xf8);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x198))
              (plVar6,0,0,*(undefined4 *)(*(long *)(this + 0xf0) + 0x50),
               *(undefined4 *)(*(long *)(this + 0xf0) + 0x54));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEditorMenu::Draw(Sexy::Graphics*) */

void __thiscall UIEditorMenu::Draw(UIEditorMenu *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  lVar4 = *(long *)(this + 0xf0);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x6c) != '\0')) {
    iVar1 = FUN_04b7c928(10);
    iVar2 = FUN_04b7c928(5);
    Sexy::Insets::Insets
              (aIStack_18,-iVar1,*(int *)(this + 0x54) - iVar2,*(int *)(lVar4 + 0x50),
               iVar1 + *(int *)(*(long *)(this + 0xf8) + 0x54));
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87288);
    Draw9SliceImage(param_1,aIStack_18,uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

