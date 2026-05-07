// Class: UIScrollWidgetComponent


/* UIScrollWidgetComponent::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIScrollWidgetComponent::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIScrollWidgetComponent::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIScrollWidgetComponent::ScrollTargetReached(UIScrollWidgetComponent *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* UIScrollWidgetComponent::SetScrollParam() */

void __thiscall UIScrollWidgetComponent::SetScrollParam(UIScrollWidgetComponent *this)

{
  *(undefined4 *)(this + 0x1e0) = 0x40a00000;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e4) = 0x3f800000;
  return;
}


/* UIScrollWidgetComponent::SetDotEnable(bool) */

void __thiscall UIScrollWidgetComponent::SetDotEnable(UIScrollWidgetComponent *this,bool param_1)

{
  this[0x1da] = (UIScrollWidgetComponent)param_1;
  return;
}


/* UIScrollWidgetComponent::SetManualEnable(bool) */

void __thiscall UIScrollWidgetComponent::SetManualEnable(UIScrollWidgetComponent *this,bool param_1)

{
  this[0x1db] = (UIScrollWidgetComponent)param_1;
  return;
}


/* UIScrollWidgetComponent::SetImmediateChangePage(bool) */

void __thiscall
UIScrollWidgetComponent::SetImmediateChangePage(UIScrollWidgetComponent *this,bool param_1)

{
  this[0x1d9] = (UIScrollWidgetComponent)param_1;
  return;
}


/* UIScrollWidgetComponent::SetWidgetRect(Sexy::TRect<int>) */

void __thiscall
UIScrollWidgetComponent::SetWidgetRect(UIScrollWidgetComponent *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x108) = *param_2;
  *(undefined8 *)(this + 0x110) = uVar1;
  return;
}


/* UIScrollWidgetComponent::SetScrollWidgetRect(Sexy::TRect<int>) */

void __thiscall
UIScrollWidgetComponent::SetScrollWidgetRect(UIScrollWidgetComponent *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x118) = *param_2;
  *(undefined8 *)(this + 0x120) = uVar1;
  return;
}


/* UIScrollWidgetComponent::Update() */

void __thiscall UIScrollWidgetComponent::Update(UIScrollWidgetComponent *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  (**(code **)(*(long *)this + 800))(this);
  return;
}


/* UIScrollWidgetComponent::GetNearIndex() */

int __thiscall UIScrollWidgetComponent::GetNearIndex(UIScrollWidgetComponent *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe8));
  iVar1 = *(int *)(lVar3 + 0x48);
  iVar2 = 0;
  if (iVar1 < 1) {
    iVar2 = *(int *)(this + 0x1c8) + -1;
    if (-(*(float *)(this + 0x1d0) * (float)iVar2) <= (float)iVar1) {
      return (int)((float)-iVar1 / *(float *)(this + 0x1d0));
    }
  }
  return iVar2;
}


/* UIScrollWidgetComponent::ScrollTouchMotion(Sexy::Touch const&) */

void UIScrollWidgetComponent::ScrollTouchMotion(Touch *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1b8) = 2;
  iVar1 = FUN_04c615c8(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x170));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_1 + 0x158));
  return;
}


/* non-virtual thunk to UIScrollWidgetComponent::ScrollTouchMotion(Sexy::Touch const&) */

void __thiscall
UIScrollWidgetComponent::ScrollTouchMotion(UIScrollWidgetComponent *this,Touch *param_1)

{
  ScrollTouchMotion((Touch *)(this + -0xd8));
  return;
}


/* UIScrollWidgetComponent::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIScrollWidgetComponent::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1b8) = 1;
  Sexy::ScrollWidget::SetScrollVelocity
            (*(ScrollWidget **)(param_1 + 0xe8),(FPoint *)(param_1 + 0x1e8));
  iVar1 = FUN_04c615c8(*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x140));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_1 + 0x128));
  return;
}


/* non-virtual thunk to UIScrollWidgetComponent::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIScrollWidgetComponent::ScrollTargetInterrupted
          (UIScrollWidgetComponent *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollWidgetComponent::StaticClassInit() */

