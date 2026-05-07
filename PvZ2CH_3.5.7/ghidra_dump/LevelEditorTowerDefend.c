// Class: LevelEditorTowerDefend


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefend::GetLayoutName() */

void __thiscall LevelEditorTowerDefend::GetLayoutName(LevelEditorTowerDefend *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LevelEditorTowerDefend");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LevelEditorTowerDefend::~LevelEditorTowerDefend() */

void __thiscall LevelEditorTowerDefend::~LevelEditorTowerDefend(LevelEditorTowerDefend *this)

{
  *(undefined **)(this + 0xd8) = &DAT_06958060;
  *(undefined ***)this = &PTR_GetClass_06957d10;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_069580a8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<LevelEditorTowerDefend>::~UISingletonDialog
            ((UISingletonDialog<LevelEditorTowerDefend> *)this);
  return;
}


/* LevelEditorTowerDefend::~LevelEditorTowerDefend() */

void __thiscall LevelEditorTowerDefend::~LevelEditorTowerDefend(LevelEditorTowerDefend *this)

{
  ~LevelEditorTowerDefend(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefend::InitZombieModule() */

void __thiscall LevelEditorTowerDefend::InitZombieModule(LevelEditorTowerDefend *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Widget *pWVar5;
  UIWidgetImage *pUVar6;
  LevelEditorTowerDefendZombieWaveEditor *this_00;
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
  LevelEditorTowerDefendZombieWaveEditor::LevelEditorTowerDefendZombieWaveEditor(this_00);
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


/* LevelEditorTowerDefend::LevelEditorTowerDefend() */

void __thiscall LevelEditorTowerDefend::LevelEditorTowerDefend(LevelEditorTowerDefend *this)

{
  UISingletonDialog<LevelEditorTowerDefend>::UISingletonDialog
            ((UISingletonDialog<LevelEditorTowerDefend> *)this);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06957d10;
  *(undefined **)(this + 0xd8) = &DAT_06958060;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_069580a8;
  return;
}


/* LevelEditorTowerDefend::ButtonDepress(int) */

void __thiscall LevelEditorTowerDefend::ButtonDepress(LevelEditorTowerDefend *this,int param_1)

{
  if (param_1 == 7) {
    LevelEditorSingleHanded::SwitchToZombieMoudle((LevelEditorSingleHanded *)this);
    return;
  }
  if (param_1 != 8) {
    if (param_1 != 6) {
      return;
    }
    CustomLevelUtils::TrySaveCurrentLevel();
    UISingletonDialog<LevelEditorTowerDefend>::CloseDialog();
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
    return;
  }
  LevelEditorSingleHanded::SwitchToBoardModule((LevelEditorSingleHanded *)this);
  return;
}


/* non-virtual thunk to LevelEditorTowerDefend::ButtonDepress(int) */

void __thiscall LevelEditorTowerDefend::ButtonDepress(LevelEditorTowerDefend *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefend::InitBoardModule() */

void __thiscall LevelEditorTowerDefend::InitBoardModule(LevelEditorTowerDefend *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Widget *pWVar9;
  LevelEditorLevelName *this_00;
  LevelEditoTowerDefendBoardGrid *this_01;
  long *plVar10;
  undefined8 *puVar11;
  LevelEditorTowerDefendStartingSunMoney *this_02;
  LevelEditorTowerDefendSeedBank *this_03;
  PVZ2UIButton *pPVar12;
  undefined8 uVar13;
  size_t __n;
  int iVar14;
  int iVar15;
  int iVar16;
  code *pcVar17;
  undefined1 auStack_b8 [8];
  undefined4 local_b0 [2];
  string asStack_a8 [8];
  undefined4 local_a0 [2];
  string asStack_98 [8];
  undefined8 local_90 [3];
  LevelEditoTowerDefendBoardGrid *local_78 [7];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"Widget_BoardMain");
  iVar16 = 0;
  iVar15 = 0;
  pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  *(Widget **)(this + 0x148) = pWVar9;
  std::string::~string(asStack_40);
  nop();
  this_00 = ::operator_new(0xe8);
  LevelEditorLevelName::LevelEditorLevelName(this_00);
  uVar5 = FUN_04b270cc(0x109);
  uVar6 = FUN_04b270cc(0x14);
  uVar7 = FUN_04b270cc(300);
  uVar8 = FUN_04b270cc(0x3c);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar5,uVar6,uVar7,uVar8);
  LevelEditorLevelName::Init(this_00);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_00);
  std::string::string(asStack_40,"Widget_Board");
  pWVar9 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  iVar2 = *(int *)(pWVar9 + 0x50);
  iVar3 = *(int *)(pWVar9 + 0x54);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_90);
  do {
    sVar4 = 0;
    iVar14 = 0;
    do {
      __n = sVar4;
      this_01 = ::operator_new(0x110);
      iVar1 = iVar14 + 1;
      LevelEditoTowerDefendBoardGrid::LevelEditoTowerDefendBoardGrid(this_01,iVar14,iVar15);
      iVar14 = (int)__n;
      pcVar17 = *(code **)(*(long *)this_01 + 0x1a0);
      local_78[0] = this_01;
      Sexy::Insets::Insets((Insets *)asStack_40,iVar16,iVar14,iVar2 / 9,iVar3 / 5);
      (*pcVar17)(this_01,asStack_40);
      (**(code **)(*(long *)local_78[0] + 0x310))(local_78[0]);
      (**(code **)(*(long *)pWVar9 + 0x60))(pWVar9,local_78[0]);
      std::vector<LevelEditoTowerDefendBoardGrid*,std::allocator<LevelEditoTowerDefendBoardGrid*>>::
      push_back((vector<LevelEditoTowerDefendBoardGrid*,std::allocator<LevelEditoTowerDefendBoardGrid*>>
                 *)local_90,local_78);
      sVar4 = (ulong)(uint)(iVar14 + iVar3 / 5);
      iVar14 = iVar1;
    } while (iVar1 != 5);
    iVar15 = iVar15 + 1;
    iVar16 = iVar16 + iVar2 / 9;
  } while (iVar15 != 9);
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_b0);
  local_b0[0] = 7;
  std::string::append(asStack_a8,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_CENTRE",__n);
  plVar10 = (long *)FUN_04b26a50(local_90[0],0x2a);
  FUN_04b26acc(*plVar10 + 0x100);
  puVar11 = (undefined8 *)FUN_04b26a50(local_90[0],0x2a);
  pcVar17 = *(code **)(*(long *)*puVar11 + 0x328);
  (*pcVar17)((long *)*puVar11,(LevelEditorCardInfo *)local_b0);
  LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_a0);
  local_a0[0] = 7;
  std::string::append(asStack_98,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_CENTRE",(size_t)pcVar17);
  plVar10 = (long *)FUN_04b26a50(local_90[0],4);
  FUN_04b26acc(*plVar10 + 0x100);
  puVar11 = (undefined8 *)FUN_04b26a50(local_90[0],4);
  (**(code **)(*(long *)*puVar11 + 0x328))((long *)*puVar11,(LevelEditorCardInfo *)local_a0);
  this_02 = ::operator_new(0xe8);
  LevelEditorTowerDefendStartingSunMoney::LevelEditorTowerDefendStartingSunMoney(this_02);
  uVar5 = FUN_04b270cc(10);
  uVar6 = FUN_04b270cc(0x8c);
  uVar7 = FUN_04b270cc(0x28);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar5,uVar5,uVar6,uVar7);
  LevelEditorStartingSunMoney::Init((LevelEditorStartingSunMoney *)this_02);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_02);
  this_03 = ::operator_new(0xf8);
  LevelEditorTowerDefendSeedBank::LevelEditorTowerDefendSeedBank(this_03);
  uVar5 = FUN_04b270cc(0x3c);
  uVar6 = FUN_04b270cc(0x5a);
  uVar7 = FUN_04b270cc(0x1d6);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,0,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this_03 + 0x310))(this_03);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),this_03);
  FUN_05478178((wstring *)local_78,&DAT_056f11a8,auStack_b8);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,7,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)asStack_40);
  FUN_05476c50((wstring *)local_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b84a70,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a70,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
  uVar5 = FUN_04b270cc(0x2b7);
  uVar6 = FUN_04b270cc(0x3c);
  uVar7 = FUN_04b270cc(100);
  uVar8 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,uVar5,uVar6,uVar7,uVar8);
  pcVar17 = *(code **)(*(long *)pPVar12 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar17)(pPVar12,uVar13);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),pPVar12);
  FUN_05478178((wstring *)local_78,&DAT_056f11a8,auStack_b8);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,6,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)asStack_40);
  FUN_05476c50((wstring *)local_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b84ae8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a48,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
  uVar5 = FUN_04b270cc(0x2e4);
  uVar6 = FUN_04b270cc(0);
  uVar7 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,uVar5,uVar6,uVar7,uVar7);
  pcVar17 = *(code **)(*(long *)pPVar12 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar17)(pPVar12,uVar13);
  (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),pPVar12);
  PakRecord::~PakRecord((PakRecord *)local_a0);
  PakRecord::~PakRecord((PakRecord *)local_b0);
  std::vector<LevelEditoTowerDefendBoardGrid*,std::allocator<LevelEditoTowerDefendBoardGrid*>>::
  ~vector((vector<LevelEditoTowerDefendBoardGrid*,std::allocator<LevelEditoTowerDefendBoardGrid*>> *
          )local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorTowerDefend::Init() */

void __thiscall LevelEditorTowerDefend::Init(LevelEditorTowerDefend *this)

{
  InitBoardModule(this);
  InitZombieModule(this);
  LevelEditorVaseBreaker::Reload((LevelEditorVaseBreaker *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefend::OnCreate() */

void __thiscall LevelEditorTowerDefend::OnCreate(LevelEditorTowerDefend *this)

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

