// Class: UIScrollControl


/* UIScrollControl::SetBackground(PVZ2UIImage const&) */

void __thiscall UIScrollControl::SetBackground(UIScrollControl *this,PVZ2UIImage *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x210) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x218) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x220) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x228) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x230) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x238) = uVar1;
  *(undefined8 *)(this + 0x240) = *(undefined8 *)(param_1 + 0x30);
  return;
}


/* UIScrollControl::GetScrollMode() const */

undefined4 __thiscall UIScrollControl::GetScrollMode(UIScrollControl *this)

{
  return *(undefined4 *)(this + 0x14c);
}


/* UIScrollControl::~UIScrollControl() */

void __thiscall UIScrollControl::~UIScrollControl(UIScrollControl *this)

{
  *(undefined ***)this = &PTR_GetClass_069716e0;
  *(undefined **)(this + 0xd8) = &DAT_06971a08;
  Sexy::ScrollWidget::~ScrollWidget((ScrollWidget *)this);
  return;
}


/* UIScrollControl::~UIScrollControl() */

void __thiscall UIScrollControl::~UIScrollControl(UIScrollControl *this)

{
  ~UIScrollControl(this);
  AK::FreeHook(this);
  return;
}


/* UIScrollControl::GetItemCount() */

void __thiscall UIScrollControl::GetItemCount(UIScrollControl *this)

{
  if (*(WidgetContainer **)(this + 0xe8) != (WidgetContainer *)0x0) {
    Sexy::WidgetContainer::GetChildCount(*(WidgetContainer **)(this + 0xe8));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollControl::ScrollToMax(bool) */

void __thiscall UIScrollControl::ScrollToMax(UIScrollControl *this,bool param_1)

{
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FPoint::FPoint(aFStack_10,(TPoint *)(this + 0x1d4));
  Sexy::ScrollWidget::SetScrollOffset((ScrollWidget *)this,aFStack_10,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollControl::Draw(Sexy::Graphics*) */

void __thiscall UIScrollControl::Draw(UIScrollControl *this,Graphics *param_1)

{
  char cVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04b87db4(*(undefined4 *)(this + 0x210));
  if (cVar1 != '\0') {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x210),param_1,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollControl::Layout() */

void __thiscall UIScrollControl::Layout(UIScrollControl *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  lVar3 = *(long *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  if (lVar3 != 0) {
    if (this[0x248] != (UIScrollControl)0x0) {
      iVar6 = *(int *)(this + 0x14c);
      local_24 = 0;
      local_20 = 0;
      if (iVar6 == 2) {
        iVar6 = 0;
        local_18 = FUN_04b87edc(*(TaskResource **)(lVar3 + 8));
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(lVar3 + 8));
        while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
              bVar2) {
          plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                     ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
          lVar3 = *plVar4;
          iVar1 = *(int *)(this + 0x24c);
          *(int *)(lVar3 + 0x4c) = iVar6;
          iVar6 = *(int *)(lVar3 + 0x54) + iVar1 + local_20;
          local_20 = iVar6;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        }
        *(int *)(*(long *)(this + 0xe8) + 0x54) = iVar6;
      }
      else if (iVar6 == 3) {
        local_18 = FUN_04b87edc(*(TaskResource **)(lVar3 + 8));
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(lVar3 + 8));
        while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
              bVar2) {
          plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                     ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
          lVar3 = *plVar4;
          local_1c = FUN_04b87da4(*(undefined4 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x50));
          piVar5 = eastl::max_alt<int>(&local_24,&local_1c);
          local_24 = *piVar5;
          local_1c = FUN_04b87dac(*(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x54));
          piVar5 = eastl::max_alt<int>(&local_20,&local_1c);
          local_20 = *piVar5;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        }
        lVar3 = *(long *)(this + 0xe8);
        *(int *)(lVar3 + 0x50) = local_24;
        *(int *)(lVar3 + 0x54) = local_20;
      }
      else if (iVar6 == 1) {
        iVar6 = 0;
        local_18 = FUN_04b87edc(*(TaskResource **)(lVar3 + 8));
        local_10 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(lVar3 + 8));
        while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
              bVar2) {
          plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                     ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
          lVar3 = *plVar4;
          iVar1 = *(int *)(this + 0x24c);
          *(int *)(lVar3 + 0x48) = iVar6;
          iVar6 = *(int *)(lVar3 + 0x50) + iVar1 + local_24;
          local_24 = iVar6;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        }
        *(int *)(*(long *)(this + 0xe8) + 0x50) = iVar6;
      }
    }
    Sexy::ScrollWidget::CacheDerivedValues((ScrollWidget *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIScrollControl::AddWidget(Sexy::Widget*) */

void UIScrollControl::AddWidget(Widget *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1);
    Layout((UIScrollControl *)param_1);
    return;
  }
  return;
}


/* UIScrollControl::PutBehind(Sexy::Widget*, Sexy::Widget*) */

void UIScrollControl::PutBehind(Widget *param_1,Widget *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xc0))(plVar1);
    Layout((UIScrollControl *)param_1);
    return;
  }
  return;
}


