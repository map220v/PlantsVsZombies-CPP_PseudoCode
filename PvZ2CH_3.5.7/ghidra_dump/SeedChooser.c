// Class: SeedChooser


/* SeedChooser::onLandInBank(ChooserPacketData&) */

void SeedChooser::onLandInBank(ChooserPacketData *param_1)

{
  return;
}


/* SeedChooser::onCheatDisabled() */

void __thiscall SeedChooser::onCheatDisabled(SeedChooser *this)

{
  (**(code **)(*(long *)this + 0x200))();
  return;
}


/* SeedChooser::onNarrationFinished() */

void SeedChooser::onNarrationFinished(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::initLoadingResourcesGroupList() */

void __thiscall SeedChooser::initLoadingResourcesGroupList(SeedChooser *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_SeedChooser");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_Card_Plant_BG");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::ButtonPress(int) */

void __thiscall SeedChooser::ButtonPress(SeedChooser *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UIWidget::SetVisible((UIWidget *)this,false);
  return;
}


/* non-virtual thunk to SeedChooser::ButtonPress(int) */

void __thiscall SeedChooser::ButtonPress(SeedChooser *this,int param_1)

{
  ButtonPress(this + -0x1a0,param_1);
  return;
}


/* SeedChooser::onRepickButtonPressed() */

void SeedChooser::onRepickButtonPressed(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::onSlideOutFinished() */

void SeedChooser::onSlideOutFinished(void)

{
  char cVar1;
  UIWidget *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar2 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = UIWidget::IsVisible(pUVar2);
  if (cVar1 != '\0') {
    Board::OnSeedChooserDone(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_10,"UIPowerupHolder");
    pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar2 != (UIWidget *)0x0) {
      UIWidget::ClearPositionOffsetOverride(pUVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::onPanBoardRightFinished() */

void __thiscall SeedChooser::onPanBoardRightFinished(SeedChooser *this)

{
  Board::PopAnimationMgr(*(Board **)(gLawnApp + 0x9f0));
  SlidingWidget::SlideIn((SlidingWidget *)this);
  return;
}


/* SeedChooser::onMsgError(int) */

void SeedChooser::onMsgError(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
  if (*(char *)(uVar1 + 0x304) != '\0') {
    *(undefined1 *)(uVar1 + 0x304) = 0;
    BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  }
  *(undefined4 *)(uVar1 + 0x30c) = 0;
  *(undefined4 *)(uVar1 + 0x308) = 0xffffffff;
  return;
}


/* SeedChooser::OnOrientationChanged() */

void __thiscall SeedChooser::OnOrientationChanged(SeedChooser *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  
  iVar4 = 0;
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 != '\0') {
    iVar4 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
  }
  if (*(long *)(this + 0x1f8) != 0) {
    iVar2 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar3 = EA::Text::PolygonFont::GetFontType();
    if (iVar2 == iVar3) {
      plVar5 = *(long **)(this + 0x1f8);
      (**(code **)(*plVar5 + 0x198))
                (plVar5,iVar4 + (int)plVar5[9],*(undefined4 *)((long)plVar5 + 0x4c),(int)plVar5[10],
                 *(undefined4 *)((long)plVar5 + 0x54));
      return;
    }
    iVar2 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar3 = Reflection::RFunctionType::StaticGetTypeCategory();
    if (iVar2 == iVar3) {
      plVar5 = *(long **)(this + 0x1f8);
      (**(code **)(*plVar5 + 0x198))
                (plVar5,(int)plVar5[9] - iVar4,*(undefined4 *)((long)plVar5 + 0x4c),(int)plVar5[10],
                 *(undefined4 *)((long)plVar5 + 0x54));
      return;
    }
  }
  return;
}


/* SeedChooser::onPlantAccessoryActionComplete() */

void __thiscall SeedChooser::onPlantAccessoryActionComplete(SeedChooser *this)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x1b0);
  uVar1 = *(uint *)(this + 0x318);
  uVar2 = FUN_0441b350(uVar3,*(undefined8 *)(this + 0x1b8));
  if (uVar1 < uVar2) {
    uVar3 = FUN_0441b35c(uVar3,(ulong)uVar1);
    (**(code **)(*(long *)this + 0x1f8))(this,uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::StaticClassInit() */

void SeedChooser::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"SeedChooser");
    (*pcVar2)(plVar1,asStack_10,FUN_0441e57c,0x350,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::StaticGetClass() */

long * SeedChooser::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedChooser::GetClass() const */

long * SeedChooser::GetClass(void)

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
  (*pcVar3)(plVar1,"SeedChooser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::drawTranslatedWidget(Sexy::Graphics*, Sexy::Widget*) const */

void __thiscall
SeedChooser::drawTranslatedWidget(SeedChooser *this,Graphics *param_1,Widget *param_2)

{
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (Widget *)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
    Sexy::Graphics::Translate(param_1,*(int *)(param_2 + 0x48),*(int *)(param_2 + 0x4c));
    (**(code **)(*(long *)param_2 + 0x128))(param_2,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::drawFavoriteButton(Sexy::Graphics*) const */

void __thiscall SeedChooser::drawFavoriteButton(SeedChooser *this,Graphics *param_1)

{
  drawTranslatedWidget(this,param_1,*(Widget **)(this + 0x208));
  return;
}


/* SeedChooser::drawAccessoryButton(Sexy::Graphics*) const */

void __thiscall SeedChooser::drawAccessoryButton(SeedChooser *this,Graphics *param_1)

{
  drawTranslatedWidget(this,param_1,*(Widget **)(this + 0x210));
  return;
}


/* SeedChooser::findImitaterChooserPacketIndex() const */

ulong __thiscall SeedChooser::findImitaterChooserPacketIndex(SeedChooser *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x1b0);
  iVar1 = FUN_0441b350(uVar5,*(undefined8 *)(this + 0x1b8));
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (iVar1 <= (int)uVar3) {
      return 0xffffffff;
    }
    lVar2 = FUN_0441b3c4(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*(char *)(lVar2 + 0x34) == '\0');
  return uVar4;
}


/* SeedChooser::CloseSeedChooserArtifactSelectWidget() */

void __thiscall SeedChooser::CloseSeedChooserArtifactSelectWidget(SeedChooser *this)

{
  if (*(long *)(this + 0x240) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x240))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x240));
    *(undefined8 *)(this + 0x240) = 0;
  }
  return;
}


/* SeedChooser::CloseSeedChooserHeroPlantSelectWidget() */

void __thiscall SeedChooser::CloseSeedChooserHeroPlantSelectWidget(SeedChooser *this)

{
  if (*(long *)(this + 0x248) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x248))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x248));
    *(undefined8 *)(this + 0x248) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::getBattleArrayType() */

void __thiscall SeedChooser::getBattleArrayType(SeedChooser *this)

{
  undefined8 uVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_10,uVar1);
  lVar2 = FUN_05474374(asStack_10,"festival_lv1",0);
  if (lVar2 == -1) {
    lVar2 = FUN_05474374(asStack_10,"festival_lv2",0);
    if (lVar2 == -1) {
      lVar2 = FUN_05474374(asStack_10,"festival_lv3",0);
      if (lVar2 == -1) {
        *(undefined4 *)(this + 0x300) = 0;
      }
      else {
        *(undefined4 *)(this + 0x300) = 3;
      }
    }
    else {
      *(undefined4 *)(this + 0x300) = 1;
    }
  }
  else {
    *(undefined4 *)(this + 0x300) = 2;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::sendBorrowRequestBeforeFinalize() */

void __thiscall SeedChooser::sendBorrowRequestBeforeFinalize(SeedChooser *this)

{
  if (*(int *)(this + 0x308) == -1) {
    (**(code **)(*(long *)this + 0x1e8))();
  }
  else if (this[0x304] == (SeedChooser)0x0) {
    this[0x304] = (SeedChooser)0x1;
    BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
    return;
  }
  return;
}


/* SeedChooser::onPlayButtonPressed() */

void __thiscall SeedChooser::onPlayButtonPressed(SeedChooser *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  sendBorrowRequestBeforeFinalize(this);
  return;
}


/* SeedChooser::AutoSelectSeedsAndFinalize() */

void __thiscall SeedChooser::AutoSelectSeedsAndFinalize(SeedChooser *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = *(undefined8 *)(this + 0x1b0);
  iVar1 = FUN_0441b350(uVar4,*(undefined8 *)(this + 0x1b8));
  if (0 < iVar1) {
    do {
      if (this[0x1e4] == this[0x1e7]) break;
      lVar2 = FUN_0441b35c(uVar4,lVar3);
      iVar1 = *(int *)(lVar2 + 0x30);
      if (((iVar1 == 3) || (iVar1 == 6)) || (iVar1 != 0)) {
        (**(code **)(*(long *)this + 0x1f8))(this,lVar2);
      }
      else {
        *(int *)(this + 0x318) = (int)lVar3;
        (**(code **)(*(long *)this + 0x1e0))(this);
      }
      lVar3 = lVar3 + 1;
      uVar4 = *(undefined8 *)(this + 0x1b0);
      iVar1 = FUN_0441b350(uVar4,*(undefined8 *)(this + 0x1b8));
    } while ((int)lVar3 < iVar1);
  }
  sendBorrowRequestBeforeFinalize(this);
  return;
}


/* SeedChooser::SetSeedPacketType(Sexy::RtName) */

void SeedChooser::SetSeedPacketType(long param_1)

{
  FUN_0441b228(param_1 + 800);
  return;
}


/* SeedChooser::SetSpecialSeedPacketType(Sexy::RtName) */

void SeedChooser::SetSpecialSeedPacketType(long param_1)

{
  FUN_0441b228(param_1 + 0x330);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::SetSeedBankProperties(SeedBankProperties const*) */

void __thiscall SeedChooser::SetSeedBankProperties(SeedChooser *this,SeedBankProperties *param_1)

{
  char cVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  RtName aRStack_38 [16];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  *(SeedBankProperties **)(this + 0x298) = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 != (SeedBankProperties *)0x0) {
    cVar1 = FUN_0547419c((Sexy *)(param_1 + 0x48));
    if (cVar1 == '\0') {
      Sexy::StringToWString((Sexy *)(param_1 + 0x48),extraout_x1);
      Sexy::RtName::RtName(aRStack_38,(wstring *)aRStack_18);
      FUN_05476c50(aRStack_18);
      Sexy::RtName::RtName(aRStack_18,aRStack_38);
      SetSeedPacketType(this,aRStack_18);
      Sexy::RtName::~RtName(aRStack_18);
      Sexy::StringToWString((Sexy *)(*(long *)(this + 0x298) + 0x50),extraout_x1_00);
      Sexy::RtName::RtName(aRStack_28,(wstring *)aRStack_18);
      FUN_05476c50(aRStack_18);
      Sexy::RtName::RtName(aRStack_18,aRStack_28);
      SetSpecialSeedPacketType(this,aRStack_18);
      Sexy::RtName::~RtName(aRStack_18);
      Sexy::RtName::~RtName(aRStack_28);
      Sexy::RtName::~RtName(aRStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::calcInfoCardRect() */

void SeedChooser::calcInfoCardRect(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long in_x0;
  Insets *in_x8;
  float fVar3;
  
  Sexy::Insets::Insets(in_x8);
  uVar1 = *(undefined8 *)(in_x0 + 0x2d8);
  *(undefined8 *)in_x8 = *(undefined8 *)(in_x0 + 0x2d0);
  *(undefined8 *)(in_x8 + 8) = uVar1;
  fVar3 = (float)FUN_0441bf54(0x41900000);
  *(int *)in_x8 = (int)(fVar3 + (float)*(int *)in_x8);
  fVar3 = (float)FUN_0441bf54(0x41700000);
  *(int *)(in_x8 + 4) = (int)(fVar3 + (float)*(int *)(in_x8 + 4));
  fVar3 = (float)FUN_0441bf54(0x42100000);
  *(int *)(in_x8 + 8) = (int)((float)*(int *)(in_x8 + 8) - fVar3);
  uVar2 = FUN_0441bf40(0xbc);
  *(undefined4 *)(in_x8 + 0xc) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::onPanBoardLeftFinished() */

void SeedChooser::onPanBoardLeftFinished(void)

{
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::PopAnimationMgr(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetClickable(this,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::findPlantTypeChooserPacketIndex(std::string const&) */

void __thiscall SeedChooser::findPlantTypeChooserPacketIndex(SeedChooser *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x1b0);
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  iVar3 = FUN_0441b350(uVar6,*(undefined8 *)(this + 0x1b8));
  if (0 < iVar3) {
    do {
      lVar4 = FUN_0441b35c(uVar6,uVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x28));
      if (cVar1 != '\0') {
        lVar4 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x28));
        SeedPacket::GetPlantType();
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
        if (cVar1 != '\0') {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          cVar1 = std::operator==((string *)(lVar4 + 8),param_1);
          if (cVar1 != '\0') {
            cVar1 = CustomLevelUtils::IsCustomLevel();
            if ((cVar1 != '\0') && (bVar2 = std::operator==(param_1,"minigame_imitater"), bVar2)) {
              lVar4 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar5);
              if (*(int *)(lVar4 + 0x30) != 7) goto LAB_0441cb74;
              *(undefined4 *)(lVar4 + 0x30) = 8;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            goto LAB_0441cb1c;
          }
        }
LAB_0441cb74:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x1b0);
      uVar7 = uVar5 & 0xffffffff;
      iVar3 = FUN_0441b350(uVar6,*(undefined8 *)(this + 0x1b8));
    } while ((int)uVar5 < iVar3);
  }
  uVar7 = 0xffffffff;
LAB_0441cb1c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::calcPacketPositionInBank(int, Sexy::SexyVector2&) */

void __thiscall
SeedChooser::calcPacketPositionInBank(SeedChooser *this,int param_1,SexyVector2 *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  UINewPVPTopZombieQueue *this_00;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank((Board *)gLawnApp[0x13e]);
  UINewPVPTopZombieQueue::gettItem(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  UIWidget::GetDrawRect();
  plVar1 = gLawnApp;
  pcVar5 = *(code **)(*gLawnApp + 0x360);
  *(float *)param_2 = (float)local_18;
  *(float *)(param_2 + 4) = (float)local_14;
  cVar2 = (*pcVar5)(plVar1);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar4 = EA::Text::PolygonFont::GetFontType();
    if (iVar3 == iVar4) {
      iVar3 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      *(float *)param_2 = *(float *)param_2 - (float)iVar3;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::calcPacketPositionInChooser(int, Sexy::SexyVector2&) */

void __thiscall
SeedChooser::calcPacketPositionInChooser(SeedChooser *this,int param_1,SexyVector2 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),0);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
  iVar4 = FUN_0441b298(*(undefined4 *)(lVar6 + 0x38));
  lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),0);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
  iVar5 = FUN_0441b29c(*(undefined4 *)(lVar6 + 0x3c));
  iVar2 = 0;
  if (DAT_06a8870c + 1 != 0) {
    iVar2 = (*(int *)(this + 0x2a8) - iVar4 * DAT_06a8870c) / (DAT_06a8870c + 1);
  }
  cVar3 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  iVar7 = param_1;
  if ((cVar3 != '\0') && (iVar1 = *(int *)(this + 0x348), iVar1 <= param_1)) {
    iVar7 = 0;
    if (DAT_06a8870c != 0) {
      iVar7 = iVar1 / DAT_06a8870c;
    }
    iVar1 = DAT_06a8870c - (iVar1 - iVar7 * DAT_06a8870c);
    iVar7 = 0;
    if (DAT_06a8870c != 0) {
      iVar7 = iVar1 / DAT_06a8870c;
    }
    iVar7 = (iVar1 - iVar7 * DAT_06a8870c) + param_1;
  }
  iVar1 = 0;
  if (DAT_06a8870c != 0) {
    iVar1 = iVar7 / DAT_06a8870c;
  }
  iVar4 = iVar2 + (iVar4 + iVar2) * (iVar7 - iVar1 * DAT_06a8870c) + DAT_06b07480;
  *(float *)(param_2 + 4) = (float)(iVar2 + (iVar5 + iVar2) * iVar1);
  *(float *)param_2 = (float)iVar4;
  cVar3 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar3 != '\0') && (*(int *)(this + 0x348) <= param_1)) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + (float)iVar5 * 0.33333334;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::updateImitaterChooserPacketState() */

void __thiscall SeedChooser::updateImitaterChooserPacketState(SeedChooser *this)

{
  long lVar1;
  SeedChooser SVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  SeedPacket *this_00;
  undefined4 uVar8;
  undefined8 uVar9;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = findImitaterChooserPacketIndex(this);
  if (-1 < iVar5) {
    lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)iVar5);
    if (*(int *)(lVar6 + 0x30) != 4) {
      SVar2 = this[0x1e4];
      bVar3 = SVar2 != (SeedChooser)0x0;
      if (SVar2 != (SeedChooser)0x0) {
        uVar9 = *(undefined8 *)(this + 0x1c8);
        lVar7 = 0;
        do {
          lVar1 = lVar7 + 1;
          lVar7 = FUN_0441b35c(uVar9,lVar7);
          if (*(char *)(lVar7 + 0x34) != '\0') {
            bVar3 = false;
          }
          lVar7 = lVar1;
        } while ((int)lVar1 < (int)(uint)(byte)SVar2);
      }
      if (bVar3) {
        lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),(long)(int)((byte)SVar2 - 1));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
        SeedPacket::GetPlantType();
        cVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)iVar5);
        uVar8 = 5;
        if (cVar4 == '\0') {
          uVar8 = 0;
        }
      }
      else {
        cVar4 = true;
        uVar8 = 5;
      }
      *(undefined4 *)(lVar6 + 0x30) = uVar8;
      this_00 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
      SeedPacket::SetDisabled(this_00,(bool)cVar4);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedChooser::ForceSelection(std::string const&) */

void __thiscall SeedChooser::ForceSelection(SeedChooser *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  PVPManager *pPVar5;
  string *psVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(this + 0x1b0);
  uVar7 = 0;
  lVar3 = FUN_0441b350(uVar8,*(undefined8 *)(this + 0x1b8));
  if (lVar3 != 0) {
    do {
      lVar3 = FUN_0441b35c(uVar8,uVar7);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar3 + 0x28));
      if (bVar1) {
        lVar3 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar7);
        pPVar5 = (PVPManager *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
        psVar6 = (string *)PVPManager::GetPVPMapDataList(pPVar5);
        cVar2 = std::operator==(psVar6,param_1);
        if (cVar2 == '\0') goto LAB_0441cfdc;
        cVar2 = CustomLevelUtils::IsCustomLevel();
        if ((cVar2 == '\0') || (bVar1 = std::operator==(param_1,"minigame_imitater"), !bVar1)) {
          lVar3 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar7);
LAB_0441d07c:
          (**(code **)(*(long *)this + 0x1e0))(this,lVar3);
          return;
        }
        uVar8 = *(undefined8 *)(this + 0x1b0);
        lVar3 = FUN_0441b35c(uVar8,uVar7);
        if (*(int *)(lVar3 + 0x30) == 8) {
          *(undefined4 *)(lVar3 + 0x30) = 0;
          goto LAB_0441d07c;
        }
      }
      else {
LAB_0441cfdc:
        uVar8 = *(undefined8 *)(this + 0x1b0);
      }
      uVar7 = uVar7 + 1;
      uVar4 = FUN_0441b350(uVar8,*(undefined8 *)(this + 0x1b8));
    } while (uVar7 < uVar4);
  }
  uVar7 = 0;
  do {
    uVar8 = *(undefined8 *)(this + 0x1c8);
    uVar4 = FUN_0441b350(uVar8,*(undefined8 *)(this + 0x1d0));
    if (uVar4 <= uVar7) {
      return;
    }
    lVar3 = FUN_0441b35c(uVar8,uVar7);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar3 + 0x28));
    if (bVar1) {
      lVar3 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),uVar7);
      pPVar5 = (PVPManager *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
      psVar6 = (string *)PVPManager::GetPVPMapDataList(pPVar5);
      cVar2 = std::operator==(psVar6,param_1);
      if (cVar2 != '\0') {
        uVar8 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),uVar7);
        (**(code **)(*(long *)this + 0x1e0))(this,uVar8);
        return;
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::refreshCurrentHeroPlant() */

void __thiscall SeedChooser::refreshCurrentHeroPlant(SeedChooser *this)

{
  char cVar1;
  int iVar2;
  NameMapperBase *this_00;
  undefined8 uVar3;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HeroPlantUtils::GetCurrentHeroPlant();
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_00,iVar2);
  if (cVar1 != '\0') {
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    Sexy::StringToUpper(aSStack_20,extraout_x1);
    std::operator+("IMAGE_UI_HEROPLANT_BUTTON_",asStack_18);
    uVar3 = StringHelper::ToImage(asStack_10,false);
    *(undefined8 *)(this + 0x260) = uVar3;
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string((string *)aSStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::showBuyPlantUI() */

void __thiscall SeedChooser::showBuyPlantUI(SeedChooser *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  TGPieceTableUI *this_01;
  RtObject *this_02;
  PlantNameMapperServerID *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x2f8);
  local_8 = ___stack_chk_guard;
  this_01 = (TGPieceTableUI *)UISingletonDialog<UISpringBuyPlant>::ShowDialog();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_02 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_02);
    if (!bVar1) {
      pPVar3 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      SeedPacket::GetPlantType();
      iVar2 = PlantNameMapperServerID::GetIdForType(pPVar3,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      TGPieceTableUI::SetMinChips(this_01,iVar2);
      UISpringBuyPlant::initUI((UISpringBuyPlant *)this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::touchAccessoryButton() */

void __thiscall SeedChooser::touchAccessoryButton(SeedChooser *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  RtObject *this_01;
  long lVar3;
  string *psVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x2f8);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_01);
    if (!bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      SeedPacket::GetPlantType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      FUN_05475d88(asStack_18,lVar3 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      psVar4 = (string *)UISingletonDialog<UINewPlantView_AccessoryPackage>::ShowDialog();
      UINewPlantView_AccessoryPackage::InitView(psVar4);
      std::string::~string(asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::OnMouseMove(int, int) */

void __thiscall SeedChooser::OnMouseMove(SeedChooser *this,int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  TPoint *pTVar6;
  int *piVar7;
  long lVar8;
  int local_1c;
  Point aPStack_18 [4];
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1f0] != (SeedChooser)0x0) goto LAB_0441d60c;
  cVar2 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar2 == '\0') {
LAB_0441d658:
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar4 = EA::Text::PolygonFont::GetFontType();
    if (iVar3 != iVar4) goto LAB_0441d658;
    iVar3 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
  }
  iVar4 = param_1 - iVar3;
  cVar2 = (**(code **)(**(long **)(this + 0x1f8) + 0x300))(*(long **)(this + 0x1f8),iVar4,param_2);
  if (cVar2 == '\0') {
    lVar8 = *(long *)(this + 0x1f8);
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x71) = 0;
  }
  else {
    lVar8 = *(long *)(this + 0x1f8);
    if (*(char *)(lVar8 + 0x6e) == '\0') {
      *(undefined1 *)(lVar8 + 0x70) = 1;
      *(undefined1 *)(lVar8 + 0x71) = 1;
    }
  }
  plVar5 = *(long **)(this + 0x208);
  if ((plVar5 != (long *)0x0) &&
     (cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,iVar4,param_2), cVar2 == '\0')) {
    lVar8 = *(long *)(this + 0x208);
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x71) = 0;
  }
  plVar5 = *(long **)(this + 0x210);
  if ((plVar5 != (long *)0x0) &&
     (cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,iVar4,param_2), cVar2 == '\0')) {
    lVar8 = *(long *)(this + 0x210);
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x71) = 0;
  }
  plVar5 = *(long **)(this + 0x218);
  if ((plVar5 != (long *)0x0) &&
     (cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,iVar4,param_2), cVar2 == '\0')) {
    lVar8 = *(long *)(this + 0x218);
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x71) = 0;
  }
  plVar5 = *(long **)(this + 0x220);
  if ((plVar5 != (long *)0x0) &&
     (cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,iVar4,param_2), cVar2 == '\0')) {
    lVar8 = *(long *)(this + 0x220);
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x71) = 0;
  }
  plVar5 = *(long **)(this + 0x228);
  if ((plVar5 != (long *)0x0) &&
     (cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,iVar4,param_2), cVar2 == '\0')) {
    lVar8 = *(long *)(this + 0x228);
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x71) = 0;
  }
  plVar5 = *(long **)(this + 0x230);
  if ((plVar5 != (long *)0x0) &&
     (cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,iVar4,param_2), cVar2 == '\0')) {
    lVar8 = *(long *)(this + 0x230);
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x71) = 0;
  }
  plVar5 = *(long **)(this + 0x200);
  if (plVar5 != (long *)0x0) {
    cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,iVar4,param_2);
    if (cVar2 == '\0') {
      lVar8 = *(long *)(this + 0x200);
      *(undefined1 *)(lVar8 + 0x70) = 0;
      *(undefined1 *)(lVar8 + 0x71) = 0;
    }
    else {
      lVar8 = *(long *)(this + 0x200);
      if (*(char *)(lVar8 + 0x6e) == '\0') {
        *(undefined1 *)(lVar8 + 0x70) = 1;
        *(undefined1 *)(lVar8 + 0x71) = 1;
      }
    }
  }
  plVar5 = *(long **)(this + 0x268);
  if (plVar5 != (long *)0x0) {
    cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,param_1,param_2);
    if (cVar2 == '\0') {
      lVar8 = *(long *)(this + 0x268);
      *(undefined1 *)(lVar8 + 0x70) = 0;
      *(undefined1 *)(lVar8 + 0x71) = 0;
    }
    else {
      lVar8 = *(long *)(this + 0x268);
      if (*(char *)(lVar8 + 0x6e) == '\0') {
        *(undefined1 *)(lVar8 + 0x70) = 1;
        *(undefined1 *)(lVar8 + 0x71) = 1;
      }
    }
  }
  plVar5 = *(long **)(this + 0x270);
  if ((plVar5 != (long *)0x0) && (*(char *)((long)plVar5 + 0x6c) != '\0')) {
    cVar2 = (**(code **)(*plVar5 + 0x300))(plVar5,param_1,param_2);
    if (cVar2 == '\0') {
      lVar8 = *(long *)(this + 0x270);
      *(undefined1 *)(lVar8 + 0x70) = 0;
      *(undefined1 *)(lVar8 + 0x71) = 0;
    }
    else {
      lVar8 = *(long *)(this + 0x270);
      if (*(char *)(lVar8 + 0x6e) == '\0') {
        *(undefined1 *)(lVar8 + 0x70) = 1;
        *(undefined1 *)(lVar8 + 0x71) = 1;
      }
    }
  }
  cVar2 = Sexy::TRect<int>::Contains
                    ((TRect<int> *)(this + 0x2a0),(param_1 - *(int *)(this + 0x2e0)) - iVar3,
                     param_2 - *(int *)(this + 0x2e4));
  if (cVar2 == '\0') goto LAB_0441d60c;
  pTVar6 = (TPoint *)UIWidget::GetMouseDownPos((UIWidget *)this);
  Sexy::Point::Point(aPStack_18,pTVar6);
  uVar1 = local_14 - param_2;
  cVar2 = FUN_0441b2ac(this[0x161]);
  if (cVar2 == '\0') {
    if (*(int *)(this + 0x1ec) < 1) goto LAB_0441d60c;
    iVar3 = FUN_0441bf40(0xf);
    if ((int)((uVar1 ^ (int)uVar1 >> 0x3f) - ((int)uVar1 >> 0x1f)) <= iVar3) goto LAB_0441d60c;
    FUN_0441b2a4(this + 0x161,1);
    cVar2 = FUN_0441b2ac(this[0x161]);
    if (cVar2 == '\0') goto LAB_0441d60c;
  }
  Sexy::Point::Point((Point *)local_10,param_1,param_2);
  UIWidget::SetMouseDownPos((UIWidget *)this,(Point *)local_10);
  local_1c = 0;
  local_10[0] = *(int *)(this + 0x1e8) + uVar1;
  piVar7 = eastl::max_alt<int>(&local_1c,local_10);
  piVar7 = eastl::min_alt<int>(piVar7,(int *)(this + 0x1ec));
  *(int *)(this + 0x1e8) = *piVar7;
