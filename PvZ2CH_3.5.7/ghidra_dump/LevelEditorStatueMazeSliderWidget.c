// Class: LevelEditorStatueMazeSliderWidget


/* LevelEditorStatueMazeSliderWidget::SetDescription2(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetDescription2(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x140);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetDescription4(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetDescription4(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x150);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetDescription(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetDescription(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x130);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetDescription1(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetDescription1(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x138);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorStatueMazeSliderWidget::SliderVal
          (LevelEditorStatueMazeSliderWidget *this,int param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 10) {
    iVar1 = (int)(param_2 * (double)*(int *)(this + 0xec));
    if (iVar1 == 0) {
      *(undefined4 *)(this + 0xf0) = 4;
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(this + 0xf0) = 9;
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(this + 0xf0) = 0x10;
      return;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(this + 0xf0) = 0x19;
      return;
    }
  }
  else {
    if (param_1 == 0xb) {
      *(int *)(this + 0xf8) = (int)(param_2 * (double)*(int *)(this + 0xf4)) + 1;
      return;
    }
    if (param_1 == 0xc) {
      *(int *)(this + 0x100) = (int)(param_2 * (double)*(int *)(this + 0xfc)) + 1;
      return;
    }
    if (param_1 == 0xd) {
      *(int *)(this + 0x108) = (int)(param_2 * (double)*(int *)(this + 0x104));
      return;
    }
    if (param_1 == 0xe) {
      uVar2 = (uint)(param_2 * (double)*(int *)(this + 0x10c));
      if (uVar2 < 2) {
        *(undefined4 *)(this + 0x110) = 2;
        return;
      }
      if (uVar2 - 2 < 2) {
        *(undefined4 *)(this + 0x110) = 4;
        return;
      }
      if (uVar2 - 4 < 2) {
        *(undefined4 *)(this + 0x110) = 6;
        return;
      }
      if (uVar2 - 6 < 2) {
        *(undefined4 *)(this + 0x110) = 8;
        return;
      }
    }
    else {
      if (param_1 == 0xf) {
        *(int *)(this + 0x118) = (int)(param_2 * (double)*(int *)(this + 0x114)) + 1;
        return;
      }
      if (param_1 == 0x10) {
        *(int *)(this + 0x120) = (int)(param_2 * (double)*(int *)(this + 0x11c));
        return;
      }
    }
  }
  return;
}


/* non-virtual thunk to LevelEditorStatueMazeSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorStatueMazeSliderWidget::SliderVal
          (LevelEditorStatueMazeSliderWidget *this,int param_1,double param_2)

{
  SliderVal(this + -0xe0,param_1,param_2);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetTitle(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetTitle(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x128);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetDescription3(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetDescription3(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x148);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetDescription5(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetDescription5(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x158);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetDescription6(std::wstring const&) */

void LevelEditorStatueMazeSliderWidget::SetDescription6(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x160);
  return;
}


/* LevelEditorStatueMazeSliderWidget::~LevelEditorStatueMazeSliderWidget() */

void __thiscall
LevelEditorStatueMazeSliderWidget::~LevelEditorStatueMazeSliderWidget
          (LevelEditorStatueMazeSliderWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0695c240;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695c570;
  *(undefined **)(this + 0xe0) = &DAT_0695c5b8;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1c0));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1a0));
  FUN_05476c50(this + 0x160);
  FUN_05476c50(this + 0x158);
  FUN_05476c50(this + 0x150);
  FUN_05476c50(this + 0x148);
  FUN_05476c50(this + 0x140);
  FUN_05476c50(this + 0x138);
  FUN_05476c50(this + 0x130);
  FUN_05476c50(this + 0x128);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorStatueMazeSliderWidget::~LevelEditorStatueMazeSliderWidget() */

void __thiscall
LevelEditorStatueMazeSliderWidget::~LevelEditorStatueMazeSliderWidget
          (LevelEditorStatueMazeSliderWidget *this)

