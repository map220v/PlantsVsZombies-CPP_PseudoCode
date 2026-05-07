// Class: WorldMap_EventBar


/* WorldMap_EventBar::onVisibleStateChange(bool) */

void __thiscall WorldMap_EventBar::onVisibleStateChange(WorldMap_EventBar *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1f0);
  if (param_1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x158))(plVar1,1);
    }
  }
  else if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))();
    return;
  }
  return;
}


/* WorldMap_EventBar::onRiftOverAcknowledged() */

void WorldMap_EventBar::onRiftOverAcknowledged(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  GameStateMgr::ShowRiftMap(gGameStateMgr);
  return;
}


/* WorldMap_EventBar::StaticGetClass() */

long * WorldMap_EventBar::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_EventBar",uVar2,StaticNew);
  return sClass;
}


/* WorldMap_EventBar::GetClass() const */

long * WorldMap_EventBar::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_EventBar",uVar2,StaticNew);
  return sClass;
}


/* WorldMap_EventBar::GetBannerTypeOverride() */

undefined4 WorldMap_EventBar::GetBannerTypeOverride(void)

{
  return DAT_06aac1d0;
}


/* WorldMap_EventBar::SetBannerTypeOverride(WorldMap_EventBar::EventBarType) */

void WorldMap_EventBar::SetBannerTypeOverride(undefined4 param_1)

{
  DAT_06aac1d0 = param_1;
  return;
}


/* WorldMap_EventBar::SetBannerRedrawOverride() */

void WorldMap_EventBar::SetBannerRedrawOverride(void)

{
  DAT_06aac210 = 1;
  return;
}


/* WorldMap_EventBar::deleteAllText() */

void __thiscall WorldMap_EventBar::deleteAllText(WorldMap_EventBar *this)

{
  long *plVar1;
  
  if (*(long **)(this + 0x1c8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1c8) + 0x18))();
    *(undefined8 *)(this + 0x1c8) = 0;
  }
  if (*(long **)(this + 0x1d0) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x1d8);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x1d0) + 0x18))();
    *(undefined8 *)(this + 0x1d0) = 0;
    plVar1 = *(long **)(this + 0x1d8);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*plVar1 + 0x18))();
  *(undefined8 *)(this + 0x1d8) = 0;
  return;
}


/* WorldMap_EventBar::drawPlayNowButton(Sexy::Graphics*) */

void __thiscall WorldMap_EventBar::drawPlayNowButton(WorldMap_EventBar *this,Graphics *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x1b8);
  if (lVar1 != 0) {
    Sexy::Graphics::Translate(param_1,*(int *)(lVar1 + 0x48),*(int *)(lVar1 + 0x4c));
    (**(code **)(**(long **)(this + 0x1b8) + 0x128))(*(long **)(this + 0x1b8),param_1);
    Sexy::Graphics::Translate
              (param_1,-*(int *)(*(long *)(this + 0x1b8) + 0x48),
               -*(int *)(*(long *)(this + 0x1b8) + 0x4c));
    return;
  }
  return;
}


/* WorldMap_EventBar::onAdToReplayLODComplete(EASquaredAdFinishedReason::EASquaredAdFinishedReason)
    */

void __thiscall WorldMap_EventBar::onAdToReplayLODComplete(WorldMap_EventBar *this,int param_2)

{
  if (param_2 == 0) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
  }
  *(undefined4 *)(this + 0x200) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::doPlayNow() */

void __thiscall WorldMap_EventBar::doPlayNow(WorldMap_EventBar *this)

