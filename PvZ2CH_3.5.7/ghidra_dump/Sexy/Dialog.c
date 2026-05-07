// Class: Sexy::Dialog


/* Sexy::Dialog::MouseUp(int, int, int) */

void __thiscall Sexy::Dialog::MouseUp(Dialog *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  
  (**(code **)(*(long *)this + 0x220))(this,param_1,param_2);
  lVar1 = *(long *)this;
  if (param_3 == 3) {
    (**(code **)(lVar1 + 0x230))(this,param_1,param_2,2,1);
  }
  else {
    if (param_3 < 0) {
      (**(code **)(lVar1 + 0x230))(this,param_1,param_2,1,-param_3);
      return;
    }
    (**(code **)(lVar1 + 0x230))(this,param_1,param_2,0,param_3);
  }
  return;
}


/* Sexy::Dialog::SetButtonFont(Sexy::Font*) */

void __thiscall Sexy::Dialog::SetButtonFont(Dialog *this,Font *param_1)

{
  long *plVar1;
  
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x328))();
  }
  plVar1 = *(long **)(this + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x328))(plVar1,param_1);
  }
  return;
}


/* Sexy::Dialog::SetHeaderFont(Sexy::Font*) */

void __thiscall Sexy::Dialog::SetHeaderFont(Dialog *this,Font *param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 0x18))();
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  *(undefined8 *)(this + 0x178) = uVar1;
  return;
}


/* Sexy::Dialog::SetLinesFont(Sexy::Font*) */

void __thiscall Sexy::Dialog::SetLinesFont(Dialog *this,Font *param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x18))();
  }
  uVar1 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  *(undefined8 *)(this + 0x180) = uVar1;
  return;
}


/* Sexy::Dialog::SetHeaderFont(Sexy::PrimeTypeface*) */

void __thiscall Sexy::Dialog::SetHeaderFont(Dialog *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 0x188) = param_1;
  return;
}


/* Sexy::Dialog::SetLinesFont(Sexy::PrimeTypeface*) */

void __thiscall Sexy::Dialog::SetLinesFont(Dialog *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 400) = param_1;
  return;
}


/* Sexy::Dialog::SetButtonFont(Sexy::PrimeTypeface*) */

void __thiscall Sexy::Dialog::SetButtonFont(Dialog *this,PrimeTypeface *param_1)

{
  long *plVar1;
  
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 800))();
  }
  plVar1 = *(long **)(this + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,param_1);
  }
  return;
}


/* Sexy::Dialog::MouseDrag(int, int) */

void __thiscall Sexy::Dialog::MouseDrag(Dialog *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (this[0x15c] != (Dialog)0x0) {
    iVar1 = param_1 + *(int *)(this + 0x48);
    iVar4 = iVar1 - *(int *)(this + 0x160);
    iVar2 = param_2 + *(int *)(this + 0x4c);
    iVar3 = iVar2 - *(int *)(this + 0x164);
    if (iVar4 < -8) {
      iVar4 = -8;
    }
    else if (*(int *)(*(long *)(this + 0x18) + 0x50) + 8 < *(int *)(this + 0x50) + iVar4) {
      iVar4 = (*(int *)(*(long *)(this + 0x18) + 0x50) - *(int *)(this + 0x50)) + 8;
    }
    if (iVar3 < -8) {
      iVar1 = iVar1 - iVar4;
      iVar2 = iVar2 + 8;
      *(int *)(this + 0x160) = iVar1;
      *(int *)(this + 0x164) = iVar2;
    }
    else {
      if (*(int *)(*(long *)(this + 0x18) + 0x54) + 8 < *(int *)(this + 0x54) + iVar3) {
        iVar3 = (*(int *)(*(long *)(this + 0x18) + 0x54) - *(int *)(this + 0x54)) + 8;
      }
      iVar1 = iVar1 - iVar4;
      iVar2 = iVar2 - iVar3;
      *(int *)(this + 0x160) = iVar1;
      *(int *)(this + 0x164) = iVar2;
    }
    if (iVar1 < 8) {
      *(undefined4 *)(this + 0x160) = 8;
    }
    else if (*(int *)(this + 0x50) + -8 <= iVar1) {
      *(int *)(this + 0x160) = *(int *)(this + 0x50) + -9;
    }
    if (iVar2 < 8) {
      *(undefined4 *)(this + 0x164) = 8;
    }
    else if (*(int *)(this + 0x54) + -8 <= iVar2) {
      *(int *)(this + 0x164) = *(int *)(this + 0x54) + -9;
    }
    (**(code **)(*(long *)this + 0x1a8))();
    return;
  }
  return;
}


