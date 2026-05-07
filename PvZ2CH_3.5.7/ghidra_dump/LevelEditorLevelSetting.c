// Class: LevelEditorLevelSetting


/* LevelEditorLevelSetting::SetTitle(std::wstring) */

void LevelEditorLevelSetting::SetTitle(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0xf0);
  return;
}


/* LevelEditorLevelSetting::SetValue(int) */

void __thiscall LevelEditorLevelSetting::SetValue(LevelEditorLevelSetting *this,int param_1)

{
  if (*(int *)(this + 0xe4) <= param_1) {
    *(int *)(this + 0xe8) = *(int *)(this + 0xe4);
    (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),1);
    return;
  }
  if (*(int *)(this + 0xe0) < param_1) {
    *(int *)(this + 0xe8) = param_1;
    (**(code **)(**(long **)(this + 0x100) + 0x188))(*(long **)(this + 0x100),0);
    (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),0);
    return;
  }
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0xe8);
  (**(code **)(**(long **)(this + 0xf8) + 0x188))(*(long **)(this + 0xf8),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorLevelSetting::Init() */

void __thiscall LevelEditorLevelSetting::Init(LevelEditorLevelSetting *this)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PVZ2UIButton *pPVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  string asStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_80,"-");
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x10,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xf8) = pPVar6;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0xf8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85f98,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar9 = *(long **)(this + 0xf8);
  uVar2 = FUN_04b4c0a8(0x28);
  uVar3 = FUN_04b4c0a8(0x37);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar2,uVar2);
  plVar9 = *(long **)(this + 0xf8);
  pcVar8 = *(code **)(*plVar9 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar9,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_80,"+");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x11,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar6;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85f98,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar9 = *(long **)(this + 0x100);
  uVar2 = FUN_04b4c0a8(0x78);
  uVar3 = FUN_04b4c0a8(0x37);
  uVar4 = FUN_04b4c0a8(0x28);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar4);
  plVar9 = *(long **)(this + 0x100);
  pcVar8 = *(code **)(*plVar9 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar9,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  std::string::string(asStack_80,"OK");
  Sexy::ToWString(asStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x1f,pBVar1,awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar6;
  FUN_05476c50(awStack_78);
  std::string::~string(asStack_80);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85f98,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar9 = *(long **)(this + 0x108);
  uVar2 = FUN_04b4c0a8(0x41);
  uVar3 = FUN_04b4c0a8(0x69);
  uVar4 = FUN_04b4c0a8(0x46);
  uVar5 = FUN_04b4c0a8(0x28);
  (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar3,uVar4,uVar5);
  plVar9 = *(long **)(this + 0x108);
  pcVar8 = *(code **)(*plVar9 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(plVar9,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorLevelSetting::SetRange(int, int) */

void __thiscall
LevelEditorLevelSetting::SetRange(LevelEditorLevelSetting *this,int param_1,int param_2)

{
  *(int *)(this + 0xe0) = param_1;
  *(int *)(this + 0xe4) = param_2;
  return;
}


/* LevelEditorLevelSetting::~LevelEditorLevelSetting() */

void __thiscall LevelEditorLevelSetting::~LevelEditorLevelSetting(LevelEditorLevelSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_069633c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069636e8;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x110));
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorLevelSetting::~LevelEditorLevelSetting() */

void __thiscall LevelEditorLevelSetting::~LevelEditorLevelSetting(LevelEditorLevelSetting *this)

{
  ~LevelEditorLevelSetting(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorLevelSetting::ButtonDepress(int) */

void __thiscall LevelEditorLevelSetting::ButtonDepress(LevelEditorLevelSetting *this,int param_1)

{
  if (param_1 == 0x11) {
    SetValue(this,*(int *)(this + 0xe8) + 1);
    return;
  }
  if (param_1 != 0x1f) {
    if (param_1 != 0x10) {
      return;
    }
    SetValue(this,*(int *)(this + 0xe8) + -1);
    return;
  }
  std::function<void(int)>::operator()((function<void(int)> *)(this + 0x110),*(int *)(this + 0xe8));
  return;
}


/* non-virtual thunk to LevelEditorLevelSetting::ButtonDepress(int) */

void __thiscall LevelEditorLevelSetting::ButtonDepress(LevelEditorLevelSetting *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorLevelSetting::SetConfirmCallBack(std::function<void (int)>) */

void __thiscall
LevelEditorLevelSetting::SetConfirmCallBack(LevelEditorLevelSetting *this,function *param_2)

{
  std::function<void(int)>::operator=((function<void(int)> *)(this + 0x110),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorLevelSetting::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorLevelSetting::Draw(LevelEditorLevelSetting *this,Graphics *param_1)

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
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f20);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  iVar1 = FUN_04b4c0a8(0);
  iVar2 = FUN_04b4c0a8(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x54),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar3,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