void UIScrollWidgetComponent::StaticClassInit(void)

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
    std::string::string(asStack_10,"UIScrollWidgetComponent");
    (*pcVar2)(plVar1,asStack_10,FUN_04c61adc,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIScrollWidgetComponent::StaticGetClass() */

long * UIScrollWidgetComponent::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"UIScrollWidgetComponent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UIScrollWidgetComponent::GetClass() const */

long * UIScrollWidgetComponent::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"UIScrollWidgetComponent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollWidgetComponent::ImmediateChangePage() */

void __thiscall UIScrollWidgetComponent::ImmediateChangePage(UIScrollWidgetComponent *this)

{
  int iVar1;
  long lVar2;
  ScrollWidget *this_00;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = 0;
  if (*(int *)(this + 0x1cc) < *(int *)(this + 0x1c8) + -1) {
    iVar1 = *(int *)(this + 0x1cc) + 1;
  }
  *(int *)(this + 0x1cc) = iVar1;
  if (*(AccessoryContent **)(this + 0xe8) != (AccessoryContent *)0x0) {
    lVar2 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe8));
    iVar1 = *(int *)(lVar2 + 0x4c);
    Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(this + 0xe8),(FPoint *)(this + 0x1e8));
    this_00 = *(ScrollWidget **)(this + 0xe8);
    Sexy::Point::Point(aPStack_10,(int)((float)*(int *)(this + 0x1cc) * *(float *)(this + 0x1d0)),
                       iVar1);
    Sexy::ScrollWidget::ScrollToPoint(this_00,aPStack_10,false);
    FUN_04c615ec(*(long *)(this + 0x1c0) + 0xd4,*(undefined4 *)(this + 0x1cc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollWidgetComponent::AutoScroll() */

void __thiscall UIScrollWidgetComponent::AutoScroll(UIScrollWidgetComponent *this)

{
  int iVar1;
  long lVar2;
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(AccessoryContent **)(this + 0xe8) != (AccessoryContent *)0x0) {
    AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe8));
    lVar2 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe8));
    iVar1 = *(int *)(lVar2 + 0x4c);
    if (*(int *)(this + 0x1cc) < *(int *)(this + 0x1c8) + -1) {
      *(int *)(this + 0x1cc) = *(int *)(this + 0x1cc) + 1;
      Sexy::ScrollWidget::SetScrollVelocity
                (*(ScrollWidget **)(this + 0xe8),(FPoint *)(this + 0x1e8));
    }
    else {
      *(undefined4 *)(this + 0x1cc) = 0;
      DVec2::DVec2(aDStack_10,*(float *)(this + 0x1e8) * 3.0,*(float *)(this + 0x1ec) * 3.0);
      Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(this + 0xe8),(FPoint *)aDStack_10);
    }
    Sexy::Point::Point((Point *)aDStack_10,
                       (int)((float)*(int *)(this + 0x1cc) * *(float *)(this + 0x1d0)),iVar1);
    Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(this + 0xe8),(Point *)aDStack_10,true);
    FUN_04c615ec(*(long *)(this + 0x1c0) + 0xd4,*(undefined4 *)(this + 0x1cc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollWidgetComponent::InitView() */

void __thiscall UIScrollWidgetComponent::InitView(UIScrollWidgetComponent *this)

{
  long lVar1;
  UIScrollWidget *this_00;
  long lVar2;
  undefined8 local_10;
  
  lVar1 = ___stack_chk_guard;
  *(float *)(this + 0x1d0) = (float)*(int *)(this + 0x50);
  *(float *)(this + 0x1dc) = (float)*(int *)(this + 0x50) / *(float *)(this + 0x1e4);
  this_00 = ::operator_new(0x248);
  UIScrollWidget::UIScrollWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  lVar2 = *(long *)this_00;
  *(UIScrollWidget **)(this + 0xe8) = this_00;
  (**(code **)(lVar2 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0xe8),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  UIScrollWidget::GetScrollVelocity();
  *(undefined8 *)(this + 0x1e8) = local_10;
  if (*(long *)(this + 0xe0) != 0) {
    (**(code **)(**(long **)(this + 0xe8) + 0x60))(*(long **)(this + 0xe8));
    lVar2 = *(long *)(this + 0xe0);
    Sexy::OutputDebugStrF
              ((wchar_t *)"_scrollWidgetContainer x:%d y:%d width:%d height:%d",
               (ulong)*(uint *)(lVar2 + 0x48),(ulong)*(uint *)(lVar2 + 0x4c),
               (ulong)*(uint *)(lVar2 + 0x50),(ulong)*(uint *)(lVar2 + 0x54));
  }
  (**(code **)(*(long *)this + 0x318))(this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollWidgetComponent::ScrollTouchEnd(Sexy::Touch const&) */

void UIScrollWidgetComponent::ScrollTouchEnd(Touch *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  Point aPStack_10 [8];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x1b8) = 3;
  local_8 = ___stack_chk_guard;
  uVar3 = PVZ_T();
  *(undefined4 *)(param_1 + 0x1d4) = uVar3;
  uVar3 = (**(code **)(*(long *)param_1 + 0x368))(param_1);
  *(undefined4 *)(param_1 + 0x1cc) = uVar3;
  FUN_04c615ec(*(long *)(param_1 + 0x1c0) + 0xd4,uVar3);
  if ((param_1[0x1d8] != (Touch)0x0) &&
     (*(AccessoryContent **)(param_1 + 0xe8) != (AccessoryContent *)0x0)) {
    AccessoryContent::GetDisplayImage(*(AccessoryContent **)(param_1 + 0xe8));
    lVar2 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(param_1 + 0xe8));
    Sexy::Point::Point(aPStack_10,
                       (int)((float)*(int *)(param_1 + 0x1cc) * *(float *)(param_1 + 0x1d0)),
                       *(int *)(lVar2 + 0x4c));
    Sexy::ScrollWidget::SetScrollVelocity
              (*(ScrollWidget **)(param_1 + 0xe8),(FPoint *)(param_1 + 0x1e8));
    Sexy::ScrollWidget::ScrollToPoint(*(ScrollWidget **)(param_1 + 0xe8),aPStack_10,true);
  }
  iVar1 = FUN_04c615c8(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x1a0));
  if (iVar1 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_1 + 0x188));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIScrollWidgetComponent::ScrollTouchEnd(Sexy::Touch const&) */

void __thiscall
UIScrollWidgetComponent::ScrollTouchEnd(UIScrollWidgetComponent *this,Touch *param_1)

{
  ScrollTouchEnd((Touch *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollWidgetComponent::UpdateScrollWidget() */

void __thiscall UIScrollWidgetComponent::UpdateScrollWidget(UIScrollWidgetComponent *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ScrollWidget *pSVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  DVec2 aDStack_10 [8];
  long local_8;
  
  iVar3 = *(int *)(this + 0x1b8);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0) {
    cVar2 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1e0),*(float *)(this + 0x1d4));
    if ((cVar2 != '\0') && (this[0x1d8] != (UIScrollWidgetComponent)0x0)) {
      *(undefined4 *)(this + 0x1b8) = 4;
    }
  }
  else if (1 < iVar3 - 1U) {
    if (iVar3 == 3) {
      *(undefined4 *)(this + 0x1b8) = 0;
    }
    else {
      if (iVar3 == 4) {
        if (this[0x1d9] == (UIScrollWidgetComponent)0x0) {
          (**(code **)(*(long *)this + 0x380))();
        }
        else {
          (**(code **)(*(long *)this + 0x378))();
        }
      }
      else {
        if (iVar3 == 5) {
          cVar2 = Sexy::ScrollWidget::GetIsTrackingTouch(*(ScrollWidget **)(this + 0xe8));
          if (cVar2 == '\0') {
            lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe8));
            iVar3 = *(int *)(lVar4 + 0x48);
            lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0xe8));
            iVar1 = *(int *)(lVar4 + 0x4c);
            if (*(int *)(this + 0x1cc) < *(int *)(this + 0x1c8) + -1) {
              iVar6 = (int)-(*(float *)(this + 0x1d0) * (float)(*(int *)(this + 0x1cc) + 1));
              fVar8 = (float)PVZ_RealDt();
              iVar3 = (int)((float)iVar3 - *(float *)(this + 0x1dc) * fVar8);
              if (iVar6 < iVar3) {
                pSVar5 = *(ScrollWidget **)(this + 0xe8);
                DVec2::DVec2(aDStack_10,(float)iVar3,(float)iVar1);
                Sexy::ScrollWidget::SetScrollOffset(pSVar5,aDStack_10,0);
              }
              else {
                pSVar5 = *(ScrollWidget **)(this + 0xe8);
                DVec2::DVec2(aDStack_10,(float)iVar6,(float)iVar1);
                Sexy::ScrollWidget::SetScrollOffset(pSVar5,aDStack_10,0);
                iVar1 = *(int *)(this + 0x1c8);
                iVar3 = *(int *)(this + 0x1cc) + 1;
                *(int *)(this + 0x1cc) = iVar3;
                iVar6 = 0;
                if (iVar1 != 0) {
                  iVar6 = iVar3 / iVar1;
                }
                FUN_04c615ec(*(long *)(this + 0x1c0) + 0xd4,iVar3 - iVar6 * iVar1);
                *(undefined4 *)(this + 0x1b8) = 6;
              }
            }
            else {
              *(undefined4 *)(this + 0x1cc) = 0;
              pSVar5 = *(ScrollWidget **)(this + 0xe8);
              DVec2::DVec2(aDStack_10,0.0,(float)iVar1);
              Sexy::ScrollWidget::SetScrollOffset(pSVar5,aDStack_10,0);
              iVar3 = *(int *)(this + 0x1c8);
              iVar1 = 0;
              if (iVar3 != 0) {
                iVar1 = *(int *)(this + 0x1cc) / iVar3;
              }
              FUN_04c615ec(*(long *)(this + 0x1c0) + 0xd4,*(int *)(this + 0x1cc) - iVar1 * iVar3);
              *(undefined4 *)(this + 0x1b8) = 6;
            }
          }
          goto LAB_04c620e0;
        }
        if (iVar3 != 6) goto LAB_04c620e0;
      }
      *(undefined4 *)(this + 0x1b8) = 0;
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x1d4) = uVar7;
    }
  }
