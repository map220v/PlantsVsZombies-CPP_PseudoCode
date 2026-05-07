// Class: Sexy::ScrollWidget


/* Sexy::ScrollWidget::SetScrollVelocity(Sexy::FPoint&) */

void __thiscall Sexy::ScrollWidget::SetScrollVelocity(ScrollWidget *this,FPoint *param_1)

{
  *(undefined8 *)(this + 0x170) = *(undefined8 *)param_1;
  return;
}


/* Sexy::ScrollWidget::SetBackgroundImage(Sexy::Image*) */

void __thiscall Sexy::ScrollWidget::SetBackgroundImage(ScrollWidget *this,Image *param_1)

{
  *(Image **)(this + 0x118) = param_1;
  return;
}


/* Sexy::ScrollWidget::GetPageHorizontal() */

undefined4 __thiscall Sexy::ScrollWidget::GetPageHorizontal(ScrollWidget *this)

{
  return *(undefined4 *)(this + 0x1a8);
}


/* Sexy::ScrollWidget::EnableOverlays(bool) */

void __thiscall Sexy::ScrollWidget::EnableOverlays(ScrollWidget *this,bool param_1)

{
  this[0x140] = (ScrollWidget)param_1;
  return;
}


/* Sexy::ScrollWidget::TouchesCanceled() */

void __thiscall Sexy::ScrollWidget::TouchesCanceled(ScrollWidget *this)

{
  code *pcVar1;
  
  if ((*(long *)(this + 0xe8) == 0) || (*(long **)(this + 0xf0) == (long *)0x0)) {
LAB_052fb4e0:
    if (this[0x1b1] == (ScrollWidget)0x0) goto LAB_052fb498;
  }
  else if (this[0x1b1] == (ScrollWidget)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x268))();
    *(undefined1 *)(*(long *)(this + 0xf0) + 0x70) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    goto LAB_052fb4e0;
  }
  pcVar1 = *(code **)(**(long **)(this + 0x200) + 0x10);
  if (pcVar1 != DefaultScrollSnapper::DoSnap) {
    (*pcVar1)(*(long **)(this + 0x200),this);
  }
LAB_052fb498:
  this[0x1b1] = (ScrollWidget)0x0;
  *(undefined4 *)(this + 0x188) = 0;
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::StaticClassInit() */

void Sexy::ScrollWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"ScrollWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_052fb734,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::StaticGetClass() */

long * Sexy::ScrollWidget::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Widget::StaticGetClass();
  (*pcVar3)(plVar1,"ScrollWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ScrollWidget::GetClass() const */

long * Sexy::ScrollWidget::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Widget::StaticGetClass();
  (*pcVar3)(plVar1,"ScrollWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::ScrollWidget::CacheDerivedValues() */

void __thiscall Sexy::ScrollWidget::CacheDerivedValues(ScrollWidget *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_s4;
  float in_s5;
  
  lVar3 = *(long *)(this + 0xe8);
  if (lVar3 == 0) {
    *(undefined4 *)(this + 0x1ec) = 0;
    *(undefined4 *)(this + 0x1e0) = 0;
    *(undefined4 *)(this + 0x1d8) = 0;
    *(undefined4 *)(this + 0x1dc) = 0;
    *(undefined4 *)(this + 0x1d4) = 0;
  }
  else {
    fVar5 = (float)((*(int *)(this + 0x50) - *(int *)(this + 0x158)) - *(int *)(lVar3 + 0x50));
    fVar6 = (float)*(int *)(this + 0x150);
    fVar4 = (float)((*(int *)(this + 0x54) - *(int *)(this + 0x15c)) - *(int *)(lVar3 + 0x54));
    fVar7 = (float)*(int *)(this + 0x154);
    *(float *)(this + 0x1d4) = fVar5;
    *(float *)(this + 0x1d8) = fVar4;
    *(float *)(this + 0x1dc) = fVar6;
    *(float *)(this + 0x1e0) = fVar7;
    uVar2 = 2;
    if (fVar7 <= fVar4) {
      uVar2 = 0;
    }
    uVar2 = (uVar2 | fVar5 < fVar6) & *(uint *)(this + 0x14c);
    *(uint *)(this + 0x1ec) = uVar2;
    if ((uVar2 & 1) == 0) {
      switch(*(undefined4 *)(this + 0x144)) {
      case 0:
        in_s5 = (float)*(int *)(lVar3 + 0x48);
        break;
      case 1:
        in_s5 = fVar6;
        break;
      case 2:
        in_s5 = fVar6 + (fVar5 - fVar6) * 0.5;
        break;
      case 3:
        in_s5 = fVar5;
      }
      *(float *)(this + 0x1dc) = in_s5;
      *(float *)(this + 0x1d4) = in_s5;
    }
    if (uVar2 >> 1 == 0) {
      switch(*(undefined4 *)(this + 0x148)) {
      case 0:
        in_s4 = (float)*(int *)(lVar3 + 0x4c);
        break;
      case 1:
        in_s4 = fVar7;
        break;
      case 2:
        fVar5 = (float)*(int *)(this + 0x158);
        in_s4 = fVar5 + (fVar4 - fVar5) * 0.5;
        break;
      case 3:
        in_s4 = fVar4;
      }
      *(float *)(this + 0x1e0) = in_s4;
      *(float *)(this + 0x1d8) = in_s4;
    }
  }
  if (this[0x18e] != (ScrollWidget)0x0) {
    fVar5 = (float)((*(int *)(this + 0x50) - *(int *)(this + 0x150)) - *(int *)(this + 0x158));
    fVar4 = (float)((*(int *)(this + 0x54) - *(int *)(this + 0x154)) - *(int *)(this + 0x15c));
    *(float *)(this + 0x1e4) = fVar5;
    *(float *)(this + 0x1e8) = fVar4;
    if (lVar3 == 0) {
      *(undefined4 *)(this + 500) = 0;
      *(undefined4 *)(this + 0x1f0) = 0;
      return;
    }
    iVar1 = FUN_052fb4f8(*(undefined4 *)(lVar3 + 0x50));
    *(int *)(this + 0x1f0) = (int)((float)iVar1 / fVar5);
    iVar1 = FUN_052fb4fc(*(undefined4 *)(lVar3 + 0x54));
    *(int *)(this + 500) = (int)((float)iVar1 / fVar4);
  }
  return;
}


/* Sexy::ScrollWidget::ClientSizeChanged() */

void __thiscall Sexy::ScrollWidget::ClientSizeChanged(ScrollWidget *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    CacheDerivedValues(this);
    return;
  }
  return;
}


/* Sexy::ScrollWidget::SetPageControl(Sexy::PageControl*) */

void __thiscall Sexy::ScrollWidget::SetPageControl(ScrollWidget *this,PageControl *param_1)

{
  *(PageControl **)(this + 0xf8) = param_1;
  if (this[0x18e] == (ScrollWidget)0x0) {
    return;
  }
  PageControl::SetNumberOfPages(param_1,*(int *)(this + 0x1f0));
  return;
}


/* Sexy::ScrollWidget::SetAlignment(Sexy::ScrollWidget::Alignment, Sexy::ScrollWidget::Alignment) */

void __thiscall
Sexy::ScrollWidget::SetAlignment(ScrollWidget *this,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(this + 0x144) = param_2;
  *(undefined4 *)(this + 0x148) = param_3;
  CacheDerivedValues(this);
  return;
}


/* Sexy::ScrollWidget::SetScrollMode(Sexy::ScrollWidget::ScrollMode) */

void __thiscall Sexy::ScrollWidget::SetScrollMode(ScrollWidget *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x14c) = param_2;
  CacheDerivedValues(this);
  return;
}


/* Sexy::ScrollWidget::SetScrollInsets(Sexy::Insets const&) */

void __thiscall Sexy::ScrollWidget::SetScrollInsets(ScrollWidget *this,Insets *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x150) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x158) = uVar1;
  CacheDerivedValues(this);
  return;
}


/* Sexy::ScrollWidget::EnableBounce(bool) */

void __thiscall Sexy::ScrollWidget::EnableBounce(ScrollWidget *this,bool param_1)

{
  this[0x18d] = (ScrollWidget)param_1;
  return;
}


/* Sexy::ScrollWidget::EnablePaging(bool) */

void __thiscall Sexy::ScrollWidget::EnablePaging(ScrollWidget *this,bool param_1)

{
  this[0x18e] = (ScrollWidget)param_1;
  return;
}


/* Sexy::ScrollWidget::EnableIndicators(Sexy::Image*, Sexy::Image*) */

void __thiscall
Sexy::ScrollWidget::EnableIndicators(ScrollWidget *this,Image *param_1,Image *param_2)

