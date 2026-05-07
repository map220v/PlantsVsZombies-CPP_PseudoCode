// Class: LevelEditorBoardGridBehavior


/* LevelEditorBoardGridBehavior::~LevelEditorBoardGridBehavior() */

void __thiscall
LevelEditorBoardGridBehavior::~LevelEditorBoardGridBehavior(LevelEditorBoardGridBehavior *this)

{
  *(undefined ***)this = &PTR_GetClass_06959890;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06959bb8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorBoardGridBehavior::~LevelEditorBoardGridBehavior() */

void __thiscall
LevelEditorBoardGridBehavior::~LevelEditorBoardGridBehavior(LevelEditorBoardGridBehavior *this)

{
  ~LevelEditorBoardGridBehavior(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorBoardGridBehavior::LevelEditorBoardGridBehavior() */

void __thiscall
LevelEditorBoardGridBehavior::LevelEditorBoardGridBehavior(LevelEditorBoardGridBehavior *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_06959890;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06959bb8;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGridBehavior::TriggerTutorial() */

void __thiscall LevelEditorBoardGridBehavior::TriggerTutorial(LevelEditorBoardGridBehavior *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b2d7d4(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 == 0x3c) {
    LawnApp::KillGameMaskUI(gLawnApp);
    lVar2 = *(long *)(this + 0xe8);
    if (lVar2 != 0) {
      std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_6]");
      Sexy::Insets::Insets(aIStack_18);
      GameMaskUI::ShowMask(lVar2,1,asStack_20,aIStack_18);
      std::string::~string(asStack_20);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorBoardGridBehavior::ButtonDepress(int) */

void __thiscall
LevelEditorBoardGridBehavior::ButtonDepress(LevelEditorBoardGridBehavior *this,int param_1)

{
  if (param_1 != 1) {
    if (param_1 == 2) {
      (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8),0);
      (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
      (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),0);
      (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),1);
    }
    return;
  }
  (**(code **)(**(long **)(this + 0xe8) + 0x188))(*(long **)(this + 0xe8));
  (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
  (**(code **)(**(long **)(this + 0xf8) + 0x158))(*(long **)(this + 0xf8),1);
  (**(code **)(**(long **)(this + 0x100) + 0x158))(*(long **)(this + 0x100),0);
  LevelEditorGroundSetting::TriggerTutorial(*(LevelEditorGroundSetting **)(this + 0xf8));
  return;
}


/* non-virtual thunk to LevelEditorBoardGridBehavior::ButtonDepress(int) */

void __thiscall
LevelEditorBoardGridBehavior::ButtonDepress(LevelEditorBoardGridBehavior *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGridBehavior::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorBoardGridBehavior::Draw(LevelEditorBoardGridBehavior *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b856a0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  iVar1 = FUN_04b334ec(0x11);
  iVar2 = FUN_04b334ec(0x32);
  iVar3 = FUN_04b334ec(0x3c);
  iVar4 = FUN_04b334ec(0x87);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardGridBehavior::Init(int, int, std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall
LevelEditorBoardGridBehavior::Init
          (LevelEditorBoardGridBehavior *this,undefined4 param_1,undefined4 param_2,
          function *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  PVZ2UIButton *pPVar5;
  LevelEditorGroundSetting *pLVar6;
  LevelEditorSurfaceSetting *pLVar7;
  ProfileMgr *this_00;
  long lVar8;
  long *plVar9;
  undefined1 auStack_a0 [8];
  function<void(int,std::string)> afStack_98 [32];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe0) = param_1;
  *(undefined4 *)(this + 0xe4) = param_2;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_a0);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar5;
  FUN_05476c50(awStack_78);
  nop();
  pPVar5 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85968,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85968,2);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar9 = *(long **)(this + 0xe8);
  uVar1 = FUN_04b334ec(0x16);
  uVar2 = FUN_04b334ec(0x3c);
  uVar3 = FUN_04b334ec(0x32);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_a0);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,2,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar5;
  FUN_05476c50(awStack_78);
  nop();
  pPVar5 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85a60,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85a60,2);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar9 = *(long **)(this + 0xf0);
  uVar1 = FUN_04b334ec(0x16);
  uVar2 = FUN_04b334ec(0x78);
  uVar3 = FUN_04b334ec(0x32);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  pLVar6 = ::operator_new(0x148);
  LevelEditorGroundSetting::LevelEditorGroundSetting(pLVar6);
  *(LevelEditorGroundSetting **)(this + 0xf8) = pLVar6;
  uVar1 = FUN_04b334ec(0x53);
  uVar2 = FUN_04b334ec(0x14);
  uVar3 = FUN_04b334ec(300);
  (**(code **)(*(long *)pLVar6 + 0x198))(pLVar6,uVar1,uVar2,uVar3,uVar3);
  uVar1 = *(undefined4 *)(this + 0xe0);
  uVar2 = *(undefined4 *)(this + 0xe4);
  pLVar6 = *(LevelEditorGroundSetting **)(this + 0xf8);
  std::function<void(int,std::string)>::function(afStack_98,param_4);
  LevelEditorGroundSetting::Init(pLVar6,uVar1,uVar2,afStack_98);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_98);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  pLVar7 = ::operator_new(0xe0);
  LevelEditorSurfaceSetting::LevelEditorSurfaceSetting(pLVar7);
  *(LevelEditorSurfaceSetting **)(this + 0x100) = pLVar7;
  uVar1 = FUN_04b334ec(0x53);
  uVar2 = FUN_04b334ec(0x14);
  uVar3 = FUN_04b334ec(300);
  (**(code **)(*(long *)pLVar7 + 0x198))(pLVar7,uVar1,uVar2,uVar3,uVar3);
  pLVar7 = *(LevelEditorSurfaceSetting **)(this + 0x100);
  std::function<void(int,std::string)>::function(afStack_98,param_4);
  LevelEditorSurfaceSetting::Init(pLVar7,afStack_98);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_98);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar8 = ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = FUN_04b2d7d4(*(undefined4 *)(lVar8 + 0x40));
  uVar1 = 2;
  if (iVar4 != 0x3c) {
    uVar1 = 1;
  }
  (**(code **)(*(long *)this + 0x310))(this,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

