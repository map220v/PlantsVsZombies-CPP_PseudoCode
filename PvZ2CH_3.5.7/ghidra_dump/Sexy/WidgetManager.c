// Class: Sexy::WidgetManager


/* Sexy::WidgetManager::SetFocus(Sexy::Widget*) */

void __thiscall Sexy::WidgetManager::SetFocus(WidgetManager *this,Widget *param_1)

{
  Widget *pWVar1;
  
  pWVar1 = *(Widget **)(this + 200);
  if (pWVar1 != param_1) {
    if (pWVar1 != (Widget *)0x0) {
      (**(code **)(*(long *)pWVar1 + 0x1d8))(pWVar1);
    }
    if ((param_1 == (Widget *)0x0) || (*(WidgetManager **)(param_1 + 0x18) != this)) {
      *(undefined8 *)(this + 200) = 0;
    }
    else {
      *(Widget **)(this + 200) = param_1;
      if (this[0xc4] != (WidgetManager)0x0) {
        (**(code **)(*(long *)param_1 + 0x1d0))(param_1);
      }
    }
  }
  return;
}


/* Sexy::WidgetManager::GetWidgetFlags() */

ulong __thiscall Sexy::WidgetManager::GetWidgetFlags(WidgetManager *this)

{
  ulong uVar1;
  
  if (this[0xc4] == (WidgetManager)0x0) {
    uVar1 = GetModFlags(*(int *)(this + 600),(FlagsMod *)(this + 0xf0));
    return uVar1;
  }
  return (ulong)*(uint *)(this + 600);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::GetAnyWidgetAt(int, int, int*, int*) */

void __thiscall
Sexy::WidgetManager::GetAnyWidgetAt
          (WidgetManager *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  bool bStack_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetWidgetFlags(this);
  WidgetContainer::GetWidgetAtHelper
            ((WidgetContainer *)this,param_1,param_2,iVar1,&bStack_9,param_3,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WidgetManager::GetWidgetAt(int, int, int*, int*) */

long __thiscall
Sexy::WidgetManager::GetWidgetAt
          (WidgetManager *this,int param_1,int param_2,int *param_3,int *param_4)

{
  long lVar1;
  
  lVar1 = GetAnyWidgetAt(this,param_1,param_2,param_3,param_4);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x6e) != '\0')) {
    lVar1 = 0;
  }
  return lVar1;
}


/* Sexy::WidgetManager::IsLeftButtonDown() */

uint __thiscall Sexy::WidgetManager::IsLeftButtonDown(WidgetManager *this)

{
  return *(uint *)(this + 0x148) & 1;
}


/* Sexy::WidgetManager::IsMiddleButtonDown() */

uint __thiscall Sexy::WidgetManager::IsMiddleButtonDown(WidgetManager *this)

{
  return *(uint *)(this + 0x148) >> 2 & 1;
}


/* Sexy::WidgetManager::IsRightButtonDown() */

uint __thiscall Sexy::WidgetManager::IsRightButtonDown(WidgetManager *this)

{
  return *(uint *)(this + 0x148) >> 1 & 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::DoMouseUps(Sexy::Widget*, unsigned long) */

void __thiscall Sexy::WidgetManager::DoMouseUps(WidgetManager *this,Widget *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = ___stack_chk_guard;
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(this + 0x13c);
    iVar2 = *(int *)(this + 0x140);
    pcVar4 = *(code **)(*(long *)param_1 + 0x228);
    param_1[0x70] = (Widget)0x0;
    (*pcVar4)(param_1,iVar1 - *(int *)(param_1 + 0x48),iVar2 - *(int *)(param_1 + 0x4c));
  }
  if (((uint)param_2 >> 1 & 1) != 0) {
    iVar1 = *(int *)(this + 0x13c);
    iVar2 = *(int *)(this + 0x140);
    pcVar4 = *(code **)(*(long *)param_1 + 0x228);
    param_1[0x70] = (Widget)0x0;
    (*pcVar4)(param_1,iVar1 - *(int *)(param_1 + 0x48),iVar2 - *(int *)(param_1 + 0x4c),0xffffffff);
  }
  if (((uint)param_2 >> 2 & 1) != 0) {
    iVar1 = *(int *)(this + 0x13c);
    iVar2 = *(int *)(this + 0x140);
    pcVar4 = *(code **)(*(long *)param_1 + 0x228);
    param_1[0x70] = (Widget)0x0;
    (*pcVar4)(param_1,iVar1 - *(int *)(param_1 + 0x48),iVar2 - *(int *)(param_1 + 0x4c),3);
  }
  if (lVar3 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::WidgetManager::DoMouseUps() */

void __thiscall Sexy::WidgetManager::DoMouseUps(WidgetManager *this)

{
  if ((*(Widget **)(this + 0xd0) != (Widget *)0x0) && (*(int *)(this + 0x144) != 0)) {
    DoMouseUps(this,*(Widget **)(this + 0xd0),(long)*(int *)(this + 0x144));
    *(undefined4 *)(this + 0x144) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
  }
  return;
}


/* Sexy::WidgetManager::RemapMouse(int&, int&) */

void __thiscall Sexy::WidgetManager::RemapMouse(WidgetManager *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x130);
  if ((iVar1 != 0) && (*(int *)(this + 0x134) != 0)) {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = ((*param_1 - *(int *)(this + 0x128)) * *(int *)(this + 0x120)) / iVar1;
    }
    *param_1 = iVar2 + *(int *)(this + 0x118);
    iVar1 = 0;
    if (*(int *)(this + 0x134) != 0) {
      iVar1 = ((*param_2 - *(int *)(this + 300)) * *(int *)(this + 0x124)) / *(int *)(this + 0x134);
    }
    *param_2 = iVar1 + *(int *)(this + 0x11c);
  }
  return;
}


