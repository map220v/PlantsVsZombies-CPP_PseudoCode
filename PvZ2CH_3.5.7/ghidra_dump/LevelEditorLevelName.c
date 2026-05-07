// Class: LevelEditorLevelName


/* LevelEditorLevelName::LevelEditorLevelName() */

void __thiscall LevelEditorLevelName::LevelEditorLevelName(LevelEditorLevelName *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0695a990;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695acc0;
  FUN_05476574(this + 0xe0);
  return;
}


/* LevelEditorLevelName::~LevelEditorLevelName() */

void __thiscall LevelEditorLevelName::~LevelEditorLevelName(LevelEditorLevelName *this)

{
  *(undefined ***)this = &PTR_GetClass_0695a990;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695acc0;
  FUN_05476c50(this + 0xe0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorLevelName::~LevelEditorLevelName() */

void __thiscall LevelEditorLevelName::~LevelEditorLevelName(LevelEditorLevelName *this)

{
  ~LevelEditorLevelName(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorLevelName::Init() */

void __thiscall LevelEditorLevelName::Init(LevelEditorLevelName *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PVZ2UIButton *this_00;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,5,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85940,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85998,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_04b334ec(0x104);
  uVar2 = FUN_04b334ec(10);
  uVar3 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorLevelName::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorLevelName::Draw(LevelEditorLevelName *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x28);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar3,aCStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorLevelName::Reload() */

void __thiscall LevelEditorLevelName::Reload(LevelEditorLevelName *this)

{
  SkillButton *this_00;
  undefined8 uVar1;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SkillButton *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar1 = PVPSkillUpgrade::SkillButton::GetSkill(this_00);
  FUN_05475d88(asStack_18,uVar1);
  Sexy::UTF8StringToSexyString(asStack_18);
  FUN_054766c8(this + 0xe0,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorLevelName::ButtonDepress(int) */

void __thiscall LevelEditorLevelName::ButtonDepress(LevelEditorLevelName *this,int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  LevelEditorLevelNameEditor *this_00;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 5) {
    this_00 = ::operator_new(0x110);
    LevelEditorLevelNameEditor::LevelEditorLevelNameEditor(this_00);
    lVar1 = gLawnApp;
    iVar2 = FUN_04b334ec(500);
    iVar3 = FUN_04b334ec(0x15e);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,(*(int *)(lVar1 + 0xd4) - iVar2) / 2,(*(int *)(lVar1 + 0xd8) - iVar3) / 2,
               iVar2,iVar3);
    LevelEditorLevelNameEditor::Init(this_00);
    UIUtil::ShowDialog((Widget *)this_00);
    FUN_04b32ca0(afStack_28,this,this_00);
    LevelEditorSunMoneyEditor::SetOnConfirmText((LevelEditorSunMoneyEditor *)this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorLevelName::ButtonDepress(int) */

void __thiscall LevelEditorLevelName::ButtonDepress(LevelEditorLevelName *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