/* Sexy::Dialog::WaitForResult(bool) */

undefined4 __thiscall Sexy::Dialog::WaitForResult(Dialog *this,bool param_1)

{
  char cVar1;
  
  do {
    cVar1 = (**(code **)(*gSexyAppBase + 0x3a8))(gSexyAppBase,0);
    if ((cVar1 == '\0') || (*(long *)(this + 0x18) == 0)) break;
  } while (*(int *)(this + 0x170) == 0x7fffffff);
  if (!param_1) {
    return *(undefined4 *)(this + 0x170);
  }
  (**(code **)(*gSexyAppBase + 0x280))(gSexyAppBase,*(undefined4 *)(this + 0x168));
  return *(undefined4 *)(this + 0x170);
}


/* Sexy::Dialog::ButtonPress(int) */

void __thiscall Sexy::Dialog::ButtonPress(Dialog *this,int param_1)

{
  if (1 < param_1 - 1000U) {
    return;
  }
  (**(code **)**(undefined8 **)(this + 0xe0))
            (*(undefined8 **)(this + 0xe0),*(undefined4 *)(this + 0x168),param_1);
  return;
}


/* non-virtual thunk to Sexy::Dialog::ButtonPress(int) */

void __thiscall Sexy::Dialog::ButtonPress(Dialog *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* Sexy::Dialog::ButtonDepress(int) */

void __thiscall Sexy::Dialog::ButtonDepress(Dialog *this,int param_1)

{
  if (1 < param_1 - 1000U) {
    return;
  }
  *(int *)(this + 0x170) = param_1;
  (**(code **)(**(long **)(this + 0xe0) + 8))
            (*(long **)(this + 0xe0),*(undefined4 *)(this + 0x168),param_1);
  return;
}


/* non-virtual thunk to Sexy::Dialog::ButtonDepress(int) */

void __thiscall Sexy::Dialog::ButtonDepress(Dialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* Sexy::Dialog::ButtonDownTick(int) */

int Sexy::Dialog::ButtonDownTick(int param_1)

{
  return param_1;
}


/* non-virtual thunk to Sexy::Dialog::ButtonDownTick(int) */

void __thiscall Sexy::Dialog::ButtonDownTick(Dialog *this,int param_1)

{
  ButtonDownTick((int)this + -0xd8);
  return;
}


/* Sexy::Dialog::~Dialog() */

void __thiscall Sexy::Dialog::~Dialog(Dialog *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2d8d0;
  *(undefined **)(this + 0xd8) = &DAT_06a2dc50;
  WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x110);
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::Dialog::~Dialog() */

void __thiscall Sexy::Dialog::~Dialog(Dialog *this)

{
  ~Dialog(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::Dialog::SetColor(int, Sexy::Color const&) */

void __thiscall Sexy::Dialog::SetColor(Dialog *this,int param_1,Color *param_2)

{
  long *plVar1;
  
  Widget::SetColor((Widget *)this,param_1,param_2);
  if (param_1 == 3) {
    plVar1 = *(long **)(this + 0xf8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,0,param_2);
    }
    plVar1 = *(long **)(this + 0x100);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,0,param_2);
      return;
    }
  }
  else if (param_1 == 4) {
    plVar1 = *(long **)(this + 0xf8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,1,param_2);
    }
    plVar1 = *(long **)(this + 0x100);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,1,param_2);
      return;
    }
  }
  return;
}


/* Sexy::Dialog::Resize(int, int, int, int) */