LAB_0441d60c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::isCurPlantAlreadyBuy() */

void __thiscall SeedChooser::isCurPlantAlreadyBuy(SeedChooser *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  RtObject *this_01;
  PlantNameMapperServerID *pPVar4;
  SpringChargeManager *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x2f8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_01);
    if (!bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      SeedPacket::GetPlantType();
      pPVar4 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      iVar3 = PlantNameMapperServerID::GetIdForType(pPVar4,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      this_02 = (SpringChargeManager *)Sexy::LazySingleton<SpringChargeManager>::GetInstancePtr();
      uVar2 = SpringChargeManager::isPlantAlreadyBuy(this_02,iVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_0441da24;
    }
  }
  uVar2 = 0;
LAB_0441da24:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::ShowHeroPlantDetails() */

void SeedChooser::ShowHeroPlantDetails(void)

{
  char cVar1;
  int iVar2;
  NameMapperBase *this;
  UIMessageBox *this_00;
  Image *pIVar3;
  long lVar4;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = HeroPlantUtils::GetCurrentHeroPlant();
  this = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this,iVar2);
  if ((cVar1 == '\0') &&
     (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
     this_00 != (UIMessageBox *)0x0)) {
    UIMessageBox::SetShowType(this_00,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[HEROPLANT_NO_DETAILS]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this_00,pIVar3);
    std::string::~string(asStack_10);
    nop();
    lVar4 = UIMessageBox::GetButtonCancel(this_00);
    thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0441e000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* SeedChooser::updateState_Ready() */

void __thiscall SeedChooser::updateState_Ready(SeedChooser *this)

{
  char cVar1;
  SexyVector2 *pSVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  float fVar11;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x270) != 0) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x278)), cVar1 == '\0')) {
    if (*(long **)(this + 0x270) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x270) + 0x18))();
    }
    *(undefined8 *)(this + 0x270) = 0;
  }
  if (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x288) != (PVZ2UISeedChooserPreviewDisplay *)0x0)
  {
    PVZ2UISeedChooserPreviewDisplay::ManualUpdate
              (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x288));
  }
  lVar6 = *(long *)(this + 0x1f8);
  if (((lVar6 != 0) && (*(char *)(lVar6 + 0x6e) == '\0')) &&
     (cVar1 = FUN_0441b2a0(this[0x160]), cVar1 == '\0')) {
    *(undefined1 *)(lVar6 + 0x70) = 0;
    *(undefined1 *)(lVar6 + 0x71) = 0;
  }
  lVar6 = *(long *)(this + 0x200);
  if (((lVar6 != 0) && (*(char *)(lVar6 + 0x6e) == '\0')) &&
     (cVar1 = FUN_0441b2a0(this[0x160]), cVar1 == '\0')) {
    *(undefined1 *)(lVar6 + 0x70) = 0;
    *(undefined1 *)(lVar6 + 0x71) = 0;
  }
  lVar6 = *(long *)(this + 0x268);
  if (((lVar6 != 0) && (*(char *)(lVar6 + 0x6e) == '\0')) &&
     (cVar1 = FUN_0441b2a0(this[0x160]), cVar1 == '\0')) {
    *(undefined1 *)(lVar6 + 0x70) = 0;
    *(undefined1 *)(lVar6 + 0x71) = 0;
  }
  uVar7 = (uint)(byte)this[0x1e6];
  lVar6 = 0;
  if (this[0x1e6] != (SeedChooser)0x0) {
    do {
      while( true ) {
        pSVar2 = (SexyVector2 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar6);
        iVar5 = (int)lVar6;
        if (*(int *)(pSVar2 + 0x30) != 1) break;
        fVar11 = *(float *)(pSVar2 + 0xc);
        fVar8 = (float)PVZ_T();
        if (fVar11 <= fVar8) {
          calcPacketPositionInBank(this,*(int *)(pSVar2 + 0x24),pSVar2);
          lVar4 = *(long *)this;
          *(undefined4 *)(pSVar2 + 0x30) = 2;
          if (*(code **)(lVar4 + 0x1f0) != onLandInBank) {
            (**(code **)(lVar4 + 0x1f0))(this,pSVar2);
          }
        }
        else {
          uVar10 = *(undefined4 *)(pSVar2 + 0xc);
          auVar9 = PVZ_T();
          fVar8 = CurveLerp<float>(auVar9,uVar10,auVar9._0_4_,pSVar2 + 0x10,pSVar2 + 0x18,3);
          uVar10 = *(undefined4 *)(pSVar2 + 0xc);
          *(float *)pSVar2 = fVar8;
          auVar9 = PVZ_T();
          fVar8 = CurveLerp<float>(auVar9,uVar10,auVar9._0_4_,pSVar2 + 0x14,pSVar2 + 0x1c,3);
          *(float *)(pSVar2 + 4) = fVar8;
        }
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(pSVar2 + 0x28));
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,*(float *)pSVar2,*(float *)(pSVar2 + 4))
        ;
        UIWidget::SetPositionOffset(local_10,local_c,uVar3);
        uVar7 = (uint)(byte)this[0x1e6];
        lVar6 = lVar6 + 1;
        if ((int)(uint)(byte)this[0x1e6] <= iVar5 + 1) goto LAB_0441e078;
      }
      lVar6 = lVar6 + 1;
    } while (iVar5 + 1 < (int)uVar7);
  }
LAB_0441e078:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::isCurPlantExp() */

void __thiscall SeedChooser::isCurPlantExp(SeedChooser *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  RtObject *this_01;
  PlantNameMapperServerID *pPVar4;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x2f8);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_01);
    if (!bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      SeedPacket::GetPlantType();
      pPVar4 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      iVar3 = PlantNameMapperServerID::GetIdForType(pPVar4,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      uVar2 = PlayerInfo::getIsExperiencePlantById(this_03,iVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_0441e154;
    }
  }
  uVar2 = 0;
LAB_0441e154:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::setPlantPreview(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall SeedChooser::setPlantPreview(SeedChooser *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b0));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1b0));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar2) {
LAB_0441e8f0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
    SeedPacket::GetPlantType();
    cVar1 = Sexy::RtWeakPtrBase::operator==(aRStack_10,param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x1f8))(this,lVar3);
      goto LAB_0441e8f0;
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::reindexBankPackets() */

void __thiscall SeedChooser::reindexBankPackets(SeedChooser *this)

{
  RtMixedPtrBase *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c8));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1c8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if (*(int *)(lVar4 + 0x30) != 5) {
      this_00 = (RtMixedPtrBase *)(lVar4 + 0x28);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        SeedPacket::GetPlantType();
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          SeedPacket::GetPlantType();
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          FUN_05475d88(aRStack_10,lVar5 + 8);
          if (*(byte *)(lVar4 + 0x34) != 0) {
            std::string::append((string *)aRStack_10,"imitater",(ulong)*(byte *)(lVar4 + 0x34));
          }
          uVar3 = findPlantTypeChooserPacketIndex(this,(string *)aRStack_10);
          *(undefined4 *)(lVar4 + 0x20) = uVar3;
          std::string::~string((string *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
      }
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::ShowArtifactDetails() */

void SeedChooser::ShowArtifactDetails(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  UIMessageBox *this_02;
  Image *pIVar3;
  long lVar4;
  UIArtifactBoostDetails *this_03;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar2 = PlayerInfo::GetCurrentArtifact(this_00);
  this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_01,iVar2);
  if (cVar1 == '\0') {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[ARTIFACT_NO_DETAILS]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_20,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_02,pIVar3);
      std::string::~string(asStack_10);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_18);
      FUN_05476c50(auStack_18);
      FUN_05476c50(awStack_20);
      FUN_05476c50(awStack_28);
    }
  }
  else {
    this_03 = (UIArtifactBoostDetails *)UISingletonDialog<UIArtifactBoostDetails>::ShowDialog();
    UIArtifactBoostDetails::InitView(this_03,iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::onMsgBorrowFriendPlant(int) */

void __thiscall SeedChooser::onMsgBorrowFriendPlant(SeedChooser *this,int param_1)

{
  int iVar1;
  SocialMgr *this_00;
  SocialInfo *this_01;
  size_t __n;
  long lVar2;
  string asStack_10 [8];
  size_t local_8;
  
  __n = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  if (this[0x304] != (SeedChooser)0x0) {
    this[0x304] = (SeedChooser)0x0;
    BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  }
  if (param_1 < 1) {
    *(undefined4 *)(this + 0x30c) = 0;
    *(undefined4 *)(this + 0x308) = 0xffffffff;
    std::string::append((string *)(*(long *)(gLawnApp + 0x9f0) + 0x968),"",__n);
    *(undefined4 *)(this + 0x310) = 0xffffffff;
  }
  else {
    this_00 = (SocialMgr *)Sexy::LazySingleton<SocialMgr>::GetInstance();
    this_01 = (SocialInfo *)SocialMgr::GetSocialInfo(this_00);
    SocialInfo::AddBorrowedPlantList(this_01,param_1);
    if (0 < *(int *)(this + 0x30c)) {
      lVar2 = *(long *)(gLawnApp + 0x9f0);
      iVar1 = PlantNameMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar1);
      FUN_05474278(lVar2 + 0x968,asStack_10);
      std::string::~string(asStack_10);
    }
    (**(code **)(*(long *)this + 0x1e8))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::SeedChooser() */

void __thiscall SeedChooser::SeedChooser(SeedChooser *this)

{
  LawnApp *pLVar1;
  SeedChooser SVar2;
  char cVar3;
  undefined4 uVar4;
  PrimeText *this_00;
  SeedBankModule *this_01;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SlidingWidget::SlidingWidget((SlidingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x1a0));
  *(undefined ***)this = &PTR_GetClass_06848790;
  *(undefined ***)(this + 0x10) = &PTR__SeedChooser_068489c8;
  *(undefined **)(this + 0x1a0) = &DAT_068489f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x278));
  Sexy::Insets::Insets((Insets *)(this + 0x2a0));
  Sexy::Insets::Insets((Insets *)(this + 0x2b0));
  Sexy::Insets::Insets((Insets *)(this + 0x2c0));
  Sexy::Insets::Insets((Insets *)(this + 0x2d0));
  Sexy::Insets::Insets((Insets *)(this + 0x2e0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2f8));
  Sexy::RtName::RtName((RtName *)(this + 800));
  Sexy::RtName::RtName((RtName *)(this + 0x330));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x340));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"HeroPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  this[0x1e4] = (SeedChooser)0x0;
  pLVar1 = gLawnApp;
  this[0x1e5] = (SeedChooser)0x0;
  this_01 = (SeedBankModule *)Board::GetSeedBankModule(*(Board **)(pLVar1 + 0x9f0));
  SVar2 = (SeedChooser)SeedBankModule::GetNumSlotsAvailableForChooser(this_01);
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1e0) = 0xffffffff;
  *(undefined4 *)(this + 0x300) = 0xffffffff;
  *(undefined4 *)(this + 0x308) = 0xffffffff;
  *(undefined4 *)(this + 0x310) = 0xffffffff;
  this[0x1e6] = SVar2;
  this[0x1e7] = SVar2;
  this[0x1a8] = (SeedChooser)0x1;
  this[0x1a9] = (SeedChooser)0x1;
  this[0x1f0] = (SeedChooser)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  this[0x304] = (SeedChooser)0x0;
  *(undefined4 *)(this + 0x30c) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  this[0x280] = (SeedChooser)0x0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  this[0x314] = (SeedChooser)0x0;
  this[0x290] = (SeedChooser)0x1;
  DAT_06a8870c = 5;
  DAT_06b07480 = 2;
  Sexy::RtName::operator=((RtName *)(this + 800),L"UISeedBankPacket");
  Sexy::RtName::operator=((RtName *)(this + 0x330),L"UISeedBankRiftPacket");
  cVar3 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar3 != '\0') && (lVar5 = PVZ1ModePropertySheet::GetProperties(), lVar5 != 0)) {
    uVar4 = FUN_0441b344(*(undefined8 *)(lVar5 + 0x178),*(undefined8 *)(lVar5 + 0x180));
    *(undefined4 *)(this + 0x348) = uVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::StaticNew() */

SeedChooser * SeedChooser::StaticNew(void)

{
  SeedChooser *this;
  
  this = ::operator_new(0x350);
  SeedChooser(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::createAccessoryButton() */

void __thiscall SeedChooser::createAccessoryButton(SeedChooser *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  LotteryResultProgressBar *pLVar8;
  PVZ2UIButton *this_00;
  SalesProgressBar *pSVar9;
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  calcInfoCardRect();
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07770);
  LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar2 = FUN_0441bf40(10);
  iVar3 = FUN_0441bf40(0xc);
  iVar4 = FUN_0441bf40(0x32);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x6b,(ButtonListener *)(this + 0x1a0),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b07770,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b07798,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07770);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07770);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar9);
  Sexy::Insets::Insets(aIStack_40,0,0,iVar5,iVar6);
  PVZ2UIButton::SetContentsRect(this_00,(TRect *)aIStack_40);
  *(int *)(this_00 + 0x48) = iVar2 + local_88 + iVar4;
  *(int *)(this_00 + 0x4c) = iVar3 + local_84;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07770);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  *(undefined4 *)(this_00 + 0x50) = uVar7;
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07770);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar9);
  *(undefined4 *)(this_00 + 0x54) = uVar7;
  lVar1 = ___stack_chk_guard;
  *(PVZ2UIButton **)(this + 0x210) = this_00;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::drawHeroPlant(Sexy::Graphics*, Sexy::Point const&) const */

void __thiscall SeedChooser::drawHeroPlant(SeedChooser *this,Graphics *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0441bf40(0x14);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0xf);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(100);
  iVar4 = FUN_0441bf40(0x82);
  Sexy::Insets::Insets(aIStack_18,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar4);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07588);
  Draw3SliceImage(param_1,aIStack_18,uVar7);
  TodStringTranslate(L"[HERO]");
  iVar1 = FUN_0441bf40(0x14);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0x11);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(0x5f);
  iVar4 = FUN_0441bf40(0x1e);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_0441bf40(0x22);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0x3c);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(0x46);
  Sexy::Insets::Insets((Insets *)&local_28,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_28);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070b8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  if (*(long *)(this + 0x260) != 0) {
    iVar5 = FUN_0441bf40(7);
    iVar6 = FUN_0441bf40(0xe);
    Sexy::Insets::Insets
              (aIStack_18,local_28 + iVar5,iVar5 + local_24,local_20 - iVar6,local_1c - iVar6);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x260));
  }
  drawTranslatedWidget(this,param_1,*(Widget **)(this + 0x228));
  drawTranslatedWidget(this,param_1,*(Widget **)(this + 0x230));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::drawTabContentsSeedChooser(Sexy::Graphics*) */

void __thiscall SeedChooser::drawTabContentsSeedChooser(SeedChooser *this,Graphics *param_1)

{
  TRect *pTVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  float *pfVar14;
  UIWidget *this_00;
  TRect *pTVar15;
  Insets *pIVar16;
  SalesProgressBar *pSVar17;
  int *piVar18;
  RtObject *this_01;
  long *plVar19;
  SeedPacket *pSVar20;
  undefined4 uVar21;
  long lVar22;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  Insets aIStack_38 [16];
  int local_28;
  int iStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  uVar21 = 8;
  if (this[0x290] != (SeedChooser)0x0) {
    uVar21 = 0xfffffffe;
  }
  uVar2 = 0xfffffff4;
  if (this[0x290] != (SeedChooser)0x0) {
    uVar2 = 0xfffffffa;
  }
  local_8 = ___stack_chk_guard;
  iVar6 = FUN_0441bf40(uVar2);
  iVar11 = *(int *)(this + 0x2a0);
  pTVar1 = (TRect *)(param_1 + 0x28);
  iVar7 = FUN_0441bf40(0xfffffffa);
  lVar22 = 0;
  iVar10 = *(int *)(this + 0x2a4);
  iVar8 = FUN_0441bf40(uVar21);
  iVar3 = *(int *)(this + 0x2a8);
  iVar9 = FUN_0441bf40(10);
  Sexy::Insets::Insets
            ((Insets *)&local_58,iVar6 + iVar11,iVar7 + iVar10,iVar8 + iVar3,
             iVar9 + *(int *)(this + 0x2ac));
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_58);
  uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b074e0);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar12);
  iVar11 = *(int *)(this + 0x2a0);
  iVar10 = FUN_0441bf40(uVar2);
  local_58 = FUN_0441bf40(0);
  local_58 = iVar11 + iVar10 + local_58;
  Sexy::Point::Point((Point *)&local_60,iVar11 + *(int *)(this + 0x2e0),
                     *(int *)(this + 0x2a4) + *(int *)(this + 0x2e4));
  Sexy::Insets::Insets((Insets *)&local_48,(Insets *)pTVar1);
  Sexy::TRect<int>::Intersection(pTVar1);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_18);
  uVar12 = *(undefined8 *)(this + 0x1b0);
  iVar11 = FUN_0441b350(uVar12,*(undefined8 *)(this + 0x1b8));
  if (0 < iVar11) {
    do {
      lVar13 = FUN_0441b35c(uVar12,lVar22);
      uVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0x28));
      pfVar14 = (float *)FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_18,(float)local_60 + *pfVar14,
                 ((float)local_5c + pfVar14[1]) - (float)*(int *)(this + 0x1e8));
      UIWidget::SetPositionOffset(local_18,local_14,uVar12);
      lVar13 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
      iVar11 = *(int *)(lVar13 + 0x30);
      if (iVar11 == 3) {
        pSVar20 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0x28));
        SeedPacket::SetBlacklisted(pSVar20,true);
        lVar13 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
      }
      else if (iVar11 == 4) {
        pSVar20 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0x28));
        SeedPacket::SetPurchasable(pSVar20,true);
        lVar13 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
      }
      else if (iVar11 != 0) {
        pSVar20 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0x28));
        SeedPacket::SetDisabled(pSVar20,true);
        lVar13 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
      }
      this_00 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0x28));
      pTVar15 = (TRect *)UIWidget::GetRect(this_00);
      cVar4 = Sexy::TRect<int>::Intersects((TRect<int> *)(this + 0x2b0),pTVar15);
      if (cVar4 != '\0') {
        lVar13 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
        bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar13 + 0x28));
        if (bVar5) {
          lVar13 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
          this_01 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0x28));
          bVar5 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_01);
          if (!bVar5) {
            lVar13 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar22);
            plVar19 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar13 + 0x28));
            (**(code **)(*plVar19 + 0x78))(plVar19,param_1);
          }
        }
      }
      lVar22 = lVar22 + 1;
      uVar12 = *(undefined8 *)(this + 0x1b0);
      iVar11 = FUN_0441b350(uVar12,*(undefined8 *)(this + 0x1b8));
    } while ((int)lVar22 < iVar11);
  }
  iVar11 = *(int *)(this + 0x1ec);
  *(undefined8 *)pTVar1 = local_48;
  *(undefined8 *)(param_1 + 0x30) = uStack_40;
  if (0 < iVar11) {
    pIVar16 = (Insets *)PVPManager::GetSkillDatas((PVPManager *)param_1);
    Sexy::Insets::Insets(aIStack_38,pIVar16);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07658);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar17);
    local_64 = *(int *)(this + 0x1e8);
    local_68 = iVar10;
    piVar18 = eastl::min_alt<int>(&local_68,&local_64);
    iVar11 = 0;
    if (iVar10 != 0) {
      iVar11 = (*piVar18 * 0xff) / iVar10;
    }
    Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,iVar11);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_58);
    lVar22 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07658);
    uStack_20 = CONCAT44(*(undefined4 *)(lVar22 + 0x3c),(undefined4)uStack_20);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07658);
    Draw3SliceImage(param_1,(Insets *)&local_18,uVar12);
    pSVar17 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07198);
    iVar10 = SalesProgressBar::GetCurrentLevel(pSVar17);
    local_64 = *(int *)(this + 0x1ec) - *(int *)(this + 0x1e8);
    local_68 = iVar10;
    piVar18 = eastl::min_alt<int>(&local_64,&local_68);
    iVar11 = 0;
    if (iVar10 != 0) {
      iVar11 = (*piVar18 * 0xff) / iVar10;
    }
    Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,iVar11);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    local_28 = local_58;
    iStack_24 = iStack_54;
    uStack_20 = uStack_50;
    uVar12 = uStack_20;
    uStack_20._4_4_ = (int)((ulong)uStack_50 >> 0x20);
    iVar11 = uStack_20._4_4_;
    uStack_20 = uVar12;
    lVar22 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07198);
    _local_28 = CONCAT44(iStack_24 + (iVar11 - *(int *)(lVar22 + 0x3c)),local_28);
    lVar22 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07198);
    uStack_20 = CONCAT44(*(undefined4 *)(lVar22 + 0x3c),(undefined4)uStack_20);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
    uVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07198);
    Draw3SliceImage(param_1,(Insets *)&local_18,uVar12);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_38);
    Sexy::Graphics::SetColorizeImages(param_1,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::initButtons() */

void __thiscall SeedChooser::initButtons(SeedChooser *this)

{
  SeedChooser SVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  PrimeTypeface *pPVar14;
  Image *pIVar15;
  Image *pIVar16;
  LotteryResultProgressBar *pLVar17;
  undefined8 uVar18;
  SalesProgressBar *pSVar19;
  PVZ2UIButton *pPVar20;
  ToolTipWidget *this_00;
  undefined8 *puVar21;
  long lVar22;
  code *pcVar23;
  long *plVar24;
  undefined8 local_80;
  string asStack_78 [56];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(asStack_40,L"[LETS_ROCK_BUTTON]",asStack_78);
  pPVar14 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07960);
  pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07090);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07960);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07960);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  uVar18 = MakeStretchableNewLawnButton
                     (0,(ButtonListener *)(this + 0x1a0),(wstring *)asStack_40,pPVar14,pIVar15,
                      (Image *)0x0,pIVar16,iVar4 / 3,iVar5 / 3);
  *(undefined8 *)(this + 0x1f8) = uVar18;
  FUN_05476c50(asStack_40);
  nop();
  cVar3 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  iVar4 = 0;
  if (cVar3 != '\0') {
    iVar5 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    iVar6 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar7 = Reflection::RFunctionType::StaticGetTypeCategory();
    iVar4 = iVar5 << 1;
    if (iVar6 != iVar7) {
      iVar4 = iVar5;
    }
  }
  iVar5 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
  plVar24 = *(long **)(this + 0x1f8);
  pcVar23 = *(code **)(*plVar24 + 0x198);
  iVar6 = FUN_0441b298(*(undefined4 *)(this + 0x38));
  iVar7 = FUN_0441bf40(0xb8);
  iVar8 = FUN_0441b29c(*(undefined4 *)(this + 0x3c));
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07960);
  iVar9 = Sexy::Image::GetCelHeight(pIVar15);
  iVar10 = FUN_0441bf40(10);
  uVar11 = FUN_0441bf40(0xaa);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07960);
  uVar12 = Sexy::Image::GetCelHeight(pIVar15);
  (*pcVar23)(plVar24,(iVar6 - iVar7) - iVar4,(iVar8 - iVar9) - iVar10,uVar11,uVar12);
  plVar24 = *(long **)(this + 0x1f8);
  pcVar23 = *(code **)(*plVar24 + 0x170);
  uVar18 = (**(code **)(*plVar24 + 0x178))(plVar24,0);
  (*pcVar23)(plVar24,1,uVar18);
  lVar22 = *(long *)(this + 0x1f8);
  uVar11 = FUN_0441bf40(0xfffffffe);
  *(undefined4 *)(lVar22 + 0x1ac) = uVar11;
  cVar3 = CustomLevelUtils::IsCustomLevel();
  if (cVar3 == '\0') {
    bVar2 = (uint)(byte)this[0x1e4] + iVar5 != (uint)(byte)this[0x1e7];
  }
  else {
    bVar2 = this[0x1e4] == (SeedChooser)0x0;
  }
  *(bool *)(lVar22 + 0x6e) = bVar2;
  pLVar17 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b078e0);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar17);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b078e0);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar19);
  FUN_05478178(asStack_78,&DAT_056f11a8,&local_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar20 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar20,0x65,(ButtonListener *)(this + 0x1a0),(wstring *)asStack_78,(Color *)asStack_40
            );
  *(PVZ2UIButton **)(this + 0x200) = pPVar20;
  FUN_05476c50(asStack_78);
  nop();
  plVar24 = *(long **)(this + 0x200);
  pcVar23 = *(code **)(*plVar24 + 0x198);
  uVar13 = FUN_0441bf40(6);
  iVar4 = FUN_0441bf40(0x44);
  pSVar19 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07108);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar19);
  SVar1 = this[0x1e6];
  uVar11 = FUN_0441bf40(uVar11);
  uVar12 = FUN_0441bf40(uVar12);
  (*pcVar23)(plVar24,uVar13,iVar4 + iVar5 * (uint)(byte)SVar1,uVar11,uVar12);
  pPVar20 = *(PVZ2UIButton **)(this + 0x200);
  pPVar20[0x6e] = (PVZ2UIButton)0x1;
  pPVar20[0x6c] = (PVZ2UIButton)0x1;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b078e0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b072c0,1);
  PVZ2UIButton::SetDialogStates(pPVar20,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)asStack_40);
  this_00 = ::operator_new(0x40);
  ToolTipWidget::ToolTipWidget(this_00);
  *(ToolTipWidget **)(this + 0x2f0) = this_00;
  puVar21 = (undefined8 *)UIWidget::GetPositionOffset((UIWidget *)this);
  local_80 = *puVar21;
  iVar4 = FUN_0441b29c(*(undefined4 *)(this + 0x3c));
  local_80 = CONCAT44(local_80._4_4_ + (float)iVar4,(undefined4)local_80);
  std::string::string(asStack_78,"Play_UI_Game_SeedChooser_Arrive");
  std::string::string(asStack_40,"Play_UI_Game_SeedChooser_Away");
  SlidingWidget::SetupSlideInfo
            ((SlidingWidget *)0x3f000000,this,&local_80,asStack_78,asStack_40,3,2);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_78);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::updateState_Initializing() */

