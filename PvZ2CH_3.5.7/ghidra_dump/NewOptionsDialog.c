// Class: NewOptionsDialog


/* NewOptionsDialog::SliderVal(int, double) */

ulong NewOptionsDialog::SliderVal(int param_1,double param_2)

{
  ulong uVar1;
  int in_w1;
  
  uVar1 = (ulong)(uint)param_1;
  if (in_w1 != 5) {
    if (in_w1 == 6) {
      uVar1 = (**(code **)(*gLawnApp + 0x200))(gLawnApp);
    }
    return uVar1;
  }
  uVar1 = (**(code **)(*gLawnApp + 0x1f8))(gLawnApp);
  return uVar1;
}


/* non-virtual thunk to NewOptionsDialog::SliderVal(int, double) */

void __thiscall NewOptionsDialog::SliderVal(NewOptionsDialog *this,int param_1,double param_2)

{
  SliderVal((int)this + -0xe0,param_2);
  return;
}


/* NewOptionsDialog::onCancelBackToMap() */

void NewOptionsDialog::onCancelBackToMap(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* NewOptionsDialog::onCancelBackToMenu() */

void NewOptionsDialog::onCancelBackToMenu(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* NewOptionsDialog::onConfirmBackToMenu() */

void NewOptionsDialog::onConfirmBackToMenu(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillNewOptionsDialog(gLawnApp);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* NewOptionsDialog::onCancelRestart() */

void NewOptionsDialog::onCancelRestart(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* NewOptionsDialog::onCancelQuickDangerRoom() */

void NewOptionsDialog::onCancelQuickDangerRoom(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* NewOptionsDialog::AddedToManager(Sexy::WidgetManager*) */

void __thiscall NewOptionsDialog::AddedToManager(NewOptionsDialog *this,WidgetManager *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  Sexy::WidgetContainer::AddedToManager((WidgetContainer *)this,param_1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x218));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x228));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x220));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x230));
  (**(code **)(*(long *)this + 0x60))(this,this + 0xf0);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x1e8);
    uVar2 = FUN_03f04384(uVar4,*(undefined8 *)(this + 0x1f0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_03f04390(uVar4,uVar3);
    (**(code **)(*(long *)this + 0x60))(this,*puVar1);
    puVar1 = (undefined8 *)FUN_03f04390(*(undefined8 *)(this + 0x200),uVar3);
    (**(code **)(*(long *)this + 0x60))(this,*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* NewOptionsDialog::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall NewOptionsDialog::RemovedFromManager(NewOptionsDialog *this,WidgetManager *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  Sexy::WidgetContainer::RemovedFromManager((WidgetContainer *)this,param_1);
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x218));
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x228));
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x220));
  (**(code **)(*(long *)this + 0x68))(this,*(undefined8 *)(this + 0x230));
  (**(code **)(*(long *)this + 0x68))(this,this + 0xf0);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x1e8);
    uVar2 = FUN_03f04384(uVar4,*(undefined8 *)(this + 0x1f0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_03f04390(uVar4,uVar3);
    (**(code **)(*(long *)this + 0x68))(this,*puVar1);
    puVar1 = (undefined8 *)FUN_03f04390(*(undefined8 *)(this + 0x200),uVar3);
    (**(code **)(*(long *)this + 0x68))(this,*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* NewOptionsDialog::GetPreferredHeight(int) */

void NewOptionsDialog::GetPreferredHeight(int param_1)

{
  FUN_03f0479c(*(undefined4 *)(DAT_06ae1818 + 0x24));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::IsMouseOverFriendWidget(int, int) */

void __thiscall
NewOptionsDialog::IsMouseOverFriendWidget(NewOptionsDialog *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x48);
  iVar2 = *(int *)(this + 0x4c);
  std::string::string(asStack_10,"UIPauseButton");
  plVar4 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((plVar4 == (long *)0x0) ||
     (cVar3 = (**(code **)(*plVar4 + 0xa8))(plVar4,iVar1 + param_1,iVar2 + param_2), cVar3 == '\0'))
  {
    plVar4 = (long *)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar4);
  }
  return;
}


/* NewOptionsDialog::MouseMove(int, int) */

void __thiscall NewOptionsDialog::MouseMove(NewOptionsDialog *this,int param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)IsMouseOverFriendWidget(this,param_1,param_2);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_1,param_2);
  }
  return;
}


/* NewOptionsDialog::MouseDown(int, int, int) */

void NewOptionsDialog::MouseDown(int param_1,int param_2,int param_3)

{
  long *plVar1;
  
  plVar1 = (long *)IsMouseOverFriendWidget((NewOptionsDialog *)(ulong)(uint)param_1,param_2,param_3)
  ;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,param_2,param_3);
  }
  return;
}


/* NewOptionsDialog::MouseUp(int, int) */

void __thiscall NewOptionsDialog::MouseUp(NewOptionsDialog *this,int param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)IsMouseOverFriendWidget(this,param_1,param_2);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,param_1,param_2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::drawHeaderText(Sexy::Graphics*) */

void __thiscall NewOptionsDialog::drawHeaderText(NewOptionsDialog *this,Graphics *param_1)

{
  int iVar1;
  PrimeTypeface *pPVar2;
  GraphicsAutoState aGStack_48 [8];
  undefined1 auStack_40 [8];
  Insets aIStack_38 [4];
  int local_34;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Insets::Insets(aIStack_38,(Insets *)(this + 0x238));
  iVar1 = FUN_03f0479c(0x3c);
  local_2c = iVar1;
  local_34 = FUN_03f0479c(0xfffffffa);
  local_34 = local_34 - iVar1;
  pPVar2 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Insets::Insets(aIStack_28,aIStack_38);
  TodStringTranslate(L"[GAME_PAUSED]");
  Sexy::Color::Color(aCStack_18,0xffffffff);
  Sexy::PrimeTypeface::DrawString_Paragraph(pPVar2,param_1,aIStack_28,auStack_40,1,2,aCStack_18,0);
  FUN_05476c50(auStack_40);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewOptionsDialog::onConfirmRestart() */

void __thiscall NewOptionsDialog::onConfirmRestart(NewOptionsDialog *this)

{
  DangerRoomManager *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillNewOptionsDialog(gLawnApp);
  if (this[0x280] == (NewOptionsDialog)0x0) {
    Board::RestartLevel(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::RestartLevel(this_00);
  return;
}


/* NewOptionsDialog::sunflowerAngle() */

undefined1  [16] NewOptionsDialog::sunflowerAngle(void)

{
  long lVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar2 = (float)FUN_03f04360(*(undefined4 *)(lVar1 + 0x18));
  dVar3 = sin((double)fVar2);
  auVar4._0_8_ = dVar3 * 0.3;
  auVar4._8_8_ = 0;
  return auVar4;
}


/* NewOptionsDialog::onConfirmBackToMap() */

void NewOptionsDialog::onConfirmBackToMap(void)

{
  char cVar1;
  long lVar2;
  NetworkMgr *this;
  long *plVar3;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillNewOptionsDialog(gLawnApp);
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar1 = FUN_03f04374(*(undefined1 *)(lVar2 + 0x221));
  if (cVar1 != '\0') {
    lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    FUN_03f04678(lVar2 + 0x221);
  }
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x116) != '\0')) {
    this = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
    (**(code **)(*plVar3 + 0x250))();
  }
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* NewOptionsDialog::getFlowerboxTopSpace() */

int NewOptionsDialog::getFlowerboxTopSpace(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  iVar1 = *(int *)(lVar2 + 0x3c);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1548);
  return (int)((double)*(int *)(lVar2 + 0x3c) - (double)(int)((double)iVar1 * 0.1));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::calculateOuterBoxes() */

void __thiscall NewOptionsDialog::calculateOuterBoxes(NewOptionsDialog *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  iVar1 = *(int *)(this + 0x54);
  local_8 = ___stack_chk_guard;
  iVar3 = getFlowerboxTopSpace();
  iVar4 = FUN_03f0479c(5);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
  Sexy::Insets::Insets
            ((Insets *)&local_18,0,iVar3,*(int *)(this + 0x50),
             (int)(((float)iVar1 - (float)iVar3) -
                  (float)(int)((double)iVar4 + (double)*(int *)(lVar8 + 0x3c) * 0.35)));
  *(undefined8 *)(this + 0x238) = local_18;
  *(undefined8 *)(this + 0x240) = uStack_10;
  iVar5 = FUN_03f0479c(0x15);
  iVar1 = *(int *)(this + 0x238);
  iVar6 = FUN_03f0479c(0x3c);
  iVar3 = *(int *)(this + 0x23c);
  iVar4 = *(int *)(this + 0x240);
  iVar7 = FUN_03f0479c(0x73);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar5 + iVar1,iVar6 + iVar3,iVar4 + iVar5 * -2,
             *(int *)(this + 0x244) - iVar7);
  bVar2 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x248) = local_18;
  *(undefined8 *)(this + 0x250) = uStack_10;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::draw_Flowerbox(Sexy::Graphics*, float, float) */

