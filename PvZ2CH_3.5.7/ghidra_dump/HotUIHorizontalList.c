// Class: HotUIHorizontalList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIHorizontalList::StaticClassInit() */

void HotUIHorizontalList::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"HotUIHorizontalList");
    (*pcVar2)(plVar1,asStack_10,FUN_03652770,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIHorizontalList::StaticGetClass() */

long * HotUIHorizontalList::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIHorizontalList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIHorizontalList::getMinWidth() */

void __thiscall HotUIHorizontalList::getMinWidth(HotUIHorizontalList *this)

{
  HotUIZPSMeterProperties *pHVar1;
  HotUIWidget *this_00;
  DynamicPadding *pDVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int local_58;
  int local_50;
  DynamicPadding aDStack_48 [64];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar3 = ___stack_chk_guard;
  switch(*(undefined4 *)(pHVar1 + 0x40)) {
  case 1:
    iVar5 = *(int *)(*(RtObject **)(this + 0x20) + 0x50);
    this_00 = Sexy::RtObject::Cast<HotUIWidget>(*(RtObject **)(this + 0x20));
    if (this_00 != (HotUIWidget *)0x0) {
      HotUIWidget::LayoutWidget(this_00);
      pDVar2 = (DynamicPadding *)HotUIWidget::GetPadding(this_00);
      DynamicPadding::DynamicPadding(aDStack_48,pDVar2);
      auVar6 = HotUIWidget::GetPadding(this_00);
      HotUIHelpers::GetInsetsFromDynamicPadding(auVar6._0_8_,auVar6._8_8_);
      iVar5 = *(int *)(this_00 + 0x50) - (local_58 + local_50);
      DynamicPadding::~DynamicPadding(aDStack_48);
    }
    uVar3 = (ulong)(uint)(int)((float)iVar5 * *(float *)(pHVar1 + 0x44));
    break;
  case 2:
    uVar3 = 0;
    break;
  case 3:
    pcVar4 = *(code **)(*(long *)this + 0x350);
    if (pcVar4 == HotUIWidget::getImageWidthForResizeData) {
      if (local_8 == ___stack_chk_guard) {
        HotUIWidget::getImageWidthForResizeData();
        return;
      }
      goto LAB_036535cc;
    }
    goto LAB_036535c0;
  case 4:
    pcVar4 = *(code **)(*(long *)this + 0x358);
    if (pcVar4 == HotUIWidget::getImageHeightForResizeData) {
      if (local_8 == ___stack_chk_guard) {
        HotUIWidget::getImageHeightForResizeData();
        return;
      }
      goto LAB_036535cc;
    }
LAB_036535c0:
    uVar3 = (*pcVar4)(this);
    break;
  default:
    uVar3 = (ulong)(uint)(int)*(float *)(pHVar1 + 0x44);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_036535cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* HotUIHorizontalList::HotUIHorizontalList() */

void __thiscall HotUIHorizontalList::HotUIHorizontalList(HotUIHorizontalList *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066733f0;
  return;
}


/* HotUIHorizontalList::StaticNew() */

HotUIHorizontalList * HotUIHorizontalList::StaticNew(void)

{
  HotUIHorizontalList *this;
  
  this = ::operator_new(0x210);
  HotUIHorizontalList(this);
  return this;
}


/* HotUIHorizontalList::~HotUIHorizontalList() */

void __thiscall HotUIHorizontalList::~HotUIHorizontalList(HotUIHorizontalList *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066733f0;
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIHorizontalList::~HotUIHorizontalList() */

void __thiscall HotUIHorizontalList::~HotUIHorizontalList(HotUIHorizontalList *this)

{
  ~HotUIHorizontalList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIHorizontalList::RepositionChildrenAndResize() */

void __thiscall HotUIHorizontalList::RepositionChildrenAndResize(HotUIHorizontalList *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  HotUIZPSMeterProperties *pHVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  HotUIWidget *extraout_x0;
  HotUIWidget *extraout_x0_00;
  int *piVar10;
  int iVar11;
  int iVar12;
  RtObject *this_00;
  int iVar13;
  ulong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  int local_3c;
  Widget *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = HotUIWidget::GetPadding((HotUIWidget *)this);
  pHVar5 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  fVar17 = *(float *)(pHVar5 + 0x134);
  if (*(int *)(pHVar5 + 0x130) == 1) {
    iVar12 = FUN_036520dc(*(undefined4 *)(this + 0x50));
    iVar1 = *(int *)(pHVar5 + 0x138);
    uVar6 = *(undefined8 *)(this + 8);
    fVar17 = fVar17 * (float)iVar12;
    fVar16 = *(float *)(lVar4 + 0xc);
  }
  else {
    fVar16 = *(float *)(lVar4 + 0xc);
    iVar1 = *(int *)(pHVar5 + 0x138);
    uVar6 = *(undefined8 *)(this + 8);
  }
  iVar12 = (int)fVar16;
  local_3c = iVar12;
  if (iVar1 < 2) {
    local_28 = FUN_03653174(uVar6);
    local_20 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20),
          bVar2) {
      plVar7 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
      if (*(char *)(*plVar7 + 0x6c) != '\0') {
        iVar12 = (int)((float)(int)(fVar17 + (float)*(int *)(*plVar7 + 0x50)) + (float)iVar12);
        local_3c = iVar12;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
    }
  }
  else {
    iVar15 = 0;
    local_28 = FUN_03653174(uVar6);
    iVar13 = 0;
    local_20 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20),
          bVar2) {
      plVar7 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
      if (*(char *)(*plVar7 + 0x6c) != '\0') {
        iVar15 = *(int *)(*plVar7 + 0x50);
        iVar13 = iVar13 + 1;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
    }
    if (0 < (int)((float)iVar13 / (float)iVar1)) {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 1;
        iVar12 = (int)((float)(int)((float)iVar15 + fVar17) + (float)iVar12);
      } while (iVar11 != (int)((float)iVar13 / (float)iVar1));
    }
  }
  iVar12 = (int)((float)(int)(*(float *)(lVar4 + 0x2c) - fVar17) + (float)iVar12);
  local_3c = iVar12;
  if (*(int *)(pHVar5 + 0x20) == 2) {
    uVar3 = getMinWidth(this);
    local_20 = CONCAT44(local_20._4_4_,uVar3);
    piVar10 = eastl::max_alt<int>(&local_3c,(int *)&local_20);
    (**(code **)(*(long *)this + 0x198))
              (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),*piVar10,
               *(undefined4 *)(this + 0x54));
  }
  iVar12 = (int)((float)(int)*(float *)(lVar4 + 0xc) + (float)((*(int *)(this + 0x50) - iVar12) / 2)
                );
  if (iVar1 < 2) {
    local_28 = FUN_03653174(*(undefined8 *)(this + 8));
    local_20 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20),
          bVar2) {
      puVar8 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
      this_00 = (RtObject *)*puVar8;
      if (this_00[0x6c] != (RtObject)0x0) {
        iVar1 = *(int *)(this + 0x54);
        iVar13 = *(int *)(this_00 + 0x54);
        bVar2 = Sexy::RtObject::IsA<HotUIWidget>(this_00);
        if (bVar2) {
          nop();
          HotUIHelpers::DoLayoutPassOnWidget(extraout_x0_00);
        }
        (**(code **)(*(long *)this_00 + 0x198))
                  (this_00,iVar12,(iVar1 - iVar13) / 2,*(undefined4 *)(this_00 + 0x50),
                   *(undefined4 *)(this_00 + 0x54));
        iVar12 = (int)((float)(int)(fVar17 + (float)*(int *)(this_00 + 0x50)) + (float)iVar12);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
    }
  }
  else {
    iVar13 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    local_30 = FUN_03653174(*(undefined8 *)(this + 8));
    local_28 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28),
          uVar6 = local_20, bVar2) {
      plVar7 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_30);
      local_38 = (Widget *)*plVar7;
      if (local_38[0x6c] != (Widget)0x0) {
        iVar13 = *(int *)(local_38 + 0x54);
        std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                  ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&local_20,&local_38);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_30);
    }
    iVar15 = *(int *)(this + 0x54);
    uVar14 = 0;
    lVar4 = FUN_0365210c(local_20,local_18);
    iVar11 = 0;
    if (iVar1 + 1 != 0) {
      iVar11 = (iVar15 - iVar1 * iVar13) / (iVar1 + 1);
    }
    iVar13 = 0;
    if (lVar4 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_0365211c(uVar6,uVar14);
        plVar7 = (long *)0x0;
        if ((RtObject *)*puVar8 != (RtObject *)0x0) {
          bVar2 = Sexy::RtObject::IsA<HotUIWidget>((RtObject *)*puVar8);
          if (bVar2) {
            FUN_0365211c(local_20,uVar14);
            nop();
            HotUIHelpers::DoLayoutPassOnWidget(extraout_x0);
            plVar7 = (long *)FUN_0365211c(local_20,uVar14);
            plVar7 = (long *)*plVar7;
          }
          else {
            plVar7 = (long *)FUN_0365211c(local_20,uVar14);
            plVar7 = (long *)*plVar7;
          }
        }
        iVar15 = 0;
        if (iVar1 != 0) {
          iVar15 = iVar13 / iVar1;
        }
        iVar13 = iVar13 - iVar15 * iVar1;
        (**(code **)(*plVar7 + 0x198))
                  (plVar7,iVar12,iVar11 + (*(int *)((long)plVar7 + 0x54) + iVar11) * iVar13,
                   (int)plVar7[10]);
        uVar6 = local_20;
        if (iVar13 == iVar1 + -1) {
          plVar7 = (long *)FUN_0365211c(local_20,uVar14);
          iVar12 = (int)((float)(int)(fVar17 + (float)*(int *)(*plVar7 + 0x50)) + (float)iVar12);
        }
        uVar14 = uVar14 + 1;
        iVar13 = (int)uVar14;
        uVar9 = FUN_0365210c(uVar6,local_18);
      } while (uVar14 < uVar9);
    }
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIHorizontalList::onLayoutFinalized() */