void __thiscall Sexy::Dialog::Resize(Dialog *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar3 = *(long **)(this + 0xf8);
  if (plVar3 != (long *)0x0) {
    if (*(long *)(this + 0x100) == 0) {
      (**(code **)(*plVar3 + 0x198))
                (plVar3,*(int *)(this + 0x148) + *(int *)(this + 0x138),
                 ((*(int *)(this + 0x54) - *(int *)(this + 0x154)) - *(int *)(this + 0x144)) -
                 *(int *)(this + 0x134),
                 (((*(int *)(this + 0x50) - *(int *)(this + 0x148)) - *(int *)(this + 0x150)) -
                 *(int *)(this + 0x138)) - *(int *)(this + 0x140));
      return;
    }
    iVar2 = *(int *)(this + 0x134);
    iVar1 = ((((((*(int *)(this + 0x50) - *(int *)(this + 0x148)) - *(int *)(this + 0x150)) -
               *(int *)(this + 0x138)) - *(int *)(this + 0x140)) + *(int *)(this + 0x19c) * -2) -
            *(int *)(this + 0x198)) / 2;
    (**(code **)(*plVar3 + 0x198))
              (plVar3,*(int *)(this + 0x19c) + *(int *)(this + 0x148) + *(int *)(this + 0x138),
               ((*(int *)(this + 0x54) - *(int *)(this + 0x154)) - *(int *)(this + 0x144)) - iVar2,
               iVar1,iVar2);
    (**(code **)(**(long **)(this + 0x100) + 0x198))
              (*(long **)(this + 0x100),
               iVar1 + *(int *)(*(long *)(this + 0xf8) + 0x48) + *(int *)(this + 0x198),
               *(undefined4 *)(*(long *)(this + 0xf8) + 0x4c),iVar1,iVar2);
  }
  return;
}


/* Sexy::Dialog::GotFocus() */

void __thiscall Sexy::Dialog::GotFocus(Dialog *this)

{
  this[0x6f] = (Dialog)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Dialog::Dialog(int, bool, std::wstring const&, std::wstring const&, std::wstring const&,
   int) */

void __thiscall
Sexy::Dialog::Dialog
          (Dialog *this,int param_1,bool param_2,wstring *param_3,wstring *param_4,wstring *param_5,
          int param_6)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Widget::Widget((Widget *)this);
  ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06a2d8d0;
  *(undefined **)(this + 0xd8) = &DAT_06a2dc50;
  FUN_05476574(this + 0x110);
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  Insets::Insets((Insets *)(this + 0x138));
  Insets::Insets((Insets *)(this + 0x148));
  *(undefined8 *)(this + 0xe8) = 0;
  *(int *)(this + 0x168) = param_1;
  *(undefined4 *)(this + 0x170) = 0x7fffffff;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  this[0xf0] = (Dialog)0x0;
  this[0x16c] = (Dialog)param_2;
  Insets::Insets((Insets *)&local_18,0x18,0x18,0x18,0x18);
  *(undefined8 *)(this + 0x148) = local_18;
  *(undefined8 *)(this + 0x150) = uStack_10;
  *(undefined4 *)(this + 0x158) = 10;
  *(undefined4 *)(this + 0x198) = 8;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  lVar1 = gSexyAppBase + 8;
  if (gSexyAppBase == 0) {
    lVar1 = 0;
  }
  *(long *)(this + 0xe0) = lVar1;
  thunk_FUN_05477b9c(this + 0x110,param_3);
  thunk_FUN_05477b9c(this + 0x118,param_5);
  *(int *)(this + 0x128) = param_6;
  thunk_FUN_05477b9c(this + 0x120,param_4);
  *(undefined8 *)(this + 0x178) = 0;
  lVar1 = ___stack_chk_guard;
  this[0x72] = (Dialog)0x1;
  this[0x58] = (Dialog)0x1;
  *(undefined4 *)(this + 100) = 1;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  this[0x15c] = (Dialog)0x0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x134) = 0x18;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Dialog::EnsureFonts() */

void __thiscall Sexy::Dialog::EnsureFonts(Dialog *this)