void __thiscall
NewOptionsDialog::draw_Flowerbox
          (NewOptionsDialog *this,Graphics *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Image *pIVar5;
  LotteryResultProgressBar *this_00;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  int local_38;
  int local_34;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  iVar7 = (int)param_2;
  fVar11 = param_3 + (float)*(int *)(lVar4 + 0x3c) * 0.1;
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar6 = (int)(fVar11 + (float)*(int *)(lVar4 + 0x3c) * 0.2);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar2 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar3 = *(int *)(lVar4 + 0x3c);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar1 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  Sexy::Insets::Insets(aIStack_58,iVar7 - iVar2,iVar6 - iVar3,iVar1,*(int *)(lVar4 + 0x3c));
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar2 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,*(int *)(lVar4 + 0x3c));
  Sexy::Graphics::DrawImageMirror(param_1,pIVar5,(TRect *)aIStack_58,(TRect *)aIStack_18,true);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar2 = *(int *)(lVar4 + 0x3c);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar3 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  Sexy::Insets::Insets(aIStack_48,iVar7,iVar6 - iVar2,iVar3,*(int *)(lVar4 + 0x3c));
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  iVar2 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae18c0);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,*(int *)(lVar4 + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_48,(TRect *)aIStack_18);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1548);
  iVar2 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1548);
  iVar3 = *(int *)(lVar4 + 0x3c);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1548);
  iVar1 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1548);
  Sexy::Insets::Insets
            ((Insets *)&local_38,iVar7 - iVar2 / 2,(int)((double)(int)fVar11 - (double)iVar3),iVar1,
             *(int *)(lVar4 + 0x3c));
  dVar8 = (double)sunflowerAngle();
  dVar9 = cos(dVar8 - 1.5707963705062866);
  dVar9 = (double)FUN_03f047fc(dVar9 * -40.0);
  dVar10 = sin(dVar8 * 3.0 + -1.5707963705062866);
  dVar10 = (double)FUN_03f047fc(dVar10 * 10.0);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1548);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
  fVar11 = (float)FUN_03f047c0();
  Sexy::Graphics::DrawImageRotatedF
            (param_1,(Image *)this_00,(float)dVar9 + (float)local_38,
             fVar11 + (float)local_34 + (float)dVar10,dVar8,(float)iVar2 * 0.5,(float)iVar3 * 0.5,
             (TRect *)0x0);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  iVar2 = *(int *)(lVar4 + 0x3c);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  iVar3 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  iVar1 = *(int *)(lVar4 + 0x3c);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  iVar6 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  Sexy::Insets::Insets
            (aIStack_28,iVar7 - iVar3 / 2,(int)(param_3 + (float)iVar2 * 0.6) - iVar1,iVar6,
             *(int *)(lVar4 + 0x3c));
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  iVar2 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1638);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar2,*(int *)(lVar4 + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::drawShadedBox(Sexy::Graphics*, Sexy::TRect<int>) */

void __thiscall
NewOptionsDialog::drawShadedBox(undefined8 param_1_00,Graphics *param_1,Insets *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Image *pIVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  GraphicsAutoState aGStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1690);
  iVar1 = *(int *)(lVar5 + 0x38);
  Sexy::Insets::Insets((Insets *)&local_18);
  fVar10 = (float)(iVar1 / 3);
  local_14 = *(int *)(param_3 + 4) + (int)(fVar10 * 0.35);
  local_18 = *(int *)param_3 + (int)(fVar10 * 0.43);
  local_10 = *(int *)(param_3 + 8) + (int)(fVar10 * 0.43) * -2;
  local_c = (*(int *)(param_3 + 0xc) - (int)(fVar10 * 0.35)) - (int)(fVar10 * 0.4);
  Sexy::Graphics::SetClipRect(param_1,(TRect *)&local_18);
  iVar1 = *(int *)(param_3 + 0xc);
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1a18);
  iVar8 = *(int *)(param_3 + 8);
  iVar4 = 0;
  if (*(int *)(lVar5 + 0x3c) != 0) {
    iVar4 = iVar1 / *(int *)(lVar5 + 0x3c);
  }
  lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1a18);
  iVar1 = 0;
  if (*(int *)(lVar5 + 0x38) != 0) {
    iVar1 = iVar8 / *(int *)(lVar5 + 0x38);
  }
  if (-1 < iVar1) {
    do {
      if (-2 < iVar4) {
        iVar8 = 0;
        do {
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1a18);
          iVar2 = *(int *)(lVar5 + 0x38);
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1a18);
          iVar3 = iVar8 * *(int *)(lVar5 + 0x3c);
          iVar8 = iVar8 + 1;
          pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1a18);
          Sexy::Graphics::DrawImage(param_1,pIVar6,iVar9 * iVar2,iVar3);
        } while (iVar8 != iVar4 + 2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar1);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  Sexy::Insets::Insets((Insets *)&local_18,param_3);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1690);
  Draw9SliceImage(param_1,(Insets *)&local_18,uVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::drawInnerBoxes(Sexy::Graphics*) */

void __thiscall NewOptionsDialog::drawInnerBoxes(NewOptionsDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  GraphicsAutoState aGStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x238));
  drawShadedBox(this,param_1,aIStack_18);
  draw_Flowerbox(this,param_1,(float)(*(int *)(this + 0x50) / 2),(float)*(int *)(this + 0x23c));
  if ((this[0x270] != (NewOptionsDialog)0x0) && (*(long *)(this + 0x278) != 0)) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 600));
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae19f0);
    uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae19a0);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae17d8);
    Draw3SliceImage(param_1,aIStack_18,uVar6,uVar7,uVar8,0);
    cVar3 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (cVar3 == '\0') {
      iVar4 = FUN_03f0479c(0xffffff79);
      iVar1 = *(int *)(this + 0x268);
      iVar5 = FUN_03f0479c(0xffffff97);
      iVar2 = *(int *)(this + 0x26c);
      Sexy::Graphics::Translate(param_1,iVar4 + iVar1,iVar5 + iVar2);
      PopAnimRig::Draw(*(PopAnimRig **)(this + 0x278),param_1);
      Sexy::Graphics::Translate(param_1,-(iVar4 + iVar1),-(iVar5 + iVar2));
    }
    else {
      std::string::string(asStack_38,"[CHALLENGE_PURPOSE_2]");
      StringHelper::ToStringValue(asStack_38);
      iVar1 = *(int *)(this + 600);
      iVar2 = *(int *)(this + 0x25c);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae19f0);
      iVar4 = *(int *)(lVar9 + 0x38);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae19f0);
      Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar4,*(int *)(lVar9 + 0x3c));
      uVar6 = PrimeText_PotentialTypeface::Typeface
                        (PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
      Sexy::Color::Color((Color *)aIStack_18,1);
      WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
      FUN_05476c50(auStack_30);
      std::string::~string(asStack_38);
      nop();
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::Draw(Sexy::Graphics*) */

void __thiscall NewOptionsDialog::Draw(NewOptionsDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  Image *pIVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  GraphicsAutoState aGStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  std::string::string(asStack_18,"UIPauseButton");
  plVar7 = (long *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x78))(plVar7,param_1);
  }
  uVar12 = 0;
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  drawInnerBoxes(this,param_1);
  drawHeaderText(this,param_1);
  cVar3 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar3 != '\0') {
    while( true ) {
      uVar11 = *(undefined8 *)(this + 0x1e8);
      uVar9 = FUN_03f04384(uVar11,*(undefined8 *)(this + 0x1f0));
      if (uVar9 <= uVar12) break;
      plVar7 = (long *)FUN_03f04390(uVar11,uVar12);
      lVar10 = *plVar7;
      iVar4 = FUN_03f0479c(0xf);
      iVar1 = *(int *)(lVar10 + 0x48);
      iVar5 = FUN_03f0479c(4);
      iVar2 = *(int *)(lVar10 + 0x4c);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae15e8);
      iVar6 = FUN_03f0479c(0x14);
      Sexy::Insets::Insets((Insets *)aGStack_28,iVar1 - iVar4,iVar5 + iVar2,iVar6,iVar6);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae15e8);
      iVar1 = *(int *)(lVar10 + 0x38);
      lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae15e8);
      Sexy::Insets::Insets((Insets *)asStack_18,0,0,iVar1,*(int *)(lVar10 + 0x3c));
      Sexy::Graphics::DrawImage(param_1,pIVar8,(TRect *)aGStack_28,(TRect *)asStack_18);
      uVar12 = uVar12 + 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* NewOptionsDialog::SliderReleased(int, double) */