{
  *(Image **)(this + 0x108) = param_1;
  *(Image **)(this + 0x110) = param_2;
  return;
}


/* Sexy::ScrollWidget::SetIndicatorsInsets(Sexy::Insets const&) */

void __thiscall Sexy::ScrollWidget::SetIndicatorsInsets(ScrollWidget *this,Insets *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 400) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x198) = uVar1;
  return;
}


/* Sexy::ScrollWidget::SetPermanentIndicators(bool) */

void __thiscall Sexy::ScrollWidget::SetPermanentIndicators(ScrollWidget *this,bool param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)param_1;
  uVar2 = 0;
  if (param_1) {
    uVar2 = 0x3f800000;
    uVar1 = 0x7fffffff;
  }
  *(uint *)(this + 0x1a0) = uVar1;
  *(undefined4 *)(this + 0x1a4) = uVar2;
  return;
}


/* Sexy::ScrollWidget::GetPageVertical() */

undefined4 __thiscall Sexy::ScrollWidget::GetPageVertical(ScrollWidget *this)

{
  return *(undefined4 *)(this + 0x1ac);
}


/* Sexy::ScrollWidget::GetNeedsScroller() const */

bool __thiscall Sexy::ScrollWidget::GetNeedsScroller(ScrollWidget *this)

{
  return *(int *)(this + 0x1ec) != 0;
}


/* Sexy::ScrollWidget::EnableBackgroundFill(bool) */

void __thiscall Sexy::ScrollWidget::EnableBackgroundFill(ScrollWidget *this,bool param_1)

{
  this[0x120] = (ScrollWidget)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::GetClientWidgetAt(Sexy::Touch const&, Sexy::Touch&) */

void __thiscall
Sexy::ScrollWidget::GetClientWidgetAt(ScrollWidget *this,Touch *param_1,Touch *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  WidgetContainer *this_00;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(*(long *)(this + 0xe8) + 0x4c);
  iVar3 = *(int *)(param_1 + 0x10) - *(int *)(*(long *)(this + 0xe8) + 0x48);
  uVar6 = WidgetManager::GetWidgetFlags(*(WidgetManager **)(this + 0x18));
  if (*(long *)(this + 0xf0) == 0) {
    this_00 = *(WidgetContainer **)(this + 0xe8);
    *(uint *)(this_00 + 0x60) = *(uint *)(this_00 + 0x60) & 0xffffffef;
    lVar7 = WidgetContainer::GetWidgetAtHelper
                      (this_00,iVar3,iVar2,uVar6 | 0x10,(bool *)&local_10,&local_20,&local_1c);
    *(uint *)(*(long *)(this + 0xe8) + 0x60) = *(uint *)(*(long *)(this + 0xe8) + 0x60) | 0x10;
  }
  else {
    (**(code **)(**(long **)(this + 0xe8) + 0xd0))(&local_18,*(long **)(this + 0xe8));
    (**(code **)(**(long **)(this + 0xf0) + 0xd0))(&local_10,*(long **)(this + 0xf0));
    local_1c = (*(int *)(param_1 + 0x14) + local_14) - local_c;
    local_20 = (*(int *)(param_1 + 0x10) + local_18) - local_10;
    lVar7 = *(long *)(this + 0xf0);
  }
  if ((lVar7 == 0) || (iVar4 = local_1c, iVar5 = local_20, *(char *)(lVar7 + 0x6e) != '\0')) {
    lVar7 = *(long *)(this + 0xe8);
    iVar4 = iVar2;
    iVar5 = iVar3;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_2 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_2 + 0x10) = iVar5;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + (iVar5 - iVar2);
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + (iVar4 - iVar3);
  *(int *)(param_2 + 0x14) = iVar4;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}


/* Sexy::ScrollWidget::GetIsTrackingTouch() */

ScrollWidget __thiscall Sexy::ScrollWidget::GetIsTrackingTouch(ScrollWidget *this)

{
  return this[0x1b1];
}


/* Sexy::ScrollWidget::CancelCurrentScroll() */

void __thiscall Sexy::ScrollWidget::CancelCurrentScroll(ScrollWidget *this)

{
  if (*(int *)(this + 0x188) != 0) {
    this[0x18c] = (ScrollWidget)0x1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall Sexy::ScrollWidget::TouchBegan(ScrollWidget *this,Touch *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0xe8) != 0) && (*(int *)(this + 0x188) == 0)) {
    DVec2::DVec2((DVec2 *)local_40,0.0,0.0);
    this[0x1d0] = (ScrollWidget)0x0;
    *(undefined8 *)(this + 0x170) = local_40[0];
    if (this[0x1b0] != (ScrollWidget)0x0) {
      plVar2 = *(long **)(this + 0xe0);
      this[0x1d0] = (ScrollWidget)0x1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,this);
      }
      if ((this[0x18e] != (ScrollWidget)0x0) &&
         (*(PageControl **)(this + 0xf8) != (PageControl *)0x0)) {
        PageControl::SetCurrentPage(*(PageControl **)(this + 0xf8),*(int *)(this + 0x1a8));
      }
    }
    DVec2::DVec2((DVec2 *)local_40,(float)*(int *)(param_1 + 0x10),(float)*(int *)(param_1 + 0x14));
    *(undefined8 *)(this + 0x178) = local_40[0];
    DVec2::DVec2((DVec2 *)local_40,(float)*(int *)(*(long *)(this + 0xe8) + 0x48),
                 (float)*(int *)(*(long *)(this + 0xe8) + 0x4c));
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(int *)(this + 0x188) = (int)*(undefined8 *)param_1;
    *(undefined8 *)(this + 0x180) = local_40[0];
    *(undefined8 *)(this + 0x168) = local_40[0];
    this[0x1b1] = (ScrollWidget)0x0;
    this[0x1b0] = (ScrollWidget)0x0;
    this[0x18c] = (ScrollWidget)0x0;
    *(undefined8 *)(this + 0x1b8) = uVar4;
    Touch::Touch((Touch *)local_40);
    plVar2 = (long *)GetClientWidgetAt(this,param_1,(Touch *)local_40);
    lVar3 = *plVar2;
    *(long **)(this + 0xf0) = plVar2;
    cVar1 = (**(code **)(lVar3 + 0x1b8))();
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this + 0x18) + 0x98))
                (*(long **)(this + 0x18),*(undefined8 *)(this + 0xf0));
    }
    plVar2 = *(long **)(this + 0xf0);
    *(undefined1 *)(plVar2 + 0xe) = 1;
    *(undefined1 *)((long)plVar2 + 0x71) = 1;
    (**(code **)(*plVar2 + 0x250))(plVar2,(DVec2 *)local_40);
    if (this[0x1f8] != (ScrollWidget)0x0) {
      this[0x1f9] = (ScrollWidget)0x0;
    }
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::CircleTouchMotion(Sexy::FPoint) */

