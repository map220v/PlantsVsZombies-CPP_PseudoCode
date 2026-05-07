// Class: UIPage


/* UIPage::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall UIPage::RadioSelectionChanged(UIPage *this,UIWidgetRadio *param_1)

{
  char cVar1;
  code *pcVar2;
  
  if (((param_1 != (UIWidgetRadio *)0x0) &&
      (cVar1 = UIWidgetRadio::IsSelected(param_1), cVar1 != '\0')) &&
     (*(undefined8 **)(this + 0x110) != (undefined8 *)0x0)) {
    pcVar2 = *(code **)**(undefined8 **)(this + 0x110);
    if (pcVar2 != UI::PageListener::PageChanged) {
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* non-virtual thunk to UIPage::RadioSelectionChanged(UIWidgetRadio*) */

void __thiscall UIPage::RadioSelectionChanged(UIPage *this,UIWidgetRadio *param_1)

{
  RadioSelectionChanged(this + -0xd8,param_1);
  return;
}


/* UIPage::SetClickable(bool) */

void __thiscall UIPage::SetClickable(UIPage *this,bool param_1)

{
  if (!param_1) {
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x10;
    return;
  }
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 0xffffffef;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPage::IsClickable() const */

void __thiscall UIPage::IsClickable(UIPage *this)

{
  uint local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  Sexy::ModFlags((int *)&local_c,(FlagsMod *)(this + 0x5c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c >> 4 & 1);
}


/* UIPage::GetMaxPage() */

void __thiscall UIPage::GetMaxPage(UIPage *this)

{
  FUN_04b88498(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPage::resizePageButtons() */

void __thiscall UIPage::resizePageButtons(UIPage *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18._0_4_ =
       LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
  local_10._0_4_ =
       LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe8));
  piVar6 = eastl::max_alt<int>((int *)&local_18,(int *)&local_10);
  iVar1 = *piVar6 + *(int *)(this + 0x108);
  uVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe0));
  local_18 = CONCAT44(local_18._4_4_,uVar4);
  uVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe8));
  local_10 = CONCAT44(local_10._4_4_,uVar4);
  piVar6 = eastl::max_alt<int>((int *)&local_18,(int *)&local_10);
  iVar2 = *piVar6;
  iVar5 = FUN_04b88498(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  iVar8 = *(int *)(this + 0x50);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf0));
  iVar8 = (iVar8 - iVar1 * iVar5) / 2;
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar7 + 0x198))((long *)*puVar7,iVar8,0,iVar1,iVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    iVar8 = iVar8 + iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPage::SetPageImage(Sexy::Image*, Sexy::Image*) */

void __thiscall UIPage::SetPageImage(UIPage *this,Image *param_1,Image *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Image *)0x0) {
    *(Image **)(this + 0xe0) = param_1;
  }
  if (param_2 != (Image *)0x0) {
    *(Image **)(this + 0xe8) = param_2;
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = *plVar2;
    uVar4 = *(undefined8 *)(this + 0xe0);
    *(undefined8 *)(lVar3 + 0x100) = *(undefined8 *)(this + 0xe8);
    *(undefined8 *)(lVar3 + 0xe8) = uVar4;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  resizePageButtons(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPage::SetCurPage(int) */

void __thiscall UIPage::SetCurPage(UIPage *this,int param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  UIWidgetRadio *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 1) {
    param_1 = 0;
  }
  else {
    uVar2 = FUN_04b88498(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
    if (uVar2 < (ulong)(long)param_1) {
      param_1 = (int)uVar2;
    }
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (UIWidgetRadio *)*puVar3;
    if (*(int *)(this_00 + 0xd4) == param_1) {
      UIWidgetRadio::SetSelected(this_00,false);
      UIWidgetRadio::SetSelected(this_00,true);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPage::GetCurPage() */

void __thiscall UIPage::GetCurPage(UIPage *this)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  UIWidgetRadio *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf0));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf0));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar3 = (uint)bVar2;
    if (!bVar2) {
LAB_04b88a00:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (UIWidgetRadio *)*puVar4;
    cVar1 = UIWidgetRadio::IsSelected(this_00);
    if (cVar1 != '\0') {
      uVar3 = *(uint *)(this_00 + 0xd4);
      goto LAB_04b88a00;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* UIPage::~UIPage() */

void __thiscall UIPage::~UIPage(UIPage *this)

{
  *(undefined ***)this = &PTR_GetClass_06971a20;
  *(undefined **)(this + 0xd8) = &DAT_06971d48;
  std::vector<UIWidgetRadio*,std::allocator<UIWidgetRadio*>>::~vector
            ((vector<UIWidgetRadio*,std::allocator<UIWidgetRadio*>> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UIPage::~UIPage() */

void __thiscall UIPage::~UIPage(UIPage *this)

{
  ~UIPage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPage::createPageButton() */

void __thiscall UIPage::createPageButton(UIPage *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  Widget *pWVar6;
  Image *extraout_x1;
  Image *extraout_x1_00;
  size_t in_x2;
  code *pcVar7;
  long local_c0;
  UIWidgetType aUStack_b8 [8];
  undefined1 auStack_b0 [32];
  string asStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [64];
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidgetType::UIWidgetType(aUStack_b8);
  thunk_FUN_05475e00(auStack_b0,&DAT_06b87c10);
  uVar5 = WidgetFactory<UIWidgetRadio*>::GetTypeName();
  thunk_FUN_05475e00(aUStack_b8,uVar5);
  std::string::append(asStack_90,"",in_x2);
  StringHelper::ToString(*(StringHelper **)(this + 0xe0),extraout_x1);
  FUN_05474278(auStack_88,(string *)&local_c0);
  std::string::~string((string *)&local_c0);
  StringHelper::ToString(*(StringHelper **)(this + 0xe8),extraout_x1_00);
  FUN_05474278(auStack_80,(string *)&local_c0);
  std::string::~string((string *)&local_c0);
  local_40 = 1;
  pWVar6 = (Widget *)UIWidgetType::ToWidget(aUStack_b8,(Widget *)0x0);
  pcVar7 = *(code **)(*(long *)pWVar6 + 0x198);
  uVar2 = FUN_04b88538(0);
  uVar3 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
  uVar4 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xe0));
  (*pcVar7)(pWVar6,uVar2,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,pWVar6);
  local_c0 = WidgetFactory<UIWidgetRadio*>::GetWidget(pWVar6);
  *(UIPage **)(local_c0 + 0x1b0) = this + 0xd8;
  std::vector<UIWidgetRadio*,std::allocator<UIWidgetRadio*>>::push_back
            ((vector<UIWidgetRadio*,std::allocator<UIWidgetRadio*>> *)(this + 0xf0),
             (UIWidgetRadio **)&local_c0);
  lVar1 = local_c0;
  uVar2 = FUN_04b88498(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  *(undefined4 *)(lVar1 + 0xd4) = uVar2;
  UIWidgetType::~UIWidgetType(aUStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* UIPage::SetMaxPage(int) */

void __thiscall UIPage::SetMaxPage(UIPage *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  iVar2 = GetCurPage(this);
  if (param_1 < 0) {
    param_1 = 0;
  }
  while (uVar4 = FUN_04b88498(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8)),
        (ulong)(long)param_1 < uVar4) {
    puVar3 = (undefined8 *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0xf0));
    plVar6 = (long *)*puVar3;
    FUN_04b884a4(this + 0xf8);
    (**(code **)(*(long *)this + 0x68))(this,plVar6);
    (**(code **)(*plVar6 + 0x80))(plVar6,0,0);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  while (uVar4 < (ulong)(long)param_1) {
    createPageButton(this);
    uVar4 = FUN_04b88498(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  }
  resizePageButtons(this);
  if (iVar2 < 1) {
    uVar4 = 1;
    iVar2 = 1;
  }
  else {
    uVar4 = (ulong)iVar2;
  }
  uVar5 = FUN_04b88498(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
  iVar1 = (int)uVar5;
  if (uVar4 <= uVar5) {
    iVar1 = iVar2;
  }
  SetCurPage(this,iVar1);
  return;
}


/* UIPage::UIPage() */

void __thiscall UIPage::UIPage(UIPage *this)

{
  undefined4 uVar1;
  Image *pIVar2;
  Image *pIVar3;
  
  Sexy::Widget::Widget((Widget *)this);
  UI::RadioListener::RadioListener((RadioListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06971a20;
  *(undefined **)(this + 0xd8) = &DAT_06971d48;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  uVar1 = FUN_04b88538(5);
  *(undefined4 *)(this + 0x108) = uVar1;
  *(undefined8 *)(this + 0x110) = 0;
  this[0x59] = (UIPage)0x0;
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87bc8);
  pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b87ba0);
  SetPageImage(this,pIVar2,pIVar3);
  SetMaxPage(this,3);
  return;
}


/* UIPage::Resize(int, int, int, int) */

void __thiscall UIPage::Resize(UIPage *this,int param_1,int param_2,int param_3,int param_4)

{
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  resizePageButtons(this);
  return;
}