void __thiscall SeedChooser::updateState_Initializing(SeedChooser *this)

{
  int iVar1;
  UIWidget *this_00;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = UIWidget::GetChildCount(this_00);
  if (iVar1 != 0) {
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b07108);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x340),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    (**(code **)(*(long *)this + 0x200))(this);
    initButtons(this);
    uVar5 = *(undefined8 *)(this + 0x1b0);
    lVar2 = FUN_0441b350(uVar5,*(undefined8 *)(this + 0x1b8));
    lVar4 = 0;
    do {
      if (lVar4 == lVar2) goto LAB_044201a0;
      lVar3 = FUN_0441b35c(uVar5,lVar4);
      lVar4 = lVar4 + 1;
    } while (*(int *)(lVar3 + 0x30) == 3);
    (**(code **)(*(long *)this + 0x1f8))(this,lVar3);
LAB_044201a0:
    (**(code **)(*(long *)this + 0x220))(this);
    iVar1 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
    if (*(long *)(this + 0x1f8) != 0) {
      *(bool *)(*(long *)(this + 0x1f8) + 0x6e) =
           (uint)(byte)this[0x1e4] + iVar1 != (uint)(byte)this[0x1e7];
    }
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::drawArtifact(Sexy::Graphics*, Sexy::Point const&) const */

void __thiscall SeedChooser::drawArtifact(SeedChooser *this,Graphics *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0441bf40(0x14);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0xf);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(100);
  iVar4 = FUN_0441bf40(0x82);
  Sexy::Insets::Insets(aIStack_18,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar4);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07588);
  Draw3SliceImage(param_1,aIStack_18,uVar7);
  TodStringTranslate(L"[ARTIFACT]");
  iVar1 = FUN_0441bf40(0x14);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0x11);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(0x5f);
  iVar4 = FUN_0441bf40(0x1e);
  Sexy::Insets::Insets(aIStack_28,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar4);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,(Insets *)&local_38,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50((Insets *)&local_38);
  iVar1 = FUN_0441bf40(0x22);
  iVar5 = *(int *)param_2;
  iVar2 = FUN_0441bf40(0x3c);
  iVar6 = *(int *)(param_2 + 4);
  iVar3 = FUN_0441bf40(0x46);
  Sexy::Insets::Insets((Insets *)&local_38,iVar1 + iVar5,iVar2 + iVar6,iVar3,iVar3);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070b8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  iVar5 = local_38;
  if (*(long *)(this + 0x250) == 0) goto LAB_04420974;
  iVar2 = FUN_0441bf40(7);
  iVar1 = local_30;
  iVar6 = iVar2 + local_34;
  iVar3 = FUN_0441bf40(0xe);
  Sexy::Insets::Insets(aIStack_18,iVar5 + iVar2,iVar6,iVar1 - iVar3,local_2c - iVar3);
  DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0x250));
  iVar5 = *(int *)(this + 0x25c);
  if (iVar5 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07538;
LAB_044209c8:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
    iVar5 = local_38 + local_30;
    iVar1 = FUN_0441bf40(0x18);
    iVar6 = local_34;
    iVar2 = FUN_0441bf40(5);
    iVar3 = FUN_0441bf40(0x14);
    iVar4 = FUN_0441bf40(0x17);
    Sexy::Graphics::DrawImage(param_1,pIVar8,iVar5 - iVar1,iVar6 + iVar2,iVar3,iVar4);
  }
  else {
    if (iVar5 == 2) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b070e0;
      goto LAB_044209c8;
    }
    if (iVar5 == 3) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07600;
      goto LAB_044209c8;
    }
    if (iVar5 == 4) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07170;
      goto LAB_044209c8;
    }
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 600));
  Sexy::ToWString(asStack_48);
  iVar5 = FUN_0441bf40(0x20);
  iVar6 = FUN_0441bf40(0x19);
  iVar1 = FUN_0441bf40(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,(local_38 + local_30) - iVar5,(local_34 + local_2c) - iVar6,iVar1,iVar6);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
LAB_04420974:
  drawTranslatedWidget(this,param_1,*(Widget **)(this + 0x218));
  drawTranslatedWidget(this,param_1,*(Widget **)(this + 0x220));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::onEnterState_Initializing(WidgetState) */

void SeedChooser::onEnterState_Initializing(ReceivedDataCallback *param_1)

{
  undefined *puVar1;
  UIWidget *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Insets aIStack_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,(_func_void *)0x1c0);
  Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FreeplantingCheatEnabled,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,(_func_void *)0x1c8);
  Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::FreeplantingCheatDisabled,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onItemPurchasedFromStore);
  local_d0 = local_80;
  uStack_c8 = uStack_78;
  local_c0 = local_70;
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<SeedChooser,void(SeedChooser::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,(_func_void *)0x1d0);
  Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DangerRoomReady,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onViewBoardOrZombiesButtonPressed);
  Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::ViewBoardOrZombiesButtonPressed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onMsgError);
  local_e0 = local_58;
  local_f0 = local_68;
  uStack_e8 = uStack_60;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SeedChooser,void(SeedChooser::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onMsgBorrowFriendPlant);
  local_f0 = local_50;
  uStack_e8 = uStack_48;
  local_e0 = local_40;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<SeedChooser,void(SeedChooser::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgBorrowFriendPlant,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onPlantAccessoryActionComplete);
  Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>(aDStack_38,(string *)&local_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NoticeAccessoryUIClose,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnOrientationChanged);
  Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>(aDStack_38,(string *)&local_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::OrientationChanged,aDStack_38);
  if (param_1[0x290] == (ReceivedDataCallback)0x0) {
    Sexy::Insets::Insets(aIStack_a8,0x25,0x111,0x19f,0xe9);
    FUN_0441c7cc((string *)&local_98,aIStack_a8);
    iVar2 = 0x67;
    iVar3 = 0x3e;
    iVar4 = 0x1d9;
    iVar5 = 0x212;
  }
  else {
    Sexy::Insets::Insets(aIStack_a8,0x13,0x111,0x1f5,0xf8);
    FUN_0441c7cc((string *)&local_98,aIStack_a8);
    iVar2 = 0x62;
    iVar3 = 0x39;
    iVar4 = 0x20d;
    iVar5 = 0x21c;
  }
  *(undefined8 *)(param_1 + 0x2a0) = local_98;
  *(undefined8 *)(param_1 + 0x2a8) = uStack_90;
  Sexy::Insets::Insets(aIStack_a8,iVar2,iVar3,iVar4,iVar5);
  FUN_0441c7cc((string *)&local_98,aIStack_a8);
  *(undefined8 *)(param_1 + 0x2d0) = local_98;
  *(undefined8 *)(param_1 + 0x2d8) = uStack_90;
  *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x2d8);
  std::string::string((string *)&local_98,"UIViewBoardOrZombies");
  this = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_98);
  UIWidget::SetVisible(this,false);
  std::string::~string((string *)&local_98);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::refreshCurrentArtifact() */

void __thiscall SeedChooser::refreshCurrentArtifact(SeedChooser *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar4;
  undefined8 uVar5;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_60 [8];
  Sexy aSStack_58 [8];
  string asStack_50 [8];
  string local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = PlayerInfo::GetCurrentArtifact(this_01);
  this_02 = (NameMapperBase *)ArtifactMapper::GetInstance();
  cVar2 = NameMapperBase::ContainsId(this_02,iVar3);
  if (cVar2 == '\0') {
    *(undefined4 *)(this + 600) = 0;
    *(undefined4 *)(this + 0x25c) = 0;
    uVar1 = *(undefined4 *)(this_01 + 0x40);
    *(undefined8 *)(this + 0x250) = 0;
    iVar3 = FUN_0441b314(uVar1);
  }
  else {
    PlayerInfo::GetArtifactInfoByID((int)this_01);
    iVar3 = ArtifactMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    Sexy::StringToUpper((Sexy *)asStack_60,extraout_x1_00);
    std::operator+("IMAGE_UI_ARTIFACT_",(string *)aSStack_58);
    uVar5 = StringHelper::ToImage(asStack_50,false);
    *(undefined8 *)(this + 0x250) = uVar5;
    std::string::~string(asStack_50);
    std::string::~string((string *)aSStack_58);
    *(undefined4 *)(this + 600) = local_40;
    *(undefined4 *)(this + 0x25c) = local_44;
    std::string::~string(asStack_60);
    ArtifactInfo::~ArtifactInfo((ArtifactInfo *)local_48);
    iVar3 = FUN_0441b314(*(undefined4 *)(this_01 + 0x40));
  }
  if (iVar3 == 0x39) {
    std::string::string(local_48,"IMAGE_UI_ARTIFACT_ARTIFACT_WIND");
    uVar5 = StringHelper::ToImage(local_48,false);
    *(undefined8 *)(this + 0x250) = uVar5;
    std::string::~string(local_48);
    nop();
    *(undefined4 *)(this + 600) = 0x1e;
    *(undefined4 *)(this + 0x25c) = 4;
  }
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  lVar4 = FUN_05474374(local_48,"Artifact_Demo_",0);
  std::string::~string(local_48);
  if (lVar4 != -1) {
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    FUN_05475ffc(aSStack_58,asStack_60,0xe,0xffffffffffffffff);
    Sexy::StringToUpper(aSStack_58,extraout_x1);
    std::operator+("IMAGE_UI_ARTIFACT_ARTIFACT_",asStack_50);
    uVar5 = StringHelper::ToImage(local_48,false);
    *(undefined8 *)(this + 0x250) = uVar5;
    std::string::~string(local_48);
    std::string::~string(asStack_50);
    std::string::~string((string *)aSStack_58);
    std::string::~string(asStack_60);
    *(undefined4 *)(this + 600) = 0x1e;
    *(undefined4 *)(this + 0x25c) = 4;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::panBoardLeft() */

void __thiscall SeedChooser::panBoardLeft(SeedChooser *this)

{
  ResourceInfo *this_00;
  AnimationController *pAVar1;
  UIWidget *this_01;
  Board *this_02;
  float fVar2;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SlidingWidget::SlideOut((SlidingWidget *)this);
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  Board::PushAnimationMgr(this_02);
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_02 + 0x898));
  FUN_0441b304(this_00 + 0x10);
  fVar2 = (float)FUN_0441b310(*(undefined4 *)(this_00 + 0x10));
  StandardLevelIntro::GetPanLocations(4,&local_2c,&local_28);
  pAVar1 = (AnimationController *)MoveBoard::Create(0x3fc00000,local_2c,local_28,0,0,4);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar1,fVar2 + 0.2,&local_24);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onPanBoardLeftFinished");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this_00,pAVar1,local_24);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetClickable(this_01,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::panBoardRight() */

void SeedChooser::panBoardRight(void)

{
  ResourceInfo *this;
  AnimationController *pAVar1;
  UIWidget *this_00;
  Board *this_01;
  float fVar2;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  Board::PushAnimationMgr(this_01);
  this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this_01 + 0x898));
  FUN_0441b304(this + 0x10);
  fVar2 = (float)FUN_0441b310(*(undefined4 *)(this + 0x10));
  StandardLevelIntro::GetPanLocations(5,&local_2c,&local_28);
  pAVar1 = (AnimationController *)MoveBoard::Create(0x3fc00000,local_2c,local_28,0,0,4);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,fVar2 + 0.2,&local_24);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onPanBoardRightFinished");
  pAVar1 = (AnimationController *)TimeEvent::Create(aRStack_18,asStack_10);
  AnimationMgr::Add((AnimationMgr *)this,pAVar1,local_24);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetClickable(this_00,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::toggleHideChooser() */

void __thiscall SeedChooser::toggleHideChooser(SeedChooser *this)

{
  char cVar1;
  UIWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetClickable(this_00,false);
  std::string::~string(asStack_10);
  nop();
  *(undefined1 *)(*(long *)(this + 0x2f0) + 0x28) = 0;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 == '\0') {
    panBoardRight();
  }
  else {
    panBoardLeft(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::onViewBoardOrZombiesButtonPressed() */

void __thiscall SeedChooser::onViewBoardOrZombiesButtonPressed(SeedChooser *this)

{
  char cVar1;
  UIWidget *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIViewBoardOrZombies");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetClickable(this_00,false);
  std::string::~string(asStack_10);
  nop();
  *(undefined1 *)(*(long *)(this + 0x2f0) + 0x28) = 0;
  cVar1 = UIWidget::IsVisible((UIWidget *)this);
  if (cVar1 == '\0') {
    panBoardRight();
  }
  else {
    panBoardLeft(this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::OnServerGemCallBack(bool) */

void __thiscall SeedChooser::OnServerGemCallBack(SeedChooser *this,bool param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  PlayerInfo *this_01;
  long lVar2;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x278);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
              ((MessageRouter *)puVar1,Message::PlantUnlockFragment,aRStack_20,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    this_01 = (PlayerInfo *)ProfileUtils::Profile();
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    std::operator+("PvE_Mission|",asStack_30);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,std::string,int>
              ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,aRStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
    PlayerInfo::HandlePurchase(this_01,(string *)(lVar2 + 0x10),(vector *)aRStack_20);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::isCurrentPlantFavorite() const */

void __thiscall SeedChooser::isCurrentPlantFavorite(SeedChooser *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  ProfileMgr *this_01;
  PlayerInfo *pPVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  RtObject *this_03;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x2f8);
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)LocalProfileSaveData::GetSeedChooserFavorites(pPVar3);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    this_03 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_03);
    if (!bVar2) {
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_02);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      SeedPacket::GetPlantType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar4,uVar5,lVar6 + 8);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_02);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      goto LAB_04422ab0;
    }
  }
  bVar2 = false;
LAB_04422ab0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::updateFavoriteButton() */

void __thiscall SeedChooser::updateFavoriteButton(SeedChooser *this)

{
  char cVar1;
  undefined *puVar2;
  PVZ2UIButton *this_00;
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x208) != 0) {
    cVar1 = isCurrentPlantFavorite(this);
    if (cVar1 == '\0') {
      this_00 = *(PVZ2UIButton **)(this + 0x208);
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b07630,1);
      puVar2 = &DAT_06b07560;
    }
    else {
      this_00 = *(PVZ2UIButton **)(this + 0x208);
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b07458,1);
      puVar2 = &DAT_06b07910;
    }
    PVZ2UIImage::PVZ2UIImage(aPStack_40,puVar2,1);
    PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::createFavoriteButton() */

void __thiscall SeedChooser::createFavoriteButton(SeedChooser *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  LotteryResultProgressBar *pLVar6;
  PVZ2UIButton *this_00;
  SalesProgressBar *pSVar7;
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  calcInfoCardRect();
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07630);
  LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar1 = FUN_0441bf40(10);
  iVar2 = FUN_0441bf40(0xc);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x6b,(ButtonListener *)(this + 0x1a0),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b07630,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06b07560,1);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07630);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07630);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_40,0,0,iVar3,iVar4);
  PVZ2UIButton::SetContentsRect(this_00,(TRect *)aIStack_40);
  *(int *)(this_00 + 0x48) = iVar1 + local_88;
  *(int *)(this_00 + 0x4c) = iVar2 + local_84;
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07630);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  *(undefined4 *)(this_00 + 0x50) = uVar5;
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07630);
  uVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
  *(undefined4 *)(this_00 + 0x54) = uVar5;
  *(PVZ2UIButton **)(this + 0x208) = this_00;
  updateFavoriteButton(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::setSeedPreview(ChooserPacketData&) */

void SeedChooser::setSeedPreview(ChooserPacketData *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr *this_01;
  bool bVar1;
  byte bVar4;
  int iVar5;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char cVar2;
  ChooserPacketData CVar3;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  PrimeText *this_02;
  long *plVar12;
  SeedPacket *pSVar13;
  PVZ2UISeedChooserPreviewDisplay *pPVar14;
  PVZ2UIButton *pPVar15;
  undefined8 uVar16;
  ProfileMgr *this_03;
  PlayerInfo *pPVar17;
  vector<ArtifactInfo,std::allocator<ArtifactInfo>> *this_04;
  RtObject *this_05;
  bool *pbVar18;
  undefined8 uVar19;
  MagentoProductProps *pMVar20;
  undefined8 uVar21;
  long in_x1;
  LineBreakCategory *pLVar22;
  LineBreakCategory *pLVar23;
  LineBreakCategory *in_x4;
  code *pcVar24;
  ButtonListener *pBVar25;
  long lVar26;
  float fVar27;
  undefined1 auVar28 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtMixedPtrBase aRStack_a8 [8];
  wstring awStack_a0 [8];
  wstring awStack_98 [8];
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  wstring awStack_78 [56];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x1 + 0x28);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(in_x1 + 0x38);
  this_02 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_02);
  this_01 = (RtWeakPtr *)(param_1 + 0x2f8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x278),(RtWeakPtr *)this_00);
  plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  (**(code **)(*plVar12 + 0x1b8))(aRStack_b0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    SeedPacket::GetPlantTypeOrImitater();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    SeedPacket::GetPlantTypeOrImitater();
    cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)awStack_78,(RtWeakPtrBase *)aRStack_40)
    ;
    if (cVar2 != '\0') {
      this_05 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_05);
      if (!bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        goto LAB_044236fc;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_78);
    pSVar13 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    SeedPacket::SetIsSelected(pSVar13,false);
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)this);
  pSVar13 = (SeedPacket *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  SeedPacket::SetIsSelected(pSVar13,true);
  plVar12 = *(long **)(param_1 + 0x288);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x80))(plVar12,1,1);
    if (*(long **)(param_1 + 0x288) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x288) + 0x18))();
      *(undefined8 *)(param_1 + 0x288) = 0;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_b0);
  pPVar14 = ::operator_new(0x148);
  PVZ2UISeedChooserPreviewDisplay::PVZ2UISeedChooserPreviewDisplay(pPVar14,aRStack_40);
  *(PVZ2UISeedChooserPreviewDisplay **)(param_1 + 0x288) = pPVar14;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::Insets::Insets((Insets *)&local_88,(Insets *)(param_1 + 0x2e0));
  fVar27 = (float)FUN_0441bf54(0x41a00000);
  local_88 = (int)(fVar27 + (float)local_88);
  fVar27 = (float)FUN_0441bf54(0x41900000);
  local_84 = (int)(fVar27 + (float)local_84);
  fVar27 = (float)FUN_0441bf54(0x42200000);
  local_80 = (int)((float)local_80 - fVar27);
  local_7c = FUN_0441bf40(0xf5);
  pLVar22 = *(LineBreakCategory **)(**(long **)(param_1 + 0x288) + 0x1a0);
  (*(code *)pLVar22)(*(long **)(param_1 + 0x288),(Insets *)&local_88);
  if (param_1[0x314] == (ChooserPacketData)0x0) {
    pLVar22 = *(LineBreakCategory **)(**(long **)(param_1 + 0x288) + 0x158);
    (*(code *)pLVar22)(*(long **)(param_1 + 0x288));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  SeedPacket::GetPlantType();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_a8);
  if (cVar2 == '\0') {
LAB_04422fa0:
    plVar12 = *(long **)(param_1 + 0x270);
  }
  else {
    pcVar24 = *(code **)(*(long *)param_1 + 0x208);
    lVar26 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
    cVar2 = (*pcVar24)(param_1,lVar26 + 8);
    if (cVar2 == '\0') goto LAB_04422fa0;
    FUN_05476574();
    cVar2 = FUN_0547419c(*(long *)(param_1 + 0x298) + 0xc0);
    pLVar22 = (LineBreakCategory *)awStack_78;
    if (cVar2 == '\0') {
      TodStringTranslate(L"[SEEDBANK_PLANT_LOCKED_TEMPORARILY]");
      Sexy::ToWString((string *)(*(long *)(param_1 + 0x298) + 0xc0));
      TodReplaceString((wstring *)&local_90,L"{LevelName}",awStack_78);
      FUN_054766c8(awStack_a0,aRStack_40);
      FUN_05476c50(aRStack_40);
      FUN_05476c50(awStack_78);
      FUN_05476c50((wstring *)&local_90);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_a8);
      Plant::GetFormattedNameString((Plant *)awStack_78,(wstring *)&local_90);
      TodReplaceString(awStack_a0,L"{PlantName}",awStack_78);
      FUN_054766c8(awStack_a0,aRStack_40);
      FUN_05476c50(aRStack_40);
      FUN_05476c50(awStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
    }
    else {
      TodStringTranslate(L"[SEEDBANK_PLANT_LOCKED]");
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_a8);
      Plant::GetFormattedNameString((Plant *)awStack_78,(RtWeakPtr<Sexy::SoundResource> *)&local_90)
      ;
      TodReplaceString(awStack_98,L"{PlantName}",awStack_78);
      FUN_054766c8(awStack_a0,aRStack_40);
      FUN_05476c50(aRStack_40);
      FUN_05476c50(awStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      FUN_05476c50(awStack_98);
    }
    if (*(wstring **)(param_1 + 0x288) != (wstring *)0x0) {
      PVZ2UISeedChooserPreviewDisplay::SetDescriptionText(*(wstring **)(param_1 + 0x288));
    }
    FUN_05476c50(awStack_a0);
    plVar12 = *(long **)(param_1 + 0x270);
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  if (*(long **)(param_1 + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x208) + 0x18))();
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  if (*(long **)(param_1 + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x210) + 0x18))();
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  uVar11 = *(uint *)(in_x1 + 0x30);
  pLVar23 = (LineBreakCategory *)(ulong)uVar11;
  if (uVar11 == 4) {
    iVar5 = local_84 + local_7c;
    lVar26 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b071c0);
    iVar6 = *(int *)(lVar26 + 0x3c);
    iVar7 = FUN_0441bf40(0x14);
    TodStringTranslate(L"[ALMANAC_PURCHASE]");
    pbVar18 = (bool *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    MagentoProductProps::GetLocalizedPriceString(pbVar18);
    uVar16 = FUN_054766ec(awStack_78);
    FUN_05478178(aRStack_40,uVar16,awStack_a0);
    TodReplaceString((wstring *)&local_90,L"{PRODUCT_NAME}",(wstring *)aRStack_40);
    FUN_05476c50(aRStack_40);
    nop();
    FUN_05476c50(awStack_78);
    FUN_05476c50((Point *)&local_90);
    FUN_05478178(awStack_78,&DAT_056f11a8,(Point *)&local_90);
    Sexy::Color::Color((Color *)aRStack_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,0x65,(ButtonListener *)(param_1 + 0x1a0),awStack_78,(Color *)aRStack_40);
    *(PVZ2UIButton **)(param_1 + 0x270) = pPVar15;
    FUN_05476c50(awStack_78);
    nop();
    plVar12 = *(long **)(param_1 + 0x270);
    uVar8 = FUN_0441bf40(0xa3);
    uVar9 = FUN_0441bf40(100);
    uVar10 = FUN_0441bf40(0x32);
    (**(code **)(*plVar12 + 0x198))(plVar12,uVar8,(iVar5 - iVar6 / 2) - iVar7,uVar9,uVar10);
    plVar12 = *(long **)(param_1 + 0x270);
    in_x4 = *(LineBreakCategory **)(*plVar12 + 0x170);
    uVar16 = (**(code **)(**(long **)(param_1 + 0x1f8) + 0x178))(*(long **)(param_1 + 0x1f8),0);
    (*(code *)in_x4)(plVar12,1,uVar16);
    pPVar17 = (PlayerInfo *)ProfileUtils::Profile();
    lVar26 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (0 < *(int *)(lVar26 + 0x90)) {
      lVar26 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      PlayerInfo::GetPlantPieceCount(pPVar17,(string *)(lVar26 + 0x80),false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    }
    pbVar18 = (bool *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    MagentoProductProps::GetLocalizedPriceString(pbVar18);
    uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b071c0);
    uVar19 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07680);
    pMVar20 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar5 = MagentoProductProps::GetPurchaseType(pMVar20);
    if (iVar5 == 0) {
      lVar26 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07030);
LAB_04423c30:
      if (lVar26 == 0) goto LAB_04423d44;
      pMVar20 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      uVar11 = MagentoProductProps::GetPurchaseType(pMVar20);
      pLVar23 = (LineBreakCategory *)(ulong)uVar11;
      if (uVar11 == 0) {
        pPVar15 = *(PVZ2UIButton **)(param_1 + 0x270);
        TodStringTranslate(L"[PLANT_OBTAIN]");
        uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
        PVZ2UIButton::AddText(pPVar15,aRStack_40,uVar21);
        FUN_05476c50(aRStack_40);
      }
      else {
        pPVar15 = *(PVZ2UIButton **)(param_1 + 0x270);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,lVar26,1);
        PVZ2UIButton::AddImage(pPVar15,aRStack_40,0);
        pPVar15 = *(PVZ2UIButton **)(param_1 + 0x270);
        uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
        pLVar23 = (LineBreakCategory *)0x0;
        PVZ2UIButton::AddText(pPVar15,(Point *)&local_90,uVar21);
      }
    }
    else {
      if (iVar5 == 2) {
        lVar26 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07508);
        goto LAB_04423c30;
      }
