// Class: LevelEditorWaveEventStorm


/* LevelEditorWaveEventStorm::~LevelEditorWaveEventStorm() */

void __thiscall
LevelEditorWaveEventStorm::~LevelEditorWaveEventStorm(LevelEditorWaveEventStorm *this)

{
  *(undefined ***)this = &PTR_GetClass_06968620;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06968948;
  FUN_05476c50(this + 0x110);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveEventStorm::~LevelEditorWaveEventStorm() */

void __thiscall
LevelEditorWaveEventStorm::~LevelEditorWaveEventStorm(LevelEditorWaveEventStorm *this)

{
  ~LevelEditorWaveEventStorm(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveEventStorm::LevelEditorWaveEventStorm() */

void __thiscall
LevelEditorWaveEventStorm::LevelEditorWaveEventStorm(LevelEditorWaveEventStorm *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06968620;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06968948;
  FUN_05476574(this + 0x110);
  return;
}


/* LevelEditorWaveEventStorm::UpdateButtonState() */

void __thiscall LevelEditorWaveEventStorm::UpdateButtonState(LevelEditorWaveEventStorm *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xe0);
  if (*(int *)(this + 0x104) < 2) {
    (**(code **)(*plVar2 + 0x188))(plVar2,1);
  }
  else {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0xe8);
  if (*(int *)(this + 0x104) < *(int *)(this + 0x108)) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
    plVar2 = *(long **)(this + 0xf0);
    if (*(int *)(this + 0x104) < *(int *)(this + 0x108)) goto LAB_04b55bb0;
  }
  else {
    (**(code **)(*plVar2 + 0x188))(plVar2,1);
    plVar2 = *(long **)(this + 0xf0);
    if (*(int *)(this + 0x104) < *(int *)(this + 0x108)) {
LAB_04b55bb0:
      (**(code **)(*plVar2 + 0x188))(plVar2,0);
      iVar1 = *(int *)(this + 0x108);
      plVar2 = *(long **)(this + 0xf8);
      goto joined_r0x04b55bd0;
    }
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,1);
  iVar1 = *(int *)(this + 0x108);
  plVar2 = *(long **)(this + 0xf8);
joined_r0x04b55bd0:
  if (iVar1 < 7) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
    return;
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,1);
  return;
}


/* LevelEditorWaveEventStorm::ChangeStartColumn(int) */

void __thiscall
LevelEditorWaveEventStorm::ChangeStartColumn(LevelEditorWaveEventStorm *this,int param_1)

{
  CustomLevelMgr *this_00;
  
  if (((1 < param_1) && (*(int *)(this + 0x108) <= param_1)) && (6 < *(int *)(this + 0x108))) {
    *(undefined4 *)(this + 0x108) = 7;
  }
  *(int *)(this + 0x104) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSandStormColumnStart(this_00,*(int *)(this + 0x100),*(int *)(this + 0x104));
  UpdateButtonState(this);
  return;
}


/* LevelEditorWaveEventStorm::ChangeEndColumn(int) */

void __thiscall
LevelEditorWaveEventStorm::ChangeEndColumn(LevelEditorWaveEventStorm *this,int param_1)