{
  char cVar1;
  char *__s;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b0) - 3U < 3) {
    LevelOfTheDay::GetSystem();
    cVar1 = LevelOfTheDaySystem::AttemptStartLOD();
    std::string::string(asStack_28,"EventBar");
    std::string::string(asStack_20,"Play");
    std::string::string(asStack_18,"LOD");
    if (cVar1 == '\0') {
      __s = "No";
    }
    else {
      __s = "Yes";
    }
    std::string::string(asStack_10,__s);
    UIMetrics::BroadcastUIEvent(asStack_28,asStack_20,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::lodReplayForCoinsCallback() */

void __thiscall WorldMap_EventBar::lodReplayForCoinsCallback(WorldMap_EventBar *this)

{
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"EventBar");
  std::string::string(asStack_20,"Replay");
  std::string::string(asStack_18,"Retry for 1000 coins");
  std::string::string(asStack_10,"");
  UIMetrics::BroadcastUIEvent(asStack_28,asStack_20,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  doPlayNow(this);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_EventBar::canUpdateEventType() */

byte WorldMap_EventBar::canUpdateEventType(void)

{
  byte bVar1;
  WorldMap *this;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  if (this != (WorldMap *)0x0) {
    bVar1 = WorldMap::IsActionQueued(this);
    return bVar1 ^ 1;
  }
  return 1;
}


/* WorldMap_EventBar::onAppResumeFocus() */

void __thiscall WorldMap_EventBar::onAppResumeFocus(WorldMap_EventBar *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x1f8);
  lVar1 = Sexy::SexyTime((Sexy *)this);
  if ((ulong)(lVar2 - lVar1) < 600) {
    return;
  }
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::createUnchartedBirthdayText(std::wstring&, std::wstring&) */

void __thiscall
WorldMap_EventBar::createUnchartedBirthdayText
          (WorldMap_EventBar *this,wstring *param_1,wstring *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  PrimeText_PotentialText *pPVar9;
  PrimeTextWidget *pPVar10;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  deleteAllText(this);
  Sexy::Color::Color((Color *)aIStack_28,1);
  piVar7 = (int *)UIWidget::GetRect((UIWidget *)this);
  iVar1 = FUN_0369304c(*(undefined4 *)(this + 0x38));
  iVar6 = *piVar7;
  iVar2 = FUN_03693134(0x140);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar3 = FUN_03693134(0x53);
  iVar4 = FUN_03693134(500);
  iVar5 = FUN_03693134(0x22);
  FUN_05477b24(auStack_30,param_1);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  pPVar9 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     ((float)((iVar1 + iVar6) - iVar2),(float)iVar3,(float)iVar4,(float)iVar5,uVar8,
                      auStack_30,0,2,aIStack_18);
  FUN_05476c50(auStack_30);
  pPVar10 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10,pPVar9);
  *(PrimeTextWidget **)(this + 0x1c8) = pPVar10;
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  iVar6 = FUN_03693134(0x74);
  iVar1 = FUN_03693134(0xfffffffe);
  iVar2 = FUN_03693134(0x16c);
  iVar3 = FUN_03693134(0x3c);
  FUN_05477b24(auStack_30,param_2);
  Sexy::Color::Color((Color *)aIStack_18,1);
  pPVar9 = (PrimeText_PotentialText *)
           Sexy::BuildPotentialText_Paragraph
                     ((float)iVar6,(float)iVar1,(float)iVar2,(float)iVar3,uVar8,auStack_30,0,0,
                      aIStack_18);
  FUN_05476c50(auStack_30);
  pPVar10 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar10,pPVar9);
  *(PrimeTextWidget **)(this + 0x1d0) = pPVar10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::createRiftText(std::wstring&, std::wstring&) */

void __thiscall
WorldMap_EventBar::createRiftText(WorldMap_EventBar *this,wstring *param_1,wstring *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  PrimeText_PotentialText *pPVar10;
  PrimeTextWidget *pPVar11;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  deleteAllText(this);
  iVar1 = FUN_0369304c(*(undefined4 *)(this + 0x38));
  Sexy::Color::Color((Color *)aIStack_28,1);
  piVar8 = (int *)UIWidget::GetRect((UIWidget *)this);
  iVar2 = FUN_0369304c(*(undefined4 *)(this + 0x38));
  iVar7 = *piVar8;
  iVar3 = FUN_03693134(0x140);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  iVar4 = FUN_03693134(0x53);
  iVar5 = FUN_03693134(500);
  iVar6 = FUN_03693134(0x22);
  FUN_05477b24(auStack_30,param_1);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  pPVar10 = (PrimeText_PotentialText *)
            Sexy::BuildPotentialText_Paragraph
                      ((float)((iVar2 + iVar7) - iVar3),(float)iVar4,(float)iVar5,(float)iVar6,uVar9
                       ,auStack_30,0,2,aIStack_18);
  FUN_05476c50(auStack_30);
  pPVar11 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar11,pPVar10);
  *(PrimeTextWidget **)(this + 0x1c8) = pPVar11;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  iVar7 = FUN_03693134(0x74);
  iVar2 = FUN_03693134(0xfffffffe);
  iVar3 = FUN_03693134(0x16c);
  iVar4 = FUN_03693134(0x3c);
  FUN_05477b24(auStack_30,param_2);
  Sexy::Color::Color((Color *)aIStack_18,1);
  pPVar10 = (PrimeText_PotentialText *)
            Sexy::BuildPotentialText_Paragraph
                      ((float)iVar7,(float)iVar2,(float)iVar3,(float)iVar4,uVar9,auStack_30,0,0,
                       aIStack_18);
  FUN_05476c50(auStack_30);
  pPVar11 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar11,pPVar10);
  *(PrimeTextWidget **)(this + 0x1d0) = pPVar11;
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  iVar7 = FUN_03693134(8);
  iVar2 = FUN_03693134(0x5a);
  iVar3 = FUN_03693134(0x2f8);
  iVar4 = FUN_03693134(0x22);
  FUN_05478178(auStack_30,&DAT_056f11a8,auStack_38);
  Sexy::Insets::Insets(aIStack_18,(Insets *)PrimeText_Game::Color_LOD_Upcoming_Header);
  pPVar10 = (PrimeText_PotentialText *)
            Sexy::BuildPotentialText_Paragraph
                      ((float)iVar7,(float)iVar2,(float)iVar3,(float)iVar4,uVar9,auStack_30,0,2,
                       aIStack_18);
  FUN_05476c50(auStack_30);
  nop();
  pPVar11 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar11,pPVar10);
  *(PrimeTextWidget **)(this + 0x1d8) = pPVar11;
  if (*(int *)(this + 0x1b0) == 8) {
    iVar7 = FUN_03693134(0x9a);
    uVar9 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
    iVar2 = FUN_03693134(0xffffffb2);
    iVar3 = FUN_03693134(10);
    FUN_05478178(auStack_30,&DAT_056f11a8,auStack_38);
    Sexy::Color::Color((Color *)aIStack_18,1);
    pPVar10 = (PrimeText_PotentialText *)
              Sexy::BuildPotentialText_Line
                        ((float)(iVar1 - iVar7),(float)iVar2,
                         (float)((iVar1 - iVar3) - (iVar1 - iVar7)),uVar9,auStack_30,1,aIStack_18);
    FUN_05476c50(auStack_30);
    nop();
    pPVar11 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar11,pPVar10);
    *(PrimeTextWidget **)(this + 0x1e8) = pPVar11;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::doRiftHowToPlay() */

void WorldMap_EventBar::doRiftHowToPlay(void)

{
  long lVar1;
  AdaptorRiftHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar1 = RiftPropertySheet::GetProperties();
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x10));
  this = ::operator_new(0x1a8);
  memset(this,0,0x1a8);
  AdaptorRiftHowToPlayScreen::AdaptorRiftHowToPlayScreen(this);
  HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  RiftUtils::SetHasSeenHowToPlay();
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_EventBar::ButtonDepress(int) */

void __thiscall WorldMap_EventBar::ButtonDepress(WorldMap_EventBar *this,int param_1)

{
  *(int *)(this + 0x200) = param_1;
  if (param_1 == 0) {
    doPlayNow(this);
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      nop();
      return;
    }
    if (param_1 == 3) {
      doRiftHowToPlay();
      return;
    }
  }
  return;
}


/* non-virtual thunk to WorldMap_EventBar::ButtonDepress(int) */

void __thiscall WorldMap_EventBar::ButtonDepress(WorldMap_EventBar *this,int param_1)

