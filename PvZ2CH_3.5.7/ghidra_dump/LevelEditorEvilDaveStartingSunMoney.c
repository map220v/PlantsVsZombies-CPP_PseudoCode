// Class: LevelEditorEvilDaveStartingSunMoney


/* LevelEditorEvilDaveStartingSunMoney::~LevelEditorEvilDaveStartingSunMoney() */

void __thiscall
LevelEditorEvilDaveStartingSunMoney::~LevelEditorEvilDaveStartingSunMoney
          (LevelEditorEvilDaveStartingSunMoney *this)

{
  *(undefined ***)this = &PTR_GetClass_0695ddd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695e108;
  LevelEditorStartingSunMoney::~LevelEditorStartingSunMoney((LevelEditorStartingSunMoney *)this);
  return;
}


/* LevelEditorEvilDaveStartingSunMoney::~LevelEditorEvilDaveStartingSunMoney() */

void __thiscall
LevelEditorEvilDaveStartingSunMoney::~LevelEditorEvilDaveStartingSunMoney
          (LevelEditorEvilDaveStartingSunMoney *this)

{
  ~LevelEditorEvilDaveStartingSunMoney(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorEvilDaveStartingSunMoney::DealData() */

void __thiscall
LevelEditorEvilDaveStartingSunMoney::DealData(LevelEditorEvilDaveStartingSunMoney *this)

{
  CustomLevelUtils::SetTowerDefendStartingSun(*(int *)(this + 0xe0));
  return;
}


/* LevelEditorEvilDaveStartingSunMoney::Reload() */

void __thiscall
LevelEditorEvilDaveStartingSunMoney::Reload(LevelEditorEvilDaveStartingSunMoney *this)

{
  undefined4 uVar1;
  
  uVar1 = CustomLevelUtils::GetEvilDaveStartingSun();
  *(undefined4 *)(this + 0xe0) = uVar1;
  return;
}


/* LevelEditorEvilDaveStartingSunMoney::LevelEditorEvilDaveStartingSunMoney() */

void __thiscall
LevelEditorEvilDaveStartingSunMoney::LevelEditorEvilDaveStartingSunMoney
          (LevelEditorEvilDaveStartingSunMoney *this)

{
  LevelEditorStartingSunMoney::LevelEditorStartingSunMoney((LevelEditorStartingSunMoney *)this);
  *(undefined ***)this = &PTR_GetClass_0695ddd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695e108;
  return;
}

