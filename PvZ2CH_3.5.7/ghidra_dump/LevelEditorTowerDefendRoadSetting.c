// Class: LevelEditorTowerDefendRoadSetting


/* LevelEditorTowerDefendRoadSetting::~LevelEditorTowerDefendRoadSetting() */

void __thiscall
LevelEditorTowerDefendRoadSetting::~LevelEditorTowerDefendRoadSetting
          (LevelEditorTowerDefendRoadSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_069610e0;
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorTowerDefendRoadSetting::~LevelEditorTowerDefendRoadSetting() */

void __thiscall
LevelEditorTowerDefendRoadSetting::~LevelEditorTowerDefendRoadSetting
          (LevelEditorTowerDefendRoadSetting *this)

{
  ~LevelEditorTowerDefendRoadSetting(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendRoadSetting::LevelEditorTowerDefendRoadSetting() */

void __thiscall
LevelEditorTowerDefendRoadSetting::LevelEditorTowerDefendRoadSetting
          (LevelEditorTowerDefendRoadSetting *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069610e0;
  FUN_05476574(this + 0xd8);
  FUN_054772c4(this + 0xd8,&DAT_056f11a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendRoadSetting::Init(std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall
LevelEditorTowerDefendRoadSetting::Init(LevelEditorTowerDefendRoadSetting *this,function *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LevelEditorTowerDefendRoad *this_00;
  uint uVar7;
  string asStack_40 [8];
  Insets aIStack_38 [16];
  function<void(int,std::string)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_04b334ec(0x14);
  iVar5 = FUN_04b334ec(0x32);
  iVar6 = FUN_04b334ec(10);
  iVar2 = *(int *)(this + 0x50) + iVar4 * -2 + iVar6 * -3;
  iVar3 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  iVar3 = iVar3 >> 2;
  uVar7 = 0;
  do {
    Sexy::Insets::Insets
              (aIStack_38,iVar4 + (uVar7 & 3) * (iVar6 + iVar3),
               iVar4 + iVar5 + ((int)uVar7 >> 2) * (iVar6 + iVar3),iVar3,iVar3);
    this_00 = ::operator_new(0x118);
    LevelEditorTowerDefendRoad::LevelEditorTowerDefendRoad(this_00);
    uVar1 = uVar7 + 1;
    (**(code **)(*(long *)this_00 + 0x310))(this_00,uVar7);
    std::function<void(int,std::string)>::function(afStack_28,param_2);
    LevelEditorTowerDefendRoad::SetClickFunction(this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_38);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    uVar7 = uVar1;
  } while (uVar1 != 0xb);
  std::string::string(asStack_40,"[LEVEL_EDITOR_TOWER_DEFEND_BOARDGRID_SETTING_TITLE]");
  StringHelper::ToStringValue(asStack_40);
  FUN_054766c8(this + 0xd8,aIStack_38);
  FUN_05476c50(aIStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendRoadSetting::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorTowerDefendRoadSetting::Draw(LevelEditorTowerDefendRoadSetting *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b856a0);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  iVar1 = FUN_04b334ec(10);
  iVar2 = FUN_04b334ec(0x28);
  Sexy::Insets::Insets(aIStack_28,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Insets::Insets(aIStack_18,0x25,100,6,0xff);
  WriteWordInRect(param_1,this + 0xd8,aIStack_28,uVar3,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