{
  ButtonDepress(this + -0x168,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::doMouseDownButton(PVZ2UIButton*, int, int) */

void __thiscall
WorldMap_EventBar::doMouseDownButton
          (WorldMap_EventBar *this,PVZ2UIButton *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PVZ2UIButton *)0x0) {
    Sexy::Touch::Touch((Touch *)local_40);
    local_40[0] = 1;
    Sexy::Point::Point((Point *)&local_48,param_2 - *(int *)(param_1 + 0x48),
                       param_3 - *(int *)(param_1 + 0x4c));
    local_30 = local_48;
    cVar1 = (**(code **)(*(long *)param_1 + 0x300))(param_1,param_2,param_3);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x250))(param_1,(Touch *)local_40);
      (**(code **)(*(long *)param_1 + 600))(param_1,(Touch *)local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::OnMouseDown(int, int) */

void __thiscall WorldMap_EventBar::OnMouseDown(WorldMap_EventBar *this,int param_1,int param_2)

{
  long lVar1;
  int local_18;
  int local_14;
  
  lVar1 = ___stack_chk_guard;
  if (this[0x1aa] != (WorldMap_EventBar)0x0) {
    UIWidget::GetDrawRect();
    UIWidget::GetDrawRect();
    doMouseDownButton(this,*(PVZ2UIButton **)(this + 0x1b8),param_1 - local_18,param_2 - local_14);
    doMouseDownButton(this,*(PVZ2UIButton **)(this + 0x1e0),param_1 - local_18,param_2 - local_14);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::doMouseUpButton(PVZ2UIButton*, int, int) */

void __thiscall
WorldMap_EventBar::doMouseUpButton
          (WorldMap_EventBar *this,PVZ2UIButton *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PVZ2UIButton *)0x0) {
    Sexy::Touch::Touch((Touch *)local_40);
    local_40[0] = 1;
    Sexy::Point::Point((Point *)&local_48,param_2 - *(int *)(param_1 + 0x48),
                       param_3 - *(int *)(param_1 + 0x4c));
    local_30 = local_48;
    cVar1 = (**(code **)(*(long *)param_1 + 0x300))(param_1,param_2,param_3);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x260))(param_1,(Touch *)local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::OnMouseUp(int, int) */

void __thiscall WorldMap_EventBar::OnMouseUp(WorldMap_EventBar *this,int param_1,int param_2)

{
  long lVar1;
  int local_18;
  int local_14;
  
  lVar1 = ___stack_chk_guard;
  if (this[0x1aa] != (WorldMap_EventBar)0x0) {
    UIWidget::GetDrawRect();
    UIWidget::GetDrawRect();
    doMouseUpButton(this,*(PVZ2UIButton **)(this + 0x1b8),param_1 - local_18,param_2 - local_14);
    doMouseUpButton(this,*(PVZ2UIButton **)(this + 0x1e0),param_1 - local_18,param_2 - local_14);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::doMouseMoveButton(PVZ2UIButton*, int, int) */

void __thiscall
WorldMap_EventBar::doMouseMoveButton
          (WorldMap_EventBar *this,PVZ2UIButton *param_1,int param_2,int param_3)

{
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PVZ2UIButton *)0x0) {
    Sexy::Touch::Touch((Touch *)local_40);
    local_40[0] = 1;
    Sexy::Point::Point((Point *)&local_48,param_2 - *(int *)(param_1 + 0x48),
                       param_3 - *(int *)(param_1 + 0x4c));
    local_30 = local_48;
    (**(code **)(*(long *)param_1 + 600))(param_1,(Touch *)local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::OnMouseMove(int, int) */

void __thiscall WorldMap_EventBar::OnMouseMove(WorldMap_EventBar *this,int param_1,int param_2)

{
  long lVar1;
  int local_18;
  int local_14;
  
  lVar1 = ___stack_chk_guard;
  if (this[0x1aa] != (WorldMap_EventBar)0x0) {
    UIWidget::GetDrawRect();
    UIWidget::GetDrawRect();
    doMouseMoveButton(this,*(PVZ2UIButton **)(this + 0x1b8),param_1 - local_18,param_2 - local_14);
    doMouseMoveButton(this,*(PVZ2UIButton **)(this + 0x1e0),param_1 - local_18,param_2 - local_14);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_EventBar::~WorldMap_EventBar() */

void __thiscall WorldMap_EventBar::~WorldMap_EventBar(WorldMap_EventBar *this)

{
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0667d6f8;
  *(undefined ***)this = &PTR_GetClass_0667d520;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_EventBar_0667d6c8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b8) + 0x18))();
    *(undefined8 *)(this + 0x1b8) = 0;
  }
  if (*(long **)(this + 0x1e0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1e0) + 0x18))();
    *(undefined8 *)(this + 0x1e0) = 0;
  }
  deleteAllText(this);
  if (*(HotUIAdaptor **)(this + 0x1f0) != (HotUIAdaptor *)0x0) {
    HotUIAdaptor::RemoveAndDeleteWidget(*(HotUIAdaptor **)(this + 0x1f0));
    *(undefined8 *)(this + 0x1f0) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 400));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_EventBar::~WorldMap_EventBar() */

void __thiscall WorldMap_EventBar::~WorldMap_EventBar(WorldMap_EventBar *this)

{
  ~WorldMap_EventBar(this + -0x10);
  return;
}


/* WorldMap_EventBar::~WorldMap_EventBar() */

void __thiscall WorldMap_EventBar::~WorldMap_EventBar(WorldMap_EventBar *this)

{
  ~WorldMap_EventBar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_EventBar::~WorldMap_EventBar() */

void __thiscall WorldMap_EventBar::~WorldMap_EventBar(WorldMap_EventBar *this)

{
  ~WorldMap_EventBar(this + -0x10);
  return;
}


/* WorldMap_EventBar::drawZombieLeft(Sexy::Graphics*, Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
WorldMap_EventBar::drawZombieLeft(WorldMap_EventBar *this,Graphics *param_1,RtMixedPtrBase *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  
  if ((this[0x1a0] != (WorldMap_EventBar)0x0) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3), cVar1 != '\0')) {
    iVar2 = FUN_03693134(6);
    iVar3 = FUN_03693134(*(undefined4 *)(this + 0x1a4));
    pIVar4 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar3);
    return;
  }
  return;
}


/* WorldMap_EventBar::drawZombieRight(Sexy::Graphics*, Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
WorldMap_EventBar::drawZombieRight
          (WorldMap_EventBar *this,Graphics *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SalesProgressBar *this_00;
  LotteryResultProgressBar *this_01;
  Image *pIVar6;
  
  if (this[0x1a8] == (WorldMap_EventBar)0x0) {
    return;
  }
  this_00 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar1 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_0369304c(*(undefined4 *)(this + 0x38));
  this_01 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  iVar4 = FUN_03693134(0xffffffd0);
  iVar5 = FUN_03693134(0x7b);
  pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar2 - iVar3,iVar4 - (iVar1 - iVar5));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::updateRiftCountdownText() */

void __thiscall WorldMap_EventBar::updateRiftCountdownText(WorldMap_EventBar *this)

{
  RiftUtils *this_00;
  undefined1 auVar1 [12];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RiftUtils *)TodStringTranslate(L"[RIFT_WORLD_THEME_TITLE]");
  RiftUtils::GetCurrentThemeName(this_00);
  auVar1 = RiftUtils::GetCurrentThemeTimeRemaining();
  StringHelper::ToTimeString((StringHelper *)&DAT_00000004,(float)auVar1._0_8_,auVar1._8_4_);
  TodStringTranslate(L"[RIFT_WORLD_TITLE]");
  FUN_036944b8(awStack_18,&DAT_05705568,auStack_28);
  std::operator+(awStack_18,awStack_30);
  std::operator+(awStack_10,L" ) ");
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  FUN_0342e660(awStack_10,auStack_40,auStack_38);
  std::operator+(awStack_10,awStack_20);
  FUN_05476c50(awStack_10);
  Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x1d8),awStack_18);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(auStack_28);
  FUN_05476c50(awStack_30);
  FUN_05476c50(auStack_38);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::updateCountdownText() */

