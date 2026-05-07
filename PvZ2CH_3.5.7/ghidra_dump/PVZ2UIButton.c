// Class: PVZ2UIButton


/* PVZ2UIButton::SetGrayscaleWhenDisabled(bool) */

void __thiscall PVZ2UIButton::SetGrayscaleWhenDisabled(PVZ2UIButton *this,bool param_1)

{
  this[0x2f8] = (PVZ2UIButton)param_1;
  updateFontColor(this);
  return;
}


/* PVZ2UIButton::GetImageNormal() */

void PVZ2UIButton::GetImageNormal(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x0;
  undefined8 *in_x8;
  
  in_x8[6] = *(undefined8 *)(in_x0 + 0x208);
  uVar3 = *(undefined8 *)(in_x0 + 0x1e0);
  uVar1 = *(undefined8 *)(in_x0 + 0x1e8);
  uVar4 = *(undefined8 *)(in_x0 + 0x1f0);
  uVar2 = *(undefined8 *)(in_x0 + 0x1f8);
  uVar5 = *(undefined8 *)(in_x0 + 0x200);
  *in_x8 = *(undefined8 *)(in_x0 + 0x1d8);
  in_x8[1] = uVar3;
  in_x8[2] = uVar1;
  in_x8[3] = uVar4;
  in_x8[4] = uVar2;
  in_x8[5] = uVar5;
  return;
}


/* PVZ2UIButton::drawLabel(Sexy::Graphics*) */

void PVZ2UIButton::drawLabel(Graphics *param_1)

{
  if (*(long **)(param_1 + 0x2f0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2f0) + 0x128))();
  }
  return;
}


/* PVZ2UIButton::TouchBegan(Sexy::Touch const&) */

void __thiscall PVZ2UIButton::TouchBegan(PVZ2UIButton *this,Touch *param_1)

{
  long *plVar1;
  
  if ((this[0x1a8] == (PVZ2UIButton)0x0) && (*(long *)(this + 0x2b0) == 0)) {
    plVar1 = *(long **)(this + 0x168);
    *(undefined8 *)(this + 0x2b0) = *(undefined8 *)param_1;
    this[0x2b8] = (PVZ2UIButton)0x1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(this + 0xd4),1);
    }
  }
  return;
}


/* PVZ2UIButton::TouchesCanceled() */

void __thiscall PVZ2UIButton::TouchesCanceled(PVZ2UIButton *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x168);
  *(undefined8 *)(this + 0x2b0) = 0;
  this[0x2b8] = (PVZ2UIButton)0x0;
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 0x28) != Sexy::ButtonListener::ButtonMouseLeave) {
      (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined4 *)(this + 0xd4));
    }
  }
  return;
}


/* PVZ2UIButton::SetFont(Sexy::PrimeTypeface*) */

void __thiscall PVZ2UIButton::SetFont(PVZ2UIButton *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 0x150) = param_1;
  return;
}


/* PVZ2UIButton::MouseUp(int, int, int) */

void __thiscall PVZ2UIButton::MouseUp(PVZ2UIButton *this,int param_1,int param_2,int param_3)

{
  Sexy::Dialog::MouseUp((Dialog *)this,param_1,param_2,param_3);
  *(undefined8 *)(this + 0x2b0) = 0;
  this[0x2b8] = (PVZ2UIButton)0x0;
  return;
}


/* PVZ2UIButton::SetButtonWithIcons() */

void __thiscall PVZ2UIButton::SetButtonWithIcons(PVZ2UIButton *this)

{
  *(undefined4 *)(this + 0x280) = 0xffffffff;
  *(undefined4 *)(this + 0x284) = 1;
  return;
}


/* PVZ2UIButton::SetOnlyDrawParts() */

void __thiscall PVZ2UIButton::SetOnlyDrawParts(PVZ2UIButton *this)

{
  *(undefined4 *)(this + 0x1ac) = 0;
  return;
}


/* PVZ2UIButton::getDrawStringJust(PVZButtonJustification) const */

PVZ2UIButton * __thiscall PVZ2UIButton::getDrawStringJust(PVZ2UIButton *this,int param_2)

{
  if (param_2 == 0) {
    return (PVZ2UIButton *)0x5;
  }
  if (param_2 != 1) {
    if (param_2 != -1) {
      return this;
    }
    return (PVZ2UIButton *)0x3;
  }
  return (PVZ2UIButton *)&DAT_00000004;
}


/* PVZ2UIButton::SetInvisible(bool) */

void __thiscall PVZ2UIButton::SetInvisible(PVZ2UIButton *this,bool param_1)

{
  this[0x2f9] = (PVZ2UIButton)param_1;
  return;
}


/* PVZ2UIButton::SetLabelText(std::wstring const&) */

void __thiscall PVZ2UIButton::SetLabelText(PVZ2UIButton *this,wstring *param_1)

{
  thunk_FUN_05477b9c(this + 0xd8);
  if (*(PrimeTextWidget **)(this + 0x2f0) != (PrimeTextWidget *)0x0) {
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x2f0),param_1);
    return;
  }
  return;
}


/* PVZ2UIButton::getFontColor() */

PVZ2UIButton * __thiscall PVZ2UIButton::getFontColor(PVZ2UIButton *this)