void __thiscall Sexy::ScrollWidget::CircleTouchMotion(ScrollWidget *this,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x208] != (ScrollWidget)0x0) {
    iVar1 = *(int *)(this + 0x20c);
    fVar3 = *(float *)(this + 0x168);
    fVar2 = (float)((iVar1 * 3) / 10);
    if ((fVar2 + *(float *)(this + 0x1d4) <= fVar3) || (0.0 <= *param_2)) {
      if ((*(float *)(this + 0x1dc) - fVar2 < fVar3) && (0.0 < *param_2)) {
        *(float *)(this + 0x168) = fVar3 - (float)iVar1;
        DVec2::DVec2((DVec2 *)&local_10,*(float *)(this + 0x180) - (float)iVar1,
                     *(float *)(this + 0x184));
        *(undefined8 *)(this + 0x180) = local_10;
      }
    }
    else {
      *(float *)(this + 0x168) = (float)iVar1 + fVar3;
      DVec2::DVec2((DVec2 *)&local_10,(float)iVar1 + *(float *)(this + 0x180),
                   *(float *)(this + 0x184));
      *(undefined8 *)(this + 0x180) = local_10;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::CircleSetScrollOffset(Sexy::FPoint, bool) */

void __thiscall
Sexy::ScrollWidget::CircleSetScrollOffset(ScrollWidget *this,float *param_2,char param_3)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 != '\0') {
    *(undefined8 *)(this + 0x160) = *(undefined8 *)param_2;
    this[0x1b0] = (ScrollWidget)0x1;
    if ((*(long *)(this + 0xe8) != 0) && (this[0x208] != (ScrollWidget)0x0)) {
      iVar1 = *(int *)(this + 0x20c);
      fVar6 = *(float *)(this + 0x160);
      fVar3 = (float)((iVar1 * 3) / 10);
      if ((fVar3 + *(float *)(this + 0x1d4) <= fVar6) || (*(float *)(this + 0x168) <= *param_2)) {
        if ((fVar6 <= *(float *)(this + 0x1dc) - fVar3) || (*param_2 <= *(float *)(this + 0x168)))
        goto LAB_052fbfbc;
        fVar3 = (float)iVar1;
        fVar4 = *(float *)(this + 0x184);
        fVar6 = fVar6 - fVar3;
        fVar5 = *(float *)(this + 0x168) - fVar3;
        fVar3 = *(float *)(this + 0x180) - fVar3;
      }
      else {
        fVar3 = (float)iVar1;
        fVar4 = *(float *)(this + 0x184);
        fVar6 = fVar3 + fVar6;
        fVar5 = fVar3 + *(float *)(this + 0x168);
        fVar3 = fVar3 + *(float *)(this + 0x180);
      }
      *(float *)(this + 0x160) = fVar6;
      *(float *)(this + 0x168) = fVar5;
      DVec2::DVec2((DVec2 *)&local_10,fVar3,fVar4);
      *(undefined8 *)(this + 0x180) = local_10;
      (**(code **)(**(long **)(this + 0xe8) + 0x1a8))
                (*(long **)(this + 0xe8),(int)*(float *)(this + 0x168),(int)*(float *)(this + 0x16c)
                );
    }
    goto LAB_052fbfbc;
  }
  *(undefined8 *)(this + 0x168) = *(undefined8 *)param_2;
  DVec2::DVec2((DVec2 *)&local_10,0.0,0.0);
  plVar2 = *(long **)(this + 0xe8);
  *(undefined8 *)(this + 0x170) = local_10;
  if (plVar2 == (long *)0x0) goto LAB_052fbfbc;
  if (this[0x208] == (ScrollWidget)0x0) {
LAB_052fc198:
    fVar6 = *(float *)(this + 0x168);
  }
  else {
    iVar1 = *(int *)(this + 0x20c);
    fVar6 = *(float *)(this + 0x168);
    fVar3 = (float)((iVar1 * 3) / 10);
    if (fVar6 < fVar3 + *(float *)(this + 0x1d4)) {
      *(float *)(this + 0x168) = (float)iVar1 + fVar6;
      DVec2::DVec2((DVec2 *)&local_10,(float)iVar1 + *(float *)(this + 0x180),
                   *(float *)(this + 0x184));
      *(undefined8 *)(this + 0x180) = local_10;
      plVar2 = *(long **)(this + 0xe8);
      goto LAB_052fc198;
    }
    if (*(float *)(this + 0x1dc) - fVar3 < fVar6) {
      *(float *)(this + 0x168) = fVar6 - (float)iVar1;
      DVec2::DVec2((DVec2 *)&local_10,*(float *)(this + 0x180) - (float)iVar1,
                   *(float *)(this + 0x184));
      fVar6 = *(float *)(this + 0x168);
      plVar2 = *(long **)(this + 0xe8);
      *(undefined8 *)(this + 0x180) = local_10;
    }
  }
  (**(code **)(*plVar2 + 0x1a8))(plVar2,(int)fVar6,(int)*(float *)(this + 0x16c));
LAB_052fbfbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::GetScrollMin() const */

FPoint * Sexy::ScrollWidget::GetScrollMin(void)

{
  long in_x0;
  FPoint *in_x8;
  
  FPoint::FPoint(in_x8,(TPoint *)(in_x0 + 0x1d4));
  return in_x8;
}


/* Sexy::ScrollWidget::GetScrollMax() const */

FPoint * Sexy::ScrollWidget::GetScrollMax(void)

{
  long in_x0;
  FPoint *in_x8;
  
  FPoint::FPoint(in_x8,(TPoint *)(in_x0 + 0x1dc));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::SetScrollOffset(Sexy::FPoint, bool) */

void __thiscall Sexy::ScrollWidget::SetScrollOffset(ScrollWidget *this,TPoint *param_2,char param_3)

{
  long *plVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    *(undefined8 *)(this + 0x168) = *(undefined8 *)param_2;
    DVec2::DVec2((DVec2 *)&local_10,0.0,0.0);
    plVar1 = *(long **)(this + 0xe8);
    *(undefined8 *)(this + 0x170) = local_10;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1a8))
                (plVar1,(int)*(float *)(this + 0x168),(int)*(float *)(this + 0x16c));
    }
  }
  else {
    *(undefined8 *)(this + 0x160) = *(undefined8 *)param_2;
    this[0x1b0] = (ScrollWidget)0x1;
  }
  FPoint::FPoint((FPoint *)&local_10,param_2);
  CircleSetScrollOffset(this,(FPoint *)&local_10,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::ScrollToMin(bool) */

void __thiscall Sexy::ScrollWidget::ScrollToMin(ScrollWidget *this,bool param_1)

{
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FPoint::FPoint(aFStack_10,(TPoint *)(this + 0x1dc));
  SetScrollOffset(this,aFStack_10,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::GetScrollOffset() const */

FPoint * Sexy::ScrollWidget::GetScrollOffset(void)

{
  long in_x0;
  FPoint *in_x8;
  
  FPoint::FPoint(in_x8,(TPoint *)(in_x0 + 0x168));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::ScrollToPoint(Sexy::Point const&, bool) */

void __thiscall Sexy::ScrollWidget::ScrollToPoint(ScrollWidget *this,Point *param_1,bool param_2)

{
  float local_18;
  float local_14;
  FPoint aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x70] == (ScrollWidget)0x0) {
    PieceConfig::PieceConfig((PieceConfig *)&local_18);
    local_18 = (float)-*(int *)param_1;
    local_14 = (float)-*(int *)(param_1 + 4);
    FPoint::FPoint(aFStack_10,(TPoint *)&local_18);
    SetScrollOffset(this,aFStack_10,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::ScrollRectIntoView(Sexy::TRect<int> const&, bool) */

void __thiscall
Sexy::ScrollWidget::ScrollRectIntoView(ScrollWidget *this,TRect *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x70] == (ScrollWidget)0x0) {
    iVar1 = *(int *)param_1;
    iVar2 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    local_18 = *(float *)(this + 0x1d4);
    local_1c = 0.0;
    pfVar5 = eastl::min_alt<float>(&local_1c,&local_18);
    local_10[0] = (float)-iVar1;
    pfVar5 = eastl::max_alt<float>(pfVar5,local_10);
    local_18 = *(float *)(this + 0x1d8);
    local_28 = *pfVar5;
    local_1c = 0.0;
    pfVar5 = eastl::min_alt<float>(&local_1c,&local_18);
    local_10[0] = (float)-iVar2;
    pfVar5 = eastl::max_alt<float>(pfVar5,local_10);
    local_24 = *pfVar5;
    local_18 = *(float *)(this + 0x1dc);
    local_10[0] = (float)*(int *)(this + 0x50) - (float)(iVar1 + iVar3);
    pfVar5 = eastl::min_alt<float>(&local_18,local_10);
    local_20 = *pfVar5;
    local_18 = *(float *)(this + 0x1e0);
    local_10[0] = (float)*(int *)(this + 0x54) - (float)(iVar2 + iVar4);
    pfVar5 = eastl::min_alt<float>(&local_18,local_10);
    local_1c = *pfVar5;
    PieceConfig::PieceConfig((PieceConfig *)&local_18);
    local_10[0] = *(float *)(this + 0x168);
    pfVar5 = eastl::max_alt<float>(&local_28,local_10);
    pfVar5 = eastl::min_alt<float>(&local_20,pfVar5);
    local_10[0] = *(float *)(this + 0x16c);
    local_18 = *pfVar5;
    pfVar5 = eastl::max_alt<float>(&local_24,local_10);
    pfVar5 = eastl::min_alt<float>(&local_1c,pfVar5);
    local_14 = *pfVar5;
    FPoint::FPoint((FPoint *)local_10,(TPoint *)&local_18);
    SetScrollOffset(this,(FPoint *)local_10,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::FlashIndicators() */

void __thiscall Sexy::ScrollWidget::FlashIndicators(ScrollWidget *this)

{
  int *piVar1;
  
  piVar1 = eastl::max_alt<int>((int *)(this + 0x1a0),&DAT_06bc4290);
  *(int *)(this + 0x1a0) = *piVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::SetPage(int, int, bool) */

void __thiscall Sexy::ScrollWidget::SetPage(ScrollWidget *this,int param_1,int param_2,bool param_3)

{
  int *piVar1;
  int local_28;
  int local_24 [3];
  float local_18;
  float local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_2;
  local_24[0] = param_1;
  if (this[0x18e] != (ScrollWidget)0x0) {
    local_18 = (float)(*(int *)(this + 0x1f0) + -1);
    local_10[0] = 0;
    piVar1 = eastl::min_alt<int>(local_24,(int *)&local_18);
    piVar1 = eastl::max_alt<int>((int *)local_10,piVar1);
    *(int *)(this + 0x1a8) = *piVar1;
    local_18 = (float)(*(int *)(this + 500) + -1);
    local_10[0] = 0;
    piVar1 = eastl::min_alt<int>(&local_28,(int *)&local_18);
    piVar1 = eastl::max_alt<int>((int *)local_10,piVar1);
    *(int *)(this + 0x1ac) = *piVar1;
    PieceConfig::PieceConfig((PieceConfig *)&local_18);
    local_18 = (float)*(int *)(this + 0x150) -
               *(float *)(this + 0x1e4) * (float)*(int *)(this + 0x1a8);
    local_14 = (float)*(int *)(this + 0x154) -
               *(float *)(this + 0x1e8) * (float)*(int *)(this + 0x1ac);
    FPoint::FPoint((FPoint *)local_10,(TPoint *)&local_18);
    SetScrollOffset(this,(FPoint *)local_10,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::SetPageHorizontal(int, bool) */

void __thiscall Sexy::ScrollWidget::SetPageHorizontal(ScrollWidget *this,int param_1,bool param_2)

{
  SetPage(this,param_1,*(int *)(this + 0x1ac),param_2);
  return;
}


/* Sexy::ScrollWidget::SetPageVertical(int, bool) */

void __thiscall Sexy::ScrollWidget::SetPageVertical(ScrollWidget *this,int param_1,bool param_2)

{
  SetPage(this,*(int *)(this + 0x1a8),param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::SnapToPage() */

void __thiscall Sexy::ScrollWidget::SnapToPage(ScrollWidget *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PieceConfig::PieceConfig((PieceConfig *)&local_20);
  local_20 = (float)*(int *)(this + 0x150) + *(float *)(this + 0x1e4) * 0.5;
  local_1c = (float)*(int *)(this + 0x154) + *(float *)(this + 0x1e8) * 0.5;
  TPoint<float>::operator-((TPoint<float> *)&local_20,(TPoint *)(this + 0x168));
  FPoint::FPoint((FPoint *)&local_18,(TPoint *)&local_10);
  local_10 = 0.0;
  local_24 = *(int *)(this + 0x1f0) + -1;
  local_2c = (int)(local_18 / *(float *)(this + 0x1e4));
  local_28 = (int)(local_14 / *(float *)(this + 0x1e8));
  piVar1 = eastl::min_alt<int>(&local_2c,&local_24);
  piVar1 = eastl::max_alt<int>((int *)&local_10,piVar1);
  iVar3 = *piVar1;
  local_24 = *(int *)(this + 500) + -1;
  local_10 = 0.0;
  local_2c = iVar3;
  piVar1 = eastl::min_alt<int>(&local_28,&local_24);
  piVar1 = eastl::max_alt<int>((int *)&local_10,piVar1);
  iVar2 = *piVar1;
  local_28 = iVar2;
  PieceConfig::PieceConfig((PieceConfig *)&local_10);
  fVar4 = *(float *)(this + 0x1c0);
  local_10 = (float)*(int *)(this + 0x150) - *(float *)(this + 0x1e4) * (float)iVar3;
  local_c = (float)*(int *)(this + 0x154) - *(float *)(this + 0x1e8) * (float)iVar2;
  if ((*(float *)(this + 0x170) <= fVar4 * 60.0) || (*(float *)(this + 0x168) <= local_10)) {
    if ((*(float *)(this + 0x170) < -(fVar4 * 60.0)) && (*(float *)(this + 0x168) < local_10)) {
      iVar3 = iVar3 + 1;
      local_2c = iVar3;
    }
  }
  else {
    iVar3 = iVar3 + -1;
    local_2c = iVar3;
  }
  if ((*(float *)(this + 0x174) <= fVar4 * 60.0) || (*(float *)(this + 0x16c) <= local_c)) {
    if ((*(float *)(this + 0x174) < -(fVar4 * 60.0)) && (*(float *)(this + 0x16c) < local_c)) {
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = iVar2 + -1;
  }
  SetPage(this,iVar3,iVar2,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::TouchMotion(Sexy::Touch const&) */

void __thiscall Sexy::ScrollWidget::TouchMotion(ScrollWidget *this,Touch *param_1)

{
  uint uVar1;
  long *plVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  undefined8 local_18;
  double local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec2::DVec2((DVec2 *)&local_18,(float)*(int *)(param_1 + 0x10),(float)*(int *)(param_1 + 0x14));
  TPoint<float>::operator-((TPoint<float> *)&local_18,(TPoint *)(this + 0x178));
  FPoint::FPoint((FPoint *)&local_28,(TPoint *)&local_10);
  FPoint::FPoint((FPoint *)&local_20,(TPoint *)(this + 0x168));
  uVar1 = *(uint *)(this + 0x1ec);
  if ((uVar1 & 1) == 0) {
    dVar7 = *(double *)(param_1 + 0x28);
  }
  else {
    fVar4 = *(float *)(this + 0x1d4);
    local_20 = local_28 + *(float *)(this + 0x180);
    fVar5 = *(float *)(this + 0x1dc);
    if (fVar4 <= local_20) {
      if (local_20 <= fVar5) {
        dVar7 = *(double *)(param_1 + 0x28);
        dVar6 = dVar7 - *(double *)(this + 0x1b8);
        if (0.0 < dVar6) {
          fVar4 = local_20 - *(float *)(this + 0x168);
          local_10 = dVar6 * 9.99999985098839;
          local_18 = 0x3ff0000000000000;
          pdVar3 = std::min<double>((double *)&local_18,&local_10);
          *(float *)(this + 0x170) =
               (float)((1.0 - *pdVar3) * (double)*(float *)(this + 0x170) +
                      ((double)fVar4 / dVar6) * *pdVar3);
        }
      }
      else {
        if (this[0x18d] != (ScrollWidget)0x0) {
          fVar5 = local_20 + (fVar5 - local_20) * 0.5;
        }
        dVar7 = *(double *)(param_1 + 0x28);
        *(undefined4 *)(this + 0x170) = 0;
        local_20 = fVar5;
      }
    }
    else {
      if (this[0x18d] != (ScrollWidget)0x0) {
        fVar4 = local_20 + (fVar4 - local_20) * 0.5;
      }
      dVar7 = *(double *)(param_1 + 0x28);
      *(undefined4 *)(this + 0x170) = 0;
      local_20 = fVar4;
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    fVar4 = *(float *)(this + 0x1d8);
    fStack_1c = local_24 + *(float *)(this + 0x184);
    fVar5 = *(float *)(this + 0x1e0);
    if (fVar4 <= fStack_1c) {
      if (fStack_1c <= fVar5) {
        dVar6 = *(double *)(this + 0x1b8);
        fVar4 = fStack_1c - *(float *)(this + 0x16c);
        local_10 = (dVar7 - dVar6) * 9.99999985098839;
        local_18 = 0x3ff0000000000000;
        pdVar3 = std::min<double>((double *)&local_18,&local_10);
        *(float *)(this + 0x174) =
             (float)((1.0 - *pdVar3) * (double)*(float *)(this + 0x174) +
                    ((double)fVar4 / (dVar7 - dVar6)) * *pdVar3);
      }
      else {
        if (this[0x18d] != (ScrollWidget)0x0) {
          fVar5 = fStack_1c + (fVar5 - fStack_1c) * 0.5;
        }
        *(undefined4 *)(this + 0x174) = 0;
        fStack_1c = fVar5;
      }
    }
    else {
      if (this[0x18d] != (ScrollWidget)0x0) {
        fVar4 = fStack_1c + (fVar4 - fStack_1c) * 0.5;
      }
      *(undefined4 *)(this + 0x174) = 0;
      fStack_1c = fVar4;
    }
  }
  *(ulong *)(this + 0x168) = CONCAT44(fStack_1c,local_20);
  *(double *)(this + 0x1b8) = dVar7;
  FPoint::FPoint((FPoint *)&local_10,(TPoint *)&local_28);
  CircleTouchMotion(this,(FPoint *)&local_10);
  plVar2 = *(long **)(this + 0xe8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1a8))
              (plVar2,(int)*(float *)(this + 0x168),(int)*(float *)(this + 0x16c));
  }
  plVar2 = *(long **)(this + 0xe0);
  if ((plVar2 != (long *)0x0) &&
     (*(code **)(*plVar2 + 0x20) != ScrollWidgetListener::ScrollTouchMotion)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall Sexy::ScrollWidget::TouchEnded(ScrollWidget *this,Touch *param_1)

{
  long *plVar1;
  code *pcVar2;
  int local_58;
  int local_54;
  TPoint<int> aTStack_50 [8];
  Point aPStack_48 [8];
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x188) != (int)*(undefined8 *)param_1) goto LAB_052fd048;
  if (this[0x1b1] == (ScrollWidget)0x0) {
    if (*(long *)(this + 0xf0) != 0) {
      (**(code **)(*(long *)this + 0xd0))(aTStack_50);
      (**(code **)(**(long **)(this + 0xf0) + 0xd0))(aPStack_48,*(long **)(this + 0xf0));
      TPoint<int>::operator-(aTStack_50,(TPoint *)aPStack_48);
      Point::Point((Point *)&local_58,(TPoint *)aTStack_40);
      Point::Point((Point *)aTStack_50,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
      TPoint<int>::operator+(aTStack_50,(TPoint *)&local_58);
      Point::Point(aPStack_48,(TPoint *)aTStack_40);
      Touch::Touch(aTStack_40,param_1);
      local_30 = local_30 + local_58;
      local_2c = local_2c + local_54;
      local_28 = local_58 + local_28;
      local_24 = local_54 + local_24;
      (**(code **)(**(long **)(this + 0xf0) + 0x260))(*(long **)(this + 0xf0),aTStack_40);
      *(undefined1 *)(*(long *)(this + 0xf0) + 0x70) = 0;
      *(undefined8 *)(this + 0xf0) = 0;
    }
LAB_052fd16c:
    if (this[0x1d0] != (ScrollWidget)0x0) {
      this[0x1d0] = (ScrollWidget)0x0;
      pcVar2 = *(code **)(**(long **)(this + 0x200) + 0x10);
      if (pcVar2 != DefaultScrollSnapper::DoSnap) {
        (*pcVar2)(*(long **)(this + 0x200),this);
      }
    }
  }
  else {
    TouchMotion(this,param_1);
    this[0x1b1] = (ScrollWidget)0x0;
    this[0x1d0] = (ScrollWidget)0x0;
    pcVar2 = *(code **)(**(long **)(this + 0x200) + 0x10);
    if (pcVar2 != DefaultScrollSnapper::DoSnap) {
      (*pcVar2)(*(long **)(this + 0x200),this);
      if (this[0x18e] != (ScrollWidget)0x0) goto LAB_052fd1e4;
      goto LAB_052fd16c;
    }
    if (this[0x18e] != (ScrollWidget)0x0) {
LAB_052fd1e4:
      SnapToPage(this);
      goto LAB_052fd16c;
    }
  }
  plVar1 = *(long **)(this + 0xe0);
  *(undefined4 *)(this + 0x188) = 0;
  if ((plVar1 != (long *)0x0) &&
     (*(code **)(*plVar1 + 0x28) != ScrollWidgetListener::ScrollTouchEnd)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  (**(code **)(*(long *)this + 0xd8))(this);
LAB_052fd048:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::DrawProxyWidget(Sexy::Graphics*, Sexy::ProxyWidget*) */

void Sexy::ScrollWidget::DrawProxyWidget(Graphics *param_1,ProxyWidget *param_2)

{
  int iVar1;
  int iVar2;
  Graphics GVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  float fVar12;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulong local_30;
  Insets aIStack_28 [12];
  int local_1c;
  undefined8 local_18;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_28,0xff,0xff,0xff,(int)(*(float *)(param_1 + 0x1a4) * 255.0));
  if (*(long *)(param_1 + 0x110) == 0) {
LAB_052fd5b0:
    if ((*(LotteryResultProgressBar **)(param_1 + 0x108) != (LotteryResultProgressBar *)0x0) &&
       (local_1c != 0)) {
      iVar6 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(param_1 + 0x108));
      local_44 = iVar6;
      iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(param_1 + 0x108));
      local_40 = iVar7;
      Graphics::SetColor((Graphics *)param_2,(Color *)aIStack_28);
      Graphics::SetColorizeImages((Graphics *)param_2,true);
      uVar8 = *(uint *)(param_1 + 0x1ec);
      if ((uVar8 & 1) != 0) {
        iVar1 = *(int *)(param_1 + 0x50);
        iVar2 = *(int *)(*(long *)(param_1 + 0xe8) + 0x50);
        iVar9 = FUN_052fb4f8(iVar2);
        iVar4 = 0;
        if ((*(uint *)(param_1 + 0x14c) & 2) != 0) {
          iVar4 = iVar6;
        }
        iVar4 = ((iVar1 - *(int *)(param_1 + 400)) - *(int *)(param_1 + 0x198)) - iVar4;
        local_30 = local_30 & 0xffffffff00000000;
        iVar9 = (int)((float)iVar4 * ((float)iVar1 / (float)iVar9));
        local_3c = iVar4;
        local_18._0_4_ = (iVar1 - iVar2) - *(int *)(param_1 + 0x158);
        piVar10 = eastl::min_alt<int>((int *)&local_30,(int *)&local_18);
        local_30 = local_30 & 0xffffffff00000000;
        fVar12 = (float)(iVar4 - iVar9);
        local_38 = (int)(((*(float *)(param_1 + 0x168) - (float)*piVar10) /
                         ((float)*piVar10 - (float)*(int *)(param_1 + 0x150))) * fVar12 + fVar12);
        local_34 = iVar9 + local_38;
        piVar10 = eastl::max_alt<int>((int *)&local_30,&local_38);
        local_18 = CONCAT44(local_18._4_4_,iVar4 - iVar6);
        piVar10 = eastl::min_alt<int>(piVar10,(int *)&local_18);
        iVar4 = *piVar10;
        piVar10 = eastl::max_alt<int>(&local_44,&local_34);
        piVar10 = eastl::min_alt<int>(piVar10,&local_3c);
        iVar1 = *piVar10;
        Insets::Insets((Insets *)&local_18);
        local_18 = CONCAT44((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x19c)) - iVar7,
                            iVar4 + *(int *)(param_1 + 400));
        local_10 = iVar1 - iVar4;
        local_c = iVar7;
        DrawHorizontalStretchableImage
                  ((Graphics *)param_2,*(Image **)(param_1 + 0x108),(TRect *)&local_18);
        uVar8 = *(uint *)(param_1 + 0x1ec);
      }
      if ((uVar8 >> 1 & 1) != 0) {
        iVar1 = *(int *)(param_1 + 0x54);
        iVar2 = *(int *)(*(long *)(param_1 + 0xe8) + 0x54);
        iVar9 = FUN_052fb4fc(iVar2);
        iVar4 = 0;
        if ((*(uint *)(param_1 + 0x14c) & 1) != 0) {
          iVar4 = iVar7;
        }
        iVar4 = ((iVar1 - *(int *)(param_1 + 0x194)) - *(int *)(param_1 + 0x19c)) - iVar4;
        local_30 = local_30 & 0xffffffff00000000;
        iVar9 = (int)((float)iVar4 * ((float)iVar1 / (float)iVar9));
        local_3c = iVar4;
        local_18._0_4_ = (iVar1 - iVar2) - *(int *)(param_1 + 0x15c);
        piVar10 = eastl::min_alt<int>((int *)&local_30,(int *)&local_18);
        local_30 = local_30 & 0xffffffff00000000;
        fVar12 = (float)(iVar4 - iVar9);
        local_38 = (int)(((*(float *)(param_1 + 0x16c) - (float)*piVar10) /
                         ((float)*piVar10 - (float)*(int *)(param_1 + 0x154))) * fVar12 + fVar12);
        local_34 = iVar9 + local_38;
        piVar10 = eastl::max_alt<int>((int *)&local_30,&local_38);
        local_18 = CONCAT44(local_18._4_4_,iVar4 - iVar7);
        piVar10 = eastl::min_alt<int>(piVar10,(int *)&local_18);
        iVar7 = *piVar10;
        piVar10 = eastl::max_alt<int>(&local_40,&local_34);
        piVar10 = eastl::min_alt<int>(piVar10,&local_3c);
        iVar4 = *piVar10;
        Insets::Insets((Insets *)&local_18);
        local_18 = CONCAT44(iVar7 + *(int *)(param_1 + 0x194),
                            (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x198)) - iVar6);
        local_10 = iVar6;
        local_c = iVar4 - iVar7;
        DrawVerticalStretchableImage
                  ((Graphics *)param_2,*(Image **)(param_1 + 0x108),(TRect *)&local_18);
        GVar3 = param_1[0x140];
        goto joined_r0x052fd888;
      }
    }
  }
  else if (local_1c != 0) {
    iVar6 = LotteryResultProgressBar::GetCurrentLevel
                      (*(LotteryResultProgressBar **)(param_1 + 0x108));
    local_44 = iVar6;
    iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(param_1 + 0x108));
    local_40 = iVar7;
    Graphics::SetColor((Graphics *)param_2,(Color *)aIStack_28);
    Graphics::SetColorizeImages((Graphics *)param_2,true);
    uVar8 = *(uint *)(param_1 + 0x1ec);
    if ((uVar8 & 1) != 0) {
      iVar4 = 0;
      if ((*(uint *)(param_1 + 0x14c) & 2) != 0) {
        iVar4 = iVar6;
      }
      iVar4 = ((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 400)) - *(int *)(param_1 + 0x198)) -
              iVar4;
      local_30 = local_30 & 0xffffffff00000000;
      local_3c = iVar4;
      local_18._0_4_ =
           (*(int *)(param_1 + 0x50) - *(int *)(*(long *)(param_1 + 0xe8) + 0x50)) -
           *(int *)(param_1 + 0x158);
      piVar10 = eastl::min_alt<int>((int *)&local_30,(int *)&local_18);
      local_30 = local_30 & 0xffffffff00000000;
      fVar12 = (float)(iVar4 - (int)(float)iVar4);
      local_38 = (int)(((*(float *)(param_1 + 0x168) - (float)*piVar10) /
                       ((float)*piVar10 - (float)*(int *)(param_1 + 0x150))) * fVar12 + fVar12);
      local_34 = (int)(float)iVar4 + local_38;
      piVar10 = eastl::max_alt<int>((int *)&local_30,&local_38);
      local_18 = CONCAT44(local_18._4_4_,iVar4 - iVar6);
      piVar10 = eastl::min_alt<int>(piVar10,(int *)&local_18);
      iVar4 = *piVar10;
      piVar10 = eastl::max_alt<int>(&local_44,&local_34);
      piVar10 = eastl::min_alt<int>(piVar10,&local_3c);
      iVar1 = *piVar10;
      Insets::Insets((Insets *)&local_18);
      local_18 = CONCAT44((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x19c)) - iVar7,
                          iVar4 + *(int *)(param_1 + 400));
      local_10 = iVar1 - iVar4;
      local_c = iVar7;
      DrawHorizontalStretchableImage
                ((Graphics *)param_2,*(Image **)(param_1 + 0x110),(TRect *)&local_18);
      uVar8 = *(uint *)(param_1 + 0x1ec);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      iVar4 = 0;
      if ((*(uint *)(param_1 + 0x14c) & 1) != 0) {
        iVar4 = iVar7;
      }
      iVar4 = ((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x194)) - *(int *)(param_1 + 0x19c)) -
              iVar4;
      local_30 = local_30 & 0xffffffff00000000;
      local_3c = iVar4;
      local_18._0_4_ =
           (*(int *)(param_1 + 0x54) - *(int *)(*(long *)(param_1 + 0xe8) + 0x54)) -
           *(int *)(param_1 + 0x15c);
      piVar10 = eastl::min_alt<int>((int *)&local_30,(int *)&local_18);
      local_30 = local_30 & 0xffffffff00000000;
      fVar12 = (float)(iVar4 - (int)(float)iVar4);
      local_38 = (int)(((*(float *)(param_1 + 0x16c) - (float)*piVar10) /
                       ((float)*piVar10 - (float)*(int *)(param_1 + 0x154))) * fVar12 + fVar12);
      local_34 = (int)(float)iVar4 + local_38;
      piVar10 = eastl::max_alt<int>((int *)&local_30,&local_38);
      local_18 = CONCAT44(local_18._4_4_,iVar4 - iVar7);
      piVar10 = eastl::min_alt<int>(piVar10,(int *)&local_18);
      iVar7 = *piVar10;
      piVar10 = eastl::max_alt<int>(&local_40,&local_34);
      piVar10 = eastl::min_alt<int>(piVar10,&local_3c);
      iVar4 = *piVar10;
      Insets::Insets((Insets *)&local_18);
      local_18 = CONCAT44(iVar7 + *(int *)(param_1 + 0x194),
                          (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x198)) - iVar6);
      local_10 = iVar6;
      local_c = iVar4 - iVar7;
      DrawVerticalStretchableImage
                ((Graphics *)param_2,*(Image **)(param_1 + 0x110),(TRect *)&local_18);
    }
    goto LAB_052fd5b0;
  }
  GVar3 = param_1[0x140];
joined_r0x052fd888:
  if (GVar3 != (Graphics)0x0) {
    Graphics::SetColorizeImages((Graphics *)param_2,false);
    local_30 = 0;
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x128));
    while( true ) {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x128));
      bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_18);
      if (!bVar5) break;
      puVar11 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      Graphics::DrawImage((Graphics *)param_2,(Image *)*puVar11,*(int *)(puVar11 + 1),
                          *(int *)((long)puVar11 + 0xc));
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::ScrollWidget::DrawProxyWidget(Sexy::Graphics*, Sexy::ProxyWidget*) */

void __thiscall
Sexy::ScrollWidget::DrawProxyWidget(ScrollWidget *this,Graphics *param_1,ProxyWidget *param_2)

{
  DrawProxyWidget((Graphics *)(this + -0xd8),(ProxyWidget *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::CheckClientWidget() */

void __thiscall Sexy::ScrollWidget::CheckClientWidget(ScrollWidget *this)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_052fd914(*(undefined8 *)(*(long *)(this + 0xe8) + 8));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(*(long *)(this + 0xe8) + 8));
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) break;
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    plVar4 = (long *)*puVar3;
    if (plVar4 != (long *)0x0) {
      iVar1 = (int)plVar4[9] + *(int *)(*(long *)(this + 0xe8) + 0x48);
      if (((double)(iVar1 + (int)plVar4[10]) + (double)*(int *)(this + 0x50) * 0.5 < 0.0) ||
         ((double)*(int *)(this + 0x50) * 1.5 < (double)iVar1)) {
        if (*(char *)((long)plVar4 + 0x6c) != '\0') {
          (**(code **)(*plVar4 + 0x158))(plVar4,0);
        }
      }
      else if (*(char *)((long)plVar4 + 0x6c) == '\0') {
        (**(code **)(*plVar4 + 0x158))(plVar4,1);
      }
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
/* Sexy::ScrollWidget::TouchMoved(Sexy::Touch const&) */

void __thiscall Sexy::ScrollWidget::TouchMoved(ScrollWidget *this,Touch *param_1)

{
  ScrollWidget SVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  float local_78;
  float local_74;
  int local_70;
  int local_6c;
  Point aPStack_68 [8];
  int local_60;
  int local_5c;
  TPoint<int> aTStack_58 [8];
  DVec2 aDStack_50 [16];
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x188) != (int)*(undefined8 *)param_1) goto LAB_052fdad0;
  DVec2::DVec2(aDStack_50,(float)*(int *)(param_1 + 0x10),(float)*(int *)(param_1 + 0x14));
  TPoint<float>::operator-((TPoint<float> *)aDStack_50,(TPoint *)(this + 0x178));
  FPoint::FPoint((FPoint *)&local_78,(TPoint *)aTStack_40);
  if ((*(long *)(this + 0xe8) == 0) || (this[0x18c] != (ScrollWidget)0x0)) {
    if (this[0x1b1] != (ScrollWidget)0x0) goto LAB_052fdb7c;
LAB_052fdbd8:
    if (*(long *)(this + 0xf0) != 0) {
      (**(code **)(*(long *)this + 0xd0))(aTStack_58,this);
      (**(code **)(**(long **)(this + 0xf0) + 0xd0))(aDStack_50,*(long **)(this + 0xf0));
      TPoint<int>::operator-(aTStack_58,(TPoint *)aDStack_50);
      Point::Point((Point *)&local_70,(TPoint *)aTStack_40);
      Point::Point(aPStack_68,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
      TPoint<int>::operator+((TPoint<int> *)aPStack_68,(TPoint *)&local_70);
      Point::Point((Point *)&local_60,(TPoint *)aTStack_40);
      Point::Point((Point *)aTStack_58,local_60 + *(int *)(*(long *)(this + 0xf0) + 0x48),
                   local_5c + *(int *)(*(long *)(this + 0xf0) + 0x4c));
      (**(code **)(**(long **)(this + 0xf0) + 0x308))(aDStack_50,*(long **)(this + 0xf0));
      cVar2 = TRect<int>::Contains((TRect<int> *)aDStack_50,(TPoint *)aTStack_58);
      if (cVar2 == '\0') {
        if (*(char *)((long)*(long **)(this + 0xf0) + 0x71) != '\0') {
          (**(code **)(**(long **)(this + 0xf0) + 0x200))();
          *(undefined1 *)(*(long *)(this + 0xf0) + 0x71) = 0;
        }
      }
      else {
        plVar3 = *(long **)(this + 0xf0);
        if (*(char *)((long)plVar3 + 0x71) == '\0') {
          *(undefined1 *)((long)plVar3 + 0x71) = 1;
          (**(code **)(*plVar3 + 0x1f8))(plVar3);
        }
      }
      Touch::Touch(aTStack_40,param_1);
      local_30 = local_30 + local_70;
      local_2c = local_2c + local_6c;
      local_28 = local_70 + local_28;
      local_24 = local_6c + local_24;
      (**(code **)(**(long **)(this + 0xf0) + 600))(*(long **)(this + 0xf0),aTStack_40);
    }
  }
  else {
    if (this[0x1b1] == (ScrollWidget)0x0) {
      if ((((*(uint *)(this + 0x1ec) & 1) == 0) ||
          (ABS(local_78) <= *(float *)(this + 0x1c8) * *(float *)(this + 0x1c0))) &&
         (((*(uint *)(this + 0x1ec) >> 1 & 1) == 0 ||
          (ABS(local_74) <= *(float *)(this + 0x1cc) * *(float *)(this + 0x1c0)))))
      goto LAB_052fdbd8;
      this[0x1b1] = (ScrollWidget)0x1;
    }
    if (*(long **)(this + 0xf0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xf0) + 0x268))();
      SVar1 = this[0x1b1];
      *(undefined1 *)(*(long *)(this + 0xf0) + 0x70) = 0;
      *(undefined8 *)(this + 0xf0) = 0;
      if (SVar1 == (ScrollWidget)0x0) goto LAB_052fdbbc;
    }
LAB_052fdb7c:
    pcVar4 = *(code **)(**(long **)(this + 0x200) + 0x18);
    if (pcVar4 != DefaultScrollSnapper::SelectSnapTarget) {
      (*pcVar4)(*(long **)(this + 0x200),this);
    }
    TouchMotion(this,param_1);
    if (this[0x1f8] != (ScrollWidget)0x0) {
      CheckClientWidget(this);
    }
  }
LAB_052fdbbc:
  (**(code **)(*(long *)this + 0xd8))(this);
LAB_052fdad0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::~ScrollWidget() */

void __thiscall Sexy::ScrollWidget::~ScrollWidget(ScrollWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a358e0;
  *(undefined **)(this + 0xd8) = &DAT_06a35c08;
  WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<Sexy::ScrollWidget::Overlay,std::allocator<Sexy::ScrollWidget::Overlay>>::~vector
            ((vector<Sexy::ScrollWidget::Overlay,std::allocator<Sexy::ScrollWidget::Overlay>> *)
             (this + 0x128));
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::ScrollWidget::~ScrollWidget() */

void __thiscall Sexy::ScrollWidget::~ScrollWidget(ScrollWidget *this)

{
  ~ScrollWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::AddOverlayImage(Sexy::Image*, Sexy::Point const&) */

void __thiscall
Sexy::ScrollWidget::AddOverlayImage(ScrollWidget *this,Image *param_1,Point *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  Image *local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x128);
  local_8 = ___stack_chk_guard;
  this[0x140] = (ScrollWidget)0x1;
  local_20 = 0;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_18 = (Image *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar1) {
      TypedKey<Sexy::Point>::TypedKey((TypedKey<Sexy::Point> *)&local_18);
      local_10 = *(undefined8 *)param_2;
      local_18 = param_1;
      std::vector<Sexy::ScrollWidget::Overlay,std::allocator<Sexy::ScrollWidget::Overlay>>::
      push_back((vector<Sexy::ScrollWidget::Overlay,std::allocator<Sexy::ScrollWidget::Overlay>> *)
                this_00,(Overlay *)&local_18);
LAB_052fe214:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if ((Image *)*puVar2 == param_1) {
      puVar2[1] = *(undefined8 *)param_2;
      goto LAB_052fe214;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
  } while( true );
}


/* Sexy::ScrollWidget::Resize(int, int, int, int) */

void __thiscall
Sexy::ScrollWidget::Resize(ScrollWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  CacheDerivedValues(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::Init(Sexy::ScrollWidgetListener*) */

void __thiscall Sexy::ScrollWidget::Init(ScrollWidget *this,ScrollWidgetListener *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ProxyWidget *this_00;
  long lVar3;
  code *pcVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(ScrollWidgetListener **)(this + 0xe0) = param_1;
  *(undefined4 *)(this + 0x14c) = 2;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x144) = 1;
  *(undefined4 *)(this + 0x148) = 1;
  Insets::Insets((Insets *)&local_18,0,0,0,0);
  *(undefined8 *)(this + 0x150) = local_18;
  *(undefined8 *)(this + 0x158) = uStack_10;
  this[0x1b1] = (ScrollWidget)0x0;
  this[0x18c] = (ScrollWidget)0x0;
  this[0x1b0] = (ScrollWidget)0x0;
  this[0x18d] = (ScrollWidget)0x1;
  this[0x18e] = (ScrollWidget)0x0;
  this[0x1f8] = (ScrollWidget)0x0;
  this[0x1f9] = (ScrollWidget)0x0;
  Insets::Insets((Insets *)&local_18,0,0,0,0);
  *(undefined8 *)(this + 400) = local_18;
  *(undefined8 *)(this + 0x198) = uStack_10;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  this[0x120] = (ScrollWidget)0x0;
  this[0x140] = (ScrollWidget)0x0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1c4) = 0x3c23d70a;
  DVec2::DVec2((DVec2 *)&local_18,6.0,6.0);
  *(undefined8 *)(this + 0x1c8) = local_18;
  this[0x1d0] = (ScrollWidget)0x0;
  this[0x208] = (ScrollWidget)0x0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x1c0) = 0x3f800000;
  DVec2::DVec2((DVec2 *)&local_18,0.0,0.0);
  *(undefined8 *)(this + 0x168) = local_18;
  DVec2::DVec2((DVec2 *)&local_18,0.0,0.0);
  this[0x59] = (ScrollWidget)0x1;
  *(undefined8 *)(this + 0x170) = local_18;
  this_00 = ::operator_new(0xe0);
  ProxyWidget::ProxyWidget(this_00,(ProxyWidgetListener *)(this + 0xd8));
  lVar3 = *(long *)this_00;
  *(ProxyWidget **)(this + 0x100) = this_00;
  uVar1 = *(undefined4 *)(this + 0x50);
  pcVar4 = *(code **)(lVar3 + 0x198);
  uVar2 = *(undefined4 *)(this + 0x54);
  *(undefined4 *)(this_00 + 0x68) = 0x7fffffff;
  this_00[0x6d] = (ProxyWidget)0x0;
  (*pcVar4)(this_00,0,0,uVar1,uVar2);
  WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x100));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::ScrollWidget(Sexy::ScrollWidgetListener*) */

void __thiscall Sexy::ScrollWidget::ScrollWidget(ScrollWidget *this,ScrollWidgetListener *param_1)

{
  undefined8 uVar1;
  
  Widget::Widget((Widget *)this);
  ProxyWidgetListener::ProxyWidgetListener((ProxyWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06a358e0;
  *(undefined **)(this + 0xd8) = &DAT_06a35c08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  Insets::Insets((Insets *)(this + 0x150));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x160));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x168));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x170));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x178));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x180));
  Insets::Insets((Insets *)(this + 400));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1c8));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1d4));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1dc));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1e4));
  uVar1 = DefaultScrollSnapper::GetInstance();
  *(undefined8 *)(this + 0x200) = uVar1;
  Init(this,param_1);
  return;
}