LAB_04423d44:
      pPVar15 = *(PVZ2UIButton **)(param_1 + 0x270);
      uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_22);
      PVZ2UIButton::AddText(pPVar15,(Point *)&local_90,uVar21,0);
      pPVar15 = *(PVZ2UIButton **)(param_1 + 0x270);
      FUN_05478178(aRStack_40,&DAT_05701860,awStack_78);
      uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
      pLVar23 = (LineBreakCategory *)0x0;
      PVZ2UIButton::AddText(pPVar15,aRStack_40,uVar21);
      FUN_05476c50(aRStack_40);
      nop();
    }
    (**(code **)(**(long **)(param_1 + 0x270) + 0x158))(*(long **)(param_1 + 0x270),0);
    pPVar15 = *(PVZ2UIButton **)(param_1 + 0x270);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,uVar16,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,uVar19,3);
    pLVar22 = (LineBreakCategory *)aRStack_40;
    PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aRStack_40);
    FUN_05476c50((Point *)&local_90);
    auVar28 = FUN_05476c50(awStack_98);
  }
  else if ((uVar11 == 5 || uVar11 == 0) ||
          (pLVar23 = (LineBreakCategory *)(ulong)(uVar11 - 2), uVar11 - 2 < 2)) {
    cVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)param_1);
    if (cVar2 != '\0') {
      createFavoriteButton((SeedChooser *)param_1);
    }
    auVar28 = createAccessoryButton((SeedChooser *)param_1);
  }
  else {
    auVar28[8] = uVar11 == 5;
    auVar28._0_8_ = &DAT_06b07000;
    auVar28._9_7_ = 0;
  }
  pBVar25 = (ButtonListener *)(param_1 + 0x1a0);
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar28._0_8_,auVar28._8_8_,pLVar22,pLVar23,in_x4);
  iVar5 = 0;
  if (cVar2 != '\0') {
    iVar5 = FUN_0441bf40(0x46);
  }
  Sexy::Point::Point((Point *)&local_90);
  iVar6 = *(int *)(param_1 + 0x2e0);
  iVar7 = *(int *)(param_1 + 0x2e8);
  local_90 = FUN_0441bf40(0x14);
  local_90 = iVar6 + iVar7 + local_90;
  local_8c = *(int *)(param_1 + 0x2e4) + iVar5;
  if (*(long **)(param_1 + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x218) + 0x18))();
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_98);
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar15,0x6d,pBVar25,awStack_78,(Color *)aRStack_40);
  *(PVZ2UIButton **)(param_1 + 0x218) = pPVar15;
  FUN_05476c50(awStack_78);
  nop();
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x218);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b07938,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06b07938,2);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aRStack_40);
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x218);
  iVar5 = FUN_0441bf40(0x1f);
  iVar6 = FUN_0441bf40(0x20);
  Sexy::Insets::Insets((Insets *)aRStack_40,0,0,iVar5,iVar6);
  PVZ2UIButton::SetContentsRect(pPVar15,(TRect *)aRStack_40);
  iVar5 = local_90;
  lVar26 = *(long *)(param_1 + 0x218);
  iVar7 = FUN_0441bf40(0x28);
  iVar6 = local_8c;
  *(int *)(lVar26 + 0x48) = iVar5 + iVar7;
  iVar5 = FUN_0441bf40(0x41);
  *(int *)(lVar26 + 0x4c) = iVar6 + iVar5;
  uVar8 = FUN_0441bf40(0x1f);
  *(undefined4 *)(lVar26 + 0x50) = uVar8;
  uVar8 = FUN_0441bf40(0x20);
  plVar12 = *(long **)(param_1 + 0x220);
  *(undefined4 *)(lVar26 + 0x54) = uVar8;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  TodStringTranslate(L"[DETAILS]");
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar15,0x6e,pBVar25,awStack_78,(Color *)aRStack_40);
  *(PVZ2UIButton **)(param_1 + 0x220) = pPVar15;
  FUN_05476c50(awStack_78);
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x220);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b071c0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06b07680,2);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aRStack_40);
  plVar12 = *(long **)(param_1 + 0x220);
  pcVar24 = *(code **)(*plVar12 + 800);
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  (*pcVar24)(plVar12,uVar16);
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x220);
  iVar5 = FUN_0441bf40(0x46);
  iVar6 = FUN_0441bf40(0x23);
  Sexy::Insets::Insets((Insets *)aRStack_40,0,0,iVar5,iVar6);
  PVZ2UIButton::SetContentsRect(pPVar15,(TRect *)aRStack_40);
  iVar5 = local_90;
  lVar26 = *(long *)(param_1 + 0x220);
  iVar7 = FUN_0441bf40(0x23);
  iVar6 = local_8c;
  *(int *)(lVar26 + 0x48) = iVar5 + iVar7;
  iVar5 = FUN_0441bf40(0x96);
  *(int *)(lVar26 + 0x4c) = iVar6 + iVar5;
  uVar8 = FUN_0441bf40(0x46);
  *(undefined4 *)(lVar26 + 0x50) = uVar8;
  uVar8 = FUN_0441bf40(0x23);
  *(undefined4 *)(lVar26 + 0x54) = uVar8;
  this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar17 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
  this_04 = (vector<ArtifactInfo,std::allocator<ArtifactInfo>> *)
            PlayerInfo::GetUnlockedArtifactList(pPVar17);
  cVar2 = std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::empty(this_04);
  CVar3 = (ChooserPacketData)0x0;
  if (cVar2 == '\0') {
    Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    bVar4 = ArtifactMgr::IsArtifactDisabled();
    CVar3 = (ChooserPacketData)(bVar4 ^ 1);
  }
  param_1[0x1a8] = CVar3;
  (**(code **)(**(long **)(param_1 + 0x218) + 0x188))(*(long **)(param_1 + 0x218));
  (**(code **)(**(long **)(param_1 + 0x220) + 0x188))
            (*(long **)(param_1 + 0x220),(byte)param_1[0x1a8] ^ 1);
  iVar5 = FUN_0441b314(*(undefined4 *)(pPVar17 + 0x40));
  if (iVar5 == 0x39) {
    param_1[0x1a8] = (ChooserPacketData)0x1;
    (**(code **)(**(long **)(param_1 + 0x218) + 0x188))(*(long **)(param_1 + 0x218),1);
    (**(code **)(**(long **)(param_1 + 0x220) + 0x188))(*(long **)(param_1 + 0x220),1);
  }
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  lVar26 = FUN_05474374(aRStack_40,"Artifact_Demo_",0);
  std::string::~string((string *)aRStack_40);
  if (lVar26 != -1) {
    param_1[0x1a8] = (ChooserPacketData)0x1;
    (**(code **)(**(long **)(param_1 + 0x218) + 0x188))(*(long **)(param_1 + 0x218),1);
    (**(code **)(**(long **)(param_1 + 0x220) + 0x188))(*(long **)(param_1 + 0x220),1);
  }
  refreshCurrentArtifact((SeedChooser *)param_1);
  if (param_1[0x1a8] != (ChooserPacketData)0x0) {
    iVar5 = FUN_0441bf40(0xb9);
    local_8c = local_8c + iVar5;
  }
  if (*(long **)(param_1 + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x230) + 0x18))();
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  TodStringTranslate(L"[DETAILS]");
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar15,0x72,pBVar25,awStack_78,(Color *)aRStack_40);
  *(PVZ2UIButton **)(param_1 + 0x230) = pPVar15;
  FUN_05476c50(awStack_78);
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x230);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b071c0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06b07680,2);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aRStack_40);
  plVar12 = *(long **)(param_1 + 0x230);
  pcVar24 = *(code **)(*plVar12 + 800);
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  (*pcVar24)(plVar12,uVar16);
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x230);
  iVar5 = FUN_0441bf40(0x46);
  iVar6 = FUN_0441bf40(0x23);
  Sexy::Insets::Insets((Insets *)aRStack_40,0,0,iVar5,iVar6);
  PVZ2UIButton::SetContentsRect(pPVar15,(TRect *)aRStack_40);
  iVar5 = local_90;
  lVar26 = *(long *)(param_1 + 0x230);
  iVar7 = FUN_0441bf40(0x23);
  iVar6 = local_8c;
  *(int *)(lVar26 + 0x48) = iVar5 + iVar7;
  iVar5 = FUN_0441bf40(0x96);
  *(int *)(lVar26 + 0x4c) = iVar6 + iVar5;
  uVar8 = FUN_0441bf40(0x46);
  *(undefined4 *)(lVar26 + 0x50) = uVar8;
  uVar8 = FUN_0441bf40(0x23);
  plVar12 = *(long **)(param_1 + 0x228);
  *(undefined4 *)(lVar26 + 0x54) = uVar8;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,awStack_98);
  Sexy::Color::Color((Color *)aRStack_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar15,0x71,pBVar25,awStack_78,(Color *)aRStack_40);
  *(PVZ2UIButton **)(param_1 + 0x228) = pPVar15;
  FUN_05476c50(awStack_78);
  nop();
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x228);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b07938,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aRStack_40,&DAT_06b07938,2);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aRStack_40);
  pPVar15 = *(PVZ2UIButton **)(param_1 + 0x228);
  iVar5 = FUN_0441bf40(0x1f);
  iVar6 = FUN_0441bf40(0x20);
  Sexy::Insets::Insets((Insets *)aRStack_40,0,0,iVar5,iVar6);
  PVZ2UIButton::SetContentsRect(pPVar15,(TRect *)aRStack_40);
  iVar5 = local_90;
  lVar26 = *(long *)(param_1 + 0x228);
  iVar7 = FUN_0441bf40(0x26);
  iVar6 = local_8c;
  *(int *)(lVar26 + 0x48) = iVar5 + iVar7;
  iVar5 = FUN_0441bf40(0x40);
  *(int *)(lVar26 + 0x4c) = iVar6 + iVar5;
  uVar8 = FUN_0441bf40(0x1f);
  *(undefined4 *)(lVar26 + 0x50) = uVar8;
  uVar8 = FUN_0441bf40(0x20);
  plVar12 = *(long **)(param_1 + 0x230);
  *(undefined4 *)(lVar26 + 0x54) = uVar8;
  param_1[0x1a9] = (ChooserPacketData)0x0;
  (**(code **)(*plVar12 + 0x188))(plVar12,1);
  (**(code **)(**(long **)(param_1 + 0x228) + 0x188))(*(long **)(param_1 + 0x228),1);
  refreshCurrentHeroPlant((SeedChooser *)param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
LAB_044236fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::isPlantTypeAFavorite(PlantType const*) const */

void __thiscall SeedChooser::isPlantTypeAFavorite(SeedChooser *this,PlantType *param_1)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)LocalProfileSaveData::GetSeedChooserFavorites(pPVar2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_01);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_01);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,param_1 + 8);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* SeedChooser::isPlantTypeATrialPlant(PlantType const*) const */

void __thiscall SeedChooser::isPlantTypeATrialPlant(SeedChooser *this,PlantType *param_1)

{
  NameMapperBase *this_00;
  int iVar1;
  
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetIdForName(this_00,(string *)(param_1 + 8));
  iVar1 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
  TrialCardManager::IsTrialingPlant(iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::isPlantTypeAPvZ1Plant(PlantType const*) const */

void __thiscall SeedChooser::isPlantTypeAPvZ1Plant(SeedChooser *this,PlantType *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  PVZ1ModeUtils::GetPvZ1PlantList((vector *)avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1 + 8);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::startMovingPacket(ChooserPacketData&) */

void __thiscall SeedChooser::startMovingPacket(SeedChooser *this,ChooserPacketData *param_1)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  SeedChooser SVar2;
  SeedChooser SVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  SeedPacket *pSVar13;
  long *plVar14;
  PVPManager *this_01;
  string *psVar15;
  string *psVar16;
  undefined8 *puVar17;
  ChooserPacketData *pCVar18;
  ResourceInfo *pRVar19;
  UIWidget *this_02;
  undefined8 *puVar20;
  SexyVector2 *pSVar21;
  undefined4 *puVar22;
  ChooserPacketData *pCVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  undefined8 uVar27;
  int iVar28;
  undefined4 uVar29;
  float fVar30;
  long *local_30;
  code *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar25 = 0;
  bVar5 = false;
  (**(code **)(*(long *)this + 0x1f8))();
  lVar10 = FUN_0441b344(*(undefined8 *)(*(long *)(this + 0x298) + 0x60),
                        *(undefined8 *)(*(long *)(this + 0x298) + 0x68));
  if (lVar10 != 0) {
    do {
      lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
      bVar6 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar10 + 0x28));
      if (bVar6) {
        lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
        plVar14 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
        (**(code **)(*plVar14 + 0x1b8))((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        psVar15 = (string *)FUN_0441b3cc(*(undefined8 *)(*(long *)(this + 0x298) + 0x60),uVar25);
        cVar8 = std::operator==((string *)(lVar10 + 8),psVar15);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        if (cVar8 != '\0') {
          bVar5 = true;
        }
      }
      uVar25 = uVar25 + 1;
      uVar11 = FUN_0441b344(*(undefined8 *)(*(long *)(this + 0x298) + 0x60),
                            *(undefined8 *)(*(long *)(this + 0x298) + 0x68));
    } while (uVar25 < uVar11);
  }
  iVar9 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
  if (iVar9 < 1) {
LAB_044247cc:
    SVar3 = this[0x1e4];
    SVar2 = this[0x1e6];
    if ((byte)SVar3 < (byte)SVar2) {
      bVar6 = false;
LAB_044247e0:
      uVar24 = (uint)(byte)SVar3;
      iVar28 = *(int *)(param_1 + 0x30);
      if ((0 < (int)(((byte)SVar2 - uVar24) - iVar9)) && (iVar28 == 0)) {
        if (bVar6) {
          uVar24 = (uint)(byte)this[0x1e5];
        }
        puVar17 = (undefined8 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),uVar24);
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(puVar17 + 5);
        *(ChooserPacketData *)((long)puVar17 + 0x34) = param_1[0x34];
        pSVar13 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        SeedPacket::SetIsImitater(pSVar13,(bool)param_1[0x34]);
        if (param_1[0x34] == (ChooserPacketData)0x0) {
          local_30 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          local_28 = *(code **)(*local_30 + 0x1d0);
          pCVar18 = param_1;
        }
        else {
          local_30 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          local_28 = *(code **)(*local_30 + 0x1d0);
          pCVar18 = (ChooserPacketData *)
                    FUN_0441b35c(*(undefined8 *)(this + 0x1c8),(long)(int)(uVar24 - 1));
        }
        pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pCVar18 + 0x28));
        (*local_28)(local_30,pRVar19);
        this_02 = (UIWidget *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x28));
        puVar20 = (undefined8 *)UIWidget::GetPositionOffset(this_02);
        *puVar17 = *puVar20;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        UIWidget::SetPositionOffset(*(undefined4 *)puVar17,*(undefined4 *)((long)puVar17 + 4));
        pSVar13 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        SeedPacket::setIsNeedShowExpTip(pSVar13,true);
        puVar17[2] = *puVar17;
        uVar29 = PVZ_T();
        *(undefined4 *)(puVar17 + 1) = uVar29;
        fVar30 = (float)PVZ_T();
        *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(puVar17 + 6) = 1;
        *(uint *)((long)puVar17 + 0x24) = uVar24;
        *(float *)((long)puVar17 + 0xc) = fVar30 + 0.5;
        calcPacketPositionInBank(this,uVar24,(SexyVector2 *)(puVar17 + 3));
        if (bVar6) {
          this[0x1e5] = (SeedChooser)((char)this[0x1e5] + '\x01');
LAB_04424910:
          pSVar13 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          SeedPacket::SetDisabled(pSVar13,true);
        }
        else {
          this[0x1e4] = (SeedChooser)((char)this[0x1e4] + '\x01');
          if (bVar5) goto LAB_04424910;
        }
        iVar28 = -1;
        *(undefined4 *)(param_1 + 0x30) = 5;
        goto LAB_04424604;
      }
    }
    else {
      iVar28 = *(int *)(param_1 + 0x30);
      bVar6 = false;
    }
    if ((iVar28 == 2) && (bVar5 < (bVar6 ^ 1U))) {
      lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
      bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar10 + 0x28));
      if (bVar5) {
        lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
        pSVar13 = (SeedPacket *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
        SeedPacket::SetDisabled(pSVar13,false);
      }
      lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
      *(undefined4 *)(lVar10 + 0x30) = 0;
      iVar28 = *(int *)(param_1 + 0x24);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)(param_1 + 0x28));
      SVar2 = this[0x1e4];
      iVar26 = iVar28 + 1;
      if (iVar26 < (int)(uint)(byte)SVar2) {
        lVar10 = (long)iVar26;
        pSVar21 = (SexyVector2 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar10);
        if (pSVar21[0x34] == (SexyVector2)0x0) {
          iVar28 = -1;
        }
        while( true ) {
          iVar4 = *(int *)(pSVar21 + 0x24) + -1;
          *(int *)(pSVar21 + 0x24) = iVar4;
          if (*(int *)(pSVar21 + 0x30) == 1) {
            calcPacketPositionInBank(this,iVar4,pSVar21 + 0x18);
          }
          else {
            calcPacketPositionInBank(this,iVar4,pSVar21);
            lVar12 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar10);
            uVar27 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar12 + 0x28));
            puVar22 = (undefined4 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar10);
            UIWidget::SetPositionOffset(*puVar22,puVar22[1],uVar27);
          }
          uVar27 = *(undefined8 *)(this + 0x1c8);
          iVar26 = iVar26 + 1;
          pCVar18 = (ChooserPacketData *)FUN_0441b35c(uVar27,lVar10 + -1);
          pCVar23 = (ChooserPacketData *)FUN_0441b35c(uVar27,lVar10);
          ChooserPacketData::operator=(pCVar18,pCVar23);
          SVar2 = this[0x1e4];
          if ((int)(uint)(byte)SVar2 <= iVar26) break;
          pSVar21 = (SexyVector2 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar10 + 1);
          lVar10 = lVar10 + 1;
        }
      }
      else {
        iVar28 = -1;
      }
      uVar27 = *(undefined8 *)(this + 0x1c8);
      this[0x1e4] = (SeedChooser)((char)SVar2 - 1U);
      lVar10 = FUN_0441b35c(uVar27,(char)SVar2 - 1U);
      *(undefined4 *)(lVar10 + 0x30) = 5;
      SVar2 = this[0x1e4];
      lVar10 = FUN_0441b35c(uVar27,SVar2);
      *(uint *)(lVar10 + 0x24) = (uint)(byte)SVar2;
      lVar10 = FUN_0441b35c(uVar27,this[0x1e4]);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(lVar10 + 0x28),(RtWeakPtr *)&local_20);
      lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),this[0x1e4]);
      pSVar13 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
      SeedPacket::setIsNeedShowExpTip(pSVar13,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      goto LAB_04424604;
    }
  }
  else {
    uVar25 = 0;
    bVar6 = false;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    BoardHelpers::ApplyLevelOverride_RiftTimedToolList((vector *)&local_20);
    lVar10 = FUN_0441b344(local_20,local_18);
    if (lVar10 != 0) {
      do {
        lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
        bVar7 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar10 + 0x28));
        uVar27 = local_20;
        if (bVar7) {
          lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(param_1 + 0x20));
          this_01 = (PVPManager *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
          psVar15 = (string *)PVPManager::GetPVPMapDataList(this_01);
          uVar27 = local_20;
          psVar16 = (string *)FUN_0441b3dc(local_20,uVar25);
          cVar8 = std::operator==(psVar15,psVar16);
          if (cVar8 != '\0') {
            bVar6 = true;
          }
        }
        uVar25 = uVar25 + 1;
        uVar11 = FUN_0441b344(uVar27,local_18);
      } while (uVar25 < uVar11);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
    if (!bVar6) goto LAB_044247cc;
    SVar2 = this[0x1e6];
    if ((byte)this[0x1e5] < (byte)SVar2) {
      SVar3 = this[0x1e4];
      goto LAB_044247e0;
    }
  }
  iVar28 = -1;
LAB_04424604:
  if ((-1 < *(int *)(this + 0x1e0)) &&
     (lVar10 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(this + 0x1e0)),
     1 < *(int *)(lVar10 + 0x30) - 3U)) {
    SVar2 = this[0x1e4];
    bVar5 = SVar2 != (SeedChooser)0x0;
    if (SVar2 != (SeedChooser)0x0) {
      uVar27 = *(undefined8 *)(this + 0x1c8);
      lVar12 = 0;
      do {
        lVar1 = lVar12 + 1;
        lVar12 = FUN_0441b35c(uVar27,lVar12);
        if (*(char *)(lVar12 + 0x34) != '\0') {
          bVar5 = false;
        }
        lVar12 = lVar1;
      } while ((int)lVar1 < (int)(uint)(byte)SVar2);
    }
    uVar29 = 0;
    if (!bVar5) {
      uVar29 = 5;
    }
    *(undefined4 *)(lVar10 + 0x30) = uVar29;
    pSVar13 = (SeedPacket *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
    SeedPacket::SetDisabled(pSVar13,(bool)(bVar5 ^ 1));
  }
  if (*(long *)(this + 0x1f8) != 0) {
    *(bool *)(*(long *)(this + 0x1f8) + 0x6e) =
         (uint)(byte)this[0x1e4] + iVar9 != (uint)(byte)this[0x1e7];
  }
  if (*(long *)(this + 0x200) != 0) {
    *(bool *)(*(long *)(this + 0x200) + 0x6e) = this[0x1e4] == (SeedChooser)0x0;
  }
  if (-1 < iVar28) {
    uVar27 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),(long)iVar28);
    (**(code **)(*(long *)this + 0x1e0))(this,uVar27);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedChooser::deleteChooserPackets() */

void __thiscall SeedChooser::deleteChooserPackets(SeedChooser *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x1b0);
  *(undefined4 *)(this + 0x1e0) = 0xffffffff;
  iVar2 = FUN_0441b350(uVar6,*(undefined8 *)(this + 0x1b8));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_0441b35c(uVar6,lVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar3 + 0x28));
      if (bVar1) {
        lVar3 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar5);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
        (**(code **)(*plVar4 + 0x48))();
      }
      lVar5 = lVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x1b0);
      iVar2 = FUN_0441b350(uVar6,*(undefined8 *)(this + 0x1b8));
    } while ((int)lVar5 < iVar2);
  }
  uVar6 = *(undefined8 *)(this + 0x1c8);
  lVar5 = 0;
  iVar2 = FUN_0441b350(uVar6,*(undefined8 *)(this + 0x1d0));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_0441b35c(uVar6,lVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar3 + 0x28));
      if (bVar1) {
        lVar3 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar5);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x28));
        (**(code **)(*plVar4 + 0x48))();
      }
      lVar5 = lVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x1c8);
      iVar2 = FUN_0441b350(uVar6,*(undefined8 *)(this + 0x1d0));
    } while ((int)lVar5 < iVar2);
  }
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::clear
            ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1b0));
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::clear
            ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1c8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::~SeedChooser() */

void __thiscall SeedChooser::~SeedChooser(SeedChooser *this)

