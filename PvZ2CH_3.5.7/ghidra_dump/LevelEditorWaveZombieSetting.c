// Class: LevelEditorWaveZombieSetting


/* LevelEditorWaveZombieSetting::~LevelEditorWaveZombieSetting() */

void __thiscall
LevelEditorWaveZombieSetting::~LevelEditorWaveZombieSetting(LevelEditorWaveZombieSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_06966be0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorWaveZombieSetting::~LevelEditorWaveZombieSetting() */

void __thiscall
LevelEditorWaveZombieSetting::~LevelEditorWaveZombieSetting(LevelEditorWaveZombieSetting *this)

{
  ~LevelEditorWaveZombieSetting(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorWaveZombieSetting::LevelEditorWaveZombieSetting() */

void __thiscall
LevelEditorWaveZombieSetting::LevelEditorWaveZombieSetting(LevelEditorWaveZombieSetting *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06966be0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveZombieSetting::Init(int) */

void __thiscall LevelEditorWaveZombieSetting::Init(LevelEditorWaveZombieSetting *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LevelEditorWaveZombie *this_00;
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
      LevelEditorWaveZombie::LevelEditorWaveZombie(this_00,iVar6,iVar8);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWaveZombieSetting::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorWaveZombieSetting::Draw(LevelEditorWaveZombieSetting *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_5c;
  wstring awStack_58 [8];
  int local_50 [2];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86360);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  TodStringTranslate(L"[LEVEL_EDITOR_ZOMBIE_WAVE_NUM]");
  local_5c = *(int *)(this + 0xd4) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_5c);
  Sexy::ToWString((string *)local_50);
  TodReplaceString(awStack_58,L"{NUM}",awStack_48);
  TodStringTranslate(L"[SETTINGS_TITLE]");
  std::operator+(awStack_40,awStack_38);
  iVar1 = FUN_04b54f08(10);
  iVar2 = FUN_04b54f08(0x46);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_28);
  Sexy::Color::Color(aCStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar7,aCStack_28,5,1);
  FUN_05476c50(auStack_30);
  FUN_05476c50(awStack_38);
  FUN_05476c50(awStack_40);
  FUN_05476c50(awStack_48);
  std::string::~string((string *)local_50);
  FUN_05476c50(awStack_58);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    TodStringTranslate(L"[LINE_NUM]");
    local_50[0] = iVar2;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_50);
    Sexy::ToWString((string *)awStack_40);
    TodReplaceString(awStack_48,L"{NUM}",awStack_38);
    iVar3 = FUN_04b54f08(0x19);
    iVar4 = FUN_04b54f08(0x4b);
    iVar5 = FUN_04b54f08(0x46);
    iVar6 = FUN_04b54f08(100);
    Sexy::Insets::Insets(aIStack_18,iVar3,iVar4 + iVar5 * iVar1,iVar6,iVar5);
    uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color(aCStack_28,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar7,aCStack_28,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
    std::string::~string((string *)awStack_40);
    FUN_05476c50(awStack_48);
    iVar1 = iVar2;
  } while (iVar2 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

