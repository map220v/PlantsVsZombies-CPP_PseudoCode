// Class: PopingWidget


/* PopingWidget::SetMainRect(Sexy::TRect<int>) */

void __thiscall PopingWidget::SetMainRect(PopingWidget *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0xd4) = *param_2;
  *(undefined8 *)(this + 0xdc) = uVar1;
  return;
}


/* PopingWidget::GetMainRect() */

Insets * PopingWidget::GetMainRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0xd4));
  return in_x8;
}


/* PopingWidget::HideAllButtonAndAnims() */

void PopingWidget::HideAllButtonAndAnims(void)

{
  return;
}


/* PopingWidget::RecoverAllButtonAndAnims() */

void PopingWidget::RecoverAllButtonAndAnims(void)

{
  return;
}


/* PopingWidget::~PopingWidget() */

void __thiscall PopingWidget::~PopingWidget(PopingWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06936520;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PopingWidget::~PopingWidget() */

void __thiscall PopingWidget::~PopingWidget(PopingWidget *this)

{
  ~PopingWidget(this);
  AK::FreeHook(this);
  return;
}


/* PopingWidget::AddPopingType(PopingType) */

void PopingWidget::AddPopingType(long param_1)

{
  operator|=(param_1 + 0x118);
  return;
}


/* PopingWidget::SetPopingScales(float, float) */

void __thiscall PopingWidget::SetPopingScales(PopingWidget *this,float param_1,float param_2)

{
  *(float *)(this + 0x100) = param_2;
  *(float *)(this + 0x104) = param_1;
  *(float *)(this + 0xfc) = param_1;
  return;
}


/* PopingWidget::SetPopingPositions(Sexy::SexyVector2, Sexy::SexyVector2) */

void PopingWidget::SetPopingPositions
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  *(ulong *)(param_5 + 0xf4) = CONCAT44(param_2,param_1);
  *(ulong *)(param_5 + 0xe4) = CONCAT44(param_2,param_1);
  *(ulong *)(param_5 + 0xec) = CONCAT44(param_4,param_3);
  return;
}


/* PopingWidget::SetStartPosition(Sexy::SexyVector2) */

void PopingWidget::SetStartPosition(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(ulong *)(param_3 + 0xf4) = CONCAT44(param_2,param_1);
  *(ulong *)(param_3 + 0xe4) = CONCAT44(param_2,param_1);
  return;
}


/* PopingWidget::SetTargetPosition(Sexy::SexyVector2) */

void PopingWidget::SetTargetPosition(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(ulong *)(param_3 + 0xec) = CONCAT44(param_2,param_1);
  return;
}


/* PopingWidget::SetPopingTime(float) */

void __thiscall PopingWidget::SetPopingTime(PopingWidget *this,float param_1)