void NewOptionsDialog::SliderReleased(int param_1,double param_2)

{
  char *pcVar1;
  int in_w1;
  
  if (in_w1 == 5) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    param_2 = (double)AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Music_Volume_Confirm");
  }
  else if (in_w1 == 6) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    param_2 = (double)AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_SFX_Volume_Confirm");
  }
  (**(code **)(*gLawnApp + 0xa8))(param_2,gLawnApp);
  return;
}


/* non-virtual thunk to NewOptionsDialog::SliderReleased(int, double) */

void __thiscall NewOptionsDialog::SliderReleased(NewOptionsDialog *this,int param_1,double param_2)

{
  SliderReleased((int)this + -0xe0,param_2);
  return;
}


/* NewOptionsDialog::CheckboxChecked(int, bool) */

void NewOptionsDialog::CheckboxChecked(int param_1,bool param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Buttonclick");
  return;
}


/* non-virtual thunk to NewOptionsDialog::CheckboxChecked(int, bool) */

void __thiscall NewOptionsDialog::CheckboxChecked(NewOptionsDialog *this,int param_1,bool param_2)

{
  CheckboxChecked((int)this + -0xe8,SUB41(param_1,0));
  return;
}


/* NewOptionsDialog::ButtonPress(int) */

void __thiscall NewOptionsDialog::ButtonPress(NewOptionsDialog *this,int param_1)

{
  char *pcVar1;
  
  if (param_1 == 2) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Replay_Press");
    return;
  }
  if (param_1 < 3) {
    if (param_1 == 0) goto LAB_03f05d34;
  }
  else {
    if (param_1 == 4) {
LAB_03f05d34:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Leave_Press");
      return;
    }
    if (param_1 == 0x3e9) {
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Button_Continue_Press");
      return;
    }
  }
  return;
}


/* non-virtual thunk to NewOptionsDialog::ButtonPress(int) */

void __thiscall NewOptionsDialog::ButtonPress(NewOptionsDialog *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* NewOptionsDialog::showExitMenu_Internal(std::wstring, std::wstring) */

PVZ2UIDialog * __thiscall
NewOptionsDialog::showExitMenu_Internal(undefined8 param_1,wstring *param_2,wstring *param_3)

{
  LawnApp *this;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_00;
  char *pcVar3;
  
  this = gLawnApp;
  iVar1 = FUN_03f0479c(0x1ea);
  iVar2 = FUN_03f0479c(0x118);
  this_00 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  PVZ2UIDialog::SetHeaderLabel(this_00,param_2);
  PVZ2UIDialog::SetFooterLabel(this_00,param_3);
  PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::showConfirmBackToMap() */

void __thiscall NewOptionsDialog::showConfirmBackToMap(NewOptionsDialog *this)

{
  int iVar1;
  long lVar2;
  PVZ2UIDialog *this_00;
  wchar_t *pwVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(auStack_60);
  if (((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
      (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 == 0)) ||
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar2 + 0x112) == '\0')) {
    FUN_054772c4(auStack_60,L"[LEAVE_GAME_HEADER]");
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  }
  else {
    FUN_054772c4(auStack_60,L"[LEAVE_DANGER_ROOM_GAME_HEADER]");
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  }
  if ((lVar2 == 0) ||
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar2 + 0x115) == '\0')) {
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    if ((lVar2 == 0) ||
       (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
       *(char *)(lVar2 + 0x116) == '\0')) {
      FUN_05477b24(auStack_58,auStack_60);
      pwVar3 = L"[LEAVE_GAME_BODY]";
    }
    else {
      FUN_05477b24(auStack_58,auStack_60);
      pwVar3 = L"[LEAVE_WORLDCUP_GAME_BODY]";
    }
  }
  else {
    FUN_05477b24(auStack_58,auStack_60);
    pwVar3 = L"[LEAVE_GAME_BODY_ARENAEDIT]";
  }
  FUN_05478178(aCStack_50,pwVar3,auStack_68);
  this_00 = (PVZ2UIDialog *)showExitMenu_Internal(this,auStack_58,aCStack_50);
  FUN_05476c50(aCStack_50);
  nop();
  FUN_05476c50(auStack_58);
  iVar1 = FUN_03f0479c(0xa0);
  PVZ2UIDialog::SetFooterHeight(this_00,iVar1);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_CANCEL]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelBackToMap);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[LEAVE_GAME_BUTTON]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmBackToMap);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05476c50(auStack_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::showConfirmBackToMenu() */

void __thiscall NewOptionsDialog::showConfirmBackToMenu(NewOptionsDialog *this)

{
  int iVar1;
  PVZ2UIDialog *this_00;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(auStack_58,L"[LEAVE_GAME_HEADER]",auStack_68);
  FUN_05478178(aCStack_50,L"[LEAVE_GAME_BODY]",auStack_60);
  this_00 = (PVZ2UIDialog *)showExitMenu_Internal(this,auStack_58,aCStack_50);
  FUN_05476c50(aCStack_50);
  nop();
  FUN_05476c50(auStack_58);
  nop();
  iVar1 = FUN_03f0479c(0xa0);
  PVZ2UIDialog::SetFooterHeight(this_00,iVar1);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelBackToMenu);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[LEAVE_GAME_BUTTON]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmBackToMenu);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::showConfirmRestart() */

void __thiscall NewOptionsDialog::showConfirmRestart(NewOptionsDialog *this)

