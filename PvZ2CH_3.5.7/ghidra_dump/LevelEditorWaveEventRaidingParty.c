// Class: LevelEditorWaveEventRaidingParty


/* LevelEditorWaveEventRaidingParty::~LevelEditorWaveEventRaidingParty() */

void __thiscall
LevelEditorWaveEventRaidingParty::~LevelEditorWaveEventRaidingParty
          (LevelEditorWaveEventRaidingParty *this)

{
  *(undefined ***)this = &PTR_GetClass_06969030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06969358;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveEventRaidingParty::~LevelEditorWaveEventRaidingParty() */

void __thiscall
LevelEditorWaveEventRaidingParty::~LevelEditorWaveEventRaidingParty
          (LevelEditorWaveEventRaidingParty *this)

{
  ~LevelEditorWaveEventRaidingParty(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveEventRaidingParty::LevelEditorWaveEventRaidingParty() */

void __thiscall
LevelEditorWaveEventRaidingParty::LevelEditorWaveEventRaidingParty
          (LevelEditorWaveEventRaidingParty *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06969030;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06969358;
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  return;
}


/* LevelEditorWaveEventRaidingParty::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventRaidingParty::ButtonDepress(LevelEditorWaveEventRaidingParty *this,int param_1)

{
  undefined4 uVar1;
  CustomLevelMgr *pCVar2;
  
  if (param_1 == 0x7e6) {
    uVar1 = ClampInt(*(int *)(this + 0xf4) + -1,1,0x32);
    *(undefined4 *)(this + 0xf4) = uVar1;
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetRaidingPartySwashbucklerCount
              (pCVar2,*(int *)(this + 0xf0),*(int *)(this + 0xf4));
    return;
  }
  if (param_1 == 0x7e7) {
    uVar1 = ClampInt(*(int *)(this + 0xf4) + 1,1,0x32);
    *(undefined4 *)(this + 0xf4) = uVar1;
    pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::SetRaidingPartySwashbucklerCount
              (pCVar2,*(int *)(this + 0xf0),*(int *)(this + 0xf4));
    return;
  }
  return;
}


/* non-virtual thunk to LevelEditorWaveEventRaidingParty::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventRaidingParty::ButtonDepress(LevelEditorWaveEventRaidingParty *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorWaveEventRaidingParty::Reload() */

void __thiscall LevelEditorWaveEventRaidingParty::Reload(LevelEditorWaveEventRaidingParty *this)

{
  CustomLevelMgr *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar2 = CustomLevelMgr::GetRaidingPartySwashbucklerCount(pCVar1,*(int *)(this + 0xf0));
  uVar3 = ClampInt(iVar2,1,0x32);
  *(undefined4 *)(this + 0xf4) = uVar3;
  pCVar1 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetRaidingPartySwashbucklerCount
            (pCVar1,*(int *)(this + 0xf0),*(int *)(this + 0xf4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventRaidingParty::Init(int) */

void __thiscall
LevelEditorWaveEventRaidingParty::Init(LevelEditorWaveEventRaidingParty *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PVZ2UIButton *pPVar6;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  *(int *)(this + 0xf0) = param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04b54f08(100);
  iVar3 = FUN_04b54f08(0x28);
  iVar4 = FUN_04b54f08(10);
  iVar1 = (iVar3 * -3 + iVar4 * -2 + *(int *)(this + 0x50)) / 2;
  iVar5 = FUN_04b54f08(5);
  iVar5 = iVar5 + iVar2;
  iVar2 = iVar3 + iVar1 + iVar4;
  *(int *)(this + 0xfc) = iVar5;
  *(int *)(this + 0x118) = iVar2;
  *(int *)(this + 0x11c) = iVar5;
  *(int *)(this + 0x10c) = iVar5;
  *(int *)(this + 0x100) = iVar3;
  *(int *)(this + 0x104) = iVar3;
  *(int *)(this + 0x120) = iVar3;
  *(int *)(this + 0x124) = iVar3;
  *(int *)(this + 0x108) = iVar3 + iVar2 + iVar4;
  *(int *)(this + 0x110) = iVar3;
  *(int *)(this + 0x114) = iVar3;
  *(int *)(this + 0xf8) = iVar1;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x7e6,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b861f0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b861f0,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xe0) + 0x198))
            (*(long **)(this + 0xe0),*(undefined4 *)(this + 0xf8),*(undefined4 *)(this + 0xfc),
             *(undefined4 *)(this + 0x100),*(undefined4 *)(this + 0x104));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x7e7,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86688,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b86688,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0xe8) + 0x198))
            (*(long **)(this + 0xe8),*(undefined4 *)(this + 0x108),*(undefined4 *)(this + 0x10c),
             *(undefined4 *)(this + 0x110),*(undefined4 *)(this + 0x114));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  Reload(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventRaidingParty::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorWaveEventRaidingParty::Draw(LevelEditorWaveEventRaidingParty *this,Graphics *param_1)

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
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_RAIDING_PARTY_TITLE]");
  iVar1 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),iVar1);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_RAIDING_PARTY_BTN_LEFT]");
  iVar1 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar1);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86410);
  Sexy::Graphics::DrawImage
            (param_1,pIVar4,*(int *)(this + 0x118),*(int *)(this + 0x11c),*(int *)(this + 0x120),
             *(int *)(this + 0x124));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xf4));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_04b54f08(100);
  iVar2 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_28,0x66,0x37,0,0xff);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar3,aIStack_28,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

