// Class: Sexy::ScrollbarWidget


/* Sexy::ScrollbarWidget::SetInvisIfNoScroll(bool) */

void __thiscall Sexy::ScrollbarWidget::SetInvisIfNoScroll(ScrollbarWidget *this,bool param_1)

{
  this[0xf0] = (ScrollbarWidget)param_1;
  if (param_1) {
    (**(code **)(*(long *)this + 0x158))(this,0);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),0);
    (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),0);
  }
  return;
}


/* Sexy::ScrollbarWidget::SetHorizontal(bool) */

void __thiscall Sexy::ScrollbarWidget::SetHorizontal(ScrollbarWidget *this,bool param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xe0);
  this[0x110] = (ScrollbarWidget)param_1;
  *(bool *)(*(long *)(this + 0xe8) + 0x198) = param_1;
  *(bool *)(lVar1 + 0x198) = param_1;
  return;
}


/* Sexy::ScrollbarWidget::SetButtonImages(Sexy::Image*, Sexy::Image*, Sexy::Image*) */

void __thiscall
Sexy::ScrollbarWidget::SetButtonImages
          (ScrollbarWidget *this,Image *param_1,Image *param_2,Image *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0xe0);
  lVar1 = *(long *)(this + 0xe8);
  *(Image **)(lVar2 + 0xe8) = param_1;
  *(Image **)(lVar2 + 0x100) = param_2;
  *(Image **)(lVar2 + 0x108) = param_3;
  *(Image **)(lVar1 + 0xe8) = param_1;
  *(Image **)(lVar1 + 0x100) = param_2;
  *(Image **)(lVar1 + 0x108) = param_3;
  return;
}


/* Sexy::ScrollbarWidget::SetThumbImage(Sexy::Image*) */

void __thiscall Sexy::ScrollbarWidget::SetThumbImage(ScrollbarWidget *this,Image *param_1)

{
  *(Image **)(this + 0x148) = param_1;
  return;
}


/* Sexy::ScrollbarWidget::SetBarImages(Sexy::Image*, Sexy::Image*) */

void __thiscall
Sexy::ScrollbarWidget::SetBarImages(ScrollbarWidget *this,Image *param_1,Image *param_2)

{
  *(Image **)(this + 0x150) = param_1;
  *(Image **)(this + 0x158) = param_2;
  return;
}


/* Sexy::ScrollbarWidget::SetButtonColors(int (*) [3], int) */

void __thiscall
Sexy::ScrollbarWidget::SetButtonColors(ScrollbarWidget *this,int *param_1,int param_2)

{
  (**(code **)(**(long **)(this + 0xe0) + 0x160))(*(long **)(this + 0xe0),param_1,param_2);
  (**(code **)(**(long **)(this + 0xe8) + 0x160))(*(long **)(this + 0xe8),param_1,param_2);
  return;
}


/* Sexy::ScrollbarWidget::SetButtonColors(int (*) [4], int) */

void __thiscall
Sexy::ScrollbarWidget::SetButtonColors(ScrollbarWidget *this,int *param_1,int param_2)

{
  (**(code **)(**(long **)(this + 0xe0) + 0x168))(*(long **)(this + 0xe0),param_1,param_2);
  (**(code **)(**(long **)(this + 0xe8) + 0x168))(*(long **)(this + 0xe8),param_1,param_2);
  return;
}


/* Sexy::ScrollbarWidget::SetButtonColor(int, Sexy::Color const&) */

void __thiscall
Sexy::ScrollbarWidget::SetButtonColor(ScrollbarWidget *this,int param_1,Color *param_2)

{
  (**(code **)(**(long **)(this + 0xe0) + 0x170))(*(long **)(this + 0xe0));
  (**(code **)(**(long **)(this + 0xe8) + 0x170))(*(long **)(this + 0xe8),param_1,param_2);
  return;
}


/* Sexy::ScrollbarWidget::ResizeScrollbar(int, int, int, int) */

