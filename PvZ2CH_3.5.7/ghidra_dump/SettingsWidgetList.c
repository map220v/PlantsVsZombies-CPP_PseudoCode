// Class: SettingsWidgetList


/* SettingsWidgetList::CancelScrollingWidgetDrag() */

void __thiscall SettingsWidgetList::CancelScrollingWidgetDrag(SettingsWidgetList *this)

{
  if (*(ScrollWidget **)(this + 0xe0) != (ScrollWidget *)0x0) {
    Sexy::ScrollWidget::CancelCurrentScroll(*(ScrollWidget **)(this + 0xe0));
    return;
  }
  return;
}


/* SettingsWidgetList::ScrollTargetReached(Sexy::ScrollWidget*) */

void SettingsWidgetList::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SettingsWidgetList::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
SettingsWidgetList::ScrollTargetReached(SettingsWidgetList *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* SettingsWidgetList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void SettingsWidgetList::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to SettingsWidgetList::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
SettingsWidgetList::ScrollTargetInterrupted(SettingsWidgetList *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsWidgetList::Resize(int, int, int, int) */

void __thiscall
SettingsWidgetList::Resize(SettingsWidgetList *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar2 = FUN_0445ae70(5);
  iVar3 = FUN_0445ae70(8);
  iVar4 = FUN_0445ae70(0xb);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_0445ae70(0x11);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,*(int *)(this + 0x54) - iVar5);
  (**(code **)(**(long **)(this + 0xe0) + 0x1a0))(*(long **)(this + 0xe0),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SettingsWidgetList::SetAutoScroll(bool) */

void __thiscall SettingsWidgetList::SetAutoScroll(SettingsWidgetList *this,bool param_1)

{
  float fVar1;
  
  this[0x100] = (SettingsWidgetList)param_1;
  if (param_1) {
    fVar1 = (float)PVZ_RealT();
    this[0x108] = (SettingsWidgetList)0x0;
    *(float *)(this + 0x104) = fVar1 + 3.0;
    *(undefined4 *)(this + 0x10c) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsWidgetList::Update() */

void __thiscall SettingsWidgetList::Update(SettingsWidgetList *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  float *pfVar5;
  ScrollWidget *pSVar6;
  float fVar7;
  float fVar8;
  float local_14;
  DVec2 aDStack_10 [4];
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x100] != (SettingsWidgetList)0x0) {
    cVar3 = Sexy::ScrollWidget::GetIsTrackingTouch(*(ScrollWidget **)(this + 0xe0));
    if (cVar3 != '\0') {
      fVar7 = (float)PVZ_RealT();
      this[0x108] = (SettingsWidgetList)0x0;
      *(float *)(this + 0x104) = fVar7 + 3.0;
      *(undefined4 *)(this + 0x10c) = 0;
    }
    fVar7 = (float)PVZ_RealT();
    if (*(float *)(this + 0x104) < fVar7) {
      lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe0));
      iVar1 = *(int *)(lVar4 + 0x48);
      lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe0));
      iVar2 = *(int *)(lVar4 + 0x4c);
      if (this[0x108] == (SettingsWidgetList)0x0) {
        this[0x108] = (SettingsWidgetList)0x1;
        *(float *)(this + 0x10c) = (float)iVar2;
      }
      fVar7 = (float)PVZ_RealDt();
      fVar8 = (float)FUN_0445ae84(0x41700000);
      *(float *)(this + 0x10c) = *(float *)(this + 0x10c) - fVar7 * fVar8;
      Sexy::ScrollWidget::GetScrollMin();
      local_14 = local_c;
      pfVar5 = eastl::max_alt<float>((float *)(this + 0x10c),&local_14);
      fVar7 = *pfVar5;
      pSVar6 = *(ScrollWidget **)(this + 0xe0);
      *(float *)(this + 0x10c) = fVar7;
      DVec2::DVec2(aDStack_10,(float)iVar1,fVar7);
      Sexy::ScrollWidget::SetScrollOffset(pSVar6,aDStack_10,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsWidgetList::SetAllEnabled(bool) */

void __thiscall SettingsWidgetList::SetAllEnabled(SettingsWidgetList *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    plVar3 = (long *)*puVar2;
    (**(code **)(*plVar3 + 0x88))(plVar3,!param_1);
    (**(code **)(*plVar3 + 0x188))(plVar3,!param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsWidgetList::Draw(Sexy::Graphics*) */

void __thiscall SettingsWidgetList::Draw(SettingsWidgetList *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b09348);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SettingsWidgetList::SettingsWidgetList() */

void __thiscall SettingsWidgetList::SettingsWidgetList(SettingsWidgetList *this)

{
  int iVar1;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0684ba10;
  *(undefined ***)(this + 0xd8) = &PTR__SettingsWidgetList_0684bd40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  this[0x100] = (SettingsWidgetList)0x0;
  this[0x108] = (SettingsWidgetList)0x0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  *(PVZ2UIScrollingWidget **)(this + 0xe0) = this_00;
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),this_01);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe0),2);
  Sexy::ScrollWidget::SetPermanentIndicators(*(ScrollWidget **)(this + 0xe0),true);
  iVar1 = FUN_0445ae70(5);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,iVar1,iVar1);
  Sexy::ScrollWidget::SetIndicatorsInsets(*(ScrollWidget **)(this + 0xe0),aIStack_18);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SettingsWidgetList::~SettingsWidgetList() */

void __thiscall SettingsWidgetList::~SettingsWidgetList(SettingsWidgetList *this)

{
  *(undefined ***)this = &PTR_GetClass_0684ba10;
  *(undefined ***)(this + 0xd8) = &PTR__SettingsWidgetList_0684bd40;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to SettingsWidgetList::~SettingsWidgetList() */

void __thiscall SettingsWidgetList::~SettingsWidgetList(SettingsWidgetList *this)

{
  ~SettingsWidgetList(this + -0xd8);
  return;
}


/* SettingsWidgetList::~SettingsWidgetList() */

void __thiscall SettingsWidgetList::~SettingsWidgetList(SettingsWidgetList *this)

{
  ~SettingsWidgetList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SettingsWidgetList::~SettingsWidgetList() */

void __thiscall SettingsWidgetList::~SettingsWidgetList(SettingsWidgetList *this)

{
  ~SettingsWidgetList(this + -0xd8);
  return;
}


/* SettingsWidgetList::AddSettingsWidget(Sexy::Widget*) */

void __thiscall SettingsWidgetList::AddSettingsWidget(SettingsWidgetList *this,Widget *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  Widget *pWVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  Widget *local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe8);
  local_8 = param_1;
  lVar2 = FUN_0445ae50(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  iVar4 = (int)lVar2;
  if (lVar2 != 0) {
    plVar3 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back(this_00);
    iVar4 = *(int *)(*plVar3 + 0x4c);
    plVar3 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back(this_00);
    iVar4 = iVar4 + *(int *)(*plVar3 + 0x54);
  }
  plVar3 = (long *)AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe0));
  pWVar1 = local_8;
  pcVar5 = *(code **)(*(long *)local_8 + 0x1a8);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08fd8);
  (*pcVar5)(pWVar1,0,iVar4 + *(int *)(lVar2 + 0x3c));
  (**(code **)(*plVar3 + 0x60))(plVar3,local_8);
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)this_00,&local_8);
  (**(code **)(*plVar3 + 0x198))
            (plVar3,0,0,*(undefined4 *)(this + 0x50),iVar4 + *(int *)(local_8 + 0x54));
  return;
}


