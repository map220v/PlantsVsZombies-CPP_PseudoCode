// Class: ActiveEntranceUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveEntranceUI::~ActiveEntranceUI() */

void __thiscall ActiveEntranceUI::~ActiveEntranceUI(ActiveEntranceUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06973470;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06973140;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_ActiveEntrance");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveEntranceUI::~ActiveEntranceUI() */

void __thiscall ActiveEntranceUI::~ActiveEntranceUI(ActiveEntranceUI *this)

{
  ~ActiveEntranceUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveEntranceUI::setupScreen() */

void __thiscall ActiveEntranceUI::setupScreen(ActiveEntranceUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  PVZ2UIButton *pPVar15;
  code *pcVar16;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar1 = *(int *)(this + 0x50);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88998);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar4 = FUN_04b9112c(0x28);
  iVar2 = *(int *)(this + 0x54);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88998);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar6 = FUN_04b9112c(0x28);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88998);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar8 = FUN_04b9112c(0x28);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88998);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar10 = FUN_04b9112c(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_40,((iVar1 - iVar3) - iVar4) / 2,((iVar2 - iVar5) - iVar6) / 2,
             iVar7 + iVar8,iVar9 + iVar10);
  *(undefined8 *)(this + 0xe4) = local_40;
  *(undefined8 *)(this + 0xec) = uStack_38;
  iVar3 = FUN_04b9112c(10);
  iVar1 = *(int *)(this + 0xe4);
  iVar2 = *(int *)(this + 0xe8);
  iVar4 = FUN_04b9112c(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar3 + iVar1,iVar3 + iVar2,*(int *)(this + 0xec) - iVar4,
             *(int *)(this + 0xf0) - iVar4);
  *(undefined8 *)(this + 0xf4) = local_40;
  *(undefined8 *)(this + 0xfc) = uStack_38;
  iVar3 = FUN_04b9112c(10);
  iVar1 = *(int *)(this + 0xf4);
  iVar2 = *(int *)(this + 0xf8);
  iVar4 = FUN_04b9112c(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar3 + iVar1,iVar3 + iVar2,*(int *)(this + 0xfc) - iVar4,
             *(int *)(this + 0x100) - iVar4);
  *(undefined8 *)(this + 0x104) = local_40;
  *(undefined8 *)(this + 0x10c) = uStack_38;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar1 = *(int *)(this + 0x50);
  pcVar16 = *(code **)(*(long *)pPVar15 + 0x198);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88998);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar4 = FUN_04b9112c(0x32);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bf8);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar2 = *(int *)(this + 0xe8);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bf8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar14);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bf8);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bf8);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar16)(pPVar15,((iVar1 + iVar3) / 2 - iVar4) - iVar5,iVar2 - iVar6,uVar11,uVar12);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b88bf8,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b88a10,1);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar15);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar15 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar15,0x65,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
  FUN_05476c50(awStack_78);
  nop();
  iVar1 = *(int *)(this + 0x10c);
  if (*(int *)(this + 0xe0) == 0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88970;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88948;
  }
  iVar2 = *(int *)(this + 0x104);
  pcVar16 = *(code **)(*(long *)pPVar15 + 0x198);
  pLVar13 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar5 = FUN_04b9112c(200);
  iVar3 = *(int *)(this + 0x108);
  pLVar13 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  uVar12 = SalesProgressBar::GetCurrentLevel(pSVar14);
  (*pcVar16)(pPVar15,(iVar2 + iVar1 / 2) - iVar4 / 2,iVar5 + iVar3,uVar11,uVar12);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,this_00,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,this_00,1);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar15);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveEntranceUI::ActiveEntranceUI(ActiveEntranceType) */

void __thiscall ActiveEntranceUI::ActiveEntranceUI(ActiveEntranceUI *this,undefined4 param_2)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06973140;
  *(undefined **)(this + 0xd8) = &DAT_06973470;
  Sexy::Insets::Insets((Insets *)(this + 0xe4));
  Sexy::Insets::Insets((Insets *)(this + 0xf4));
  Sexy::Insets::Insets((Insets *)(this + 0x104));
  *(undefined4 *)(this + 0xe0) = param_2;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_ActiveEntrance");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  setupScreen(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveEntranceUI::Draw(Sexy::Graphics*) */