{
  LawnApp *pLVar1;
  PrimeText *this_00;
  long *plVar2;
  ToolTipWidget *this_01;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__SeedChooser_068489c8;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06848790;
  *(undefined **)(this + 0x1a0) = &DAT_068489f8;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"HeroPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  if (*(long *)(this + 0x288) != 0) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x68))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(this + 0x288) + 0x80))(*(long **)(this + 0x288),1,1);
    if (*(long **)(this + 0x288) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x288) + 0x18))();
      *(undefined8 *)(this + 0x288) = 0;
    }
  }
  deleteChooserPackets(this);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x1f8) == (long *)0x0) {
    plVar2 = *(long **)(this + 0x238);
  }
  else {
    (**(code **)(**(long **)(this + 0x1f8) + 0x18))();
    *(undefined8 *)(this + 0x1f8) = 0;
    plVar2 = *(long **)(this + 0x238);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
    *(undefined8 *)(this + 0x238) = 0;
  }
  if (*(long **)(this + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x200) + 0x18))();
    *(undefined8 *)(this + 0x200) = 0;
  }
  if (*(long **)(this + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x208) + 0x18))();
    *(undefined8 *)(this + 0x208) = 0;
  }
  if (*(long **)(this + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x210) + 0x18))();
    *(undefined8 *)(this + 0x210) = 0;
  }
  if (*(long **)(this + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x218) + 0x18))();
    *(undefined8 *)(this + 0x218) = 0;
  }
  if (*(long **)(this + 0x220) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x220) + 0x18))();
    *(undefined8 *)(this + 0x220) = 0;
  }
  if (*(long **)(this + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x228) + 0x18))();
    *(undefined8 *)(this + 0x228) = 0;
  }
  if (*(long **)(this + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x230) + 0x18))();
    *(undefined8 *)(this + 0x230) = 0;
  }
  if (*(long **)(this + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x268) + 0x18))();
    *(undefined8 *)(this + 0x268) = 0;
  }
  if (*(long **)(this + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x270) + 0x18))();
    *(undefined8 *)(this + 0x270) = 0;
  }
  this_01 = *(ToolTipWidget **)(this + 0x2f0);
  if (this_01 != (ToolTipWidget *)0x0) {
    ToolTipWidget::~ToolTipWidget(this_01);
    AK::FreeHook(this_01);
    *(undefined8 *)(this + 0x2f0) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x340));
  Sexy::RtName::~RtName((RtName *)(this + 0x330));
  Sexy::RtName::~RtName((RtName *)(this + 800));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2f8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x278));
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::~vector
            ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1c8));
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::~vector
            ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1b0));
  SlidingWidget::~SlidingWidget((SlidingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SeedChooser::~SeedChooser() */

void __thiscall SeedChooser::~SeedChooser(SeedChooser *this)

{
  ~SeedChooser(this + -0x10);
  return;
}


/* SeedChooser::~SeedChooser() */

void __thiscall SeedChooser::~SeedChooser(SeedChooser *this)

{
  ~SeedChooser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedChooser::~SeedChooser() */

void __thiscall SeedChooser::~SeedChooser(SeedChooser *this)

{
  ~SeedChooser(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::OnMouseDown(int, int) */

void __thiscall SeedChooser::OnMouseDown(SeedChooser *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0441b2e0(*(undefined4 *)(this + 0x16c));
  if ((cVar1 != '\0') || (this[0x1f0] != (SeedChooser)0x0)) goto LAB_04425228;
  if (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x288) != (PVZ2UISeedChooserPreviewDisplay *)0x0)
  {
    PVZ2UISeedChooserPreviewDisplay::CheckPlantPotButtonPress
              (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x288),param_1,param_2);
  }
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 == '\0') {
LAB_04425140:
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar3 = EA::Text::PolygonFont::GetFontType();
    if (iVar2 != iVar3) goto LAB_04425140;
    iVar2 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
  }
  cVar1 = Sexy::TRect<int>::Contains
                    ((TRect<int> *)(this + 0x2a0),(param_1 - *(int *)(this + 0x2e0)) - iVar2,
                     param_2 - *(int *)(this + 0x2e4));
  if (cVar1 != '\0') {
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    UIWidget::SetMouseDownPos((UIWidget *)this,aPStack_10);
    FUN_0441b748(this + 0x160);
    FUN_0441b2a4(this + 0x161,0);
  }
  plVar4 = *(long **)(this + 0x208);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x208);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0x6b,1);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  plVar4 = *(long **)(this + 0x210);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x210);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0x75,1);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  plVar4 = *(long **)(this + 0x218);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x218);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0x6d,1);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  plVar4 = *(long **)(this + 0x220);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x220);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0x6e,1);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  plVar4 = *(long **)(this + 0x228);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x228);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0x71,1);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  plVar4 = *(long **)(this + 0x230);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x230);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0x72,1);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  cVar1 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
  if (cVar1 == '\0') {
LAB_044251e8:
    plVar4 = *(long **)(this + 0x1f8);
    iVar2 = 0;
    cVar1 = *(char *)((long)plVar4 + 0x6e);
  }
  else {
    iVar2 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
    iVar3 = EA::Text::PolygonFont::GetFontType();
    if (iVar2 != iVar3) goto LAB_044251e8;
    iVar2 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
    plVar4 = *(long **)(this + 0x1f8);
    cVar1 = *(char *)((long)plVar4 + 0x6e);
  }
  if ((cVar1 == '\0') &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    lVar6 = *(long *)(this + 0x1f8);
    *(undefined1 *)(lVar6 + 0x70) = 1;
    *(undefined1 *)(lVar6 + 0x71) = 1;
    FUN_0441b748(this + 0x160);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Button_LetsRock_Press");
  }
  plVar4 = *(long **)(this + 0x200);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1 - iVar2,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x200);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0x6c,1);
    FUN_0441b748(this + 0x160);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  plVar4 = *(long **)(this + 0x268);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6e) == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1,param_2), cVar1 != '\0')) {
    lVar6 = *(long *)(this + 0x268);
    *(undefined1 *)(lVar6 + 0x70) = 1;
    *(undefined1 *)(lVar6 + 0x71) = 1;
    FUN_0441b748(this + 0x160);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
  plVar4 = *(long **)(this + 0x270);
  if (((plVar4 != (long *)0x0) && (*(char *)((long)plVar4 + 0x6c) != '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x300))(plVar4,param_1,param_2), cVar1 != '\0')) {
    plVar4 = *(long **)(this + 0x270);
    *(undefined1 *)(plVar4 + 0xe) = 1;
    *(undefined1 *)((long)plVar4 + 0x71) = 1;
    (**(code **)(*plVar4 + 0x218))(plVar4,param_1,param_2,0,1);
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Press");
  }
LAB_04425228:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::onItemPurchasedFromStore(MagentoProductProps*) */

void __thiscall
SeedChooser::onItemPurchasedFromStore(SeedChooser *this,MagentoProductProps *param_1)

{
  long lVar1;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  SeedPacket *this_00;
  char *pcVar5;
  undefined8 uVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar6 = *(undefined8 *)(this + 0x1b0);
    uVar4 = FUN_0441b350(uVar6,*(undefined8 *)(this + 0x1b8));
    if (uVar4 <= uVar3) goto LAB_04425754;
    lVar1 = FUN_0441b35c(uVar6,uVar3);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar1 + 0x38));
    uVar4 = uVar3 + 1;
  } while (param_1 != (MagentoProductProps *)pRVar2);
  lVar1 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar3);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(lVar1 + 0x38),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x278),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar3);
  this_00 = (SeedPacket *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar1 + 0x28));
  SeedPacket::SetPurchasable(this_00,false);
  if ((this[0x1e4] == (SeedChooser)0x0) &&
     (lVar1 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar3), *(char *)(lVar1 + 0x34) != '\0')) {
    *(undefined4 *)(lVar1 + 0x30) = 5;
  }
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Buy_Plant_Confirm");
  uVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),uVar3);
  (**(code **)(*(long *)this + 0x1f8))(this,uVar6);
LAB_04425754:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::initializeSeedPacket(SeedPacket*, PacketState, Sexy::RtWeakPtr<MagentoProductProps>,
   bool) */

void __thiscall
SeedChooser::initializeSeedPacket
          (SeedChooser *this,UIWidget *param_1,undefined4 param_3,RtWeakPtr *param_4,byte param_5)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  SexyVector2 *pSVar6;
  SeedPacket *this_00;
  PlantType *pPVar7;
  int *piVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (UIWidget *)0x0) {
    UIWidget::SetParentWidget(param_1,(UIWidget *)this);
    FUN_0441b754(param_1 + 0x81,param_1 + 0x82);
    SeedPacket::SetOnDisplay((SeedPacket *)param_1,true);
    UIWidget::SetManuallyDrawn(param_1,true);
    if ((param_5 == 0) && (*(int *)(*(long *)(this + 0x298) + 0xcc) != -1)) {
      SeedPacket::GetPlantType();
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      if (bVar4) {
        SeedPacket::GetPlantType();
        pPVar7 = (PlantType *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        lVar10 = PlantType::GetProps(pPVar7);
        piVar8 = eastl::min_alt<int>((int *)(lVar10 + 0x2c),(int *)(*(long *)(this + 0x298) + 0xcc))
        ;
        SeedPacket::SetPlantAvatarAndLevel((SeedPacket *)param_1,*piVar8,-1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      }
    }
    bVar2 = RiftUtils::IsRiftTimedLevel();
    if (param_5 < bVar2) {
      SeedPacket::GetPlantType();
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      if (bVar4) {
        SeedPacket::SetPlantAvatarAndLevel((SeedPacket *)param_1,1,-1);
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_48 = 0;
    local_18 = 0;
    local_44 = 0;
    local_14 = 0;
    local_40 = 0;
    local_10 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    ChooserPacketData::ChooserPacketData((ChooserPacketData *)&local_48);
    std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::push_back
              ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1b0),
               (ChooserPacketData *)&local_48);
    ChooserPacketData::~ChooserPacketData((ChooserPacketData *)&local_48);
    pSVar6 = (SexyVector2 *)
             std::
             vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>::
             back((vector<RandomJitteredWaveInstruction,std::allocator<RandomJitteredWaveInstruction>>
                   *)(this + 0x1b0));
    *(undefined8 *)pSVar6 = 0;
    *(undefined8 *)(pSVar6 + 8) = 0;
    *(undefined8 *)(pSVar6 + 0x10) = 0;
    *(undefined8 *)(pSVar6 + 0x18) = 0;
    *(undefined8 *)(pSVar6 + 0x20) = 0;
    *(undefined8 *)(pSVar6 + 0x28) = 0;
    *(undefined8 *)(pSVar6 + 0x30) = 0;
    *(undefined8 *)(pSVar6 + 0x38) = 0;
    iVar5 = FUN_0441b350(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
    uVar1 = iVar5 - 1;
    Sexy::OutputDebugStrF((wchar_t *)"change list id : initializeSeedPacket index= %d",(ulong)uVar1)
    ;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(pSVar6 + 0x28),(RtWeakPtrBase *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    if (param_5 == 0) {
      this_00 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(pSVar6 + 0x28));
      SeedPacket::setIsNeedShowExpTip(this_00,true);
      calcPacketPositionInChooser(this,uVar1,pSVar6);
      *(uint *)(pSVar6 + 0x20) = uVar1;
      uVar12 = PVZ_EOT();
      lVar10 = *(long *)this;
      pcVar9 = *(code **)(*(long *)param_1 + 0x1b8);
      *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)pSVar6;
      *(undefined8 *)(pSVar6 + 0x18) = *(undefined8 *)pSVar6;
      *(undefined4 *)(pSVar6 + 0x24) = 0;
      pSVar6[0x34] = (SexyVector2)0x0;
      pcVar11 = *(code **)(lVar10 + 0x208);
      *(undefined4 *)(pSVar6 + 8) = uVar12;
      *(undefined4 *)(pSVar6 + 0xc) = uVar12;
      (*pcVar9)((ChooserPacketData *)&local_48,param_1);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      cVar3 = (*pcVar11)(this,lVar10 + 8);
      if (cVar3 != '\0') {
        param_3 = 3;
      }
      *(undefined4 *)(pSVar6 + 0x30) = param_3;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(pSVar6 + 0x38),param_4);
      if (*(int *)(pSVar6 + 0x30) != 6 && *(int *)(pSVar6 + 0x30) != 3) {
        this[0x1e7] = (SeedChooser)((char)this[0x1e7] + '\x01');
      }
      SeedPacket::GetPlantType();
      pPVar7 = (PlantType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      cVar3 = isPlantTypeAFavorite(this,pPVar7);
      if (cVar3 == '\0') {
        SeedPacket::SetFavorite((SeedPacket *)param_1,false);
      }
      else {
        SeedPacket::SetFavorite((SeedPacket *)param_1,true);
      }
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_48);
      if (cVar3 != '\0') {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        bVar4 = std::operator==((string *)(lVar10 + 8),"imitater");
        if (bVar4) {
          iVar5 = *(int *)(pSVar6 + 0x30);
          *(uint *)(this + 0x1e0) = uVar1;
          if (1 < iVar5 - 3U) {
            *(undefined4 *)(pSVar6 + 0x30) = 5;
          }
          pSVar6[0x34] = (SexyVector2)0x1;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    }
    else {
      calcPacketPositionInChooser(this,uVar1,pSVar6);
      *(uint *)(pSVar6 + 0x20) = uVar1;
      uVar12 = PVZ_EOT();
      *(undefined4 *)(pSVar6 + 0x24) = 0;
      *(undefined8 *)(pSVar6 + 0x10) = *(undefined8 *)pSVar6;
      *(undefined8 *)(pSVar6 + 0x18) = *(undefined8 *)pSVar6;
      pSVar6[0x34] = (SexyVector2)0x0;
      *(undefined4 *)(pSVar6 + 0x30) = param_3;
      *(undefined4 *)(pSVar6 + 8) = uVar12;
      *(undefined4 *)(pSVar6 + 0xc) = uVar12;
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(pSVar6 + 0x38),param_4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::addToolToChooserPackets(std::string const&) */

void __thiscall SeedChooser::addToolToChooserPackets(SeedChooser *this,string *param_1)

{
  SeedPacket *this_00;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,(RtName *)(this + 0x330));
  UIWidget::CreateWidget(aRStack_18,1);
  nop();
  Sexy::RtName::~RtName(aRStack_18);
  (**(code **)(*(long *)this_00 + 0x230))(this_00,param_1);
  SeedPacket::SetAlwaysPlantable(this_00,false);
  UIWidget::SetVisible((UIWidget *)this_00,false);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_18);
  initializeSeedPacket(this,this_00,0,aRStack_18,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::initChooserPackets() */

void __thiscall SeedChooser::initChooserPackets(SeedChooser *this)

{
  SeedChooser SVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *__s;
  long lVar6;
  undefined8 *puVar7;
  UIWidget *this_00;
  SeedPacket *this_01;
  SeedPacket *this_02;
  SeedChooser *pSVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::resize
            ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1c8),
             (ulong)(byte)this[0x1e6]);
  uVar10 = *(undefined8 *)(this + 0x1c8);
  this[0x1e4] = (SeedChooser)0x0;
  this[0x1e5] = (SeedChooser)0x0;
  __s = (void *)FUN_0441b35c(uVar10,0);
  lVar6 = FUN_0441b350(uVar10,*(undefined8 *)(this + 0x1d0));
  memset(__s,0,lVar6 << 6);
  cVar2 = RiftUtils::IsRiftTimedLevel();
  iVar4 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
  SVar1 = this[0x1e6];
  iVar9 = (uint)(byte)SVar1 - iVar4;
  if (0 < iVar9) {
    uVar11 = PVZ_EOT();
    lVar6 = 0;
    do {
      puVar7 = (undefined8 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar6);
      Sexy::RtName::RtName((RtName *)local_18,(RtName *)(this + 800));
      UIWidget::CreateWidget((RtName *)local_18,1);
      nop();
      Sexy::RtName::~RtName((RtName *)local_18);
      UIWidget::SetParentWidget(this_00,(UIWidget *)this);
      FUN_0441b754(this_00 + 0x81,this_00 + 0x82);
      SeedPacket::SetOnDisplay((SeedPacket *)this_00,true);
      UIWidget::SetManuallyDrawn(this_00,true);
      if (*(int *)(*(long *)(this + 0x298) + 0xcc) != -1) {
        SeedPacket::SetPlantAvatarAndLevel
                  ((SeedPacket *)this_00,*(int *)(*(long *)(this + 0x298) + 0xcc),-1);
      }
      if ((cVar2 != '\0') &&
         (bVar3 = Sexy::RtObject::IsA<SeedPacket_ToolRift>((RtObject *)this_00), !bVar3)) {
        SeedPacket::SetPlantAvatarAndLevel((SeedPacket *)this_00,1,-1);
      }
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(puVar7 + 5),(RtWeakPtrBase *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      this_01 = (SeedPacket *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(puVar7 + 5));
      SeedPacket::setIsNeedShowExpTip(this_01,true);
      Sexy::FastCurve::SetOutRange((FastCurve *)local_18,0.0,0.0);
      iVar5 = (int)lVar6;
      *puVar7 = local_18[0];
      lVar6 = lVar6 + 1;
      *(undefined4 *)(puVar7 + 4) = 0xffffffff;
      puVar7[2] = local_18[0];
      puVar7[3] = local_18[0];
      *(undefined4 *)(puVar7 + 6) = 5;
      *(undefined4 *)((long)puVar7 + 0x24) = 0;
      *(undefined4 *)(puVar7 + 1) = uVar11;
      *(undefined4 *)((long)puVar7 + 0xc) = uVar11;
      SVar1 = this[0x1e6];
      iVar9 = (uint)(byte)SVar1 - iVar4;
    } while (iVar5 + 1 < iVar9);
  }
  if (iVar9 < (int)(uint)(byte)SVar1) {
    uVar11 = PVZ_EOT();
    lVar6 = (long)iVar9;
    do {
      iVar9 = iVar9 + 1;
      puVar7 = (undefined8 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar6);
      Sexy::RtName::RtName((RtName *)local_18,(RtName *)(this + 0x330));
      UIWidget::CreateWidget((RtName *)local_18,1);
      nop();
      Sexy::RtName::~RtName((RtName *)local_18);
      SeedPacket::SetAlwaysPlantable(this_02,true);
      UIWidget::SetParentWidget((UIWidget *)this_02,(UIWidget *)this);
      FUN_0441b754(this_02 + 0x81,this_02 + 0x82);
      SeedPacket::SetOnDisplay(this_02,true);
      UIWidget::SetManuallyDrawn((UIWidget *)this_02,true);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(puVar7 + 5),(RtWeakPtrBase *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::FastCurve::SetOutRange((FastCurve *)local_18,0.0,0.0);
      *puVar7 = local_18[0];
      *(undefined4 *)(puVar7 + 4) = 0xffffffff;
      puVar7[2] = local_18[0];
      puVar7[3] = local_18[0];
      *(undefined4 *)(puVar7 + 6) = 5;
      *(undefined4 *)((long)puVar7 + 0x24) = 0;
      *(undefined4 *)(puVar7 + 1) = uVar11;
      *(undefined4 *)((long)puVar7 + 0xc) = uVar11;
      lVar6 = lVar6 + 1;
    } while (iVar9 < (int)(uint)(byte)this[0x1e6]);
  }
  pSVar8 = (SeedChooser *)std::min<unsigned_char>((uchar *)(this + 0x1e7),(uchar *)(this + 0x1e6));
  this[0x1e7] = *pSVar8;
  cVar2 = std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::empty
                    ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1b0));
  if (cVar2 == '\0') {
    lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
    iVar4 = FUN_0441b298(*(undefined4 *)(lVar6 + 0x38));
    lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
    iVar5 = FUN_0441b29c(*(undefined4 *)(lVar6 + 0x3c));
    uVar10 = *(undefined8 *)(this + 0x1b0);
    iVar9 = 0;
    if (DAT_06a8870c + 1 != 0) {
      iVar9 = (*(int *)(this + 0x2a8) - iVar4 * DAT_06a8870c) / (DAT_06a8870c + 1);
    }
    lVar6 = FUN_0441b350(uVar10,*(undefined8 *)(this + 0x1b8));
    lVar6 = FUN_0441b35c(uVar10,lVar6 + -1);
    iVar9 = (int)((*(float *)(lVar6 + 4) - (float)*(int *)(this + 0x2ac)) + (float)iVar5 +
                 (float)iVar9);
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    *(int *)(this + 0x1ec) = iVar9;
    *(undefined8 *)(this + 0x2b0) = *(undefined8 *)(this + 0x2a0);
    *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(this + 0x2a8);
    *(int *)(this + 700) = iVar5 + *(int *)(this + 0x2ac);
  }
  else {
    *(undefined4 *)(this + 0x1ec) = 0;
  }
  *(undefined4 *)(this + 0x1e8) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::OverrideValidPlants(std::vector<int, std::allocator<int> > const&) */

void __thiscall SeedChooser::OverrideValidPlants(SeedChooser *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  NameMapperBase *this_00;
  long lVar4;
  int *piVar5;
  long *extraout_x0;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  LevelEditorCardPlantInterface aLStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  deleteChooserPackets(this);
  this[0x1e7] = (SeedChooser)0x0;
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_28);
  do {
    bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                      ((ObjectTypeDirectoryIterator *)aLStack_28);
    if (!bVar1) {
      initChooserPackets(this);
      *(undefined4 *)(this + 0x318) = 0;
      uVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),0);
      (**(code **)(*(long *)this + 0x1f8))(this,uVar7);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_28);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    if ((pRVar3 != (ResourceInfo *)0x0) && (pRVar3[0x30] != (ResourceInfo)0x0)) {
      this_00 = (NameMapperBase *)PlantNameMapper::GetInstance();
      iVar2 = NameMapperBase::GetIdForName(this_00,(string *)(pRVar3 + 8));
      uVar7 = *(undefined8 *)param_1;
      lVar4 = FUN_0441b318(uVar7,*(undefined8 *)(param_1 + 8));
      for (lVar6 = 0; lVar6 != lVar4; lVar6 = lVar6 + 1) {
        piVar5 = (int *)FUN_0441b324(uVar7,lVar6);
        if (iVar2 == *piVar5) {
          Sexy::RtName::RtName(aRStack_18,(RtName *)(this + 800));
          UIWidget::CreateWidget(aRStack_18,1);
          nop();
          Sexy::RtName::~RtName(aRStack_18);
          pcVar8 = *(code **)(*extraout_x0 + 0x198);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
          (*pcVar8)(extraout_x0,aRStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_18);
          initializeSeedPacket(this,extraout_x0,0,aRStack_18,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          break;
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::createSortedPlantList() */

void SeedChooser::createSortedPlantList(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  TextureInfo *in_x0;
  ProfileMgr *this;
  PIInterpolator *in_x8;
  LevelEditorCardPlantInterface aLStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(in_x0);
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_40);
  while (bVar3 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_40), bVar3) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    PlantTypeList::Add();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_40);
  }
  if (cVar1 != '\0') {
    FUN_0441be3c(afStack_28);
    FUN_04426e28();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  FUN_0441be98(afStack_28);
  FUN_04426e28();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (cVar2 != '\0') {
    FUN_0441bee4(afStack_28);
    FUN_04426e28();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::VerifyAndSelectSeeds() */

void __thiscall SeedChooser::VerifyAndSelectSeeds(SeedChooser *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ResourceInfo *pRVar6;
  PVZ2UIDialog *pPVar7;
  long lVar8;
  uint uVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [8];
  undefined1 auStack_70 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  uVar9 = (uint)(byte)this[0x1e7];
  if (this[0x1e7] != (SeedChooser)0x0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      while( true ) {
        lVar5 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x28));
        SeedPacket::GetPlantType();
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)avStack_68,(RtWeakPtr *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
        iVar3 = (int)lVar8;
        if (cVar2 == '\0') break;
        lVar5 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 0x28));
        SeedPacket::GetPlantType();
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
        cVar2 = isPlantTypeAPvZ1Plant(this,(PlantType *)pRVar6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        if (cVar2 == '\0') {
          uVar9 = uVar9 + 1;
        }
        lVar8 = lVar8 + 1;
        if ((int)(uint)(byte)this[0x1e7] <= iVar3 + 1) goto LAB_04427278;
      }
      lVar8 = lVar8 + 1;
    } while (iVar3 + 1 < (int)(uint)(byte)this[0x1e7]);
  }
LAB_04427278:
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (((cVar2 == '\0') || (cVar2 = PVZ1ModeUtils::IsHardMode(), pLVar1 = gLawnApp, cVar2 == '\0'))
     || ((int)uVar9 < 3)) {
    Board::GetSeedChooserWarnings(*(vector **)(gLawnApp + 0x9f0));
    cVar2 = FUN_054765e8(awStack_78);
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      iVar3 = FUN_0441bf40(500);
      iVar4 = FUN_0441bf40(0xf0);
      pPVar7 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
      TodStringTranslate(L"[SEED_CHOOSER_WARNING_TITLE]");
      PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)aRStack_50);
      FUN_05476c50((wstring *)aRStack_50);
      PVZ2UIDialog::SetFooterLabel(pPVar7,awStack_78);
      FUN_05478178(auStack_70,L"[REPICK_BUTTON]",auStack_80);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onRepickButtonPressed);
      Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>
                (aDStack_38,(wstring *)aRStack_50);
      PVZ2UIDialog::AddButton(pPVar7,auStack_70,aDStack_38,1);
      FUN_05476c50(auStack_70);
      nop();
      FUN_05478178(auStack_70,L"[START_GAME_BUTTON]",auStack_80);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onPlayButtonPressed);
      Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>
                (aDStack_38,(wstring *)aRStack_50);
      PVZ2UIDialog::AddButton(pPVar7,auStack_70,aDStack_38,0);
      FUN_05476c50(auStack_70);
      nop();
      PVZ2UIDialog::SetBackgroundDarken(pPVar7,true,0.5);
    }
    else {
      sendBorrowRequestBeforeFinalize(this);
    }
    FUN_05476c50(awStack_78);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
             *)avStack_68);
  }
  else {
    iVar3 = FUN_0441bf40(500);
    iVar4 = FUN_0441bf40(0xf0);
    pPVar7 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
    TodStringTranslate(L"[SEED_CHOOSER_WARNING_TITLE]");
    PVZ2UIDialog::SetHeaderLabel(pPVar7,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    TodStringTranslate(L"[PVZ1MODE_HARDMODE_SELECT_PLANT_TIPS]");
    PVZ2UIDialog::SetFooterLabel(pPVar7,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    FUN_05478178(auStack_70,L"[BUTTON_OK]",awStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRepickButtonPressed);
    Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>(aDStack_38,(wstring *)aRStack_50)
    ;
    PVZ2UIDialog::AddButton(pPVar7,auStack_70,aDStack_38,0);
    FUN_05476c50(auStack_70);
    nop();
    PVZ2UIDialog::SetBackgroundDarken(pPVar7,true,0.5);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
             *)avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::updateFavoriteSorting() */

void __thiscall SeedChooser::updateFavoriteSorting(SeedChooser *this)

{
  RtWeakPtr *this_00;
  vector<ChooserPacketData,std::allocator<ChooserPacketData>> *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  RtWeakPtrBase *pRVar5;
  long lVar6;
  RtObject *pRVar7;
  ChooserPacketData *pCVar8;
  SexyVector2 *pSVar9;
  vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>> *this_03
  ;
  ulong uVar10;
  string *psVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  PlantTypeList aPStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr *)(this + 0x2f8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar7 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(pRVar7);
    if (!bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      SeedPacket::GetPlantType();
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    }
  }
  createSortedPlantList();
  cVar2 = CustomLevelUtils::IsCustomLevel();
  if (cVar2 != '\0') {
    uVar13 = 0;
    nop();
    while( true ) {
      uVar14 = *(undefined8 *)(*(long *)(this + 0x298) + 0x60);
      uVar10 = FUN_0441b344(uVar14,*(undefined8 *)(*(long *)(this + 0x298) + 0x68));
      if (uVar10 <= uVar13) break;
      psVar11 = (string *)FUN_0441b3cc(uVar14,uVar13);
      bVar1 = std::operator==("minigame_imitater",psVar11);
      if (bVar1) {
        psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        uVar13 = uVar13 + 1;
        std::string::string((string *)local_20,"minigame_imitater");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar11);
        std::string::~string((string *)local_20);
        nop();
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back(this_03,(RtWeakPtr *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      else {
        uVar13 = uVar13 + 1;
      }
    }
  }
  iVar15 = 0;
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_02);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_02);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,pRVar5);
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    iVar3 = findPlantTypeChooserPacketIndex(this,(string *)(lVar16 + 8));
    if (-1 < iVar3) {
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
      ;
      bVar1 = std::operator==((string *)(lVar16 + 8),"imitater");
      if (bVar1) {
        *(int *)(this + 0x1e0) = iVar15;
      }
      pCVar8 = (ChooserPacketData *)FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)iVar3);
      std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::push_back
                ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)local_20,pCVar8);
      lVar16 = FUN_0441b35c(local_20[0],(long)iVar15);
      *(int *)(lVar16 + 0x20) = iVar15;
      iVar15 = iVar15 + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  iVar3 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
  iVar3 = iVar3 + iVar15;
  if (iVar15 < iVar3) {
    lVar16 = (long)iVar15;
    do {
      lVar12 = 0;
      while( true ) {
        uVar14 = *(undefined8 *)(this + 0x1b0);
        iVar4 = FUN_0441b350(uVar14,*(undefined8 *)(this + 0x1b8));
        if (iVar4 <= (int)lVar12) break;
        lVar6 = FUN_0441b35c(uVar14,lVar12);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar6 + 0x28));
        if (bVar1) {
          lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar12);
          pRVar7 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
          bVar1 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(pRVar7);
          if (bVar1) {
            pCVar8 = (ChooserPacketData *)FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar12);
            std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::push_back
                      ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)local_20,
                       pCVar8);
            lVar12 = FUN_0441b35c(local_20[0],lVar16);
            *(int *)(lVar12 + 0x20) = iVar15;
            break;
          }
        }
        lVar12 = lVar12 + 1;
      }
      iVar15 = iVar15 + 1;
      lVar16 = lVar16 + 1;
    } while (iVar15 != iVar3);
  }
  this_01 = (vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)(this + 0x1b0);
  iVar15 = 0;
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::clear(this_01);
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::operator=
            (this_01,(vector *)local_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_01);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_01);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    pSVar9 = (SexyVector2 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    calcPacketPositionInChooser(this,iVar15,pSVar9);
    *(int *)(pSVar9 + 0x24) = iVar15;
    iVar15 = iVar15 + 1;
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_48);
  }
  reindexBankPackets(this);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_58);
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)a_Stack_58);
    setPlantPreview(this,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  }
  std::vector<ChooserPacketData,std::allocator<ChooserPacketData>>::~vector
            ((vector<ChooserPacketData,std::allocator<ChooserPacketData>> *)local_20);
  PlantTypeList::~PlantTypeList(aPStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::togglePlantFavorite() */

void __thiscall SeedChooser::togglePlantFavorite(SeedChooser *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *pPVar5;
  RtObject *this_02;
  long lVar6;
  SeedPacket *this_03;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x2f8);
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar1 == '\0') {
    this_02 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<SeedPacket_ToolRift>(this_02);
    if (!bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      SeedPacket::GetPlantType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      FUN_05475d88(asStack_18,lVar6 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar3 = isCurrentPlantFavorite(this);
      if (bVar3 == 0) {
        LocalProfileSaveData::AddSeedChooserFavorite(pPVar5,asStack_18);
      }
      else {
        LocalProfileSaveData::RemoveSeedChooserFavorite(pPVar5,asStack_18);
      }
      iVar4 = findPlantTypeChooserPacketIndex(this,asStack_18);
      if (iVar4 != -1) {
        lVar6 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(lVar6 + 0x28));
        this_03 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        SeedPacket::SetFavorite(this_03,(bool)(bVar3 ^ 1));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      updateFavoriteButton(this);
      updateFavoriteSorting(this);
      std::string::~string(asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::GetSelectedPlantTypes(std::vector<Sexy::RtWeakPtr<PlantType const>,
   std::allocator<Sexy::RtWeakPtr<PlantType const> > >&) */

void __thiscall SeedChooser::GetSelectedPlantTypes(SeedChooser *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  ChooserPacketData *pCVar3;
  string *psVar4;
  undefined8 local_70;
  undefined8 local_68;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  ChooserPacketData aCStack_48 [40];
  RtWeakPtr aRStack_20 [8];
  int local_18;
  char local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  clear((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>> *
        )param_1);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c8));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1c8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pCVar3 = (ChooserPacketData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    ChooserPacketData::ChooserPacketData(aCStack_48,pCVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
    if ((bVar1) && (local_18 - 1U < 2)) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_60);
      if (local_14 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        SeedPacket::GetPlantType();
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_60,(RtWeakPtr *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_60);
      }
      else {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        std::string::string(asStack_58,"imitater");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_60,(RtWeakPtr *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_60);
      }
      if (cVar2 != '\0') {
        std::
        vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
        push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)param_1,(RtWeakPtr *)a_Stack_60);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
    }
    ChooserPacketData::~ChooserPacketData(aCStack_48);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::addPlantToChooserPackets(Sexy::RtWeakPtr<PlantType const>, int&,
   std::vector<std::tuple<int, Sexy::RtWeakPtr<PlantType const> >, std::allocator<std::tuple<int,
   Sexy::RtWeakPtr<PlantType const> > > >&, std::vector<Sexy::RtWeakPtr<MagentoProductProps>,
   std::allocator<Sexy::RtWeakPtr<MagentoProductProps> > >&, bool) */

void __thiscall
SeedChooser::addPlantToChooserPackets
          (SeedChooser *this,RtWeakPtr *param_2,int *param_3,
          vector<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>>>
          *param_4,LineBreakCategory *param_5,char param_6)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *pPVar6;
  PlayerInfo *this_00;
  ResourceInfo *pRVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  string *psVar11;
  wchar16 *pwVar12;
  NameMapperBase *pNVar13;
  long *extraout_x0;
  ulong uVar14;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar15;
  long lVar16;
  MagentoProductProps *this_01;
  RtWeakPtr *pRVar17;
  LineBreakCategory *pLVar18;
  vector<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>>>
  *pvVar19;
  LineBreakCategory *pLVar20;
  undefined8 uVar21;
  code *pcVar22;
  float fVar23;
  LineBreakCategory aLStack_28 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar19 = param_4;
  pLVar20 = param_5;
  pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  if (((pRVar7 == (ResourceInfo *)0x0) || (pRVar7[0x30] == (ResourceInfo)0x0)) ||
     (cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(gLawnApp), cVar2 == '\0')) goto LAB_04428820;
  psVar1 = (string *)(pRVar7 + 8);
  lVar8 = FUN_0441b344(*(undefined8 *)(*(long *)(this + 0x298) + 0x90),
                       *(undefined8 *)(*(long *)(this + 0x298) + 0x98));
  if (lVar8 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
    uVar10 = 0;
    while( true ) {
      uVar21 = *(undefined8 *)param_5;
      uVar14 = FUN_0441b3e4(uVar21,*(undefined8 *)(param_5 + 8));
      if (uVar14 <= uVar10) break;
      pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0441b3f0(uVar21,uVar10);
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      cVar2 = std::operator==((string *)(lVar8 + 0x80),(string *)(lVar16 + 8));
      if (cVar2 == '\0') {
        uVar10 = uVar10 + 1;
      }
      else {
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0441b3f0(*(undefined8 *)param_5,uVar10);
        this_01 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        fVar23 = (float)MagentoProductProps::GetPriceInUSD(this_01,false);
        if (0.0 < fVar23) {
LAB_04428b70:
          pRVar17 = (RtWeakPtr *)FUN_0441b3f0(*(undefined8 *)param_5,uVar10);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_20,pRVar17);
          *param_3 = *param_3 + 1;
          if (param_6 != '\0') goto LAB_04428ba8;
          lVar8 = *(long *)(this + 0x298);
          iVar5 = 4;
          goto LAB_044288c8;
        }
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0441b3f0(*(undefined8 *)param_5,uVar10);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        iVar5 = *(int *)(lVar8 + 0x90);
        pRVar15 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0441b3f0(*(undefined8 *)param_5,uVar10);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar15);
        iVar4 = PlayerInfo::GetPlantPieceCount(this_00,(string *)(lVar8 + 0x80),false);
        if (iVar5 <= iVar4) goto LAB_04428b70;
        uVar10 = uVar10 + 1;
      }
    }
    if (param_6 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)param_2);
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      uVar21 = ProfileMgr::GetCurrentProfile(pPVar6);
      cVar2 = ProfileUtils::IsPlantUnlocked((RtWeakPtr<Sexy::SoundResource> *)local_18,uVar21);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      if (cVar2 == '\0') goto LAB_044288a0;
      lVar8 = *(long *)(this + 0x298);
      iVar5 = 0;
    }
    else {
LAB_04428ba8:
      lVar8 = *(long *)(this + 0x298);
      iVar5 = 0;
    }
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_20);
LAB_044288a0:
    lVar8 = *(long *)(this + 0x298);
    uVar21 = *(undefined8 *)(lVar8 + 0x90);
    lVar9 = FUN_0441b344(uVar21,*(undefined8 *)(lVar8 + 0x98));
    lVar16 = 0;
    do {
      if (lVar16 == lVar9) {
        iVar5 = 5;
        goto LAB_044288c8;
      }
      psVar11 = (string *)FUN_0441b3cc(uVar21,lVar16);
      cVar2 = std::operator==(psVar1,psVar11);
      lVar16 = lVar16 + 1;
    } while (cVar2 == '\0');
    iVar5 = 0;
  }