void __thiscall
Sexy::ScrollbarWidget::ResizeScrollbar
          (ScrollbarWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  (**(code **)(*(long *)this + 0x198))(this,param_1,param_2);
  if (this[0x110] != (ScrollbarWidget)0x0) {
    iVar1 = *(int *)(this + 0x114);
    if (*(int *)(this + 0x114) < 1) {
      iVar1 = param_4;
    }
    (**(code **)(**(long **)(this + 0xe0) + 0x198))(*(long **)(this + 0xe0),0,0,iVar1,param_4);
    (**(code **)(**(long **)(this + 0xe8) + 0x198))
              (*(long **)(this + 0xe8),param_3 - iVar1,0,iVar1,param_4);
    return;
  }
  iVar1 = *(int *)(this + 0x114);
  if (*(int *)(this + 0x114) < 1) {
    iVar1 = param_3;
  }
  (**(code **)(**(long **)(this + 0xe0) + 0x198))(*(long **)(this + 0xe0),0,0,param_3,iVar1);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),0,param_4 - iVar1,param_3,iVar1);
  return;
}


/* Sexy::ScrollbarWidget::SetMaxValue(double) */

void __thiscall Sexy::ScrollbarWidget::SetMaxValue(ScrollbarWidget *this,double param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)this + 0x3a8);
  *(double *)(this + 0x100) = param_1;
  (*pcVar1)();
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::ScrollbarWidget::SetPageSize(double) */

void __thiscall Sexy::ScrollbarWidget::SetPageSize(ScrollbarWidget *this,double param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)this + 0x3a8);
  *(double *)(this + 0x108) = param_1;
  (*pcVar1)();
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::ScrollbarWidget::SetValue(double) */

void __thiscall Sexy::ScrollbarWidget::SetValue(ScrollbarWidget *this,double param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)this + 0x3a8);
  *(double *)(this + 0xf8) = param_1;
  (*pcVar1)();
  pcVar1 = *(code **)**(undefined8 **)(this + 0x140);
  if (pcVar1 != ScrollListener::ScrollPosition) {
    (*pcVar1)(*(undefined8 *)(this + 0xf8),*(undefined8 **)(this + 0x140),
              *(undefined4 *)(this + 0xf4));
  }
  (**(code **)(*(long *)this + 0xd8))(this);
  return;
}


/* Sexy::ScrollbarWidget::AtBottom() */

bool __thiscall Sexy::ScrollbarWidget::AtBottom(ScrollbarWidget *this)

{
  return (*(double *)(this + 0x100) - *(double *)(this + 0x108)) - *(double *)(this + 0xf8) <= 1.0;
}


/* Sexy::ScrollbarWidget::GoToBottom() */

void __thiscall Sexy::ScrollbarWidget::GoToBottom(ScrollbarWidget *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)this + 0x3a8);
  *(double *)(this + 0xf8) = *(double *)(this + 0x100) - *(double *)(this + 0x108);
  (*pcVar1)();
  (**(code **)(*(long *)this + 0x328))(*(undefined8 *)(this + 0xf8),this);
  return;
}


/* Sexy::ScrollbarWidget::DrawThumb(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
Sexy::ScrollbarWidget::DrawThumb(ScrollbarWidget *this,undefined8 param_1,undefined4 *param_3)

{
  (**(code **)(*(long *)this + 0x380))(this,param_1,*param_3,param_3[1],param_3[2],param_3[3]);
  return;
}


/* Sexy::ScrollbarWidget::GetTrackSize() */

int __thiscall Sexy::ScrollbarWidget::GetTrackSize(ScrollbarWidget *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x114);
  if (iVar1 < 1) {
    if (this[0x110] == (ScrollbarWidget)0x0) {
      return *(int *)(this + 0x54) + *(int *)(*(long *)(this + 0xe0) + 0x54) * -2;
    }
    return *(int *)(this + 0x50) + *(int *)(*(long *)(this + 0xe0) + 0x50) * -2;
  }
  if (this[0x110] != (ScrollbarWidget)0x0) {
    return *(int *)(this + 0x50) + iVar1 * -2;
  }
  return *(int *)(this + 0x54) + iVar1 * -2;
}


/* Sexy::ScrollbarWidget::GetThumbPosition() */

