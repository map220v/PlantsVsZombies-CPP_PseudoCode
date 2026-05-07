// Class: LevelEditorTowerDefendStartingSunMoney


/* LevelEditorTowerDefendStartingSunMoney::~LevelEditorTowerDefendStartingSunMoney() */

void __thiscall
LevelEditorTowerDefendStartingSunMoney::~LevelEditorTowerDefendStartingSunMoney
          (LevelEditorTowerDefendStartingSunMoney *this)

{
  *(undefined ***)this = &PTR_GetClass_0695b090;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695b3c8;
  LevelEditorStartingSunMoney::~LevelEditorStartingSunMoney((LevelEditorStartingSunMoney *)this);
  return;
}


/* LevelEditorTowerDefendStartingSunMoney::~LevelEditorTowerDefendStartingSunMoney() */

void __thiscall
LevelEditorTowerDefendStartingSunMoney::~LevelEditorTowerDefendStartingSunMoney
          (LevelEditorTowerDefendStartingSunMoney *this)

{
  ~LevelEditorTowerDefendStartingSunMoney(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendStartingSunMoney::LevelEditorTowerDefendStartingSunMoney() */

void __thiscall
LevelEditorTowerDefendStartingSunMoney::LevelEditorTowerDefendStartingSunMoney
          (LevelEditorTowerDefendStartingSunMoney *this)

{
  LevelEditorStartingSunMoney::LevelEditorStartingSunMoney((LevelEditorStartingSunMoney *)this);
  *(undefined ***)this = &PTR_GetClass_0695b090;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695b3c8;
  return;
}


/* LevelEditorTowerDefendStartingSunMoney::Reload() */

void __thiscall
LevelEditorTowerDefendStartingSunMoney::Reload(LevelEditorTowerDefendStartingSunMoney *this)

{
  CustomLevelMgr *this_00;
  undefined4 uVar1;
  
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar1 = CustomLevelMgr::GetTowerDefendStartingSun(this_00);
  *(undefined4 *)(this + 0xe0) = uVar1;
  return;
}


/* LevelEditorTowerDefendStartingSunMoney::DealData() */

void __thiscall
LevelEditorTowerDefendStartingSunMoney::DealData(LevelEditorTowerDefendStartingSunMoney *this)

{
  CustomLevelMgr *this_00;
  
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetTowerDefendStartingSun(this_00,*(int *)(this + 0xe0));
  return;
}

