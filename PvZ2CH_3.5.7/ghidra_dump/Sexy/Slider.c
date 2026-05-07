// Class: Sexy::Slider


/* Sexy::Slider::SetValue(double) */

void __thiscall Sexy::Slider::SetValue(Slider *this,double param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  dVar3 = *(double *)(this + 0xe0);
  if (param_1 < 0.0) {
    *(undefined8 *)(this + 0xe0) = 0;
  }
  else if (param_1 <= 1.0) {
    *(double *)(this + 0xe0) = param_1;
    dVar2 = param_1;
  }
  else {
    *(undefined8 *)(this + 0xe0) = 0x3ff0000000000000;
    dVar2 = 1.0;
  }
  if (dVar3 != dVar2) {
    pcVar1 = *(code **)**(undefined8 **)(this + 0xd8);
    if (pcVar1 != SliderListener::SliderVal) {
      (*pcVar1)(*(undefined8 **)(this + 0xd8),*(undefined4 *)(this + 0xe8));
      (**(code **)(*(long *)this + 0xe0))(this);
      return;
    }
  }
  (**(code **)(*(long *)this + 0xe0))(this);
  return;
}


/* Sexy::Slider::SetStepMode(int, int, char const*) */

void __thiscall Sexy::Slider::SetStepMode(Slider *this,int param_1,int param_2,char *param_3)

{
  *(int *)(this + 0x130) = param_1;
  this[300] = (Slider)0x1;
  (**(code **)(*(long *)this + 800))(this,param_2);
  *(char **)(this + 0x138) = param_3;
  return;
}


/* Sexy::Slider::SetStepValue(int) */

void __thiscall Sexy::Slider::SetStepValue(Slider *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x130);
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (iVar1 < param_1) {
    param_1 = iVar1;
  }
  if (*(int *)(this + 0x134) != param_1) {
    *(int *)(this + 0x134) = param_1;
    (**(code **)(*(long *)this + 0x310))((double)param_1 / (double)iVar1);
    if (*(void **)(this + 0x138) != (void *)0x0) {
      InteractiveSoundManager::SendEvent(*(char **)(gSexyApp + 0x648),*(void **)(this + 0x138));
      return;
    }
  }
  return;
}


/* Sexy::Slider::MouseDrag(int, int) */

void __thiscall Sexy::Slider::MouseDrag(Slider *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  
  if (this[0x100] != (Slider)0x0) {
    dVar4 = *(double *)(this + 0xe0);
    if (this[0x11c] == (Slider)0x0) {
      if (*(Image **)(this + 0xf8) == (Image *)0x0) {
        iVar1 = *(int *)(this + 0x170);
      }
      else {
        iVar1 = Image::GetCelHeight(*(Image **)(this + 0xf8));
      }
      dVar3 = (double)(param_2 - *(int *)(this + 0x108)) / (double)(*(int *)(this + 0x54) - iVar1);
      *(double *)(this + 0xe0) = dVar3;
    }
    else {
      if (*(Image **)(this + 0xf8) == (Image *)0x0) {
        iVar1 = *(int *)(this + 0x170);
      }
      else {
        iVar1 = Image::GetCelWidth(*(Image **)(this + 0xf8));
      }
      dVar3 = (double)(param_1 - *(int *)(this + 0x104)) / (double)(*(int *)(this + 0x50) - iVar1);
      *(double *)(this + 0xe0) = dVar3;
    }
    if (0.0 <= dVar3) {
      if (1.0 < dVar3) {
        dVar3 = 1.0;
        *(undefined8 *)(this + 0xe0) = 0x3ff0000000000000;
      }
    }
    else {
      dVar3 = 0.0;
      *(undefined8 *)(this + 0xe0) = 0;
    }
    if (dVar4 != dVar3) {
      pcVar2 = *(code **)**(undefined8 **)(this + 0xd8);
      if (pcVar2 == SliderListener::SliderVal) {
        (**(code **)(*(long *)this + 0xe0))(this);
      }
      else {
        (*pcVar2)(*(undefined8 **)(this + 0xd8),*(undefined4 *)(this + 0xe8));
        (**(code **)(*(long *)this + 0xe0))(this);
      }
    }
    return;
  }
  return;
}