{
  ~LevelEditorStatueMazeSliderWidget(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorStatueMazeSliderWidget::LevelEditorStatueMazeSliderWidget() */

void __thiscall
LevelEditorStatueMazeSliderWidget::LevelEditorStatueMazeSliderWidget
          (LevelEditorStatueMazeSliderWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0xe0));
  *(undefined4 *)(this + 0xf0) = 4;
  *(undefined ***)this = &PTR_GetClass_0695c240;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695c570;
  *(undefined4 *)(this + 0x100) = 3;
  *(undefined4 *)(this + 0x108) = 3;
  *(undefined **)(this + 0xe0) = &DAT_0695c5b8;
  *(undefined4 *)(this + 0xf8) = 1;
  FUN_05476574(this + 0x128);
  FUN_05476574(this + 0x130);
  FUN_05476574(this + 0x138);
  FUN_05476574(this + 0x140);
  FUN_05476574(this + 0x148);
  FUN_05476574(this + 0x150);
  FUN_05476574(this + 0x158);
  FUN_05476574(this + 0x160);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1a0));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1c0));
  return;
}


/* LevelEditorStatueMazeSliderWidget::ButtonDepress(int) */

void __thiscall
LevelEditorStatueMazeSliderWidget::ButtonDepress
          (LevelEditorStatueMazeSliderWidget *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == 0x1f) {
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x1a0));
    if (bVar2) {
      iVar1 = *(int *)(this + 0xf0);
      if (iVar1 == 4) {
        iVar3 = 0;
      }
      else if (iVar1 == 9) {
        iVar3 = 1;
      }
      else if (iVar1 == 0x10) {
        iVar3 = 2;
      }
      else {
        iVar3 = 0;
        if (iVar1 == 0x19) {
          iVar3 = 3;
        }
      }
      std::function<void(int,int,int,int,int,int,int,int)>::operator()
                ((int)(function *)(this + 0x1a0),*(int *)(this + 0xe8),iVar3,*(int *)(this + 0xf8),
                 *(int *)(this + 0x100),*(int *)(this + 0x108),*(int *)(this + 0x110),
                 *(int *)(this + 0x118));
      return;
    }
  }
  else if (param_1 == 0x3eb) {
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x1c0));
    if (bVar2) {
      std::function<void(int)>::operator()
                ((function<void(int)> *)(this + 0x1c0),*(int *)(this + 0xe8));
      return;
    }
  }
  return;
}


/* non-virtual thunk to LevelEditorStatueMazeSliderWidget::ButtonDepress(int) */

void __thiscall
LevelEditorStatueMazeSliderWidget::ButtonDepress
          (LevelEditorStatueMazeSliderWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetConfirmCallBack1(std::function<void (int)>) */

void __thiscall
LevelEditorStatueMazeSliderWidget::SetConfirmCallBack1
          (LevelEditorStatueMazeSliderWidget *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x1c0),param_2);
  return;
}


/* LevelEditorStatueMazeSliderWidget::SetConfirmCallBack(std::function<void (int, int, int, int,
   int, int, int, int)>) */

void __thiscall
LevelEditorStatueMazeSliderWidget::SetConfirmCallBack
          (LevelEditorStatueMazeSliderWidget *this,function *param_2)

