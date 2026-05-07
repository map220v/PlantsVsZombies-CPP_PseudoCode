// Class: GuessGamePanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGamePanel::GetLayoutName() */

void __thiscall GuessGamePanel::GetLayoutName(GuessGamePanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"GuessGameUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* GuessGamePanel::~GuessGamePanel() */

void __thiscall GuessGamePanel::~GuessGamePanel(GuessGamePanel *this)

{
  *(undefined ***)this = &PTR_GetClass_069891a0;
  *(undefined **)(this + 0xd8) = &DAT_069894f0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,false,false);
  UISingletonDialog<GuessGamePanel>::~UISingletonDialog((UISingletonDialog<GuessGamePanel> *)this);
  return;
}


/* GuessGamePanel::~GuessGamePanel() */

void __thiscall GuessGamePanel::~GuessGamePanel(GuessGamePanel *this)

{
  ~GuessGamePanel(this);
  AK::FreeHook(this);
  return;
}


/* GuessGamePanel::ShowResult() */

void __thiscall GuessGamePanel::ShowResult(GuessGamePanel *this)

{
  (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),1);
  (**(code **)(**(long **)(this + 0x160) + 0x158))(*(long **)(this + 0x160),1);
  (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),1);
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),1);
  (**(code **)(**(long **)(this + 0x188) + 0x158))(*(long **)(this + 0x188),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGamePanel::CalcResult(float, float) */

void GuessGamePanel::CalcResult(float param_1,float param_2)

{
  GuessThreeConditionRatio aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GuessThreeConditionRatio::GuessThreeConditionRatio(aGStack_18,param_1,param_2);
  GuessThreeConditionRatio::GetResult(aGStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuessGamePanel::GetResultType(GuessGameType, GuessResult) */

int __thiscall GuessGamePanel::GetResultType(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 1) {
    iVar1 = 3;
    if (param_2 != 1) {
      iVar1 = 2;
      if (param_2 != 3) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  else if (param_3 == 2) {
    iVar1 = 2;
    if (param_2 != 1) {
      iVar1 = 3;
      if (param_2 != 2) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  else {
    iVar1 = param_2;
    if (param_3 != 3) {
      iVar1 = 1;
    }
  }
  return iVar1;
}


/* GuessGamePanel::GetCardNameStr(GuessGameType) */

undefined8 GuessGamePanel::GetCardNameStr(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 1) {
    if (param_3 == 2) {
      TodStringTranslate(L"[RICHMAN_GUESS_GAME_ROCK]");
      return param_1;
    }
    if (param_3 == 3) {
      TodStringTranslate(L"[RICHMAN_GUESS_GAME_PAPER]");
      return param_1;
    }
  }
  TodStringTranslate(L"[RICHMAN_GUESS_GAME_SCISSOR]");
  return param_1;
}


/* GuessGamePanel::GetResultStr(GuessResult) */

undefined8 GuessGamePanel::GetResultStr(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    TodStringTranslate(L"[RICHMAN_GUESS_GAME_RESULT_WIN]");
  }
  else if (param_3 == 3) {
    TodStringTranslate(L"[RICHMAN_GUESS_GAME_RESULT_DRAW]");
  }
  else {
    TodStringTranslate(L"[RICHMAN_GUESS_GAME_RESULT_LOSE]");
  }
  return param_1;
}


/* GuessGamePanel::GuessGamePanel() */

void __thiscall GuessGamePanel::GuessGamePanel(GuessGamePanel *this)

{
  UISingletonDialog<GuessGamePanel>::UISingletonDialog((UISingletonDialog<GuessGamePanel> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_069891a0;
  *(undefined **)(this + 0xd8) = &DAT_069894f0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a0) = 2;
  this[0x1a4] = (GuessGamePanel)0x0;
  return;
}


/* GuessGamePanel::Update() */

void __thiscall GuessGamePanel::Update(GuessGamePanel *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RichmanTileEventManager *pRVar4;
  RichmanTileEvent_GuessGame *this_00;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if ((((*(GuessGameCard **)(this + 400) != (GuessGameCard *)0x0) &&
       (cVar1 = GuessGameCard::IsShowResult(*(GuessGameCard **)(this + 400)), cVar1 != '\0')) &&
      (*(GuessGameCard **)(this + 0x198) != (GuessGameCard *)0x0)) &&
     ((cVar1 = GuessGameCard::IsShowResult(*(GuessGameCard **)(this + 0x198)), cVar1 != '\0' &&
      (this[0x1a4] == (GuessGamePanel)0x0)))) {
    this[0x1a4] = (GuessGamePanel)0x1;
    pRVar4 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
    this_00 = (RichmanTileEvent_GuessGame *)RichmanTileEventManager::GetCurrentTileEvent(pRVar4);
    iVar2 = RichmanTileEvent_GuessGame::GetGuessGameBet(this_00);
    iVar3 = RichmanTileEvent_GuessGame::GetGuessGameResult(this_00);
    pRVar4 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
    RichmanTileEventManager::RequestRichmanProtocol(pRVar4,4,iVar3,iVar2);
    ShowResult(this);
    return;
  }
  return;
}


/* GuessGamePanel::GetResultImage(GuessResult) */

void __thiscall GuessGamePanel::GetResultImage(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90da8);
    return;
  }
  if (param_2 == 3) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91488);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b91648);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGamePanel::ClickGuessBtn(GuessGameType) */

void __thiscall GuessGamePanel::ClickGuessBtn(GuessGamePanel *this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  PlayerInfo *this_00;
  RichmanTileEventManager *this_01;
  RichmanTileEvent_GuessGame *pRVar3;
  Image *pIVar4;
  UIWidgetImage *this_02;
  undefined8 uVar5;
  float fVar6;
  float local_18;
  float local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::GetRichmanGuessGameRatio(this_00,&local_18,&local_14);
  iVar1 = CalcResult(local_18,local_14);
  if (iVar1 - 2U < 2) {
    fVar6 = (float)ClampFloat(local_18 + 0.1,0.0,1.0);
    local_18 = fVar6;
    local_14 = (float)ClampFloat(local_14 - 0.05,0.0,1.0);
  }
  else {
    fVar6 = 0.33;
    local_18 = 0.33;
    local_14 = 0.33;
  }
  PlayerInfo::SetRichmanGuessGameRatio(this_00,fVar6,local_14,true);
  *(int *)(this + 0x1a0) = iVar1;
  this_01 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  pRVar3 = (RichmanTileEvent_GuessGame *)RichmanTileEventManager::GetCurrentTileEvent(this_01);
  RichmanTileEvent_GuessGame::SetGuessGameResult(pRVar3,iVar1);
  uVar2 = GetResultType(this,param_2,iVar1);
  GuessGameCard::SetCardType(*(GuessGameCard **)(this + 400),param_2);
  GuessGameCard::SetState(*(GuessGameCard **)(this + 400),2);
  GuessGameCard::SetCardType(*(GuessGameCard **)(this + 0x198),uVar2);
  GuessGameCard::SetState(*(GuessGameCard **)(this + 0x198),2);
  this_02 = *(UIWidgetImage **)(this + 0x188);
  pIVar4 = (Image *)GetResultImage(this,iVar1);
  UIWidgetImage::SetImage(this_02,pIVar4);
  uVar5 = *(undefined8 *)(this + 0x158);
  GetCardNameStr(auStack_10,this,param_2);
  PuzzleTip::SetTip(uVar5,auStack_10);
  FUN_05476c50(auStack_10);
  uVar5 = *(undefined8 *)(this + 0x160);
  GetCardNameStr(auStack_10,this,uVar2);
  PuzzleTip::SetTip(uVar5,auStack_10);
  FUN_05476c50(auStack_10);
  uVar5 = *(undefined8 *)(this + 0x168);
  GetResultStr(auStack_10,this,iVar1);
  PuzzleTip::SetTip(uVar5,auStack_10);
  FUN_05476c50(auStack_10);
  (**(code **)(**(long **)(this + 0x138) + 0x158))(*(long **)(this + 0x138),0);
  (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
  (**(code **)(**(long **)(this + 0x148) + 0x158))(*(long **)(this + 0x148),0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuessGamePanel::ButtonDepress(int) */

void __thiscall GuessGamePanel::ButtonDepress(GuessGamePanel *this,int param_1)

{
  ProfileUtils::Profile();
  switch(param_1) {
  case 2000:
    ClickGuessBtn(this,1);
    return;
  case 0x7d1:
    ClickGuessBtn(this,2);
    return;
  case 0x7d2:
    ClickGuessBtn(this,3);
    return;
  case 0x7d3:
    UISingletonDialog<GuessGamePanel>::CloseDialog();
    return;
  default:
    return;
  }
}


/* non-virtual thunk to GuessGamePanel::ButtonDepress(int) */

void __thiscall GuessGamePanel::ButtonDepress(GuessGamePanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGamePanel::OnCreate() */

void __thiscall GuessGamePanel::OnCreate(GuessGamePanel *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UIWidgetImage *pUVar8;
  RichManUIMgr *pRVar9;
  long lVar10;
  undefined8 uVar11;
  UIWidgetImage *pUVar12;
  PVZ2UIButton *pPVar13;
  UIWidgetText *pUVar14;
  GuessGameCard *pGVar15;
  undefined8 local_28;
  int local_20;
  int local_1c;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)local_18,"Background_0");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  Sexy::Insets::Insets((Insets *)&local_28);
  pRVar9 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
  lVar10 = RichManUIMgr::GetBoard(pRVar9);
  if (lVar10 == 0) {
    iVar2 = local_20;
    iVar3 = local_1c;
  }
  else {
    pRVar9 = (RichManUIMgr *)Sexy::LazySingleton<RichManUIMgr>::GetInstance();
    RichManUIMgr::GetBoard(pRVar9);
    AdaptorRichManBoard::GetInitRect();
    local_28 = local_18[0];
    local_20 = (int)local_18[1];
    local_1c = (int)((ulong)local_18[1] >> 0x20);
    iVar2 = local_20 * 9;
    iVar3 = local_1c * 5;
    _local_20 = CONCAT44(iVar3,iVar2);
  }
  (**(code **)(*(long *)pUVar8 + 0x198))
            (pUVar8,((int)local_28 + iVar2 / 2) - *(int *)(pUVar8 + 0x50) / 2,
             (local_28._4_4_ + iVar3 / 2) - *(int *)(pUVar8 + 0x54) / 2,*(int *)(pUVar8 + 0x50));
  std::string::string((string *)local_18,"guess_game_title");
  uVar11 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_18);
  *(undefined8 *)(this + 0x178) = uVar11;
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(**(long **)(this + 0x178) + 0x158))(*(long **)(this + 0x178),0);
  std::string::string((string *)local_18,"guess_game_result");
  pUVar12 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_18);
  *(UIWidgetImage **)(this + 0x188) = pUVar12;
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(**(long **)(this + 0x188) + 0x158))(*(long **)(this + 0x188),0);
  std::string::string((string *)local_18,"scissor");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_18);
  *(PVZ2UIButton **)(this + 0x140) = pPVar13;
  std::string::~string((string *)local_18);
  nop();
  std::string::string((string *)local_18,"rock");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_18);
  *(PVZ2UIButton **)(this + 0x148) = pPVar13;
  std::string::~string((string *)local_18);
  nop();
  std::string::string((string *)local_18,"paper");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_18);
  *(PVZ2UIButton **)(this + 0x138) = pPVar13;
  std::string::~string((string *)local_18);
  nop();
  std::string::string((string *)local_18,"close");
  pPVar13 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_18);
  *(PVZ2UIButton **)(this + 0x150) = pPVar13;
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),0);
  std::string::string((string *)local_18,"player_result");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
  *(UIWidgetText **)(this + 0x158) = pUVar14;
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),0);
  std::string::string((string *)local_18,"cpu_result");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
  *(UIWidgetText **)(this + 0x160) = pUVar14;
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(**(long **)(this + 0x160) + 0x158))(*(long **)(this + 0x160),0);
  std::string::string((string *)local_18,"guess_game_result_text");
  pUVar14 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_18);
  *(UIWidgetText **)(this + 0x168) = pUVar14;
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(**(long **)(this + 0x168) + 0x158))(*(long **)(this + 0x168),0);
  std::string::string((string *)local_18,"player_card");
  lVar10 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  pGVar15 = ::operator_new(0x108);
  GuessGameCard::GuessGameCard(pGVar15);
  *(GuessGameCard **)(this + 400) = pGVar15;
  iVar2 = FUN_04c49fec(*(undefined4 *)(pUVar8 + 0x48));
  iVar3 = FUN_04c49fec(*(undefined4 *)(lVar10 + 0x48));
  iVar4 = FUN_04c49ff0(*(undefined4 *)(pUVar8 + 0x4c));
  iVar5 = FUN_04c49ff0(*(undefined4 *)(lVar10 + 0x4c));
  uVar6 = FUN_04c49ff4(*(undefined4 *)(lVar10 + 0x50));
  uVar7 = FUN_04c49ff8(*(undefined4 *)(lVar10 + 0x54));
  (**(code **)(*(long *)pGVar15 + 0x198))(pGVar15,iVar2 + iVar3,iVar4 + iVar5,uVar6,uVar7);
  GuessGameCard::SetSide(*(GuessGameCard **)(this + 400),false);
  GuessGameCard::CreateTurningEffect(*(GuessGameCard **)(this + 400),1);
  std::string::string((string *)local_18,"cpu_card");
  lVar10 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  pGVar15 = ::operator_new(0x108);
  GuessGameCard::GuessGameCard(pGVar15);
  *(GuessGameCard **)(this + 0x198) = pGVar15;
  iVar2 = FUN_04c49fec(*(undefined4 *)(pUVar8 + 0x48));
  iVar3 = FUN_04c49fec(*(undefined4 *)(lVar10 + 0x48));
  iVar4 = FUN_04c49ff0(*(undefined4 *)(pUVar8 + 0x4c));
  iVar5 = FUN_04c49ff0(*(undefined4 *)(lVar10 + 0x4c));
  uVar6 = FUN_04c49ff4(*(undefined4 *)(lVar10 + 0x50));
  uVar7 = FUN_04c49ff8(*(undefined4 *)(lVar10 + 0x54));
  (**(code **)(*(long *)pGVar15 + 0x198))(pGVar15,iVar2 + iVar3,iVar4 + iVar5,uVar6,uVar7);
  GuessGameCard::SetSide(*(GuessGameCard **)(this + 0x198),true);
  GuessGameCard::CreateTurningEffect(*(GuessGameCard **)(this + 0x198),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 400));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x198));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