/* Sexy::Slider::MouseDown(int, int, int) */

void Sexy::Slider::MouseDown(int param_1,int param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
  plVar2 = (long *)(ulong)(uint)param_1;
  if (*(char *)((long)plVar2 + 0x11c) == '\0') {
    if ((Image *)plVar2[0x1f] == (Image *)0x0) {
      iVar1 = (int)plVar2[0x2e];
    }
    else {
      iVar1 = Image::GetCelHeight((Image *)plVar2[0x1f]);
    }
    iVar3 = *(int *)((long)plVar2 + 0x54);
    iVar4 = (int)((double)(iVar3 - iVar1) * (double)plVar2[0x1c]);
    if ((iVar4 <= param_3) && (param_3 < iVar1 + iVar4)) {
      SexyAppBase::SetCursor((int)*(undefined8 *)(plVar2[3] + 0x80));
      *(undefined1 *)(plVar2 + 0x20) = 1;
      *(int *)(plVar2 + 0x21) = param_3 - iVar4;
      return;
    }
  }
  else {
    if ((Image *)plVar2[0x1f] == (Image *)0x0) {
      iVar1 = (int)plVar2[0x2e];
    }
    else {
      iVar1 = Image::GetCelWidth((Image *)plVar2[0x1f]);
    }
    iVar3 = (int)plVar2[10];
    iVar4 = (int)((double)(iVar3 - iVar1) * (double)plVar2[0x1c]);
    param_3 = param_2;
    if ((iVar4 <= param_2) && (param_2 < iVar1 + iVar4)) {
      SexyAppBase::SetCursor((int)*(undefined8 *)(plVar2[3] + 0x80));
      *(int *)((long)plVar2 + 0x104) = param_2 - iVar4;
      *(undefined1 *)(plVar2 + 0x20) = 1;
      return;
    }
  }
  (**(code **)(*plVar2 + 0x310))((double)param_3 / (double)iVar3,plVar2);
  return;
}


/* Sexy::Slider::MouseMove(int, int) */

void __thiscall Sexy::Slider::MouseMove(Slider *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (this[0x11c] == (Slider)0x0) {
    if (*(Image **)(this + 0xf8) == (Image *)0x0) {
      iVar1 = *(int *)(this + 0x170);
    }
    else {
      iVar1 = Image::GetCelHeight(*(Image **)(this + 0xf8));
    }
    iVar2 = (int)((double)(*(int *)(this + 0x54) - iVar1) * *(double *)(this + 0xe0));
    if ((param_2 < iVar2) || (iVar1 + iVar2 <= param_2)) goto LAB_051dff58;
  }
  else {
    if (*(Image **)(this + 0xf8) == (Image *)0x0) {
      iVar1 = *(int *)(this + 0x170);
    }
    else {
      iVar1 = Image::GetCelWidth(*(Image **)(this + 0xf8));
    }
    iVar2 = (int)((double)(*(int *)(this + 0x50) - iVar1) * *(double *)(this + 0xe0));
    if ((param_1 < iVar2) || (iVar1 + iVar2 <= param_1)) {
LAB_051dff58:
      SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(this + 0x18) + 0x80));
      return;
    }
  }
  SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(this + 0x18) + 0x80));
  return;
}


/* Sexy::Slider::MouseUp(int, int) */

void Sexy::Slider::MouseUp(int param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar1 = (ulong)(uint)param_1;
  *(undefined1 *)(uVar1 + 0x100) = 0;
  SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(uVar1 + 0x18) + 0x80));
  plVar2 = *(long **)(uVar1 + 0xd8);
  uVar3 = *(undefined4 *)(uVar1 + 0xe8);
  uVar5 = *(undefined8 *)(uVar1 + 0xe0);
  puVar4 = (undefined8 *)*plVar2;
  if ((code *)*puVar4 != SliderListener::SliderVal) {
    (*(code *)*puVar4)(uVar5,plVar2,uVar3);
    plVar2 = *(long **)(uVar1 + 0xd8);
    uVar5 = *(undefined8 *)(uVar1 + 0xe0);
    uVar3 = *(undefined4 *)(uVar1 + 0xe8);
    puVar4 = (undefined8 *)*plVar2;
  }
  if ((code *)puVar4[1] != SliderListener::SliderReleased) {
    (*(code *)puVar4[1])(uVar5,plVar2,uVar3);
  }
  return;
}