void __thiscall HotUIHorizontalList::onLayoutFinalized(HotUIHorizontalList *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  HotUIZPSMeterProperties *pHVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  HotUIWidget *extraout_x0;
  HotUIWidget *extraout_x0_00;
  int *piVar10;
  int iVar11;
  int iVar12;
  RtObject *this_00;
  int iVar13;
  ulong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  int iStack_3c;
  Widget *pWStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar4 = HotUIWidget::GetPadding((HotUIWidget *)this);
  pHVar5 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  fVar17 = *(float *)(pHVar5 + 0x134);
  if (*(int *)(pHVar5 + 0x130) == 1) {
    iVar12 = FUN_036520dc(*(undefined4 *)(this + 0x50));
    iVar1 = *(int *)(pHVar5 + 0x138);
    uVar6 = *(undefined8 *)(this + 8);
    fVar17 = fVar17 * (float)iVar12;
    fVar16 = *(float *)(lVar4 + 0xc);
  }
  else {
    fVar16 = *(float *)(lVar4 + 0xc);
    iVar1 = *(int *)(pHVar5 + 0x138);
    uVar6 = *(undefined8 *)(this + 8);
  }
  iVar12 = (int)fVar16;
  iStack_3c = iVar12;
  if (iVar1 < 2) {
    uStack_28 = FUN_03653174(uVar6);
    uStack_20 = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&uStack_28,(rbtree_iterator *)&uStack_20),
          bVar2) {
      plVar7 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_28);
      if (*(char *)(*plVar7 + 0x6c) != '\0') {
        iVar12 = (int)((float)(int)(fVar17 + (float)*(int *)(*plVar7 + 0x50)) + (float)iVar12);
        iStack_3c = iVar12;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&uStack_28);
    }
  }
  else {
    iVar15 = 0;
    uStack_28 = FUN_03653174(uVar6);
    iVar13 = 0;
    uStack_20 = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&uStack_28,(rbtree_iterator *)&uStack_20),
          bVar2) {
      plVar7 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_28);
      if (*(char *)(*plVar7 + 0x6c) != '\0') {
        iVar15 = *(int *)(*plVar7 + 0x50);
        iVar13 = iVar13 + 1;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&uStack_28);
    }
    if (0 < (int)((float)iVar13 / (float)iVar1)) {
      iVar11 = 0;
      do {
        iVar11 = iVar11 + 1;
        iVar12 = (int)((float)(int)((float)iVar15 + fVar17) + (float)iVar12);
      } while (iVar11 != (int)((float)iVar13 / (float)iVar1));
    }
  }
  iVar12 = (int)((float)(int)(*(float *)(lVar4 + 0x2c) - fVar17) + (float)iVar12);
  iStack_3c = iVar12;
  if (*(int *)(pHVar5 + 0x20) == 2) {
    uVar3 = getMinWidth(this);
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar3);
    piVar10 = eastl::max_alt<int>(&iStack_3c,(int *)&uStack_20);
    (**(code **)(*(long *)this + 0x198))
              (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),*piVar10,
               *(undefined4 *)(this + 0x54));
  }
  iVar12 = (int)((float)(int)*(float *)(lVar4 + 0xc) + (float)((*(int *)(this + 0x50) - iVar12) / 2)
                );
  if (iVar1 < 2) {
    uStack_28 = FUN_03653174(*(undefined8 *)(this + 8));
    uStack_20 = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&uStack_28,(rbtree_iterator *)&uStack_20),
          bVar2) {
      puVar8 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_28);
      this_00 = (RtObject *)*puVar8;
      if (this_00[0x6c] != (RtObject)0x0) {
        iVar1 = *(int *)(this + 0x54);
        iVar13 = *(int *)(this_00 + 0x54);
        bVar2 = Sexy::RtObject::IsA<HotUIWidget>(this_00);
        if (bVar2) {
          nop();
          HotUIHelpers::DoLayoutPassOnWidget(extraout_x0_00);
        }
        (**(code **)(*(long *)this_00 + 0x198))
                  (this_00,iVar12,(iVar1 - iVar13) / 2,*(undefined4 *)(this_00 + 0x50),
                   *(undefined4 *)(this_00 + 0x54));
        iVar12 = (int)((float)(int)(fVar17 + (float)*(int *)(this_00 + 0x50)) + (float)iVar12);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&uStack_28);
    }
  }
  else {
    iVar13 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
    uStack_30 = FUN_03653174(*(undefined8 *)(this + 8));
    uStack_28 = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)(this + 8));
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&uStack_30,(rbtree_iterator *)&uStack_28),
          uVar6 = uStack_20, bVar2) {
      plVar7 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_30);
      pWStack_38 = (Widget *)*plVar7;
      if (pWStack_38[0x6c] != (Widget)0x0) {
        iVar13 = *(int *)(pWStack_38 + 0x54);
        std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                  ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&uStack_20,&pWStack_38);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&uStack_30);
    }
    iVar15 = *(int *)(this + 0x54);
    uVar14 = 0;
    lVar4 = FUN_0365210c(uStack_20,uStack_18);
    iVar11 = 0;
    if (iVar1 + 1 != 0) {
      iVar11 = (iVar15 - iVar1 * iVar13) / (iVar1 + 1);
    }
    iVar13 = 0;
    if (lVar4 != 0) {
      do {
        puVar8 = (undefined8 *)FUN_0365211c(uVar6,uVar14);
        plVar7 = (long *)0x0;
        if ((RtObject *)*puVar8 != (RtObject *)0x0) {
          bVar2 = Sexy::RtObject::IsA<HotUIWidget>((RtObject *)*puVar8);
          if (bVar2) {
            FUN_0365211c(uStack_20,uVar14);
            nop();
            HotUIHelpers::DoLayoutPassOnWidget(extraout_x0);
            plVar7 = (long *)FUN_0365211c(uStack_20,uVar14);
            plVar7 = (long *)*plVar7;
          }
          else {
            plVar7 = (long *)FUN_0365211c(uStack_20,uVar14);
            plVar7 = (long *)*plVar7;
          }
        }
        iVar15 = 0;
        if (iVar1 != 0) {
          iVar15 = iVar13 / iVar1;
        }
        iVar13 = iVar13 - iVar15 * iVar1;
        (**(code **)(*plVar7 + 0x198))
                  (plVar7,iVar12,iVar11 + (*(int *)((long)plVar7 + 0x54) + iVar11) * iVar13,
                   (int)plVar7[10]);
        uVar6 = uStack_20;
        if (iVar13 == iVar1 + -1) {
          plVar7 = (long *)FUN_0365211c(uStack_20,uVar14);
          iVar12 = (int)((float)(int)(fVar17 + (float)*(int *)(*plVar7 + 0x50)) + (float)iVar12);
        }
        uVar14 = uVar14 + 1;
        iVar13 = (int)uVar14;
        uVar9 = FUN_0365210c(uVar6,uStack_18);
      } while (uVar14 < uVar9);
    }
    std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
              ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&uStack_20);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