LAB_04c620e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIScrollWidgetComponent::InitDot() */

void __thiscall UIScrollWidgetComponent::InitDot(UIScrollWidgetComponent *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *pSVar7;
  UIScrollDotWidget *this_01;
  UIScrollWidgetComponent UVar8;
  long lVar9;
  code *pcVar10;
  
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93a70);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar1 = *(int *)(this + 0x1c8);
  iVar4 = FUN_04c61824(10);
  iVar2 = *(int *)(this + 0x50);
  iVar3 = iVar3 * iVar1 + iVar4 * (iVar1 + -1);
  iVar4 = FUN_04c61824(3);
  iVar1 = *(int *)(this + 0x54);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93a70);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
  this_01 = ::operator_new(0xe0);
  UIScrollDotWidget::UIScrollDotWidget(this_01,*(int *)(this + 0x1c8));
  lVar9 = *(long *)this_01;
  *(UIScrollDotWidget **)(this + 0x1c0) = this_01;
  pcVar10 = *(code **)(lVar9 + 0x198);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93a70);
  uVar6 = SalesProgressBar::GetCurrentLevel(pSVar7);
  (*pcVar10)(this_01,(iVar2 - iVar3) / 2,(iVar1 - iVar4) - iVar5,iVar3,uVar6);
  if (*(int *)(this + 0x1c8) < 2) {
    UVar8 = (UIScrollWidgetComponent)0x0;
  }
  else {
    UVar8 = this[0x1da];
  }
  (**(code **)(**(long **)(this + 0x1c0) + 0x158))(*(long **)(this + 0x1c0),UVar8);
  FUN_04c615ec(*(long *)(this + 0x1c0) + 0xd4,*(undefined4 *)(this + 0x1cc));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1c0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollWidgetComponent::UIScrollWidgetComponent() */

