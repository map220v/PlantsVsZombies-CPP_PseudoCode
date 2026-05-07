// Class: LevelEditorEvilDave


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDave::GetLayoutName() */

void __thiscall LevelEditorEvilDave::GetLayoutName(LevelEditorEvilDave *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LevelEditorEvilDave");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LevelEditorEvilDave::~LevelEditorEvilDave() */

void __thiscall LevelEditorEvilDave::~LevelEditorEvilDave(LevelEditorEvilDave *this)

{
  *(undefined ***)this = &PTR_GetClass_06957950;
  *(undefined **)(this + 0xd8) = &DAT_06957ca0;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06957ce8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UISingletonDialog<LevelEditorEvilDave>::~UISingletonDialog
            ((UISingletonDialog<LevelEditorEvilDave> *)this);
  return;
}


/* LevelEditorEvilDave::~LevelEditorEvilDave() */

void __thiscall LevelEditorEvilDave::~LevelEditorEvilDave(LevelEditorEvilDave *this)

{
  ~LevelEditorEvilDave(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDave::InitCommon() */

void __thiscall LevelEditorEvilDave::InitCommon(LevelEditorEvilDave *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UIWidgetBackground *pUVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"Background_0");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,6,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84ae8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a48,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b270cc(700);
  uVar2 = FUN_04b270cc(0);
  uVar3 = FUN_04b270cc(0x3c);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
  pcVar6 = *(code **)(*(long *)this_00 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar6)(this_00,uVar5);
  (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDave::InitBoardModule() */

void __thiscall LevelEditorEvilDave::InitBoardModule(LevelEditorEvilDave *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Widget *pWVar7;
  LevelEditorEvilDaveBoardGrid *this_00;
  LevelEditorEvilDaveStartingSunMoney *this_01;
  LevelEditorEvilDaveSeedBank *this_02;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Widget_BoardMain");
  iVar12 = 0;
  iVar11 = 0;
  pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  *(Widget **)(this + 0x140) = pWVar7;
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"Widget_Board");
  pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar2 = *(int *)(pWVar7 + 0x50);
  iVar3 = *(int *)(pWVar7 + 0x54);
  do {
    iVar8 = 0;
    iVar9 = 0;
    do {
      this_00 = ::operator_new(0x100);
      iVar1 = iVar8 + 1;
      LevelEditorEvilDaveBoardGrid::LevelEditorEvilDaveBoardGrid(this_00,iVar8,iVar11);
      pcVar10 = *(code **)(*(long *)this_00 + 0x1a0);
      Sexy::Insets::Insets((Insets *)asStack_18,iVar12,iVar9,iVar2 / 9,iVar3 / 5);
      (*pcVar10)(this_00,asStack_18);
      (**(code **)(*(long *)this_00 + 0x310))(this_00);
      (**(code **)(*(long *)pWVar7 + 0x60))(pWVar7,this_00);
      iVar8 = iVar1;
      iVar9 = iVar9 + iVar3 / 5;
    } while (iVar1 != 5);
    iVar11 = iVar11 + 1;
    iVar12 = iVar12 + iVar2 / 9;
  } while (iVar11 != 9);
  this_01 = ::operator_new(0xe8);
  LevelEditorEvilDaveStartingSunMoney::LevelEditorEvilDaveStartingSunMoney(this_01);
  uVar4 = FUN_04b270cc(10);
  uVar5 = FUN_04b270cc(0x8c);
  uVar6 = FUN_04b270cc(0x28);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar4,uVar4,uVar5,uVar6);
  LevelEditorStartingSunMoney::Init((LevelEditorStartingSunMoney *)this_01);
  (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_01);
  this_02 = ::operator_new(0xf8);
  LevelEditorEvilDaveSeedBank::LevelEditorEvilDaveSeedBank(this_02);
  uVar4 = FUN_04b270cc(0x3c);
  uVar5 = FUN_04b270cc(0x5a);
  uVar6 = FUN_04b270cc(0x1d6);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,uVar4,uVar5,uVar6);
  LevelEditorEvilDaveSeedBank::Init(this_02);
  (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorEvilDave::Init() */

void __thiscall LevelEditorEvilDave::Init(LevelEditorEvilDave *this)

{
  LevelEditorVaseBreaker::Reload((LevelEditorVaseBreaker *)this);
  CustomLevelUtils::SetSeedBankType(0);
  InitCommon(this);
  InitBoardModule(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDave::OnCreate() */

void __thiscall LevelEditorEvilDave::OnCreate(LevelEditorEvilDave *this)

{
  int iVar1;
  UIWidgetBackground *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = FUN_04b270cc(0x14);
  *(int *)(pUVar2 + 0x48) = iVar1 + (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  Init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* LevelEditorEvilDave::LevelEditorEvilDave() */

void __thiscall LevelEditorEvilDave::LevelEditorEvilDave(LevelEditorEvilDave *this)

{
  UISingletonDialog<LevelEditorEvilDave>::UISingletonDialog
            ((UISingletonDialog<LevelEditorEvilDave> *)this);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06957950;
  *(undefined **)(this + 0xd8) = &DAT_06957ca0;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06957ce8;
  return;
}


/* LevelEditorEvilDave::ButtonDepress(int) */

void __thiscall LevelEditorEvilDave::ButtonDepress(LevelEditorEvilDave *this,int param_1)

{
  char cVar1;
  
  if (param_1 != 6) {
    return;
  }
  cVar1 = CustomLevelUtils::IsEvilDaveValid();
  if (cVar1 != '\0') {
    CustomLevelUtils::TrySaveCurrentLevel();
  }
  UISingletonDialog<LevelEditorEvilDave>::CloseDialog();
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
  return;
}


/* non-virtual thunk to LevelEditorEvilDave::ButtonDepress(int) */

void __thiscall LevelEditorEvilDave::ButtonDepress(LevelEditorEvilDave *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