/* Sexy::ScrollWidget::ScrollWidget() */

void __thiscall Sexy::ScrollWidget::ScrollWidget(ScrollWidget *this)

{
  undefined8 uVar1;
  
  Widget::Widget((Widget *)this);
  ProxyWidgetListener::ProxyWidgetListener((ProxyWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06a358e0;
  *(undefined **)(this + 0xd8) = &DAT_06a35c08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  Insets::Insets((Insets *)(this + 0x150));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x160));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x168));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x170));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x178));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x180));
  Insets::Insets((Insets *)(this + 400));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1c8));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1d4));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1dc));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x1e4));
  uVar1 = DefaultScrollSnapper::GetInstance();
  *(undefined8 *)(this + 0x200) = uVar1;
  Init(this,(ScrollWidgetListener *)0x0);
  return;
}


/* Sexy::ScrollWidget::StaticNew() */

ScrollWidget * Sexy::ScrollWidget::StaticNew(void)

{
  ScrollWidget *this;
  
  this = ::operator_new(0x210);
  ScrollWidget(this);
  return this;
}


/* Sexy::ScrollWidget::AddWidget(Sexy::Widget*) */

void __thiscall Sexy::ScrollWidget::AddWidget(ScrollWidget *this,Widget *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  
  if (*(long *)(this + 0xe8) != 0) {
    return;
  }
  lVar2 = *(long *)param_1;
  uVar1 = *(uint *)(param_1 + 0x60);
  fVar5 = *(float *)(this + 0x168);
  fVar4 = *(float *)(this + 0x16c);
  *(Widget **)(this + 0xe8) = param_1;
  pcVar3 = *(code **)(lVar2 + 0x1a8);
  *(uint *)(param_1 + 0x60) = uVar1 | 0x10;
  (*pcVar3)(param_1,(int)fVar5,(int)fVar4);
  WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  CacheDerivedValues(this);
  return;
}


