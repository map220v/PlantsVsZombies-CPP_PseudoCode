// Class: LevelEditorDistanceSetting


/* LevelEditorDistanceSetting::~LevelEditorDistanceSetting() */

void __thiscall
LevelEditorDistanceSetting::~LevelEditorDistanceSetting(LevelEditorDistanceSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_0695e150;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695e478;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorDistanceSetting::~LevelEditorDistanceSetting() */

void __thiscall
LevelEditorDistanceSetting::~LevelEditorDistanceSetting(LevelEditorDistanceSetting *this)

{
  ~LevelEditorDistanceSetting(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorDistanceSetting::Reload() */

void __thiscall LevelEditorDistanceSetting::Reload(LevelEditorDistanceSetting *this)

{
  float fVar1;
  
  fVar1 = (float)CustomLevelUtils::GetEvilDavePlantDistance();
  *(int *)(this + 0x178) = (int)fVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDistanceSetting::Init() */

void __thiscall LevelEditorDistanceSetting::Init(LevelEditorDistanceSetting *this)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  PVZ2UIButton *pPVar12;
  undefined8 uVar13;
  long *plVar14;
  code *pcVar15;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = *(int *)(this + 0x54);
  iVar2 = *(int *)(this + 0x50);
  *(int *)(this + 0xec) = iVar9;
  *(undefined4 *)(this + 0xe0) = 0;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  *(undefined4 *)(this + 0xe4) = 0;
  *(int *)(this + 0xe8) = iVar2;
  iVar3 = FUN_04b334ec(0x14);
  *(int *)(this + 0xf0) = iVar3;
  iVar4 = FUN_04b334ec(0x48);
  *(int *)(this + 0xf4) = iVar4;
  iVar5 = FUN_04b334ec(0x28);
  iVar5 = iVar2 - iVar5;
  *(int *)(this + 0xf8) = iVar5;
  iVar6 = FUN_04b334ec(100);
  *(int *)(this + 0xfc) = iVar9 - iVar6;
  iVar7 = FUN_04b334ec(0x28);
  *(int *)(this + 0x158) = iVar7;
  iVar8 = FUN_04b334ec(0x28);
  *(int *)(this + 0x15c) = iVar8;
  iVar9 = FUN_04b334ec(10);
  iVar4 = iVar4 + iVar9;
  iVar9 = iVar3 + (iVar5 - iVar7) / 2;
  *(int *)(this + 0x154) = iVar4;
  *(int *)(this + 0x150) = iVar9;
  iVar6 = FUN_04b334ec(0x1e);
  *(int *)(this + 0x108) = iVar6;
  *(int *)(this + 0x10c) = iVar6;
  *(int *)(this + 0x118) = iVar6;
  *(int *)(this + 0x11c) = iVar6;
  iVar10 = FUN_04b334ec(5);
  *(int *)(this + 0x100) = (iVar9 - iVar10) - iVar6;
  iVar6 = iVar4 + (iVar8 - iVar6) / 2;
  *(int *)(this + 0x104) = iVar6;
  iVar10 = FUN_04b334ec(5);
  *(int *)(this + 0x114) = iVar6;
  *(int *)(this + 0x110) = iVar7 + iVar9 + iVar10;
  *(undefined4 *)(this + 0x140) = 0;
  *(int *)(this + 0x148) = iVar2;
  uVar11 = FUN_04b334ec(0x32);
  *(undefined4 *)(this + 0x14c) = uVar11;
  iVar9 = FUN_04b334ec(5);
  *(undefined4 *)(this + 0x130) = 0;
  *(int *)(this + 0x144) = iVar4 - iVar9;
  *(undefined4 *)(this + 0x134) = 0;
  *(int *)(this + 0x138) = iVar2;
  uVar11 = FUN_04b334ec(0x46);
  *(undefined4 *)(this + 0x13c) = uVar11;
  iVar9 = FUN_04b334ec(0xa0);
  *(int *)(this + 0x128) = iVar9;
  uVar11 = FUN_04b334ec(0x3c);
  *(undefined4 *)(this + 300) = uVar11;
  *(int *)(this + 0x120) = iVar3 + (iVar5 - iVar9) / 2;
  iVar9 = FUN_04b334ec(0x2d);
  *(int *)(this + 0x124) = iVar8 + iVar4 + iVar9;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x23,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x160) = pPVar12;
  FUN_05476c50(awStack_78);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x160);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b854c0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b854c0,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x160) + 0x198))
            (*(long **)(this + 0x160),*(undefined4 *)(this + 0x100),*(undefined4 *)(this + 0x104),
             *(undefined4 *)(this + 0x108),*(undefined4 *)(this + 0x10c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x160));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x22,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x168) = pPVar12;
  FUN_05476c50(awStack_78);
  nop();
  pPVar12 = *(PVZ2UIButton **)(this + 0x168);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85a10,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85a10,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x168) + 0x198))
            (*(long **)(this + 0x168),*(undefined4 *)(this + 0x110),*(undefined4 *)(this + 0x114),
             *(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x11c));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x168));
  TodStringTranslate(L"[LEVEL_EDITOR_EVIL_DAVE_SET_PLANT_OK_BTN]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,0x24,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x170) = pPVar12;
  FUN_05476c50(awStack_78);
  pPVar12 = *(PVZ2UIButton **)(this + 0x170);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x170) + 0x198))
            (*(long **)(this + 0x170),*(undefined4 *)(this + 0x120),*(undefined4 *)(this + 0x124),
             *(undefined4 *)(this + 0x128),*(undefined4 *)(this + 300));
  plVar14 = *(long **)(this + 0x170);
  pcVar15 = *(code **)(*plVar14 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar15)(plVar14,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
  Reload(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorDistanceSetting::LevelEditorDistanceSetting() */

void __thiscall
LevelEditorDistanceSetting::LevelEditorDistanceSetting(LevelEditorDistanceSetting *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0695e150;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695e478;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x150));
  *(undefined4 *)(this + 0x178) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDistanceSetting::ButtonDepress(int) */

void __thiscall
LevelEditorDistanceSetting::ButtonDepress(LevelEditorDistanceSetting *this,int param_1)

{
  int *piVar1;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x24) {
    CustomLevelUtils::SetEvilDavePlantDistance((float)*(int *)(this + 0x178));
    if (local_8 == ___stack_chk_guard) {
      UIUtil::CloseDialog((Widget *)this);
      return;
    }
  }
  else {
    if (param_1 == 0x22) {
      local_10 = BoardConstants::NUMBER_OF_COLUMNS();
      local_c = *(int *)(this + 0x178) + 1;
      piVar1 = eastl::min_alt<int>(&local_10,&local_c);
      *(int *)(this + 0x178) = *piVar1;
    }
    else if (param_1 == 0x23) {
      local_10 = 0;
      local_c = *(int *)(this + 0x178) + -1;
      piVar1 = eastl::max_alt<int>(&local_10,&local_c);
      *(int *)(this + 0x178) = *piVar1;
    }
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorDistanceSetting::ButtonDepress(int) */

void __thiscall
LevelEditorDistanceSetting::ButtonDepress(LevelEditorDistanceSetting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorDistanceSetting::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorDistanceSetting::Draw(LevelEditorDistanceSetting *this,Graphics *param_1)

{
  undefined8 uVar1;
  Image *pIVar2;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0xe0),*(int *)(this + 0xe4),*(int *)(this + 0xe8),
             *(int *)(this + 0xec));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85600);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  TodStringTranslate(L"[LEVEL_EDITOR_EVIL_DAVE_SET_DISTANCE]");
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x130),*(int *)(this + 0x134),*(int *)(this + 0x138),
             *(int *)(this + 0x13c));
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar1,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0xf0),*(int *)(this + 0xf4),*(int *)(this + 0xf8),
             *(int *)(this + 0xfc));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,*(int *)(this + 0x150),*(int *)(this + 0x154),*(int *)(this + 0x158),
             *(int *)(this + 0x15c));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x178));
  Sexy::ToWString(asStack_38);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x140),*(int *)(this + 0x144),*(int *)(this + 0x148),
             *(int *)(this + 0x14c));
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar1,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

