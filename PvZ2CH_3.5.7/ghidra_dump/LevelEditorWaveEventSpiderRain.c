// Class: LevelEditorWaveEventSpiderRain


/* LevelEditorWaveEventSpiderRain::~LevelEditorWaveEventSpiderRain() */

void __thiscall
LevelEditorWaveEventSpiderRain::~LevelEditorWaveEventSpiderRain
          (LevelEditorWaveEventSpiderRain *this)

{
  *(undefined ***)this = &PTR_GetClass_06968cc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06968fe8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveEventSpiderRain::~LevelEditorWaveEventSpiderRain() */

void __thiscall
LevelEditorWaveEventSpiderRain::~LevelEditorWaveEventSpiderRain
          (LevelEditorWaveEventSpiderRain *this)

{
  ~LevelEditorWaveEventSpiderRain(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveEventSpiderRain::LevelEditorWaveEventSpiderRain() */

void __thiscall
LevelEditorWaveEventSpiderRain::LevelEditorWaveEventSpiderRain(LevelEditorWaveEventSpiderRain *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06968cc0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06968fe8;
  Sexy::Insets::Insets((Insets *)(this + 0x10c));
  Sexy::Insets::Insets((Insets *)(this + 0x11c));
  Sexy::Insets::Insets((Insets *)(this + 300));
  Sexy::Insets::Insets((Insets *)(this + 0x13c));
  Sexy::Insets::Insets((Insets *)(this + 0x14c));
  Sexy::Insets::Insets((Insets *)(this + 0x15c));
  Sexy::Insets::Insets((Insets *)(this + 0x16c));
  Sexy::Insets::Insets((Insets *)(this + 0x17c));
  return;
}


/* LevelEditorWaveEventSpiderRain::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventSpiderRain::ButtonDepress(LevelEditorWaveEventSpiderRain *this,int param_1)

{
  undefined4 uVar1;
  CustomLevelMgr *pCVar2;
  
  switch(param_1) {
  case 0x7e6:
    uVar1 = ClampInt(*(int *)(this + 0x104) + -1,1,7);
    *(undefined4 *)(this + 0x104) = uVar1;
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetSpiderStormColumnStartEnd
              (pCVar2,*(int *)(this + 0x100),*(int *)(this + 0x104));
    return;
  case 0x7e7:
    uVar1 = ClampInt(*(int *)(this + 0x104) + 1,1,7);
    *(undefined4 *)(this + 0x104) = uVar1;
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetSpiderStormColumnStartEnd
              (pCVar2,*(int *)(this + 0x100),*(int *)(this + 0x104));
    return;
  case 0x7e8:
    uVar1 = ClampInt(*(int *)(this + 0x108) + -1,1,0xf);
    *(undefined4 *)(this + 0x108) = uVar1;
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetSpiderStormZombieCount(pCVar2,*(int *)(this + 0x100),*(int *)(this + 0x108));
    return;
  case 0x7e9:
    uVar1 = ClampInt(*(int *)(this + 0x108) + 1,1,0xf);
    *(undefined4 *)(this + 0x108) = uVar1;
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetSpiderStormZombieCount(pCVar2,*(int *)(this + 0x100),*(int *)(this + 0x108));
    return;
  default:
    return;
  }
}


/* non-virtual thunk to LevelEditorWaveEventSpiderRain::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventSpiderRain::ButtonDepress(LevelEditorWaveEventSpiderRain *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorWaveEventSpiderRain::Reload() */

void __thiscall LevelEditorWaveEventSpiderRain::Reload(LevelEditorWaveEventSpiderRain *this)

{
  CustomLevelMgr *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar2 = CustomLevelMgr::GetSpiderStormColumnStartEnd(pCVar1,*(int *)(this + 0x100));
  uVar3 = ClampInt(iVar2,1,7);
  *(undefined4 *)(this + 0x104) = uVar3;
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSpiderStormColumnStartEnd(pCVar1,*(int *)(this + 0x100),*(int *)(this + 0x104))
  ;
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar2 = CustomLevelMgr::GetSpiderStormZombieCount(pCVar1,*(int *)(this + 0x100));
  uVar3 = ClampInt(iVar2,1,0xf);
  *(undefined4 *)(this + 0x108) = uVar3;
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSpiderStormZombieCount(pCVar1,*(int *)(this + 0x100),*(int *)(this + 0x108));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSpiderRain::Init(int) */

void __thiscall
LevelEditorWaveEventSpiderRain::Init(LevelEditorWaveEventSpiderRain *this,int param_1)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  PVZ2UIButton *pPVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  *(int *)(this + 0x100) = param_1;
  local_8 = ___stack_chk_guard;
  iVar3 = *(int *)(this + 0x50) / 2;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  iVar5 = FUN_04b54f08(100);
  iVar6 = FUN_04b54f08(0x28);
  iVar7 = FUN_04b54f08(10);
  iVar4 = (iVar6 * -3 + iVar7 * -2 + iVar3) / 2;
  iVar8 = FUN_04b54f08(5);
  *(int *)(this + 0x114) = iVar6;
  iVar8 = iVar8 + iVar5;
  *(int *)(this + 0x10c) = iVar4;
  iVar5 = iVar6 + iVar4 + iVar7;
  iVar2 = iVar6 + iVar3 + iVar4 + iVar7;
  *(int *)(this + 0x13c) = iVar3 + iVar4;
  *(int *)(this + 300) = iVar5;
  *(int *)(this + 0x11c) = iVar6 + iVar5 + iVar7;
  *(int *)(this + 0x110) = iVar8;
  *(int *)(this + 0x130) = iVar8;
  *(int *)(this + 0x120) = iVar8;
  *(int *)(this + 0x140) = iVar8;
  *(int *)(this + 0x15c) = iVar2;
  *(int *)(this + 0x160) = iVar8;
  *(int *)(this + 0x150) = iVar8;
  *(int *)(this + 0x118) = iVar6;
  *(int *)(this + 0x134) = iVar6;
  *(int *)(this + 0x138) = iVar6;
  *(int *)(this + 0x124) = iVar6;
  *(int *)(this + 0x128) = iVar6;
  *(int *)(this + 0x144) = iVar6;
  *(int *)(this + 0x148) = iVar6;
  *(int *)(this + 0x164) = iVar6;
  *(int *)(this + 0x168) = iVar6;
  *(int *)(this + 0x14c) = iVar6 + iVar2 + iVar7;
  *(int *)(this + 0x154) = iVar6;
  *(int *)(this + 0x158) = iVar6;
  *(undefined4 *)(this + 0x16c) = 0;
  uVar9 = FUN_04b54f08(0x32);
  *(int *)(this + 0x174) = iVar3;
  *(undefined4 *)(this + 0x170) = uVar9;
  uVar9 = FUN_04b54f08(0x32);
  *(int *)(this + 0x17c) = iVar3;
  *(undefined4 *)(this + 0x178) = uVar9;
  uVar9 = FUN_04b54f08(0x32);
  *(int *)(this + 0x184) = iVar3;
  *(undefined4 *)(this + 0x180) = uVar9;
  uVar9 = FUN_04b54f08(0x32);
  *(undefined4 *)(this + 0x188) = uVar9;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,0x7e6,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b861f0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b861f0,2);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),*(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x110),
             *(undefined4 *)(this + 0x114),*(undefined4 *)(this + 0x118));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,0x7e7,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86688,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b86688,2);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),*(undefined4 *)(this + 0x11c),*(undefined4 *)(this + 0x120),
             *(undefined4 *)(this + 0x124),*(undefined4 *)(this + 0x128));
  plVar13 = *(long **)(this + 0xe8);
  pcVar12 = *(code **)(*plVar13 + 800);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar12)(plVar13,uVar11);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,0x7e8,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b861f0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b861f0,2);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xf0) + 0x198))
            (*(long **)(this + 0xf0),*(undefined4 *)(this + 0x13c),*(undefined4 *)(this + 0x140),
             *(undefined4 *)(this + 0x144),*(undefined4 *)(this + 0x148));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar10,0x7e9,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar10;
  FUN_05476c50(awStack_78);
  nop();
  pPVar10 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86688,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b86688,2);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xf8) + 0x198))
            (*(long **)(this + 0xf8),*(undefined4 *)(this + 0x14c),*(undefined4 *)(this + 0x150),
             *(undefined4 *)(this + 0x154),*(undefined4 *)(this + 0x158));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  Reload(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSpiderRain::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorWaveEventSpiderRain::Draw(LevelEditorWaveEventSpiderRain *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Image *pIVar4;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86360);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_SPIDER_RAIN_TITLE]");
  iVar1 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),iVar1);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86410);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 300),*(int *)(this + 0x130),*(int *)(this + 0x134),
             *(int *)(this + 0x138));
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86410);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x15c),*(int *)(this + 0x160),*(int *)(this + 0x164),
             *(int *)(this + 0x168));
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_SPIDER_RAIN_BTN_LEFT]");
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x16c),*(int *)(this + 0x170),*(int *)(this + 0x174),
             *(int *)(this + 0x178));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x104));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b54f08(5);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x16c),*(int *)(this + 0x130) - iVar1,*(int *)(this + 0x174)
             ,*(int *)(this + 0x178));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_SPIDER_RAIN_BTN_RIGHT]");
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x17c),*(int *)(this + 0x180),*(int *)(this + 0x184),
             *(int *)(this + 0x188));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x108));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b54f08(5);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x17c),*(int *)(this + 0x130) - iVar1,*(int *)(this + 0x184)
             ,*(int *)(this + 0x188));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_SPIDER_RAIN_TEXT]");
  iVar1 = FUN_04b54f08(0x96);
  iVar2 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color((Color *)aIStack_18,2);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