/* Sexy::WidgetManager::MouseEnter(Sexy::Widget*) */

void __thiscall Sexy::WidgetManager::MouseEnter(WidgetManager *this,Widget *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)param_1 + 0x1f8);
  param_1[0x71] = (Widget)0x1;
  (*pcVar1)(param_1);
  if (param_1[0xa0] != (Widget)0x0) {
    (**(code **)(*(long *)param_1 + 400))(param_1,1);
  }
  return;
}


/* Sexy::WidgetManager::MouseLeave(Sexy::Widget*) */

void __thiscall Sexy::WidgetManager::MouseLeave(WidgetManager *this,Widget *param_1)

{
  param_1[0x71] = (Widget)0x0;
  (**(code **)(*(long *)param_1 + 0x200))(param_1);
  if (param_1[0xa0] != (Widget)0x0) {
    (**(code **)(*(long *)param_1 + 400))(param_1,0);
  }
  return;
}


/* Sexy::WidgetManager::DisableWidget(Sexy::Widget*) */

void __thiscall Sexy::WidgetManager::DisableWidget(WidgetManager *this,Widget *param_1)

{
  long lVar1;
  
  if (*(Widget **)(this + 0xd8) == param_1) {
    *(undefined8 *)(this + 0xd8) = 0;
    MouseLeave(this,param_1);
  }
  if (*(Widget **)(this + 0xd0) == param_1) {
    *(undefined8 *)(this + 0xd0) = 0;
    DoMouseUps(this,param_1,(long)*(int *)(this + 0x144));
    *(undefined4 *)(this + 0x144) = 0;
  }
  if (*(Widget **)(this + 200) == param_1) {
    lVar1 = *(long *)param_1;
    *(undefined8 *)(this + 200) = 0;
    (**(code **)(lVar1 + 0x1d8))(param_1);
  }
  if (*(Widget **)(this + 0xe0) != param_1) {
    return;
  }
  *(undefined8 *)(this + 0xe0) = 0;
  return;
}


/* Sexy::WidgetManager::SetBaseModal(Sexy::Widget*, Sexy::FlagsMod const&) */

void __thiscall
Sexy::WidgetManager::SetBaseModal(WidgetManager *this,Widget *param_1,FlagsMod *param_2)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  Widget *pWVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_2;
  *(Widget **)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 0xf8) = uVar5;
  if (((*(long *)(this + 0xd8) != 0) && ((*(uint *)(this + 0xfc) >> 4 & 1) != 0)) &&
     (cVar2 = (**(code **)(*(long *)this + 0xa0))(), cVar2 != '\0')) {
    pWVar4 = *(Widget **)(this + 0xd8);
    *(undefined8 *)(this + 0xd8) = 0;
    MouseLeave(this,pWVar4);
  }
  if (((*(long *)(this + 0xd0) != 0) && ((*(uint *)(this + 0xfc) >> 4 & 1) != 0)) &&
     (cVar2 = (**(code **)(*(long *)this + 0xa0))
                        (this,*(long *)(this + 0xd0),*(undefined8 *)(this + 0xe0)), cVar2 != '\0'))
  {
    iVar1 = *(int *)(this + 0x144);
    pWVar4 = *(Widget **)(this + 0xd0);
    *(undefined4 *)(this + 0x144) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    DoMouseUps(this,pWVar4,(long)iVar1);
  }
  if (((*(long *)(this + 200) != 0) && ((*(uint *)(this + 0xfc) >> 5 & 1) != 0)) &&
     (cVar2 = (**(code **)(*(long *)this + 0xa0))
                        (this,*(long *)(this + 200),*(undefined8 *)(this + 0xe0)), cVar2 != '\0')) {
    plVar3 = *(long **)(this + 200);
    *(undefined8 *)(this + 200) = 0;
    (**(code **)(*plVar3 + 0x1d8))(plVar3);
    return;
  }
  return;
}


/* Sexy::WidgetManager::Resize(Sexy::TRect<int> const&, Sexy::TRect<int> const&) */

void __thiscall Sexy::WidgetManager::Resize(WidgetManager *this,TRect *param_1,TRect *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  *(int *)(this + 0x50) = *(int *)(param_1 + 8) + *(int *)param_1 * 2;
  *(int *)(this + 0x54) = iVar4 + iVar3 * 2;
  *(undefined8 *)(this + 0x118) = uVar1;
  *(undefined8 *)(this + 0x120) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x128) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x130) = uVar1;
  return;
}


/* Sexy::WidgetManager::GotFocus() */

void __thiscall Sexy::WidgetManager::GotFocus(WidgetManager *this)

{
  long *plVar1;
  
  if (this[0xc4] == (WidgetManager)0x0) {
    plVar1 = *(long **)(this + 200);
    this[0xc4] = (WidgetManager)0x1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1d0))(plVar1);
    }
  }
  return;
}


/* Sexy::WidgetManager::InitModalFlags(Sexy::ModalFlags*) */