void __thiscall ActiveEntranceUI::Draw(ActiveEntranceUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  int iVar11;
  Image *local_78;
  GraphicsAutoState aGStack_68 [8];
  Insets aIStack_60 [16];
  Transform aTStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_68,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  Sexy::Insets::Insets(aIStack_60,(Insets *)(this + 0xf4));
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88c88);
  DrawImageTiled(0x3f800000,param_1,aIStack_60,uVar7);
  Sexy::Insets::Insets(aIStack_60,(Insets *)(this + 0xe4));
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88b40);
  Draw9SliceImage(param_1,aIStack_60,uVar7);
  iVar11 = *(int *)(this + 0xe0);
  if (iVar11 == 1) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88a60);
    Sexy::Graphics::DrawImage(param_1,pIVar8,*(int *)(this + 0x104),*(int *)(this + 0x108));
    local_78 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88a88);
    iVar11 = *(int *)(this + 0x50);
LAB_04b917b8:
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88a88);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar4 = *(int *)(this + 0xe8);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88a88);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
    iVar2 = iVar2 - (iVar2 >> 0x1f);
    uVar7 = 0x12;
  }
  else {
    if (iVar11 != 0) {
      if (iVar11 != 2) goto LAB_04b91800;
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88a38);
      Sexy::Graphics::DrawImage(param_1,pIVar8,*(int *)(this + 0x104),*(int *)(this + 0x108));
      local_78 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b888f8);
      iVar11 = *(int *)(this + 0x50);
      goto LAB_04b917b8;
    }
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88998);
    Sexy::Graphics::DrawImage(param_1,pIVar8,*(int *)(this + 0x104),*(int *)(this + 0x108));
    local_78 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88b08);
    iVar11 = *(int *)(this + 0x50);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88b08);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    iVar4 = *(int *)(this + 0xe8);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88b08);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar10);
    iVar2 = iVar2 - (iVar2 >> 0x1f);
    uVar7 = 0xc;
  }
  iVar3 = FUN_04b9112c(uVar7);
  Sexy::Graphics::DrawImage(param_1,local_78,(iVar11 - iVar1) / 2,(iVar4 - (iVar2 >> 1)) + iVar3);
LAB_04b91800:
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88ad8);
  iVar4 = FUN_04b9112c(0x14);
  iVar11 = *(int *)(this + 0x54);
  iVar2 = *(int *)(this + 0xe4);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88ad8);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar3 = FUN_04b9112c(5);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2 - iVar4,(iVar11 - iVar1) + iVar3);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bb8);
  iVar11 = *(int *)(this + 0x104);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bb8);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = FUN_04b9112c(8);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar11 - iVar2 / 2,iVar4 + *(int *)(this + 0x108));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bb8);
  iVar11 = *(int *)(this + 0x104);
  iVar2 = *(int *)(this + 0x10c);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88bb8);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar1 = FUN_04b9112c(8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,(iVar11 + iVar2) - iVar4 / 2,iVar1 + *(int *)(this + 0x108));
  Sexy::Transform::Transform(aTStack_50);
  Sexy::Transform::Scale(aTStack_50,-1.0,1.0);
  iVar11 = *(int *)(this + 0xe4);
  iVar2 = *(int *)(this + 0xec);
  iVar1 = FUN_04b9112c(0x14);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88ad8);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = *(int *)(this + 0x54);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88ad8);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar6 = FUN_04b9112c(5);
  Sexy::Transform::Translate
            (aTStack_50,(float)((iVar11 + iVar2 + iVar1) - iVar3 / 2),
             (float)((iVar4 - iVar5 / 2) + iVar6));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b88ad8);
  Sexy::Graphics::DrawImageTransform(param_1,pIVar8,aTStack_50,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveEntranceUI::ButtonPress(int) */

void ActiveEntranceUI::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to ActiveEntranceUI::ButtonPress(int) */

void __thiscall ActiveEntranceUI::ButtonPress(ActiveEntranceUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* ActiveEntranceUI::ButtonDepress(int) */

void __thiscall ActiveEntranceUI::ButtonDepress(ActiveEntranceUI *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Release");
  if (param_1 == 100) {
    LawnApp::KillActiveEntranceUI(gLawnApp);
    return;
  }
  if (param_1 == 0x65) {
    LawnApp::KillActiveEntranceUI(gLawnApp);
    iVar1 = *(int *)(this + 0xe0);
    if (iVar1 == 1) {
      ActiveCenter::s_ShowTab = 5;
      GameStateMgr::ShowActiveCenter(gGameStateMgr,5,5);
      return;
    }
    if (iVar1 == 0) {
      GameStateMgr::ShowActiveCenter(gGameStateMgr,5,5);
      return;
    }
    if (iVar1 == 2) {
      ActiveCenter::s_ShowTab = 3;
      GameStateMgr::ShowActiveCenter(gGameStateMgr,5,5);
      return;
    }
  }
  return;
}


/* non-virtual thunk to ActiveEntranceUI::ButtonDepress(int) */

void __thiscall ActiveEntranceUI::ButtonDepress(ActiveEntranceUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