void __thiscall UIScrollWidgetComponent::UIScrollWidgetComponent(UIScrollWidgetComponent *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06990f10;
  *(undefined ***)(this + 0xd8) = &PTR__UIScrollWidgetComponent_069912c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x128),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x158),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x188),(DummyInit *)0x0);
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1e8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  Sexy::Insets::Insets((Insets *)&local_48);
  *(undefined8 *)(this + 0x108) = local_48;
  *(undefined8 *)(this + 0x110) = uStack_40;
  Sexy::Insets::Insets((Insets *)&local_48);
  *(undefined8 *)(this + 0x118) = local_48;
  *(undefined8 *)(this + 0x120) = uStack_40;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x128),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x158),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x188),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  uVar2 = PVZ_T();
  this[0x1d9] = (UIScrollWidgetComponent)0x0;
  *(undefined4 *)(this + 0x1d4) = uVar2;
  this[0x1da] = (UIScrollWidgetComponent)0x1;
  this[0x1db] = (UIScrollWidgetComponent)0x1;
  this[0x1d8] = (UIScrollWidgetComponent)0x1;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0x40a00000;
  *(undefined4 *)(this + 0x1e4) = 0x3f800000;
  std::vector<UIScrollDisplayWidgetBase*,std::allocator<UIScrollDisplayWidgetBase*>>::clear
            ((vector<UIScrollDisplayWidgetBase*,std::allocator<UIScrollDisplayWidgetBase*>> *)
             (this + 0xf0));
  PieceConfig::PieceConfig((PieceConfig *)&local_48);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1e8) = local_48;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIScrollWidgetComponent::StaticNew() */