{
  int iVar1;
  PVZ2UIButton *pPVar2;
  
  if ((this[0x6e] == (PVZ2UIButton)0x0) || (this[0x2f8] == (PVZ2UIButton)0x0)) {
    pPVar2 = this + 0x1b0;
  }
  else {
    if (((DAT_06afd280 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_06afd280), iVar1 == 0)) {
      return (PVZ2UIButton *)&DAT_06afd1d0;
    }
    pPVar2 = (PVZ2UIButton *)&DAT_06afd1d0;
    Sexy::Color::Color((Color *)&DAT_06afd1d0,0xc2,0xc2,0xc2);
    __cxa_guard_release(&DAT_06afd280);
  }
  return pPVar2;
}


/* PVZ2UIButton::updateFontColor() */

void __thiscall PVZ2UIButton::updateFontColor(PVZ2UIButton *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  
  plVar2 = *(long **)(this + 0x2f0);
  if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x170);
    uVar1 = getFontColor(this);
    (*pcVar3)(plVar2,0,uVar1);
  }
  return;
}


/* PVZ2UIButton::SetContentsRect(Sexy::TRect<int> const&) */

void __thiscall PVZ2UIButton::SetContentsRect(PVZ2UIButton *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x288) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x290) = uVar1;
  return;
}


/* PVZ2UIButton::SetRadioStates(PVZ2UIImage const&, PVZ2UIImage const&, bool) */

void __thiscall
PVZ2UIButton::SetRadioStates
          (PVZ2UIButton *this,PVZ2UIImage *param_1,PVZ2UIImage *param_2,bool param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x1f0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x200) = uVar1;
  *(undefined8 *)(this + 0x208) = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x248) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x250) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 600) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x260) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x268) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x270) = uVar1;
  *(undefined8 *)(this + 0x278) = *(undefined8 *)(param_2 + 0x30);
  this[0x1a8] = (PVZ2UIButton)param_3;
  *(undefined4 *)(this + 0x1ac) = 1;
  this[0x2c0] = (PVZ2UIButton)0x1;
  return;
}


/* PVZ2UIButton::SetNormalStates(PVZ2UIImage const&, PVZ2UIImage const&) */

void __thiscall
PVZ2UIButton::SetNormalStates(PVZ2UIButton *this,PVZ2UIImage *param_1,PVZ2UIImage *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x1f0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x200) = uVar1;
  *(undefined8 *)(this + 0x208) = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x210) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x218) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x220) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x228) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x230) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x238) = uVar1;
  *(undefined8 *)(this + 0x240) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x1ac) = 2;
  return;
}


/* PVZ2UIButton::SetDialogStates(PVZ2UIImage const&, PVZ2UIImage const&) */

void __thiscall
PVZ2UIButton::SetDialogStates(PVZ2UIButton *this,PVZ2UIImage *param_1,PVZ2UIImage *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x1f0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x200) = uVar1;
  *(undefined8 *)(this + 0x208) = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x248) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x250) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 600) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x260) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x268) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x270) = uVar1;
  *(undefined8 *)(this + 0x278) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(this + 0x1ac) = 3;
  return;
}


/* PVZ2UIButton::SetTextJustification(PVZButtonJustification) */

void __thiscall PVZ2UIButton::SetTextJustification(PVZ2UIButton *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x284) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::LayoutPart(PVZButtonJustification) */

void __thiscall PVZ2UIButton::LayoutPart(PVZ2UIButton *this,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  PrimeTypeface *pPVar9;
  undefined8 uVar10;
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 0x2a0);
  uVar7 = 0;
  uVar6 = *(undefined8 *)(this + 0x298);
  iVar3 = 0;
  *(undefined4 *)(this + 700) = param_2;
  local_8 = ___stack_chk_guard;
  this[0x2b9] = (PVZ2UIButton)0x1;
  uVar4 = FUN_0436cad8(uVar6,uVar10);
  do {
    if (uVar4 <= uVar7) {
      iVar1 = *(int *)(this + 700);
      if (iVar1 == 0) {
        iVar2 = (*(int *)(this + 0x50) - iVar3) / 2;
      }
      else if (iVar1 == 1) {
        iVar1 = *(int *)(this + 0x50);
        iVar2 = FUN_0436cc7c(5);
        iVar2 = (iVar1 - iVar3) - iVar2;
      }
      else {
        iVar2 = 0;
        if (iVar1 == -1) {
          iVar2 = FUN_0436cc7c(5);
        }
      }
      for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
        piVar5 = (int *)FUN_0436caec(uVar6,uVar7);
        piVar5[5] = *(int *)(this + 700);
        piVar5[1] = iVar2;
        iVar3 = *(int *)(this + 0x54);
        if (*piVar5 == 0) {
          piVar5[2] = 0;
          piVar5[4] = iVar3;
        }
        else {
          iVar1 = PVZ2UIImage::GetHeight((PVZ2UIImage *)(piVar5 + 8));
          piVar5[2] = (int)(((float)iVar3 - (float)piVar5[0x1a] * (float)iVar1) * 0.5);
          iVar3 = PVZ2UIImage::GetHeight((PVZ2UIImage *)(piVar5 + 8));
          uVar6 = *(undefined8 *)(this + 0x298);
          uVar10 = *(undefined8 *)(this + 0x2a0);
          piVar5[4] = (int)((float)iVar3 * (float)piVar5[0x1a]);
        }
        iVar2 = iVar2 + piVar5[3];
        uVar4 = FUN_0436cad8(uVar6,uVar10);
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar5 = (int *)FUN_0436caec(uVar6,uVar7);
    if (*piVar5 == 0) {
      lVar8 = *(long *)(piVar5 + 0x18);
      if (lVar8 == 0) {
        pPVar9 = *(PrimeTypeface **)(piVar5 + 0x16);
        if (pPVar9 == (PrimeTypeface *)0x0) {
          iVar1 = piVar5[3];
          goto LAB_0436d044;
        }
        FUN_05477b24(auStack_10,piVar5 + 6);
        iVar1 = Sexy::PrimeTypeface::SizeString_Line(pPVar9,auStack_10);
        iVar2 = FUN_0436cc7c(1);
        piVar5[3] = iVar1 + iVar2;
      }
      else {
        FUN_05477b24(auStack_10,piVar5 + 6);
        iVar1 = Sexy::Font::SizeString_Line(lVar8,auStack_10);
        piVar5[3] = iVar1;
      }
      FUN_05476c50(auStack_10);
      uVar6 = *(undefined8 *)(this + 0x298);
      uVar10 = *(undefined8 *)(this + 0x2a0);
      iVar1 = piVar5[3];
      uVar4 = FUN_0436cad8(uVar6,uVar10);
    }
    else {
      iVar1 = PVZ2UIImage::GetWidth((PVZ2UIImage *)(piVar5 + 8));
      iVar2 = FUN_0436cc7c(3);
      uVar6 = *(undefined8 *)(this + 0x298);
      uVar10 = *(undefined8 *)(this + 0x2a0);
      iVar1 = (int)((float)iVar2 + (float)piVar5[0x1a] * (float)iVar1);
      piVar5[3] = iVar1;
      uVar4 = FUN_0436cad8(uVar6,uVar10);
    }
LAB_0436d044:
    iVar3 = iVar3 + iVar1;
    uVar7 = uVar7 + 1;
  } while( true );
}


