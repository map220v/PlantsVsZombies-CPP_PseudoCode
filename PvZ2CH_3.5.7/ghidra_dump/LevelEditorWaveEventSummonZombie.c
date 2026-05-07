// Class: LevelEditorWaveEventSummonZombie


/* LevelEditorWaveEventSummonZombie::~LevelEditorWaveEventSummonZombie() */

void __thiscall
LevelEditorWaveEventSummonZombie::~LevelEditorWaveEventSummonZombie
          (LevelEditorWaveEventSummonZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_0696a480;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696a7a8;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_0696a7f0;
  FUN_05476c50(this + 0x150);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveEventSummonZombie::~LevelEditorWaveEventSummonZombie() */

void __thiscall
LevelEditorWaveEventSummonZombie::~LevelEditorWaveEventSummonZombie
          (LevelEditorWaveEventSummonZombie *this)

{
  ~LevelEditorWaveEventSummonZombie(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveEventSummonZombie::LevelEditorWaveEventSummonZombie() */

void __thiscall
LevelEditorWaveEventSummonZombie::LevelEditorWaveEventSummonZombie
          (LevelEditorWaveEventSummonZombie *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::EditListener::EditListener((EditListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0696a480;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696a7a8;
  *(undefined ***)(this + 0xe0) = &PTR_EditWidgetText_0696a7f0;
  FUN_05476574(this + 0x150);
  return;
}


/* LevelEditorWaveEventSummonZombie::UpdateButtonState() */

void __thiscall
LevelEditorWaveEventSummonZombie::UpdateButtonState(LevelEditorWaveEventSummonZombie *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xe8);
  if (*(int *)(this + 0x158) < 2) {
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
  }
  else {
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
  }
  plVar3 = *(long **)(this + 0xf0);
  if (*(int *)(this + 0x158) < *(int *)(this + 0x15c)) {
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    plVar3 = *(long **)(this + 0xf8);
    if (*(int *)(this + 0x158) < *(int *)(this + 0x15c)) goto LAB_04b55dfc;
LAB_04b55cf0:
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    iVar1 = *(int *)(this + 0x15c);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    plVar3 = *(long **)(this + 0x100);
    if (iVar2 <= iVar1) goto LAB_04b55d18;
LAB_04b55e24:
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    plVar3 = *(long **)(this + 0x108);
    if (*(int *)(this + 0x160) < 2) goto LAB_04b55e48;
LAB_04b55d3c:
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    plVar3 = *(long **)(this + 0x110);
    if (*(int *)(this + 0x164) <= *(int *)(this + 0x160)) goto LAB_04b55d64;
LAB_04b55e70:
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    plVar3 = *(long **)(this + 0x118);
    if (*(int *)(this + 0x160) < *(int *)(this + 0x164)) goto LAB_04b55e98;
  }
  else {
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    plVar3 = *(long **)(this + 0xf8);
    if (*(int *)(this + 0x15c) <= *(int *)(this + 0x158)) goto LAB_04b55cf0;
LAB_04b55dfc:
    (**(code **)(*plVar3 + 0x188))(plVar3,0);
    iVar1 = *(int *)(this + 0x15c);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    plVar3 = *(long **)(this + 0x100);
    if (iVar1 < iVar2) goto LAB_04b55e24;
LAB_04b55d18:
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    plVar3 = *(long **)(this + 0x108);
    if (1 < *(int *)(this + 0x160)) goto LAB_04b55d3c;
LAB_04b55e48:
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    plVar3 = *(long **)(this + 0x110);
    if (*(int *)(this + 0x160) < *(int *)(this + 0x164)) goto LAB_04b55e70;
LAB_04b55d64:
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    plVar3 = *(long **)(this + 0x118);
    if (*(int *)(this + 0x160) < *(int *)(this + 0x164)) {
LAB_04b55e98:
      (**(code **)(*plVar3 + 0x188))(plVar3,0);
      iVar1 = *(int *)(this + 0x164);
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      plVar3 = *(long **)(this + 0x120);
      if (iVar2 <= iVar1) goto LAB_04b55ec0;
      goto LAB_04b55db4;
    }
  }
  (**(code **)(*plVar3 + 0x188))(plVar3,1);
  iVar1 = *(int *)(this + 0x164);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  plVar3 = *(long **)(this + 0x120);
  if (iVar2 <= iVar1) {
LAB_04b55ec0:
    (**(code **)(*plVar3 + 0x188))(plVar3,1);
    return;
  }
LAB_04b55db4:
  (**(code **)(*plVar3 + 0x188))(plVar3,0);
  return;
}


/* LevelEditorWaveEventSummonZombie::UpdateLevelButtonState() */

void __thiscall
LevelEditorWaveEventSummonZombie::UpdateLevelButtonState(LevelEditorWaveEventSummonZombie *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x128);
  if (*(int *)(this + 0x168) < 2) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  else {
    (**(code **)(*plVar1 + 0x188))(plVar1,0);
  }
  plVar1 = *(long **)(this + 0x130);
  if (*(int *)(this + 0x168) < 10) {
    (**(code **)(*plVar1 + 0x188))(plVar1,0);
    return;
  }
  (**(code **)(*plVar1 + 0x188))(plVar1,1);
  return;
}


/* LevelEditorWaveEventSummonZombie::ChangeStartColumn(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ChangeStartColumn
          (LevelEditorWaveEventSummonZombie *this,int param_1)

{
  CustomLevelMgr *this_00;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  else if (*(int *)(this + 0x15c) < param_1) {
    param_1 = *(int *)(this + 0x15c);
  }
  *(int *)(this + 0x158) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSummonZombieStartColumn(this_00,*(int *)(this + 0x148),*(int *)(this + 0x158));
  UpdateButtonState(this);
  return;
}


/* LevelEditorWaveEventSummonZombie::ChangeEndColumn(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ChangeEndColumn
          (LevelEditorWaveEventSummonZombie *this,int param_1)

{
  int iVar1;
  CustomLevelMgr *this_00;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  if (param_1 < iVar1) {
    if (param_1 < *(int *)(this + 0x158)) {
      param_1 = *(int *)(this + 0x158);
    }
  }
  else {
    param_1 = BoardConstants::NUMBER_OF_COLUMNS();
  }
  *(int *)(this + 0x15c) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSummonZombieEndColumn(this_00,*(int *)(this + 0x148),*(int *)(this + 0x15c));
  UpdateButtonState(this);
  return;
}


/* LevelEditorWaveEventSummonZombie::ChangeStartRow(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ChangeStartRow(LevelEditorWaveEventSummonZombie *this,int param_1)

{
  CustomLevelMgr *this_00;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  else if (*(int *)(this + 0x164) < param_1) {
    param_1 = *(int *)(this + 0x164);
  }
  *(int *)(this + 0x160) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSummonZombieStartRow(this_00,*(int *)(this + 0x148),*(int *)(this + 0x160));
  UpdateButtonState(this);
  return;
}


/* LevelEditorWaveEventSummonZombie::ChangeEndRow(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ChangeEndRow(LevelEditorWaveEventSummonZombie *this,int param_1)

{
  int iVar1;
  CustomLevelMgr *this_00;
  
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if (param_1 < iVar1) {
    if (param_1 < *(int *)(this + 0x160)) {
      param_1 = *(int *)(this + 0x160);
    }
  }
  else {
    param_1 = BoardConstants::NUMBER_OF_ROWS();
  }
  *(int *)(this + 0x164) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSummonZombieEndRow(this_00,*(int *)(this + 0x148),*(int *)(this + 0x164));
  UpdateButtonState(this);
  return;
}


/* LevelEditorWaveEventSummonZombie::ChangeZombieLevel(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ChangeZombieLevel
          (LevelEditorWaveEventSummonZombie *this,int param_1)

{
  CustomLevelMgr *this_00;
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  else if (9 < param_1) {
    param_1 = 10;
  }
  *(int *)(this + 0x168) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetSummonZombieLevel(this_00,*(int *)(this + 0x148),*(int *)(this + 0x168));
  UpdateLevelButtonState(this);
  return;
}


/* LevelEditorWaveEventSummonZombie::UpdateNumsButtonState() */

void __thiscall
LevelEditorWaveEventSummonZombie::UpdateNumsButtonState(LevelEditorWaveEventSummonZombie *this)

{
  int iVar1;
  CustomLevelMgr *this_00;
  long *plVar2;
  
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar1 = CustomLevelMgr::GetSummonZombieNums(this_00,*(int *)(this + 0x148));
  *(int *)(this + 0x16c) = iVar1;
  plVar2 = *(long **)(this + 0x138);
  if (iVar1 < 2) {
    (**(code **)(*plVar2 + 0x188))(plVar2,1);
  }
  else {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
  }
  plVar2 = *(long **)(this + 0x140);
  if (*(int *)(this + 0x16c) < 100) {
    (**(code **)(*plVar2 + 0x188))(plVar2,0);
    return;
  }
  (**(code **)(*plVar2 + 0x188))(plVar2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSummonZombie::ChangeZombieNums(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ChangeZombieNums
          (LevelEditorWaveEventSummonZombie *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 2) {
    param_1 = 1;
  }
  else if (99 < param_1) {
    param_1 = 100;
  }
  plVar1 = *(long **)(this + 0x170);
  *(int *)(this + 0x16c) = param_1;
  pcVar2 = *(code **)(*plVar1 + 0x318);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x16c));
  (*pcVar2)(plVar1,asStack_10);
  std::string::~string(asStack_10);
  UpdateNumsButtonState(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelEditorWaveEventSummonZombie::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ButtonDepress(LevelEditorWaveEventSummonZombie *this,int param_1)

{
  switch(param_1) {
  case 300:
    ChangeStartColumn(this,*(int *)(this + 0x158) + -1);
    return;
  case 0x12d:
    ChangeStartColumn(this,*(int *)(this + 0x158) + 1);
    return;
  case 0x12e:
    ChangeEndColumn(this,*(int *)(this + 0x15c) + -1);
    return;
  case 0x12f:
    ChangeEndColumn(this,*(int *)(this + 0x15c) + 1);
    return;
  case 0x130:
    ChangeStartRow(this,*(int *)(this + 0x160) + -1);
    return;
  case 0x131:
    ChangeStartRow(this,*(int *)(this + 0x160) + 1);
    return;
  case 0x132:
    ChangeEndRow(this,*(int *)(this + 0x164) + -1);
    return;
  case 0x133:
    ChangeEndRow(this,*(int *)(this + 0x164) + 1);
    return;
  case 0x134:
    ChangeZombieLevel(this,*(int *)(this + 0x168) + -1);
    return;
  case 0x135:
    ChangeZombieLevel(this,*(int *)(this + 0x168) + 1);
    return;
  case 0x136:
    ChangeZombieNums(this,*(int *)(this + 0x16c) + 1);
    return;
  case 0x137:
    ChangeZombieNums(this,*(int *)(this + 0x16c) + -1);
    return;
  default:
    return;
  }
}


/* non-virtual thunk to LevelEditorWaveEventSummonZombie::ButtonDepress(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::ButtonDepress(LevelEditorWaveEventSummonZombie *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSummonZombie::Reload() */

void __thiscall LevelEditorWaveEventSummonZombie::Reload(LevelEditorWaveEventSummonZombie *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  CustomLevelMgr *pCVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetSummonZombieRowRange(iVar2);
  iVar2 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetSummonZombieColumnRange(iVar2);
  *(undefined4 *)(this + 0x158) = local_10;
  *(undefined4 *)(this + 0x15c) = local_c;
  *(undefined4 *)(this + 0x160) = local_18;
  *(undefined4 *)(this + 0x164) = local_14;
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar3 = CustomLevelMgr::GetSummonZombieLevel(pCVar4,*(int *)(this + 0x148));
  *(undefined4 *)(this + 0x168) = uVar3;
  pCVar4 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar3 = CustomLevelMgr::GetSummonZombieNums(pCVar4,*(int *)(this + 0x148));
  *(undefined4 *)(this + 0x16c) = uVar3;
  ChangeStartColumn(this,*(int *)(this + 0x158));
  ChangeEndColumn(this,*(int *)(this + 0x15c));
  ChangeStartRow(this,*(int *)(this + 0x160));
  ChangeEndRow(this,*(int *)(this + 0x164));
  ChangeZombieLevel(this,*(int *)(this + 0x168));
  ChangeZombieNums(this,*(int *)(this + 0x16c));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSummonZombie::Init(int) */

void __thiscall
LevelEditorWaveEventSummonZombie::Init(LevelEditorWaveEventSummonZombie *this,int param_1)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  ZombieNumsEditWidget *this_00;
  LevelEditorWaveEventSummonZombieSlot *this_01;
  code *pcVar9;
  long *plVar10;
  string asStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x148) = param_1;
  *(undefined4 *)(this + 0x158) = 1;
  this[0x59] = (LevelEditorWaveEventSummonZombie)0x0;
  uVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  *(undefined4 *)(this + 0x160) = 1;
  pBVar1 = (ButtonListener *)(this + 0xd8);
  *(undefined4 *)(this + 0x15c) = uVar2;
  uVar2 = BoardConstants::NUMBER_OF_ROWS();
  *(undefined4 *)(this + 0x164) = uVar2;
  TodStringTranslate(L"[LEVEL_EDITOR_WAVE_EVENT_SUMMON_ZOMBIE_TITLE]");
  FUN_054766c8(this + 0x150,aIStack_40);
  FUN_05476c50(aIStack_40);
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,300,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0xe8);
  iVar3 = FUN_04b54f08(0x46);
  iVar5 = *(int *)(this + 0x50);
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0x5a);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,(iVar6 >> 2) - iVar3,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0xe8);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x12d,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0xf0);
  iVar3 = FUN_04b54f08(0x1e);
  iVar5 = *(int *)(this + 0x50);
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0x5a);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar3 + (iVar6 >> 2),uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0xf0);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x12e,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0xf8);
  iVar3 = FUN_04b54f08(0x46);
  iVar5 = *(int *)(this + 0x50) * 3;
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0x5a);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,(iVar6 >> 2) - iVar3,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0xf8);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x12f,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x100);
  iVar3 = FUN_04b54f08(0x1e);
  iVar5 = *(int *)(this + 0x50) * 3;
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0x5a);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar3 + (iVar6 >> 2),uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x100);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x130,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x108);
  iVar3 = FUN_04b54f08(0x46);
  iVar5 = *(int *)(this + 0x50);
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0xaf);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,(iVar6 >> 2) - iVar3,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x108);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x131,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x110);
  iVar3 = FUN_04b54f08(0x1e);
  iVar5 = *(int *)(this + 0x50);
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0xaf);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar3 + (iVar6 >> 2),uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x110);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x132,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x118) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x118);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x118);
  iVar3 = FUN_04b54f08(0x46);
  iVar5 = *(int *)(this + 0x50) * 3;
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0xaf);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,(iVar6 >> 2) - iVar3,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x118);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x118));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x133,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x120);
  iVar3 = FUN_04b54f08(0x1e);
  iVar5 = *(int *)(this + 0x50) * 3;
  iVar6 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar6 = iVar5;
  }
  uVar2 = FUN_04b54f08(0xaf);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar3 + (iVar6 >> 2),uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x120);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x134,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x128) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x128);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x128);
  uVar2 = FUN_04b54f08(0x16d);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,*(int *)(this + 0x50) / 3,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x128);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x128));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x135,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x130);
  iVar5 = FUN_04b54f08(100);
  iVar6 = *(int *)(this + 0x50);
  uVar2 = FUN_04b54f08(0x16d);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar6 / 3 + iVar5,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x130);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x130));
  std::string::string(asStack_80,"-");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x137,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x138);
  iVar5 = FUN_04b54f08(0x23);
  iVar6 = *(int *)(this + 0x50);
  uVar2 = FUN_04b54f08(0x10e);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar6 / 3 + iVar5,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x138);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar7,0x136,pBVar1,awStack_78,(Color *)aIStack_40);
  *(PVZ2UIButton **)(this + 0x140) = pPVar7;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar7 = *(PVZ2UIButton **)(this + 0x140);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86610,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b86148,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  plVar10 = *(long **)(this + 0x140);
  iVar5 = FUN_04b54f08(0x87);
  iVar6 = *(int *)(this + 0x50);
  uVar2 = FUN_04b54f08(0x10e);
  uVar4 = FUN_04b54f08(0x28);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar6 / 3 + iVar5,uVar2,uVar4,uVar4);
  plVar10 = *(long **)(this + 0x140);
  pcVar9 = *(code **)(*plVar10 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(plVar10,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  this_00 = ::operator_new(0x180);
  ZombieNumsEditWidget::ZombieNumsEditWidget(this_00,(EditListener *)(this + 0xe0));
  *(ZombieNumsEditWidget **)(this + 0x170) = this_00;
  FUN_04b534f8(this_00 + 0x17c,*(undefined4 *)(this + 0x148));
  plVar10 = *(long **)(this + 0x170);
  pcVar9 = *(code **)(*plVar10 + 0x330);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar9)(plVar10,uVar8,0);
  plVar10 = *(long **)(this + 0x170);
  iVar5 = FUN_04b54f08(0x50);
  iVar6 = *(int *)(this + 0x50);
  uVar2 = FUN_04b54f08(0x10c);
  uVar4 = FUN_04b54f08(0x32);
  (**(code **)(*plVar10 + 0x198))(plVar10,iVar6 / 3 + iVar5,uVar2,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x170));
  iVar6 = FUN_04b54f08(0x2d);
  iVar5 = FUN_04b54f08(0x46);
  iVar3 = FUN_04b54f08(0x104);
  Sexy::Insets::Insets(aIStack_40,iVar6,iVar3,iVar5,iVar5);
  this_01 = ::operator_new(0xf0);
  LevelEditorWaveEventSummonZombieSlot::LevelEditorWaveEventSummonZombieSlot(this_01);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_40);
  LevelEditorWaveEventSummonZombieSlot::Init(this_01,*(int *)(this + 0x148));
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  Reload(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveEventSummonZombie::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorWaveEventSummonZombie::Draw(LevelEditorWaveEventSummonZombie *this,Graphics *param_1)

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
  WriteWordInRect(param_1,this + 0x150,aIStack_28,uVar5,aIStack_18,5,1);
  TodStringTranslate(L"[LEVEL_EDITOR_EVENT_INTERVAL_START]");
  iVar1 = FUN_04b54f08(0x32);
  iVar2 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50) / 2,iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x158));
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
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x15c));
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
  TodStringTranslate(L"[LEVEL_EDITOR_EVENT_ROW_START]");
  iVar1 = FUN_04b54f08(0x32);
  iVar2 = FUN_04b54f08(0x55);
  iVar3 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,iVar1 + iVar2,*(int *)(this + 0x50) / 2,iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x160));
  Sexy::ToWString(asStack_48);
  iVar3 = FUN_04b54f08(0x19);
  iVar2 = *(int *)(this + 0x50);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_04b54f08(0x55);
  iVar4 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,(iVar1 >> 2) - iVar3,iVar2 << 1,iVar4,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  TodStringTranslate(L"[LEVEL_EDITOR_EVENT_ROW_END]");
  iVar2 = FUN_04b54f08(0x32);
  iVar3 = FUN_04b54f08(0x55);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_04b54f08(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 2,iVar2 + iVar3,iVar1 / 2,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x164));
  Sexy::ToWString(asStack_48);
  iVar3 = FUN_04b54f08(0x19);
  iVar2 = *(int *)(this + 0x50) * 3;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = FUN_04b54f08(0x55);
  iVar4 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,(iVar1 >> 2) - iVar3,iVar2 << 1,iVar4,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  TodStringTranslate(L"[LEVEL_EDITOR_EVIL_DAVE_SET_ZOMBIE_TITLE]");
  iVar1 = FUN_04b54f08(0x82);
  iVar2 = FUN_04b54f08(0x55);
  iVar3 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,0,iVar1 + iVar2,*(int *)(this + 0x50),iVar3);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  TodStringTranslate(L"[LEVEL_EDITOR_EVENT_ZOMBIE_LEVEL]");
  iVar1 = FUN_04b54f08(0x13b);
  iVar2 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x168));
  Sexy::ToWString(asStack_48);
  iVar2 = FUN_04b54f08(0x2d);
  iVar1 = *(int *)(this + 0x50);
  iVar3 = FUN_04b54f08(0x163);
  iVar4 = FUN_04b54f08(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 3 + iVar2,iVar3,iVar4,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

