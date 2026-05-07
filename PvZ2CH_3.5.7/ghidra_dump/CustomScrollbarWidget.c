// Class: CustomScrollbarWidget


/* CustomScrollbarWidget::ResizeScrollbar(int, int, int, int) */

void __thiscall
CustomScrollbarWidget::ResizeScrollbar
          (CustomScrollbarWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  
  (**(code **)(*(long *)this + 0x198))(this,param_1,param_2);
  if (this[0x110] == (CustomScrollbarWidget)0x0) {
    plVar2 = *(long **)(this + 0xe0);
    iVar1 = *(int *)(this + 0x114);
    if (*(int *)(this + 0x114) < 1) {
      iVar1 = param_3;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x198))(plVar2,0,0,param_3,iVar1);
    }
    plVar2 = *(long **)(this + 0xe8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x198))(plVar2,0,param_4 - iVar1,param_3,iVar1);
      return;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x114);
    if (*(int *)(this + 0x114) < 1) {
      iVar1 = param_4;
    }
    (**(code **)(**(long **)(this + 0xe0) + 0x198))(*(long **)(this + 0xe0),0,0,iVar1,param_4);
    (**(code **)(**(long **)(this + 0xe8) + 0x198))
              (*(long **)(this + 0xe8),param_3 - iVar1,0,iVar1,param_4);
  }
  return;
}


/* CustomScrollbarWidget::ClampValue() */

void __thiscall CustomScrollbarWidget::ClampValue(CustomScrollbarWidget *this)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  long *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = *(double *)(this + 0x100) - *(double *)(this + 0x108);
  dVar7 = *(double *)(this + 0xf8);
  dVar3 = dVar7;
  if (dVar6 < dVar7) {
    *(double *)(this + 0xf8) = dVar6;
    dVar3 = dVar6;
  }
  if (dVar3 < 0.0) {
    *(undefined8 *)(this + 0xf8) = 0;
  }
  bVar1 = *(double *)(this + 0x108) < *(double *)(this + 0x100);
  bVar2 = !bVar1;
  (**(code **)(*(long *)this + 0x188))(this,bVar2);
  plVar4 = *(long **)(this + 0xe0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x188))(plVar4,bVar2);
  }
  plVar4 = *(long **)(this + 0xe8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x188))(plVar4,bVar2);
  }
  if (this[0xf0] != (CustomScrollbarWidget)0x0) {
    (**(code **)(*(long *)this + 0x158))(this,bVar1);
    if (*(long *)(this + 0xe0) != 0) {
      (**(code **)(**(long **)(this + 0xe8) + 0x158))(*(long **)(this + 0xe8),bVar1);
    }
    if (*(long *)(this + 0xe8) != 0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x158))(*(long **)(this + 0xe0),bVar1);
    }
  }
  if (*(double *)(this + 0xf8) != dVar7) {
    pcVar5 = *(code **)**(undefined8 **)(this + 0x140);
    if (pcVar5 != Sexy::ScrollListener::ScrollPosition) {
      (*pcVar5)(*(undefined8 **)(this + 0x140),*(undefined4 *)(this + 0xf4));
      return;
    }
  }
  return;
}


/* CustomScrollbarWidget::GetTrackSize() */

int __thiscall CustomScrollbarWidget::GetTrackSize(CustomScrollbarWidget *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x114);
  if (iVar1 < 1) {
    if (this[0x110] == (CustomScrollbarWidget)0x0) {
      if (*(long *)(this + 0xe0) == 0) {
        return *(int *)(this + 0x54);
      }
      iVar1 = *(int *)(*(long *)(this + 0xe0) + 0x50);
      goto LAB_03c8f9e0;
    }
    if (*(long *)(this + 0xe0) == 0) {
      return *(int *)(this + 0x50);
    }
    iVar1 = *(int *)(this + 0x50) + *(int *)(*(long *)(this + 0xe0) + 0x50) * -2;
  }
  else {
    if (this[0x110] == (CustomScrollbarWidget)0x0) {
LAB_03c8f9e0:
      return *(int *)(this + 0x54) + iVar1 * -2;
    }
    iVar1 = *(int *)(this + 0x50) + iVar1 * -2;
  }
  return iVar1;
}


/* CustomScrollbarWidget::~CustomScrollbarWidget() */

void __thiscall CustomScrollbarWidget::~CustomScrollbarWidget(CustomScrollbarWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0675ade0;
  *(undefined **)(this + 0xd8) = &DAT_0675b1c8;
  Sexy::ScrollbarWidget::~ScrollbarWidget((ScrollbarWidget *)this);
  return;
}


/* CustomScrollbarWidget::~CustomScrollbarWidget() */

void __thiscall CustomScrollbarWidget::~CustomScrollbarWidget(CustomScrollbarWidget *this)

{
  ~CustomScrollbarWidget(this);
  AK::FreeHook(this);
  return;
}


/* CustomScrollbarWidget::CustomScrollbarWidget(int, Sexy::ScrollListener*) */

void __thiscall
CustomScrollbarWidget::CustomScrollbarWidget
          (CustomScrollbarWidget *this,int param_1,ScrollListener *param_2)

{
  Sexy::ScrollbarWidget::ScrollbarWidget((ScrollbarWidget *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0675ade0;
  *(undefined **)(this + 0xd8) = &DAT_0675b1c8;
  return;
}