LAB_044288c8:
  uVar21 = *(undefined8 *)(lVar8 + 0x60);
  local_18[0] = 0;
  uVar10 = FUN_0441b344(uVar21,*(undefined8 *)(lVar8 + 0x68));
  iVar4 = 0;
  while ((ulong)(long)iVar4 < uVar10) {
    psVar11 = (string *)FUN_0441b3cc(uVar21);
    cVar2 = std::operator==(psVar1,psVar11);
    if (cVar2 != '\0') {
      iVar5 = 0;
      std::
      vector<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>>>
      ::emplace_back<int&,Sexy::RtWeakPtr<PlantType_const>&>(param_4,local_18,param_2);
      iVar4 = local_18[0];
      uVar21 = *(undefined8 *)(*(long *)(this + 0x298) + 0x60);
      uVar10 = FUN_0441b344(uVar21,*(undefined8 *)(*(long *)(this + 0x298) + 0x68));
    }
    iVar4 = iVar4 + 1;
    local_18[0] = iVar4;
  }
  pwVar12 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  pLVar18 = aLStack_28;
  std::string::string((string *)local_18,"FreePlanting");
  cVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar12,(wchar16 *)local_18,pLVar18,(LineBreakCategory *)pvVar19,pLVar20);
  std::string::~string((string *)local_18);
  nop();
  if (cVar2 != '\0') {
    iVar5 = 0;
  }
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar2 == '\0') || (cVar2 = isPlantTypeAPvZ1Plant(this,(PlantType *)pRVar7), cVar2 == '\0')) {
    pNVar13 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetIdForName(pNVar13,psVar1);
    iVar4 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    cVar2 = TrialCardManager::IsTrialingPlant(iVar4);
    if (cVar2 != '\0') goto LAB_04428a48;
    if (iVar5 != 5) goto LAB_04428a4c;
  }
  else {
    pNVar13 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetIdForName(pNVar13,psVar1);
    iVar5 = Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    cVar2 = TrialCardManager::IsTrialingPlant(iVar5);
    iVar5 = 0;
    if (cVar2 != '\0') {
LAB_04428a48:
      iVar5 = 0;
    }
LAB_04428a4c:
    bVar3 = std::operator!=(psVar1,"minigame_imitater");
    if (bVar3) {
      Sexy::RtName::RtName((RtName *)local_18,(RtName *)(this + 800));
      UIWidget::CreateWidget((string *)local_18,1);
      nop();
      Sexy::RtName::~RtName((RtName *)local_18);
      pcVar22 = *(code **)(*extraout_x0 + 0x198);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)param_2);
      (*pcVar22)(extraout_x0,(string *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)a_Stack_20);
      initializeSeedPacket(this,extraout_x0,iVar5,(string *)local_18,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
LAB_04428820:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::finalizeSelection() */

void __thiscall SeedChooser::finalizeSelection(SeedChooser *this)

{
  char cVar1;
  int iVar2;
  UINewPVPTopZombieQueue *this_00;
  ProfileMgr *this_01;
  PlayerInfo *pPVar3;
  SeedPacket_ToolRift *pSVar4;
  SeedPacket *this_02;
  PVPManager *this_03;
  undefined8 uVar5;
  RtObject *this_04;
  SeedPacket *pSVar6;
  long lVar7;
  long *plVar8;
  NameMapperBase *this_05;
  UIWidget *this_06;
  long lVar9;
  code *pcVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined4 local_28 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar9 = 0;
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)this_00 + 0x1c0))(this_00,this[0x1e7],1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  do {
    cVar1 = FUN_0441b2f0(this_00[0x199]);
    if ((int)cVar1 <= (int)lVar9) {
      PlayerInfo::SetBattleArrayRecord(pPVar3,*(undefined4 *)(this + 0x300),avStack_20);
      SlidingWidget::SlideOut((SlidingWidget *)this);
      UIWidget::SetVisible((UIWidget *)this_00,true);
      std::string::string((string *)local_28,"UIViewBoardOrZombies");
      this_06 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)local_28);
      UIWidget::SetVisible(this_06,false);
      std::string::~string((string *)local_28);
      nop();
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    UINewPVPTopZombieQueue::gettItem(this_00,(int)lVar9);
    this_04 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    if ((this_04 == (RtObject *)0x0) ||
       (pSVar4 = Sexy::RtObject::Cast<SeedPacket_ToolRift>(this_04),
       pSVar4 == (SeedPacket_ToolRift *)0x0)) {
      pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      SeedPacket::setIsNeedShowExpTip(pSVar6,true);
      lVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar9);
      lVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(lVar7 + 0x20));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar7 + 0x28));
      SeedPacket::GetPlantType();
      lVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar9);
      lVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),(long)*(int *)(lVar7 + 0x20));
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar7 + 0x28));
      iVar2 = FUN_0441b2dc(*(undefined4 *)(lVar7 + 0x1cc));
      lVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar9);
      if (*(char *)(lVar7 + 0x34) == '\0') {
        if (-1 < *(int *)(lVar7 + 0x20)) {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pcVar10 = *(code **)(*plVar8 + 0x198);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_30);
          goto LAB_04429120;
        }
      }
      else {
        pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        SeedPacket::SetIsImitater(pSVar6,true);
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        pcVar10 = *(code **)(*plVar8 + 0x198);
        lVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar7 + 0x28));
        SeedPacket::GetPlantType();
LAB_04429120:
        (*pcVar10)(plVar8,(RtWeakPtr<Sexy::SoundResource> *)local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      }
      pSVar6 = (SeedPacket *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      SeedPacket::SetPlantAvatarAndLevel(pSVar6,iVar2,-1);
      this_05 = (NameMapperBase *)PlantNameMapper::GetInstance();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      local_28[0] = NameMapperBase::GetIdForName(this_05,(string *)(lVar7 + 8));
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_20,(int *)local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    else {
      nop();
      pcVar10 = *(code **)(*(long *)this_02 + 0x230);
      lVar7 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar9);
      this_03 = (PVPManager *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar7 + 0x28));
      uVar5 = PVPManager::GetPVPMapDataList(this_03);
      (*pcVar10)(this_02,uVar5);
      SeedPacket::SetAlwaysPlantable(this_02,false);
    }
    lVar9 = lVar9 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  } while( true );
}


/* SeedChooser::ShowSeedChooserArtifactSelectWidget() */

void __thiscall SeedChooser::ShowSeedChooserArtifactSelectWidget(SeedChooser *this)

{
  SeedChooserArtifactSelectWidget *this_00;
  
  if (*(long *)(this + 0x240) != 0) {
    return;
  }
  this_00 = ::operator_new(0x128);
  SeedChooserArtifactSelectWidget::SeedChooserArtifactSelectWidget(this_00);
  *(SeedChooserArtifactSelectWidget **)(this + 0x240) = this_00;
  FUN_0441b2f4(this_00 + 0xf0,this);
  SeedChooserArtifactSelectWidget::InitView(*(SeedChooserArtifactSelectWidget **)(this + 0x240));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x240));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x240));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x240));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x240));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::toggleSelectArtifact() */

void __thiscall SeedChooser::toggleSelectArtifact(SeedChooser *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar2;
  UIMessageBox *this_02;
  Image *pIVar3;
  long lVar4;
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  vector<ArtifactInfo,std::allocator<ArtifactInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  pvVar2 = (vector *)PlayerInfo::GetUnlockedArtifactList(this_01);
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::vector(avStack_20,pvVar2);
  cVar1 = std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::empty(avStack_20);
  if (cVar1 == '\0') {
    ShowSeedChooserArtifactSelectWidget(this);
  }
  else {
    this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_02 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_02,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[ARTIFACT_NO_ARTIFACT]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_02,awStack_38,awStack_40);
      std::string::string(asStack_28,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_28,false);
      UIMessageBox::SetBackground(this_02,pIVar3);
      std::string::~string(asStack_28);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(this_02);
      thunk_FUN_05477b9c(lVar4 + 0xd8,auStack_30);
      FUN_05476c50(auStack_30);
      FUN_05476c50(awStack_38);
      FUN_05476c50(awStack_40);
    }
  }
  std::vector<ArtifactInfo,std::allocator<ArtifactInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedChooser::ShowSeedChooserHeroPlantSelectWidget() */

void __thiscall SeedChooser::ShowSeedChooserHeroPlantSelectWidget(SeedChooser *this)

{
  SeedChooserHeroPlantSelectWidget *this_00;
  
  if (*(long *)(this + 0x248) != 0) {
    return;
  }
  this_00 = ::operator_new(0x128);
  SeedChooserHeroPlantSelectWidget::SeedChooserHeroPlantSelectWidget(this_00);
  *(SeedChooserHeroPlantSelectWidget **)(this + 0x248) = this_00;
  FUN_0441b2fc(this_00 + 0xf0,this);
  SeedChooserHeroPlantSelectWidget::InitView(*(SeedChooserHeroPlantSelectWidget **)(this + 0x248));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x248));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x248));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x248));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x248));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::toggleSelectHeroPlant() */

void __thiscall SeedChooser::toggleSelectHeroPlant(SeedChooser *this)

{
  char cVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  long lVar3;
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HeroPlantUtils::GetPlayerHeroPlantList((HeroPlantUtils *)this);
  cVar1 = std::vector<int,std::allocator<int>>::empty(avStack_20);
  if (cVar1 == '\0') {
    ShowSeedChooserHeroPlantSelectWidget(this);
  }
  else {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[HEROPLANT_NO_HEROPLANT]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_38,awStack_40);
      std::string::string(asStack_28,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_28,false);
      UIMessageBox::SetBackground(this_00,pIVar2);
      std::string::~string(asStack_28);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_30);
      FUN_05476c50(auStack_30);
      FUN_05476c50(awStack_38);
      FUN_05476c50(awStack_40);
    }
  }
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::OnMouseUp(int, int) */

void __thiscall SeedChooser::OnMouseUp(SeedChooser *this,int param_1,int param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  SeedChooser SVar1;
  uint uVar2;
  undefined *puVar3;
  LawnApp *pLVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  MagentoProductProps *pMVar11;
  PlayerInfo *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  char *pcVar12;
  wchar16 *pwVar13;
  LineBreakCategory *pLVar14;
  LineBreakCategory *pLVar15;
  LineBreakCategory *pLVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  float fVar20;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  pLVar14 = (LineBreakCategory *)(ulong)(uint)param_2;
  pwVar13 = (wchar16 *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar5 = FUN_0441b2e0(*(undefined4 *)(this + 0x16c));
  if (cVar5 != '\0') goto switchD_0442ac24_default;
  pLVar16 = *(LineBreakCategory **)(this + 0x2f0);
  SVar1 = this[0x1f0];
  pLVar15 = (LineBreakCategory *)(ulong)(byte)SVar1;
  pLVar16[0x28] = (LineBreakCategory)0x0;
  if (SVar1 != (SeedChooser)0x0) {
LAB_0442a904:
    EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
              ((wchar16 *)this,pwVar13,pLVar14,pLVar15,pLVar16);
    goto switchD_0442ac24_default;
  }
  cVar5 = FUN_0441b2ac(this[0x161]);
  if (cVar5 != '\0') goto switchD_0442ac24_default;
  if (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x288) != (PVZ2UISeedChooserPreviewDisplay *)0x0)
  {
    PVZ2UISeedChooserPreviewDisplay::CheckPlantPotButtonDepress
              (*(PVZ2UISeedChooserPreviewDisplay **)(this + 0x288),param_1,param_2);
  }
  plVar9 = *(long **)(this + 0x270);
  if ((plVar9 == (long *)0x0) || (*(char *)((long)plVar9 + 0x6c) == '\0')) {
LAB_0442a700:
    cVar5 = (**(code **)(*(long *)gLawnApp + 0x360))(gLawnApp);
    if (cVar5 == '\0') {
LAB_0442a724:
      iVar8 = 0;
    }
    else {
      iVar8 = (**(code **)(*(long *)gLawnApp + 0xd8))(gLawnApp);
      iVar6 = EA::Text::PolygonFont::GetFontType();
      if (iVar8 != iVar6) goto LAB_0442a724;
      iVar8 = (**(code **)(*(long *)gLawnApp + 0x368))(gLawnApp);
    }
    plVar9 = *(long **)(this + 0x208);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        plVar9 = *(long **)(this + 0x208);
        *(undefined1 *)(plVar9 + 0xe) = 0;
        *(undefined1 *)((long)plVar9 + 0x71) = 0;
        (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0,1);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        togglePlantFavorite(this);
        goto switchD_0442ac24_default;
      }
    }
    plVar9 = *(long **)(this + 0x210);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        plVar9 = *(long **)(this + 0x210);
        *(undefined1 *)(plVar9 + 0xe) = 0;
        *(undefined1 *)((long)plVar9 + 0x71) = 0;
        (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0,1);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        touchAccessoryButton(this);
        goto switchD_0442ac24_default;
      }
    }
    plVar9 = *(long **)(this + 0x218);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        plVar9 = *(long **)(this + 0x218);
        *(undefined1 *)(plVar9 + 0xe) = 0;
        *(undefined1 *)((long)plVar9 + 0x71) = 0;
        (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0,1);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        toggleSelectArtifact(this);
        goto switchD_0442ac24_default;
      }
    }
    plVar9 = *(long **)(this + 0x220);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        plVar9 = *(long **)(this + 0x220);
        *(undefined1 *)(plVar9 + 0xe) = 0;
        *(undefined1 *)((long)plVar9 + 0x71) = 0;
        (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0,1);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        ShowArtifactDetails();
        goto switchD_0442ac24_default;
      }
    }
    plVar9 = *(long **)(this + 0x228);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        plVar9 = *(long **)(this + 0x228);
        *(undefined1 *)(plVar9 + 0xe) = 0;
        *(undefined1 *)((long)plVar9 + 0x71) = 0;
        (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0,1);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        toggleSelectHeroPlant(this);
        goto switchD_0442ac24_default;
      }
    }
    plVar9 = *(long **)(this + 0x230);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        plVar9 = *(long **)(this + 0x230);
        *(undefined1 *)(plVar9 + 0xe) = 0;
        *(undefined1 *)((long)plVar9 + 0x71) = 0;
        (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0,1);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        ShowHeroPlantDetails();
        goto switchD_0442ac24_default;
      }
    }
    cVar5 = Sexy::TRect<int>::Contains
                      ((TRect<int> *)(this + 0x2a0),(param_1 - *(int *)(this + 0x2e0)) - iVar8,
                       param_2 - *(int *)(this + 0x2e4));
    if (cVar5 != '\0') {
      lVar17 = 0;
      do {
        lVar10 = lVar17;
        uVar19 = *(undefined8 *)(this + 0x1b0);
        iVar6 = FUN_0441b350(uVar19,*(undefined8 *)(this + 0x1b8));
        if (iVar6 <= (int)lVar10) goto LAB_0442a808;
        lVar17 = FUN_0441b35c(uVar19,lVar10);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar17 + 0x28));
        pLVar15 = *(LineBreakCategory **)(*plVar9 + 0xa8);
        cVar5 = (*(code *)pLVar15)(plVar9,param_1,param_2);
        lVar17 = lVar10 + 1;
      } while (cVar5 == '\0');
      lVar17 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar10);
      iVar8 = *(int *)(lVar17 + 0x30);
      if (((iVar8 == 3) || (iVar8 == 6)) || (iVar8 != 0)) {
        (**(code **)(*(long *)this + 0x1f8))(this,lVar17);
      }
      else {
        *(int *)(this + 0x318) = (int)lVar10;
        (**(code **)(*(long *)this + 0x1e0))(this);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_SeedLift");
      }
      goto switchD_0442ac24_default;
    }