/* PVZ2UIButton::Resize(int, int, int, int) */

void __thiscall
PVZ2UIButton::Resize(PVZ2UIButton *this,int param_1,int param_2,int param_3,int param_4)

{
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  if (this[0x2b9] == (PVZ2UIButton)0x0) {
    return;
  }
  LayoutPart(this,*(undefined4 *)(this + 700));
  return;
}


/* PVZ2UIButton::SetRadioButtonSelected() */

void __thiscall PVZ2UIButton::SetRadioButtonSelected(PVZ2UIButton *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x1c0);
  this[0x1a8] = (PVZ2UIButton)0x1;
  lVar1 = FUN_0436cac4(uVar4,*(undefined8 *)(this + 0x1c8));
  lVar3 = 0;
  while (lVar3 + 1 != lVar1 + 1) {
    plVar2 = (long *)FUN_0436cafc(uVar4,lVar3);
    *(undefined1 *)(*plVar2 + 0x1a8) = 0;
    lVar3 = lVar3 + 1;
  }
  return;
}


/* PVZ2UIButton::TouchEnded(Sexy::Touch const&) */

void __thiscall PVZ2UIButton::TouchEnded(PVZ2UIButton *this,Touch *param_1)

{
  PVZ2UIButton PVar1;
  long *plVar2;
  
  if ((this[0x1a8] == (PVZ2UIButton)0x0) && (*(long *)(this + 0x2b0) == *(long *)param_1)) {
    PVar1 = this[0x2b8];
    *(undefined8 *)(this + 0x2b0) = 0;
    this[0x2b8] = (PVZ2UIButton)0x0;
    if (PVar1 != (PVZ2UIButton)0x0) {
      if ((this[0x71] != (PVZ2UIButton)0x0) && (*(int *)(this + 0x1ac) == 1)) {
        SetRadioButtonSelected(this);
      }
      plVar2 = *(long **)(this + 0x168);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined4 *)(this + 0xd4));
        return;
      }
    }
  }
  return;
}


/* PVZ2UIButton::getContentsRect() */

void PVZ2UIButton::getContentsRect(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  Insets *in_x8;
  
  if ((-1 < *(int *)(in_x0 + 0x290)) && (-1 < *(int *)(in_x0 + 0x294))) {
    Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x288));
    return;
  }
  iVar1 = FUN_0436cc7c(5);
  iVar2 = FUN_0436cc7c(0);
  iVar3 = FUN_0436cc7c(10);
  Sexy::Insets::Insets(in_x8,iVar1,iVar2,*(int *)(in_x0 + 0x50) - iVar3,*(int *)(in_x0 + 0x54));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::getPositionFromJustification(PVZButtonJustification, int, int) */