{
  CustomLevelMgr *this_00;
  
  if ((param_1 <= *(int *)(this + 0x104)) && (*(int *)(this + 0x104) < 2)) {
    *(undefined4 *)(this + 0x104) = 1;
  }
  *(int *)(this + 0x108) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSandStormColumnEnd(this_00,*(int *)(this + 0x100),*(int *)(this + 0x108));
  UpdateButtonState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventStorm::Reload() */

void __thiscall LevelEditorWaveEventStorm::Reload(LevelEditorWaveEventStorm *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CustomLevelMgr *pCVar4;
  wchar_t *pwVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar1 = CustomLevelMgr::GetSandStormType(pCVar4,*(int *)(this + 0x100));
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar2 = CustomLevelMgr::GetSandStormColumnStart(pCVar4,*(int *)(this + 0x100));
  *(undefined4 *)(this + 0x104) = uVar2;
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar3 = CustomLevelMgr::GetSandStormColumnEnd(pCVar4,*(int *)(this + 0x100));
  *(int *)(this + 0x108) = iVar3;
  if ((iVar3 < *(int *)(this + 0x104) || 7 < iVar3) || (*(int *)(this + 0x104) < 1)) {
    *(undefined4 *)(this + 0x104) = 7;
    *(undefined4 *)(this + 0x108) = 7;
    ChangeStartColumn(this,7);
    ChangeEndColumn(this,7);
    if (iVar1 == 0) goto LAB_04b592b8;
LAB_04b59264:
    if (iVar1 != 1) goto LAB_04b5926c;
    pwVar5 = L"[LEVEL_EDITOR_SNOWSTORM]";
  }
  else {
    if (iVar1 != 0) goto LAB_04b59264;
LAB_04b592b8:
    pwVar5 = L"[LEVEL_EDITOR_SANDSTORM]";
  }
  TodStringTranslate(pwVar5);
  FUN_054766c8(this + 0x110,auStack_10);
  FUN_05476c50(auStack_10);
LAB_04b5926c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventStorm::Init(int) */

void __thiscall LevelEditorWaveEventStorm::Init(LevelEditorWaveEventStorm *this,int param_1)

{
  uint uVar1;
  ButtonListener *pBVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  PVZ2UIButton *pPVar9;
  undefined8 uVar10;
  LevelEditorWaveEventStormZombie *this_00;
  code *pcVar11;
  uint uVar12;
  long *plVar13;
  string asStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  *(int *)(this + 0x100) = param_1;
  pBVar2 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04b54f08(0x55);
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x7e6,pBVar2,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar9;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar13 = *(long **)(this + 0xe0);
  iVar4 = FUN_04b54f08(0x19);
  iVar5 = *(int *)(this + 0x50);
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = FUN_04b54f08(0x2d);
  iVar6 = FUN_04b54f08(5);
  uVar7 = FUN_04b54f08(0x28);
  (**(code **)(*plVar13 + 0x198))(plVar13,((iVar8 >> 2) - iVar4) - iVar5,iVar6 + iVar3,uVar7,uVar7);
  plVar13 = *(long **)(this + 0xe0);
  pcVar11 = *(code **)(*plVar13 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(plVar13,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x7e7,pBVar2,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar9;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar13 = *(long **)(this + 0xe8);
  iVar4 = FUN_04b54f08(0x19);
  iVar5 = *(int *)(this + 0x50);
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = FUN_04b54f08(5);
  uVar7 = FUN_04b54f08(0x28);
  (**(code **)(*plVar13 + 0x198))(plVar13,iVar4 + (iVar8 >> 2) + iVar5,iVar3 + iVar5,uVar7,uVar7);
  plVar13 = *(long **)(this + 0xe8);
  pcVar11 = *(code **)(*plVar13 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(plVar13,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x7e8,pBVar2,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar9;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar13 = *(long **)(this + 0xf0);
  iVar4 = FUN_04b54f08(0x19);
  iVar5 = *(int *)(this + 0x50) * 3;
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = FUN_04b54f08(0x2d);
  iVar6 = FUN_04b54f08(5);
  uVar7 = FUN_04b54f08(0x28);
  (**(code **)(*plVar13 + 0x198))(plVar13,((iVar8 >> 2) - iVar4) - iVar5,iVar6 + iVar3,uVar7,uVar7);
  plVar13 = *(long **)(this + 0xf0);
  pcVar11 = *(code **)(*plVar13 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(plVar13,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar9 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar9,0x7e9,pBVar2,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar9;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar9 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar13 = *(long **)(this + 0xf8);
  iVar4 = FUN_04b54f08(0x19);
  iVar5 = *(int *)(this + 0x50) * 3;
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = FUN_04b54f08(5);
  uVar7 = FUN_04b54f08(0x28);
  (**(code **)(*plVar13 + 0x198))(plVar13,iVar4 + (iVar8 >> 2) + iVar5,iVar3 + iVar5,uVar7,uVar7);
  plVar13 = *(long **)(this + 0xf8);
  pcVar11 = *(code **)(*plVar13 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar11)(plVar13,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  iVar8 = FUN_04b54f08(0x19);
  iVar5 = FUN_04b54f08(0x46);
  iVar3 = FUN_04b54f08(10);
  uVar12 = 0;
  do {
    iVar4 = FUN_04b54f08(0xb4);
    iVar6 = FUN_04b54f08(0xf);
    Sexy::Insets::Insets
              (aIStack_40,iVar8 + (uVar12 & 3) * (iVar5 + iVar3),
               iVar4 + (iVar5 + iVar6) * ((int)uVar12 >> 2),iVar5,iVar5);
    this_00 = ::operator_new(0xf0);
    LevelEditorWaveEventStormZombie::LevelEditorWaveEventStormZombie(this_00);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
    uVar1 = uVar12 + 1;
    LevelEditorWaveEventStormZombie::Init(this_00,*(int *)(this + 0x100),uVar12);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    uVar12 = uVar1;
  } while (uVar1 != 8);
  Reload(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWaveEventStorm::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventStorm::ButtonDepress(LevelEditorWaveEventStorm *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  switch(param_1) {
  case 0x7e6:
    ChangeStartColumn(this,*(int *)(this + 0x104) + -1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = FUN_04b534f4(*(undefined4 *)(lVar2 + 0x40));
    if (iVar1 == 0x3c) {
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      return;
    }
    break;
  case 0x7e7:
    ChangeStartColumn(this,*(int *)(this + 0x104) + 1);
    return;
  case 0x7e8:
    ChangeEndColumn(this,*(int *)(this + 0x108) + -1);
    return;
  case 0x7e9:
    ChangeEndColumn(this,*(int *)(this + 0x108) + 1);
    return;
  }
  return;
}


/* non-virtual thunk to LevelEditorWaveEventStorm::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventStorm::ButtonDepress(LevelEditorWaveEventStorm *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventStorm::TriggerTutorial() */

void __thiscall LevelEditorWaveEventStorm::TriggerTutorial(LevelEditorWaveEventStorm *this)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b534f4(*(undefined4 *)(lVar3 + 0x40));
  if (iVar1 == 0x3c) {
    LawnApp::KillGameMaskUI(gLawnApp);
    uVar4 = *(undefined8 *)(this + 0xe0);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_16]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar4,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b54f08(0x104);
    uVar2 = FUN_04b54f08(200);
    FUN_04b536c8(lVar3 + 0x114,-iVar1,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventStorm::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWaveEventStorm::Draw(LevelEditorWaveEventStorm *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  Color aCStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color(aCStack_38,0x66,0x37,0);
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86360);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04b54f08(0x14);
  iVar2 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,this + 0x110,aIStack_28,uVar5,aIStack_18,5,1);
  TodStringTranslate(L"[LEVEL_EDITOR_EVENT_INTERVAL_START]");
  iVar1 = FUN_04b54f08(0x32);
  iVar2 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50) / 2,iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x104));
  Sexy::ToWString(asStack_48);
  iVar3 = FUN_04b54f08(0x19);
  iVar2 = *(int *)(this + 0x50);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_04b54f08(0x55);
  iVar4 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,(iVar1 >> 2) - iVar3,iVar2,iVar4,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  TodStringTranslate(L"[LEVEL_EDITOR_EVENT_INTERVAL_END]");
  iVar2 = FUN_04b54f08(0x32);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 2,iVar2,iVar1 / 2,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x108));
  Sexy::ToWString(asStack_48);
  iVar3 = FUN_04b54f08(0x19);
  iVar2 = *(int *)(this + 0x50) * 3;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_04b54f08(0x55);
  iVar4 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,(iVar1 >> 2) - iVar3,iVar2,iVar4,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  TodStringTranslate(L"[LEVEL_EDITOR_EVIL_DAVE_SET_ZOMBIE_TITLE]");
  iVar1 = FUN_04b54f08(0x82);
  iVar2 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