/* SettingsWidgetList::AddSettingsCustomWidget(Sexy::Widget*) */

void __thiscall
SettingsWidgetList::AddSettingsCustomWidget(SettingsWidgetList *this,Widget *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined4 uVar1;
  Widget *pWVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  code *pcVar6;
  Widget *local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe8);
  local_8 = param_1;
  lVar3 = FUN_0445ae50(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
  iVar5 = (int)lVar3;
  if (lVar3 != 0) {
    plVar4 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back(this_00);
    iVar5 = *(int *)(*plVar4 + 0x4c);
    plVar4 = (long *)std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::back(this_00);
    iVar5 = iVar5 + *(int *)(*plVar4 + 0x54);
  }
  plVar4 = (long *)AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe0));
  pWVar2 = local_8;
  uVar1 = *(undefined4 *)(local_8 + 0x48);
  pcVar6 = *(code **)(*(long *)local_8 + 0x1a8);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08fd8);
  (*pcVar6)(pWVar2,uVar1,iVar5 + *(int *)(lVar3 + 0x3c));
  (**(code **)(*plVar4 + 0x60))(plVar4,local_8);
  std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
            ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)this_00,&local_8);
  (**(code **)(*plVar4 + 0x198))
            (plVar4,0,0,*(undefined4 *)(this + 0x50),iVar5 + *(int *)(local_8 + 0x54));
  return;
}

