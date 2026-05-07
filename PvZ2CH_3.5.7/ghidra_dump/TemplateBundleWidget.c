// Class: TemplateBundleWidget


/* TemplateBundleWidget::SetReward(int, int) */

void __thiscall TemplateBundleWidget::SetReward(TemplateBundleWidget *this,int param_1,int param_2)

{
  *(int *)(this + 0xe8) = param_1;
  *(int *)(this + 0xec) = param_2;
  return;
}


/* TemplateBundleWidget::UpdateButtonState() */

void __thiscall TemplateBundleWidget::UpdateButtonState(TemplateBundleWidget *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x110);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(this + 0xe4) < 1) {
      (**(code **)(*plVar1 + 0x188))(plVar1,1);
      return;
    }
    (**(code **)(*plVar1 + 0x188))(plVar1,0);
  }
  return;
}


/* TemplateBundleWidget::ButtonDepress(int) */

void __thiscall TemplateBundleWidget::ButtonDepress(TemplateBundleWidget *this,int param_1)

{
  if (param_1 == 0x56c4) {
    (**(code **)(*(long *)this + 0x350))();
  }
  return;
}


/* non-virtual thunk to TemplateBundleWidget::ButtonDepress(int) */

void __thiscall TemplateBundleWidget::ButtonDepress(TemplateBundleWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* TemplateBundleWidget::~TemplateBundleWidget() */

void __thiscall TemplateBundleWidget::~TemplateBundleWidget(TemplateBundleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_06704340;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067046a8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TemplateBundleWidget::~TemplateBundleWidget() */

void __thiscall TemplateBundleWidget::~TemplateBundleWidget(TemplateBundleWidget *this)

{
  ~TemplateBundleWidget(this);
  AK::FreeHook(this);
  return;
}


/* TemplateBundleWidget::DrawBundleBackground(Sexy::Graphics*) */

void __thiscall
TemplateBundleWidget::DrawBundleBackground(TemplateBundleWidget *this,Graphics *param_1)

{
  if (*(Image **)(this + 0xf0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf0),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateBundleWidget::Init(int) */

void __thiscall TemplateBundleWidget::Init(TemplateBundleWidget *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,0x56c4,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar7;
  FUN_05476c50(awStack_78);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac4508,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ac46c8,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar9 = *(long **)(this + 0x110);
  iVar3 = FUN_03a3bfc8(0x37);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_03a3bfc8(0x55);
  iVar2 = *(int *)(this + 0x54);
  uVar5 = FUN_03a3bfc8(0x78);
  uVar6 = FUN_03a3bfc8(0x32);
  (**(code **)(*plVar9 + 0x198))(plVar9,iVar1 / 2 - iVar3,iVar2 - iVar4,uVar5,uVar6);
  plVar9 = *(long **)(this + 0x110);
  pcVar10 = *(code **)(*plVar9 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface
                    (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
  (*pcVar10)(plVar9,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  (**(code **)(*(long *)this + 0x348))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TemplateBundleWidget::TemplateBundleWidget() */

void __thiscall TemplateBundleWidget::TemplateBundleWidget(TemplateBundleWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_06704340;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067046a8;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  return;
}


/* TemplateBundleWidget::TemplateBundleWidget(int) */

void __thiscall TemplateBundleWidget::TemplateBundleWidget(TemplateBundleWidget *this,int param_1)

{
  TemplateBundleWidget(this);
  *(int *)(this + 0xe0) = param_1;
  return;
}


/* TemplateBundleWidget::SetLimit(int) */

void __thiscall TemplateBundleWidget::SetLimit(TemplateBundleWidget *this,int param_1)

{
  *(int *)(this + 0xe4) = param_1;
  (**(code **)(*(long *)this + 0x348))();
  return;
}


/* TemplateBundleWidget::DrawBundleTitleOffSet(Sexy::Graphics*, int) */

void __thiscall
TemplateBundleWidget::DrawBundleTitleOffSet
          (TemplateBundleWidget *this,Graphics *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  
  pIVar3 = *(Image **)(this + 0xf8);
  if (pIVar3 != (Image *)0x0) {
    iVar1 = *(int *)(pIVar3 + 0x38);
    iVar2 = FUN_03a3bfc8(param_2);
    Sexy::Graphics::DrawImage
              (param_1,pIVar3,(*(int *)(this + 0x50) - iVar1) / 2,iVar2,iVar1,
               *(int *)(pIVar3 + 0x3c));
    return;
  }
  return;
}


/* TemplateBundleWidget::DrawBundleTitle(Sexy::Graphics*) */

void __thiscall TemplateBundleWidget::DrawBundleTitle(TemplateBundleWidget *this,Graphics *param_1)

{
  DrawBundleTitleOffSet(this,param_1,0x14);
  return;
}


/* TemplateBundleWidget::DrawBundleCenterOffSet(Sexy::Graphics*, int, float) */

void __thiscall
TemplateBundleWidget::DrawBundleCenterOffSet
          (TemplateBundleWidget *this,Graphics *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  
  pIVar4 = *(Image **)(this + 0x100);
  if (pIVar4 != (Image *)0x0) {
    iVar1 = *(int *)(pIVar4 + 0x3c);
    iVar2 = *(int *)(pIVar4 + 0x38);
    iVar3 = FUN_03a3bfc8(param_2);
    Sexy::Graphics::DrawImage
              (param_1,pIVar4,(*(int *)(this + 0x50) - (int)(param_3 * (float)iVar2)) / 2,
               (*(int *)(this + 0x54) - (int)(param_3 * (float)iVar1)) / 2 - iVar3,
               (int)(param_3 * (float)iVar2),(int)(param_3 * (float)iVar1));
    return;
  }
  return;
}


/* TemplateBundleWidget::DrawBundleCenter(Sexy::Graphics*) */

void __thiscall TemplateBundleWidget::DrawBundleCenter(TemplateBundleWidget *this,Graphics *param_1)

{
  DrawBundleCenterOffSet(this,param_1,0x1e,0.8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateBundleWidget::DrawBundleLimit(Sexy::Graphics*) */

void __thiscall TemplateBundleWidget::DrawBundleLimit(TemplateBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_40,L"[RECHARGEBUNDLE_BUY_TIMES]",auStack_48);
  TodReplaceNumberString(awStack_40,L"{NUMBER}",*(int *)(this + 0xe4));
  TodStringTranslate(awStack_38);
  iVar1 = FUN_03a3bfc8(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,*(int *)(this + 0x54) - iVar1,*(int *)(this + 0x50),iVar1);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aCStack_18,5,0);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  FUN_05476c50(awStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TemplateBundleWidget::DrawBundleRewards(Sexy::Graphics*) */

void __thiscall
TemplateBundleWidget::DrawBundleRewards(TemplateBundleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac4640);
  iVar1 = FUN_03a3bfc8(10);
  iVar2 = FUN_03a3bfc8(0xb4);
  iVar3 = FUN_03a3bfc8(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
  if (*(long *)(this + 0x108) != 0) {
    iVar2 = FUN_03a3bfc8(0x50);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_03a3bfc8(0xb4);
    iVar4 = FUN_03a3bfc8(0x1e);
    Sexy::Insets::Insets(aIStack_18,iVar1 - iVar2,iVar3,iVar4,iVar4);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x108));
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe8));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_03a3bfc8(0x28);
  iVar2 = FUN_03a3bfc8(0xb4);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar1,iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,(Color *)aIStack_18,3,0);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xec));
  Sexy::ToWString(asStack_38);
  iVar2 = FUN_03a3bfc8(0x32);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_03a3bfc8(0xb4);
  iVar4 = FUN_03a3bfc8(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1 - iVar2,iVar3,iVar4,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,(Color *)aIStack_18,3,0);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TemplateBundleWidget::Draw(Sexy::Graphics*) */

void __thiscall TemplateBundleWidget::Draw(TemplateBundleWidget *this,Graphics *param_1)

{
  nop();
  (**(code **)(*(long *)this + 800))(this,param_1);
  (**(code **)(*(long *)this + 0x328))(this,param_1);
  (**(code **)(*(long *)this + 0x330))(this,param_1);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  (**(code **)(*(long *)this + 0x340))(this,param_1);
  return;
}