UIScrollWidgetComponent * UIScrollWidgetComponent::StaticNew(void)

{
  UIScrollWidgetComponent *this;
  
  this = ::operator_new(0x1f0);
  UIScrollWidgetComponent(this);
  return this;
}


/* UIScrollWidgetComponent::~UIScrollWidgetComponent() */

void __thiscall UIScrollWidgetComponent::~UIScrollWidgetComponent(UIScrollWidgetComponent *this)

{
  *(undefined ***)this = &PTR_GetClass_06990f10;
  *(undefined ***)(this + 0xd8) = &PTR__UIScrollWidgetComponent_069912c8;
  std::vector<UIScrollDisplayWidgetBase*,std::allocator<UIScrollDisplayWidgetBase*>>::~vector
            ((vector<UIScrollDisplayWidgetBase*,std::allocator<UIScrollDisplayWidgetBase*>> *)
             (this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to UIScrollWidgetComponent::~UIScrollWidgetComponent() */

void __thiscall UIScrollWidgetComponent::~UIScrollWidgetComponent(UIScrollWidgetComponent *this)

{
  ~UIScrollWidgetComponent(this + -0xd8);
  return;
}


/* UIScrollWidgetComponent::~UIScrollWidgetComponent() */

void __thiscall UIScrollWidgetComponent::~UIScrollWidgetComponent(UIScrollWidgetComponent *this)

{
  ~UIScrollWidgetComponent(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIScrollWidgetComponent::~UIScrollWidgetComponent() */

void __thiscall UIScrollWidgetComponent::~UIScrollWidgetComponent(UIScrollWidgetComponent *this)

{
  ~UIScrollWidgetComponent(this + -0xd8);
  return;
}


/* UIScrollWidgetComponent::AddDisplayWidget(UIScrollDisplayWidgetBase*) */

void __thiscall
UIScrollWidgetComponent::AddDisplayWidget
          (UIScrollWidgetComponent *this,UIScrollDisplayWidgetBase *param_1)

{
  int iVar1;
  Widget *this_00;
  code *pcVar2;
  UIScrollDisplayWidgetBase *local_8;
  
  local_8 = param_1;
  if (*(long *)(this + 0xe0) == 0) {
    this_00 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_00);
    *(Widget **)(this + 0xe0) = this_00;
  }
  if (local_8 != (UIScrollDisplayWidgetBase *)0x0) {
    (**(code **)(*(long *)local_8 + 0x198))
              (local_8,*(int *)(this + 0x50) * *(int *)(this + 0x1c8),0,*(int *)(this + 0x50),
               *(undefined4 *)(this + 0x54));
    (**(code **)(**(long **)(this + 0xe0) + 0x60))(*(long **)(this + 0xe0),local_8);
    std::vector<UIScrollDisplayWidgetBase*,std::allocator<UIScrollDisplayWidgetBase*>>::push_back
              ((vector<UIScrollDisplayWidgetBase*,std::allocator<UIScrollDisplayWidgetBase*>> *)
               (this + 0xf0),&local_8);
    iVar1 = *(int *)(this + 0x1c8);
    pcVar2 = *(code **)(**(long **)(this + 0xe0) + 0x198);
    *(int *)(this + 0x1c8) = iVar1 + 1;
    (*pcVar2)(*(long **)(this + 0xe0),0,0,(iVar1 + 1) * *(int *)(this + 0x50),
              *(undefined4 *)(this + 0x54));
  }
  return;
}