{
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(auStack_58,L"[RESTART_LEVEL_HEADER]",auStack_68);
  FUN_05478178(aCStack_50,L"[RESTART_LEVEL]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)showExitMenu_Internal(this,auStack_58,aCStack_50);
  FUN_05476c50(aCStack_50);
  nop();
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[DIALOG_STRING_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelRestart);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[RESTART_BUTTON]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmRestart);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::showConfirmQuitDangerRoom() */

void __thiscall NewOptionsDialog::showConfirmQuitDangerRoom(NewOptionsDialog *this)

{
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(auStack_58,L"[EXIT_DANGER_ROOM_HEADER]",auStack_68);
  FUN_05478178(aCStack_50,L"[EXIT_DANGER_ROOM_BODY]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)showExitMenu_Internal(this,auStack_58,aCStack_50);
  FUN_05476c50(aCStack_50);
  nop();
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[DIALOG_STRING_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelQuickDangerRoom);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[DANGER_ROOM_BUTTON_RETIRE]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmQuickDangerRoom);
  Sexy::Delegate0::Delegate0<NewOptionsDialog,void(NewOptionsDialog::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewOptionsDialog::ButtonDepress(int) */

void __thiscall NewOptionsDialog::ButtonDepress(NewOptionsDialog *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  DangerRoomManager *this_00;
  
  if (param_1 == 2) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Replay_Release");
    LawnApp::KillNewOptionsDialog(gLawnApp);
    if (this[0x280] != (NewOptionsDialog)0x0) {
      this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      DangerRoomManager::RestartLevel(this_00);
      return;
    }
    Board::RestartLevel(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  if (param_1 < 3) {
    if (param_1 == 0) {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Leave_Release");
      lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      cVar1 = FUN_03f04374(*(undefined1 *)(lVar3 + 0x221));
      if (cVar1 != '\0') {
        LawnApp::KillNewOptionsDialog(gLawnApp);
        lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        FUN_03f04678(lVar3 + 0x221);
        (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
        Board::Quit(*(Board **)(gLawnApp + 0x9f0));
        return;
      }
      showConfirmBackToMap(this);
      return;
    }
    if (param_1 == 1) {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Button_Select");
      showConfirmBackToMenu(this);
      return;
    }
  }
  else {
    if (param_1 == 4) {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Leave_Release");
      showConfirmQuitDangerRoom(this);
      return;
    }
    if (param_1 == 0x3e9) {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Button_Continue_Release");
      LawnApp::KillNewOptionsDialog(gLawnApp);
      (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
    }
  }
  return;
}


/* non-virtual thunk to NewOptionsDialog::ButtonDepress(int) */

void __thiscall NewOptionsDialog::ButtonDepress(NewOptionsDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* NewOptionsDialog::onConfirmQuickDangerRoom() */

void NewOptionsDialog::onConfirmQuickDangerRoom(void)

{
  char cVar1;
  bool bVar2;
  SaveGameMgr *this;
  DangerRoomManager *pDVar3;
  DangerRoomManager *this_00;
  vector *pvVar4;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillNewOptionsDialog(gLawnApp);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  cVar1 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x310))(*(long **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    this = (SaveGameMgr *)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
    SaveGameMgr::TrySaveGame(this,true);
  }
  pDVar3 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pvVar4 = (vector *)DangerRoomManager::GetCachePlantNumList(this_00);
  DangerRoomManager::SetPlantNumList(pDVar3,pvVar4);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  pDVar3 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  bVar2 = (bool)DangerRoomManager::IsTrainingMode(pDVar3);
  pDVar3 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::EnterLevel(pDVar3,bVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::recalculateObjectiveBox(std::vector<std::wstring, std::allocator<std::wstring >
   > const&, std::vector<Sexy::TRect<int>, std::allocator<Sexy::TRect<int> > >*, bool) */

void __thiscall
NewOptionsDialog::recalculateObjectiveBox
          (NewOptionsDialog *this,vector *param_1,vector *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SalesProgressBar *this_00;
  LotteryResultProgressBar *pLVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  undefined4 local_38;
  int local_34;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar1 = *(int *)(this + 0x24c);
  local_8 = ___stack_chk_guard;
  iVar3 = *(int *)(this + 0x250);
  iVar7 = *(int *)(this + 0x248);
  iVar14 = 0;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae19f0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_20,iVar7,iVar1,iVar3,iVar2);
  *(undefined8 *)(this + 600) = local_20;
  iVar1 = (int)local_20;
  *(undefined8 *)(this + 0x260) = local_18;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae19f0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  Sexy::Point::Point((Point *)&local_20,iVar1 + iVar3 / 2,
                     *(int *)(this + 0x25c) + *(int *)(this + 0x264) / 2);
  *(undefined8 *)(this + 0x268) = local_20;
  iVar3 = FUN_03f0479c(10);
  uVar4 = FUN_03f0479c(0xf);
  iVar1 = iVar3;
  if (!param_3) {
    iVar1 = 0;
  }
  iVar5 = FUN_03f0479c();
  iVar7 = *(int *)(this + 600);
  iVar2 = *(int *)(this + 0x264);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae19f0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar3 = FUN_03f0479c(iVar3);
  iVar1 = iVar7 + iVar6 + iVar3 + iVar1;
  iVar3 = (*(int *)(this + 0x260) - iVar1) - iVar3;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar13 = 0;
  while( true ) {
    uVar11 = FUN_03f04378(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar11 <= uVar13) break;
    local_38 = 0;
    local_34 = 0;
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    uVar10 = FUN_03f04580(*(undefined8 *)param_1,uVar13);
    FUN_05477b24(aIStack_30,uVar10);
    Sexy::PrimeTypeface::SizeString_Paragraph((float)iVar3,uVar9,aIStack_30,&local_38,&local_34);
    FUN_05476c50(aIStack_30);
    local_34 = local_34 + 1;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_20,&local_34);
    iVar14 = iVar14 + local_34;
    uVar13 = uVar13 + 1;
  }
  if (param_2 != (vector *)0x0) {
    iVar7 = FUN_03f0479c(uVar4);
    iVar14 = iVar7 + *(int *)(this + 0x25c) + ((iVar2 + iVar5 * -2) - iVar14) / 2;
    uVar13 = 0;
    while (uVar13 < uVar11) {
      piVar12 = (int *)FUN_03f04588(local_20,uVar13);
      Sexy::Insets::Insets(aIStack_30,iVar1,iVar14,iVar3,*piVar12);
      std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
                ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)param_2,
                 (TRect *)aIStack_30);
      piVar12 = (int *)FUN_03f04588(local_20,uVar13);
      iVar14 = iVar14 + *piVar12;
      uVar11 = FUN_03f04378(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
      uVar13 = uVar13 + 1;
    }
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::getObjectiveData(bool&, std::vector<std::wstring, std::allocator<std::wstring >
   >&, std::vector<bool, std::allocator<bool> >&) */

void __thiscall
NewOptionsDialog::getObjectiveData
          (NewOptionsDialog *this,bool *param_1,vector *param_2,vector *param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  WorldDataManager *pWVar11;
  string *psVar12;
  long lVar13;
  wstring *pwVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_48 [24];
  undefined1 local_30 [2] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = BoardHelpers::HasExtraChallenges();
  if ((cVar2 == '\0') &&
     ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0 ||
      (cVar2 = Board::IsStarChallengeActive(*(Board **)(gLawnApp + 0x9f0)), cVar2 == '\0')))) {
    *param_1 = false;
  }
  else {
    uVar5 = true;
    iVar6 = FUN_03f0436c(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x87c));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_48);
    cVar2 = RiftUtils::IsPlayingRiftLevel();
    if (cVar2 == '\0') {
      uVar5 = CustomLevelUtils::IsCustomLevel();
    }
    bVar3 = PVZ1ModeUtils::IsPlayingPVZ1Level();
    if (bVar3 == 0) {
      ProfileUtils::GetChallengeStatusForCurrentLevel
                ((vector *)&local_60,(vector *)avStack_48,(bool)uVar5);
    }
    else {
      PVZ1ModeUtils::GetLevelChallengeChoose((PVZ1ModeUtils *)(ulong)bVar3);
      PVZ1ModeUtils::IsHardMode();
      ProfileUtils::GetChallengeStatusForCurrentLevelByChoose
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60,
                 (vector<bool,std::allocator<bool>> *)local_30,0);
      std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30)
      ;
    }
    uVar7 = FUN_03f045ac(local_60,local_58);
    if (uVar7 < 2) {
      iVar6 = 0;
    }
    cVar2 = std::
            vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
            ::empty((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
                     *)&local_60);
    uVar8 = local_60;
    if (cVar2 == '\0') {
      uVar15 = (ulong)iVar6;
      uVar7 = FUN_03f045ac(local_60,local_58);
      if ((uVar7 <= uVar15) || (iVar6 < 0)) {
        uVar15 = 0;
      }
      uVar7 = 0;
      while( true ) {
        puVar9 = (undefined8 *)FUN_03f045c0(uVar8,uVar15);
        uVar10 = FUN_03f04378(*puVar9,puVar9[1]);
        if (uVar10 <= uVar7) break;
        pWVar11 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        psVar12 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        lVar13 = WorldDataManager::FindWorldDataByLevelName(pWVar11,psVar12);
        if (lVar13 != 0) {
          puVar9 = (undefined8 *)FUN_03f045c0(local_60,uVar15);
          pwVar14 = (wstring *)FUN_03f045a4(*puVar9,uVar7);
          TodStringTranslate(L"[STARCHALLENGE_RETAIN_MOWERS]");
          cVar2 = std::operator==(pwVar14,awStack_68);
          if (cVar2 == '\0') {
            FUN_05476c50(awStack_68);
          }
          else {
            pWVar11 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
            pLVar1 = gLawnApp;
            psVar12 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
            lVar13 = WorldDataManager::FindWorldDataByLevelName(pWVar11,psVar12);
            FUN_05475d88((string *)local_30,lVar13 + 0x38);
            cVar2 = LawnApp::IsWorldHaveMower(pLVar1,(string *)local_30);
            std::string::~string((string *)local_30);
            FUN_05476c50(awStack_68);
            if (cVar2 == '\0') goto LAB_03f06f78;
          }
          TodStringTranslate(L"[STARCHALLENGE_BULLET_SYMBOL]");
          std::operator+(awStack_70,L" ");
          puVar9 = (undefined8 *)FUN_03f045c0(local_60,uVar15);
          pwVar14 = (wstring *)FUN_03f045a4(*puVar9,uVar7);
          std::operator+(awStack_68,pwVar14);
          std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                    ((vector<std::wstring,std::allocator<std::wstring>> *)param_2,
                     (wstring *)local_30);
          FUN_05476c50((_Bit_reference *)local_30);
          FUN_05476c50(awStack_68);
          FUN_05476c50(awStack_70);
          lVar13 = FUN_03f045c0(local_60,uVar15);
          auVar16 = FUN_03f046d8(*(undefined8 *)(lVar13 + 0x18),uVar7);
          local_30[0] = auVar16;
          bVar4 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
          std::vector<bool,std::allocator<bool>>::push_back
                    ((vector<bool,std::allocator<bool>> *)param_3,bVar4);
        }
LAB_03f06f78:
        uVar7 = uVar7 + 1;
        uVar8 = local_60;
      }
      *param_1 = true;
    }
    std::
    vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
    ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
               *)avStack_48);
    std::
    vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
    ::~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
               *)&local_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::getObjectiveDataProgress(std::vector<std::wstring, std::allocator<std::wstring
   > >&) */