void __thiscall Sexy::WidgetManager::InitModalFlags(WidgetManager *this,ModalFlags *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[8] = (ModalFlags)(*(long *)(this + 0xe0) == 0);
  iVar1 = GetWidgetFlags(this);
  *(int *)param_1 = iVar1;
  uVar2 = GetModFlags(iVar1,(FlagsMod *)(this + 0xf8));
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::UpdateFrame() */

void __thiscall Sexy::WidgetManager::UpdateFrame(WidgetManager *this)

{
  int iVar1;
  code *pcVar2;
  ModalFlags aMStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitModalFlags(this,aMStack_18);
  iVar1 = *(int *)(this + 0x40);
  *(int *)(this + 0x40) = iVar1 + 1;
  pcVar2 = *(code **)(*(long *)this + 0x110);
  *(long *)(this + 0x38) = (long)(iVar1 + 1);
  (*pcVar2)(this,aMStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this[0x44]);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::UpdateFrameF(float) */

void __thiscall Sexy::WidgetManager::UpdateFrameF(WidgetManager *this,float param_1)

{
  undefined4 in_register_00005004;
  ModalFlags aMStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitModalFlags(this,aMStack_18);
  (**(code **)(*(long *)this + 0x120))(CONCAT44(in_register_00005004,param_1),this,aMStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this[0x44]);
}


/* Sexy::WidgetManager::SetPopupCommandWidget(Sexy::Widget*) */

void __thiscall Sexy::WidgetManager::SetPopupCommandWidget(WidgetManager *this,Widget *param_1)

{
  *(Widget **)(this + 0xa0) = param_1;
  (**(code **)(*(long *)this + 0x60))();
  return;
}


/* Sexy::WidgetManager::RemovePopupCommandWidget() */

void __thiscall Sexy::WidgetManager::RemovePopupCommandWidget(WidgetManager *this)

{
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0xa0) = 0;
    (**(code **)(*(long *)this + 0x68))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::MousePosition(int, int) */

void __thiscall Sexy::WidgetManager::MousePosition(WidgetManager *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  Widget *pWVar3;
  Widget *pWVar4;
  int local_10;
  int local_c;
  long local_8;
  
  iVar1 = *(int *)(this + 0x13c);
  iVar2 = *(int *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x13c) = param_1;
  *(int *)(this + 0x140) = param_2;
  pWVar3 = (Widget *)GetWidgetAt(this,param_1,param_2,&local_10,&local_c);
  pWVar4 = *(Widget **)(this + 0xd8);
  if (pWVar4 == pWVar3) {
    if ((iVar1 != param_1 || iVar2 != param_2) && (pWVar4 != (Widget *)0x0)) {
      (**(code **)(*(long *)pWVar4 + 0x208))(pWVar3,local_10,local_c);
    }
  }
  else {
    *(undefined8 *)(this + 0xd8) = 0;
    if (pWVar4 != (Widget *)0x0) {
      MouseLeave(this,pWVar4);
    }
    *(Widget **)(this + 0xd8) = pWVar3;
    if (pWVar3 != (Widget *)0x0) {
      MouseEnter(this,pWVar3);
      (**(code **)(*(long *)pWVar3 + 0x208))(pWVar3,local_10,local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WidgetManager::RehupMouse() */

void __thiscall Sexy::WidgetManager::RehupMouse(WidgetManager *this)

{
  long lVar1;
  Widget *pWVar2;
  
  if (*(long *)(this + 0xd0) == 0) {
    if (this[0x138] != (WidgetManager)0x0) {
      MousePosition(this,*(int *)(this + 0x13c),*(int *)(this + 0x140));
      return;
    }
  }
  else if ((*(long *)(this + 0xd8) != 0) &&
          (lVar1 = GetWidgetAt(this,*(int *)(this + 0x13c),*(int *)(this + 0x140),(int *)0x0,
                               (int *)0x0), *(long *)(this + 0xd0) != lVar1)) {
    pWVar2 = *(Widget **)(this + 0xd8);
    *(undefined8 *)(this + 0xd8) = 0;
    MouseLeave(this,pWVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::MouseUp(int, int, int) */

void __thiscall
Sexy::WidgetManager::MouseUp(WidgetManager *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int local_10;
  int local_c;
  long local_8;
  
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  if (param_3 < 0) {
    uVar3 = 0xfffffffd;
    uVar4 = 2;
  }
  else {
    uVar3 = 0xfffffffb;
    if (param_3 != 3) {
      uVar3 = 0xfffffffe;
    }
    uVar4 = 4;
    if (param_3 != 3) {
      uVar4 = 1;
    }
  }
  uVar2 = *(uint *)(this + 0x144);
  plVar5 = *(long **)(this + 0xd0);
  uVar1 = uVar3 & uVar2;
  *(uint *)(this + 0x148) = *(uint *)(this + 0x148) & uVar3;
  *(uint *)(this + 0x144) = uVar1;
  if ((plVar5 != (long *)0x0) && ((uVar4 & uVar2) != 0)) {
    if (uVar1 == 0) {
      *(undefined8 *)(this + 0xd0) = 0;
    }
    *(undefined1 *)(plVar5 + 0xe) = 0;
    (**(code **)(*plVar5 + 0xd0))(&local_10,plVar5);
    (**(code **)(*plVar5 + 0x228))(plVar5,param_1 - local_10,param_2 - local_c,param_3);
  }
  MousePosition(this,param_1,param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::MouseDown(int, int, int) */

void __thiscall
Sexy::WidgetManager::MouseDown(WidgetManager *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  if (param_3 < 0) {
    *(uint *)(this + 0x148) = *(uint *)(this + 0x148) | 2;
  }
  else if (param_3 == 3) {
    *(uint *)(this + 0x148) = *(uint *)(this + 0x148) | 4;
  }
  else {
    *(uint *)(this + 0x148) = *(uint *)(this + 0x148) | 1;
  }
  MousePosition(this,param_1,param_2);
  plVar2 = *(long **)(this + 0xa0);
  if ((plVar2 != (long *)0x0) &&
     (cVar1 = (**(code **)(*plVar2 + 0x300))(plVar2,param_1,param_2), cVar1 == '\0')) {
    RemovePopupCommandWidget(this);
  }
  plVar3 = (long *)GetWidgetAt(this,param_1,param_2,&local_10,&local_c);
  plVar2 = *(long **)(this + 0xd0);
  if (*(long **)(this + 0xd0) == (long *)0x0) {
    plVar2 = plVar3;
  }
  if (param_3 < 0) {
    *(undefined4 *)(this + 0x250) = 0xffffffff;
    *(uint *)(this + 0x144) = *(uint *)(this + 0x144) | 2;
  }
  else if (param_3 == 3) {
    *(undefined4 *)(this + 0x250) = 2;
    *(uint *)(this + 0x144) = *(uint *)(this + 0x144) | 4;
  }
  else {
    *(undefined4 *)(this + 0x250) = 1;
    *(uint *)(this + 0x144) = *(uint *)(this + 0x144) | 1;
  }
  *(long **)(this + 0xd0) = plVar2;
  if (plVar2 != (long *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x98))(this,plVar2);
    }
    pcVar4 = *(code **)(*plVar2 + 0x210);
    *(undefined1 *)(plVar2 + 0xe) = 1;
    (*pcVar4)(plVar2,local_10,local_c,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::MouseDrag(int, int) */

void __thiscall Sexy::WidgetManager::MouseDrag(WidgetManager *this,int param_1,int param_2)

{
  Widget *pWVar1;
  Widget *pWVar2;
  int local_10;
  int local_c;
  long local_8;
  
  pWVar1 = *(Widget **)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  *(int *)(this + 0x13c) = param_1;
  this[0x138] = (WidgetManager)0x1;
  *(int *)(this + 0x140) = param_2;
  pWVar2 = *(Widget **)(this + 0xd0);
  if (pWVar1 == (Widget *)0x0) {
LAB_052c479c:
    if (pWVar2 == (Widget *)0x0) goto LAB_052c4808;
  }
  else if (pWVar1 != pWVar2) {
    *(undefined8 *)(this + 0xd8) = 0;
    MouseLeave(this,pWVar1);
    pWVar2 = *(Widget **)(this + 0xd0);
    goto LAB_052c479c;
  }
  (**(code **)(*(long *)pWVar2 + 0xd0))(&local_10,pWVar2);
  (**(code **)(**(long **)(this + 0xd0) + 0x238))
            (*(long **)(this + 0xd0),param_1 - local_10,param_2 - local_c);
  pWVar1 = (Widget *)GetWidgetAt(this,param_1,param_2,(int *)0x0,(int *)0x0);
  pWVar2 = *(Widget **)(this + 0xd0);
  if ((pWVar1 == pWVar2) && (pWVar1 != (Widget *)0x0)) {
    if (*(long *)(this + 0xd8) == 0) {
      *(Widget **)(this + 0xd8) = pWVar2;
      MouseEnter(this,pWVar2);
    }
  }
  else {
    pWVar1 = *(Widget **)(this + 0xd8);
    if (pWVar1 != (Widget *)0x0) {
      *(undefined8 *)(this + 0xd8) = 0;
      MouseLeave(this,pWVar1);
    }
  }
LAB_052c4808:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* Sexy::WidgetManager::MouseMove(int, int) */

undefined8 __thiscall Sexy::WidgetManager::MouseMove(WidgetManager *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  if (*(int *)(this + 0x144) == 0) {
    this[0x138] = (WidgetManager)0x1;
    MousePosition(this,param_1,param_2);
    return 1;
  }
  uVar1 = MouseDrag(this,param_1,param_2);
  return uVar1;
}


/* Sexy::WidgetManager::MouseExit(int, int) */

undefined8 Sexy::WidgetManager::MouseExit(int param_1,int param_2)

{
  WidgetManager *this;
  
  this = (WidgetManager *)(ulong)(uint)param_1;
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  this[0x138] = (WidgetManager)0x0;
  if (*(Widget **)(this + 0xd8) != (Widget *)0x0) {
    MouseLeave(this,*(Widget **)(this + 0xd8));
    *(undefined8 *)(this + 0xd8) = 0;
  }
  return 1;
}


/* Sexy::WidgetManager::MouseWheel(int) */

void Sexy::WidgetManager::MouseWheel(int param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (ulong)(uint)param_1;
  plVar2 = *(long **)(uVar1 + 200);
  *(undefined4 *)(uVar1 + 0x14c) = *(undefined4 *)(uVar1 + 0x40);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x240))(plVar2);
  }
  return;
}


/* Sexy::WidgetManager::KeyChar(wchar_t) */

undefined8 __thiscall Sexy::WidgetManager::KeyChar(WidgetManager *this,wchar_t param_1)

{
  long *plVar1;
  
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  if ((param_1 == L'\t') && (this[0x161] != (WidgetManager)0x0)) {
    if (*(long **)(this + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x70) + 0x1e0))();
    }
  }
  else {
    plVar1 = *(long **)(this + 200);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1e0))(plVar1,param_1);
    }
  }
  return 1;
}


/* Sexy::WidgetManager::KeyDown(Sexy::KeyCode) */

undefined8 __thiscall Sexy::WidgetManager::KeyDown(WidgetManager *this,uint param_2)

{
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  if (param_2 < 0xff) {
    this[(long)(int)param_2 + 0x150] = (WidgetManager)0x1;
  }
  if (*(long **)(this + 200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 200) + 0x1e8))();
  }
  return 1;
}


/* Sexy::WidgetManager::KeyUp(Sexy::KeyCode) */

undefined8 __thiscall Sexy::WidgetManager::KeyUp(WidgetManager *this,uint param_2)

{
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  if ((((0xfe < param_2) || (this[(long)(int)param_2 + 0x150] = (WidgetManager)0x0, param_2 != 9))
      || (this[0x161] == (WidgetManager)0x0)) && (*(long **)(this + 200) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 200) + 0x1f0))();
  }
  return 1;
}


/* Sexy::WidgetManager::LostFocus() */

void __thiscall Sexy::WidgetManager::LostFocus(WidgetManager *this)

{
  int iVar1;
  WidgetManager *pWVar2;
  
  if (this[0xc4] != (WidgetManager)0x0) {
    *(undefined4 *)(this + 0x148) = 0;
    pWVar2 = this;
    do {
      while (pWVar2[0x150] != (WidgetManager)0x0) {
        iVar1 = (int)pWVar2;
        pWVar2 = pWVar2 + 1;
        KeyUp(this,iVar1 - (int)this);
        if (pWVar2 == this + 0xff) goto LAB_052c4a58;
      }
      pWVar2 = pWVar2 + 1;
    } while (pWVar2 != this + 0xff);
LAB_052c4a58:
    this[0xc4] = (WidgetManager)0x0;
    if (*(long **)(this + 200) != (long *)0x0) {
      (**(code **)(**(long **)(this + 200) + 0x1d8))();
    }
  }
  return;
}


/* Sexy::WidgetManager::TouchesCanceled() */

void __thiscall Sexy::WidgetManager::TouchesCanceled(WidgetManager *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xd0);
  *(undefined4 *)(this + 0x254) = 0;
  if (plVar1 != (long *)0x0) {
    *(undefined1 *)(plVar1 + 0xe) = 0;
    (**(code **)(*plVar1 + 0x268))(plVar1);
    *(undefined8 *)(this + 0xd0) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::TouchBegan(Sexy::Touch const&) */

void __thiscall Sexy::WidgetManager::TouchBegan(WidgetManager *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  int local_48;
  int local_44;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  *(uint *)(this + 0x148) = *(uint *)(this + 0x148) | 1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  MousePosition(this,iVar1,iVar2);
  plVar4 = (long *)GetWidgetAt(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),(int *)0x0,
                               (int *)0x0);
  plVar7 = *(long **)(this + 0xd0);
  if (plVar7 == (long *)0x0) {
    Touch::Touch(aTStack_40,param_1);
    if (plVar4 == (long *)0x0) {
      *(undefined4 *)(this + 0x250) = 1;
      *(uint *)(this + 0x144) = *(uint *)(this + 0x144) | 1;
      *(int *)(this + 0x254) = *(int *)(this + 0x254) + 1;
      *(undefined8 *)(this + 0xd0) = 0;
      goto LAB_052c4be4;
    }
  }
  else {
    Touch::Touch(aTStack_40,param_1);
    plVar4 = plVar7;
  }
  (**(code **)(*plVar4 + 0xd0))(&local_48,plVar4);
  lVar6 = *plVar4;
  local_30 = local_30 - local_48;
  local_28 = local_28 - local_48;
  *(long **)(this + 0xd0) = plVar4;
  local_2c = local_2c - local_44;
  local_24 = local_24 - local_44;
  pcVar5 = *(code **)(lVar6 + 0x1b8);
  *(undefined4 *)(this + 0x250) = 1;
  *(uint *)(this + 0x144) = *(uint *)(this + 0x144) | 1;
  *(int *)(this + 0x254) = *(int *)(this + 0x254) + 1;
  cVar3 = (*pcVar5)(plVar4);
  if (cVar3 != '\0') {
    (**(code **)(*(long *)this + 0x98))(this,plVar4);
  }
  *(undefined1 *)(plVar4 + 0xe) = 1;
  (**(code **)(*plVar4 + 0x250))(plVar4,aTStack_40);
LAB_052c4be4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::TouchMoved(Sexy::Touch const&) */

void __thiscall Sexy::WidgetManager::TouchMoved(WidgetManager *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Widget *pWVar4;
  Widget *pWVar5;
  int local_48;
  int local_44;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  *(int *)(this + 0x13c) = iVar1;
  this[0x138] = (WidgetManager)0x1;
  *(int *)(this + 0x140) = iVar2;
  if (*(long *)(this + 0xd0) != 0) {
    pWVar4 = (Widget *)GetWidgetAt(this,iVar1,iVar2,(int *)0x0,(int *)0x0);
    if ((pWVar4 != (Widget *)0x0) && (*(Widget **)(this + 0xd0) != pWVar4)) {
      if (*(code **)(*(long *)pWVar4 + 0x288) == Widget::ShouldReceiveAllOverTouchEvents) {
        cVar3 = Widget::ShouldReceiveAllOverTouchEvents(pWVar4);
      }
      else {
        cVar3 = (**(code **)(*(long *)pWVar4 + 0x288))();
      }
      if (cVar3 != '\0') {
        Touch::Touch(aTStack_40,param_1);
        (**(code **)(*(long *)pWVar4 + 0xd0))(&local_48,pWVar4);
        local_30 = local_30 - local_48;
        local_28 = local_28 - local_48;
        local_2c = local_2c - local_44;
        local_24 = local_24 - local_44;
        (**(code **)(*(long *)pWVar4 + 600))(pWVar4,aTStack_40);
      }
    }
    Touch::Touch(aTStack_40,param_1);
    (**(code **)(**(long **)(this + 0xd0) + 0xd0))(&local_48,*(long **)(this + 0xd0));
    local_30 = local_30 - local_48;
    local_2c = local_2c - local_44;
    local_28 = local_28 - local_48;
    local_24 = local_24 - local_44;
    (**(code **)(**(long **)(this + 0xd0) + 600))(*(long **)(this + 0xd0),aTStack_40);
    pWVar5 = *(Widget **)(this + 0xd0);
    if ((pWVar4 == pWVar5) && (pWVar4 != (Widget *)0x0)) {
      if (*(long *)(this + 0xd8) == 0) {
        *(Widget **)(this + 0xd8) = pWVar5;
        MouseEnter(this,pWVar5);
      }
    }
    else {
      pWVar4 = *(Widget **)(this + 0xd8);
      if (pWVar4 != (Widget *)0x0) {
        *(undefined8 *)(this + 0xd8) = 0;
        MouseLeave(this,pWVar4);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::TouchEnded(Sexy::Touch const&) */

void __thiscall Sexy::WidgetManager::TouchEnded(WidgetManager *this,Touch *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  Widget *this_00;
  code *pcVar4;
  long *plVar5;
  int local_48;
  int local_44;
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_8;
  
  iVar2 = *(int *)(this + 0x254) + -1;
  local_8 = ___stack_chk_guard;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  plVar5 = *(long **)(this + 0xd0);
  *(uint *)(this + 0x148) = *(uint *)(this + 0x148) & 0xfffffffe;
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x40);
  *(int *)(this + 0x254) = iVar2;
  uVar1 = *(uint *)(this + 0x144);
  if ((plVar5 == (long *)0x0) || ((uVar1 & 1) == 0)) {
    *(uint *)(this + 0x144) = uVar1 & 0xfffffffe;
  }
  else {
    if (iVar2 == 0) {
      *(uint *)(this + 0x144) = uVar1 & 0xfffffffe;
    }
    this_00 = (Widget *)
              GetWidgetAt(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),(int *)0x0,
                          (int *)0x0);
    if ((this_00 != (Widget *)0x0) && (*(Widget **)(this + 0xd0) != this_00)) {
      if (*(code **)(*(long *)this_00 + 0x288) == Widget::ShouldReceiveAllOverTouchEvents) {
        cVar3 = Widget::ShouldReceiveAllOverTouchEvents(this_00);
      }
      else {
        cVar3 = (**(code **)(*(long *)this_00 + 0x288))();
      }
      if (cVar3 != '\0') {
        Touch::Touch(aTStack_40,param_1);
        (**(code **)(*(long *)this_00 + 0xd0))(&local_48,this_00);
        local_30 = local_30 - local_48;
        local_28 = local_28 - local_48;
        local_2c = local_2c - local_44;
        local_24 = local_24 - local_44;
        (**(code **)(*(long *)this_00 + 0x260))(this_00,aTStack_40);
      }
    }
    if (*(int *)(this + 0x144) == 0) {
      *(undefined8 *)(this + 0xd0) = 0;
    }
    Touch::Touch(aTStack_40,param_1);
    (**(code **)(*plVar5 + 0xd0))(&local_48,plVar5);
    local_30 = local_30 - local_48;
    local_28 = local_28 - local_48;
    local_24 = local_24 - local_44;
    local_2c = local_2c - local_44;
    pcVar4 = *(code **)(*plVar5 + 0x260);
    *(undefined1 *)(plVar5 + 0xe) = 0;
    (*pcVar4)(plVar5,aTStack_40);
  }
  MousePosition(this,DAT_06bbed68,DAT_06bbed6c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::OnGestureLongPress(Sexy::Point) */

void __thiscall Sexy::WidgetManager::OnGestureLongPress(WidgetManager *this,TPoint *param_2)

{
  long *plVar1;
  code *pcVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)GetWidgetAt(this,*(int *)param_2,*(int *)(param_2 + 4),(int *)0x0,(int *)0x0);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x270);
    Point::Point(aPStack_10,param_2);
    (*pcVar2)(plVar1,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::OnGestureFlick(Sexy::GestureFlickDirection, Sexy::Point) */

void __thiscall
Sexy::WidgetManager::OnGestureFlick(WidgetManager *this,undefined4 param_2,TPoint *param_3)

{
  long *plVar1;
  code *pcVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)GetWidgetAt(this,*(int *)param_3,*(int *)(param_3 + 4),(int *)0x0,(int *)0x0);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x278);
    Point::Point(aPStack_10,param_3);
    (*pcVar2)(plVar1,param_2,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::OnGesturePinch(Sexy::Point, int, float) */

void __thiscall
Sexy::WidgetManager::OnGesturePinch
          (undefined8 param_1,WidgetManager *this,TPoint *param_3,undefined4 param_4)

{
  long *plVar1;
  code *pcVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)GetWidgetAt(this,*(int *)param_3,*(int *)(param_3 + 4),(int *)0x0,(int *)0x0);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x280);
    Point::Point(aPStack_10,param_3);
    (*pcVar2)(param_1,plVar1,aPStack_10,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WidgetManager::WidgetManager(Sexy::SexyAppBase*) */

void __thiscall Sexy::WidgetManager::WidgetManager(WidgetManager *this,SexyAppBase *param_1)

{
  WidgetContainer::WidgetContainer((WidgetContainer *)this);
  *(undefined ***)this = &PTR_GetClass_06a32550;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  FlagsMod::FlagsMod((FlagsMod *)(this + 0xf0));
  FlagsMod::FlagsMod((FlagsMod *)(this + 0xf8));
  FlagsMod::FlagsMod((FlagsMod *)(this + 0x100));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x108));
  Insets::Insets((Insets *)(this + 0x118));
  Insets::Insets((Insets *)(this + 0x128));
  *(WidgetManager **)(this + 0x18) = this;
  *(undefined4 *)(this + 0xc0) = 0x7fffffff;
  *(SexyAppBase **)(this + 0x80) = param_1;
  *(undefined4 *)(this + 0x104) = 0x30;
  this[0x138] = (WidgetManager)0x0;
  *(undefined4 *)(this + 600) = 0x3d;
  this[0xc4] = (WidgetManager)0x1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  this[0x98] = (WidgetManager)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  this[0x240] = (WidgetManager)0x0;
  this[0x241] = (WidgetManager)0x0;
  this[0x242] = (WidgetManager)0x0;
  this[0x243] = (WidgetManager)0x0;
  this[0x244] = (WidgetManager)0x0;
  this[0x245] = (WidgetManager)0x0;
  this[0x246] = (WidgetManager)0x0;
  this[0x247] = (WidgetManager)0x0;
  this[0x248] = (WidgetManager)0x0;
  this[0x249] = (WidgetManager)0x0;
  this[0x24a] = (WidgetManager)0x0;
  this[0x24b] = (WidgetManager)0x0;
  this[0x24c] = (WidgetManager)0x0;
  this[0x24d] = (WidgetManager)0x0;
  this[0x24e] = (WidgetManager)0x0;
  return;
}


/* Sexy::WidgetManager::~WidgetManager() */

void __thiscall Sexy::WidgetManager::~WidgetManager(WidgetManager *this)

{
  *(undefined ***)this = &PTR_GetClass_06a32550;
  nop();
  std::list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>>::~list
            ((list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>> *)(this + 0x108));
  std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::~vector
            ((vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>> *)
             (this + 0xa8));
  WidgetContainer::~WidgetContainer((WidgetContainer *)this);
  return;
}


/* Sexy::WidgetManager::~WidgetManager() */

void __thiscall Sexy::WidgetManager::~WidgetManager(WidgetManager *this)

{
  ~WidgetManager(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::WidgetManager::RemoveBaseModal(Sexy::Widget*) */

void __thiscall Sexy::WidgetManager::RemoveBaseModal(WidgetManager *this,Widget *param_1)

{
  list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>> *this_00;
  bool bVar1;
  long lVar2;
  long *plVar3;
  Widget *pWVar4;
  
  this_00 = (list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>> *)(this + 0x108);
  bVar1 = true;
  while( true ) {
    lVar2 = std::list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>>::size(this_00);
    if ((lVar2 == 0) ||
       ((plVar3 = (long *)std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::
                          back((list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)
                               this_00), bVar1 && ((Widget *)*plVar3 != param_1)))) {
      return;
    }
    pWVar4 = (Widget *)plVar3[1];
    if (pWVar4 != (Widget *)0x0) break;
    lVar2 = std::list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>>::size(this_00);
    pWVar4 = (Widget *)plVar3[1];
    if (lVar2 == 1) break;
    SetBaseModal(this,pWVar4,(FlagsMod *)(plVar3 + 3));
    if (*(long *)(this + 200) == 0) {
      plVar3 = (long *)plVar3[2];
      *(long **)(this + 200) = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1d0))();
      }
    }
    bVar1 = false;
    FUN_052c5340(*(undefined8 *)(this + 0x110));
  }
  SetBaseModal(this,pWVar4,(FlagsMod *)(plVar3 + 3));
  if (*(long *)(this + 200) == 0) {
    plVar3 = (long *)plVar3[2];
    *(long **)(this + 200) = plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1d0))();
      FUN_052c5340(*(undefined8 *)(this + 0x110));
      return;
    }
  }
  FUN_052c5340(*(undefined8 *)(this + 0x110));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::AddBaseModal(Sexy::Widget*, Sexy::FlagsMod const&) */

void __thiscall
Sexy::WidgetManager::AddBaseModal(WidgetManager *this,Widget *param_1,FlagsMod *param_2)

{
  Widget *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Widget **)(this + 0xe0) != param_1) {
    PreModalInfo::PreModalInfo((PreModalInfo *)&local_28);
    local_20 = *(undefined8 *)(this + 0xe0);
    local_18 = *(undefined8 *)(this + 200);
    local_10 = *(undefined8 *)(this + 0xf8);
    local_28 = param_1;
    std::list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>>::push_back
              ((list<Sexy::PreModalInfo,std::allocator<Sexy::PreModalInfo>> *)(this + 0x108),
               (PreModalInfo *)&local_28);
    SetBaseModal(this,param_1,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WidgetManager::AddBaseModal(Sexy::Widget*) */

void __thiscall Sexy::WidgetManager::AddBaseModal(WidgetManager *this,Widget *param_1)

{
  AddBaseModal(this,param_1,(FlagsMod *)(this + 0x100));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::DeferOverlay(Sexy::Widget*, int) */

void __thiscall Sexy::WidgetManager::DeferOverlay(WidgetManager *this,Widget *param_1,int param_2)

{
  int local_2c;
  Widget *local_28 [2];
  pair<Sexy::PIEmitter*const,int> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_2c = param_2;
  local_28[0] = param_1;
  std::pair<Sexy::PIEmitter*const,int>::pair<Sexy::PIEmitter*&,int&,void>
            (apStack_18,(PIEmitter **)local_28,&local_2c);
  std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::push_back
            ((vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>> *)
             (this + 0xa8),(pair *)apStack_18);
  if (local_2c < *(int *)(this + 0xc0)) {
    *(int *)(this + 0xc0) = local_2c;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::FlushDeferredOverlayWidgets(int) */

void __thiscall Sexy::WidgetManager::FlushDeferredOverlayWidgets(WidgetManager *this,int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  Graphics aGStack_d0 [128];
  undefined1 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Graphics **)(this + 0x78) != (Graphics *)0x0) {
    Graphics::Graphics(aGStack_d0,*(Graphics **)(this + 0x78));
    iVar9 = *(int *)(this + 0xc0);
    do {
      if (param_1 < iVar9) goto LAB_052c65bc;
      uVar11 = *(undefined8 *)(this + 0xa8);
      lVar8 = 0;
      iVar9 = 0x7fffffff;
      iVar5 = FUN_052c3b28(uVar11,*(undefined8 *)(this + 0xb0));
      if (0 < iVar5) {
        do {
          puVar6 = (undefined8 *)FUN_052c3b34(uVar11,lVar8);
          plVar10 = (long *)*puVar6;
          if (plVar10 != (long *)0x0) {
            iVar1 = *(int *)(puVar6 + 1);
            iVar2 = *(int *)(this + 0xc0);
            if (iVar2 == iVar1) {
              Graphics::PushState(aGStack_d0);
              Graphics::Translate(aGStack_d0,-*(int *)(this + 0x118),-*(int *)(this + 0x11c));
              Graphics::Translate(aGStack_d0,(int)plVar10[9],*(int *)((long)plVar10 + 0x4c));
              bVar3 = FUN_052c3b24(local_50);
              Graphics::SetFastStretch(aGStack_d0,(bool)(bVar3 ^ 1));
              bVar4 = (bool)FUN_052c3b24(local_50);
              Graphics::SetLinearBlend(aGStack_d0,bVar4);
              puVar6 = (undefined8 *)FUN_052c3b34(*(undefined8 *)(this + 0xa8),lVar8);
              lVar7 = *plVar10;
              *puVar6 = 0;
              (**(code **)(lVar7 + 0x1c8))(plVar10,aGStack_d0,iVar2);
              Graphics::PopState(aGStack_d0);
              uVar11 = *(undefined8 *)(this + 0xa8);
              iVar5 = FUN_052c3b28(uVar11,*(undefined8 *)(this + 0xb0));
            }
            else if (iVar1 < iVar9) {
              iVar9 = iVar1;
            }
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < iVar5);
      }
      *(int *)(this + 0xc0) = iVar9;
    } while (iVar9 != 0x7fffffff);
    std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::resize
              ((vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>> *)
               (this + 0xa8),0);
LAB_052c65bc:
    Graphics::~Graphics(aGStack_d0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::DrawWidgetsTo(Sexy::Graphics*) */

void __thiscall Sexy::WidgetManager::DrawWidgetsTo(WidgetManager *this,Graphics *param_1)

{
  vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>> *this_00;
  bool bVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_108;
  undefined8 local_100;
  ModalFlags aMStack_f8 [16];
  vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>> avStack_e8 [24];
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Graphics::Translate(param_1,*(int *)(this + 0x118),*(int *)(this + 0x11c));
  this_00 = (vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>> *)
            (this + 0xa8);
  Graphics::Graphics(aGStack_d0,param_1);
  *(Graphics **)(this + 0x78) = aGStack_d0;
  std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::vector
            (avStack_e8,(vector *)this_00);
  std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::clear
            (this_00);
  InitModalFlags(this,aMStack_f8);
  local_108 = FUN_052c5390(*(undefined8 *)(this + 8));
  while( true ) {
    local_100 = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_108,(rbtree_iterator *)&local_100);
    if (!bVar1) break;
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_108);
    plVar4 = (long *)*puVar3;
    if (*(char *)((long)plVar4 + 0x6c) != '\0') {
      Graphics::PushState(param_1);
      bVar2 = FUN_052c3b24(param_1[0x80]);
      Graphics::SetFastStretch(param_1,(bool)(bVar2 ^ 1));
      bVar1 = (bool)FUN_052c3b24(param_1[0x80]);
      Graphics::SetLinearBlend(param_1,bVar1);
      Graphics::Translate(param_1,-*(int *)(this + 0x118),-*(int *)(this + 0x11c));
      Graphics::Translate(param_1,(int)plVar4[9],*(int *)((long)plVar4 + 0x4c));
      (**(code **)(*plVar4 + 0x130))(plVar4,aMStack_f8,param_1);
      Graphics::PopState(param_1);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_108);
  }
  FlushDeferredOverlayWidgets(this,0x7fffffff);
  std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::operator=
            (this_00,(vector *)avStack_e8);
  *(undefined8 *)(this + 0x78) = 0;
  std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::~vector
            (avStack_e8);
  Graphics::~Graphics(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetManager::DrawScreen() */

void __thiscall Sexy::WidgetManager::DrawScreen(WidgetManager *this)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ModalFlags aMStack_1a8 [8];
  undefined1 local_1a0;
  Graphics aGStack_198 [200];
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  InitModalFlags(this,aMStack_1a8);
  *(undefined4 *)(this + 0xc0) = 0x7fffffff;
  std::vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>>::resize
            ((vector<std::pair<Sexy::Widget*,int>,std::allocator<std::pair<Sexy::Widget*,int>>> *)
             (this + 0xa8),0);
  Graphics::Graphics(aGStack_198,*(Image **)(this + 0x88));
  *(Graphics **)(this + 0x78) = aGStack_198;
  plVar4 = (long *)(**(code **)(**(long **)(this + 0x88) + 0x50))(*(long **)(this + 0x88));
  if (plVar4 == (long *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(*plVar4 + 0x200))();
  }
  uVar7 = 0;
  Graphics::Graphics(aGStack_d0,aGStack_198);
  Graphics::Translate(aGStack_d0,-*(int *)(this + 0x118),-*(int *)(this + 0x11c));
  bVar2 = (bool)SexyAppBase::Is3DAccelerated(*(SexyAppBase **)(this + 0x80));
  local_1b8 = FUN_052c5390(*(undefined8 *)(this + 8));
  while( true ) {
    local_1b0 = std::
                __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                          ((TaskResource **)(this + 8));
    bVar3 = eastl::operator!=((rbtree_iterator *)&local_1b8,(rbtree_iterator *)&local_1b0);
    if (!bVar3) break;
    puVar5 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_1b8);
    plVar6 = (long *)*puVar5;
    if (*(long **)(*(long *)(this + 0x18) + 0xe0) == plVar6) {
      local_1a0 = 1;
    }
    if (*(char *)((long)plVar6 + 0x6c) != '\0') {
      uVar7 = 1;
      Graphics::PushState(aGStack_d0);
      Graphics::SetFastStretch(aGStack_d0,(bool)(bVar2 ^ 1));
      Graphics::SetLinearBlend(aGStack_d0,bVar2);
      Graphics::Translate(aGStack_d0,(int)plVar6[9],*(int *)((long)plVar6 + 0x4c));
      (**(code **)(*plVar6 + 0x130))(plVar6,aMStack_1a8,aGStack_d0);
      *(undefined1 *)((long)plVar6 + 0x44) = 0;
      Graphics::PopState(aGStack_d0);
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_1b8);
  }
  Graphics::~Graphics(aGStack_d0);
  FlushDeferredOverlayWidgets(this,0x7fffffff);
  if (cVar1 != '\0') {
    (**(code **)(*plVar4 + 0x208))();
  }
  *(undefined8 *)(this + 0x78) = 0;
  Graphics::~Graphics(aGStack_198);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

