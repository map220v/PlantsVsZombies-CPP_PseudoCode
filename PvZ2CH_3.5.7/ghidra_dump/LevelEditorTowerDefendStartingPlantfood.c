// Class: LevelEditorTowerDefendStartingPlantfood


/* LevelEditorTowerDefendStartingPlantfood::SetValue(int) */

void __thiscall
LevelEditorTowerDefendStartingPlantfood::SetValue
          (LevelEditorTowerDefendStartingPlantfood *this,int param_1)

{
  *(int *)(this + 0xe0) = param_1;
  return;
}


/* LevelEditorTowerDefendStartingPlantfood::~LevelEditorTowerDefendStartingPlantfood() */

void __thiscall
LevelEditorTowerDefendStartingPlantfood::~LevelEditorTowerDefendStartingPlantfood
          (LevelEditorTowerDefendStartingPlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_0695b7a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695bae0;
  LevelEditorStartingPlantfood::~LevelEditorStartingPlantfood((LevelEditorStartingPlantfood *)this);
  return;
}


/* LevelEditorTowerDefendStartingPlantfood::~LevelEditorTowerDefendStartingPlantfood() */

void __thiscall
LevelEditorTowerDefendStartingPlantfood::~LevelEditorTowerDefendStartingPlantfood
          (LevelEditorTowerDefendStartingPlantfood *this)

{
  ~LevelEditorTowerDefendStartingPlantfood(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendStartingPlantfood::LevelEditorTowerDefendStartingPlantfood() */

void __thiscall
LevelEditorTowerDefendStartingPlantfood::LevelEditorTowerDefendStartingPlantfood
          (LevelEditorTowerDefendStartingPlantfood *this)

{
  LevelEditorStartingPlantfood::LevelEditorStartingPlantfood((LevelEditorStartingPlantfood *)this);
  *(undefined ***)this = &PTR_GetClass_0695b7a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695bae0;
  return;
}