/* Sexy::Slider::MouseLeave() */

void __thiscall Sexy::Slider::MouseLeave(Slider *this)

{
  if (this[0x100] != (Slider)0x0) {
    return;
  }
  SexyAppBase::SetCursor((int)*(undefined8 *)(*(long *)(this + 0x18) + 0x80));
  return;
}


/* Sexy::Slider::~Slider() */

void __thiscall Sexy::Slider::~Slider(Slider *this)

{
  *(undefined ***)this = &PTR_GetClass_06a31cd0;
  Widget::~Widget((Widget *)this);
  return;
}


/* Sexy::Slider::~Slider() */

void __thiscall Sexy::Slider::~Slider(Slider *this)

{
  ~Slider(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Slider::StaticClassInit() */

void Sexy::Slider::StaticClassInit(void)

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
    std::string::string(asStack_10,"Slider");
    (*pcVar2)(plVar1,asStack_10,FUN_051e0194,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Slider::StaticGetClass() */

long * Sexy::Slider::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Slider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::Slider::GetClass() const */

long * Sexy::Slider::GetClass(void)

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
  (*pcVar3)(plVar1,"Slider",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::Slider::SetFillImage(Sexy::Image*, int) */

void __thiscall Sexy::Slider::SetFillImage(Slider *this,Image *param_1,int param_2)

{
  *(Image **)(this + 0x110) = param_1;
  *(int *)(this + 0x118) = param_2;
  return;
}


/* Sexy::Slider::SetKnobInside(int) */

void __thiscall Sexy::Slider::SetKnobInside(Slider *this,int param_1)

{
  *(float *)(this + 0x180) = (float)param_1 * 0.5;
  return;
}


/* Sexy::Slider::SetKnobRotationRate(float) */

void __thiscall Sexy::Slider::SetKnobRotationRate(Slider *this,float param_1)

{
  *(float *)(this + 0x128) = param_1;
  return;
}


/* Sexy::Slider::SetDrawKnobShadow(bool) */

void __thiscall Sexy::Slider::SetDrawKnobShadow(Slider *this,bool param_1)

{
  this[0x174] = (Slider)param_1;
  if (!param_1) {
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 8;
    return;
  }
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 8;
  return;
}


/* Sexy::Slider::SetKnobShadowOffsets(Sexy::Point) */

void __thiscall Sexy::Slider::SetKnobShadowOffsets(Slider *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x178) = *param_2;
  return;
}


/* Sexy::Slider::Slider(Sexy::Image*, Sexy::Image*, int, Sexy::SliderListener*) */

void __thiscall
Sexy::Slider::Slider(Slider *this,Image *param_1,Image *param_2,int param_3,SliderListener *param_4)

{
  Widget::Widget((Widget *)this);
  *(SliderListener **)(this + 0xd8) = param_4;
  *(int *)(this + 0xe8) = param_3;
  *(undefined ***)this = &PTR_GetClass_06a31cd0;
  *(Image **)(this + 0xf8) = param_2;
  *(Image **)(this + 0xf0) = param_1;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  Color::Color((Color *)(this + 0x140),1);
  Color::Color((Color *)(this + 0x150),0x50,0x50,0x50);
  Color::Color((Color *)(this + 0x160),1);
  *(undefined4 *)(this + 0x170) = 5;
  Point::Point((Point *)(this + 0x178),0,0);
  this[0x100] = (Slider)0x0;
  this[0x11c] = (Slider)0x1;
  *(undefined4 *)(this + 0x130) = 1;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  this[0x124] = (Slider)0x0;
  this[0x125] = (Slider)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  this[300] = (Slider)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  this[0x174] = (Slider)0x0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x120) = 0x3c23d70a;
  return;
}


/* Sexy::Slider::Slider() */

void __thiscall Sexy::Slider::Slider(Slider *this)

{
  Slider(this,(Image *)0x0,(Image *)0x0,-1,(SliderListener *)0x0);
  return;
}


/* Sexy::Slider::StaticNew() */

Slider * Sexy::Slider::StaticNew(void)

{
  Slider *this;
  
  this = ::operator_new(0x188);
  Slider(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Slider::DrawThreeSliceImage(Sexy::Graphics*, Sexy::Image*, bool, Sexy::TRect<int>, bool) */

void __thiscall
Sexy::Slider::DrawThreeSliceImage
          (undefined8 param_1_00,Graphics *param_1,LotteryResultProgressBar *param_2,char param_3,
          int *param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  if (param_3 == '\0') {
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(param_2);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_2);
    iVar3 = iVar3 / 3;
    Graphics::Translate(param_1,*param_5,param_5[1]);
    iVar5 = param_5[3] - iVar3;
    iVar1 = (param_5[2] - iVar4) / 2;
    if (param_6 == '\0') {
      Insets::Insets(aIStack_18,0,0,iVar4,iVar3);
      Graphics::DrawImage(param_1,(Image *)param_2,iVar1,0,(TRect *)aIStack_18);
      Graphics::PushState(param_1);
      Graphics::ClipRect(param_1,iVar1,iVar3,iVar4,iVar5);
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = (iVar5 + iVar3 + -1) / iVar3;
      }
      if (iVar6 < 1) goto LAB_051e084c;
LAB_051e0688:
      iVar5 = 0;
      iVar2 = iVar3;
      do {
        iVar5 = iVar5 + 1;
        Insets::Insets(aIStack_18,0,iVar3,iVar4,iVar3);
        Graphics::DrawImage(param_1,(Image *)param_2,iVar1,iVar2,(TRect *)aIStack_18);
        iVar2 = iVar2 + iVar3;
      } while (iVar5 < iVar6);
      Graphics::PopState(param_1);
      if (param_6 == '\0') goto LAB_051e06e0;
    }
    else {
      Insets::Insets(aIStack_18,0,0,iVar4,iVar3);
      Graphics::DrawImage(param_1,(Image *)param_2,iVar1,0,(TRect *)aIStack_18);
      Graphics::PushState(param_1);
      Graphics::ClipRect(param_1,iVar1,iVar3,iVar4,iVar5 - iVar3);
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = ((iVar5 - iVar3) + iVar3 + -1) / iVar3;
      }
      if (0 < iVar6) goto LAB_051e0688;
      Graphics::PopState(param_1);
    }
    iVar5 = param_5[3];
    Insets::Insets(aIStack_18,0,iVar3 * 2,iVar4,iVar3);
    Graphics::DrawImage(param_1,(Image *)param_2,iVar1,iVar5 - iVar3,(TRect *)aIStack_18);
    goto LAB_051e06e0;
  }
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(param_2);
  iVar3 = iVar3 / 3;
  iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)param_2);
  Graphics::Translate(param_1,*param_5,param_5[1]);
  iVar5 = param_5[2] - iVar3;
  iVar1 = (param_5[3] - iVar4) / 2;
  if (param_6 == '\0') {
    Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
    Graphics::DrawImage(param_1,(Image *)param_2,0,iVar1,(TRect *)aIStack_18);
    Graphics::PushState(param_1);
    Graphics::ClipRect(param_1,iVar3,iVar1,iVar5,iVar4);
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = (iVar5 + iVar3 + -1) / iVar3;
    }
    if (iVar6 < 1) {
LAB_051e084c:
      Graphics::PopState(param_1);
      goto LAB_051e06e0;
    }