/* UIScrollControl::PutInfront(Sexy::Widget*, Sexy::Widget*) */

void UIScrollControl::PutInfront(Widget *param_1,Widget *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    Layout((UIScrollControl *)param_1);
    return;
  }
  return;
}


/* UIScrollControl::SetAutoArrange(bool) */

void __thiscall UIScrollControl::SetAutoArrange(UIScrollControl *this,bool param_1)

{
  this[0x248] = (UIScrollControl)param_1;
  Layout(this);
  return;
}


/* UIScrollControl::SetPadding(int) */

void __thiscall UIScrollControl::SetPadding(UIScrollControl *this,int param_1)

{
  *(int *)(this + 0x24c) = param_1;
  Layout(this);
  return;
}


/* UIScrollControl::ClearContents() */

void __thiscall UIScrollControl::ClearContents(UIScrollControl *this)

{
  *(undefined8 *)(this + 0xf0) = 0;
  (**(code **)(**(long **)(this + 0xe8) + 0x80))(*(long **)(this + 0xe8),0,0);
  Layout(this);
  return;
}


/* UIScrollControl::Resize(int, int, int, int) */

void __thiscall
UIScrollControl::Resize(UIScrollControl *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::ScrollWidget::Resize((ScrollWidget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))
              (plVar1,param_1,param_2,(int)plVar1[10],*(undefined4 *)((long)plVar1 + 0x54));
  }
  return;
}


/* UIScrollControl::UIScrollControl() */

void __thiscall UIScrollControl::UIScrollControl(UIScrollControl *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Widget *this_00;
  code *pcVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  Sexy::ScrollWidget::ScrollWidget((ScrollWidget *)this,(ScrollWidgetListener *)0x0);
  *(undefined ***)this = &PTR_GetClass_069716e0;
  *(undefined **)(this + 0xd8) = &DAT_06971a08;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0x210));
  *(undefined4 *)(this + 0x24c) = 0;
  this[0x248] = (UIScrollControl)0x1;
  if (*(long *)(this + 0xe8) != 0) {
    return;
  }
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  *(Widget **)(this + 0xe8) = this_00;
  thunk_FUN_05475e00(this_00 + 0xc0,&DAT_06b87b78);
  plVar4 = *(long **)(this + 0xe8);
  uVar1 = FUN_04b87dc0(0);
  uVar2 = FUN_04b87dc0(100);
  (**(code **)(*plVar4 + 0x198))(plVar4,uVar1,uVar1,uVar2,uVar2);
  plVar4 = *(long **)(this + 0xe8);
  fVar6 = *(float *)(this + 0x168);
  fVar5 = *(float *)(this + 0x16c);
  pcVar3 = *(code **)(*plVar4 + 0x1a8);
  *(uint *)(plVar4 + 0xc) = *(uint *)(plVar4 + 0xc) | 0x10;
  (*pcVar3)(plVar4,(int)fVar6,(int)fVar5);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  return;
}


/* UIScrollControl::RemoveWidget(Sexy::Widget*) */

void __thiscall UIScrollControl::RemoveWidget(UIScrollControl *this,Widget *param_1)

{
  Widget *pWVar1;
  
  pWVar1 = *(Widget **)(this + 0xe8);
  if ((pWVar1 != param_1) && (pWVar1 != (Widget *)0x0)) {
    (**(code **)(*(long *)pWVar1 + 0x68))(pWVar1);
    return;
  }
  Sexy::ScrollWidget::RemoveWidget((ScrollWidget *)this,param_1);
  return;
}

