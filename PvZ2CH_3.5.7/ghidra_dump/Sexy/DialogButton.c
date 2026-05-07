// Class: Sexy::DialogButton


/* Sexy::DialogButton::~DialogButton() */

void __thiscall Sexy::DialogButton::~DialogButton(DialogButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2dca0;
  ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* Sexy::DialogButton::~DialogButton() */

void __thiscall Sexy::DialogButton::~DialogButton(DialogButton *this)

{
  ~DialogButton(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DialogButton::DialogButton(Sexy::Image*, int, Sexy::ButtonListener*) */

void __thiscall
Sexy::DialogButton::DialogButton
          (DialogButton *this,Image *param_1,int param_2,ButtonListener *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = ___stack_chk_guard;
  ButtonWidget::ButtonWidget((ButtonWidget *)this,param_2,param_3);
  *(Image **)(this + 0x198) = param_1;
  *(undefined ***)this = &PTR_GetClass_06a2dca0;
  if ((param_1 != (Image *)0x0) && (iVar2 = Image::GetCelCount(param_1), iVar2 == 3)) {
    Image::GetCelRect((int)*(undefined8 *)(this + 0x198));
    *(undefined8 *)(this + 0x110) = local_18;
    *(undefined8 *)(this + 0x118) = uStack_10;
    Image::GetCelRect((int)*(undefined8 *)(this + 0x198));
    *(undefined8 *)(this + 0x120) = local_18;
    *(undefined8 *)(this + 0x128) = uStack_10;
    Image::GetCelRect((int)*(undefined8 *)(this + 0x198));
    *(undefined8 *)(this + 0x130) = local_18;
    *(undefined8 *)(this + 0x138) = uStack_10;
  }
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1a4) = 1;
  *(undefined4 *)(this + 0x1a0) = 1;
  this[0xa0] = (DialogButton)0x1;
  Widget::SetColors((Widget *)this,(int *)&DAT_06a89e20,6);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::DialogButton::Draw(Sexy::Graphics*) */

void __thiscall Sexy::DialogButton::Draw(DialogButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  Color *pCVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x161] == (DialogButton)0x0) {
    if (*(long *)(this + 0x198) == 0) {
      ButtonWidget::Draw((ButtonWidget *)this,param_1);
    }
    else {
      ButtonWidget::EnsureFonts((ButtonWidget *)this);
      cVar3 = (**(code **)(*(long *)this + 0x330))(this);
      if (*(int *)(this + 0x118) == 0) {
        if (cVar3 != '\0') {
          Graphics::Translate(param_1,*(int *)(this + 0x1a0),*(int *)(this + 0x1a4));
        }
        Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
        Graphics::DrawImageBox(param_1,(TRect *)aIStack_18,*(Image **)(this + 0x198));
      }
      else {
        if (((this[0x6e] == (DialogButton)0x0) || (*(int *)(this + 0x148) < 1)) ||
           (*(int *)(this + 0x14c) < 1)) {
          cVar4 = (**(code **)(*(long *)this + 0x330))(this);
          if (cVar4 == '\0') {
            if (*(double *)(this + 0x178) <= 0.0) {
              if (this[0x71] == (DialogButton)0x0) {
                Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
                Graphics::DrawImageBox
                          (param_1,(TRect *)(this + 0x110),(TRect *)aIStack_18,
                           *(Image **)(this + 0x198));
              }
              else {
                Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
                Graphics::DrawImageBox
                          (param_1,(TRect *)(this + 0x120),(TRect *)aIStack_18,
                           *(Image **)(this + 0x198));
              }
            }
            else {
              if (*(double *)(this + 0x178) < 1.0) {
                Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
                Graphics::DrawImageBox
                          (param_1,(TRect *)(this + 0x110),(TRect *)aIStack_18,
                           *(Image **)(this + 0x198));
              }
              Graphics::SetColorizeImages(param_1,true);
              Insets::Insets(aIStack_18,0xff,0xff,0xff,(int)(*(double *)(this + 0x178) * 255.0));
              Graphics::SetColor(param_1,(Color *)aIStack_18);
              Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
              Graphics::DrawImageBox
                        (param_1,(TRect *)(this + 0x120),(TRect *)aIStack_18,
                         *(Image **)(this + 0x198));
              Graphics::SetColorizeImages(param_1,false);
            }
          }
          else {
            Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
            Graphics::DrawImageBox
                      (param_1,(TRect *)(this + 0x130),(TRect *)aIStack_18,*(Image **)(this + 0x198)
                      );
          }
        }
        else {
          Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
          Graphics::DrawImageBox
                    (param_1,(TRect *)(this + 0x140),(TRect *)aIStack_18,*(Image **)(this + 0x198));
        }
        if (cVar3 != '\0') {
          Graphics::Translate(param_1,*(int *)(this + 0x1a0),*(int *)(this + 0x1a4));
        }
      }
      if ((*(long *)(this + 0x150) != 0) || (*(long *)(this + 0x158) != 0)) {
        Color::Color((Color *)&local_28);
        if (this[0x71] == (DialogButton)0x0) {
          puVar9 = (undefined8 *)FUN_05148abc(*(undefined8 *)(this + 0x78),0);
          lVar11 = *(long *)(this + 0x158);
          local_28 = *puVar9;
          uStack_20 = puVar9[1];
        }
        else {
          puVar9 = (undefined8 *)FUN_05148abc(*(undefined8 *)(this + 0x78),1);
          lVar11 = *(long *)(this + 0x158);
          local_28 = *puVar9;
          uStack_20 = puVar9[1];
        }
        if (lVar11 == 0) {
          lVar11 = *(long *)(this + 0x150);
          if (lVar11 != 0) {
            iVar1 = *(int *)(this + 0x50);
            FUN_05477b24((Color *)aIStack_18,this + 0xd8);
            iVar7 = PrimeTypeface::StringWidth(lVar11,(Color *)aIStack_18);
            FUN_05476c50((Color *)aIStack_18);
            iVar2 = *(int *)(this + 0x54);
            fVar13 = (float)PrimeTypeface::GetAscent(*(PrimeTypeface **)(this + 0x150));
            fVar14 = UI::TypeSensitiveZero<float>();
            fVar15 = (float)PrimeTypeface::GetAscent(*(PrimeTypeface **)(this + 0x150));
            iVar5 = *(int *)(this + 0x1a8);
            iVar6 = *(int *)(this + 0x1ac);
            uVar12 = *(undefined8 *)(this + 0x150);
            FUN_05477b24(auStack_30,this + 0xd8);
            Color::Color((Color *)aIStack_18,0xffffffff);
            PrimeTypeface::DrawString_Simple
                      ((PrimeTypeface *)(float)(iVar5 + (iVar1 - iVar7) / 2),
                       (float)((int)(((((float)iVar2 + -1.0 + fVar13) - fVar14) -
                                     fVar15 * 0.16666667) * 0.5) + iVar6),uVar12,param_1,auStack_30,
                       (Color *)aIStack_18,0);
            FUN_05476c50(auStack_30);
          }
        }
        else {
          Graphics::SetColor(param_1,(Color *)&local_28);
          Effect_Barrage::SetViceBarrage
                    ((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x158));
          iVar1 = *(int *)(this + 0x50);
          iVar5 = (**(code **)(**(long **)(this + 0x158) + 0x80))
                            (*(long **)(this + 0x158),(wstring *)(this + 0xd8));
          iVar2 = *(int *)(this + 0x54);
          iVar6 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
          iVar7 = (**(code **)(**(long **)(this + 0x158) + 0x58))(*(long **)(this + 0x158));
          iVar8 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
          Graphics::DrawString
                    (param_1,(wstring *)(this + 0xd8),*(int *)(this + 0x1a8) + (iVar1 - iVar5) / 2,
                     *(int *)(this + 0x1ac) + ((((iVar2 + iVar6) - iVar7) - iVar8 / 6) + -1) / 2);
        }
      }
      if (*(long *)(this + 0xf0) != 0) {
        if (this[0x71] == (DialogButton)0x0) {
          pCVar10 = (Color *)FUN_05148abc(*(undefined8 *)(this + 0x78),0);
          Graphics::SetColor(param_1,pCVar10);
        }
        else {
          pCVar10 = (Color *)FUN_05148abc(*(undefined8 *)(this + 0x78),1);
          Graphics::SetColor(param_1,pCVar10);
        }
        iVar1 = *(int *)(this + 0x50);
        iVar5 = LotteryResultProgressBar::GetCurrentLevel
                          (*(LotteryResultProgressBar **)(this + 0xf0));
        iVar2 = *(int *)(this + 0x54);
        iVar6 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
        Graphics::DrawImage(param_1,*(Image **)(this + 0xf0),
                            *(int *)(this + 0x1a8) + (iVar1 - iVar5) / 2,
                            *(int *)(this + 0x1ac) + (iVar2 - iVar6) / 2);
      }
      if (cVar3 != '\0') {
        Graphics::Translate(param_1,-*(int *)(this + 0x1a0),-*(int *)(this + 0x1a4));
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