LAB_051e0534:
    iVar5 = 0;
    iVar2 = iVar3;
    do {
      iVar5 = iVar5 + 1;
      Insets::Insets(aIStack_18,iVar3,0,iVar3,iVar4);
      Graphics::DrawImage(param_1,(Image *)param_2,iVar2,iVar1,(TRect *)aIStack_18);
      iVar2 = iVar2 + iVar3;
    } while (iVar5 < iVar6);
    Graphics::PopState(param_1);
    if (param_6 == '\0') goto LAB_051e06e0;
  }
  else {
    Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
    Graphics::DrawImage(param_1,(Image *)param_2,0,iVar1,(TRect *)aIStack_18);
    Graphics::PushState(param_1);
    Graphics::ClipRect(param_1,iVar3,iVar1,iVar5 - iVar3,iVar4);
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = ((iVar5 - iVar3) + iVar3 + -1) / iVar3;
    }
    if (0 < iVar6) goto LAB_051e0534;
    Graphics::PopState(param_1);
  }
  iVar5 = param_5[2];
  Insets::Insets(aIStack_18,iVar3 * 2,0,iVar3,iVar4);
  Graphics::DrawImage(param_1,(Image *)param_2,iVar5 - iVar3,iVar1,(TRect *)aIStack_18);
LAB_051e06e0:
  GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Slider::GetDrawPositions(Sexy::TRect<int>&, float&) */

