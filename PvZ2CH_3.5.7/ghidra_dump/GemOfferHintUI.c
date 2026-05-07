// Class: GemOfferHintUI


/* GemOfferHintUI::ButtonPress(int) */

int GemOfferHintUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to GemOfferHintUI::ButtonPress(int) */

void __thiscall GemOfferHintUI::ButtonPress(GemOfferHintUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferHintUI::~GemOfferHintUI() */

void __thiscall GemOfferHintUI::~GemOfferHintUI(GemOfferHintUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_069833a0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06983070;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_GemOffer");
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


/* GemOfferHintUI::~GemOfferHintUI() */

void __thiscall GemOfferHintUI::~GemOfferHintUI(GemOfferHintUI *this)

{
  ~GemOfferHintUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferHintUI::InitView() */

void __thiscall GemOfferHintUI::InitView(GemOfferHintUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  PVZ2UIButton *pPVar8;
  SalesProgressBar *pSVar9;
  LotteryResultProgressBar *pLVar10;
  code *pcVar11;
  long *plVar12;
  undefined1 auStack_90 [8];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar1 = FUN_04c23560(0x90);
  iVar2 = FUN_04c23560(0x8c);
  iVar5 = *(int *)(this + 0x50);
  iVar6 = *(int *)(this + 0x54);
  iVar3 = FUN_04c23560(0x50);
  Sexy::Insets::Insets((Insets *)&local_88,iVar1,iVar2,iVar5 + iVar1 * -2,(iVar6 - iVar2) - iVar3);
  FUN_05478178(awStack_78,L"[GEM_OFFER_GOTO]",auStack_90);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,0x65,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar8;
  FUN_05476c50(awStack_78);
  nop();
  pPVar8 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8ee50,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8ed98,3);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar1 = FUN_04c23560(0x6e);
  iVar5 = local_84 + local_7c;
  iVar6 = local_88 + (local_80 - iVar1) / 2;
  iVar2 = FUN_04c23560(0x1e);
  plVar12 = *(long **)(this + 0xe0);
  pcVar11 = *(code **)(*plVar12 + 0x198);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ee50);
  uVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  (*pcVar11)(plVar12,iVar6,iVar5 - iVar2,iVar1,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar8 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar8,100,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  pcVar11 = *(code **)(*(long *)pPVar8 + 0x198);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ec18);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  iVar6 = FUN_04c23560(10);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ec18);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar2 = FUN_04c23560(8);
  pLVar10 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ec18);
  uVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar10);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ec18);
  uVar7 = SalesProgressBar::GetCurrentLevel(pSVar9);
  (*pcVar11)(pPVar8,((local_88 + local_80) - iVar5 / 2) - iVar6,(local_84 - iVar1 / 2) + iVar2,uVar4
             ,uVar7);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b8ec18,1);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b8eb00,1);
  PVZ2UIButton::SetDialogStates(pPVar8,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferHintUI::GemOfferHintUI() */

void __thiscall GemOfferHintUI::GemOfferHintUI(GemOfferHintUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined **)(this + 0xd8) = &DAT_069833a0;
  *(undefined ***)this = &PTR_GetClass_06983070;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_GemOffer");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0xe0) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GemOfferHintUI::ButtonDepress(int) */

void __thiscall GemOfferHintUI::ButtonDepress(GemOfferHintUI *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  if (param_1 == 100) {
    LawnApp::KillGemOfferHintUI(gLawnApp);
    return;
  }
  if (param_1 == 0x65) {
    LawnApp::KillGemOfferHintUI(gLawnApp);
    LawnApp::ShowCoinStore(gLawnApp,2);
    return;
  }
  return;
}


/* non-virtual thunk to GemOfferHintUI::ButtonDepress(int) */

void __thiscall GemOfferHintUI::ButtonDepress(GemOfferHintUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferHintUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall GemOfferHintUI::DrawAll(GemOfferHintUI *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  LotteryResultProgressBar *this_00;
  Insets aIStack_28 [4];
  int local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  iVar2 = FUN_04c23560(0x90);
  iVar3 = FUN_04c23560(0x8c);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = *(int *)(this + 0x54);
  iVar4 = FUN_04c23560(0x50);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar1 + iVar2 * -2,(iVar5 - iVar3) - iVar4);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eb28);
  Draw9SliceImage(param_2,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eb78);
  iVar1 = *(int *)(this + 0x50);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8eb78);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar2 = FUN_04c23560(0x34);
  Sexy::Graphics::DrawImage(param_2,pIVar7,(iVar1 - iVar5) / 2,local_24 + iVar2);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

