// Class: LevelEditorStatueMaze


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMaze::GetLayoutName() */

void __thiscall LevelEditorStatueMaze::GetLayoutName(LevelEditorStatueMaze *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LevelEditorStatueMaze");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LevelEditorStatueMaze::SwitchToBoardModule() */

void __thiscall LevelEditorStatueMaze::SwitchToBoardModule(LevelEditorStatueMaze *this)

{
  (**(code **)(**(long **)(this + 0x198) + 0x158))(*(long **)(this + 0x198),0);
  (**(code **)(**(long **)(this + 400) + 0x158))(*(long **)(this + 400),1);
  return;
}


/* LevelEditorStatueMaze::SwitchToZombieMoudle() */

void __thiscall LevelEditorStatueMaze::SwitchToZombieMoudle(LevelEditorStatueMaze *this)

{
  (**(code **)(**(long **)(this + 0x198) + 0x158))(*(long **)(this + 0x198),1);
  (**(code **)(**(long **)(this + 400) + 0x158))(*(long **)(this + 400),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMaze::InitCommon() */

void __thiscall LevelEditorStatueMaze::InitCommon(LevelEditorStatueMaze *this)

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
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84e90,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84e68,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b2b8b8(0x2e4);
  uVar2 = FUN_04b2b8b8(0);
  uVar3 = FUN_04b2b8b8(0x3c);
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
/* LevelEditorStatueMaze::ShowStatue(int) */

void __thiscall LevelEditorStatueMaze::ShowStatue(LevelEditorStatueMaze *this,int param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Widget *pWVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  PVZ2UIButton *pPVar16;
  PVZ2UIImage aPStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = 0;
  do {
    lVar1 = lVar9 + 1;
    puVar6 = (undefined8 *)FUN_04b2b608(*(undefined8 *)(this + 0x160),lVar9);
    (**(code **)(*(long *)this + 0x68))(this,*puVar6);
    lVar9 = lVar1;
  } while (lVar1 != 0x19);
  std::string::string(asStack_40,"Widget_Board");
  pWVar7 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  iVar2 = *(int *)(pWVar7 + 0x50) / 9;
  iVar3 = *(int *)(pWVar7 + 0x54) / 5;
  if (param_1 - 4U < 2) {
    iVar10 = 0;
    iVar15 = 0;
    iVar14 = 0;
    do {
      iVar13 = 0;
      iVar12 = 0;
      do {
        while ((param_1 <= iVar12 || (iVar15 < 1 || param_1 < iVar15))) {
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + iVar3;
          if (iVar12 == 5) goto LAB_04b2bf88;
        }
        lVar9 = (long)iVar14;
        iVar14 = iVar14 + 1;
        iVar12 = iVar12 + 1;
        puVar6 = (undefined8 *)FUN_04b2b608(*(undefined8 *)(this + 0x160),lVar9);
        pPVar16 = (PVZ2UIButton *)*puVar6;
        PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b85110,2);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b85110,2);
        PVZ2UIButton::SetDialogStates(pPVar16,aPStack_78,(PVZ2UIImage *)asStack_40);
        pcVar11 = *(code **)(*(long *)pPVar16 + 0x1a0);
        iVar5 = FUN_04b2b8b8(0x136);
        iVar4 = FUN_04b2b8b8(0x9b);
        iVar4 = iVar4 + iVar13;
        iVar13 = iVar13 + iVar3;
        Sexy::Insets::Insets((Insets *)asStack_40,iVar5 + iVar10,iVar4,iVar2,iVar3);
        (*pcVar11)(pPVar16,asStack_40);
        pcVar11 = *(code **)(*(long *)pPVar16 + 800);
        uVar8 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
        (*pcVar11)(pPVar16,uVar8);
        (**(code **)(*(long *)this + 0x60))(this,pPVar16);
      } while (iVar12 != 5);
LAB_04b2bf88:
      iVar15 = iVar15 + 1;
      iVar10 = iVar10 + iVar2;
    } while (iVar15 != 9);
  }
  if (param_1 - 2U < 2) {
    iVar10 = 0;
    iVar14 = 0;
    iVar15 = 0;
    do {
      iVar13 = 0;
      iVar12 = 0;
      do {
        if ((((iVar14 + -1 <= param_1) && (1 < iVar14)) && (0 < iVar12)) && (iVar12 <= param_1)) {
          lVar9 = (long)iVar15;
          iVar15 = iVar15 + 1;
          puVar6 = (undefined8 *)FUN_04b2b608(*(undefined8 *)(this + 0x160),lVar9);
          pPVar16 = (PVZ2UIButton *)*puVar6;
          PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b85110,2);
          PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b85110,2);
          PVZ2UIButton::SetDialogStates(pPVar16,aPStack_78,(PVZ2UIImage *)asStack_40);
          pcVar11 = *(code **)(*(long *)pPVar16 + 0x1a0);
          iVar4 = FUN_04b2b8b8(0x136);
          iVar5 = FUN_04b2b8b8(0x9b);
          Sexy::Insets::Insets((Insets *)asStack_40,iVar4 + iVar10,iVar5 + iVar13,iVar2,iVar3);
          (*pcVar11)(pPVar16,asStack_40);
          pcVar11 = *(code **)(*(long *)pPVar16 + 800);
          uVar8 = PrimeText_PotentialTypeface::Typeface
                            (PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
          (*pcVar11)(pPVar16,uVar8);
          (**(code **)(*(long *)this + 0x60))(this,pPVar16);
        }
        iVar12 = iVar12 + 1;
        iVar13 = iVar13 + iVar3;
      } while (iVar12 != 5);
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + iVar2;
    } while (iVar14 != 9);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMaze::InitZombieModule() */

void __thiscall LevelEditorStatueMaze::InitZombieModule(LevelEditorStatueMaze *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_ZombieMain");
  pWVar1 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  *(Widget **)(this + 0x198) = pWVar1;
  std::string::~string(asStack_10);
  nop();
  SwitchToBoardModule(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStatueMaze::ButtonDepress(int) */

void __thiscall LevelEditorStatueMaze::ButtonDepress(LevelEditorStatueMaze *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 7) {
    *(undefined4 *)(*(long *)(this + 0x188) + 0xd4) = 8;
    SwitchToBoardModule(this);
    return;
  }
  if (param_1 != 8) {
    if (param_1 != 6) {
      return;
    }
    iVar1 = CustomLevelUtils::GetSetSize();
    if (0 < iVar1) {
      CustomLevelUtils::TrySaveCurrentLevel();
    }
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
    UISingletonDialog<LevelEditorStatueMaze>::CloseDialog();
    return;
  }
  *(undefined4 *)(*(long *)(this + 0x188) + 0xd4) = 7;
  SwitchToZombieMoudle(this);
  return;
}


/* non-virtual thunk to LevelEditorStatueMaze::ButtonDepress(int) */

void __thiscall LevelEditorStatueMaze::ButtonDepress(LevelEditorStatueMaze *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorStatueMaze::LevelEditorStatueMaze() */

void __thiscall LevelEditorStatueMaze::LevelEditorStatueMaze(LevelEditorStatueMaze *this)

{
  UISingletonDialog<LevelEditorStatueMaze>::UISingletonDialog
            ((UISingletonDialog<LevelEditorStatueMaze> *)this);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06958830;
  *(undefined **)(this + 0xd8) = &DAT_06958b80;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06958bc8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  return;
}


/* LevelEditorStatueMaze::~LevelEditorStatueMaze() */

void __thiscall LevelEditorStatueMaze::~LevelEditorStatueMaze(LevelEditorStatueMaze *this)

{
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06958bc8;
  *(undefined ***)this = &PTR_GetClass_06958830;
  *(undefined **)(this + 0xd8) = &DAT_06958b80;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x160));
  std::vector<StatueMazeData*,std::allocator<StatueMazeData*>>::~vector
            ((vector<StatueMazeData*,std::allocator<StatueMazeData*>> *)(this + 0x140));
  UISingletonDialog<LevelEditorStatueMaze>::~UISingletonDialog
            ((UISingletonDialog<LevelEditorStatueMaze> *)this);
  return;
}


/* LevelEditorStatueMaze::~LevelEditorStatueMaze() */

void __thiscall LevelEditorStatueMaze::~LevelEditorStatueMaze(LevelEditorStatueMaze *this)

{
  ~LevelEditorStatueMaze(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMaze::InitBoardModule() */

void __thiscall LevelEditorStatueMaze::InitBoardModule(LevelEditorStatueMaze *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *this_00;
  Widget *pWVar5;
  LevelEditorStatueMazeWave *this_01;
  int iVar6;
  undefined1 auStack_58 [8];
  PVZ2UIButton *local_50;
  wstring awStack_48 [8];
  string asStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 3000;
  do {
    FUN_05478178(awStack_48,&DAT_056f11a8,auStack_58);
    Sexy::Color::Color((Color *)asStack_40,1);
    this_00 = ::operator_new(0x300);
    iVar1 = iVar6 + 1;
    PVZ2UIButton::PVZ2UIButton
              (this_00,iVar6,(ButtonListener *)(this + 0xd8),awStack_48,(Color *)asStack_40);
    local_50 = this_00;
    FUN_05476c50(awStack_48);
    nop();
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x160),&local_50);
    iVar6 = iVar1;
  } while (iVar1 != 0xbd1);
  std::string::string(asStack_40,"Widget_BoardMain");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  *(Widget **)(this + 400) = pWVar5;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"Widget_Board");
  UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  this_01 = ::operator_new(0x168);
  LevelEditorStatueMazeWave::LevelEditorStatueMazeWave(this_01);
  uVar2 = FUN_04b2b8b8(0x46);
  uVar3 = FUN_04b2b8b8(200);
  uVar4 = FUN_04b2b8b8(600);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,uVar2,uVar3,uVar4);
  std::vector<StatueMazeData*,std::allocator<StatueMazeData*>>::vector
            ((vector<StatueMazeData*,std::allocator<StatueMazeData*>> *)asStack_40,
             (vector *)(this + 0x140));
  LevelEditorStatueMazeWave::Init(this_01,asStack_40);
  std::vector<StatueMazeData*,std::allocator<StatueMazeData*>>::~vector
            ((vector<StatueMazeData*,std::allocator<StatueMazeData*>> *)asStack_40);
  FUN_04b2b85c(afStack_28,this);
  LevelEditorStatueMazeWave::SetConfirmCallBack(this_01,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  (**(code **)(**(long **)(this + 400) + 0x60))(*(long **)(this + 400),this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStatueMaze::Init() */

void __thiscall LevelEditorStatueMaze::Init(LevelEditorStatueMaze *this)

{
  CustomLevelUtils::SetSeedBankType(0);
  InitCommon(this);
  InitBoardModule(this);
  InitZombieModule(this);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStatueMaze::OnCreate() */

void __thiscall LevelEditorStatueMaze::OnCreate(LevelEditorStatueMaze *this)

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
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  Init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