LAB_0442a808:
    uVar19 = *(undefined8 *)(this + 0x1c8);
    lVar17 = 0;
    iVar6 = FUN_0441b350(uVar19,*(undefined8 *)(this + 0x1d0));
    while ((int)lVar17 < iVar6) {
      lVar10 = FUN_0441b35c(uVar19,lVar17);
      pLVar15 = (LineBreakCategory *)(ulong)*(uint *)(lVar10 + 0x30);
      if (*(uint *)(lVar10 + 0x30) == 2) {
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
        pLVar15 = *(LineBreakCategory **)(*plVar9 + 0xa8);
        cVar5 = (*(code *)pLVar15)(plVar9,pwVar13,pLVar14);
        if (cVar5 != '\0') {
          pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar12,"Play_SeedLift_Remove");
          uVar19 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),lVar17);
          (**(code **)(*(long *)this + 0x1e0))(this,uVar19);
          goto switchD_0442ac24_default;
        }
        uVar19 = *(undefined8 *)(this + 0x1c8);
        lVar17 = lVar17 + 1;
        iVar6 = FUN_0441b350(uVar19,*(undefined8 *)(this + 0x1d0));
      }
      else {
        lVar17 = lVar17 + 1;
      }
    }
    plVar9 = *(long **)(this + 0x200);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        plVar9 = *(long **)(this + 0x200);
        *(undefined1 *)(plVar9 + 0xe) = 0;
        *(undefined1 *)((long)plVar9 + 0x71) = 0;
        (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0x6c,1);
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        uVar19 = *(undefined8 *)(this + 0x1c8);
        iVar8 = FUN_0441b350(uVar19,*(undefined8 *)(this + 0x1d0));
        uVar2 = iVar8 - 1;
        if (-1 < (int)uVar2) {
          lVar18 = (long)(int)uVar2 + -1;
          lVar17 = (long)(int)uVar2;
          lVar10 = lVar18;
          while( true ) {
            lVar17 = FUN_0441b35c(uVar19,lVar17);
            if (*(int *)(lVar17 + 0x30) == 2) {
              (**(code **)(*(long *)this + 0x1e0))(this,lVar17);
            }
            if (lVar10 == lVar18 - (ulong)uVar2) break;
            uVar19 = *(undefined8 *)(this + 0x1c8);
            lVar17 = lVar10;
            lVar10 = lVar10 + -1;
          }
        }
        goto switchD_0442ac24_default;
      }
    }
    cVar5 = (**(code **)(*(long *)gLawnApp + 0x360))(gLawnApp);
    if (cVar5 == '\0') {
LAB_0442a878:
      iVar8 = 0;
    }
    else {
      iVar8 = (**(code **)(*(long *)gLawnApp + 0xd8))(gLawnApp);
      iVar6 = EA::Text::PolygonFont::GetFontType();
      if (iVar8 != iVar6) goto LAB_0442a878;
      iVar8 = (**(code **)(*(long *)gLawnApp + 0x368))(gLawnApp);
    }
    plVar9 = *(long **)(this + 0x1f8);
    if (*(char *)((long)plVar9 + 0x6e) == '\0') {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,param_1 - iVar8,pLVar14);
      if (cVar5 != '\0') {
        lVar17 = *(long *)(this + 0x1f8);
        *(undefined1 *)(lVar17 + 0x70) = 0;
        *(undefined1 *)(lVar17 + 0x71) = 0;
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Button_LetsRock_Release");
        (**(code **)(*(long *)this + 0x1b0))(this);
        goto switchD_0442ac24_default;
      }
    }
    plVar9 = *(long **)(this + 0x268);
    if ((plVar9 != (long *)0x0) && (*(char *)((long)plVar9 + 0x6e) == '\0')) {
      pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
      cVar5 = (*(code *)pLVar15)(plVar9,pwVar13,pLVar14);
      if (cVar5 != '\0') {
        lVar17 = *(long *)(this + 0x268);
        *(undefined1 *)(lVar17 + 0x70) = 0;
        *(undefined1 *)(lVar17 + 0x71) = 0;
        pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
        goto switchD_0442ac24_default;
      }
    }
    goto LAB_0442a904;
  }
  pLVar15 = *(LineBreakCategory **)(*plVar9 + 0x300);
  cVar5 = (*(code *)pLVar15)(plVar9,pwVar13,pLVar14);
  if (cVar5 == '\0') goto LAB_0442a700;
  plVar9 = *(long **)(this + 0x270);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x278);
  *(undefined1 *)(plVar9 + 0xe) = 0;
  *(undefined1 *)((long)plVar9 + 0x71) = 0;
  (**(code **)(*plVar9 + 0x230))(plVar9,pwVar13,pLVar14,0,1);
  pcVar12 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar12,"Play_UI_Menu_Buy_Plant_Release");
  pMVar11 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar20 = (float)MagentoProductProps::GetPriceInUSD(pMVar11,true);
  iVar8 = (int)fVar20;
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (0 < *(int *)(lVar17 + 0x90)) {
    lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar6 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar17 + 0x80),true);
    lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    pLVar4 = gLawnApp;
    if (iVar6 < *(int *)(lVar17 + 0x90)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
      LawnApp::ShowBuyPlantDialog(pLVar4,aRStack_20,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto switchD_0442ac24_default;
    }
LAB_0442aa34:
    puVar3 = gMessageRouter;
    lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    FUN_05475d88((string *)aRStack_20,lVar17 + 0x80);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar3,Message::CoinUse,iVar8,(string *)aRStack_20);
    std::string::~string((string *)aRStack_20);
LAB_0442aa78:
    lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
    PlayerInfo::HandlePurchase(this_01,(string *)(lVar17 + 0x10),(vector *)aRStack_20);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)aRStack_20);
    goto switchD_0442ac24_default;
  }
  pMVar11 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  uVar7 = MagentoProductProps::GetPurchaseType(pMVar11);
  switch(uVar7) {
  case 0:
    iVar6 = PlayerInfo::GetNumGems(this_01,true);
    if (iVar8 <= iVar6) {
      iVar8 = PlayerInfo::SubtractGems
                        (this_01,iVar8,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
      puVar3 = gMessageRouter;
      if (-1 < iVar8) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Sexy::RtWeakPtr<MagentoProductProps>,int>
                  ((MessageRouter *)puVar3,Message::PlantUnlockFragment,aRStack_20,iVar8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        puVar3 = gMessageRouter;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
        PlantAnimRig_HoyaCordata::getIdleAnimationName();
        std::operator+("PvE_Mission|",asStack_30);
        MessageRouter::
        Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,std::string,int>
                  ((MessageRouter *)puVar3,Message::ItemPurchaseInfo2,aRStack_20,asStack_28,iVar8);
        std::string::~string(asStack_28);
        std::string::~string(asStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        goto LAB_0442aa78;
      }
    }
    uVar19 = 2;
    break;
  case 1:
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_02);
    lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PurchaseBroker::RequestPayment(this_03,(string *)(lVar17 + 0x10),0);
    goto switchD_0442ac24_default;
  case 2:
    iVar6 = PlayerInfo::GetNumCoins(this_01,true);
    if ((iVar8 <= iVar6) && (iVar6 = PlayerInfo::SubtractCoins(this_01,iVar8), -1 < iVar6))
    goto LAB_0442aa34;
    uVar19 = 0;
    break;
  case 3:
    iVar6 = PlayerInfo::GetLeafCurrency(this_01);
    if (iVar8 <= iVar6) {
      PlayerInfo::ChangeLeafs(this_01,-iVar8);
      puVar3 = gMessageRouter;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)this_00);
      MessageRouter::
      Post<Sexy::RtWeakPtr<MagentoProductProps>const&,int,int,Sexy::RtWeakPtr<MagentoProductProps>,int,int>
                ((MessageRouter *)puVar3,Message::ItemExChange,aRStack_20,iVar8,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_0442aa78;
    }
    uVar19 = 6;
    break;
  case 4:
    iVar6 = PlayerInfo::GetNumStones(this_01,true);
    if ((iVar6 < iVar8) || (iVar8 = PlayerInfo::SubtractStones(this_01,iVar8), iVar8 < 0)) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,0,0);
      goto switchD_0442ac24_default;
    }
    goto LAB_0442aa78;
  default:
    goto switchD_0442ac24_default;
  }
  LawnApp::ShowGemStoreConfirm(gLawnApp,uVar19,1);
switchD_0442ac24_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::isBlacklisted(std::string const&) */

void SeedChooser::isBlacklisted(string *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  wchar16 *pwVar4;
  NameMapperBase *pNVar5;
  DangerRoomManager *this;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  RtObject *pRVar10;
  PoolDaylightStage *pPVar11;
  WaveManager *this_00;
  ulong uVar12;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  WaveActionPoolTerrainChangeProps *pWVar14;
  ulong uVar15;
  WorldMap *this_01;
  string *psVar16;
  ProfileMgr *this_02;
  PlayerInfo *pPVar17;
  long lVar18;
  ResourceInfo *pRVar19;
  LevelModuleManager *this_03;
  LastStandMinigameModule *pLVar20;
  RiftNetworkMgr *this_04;
  long *plVar21;
  IntroArenaTutorialBattleModule *this_05;
  PVZ1ModeNetworkMgr *this_06;
  CustomLevelMgr *this_07;
  string *in_x1;
  __normal_iterator *p_Var22;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  code *pcVar23;
  ulong uVar24;
  float fVar25;
  int local_34;
  RtMixedPtrBase aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  p_Var22 = (__normal_iterator *)&local_28;
  std::string::string((string *)&local_20,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar4,(wchar16 *)&local_20,(LineBreakCategory *)p_Var22,in_x3,in_x4);
  std::string::~string((string *)&local_20);
  nop();
  if (cVar1 == '\0') {
    pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    local_34 = NameMapperBase::GetIdForName(pNVar5,in_x1);
    pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,local_34);
    if (cVar1 != '\0') {
      cVar2 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
      if (cVar2 == '\0') {
        cVar2 = JoustUtils::IsPlayingJoustLevel();
        if (cVar2 == '\0') {
          cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
          if (cVar2 == '\0') {
            cVar2 = RiftUtils::IsPlayingRiftLevel();
            if (cVar2 == '\0') {
              cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
              if (cVar2 == '\0') {
                cVar2 = CustomLevelUtils::IsCustomLevel();
                if (cVar2 == '\0') goto LAB_0442b2f4;
                this_07 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
                puVar6 = (undefined8 *)CustomLevelMgr::GetServerPlantBanList(this_07);
              }
              else {
                this_06 = (PVZ1ModeNetworkMgr *)
                          Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
                puVar6 = (undefined8 *)PVZ1ModeNetworkMgr::GetServerPlantBanList(this_06);
              }
            }
            else {
              this_04 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
              puVar6 = (undefined8 *)RiftNetworkMgr::GetServerPlantBanList(this_04);
            }
          }
          else {
            this_01 = (WorldMap *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
            puVar6 = (undefined8 *)WorldMap::GetPopAnimRigs(this_01);
          }
        }
        else {
          puVar6 = (undefined8 *)JoustUtils::GetServerPlantBanList();
        }
      }
      else {
        this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        puVar6 = (undefined8 *)DangerRoomManager::GetServerPlantBanList(this);
      }
      uVar7 = FUN_0441ed18(*puVar6);
      uVar8 = FUN_0441ed68(puVar6[1]);
      local_28 = std::
                 find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                           (uVar7,uVar8,&local_34);
      local_20 = FUN_0441ed68(puVar6[1]);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
      if (bVar3) goto LAB_0442b228;
    }
LAB_0442b2f4:
    lVar9 = FUN_04420cb4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if ((lVar9 == 0) || (bVar3 = std::operator==(in_x1,"hotpotato"), !bVar3)) {
      bVar3 = std::operator==(in_x1,"lilypad");
      if ((bVar3) && (lVar9 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0)), lVar9 != 0)) {
        this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
        lVar9 = WaveManager::GetProps(this_00);
        std::
        vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
        ::vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                  *)&local_20,(vector *)(lVar9 + 0x10));
        uVar7 = local_20;
        for (uVar24 = 0; uVar12 = FUN_0441b3f8(uVar7,local_18), uVar24 < uVar12; uVar24 = uVar24 + 1
            ) {
          uVar12 = 0;
          while( true ) {
            puVar6 = (undefined8 *)FUN_0441b40c(uVar7,uVar24);
            uVar8 = *puVar6;
            uVar15 = FUN_0441b418(uVar8,puVar6[1]);
            if (uVar15 <= uVar12) break;
            pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0441b424(uVar8,uVar12);
            lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
            if (lVar9 != 0) {
              puVar6 = (undefined8 *)FUN_0441b40c(local_20,uVar24);
              pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0441b424(*puVar6,uVar12);
              pRVar10 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
              pWVar14 = Sexy::RtObject::Cast<WaveActionPoolTerrainChangeProps>(pRVar10);
              if (pWVar14 != (WaveActionPoolTerrainChangeProps *)0x0) {
                std::
                vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                ::~vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                           *)&local_20);
                cVar1 = '\x01';
                goto LAB_0442b228;
              }
            }
            uVar12 = uVar12 + 1;
            uVar7 = local_20;
          }
        }
        std::
        vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
        ::~vector((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                   *)&local_20);
      }
      lVar9 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      if (lVar9 != 0) {
        pRVar10 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
        pPVar11 = Sexy::RtObject::Cast<PoolDaylightStage>(pRVar10);
        if ((pPVar11 != (PoolDaylightStage *)0x0) &&
           (((((bVar3 = std::operator==(in_x1,"stickybombrice"), bVar3 ||
               (bVar3 = std::operator==(in_x1,"poisonpeashooter"), bVar3)) ||
              (bVar3 = std::operator==(in_x1,"kiwifruit"), bVar3)) ||
             ((bVar3 = std::operator==(in_x1,"ents"), bVar3 ||
              (bVar3 = std::operator==(in_x1,"laser_bean"), bVar3)))) ||
            ((bVar3 = std::operator==(in_x1,"nukelauncher"), bVar3 ||
             ((bVar3 = std::operator==(in_x1,"cobcannon"), bVar3 ||
              (bVar3 = std::operator==(in_x1,"bearberry"), bVar3)))))))) {
          cVar1 = '\x01';
          goto LAB_0442b228;
        }
      }
      psVar16 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar16);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
      if (cVar1 == '\0') {
LAB_0442b540:
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        fVar25 = (float)BoardHelpers::ApplyLevelBasedModifierValue
                                  (0.0,0xb,*(int *)(lVar9 + 0xd4) + 1,0);
        if (fVar25 == 1.0) goto LAB_0442b56c;
        if (param_1[0x280] == (string)0x0) {
          lVar9 = *(long *)(param_1 + 0x298);
          this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar17 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
          cVar1 = ProfileUtils::HasCompletedLevel((string *)(lVar9 + 0xc0),false,pPVar17);
          if ((cVar1 == '\0') ||
             (bVar3 = std::operator!=((string *)(*(long *)(param_1 + 0x298) + 0xc0),""), !bVar3)) {
            uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x298) + 0xa8);
            lVar18 = FUN_0441b344(uVar7,*(undefined8 *)(*(long *)(param_1 + 0x298) + 0xb0));
            lVar9 = 0;
            do {
              if (lVar9 == lVar18) {
                if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
                  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
                  Sexy::RtName::RtName((RtName *)&local_20,L"GridItemFlowerPotDefault");
                  PVZDB::GetIdByAlias((__normal_iterator *)&local_28,uVar7,5,(string *)&local_20);
                  Sexy::RtName::~RtName((RtName *)&local_20);
                  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                            ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_28)
                  ;
                  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
                  if (bVar3) {
                    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
                    pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_
                                        ((RtWeakPtr *)aRStack_30);
                    cVar1 = PlantRestrictionSet::IsIncluded
                                      ((PlantRestrictionSet *)(lVar9 + 0xd0),(PlantType *)pRVar19);
                    if (cVar1 != '\0') {
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
                      Sexy::RtId::~RtId((RtId *)&local_28);
                      goto LAB_0442b570;
                    }
                  }
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
                  Sexy::RtId::~RtId((RtId *)&local_28);
                }
                this_03 = (LevelModuleManager *)
                          FUN_02fd4370(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
                pLVar20 = LevelModuleManager::GetModuleByClass<LastStandMinigameModule>(this_03);
                cVar1 = '\0';
                if ((pLVar20 == (LastStandMinigameModule *)0x0) ||
                   (cVar2 = LastStandMinigameModule::IsPlantDisabled((string *)pLVar20),
                   cVar2 == '\0')) goto LAB_0442b570;
                break;
              }
              psVar16 = (string *)FUN_0441b3cc(uVar7,lVar9);
              cVar1 = std::operator==(in_x1,psVar16);
              lVar9 = lVar9 + 1;
            } while (cVar1 == '\0');
            goto LAB_0442b56c;
          }
          cVar1 = '\0';
        }
        else {
          cVar1 = '\0';
        }
      }
      else {
        plVar21 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        pcVar23 = *(code **)(*plVar21 + 0x80);
        this_05 = (IntroArenaTutorialBattleModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
        uVar7 = IntroArenaTutorialBattleModule::getMowerAudio(this_05);
        cVar1 = (*pcVar23)(plVar21,uVar7);
        if (cVar1 != '\0') goto LAB_0442b540;
LAB_0442b56c:
        cVar1 = '\x01';
      }
LAB_0442b570:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      goto LAB_0442b228;
    }
  }
  cVar1 = '\0';
LAB_0442b228:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::rebuildValidPlantTypeList() */

void __thiscall SeedChooser::rebuildValidPlantTypeList(SeedChooser *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  RtWeakPtr *pRVar5;
  ResourceInfo *pRVar6;
  ulong uVar7;
  RiftThemeLimitedSeedPacket *this_02;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  tuple *ptVar11;
  RtWeakPtrBase *pRVar12;
  string *psVar13;
  long *extraout_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *pvVar14;
  code *pcVar15;
  ulong uVar16;
  LevelEditorCardPlantInterface aLStack_90 [4];
  int local_8c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  string asStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  uVar16 = 0;
  local_8 = ___stack_chk_guard;
  deleteChooserPackets(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_38,"iOS PvZ2 Coins Plants");
  pvVar14 = avStack_50;
  std::string::string((string *)local_20,"Plants");
  Magento::GetStoreCategory((Magento *)asStack_38,(string *)local_20,(string *)pvVar14);
  std::string::~string((string *)local_20);
  nop();
  std::string::~string(asStack_38);
  nop();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
  lVar4 = FUN_0441b3e4(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
  if (lVar4 != 0) {
    do {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      pRVar5 = (RtWeakPtr *)FUN_0441b3f0(*(undefined8 *)(lVar4 + 0x60),uVar16);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar5);
      cVar1 = PlayerInfo::OwnsItemContainedInProps(this_01,(MagentoProductProps *)pRVar6);
      if (cVar1 == '\0') {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
        pRVar5 = (RtWeakPtr *)FUN_0441b3f0(*(undefined8 *)(lVar4 + 0x60),uVar16);
        std::
        vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)avStack_68,pRVar5);
      }
      uVar16 = uVar16 + 1;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      uVar7 = FUN_0441b3e4(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
    } while (uVar16 < uVar7);
  }
  local_8c = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_38);
  this_02 = RiftUtils::GetThemeByClass<RiftThemeLimitedSeedPacket>();
  if (this_02 != (RiftThemeLimitedSeedPacket *)0x0) {
    RiftThemeLimitedSeedPacket::GetNameBlackList(this_02,(vector *)asStack_38);
  }
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    PVZ1ModeUtils::GetPlantBannedList((vector *)asStack_38);
  }
  BoardHelpers::ApplyLevelOverride_RiftTimedSunBlackList((vector *)asStack_38);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_90);
  do {
    bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                      ((ObjectTypeDirectoryIterator *)aLStack_90);
    if (!bVar2) {
      cVar1 = CustomLevelUtils::IsCustomLevel();
      if (cVar1 != '\0') {
        local_80 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_50);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_50);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
              bVar2) {
          ptVar11 = (tuple *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
          ;
          pRVar12 = (RtWeakPtrBase *)
                    std::
                    get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                              (ptVar11);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar12);
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          bVar2 = std::operator==((string *)(lVar4 + 8),"minigame_imitater");
          if (bVar2) {
            Sexy::RtName::RtName((RtName *)local_20,(RtName *)(this + 800));
            UIWidget::CreateWidget((string *)local_20,1);
            nop();
            Sexy::RtName::~RtName((RtName *)local_20);
            pcVar15 = *(code **)(*extraout_x0 + 0x198);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)&local_70);
            (*pcVar15)(extraout_x0,(string *)local_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_20);
            initializeSeedPacket(this,extraout_x0,7,(string *)local_20,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                    ((move_iterator<Sexy::CharDataHashEntry*> *)&local_80);
        }
      }
      iVar3 = FUN_0441b350(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
      local_70 = CONCAT44(local_70._4_4_,iVar3 - local_8c);
      local_20[0] = CONCAT44(local_20[0]._4_4_,(uint)(byte)this[0x1e6]);
      piVar10 = eastl::min_alt<int>((int *)&local_70,(int *)local_20);
      this[0x1e7] = SUB41(*piVar10,0);
      initChooserPackets(this);
      updateFavoriteSorting(this);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      iVar3 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
      if (0 < iVar3) {
        BoardHelpers::ApplyLevelOverride_RiftTimedToolList((vector *)local_20);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)local_20);
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
              bVar2) {
          psVar13 = (string *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
          addToolToChooserPackets(this,psVar13);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
        }
      }
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_50);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_50);
      FUN_0442bbc0(uVar8,uVar9);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_50);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78),
            bVar2) {
        ptVar11 = (tuple *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
        pRVar12 = (RtWeakPtrBase *)
                  std::
                  get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                            (ptVar11);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar12);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70)
        ;
        ForceSelection(this,(string *)(lVar4 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_80);
      }
      this[0x1e5] = (SeedChooser)((char)this[0x1e6] - (char)iVar3);
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
            bVar2) {
        psVar13 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
        ForceSelection(this,psVar13);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
      }
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)local_20);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)asStack_38);
      std::
      vector<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>>>
      ::~vector((vector<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>,std::allocator<std::tuple<int,Sexy::RtWeakPtr<PlantType_const>>>>
                 *)avStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
      std::
      vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
      ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)avStack_68);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_90);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_80);
    cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)asStack_38);
    if (cVar1 == '\0') {
      FUN_05475d88((string *)&local_78,pRVar6 + 8);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)asStack_38);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)asStack_38);
      FUN_05475d88((string *)local_20,(string *)&local_78);
      local_70 = FUN_044229c8(uVar8,uVar9,(string *)local_20);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_20);
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)asStack_38);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_20);
      if (!bVar2) {
        std::string::~string((string *)&local_78);
        goto LAB_0442bd70;
      }
      std::string::~string((string *)&local_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    }
    else {
LAB_0442bd70:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)&local_80);
      addPlantToChooserPackets(this,(string *)local_20,&local_8c,avStack_50,avStack_68,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    }
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_90);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::initPlantFromRecord() */

void __thiscall SeedChooser::initPlantFromRecord(SeedChooser *this)

{
  RtMixedPtr<Sexy::Image> *this_00;
  SeedChooser SVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_01;
  PlayerInfo *pPVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  string *psVar10;
  PVPManager *pPVar11;
  undefined8 uVar12;
  SexyVector2 *pSVar13;
  SeedPacket *pSVar14;
  long *plVar15;
  UnchartedModeBoardRecord *pUVar16;
  ulong uVar17;
  NameMapperBase *this_02;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  float fVar23;
  string asStack_b0 [8];
  string asStack_a8 [8];
  undefined8 local_a0;
  string asStack_98 [8];
  undefined8 local_90;
  undefined4 local_88 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  iVar4 = BoardHelpers::ApplyLevelOverride_RiftTimedToolSize();
  if (0 < iVar4) {
    BoardHelpers::ApplyLevelOverride_RiftTimedToolList((vector *)avStack_80);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  cVar2 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,0x3e);
  if ((cVar2 != '\0') && ((byte)this[0x1e4] < (byte)this[0x1e7])) {
    getBattleArrayType(this);
    lVar7 = PlayerInfo::GetBattleArrayRecord(pPVar6,*(undefined4 *)(this + 0x300));
    if (lVar7 != 0) {
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)&local_68,(vector *)(lVar7 + 8));
    }
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_68);
  if (cVar2 == '\0') {
    cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
    if (cVar2 != '\0') {
      iVar4 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
      if (iVar4 == 3) {
        pUVar16 = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
        UnchartedModeBoardRecord::UnchartedModeBoardRecord
                  ((UnchartedModeBoardRecord *)local_50,pUVar16);
        lVar7 = FUN_0441b318(local_38,local_30);
        if (lVar7 != 0) {
          uVar20 = 0;
          std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)&local_68);
          iVar4 = 0;
          while( true ) {
            uVar21 = local_38;
            uVar17 = FUN_0441b318(local_38,local_30);
            if (uVar17 <= uVar20) break;
            piVar8 = (int *)FUN_0441b3d4(uVar21,uVar20);
            iVar5 = *piVar8;
            if (iVar5 == iVar4) {
              this_02 = (NameMapperBase *)PlantNameMapper::GetInstance();
              std::string::string((string *)local_88,"imitater");
              uVar22 = NameMapperBase::GetIdForName(this_02,(string *)local_88);
              local_90 = CONCAT44(local_90._4_4_,uVar22);
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)&local_68,(int *)&local_90);
              std::string::~string((string *)local_88);
              nop();
            }
            else {
              std::vector<int,std::allocator<int>>::push_back
                        ((vector<int,std::allocator<int>> *)&local_68,piVar8);
            }
            uVar20 = uVar20 + 1;
            iVar4 = iVar5;
          }
        }
        UnchartedModeBoardRecord::~UnchartedModeBoardRecord((UnchartedModeBoardRecord *)local_50);
      }
    }
    local_88[0] = FUN_0441b318(local_68,local_60);
    local_50[0] = CONCAT44(local_50[0]._4_4_,(uint)(byte)this[0x1e7]);
    piVar8 = eastl::min_alt<int>((int *)local_88,(int *)local_50);
    iVar4 = *piVar8;
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        iVar5 = PlantNameMapper::GetInstance();
        FUN_0441b3d4(local_68,lVar7);
        NameMapperBase::GetNameForId(iVar5);
        uVar21 = *(undefined8 *)(*(long *)(this + 0x298) + 0x60);
        lVar9 = FUN_0441b344(uVar21,*(undefined8 *)(*(long *)(this + 0x298) + 0x68));
        lVar19 = 0;
        do {
          if (lVar19 == lVar9) {
            lVar19 = 0;
            goto LAB_0442c378;
          }
          psVar10 = (string *)FUN_0441b3cc(uVar21,lVar19);
          cVar2 = std::operator==(asStack_b0,psVar10);
          lVar19 = lVar19 + 1;
        } while (cVar2 == '\0');