void __thiscall
PVZ2UIButton::getPositionFromJustification(undefined8 param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_10;
  
  lVar1 = ___stack_chk_guard;
  getContentsRect();
  if (param_2 == -1) {
    iVar2 = param_3 + local_18;
  }
  else if (param_2 == 0) {
    iVar2 = local_18 + ((param_3 + local_10) - param_4) / 2;
  }
  else {
    iVar2 = 0;
    if (param_2 == 1) {
      iVar2 = ((local_18 + local_10) - param_4) + param_3;
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::GetTextFontDrawn() */

void __thiscall PVZ2UIButton::GetTextFontDrawn(PVZ2UIButton *this)

{
  long lVar1;
  undefined8 uVar2;
  PrimeTypeface *pPVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_054765c4(this + 0xd8);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(this + 0x150);
  }
  else {
    getContentsRect();
    pPVar3 = *(PrimeTypeface **)(this + 0x150);
    uVar2 = 0;
    if (pPVar3 != (PrimeTypeface *)0x0) {
      FUN_05477b24(auStack_20,this + 0xd8);
      uVar2 = Sexy::PrimeTypeface::FitString_Paragraph
                        (pPVar3,auStack_20,local_10,local_c,auStack_24);
      FUN_05476c50(auStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::TouchMoved(Sexy::Touch const&) */

void __thiscall PVZ2UIButton::TouchMoved(PVZ2UIButton *this,Touch *param_1)

{
  PVZ2UIButton PVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2b0) == *(long *)param_1) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    PVar1 = (PVZ2UIButton)
            Sexy::TRect<int>::Contains
                      ((TRect<int> *)aIStack_18,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
    this[0x2b8] = PVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::SetDialogStates(PVZ2UIImage const&, Sexy::Color const&) */

void __thiscall
PVZ2UIButton::SetDialogStates(PVZ2UIButton *this,PVZ2UIImage *param_1,Color *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1d8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1e0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x1f0) = uVar1;
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x200) = uVar1;
  *(undefined8 *)(this + 0x208) = *(undefined8 *)(param_1 + 0x30);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40);
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x278) = local_10;
  *(undefined8 *)(this + 0x248) = local_40;
  *(undefined8 *)(this + 0x250) = uStack_38;
  *(undefined8 *)(this + 600) = local_30;
  *(undefined8 *)(this + 0x260) = uStack_28;
  *(undefined8 *)(this + 0x268) = local_20;
  *(undefined8 *)(this + 0x270) = uStack_18;
  lVar3 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x2dc) = uVar1;
  *(undefined8 *)(this + 0x2e4) = uVar2;
  *(undefined4 *)(this + 0x1ac) = 3;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::SetDelayDisabled(float) */

void __thiscall PVZ2UIButton::SetDelayDisabled(PVZ2UIButton *this,float param_1)

{
  float fVar1;
  
  (**(code **)(*(long *)this + 0x188))(this,1);
  if (_FUN_0436de50 < param_1) {
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x2c4) = fVar1 + param_1;
  }
  return;
}


/* PVZ2UIButton::Update() */

void __thiscall PVZ2UIButton::Update(PVZ2UIButton *this)

{
  float fVar1;
  float fVar2;
  
  Sexy::ButtonWidget::Update((ButtonWidget *)this);
  fVar2 = *(float *)(this + 0x2c4);
  if ((0.0 < fVar2) && (fVar1 = (float)PVZ_T(), fVar2 < fVar1)) {
    (**(code **)(*(long *)this + 0x188))(this,0);
    *(undefined4 *)(this + 0x2c4) = 0xbf800000;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::internalDraw(Sexy::Graphics*) */

void __thiscall PVZ2UIButton::internalDraw(PVZ2UIButton *this,Graphics *param_1)

{
  PVZ2UIButton *pPVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  Insets *pIVar13;
  Insets *pIVar14;
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  long local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [12];
  int local_c;
  long local_8;
  
  iVar4 = *(int *)(this + 0x1ac);
  local_8 = ___stack_chk_guard;
  if (iVar4 == 2) {
    cVar2 = FUN_0436caac(*(undefined4 *)(this + 0x1d8));
    if (cVar2 != '\0') {
      Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x1d8),param_1,aIStack_18);
    }
    cVar2 = FUN_0436caac(*(undefined4 *)(this + 0x210));
    if (cVar2 != '\0') {
      uVar3 = *(undefined4 *)(this + 0x280);
      uVar6 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x218));
      iVar5 = getPositionFromJustification(this,uVar3,0,uVar6);
      getContentsRect();
      iVar4 = local_24;
      getContentsRect();
      iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x218));
      iVar8 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x218));
      iVar9 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x218));
      Sexy::Insets::Insets(aIStack_18,iVar5,iVar4 + (local_c - iVar7) / 2,iVar8,iVar9);
      PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x210),param_1,aIStack_18);
    }
    goto LAB_0436e2e0;
  }
  if (iVar4 == 3) {
    if ((this[0x2b8] == (PVZ2UIButton)0x0) || (this[0x6e] != (PVZ2UIButton)0x0)) {
      Sexy::Color::Color((Color *)aIStack_18,1);
      cVar2 = Sexy::TRect<int>::operator!=((TRect<int> *)(this + 0x2cc),(TRect *)aIStack_18);
      if (cVar2 != '\0') {
        Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x2cc));
        Sexy::Graphics::SetColorizeImages(param_1,true);
      }
      iVar4 = *(int *)(this + 0x50);
      iVar5 = *(int *)(this + 0x54);
