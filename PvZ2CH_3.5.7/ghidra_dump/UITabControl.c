// Class: UITabControl


/* UITabControl::~UITabControl() */

void __thiscall UITabControl::~UITabControl(UITabControl *this)

{
  *(undefined ***)this = &PTR_GetClass_069713a0;
  *(undefined **)(this + 0xd8) = &DAT_069716c8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UITabControl::~UITabControl() */

void __thiscall UITabControl::~UITabControl(UITabControl *this)

{
  ~UITabControl(this);
  AK::FreeHook(this);
  return;
}


/* UITabControl::GetTabSelected() */

undefined8 __thiscall UITabControl::GetTabSelected(UITabControl *this)

{
  return *(undefined8 *)(this + 0xf8);
}


/* UITabControl::IsTabButton(Sexy::Widget*) */

bool UITabControl::IsTabButton(Widget *param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (param_1 != (Widget *)0x0) {
    lVar2 = FUN_05474368(param_1 + 0xc0,&DAT_06b87b50,0);
    bVar1 = lVar2 == 0;
  }
  return bVar1;
}


/* UITabControl::SetListener(UI::TabControlListener*) */

void __thiscall UITabControl::SetListener(UITabControl *this,TabControlListener *param_1)

{
  *(TabControlListener **)(this + 0x108) = param_1;
  return;
}


/* UITabControl::SetTabWidthHeight(int, int) */

void __thiscall UITabControl::SetTabWidthHeight(UITabControl *this,int param_1,int param_2)

{
  *(int *)(this + 0x100) = param_1;
  *(int *)(this + 0x104) = param_2;
  return;
}


/* UITabControl::GetTabSelectedID() */

void __thiscall UITabControl::GetTabSelectedID(UITabControl *this)

{
  if (*(UITabContent **)(this + 0xf8) != (UITabContent *)0x0) {
    UITabContent::GetTabID(*(UITabContent **)(this + 0xf8));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::Draw(Sexy::Graphics*) */

void __thiscall UITabControl::Draw(UITabControl *this,Graphics *param_1)

{
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xe8) != 0) {
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::resizeTabButtons() */

void __thiscall UITabControl::resizeTabButtons(UITabControl *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  iVar2 = FUN_04b86554();
  lVar10 = *(long *)(this + 0xe0);
  iVar4 = *(int *)(this + 0x50);
  local_18 = FUN_04b869a4(*(TaskResource **)(lVar10 + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(lVar10 + 8));
  while( true ) {
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar8 = (uint)bVar1;
    if (!bVar1) break;
    plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if ((*plVar6 != 0) && (*(char *)(*plVar6 + 0x6c) != '\0')) {
      iVar5 = iVar5 + 1;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  iVar11 = *(int *)(this + 0xf0);
  if (iVar11 == 1) {
    lVar10 = *(long *)(this + 0xe0);
    local_18 = FUN_04b869a4(*(TaskResource **)(lVar10 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(lVar10 + 8));
    iVar11 = 0;
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar1) {
      plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      if ((*plVar6 != 0) && (*(char *)(*plVar6 + 0x6c) != '\0')) {
        iVar11 = iVar11 + 1;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    if (iVar11 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      iVar4 = 0;
      if (iVar11 != 0) {
        iVar4 = *(int *)(this + 0x50) / iVar11;
      }
    }
  }
  else if (iVar11 == 2) {
    iVar4 = FUN_04b86554(*(undefined4 *)(this + 0x100));
    uVar8 = FUN_04b86554(10);
    iVar2 = FUN_04b86554(0xb);
  }
  else if (iVar11 == 4) {
    iVar2 = FUN_04b86554(0xc);
    if (iVar5 != 0) {
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = *(int *)(this + 0x50) / iVar5;
      }
      iVar4 = iVar4 - iVar2;
    }
    uVar8 = iVar2 / 2;
  }
  else if (iVar11 == 3) {
    iVar4 = FUN_04b86554(*(undefined4 *)(this + 0x100));
    iVar5 = FUN_04b86554(10);
    lVar10 = *(long *)(this + 0xe0);
    local_18 = FUN_04b869a4(*(TaskResource **)(lVar10 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(lVar10 + 8));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar1) {
      plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar10 = *plVar6;
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x6c) != '\0')) {
        lVar7 = *(long *)(this + 0xe0);
        *(int *)(lVar10 + 0x4c) = iVar5;
        iVar5 = iVar5 + iVar4;
        *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)(lVar7 + 0x50);
        *(int *)(lVar10 + 0x54) = iVar4;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    *(int *)(*(long *)(this + 0xe0) + 0x54) = iVar5;
    goto LAB_04b86b90;
  }
  lVar10 = *(long *)(this + 0xe0);
  iVar11 = 0;
  local_18 = FUN_04b869a4(*(TaskResource **)(lVar10 + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(lVar10 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar10 = *plVar6;
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x6c) != '\0')) {
      iVar9 = *(int *)(this + 0xf0);
      *(uint *)(lVar10 + 0x48) = uVar8;
      if (iVar9 == 4) {
        *(int *)(lVar10 + 0x50) = iVar4;
        iVar3 = 0;
        if (iVar11 == 0) {
          iVar3 = FUN_04b86554(10);
          *(uint *)(lVar10 + 0x48) = uVar8 + iVar3;
          *(int *)(lVar10 + 0x50) = iVar4 - iVar3;
        }
        if (iVar5 + -1 == iVar11) {
          iVar3 = FUN_04b86554(10);
          *(int *)(lVar10 + 0x50) = iVar4 - iVar3;
          iVar9 = iVar4 - iVar3;
        }
        else {
          iVar9 = *(int *)(lVar10 + 0x50);
        }
      }
      else {
        *(int *)(lVar10 + 0x50) = iVar4;
        iVar3 = 0;
        iVar9 = iVar4;
      }
      iVar11 = iVar11 + 1;
      uVar8 = uVar8 + iVar9 + iVar3 + iVar2;
      *(undefined4 *)(lVar10 + 0x54) = *(undefined4 *)(*(long *)(this + 0xe0) + 0x54);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  *(uint *)(*(long *)(this + 0xe0) + 0x50) = uVar8;
LAB_04b86b90:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::GetTab(int) */

void __thiscall UITabControl::GetTab(UITabControl *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  UITabContent *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < param_1) {
    local_18 = FUN_04b869a4(*(undefined8 *)(this + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar1) {
      puVar3 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      this_00 = (UITabContent *)WidgetFactory<UITabContent*>::GetWidget((Widget *)*puVar3);
      if ((this_00 != (UITabContent *)0x0) &&
         (iVar2 = UITabContent::GetTabID(this_00), iVar2 == param_1)) goto LAB_04b86dcc;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
  this_00 = (UITabContent *)0x0;
LAB_04b86dcc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* UITabControl::SetTabVisible(int, bool) */

void __thiscall UITabControl::SetTabVisible(UITabControl *this,int param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = GetTab(this,param_1);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_04b8654c(*(undefined8 *)(lVar1 + 0xd8));
    (**(code **)(*plVar2 + 0x158))(plVar2,param_2);
    resizeTabButtons(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::GetTab(UIWidgetRadio*) */

void __thiscall UITabControl::GetTab(UITabControl *this,UIWidgetRadio *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04b869a4(*(undefined8 *)(this + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(this + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar3 = WidgetFactory<UITabContent*>::GetWidget((Widget *)*puVar2);
    if ((lVar3 != 0) && (*(UIWidgetRadio **)(lVar3 + 0xd8) == param_1)) goto LAB_04b86ee0;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  lVar3 = 0;
LAB_04b86ee0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::makeTabVisible(UITabContent*) */

void __thiscall UITabControl::makeTabVisible(UITabControl *this,UITabContent *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  UITabContent *pUVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04b869a4(*(undefined8 *)(this + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(this + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    pUVar3 = (UITabContent *)WidgetFactory<UITabContent*>::GetWidget((Widget *)*puVar2);
    if (pUVar3 != (UITabContent *)0x0) {
      (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,param_1 == pUVar3);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UITabControl::SetTabSelected(UITabContent*) */

void __thiscall UITabControl::SetTabSelected(UITabControl *this,UITabContent *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (*(UITabContent **)(this + 0xf8) != param_1) {
    *(UITabContent **)(this + 0xf8) = param_1;
    if ((param_1 != (UITabContent *)0x0) &&
       (*(UIWidgetRadio **)(param_1 + 0xd8) != (UIWidgetRadio *)0x0)) {
      UIWidgetRadio::SetSelected(*(UIWidgetRadio **)(param_1 + 0xd8),true);
    }
    makeTabVisible(this,param_1);
    puVar3 = *(undefined8 **)(this + 0x108);
    if (puVar3 != (undefined8 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      if (*(UITabContent **)(this + 0xf8) == (UITabContent *)0x0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = UITabContent::GetTabID(*(UITabContent **)(this + 0xf8));
      }
      if (pcVar2 != UI::TabControlListener::TabSelectionChanged) {
        (*pcVar2)(puVar3,uVar1);
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::changeTabSelected() */

void __thiscall UITabControl::changeTabSelected(UITabControl *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  UITabContent *pUVar4;
  UITabControl *pUVar5;
  UITabContent *pUVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pUVar5 = this + 8;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04b869a4(*(undefined8 *)pUVar5);
  pUVar6 = (UITabContent *)0x0;
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)pUVar5);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_04b87104:
      pUVar4 = (UITabContent *)0x0;
LAB_04b87108:
      if (pUVar6 != (UITabContent *)0x0) {
        pUVar4 = pUVar6;
      }
      SetTabSelected(this,pUVar4);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    lVar3 = WidgetFactory<UITabContent*>::GetWidget((Widget *)*puVar2);
    pUVar4 = pUVar6;
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      pUVar4 = (UITabContent *)*puVar2;
      if ((UITabContent *)*puVar2 == *(UITabContent **)(this + 0xf8)) {
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)pUVar5);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (bVar1) {
          puVar2 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
          pUVar4 = (UITabContent *)*puVar2;
          goto LAB_04b87108;
        }
        goto LAB_04b87104;
      }
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    pUVar6 = pUVar4;
  } while( true );
}


/* UITabControl::DeleteTab(int) */

undefined8 __thiscall UITabControl::DeleteTab(UITabControl *this,int param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)GetTab(this,param_1);
  if (plVar1 != (long *)0x0) {
    if (*(long **)(this + 0xf8) == plVar1) {
      changeTabSelected(this);
    }
    plVar2 = (long *)FUN_04b8654c(plVar1[0x1b]);
    (**(code **)(*(long *)this + 0x68))(this,plVar1);
    (**(code **)(*plVar1 + 0x80))(plVar1,1,1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if (plVar2 != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x68))(*(long **)(this + 0xe0),plVar2);
      (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    resizeTabButtons(this);
    return 1;
  }
  return 0;
}


/* UITabControl::RemoveWidget(Sexy::Widget*) */

void __thiscall UITabControl::RemoveWidget(UITabControl *this,Widget *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(Widget **)(this + 0xe0) == param_1) {
    *(undefined8 *)(this + 0xe0) = 0;
  }
  else if ((*(Widget **)(this + 0xe0) != (Widget *)0x0) && (*(Widget **)(this + 0xf8) == param_1)) {
    changeTabSelected(this);
  }
  lVar1 = WidgetFactory<UITabContent*>::GetWidget(param_1);
  if ((lVar1 != 0) && (plVar2 = *(long **)(this + 0xe0), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,*(undefined8 *)(lVar1 + 0xd8));
    (**(code **)(**(long **)(lVar1 + 0xd8) + 0x80))(*(long **)(lVar1 + 0xd8),0,0);
    if (*(long **)(lVar1 + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0xd8) + 0x18))();
      *(undefined8 *)(lVar1 + 0xd8) = 0;
    }
  }
  Sexy::WidgetContainer::RemoveWidget((WidgetContainer *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::Resize(int, int, int, int) */

void __thiscall
UITabControl::Resize(UITabControl *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  local_18 = FUN_04b869a4(*(undefined8 *)(this + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(this + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    plVar4 = (long *)WidgetFactory<UITabContent*>::GetWidget((Widget *)*puVar3);
    if (plVar4 != (long *)0x0) {
      uVar2 = FUN_04b86554(0);
      (**(code **)(*plVar4 + 0x198))
                (plVar4,uVar2,uVar2,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::getUniqueTabID() */

void __thiscall UITabControl::getUniqueTabID(UITabControl *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  UITabContent *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04b869a4(*(undefined8 *)(this + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(this + 8));
  while( true ) {
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar4 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_00 = (UITabContent *)WidgetFactory<UITabContent*>::GetWidget((Widget *)*puVar4);
    if ((this_00 != (UITabContent *)0x0) && (iVar2 = UITabContent::GetTabID(this_00), iVar3 < iVar2)
       ) {
      iVar3 = UITabContent::GetTabID(this_00);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 + 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall UITabControl::RadioSelectionChanged(UITabControl *this,UIWidgetRadio *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  UITabContent *pUVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (UIWidgetRadio *)0x0) &&
     (cVar1 = UIWidgetRadio::IsSelected(param_1), cVar1 != '\0')) {
    local_18 = FUN_04b869a4(*(undefined8 *)(this + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar2) {
      puVar3 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      pUVar4 = (UITabContent *)WidgetFactory<UITabContent*>::GetWidget((Widget *)*puVar3);
      if ((pUVar4 != (UITabContent *)0x0) && (*(UIWidgetRadio **)(pUVar4 + 0xd8) == param_1)) {
        SetTabSelected(this,pUVar4);
        break;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UITabControl::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall UITabControl::RadioSelectionChanged(UITabControl *this,UIWidgetRadio *param_1)

{
  RadioSelectionChanged(this + -0xd8,param_1);
  return;
}


/* UITabControl::SetType(int) */

void __thiscall UITabControl::SetType(UITabControl *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  SalesProgressBar *pSVar5;
  LotteryResultProgressBar *this_00;
  undefined8 uVar6;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  long *plVar7;
  code *pcVar8;
  
  *(int *)(this + 0xf0) = param_1;
  if (*(long *)(this + 0xe8) == 0) {
    if (param_1 == 1) {
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87af8);
      *(undefined8 *)(this + 0xe8) = uVar6;
    }
    else {
      uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87a98);
      *(undefined8 *)(this + 0xe8) = uVar6;
    }
  }
  plVar7 = *(long **)(this + 0xe0);
  if (plVar7 != (long *)0x0) {
    iVar2 = *(int *)(this + 0xf0);
    if (iVar2 == 1) {
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87a28;
      pcVar8 = *(code **)(*plVar7 + 0x198);
      uVar1 = FUN_04b86554(0);
    }
    else {
      if (iVar2 == 2) {
        uVar3 = FUN_04b86554(0x14);
        uVar1 = *(undefined4 *)(this + 0x104);
LAB_04b876ac:
        iVar2 = FUN_04b86554(uVar1);
        uVar1 = FUN_04b86554(*(undefined4 *)(this + 0x100));
        (**(code **)(*plVar7 + 0x198))(plVar7,uVar3,-iVar2,uVar1);
        return;
      }
      if (iVar2 == 3) {
        iVar2 = FUN_04b86554(*(undefined4 *)(this + 0x104));
        uVar1 = FUN_04b86554(0x14);
        uVar3 = FUN_04b86554(*(undefined4 *)(this + 0x100));
        (**(code **)(*plVar7 + 0x198))(plVar7,-iVar2,uVar1,iVar2,uVar3);
        return;
      }
      if (iVar2 == 4) {
        uVar3 = FUN_04b86554(0);
        uVar1 = 0x1e;
        goto LAB_04b876ac;
      }
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87a60;
      pcVar8 = *(code **)(*plVar7 + 0x198);
      uVar1 = FUN_04b86554(10);
    }
    pSVar5 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
    this_00 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    uVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    pSVar5 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
    uVar4 = SalesProgressBar::GetCurrentLevel(pSVar5);
    (*pcVar8)(plVar7,uVar1,-iVar2,uVar3,uVar4);
  }
  return;
}


/* UITabControl::UITabControl() */

void __thiscall UITabControl::UITabControl(UITabControl *this)

{
  undefined8 uVar1;
  Widget *this_00;
  
  Sexy::Widget::Widget((Widget *)this);
  UI::RadioListener::RadioListener((RadioListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_069713a0;
  *(undefined **)(this + 0xd8) = &DAT_069716c8;
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87a98);
  *(undefined8 *)(this + 0xe8) = uVar1;
  *(undefined4 *)(this + 0x100) = 100;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x104) = 0x28;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x59] = (UITabControl)0x0;
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  *(Widget **)(this + 0xe0) = this_00;
  this_00[0x59] = (Widget)0x0;
  thunk_FUN_05475e00(this_00 + 0xc0,&DAT_06b87b20);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  SetType(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::createTabButton() */

void __thiscall UITabControl::createTabButton(UITabControl *this)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  Widget *pWVar5;
  long *plVar6;
  size_t in_x2;
  code *pcVar7;
  long lVar8;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  undefined8 local_c8 [2];
  UIWidgetType aUStack_b8 [8];
  undefined1 auStack_b0 [32];
  string asStack_90 [80];
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidgetType::UIWidgetType(aUStack_b8);
  thunk_FUN_05475e00(auStack_b0,&DAT_06b87b50);
  uVar3 = WidgetFactory<UIWidgetRadio*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_b8,uVar3);
  std::string::append(asStack_90,"tab",in_x2);
  iVar2 = *(int *)(this + 0xf0);
  local_40 = 3;
  if (iVar2 == 1) {
    local_40 = 4;
    goto LAB_04b878cc;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      local_40 = 6;
      goto LAB_04b878cc;
    }
    if (iVar2 != 4) goto LAB_04b878cc;
  }
  local_40 = 5;
LAB_04b878cc:
  lVar8 = *(long *)(this + 0xe0);
  local_d8 = 0;
  local_d0 = FUN_04b869a4(*(TaskResource **)(lVar8 + 8));
  local_c8[0] = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)(lVar8 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_d0,(rbtree_iterator *)local_c8), bVar1)
  {
    plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_d0);
    local_d4 = *(int *)(*plVar6 + 0x48) + *(int *)(*plVar6 + 0x50);
    piVar4 = eastl::max_alt<int>(&local_d8,&local_d4);
    local_d8 = *piVar4;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_d0);
  }
  pWVar5 = (Widget *)UIWidgetType::ToWidget(aUStack_b8,(Widget *)0x0);
  (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),pWVar5);
  plVar6 = (long *)WidgetFactory<UIWidgetRadio*>::GetWidget(pWVar5);
  pcVar7 = *(code **)(*plVar6 + 0x170);
  Sexy::Color::Color((Color *)local_c8,1);
  (*pcVar7)(plVar6,6,(rbtree_iterator *)local_c8);
  pcVar7 = *(code **)(*plVar6 + 0x170);
  Sexy::Color::Color((Color *)local_c8,1);
  (*pcVar7)(plVar6,7,(rbtree_iterator *)local_c8);
  plVar6[0x36] = (long)(this + 0xd8);
  pcVar7 = *(code **)(*plVar6 + 800);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  (*pcVar7)(plVar6,uVar3);
  iVar2 = *(int *)(this + 0xf0);
  if (iVar2 == 2) {
    pcVar7 = *(code **)(*plVar6 + 800);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline)
    ;
    (*pcVar7)(plVar6,uVar3);
    iVar2 = *(int *)(this + 0xf0);
  }
  if (iVar2 == 4) {
    pcVar7 = *(code **)(*plVar6 + 800);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
    (*pcVar7)(plVar6,uVar3);
  }
  UIWidgetType::~UIWidgetType(aUStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::AddTab(int, std::string const&) */

void __thiscall UITabControl::AddTab(UITabControl *this,int param_1,string *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Widget *pWVar3;
  UITabContent *pUVar4;
  size_t __n;
  UIWidgetType aUStack_b8 [8];
  undefined1 auStack_b0 [32];
  string asStack_90 [136];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  UIWidgetType::UIWidgetType(aUStack_b8);
  thunk_FUN_05475e00(auStack_b0,param_2);
  uVar2 = WidgetFactory<UITabContent*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_b8,uVar2);
  std::string::append(asStack_90,"tab",__n);
  pWVar3 = (Widget *)UIWidgetType::ToWidget(aUStack_b8,(Widget *)0x0);
  uVar1 = FUN_04b86554(0);
  (**(code **)(*(long *)pWVar3 + 0x198))
            (pWVar3,uVar1,uVar1,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,pWVar3);
  pUVar4 = (UITabContent *)WidgetFactory<UITabContent*>::GetWidget(pWVar3);
  if (*(long *)(this + 0xf8) == 0) {
    SetTabSelected(this,pUVar4);
  }
  resizeTabButtons(this);
  UIWidgetType::~UIWidgetType(aUStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pUVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITabControl::AddWidget(Sexy::Widget*) */

void __thiscall UITabControl::AddWidget(UITabControl *this,Widget *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  UITabContent *pUVar4;
  UIWidgetRadio *pUVar5;
  string *psVar6;
  long lVar7;
  long *plVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar4 = (UITabContent *)WidgetFactory<UITabContent*>::GetWidget(param_1);
  if (pUVar4 == (UITabContent *)0x0) {
    plVar8 = (long *)GetTabSelected(this);
    if (plVar8 == (long *)0x0) {
      iVar3 = getUniqueTabID(this);
      std::string::string(asStack_10,"UITab_0");
      plVar8 = (long *)AddTab(this,iVar3,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,param_1);
  }
  else {
    uVar2 = FUN_04b86554(0);
    (**(code **)(*(long *)pUVar4 + 0x198))
              (pUVar4,uVar2,uVar2,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    if (*(int *)(pUVar4 + 0xe0) == 0) {
      uVar2 = getUniqueTabID(this);
      *(undefined4 *)(pUVar4 + 0xe0) = uVar2;
    }
    pUVar5 = (UIWidgetRadio *)createTabButton(this);
    UITabContent::SetAttachTab(pUVar4,pUVar5);
    psVar6 = (string *)UITabContent::GetTabImage(pUVar4);
    bVar1 = (bool)FUN_04b86550(pUVar4[0xf8]);
    UITabContent::SetTabImage(pUVar4,psVar6,bVar1);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pUVar4);
    lVar7 = GetTabSelected(this);
    if (lVar7 == 0) {
      SetTabSelected(this,pUVar4);
    }
    else {
      pUVar4 = (UITabContent *)GetTabSelected(this);
      makeTabVisible(this,pUVar4);
    }
    resizeTabButtons(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