LAB_0442c6e0:
        std::string::~string(asStack_b0);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < iVar4);
    }
    if (*(long *)(this + 0x200) != 0) {
      *(undefined1 *)(*(long *)(this + 0x200) + 0x6e) = 0;
    }
  }
LAB_0442c51c:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_68);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0442c378:
  uVar21 = *(undefined8 *)(this + 0x1b0);
  iVar5 = FUN_0441b350(uVar21,*(undefined8 *)(this + 0x1b8));
  if (iVar5 <= (int)lVar19) goto LAB_0442c6e0;
  lVar9 = FUN_0441b35c(uVar21,lVar19);
  pPVar11 = (PVPManager *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x28));
  uVar21 = PVPManager::GetPVPMapDataList(pPVar11);
  FUN_05475d88(asStack_a8,uVar21);
  uVar21 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_80);
  local_a0 = FUN_044225c8(uVar21,uVar12,asStack_a8);
  local_50[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)local_50);
  if (!bVar3) {
    lVar9 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar19);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x28));
    SeedPacket::GetPlantType();
    lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    cVar2 = std::operator==((string *)(lVar9 + 8),asStack_b0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    if (cVar2 != '\0') {
      lVar9 = FUN_0441b35c(*(undefined8 *)(this + 0x1b0),lVar19);
      if (*(int *)(lVar9 + 0x30) == 3) {
LAB_0442c6d8:
        std::string::~string(asStack_a8);
        goto LAB_0442c6e0;
      }
      pSVar13 = (SexyVector2 *)FUN_0441b35c(*(undefined8 *)(this + 0x1c8),this[0x1e4]);
      this_00 = (RtMixedPtr<Sexy::Image> *)(pSVar13 + 0x28);
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
      if (cVar2 == '\0') {
        pPVar11 = (PVPManager *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        uVar21 = PVPManager::GetPVPMapDataList(pPVar11);
        FUN_05475d88(asStack_98,uVar21);
        uVar21 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
        uVar12 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
        local_90 = FUN_0442279c(uVar21,uVar12,asStack_98);
        local_50[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_80);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)local_50);
        if (!bVar3) {
          pSVar13[0x34] = *(SexyVector2 *)(lVar9 + 0x34);
          pSVar14 = (SeedPacket *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          SeedPacket::SetIsImitater(pSVar14,*(bool *)(lVar9 + 0x34));
          pcVar18 = *(code **)(*(long *)this + 0x1b8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_88,(RtWeakPtrBase *)this_00);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)(lVar9 + 0x28));
          (*pcVar18)(this,(RtWeakPtr<Sexy::SoundResource> *)local_88,
                     (RtWeakPtr<Sexy::ResourceInfo> *)local_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88)
          ;
          if (*(char *)(lVar9 + 0x34) == '\0') {
            plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            pcVar18 = *(code **)(*plVar15 + 0x198);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar9 + 0x28));
            SeedPacket::GetPlantType();
            (*pcVar18)(plVar15,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
LAB_0442c63c:
            *(undefined4 *)(pSVar13 + 0x20) = *(undefined4 *)(lVar9 + 0x20);
            *(undefined4 *)(pSVar13 + 0x30) = 2;
            uVar22 = PVZ_T();
            *(undefined4 *)(pSVar13 + 8) = uVar22;
            fVar23 = (float)PVZ_T();
            *(float *)(pSVar13 + 0xc) = fVar23 + 0.5;
            calcPacketPositionInBank(this,(uint)(byte)this[0x1e4],pSVar13);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            UIWidget::SetPositionOffset(*(undefined4 *)pSVar13,*(undefined4 *)(pSVar13 + 4));
            pSVar14 = (SeedPacket *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            SeedPacket::setIsNeedShowExpTip(pSVar14,true);
            *(undefined8 *)(pSVar13 + 0x10) = *(undefined8 *)pSVar13;
            *(undefined8 *)(pSVar13 + 0x18) = *(undefined8 *)pSVar13;
            *(uint *)(pSVar13 + 0x24) = (uint)(byte)this[0x1e4];
            *(undefined4 *)(lVar9 + 0x30) = 5;
            SVar1 = this[0x1e4];
            this[0x1e4] = (SeedChooser)((char)SVar1 + '\x01');
            if (this[0x1e7] == (SeedChooser)((char)SVar1 + '\x01')) {
              if (*(long *)(this + 0x1f8) != 0) {
                *(undefined1 *)(*(long *)(this + 0x1f8) + 0x6e) = 0;
              }
              if (*(long *)(this + 0x200) != 0) {
                *(undefined1 *)(*(long *)(this + 0x200) + 0x6e) = 0;
              }
              std::string::~string(asStack_98);
              std::string::~string(asStack_a8);
              std::string::~string(asStack_b0);
              goto LAB_0442c51c;
            }
          }
          else {
            SVar1 = this[0x1e4];
            if ((byte)SVar1 != 0) {
              plVar15 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                          ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              pcVar18 = *(code **)(*plVar15 + 0x198);
              lVar19 = FUN_0441b35c(*(undefined8 *)(this + 0x1c8),(long)(int)((byte)SVar1 - 1));
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar19 + 0x28));
              SeedPacket::GetPlantType();
              (*pcVar18)(plVar15,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
              goto LAB_0442c63c;
            }
          }
          std::string::~string(asStack_98);
          goto LAB_0442c6d8;
        }
        std::string::~string(asStack_98);
      }
    }
  }
  lVar19 = lVar19 + 1;
  std::string::~string(asStack_a8);
  goto LAB_0442c378;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::Draw(Sexy::Graphics*) */

void __thiscall SeedChooser::Draw(SeedChooser *this,Graphics *param_1)

{
  int iVar1;
  SeedChooser SVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  Image *pIVar9;
  long lVar10;
  long *plVar11;
  ResourceInfo *pRVar12;
  Graphics *pGVar13;
  uint uVar14;
  LineBreakCategory *pLVar15;
  LineBreakCategory *pLVar16;
  int iVar17;
  ulong *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  PrimeTypeface *pPVar25;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  int local_50;
  int local_4c;
  GraphicsAutoState aGStack_48 [8];
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  if (this[0x1f0] != (SeedChooser)0x0) {
    if ((*(ToolTipWidget **)(this + 0x2f0))[0x28] != (ToolTipWidget)0x0) {
      ToolTipWidget::Draw(*(ToolTipWidget **)(this + 0x2f0),param_1);
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
    goto LAB_0442c8d8;
  }
  TodStringTranslate(L"[CHOOSE_YOUR_PLANTS]");
  Sexy::Insets::Insets((Insets *)&local_28);
  local_20 = *(int *)(this + 0x2e8);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  FUN_05477b24((Insets *)&local_18,auStack_40);
  Sexy::PrimeTypeface::SizeString_Paragraph
            ((float)local_20,uVar7,(Insets *)&local_18,&local_4c,&local_50);
  FUN_05476c50((Insets *)&local_18);
  local_28 = (*(int *)(this + 0x2e0) + *(int *)(this + 0x2e8) / 2) - local_4c / 2;
  local_1c = FUN_0441bf40(0);
  local_1c = local_1c + local_50;
  iVar5 = *(int *)(this + 0x2e4) - local_1c;
  local_24 = FUN_0441bf40(0x14);
  local_24 = iVar5 - local_24;
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  pPVar25._0_4_ = (PrimeTypeface *)(float)local_28;
  fVar21 = (float)local_24;
  fVar23 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
  fVar22 = (float)local_20;
  FUN_05477b24((GraphicsAutoState *)&local_30,auStack_40);
  Sexy::Color::Color((Color *)&local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar25._0_4_,fVar21,fVar22,fVar23,uVar7,param_1,(GraphicsAutoState *)&local_30,0,0,
             (Insets *)&local_18,0);
  FUN_05476c50((GraphicsAutoState *)&local_30);
  Sexy::Color::Color((Color *)&local_18,1);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
  Sexy::Graphics::SetColorizeImages(param_1,false);
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_30,param_1);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b071e8);
  iVar5 = *(int *)(lVar8 + 0x38);
  Sexy::Insets::Insets((Insets *)&local_18);
  fVar21 = (float)(iVar5 / 3);
  local_14 = *(int *)(this + 0x2e4) + (int)(fVar21 * 0.35);
  pLVar16 = (LineBreakCategory *)(ulong)local_14;
  local_18 = *(int *)(this + 0x2e0) + (int)(fVar21 * 0.43);
  local_10 = *(int *)(this + 0x2e8) + (int)(fVar21 * 0.43) * -2;
  pLVar15 = (LineBreakCategory *)(ulong)local_10;
  local_c = (*(int *)(this + 0x2ec) - (int)(fVar21 * 0.35)) - (int)(fVar21 * 0.4);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_18);
  iVar5 = *(int *)(this + 0x2ec);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07058);
  iVar4 = *(int *)(this + 0x2e8);
  iVar6 = 0;
  if (*(int *)(lVar8 + 0x3c) != 0) {
    iVar6 = iVar5 / *(int *)(lVar8 + 0x3c);
  }
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07058);
  iVar5 = 0;
  if (*(int *)(lVar8 + 0x38) != 0) {
    iVar5 = iVar4 / *(int *)(lVar8 + 0x38);
  }
  if (-2 < iVar5) {
    iVar4 = 0;
    do {
      if (-2 < iVar6) {
        iVar17 = 0;
        do {
          lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07058);
          iVar1 = *(int *)(lVar8 + 0x38);
          lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07058);
          uVar14 = iVar17 * *(int *)(lVar8 + 0x3c);
          pLVar15 = (LineBreakCategory *)(ulong)uVar14;
          iVar17 = iVar17 + 1;
          pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b07058);
          Sexy::Graphics::DrawImage(param_1,pIVar9,iVar4 * iVar1,uVar14);
        } while (iVar17 != iVar6 + 2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar5 + 2);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_30);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(this + 0x2e0));
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b071e8);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar7);
  Sexy::Graphics::Translate(param_1,*(int *)(this + 0x2e0),*(int *)(this + 0x2e4));
  (**(code **)(*(long *)this + 0x1d8))(this,param_1);
  pGVar13 = (Graphics *)(ulong)(uint)-*(int *)(this + 0x2e4);
  Sexy::Graphics::Translate(param_1,-*(int *)(this + 0x2e0),-*(int *)(this + 0x2e4));
  cVar3 = FUN_0441b2e0(*(undefined4 *)(this + 0x16c));
  if (cVar3 == '\0') {
    pLVar16 = (LineBreakCategory *)0x8c;
    pLVar15 = (LineBreakCategory *)0x96;
    Sexy::Insets::Insets((Insets *)&local_18,0x96,0x96,0x96,0x8c);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this + 0x340));
    GetImageOffset(&local_38,(Insets *)&local_18);
    Sexy::RtId::~RtId((RtId *)&local_18);
    local_34 = local_34 + 1;
    UIWidget::ConvertPSDImageOffsetToUISpace(&local_38,&local_34,1536.0);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_30);
    iVar5 = 0;
    if (this[0x1e7] != (SeedChooser)0x0) {
      do {
        iVar4 = iVar5 + 1;
        calcPacketPositionInBank(this,iVar5,(SexyVector2 *)&local_30);
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x340));
        fVar22 = (float)local_38 + local_30;
        iVar5 = FUN_0441bf40(0xfffffff9);
        fVar21 = (float)local_34 + local_2c;
        iVar6 = FUN_0441bf40(0xfffffffb);
        uVar14 = (uint)(fVar21 + (float)iVar6);
        pLVar15 = (LineBreakCategory *)(ulong)uVar14;
        Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,(int)(fVar22 + (float)iVar5),uVar14);
        iVar5 = iVar4;
      } while (iVar4 < (int)(uint)(byte)this[0x1e7]);
    }
    Sexy::Graphics::SetColorizeImages(param_1,false);
    Sexy::Color::Color((Color *)&local_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
    Sexy::Graphics::PushState(param_1);
    puVar18 = *(ulong **)(this + 0x1f8);
    if (*(char *)((long)puVar18 + 0x6e) == '\0') {
      pcVar19 = *(code **)(*puVar18 + 0x170);
      Sexy::Color::Color((Color *)&local_18,1);
      (*pcVar19)(puVar18,3,(Insets *)&local_18);
    }
    else {
      pLVar16 = (LineBreakCategory *)*puVar18;
      pLVar15 = (LineBreakCategory *)0x80;
      pcVar19 = *(code **)(pLVar16 + 0x170);
      Sexy::Color::Color((Color *)&local_18,0x80,0x80,0x80);
      (*pcVar19)(puVar18,3,(Insets *)&local_18);
    }
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Graphics::Translate
              (param_1,*(int *)(*(long *)(this + 0x1f8) + 0x48),
               *(int *)(*(long *)(this + 0x1f8) + 0x4c));
    (**(code **)(**(long **)(this + 0x1f8) + 0x128))(*(long **)(this + 0x1f8),param_1);
    uVar14 = -*(int *)(*(long *)(this + 0x1f8) + 0x4c);
    pGVar13 = (Graphics *)(ulong)uVar14;
    Sexy::Graphics::Translate(param_1,-*(int *)(*(long *)(this + 0x1f8) + 0x48),uVar14);
    Sexy::Graphics::SetColorizeImages(param_1,false);
    Sexy::Graphics::PopState(param_1);
  }
  if (*(long *)(this + 0x288) != 0) {
    Sexy::Graphics::PushState(param_1);
    Sexy::Graphics::Translate
              (param_1,*(int *)(*(long *)(this + 0x288) + 0x48),
               *(int *)(*(long *)(this + 0x288) + 0x4c));
    local_10 = local_10 & 0xffffff00;
    local_18 = 0xc;
    local_14 = 0xc;
    pLVar15 = *(LineBreakCategory **)(**(long **)(this + 0x288) + 0x130);
    pGVar13 = param_1;
    (*(code *)pLVar15)(*(long **)(this + 0x288),(Insets *)&local_18);
    Sexy::Graphics::PopState(param_1);
  }
  lVar8 = *(long *)(this + 0x270);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x6c) != '\0')) {
    Sexy::Graphics::Translate(param_1,*(int *)(lVar8 + 0x48),*(int *)(lVar8 + 0x4c));
    (**(code **)(**(long **)(this + 0x270) + 0x128))(*(long **)(this + 0x270),param_1);
    uVar14 = -*(int *)(*(long *)(this + 0x270) + 0x4c);
    pGVar13 = (Graphics *)(ulong)uVar14;
    Sexy::Graphics::Translate(param_1,-*(int *)(*(long *)(this + 0x270) + 0x48),uVar14);
  }
  cVar3 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  if (cVar3 != '\0') {
    drawFavoriteButton(this,param_1);
  }
  drawAccessoryButton(this,param_1);
  cVar3 = FUN_0441b2e0(*(undefined4 *)(this + 0x16c));
  if (cVar3 == '\0') {
    uVar7 = *(undefined8 *)(this + 0x1c8);
    lVar8 = 0;
    uVar20 = *(undefined8 *)(this + 0x1d0);
    iVar5 = FUN_0441b350(uVar7,uVar20);
    if (0 < iVar5) {
      do {
        lVar10 = FUN_0441b35c(uVar7,lVar8);
        pGVar13 = (Graphics *)(ulong)*(uint *)(lVar10 + 0x30);
        if (*(uint *)(lVar10 + 0x30) == 2) {
          plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
          pGVar13 = *(Graphics **)(*plVar11 + 0x78);
          (*(code *)pGVar13)(plVar11,param_1);
          uVar7 = *(undefined8 *)(this + 0x1c8);
          uVar20 = *(undefined8 *)(this + 0x1d0);
          iVar5 = FUN_0441b350(uVar7,uVar20);
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < iVar5);
    }
    for (lVar8 = 0; (int)lVar8 < iVar5; lVar8 = lVar8 + 1) {
      lVar10 = FUN_0441b35c(uVar7,lVar8);
      pGVar13 = (Graphics *)(ulong)*(uint *)(lVar10 + 0x30);
      if (*(uint *)(lVar10 + 0x30) == 1) {
        plVar11 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x28));
        pGVar13 = *(Graphics **)(*plVar11 + 0x78);
        (*(code *)pGVar13)(plVar11,param_1);
        uVar7 = *(undefined8 *)(this + 0x1c8);
        uVar20 = *(undefined8 *)(this + 0x1d0);
      }
      iVar5 = FUN_0441b350(uVar7,uVar20);
    }
  }
  lVar8 = *(long *)(this + 0x200);
  if (lVar8 != 0) {
    Sexy::Graphics::Translate(param_1,*(int *)(lVar8 + 0x48),*(int *)(lVar8 + 0x4c));
    (**(code **)(**(long **)(this + 0x200) + 0x128))(*(long **)(this + 0x200),param_1);
    uVar14 = -*(int *)(*(long *)(this + 0x200) + 0x4c);
    pGVar13 = (Graphics *)(ulong)uVar14;
    Sexy::Graphics::Translate(param_1,-*(int *)(*(long *)(this + 0x200) + 0x48),uVar14);
  }
  lVar8 = *(long *)(this + 0x268);
  if (lVar8 != 0) {
    Sexy::Graphics::Translate(param_1,*(int *)(lVar8 + 0x48),*(int *)(lVar8 + 0x4c));
    (**(code **)(**(long **)(this + 0x268) + 0x128))(*(long **)(this + 0x268),param_1);
    uVar14 = -*(int *)(*(long *)(this + 0x268) + 0x4c);
    pGVar13 = (Graphics *)(ulong)uVar14;
    Sexy::Graphics::Translate(param_1,-*(int *)(*(long *)(this + 0x268) + 0x48),uVar14);
  }
  if ((*(ToolTipWidget **)(this + 0x2f0))[0x28] != (ToolTipWidget)0x0) {
    ToolTipWidget::Draw(*(ToolTipWidget **)(this + 0x2f0),param_1);
  }
  Sexy::Point::Point((Point *)&local_30);
  iVar5 = *(int *)(this + 0x2e0);
  iVar4 = *(int *)(this + 0x2e8);
  auVar24 = FUN_0441bf40(0x14);
  fVar21 = (float)(iVar5 + iVar4 + auVar24._0_4_);
  local_30 = fVar21;
  cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar24._0_8_,auVar24._8_8_,(LineBreakCategory *)pGVar13,pLVar15,pLVar16);
  iVar5 = *(int *)(this + 0x2e4);
  iVar4 = 0;
  if (cVar3 != '\0') {
    iVar4 = FUN_0441bf40(0x46);
  }
  fVar22 = (float)(iVar5 + iVar4);
  local_2c = fVar22;
  if (this[0x1a8] == (SeedChooser)0x0) {
    if (this[0x1a9] != (SeedChooser)0x0) {
LAB_0442cdec:
      iVar5 = FUN_0441bf40(0x8c);
      uVar7 = 0xcd;
      goto LAB_0442ce04;
    }
  }
  else {
    if (this[0x1a9] == (SeedChooser)0x0) goto LAB_0442cdec;
    iVar5 = FUN_0441bf40(0x8c);
    uVar7 = 0x186;
LAB_0442ce04:
    iVar4 = FUN_0441bf40(uVar7);
    Sexy::Insets::Insets((Insets *)&local_18,(int)fVar21,(int)fVar22,iVar5,iVar4);
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b074b8);
    Draw9SliceImage(param_1,(Insets *)&local_18,uVar7);
    if (this[0x1a8] == (SeedChooser)0x0) {
      SVar2 = this[0x1a9];
    }
    else {
      (**(code **)(*(long *)this + 0x210))(this,param_1,(GraphicsAutoState *)&local_30);
      iVar5 = FUN_0441bf40(0xb9);
      SVar2 = this[0x1a9];
      local_2c = (float)((int)local_2c + iVar5);
    }
    if (SVar2 != (SeedChooser)0x0) {
      (**(code **)(*(long *)this + 0x218))(this,param_1,(GraphicsAutoState *)&local_30);
    }
  }
  if (this[0x304] != (SeedChooser)0x0) {
    LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  }
  FUN_05476c50(auStack_40);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
LAB_0442c8d8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to SeedChooser::Draw(Sexy::Graphics*) */

void __thiscall SeedChooser::Draw(SeedChooser *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::IsMouseOver(int, int) */

void __thiscall SeedChooser::IsMouseOver(SeedChooser *this,int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  UIWidget *this_00;
  string asStack_18 [4];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UIWidget::IsMouseOver((UIWidget *)this,param_1,param_2);
  if (cVar1 != '\0') {
    std::string::string(asStack_18,"UIViewBoardOrZombies");
    this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
    std::string::~string(asStack_18);
    nop();
    cVar1 = UIWidget::IsVisible(this_00);
    if ((cVar1 == '\0') ||
       (cVar1 = (**(code **)(*(long *)this_00 + 0xa8))(this_00,param_1,param_2), cVar1 == '\0')) {
      UIWidget::GetDrawRect();
      local_14 = local_14 + *(int *)(this + 0x2d4);
      uVar2 = Sexy::TRect<int>::Contains((TRect<int> *)asStack_18,param_1,param_2);
      goto LAB_0442d7d8;
    }
  }
  uVar2 = 0;
LAB_0442d7d8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::onSlideInFinished() */

void __thiscall SeedChooser::onSlideInFinished(SeedChooser *this)

{
  char cVar1;
  int iVar2;
  UIWidget *pUVar3;
  ProfileMgr *pPVar4;
  long lVar5;
  CrazyNPCManager *pCVar6;
  PlayerInfo *pPVar7;
  TGALogMgr *pTVar8;
  char *__s;
  long *plVar9;
  code *pcVar10;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar9 = *(long **)(this + 0x288);
  this[0x314] = (SeedChooser)0x1;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x158))(plVar9);
  }
  std::string::string(asStack_50,"UIViewBoardOrZombies");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  UIWidget::SetClickable(pUVar3,true);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"UIViewBoardOrZombies");
  pUVar3 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_50);
  UIWidget::SetVisible(pUVar3,true);
  std::string::~string(asStack_50);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  cVar1 = LawnApp::IsAdChannel(gLawnApp,0);
  if (cVar1 != '\0') {
    plVar9 = (long *)EASquared::Instance();
    cVar1 = (**(code **)(*plVar9 + 0x58))();
    if ((cVar1 != '\0') && (cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x100), cVar1 != '\0')) {
      LawnApp::GetAdsMapLimit();
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      cVar1 = ProfileUtils::HasCompletedLevel(asStack_50,false,pPVar7);
      if (cVar1 == '\0') {
        std::string::~string(asStack_50);
      }
      else {
        iVar2 = LawnApp::GetAdsMapRate(gLawnApp);
        std::string::~string(asStack_50);
        if ((iVar2 != -1) && (cVar1 = LawnApp::ShouldPopAds(gLawnApp), cVar1 != '\0')) {
          plVar9 = (long *)EASquared::Instance();
          pcVar10 = *(code **)(*plVar9 + 0x28);
          std::string::string(asStack_58,"EA2WorldAuto");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnGameStartAdFinished);
          Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
          Delegate1<SeedChooser,void(SeedChooser::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
                    ((Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> *)aDStack_38,
                     asStack_50);
          (*pcVar10)(plVar9,asStack_58,
                     (Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> *)aDStack_38,0
                     ,0,2);
          std::string::~string(asStack_58);
          nop();
          pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          ProfileMgr::GetCurrentProfile(pPVar4);
          PlantAnimRig_HoyaCordata::getIdleAnimationName();
          DString::DString((DString *)asStack_50,asStack_58);
          std::string::~string(asStack_58);
          pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          std::string::string(asStack_70,"1");
          __s = (char *)DString::c_str((DString *)asStack_50);
          std::string::string(asStack_68,__s);
          std::string::string(asStack_60,"");
          std::string::string(asStack_58,"");
          TGALogMgr::LogAD(pTVar8,asStack_70,asStack_68,2,asStack_60,asStack_58);
          std::string::~string(asStack_58);
          nop();
          std::string::~string(asStack_60);
          nop();
          std::string::~string(asStack_68);
          nop();
          std::string::~string(asStack_70);
          nop();
          DString::~DString((DString *)asStack_50);
        }
      }
    }
  }
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
  iVar2 = FUN_0441b314(*(undefined4 *)(lVar5 + 0x40));
  if ((iVar2 == 0x39) &&
     (pCVar6 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp),
     pCVar6 != (CrazyNPCManager *)0x0)) {
    std::string::string(asStack_60,"TUTORIAL_ARTIFACT_LEVEL_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<SeedChooser,void(SeedChooser::*)()>(aDStack_38,asStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar6,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedChooser::OnGameStartAdFinished(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall SeedChooser::OnGameStartAdFinished(undefined8 param_1,int param_2)

{
  ProfileMgr *this;
  char *pcVar1;
  TGALogMgr *local_70;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  DString::DString(aDStack_18,asStack_20);
  std::string::~string(asStack_20);
  if (param_2 == 0) {
    local_70 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    pcVar1 = "2";
  }
  else {
    local_70 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    pcVar1 = "4";
  }
  std::string::string(asStack_38,pcVar1);
  pcVar1 = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_30,pcVar1);
  std::string::string(asStack_28,"");
  std::string::string(asStack_20,"");
  TGALogMgr::LogAD(local_70,asStack_38,asStack_30,2,asStack_28,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

