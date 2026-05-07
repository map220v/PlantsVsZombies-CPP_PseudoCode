// Class: LevelEditorSingleHandedLevelUpSeedPacket


/* LevelEditorSingleHandedLevelUpSeedPacket::~LevelEditorSingleHandedLevelUpSeedPacket() */

void __thiscall
LevelEditorSingleHandedLevelUpSeedPacket::~LevelEditorSingleHandedLevelUpSeedPacket
          (LevelEditorSingleHandedLevelUpSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_0695fcd0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x100));
  LevelEditorSeedPacket::~LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  return;
}


/* LevelEditorSingleHandedLevelUpSeedPacket::~LevelEditorSingleHandedLevelUpSeedPacket() */

void __thiscall
LevelEditorSingleHandedLevelUpSeedPacket::~LevelEditorSingleHandedLevelUpSeedPacket
          (LevelEditorSingleHandedLevelUpSeedPacket *this)

{
  ~LevelEditorSingleHandedLevelUpSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedLevelUpSeedPacket::LevelEditorSingleHandedLevelUpSeedPacket() */

void __thiscall
LevelEditorSingleHandedLevelUpSeedPacket::LevelEditorSingleHandedLevelUpSeedPacket
          (LevelEditorSingleHandedLevelUpSeedPacket *this)

{
  LevelEditorSeedPacket::LevelEditorSeedPacket((LevelEditorSeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_0695fcd0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x100));
  return;
}


/* LevelEditorSingleHandedLevelUpSeedPacket::onChangeCardInfo() */

void __thiscall
LevelEditorSingleHandedLevelUpSeedPacket::onChangeCardInfo
          (LevelEditorSingleHandedLevelUpSeedPacket *this)

{
  std::function<void(LevelEditorCardInfo_const&)>::operator()
            ((function<void(LevelEditorCardInfo_const&)> *)(this + 0x100),
             (LevelEditorCardInfo *)(this + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedLevelUpSeedPacket::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorSingleHandedLevelUpSeedPacket::TouchEnded
          (LevelEditorSingleHandedLevelUpSeedPacket *this,Touch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LevelEditorSingleHandedPlantSetting *this_00;
  undefined8 uVar4;
  int local_30;
  undefined4 local_2c;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xdc) == (int)*(undefined8 *)param_1) {
    this_00 = ::operator_new(0x158);
    LevelEditorSingleHandedPlantSetting::LevelEditorSingleHandedPlantSetting(this_00);
    (**(code **)(*(long *)this + 0xd0))(&local_30,this);
    iVar1 = *(int *)(this + 0x50);
    uVar2 = FUN_04b334ec(500);
    uVar3 = FUN_04b334ec(0x168);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,local_30 + iVar1,local_2c,uVar2,uVar3);
    FUN_04b33500(this_00);
    uVar4 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
    FUN_04b33038(afStack_28,this,uVar4);
    LevelEditorPlantSetting::Init((LevelEditorPlantSetting *)this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