void __thiscall NewOptionsDialog::getObjectiveDataProgress(NewOptionsDialog *this,vector *param_1)

{
  undefined8 uVar1;
  char cVar2;
  BaseChallengeModule *pBVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = BoardHelpers::HasExtraChallenges();
  if ((cVar2 != '\0') ||
     ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0 &&
      (cVar2 = Board::IsStarChallengeActive(*(Board **)(gLawnApp + 0x9f0)), cVar2 != '\0')))) {
    pBVar3 = BoardHelpers::GetLevelModuleByClass<BaseChallengeModule>();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    if (pBVar3 != (BaseChallengeModule *)0x0) {
      (**(code **)(*(long *)pBVar3 + 0xb8))
                (pBVar3,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    }
    cVar2 = std::vector<Challenge*,std::allocator<Challenge*>>::empty
                      ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
    if (cVar2 == '\0') {
      uVar6 = 0;
      while( true ) {
        uVar1 = local_20;
        uVar5 = FUN_03f045cc(local_20,local_18);
        if (uVar5 <= uVar6) break;
        puVar4 = (undefined8 *)FUN_03f045d8(uVar1,uVar6);
        (**(code **)(*(long *)*puVar4 + 200))(awStack_28,(long *)*puVar4);
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                  ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_28);
        FUN_05476c50(awStack_28);
        uVar6 = uVar6 + 1;
      }
    }
    std::vector<Challenge*,std::allocator<Challenge*>>::~vector
              ((vector<Challenge*,std::allocator<Challenge*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::Resize(int, int, int, int) */

void __thiscall
NewOptionsDialog::Resize(NewOptionsDialog *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  PrimeText_PotentialText *pPVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  PrimeGlyphMesh *pPVar15;
  ulong uVar16;
  long *plVar17;
  PrimeTextWidget *pPVar18;
  ulong uVar19;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  Color aCStack_c8 [16];
  Insets aIStack_b8 [16];
  Insets aIStack_a8 [16];
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_48 [24];
  vector<bool,std::allocator<bool>> avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  calculateOuterBoxes(this);
  iVar2 = FUN_03f0479c(0xf);
  iVar6 = *(int *)(this + 0x54);
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
  iVar7 = *(int *)(lVar10 + 0x3c);
  iVar3 = FUN_03f0479c(5);
  Widget_ButtonList::DoLayout
            ((Widget_ButtonList *)(this + 0xf0),iVar2,(iVar6 - iVar7) - iVar3,
             *(int *)(this + 0x50) + iVar2 * -2,0,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_78);
  std::vector<bool,std::allocator<bool>>::vector(avStack_30);
  getObjectiveData(this,(bool *)(this + 0x270),(vector *)local_78,(vector *)avStack_30);
  bVar1 = (bool)PVZ1ModeUtils::IsPlayingPVZ1Level();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60);
  recalculateObjectiveBox(this,(vector *)local_78,(vector *)&local_60,bVar1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_48);
  if (bVar1 != false) {
    getObjectiveDataProgress(this,(vector *)avStack_48);
  }
  if (this[0x270] != (NewOptionsDialog)0x0) {
    uVar19 = 0;
    while( true ) {
      uVar16 = FUN_03f04590(local_60,local_58);
      if (uVar16 <= uVar19) break;
      Sexy::Insets::Insets(aIStack_98,(Insets *)&PrimeText_Game::Color_Description_Brown);
      puVar13 = (undefined8 *)FUN_03f04390(*(undefined8 *)(this + 0x1e8),uVar19);
      pPVar18 = (PrimeTextWidget *)*puVar13;
      uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
      lVar10 = FUN_03f0459c(local_60,uVar19);
      iVar6 = *(int *)(lVar10 + 8);
      iVar7 = *(int *)(lVar10 + 0xc);
      uVar14 = FUN_03f045a4(local_78[0],uVar19);
      FUN_05477b24(aIStack_a8,uVar14);
      Sexy::Insets::Insets(aIStack_88,aIStack_98);
      pPVar15 = (PrimeGlyphMesh *)
                Sexy::PrimeText_SimpleFormatter::PrepareFormattedText
                          (0,0,(float)iVar6,(float)iVar7,uVar11,aIStack_a8,0,1,aIStack_88);
      Sexy::PrimeTextWidget::SetGlyphMesh(pPVar18,pPVar15);
      FUN_05476c50(aIStack_a8);
      puVar13 = (undefined8 *)FUN_03f04390(*(undefined8 *)(this + 0x1e8),uVar19);
      plVar17 = (long *)*puVar13;
      uVar11 = FUN_03f0459c(local_60,uVar19);
      (**(code **)(*plVar17 + 0x1a0))(plVar17,uVar11);
      uVar19 = uVar19 + 1;
    }
  }
  iVar4 = FUN_03f0479c(0x14);
  iVar5 = FUN_03f0479c(0xdc);
  iVar6 = FUN_03f0479c(10);
  iVar7 = *(int *)(this + 0x264);
  iVar3 = *(int *)(this + 0x24c);
  iVar6 = iVar5 + *(int *)(this + 0x248) + iVar6;
  iVar2 = FUN_03f0479c(5);
  iVar2 = iVar3 + iVar7 + iVar2;
  lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae15c0);
  iVar3 = *(int *)(lVar10 + 0x3c);
  iVar7 = FUN_03f0479c(5);
  iVar7 = iVar7 + iVar3;
  if (this[0x270] == (NewOptionsDialog)0x0) {
    iVar8 = FUN_03f0479c(0);
    iVar7 = iVar7 + iVar8;
    iVar2 = iVar2 - (iVar8 + *(int *)(this + 0x264));
  }
  else {
    iVar4 = FUN_03f0479c(0x14);
  }
  plVar17 = *(long **)(this + 0x218);
  iVar2 = iVar2 + iVar4;
  uVar9 = FUN_03f0479c(0x10e);
  (**(code **)(*plVar17 + 0x198))(plVar17,iVar6,iVar2,uVar9,iVar3);
  plVar17 = *(long **)(this + 0x220);
  uVar9 = FUN_03f0479c(0x10e);
  (**(code **)(*plVar17 + 0x198))(plVar17,iVar6,iVar2 + iVar7,uVar9,iVar3);
  TodStringTranslate(L"[OPTIONS_MUSIC_LABEL]");
  TodStringTranslate(L"[OPTIONS_SOUNDFX]");
  Sexy::Color::Color(aCStack_c8,1);
  Sexy::Insets::Insets(aIStack_b8,*(int *)(this + 0x248),iVar2,iVar5,iVar3);
  pPVar18 = *(PrimeTextWidget **)(this + 0x228);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_HardShadow);
  Sexy::Insets::Insets(aIStack_98,aIStack_b8);
  FUN_05477b24(aIStack_a8,auStack_e0);
  Sexy::Insets::Insets(aIStack_88,(Insets *)aCStack_c8);
  pPVar12 = (PrimeText_PotentialText *)
            Sexy::BuildPotentialText_Paragraph(uVar11,aIStack_98,aIStack_a8,2,1,aIStack_88);
  Sexy::PrimeTextWidget::SetPotentialText(pPVar18,pPVar12);
  FUN_05476c50(aIStack_a8);
  Sexy::Insets::Insets(aIStack_a8,*(int *)(this + 0x248),iVar2 + iVar7,iVar5,iVar3);
  pPVar18 = *(PrimeTextWidget **)(this + 0x230);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_HardShadow);
  Sexy::Insets::Insets(aIStack_98,aIStack_a8);
  FUN_05477b24(auStack_d0,auStack_d8);
  Sexy::Insets::Insets(aIStack_88,(Insets *)aCStack_c8);
  pPVar12 = (PrimeText_PotentialText *)
            Sexy::BuildPotentialText_Paragraph(uVar11,aIStack_98,auStack_d0,2,1,aIStack_88);
  Sexy::PrimeTextWidget::SetPotentialText(pPVar18,pPVar12);
  FUN_05476c50(auStack_d0);
  FUN_05476c50(auStack_d8);
  FUN_05476c50(auStack_e0);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_48);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)&local_60);
  std::vector<bool,std::allocator<bool>>::~vector(avStack_30);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)local_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::NewOptionsDialog(bool, bool) */

