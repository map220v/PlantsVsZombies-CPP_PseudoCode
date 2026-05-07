// Class: Sexy::HyperlinkWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::HyperlinkWidget::Draw(Sexy::Graphics*) */

void __thiscall Sexy::HyperlinkWidget::Draw(HyperlinkWidget *this,Graphics *param_1)

{
  wstring *pwVar1;
  HyperlinkWidget *pHVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  PrimeGlyphMesh *this_00;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ButtonWidget::EnsureFonts((ButtonWidget *)this);
  Color::Color((Color *)&local_28);
  if (this[0x71] == (HyperlinkWidget)0x0) {
    local_28 = *(undefined8 *)(this + 0x198);
    uStack_20 = *(undefined8 *)(this + 0x1a0);
    plVar7 = *(long **)(this + 0x158);
  }
  else {
    local_28 = *(undefined8 *)(this + 0x1a8);
    uStack_20 = *(undefined8 *)(this + 0x1b0);
    plVar7 = *(long **)(this + 0x158);
  }
  if (plVar7 == (long *)0x0) {
    lVar8 = *(long *)(this + 0x150);
    if (lVar8 == 0) {
      fVar11 = 0.0;
      iVar4 = 0;
      iVar6 = 0;
    }
    else {
      pHVar2 = this + 0xd8;
      FUN_05477b24(aCStack_18,pHVar2);
      iVar6 = PrimeTypeface::StringWidth(lVar8,aCStack_18);
      fVar11 = (float)iVar6;
      FUN_05476c50(aCStack_18);
      uVar9 = *(undefined8 *)(this + 0x150);
      iVar6 = *(int *)(this + 0x50);
      FUN_05477b24(aCStack_18,pHVar2);
      iVar4 = PrimeTypeface::StringWidth(uVar9,aCStack_18);
      iVar6 = (iVar6 - iVar4) / 2;
      FUN_05476c50(aCStack_18);
      iVar4 = *(int *)(this + 0x54);
      fVar10 = (float)PrimeTypeface::GetAscent(*(PrimeTypeface **)(this + 0x150));
      uVar9 = *(undefined8 *)(this + 0x150);
      iVar4 = (int)((fVar10 + (float)iVar4) * 0.5 + -1.0);
      FUN_05477b24(auStack_30,pHVar2);
      Color::Color(aCStack_18,0xffffffff);
      this_00 = (PrimeGlyphMesh *)
                PrimeTypeface::PrepareString_Simple
                          ((PrimeTypeface *)(float)iVar6,(float)iVar4,uVar9,auStack_30,aCStack_18);
      FUN_05476c50(auStack_30);
      if (this_00 != (PrimeGlyphMesh *)0x0) {
        PrimeGlyphMesh::~PrimeGlyphMesh(this_00);
        AK::FreeHook(this_00);
      }
    }
  }
  else {
    pwVar1 = (wstring *)(this + 0xd8);
    iVar4 = (**(code **)(*plVar7 + 0x80))(plVar7,pwVar1);
    iVar6 = *(int *)(this + 0x50);
    fVar11 = (float)iVar4;
    iVar5 = (**(code **)(**(long **)(this + 0x158) + 0x80))(*(long **)(this + 0x158),pwVar1);
    iVar4 = *(int *)(this + 0x54);
    iVar6 = (iVar6 - iVar5) / 2;
    iVar5 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
    iVar4 = (iVar4 + iVar5) / 2 + -1;
    Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x158));
    Graphics::DrawString(param_1,pwVar1,iVar6,iVar4);
  }
  iVar5 = 0;
  if (0 < *(int *)(this + 0x1b8)) {
    do {
      iVar3 = iVar4 + *(int *)(this + 0x1bc) + iVar5;
      iVar5 = iVar5 + 1;
      Graphics::FillRect(param_1,iVar6,iVar3,(int)fVar11,1);
    } while (iVar5 < *(int *)(this + 0x1b8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::HyperlinkWidget::~HyperlinkWidget() */

void __thiscall Sexy::HyperlinkWidget::~HyperlinkWidget(HyperlinkWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2e700;
  ButtonWidget::~ButtonWidget((ButtonWidget *)this);
  return;
}


/* Sexy::HyperlinkWidget::~HyperlinkWidget() */

void __thiscall Sexy::HyperlinkWidget::~HyperlinkWidget(HyperlinkWidget *this)

{
  ~HyperlinkWidget(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::HyperlinkWidget::HyperlinkWidget(int, Sexy::ButtonListener*) */

void __thiscall
Sexy::HyperlinkWidget::HyperlinkWidget(HyperlinkWidget *this,int param_1,ButtonListener *param_2)

{
  ButtonWidget::ButtonWidget((ButtonWidget *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_06a2e700;
  Color::Color((Color *)(this + 0x198),0xff,0xff,0xff);
  Color::Color((Color *)(this + 0x1a8),0xff,0xff,0xff);
  *(undefined8 *)(this + 0x158) = 0;
  this[0xa0] = (HyperlinkWidget)0x1;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x1bc) = 3;
  *(undefined4 *)(this + 0x1b8) = 1;
  return;
}


/* Sexy::HyperlinkWidget::MouseEnter() */

void __thiscall Sexy::HyperlinkWidget::MouseEnter(HyperlinkWidget *this)

{
  ButtonWidget::MouseEnter();
  (**(code **)(*(long *)this + 0xe0))(this);
  return;
}


/* Sexy::HyperlinkWidget::MouseLeave() */

void __thiscall Sexy::HyperlinkWidget::MouseLeave(HyperlinkWidget *this)

{
  ButtonWidget::MouseLeave((ButtonWidget *)this);
  (**(code **)(*(long *)this + 0xe0))(this);
  return;
}

