// Class: LevelEditorEvilDaveBoardGrid


/* LevelEditorEvilDaveBoardGrid::ClearData() */

void __thiscall LevelEditorEvilDaveBoardGrid::ClearData(LevelEditorEvilDaveBoardGrid *this)

{
  if (*(int *)(this + 0xe8) != 1) {
    (**(code **)(*(long *)this + 0x318))(this);
    return;
  }
  CustomLevelUtils::RemoveEvilDavePlant(*(int *)(this + 0xdc),*(int *)(this + 0xd8));
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveBoardGrid::Reload() */

void __thiscall LevelEditorEvilDaveBoardGrid::Reload(LevelEditorEvilDaveBoardGrid *this)

{
  char cVar1;
  string *__n;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
  }
  Set8BytesTo0(asStack_10);
  __n = asStack_10;
  cVar1 = CustomLevelUtils::GetEvilDavePlantGrid
                    (*(int *)(this + 0xdc),*(int *)(this + 0xd8),asStack_10);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0xe8) = 0;
    std::string::append((string *)(this + 0xf0),"",(size_t)__n);
  }
  else {
    *(undefined4 *)(this + 0xe8) = 1;
    thunk_FUN_05475e00(this + 0xf0,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorEvilDaveBoardGrid::~LevelEditorEvilDaveBoardGrid() */

void __thiscall
LevelEditorEvilDaveBoardGrid::~LevelEditorEvilDaveBoardGrid(LevelEditorEvilDaveBoardGrid *this)

{
  *(undefined ***)this = &PTR_GetClass_0695ef40;
  LevelEditorBoardGrid::~LevelEditorBoardGrid((LevelEditorBoardGrid *)this);
  return;
}


/* LevelEditorEvilDaveBoardGrid::~LevelEditorEvilDaveBoardGrid() */

void __thiscall
LevelEditorEvilDaveBoardGrid::~LevelEditorEvilDaveBoardGrid(LevelEditorEvilDaveBoardGrid *this)

{
  ~LevelEditorEvilDaveBoardGrid(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorEvilDaveBoardGrid::SetData(LevelEditorCardInfo const&) */

void __thiscall
LevelEditorEvilDaveBoardGrid::SetData
          (LevelEditorEvilDaveBoardGrid *this,LevelEditorCardInfo *param_1)

{
  GriditemBarrelZombieDes::operator=
            ((GriditemBarrelZombieDes *)(this + 0xe8),(GriditemBarrelZombieDes *)param_1);
  if (*(int *)(this + 0xe8) != 1) {
    (**(code **)(*(long *)this + 0x318))(this);
    return;
  }
  CustomLevelUtils::AddEvilDavePlant
            (*(int *)(this + 0xdc),*(int *)(this + 0xd8),(string *)(this + 0xf0));
  (**(code **)(*(long *)this + 0x318))(this);
  return;
}


/* LevelEditorEvilDaveBoardGrid::LevelEditorEvilDaveBoardGrid(int, int) */

void __thiscall
LevelEditorEvilDaveBoardGrid::LevelEditorEvilDaveBoardGrid
          (LevelEditorEvilDaveBoardGrid *this,int param_1,int param_2)

{
  LevelEditorBoardGrid::LevelEditorBoardGrid((LevelEditorBoardGrid *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0695ef40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveBoardGrid::TouchEnded(Sexy::Touch const&) */

void __thiscall
LevelEditorEvilDaveBoardGrid::TouchEnded(LevelEditorEvilDaveBoardGrid *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorMultifunctionAssembly *this_00;
  LevelEditorPlantSetting *this_01;
  undefined8 uVar6;
  int local_48;
  int local_44;
  string asStack_40 [8];
  int local_38;
  undefined4 local_34;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) {
    if (*(int *)(this + 0xe8) == 0) {
      this_01 = ::operator_new(0x158);
      LevelEditorPlantSetting::LevelEditorPlantSetting(this_01);
      (**(code **)(*(long *)this + 0xd0))(&local_38,this);
      iVar1 = *(int *)(this + 0x50);
      uVar4 = FUN_04b334ec(500);
      uVar5 = FUN_04b334ec(0x168);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,local_38 + iVar1,local_34,uVar4,uVar5);
      FUN_04b33500(this_01);
      uVar6 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_01,true);
      FUN_04b32f80(afStack_28,this,uVar6);
      LevelEditorPlantSetting::Init(this_01,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    else {
      this_00 = ::operator_new(0x120);
      LevelEditorMultifunctionAssembly::LevelEditorMultifunctionAssembly(this_00);
      (**(code **)(*(long *)this + 0xd0))(&local_48,this);
      iVar1 = *(int *)(this + 0x50);
      iVar2 = FUN_04b334ec(10);
      iVar3 = FUN_04b334ec(0x28);
      Sexy::Insets::Insets
                ((Insets *)&local_38,local_48 + iVar1 + iVar2,
                 local_44 + (*(int *)(this + 0x54) - iVar3) / 2,iVar3,iVar3);
      FUN_04b329bc(afStack_28,this_00,this);
      std::string::string(asStack_40,"delete");
      LevelEditorMultifunctionAssembly::AttachButton
                (this_00,1,(Insets *)&local_38,afStack_28,asStack_40);
      std::string::~string(asStack_40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      UIUtil::ShowDialog((Widget *)this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

