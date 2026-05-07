// Class: LevelEditorSingleHanded


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHanded::GetLayoutName() */

void __thiscall LevelEditorSingleHanded::GetLayoutName(LevelEditorSingleHanded *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LevelEditorSingleHanded");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LevelEditorSingleHanded::~LevelEditorSingleHanded() */

void __thiscall LevelEditorSingleHanded::~LevelEditorSingleHanded(LevelEditorSingleHanded *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06958420;
  *(undefined ***)this = &PTR_GetClass_069580d0;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06958468;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<LevelEditorSingleHanded>::~UISingletonDialog
            ((UISingletonDialog<LevelEditorSingleHanded> *)this);
  return;
}


/* LevelEditorSingleHanded::~LevelEditorSingleHanded() */

void __thiscall LevelEditorSingleHanded::~LevelEditorSingleHanded(LevelEditorSingleHanded *this)

{
  ~LevelEditorSingleHanded(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHanded::SwitchToBoardModule() */

void __thiscall LevelEditorSingleHanded::SwitchToBoardModule(LevelEditorSingleHanded *this)

{
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),0);
  (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),1);
  return;
}


/* LevelEditorSingleHanded::SwitchToZombieMoudle() */

void __thiscall LevelEditorSingleHanded::SwitchToZombieMoudle(LevelEditorSingleHanded *this)

{
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),1);
  (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHanded::InitBoardModule() */

void __thiscall LevelEditorSingleHanded::InitBoardModule(LevelEditorSingleHanded *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Widget *pWVar5;
  LevelEditorLevelName *this_00;
  LevelEditorSingleHandedSeedBank *this_01;
  PVZ2UIButton *pPVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"Widget_BoardMain");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  *(Widget **)(this + 0x148) = pWVar5;
  std::string::~string(asStack_40);
  nop();
  this_00 = ::operator_new(0xe8);
  LevelEditorLevelName::LevelEditorLevelName(this_00);
  uVar1 = FUN_04b270cc(0x109);
  uVar2 = FUN_04b270cc(0x14);
  uVar3 = FUN_04b270cc(300);
  uVar4 = FUN_04b270cc(0x3c);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  LevelEditorLevelName::Init(this_00);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_00);
  std::string::string(asStack_40,"Widget_Board");
  UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_01 = ::operator_new(0x110);
  LevelEditorSingleHandedSeedBank::LevelEditorSingleHandedSeedBank(this_01);
  uVar1 = FUN_04b270cc(0x3c);
  uVar2 = FUN_04b270cc(0x5a);
  uVar3 = FUN_04b270cc(0x1d6);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,uVar1,uVar2,uVar3);
  (**(code **)(*(long *)this_01 + 0x310))(this_01);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_01);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,7,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84a70,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a70,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b270cc(0x2b7);
  uVar2 = FUN_04b270cc(0x3c);
  uVar3 = FUN_04b270cc(100);
  uVar4 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar4);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(pPVar6,uVar7);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),pPVar6);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,6,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84ae8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a48,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b270cc(0x2e4);
  uVar2 = FUN_04b270cc(0);
  uVar3 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)pPVar6 + 0x198))(pPVar6,uVar1,uVar2,uVar3,uVar3);
  pcVar8 = *(code **)(*(long *)pPVar6 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar8)(pPVar6,uVar7);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),pPVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHanded::InitZombieModule() */

void __thiscall LevelEditorSingleHanded::InitZombieModule(LevelEditorSingleHanded *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Widget *pWVar5;
  UIWidgetImage *pUVar6;
  LevelEditorSingleHandedZombieWaveEditor *this_00;
  PVZ2UIButton *pPVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"Widget_ZombieMain");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  *(Widget **)(this + 0x150) = pWVar5;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_ZombieContent_Background");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_00 = ::operator_new(0x110);
  LevelEditorSingleHandedZombieWaveEditor::LevelEditorSingleHandedZombieWaveEditor(this_00);
  uVar1 = FUN_04b270cc(0xf);
  uVar2 = FUN_04b270cc(100);
  uVar3 = FUN_04b270cc(0x2ee);
  uVar4 = FUN_04b270cc(0x1a9);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this_00 + 0x318))(this_00);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,8,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84cc8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84cc8,2);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b270cc(0x1e);
  uVar2 = FUN_04b270cc(5);
  uVar3 = FUN_04b270cc(100);
  uVar4 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)pPVar7 + 0x198))(pPVar7,uVar1,uVar2,uVar3,uVar4);
  pcVar9 = *(code **)(*(long *)pPVar7 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(pPVar7,uVar8);
  (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150),pPVar7);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar7 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar7,6,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84ae8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a48,3);
  PVZ2UIButton::SetDialogStates(pPVar7,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b270cc(0x2e4);
  uVar2 = FUN_04b270cc(0);
  uVar3 = FUN_04b270cc(0x3c);
  (**(code **)(*(long *)pPVar7 + 0x198))(pPVar7,uVar1,uVar2,uVar3,uVar3);
  pcVar9 = *(code **)(*(long *)pPVar7 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar9)(pPVar7,uVar8);
  (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150),pPVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSingleHanded::Init() */

void __thiscall LevelEditorSingleHanded::Init(LevelEditorSingleHanded *this)

{
  InitBoardModule(this);
  InitZombieModule(this);
  LevelEditorVaseBreaker::Reload((LevelEditorVaseBreaker *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHanded::OnCreate() */

void __thiscall LevelEditorSingleHanded::OnCreate(LevelEditorSingleHanded *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar1,true);
  Init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* LevelEditorSingleHanded::LevelEditorSingleHanded() */

void __thiscall LevelEditorSingleHanded::LevelEditorSingleHanded(LevelEditorSingleHanded *this)

{
  UISingletonDialog<LevelEditorSingleHanded>::UISingletonDialog
            ((UISingletonDialog<LevelEditorSingleHanded> *)this);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069580d0;
  *(undefined **)(this + 0xd8) = &DAT_06958420;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06958468;
  return;
}


/* LevelEditorSingleHanded::ButtonDepress(int) */

void __thiscall LevelEditorSingleHanded::ButtonDepress(LevelEditorSingleHanded *this,int param_1)

{
  if (param_1 == 7) {
    SwitchToZombieMoudle(this);
    return;
  }
  if (param_1 != 8) {
    if (param_1 != 6) {
      return;
    }
    CustomLevelUtils::TrySaveCurrentLevel();
    UISingletonDialog<LevelEditorSingleHanded>::CloseDialog();
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
    return;
  }
  SwitchToBoardModule(this);
  return;
}


/* non-virtual thunk to LevelEditorSingleHanded::ButtonDepress(int) */

void __thiscall LevelEditorSingleHanded::ButtonDepress(LevelEditorSingleHanded *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