{
  *(float *)(this + 0x10c) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::PopingWidget() */

void __thiscall PopingWidget::PopingWidget(PopingWidget *this)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06936520;
  Sexy::Insets::Insets((Insets *)(this + 0xd4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xe4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xec));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xf4));
  this[0x115] = (PopingWidget)0x0;
  this[0x114] = (PopingWidget)0x0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0xf4) = local_10;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0xe4) = local_10;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,(float)*(int *)(this + 0x50) * 0.5,
             (float)*(int *)(this + 0x54) * 0.5);
  *(undefined8 *)(this + 0xec) = local_10;
  Sexy::Widget::SetVisible((Widget *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPopingImage(Sexy::Graphics*, Sexy::Image*, int, int, int, int) */

void __thiscall
PopingWidget::DrawPopingImage
          (PopingWidget *this,Graphics *param_1,Image *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (Image *)0x0) {
    GetMainRect();
    fVar2 = *(float *)(this + 0x104);
    GetMainRect();
    fVar3 = *(float *)(this + 0xf4);
    fVar1 = *(float *)(this + 0x104);
    fVar7 = (float)local_c;
    GetMainRect();
    fVar4 = *(float *)(this + 0x104);
    fVar5 = *(float *)(this + 0xf8);
    GetMainRect();
    fVar6 = *(float *)(this + 0x104);
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = (int)(*(float *)(this + 0x104) * 170.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
    Sexy::Graphics::DrawImage
              (param_1,param_2,
               (int)((fVar3 - (float)local_10 * fVar2 * 0.5) + fVar4 * (float)(param_3 - local_18)),
               (int)((fVar5 - fVar7 * fVar1 * 0.5) + fVar6 * (float)(param_4 - local_14)),
               (int)((float)param_5 * fVar6),(int)((float)param_6 * fVar6));
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PopingWidget::DrawPopingImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int>) */

void __thiscall
PopingWidget::DrawPopingImage(PopingWidget *this,Graphics *param_1,Image *param_2,int *param_4)

{
  DrawPopingImage(this,param_1,param_2,*param_4,param_4[1],param_4[2],param_4[3]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPopingMirrorImage(Sexy::Graphics*, Sexy::Image*, int, int, int, int) */

void __thiscall
PopingWidget::DrawPopingMirrorImage
          (PopingWidget *this,Graphics *param_1,Image *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (Image *)0x0) {
    GetMainRect();
    fVar6 = *(float *)(this + 0x104);
    GetMainRect();
    fVar4 = *(float *)(this + 0xf4);
    fVar5 = *(float *)(this + 0x104);
    fVar7 = (float)local_c;
    GetMainRect();
    fVar3 = *(float *)(this + 0xf8);
    iVar2 = (int)((fVar4 - (float)local_10 * fVar6 * 0.5) +
                 *(float *)(this + 0x104) * (float)(param_3 - local_18));
    GetMainRect();
    fVar4 = *(float *)(this + 0x104);
    iVar1 = (int)((fVar3 - fVar7 * fVar5 * 0.5) + fVar4 * (float)(param_4 - local_14));
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = (int)(*(float *)(this + 0x104) * 170.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar2,iVar1,(int)((float)param_5 * fVar4),
               (int)((float)param_6 * fVar4));
    Sexy::Graphics::DrawImageMirror(param_1,param_2,iVar2,iVar1,(TRect *)&local_18,true);
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PopingWidget::DrawPopingMirrorImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int>) */

void __thiscall
PopingWidget::DrawPopingMirrorImage
          (PopingWidget *this,Graphics *param_1,Image *param_2,int *param_4)

{
  DrawPopingMirrorImage(this,param_1,param_2,*param_4,param_4[1],param_4[2],param_4[3]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPoping9SliceImage(Sexy::Graphics*, Sexy::TRect<int>, Sexy::Image*) */

void __thiscall
PopingWidget::DrawPoping9SliceImage(PopingWidget *this,Graphics *param_1,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 != 0) {
    GetMainRect();
    fVar6 = *(float *)(this + 0x104);
    GetMainRect();
    iVar1 = *param_3;
    fVar5 = *(float *)(this + 0x104);
    fVar11 = *(float *)(this + 0xf4);
    fVar9 = (float)local_c;
    GetMainRect();
    fVar7 = *(float *)(this + 0x104);
    fVar10 = *(float *)(this + 0xf8);
    iVar2 = param_3[1];
    GetMainRect();
    fVar8 = *(float *)(this + 0x104);
    iVar3 = param_3[3];
    iVar4 = param_3[2];
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = (int)(*(float *)(this + 0x104) * 170.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
    Sexy::Insets::Insets
              ((Insets *)&local_18,
               (int)(((float)(iVar1 - local_18) * fVar7 - (float)local_10 * fVar6 * 0.5) + fVar11),
               (int)(((float)(iVar2 - local_14) * fVar8 - fVar9 * fVar5 * 0.5) + fVar10),
               (int)((float)iVar4 * fVar8),(int)((float)iVar3 * fVar8));
    Draw9SliceImage(param_1,(Insets *)&local_18,param_4);
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPoping3SliceImage(Sexy::Graphics*, Sexy::TRect<int>, Sexy::Image*) */

void __thiscall
PopingWidget::DrawPoping3SliceImage(PopingWidget *this,Graphics *param_1,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 != 0) {
    GetMainRect();
    fVar6 = *(float *)(this + 0x104);
    GetMainRect();
    iVar1 = *param_3;
    fVar5 = *(float *)(this + 0x104);
    fVar11 = *(float *)(this + 0xf4);
    fVar9 = (float)local_c;
    GetMainRect();
    fVar7 = *(float *)(this + 0x104);
    fVar10 = *(float *)(this + 0xf8);
    iVar2 = param_3[1];
    GetMainRect();
    fVar8 = *(float *)(this + 0x104);
    iVar3 = param_3[3];
    iVar4 = param_3[2];
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = (int)(*(float *)(this + 0x104) * 170.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
    Sexy::Insets::Insets
              ((Insets *)&local_18,
               (int)(((float)(iVar1 - local_18) * fVar7 - (float)local_10 * fVar6 * 0.5) + fVar11),
               (int)(((float)(iVar2 - local_14) * fVar8 - fVar9 * fVar5 * 0.5) + fVar10),
               (int)((float)iVar4 * fVar8),(int)((float)iVar3 * fVar8));
    Draw3SliceImage(param_1,(Insets *)&local_18,param_4);
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPopingBoxImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int>) */

void __thiscall
PopingWidget::DrawPopingBoxImage(PopingWidget *this,Graphics *param_1,Image *param_2,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (Image *)0x0) {
    GetMainRect();
    fVar6 = *(float *)(this + 0x104);
    GetMainRect();
    iVar1 = *param_4;
    fVar5 = *(float *)(this + 0x104);
    fVar11 = *(float *)(this + 0xf4);
    fVar9 = (float)local_c;
    GetMainRect();
    fVar7 = *(float *)(this + 0x104);
    iVar2 = param_4[1];
    fVar10 = *(float *)(this + 0xf8);
    GetMainRect();
    fVar8 = *(float *)(this + 0x104);
    iVar3 = param_4[3];
    iVar4 = param_4[2];
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Color::Color((Color *)&local_18,1);
      local_c = (int)(*(float *)(this + 0x104) * 170.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(param_1,true);
    }
    Sexy::Insets::Insets
              ((Insets *)&local_18,
               (int)(((float)(iVar1 - local_18) * fVar7 - (float)local_10 * fVar6 * 0.5) + fVar11),
               (int)(((float)(iVar2 - local_14) * fVar8 - fVar9 * fVar5 * 0.5) + fVar10),
               (int)((float)iVar4 * fVar8),(int)((float)iVar3 * fVar8));
    Sexy::Graphics::DrawImageBoxStretch(param_1,(TRect *)&local_18,param_2);
    if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
      Sexy::Graphics::SetColorizeImages(param_1,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::WritePopingWordInRect(Sexy::Graphics*, std::wstring const&, Sexy::TRect<int>
   const&, Sexy::PrimeTypeface*, Sexy::Color, DrawStringJustification, bool) */

void __thiscall
PopingWidget::WritePopingWordInRect
          (PopingWidget *this,Graphics *param_1,undefined8 param_2,int *param_3,undefined8 param_4,
          Insets *param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Insets aIStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetMainRect();
  fVar6 = *(float *)(this + 0x104);
  GetMainRect();
  iVar1 = *param_3;
  fVar5 = *(float *)(this + 0x104);
  fVar11 = *(float *)(this + 0xf4);
  fVar9 = (float)local_c;
  GetMainRect();
  fVar7 = *(float *)(this + 0x104);
  iVar2 = param_3[1];
  fVar10 = *(float *)(this + 0xf8);
  GetMainRect();
  fVar8 = *(float *)(this + 0x104);
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
    Sexy::Color::Color((Color *)&local_18,1);
    local_c = (int)(*(float *)(this + 0x104) * 170.0);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  Sexy::Insets::Insets
            (aIStack_28,
             (int)(((float)(iVar1 - local_18) * fVar7 - (float)local_10 * fVar6 * 0.5) + fVar11),
             (int)(((float)(iVar2 - local_14) * fVar8 - fVar9 * fVar5 * 0.5) + fVar10),
             (int)((float)iVar3 * fVar8),(int)((float)iVar4 * fVar8));
  Sexy::Insets::Insets((Insets *)&local_18,param_6);
  WriteWordInRect(param_1,param_2,aIStack_28,param_4,(Insets *)&local_18,param_7,param_8);
  if ((this[0x114] != (PopingWidget)0x0) && (this[0x115] != (PopingWidget)0x0)) {
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::NormalInit(PopingType, float) */

void __thiscall PopingWidget::NormalInit(float param_1,PopingWidget *this,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  float fVar5;
  int local_28;
  int local_24;
  int local_10;
  int local_c;
  
  lVar2 = ___stack_chk_guard;
  FUN_04a560c0(this + 0x118);
  AddPopingType(this,param_3);
  uVar4 = *(undefined4 *)(this + 0x118);
  cVar3 = FUN_04a560c8(uVar4,1);
  if (cVar3 == '\0') {
    cVar3 = FUN_04a560c8(uVar4,8);
    if (cVar3 == '\0') {
      cVar3 = FUN_04a560c8(uVar4,0x10);
      if (cVar3 == '\0') {
        GetMainRect();
        GetMainRect();
        uVar4 = *(undefined4 *)(this + 0x118);
        fVar5 = (float)local_24 + (float)local_c * 0.5;
        *(float *)(this + 0xf8) = fVar5;
        *(float *)(this + 0xe8) = fVar5;
      }
      else {
        fVar5 = (float)*(int *)(gLawnApp + 0xd8) * 0.5;
        *(float *)(this + 0xf8) = fVar5;
        *(float *)(this + 0xe8) = fVar5;
      }
    }
    else {
      iVar1 = *(int *)(gLawnApp + 0xd8);
      GetMainRect();
      uVar4 = *(undefined4 *)(this + 0x118);
      fVar5 = (float)(iVar1 + local_c);
      *(float *)(this + 0xf8) = fVar5;
      *(float *)(this + 0xe8) = fVar5;
    }
    cVar3 = FUN_04a560c8(uVar4,2);
  }
  else {
    GetMainRect();
    uVar4 = *(undefined4 *)(this + 0x118);
    *(float *)(this + 0xf8) = (float)-local_c;
    *(float *)(this + 0xe8) = (float)-local_c;
    cVar3 = FUN_04a560c8(uVar4,2);
  }
  if (cVar3 == '\0') {
    cVar3 = FUN_04a560c8(uVar4,4);
    if (cVar3 == '\0') {
      cVar3 = FUN_04a560c8(uVar4,0x20);
      if (cVar3 == '\0') {
        GetMainRect();
        GetMainRect();
        uVar4 = *(undefined4 *)(this + 0x118);
        fVar5 = (float)local_28 + (float)local_10 * 0.5;
        *(float *)(this + 0xf4) = fVar5;
        *(float *)(this + 0xe4) = fVar5;
      }
      else {
        fVar5 = (float)*(int *)(gLawnApp + 0xd4) * 0.5;
        *(float *)(this + 0xf4) = fVar5;
        *(float *)(this + 0xe4) = fVar5;
      }
    }
    else {
      iVar1 = *(int *)(gLawnApp + 0xd4);
      GetMainRect();
      uVar4 = *(undefined4 *)(this + 0x118);
      fVar5 = (float)(iVar1 + local_10);
      *(float *)(this + 0xf4) = fVar5;
      *(float *)(this + 0xe4) = fVar5;
    }
    cVar3 = FUN_04a560c8(uVar4,0x40);
  }
  else {
    GetMainRect();
    uVar4 = *(undefined4 *)(this + 0x118);
    *(float *)(this + 0xf4) = (float)-local_10;
    *(float *)(this + 0xe4) = (float)-local_10;
    cVar3 = FUN_04a560c8(uVar4,0x40);
  }
  if (cVar3 == '\0') {
    cVar3 = FUN_04a560c8(uVar4,0x200);
    if (cVar3 == '\0') {
      cVar3 = FUN_04a560c8(uVar4,0x400);
      if (cVar3 == '\0') {
        GetMainRect();
        GetMainRect();
        uVar4 = *(undefined4 *)(this + 0x118);
        *(float *)(this + 0xf0) = (float)local_24 + (float)local_c * 0.5;
      }
      else {
        *(float *)(this + 0xf0) = (float)*(int *)(gLawnApp + 0xd8) * 0.5;
      }
    }
    else {
      iVar1 = *(int *)(gLawnApp + 0xd8);
      GetMainRect();
      uVar4 = *(undefined4 *)(this + 0x118);
      *(float *)(this + 0xf0) = (float)(iVar1 + local_c);
    }
    cVar3 = FUN_04a560c8(uVar4,0x80);
  }
  else {
    GetMainRect();
    uVar4 = *(undefined4 *)(this + 0x118);
    *(float *)(this + 0xf0) = (float)-local_c;
    cVar3 = FUN_04a560c8(uVar4,0x80);
  }
  if (cVar3 == '\0') {
    cVar3 = FUN_04a560c8(uVar4,0x100);
    if (cVar3 == '\0') {
      cVar3 = FUN_04a560c8(uVar4,0x800);
      if (cVar3 == '\0') {
        GetMainRect();
        GetMainRect();
        uVar4 = *(undefined4 *)(this + 0x118);
        *(float *)(this + 0xec) = (float)local_28 + (float)local_10 * 0.5;
      }
      else {
        *(float *)(this + 0xec) = (float)*(int *)(gLawnApp + 0xd4) * 0.5;
      }
    }
    else {
      iVar1 = *(int *)(gLawnApp + 0xd4);
      GetMainRect();
      uVar4 = *(undefined4 *)(this + 0x118);
      *(float *)(this + 0xec) = (float)(iVar1 + local_10);
    }
  }
  else {
    GetMainRect();
    uVar4 = *(undefined4 *)(this + 0x118);
    *(float *)(this + 0xec) = (float)-local_10;
  }
  cVar3 = FUN_04a560c8(uVar4,0x1000);
  if (cVar3 == '\0') {
    SetPopingScales(this,1.0,1.0);
  }
  else {
    SetPopingScales(this,0.3,1.0);
  }
  cVar3 = FUN_04a560c8(*(undefined4 *)(this + 0x118),0x2000);
  if (cVar3 != '\0') {
    this[0x114] = (PopingWidget)0x1;
  }
  SetPopingTime(this,param_1);
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPoping9SliceImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int>) */

void __thiscall
PopingWidget::DrawPoping9SliceImage
          (PopingWidget *this,undefined8 param_1,undefined8 param_2,Insets *param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_4);
  DrawPoping9SliceImage(this,param_1,aIStack_18,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPoping3SliceImage(Sexy::Graphics*, Sexy::Image*, Sexy::TRect<int>) */

void __thiscall
PopingWidget::DrawPoping3SliceImage
          (PopingWidget *this,undefined8 param_1,undefined8 param_2,Insets *param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_4);
  DrawPoping3SliceImage(this,param_1,aIStack_18,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PopingWidget::DrawPopingBoxImage(Sexy::Graphics*, Sexy::TRect<int>, Sexy::Image*) */

void __thiscall
PopingWidget::DrawPopingBoxImage
          (PopingWidget *this,undefined8 param_1,Insets *param_3,undefined8 param_4)

{
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,param_3);
  DrawPopingBoxImage(this,param_1,param_4,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PopingWidget::StartPop() */

void __thiscall PopingWidget::StartPop(PopingWidget *this)

{
  code *pcVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_RealT();
  this[0x115] = (PopingWidget)0x1;
  pcVar1 = *(code **)(*(long *)this + 0x158);
  *(float *)(this + 0x108) = fVar2;
  *(float *)(this + 0x110) = fVar2 + *(float *)(this + 0x10c);
  (*pcVar1)(this);
  return;
}


/* PopingWidget::Update() */

void __thiscall PopingWidget::Update(PopingWidget *this)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x115] == (PopingWidget)0x0) {
    return;
  }
  fVar3 = (float)PVZ_RealT();
  if (fVar3 < *(float *)(this + 0x110)) {
    pcVar2 = *(code **)(*(long *)this + 0x318);
    if (pcVar2 != HideAllButtonAndAnims) {
      (*pcVar2)(this);
    }
    fVar3 = (float)PVZ_RealT();
    fVar7 = *(float *)(this + 0xe4);
    fVar4 = *(float *)(this + 0xec);
    fVar6 = *(float *)(this + 0xe8);
    fVar5 = (fVar3 - *(float *)(this + 0x108)) / *(float *)(this + 0x10c);
    fVar3 = *(float *)(this + 0xf0);
    cVar1 = FUN_04a560c8(*(undefined4 *)(this + 0x118),0x1000);
    if (cVar1 != '\0') {
      fVar5 = SQRT(fVar5);
      *(float *)(this + 0x104) =
           *(float *)(this + 0xfc) +
           (*(float *)(this + 0x100) * 1.1 - *(float *)(this + 0xfc)) * fVar5;
    }
    *(float *)(this + 0xf4) = fVar7 + (fVar4 - fVar7) * fVar5;
    *(float *)(this + 0xf8) = fVar6 + (fVar3 - fVar6) * fVar5;
    return;
  }
  pcVar2 = *(code **)(*(long *)this + 800);
  if (pcVar2 != RecoverAllButtonAndAnims) {
    (*pcVar2)(this);
  }
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0xec);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xf0);
  cVar1 = FUN_04a560c8(*(undefined4 *)(this + 0x118),0x1000);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x104) = *(undefined4 *)(this + 0x100);
  }
  this[0x115] = (PopingWidget)0x0;
  return;
}