{
  std::function<void(int,int,int,int,int,int,int,int)>::operator=
            ((function<void(int,int,int,int,int,int,int,int)> *)(this + 0x1a0),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeSliderWidget::Init(int) */

void __thiscall
LevelEditorStatueMazeSliderWidget::Init(LevelEditorStatueMazeSliderWidget *this,int param_1)

{
  SliderListener *pSVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Image *pIVar7;
  Image *pIVar8;
  Slider *pSVar9;
  PVZ2UIButton *pPVar10;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  wstring awStack_78 [56];
  Point aPStack_40 [56];
  long local_8;
  
  pSVar1 = (SliderListener *)(this + 0xe0);
  *(int *)(this + 0xe8) = param_1;
  local_8 = ___stack_chk_guard;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar9 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar9,pIVar7,pIVar8,10,pSVar1);
  *(Slider **)(this + 0x168) = pSVar9;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar2 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar9,pIVar7,iVar2);
  (**(code **)(**(long **)(this + 0x168) + 0x310))
            ((double)*(int *)(this + 0xf0) / (double)*(int *)(this + 0xec),*(long **)(this + 0x168))
  ;
  uVar3 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x168) + 0x184,uVar3);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x168),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x168),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x168),true);
  pSVar9 = *(Slider **)(this + 0x168);
  iVar2 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar9,aPStack_40);
  plVar12 = *(long **)(this + 0x168);
  uVar3 = FUN_04b334ec(0xa0);
  uVar4 = FUN_04b334ec(0x6e);
  uVar5 = FUN_04b334ec(0x15e);
  uVar6 = FUN_04b334ec(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar9 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar9,pIVar7,pIVar8,0xb,pSVar1);
  *(Slider **)(this + 0x170) = pSVar9;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar2 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar9,pIVar7,iVar2);
  (**(code **)(**(long **)(this + 0x170) + 0x310))
            ((double)*(int *)(this + 0xf8) / (double)*(int *)(this + 0xf4),*(long **)(this + 0x170))
  ;
  uVar3 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x170) + 0x184,uVar3);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x170),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x170),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x170),true);
  pSVar9 = *(Slider **)(this + 0x170);
  iVar2 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar9,aPStack_40);
  plVar12 = *(long **)(this + 0x170);
  uVar3 = FUN_04b334ec(0x32);
  uVar4 = FUN_04b334ec(0xb9);
  uVar5 = FUN_04b334ec(0xe6);
  uVar6 = FUN_04b334ec(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar9 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar9,pIVar7,pIVar8,0xc,pSVar1);
  *(Slider **)(this + 0x178) = pSVar9;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar2 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar9,pIVar7,iVar2);
  (**(code **)(**(long **)(this + 0x178) + 0x310))
            ((double)*(int *)(this + 0x100) / (double)*(int *)(this + 0xfc),*(long **)(this + 0x178)
            );
  uVar3 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x178) + 0x184,uVar3);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x178),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x178),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x178),true);
  pSVar9 = *(Slider **)(this + 0x178);
  iVar2 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar9,aPStack_40);
  plVar12 = *(long **)(this + 0x178);
  uVar3 = FUN_04b334ec(0x32);
  uVar4 = FUN_04b334ec(0xfa);
  uVar5 = FUN_04b334ec(0xe6);
  uVar6 = FUN_04b334ec(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x178));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar9 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar9,pIVar7,pIVar8,0xd,pSVar1);
  *(Slider **)(this + 0x180) = pSVar9;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar2 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar9,pIVar7,iVar2);
  (**(code **)(**(long **)(this + 0x180) + 0x310))
            ((double)*(int *)(this + 0x108) / (double)*(int *)(this + 0x104),
             *(long **)(this + 0x180));
  uVar3 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x180) + 0x184,uVar3);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x180),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x180),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x180),true);
  pSVar9 = *(Slider **)(this + 0x180);
  iVar2 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar9,aPStack_40);
  plVar12 = *(long **)(this + 0x180);
  uVar3 = FUN_04b334ec(0x32);
  uVar4 = FUN_04b334ec(0x13b);
  uVar5 = FUN_04b334ec(0xe6);
  uVar6 = FUN_04b334ec(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x180));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar9 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar9,pIVar7,pIVar8,0xe,pSVar1);
  *(Slider **)(this + 0x188) = pSVar9;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar2 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar9,pIVar7,iVar2);
  (**(code **)(**(long **)(this + 0x188) + 0x310))
            ((double)*(int *)(this + 0x110) / (double)*(int *)(this + 0x10c),
             *(long **)(this + 0x188));
  uVar3 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x188) + 0x184,uVar3);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x188),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x188),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x188),true);
  pSVar9 = *(Slider **)(this + 0x188);
  iVar2 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar9,aPStack_40);
  plVar12 = *(long **)(this + 0x188);
  uVar3 = FUN_04b334ec(0x15e);
  uVar4 = FUN_04b334ec(0xb9);
  uVar5 = FUN_04b334ec(0xe6);
  uVar6 = FUN_04b334ec(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x188));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar9 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar9,pIVar7,pIVar8,0xf,pSVar1);
  *(Slider **)(this + 400) = pSVar9;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar2 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar9,pIVar7,iVar2);
  (**(code **)(**(long **)(this + 400) + 0x310))
            ((double)*(int *)(this + 0x118) / (double)*(int *)(this + 0x114),*(long **)(this + 400))
  ;
  uVar3 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 400) + 0x184,uVar3);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 400),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 400),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 400),true);
  pSVar9 = *(Slider **)(this + 400);
  iVar2 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar9,aPStack_40);
  plVar12 = *(long **)(this + 400);
  uVar3 = FUN_04b334ec(0x15e);
  uVar4 = FUN_04b334ec(0xfa);
  uVar5 = FUN_04b334ec(0xe6);
  uVar6 = FUN_04b334ec(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 400));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85510);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85818);
  pSVar9 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar9,pIVar7,pIVar8,0x10,pSVar1);
  *(Slider **)(this + 0x198) = pSVar9;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85370);
  iVar2 = FUN_04b334ec(3);
  Sexy::Slider::SetFillImage(pSVar9,pIVar7,iVar2);
  (**(code **)(**(long **)(this + 0x198) + 0x310))
            ((double)*(int *)(this + 0x120) / (double)*(int *)(this + 0x11c),
             *(long **)(this + 0x198));
  uVar3 = FUN_04b334ec(4);
  FUN_04b2d7ac(*(long *)(this + 0x198) + 0x184,uVar3);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x198),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x198),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x198),true);
  pSVar9 = *(Slider **)(this + 0x198);
  iVar2 = FUN_04b334ec(2);
  Sexy::Point::Point(aPStack_40,iVar2,iVar2);
  Sexy::Slider::SetKnobShadowOffsets(pSVar9,aPStack_40);
  plVar12 = *(long **)(this + 0x198);
  uVar3 = FUN_04b334ec(0x15e);
  uVar4 = FUN_04b334ec(0x13b);
  uVar5 = FUN_04b334ec(0xe6);
  uVar6 = FUN_04b334ec(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x198));
  TodStringTranslate(L"[DELETE_BUTTON]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x3eb,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  uVar3 = FUN_04b334ec(0x78);
  uVar4 = FUN_04b334ec(0x172);
  uVar5 = FUN_04b334ec(0x32);
  (**(code **)(*(long *)pPVar10 + 0x198))(pPVar10,uVar3,uVar4,uVar3,uVar5);
  pcVar13 = *(code **)(*(long *)pPVar10 + 800);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar13)(pPVar10,uVar11);
  (**(code **)(*(long *)this + 0x60))(this,pPVar10);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0x1f,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  uVar3 = FUN_04b334ec(0x1a4);
  uVar4 = FUN_04b334ec(0x172);
  uVar5 = FUN_04b334ec(0x78);
  uVar6 = FUN_04b334ec(0x32);
  (**(code **)(*(long *)pPVar10 + 0x198))(pPVar10,uVar3,uVar4,uVar5,uVar6);
  pcVar13 = *(code **)(*(long *)pPVar10 + 800);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar13)(pPVar10,uVar11);
  (**(code **)(*(long *)this + 0x60))(this,pPVar10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMazeSliderWidget::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorStatueMazeSliderWidget::Draw(LevelEditorStatueMazeSliderWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_40 [2];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85600);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x128,aIStack_28,uVar6,aIStack_18,5,1);
  iVar2 = FUN_04b334ec(0x14);
  iVar3 = FUN_04b334ec(0x46);
  iVar4 = FUN_04b334ec(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b334ec(0x55);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,*(int *)(this + 0x54) - iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = *(int *)(this + 0xf0);
  if (iVar1 == 0) {
    iVar2 = *(int *)(this + 0xf8);
    *(undefined4 *)(this + 0xf0) = 4;
  }
  else {
    iVar2 = *(int *)(this + 0xf8);
    if (iVar1 != 4) {
      if (iVar1 == 9) {
        *(undefined4 *)(this + 0xf4) = 7;
        iVar1 = 8;
        if ((iVar2 < 9) && (iVar1 = iVar2, iVar2 == 0)) {
          iVar1 = 1;
        }
      }
      else {
        if (iVar1 == 0x10) {
          *(undefined4 *)(this + 0xf4) = 0xf;
          iVar1 = 0x10;
          if (0x10 < iVar2) goto LAB_04b3d9b4;
        }
        else if (iVar1 == 0x19) {
          *(undefined4 *)(this + 0xf4) = 0x17;
          iVar1 = 0x18;
          if (0x18 < iVar2) goto LAB_04b3d9b4;
        }
        iVar1 = iVar2;
        if (iVar2 == 0) {
          iVar1 = 1;
        }
      }
      goto LAB_04b3d9b4;
    }
  }
  *(undefined4 *)(this + 0xf4) = 3;
  iVar1 = 4;
  if ((iVar2 < 5) && (iVar1 = iVar2, iVar2 == 0)) {
    iVar1 = 1;
  }
LAB_04b3d9b4:
  iVar2 = *(int *)(this + 0x100);
  iVar3 = *(int *)(this + 0x110);
  iVar4 = *(int *)(this + 0x118);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(this + 0x100) = iVar2;
  *(int *)(this + 0x110) = iVar3;
  *(int *)(this + 0x118) = iVar4;
  *(int *)(this + 0xf8) = iVar1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf0));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x130),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0xfffffff6);
  iVar2 = FUN_04b334ec(0x50);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf8));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x138),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0xffffff4c);
  iVar2 = FUN_04b334ec(0x96);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x100));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x140),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0xffffff4c);
  iVar2 = FUN_04b334ec(0xdc);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x108));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x148),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0xffffff4c);
  iVar2 = FUN_04b334ec(0x122);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x110));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x150),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0x78);
  iVar2 = FUN_04b334ec(0x96);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x118));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x158),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0x78);
  iVar2 = FUN_04b334ec(0xdc);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x120));
  Sexy::ToWString((string *)local_40);
  std::operator+((wstring *)(this + 0x160),(wstring *)asStack_38);
  iVar1 = FUN_04b334ec(0x78);
  iVar2 = FUN_04b334ec(0x122);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string((string *)local_40);
  std::string::string(asStack_38,"1");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x1e);
  iVar2 = FUN_04b334ec(0xc1);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar1,iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  local_40[0] = *(int *)(this + 0xf4) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x109);
  iVar2 = FUN_04b334ec(0xc1);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::string::string(asStack_38,"1");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x1e);
  iVar2 = FUN_04b334ec(0x105);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar1,iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  local_40[0] = *(int *)(this + 0xfc) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x109);
  iVar2 = FUN_04b334ec(0x105);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::string::string(asStack_38,"0");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x1e);
  iVar2 = FUN_04b334ec(0x149);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar1,iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x104));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x109);
  iVar2 = FUN_04b334ec(0x149);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::string::string(asStack_38,"1");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x145);
  iVar2 = FUN_04b334ec(0xc1);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  local_40[0] = *(int *)(this + 0x10c) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x230);
  iVar2 = FUN_04b334ec(0xc1);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::string::string(asStack_38,"1");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x145);
  iVar2 = FUN_04b334ec(0x105);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  local_40[0] = *(int *)(this + 0x114) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x230);
  iVar2 = FUN_04b334ec(0x105);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::string::string(asStack_38,"0");
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x145);
  iVar2 = FUN_04b334ec(0x149);
  iVar3 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x11c));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b334ec(0x230);
  iVar2 = FUN_04b334ec(0x149);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