void __thiscall NewOptionsDialog::NewOptionsDialog(NewOptionsDialog *this,bool param_1,bool param_2)

{
  SliderListener *this_00;
  Widget_ButtonList *this_01;
  ButtonListener *this_02;
  LawnApp *this_03;
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  PrimeText *this_04;
  wchar16 *extraout_x0;
  ulong uVar11;
  PrimeTextWidget *pPVar12;
  Image *pIVar13;
  Image *pIVar14;
  Slider *pSVar15;
  float *pfVar16;
  long lVar17;
  undefined8 uVar18;
  PVZ2UIButton *pPVar19;
  WorldDataManager *this_05;
  string *psVar20;
  PopAnim *pPVar21;
  RtClass *pRVar22;
  PopAnimRig *pPVar23;
  wchar16 *extraout_x1;
  PVZ2UIImage *pPVar24;
  LineBreakCategory *pLVar25;
  undefined **ppuVar26;
  long *plVar27;
  ulong uVar28;
  code *pcVar29;
  double dVar30;
  float fVar31;
  float local_164;
  undefined8 local_160;
  undefined8 local_158;
  vector<bool,std::allocator<bool>> avStack_148 [40];
  Widget_Button_Stats aWStack_120 [40];
  Widget_Button_Stats aWStack_f8 [40];
  Widget_Button_Stats aWStack_d0 [40];
  DummyInit aDStack_a8 [48];
  undefined4 local_78 [14];
  PrimeTextWidget *local_40 [7];
  long local_8;
  
  this_00 = (SliderListener *)(this + 0xe0);
  this_01 = (Widget_ButtonList *)(this + 0xf0);
  local_8 = ___stack_chk_guard;
  this_02 = (ButtonListener *)(this + 0xd8);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener(this_02);
  Sexy::SliderListener::SliderListener(this_00);
  Sexy::CheckboxListener::CheckboxListener((CheckboxListener *)(this + 0xe8));
  ppuVar26 = &PTR_GetClass_067930e0;
  *(undefined ***)this = &PTR_GetClass_067930e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06793430;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06793478;
  *(undefined **)(this + 0xe8) = &DAT_06793498;
  Widget_ButtonList::Widget_ButtonList(this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x200));
  Sexy::Insets::Insets((Insets *)(this + 0x238));
  Sexy::Insets::Insets((Insets *)(this + 0x248));
  Sexy::Insets::Insets((Insets *)(this + 600));
  Sexy::Point::Point((Point *)(this + 0x268));
  this[0x280] = (NewOptionsDialog)param_2;
  this_04 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_04);
  this_03 = gLawnApp;
  pLVar25 = (LineBreakCategory *)&gLawnApp;
  pPVar24 = (PVZ2UIImage *)local_78;
  std::string::string((string *)local_40,"UI_PauseMenu");
  LawnApp::LoadGroup(this_03,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  if (DAT_06ae1818 == (undefined4 *)0x0) {
    cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (extraout_x0,extraout_x1,(LineBreakCategory *)pPVar24,pLVar25,
                       (LineBreakCategory *)ppuVar26);
    if (cVar3 == '\0') {
      DAT_06ae1818 = (undefined4 *)&DAT_06ae1518;
    }
    else {
      DAT_06ae1818 = (undefined4 *)&DAT_06ae1660;
    }
  }
  puVar1 = DAT_06ae1818;
  uVar4 = FUN_03f0479c(DAT_06ae1818[8]);
  *(undefined4 *)(this + 0x50) = uVar4;
  uVar4 = FUN_03f0479c(puVar1[9]);
  *(undefined4 *)(this + 0x54) = uVar4;
  iVar5 = FUN_03f0479c(800);
  *(int *)(this + 0x90) = -iVar5;
  iVar5 = FUN_03f0479c(800);
  *(int *)(this + 0x98) = -iVar5;
  iVar5 = FUN_03f0479c(800);
  *(int *)(this + 0x94) = -iVar5;
  iVar5 = FUN_03f0479c(800);
  *(int *)(this + 0x9c) = -iVar5;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_160);
  std::vector<bool,std::allocator<bool>>::vector(avStack_148);
  getObjectiveData(this,(bool *)(this + 0x270),(vector *)&local_160,(vector *)avStack_148);
  calculateOuterBoxes(this);
  recalculateObjectiveBox(this,(vector *)&local_160,(vector *)0x0,false);
  *(undefined8 *)(this + 0x278) = 0;
  if (this[0x270] == (NewOptionsDialog)0x0) {
    *(int *)(this + 0x54) = *(int *)(this + 0x54) - *(int *)(this + 0x264);
  }
  else {
    pPVar21 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06ae1820);
    pRVar22 = (RtClass *)PopAnimRig::StaticGetClass();
    pPVar23 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar21,pRVar22);
    *(PopAnimRig **)(this + 0x278) = pPVar23;
    std::string::string((string *)local_40,"star2_empty");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_a8);
    PopAnimRig::PlayAndStop(pPVar23,(string *)local_40,0,aDStack_a8);
    std::string::~string((string *)local_40);
    nop();
  }
  uVar28 = 0;
  while( true ) {
    uVar11 = FUN_03f04378(local_160,local_158);
    bVar2 = uVar11 <= uVar28;
    uVar28 = uVar28 + 1;
    if (bVar2) break;
    pPVar12 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar12);
    local_40[0] = pPVar12;
    std::vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>>::push_back
              ((vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>> *)
               (this + 0x1e8),local_40);
    pPVar12 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(pPVar12);
    local_40[0] = pPVar12;
    std::vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>>::push_back
              ((vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>> *)
               (this + 0x200),local_40);
  }
  pPVar12 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar12);
  *(PrimeTextWidget **)(this + 0x228) = pPVar12;
  pPVar12 = ::operator_new(0xf8);
  Sexy::PrimeTextWidget::PrimeTextWidget(pPVar12);
  *(PrimeTextWidget **)(this + 0x230) = pPVar12;
  Sexy::Color::Color((Color *)local_40,0xff,0xff,100);
  Sexy::Widget::SetColor((Widget *)this,3,(Color *)local_40);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae14c8);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae15c0);
  pSVar15 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar15,pIVar13,pIVar14,5,this_00);
  *(Slider **)(this + 0x218) = pSVar15;
  dVar30 = (double)(**(code **)(*(long *)gLawnApp + 0x1d8))(gLawnApp);
  local_164 = (float)dVar30;
  local_78[0] = 0;
  local_40[0] = (PrimeTextWidget *)CONCAT44(local_40[0]._4_4_,0x3f800000);
  pfVar16 = eastl::min_alt<float>((float *)local_40,&local_164);
  pfVar16 = eastl::max_alt<float>((float *)local_78,pfVar16);
  fVar31 = *pfVar16;
  pSVar15 = *(Slider **)(this + 0x218);
  local_164 = fVar31;
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1570);
  iVar5 = FUN_03f0479c(3);
  Sexy::Slider::SetFillImage(pSVar15,pIVar13,iVar5);
  uVar4 = FUN_03f0479c(4);
  FUN_03f04364(*(long *)(this + 0x218) + 0x184,uVar4);
  (**(code **)(**(long **)(this + 0x218) + 0x310))((double)fVar31,*(long **)(this + 0x218));
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x218),-8.0);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x218),1);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x218),true);
  pSVar15 = *(Slider **)(this + 0x218);
  iVar5 = FUN_03f0479c(2);
  Sexy::Point::Point((Point *)local_40,iVar5,iVar5);
  Sexy::Slider::SetKnobShadowOffsets(pSVar15,(string *)local_40);
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae14c8);
  pIVar14 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae15c0);
  pSVar15 = ::operator_new(0x188);
  Sexy::Slider::Slider(pSVar15,pIVar13,pIVar14,6,this_00);
  *(Slider **)(this + 0x220) = pSVar15;
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1570);
  iVar5 = FUN_03f0479c(3);
  Sexy::Slider::SetFillImage(pSVar15,pIVar13,iVar5);
  uVar4 = FUN_03f0479c(4);
  FUN_03f04364(*(long *)(this + 0x220) + 0x184,uVar4);
  plVar27 = *(long **)(this + 0x220);
  pcVar29 = *(code **)(*plVar27 + 0x310);
  (**(code **)(*(long *)gLawnApp + 0x1e0))(gLawnApp);
  (*pcVar29)(plVar27);
  Sexy::Slider::SetKnobRotationRate(*(Slider **)(this + 0x220),-8.0);
  Sexy::Slider::SetKnobInside(*(Slider **)(this + 0x220),1);
  Sexy::Slider::SetDrawKnobShadow(*(Slider **)(this + 0x220),true);
  pSVar15 = *(Slider **)(this + 0x220);
  iVar5 = FUN_03f0479c(2);
  Sexy::Point::Point((Point *)local_40,iVar5,iVar5);
  Sexy::Slider::SetKnobShadowOffsets(pSVar15,(string *)local_40);
  puVar1 = DAT_06ae1818;
  if (param_2) {
    uVar6 = FUN_03f0479c(*DAT_06ae1818);
    uVar7 = FUN_03f0479c(puVar1[1]);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
    puVar1 = DAT_06ae1818;
    uVar4 = *(undefined4 *)(lVar17 + 0x3c);
    uVar8 = FUN_03f0479c(DAT_06ae1818[3]);
    uVar9 = FUN_03f0479c(puVar1[4]);
    uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    TodStringTranslate(L"[DANGER_ROOM_BUTTON_RETIRE]");
    Widget_Button_Stats::Widget_Button_Stats
              (aWStack_120,uVar6,uVar7,uVar4,uVar8,uVar9,4,uVar18,(string *)local_40);
    FUN_05476c50((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ae1598,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ae1898,3);
    pPVar19 = (PVZ2UIButton *)
              Widget_ButtonList::Build_WidgetList_Button
                        (aWStack_120,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
    Widget_ButtonList::AddButton(this_01,pPVar19,this_02);
    puVar1 = DAT_06ae1818;
    uVar6 = FUN_03f0479c(*DAT_06ae1818);
    uVar7 = FUN_03f0479c(puVar1[1]);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
    puVar1 = DAT_06ae1818;
    uVar4 = *(undefined4 *)(lVar17 + 0x3c);
    uVar8 = FUN_03f0479c(DAT_06ae1818[3]);
    uVar9 = FUN_03f0479c(puVar1[4]);
    uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    TodStringTranslate(L"[RESTART_BUTTON]");
    Widget_Button_Stats::Widget_Button_Stats
              (aWStack_f8,uVar6,uVar7,uVar4,uVar8,uVar9,2,uVar18,(string *)local_40);
    FUN_05476c50((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ae1598,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ae1898,3);
    pPVar19 = (PVZ2UIButton *)
              Widget_ButtonList::Build_WidgetList_Button
                        (aWStack_f8,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
    Widget_ButtonList::AddButton(this_01,pPVar19,this_02);
    puVar1 = DAT_06ae1818;
    uVar6 = FUN_03f0479c(*DAT_06ae1818);
    uVar7 = FUN_03f0479c(puVar1[1]);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
    puVar1 = DAT_06ae1818;
    uVar4 = *(undefined4 *)(lVar17 + 0x3c);
    uVar8 = FUN_03f0479c(DAT_06ae1818[3]);
    uVar9 = FUN_03f0479c(puVar1[4]);
    uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    TodStringTranslate(L"[RESUME_BUTTON]");
    Widget_Button_Stats::Widget_Button_Stats
              (aWStack_d0,uVar6,uVar7,uVar4,uVar8,uVar9,0x3e9,uVar18,(string *)local_40);
    FUN_05476c50((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ae1900,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ae1a48,3);
    pPVar19 = (PVZ2UIButton *)
              Widget_ButtonList::Build_WidgetList_Button
                        (aWStack_d0,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
    Widget_ButtonList::AddButton(this_01,pPVar19,this_02);
    Widget_Button_Stats::~Widget_Button_Stats(aWStack_d0);
    Widget_Button_Stats::~Widget_Button_Stats(aWStack_f8);
    Widget_Button_Stats::~Widget_Button_Stats(aWStack_120);
  }
  else {
    if (param_1) {
      TodStringTranslate(L"[BACK_TO_MAP]");
      lVar17 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if ((lVar17 != 0) && (*(char *)(lVar17 + 0x116) != '\0')) {
        TodStringTranslate(L"[PVZ_WORLDCUP_QUITGAME]");
        FUN_054766c8(aWStack_f8,(string *)local_40);
        FUN_05476c50((string *)local_40);
      }
      puVar1 = DAT_06ae1818;
      uVar6 = FUN_03f0479c(*DAT_06ae1818);
      uVar7 = FUN_03f0479c(puVar1[1]);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
      puVar1 = DAT_06ae1818;
      uVar4 = *(undefined4 *)(lVar17 + 0x3c);
      uVar8 = FUN_03f0479c(DAT_06ae1818[3]);
      uVar9 = FUN_03f0479c(puVar1[4]);
      uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      FUN_05477b24((string *)local_40,aWStack_f8);
      Widget_Button_Stats::Widget_Button_Stats
                (aWStack_d0,uVar6,uVar7,uVar4,uVar8,uVar9,0,uVar18,(string *)local_40);
      FUN_05476c50((string *)local_40);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ae1598,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ae1898,3);
      pPVar19 = (PVZ2UIButton *)
                Widget_ButtonList::Build_WidgetList_Button
                          (aWStack_d0,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
      Widget_ButtonList::AddButton(this_01,pPVar19,this_02);
      Widget_Button_Stats::~Widget_Button_Stats(aWStack_d0);
      FUN_05476c50(aWStack_f8);
    }
    else {
      uVar6 = FUN_03f0479c(*DAT_06ae1818);
      uVar7 = FUN_03f0479c(puVar1[1]);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
      puVar1 = DAT_06ae1818;
      uVar4 = *(undefined4 *)(lVar17 + 0x3c);
      uVar8 = FUN_03f0479c(DAT_06ae1818[3]);
      uVar9 = FUN_03f0479c(puVar1[4]);
      uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      TodStringTranslate(L"[BACK_TO_MENU]");
      Widget_Button_Stats::Widget_Button_Stats
                (aWStack_d0,uVar6,uVar7,uVar4,uVar8,uVar9,1,uVar18,(string *)local_40);
      FUN_05476c50((string *)local_40);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ae1598,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ae1898,3);
      pPVar19 = (PVZ2UIButton *)
                Widget_ButtonList::Build_WidgetList_Button
                          (aWStack_d0,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
      Widget_ButtonList::AddButton(this_01,pPVar19,this_02);
      Widget_Button_Stats::~Widget_Button_Stats(aWStack_d0);
    }
    this_05 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    psVar20 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    lVar17 = WorldDataManager::FindWorldDataByLevelName(this_05,psVar20);
    cVar3 = CustomLevelUtils::IsCustomLevel();
    if (((cVar3 != '\0') ||
        (cVar3 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel(), cVar3 != '\0')) ||
       ((lVar17 != 0 &&
        ((cVar3 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel(), cVar3 == '\0' ||
         (iVar5 = PVZ2UnchartedModeUtils::GetUnchartedWorldType(), iVar5 != 3)))))) {
      puVar1 = DAT_06ae1818;
      uVar6 = FUN_03f0479c(*DAT_06ae1818);
      uVar7 = FUN_03f0479c(puVar1[1]);
      lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
      puVar1 = DAT_06ae1818;
      uVar4 = *(undefined4 *)(lVar17 + 0x3c);
      uVar8 = FUN_03f0479c(DAT_06ae1818[3]);
      uVar9 = FUN_03f0479c(puVar1[4]);
      uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
      TodStringTranslate(L"[RESTART_BUTTON]");
      Widget_Button_Stats::Widget_Button_Stats
                (aWStack_d0,uVar6,uVar7,uVar4,uVar8,uVar9,2,uVar18,(string *)local_40);
      FUN_05476c50((string *)local_40);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ae1598,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ae1898,3);
      pPVar19 = (PVZ2UIButton *)
                Widget_ButtonList::Build_WidgetList_Button
                          (aWStack_d0,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
      Widget_ButtonList::AddButton(this_01,pPVar19,this_02);
      Widget_Button_Stats::~Widget_Button_Stats(aWStack_d0);
    }
    puVar1 = DAT_06ae1818;
    uVar6 = FUN_03f0479c(*DAT_06ae1818);
    uVar7 = FUN_03f0479c(puVar1[1]);
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae1598);
    puVar1 = DAT_06ae1818;
    uVar4 = *(undefined4 *)(lVar17 + 0x3c);
    uVar8 = FUN_03f0479c(DAT_06ae1818[3]);
    uVar9 = FUN_03f0479c(puVar1[4]);
    uVar18 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_Shaded);
    TodStringTranslate(L"[RESUME_BUTTON]");
    Widget_Button_Stats::Widget_Button_Stats
              (aWStack_d0,uVar6,uVar7,uVar4,uVar8,uVar9,0x3e9,uVar18,(string *)local_40);
    FUN_05476c50((string *)local_40);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06ae1900,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ae1a48,3);
    pPVar19 = (PVZ2UIButton *)
              Widget_ButtonList::Build_WidgetList_Button
                        (aWStack_d0,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
    Widget_ButtonList::AddButton(this_01,pPVar19,this_02);
    Widget_Button_Stats::~Widget_Button_Stats(aWStack_d0);
  }
  iVar5 = *(int *)(this + 0x50);
  iVar10 = FUN_03f0479c(0x12);
  Resize(this,(*(int *)(gLawnApp + 0xd4) - iVar5) / 2,
         iVar10 + (*(int *)(gLawnApp + 0xd8) - *(int *)(this + 0x54)) / 2,iVar5,
         *(int *)(this + 0x54));
  LawnApp::PauseMusic(gLawnApp);
  std::vector<bool,std::allocator<bool>>::~vector(avStack_148);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_160);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewOptionsDialog::~NewOptionsDialog() */

void __thiscall NewOptionsDialog::~NewOptionsDialog(NewOptionsDialog *this)

{
  LawnApp *this_00;
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06793430;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067930e0;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06793478;
  *(undefined **)(this + 0xe8) = &DAT_06793498;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_PauseMenu");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long **)(this + 0x218) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x218) + 0x18))();
    *(undefined8 *)(this + 0x218) = 0;
  }
  if (*(long **)(this + 0x220) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x228);
  }
  else {
    (**(code **)(**(long **)(this + 0x220) + 0x18))();
    *(undefined8 *)(this + 0x220) = 0;
    plVar1 = *(long **)(this + 0x228);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(this + 0x228) = 0;
  }
  if (*(long **)(this + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x230) + 0x18))();
    *(undefined8 *)(this + 0x230) = 0;
  }
  if (*(long **)(this + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x278) + 0x18))();
    *(undefined8 *)(this + 0x278) = 0;
  }
  uVar6 = *(undefined8 *)(this + 0x1e8);
  uVar5 = 0;
  lVar2 = FUN_03f04384(uVar6,*(undefined8 *)(this + 0x1f0));
  if (lVar2 != 0) {
    do {
      plVar1 = (long *)FUN_03f04390(uVar6,uVar5);
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x18))();
        puVar3 = (undefined8 *)FUN_03f04390(*(undefined8 *)(this + 0x1e8),uVar5);
        *puVar3 = 0;
      }
      plVar1 = (long *)FUN_03f04390(*(undefined8 *)(this + 0x200),uVar5);
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x18))();
        puVar3 = (undefined8 *)FUN_03f04390(*(undefined8 *)(this + 0x200),uVar5);
        *puVar3 = 0;
      }
      uVar6 = *(undefined8 *)(this + 0x1e8);
      uVar5 = uVar5 + 1;
      uVar4 = FUN_03f04384(uVar6,*(undefined8 *)(this + 0x1f0));
    } while (uVar5 < uVar4);
  }
  std::vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>>::clear
            ((vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>> *)(this + 0x1e8)
            );
  std::vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>>::clear
            ((vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>> *)(this + 0x200)
            );
  Widget_ButtonList::ClearButtons((Widget_ButtonList *)(this + 0xf0));
  LawnApp::ResumeMusic(gLawnApp);
  std::vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>>::~vector
            ((vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>> *)(this + 0x200)
            );
  std::vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>>::~vector
            ((vector<Sexy::PrimeTextWidget*,std::allocator<Sexy::PrimeTextWidget*>> *)(this + 0x1e8)
            );
  Widget_ButtonList::~Widget_ButtonList((Widget_ButtonList *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewOptionsDialog::~NewOptionsDialog() */

void __thiscall NewOptionsDialog::~NewOptionsDialog(NewOptionsDialog *this)

{
  ~NewOptionsDialog(this);
  AK::FreeHook(this);
  return;
}