LAB_0436e8dc:
      Sexy::Insets::Insets(aIStack_18,0,0,iVar4,iVar5);
      PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x1d8),param_1,aIStack_18);
      goto LAB_0436e2e0;
    }
    cVar2 = FUN_0436caac(*(undefined4 *)(this + 0x248));
    if (cVar2 == '\0') {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_28,param_1);
      Sexy::Color::Color((Color *)aIStack_18,1);
      cVar2 = Sexy::TRect<int>::operator!=((TRect<int> *)(this + 0x2dc),(TRect *)aIStack_18);
      if (cVar2 != '\0') {
        Sexy::Graphics::SetColor(param_1,(Color *)(this + 0x2dc));
        Sexy::Graphics::SetColorizeImages(param_1,true);
      }
      Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x1d8),param_1,aIStack_18);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_28);
      goto LAB_0436e2e0;
    }
    iVar4 = *(int *)(this + 0x50);
    iVar5 = *(int *)(this + 0x54);
  }
  else {
    if (iVar4 != 1) goto LAB_0436e2e0;
    if (this[0x2c0] == (PVZ2UIButton)0x0) {
      if (this[0x1a8] == (PVZ2UIButton)0x0) {
LAB_0436e8f4:
        iVar4 = *(int *)(this + 0x50);
        iVar5 = *(int *)(this + 0x54);
        goto LAB_0436e8dc;
      }
LAB_0436e5f4:
      iVar4 = *(int *)(this + 0x50);
    }
    else {
      Sexy::Graphics::ClearClipRect(param_1);
      if (this[0x1a8] == (PVZ2UIButton)0x0) goto LAB_0436e8f4;
      if (this[0x2c0] == (PVZ2UIButton)0x0) goto LAB_0436e5f4;
      iVar4 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x250));
      if (this[0x2c0] != (PVZ2UIButton)0x0) {
        iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x250));
        goto LAB_0436e608;
      }
    }
    iVar5 = *(int *)(this + 0x54);
  }
LAB_0436e608:
  Sexy::Insets::Insets(aIStack_18,0,0,iVar4,iVar5);
  PVZ2UIImage::Draw((PVZ2UIImage *)(this + 0x248),param_1,aIStack_18);
LAB_0436e2e0:
  pPVar1 = this + 0xd8;
  lVar10 = FUN_054765c4(pPVar1);
  if (lVar10 != 0) {
    if (*(long *)(this + 0x158) == 0) {
      if (*(long *)(this + 0x150) != 0) {
        getContentsRect();
        uVar15 = *(undefined8 *)(this + 0x150);
        Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1b0));
        uVar3 = getDrawStringJust(this,*(undefined4 *)(this + 0x284));
        WriteWordInRect(param_1,pPVar1,&local_28,uVar15,aIStack_18,uVar3,1);
      }
    }
    else {
      getContentsRect();
      uVar15 = *(undefined8 *)(this + 0x158);
      Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1b0));
      uVar3 = getDrawStringJust(this,*(undefined4 *)(this + 0x284));
      WriteWordInRect(param_1,pPVar1,&local_28,uVar15,aIStack_18,uVar3,1);
    }
  }
  uVar15 = *(undefined8 *)(this + 0x298);
  uVar16 = 0;
  lVar10 = FUN_0436cad8(uVar15,*(undefined8 *)(this + 0x2a0));
  if (lVar10 != 0) {
    do {
      piVar11 = (int *)FUN_0436caec(uVar15,uVar16);
      pIVar14 = (Insets *)(piVar11 + 1);
      Sexy::Insets::Insets((Insets *)&local_48,pIVar14);
      if (*piVar11 == 0) {
        local_58 = *(long *)(piVar11 + 0x18);
        if (local_58 == 0) {
          local_58 = *(long *)(piVar11 + 0x16);
          if (local_58 == 0) {
            local_58 = *(long *)(this + 0x158);
            if (local_58 != 0) goto LAB_0436e3bc;
            local_58 = *(long *)(this + 0x150);
            if (local_58 == 0) goto LAB_0436e3f8;
          }
          Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1b0));
          uVar3 = getDrawStringJust(this,piVar11[5]);
          WriteWordInRect(param_1,piVar11 + 6,pIVar14,local_58,aIStack_18,uVar3,0);
        }
        else {
LAB_0436e3bc:
          Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1b0));
          uVar3 = getDrawStringJust(this,piVar11[5]);
          WriteWordInRect(param_1,piVar11 + 6,pIVar14,local_58,aIStack_18,uVar3,0);
        }
      }
      else {
        if (*piVar11 == 1) {
          iVar4 = LotteryResultProgressBar::GetCurrentLevel
                            (*(LotteryResultProgressBar **)(piVar11 + 10));
          fVar17 = (float)piVar11[0x1c];
          Sexy::Insets::Insets
                    ((Insets *)&local_38,0,0,
                     (local_40 - piVar11[0x1b]) - (int)((float)iVar4 * fVar17),local_3c);
          iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(piVar11 + 10));
          Sexy::Insets::Insets
                    ((Insets *)&local_28,0,0,(int)((float)iVar4 * fVar17),
                     (int)((float)iVar5 * (float)piVar11[0x1c]));
          iVar4 = local_20 + local_30 + piVar11[0x1b];
          if (piVar11[5] == 0) {
            local_28 = local_48 + (local_40 - iVar4) / 2;
          }
          else if (piVar11[5] == 1) {
            local_28 = (local_48 + local_40) - iVar4;
          }
          local_38 = piVar11[0x1b] + local_20 + local_28;
          lVar10 = *(long *)(piVar11 + 0x18);
          local_34 = local_44;
          local_24 = (int)((float)local_44 + (float)(local_3c - local_1c) * 0.5);
          pIVar14 = (Insets *)&local_28;
          if (lVar10 == 0) {
            lVar10 = *(long *)(piVar11 + 0x16);
            if (lVar10 == 0) {
              lVar10 = *(long *)(this + 0x158);
              if (lVar10 == 0) {
                lVar10 = *(long *)(this + 0x150);
                if (lVar10 != 0) {
                  pIVar13 = (Insets *)getFontColor(this);
                  Sexy::Insets::Insets(aIStack_18,pIVar13);
                  WriteWordInRect(param_1,piVar11 + 6,(Insets *)&local_38,lVar10,aIStack_18,5,0);
                }
              }
              else {
                pIVar13 = (Insets *)getFontColor(this);
                Sexy::Insets::Insets(aIStack_18,pIVar13);
                WriteWordInRect(param_1,piVar11 + 6,(Insets *)&local_38,lVar10,aIStack_18,5,0);
              }
            }
            else {
              pIVar13 = (Insets *)getFontColor(this);
              Sexy::Insets::Insets(aIStack_18,pIVar13);
              WriteWordInRect(param_1,piVar11 + 6,(Insets *)&local_38,lVar10,aIStack_18,5,0);
            }
          }
          else {
            pIVar13 = (Insets *)getFontColor(this);
            Sexy::Insets::Insets(aIStack_18,pIVar13);
            WriteWordInRect(param_1,piVar11 + 6,(Insets *)&local_38,lVar10,aIStack_18,5,0);
          }
        }
        Sexy::Insets::Insets(aIStack_18,pIVar14);
        PVZ2UIImage::Draw((PVZ2UIImage *)(piVar11 + 8),param_1,aIStack_18);
      }