int __thiscall Sexy::ScrollbarWidget::GetThumbPosition(ScrollbarWidget *this)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  if (*(double *)(this + 0x108) <= *(double *)(this + 0x100)) {
    dVar3 = *(double *)(this + 0xf8);
    iVar1 = (**(code **)(*(long *)this + 0x390))();
    iVar2 = (**(code **)(*(long *)this + 0x398))(this);
    return (int)(((double)(iVar1 - iVar2) * dVar3) /
                 (*(double *)(this + 0x100) - *(double *)(this + 0x108)) + 0.5);
  }
  if (this[0x110] == (ScrollbarWidget)0x0) {
    return *(int *)(*(long *)(this + 0xe0) + 0x54);
  }
  return *(int *)(*(long *)(this + 0xe0) + 0x50);
}


/* Sexy::ScrollbarWidget::ClampValue() */

void __thiscall Sexy::ScrollbarWidget::ClampValue(ScrollbarWidget *this)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = *(double *)(this + 0x100) - *(double *)(this + 0x108);
  dVar6 = *(double *)(this + 0xf8);
  dVar3 = dVar6;
  if (dVar5 < dVar6) {
    *(double *)(this + 0xf8) = dVar5;
    dVar3 = dVar5;
  }
  if (dVar3 < 0.0) {
    *(undefined8 *)(this + 0xf8) = 0;
  }
  bVar1 = *(double *)(this + 0x108) < *(double *)(this + 0x100);
  bVar2 = !bVar1;
  (**(code **)(*(long *)this + 0x188))(this,bVar2);
  (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),bVar2);
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),bVar2);
  if (this[0xf0] != (ScrollbarWidget)0x0) {
    (**(code **)(*(long *)this + 0x158))(this,bVar1);
    (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),bVar1);
    (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),bVar1);
  }
  if (*(double *)(this + 0xf8) != dVar6) {
    pcVar4 = *(code **)**(undefined8 **)(this + 0x140);
    if (pcVar4 != ScrollListener::ScrollPosition) {
      (*pcVar4)(*(undefined8 **)(this + 0x140),*(undefined4 *)(this + 0xf4));
      return;
    }
  }
  return;
}


/* Sexy::ScrollbarWidget::SetThumbPosition(int) */

void __thiscall Sexy::ScrollbarWidget::SetThumbPosition(ScrollbarWidget *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = *(double *)(this + 0x108);
  iVar1 = *(int *)(*(long *)(this + 0xe0) + 0x50);
  dVar5 = *(double *)(this + 0x100);
  pcVar4 = *(code **)(*(long *)this + 0x328);
  iVar2 = (**(code **)(*(long *)this + 0x390))();
  iVar3 = (**(code **)(*(long *)this + 0x398))(this);
  (*pcVar4)(((double)(param_1 - iVar1) * (dVar5 - dVar6)) / (double)(iVar2 - iVar3),this);
  return;
}


/* Sexy::ScrollbarWidget::ButtonPress(int) */

void __thiscall Sexy::ScrollbarWidget::ButtonPress(ScrollbarWidget *this,int param_1)

{
  *(undefined4 *)(this + 0x130) = 0;
  if (param_1 != 0) {
    (**(code **)(*(long *)this + 0x328))(*(double *)(this + 0xf8) + 1.0);
    return;
  }
  (**(code **)(*(long *)this + 0x328))(*(double *)(this + 0xf8) - 1.0);
  return;
}


/* non-virtual thunk to Sexy::ScrollbarWidget::ButtonPress(int) */