void __thiscall Sexy::Slider::GetDrawPositions(Slider *this,TRect *param_1,float *param_2)

{
  Slider SVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  SVar1 = this[0x11c];
  *(undefined8 *)param_1 = local_18;
  *(undefined8 *)(param_1 + 8) = uStack_10;
  if (SVar1 == (Slider)0x0) {
    if (*(Image **)(this + 0xf8) == (Image *)0x0) {
      iVar2 = *(int *)(this + 0x170);
    }
    else {
      iVar2 = Image::GetCelHeight(*(Image **)(this + 0xf8));
    }
    fVar3 = (float)iVar2;
    iVar2 = *(int *)(this + 0x54);
    fVar4 = *(float *)(this + 0x180);
    dVar5 = *(double *)(this + 0xe0);
    *(int *)(param_1 + 4) = (int)(fVar3 * fVar4);
    *(int *)(param_1 + 0xc) = (int)((float)iVar2 - fVar3 * fVar4 * 2.0);
    *param_2 = (float)((double)(fVar3 * 0.5) + dVar5 * (double)((float)iVar2 - fVar3));
  }
  else {
    if (*(Image **)(this + 0xf8) == (Image *)0x0) {
      iVar2 = *(int *)(this + 0x170);
    }
    else {
      iVar2 = Image::GetCelWidth(*(Image **)(this + 0xf8));
    }
    fVar3 = (float)iVar2;
    iVar2 = *(int *)(this + 0x50);
    fVar4 = *(float *)(this + 0x180);
    dVar5 = *(double *)(this + 0xe0);
    *(int *)param_1 = (int)(fVar3 * fVar4);
    *(int *)(param_1 + 8) = (int)((float)iVar2 - fVar3 * fVar4 * 2.0);
    *param_2 = (float)((double)(fVar3 * 0.5) + dVar5 * (double)((float)iVar2 - fVar3));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Slider::Draw(Sexy::Graphics*) */

void __thiscall Sexy::Slider::Draw(Slider *this,Graphics *param_1)

{
  int iVar1;
  Slider SVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Insets *pIVar7;
  undefined8 uVar8;
  int iVar9;
  Image *pIVar10;
  long lVar11;
  float local_3c;
  Insets aIStack_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Insets::Insets(aIStack_38);
  GetDrawPositions(this,(TRect *)aIStack_38,&local_3c);
  lVar11 = *(long *)(this + 0xf0);
  if (lVar11 == 0) {
    Graphics::SetColor(param_1,(Color *)(this + 0x140));
    Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Graphics::SetColor(param_1,(Color *)(this + 0x150));
    Graphics::FillRect(param_1,1,1,*(int *)(this + 0x50) + -2,*(int *)(this + 0x54) + -2);
  }
  else {
    SVar2 = this[0x11c];
    Insets::Insets(aIStack_18,aIStack_38);
    DrawThreeSliceImage(this,param_1,lVar11,SVar2,aIStack_18,1);
  }
  if (*(long *)(this + 0x110) != 0) {
    if (this[0x11c] == (Slider)0x0) {
      Insets::Insets((Insets *)&local_28,aIStack_38);
      local_24 = local_24 + *(int *)(this + 0x184);
      local_1c = (int)(local_3c - (float)local_24);
      if (local_2c < local_1c) {
        local_1c = local_2c;
      }
    }
    else {
      Insets::Insets((Insets *)&local_28,aIStack_38);
      local_28 = local_28 + *(int *)(this + 0x184);
      local_20 = (int)(local_3c - (float)local_28);
      if (local_30 < local_20) {
        local_20 = local_30;
      }
    }
    uVar8 = *(undefined8 *)(this + 0x110);
    SVar2 = this[0x11c];
    Insets::Insets(aIStack_18,(Insets *)&local_28);
    DrawThreeSliceImage(this,param_1,uVar8,SVar2,aIStack_18,0);
  }
  pIVar10 = *(Image **)(this + 0xf8);
  if (pIVar10 == (Image *)0x0) {
    Graphics::SetColor(param_1,(Color *)(this + 0x160));
    if (this[0x11c] == (Slider)0x0) {
      Graphics::FillRect(param_1,0,(int)(local_3c - (float)(*(int *)(this + 0x170) / 2)),
                         *(int *)(this + 0x50),*(int *)(this + 0x170));
    }
    else {
      Graphics::FillRect(param_1,(int)(local_3c - (float)(*(int *)(this + 0x170) / 2)),0,
                         *(int *)(this + 0x170),*(int *)(this + 0x54));
    }
  }
  else {
    if (this[0x174] != (Slider)0x0) {
      pIVar7 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_1);
      Insets::Insets((Insets *)&local_28,pIVar7);
      bVar3 = (bool)Graphics::GetColorizeImages(param_1);
      Insets::Insets(aIStack_18,0,0,0,0x80);
      Graphics::SetColor(param_1,(Color *)aIStack_18);
      Graphics::SetColorizeImages(param_1,true);
      if (this[0x11c] == (Slider)0x0) {
        iVar1 = *(int *)(this + 0x50);
        iVar5 = Image::GetCelWidth(*(Image **)(this + 0xf8));
        iVar4 = *(int *)(this + 0x178);
        pIVar10 = *(Image **)(this + 0xf8);
        iVar9 = (int)local_3c;
        iVar6 = Image::GetCelHeight(pIVar10);
        Graphics::DrawImageRotatedF
                  (param_1,pIVar10,(float)(iVar4 + (iVar1 - iVar5) / 2),
                   (float)((iVar9 - iVar6 / 2) + *(int *)(this + 0x17c)),
                   (double)*(float *)(this + 0x128) * *(double *)(this + 0xe0),(TRect *)0x0);
      }
      else {
        iVar9 = (int)local_3c;
        iVar5 = Image::GetCelWidth(*(Image **)(this + 0xf8));
        iVar1 = *(int *)(this + 0x178);
        pIVar10 = *(Image **)(this + 0xf8);
        iVar4 = *(int *)(this + 0x54);
        iVar6 = Image::GetCelHeight(pIVar10);
        Graphics::DrawImageRotatedF
                  (param_1,pIVar10,(float)((iVar9 - iVar5 / 2) + iVar1),
                   (float)(*(int *)(this + 0x17c) + (iVar4 - iVar6) / 2),
                   (double)*(float *)(this + 0x128) * *(double *)(this + 0xe0),(TRect *)0x0);
      }
      Graphics::SetColorizeImages(param_1,bVar3);
      Graphics::SetColor(param_1,(Color *)&local_28);
      pIVar10 = *(Image **)(this + 0xf8);
    }
    if (this[0x11c] == (Slider)0x0) {
      iVar1 = *(int *)(this + 0x50);
      iVar4 = Image::GetCelWidth(pIVar10);
      pIVar10 = *(Image **)(this + 0xf8);
      iVar5 = Image::GetCelHeight(pIVar10);
      Graphics::DrawImageRotatedF
                (param_1,pIVar10,(float)((iVar1 - iVar4) / 2),(float)((int)local_3c - iVar5 / 2),
                 (double)*(float *)(this + 0x128) * *(double *)(this + 0xe0),(TRect *)0x0);
    }
    else {
      iVar4 = Image::GetCelWidth(pIVar10);
      pIVar10 = *(Image **)(this + 0xf8);
      iVar1 = *(int *)(this + 0x54);
      iVar5 = Image::GetCelHeight(pIVar10);
      Graphics::DrawImageRotatedF
                (param_1,pIVar10,(float)((int)local_3c - iVar4 / 2),(float)((iVar1 - iVar5) / 2),
                 (double)*(float *)(this + 0x128) * *(double *)(this + 0xe0),(TRect *)0x0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Slider::Update() */

void __thiscall Sexy::Slider::Update(Slider *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  this[0x124] = (Slider)0x0;
  this[0x125] = (Slider)0x0;
  return;
}

