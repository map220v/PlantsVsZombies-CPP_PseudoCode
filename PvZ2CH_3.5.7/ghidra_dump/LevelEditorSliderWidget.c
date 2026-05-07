// Class: LevelEditorSliderWidget


/* LevelEditorSliderWidget::SetDescription(std::wstring const&) */

void LevelEditorSliderWidget::SetDescription(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x100);
  return;
}


/* LevelEditorSliderWidget::SetTitle(std::wstring const&) */

void LevelEditorSliderWidget::SetTitle(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xf8);
  return;
}


/* LevelEditorSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorSliderWidget::SliderVal(LevelEditorSliderWidget *this,int param_1,double param_2)

{
  if (param_1 != 1) {
    return;
  }
  *(int *)(this + 0xf0) =
       *(int *)(this + 0xe8) +
       (int)(param_2 * (double)(*(int *)(this + 0xec) - *(int *)(this + 0xe8)));
  return;
}


/* non-virtual thunk to LevelEditorSliderWidget::SliderVal(int, double) */

void __thiscall
LevelEditorSliderWidget::SliderVal(LevelEditorSliderWidget *this,int param_1,double param_2)

{
  SliderVal(this + -0xe0,param_1,param_2);
  return;
}


/* LevelEditorSliderWidget::~LevelEditorSliderWidget() */

void __thiscall LevelEditorSliderWidget::~LevelEditorSliderWidget(LevelEditorSliderWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06963e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964138;
  *(undefined **)(this + 0xe0) = &DAT_06964180;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x108));
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorSliderWidget::~LevelEditorSliderWidget() */

void __thiscall LevelEditorSliderWidget::~LevelEditorSliderWidget(LevelEditorSliderWidget *this)

{
  ~LevelEditorSliderWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSliderWidget::ApplySunMoneyEditorSupport() */

void __thiscall LevelEditorSliderWidget::ApplySunMoneyEditorSupport(LevelEditorSliderWidget *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PVZ2UIButton *this_00;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0xb,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85e98,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85f48,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_04b4c0a8(0xeb);
  uVar2 = FUN_04b4c0a8(0x50);
  uVar3 = FUN_04b4c0a8(0x28);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSliderWidget::LevelEditorSliderWidget() */

void __thiscall LevelEditorSliderWidget::LevelEditorSliderWidget(LevelEditorSliderWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0xe0));
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06963e00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964138;
  *(undefined **)(this + 0xe0) = &DAT_06964180;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 1;
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x108));
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSliderWidget::Init() */

void __thiscall LevelEditorSliderWidget::Init(LevelEditorSliderWidget *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Image *pIVar6;
  Image *pIVar7;
  Slider *pSVar8;
  PVZ2UIButton *this_00;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  wstring awStack_78 [56];
  Point aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85b08);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85df0);
  pSVar8 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar8,pIVar6,pIVar7,1,(SliderListener *)(this + 0xe0));
  *(Slider **)(this + 0x128) = pSVar8;
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85be0);
  iVar1 = FUN_04b4c0a8(3);
  Sexy::Slider::SetFillImage(pSVar8,pIVar6,iVar1);
  (**(code **)(**(long **)(this + 0x128) + 0x310))
            ((double)*(int *)(this + 0xf0) /
             ((double)*(int *)(this + 0xec) - (double)*(int *)(this + 0xe8)),
             *(long **)(this + 0x128));
  uVar2 = FUN_04b4c0a8(4);
  FUN_04b4bb50(*(long *)(this + 0x128) + 0x184,uVar2);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x128),1);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x128),-8.0);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x128),true);
  pSVar8 = *(Slider **)(this + 0x128);
  iVar1 = FUN_04b4c0a8(2);
  Sexy::Point::Point(aPStack_40,iVar1,iVar1);
  Sexy::Slider::SetKnobShadowOffsets(pSVar8,aPStack_40);
  plVar11 = *(long **)(this + 0x128);
  uVar2 = FUN_04b4c0a8(0x32);
  uVar3 = FUN_04b4c0a8(0x78);
  uVar4 = FUN_04b4c0a8(0xe6);
  uVar5 = FUN_04b4c0a8(0x28);
  (**(code **)(*plVar11 + 0x198))(plVar11,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x1f,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aPStack_40,&DAT_06b85f98,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aPStack_40);
  uVar2 = FUN_04b4c0a8(0x78);
  uVar3 = FUN_04b4c0a8(0xaf);
  uVar4 = FUN_04b4c0a8(0x32);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,uVar3,uVar2,uVar4);
  pcVar10 = *(code **)(*(long *)this_00 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar10)(this_00,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSliderWidget::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorSliderWidget::Draw(LevelEditorSliderWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f70);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar1 = FUN_04b4c0a8(0);
  iVar2 = FUN_04b4c0a8(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar6,aIStack_18,5,1);
  iVar2 = FUN_04b4c0a8(0x14);
  iVar3 = FUN_04b4c0a8(0x46);
  iVar4 = FUN_04b4c0a8(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b4c0a8(0x55);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,*(int *)(this + 0x54) - iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f20);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf0));
  Sexy::ToWString(asStack_40);
  std::operator+((wstring *)(this + 0x100),(wstring *)asStack_38);
  iVar1 = FUN_04b4c0a8(0x55);
  iVar2 = FUN_04b4c0a8(0x50);
  iVar3 = FUN_04b4c0a8(0xa0);
  iVar4 = FUN_04b4c0a8(0x28);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(asStack_38);
  std::string::~string(asStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b4c0a8(0x14);
  iVar2 = FUN_04b4c0a8(0x7d);
  iVar3 = FUN_04b4c0a8(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xec));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b4c0a8(0x113);
  iVar2 = FUN_04b4c0a8(0x7d);
  iVar3 = FUN_04b4c0a8(0x3c);
  iVar4 = FUN_04b4c0a8(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar6,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSliderWidget::ButtonDepress(int) */

void __thiscall LevelEditorSliderWidget::ButtonDepress(LevelEditorSliderWidget *this,int param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  LevelEditorSunMoneyEditor *this_00;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f) {
    bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x108));
    if (bVar2) {
      std::function<void(int)>::operator()
                ((function<void(int)> *)(this + 0x108),*(int *)(this + 0xf0));
    }
  }
  else if (param_1 == 0xb) {
    this_00 = ::operator_new(0x118);
    LevelEditorSunMoneyEditor::LevelEditorSunMoneyEditor(this_00);
    lVar1 = gLawnApp;
    iVar3 = FUN_04b4c0a8(500);
    iVar4 = FUN_04b4c0a8(0x15e);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(*(int *)(lVar1 + 0xd4) - iVar3) / 2,(*(int *)(lVar1 + 0xd8) - iVar4) / 2,
               iVar3,iVar4);
    FUN_04b4bb6c(this_00 + 0x110,*(undefined4 *)(this + 0xec));
    FUN_04b4bb74(this_00 + 0x114,*(undefined4 *)(this + 0xf0));
    LevelEditorSunMoneyEditor::Init(this_00);
    UIUtil::ShowDialog((Widget *)this_00);
    FUN_04b4bff0(afStack_28,this,this_00);
    LevelEditorSunMoneyEditor::SetOnConfirmText(this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorSliderWidget::ButtonDepress(int) */

void __thiscall LevelEditorSliderWidget::ButtonDepress(LevelEditorSliderWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