{
  BaseBufferResource *pBVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x188) == 0) {
    pBVar1 = (BaseBufferResource *)PrimeText::Instance();
    uVar2 = BaseBufferResource::GetPtr(pBVar1);
    *(undefined8 *)(this + 0x188) = uVar2;
  }
  if (*(long *)(this + 400) != 0) {
    return;
  }
  pBVar1 = (BaseBufferResource *)PrimeText::Instance();
  uVar2 = BaseBufferResource::GetPtr(pBVar1);
  *(undefined8 *)(this + 400) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Dialog::Draw(Sexy::Graphics*) */

void __thiscall Sexy::Dialog::Draw(Dialog *this,Graphics *param_1)

{
  Dialog *pDVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Color *pCVar5;
  Insets *pIVar6;
  long *plVar7;
  int iVar8;
  Image *pIVar9;
  code *pcVar10;
  undefined1 auStack_50 [24];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EnsureFonts(this);
  Insets::Insets(aIStack_38,*(int *)(this + 0x138),*(int *)(this + 0x13c),
                 (*(int *)(this + 0x50) - *(int *)(this + 0x138)) - *(int *)(this + 0x140),
                 (*(int *)(this + 0x54) - *(int *)(this + 0x13c)) - *(int *)(this + 0x144));
  pIVar9 = *(Image **)(this + 0xe8);
  if (pIVar9 == (Image *)0x0) {
    pcVar10 = *(code **)(*(long *)this + 0x180);
    Color::Color((Color *)aIStack_28,(int *)&DAT_06a89e08);
    (*pcVar10)(aIStack_18,this,6,(Color *)aIStack_28);
    Graphics::SetColor(param_1,(Color *)aIStack_18);
    Graphics::DrawRect(param_1,0xc,0xc,*(int *)(this + 0x50) + -0x19,*(int *)(this + 0x54) + -0x19);
    pcVar10 = *(code **)(*(long *)this + 0x180);
    Color::Color((Color *)aIStack_28,(int *)&DAT_06a89dfc);
    (*pcVar10)(aIStack_18,this,5,(Color *)aIStack_28);
    Graphics::SetColor(param_1,(Color *)aIStack_18);
    Graphics::FillRect(param_1,0xd,0xd,*(int *)(this + 0x50) + -0x1a,*(int *)(this + 0x54) + -0x1a);
    Insets::Insets(aIStack_18,0,0,0,0x80);
    Graphics::SetColor(param_1,(Color *)aIStack_18);
    Graphics::FillRect(param_1,*(int *)(this + 0x50) + -0xc,0x18,0xc,*(int *)(this + 0x54) + -0x24);
    Graphics::FillRect(param_1,0x18,*(int *)(this + 0x54) + -0xc,*(int *)(this + 0x50) + -0x18,0xc);
  }
  else {
    if (this[0xf0] == (Dialog)0x0) {
      Graphics::DrawImageBox(param_1,(TRect *)aIStack_38,pIVar9);
      iVar8 = *(int *)(this + 0x14c) + *(int *)(this + 0x13c);
      lVar4 = FUN_054765d0(this + 0x110);
      goto joined_r0x05148148;
    }
    Insets::Insets(aIStack_18,0,0,*(int *)(pIVar9 + 0x38),*(int *)(pIVar9 + 0x3c));
    Graphics::DrawImage(param_1,pIVar9,(TRect *)aIStack_38,(TRect *)aIStack_18);
  }
  iVar8 = *(int *)(this + 0x14c) + *(int *)(this + 0x13c);
  lVar4 = FUN_054765d0(this + 0x110);
joined_r0x05148148:
  if (lVar4 != 0) {
    iVar2 = (**(code **)(**(long **)(this + 0x178) + 0x50))(*(long **)(this + 0x178));
    iVar3 = (**(code **)(**(long **)(this + 0x178) + 0x58))(*(long **)(this + 0x178));
    iVar8 = iVar8 + (iVar2 - iVar3);
    if (*(Effect_Barrage **)(this + 0x178) == (Effect_Barrage *)0x0) {
      lVar4 = *(long *)(this + 0x188);
      plVar7 = (long *)0x0;
      if (lVar4 != 0) {
        pcVar10 = *(code **)(*(long *)this + 0x290);
        pIVar6 = (Insets *)FUN_05147cdc(*(undefined8 *)(this + 0x78));
        Insets::Insets(aIStack_18,pIVar6);
        (*pcVar10)(this,param_1,lVar4,aIStack_18,iVar8,this + 0x110);
        plVar7 = *(long **)(this + 0x178);
      }
    }
    else {
      Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x178));
      pCVar5 = (Color *)FUN_05147cdc(*(undefined8 *)(this + 0x78),0);
      Graphics::SetColor(param_1,pCVar5);
      (**(code **)(*(long *)this + 0x2b8))(auStack_50,this,param_1,iVar8,this + 0x110);
      plVar7 = *(long **)(this + 0x178);
    }
    iVar2 = (**(code **)(*plVar7 + 0x68))(plVar7);
    iVar3 = (**(code **)(**(long **)(this + 0x178) + 0x50))(*(long **)(this + 0x178));
    iVar8 = iVar8 + (iVar2 - iVar3) + *(int *)(this + 0x158);
  }
  Insets::Insets(aIStack_28,*(int *)(this + 0x138) + *(int *)(this + 0x148) + 2,iVar8,
                 ((((*(int *)(this + 0x50) - *(int *)(this + 0x148)) - *(int *)(this + 0x150)) -
                  *(int *)(this + 0x138)) - *(int *)(this + 0x140)) + -4,0);
  if (*(Effect_Barrage **)(this + 0x180) == (Effect_Barrage *)0x0) {
    lVar4 = *(long *)(this + 400);
    if (lVar4 != 0) {
      pcVar10 = *(code **)(*(long *)this + 0x2a8);
      pIVar6 = (Insets *)FUN_05147cdc(*(undefined8 *)(this + 0x78));
      Insets::Insets(aIStack_18,pIVar6);
      iVar2 = (**(code **)(**(long **)(this + 0x180) + 0x78))(*(long **)(this + 0x180));
      iVar2 = (*pcVar10)(this,param_1,lVar4,aIStack_18,aIStack_28,this + 0x120,
                         iVar2 + *(int *)(this + 0x130),*(undefined4 *)(this + 300));
      iVar8 = iVar8 + iVar2;
    }
  }
  else {
    Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x180));
    pCVar5 = (Color *)FUN_05147cdc(*(undefined8 *)(this + 0x78),1);
    Graphics::SetColor(param_1,pCVar5);
    pcVar10 = *(code **)(*(long *)this + 0x2d8);
    iVar2 = (**(code **)(**(long **)(this + 0x180) + 0x78))(*(long **)(this + 0x180));
    iVar2 = (*pcVar10)(this,param_1,aIStack_28,this + 0x120,iVar2 + *(int *)(this + 0x130),
                       *(undefined4 *)(this + 300));
    iVar8 = iVar8 + iVar2;
  }
  pDVar1 = this + 0x118;
  lVar4 = FUN_054765d0(pDVar1);
  if ((lVar4 != 0) && (*(int *)(this + 0x128) != 3)) {
    iVar2 = (**(code **)(**(long **)(this + 0x178) + 0x78))(*(long **)(this + 0x178));
    iVar2 = iVar8 + 8 + iVar2;
    if (*(Effect_Barrage **)(this + 0x178) == (Effect_Barrage *)0x0) {
      lVar4 = *(long *)(this + 0x188);
      if (lVar4 != 0) {
        pcVar10 = *(code **)(*(long *)this + 0x290);
        pIVar6 = (Insets *)FUN_05147cdc(*(undefined8 *)(this + 0x78),2);
        Insets::Insets(aIStack_18,pIVar6);
        (*pcVar10)(this,param_1,lVar4,aIStack_18,iVar2,pDVar1);
      }
    }
    else {
      Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x178));
      pCVar5 = (Color *)FUN_05147cdc(*(undefined8 *)(this + 0x78),2);
      Graphics::SetColor(param_1,pCVar5);
      (**(code **)(*(long *)this + 0x2b8))(auStack_50,this,param_1,iVar2,pDVar1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Dialog::SetButtonComponentImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall Sexy::Dialog::SetButtonComponentImage(Dialog *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  undefined4 uVar2;
  Image *this_00;
  string *psVar3;
  ResourceInfo *pRVar4;
  DialogButton *pDVar5;
  long lVar6;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xf8) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0xf8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    }
    *(undefined8 *)(this + 0xf8) = 0;
  }
  if (*(long *)(this + 0x100) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0x100) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x100) + 0x18))();
    }
    *(undefined8 *)(this + 0x100) = 0;
  }
  if (*(int *)(this + 0x128) - 1U < 2) {
    pRVar4 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
    pDVar5 = ::operator_new(0x1b0);
    DialogButton::DialogButton(pDVar5,(Image *)pRVar4,1000,(ButtonListener *)(this + 0xd8));
    *(DialogButton **)(this + 0xf8) = pDVar5;
    (**(code **)(*(long *)this + 0x60))(this,pDVar5);
    pRVar4 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
    pDVar5 = ::operator_new(0x1b0);
    DialogButton::DialogButton(pDVar5,(Image *)pRVar4,0x3e9,(ButtonListener *)(this + 0xd8));
    *(DialogButton **)(this + 0x100) = pDVar5;
    (**(code **)(*(long *)this + 0x60))(this,pDVar5);
    psVar3 = gSexyAppBase;
    lVar6 = *(long *)(this + 0xf8);
    if (*(int *)(this + 0x128) == 1) {
      std::string::string(asStack_18,"DIALOG_BUTTON_YES");
      SexyAppBase::GetString(psVar3,(wstring *)asStack_18);
      FUN_054766c8(lVar6 + 0xd8,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::~string(asStack_18);
      nop();
      psVar3 = gSexyAppBase;
      lVar6 = *(long *)(this + 0x100);
      std::string::string(asStack_18,"DIALOG_BUTTON_NO");
    }
    else {
      std::string::string(asStack_18,"DIALOG_BUTTON_OK");
      SexyAppBase::GetString(psVar3,(wstring *)asStack_18);
      FUN_054766c8(lVar6 + 0xd8,auStack_10);
      FUN_05476c50(auStack_10);
      std::string::~string(asStack_18);
      nop();
      psVar3 = gSexyAppBase;
      lVar6 = *(long *)(this + 0x100);
      std::string::string(asStack_18,"DIALOG_BUTTON_CANCEL");
    }
    SexyAppBase::GetString(psVar3,(wstring *)asStack_18);
    FUN_054766c8(lVar6 + 0xd8,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  else if (*(int *)(this + 0x128) == 3) {
    pRVar4 = RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)param_2);
    pDVar5 = ::operator_new(0x1b0);
    DialogButton::DialogButton(pDVar5,(Image *)pRVar4,1000,(ButtonListener *)(this + 0xd8));
    *(DialogButton **)(this + 0xf8) = pDVar5;
    thunk_FUN_05477b9c(pDVar5 + 0xd8,this + 0x118);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    *(undefined8 *)(this + 0x100) = 0;
  }
  else {
    *(undefined8 *)(this + 0xf8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined4 *)(this + 0x108) = 0;
  }
  cVar1 = RtMixedPtrBase::IsValid(param_2);
  uVar2 = 0x18;
  if (cVar1 != '\0') {
    this_00 = (Image *)RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    uVar2 = Image::GetCelHeight(this_00);
  }
  *(undefined4 *)(this + 0x134) = uVar2;
  cVar1 = RtMixedPtrBase::IsValid(param_2);
  if (cVar1 == '\0') {
    DAT_06a89df4 = 0;
    DAT_06a89df8 = 0;
    DAT_06a89de4 = 0;
  }
  else {
    DAT_06a89de4 = 0xff;
    DAT_06a89df4 = 0xff;
    DAT_06a89df8 = 0xff;
  }
  DAT_06a89de8 = DAT_06a89df4;
  DAT_06a89dec = DAT_06a89df4;
  DAT_06a89df0 = DAT_06a89df4;
  (**(code **)(*(long *)this + 0x160))(this,&DAT_06a89dc0,7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Dialog::GetPreferredHeight(int) */

void __thiscall Sexy::Dialog::GetPreferredHeight(Dialog *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  Graphics aGStack_d0 [200];
  long local_8;
  
  iVar9 = 0;
  local_8 = ___stack_chk_guard;
  EnsureFonts(this);
  iVar7 = *(int *)(this + 0x14c) + *(int *)(this + 0x154) + *(int *)(this + 0x13c) +
          *(int *)(this + 0x144);
  lVar6 = FUN_054765d0(this + 0x110);
  if ((lVar6 != 0) && (*(long **)(this + 0x178) != (long *)0x0)) {
    iVar9 = 1;
    iVar3 = (**(code **)(**(long **)(this + 0x178) + 0x68))();
    iVar4 = (**(code **)(**(long **)(this + 0x178) + 0x58))(*(long **)(this + 0x178));
    iVar7 = iVar7 + (iVar3 - iVar4);
  }
  lVar6 = FUN_054765d0(this + 0x120);
  if ((lVar6 != 0) && (*(long *)(this + 0x180) != 0)) {
    if (iVar9 != 0) {
      iVar7 = iVar7 + *(int *)(this + 0x158);
    }
    iVar9 = 1;
    Graphics::Graphics(aGStack_d0,(Image *)0x0);
    Effect_Barrage::SetViceBarrage((Effect_Barrage *)aGStack_d0,*(Effect_Barrage **)(this + 0x180));
    iVar3 = *(int *)(this + 0x148);
    iVar4 = *(int *)(this + 0x150);
    iVar1 = *(int *)(this + 0x138);
    iVar2 = *(int *)(this + 0x140);
    pcVar8 = *(code **)(*(long *)this + 0x2e8);
    iVar5 = (**(code **)(**(long **)(this + 0x180) + 0x78))(*(long **)(this + 0x180));
    iVar3 = (*pcVar8)(this,aGStack_d0,((((param_1 - iVar3) - iVar4) - iVar1) - iVar2) + -4,
                      this + 0x120,iVar5 + *(int *)(this + 0x130));
    iVar7 = iVar7 + iVar3;
    Graphics::~Graphics(aGStack_d0);
  }
  lVar6 = FUN_054765d0(this + 0x118);
  if (((lVar6 == 0) || (*(int *)(this + 0x128) == 3)) || (*(long **)(this + 0x178) == (long *)0x0))
  {
    if (*(long *)(this + 0xf8) == 0) goto LAB_05148994;
    if (iVar9 != 0) {
      iVar7 = iVar7 + 8;
    }
  }
  else {
    iVar3 = (**(code **)(**(long **)(this + 0x178) + 0x78))();
    iVar7 = iVar7 + iVar9 * 8 + iVar3;
    if (*(long *)(this + 0xf8) == 0) goto LAB_05148994;
    iVar7 = iVar7 + 8;
  }
  iVar7 = iVar7 + *(int *)(this + 0x134) + 8;
LAB_05148994:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


/* Sexy::Dialog::MouseDown(int, int, int, int) */

void __thiscall
Sexy::Dialog::MouseDown(Dialog *this,int param_1,int param_2,int param_3,int param_4)

{
  if (param_4 != 1) {
    nop();
    return;
  }
  SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(this + 0x18) + 0x80));
  *(int *)(this + 0x160) = param_1;
  this[0x15c] = (Dialog)0x1;
  *(int *)(this + 0x164) = param_2;
  nop();
  return;
}


/* Sexy::Dialog::MouseUp(int, int, int, int) */

void Sexy::Dialog::MouseUp(int param_1,int param_2,int param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(char *)(uVar1 + 0x15c) != '\0') {
    SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(uVar1 + 0x18) + 0x80));
    *(undefined1 *)(uVar1 + 0x15c) = 0;
  }
  nop();
  return;
}