LAB_0436e3f8:
      uVar16 = uVar16 + 1;
      uVar15 = *(undefined8 *)(this + 0x298);
      uVar12 = FUN_0436cad8(uVar15,*(undefined8 *)(this + 0x2a0));
    } while (uVar16 < uVar12);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::PVZ2UIButton(int, Sexy::ButtonListener*, std::wstring const&, Sexy::Color const&)
    */

void __thiscall
PVZ2UIButton::PVZ2UIButton
          (PVZ2UIButton *this,int param_1,ButtonListener *param_2,wstring *param_3,Color *param_4)

{
  undefined8 uVar1;
  long lVar2;
  PrimeTypeface *pPVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  Whitelistable::Whitelistable((Whitelistable *)(this + 0x198));
  *(undefined ***)this = &PTR_GetClass_06835b80;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UIButton_06835ed8;
  Sexy::Color::Color((Color *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0x1d8));
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0x210));
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0x248));
  Sexy::Insets::Insets((Insets *)(this + 0x288));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x298));
  this[0x2c8] = (PVZ2UIButton)0x0;
  Sexy::Color::Color((Color *)(this + 0x2cc),1);
  Sexy::Color::Color((Color *)(this + 0x2dc),1);
  *(undefined8 *)(this + 0x2f0) = 0;
  TodStringTranslate(param_3);
  FUN_054766c8(this + 0xd8,auStack_10);
  FUN_05476c50(auStack_10);
  this[0x1a8] = (PVZ2UIButton)0x0;
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  SetFont(this,pPVar3);
  lVar2 = ___stack_chk_guard;
  uVar1 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x1b0) = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x1b8) = uVar1;
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x284) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x290) = 0xffffffff;
  *(undefined4 *)(this + 0x294) = 0xffffffff;
  *(undefined8 *)(this + 0x2b0) = 0;
  this[0x2b8] = (PVZ2UIButton)0x0;
  this[0x2b9] = (PVZ2UIButton)0x0;
  *(undefined4 *)(this + 700) = 0;
  this[0x2c0] = (PVZ2UIButton)0x0;
  this[0x2f8] = (PVZ2UIButton)0x1;
  this[0x2f9] = (PVZ2UIButton)0x0;
  *(undefined4 *)(this + 0x2c4) = 0xbf800000;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIButton::ClearButton() */

void __thiscall PVZ2UIButton::ClearButton(PVZ2UIButton *this)

{
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::clear
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::UnlinkRadioButton(PVZ2UIButton*) */

void __thiscall PVZ2UIButton::UnlinkRadioButton(PVZ2UIButton *this,PVZ2UIButton *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((PVZ2UIButton *)*puVar2 == param_1) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::erase
                         ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)this_00,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::~PVZ2UIButton() */

void __thiscall PVZ2UIButton::~PVZ2UIButton(PVZ2UIButton *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06835b80;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UIButton_06835ed8;
  if (*(long **)(this + 0x2f0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2f0) + 0x18))();
    *(undefined8 *)(this + 0x2f0) = 0;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1c0);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    UnlinkRadioButton((PVZ2UIButton *)*puVar2,this);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::~vector
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)this_00);
  Whitelistable::~Whitelistable((Whitelistable *)(this + 0x198));
  Sexy::ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ2UIButton::~PVZ2UIButton() */

void __thiscall PVZ2UIButton::~PVZ2UIButton(PVZ2UIButton *this)

{
  ~PVZ2UIButton(this + -0x198);
  return;
}


/* PVZ2UIButton::~PVZ2UIButton() */

void __thiscall PVZ2UIButton::~PVZ2UIButton(PVZ2UIButton *this)

