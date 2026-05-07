// Class: ComboBox


/* ComboBox::HideMenu() */

void __thiscall ComboBox::HideMenu(ComboBox *this)

{
  (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
  return;
}


/* ComboBox::ButtonDepress(int) */

int ComboBox::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to ComboBox::ButtonDepress(int) */

void __thiscall ComboBox::ButtonDepress(ComboBox *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* ComboBox::SetDisabled(bool) */

void __thiscall ComboBox::SetDisabled(ComboBox *this,bool param_1)

{
  long *plVar1;
  
  (**(code **)(*(long *)this + 0x328))();
  plVar1 = *(long **)(this + 0xe0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,param_1);
  }
  return;
}


/* ComboBox::ClickComboBoxMain(int) */

void ComboBox::ClickComboBoxMain(int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(ulong)(uint)param_1;
  if (*(char *)(((long *)(ulong)(uint)param_1)[0x1d] + 0x6c) == '\0') {
    (**(code **)(lVar1 + 800))();
    return;
  }
  (**(code **)(lVar1 + 0x328))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBox::~ComboBox() */

void __thiscall ComboBox::~ComboBox(ComboBox *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined8 *)(this + 0xe0) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0698be00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698c140;
  *(undefined8 *)(this + 0xe8) = 0;
  Sexy::Delegate1<int>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xf0),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x120) = 0;
  FUN_054772c4(this + 0x128,&DAT_056f11a8);
  *(undefined4 *)(this + 0x130) = 0;
  FUN_05476c50(this + 0x128);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComboBox::~ComboBox() */

void __thiscall ComboBox::~ComboBox(ComboBox *this)

{
  ~ComboBox(this);
  AK::FreeHook(this);
  return;
}


/* ComboBox::ComboBox(Sexy::Delegate1<int>) */

void __thiscall ComboBox::ComboBox(ComboBox *this,Delegate2 *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0698be00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698c140;
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0xf0));
  FUN_05476574(this + 0x128);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0xf0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBox::AddSubMenu(int, std::wstring const&) */

void __thiscall ComboBox::AddSubMenu(ComboBox *this,int param_1,wstring *param_2)

{
  long lVar1;
  ComboBoxItem *this_00;
  code *pcVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x3b8);
  ComboBoxItem::ComboBoxItem(this_00,param_1);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,*(int *)(this + 0x54) * *(int *)(this + 0x130),*(undefined4 *)(this + 0x50),
             *(int *)(this + 0x54));
  pcVar2 = *(code **)(*(long *)this_00 + 0x370);
  FUN_05477b24(aCStack_50,param_2);
  (*pcVar2)(this_00,aCStack_50);
  FUN_05476c50(aCStack_50);
  pcVar2 = *(code **)(*(long *)this_00 + 0x378);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ClickComboBox);
  Sexy::Delegate1<int>::Delegate1<ComboBox,void(ComboBox::*)(int)>(aDStack_38,aCStack_50);
  (*pcVar2)(this_00,aDStack_38);
  pcVar2 = *(code **)(*(long *)this_00 + 0x388);
  Sexy::Delegate1<int>::Delegate1(aDStack_38,this + 0xf0);
  (*pcVar2)(this_00,aDStack_38);
  (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8),this_00);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x130) = *(int *)(this + 0x130) + 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBox::ShowMenu() */

