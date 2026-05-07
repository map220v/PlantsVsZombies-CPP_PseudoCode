// Class: HotUIVerticalList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::Draw(Sexy::Graphics*) */

void __thiscall HotUIVerticalList::Draw(HotUIVerticalList *this,Graphics *param_1)

{
  int iVar1;
  long lVar2;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar2 = HotUIWidget::GetProps();
  if (*(char *)(lVar2 + 0x10a) == '\0') {
    if (0.0 < *(float *)(this + 0x168)) {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
      Sexy::Insets::Insets(aIStack_18,0,0,0,(int)(*(float *)(this + 0x168) * 255.0));
      Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
      Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
    }
  }
  else {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    Sexy::Insets::Insets(aIStack_18,0,0,0,0xb4);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (*(code **)(*(long *)this + 800) != HotUIWidget::onDraw) {
    (**(code **)(*(long *)this + 800))(this,param_1);
  }
  iVar1 = FUN_03654eb4(*(undefined8 *)(this + 0x1e8),*(undefined8 *)(this + 0x1f8));
  if (iVar1 != 0) {
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(this + 0x1e0),(char *)param_1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIVerticalList::RemoveWidget(Sexy::Widget*) */

void __thiscall HotUIVerticalList::RemoveWidget(HotUIVerticalList *this,Widget *param_1)

{
  if (*(Widget **)(this + 0x228) != param_1) {
    HotUIWidget::RemoveWidget((HotUIWidget *)this,param_1);
    return;
  }
  *(undefined8 *)(this + 0x228) = 0;
  HotUIWidget::RemoveWidget((HotUIWidget *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::StaticClassInit() */

void HotUIVerticalList::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIVerticalList");
    (*pcVar2)(plVar1,asStack_10,FUN_0365255c,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIVerticalList::StaticGetClass() */

long * HotUIVerticalList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIVerticalList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIVerticalList::finishSmoothlyRemovingChild() */

void __thiscall HotUIVerticalList::finishSmoothlyRemovingChild(HotUIVerticalList *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x228);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*(long *)this + 0x68))(this,plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    HotUIWidget::layoutAndPositionWidgetIfDirty((HotUIWidget *)this);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
  }
  *(undefined8 *)(this + 0x230) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::ReplaceChild(Sexy::Widget*, Sexy::Widget*) */

void __thiscall
HotUIVerticalList::ReplaceChild(HotUIVerticalList *this,Widget *param_1,Widget *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03653174(*(undefined8 *)(this + 8));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
LAB_0365324c:
      finishSmoothlyRemovingChild(this);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if ((Widget *)*puVar2 == param_1) {
      *(Widget **)(this + 0x228) = param_1;
      Sexy::WidgetContainer::InsertWidgetHelper
                ((WidgetContainer *)this,(_List_iterator *)&local_18,param_2);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(this + 0x18);
      *(HotUIVerticalList **)(param_2 + 0x20) = this;
      if (*(long *)(this + 0x18) != 0) {
        (**(code **)(*(long *)param_2 + 0xf8))(param_2);
        (**(code **)(*(long *)param_2 + 0xe0))(param_2);
        Sexy::WidgetManager::RehupMouse(*(WidgetManager **)(this + 0x18));
      }
      (**(code **)(*(long *)this + 0xd8))(this);
      goto LAB_0365324c;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::RemoveChildSmoothly(Sexy::Widget*, float) */

void __thiscall
HotUIVerticalList::RemoveChildSmoothly(HotUIVerticalList *this,Widget *param_1,float param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  HotUIVerticalList *pHVar5;
  float fVar6;
  Curve<float> *pCVar7;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  pHVar5 = this + 8;
  local_8 = ___stack_chk_guard;
  local_28 = FUN_03653174(*(undefined8 *)pHVar5);
  do {
    local_20 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)pHVar5);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
    if (!bVar1) {
LAB_03653374:
      lVar3 = *(long *)(this + 0x230);
joined_r0x03653430:
      if (lVar3 == 0) {
        finishSmoothlyRemovingChild(this);
      }
      else {
        pCVar7._0_4_ = (Curve<float> *)PVZ_T();
        fVar6 = (float)PVZ_T();
        Curve<float>::Curve(pCVar7._0_4_,fVar6 + param_2,
                            (float)*(int *)(*(long *)(this + 0x230) + 0x4c),
                            (float)*(int *)(*(long *)(this + 0x228) + 0x4c),
                            (rbtree_iterator *)&local_20,4);
        *(undefined4 *)(this + 0x220) = local_10;
        *(undefined8 *)(this + 0x210) = local_20;
        *(undefined8 *)(this + 0x218) = uStack_18;
      }
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
    if ((Widget *)*puVar2 == param_1) {
      *(Widget **)(this + 0x228) = param_1;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
      local_20 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)pHVar5);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
      if (bVar1) {
        plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
        lVar3 = *plVar4;
        *(long *)(this + 0x230) = lVar3;
        goto joined_r0x03653430;
      }
      goto LAB_03653374;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::getMinHeight() */

void __thiscall HotUIVerticalList::getMinHeight(HotUIVerticalList *this)

{
  HotUIZPSMeterProperties *pHVar1;
  HotUIWidget *this_00;
  DynamicPadding *pDVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int local_54;
  int local_4c;
  DynamicPadding aDStack_48 [64];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar3 = ___stack_chk_guard;
  switch(*(undefined4 *)(pHVar1 + 0x50)) {
  case 1:
    iVar5 = *(int *)(*(RtObject **)(this + 0x20) + 0x54);
    this_00 = Sexy::RtObject::Cast<HotUIWidget>(*(RtObject **)(this + 0x20));
    if (this_00 != (HotUIWidget *)0x0) {
      HotUIWidget::LayoutWidget(this_00);
      pDVar2 = (DynamicPadding *)HotUIWidget::GetPadding(this_00);
      DynamicPadding::DynamicPadding(aDStack_48,pDVar2);
      auVar6 = HotUIWidget::GetPadding(this_00);
      HotUIHelpers::GetInsetsFromDynamicPadding(auVar6._0_8_,auVar6._8_8_);
      iVar5 = *(int *)(this_00 + 0x54) - (local_54 + local_4c);
      DynamicPadding::~DynamicPadding(aDStack_48);
    }
    uVar3 = (ulong)(uint)(int)((float)iVar5 * *(float *)(pHVar1 + 0x54));
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
      goto LAB_03653758;
    }
    goto LAB_0365374c;
  case 4:
    pcVar4 = *(code **)(*(long *)this + 0x358);
    if (pcVar4 == HotUIWidget::getImageHeightForResizeData) {
      if (local_8 == ___stack_chk_guard) {
        HotUIWidget::getImageHeightForResizeData();
        return;
      }
      goto LAB_03653758;
    }
LAB_0365374c:
    uVar3 = (*pcVar4)(this);
    break;
  default:
    uVar3 = (ulong)(uint)(int)*(float *)(pHVar1 + 0x54);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_03653758:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* HotUIVerticalList::HotUIVerticalList() */

void __thiscall HotUIVerticalList::HotUIVerticalList(HotUIVerticalList *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_06673080;
  return;
}


/* HotUIVerticalList::StaticNew() */

HotUIVerticalList * HotUIVerticalList::StaticNew(void)

{
  HotUIVerticalList *this;
  
  this = ::operator_new(0x238);
  HotUIVerticalList(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::Update() */

void __thiscall HotUIVerticalList::Update(HotUIVerticalList *this)

{
  bool bVar1;
  HotUIZPSMeterProperties *pHVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  HotUIVerticalList *pHVar6;
  float fVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::Update((HotUIWidget *)this);
  if (*(long *)(this + 0x230) != 0) {
    pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
    lVar3 = HotUIWidget::GetPadding((HotUIWidget *)this);
    iVar5 = (int)*(float *)(lVar3 + 0x1c);
    fVar7 = (float)PVZ_T();
    fVar7 = (float)Curve<float>::operator[]((Curve<float> *)(this + 0x210),fVar7);
    pHVar6 = this + 8;
    local_18 = FUN_03653174(*(undefined8 *)pHVar6);
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)pHVar6);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      if (*plVar4 == *(long *)(this + 0x230)) {
        *(int *)(*plVar4 + 0x4c) = (int)fVar7;
        plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        iVar5 = (int)((float)(*(int *)(*plVar4 + 0x4c) + *(int *)(*plVar4 + 0x54)) +
                      *(float *)(pHVar2 + 0x134) + (float)iVar5);
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        break;
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    while( true ) {
      local_10 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)pHVar6);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      plVar4 = (long *)*plVar4;
      (**(code **)(*plVar4 + 0x198))
                (plVar4,(int)plVar4[9],iVar5,(int)plVar4[10],*(undefined4 *)((long)plVar4 + 0x54));
      plVar4 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      iVar5 = (int)((float)*(int *)(*plVar4 + 0x54) + *(float *)(pHVar2 + 0x134) + (float)iVar5);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
    if ((float)(int)fVar7 == *(float *)(this + 0x21c)) {
      finishSmoothlyRemovingChild(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIVerticalList::~HotUIVerticalList() */

void __thiscall HotUIVerticalList::~HotUIVerticalList(HotUIVerticalList *this)

{
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined ***)this = &PTR_GetWidgetClass_06673080;
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIVerticalList::~HotUIVerticalList() */

void __thiscall HotUIVerticalList::~HotUIVerticalList(HotUIVerticalList *this)

{
  ~HotUIVerticalList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::RepositionChildrenAndResize() */

void __thiscall HotUIVerticalList::RepositionChildrenAndResize(HotUIVerticalList *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  HotUIZPSMeterProperties *pHVar5;
  long lVar6;
  int *piVar7;
  Widget **ppWVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  HotUIWidget *extraout_x0;
  list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *this_00;
  int iVar12;
  RtObject *this_01;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = HotUIWidget::GetPadding((HotUIWidget *)this);
  pHVar5 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if (*(int *)(lVar4 + 0x18) == 1) {
    fVar18 = (float)*(int *)(this + 0x54) * *(float *)(lVar4 + 0x1c);
  }
  else {
    fVar18 = *(float *)(lVar4 + 0x1c);
  }
  iVar17 = (int)fVar18;
  iVar19 = 0;
  this_00 = (list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8);
  local_28 = FUN_03653174(*(undefined8 *)this_00);
  lVar6 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size(this_00);
  if (lVar6 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      local_2c = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size(this_00);
      local_2c = local_2c - iVar19;
      piVar7 = eastl::min_alt<int>((int *)(pHVar5 + 0x138),&local_2c);
      iVar1 = *piVar7;
      if (iVar1 < 1) {
        iVar14 = 0;
      }
      else {
        iVar12 = 0;
        iVar14 = 0;
        do {
          iVar12 = iVar12 + 1;
          ppWVar8 = (Widget **)
                    std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                              ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
          std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                    ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&local_20,ppWVar8);
          plVar9 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                     ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_28);
          iVar14 = iVar14 + *(int *)(*plVar9 + 0x50);
          std::advance<std::_List_iterator<Sexy::Widget*>,int>((_List_iterator *)&local_28,1);
        } while (iVar12 != iVar1);
      }
      uVar16 = local_20;
      iVar12 = *(int *)(pHVar5 + 0x138);
      if (iVar1 < iVar12) {
        uVar10 = FUN_0365210c(local_20,local_18);
        plVar9 = (long *)FUN_0365211c(uVar16,uVar10 - 1);
        iVar14 = iVar14 + (iVar12 - iVar1) * *(int *)(*plVar9 + 0x50);
      }
      else {
        uVar10 = FUN_0365210c(local_20,local_18);
      }
      uVar13 = 0;
      iVar15 = 0;
      iVar1 = 0;
      iVar2 = iVar1;
      if (iVar12 + 1 != 0) {
        iVar1 = (*(int *)(this + 0x50) - iVar14) / (iVar12 + 1);
        iVar2 = iVar1;
      }
      while (uVar13 < uVar10) {
        puVar11 = (undefined8 *)FUN_0365211c(uVar16,uVar13);
        this_01 = (RtObject *)*puVar11;
        if ((this_01 != (RtObject *)0x0) &&
           (bVar3 = Sexy::RtObject::IsA<HotUIWidget>(this_01), bVar3)) {
          nop();
          HotUIHelpers::DoLayoutPassOnWidget(extraout_x0);
        }
        uVar13 = uVar13 + 1;
        (**(code **)(*(long *)this_01 + 0x198))
                  (this_01,iVar1,iVar17,*(undefined4 *)(this_01 + 0x50),
                   *(undefined4 *)(this_01 + 0x54));
        uVar16 = local_20;
        if (iVar15 < *(int *)(this_01 + 0x54)) {
          iVar15 = *(int *)(this_01 + 0x54);
        }
        iVar1 = iVar1 + iVar2 + *(int *)(this_01 + 0x50);
        uVar10 = FUN_0365210c(local_20,local_18);
      }
      if (*(int *)(pHVar5 + 0x130) == 1) {
        fVar18 = (float)iVar15 + (float)iVar17 +
                 (float)(int)((float)*(int *)(this + 0x54) * *(float *)(pHVar5 + 0x134));
      }
      else {
        fVar18 = (float)FUN_036521b0(*(undefined4 *)(pHVar5 + 0x134));
        fVar18 = (float)iVar15 + (float)iVar17 + fVar18;
      }
      iVar17 = (int)fVar18;
      std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
                ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&local_20);
      iVar19 = iVar19 + *(int *)(pHVar5 + 0x138);
      uVar10 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size(this_00);
    } while ((ulong)(long)iVar19 < uVar10);
  }
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
             *(undefined4 *)(this + 0x50),
             (int)((float)(int)*(float *)(lVar4 + 0x3c) + (float)iVar17));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::onLayoutFinalized() */

void __thiscall HotUIVerticalList::onLayoutFinalized(HotUIVerticalList *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  HotUIZPSMeterProperties *pHVar5;
  long lVar6;
  int *piVar7;
  Widget **ppWVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  HotUIWidget *extraout_x0;
  list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *this_00;
  int iVar12;
  RtObject *this_01;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  int iStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar4 = HotUIWidget::GetPadding((HotUIWidget *)this);
  pHVar5 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if (*(int *)(lVar4 + 0x18) == 1) {
    fVar18 = (float)*(int *)(this + 0x54) * *(float *)(lVar4 + 0x1c);
  }
  else {
    fVar18 = *(float *)(lVar4 + 0x1c);
  }
  iVar17 = (int)fVar18;
  iVar19 = 0;
  this_00 = (list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8);
  uStack_28 = FUN_03653174(*(undefined8 *)this_00);
  lVar6 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size(this_00);
  if (lVar6 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
      iStack_2c = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size(this_00);
      iStack_2c = iStack_2c - iVar19;
      piVar7 = eastl::min_alt<int>((int *)(pHVar5 + 0x138),&iStack_2c);
      iVar1 = *piVar7;
      if (iVar1 < 1) {
        iVar14 = 0;
      }
      else {
        iVar12 = 0;
        iVar14 = 0;
        do {
          iVar12 = iVar12 + 1;
          ppWVar8 = (Widget **)
                    std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                              ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_28);
          std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                    ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&uStack_20,ppWVar8);
          plVar9 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                     ((_List_const_iterator<Sexy::ActiveFontLayer> *)&uStack_28);
          iVar14 = iVar14 + *(int *)(*plVar9 + 0x50);
          std::advance<std::_List_iterator<Sexy::Widget*>,int>((_List_iterator *)&uStack_28,1);
        } while (iVar12 != iVar1);
      }
      uVar16 = uStack_20;
      iVar12 = *(int *)(pHVar5 + 0x138);
      if (iVar1 < iVar12) {
        uVar10 = FUN_0365210c(uStack_20,uStack_18);
        plVar9 = (long *)FUN_0365211c(uVar16,uVar10 - 1);
        iVar14 = iVar14 + (iVar12 - iVar1) * *(int *)(*plVar9 + 0x50);
      }
      else {
        uVar10 = FUN_0365210c(uStack_20,uStack_18);
      }
      uVar13 = 0;
      iVar15 = 0;
      iVar1 = 0;
      iVar2 = iVar1;
      if (iVar12 + 1 != 0) {
        iVar1 = (*(int *)(this + 0x50) - iVar14) / (iVar12 + 1);
        iVar2 = iVar1;
      }
      while (uVar13 < uVar10) {
        puVar11 = (undefined8 *)FUN_0365211c(uVar16,uVar13);
        this_01 = (RtObject *)*puVar11;
        if ((this_01 != (RtObject *)0x0) &&
           (bVar3 = Sexy::RtObject::IsA<HotUIWidget>(this_01), bVar3)) {
          nop();
          HotUIHelpers::DoLayoutPassOnWidget(extraout_x0);
        }
        uVar13 = uVar13 + 1;
        (**(code **)(*(long *)this_01 + 0x198))
                  (this_01,iVar1,iVar17,*(undefined4 *)(this_01 + 0x50),
                   *(undefined4 *)(this_01 + 0x54));
        uVar16 = uStack_20;
        if (iVar15 < *(int *)(this_01 + 0x54)) {
          iVar15 = *(int *)(this_01 + 0x54);
        }
        iVar1 = iVar1 + iVar2 + *(int *)(this_01 + 0x50);
        uVar10 = FUN_0365210c(uStack_20,uStack_18);
      }
      if (*(int *)(pHVar5 + 0x130) == 1) {
        fVar18 = (float)iVar15 + (float)iVar17 +
                 (float)(int)((float)*(int *)(this + 0x54) * *(float *)(pHVar5 + 0x134));
      }
      else {
        fVar18 = (float)FUN_036521b0(*(undefined4 *)(pHVar5 + 0x134));
        fVar18 = (float)iVar15 + (float)iVar17 + fVar18;
      }
      iVar17 = (int)fVar18;
      std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
                ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&uStack_20);
      iVar19 = iVar19 + *(int *)(pHVar5 + 0x138);
      uVar10 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size(this_00);
    } while ((ulong)(long)iVar19 < uVar10);
  }
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
             *(undefined4 *)(this + 0x50),
             (int)((float)(int)*(float *)(lVar4 + 0x3c) + (float)iVar17));
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIVerticalList::RepositionChildrenAndResizeCheckVisible() */

void __thiscall HotUIVerticalList::RepositionChildrenAndResizeCheckVisible(HotUIVerticalList *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  HotUIZPSMeterProperties *pHVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  Widget **ppWVar9;
  ulong uVar10;
  undefined8 *puVar11;
  HotUIWidget *extraout_x0;
  int iVar12;
  RtObject *this_00;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  Widget *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = HotUIWidget::GetPadding((HotUIWidget *)this);
  pHVar5 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if (*(int *)(lVar4 + 0x18) == 1) {
    fVar18 = (float)*(int *)(this + 0x54) * *(float *)(lVar4 + 0x1c);
  }
  else {
    fVar18 = *(float *)(lVar4 + 0x1c);
  }
  iVar17 = (int)fVar18;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)local_30);
  local_38 = FUN_03653174(*(undefined8 *)(this + 8));
  local_20 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)(this + 8));
  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_38,(rbtree_iterator *)&local_20), bVar2
        ) {
    plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_38);
    local_40 = (Widget *)*plVar6;
    if (local_40[0x6c] != (Widget)0x0) {
      std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_30,&local_40);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_38);
  }
  local_38 = FUN_03653174(local_30[0]);
  lVar7 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_30);
  iVar19 = 0;
  if (lVar7 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      iVar3 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                        ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_30);
      local_40 = (Widget *)CONCAT44(local_40._4_4_,iVar3 - iVar19);
      piVar8 = eastl::min_alt<int>((int *)(pHVar5 + 0x138),(int *)&local_40);
      iVar3 = *piVar8;
      if (iVar3 < 1) {
        iVar14 = 0;
      }
      else {
        iVar12 = 0;
        iVar14 = 0;
        do {
          iVar12 = iVar12 + 1;
          ppWVar9 = (Widget **)
                    std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                              ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_38);
          std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_back
                    ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&local_20,ppWVar9);
          plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                     ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_38);
          iVar14 = iVar14 + *(int *)(*plVar6 + 0x50);
          std::advance<std::_List_iterator<Sexy::Widget*>,int>((_List_iterator *)&local_38,1);
        } while (iVar12 != iVar3);
      }
      uVar16 = local_20;
      iVar12 = *(int *)(pHVar5 + 0x138);
      if (iVar3 < iVar12) {
        uVar10 = FUN_0365210c(local_20,local_18);
        plVar6 = (long *)FUN_0365211c(uVar16,uVar10 - 1);
        iVar14 = iVar14 + (iVar12 - iVar3) * *(int *)(*plVar6 + 0x50);
      }
      else {
        uVar10 = FUN_0365210c(local_20,local_18);
      }
      uVar13 = 0;
      iVar15 = 0;
      iVar3 = 0;
      iVar1 = iVar3;
      if (iVar12 + 1 != 0) {
        iVar3 = (*(int *)(this + 0x50) - iVar14) / (iVar12 + 1);
        iVar1 = iVar3;
      }
      while (uVar13 < uVar10) {
        puVar11 = (undefined8 *)FUN_0365211c(uVar16,uVar13);
        this_00 = (RtObject *)*puVar11;
        if ((this_00 != (RtObject *)0x0) &&
           (bVar2 = Sexy::RtObject::IsA<HotUIWidget>(this_00), bVar2)) {
          nop();
          HotUIHelpers::DoLayoutPassOnWidget(extraout_x0);
        }
        uVar13 = uVar13 + 1;
        (**(code **)(*(long *)this_00 + 0x198))
                  (this_00,iVar3,iVar17,*(undefined4 *)(this_00 + 0x50),
                   *(undefined4 *)(this_00 + 0x54));
        uVar16 = local_20;
        if (iVar15 < *(int *)(this_00 + 0x54)) {
          iVar15 = *(int *)(this_00 + 0x54);
        }
        iVar3 = iVar3 + iVar1 + *(int *)(this_00 + 0x50);
        uVar10 = FUN_0365210c(local_20,local_18);
      }
      if (*(int *)(pHVar5 + 0x130) == 1) {
        fVar18 = (float)iVar15 + (float)iVar17 +
                 (float)(int)((float)*(int *)(this + 0x54) * *(float *)(pHVar5 + 0x134));
      }
      else {
        fVar18 = (float)FUN_036521b0(*(undefined4 *)(pHVar5 + 0x134));
        fVar18 = (float)iVar15 + (float)iVar17 + fVar18;
      }
      iVar17 = (int)fVar18;
      std::vector<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~vector
                ((vector<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)&local_20);
      iVar19 = iVar19 + *(int *)(pHVar5 + 0x138);
      uVar10 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                         ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_30);
    } while ((ulong)(long)iVar19 < uVar10);
  }
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
             *(undefined4 *)(this + 0x50),
             (int)((float)(int)*(float *)(lVar4 + 0x3c) + (float)iVar17));
  std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~list
            ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