{
  ~PVZ2UIButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UIButton::~PVZ2UIButton() */

void __thiscall PVZ2UIButton::~PVZ2UIButton(PVZ2UIButton *this)

{
  ~PVZ2UIButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIButton::Draw(PVZ2UIButton *this,Graphics *param_1)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  code *pcVar4;
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2f9] == (PVZ2UIButton)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
    if ((this[0x6e] == (PVZ2UIButton)0x0) && (this[0x2c8] == (PVZ2UIButton)0x0)) {
      internalDraw(this,param_1);
    }
    else {
      pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_1);
      CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                ((CachedResourcePtr *)&DAT_06afd1e0);
      pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
      pcVar4 = *(code **)(*(long *)pRVar3 + 0x38);
      std::string::string(asStack_20,"Default");
      (*pcVar4)(pRVar3,asStack_20,1);
      std::string::~string(asStack_20);
      nop();
      Sexy::RenderEffectAutoState::RenderEffectAutoState
                ((RenderEffectAutoState *)asStack_20,param_1,pRVar3,1);
      while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                               ((RenderEffectAutoState *)asStack_20), bVar1) {
        internalDraw(this,param_1);
        Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
      }
      Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
    }
    (**(code **)(*(long *)this + 0x340))(this,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PVZ2UIButton::DrawAll(PVZ2UIButton *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  RenderEffectDefinition *pRVar2;
  RenderEffect *pRVar3;
  code *pcVar4;
  GraphicsAutoState aGStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_2);
  if ((this[0x6e] == (PVZ2UIButton)0x0) && (this[0x2c8] == (PVZ2UIButton)0x0)) {
    Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  }
  else {
    pRVar2 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(param_2);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06afd1e0);
    pRVar3 = (RenderEffect *)Sexy::Graphics3D::GetEffect(pRVar2);
    pcVar4 = *(code **)(*(long *)pRVar3 + 0x38);
    std::string::string(asStack_20,"Default");
    (*pcVar4)(pRVar3,asStack_20,1);
    std::string::~string(asStack_20);
    nop();
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)asStack_20,param_2,pRVar3,1);
    while (bVar1 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)asStack_20), bVar1) {
      Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)asStack_20);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)asStack_20);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddImage(PVZ2UIImage const&, Sexy::TRect<int> const&) */

void __thiscall PVZ2UIButton::AddImage(PVZ2UIButton *this,PVZ2UIImage *param_1,TRect *param_2)

{
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  local_6c = 0;
  local_60 = *(undefined8 *)param_1;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  local_50 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  local_7c = *(undefined8 *)param_2;
  uStack_74 = *(undefined8 *)(param_2 + 8);
  local_30 = *(undefined8 *)(param_1 + 0x30);
  local_80 = 2;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)&local_80);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddImageScale(PVZ2UIImage const&, PVZButtonJustification, float) */

void __thiscall
PVZ2UIButton::AddImageScale
          (undefined4 param_1_00,PVZ2UIButton *this,undefined8 *param_1,undefined4 param_4)

{
  undefined4 local_80 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  local_30 = param_1[6];
  local_60 = *param_1;
  uStack_58 = param_1[1];
  local_50 = param_1[2];
  uStack_48 = param_1[3];
  local_40 = param_1[4];
  uStack_38 = param_1[5];
  local_80[0] = 2;
  local_18 = param_1_00;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)local_80);
  LayoutPart(this,param_4);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddImage(PVZ2UIImage const&, PVZButtonJustification) */

void __thiscall PVZ2UIButton::AddImage(PVZ2UIButton *this,undefined8 *param_1,undefined4 param_3)

{
  undefined4 local_80 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  local_60 = *param_1;
  uStack_58 = param_1[1];
  local_50 = param_1[2];
  uStack_48 = param_1[3];
  local_40 = param_1[4];
  uStack_38 = param_1[5];
  local_30 = param_1[6];
  local_80[0] = 2;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)local_80);
  LayoutPart(this,param_3);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddText(std::wstring const&, Sexy::TRect<int>, Sexy::Font*, PVZButtonJustification)
    */

void __thiscall
PVZ2UIButton::AddText
          (PVZ2UIButton *this,wstring *param_1,undefined8 *param_3,undefined8 param_4,
          undefined4 param_5)

{
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined1 auStack_68 [72];
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  local_80 = 0;
  TodStringTranslate(param_1);
  FUN_054766c8(auStack_68,auStack_88);
  FUN_05476c50(auStack_88);
  local_7c = *param_3;
  uStack_74 = param_3[1];
  local_6c = param_5;
  local_20 = param_4;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)&local_80);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddText(std::wstring const&, Sexy::TRect<int>, PVZButtonJustification) */

void __thiscall
PVZ2UIButton::AddText(PVZ2UIButton *this,wstring *param_1,undefined8 *param_3,undefined4 param_4)

{
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined1 auStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  local_80 = 0;
  TodStringTranslate(param_1);
  FUN_054766c8(auStack_68,auStack_88);
  FUN_05476c50(auStack_88);
  local_7c = *param_3;
  uStack_74 = param_3[1];
  local_6c = param_4;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)&local_80);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddText(std::wstring const&, Sexy::Font*, PVZButtonJustification) */

void __thiscall
PVZ2UIButton::AddText(PVZ2UIButton *this,wstring *param_1,undefined8 param_2,undefined4 param_4)

{
  undefined1 auStack_88 [8];
  undefined4 local_80 [5];
  undefined4 local_6c;
  undefined1 auStack_68 [72];
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  local_80[0] = 0;
  TodStringTranslate(param_1);
  FUN_054766c8(auStack_68,auStack_88);
  FUN_05476c50(auStack_88);
  local_6c = param_4;
  local_20 = param_2;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)local_80);
  LayoutPart(this,param_4);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddText(std::wstring const&, PVZButtonJustification) */

void __thiscall PVZ2UIButton::AddText(PVZ2UIButton *this,wstring *param_1,undefined4 param_3)

