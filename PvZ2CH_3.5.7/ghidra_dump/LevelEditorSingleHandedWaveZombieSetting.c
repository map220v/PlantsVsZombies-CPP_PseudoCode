// Class: LevelEditorSingleHandedWaveZombieSetting


/* LevelEditorSingleHandedWaveZombieSetting::~LevelEditorSingleHandedWaveZombieSetting() */

void __thiscall
LevelEditorSingleHandedWaveZombieSetting::~LevelEditorSingleHandedWaveZombieSetting
          (LevelEditorSingleHandedWaveZombieSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_06967240;
  LevelEditorWaveZombieSetting::~LevelEditorWaveZombieSetting((LevelEditorWaveZombieSetting *)this);
  return;
}


/* LevelEditorSingleHandedWaveZombieSetting::~LevelEditorSingleHandedWaveZombieSetting() */

void __thiscall
LevelEditorSingleHandedWaveZombieSetting::~LevelEditorSingleHandedWaveZombieSetting
          (LevelEditorSingleHandedWaveZombieSetting *this)

{
  ~LevelEditorSingleHandedWaveZombieSetting(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedWaveZombieSetting::LevelEditorSingleHandedWaveZombieSetting() */

void __thiscall
LevelEditorSingleHandedWaveZombieSetting::LevelEditorSingleHandedWaveZombieSetting
          (LevelEditorSingleHandedWaveZombieSetting *this)

{
  LevelEditorWaveZombieSetting::LevelEditorWaveZombieSetting((LevelEditorWaveZombieSetting *)this);
  *(undefined ***)this = &PTR_GetClass_06967240;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedWaveZombieSetting::Init(int) */

void __thiscall
LevelEditorSingleHandedWaveZombieSetting::Init
          (LevelEditorSingleHandedWaveZombieSetting *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LevelEditorSingleHandedWaveZombie *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xd4) = param_1;
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  iVar2 = FUN_04b54f08(0x2d);
  iVar3 = FUN_04b54f08(0x7d);
  iVar4 = FUN_04b54f08(0x4b);
  iVar5 = FUN_04b54f08(0x46);
  do {
    iVar6 = 0;
    iVar7 = iVar4;
    do {
      Sexy::Insets::Insets(aIStack_18,iVar3,iVar7,iVar5,iVar5);
      this_00 = ::operator_new(0xf8);
      iVar1 = iVar6 + 1;
      LevelEditorSingleHandedWaveZombie::LevelEditorSingleHandedWaveZombie(this_00,iVar6,iVar8);
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_18);
      (**(code **)(*(long *)this_00 + 0x318))(this_00,*(undefined4 *)(this + 0xd4));
      (**(code **)(*(long *)this + 0x60))(this,this_00);
      iVar6 = iVar1;
      iVar7 = iVar7 + iVar5;
    } while (iVar1 != 5);
    iVar8 = iVar8 + 1;
    iVar3 = iVar3 + iVar2 + iVar5;
  } while (iVar8 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