void __thiscall Sexy::ScrollbarWidget::ButtonPress(ScrollbarWidget *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* Sexy::ScrollbarWidget::ButtonDepress(int) */

int Sexy::ScrollbarWidget::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to Sexy::ScrollbarWidget::ButtonDepress(int) */

void __thiscall Sexy::ScrollbarWidget::ButtonDepress(ScrollbarWidget *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* Sexy::ScrollbarWidget::ButtonDownTick(int) */

void __thiscall Sexy::ScrollbarWidget::ButtonDownTick(ScrollbarWidget *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = *(int *)(this + 0x130);
    *(int *)(this + 0x130) = iVar1 + 1;
    if (0x18 < iVar1 + 1) {
      (**(code **)(*(long *)this + 0x328))(*(double *)(this + 0xf8) - 1.0);
      *(undefined4 *)(this + 0x130) = 0x18;
      return;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x130);
    *(int *)(this + 0x130) = iVar1 + 1;
    if (0x18 < iVar1 + 1) {
      (**(code **)(*(long *)this + 0x328))(*(double *)(this + 0xf8) + 1.0);
      *(undefined4 *)(this + 0x130) = 0x18;
      return;
    }
  }
  return;
}


/* non-virtual thunk to Sexy::ScrollbarWidget::ButtonDownTick(int) */

void __thiscall Sexy::ScrollbarWidget::ButtonDownTick(ScrollbarWidget *this,int param_1)

{
  ButtonDownTick(this + -0xd8,param_1);
  return;
}


/* Sexy::ScrollbarWidget::ThumbCompare(int, int) */

ulong __thiscall Sexy::ScrollbarWidget::ThumbCompare(ScrollbarWidget *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if (this[0x110] == (ScrollbarWidget)0x0) {
    iVar4 = param_2 - *(int *)(*(long *)(this + 0xe0) + 0x54);
  }
  else {
    iVar4 = param_1 - *(int *)(*(long *)(this + 0xe0) + 0x50);
  }
  iVar1 = (**(code **)(*(long *)this + 0x3a0))(this);
  if (iVar4 < iVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = (**(code **)(*(long *)this + 0x3a0))(this);
    iVar2 = (**(code **)(*(long *)this + 0x398))(this);
    uVar3 = (ulong)(iVar1 + iVar2 <= iVar4);
  }
  return uVar3;
}


/* Sexy::ScrollbarWidget::~ScrollbarWidget() */

void __thiscall Sexy::ScrollbarWidget::~ScrollbarWidget(ScrollbarWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a30c00;
  *(undefined **)(this + 0xd8) = &DAT_06a30fe8;
  if (*(Widget **)(this + 0xe0) != (Widget *)0x0) {
    WidgetContainer::RemoveWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
    if (*(long **)(this + 0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    }
  }
  if (*(Widget **)(this + 0xe8) != (Widget *)0x0) {
    WidgetContainer::RemoveWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
    if (*(long **)(this + 0xe8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    }
  }
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::ScrollbarWidget::~ScrollbarWidget() */

void __thiscall Sexy::ScrollbarWidget::~ScrollbarWidget(ScrollbarWidget *this)

{
  ~ScrollbarWidget(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::ScrollbarWidget::ScrollbarWidget(int, Sexy::ScrollListener*) */

void __thiscall
Sexy::ScrollbarWidget::ScrollbarWidget(ScrollbarWidget *this,int param_1,ScrollListener *param_2)

{
  ButtonListener *this_00;
  ScrollbuttonWidget *pSVar1;
  long lVar2;
  
  this_00 = (ButtonListener *)(this + 0xd8);
  Widget::Widget((Widget *)this);
  ButtonListener::ButtonListener(this_00);
  *(ScrollListener **)(this + 0x140) = param_2;
  *(int *)(this + 0xf4) = param_1;
  *(undefined ***)this = &PTR_GetClass_06a30c00;
  *(undefined **)(this + 0xd8) = &DAT_06a30fe8;
  Widget::SetDisabled((Widget *)this,true);
  pSVar1 = ::operator_new(0x1a0);
  ScrollbuttonWidget::ScrollbuttonWidget(pSVar1,0,this_00,0);
  lVar2 = *(long *)pSVar1;
  *(ScrollbuttonWidget **)(this + 0xe0) = pSVar1;
  (**(code **)(lVar2 + 0x188))(pSVar1,1);
  pSVar1 = ::operator_new(0x1a0);
  ScrollbuttonWidget::ScrollbuttonWidget(pSVar1,1,this_00,0);
  lVar2 = *(long *)pSVar1;
  *(ScrollbuttonWidget **)(this + 0xe8) = pSVar1;
  (**(code **)(lVar2 + 0x188))(pSVar1,1);
  this[0xf0] = (ScrollbarWidget)0x0;
  this[0x118] = (ScrollbarWidget)0x0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  this[0x110] = (ScrollbarWidget)0x0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe8));
  Widget::SetColors((Widget *)this,(int *)&DAT_06a89ee0,6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollbarWidget::DrawThumb(Sexy::Graphics*, int, int, int, int) */

void __thiscall
Sexy::ScrollbarWidget::DrawThumb
          (ScrollbarWidget *this,Graphics *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  Color *pCVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x148) == 0) {
    iVar1 = param_3 + 1;
    iVar2 = param_2 + 1;
    pCVar3 = (Color *)(**(code **)(*(long *)this + 0x178))(this,2);
    Graphics::SetColor(param_1,pCVar3);
    Graphics::FillRect(param_1,param_2,param_3,param_4,param_5);
    pCVar3 = (Color *)(**(code **)(*(long *)this + 0x178))(this,5);
    Graphics::SetColor(param_1,pCVar3);
    Graphics::FillRect(param_1,iVar2,iVar1,param_4 + -2,1);
    Graphics::FillRect(param_1,iVar2,iVar1,1,param_5 + -2);
    pCVar3 = (Color *)(**(code **)(*(long *)this + 0x178))(this,3);
    Graphics::SetColor(param_1,pCVar3);
    Graphics::FillRect(param_1,param_2,param_3 + param_5 + -1,param_4,1);
    Graphics::FillRect(param_1,param_2 + param_4 + -1,param_3,1,param_5);
    pCVar3 = (Color *)(**(code **)(*(long *)this + 0x178))(this,4);
    Graphics::SetColor(param_1,pCVar3);
    Graphics::FillRect(param_1,iVar2,param_3 + param_5 + -2,param_4 + -2,1);
    Graphics::FillRect(param_1,param_2 + param_4 + -2,iVar1,1,param_5 + -2);
  }
  else {
    Insets::Insets(aIStack_18,param_2,param_3,param_4,param_5);
    Graphics::DrawImageBox(param_1,(TRect *)aIStack_18,*(Image **)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollbarWidget::GetThumbSize() */

void __thiscall Sexy::ScrollbarWidget::GetThumbSize(ScrollbarWidget *this)

{
  int iVar1;
  int *piVar2;
  int local_10 [2];
  long local_8;
  
  iVar1 = 0;
  local_8 = ___stack_chk_guard;
  if (*(double *)(this + 0x108) <= *(double *)(this + 0x100)) {
    iVar1 = (**(code **)(*(long *)this + 0x390))();
    local_10[1] = 8;
    local_10[0] = (int)(((double)iVar1 * *(double *)(this + 0x108)) / *(double *)(this + 0x100) +
                       0.5);
    piVar2 = eastl::max_alt<int>(local_10 + 1,local_10);
    iVar1 = *piVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ScrollbarWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::ScrollbarWidget::Draw(ScrollbarWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Color *pCVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  Image *pIVar9;
  int iVar10;
  code *pcVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x398))();
  if (this[0x110] == (ScrollbarWidget)0x0) {
    iVar10 = *(int *)(this + 0x54);
  }
  else {
    iVar10 = *(int *)(this + 0x50);
  }
  iVar2 = (**(code **)(*(long *)this + 0x390))(this);
  iVar10 = (iVar10 - iVar2) / 2;
  iVar3 = (**(code **)(*(long *)this + 0x3a0))(this);
  Insets::Insets((Insets *)&local_48);
  Insets::Insets((Insets *)&local_38);
  Insets::Insets((Insets *)&local_28);
  iVar2 = iVar1 / 2;
  if (this[0x110] == (ScrollbarWidget)0x0) {
    Insets::Insets((Insets *)&local_18,0,iVar10,*(int *)(this + 0x50),iVar2 + iVar3);
    iVar4 = *(int *)(this + 0x50);
    local_48 = local_18;
    uStack_40 = uStack_10;
    iVar5 = (**(code **)(*(long *)this + 0x390))(this);
    Insets::Insets((Insets *)&local_18,0,iVar10 + iVar2 + iVar3,iVar4,(iVar5 - iVar3) - iVar2);
    local_38 = local_18;
    uStack_30 = uStack_10;
    Insets::Insets((Insets *)&local_18,0,iVar3 + iVar10,*(int *)(this + 0x50),iVar1);
    local_28 = local_18;
    uStack_20 = uStack_10;
    if (*(int *)(this + 0x128) == 1) goto LAB_051d1134;
LAB_051d0ff8:
    pIVar9 = *(Image **)(this + 0x150);
    if (pIVar9 != (Image *)0x0) goto LAB_051d1000;
    uVar7 = 0;
    pcVar11 = *(code **)(*(long *)this + 0x178);
LAB_051d11b4:
    pCVar6 = (Color *)(*pcVar11)(this,uVar7);
    Graphics::SetColor(param_1,pCVar6);
    Graphics::FillRect(param_1,(TRect *)&local_48);
  }
  else {
    Insets::Insets((Insets *)&local_18,iVar10,0,iVar2 + iVar3,*(int *)(this + 0x54));
    local_48 = local_18;
    uStack_40 = uStack_10;
    iVar4 = (**(code **)(*(long *)this + 0x390))(this);
    Insets::Insets((Insets *)&local_18,iVar10 + iVar2 + iVar3,0,(iVar4 - iVar3) - iVar2,
                   *(int *)(this + 0x54));
    local_38 = local_18;
    uStack_30 = uStack_10;
    Insets::Insets((Insets *)&local_18,iVar3 + iVar10,0,iVar1,*(int *)(this + 0x54));
    local_28 = local_18;
    uStack_20 = uStack_10;
    if (*(int *)(this + 0x128) != 1) goto LAB_051d0ff8;
LAB_051d1134:
    uVar7 = 1;
    pIVar9 = *(Image **)(this + 0x158);
    if (pIVar9 == (Image *)0x0) {
      pcVar11 = *(code **)(*(long *)this + 0x178);
      goto LAB_051d11b4;
    }
LAB_051d1000:
    Graphics::DrawImageBox(param_1,(TRect *)&local_48,pIVar9);
  }
  if (*(int *)(this + 0x128) == 2) {
    pIVar9 = *(Image **)(this + 0x158);
    if (pIVar9 == (Image *)0x0) {
      uVar8 = 1;
      pcVar11 = *(code **)(*(long *)this + 0x178);
      goto LAB_051d1184;
    }
  }
  else {
    pIVar9 = *(Image **)(this + 0x150);
    if (pIVar9 == (Image *)0x0) {
      uVar8 = 0;
      pcVar11 = *(code **)(*(long *)this + 0x178);
LAB_051d1184:
      pCVar6 = (Color *)(*pcVar11)(this,uVar8);
      Graphics::SetColor(param_1,pCVar6);
      Graphics::FillRect(param_1,(TRect *)&local_38);
      goto LAB_051d102c;
    }
  }
  Graphics::DrawImageBox(param_1,(TRect *)&local_38,pIVar9);
LAB_051d102c:
  if (0 < iVar1) {
    pcVar11 = *(code **)(*(long *)this + 0x388);
    Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    (*pcVar11)(this,param_1,(Insets *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ScrollbarWidget::Update() */

void __thiscall Sexy::ScrollbarWidget::Update(ScrollbarWidget *this)

{
  int iVar1;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(int *)(this + 0x128) == 1) {
    iVar1 = (**(code **)(*(long *)this + 0x3d0))
                      (this,*(undefined4 *)(this + 0x134),*(undefined4 *)(this + 0x138));
    if (iVar1 != -1) {
LAB_051d1284:
      *(undefined4 *)(this + 0x128) = 0;
      (**(code **)(*(long *)this + 0xd8))(this);
      return;
    }
    iVar1 = *(int *)(this + 300);
    *(int *)(this + 300) = iVar1 + 1;
    if (0x18 < iVar1 + 1) {
      (**(code **)(*(long *)this + 0x328))
                (*(double *)(this + 0xf8) - *(double *)(this + 0x108),this);
      *(undefined4 *)(this + 300) = 0x14;
    }
  }
  else if (*(int *)(this + 0x128) == 2) {
    iVar1 = (**(code **)(*(long *)this + 0x3d0))
                      (this,*(undefined4 *)(this + 0x134),*(undefined4 *)(this + 0x138));
    if (iVar1 != 1) goto LAB_051d1284;
    iVar1 = *(int *)(this + 300);
    *(int *)(this + 300) = iVar1 + 1;
    if (0x18 < iVar1 + 1) {
      (**(code **)(*(long *)this + 0x328))
                (*(double *)(this + 0x108) + *(double *)(this + 0xf8),this);
      *(undefined4 *)(this + 300) = 0x14;
    }
  }
  return;
}


/* Sexy::ScrollbarWidget::MouseDown(int, int, int, int) */

void Sexy::ScrollbarWidget::MouseDown(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = (long *)(ulong)(uint)param_1;
  nop();
  if (*(char *)((long)plVar3 + 0x6e) == '\0') {
    iVar1 = (**(code **)(*plVar3 + 0x3d0))(plVar3,param_2,param_3);
    if (iVar1 == 0) {
      *(undefined1 *)(plVar3 + 0x23) = 1;
      uVar2 = (**(code **)(*plVar3 + 0x3a0))(plVar3);
      *(int *)(plVar3 + 0x24) = param_2;
      *(undefined4 *)((long)plVar3 + 0x11c) = uVar2;
      *(int *)((long)plVar3 + 0x124) = param_3;
    }
    else if (iVar1 == 1) {
      (**(code **)(*plVar3 + 0x328))((double)plVar3[0x21] + (double)plVar3[0x1f],plVar3);
      *(undefined4 *)((long)plVar3 + 300) = 0;
      *(undefined4 *)(plVar3 + 0x25) = 2;
    }
    else if (iVar1 == -1) {
      (**(code **)(*plVar3 + 0x328))((double)plVar3[0x1f] - (double)plVar3[0x21],plVar3);
      *(undefined4 *)((long)plVar3 + 300) = 0;
      *(undefined4 *)(plVar3 + 0x25) = 1;
    }
  }
  *(int *)((long)plVar3 + 0x134) = param_2;
  *(int *)(plVar3 + 0x27) = param_3;
  return;
}


/* Sexy::ScrollbarWidget::MouseUp(int, int, int, int) */

void Sexy::ScrollbarWidget::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  nop();
  *(undefined4 *)(plVar1 + 0x25) = 0;
  *(undefined1 *)(plVar1 + 0x23) = 0;
  (**(code **)(*plVar1 + 0xd8))(plVar1);
  return;
}


/* Sexy::ScrollbarWidget::MouseDrag(int, int) */

void __thiscall Sexy::ScrollbarWidget::MouseDrag(ScrollbarWidget *this,int param_1,int param_2)

{
  nop();
  if (this[0x118] != (ScrollbarWidget)0x0) {
    if (this[0x110] != (ScrollbarWidget)0x0) {
      (**(code **)(*(long *)this + 0x3b0))
                (this,(param_1 + *(int *)(this + 0x11c) + *(int *)(*(long *)(this + 0xe0) + 0x50)) -
                      *(int *)(this + 0x120));
      *(int *)(this + 0x134) = param_1;
      *(int *)(this + 0x138) = param_2;
      return;
    }
    (**(code **)(*(long *)this + 0x3b0))
              (this,(param_2 + *(int *)(this + 0x11c) + *(int *)(*(long *)(this + 0xe0) + 0x54)) -
                    *(int *)(this + 0x124));
  }
  *(int *)(this + 0x134) = param_1;
  *(int *)(this + 0x138) = param_2;
  return;
}


/* Sexy::ScrollbarWidget::RemoveAllWidgets(bool, bool) */

void __thiscall
Sexy::ScrollbarWidget::RemoveAllWidgets(ScrollbarWidget *this,bool param_1,bool param_2)

{
  WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,param_1,param_2);
  if (param_1) {
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
  }
  return;
}