/* Sexy::ScrollWidget::RemoveWidget(Sexy::Widget*) */

void __thiscall Sexy::ScrollWidget::RemoveWidget(ScrollWidget *this,Widget *param_1)

{
  if (*(Widget **)(this + 0xe8) != param_1) {
    WidgetContainer::RemoveWidget((WidgetContainer *)this,param_1);
    return;
  }
  *(undefined8 *)(this + 0xe8) = 0;
  WidgetContainer::RemoveWidget((WidgetContainer *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollWidget::Update() */

void __thiscall Sexy::ScrollWidget::Update(ScrollWidget *this)

{
  FPoint *this_00;
  int iVar1;
  long *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18 [2];
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((this[0x6c] == (ScrollWidget)0x0) || (this[0x6e] != (ScrollWidget)0x0)) goto LAB_052fe86c;
  if ((this[0x70] == (ScrollWidget)0x0) && (this[0x1b1] == (ScrollWidget)0x0)) {
    fVar5 = *(float *)(this + 0x1d4);
    fVar6 = *(float *)(this + 0x1d8);
    fVar7 = *(float *)(this + 0x1dc);
    fVar8 = *(float *)(this + 0x1e0);
    if (this[0x1b0] != (ScrollWidget)0x0) {
      TPoint<float>::operator-((TPoint<float> *)(this + 0x160),(TPoint *)(this + 0x168));
      FPoint::FPoint((FPoint *)&local_10,(TPoint *)local_18);
      fVar4 = (float)VectorNorm((FPoint *)&local_10);
      if (0.01 <= fVar4) {
        fVar5 = *(float *)(this + 0x160);
        fVar6 = *(float *)(this + 0x164);
        fVar7 = fVar5;
        fVar8 = fVar6;
      }
      else {
        plVar2 = *(long **)(this + 0xe0);
        *(undefined8 *)(this + 0x168) = *(undefined8 *)(this + 0x160);
        this[0x1b0] = (ScrollWidget)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,this);
        }
        if ((this[0x18e] != (ScrollWidget)0x0) &&
           (*(PageControl **)(this + 0xf8) != (PageControl *)0x0)) {
          PageControl::SetCurrentPage(*(PageControl **)(this + 0xf8),*(int *)(this + 0x1a8));
        }
      }
    }
    this_00 = (FPoint *)(this + 0x170);
    fVar4 = (float)VectorNorm(this_00);
    if (fVar4 < 0.0001) {
      DVec2::DVec2((DVec2 *)&local_10,0.0,0.0);
      *(ulong *)(this + 0x170) = CONCAT44(uStack_c,local_10);
      if ((this[0x1f8] != (ScrollWidget)0x0) && (this[0x1f9] == (ScrollWidget)0x0)) {
        CheckClientWidget(this);
        this[0x1f9] = (ScrollWidget)0x1;
      }
    }
    else {
      fVar4 = *(float *)(this + 0x168);
      if ((*(float *)(this + 0x16c) < fVar6) || (fVar8 <= *(float *)(this + 0x16c))) {
        PieceConfig::PieceConfig((PieceConfig *)&local_20);
        if (fVar5 <= fVar4 && fVar4 < fVar7) {
          local_1c = 0x3f59999a;
          local_20 = 0x3f79999a;
        }
        else {
          local_1c = 0x3f59999a;
          local_20 = 0x3f59999a;
        }
      }
      else {
        PieceConfig::PieceConfig((PieceConfig *)&local_20);
        if (fVar5 <= fVar4 && fVar4 < fVar7) {
          local_1c = 0x3f79999a;
          local_20 = local_1c;
        }
        else {
          local_1c = 0x3f79999a;
          local_20 = 0x3f59999a;
        }
      }
      PointAddScaled((FPoint *)(this + 0x168),this_00,*(float *)(this + 0x1c4));
      *(ulong *)(this + 0x168) = CONCAT44(uStack_c,local_10);
      TPoint<float>::operator*((TPoint<float> *)this_00,(TPoint *)&local_20);
      FPoint::FPoint((FPoint *)&local_10,(TPoint *)local_18);
      *(ulong *)(this + 0x170) = CONCAT44(uStack_c,local_10);
      if ((this[0x1f8] != (ScrollWidget)0x0) && (this[0x1b1] == (ScrollWidget)0x0)) {
        CheckClientWidget(this);
      }
    }
    fVar4 = *(float *)(this + 0x168);
    if (fVar5 <= fVar4) {
      if (fVar7 < fVar4) {
        if ((this[0x18d] == (ScrollWidget)0x0) && (this[0x1b0] == (ScrollWidget)0x0)) {
          *(float *)(this + 0x168) = fVar7;
          *(undefined4 *)(this + 0x170) = 0;
        }
        else {
          *(float *)(this + 0x168) = fVar4 + (fVar7 - fVar4) * 0.1;
        }
      }
    }
    else if ((this[0x18d] == (ScrollWidget)0x0) && (this[0x1b0] == (ScrollWidget)0x0)) {
      *(float *)(this + 0x168) = fVar5;
      *(undefined4 *)(this + 0x170) = 0;
    }
    else {
      *(float *)(this + 0x168) = fVar4 + (fVar5 - fVar4) * 0.1;
    }
    fVar7 = *(float *)(this + 0x16c);
    if (fVar6 <= fVar7) {
      if (fVar8 < fVar7) {
        if ((this[0x18d] == (ScrollWidget)0x0) && (this[0x1b0] == (ScrollWidget)0x0)) {
          *(float *)(this + 0x16c) = fVar8;
          *(undefined4 *)(this + 0x174) = 0;
        }
        else {
          *(float *)(this + 0x16c) = fVar7 + (fVar8 - fVar7) * 0.1;
        }
      }
    }
    else if ((this[0x18d] == (ScrollWidget)0x0) && (this[0x1b0] == (ScrollWidget)0x0)) {
      *(float *)(this + 0x16c) = fVar6;
      *(undefined4 *)(this + 0x174) = 0;
    }
    else {
      *(float *)(this + 0x16c) = fVar7 + (fVar6 - fVar7) * 0.1;
    }
    plVar2 = *(long **)(this + 0xe8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x1a8))
                (plVar2,(int)*(float *)(this + 0x168),(int)*(float *)(this + 0x16c));
    }
    iVar1 = *(int *)(this + 0x1a0);
    if (0 < iVar1) {
      iVar1 = iVar1 + -1;
      *(int *)(this + 0x1a0) = iVar1;
      goto LAB_052fe8b8;
    }
  }
  else {
    FlashIndicators(this);
    iVar1 = *(int *)(this + 0x1a0);
LAB_052fe8b8:
    if (0 < iVar1) {
      if (*(float *)(this + 0x1a4) < 1.0) {
        local_10 = *(float *)(this + 0x1a4) + 0.05;
        local_18[0] = 1.0;
        pfVar3 = eastl::min_alt<float>(local_18,&local_10);
        *(float *)(this + 0x1a4) = *pfVar3;
      }
      goto LAB_052fe86c;
    }
  }
  if ((iVar1 == 0) && (0.0 < *(float *)(this + 0x1a4))) {
    local_10 = *(float *)(this + 0x1a4) - 0.02;
    local_18[0] = 0.0;
    pfVar3 = eastl::max_alt<float>(local_18,&local_10);
    *(float *)(this + 0x1a4) = *pfVar3;
  }
LAB_052fe86c:
  (**(code **)(*(long *)this + 0xd8))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::ScrollWidget::Draw(ScrollWidget *this,Graphics *param_1)

{
  Color *pCVar1;
  
  nop();
  if (*(Image **)(this + 0x118) != (Image *)0x0) {
    Graphics::DrawImage(param_1,*(Image **)(this + 0x118),0,0);
    return;
  }
  if (this[0x120] == (ScrollWidget)0x0) {
    return;
  }
  pCVar1 = (Color *)(**(code **)(*(long *)this + 0x178))(this,0);
  Graphics::SetColor(param_1,pCVar1);
  Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  return;
}