void __thiscall ComboBox::ShowMenu(ComboBox *this)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  plVar5 = *(long **)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                    ((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                     (plVar5 + 1));
  if (cVar1 == '\0') {
    (**(code **)(*plVar5 + 0x158))(plVar5,1);
    lVar6 = *(long *)(this + 0xe8);
    local_1c = 0;
    local_18 = FUN_04c57d80(*(TaskResource **)(lVar6 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(lVar6 + 8));
    iVar4 = 0;
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar2) {
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      lVar6 = *plVar5;
      *(int *)(lVar6 + 0x4c) = iVar4;
      *(undefined4 *)(lVar6 + 0x48) = 0;
      iVar4 = iVar4 + *(int *)(lVar6 + 0x54);
      puVar3 = (uint *)eastl::max_alt<int>((int *)&local_1c,(int *)(lVar6 + 0x50));
      local_1c = *puVar3;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    *(int *)(*(long *)(this + 0xe8) + 0x54) = iVar4;
  }
  else {
    (**(code **)(*(long *)this + 0x328))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBox::GetSubMenu(int) */

void __thiscall ComboBox::GetSubMenu(ComboBox *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ComboBoxItem *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  lVar4 = *(long *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04c57d80(*(TaskResource **)(lVar4 + 8));
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(lVar4 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_00 = (ComboBoxItem *)*puVar3;
    if (this_00 != (ComboBoxItem *)0x0) {
      if (*(code **)(*(long *)this_00 + 0x358) == ComboBoxItem::GetWidgetID) {
        iVar2 = ComboBoxItem::GetWidgetID(this_00);
      }
      else {
        iVar2 = (**(code **)(*(long *)this_00 + 0x358))();
      }
      if (iVar2 == param_1) goto LAB_04c57fa0;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  this_00 = (ComboBoxItem *)0x0;
LAB_04c57fa0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBox::ClickComboBox(int) */

void __thiscall ComboBox::ClickComboBox(ComboBox *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x120) = param_1;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)GetSubMenu(this,param_1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x350))(auStack_10);
    FUN_054766c8(this + 0x128,auStack_10);
    FUN_05476c50(auStack_10);
    plVar1 = *(long **)(this + 0xe0);
    if (plVar1 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x370);
      FUN_05477b24(auStack_10,this + 0x128);
      (*pcVar2)(plVar1,auStack_10);
      FUN_05476c50(auStack_10);
    }
  }
  (**(code **)(*(long *)this + 0x328))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBox::OnCreate(int, std::wstring const&) */

void __thiscall ComboBox::OnCreate(ComboBox *this,int param_1,wstring *param_2)

{
  ComboBoxItem *this_00;
  undefined8 uVar1;
  Widget *this_01;
  long *plVar2;
  code *pcVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  this[0x59] = (ComboBox)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x3b8);
  ComboBoxItem::ComboBoxItem(this_00,param_1);
  *(ComboBoxItem **)(this + 0xe0) = this_00;
  pcVar3 = *(code **)(*(long *)this_00 + 0x370);
  FUN_05477b24(aCStack_50,param_2);
  (*pcVar3)(this_00,aCStack_50);
  FUN_05476c50(aCStack_50);
  plVar2 = *(long **)(this + 0xe0);
  pcVar3 = *(code **)(*plVar2 + 0x368);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92680);
  (*pcVar3)(plVar2,uVar1);
  plVar2 = *(long **)(this + 0xe0);
  pcVar3 = *(code **)(*plVar2 + 0x360);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92468);
  (*pcVar3)(plVar2,uVar1);
  plVar2 = *(long **)(this + 0xe0);
  pcVar3 = *(code **)(*plVar2 + 0x380);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ClickComboBoxMain);
  Sexy::Delegate1<int>::Delegate1<ComboBox,void(ComboBox::*)(int)>(aDStack_38,aCStack_50);
  (*pcVar3)(plVar2,aDStack_38);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  *(Widget **)(this + 0xe8) = this_01;
  (**(code **)(*(long *)this + 0x60))(this);
  (**(code **)(*(long *)this + 0x328))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComboBox::Resize(int, int, int, int) */

void __thiscall ComboBox::Resize(ComboBox *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0xe0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  plVar1 = *(long **)(this + 0xe8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,param_4,param_3,param_4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBox::Draw(Sexy::Graphics*) */

void __thiscall ComboBox::Draw(ComboBox *this,Graphics *param_1)

{
  undefined8 uVar1;
  long lVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  lVar2 = *(long *)(this + 0xe8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x6c) != '\0')) {
    Sexy::Insets::Insets
              (aIStack_18,0,*(int *)(this + 0x54),*(int *)(this + 0x50),*(int *)(lVar2 + 0x54));
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92490);
    Draw9SliceImage(param_1,aIStack_18,uVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