{
  undefined1 auStack_88 [8];
  undefined4 local_80 [5];
  undefined4 local_6c;
  undefined1 auStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  local_80[0] = 0;
  TodStringTranslate(param_1);
  FUN_054766c8(auStack_68,auStack_88);
  FUN_05476c50(auStack_88);
  local_6c = param_3;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)local_80);
  LayoutPart(this,param_3);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddText(std::wstring const&, Sexy::TRect<int>, Sexy::PrimeTypeface*,
   PVZButtonJustification) */

void __thiscall
PVZ2UIButton::AddText
          (PVZ2UIButton *this,wstring *param_1,undefined8 *param_3,undefined8 param_4,
          undefined4 param_5)

{
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined1 auStack_68 [64];
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  local_80 = 0;
  TodStringTranslate(param_1);
  FUN_054766c8(auStack_68,auStack_88);
  FUN_05476c50(auStack_88);
  local_7c = *param_3;
  uStack_74 = param_3[1];
  local_6c = param_5;
  local_28 = param_4;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)&local_80);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddText(std::wstring const&, Sexy::TRect<int>, PrimeText_PotentialTypeface*,
   PVZButtonJustification) */

void __thiscall
PVZ2UIButton::AddText
          (PVZ2UIButton *this,undefined8 param_1,Insets *param_3,
          PrimeText_PotentialTypeface *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_3);
  uVar1 = PrimeText_PotentialTypeface::Typeface(param_4);
  AddText(this,param_1,aIStack_18,uVar1,param_5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddText(std::wstring const&, Sexy::PrimeTypeface*, PVZButtonJustification) */

void __thiscall
PVZ2UIButton::AddText(PVZ2UIButton *this,wstring *param_1,undefined8 param_2,undefined4 param_4)

{
  undefined1 auStack_88 [8];
  undefined4 local_80 [5];
  undefined4 local_6c;
  undefined1 auStack_68 [64];
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  local_80[0] = 0;
  TodStringTranslate(param_1);
  FUN_054766c8(auStack_68,auStack_88);
  FUN_05476c50(auStack_88);
  local_6c = param_4;
  local_28 = param_2;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)local_80);
  LayoutPart(this,param_4);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIButton::AddText(std::wstring const&, PrimeText_PotentialTypeface*, PVZButtonJustification)
    */

void __thiscall
PVZ2UIButton::AddText
          (PVZ2UIButton *this,undefined8 param_1,PrimeText_PotentialTypeface *param_2,
          undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = PrimeText_PotentialTypeface::Typeface(param_2);
  AddText(this,param_1,uVar1,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButton::AddTextWithIcon(std::wstring const&, PVZ2UIImage const&, int, Sexy::TRect<int>,
   PVZButtonJustification, float) */

void __thiscall
PVZ2UIButton::AddTextWithIcon
          (undefined4 param_1_00,PVZ2UIButton *this,wstring *param_1,undefined8 *param_2,
          undefined4 param_3,undefined8 *param_6,undefined4 param_7)

{
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButtonPart::PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  local_80 = 1;
  TodStringTranslate(param_1);
  FUN_054766c8(auStack_68,auStack_88);
  FUN_05476c50(auStack_88);
  local_60 = *param_2;
  uStack_58 = param_2[1];
  local_50 = param_2[2];
  uStack_48 = param_2[3];
  local_40 = param_2[4];
  uStack_38 = param_2[5];
  local_7c = *param_6;
  uStack_74 = param_6[1];
  local_30 = param_2[6];
  local_6c = param_7;
  local_14 = param_3;
  local_10 = param_1_00;
  std::vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>>::push_back
            ((vector<PVZ2UIButtonPart,std::allocator<PVZ2UIButtonPart>> *)(this + 0x298),
             (PVZ2UIButtonPart *)&local_80);
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIButton::LinkRadioButtons(std::vector<PVZ2UIButton*, std::allocator<PVZ2UIButton*> >) */

void __thiscall PVZ2UIButton::LinkRadioButtons(PVZ2UIButton *this,undefined8 *param_2)

{
  PVZ2UIButton **ppPVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *param_2;
    uVar2 = FUN_0436cac4(uVar5,param_2[1]);
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        return;
      }
      ppPVar1 = (PVZ2UIButton **)FUN_0436cad0(uVar5,uVar4);
      uVar4 = uVar3;
    } while (*ppPVar1 == this);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x1c0),ppPVar1);
  } while( true );
}


/* PVZ2UIButton::SetNormalColor(Sexy::Color const&) */

void __thiscall PVZ2UIButton::SetNormalColor(PVZ2UIButton *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x2cc) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x2d4) = uVar1;
  return;
}


/* PVZ2UIButton::GetImageDown() */

void PVZ2UIButton::GetImageDown(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x0;
  undefined8 *in_x8;
  
  in_x8[6] = *(undefined8 *)(in_x0 + 0x278);
  uVar3 = *(undefined8 *)(in_x0 + 0x250);
  uVar1 = *(undefined8 *)(in_x0 + 600);
  uVar4 = *(undefined8 *)(in_x0 + 0x260);
  uVar2 = *(undefined8 *)(in_x0 + 0x268);
  uVar5 = *(undefined8 *)(in_x0 + 0x270);
  *in_x8 = *(undefined8 *)(in_x0 + 0x248);
  in_x8[1] = uVar3;
  in_x8[2] = uVar1;
  in_x8[3] = uVar4;
  in_x8[4] = uVar2;
  in_x8[5] = uVar5;
  return;
}


/* PVZ2UIButton::GetPressColor() */

Insets * PVZ2UIButton::GetPressColor(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x2dc));
  return in_x8;
}