void __thiscall WorldMap_EventBar::updateCountdownText(WorldMap_EventBar *this)

{
  int iVar1;
  StringHelper *this_00;
  PrimeTextWidget *this_01;
  wstring awStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  if (iVar1 != 6) {
    if (iVar1 - 7U < 2) {
      updateRiftCountdownText(this);
    }
    else {
      this_00 = (StringHelper *)0x0;
      if (iVar1 == 3) {
        this_00 = (StringHelper *)EA::Thread::GetModuleHandleFromAddress(this);
      }
      this_01 = *(PrimeTextWidget **)(this + 0x1d8);
      if (this_01 != (PrimeTextWidget *)0x0) {
        StringHelper::ConvertTimeToHMSString(this_00,(long)this_00);
        Sexy::PrimeTextWidget::SetText(this_01,awStack_10);
        FUN_05476c50(awStack_10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_EventBar::drawCountdown(Sexy::Graphics*) */

void __thiscall WorldMap_EventBar::drawCountdown(WorldMap_EventBar *this,Graphics *param_1)

{
  long *plVar1;
  
  if (2 < *(uint *)(this + 0x1b0)) {
    updateCountdownText(this);
    plVar1 = *(long **)(this + 0x1d8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x128))(plVar1,param_1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::updateRiftText() */

void __thiscall WorldMap_EventBar::updateRiftText(WorldMap_EventBar *this)

{
  char cVar1;
  Toggles *this_00;
  StringHelper *this_01;
  long extraout_x1;
  PrimeTextWidget *this_02;
  undefined1 auVar2 [12];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(RiftUtils **)(this + 0x1c8) != (RiftUtils *)0x0) {
    RiftUtils::GetCurrentRiftEventTitle(*(RiftUtils **)(this + 0x1c8));
    auVar2 = RiftUtils::GetCurrentSeasonTimeRemaining();
    StringHelper::ToTimeString((StringHelper *)&DAT_00000004,(float)auVar2._0_8_,auVar2._8_4_);
    TodStringTranslate(L"[RIFT_WORLD_TITLE]");
    FUN_0342e660(awStack_20,awStack_28,auStack_30);
    this_02 = *(PrimeTextWidget **)(this + 0x1c8);
    std::operator+(awStack_38,L" - ");
    std::operator+(awStack_18,awStack_20);
    Sexy::PrimeTextWidget::SetText(this_02,awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
  }
  if ((*(int *)(this + 0x1b0) == 8) && (*(long *)(this + 0x1e8) != 0)) {
    this_00 = (Toggles *)Toggles::GetInstance();
    std::string::string((string *)awStack_10,"RiftZombossAvailabiltyTimer");
    cVar1 = Toggles::IsEnabled(this_00,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    if (cVar1 != '\0') {
      FUN_05476574(awStack_28);
      this_01 = (StringHelper *)RiftUtils::GetZombossUnlockedTimeRemaining();
      if ((long)this_01 < 1) {
        FUN_054772c4(awStack_28,L"[EXPIRED]");
      }
      else {
        TodStringTranslate(L"[RIFT_WORLD_TITLE]");
        StringHelper::ConvertTimeToHMString(this_01,extraout_x1);
        TodReplaceString(awStack_20,L"{DURATION}",awStack_18);
        FUN_054766c8(awStack_28,(string *)awStack_10);
        FUN_05476c50((string *)awStack_10);
        FUN_05476c50(awStack_18);
        FUN_05476c50(awStack_20);
      }
      Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x1e8),awStack_28);
      FUN_05476c50(awStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_EventBar::SetZPSPlaying(bool) */

void __thiscall WorldMap_EventBar::SetZPSPlaying(WorldMap_EventBar *this,bool param_1)

{
  AdaptorZPSMeter *pAVar1;
  
  pAVar1 = Sexy::RtObject::Cast<AdaptorZPSMeter>(*(RtObject **)(this + 0x1f0));
  FUN_03693050(pAVar1 + 0x14c,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::createRiftHowToPlayButton(std::wstring&) */

void WorldMap_EventBar::createRiftHowToPlayButton(wstring *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  AdaptorZPSMeter *this;
  PVZ2UIButton *this_00;
  float fVar4;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0369304c(*(undefined4 *)(param_1 + 0x38));
  iVar2 = FUN_03693134(0xe6);
  iVar1 = iVar1 - iVar2;
  if (*(RtObject **)(param_1 + 0x1f0) != (RtObject *)0x0) {
    this = Sexy::RtObject::Cast<AdaptorZPSMeter>(*(RtObject **)(param_1 + 0x1f0));
    fVar4 = (float)AdaptorZPSMeter::GetLeftPosition(this);
    iVar1 = FUN_03693134(0x30);
    iVar2 = FUN_03693134(0x1c);
    iVar1 = (int)((fVar4 - (float)iVar1) - (float)iVar2);
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,3,(ButtonListener *)(param_1 + 0x168),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aac1a8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06aac150,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  iVar2 = FUN_03693134(0x30);
  iVar3 = FUN_03693134(0x28);
  Sexy::Insets::Insets(aIStack_40,iVar1 - iVar2 / 2,iVar3,iVar2,iVar2);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  *(PVZ2UIButton **)(param_1 + 0x1e0) = this_00;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::ShowZombossLevelSetupScreenOne() */

void __thiscall WorldMap_EventBar::ShowZombossLevelSetupScreenOne(WorldMap_EventBar *this)

{
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftUtils::SetZombossRewardRatio(1.0);
  lVar1 = RiftUtils::GetCurrentEventProps();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartRiftLevelCallback);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<WorldMap_EventBar,void(WorldMap_EventBar::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  RiftUtils::ShowZombossLevelSetupScreen((string *)(lVar1 + 0x50),aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::ShowZombossLevelSetupScreenTwo() */

void __thiscall WorldMap_EventBar::ShowZombossLevelSetupScreenTwo(WorldMap_EventBar *this)

{
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftUtils::SetZombossRewardRatio(2.0);
  lVar1 = RiftUtils::GetCurrentEventProps();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartRiftLevelCallback);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<WorldMap_EventBar,void(WorldMap_EventBar::*)(std::string_const&)>(aDStack_38,aCStack_50)
  ;
  RiftUtils::ShowZombossLevelSetupScreen((string *)(lVar1 + 0x50),aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::WorldMap_EventBar() */

void __thiscall WorldMap_EventBar::WorldMap_EventBar(WorldMap_EventBar *this)

{
  undefined *this_00;
  undefined8 uVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x168));
  *(undefined ***)this = &PTR_GetClass_0667d520;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_EventBar_0667d6c8;
  *(undefined ***)(this + 0x168) = &PTR_ButtonPress_0667d6f8;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac120);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac120);
  *(undefined4 *)(this + 0x180) = 0;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac120);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac120);
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac120);
  this[0x1a0] = (WorldMap_EventBar)0x0;
  this[0x1a8] = (WorldMap_EventBar)0x0;
  this[0x1aa] = (WorldMap_EventBar)0x0;
  this[0x1ab] = (WorldMap_EventBar)0x0;
  this[0x1ac] = (WorldMap_EventBar)0x0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 0x200) = 0xffffffff;
  uVar1 = Sexy::SexyTime((Sexy *)0xffffffff);
  *(undefined8 *)(this + 0x1f8) = uVar1;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAppResumeFocus);
  Sexy::Delegate0::Delegate0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::AppResumeFocus,aDStack_38);
  DAT_06aac210 = 0;
  DAT_06aac1d0 = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_EventBar::StaticNew() */

WorldMap_EventBar * WorldMap_EventBar::StaticNew(void)

{
  WorldMap_EventBar *this;
  
  this = ::operator_new(0x208);
  WorldMap_EventBar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::createUnchartedBirthdayEventBar() */

void __thiscall WorldMap_EventBar::createUnchartedBirthdayEventBar(WorldMap_EventBar *this)

{
  PVZ2UnchartedModeUtils *this_00;
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  this[0x1a0] = (WorldMap_EventBar)0x0;
  local_8 = ___stack_chk_guard;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aabfe8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  *(undefined4 *)(this + 0x180) = 0;
  UIWidget::GetDrawRect();
  this[0x1a8] = (WorldMap_EventBar)0x0;
  *(undefined4 *)(this + 0x1c4) = local_10;
  this_00 = (PVZ2UnchartedModeUtils *)FUN_05476574(awStack_20);
  PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayDescription(this_00);
  createUnchartedBirthdayText(this,awStack_20,(wstring *)aRStack_18);
  FUN_05476c50(aRStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::createRiftEventBar() */

void __thiscall WorldMap_EventBar::createRiftEventBar(WorldMap_EventBar *this)

{
  AdaptorZPSMeter *this_00;
  RiftUtils *pRVar1;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x1a0] = (WorldMap_EventBar)0x0;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aabfe8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  *(undefined4 *)(this + 0x180) = 0;
  UIWidget::GetDrawRect();
  this[0x1a8] = (WorldMap_EventBar)0x0;
  *(undefined4 *)(this + 0x1c4) = local_10;
  this_00 = ::operator_new(0x150);
  AdaptorZPSMeter::AdaptorZPSMeter(this_00);
  pRVar1 = (RiftUtils *)HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  *(AdaptorZPSMeter **)(this + 0x1f0) = this_00;
  pRVar1 = (RiftUtils *)RiftUtils::GetCurrentRiftEventTitle(pRVar1);
  RiftUtils::GetCurrentRiftDescription(pRVar1);
  createRiftText(this,awStack_28,awStack_20);
  FUN_05478178(aRStack_18,&DAT_057055c0,auStack_30);
  nop();
  createRiftHowToPlayButton((wstring *)this);
  FUN_05476c50(aRStack_18);
  FUN_05476c50(awStack_20);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::drawRiftSeedPacket(Sexy::Graphics*) */

void __thiscall WorldMap_EventBar::drawRiftSeedPacket(WorldMap_EventBar *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  SeedPacketUtils *pSVar4;
  PacketRenderData *pPVar5;
  Image *pIVar6;
  GraphicsAutoState aGStack_198 [8];
  string asStack_190 [8];
  PacketRenderData aPStack_188 [384];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_198,param_1);
  iVar2 = FUN_03693134(2);
  iVar3 = FUN_03693134(0xfffffffe);
  Sexy::Graphics::Translate(param_1,iVar2,iVar3);
  RiftUtils::GetLimitedPlantId();
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  cVar1 = FUN_0547419c(asStack_190);
  if (cVar1 == '\0') {
    pSVar4 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    pPVar5 = (PacketRenderData *)
             SeedPacketUtils::GetPlantPacketRenderData(pSVar4,asStack_190,-1,-1,-1);
    PacketRenderData::PacketRenderData(aPStack_188,pPVar5);
    pSVar4 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    SeedPacketUtils::DrawPacket(pSVar4,param_1,aPStack_188,false,-1,false,false);
    PacketRenderData::~PacketRenderData(aPStack_188);
  }
  else {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06aac0c0);
    pIVar6 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_188);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_188);
  }
  std::string::~string(asStack_190);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_198);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::drawRiftExtras(Sexy::Graphics*) */

void __thiscall WorldMap_EventBar::drawRiftExtras(WorldMap_EventBar *this,Graphics *param_1)

{
  long *plVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b0) - 7U < 2) {
    updateRiftText(this);
    plVar1 = *(long **)(this + 0x1e8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x128))(plVar1,param_1);
    }
    if (*(long *)(this + 0x1e0) != 0) {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
      Sexy::Graphics::Translate
                (param_1,*(int *)(*(long *)(this + 0x1e0) + 0x48),
                 *(int *)(*(long *)(this + 0x1e0) + 0x4c));
      (**(code **)(**(long **)(this + 0x1e0) + 0x128))(*(long **)(this + 0x1e0),param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
    }
    drawRiftSeedPacket(this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::setEventType(WorldMap_EventBar::EventBarType) */

void __thiscall WorldMap_EventBar::setEventType(WorldMap_EventBar *this,int param_2)

{
  undefined *puVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PinataStyleChooser *this_01;
  string *__n;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((DAT_06aac210 != '\0') || (*(int *)(this + 0x1b0) != param_2)) {
    *(undefined4 *)(this + 0x1a4) = 0xffffffe4;
    this[0x1a0] = (WorldMap_EventBar)0x0;
    this[0x1a8] = (WorldMap_EventBar)0x0;
    this[0x1a9] = (WorldMap_EventBar)0x0;
    *(int *)(this + 0x1b0) = param_2;
    DAT_06aac210 = '\0';
    __n = asStack_10;
    std::string::string(asStack_28,"");
    nop();
    switch(param_2) {
    case 0:
    case 1:
    case 10:
      deleteAllText(this);
      std::string::append(asStack_28,"LODNone",(size_t)__n);
      cVar2 = FUN_0547419c(asStack_28);
      break;
    case 2:
      nop();
      std::string::append(asStack_28,"LODYeti",(size_t)__n);
      cVar2 = FUN_0547419c(asStack_28);
      break;
    default:
      cVar2 = FUN_0547419c(asStack_28);
      break;
    case 7:
    case 8:
      createRiftEventBar(this);
      std::string::append(asStack_28,"Rift",(size_t)__n);
      cVar2 = FUN_0547419c(asStack_28);
      break;
    case 9:
      createUnchartedBirthdayEventBar(this);
      std::string::append(asStack_28,"Uncharted_Birthday",(size_t)__n);
      cVar2 = FUN_0547419c(asStack_28);
    }
    if (cVar2 == '\0') {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)PinataStyleChooserFactory::GetInstance();
      this_01 = (PinataStyleChooser *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_end(this_00);
      PinataStyleChooser::GetHolidayName(this_01);
      puVar1 = gMessageRouter;
      FUN_05475d88(asStack_18,asStack_28);
      FUN_05475d88(asStack_10,asStack_20);
      MessageRouter::
      Broadcast<std::string_const&,std::string_const&,int,std::string,std::string,int>
                ((MessageRouter *)puVar1,Message::WorldMapEventBarImpression,asStack_18,asStack_10,
                 0xffffffff);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
    }
    std::string::~string(asStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap_EventBar::UpdateEventType() */

void WorldMap_EventBar::UpdateEventType(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  void *in_x0;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  long lVar6;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  iVar3 = GetBannerTypeOverride();
  if (iVar3 != 0) {
    GetBannerTypeOverride();
    setEventType();
    return;
  }
  bVar1 = canUpdateEventType();
  if (bVar1 != 0) {
    cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)(ulong)bVar1,(wchar16 *)0x1,in_x2,in_x3,in_x4);
    if (cVar2 != '\0') {
      pwVar4 = (wchar16 *)LevelOfTheDay::GetSystem();
      pwVar5 = (wchar16 *)ProfileUtils::Profile();
      cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar4,pwVar5,(LineBreakCategory *)0x0,in_x3,in_x4);
      if ((cVar2 != '\0') && (lVar6 = EA::Thread::GetModuleHandleFromAddress(in_x0), 0 < lVar6))
      goto LAB_036958e4;
    }
    setEventType();
    return;
  }
LAB_036958e4:
  setEventType();
  return;
}


/* WorldMap_EventBar::onUpdate() */

void __thiscall WorldMap_EventBar::onUpdate(WorldMap_EventBar *this)

{
  byte bVar1;
  CrazyNPCManager *this_00;
  WorldMap_EventBar WVar2;
  
  UpdateEventType();
  WVar2 = (WorldMap_EventBar)0x0;
  if (*(int *)(this + 0x1b0) != 1) {
    this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    bVar1 = CrazyNPCManager::IsNarrationActive(this_00);
    WVar2 = (WorldMap_EventBar)(bVar1 ^ 1);
  }
  this[0x1aa] = WVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::drawBackground(Sexy::Graphics*, Sexy::RtWeakPtr<Sexy::Image>,
   Sexy::RtWeakPtr<Sexy::Image>, PinataStyleChooser::EventBackgroundDraw, int) */

void __thiscall
WorldMap_EventBar::drawBackground
          (WorldMap_EventBar *this,Graphics *param_1,RtMixedPtrBase *param_3,RtMixedPtrBase *param_4
          ,uint param_5,int param_6)

{
  RtMixedPtrBase *this_00;
  WorldMap_EventBar WVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SalesProgressBar *pSVar6;
  LotteryResultProgressBar *pLVar7;
  Image *pIVar8;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_4);
  if ((cVar2 != '\0') && (param_5 - 1 < 2)) {
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_18,param_1);
    if (param_5 == 2) {
      iVar4 = FUN_03693134(0xfffffffc);
    }
    else {
      pSVar6 = (SalesProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aabfe8);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar6);
      pSVar6 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
      iVar4 = FUN_03693134(0xfffffff8);
      iVar4 = (iVar5 - iVar3) + iVar4;
    }
    if (this[0x1ac] != (WorldMap_EventBar)0x0) {
      iVar5 = param_6;
      if (this[0x1a9] != (WorldMap_EventBar)0x0) {
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x188));
        if (cVar2 != '\0') {
          pLVar7 = (LotteryResultProgressBar *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
          iVar3 = FUN_03693134(6);
          iVar5 = param_6 + (iVar5 - iVar3);
        }
      }
      pSVar6 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
      iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
      Sexy::Graphics::SetClipRect(param_1,0,iVar4,iVar5,iVar3);
    }
    iVar5 = 0;
    if (0 < param_6) {
      do {
        pIVar8 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
        Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5,iVar4);
        pLVar7 = (LotteryResultProgressBar *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_4);
        iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
        iVar5 = iVar5 + iVar3;
      } while (iVar5 < param_6);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_18);
  }
  iVar4 = 0;
  cVar2 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if ((cVar2 == '\0') || ((param_5 & 0xfffffffd) != 0)) {
    WVar1 = this[0x1a9];
  }
  else {
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aabfe8);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar6);
    pSVar6 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
    iVar4 = FUN_03693134(0xfffffff8);
    iVar4 = (iVar5 - iVar3) + iVar4;
    UIWidget::GetDrawRect();
    local_28 = param_5 & 0xfffffffd;
    local_24 = iVar4;
    local_20 = param_6;
    pSVar6 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    local_1c = SalesProgressBar::GetCurrentLevel(pSVar6);
    pLVar7 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pSVar6 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar6);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar5,iVar3);
    pIVar8 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    Sexy::Graphics::DrawImage(param_1,pIVar8,(TRect *)&local_28,(TRect *)aIStack_18);
    WVar1 = this[0x1a9];
  }
  if (WVar1 != (WorldMap_EventBar)0x0) {
    this_00 = (RtMixedPtrBase *)(this + 0x188);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      if (param_5 == 1) {
        pIVar8 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar5 = FUN_03693134(0xfffffff8);
        Sexy::Graphics::DrawImage(param_1,pIVar8,param_6,iVar5 + iVar4);
      }
      else {
        pIVar8 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Sexy::Graphics::DrawImage(param_1,pIVar8,param_6,iVar4);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::showRiftOverNotice() */

void __thiscall WorldMap_EventBar::showRiftOverNotice(WorldMap_EventBar *this)

{
  LawnApp *pLVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PVZ2UIDialog *this_00;
  char *pcVar5;
  wchar_t *pwVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = RiftUtils::GetZombossUnlockedTimeRemaining();
  if ((lVar4 < 1) &&
     (lVar4 = RiftUtils::GetCurrentRiftEventTimeRemaining(), pLVar1 = gLawnApp, 0 < lVar4)) {
    iVar2 = FUN_03693134(0x1ea);
    iVar3 = FUN_03693134(0x118);
    this_00 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[RIFT_ZOMBOSS_OVER_HEADER]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pwVar6 = L"[RIFT_ZOMBOSS_OVER_DESCRIPTION]";
  }
  else {
    pLVar1 = gLawnApp;
    iVar2 = FUN_03693134(0x1ea);
    iVar3 = FUN_03693134(0x118);
    this_00 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[RIFT_OVER_HEADER]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_00,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pwVar6 = L"[RIFT_OVER_DESCRIPTION]";
  }
  FUN_05478178(awStack_50,pwVar6,auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_00,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftOverAcknowledged);
  Sexy::Delegate0::Delegate0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::doRiftPlayZomboss() */

void __thiscall WorldMap_EventBar::doRiftPlayZomboss(WorldMap_EventBar *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  UIRiftZombossRewardSelect *pUVar5;
  PVZ2UIDialog *pPVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = RiftUtils::GetCurrentEventProps();
  if (lVar3 == 0) {
    cVar1 = '\0';
  }
  else {
    lVar4 = RiftUtils::GetCurrentRiftEventTimeRemaining();
    if ((lVar4 < 1) || (lVar4 = RiftUtils::GetZombossUnlockedTimeRemaining(), lVar4 < 1)) {
      cVar1 = '\x01';
      showRiftOverNotice(this);
    }
    else {
      cVar1 = RiftUtils::PlayerCanPlay();
      this_00 = gLawnApp;
      if (cVar1 == '\0') {
        cVar1 = '\x01';
        FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
        FUN_05478178(awStack_50,L"[RIFT_SEASON_END_TIP]",auStack_60);
        pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,1);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        iVar2 = RiftUtils::GetBossRewardRatio();
        if (iVar2 == 0) {
          pUVar5 = (UIRiftZombossRewardSelect *)
                   UISingletonDialog<UIRiftZombossRewardSelect>::ShowDialog();
          if (pUVar5 != (UIRiftZombossRewardSelect *)0x0) {
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ShowZombossLevelSetupScreenOne);
            Sexy::Delegate0::Delegate0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>
                      (aDStack_38,awStack_50);
            UIRiftZombossRewardSelect::SetFunctionOne(pUVar5,aDStack_38);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ShowZombossLevelSetupScreenTwo);
            Sexy::Delegate0::Delegate0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>
                      (aDStack_38,awStack_50);
            UIRiftZombossRewardSelect::SetFunctionTwo(pUVar5,aDStack_38);
          }
        }
        else {
          RiftUtils::SetZombossRewardRatio((float)iVar2);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onStartRiftLevelCallback);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<WorldMap_EventBar,void(WorldMap_EventBar::*)(std::string_const&)>
                    ((Delegate1<std::string_const&> *)aDStack_38,awStack_50);
          RiftUtils::ShowZombossLevelSetupScreen
                    ((string *)(lVar3 + 0x50),(Delegate1<std::string_const&> *)aDStack_38);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::onStartRiftLevelCallback(std::string const&) */

void __thiscall WorldMap_EventBar::onStartRiftLevelCallback(WorldMap_EventBar *this,string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  WorldMap *pWVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c(param_1);
  Sexy::StrFormat("WorldMap::onStartRiftLevel - Starting zomboss level from rift dialog callback: %s"
                  ,asStack_10,uVar1);
  nop();
  std::string::~string(asStack_10);
  lVar2 = RiftUtils::GetCurrentRiftEventTimeRemaining();
  if ((lVar2 < 1) || (lVar2 = RiftUtils::GetZombossUnlockedTimeRemaining(), lVar2 < 1)) {
    showRiftOverNotice(this);
  }
  else {
    pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToGameLevel(pWVar3,param_1,5,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::drawUnchartedBirthdayExtras(Sexy::Graphics*) */

void __thiscall
WorldMap_EventBar::drawUnchartedBirthdayExtras(WorldMap_EventBar *this,Graphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b0) == 9) {
    uVar1 = PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayHeadshotPrizeId();
    iVar2 = FUN_03693134(0xf);
    iVar3 = FUN_03693134(0xfffffffb);
    iVar4 = FUN_03693134(0x46);
    Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar4,iVar4);
    FUN_036961dc(param_1,uVar1,aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_EventBar::Draw(WorldMap_EventBar *this,Graphics *param_1)

{
  char cVar1;
  long *plVar2;
  RtWeakPtr<Sexy::SoundResource> *pRVar3;
  RtWeakPtr<Sexy::SoundResource> *pRVar4;
  LineBreakCategory *pLVar5;
  GraphicsAutoState aGStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1aa] != (WorldMap_EventBar)0x0) {
    UIWidget::Draw((Graphics *)this);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0x170));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x178));
    pLVar5 = (LineBreakCategory *)(ulong)*(uint *)(this + 0x180);
    pRVar4 = aRStack_10;
    drawBackground(this,param_1,aRStack_18,aRStack_10,pLVar5,*(undefined4 *)(this + 0x1c4));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 400));
    pRVar3 = aRStack_10;
    drawZombieLeft(this,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)this,(wchar16 *)param_1,(LineBreakCategory *)pRVar3,
                       (LineBreakCategory *)pRVar4,pLVar5);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x198));
      drawZombieRight(this,param_1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    drawPlayNowButton(this,param_1);
    plVar2 = *(long **)(this + 0x1c8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x128))(plVar2,param_1);
    }
    plVar2 = *(long **)(this + 0x1d0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x128))(plVar2,param_1);
    }
    drawCountdown(this,param_1);
    drawRiftExtras(this,param_1);
    drawUnchartedBirthdayExtras(this,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_EventBar::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_EventBar::Draw(WorldMap_EventBar *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WorldMap_EventBar::IsMouseOver(int, int) */

undefined8 __thiscall
WorldMap_EventBar::IsMouseOver(WorldMap_EventBar *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (this[0x1aa] == (WorldMap_EventBar)0x0) {
    return 0;
  }
  uVar1 = UIWidget::IsMouseOver((UIWidget *)this,param_1,param_2);
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_EventBar::TryStartRiftZombossLevel() */

void __thiscall WorldMap_EventBar::TryStartRiftZombossLevel(WorldMap_EventBar *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  UIRiftZombossRewardSelect *pUVar5;
  PVZ2UIDialog *pPVar6;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar3 = RiftUtils::GetCurrentEventProps();
  if (lVar3 == 0) {
    cVar1 = '\0';
  }
  else {
    lVar4 = RiftUtils::GetCurrentRiftEventTimeRemaining();
    if ((lVar4 < 1) || (lVar4 = RiftUtils::GetZombossUnlockedTimeRemaining(), lVar4 < 1)) {
      cVar1 = '\x01';
      showRiftOverNotice(this);
    }
    else {
      cVar1 = RiftUtils::PlayerCanPlay();
      this_00 = gLawnApp;
      if (cVar1 == '\0') {
        cVar1 = '\x01';
        FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
        FUN_05478178(awStack_50,L"[RIFT_SEASON_END_TIP]",auStack_60);
        pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,1);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        iVar2 = RiftUtils::GetBossRewardRatio();
        if (iVar2 == 0) {
          pUVar5 = (UIRiftZombossRewardSelect *)
                   UISingletonDialog<UIRiftZombossRewardSelect>::ShowDialog();
          if (pUVar5 != (UIRiftZombossRewardSelect *)0x0) {
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ShowZombossLevelSetupScreenOne);
            Sexy::Delegate0::Delegate0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>
                      (aDStack_38,awStack_50);
            UIRiftZombossRewardSelect::SetFunctionOne(pUVar5,aDStack_38);
            Sexy::
            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                      ((ReceivedDataCallback *)this,ShowZombossLevelSetupScreenTwo);
            Sexy::Delegate0::Delegate0<WorldMap_EventBar,void(WorldMap_EventBar::*)()>
                      (aDStack_38,awStack_50);
            UIRiftZombossRewardSelect::SetFunctionTwo(pUVar5,aDStack_38);
          }
        }
        else {
          RiftUtils::SetZombossRewardRatio((float)iVar2);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onStartRiftLevelCallback);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<WorldMap_EventBar,void(WorldMap_EventBar::*)(std::string_const&)>
                    ((Delegate1<std::string_const&> *)aDStack_38,awStack_50);
          RiftUtils::ShowZombossLevelSetupScreen
                    ((string *)(lVar3 + 0x50),(Delegate1<std::string_const&> *)aDStack_38);
        }
      }
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

