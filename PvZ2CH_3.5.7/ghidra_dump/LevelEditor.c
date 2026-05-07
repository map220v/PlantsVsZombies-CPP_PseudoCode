// Class: LevelEditor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::GetLayoutName() */

void __thiscall LevelEditor::GetLayoutName(LevelEditor *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LevelEditor");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LevelEditor::~LevelEditor() */

void __thiscall LevelEditor::~LevelEditor(LevelEditor *this)

{
  *(undefined ***)this = &PTR_GetClass_06957590;
  *(undefined **)(this + 0xd8) = &DAT_069578e0;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06957928;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UISingletonDialog<LevelEditor>::~UISingletonDialog((UISingletonDialog<LevelEditor> *)this);
  return;
}


/* LevelEditor::~LevelEditor() */

void __thiscall LevelEditor::~LevelEditor(LevelEditor *this)

{
  ~LevelEditor(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditor::SwitchToBoardModule() */

void __thiscall LevelEditor::SwitchToBoardModule(LevelEditor *this)

{
  (**(code **)(**(long **)(this + 0x170) + 0x158))(*(long **)(this + 0x170),0);
  (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),1);
  return;
}


/* LevelEditor::SwitchToZombieMoudle() */

void __thiscall LevelEditor::SwitchToZombieMoudle(LevelEditor *this)

{
  (**(code **)(**(long **)(this + 0x170) + 0x158))(*(long **)(this + 0x170),1);
  (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
  return;
}


/* LevelEditor::CloseEncourageTanhao() */

void __thiscall LevelEditor::CloseEncourageTanhao(LevelEditor *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x158);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::OnTutorialCreated() */

void __thiscall LevelEditor::OnTutorialCreated(LevelEditor *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  lVar3 = *(long *)(this + 0x178);
  local_8 = ___stack_chk_guard;
  if (lVar3 != 0) {
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_8]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(lVar3,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b270cc(0x15e);
    uVar2 = FUN_04b270cc(0xf0);
    FUN_04b26e28(lVar3 + 0x114,-iVar1,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::OnDragFinished() */

void __thiscall LevelEditor::OnDragFinished(LevelEditor *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x180) != 0) {
    LawnApp::KillGameMaskUI(gLawnApp);
    uVar4 = *(undefined8 *)(this + 0x180);
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_18]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(uVar4,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
    lVar3 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar1 = FUN_04b270cc(0x172);
    uVar2 = FUN_04b270cc(200);
    FUN_04b26e28(lVar3 + 0x114,-iVar1,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::InitCommon() */

void __thiscall LevelEditor::InitCommon(LevelEditor *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Background_0");
  UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::ChangeBoardStageArt(std::string const&) */

void __thiscall LevelEditor::ChangeBoardStageArt(LevelEditor *this,string *param_1)

{
  bool bVar1;
  bool bVar2;
  Image *pIVar3;
  Image *pIVar4;
  Image *pIVar5;
  UIWidgetImage *pUVar6;
  long lVar7;
  string *psVar8;
  string *extraout_x1;
  code *pcVar9;
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Image *)LevelEditorUtil::GetStageLeftImage(param_1);
  pIVar4 = (Image *)LevelEditorUtil::GetStageCenterImage(param_1);
  pIVar5 = (Image *)LevelEditorUtil::GetStageRightImage(param_1);
  psVar8 = (string *)(ulong)(pIVar4 != (Image *)0x0);
  if ((pIVar4 != (Image *)0x0 && pIVar3 != (Image *)0x0) && (pIVar5 != (Image *)0x0)) {
    std::string::string(asStack_40,"UIImage_BoardLeft");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    UIWidgetImage::SetImage(pUVar6,pIVar3);
    std::string::string(asStack_40,"UIImage_BoardCenter");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    UIWidgetImage::SetImage(pUVar6,pIVar4);
    std::string::string(asStack_40,"UIImage_BoardRight");
    pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
    std::string::~string(asStack_40);
    nop();
    UIWidgetImage::SetImage(pUVar6,pIVar5);
    psVar8 = extraout_x1;
  }
  Sexy::StringToUpper((Sexy *)param_1,psVar8);
  std::operator+("IMAGE_UI_LEVELEDITOR_WORLD_",asStack_48);
  lVar7 = StringHelper::ToImage(asStack_40,false);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (lVar7 != 0) {
    pUVar6 = *(UIWidgetImage **)(this + 0x150);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,lVar7,2);
    UIWidgetImage::SetImage(pUVar6,(PVZ2UIImage *)asStack_40);
  }
  bVar1 = std::operator==("pirate",param_1);
  std::string::string(asStack_40,"UIImage_Modern_Panel");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  pcVar9 = *(code **)(*(long *)pUVar6 + 0x158);
  bVar2 = std::operator==("modern",param_1);
  (*pcVar9)(pUVar6,bVar2);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_Pirate_Plank_1");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,bVar1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_Pirate_Plank_2");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,bVar1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_Pirate_Plank_3");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,bVar1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_Pirate_Plank_4");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,bVar1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_Pirate_Plank_5");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,bVar1);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::Reload() */

void __thiscall LevelEditor::Reload(LevelEditor *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  UISummeryLotteryItem *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  this_00 = (UISummeryLotteryItem *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar1 = UISummeryLotteryItem::GetItemID(this_00);
  CustomLevelMgr::GetStageByWorldType(asStack_10,uVar2,uVar1);
  ChangeBoardStageArt(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::ChangeBoardStageByWorld(std::string const&) */

void __thiscall LevelEditor::ChangeBoardStageByWorld(LevelEditor *this,string *param_1)

{
  undefined4 uVar1;
  CustomLevelMgr *pCVar2;
  undefined8 uVar3;
  PACommand aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar1 = CustomLevelMgr::GetWorldTypeByWorld(pCVar2,param_1);
  uVar3 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::GetWorldInfoByWorldType(aPStack_18,uVar3,uVar1);
  pCVar2 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetWorld(pCVar2,uVar1);
  ChangeBoardStageArt(this,asStack_10);
  Sexy::PACommand::~PACommand(aPStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::GetZombieStageAbsPoint() */

void LevelEditor::GetZombieStageAbsPoint(void)

{
  long lVar1;
  int iVar2;
  Dialog *in_x0;
  Widget *pWVar3;
  int *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Widget_ZombieMain");
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>(in_x0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pWVar3 + 0xd0))(pWVar3);
  iVar2 = FUN_04b270cc(0xf);
  *in_x8 = *in_x8 + iVar2;
  iVar2 = FUN_04b270cc(0x32);
  lVar1 = ___stack_chk_guard;
  in_x8[1] = in_x8[1] + iVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::InitZombieModule() */

void __thiscall LevelEditor::InitZombieModule(LevelEditor *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Widget *pWVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *pUVar7;
  UIWidgetImage *this_00;
  LevelEditorZombieWaveEditor *this_01;
  PVZ2UIButton *pPVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_88 [8];
  int local_80;
  int local_7c;
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"Widget_ZombieMain");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  *(Widget **)(this + 0x170) = pWVar5;
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_ZombieContent_Background");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"UIImage_ZombieBackground");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)pUVar7 + 0xd0))(&local_80,pUVar7);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,-local_80,-local_7c,*(undefined4 *)(gLawnApp + 0xd4),
             *(undefined4 *)(gLawnApp + 0xd8));
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a18,2);
  UIWidgetImage::SetImage(this_00,(PVZ2UIImage *)asStack_40);
  (**(code **)(*(long *)pUVar7 + 0x60))(pUVar7,this_00);
  this_01 = ::operator_new(0x110);
  LevelEditorZombieWaveEditor::LevelEditorZombieWaveEditor(this_01);
  uVar1 = FUN_04b270cc(0xf);
  uVar2 = FUN_04b270cc(0x32);
  uVar3 = FUN_04b270cc(0x2ee);
  uVar4 = FUN_04b270cc(0x1a9);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this_01 + 0x318))(this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_01);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,8,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84cc8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84cc8,2);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b270cc(0x14);
  uVar2 = FUN_04b270cc(0);
  uVar3 = FUN_04b270cc(0x5a);
  uVar4 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,uVar1,uVar2,uVar3,uVar4);
  pcVar10 = *(code **)(*(long *)pPVar8 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar10)(pPVar8,uVar9);
  (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pPVar8);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,6,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84ae8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a48,2);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar1 = FUN_04b270cc(0x2e4);
  uVar2 = FUN_04b270cc(0x1e);
  uVar3 = FUN_04b270cc(0x3c);
  (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,uVar1,uVar2,uVar3,uVar3);
  pcVar10 = *(code **)(*(long *)pPVar8 + 800);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar10)(pPVar8,uVar9);
  (**(code **)(**(long **)(this + 0x170) + 0x60))(*(long **)(this + 0x170),pPVar8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditor::TriggerTutorial() */

void __thiscall LevelEditor::TriggerTutorial(LevelEditor *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04b26a4c(*(undefined4 *)(lVar2 + 0x40));
  if (iVar1 != 0x3c) {
    return;
  }
  LawnApp::KillGameMaskUI(gLawnApp);
  SwitchToBoardModule(this);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::LevelEditor() */

void __thiscall LevelEditor::LevelEditor(LevelEditor *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<LevelEditor>::UISingletonDialog((UISingletonDialog<LevelEditor> *)this);
  Sexy::SliderListener::SliderListener((SliderListener *)(this + 0x138));
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined **)(this + 0xd8) = &DAT_069578e0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined ***)this = &PTR_GetClass_06957590;
  *(undefined ***)(this + 0x138) = &PTR_SliderVal_06957928;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTutorialCreated);
  Sexy::Delegate0::Delegate0<LevelEditor,void(LevelEditor::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CustomLevelTutorialSurfaceCreated,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnDragFinished);
  Sexy::Delegate0::Delegate0<LevelEditor,void(LevelEditor::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CustomLevelTutorialFinishCloseEvent,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditor::CreateEditor(CustomLevelNetworkLevelMode) */

undefined8 LevelEditor::CreateEditor(undefined4 param_1)

{
  undefined8 uVar1;
  
  CustomLevelUtils::ResetFinishedLevel();
  switch(param_1) {
  case 0:
  case 1:
  case 2:
    uVar1 = UISingletonDialog<LevelEditor>::ShowDialog();
    return uVar1;
  case 3:
    uVar1 = UISingletonDialog<LevelEditorStatueMaze>::ShowDialog();
    return uVar1;
  case 4:
    uVar1 = UISingletonDialog<LevelEditorEvilDave>::ShowDialog();
    return uVar1;
  case 5:
    uVar1 = UISingletonDialog<LevelEditorTowerDefend>::ShowDialog();
    return uVar1;
  case 6:
    uVar1 = UISingletonDialog<LevelEditorSingleHanded>::ShowDialog();
    return uVar1;
  case 7:
    uVar1 = UISingletonDialog<LevelEditorVaseBreaker>::ShowDialog();
    return uVar1;
  default:
    return 0;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::InitBoardModule() */

void __thiscall LevelEditor::InitBoardModule(LevelEditor *this)

{
  int iVar1;
  ButtonListener *pBVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  Widget *pWVar12;
  LevelEditorLevelName *this_02;
  LevelEditorBoardGrid *this_03;
  UIWidgetImage *pUVar13;
  PVZ2UIButton *pPVar14;
  CustomLevelMgr *pCVar15;
  LevelEditorStartingSunMoney *this_04;
  undefined8 uVar16;
  PVZ2UIButton *this_05;
  LevelEditorStartingPlantfood *this_06;
  LevelEditorNormalSeedBank *this_07;
  LevelEditorConveyorSeedBank *this_08;
  long lVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  code *pcVar21;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar10 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar9 = 0;
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_40,"Widget_BoardMain");
  pWVar12 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  *(Widget **)(this + 0x168) = pWVar12;
  std::string::~string(asStack_40);
  nop();
  this_02 = ::operator_new(0xe8);
  LevelEditorLevelName::LevelEditorLevelName(this_02);
  uVar5 = FUN_04b270cc(0x109);
  uVar6 = FUN_04b270cc(0x14);
  uVar7 = FUN_04b270cc(300);
  uVar8 = FUN_04b270cc(0x3c);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar5,uVar6,uVar7,uVar8);
  LevelEditorLevelName::Init(this_02);
  (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_02);
  std::string::string(asStack_40,"Widget_Board");
  pWVar12 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  iVar11 = *(int *)(pWVar12 + 0x50);
  iVar3 = *(int *)(pWVar12 + 0x54);
  do {
    iVar18 = 0;
    iVar19 = 0;
    do {
      this_03 = ::operator_new(0x100);
      iVar1 = iVar18 + 1;
      LevelEditorBoardGrid::LevelEditorBoardGrid(this_03,iVar18,iVar9);
      pcVar21 = *(code **)(*(long *)this_03 + 0x1a0);
      Sexy::Insets::Insets((Insets *)asStack_40,iVar10,iVar19,iVar11 / 9,iVar3 / 5);
      (*pcVar21)(this_03,asStack_40);
      (**(code **)(*(long *)this_03 + 0x310))(this_03);
      (**(code **)(*(long *)pWVar12 + 0x60))(pWVar12,this_03);
      iVar18 = iVar1;
      iVar19 = iVar19 + iVar3 / 5;
    } while (iVar1 != 5);
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + iVar11 / 9;
  } while (iVar9 != 9);
  pUVar13 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar13);
  *(UIWidgetImage **)(this + 0x150) = pUVar13;
  pBVar2 = (ButtonListener *)(this + 0xd8);
  uVar5 = FUN_04b270cc(0x25d);
  uVar6 = FUN_04b270cc(0x21c);
  uVar7 = FUN_04b270cc(0x8c);
  uVar8 = FUN_04b270cc(0x3c);
  (**(code **)(*(long *)pUVar13 + 0x198))(pUVar13,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(**(long **)(this + 0x168) + 0x60))
            (*(long **)(this + 0x168),*(undefined8 *)(this + 0x150));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,3,pBVar2,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x160) = pPVar14;
  FUN_05476c50(awStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x160);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84c18,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84c18,2);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar20 = *(long **)(this + 0x160);
  uVar5 = FUN_04b270cc(0x2e4);
  uVar6 = FUN_04b270cc(0x221);
  uVar7 = FUN_04b270cc(0x32);
  (**(code **)(*plVar20 + 0x198))(plVar20,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(**(long **)(this + 0x168) + 0x60))
            (*(long **)(this + 0x168),*(undefined8 *)(this + 0x160));
  pCVar15 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  iVar9 = CustomLevelMgr::GetSeedBankType(pCVar15);
  if (iVar9 != 1) {
    this_04 = ::operator_new(0xe8);
    LevelEditorStartingSunMoney::LevelEditorStartingSunMoney(this_04);
    uVar5 = FUN_04b270cc(10);
    uVar6 = FUN_04b270cc(0x8c);
    uVar7 = FUN_04b270cc(0x28);
    (**(code **)(*(long *)this_04 + 0x198))(this_04,uVar5,uVar5,uVar6,uVar7);
    LevelEditorStartingSunMoney::Init(this_04);
    (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_04);
  }
  pCVar15 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  cVar4 = CustomLevelMgr::IsLastStandValid(pCVar15);
  if (cVar4 != '\0') {
    this_06 = ::operator_new(0xe8);
    LevelEditorStartingPlantfood::LevelEditorStartingPlantfood(this_06);
    uVar5 = FUN_04b270cc(0x32);
    uVar6 = FUN_04b270cc(0x226);
    uVar7 = FUN_04b270cc(0x8c);
    uVar8 = FUN_04b270cc(0x2d);
    (**(code **)(*(long *)this_06 + 0x198))(this_06,uVar5,uVar6,uVar7,uVar8);
    (**(code **)(*(long *)this_06 + 0x318))(this_06);
    (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_06);
  }
  if (iVar9 == 0) {
    this_07 = ::operator_new(0xf8);
    LevelEditorNormalSeedBank::LevelEditorNormalSeedBank(this_07);
    uVar5 = FUN_04b270cc(0x46);
    uVar6 = FUN_04b270cc(0x5a);
    uVar7 = FUN_04b270cc(0x1e0);
    (**(code **)(*(long *)this_07 + 0x198))(this_07,0,uVar5,uVar6,uVar7);
    LevelEditorNormalSeedBank::Init(this_07);
    (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_07);
    cVar4 = CustomLevelUtils::IsCertifiedAuthor();
  }
  else {
    if (iVar9 == 1) {
      this_08 = ::operator_new(0xf0);
      LevelEditorConveyorSeedBank::LevelEditorConveyorSeedBank(this_08);
      uVar5 = FUN_04b270cc(0x5a);
      uVar6 = FUN_04b270cc(0x1d6);
      (**(code **)(*(long *)this_08 + 0x198))(this_08,0,uVar5,uVar5,uVar6);
      LevelEditorConveyorSeedBank::Init(this_08);
      (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_08);
    }
    cVar4 = CustomLevelUtils::IsCertifiedAuthor();
  }
  if (cVar4 != '\0') {
    FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
    Sexy::Color::Color((Color *)asStack_40,1);
    pPVar14 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar14,9,pBVar2,awStack_78,(Color *)asStack_40);
    FUN_05476c50(awStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84d38,2);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84d38,2);
    PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
    uVar5 = FUN_04b270cc(0x2a8);
    uVar6 = FUN_04b270cc(0xf);
    uVar7 = FUN_04b270cc(0x32);
    (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar5,uVar6,uVar7,uVar7);
    std::string::string(asStack_40,"encourageSetting");
    cVar4 = PlayerInfo::GetPlayerFlagInfo(this_01,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (cVar4 == '\0') {
      pPVar14[0x59] = (PVZ2UIButton)0x0;
      pUVar13 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar13);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a98,7);
      UIWidgetImage::SetImage(pUVar13,(PVZ2UIImage *)asStack_40);
      pcVar21 = *(code **)(*(long *)pUVar13 + 0x198);
      iVar10 = FUN_04b270cc(0xf);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84a98);
      iVar9 = *(int *)(lVar17 + 0x38);
      iVar11 = FUN_04b270cc(10);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84a98);
      uVar5 = *(undefined4 *)(lVar17 + 0x38);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b84a98);
      (*pcVar21)(pUVar13,iVar10 - iVar9,-iVar11,uVar5,*(undefined4 *)(lVar17 + 0x3c));
      lVar17 = *(long *)pPVar14;
      pUVar13[0x6d] = (UIWidgetImage)0x0;
      (**(code **)(lVar17 + 0x60))(pPVar14,pUVar13);
      *(UIWidgetImage **)(this + 0x158) = pUVar13;
    }
    (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),pPVar14);
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar14,7,pBVar2,awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84a70,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84a70,2);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar5 = FUN_04b270cc(700);
  uVar6 = FUN_04b270cc(0x50);
  uVar7 = FUN_04b270cc(0x5a);
  uVar8 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)pPVar14 + 0x198))(pPVar14,uVar5,uVar6,uVar7,uVar8);
  pcVar21 = *(code **)(*(long *)pPVar14 + 800);
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar21)(pPVar14,uVar16);
  (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),pPVar14);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  this_05 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_05,6,pBVar2,awStack_78,(Color *)asStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b84d10,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b84ac0,2);
  PVZ2UIButton::SetDialogStates(this_05,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  uVar5 = FUN_04b270cc(0x2e4);
  uVar6 = FUN_04b270cc(0xf);
  uVar7 = FUN_04b270cc(0x32);
  (**(code **)(*(long *)this_05 + 0x198))(this_05,uVar5,uVar6,uVar7,uVar7);
  pcVar21 = *(code **)(*(long *)this_05 + 800);
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar21)(this_05,uVar16);
  (**(code **)(**(long **)(this + 0x168) + 0x60))(*(long **)(this + 0x168),this_05);
  iVar9 = FUN_04b26a4c(*(undefined4 *)(this_01 + 0x40));
  if (iVar9 == 0x3c) {
    *(PVZ2UIButton **)(this + 0x178) = pPVar14;
    *(PVZ2UIButton **)(this + 0x180) = this_05;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelEditor::Init() */

void __thiscall LevelEditor::Init(LevelEditor *this)

{
  InitCommon(this);
  InitBoardModule(this);
  InitZombieModule(this);
  Reload(this);
  TriggerTutorial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::OnCreate() */

void __thiscall LevelEditor::OnCreate(LevelEditor *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditor::ButtonDepress(int) */

void __thiscall LevelEditor::ButtonDepress(LevelEditor *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  LevelEditorWorldSelect *this_00;
  undefined8 uVar3;
  UISummeryLotteryItem *this_01;
  ProfileMgr *pPVar4;
  long lVar5;
  string *this_02;
  undefined1 auStack_a8 [8];
  vector avStack_a0 [24];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 3:
    std::string::string(asStack_88,"egypt");
    this_02 = (string *)&local_8;
    std::string::string(asStack_80,"pirate");
    std::string::string(asStack_78,"cowboy");
    std::string::string(asStack_70,"kongfu");
    std::string::string(asStack_68,"future");
    std::string::string(asStack_60,"eighties");
    std::string::string(asStack_58,"dark");
    std::string::string(asStack_50,"beach");
    std::string::string(asStack_48,"dino");
    std::string::string(asStack_40,"iceage");
    std::string::string(asStack_38,"lostcity");
    std::string::string(asStack_30,"modern");
    std::string::string(asStack_28,"steam");
    std::string::string(asStack_20,"renai");
    std::string::string(asStack_18,"heian");
    std::string::string(asStack_10,"childrenday");
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_a0,asStack_88,0x10,
               auStack_a8);
    this_00 = (LevelEditorWorldSelect *)LevelEditorUtil::ShowSelectWorldWidget(avStack_a0);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_a0);
    do {
      this_02 = this_02 + -8;
      std::string::~string(this_02);
    } while (this_02 != asStack_88);
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    nop();
    uVar3 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    this_01 = (UISummeryLotteryItem *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    uVar1 = UISummeryLotteryItem::GetItemID(this_01);
    CustomLevelMgr::GetWorldByWorldType(avStack_a0,uVar3,uVar1);
    LevelEditorWorldSelect::SetSelectStage(this_00,(string *)avStack_a0);
    std::string::~string((string *)avStack_a0);
    FUN_04b27070(this_02,this,this_00);
    LevelEditorSunMoneyEditor::SetOnConfirmText((LevelEditorSunMoneyEditor *)this_00,this_02);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)this_02);
    break;
  case 6:
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    iVar2 = FUN_04b26a4c(*(undefined4 *)(lVar5 + 0x40));
    if (iVar2 == 0x3c) {
      LawnApp::KillGameMaskUI(gLawnApp);
    }
    CustomLevelUtils::TrySaveCurrentLevel();
    UISingletonDialog<LevelEditor>::CloseDialog();
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelCreateLevelRefresh,false);
    break;
  case 7:
    SwitchToZombieMoudle(this);
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    iVar2 = FUN_04b26a4c(*(undefined4 *)(lVar5 + 0x40));
    if (iVar2 == 0x3c) {
      LawnApp::KillGameMaskUI(gLawnApp);
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
    }
    break;
  case 8:
    SwitchToBoardModule(this);
    break;
  case 9:
    UISingletonDialog<UILevelEditorEncourageSetting>::ShowDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditor::ButtonDepress(int) */

void __thiscall LevelEditor::ButtonDepress(LevelEditor *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

