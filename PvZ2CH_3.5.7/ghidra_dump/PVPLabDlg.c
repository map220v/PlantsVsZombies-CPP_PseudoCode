// Class: PVPLabDlg


/* PVPLabDlg::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVPLabDlg::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVPLabDlg::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall PVPLabDlg::ScrollTargetReached(PVPLabDlg *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PVPLabDlg::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVPLabDlg::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVPLabDlg::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall PVPLabDlg::ScrollTargetInterrupted(PVPLabDlg *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* PVPLabDlg::onPVPLabRefresh() */

void PVPLabDlg::onPVPLabRefresh(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPLabDlg::GetLayoutName() */

void __thiscall PVPLabDlg::GetLayoutName(PVPLabDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PVPLab");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVPLabDlg::ButtonDepress(int) */

PVPLabDlg * __thiscall PVPLabDlg::ButtonDepress(PVPLabDlg *this,int param_1)

{
  PVPLabDlg *pPVar1;
  INetworkMsgProcess *this_00;
  
  if ((uint)param_1 < 0x10) {
    this = (PVPLabDlg *)
           ((long)(char)(&switchD_04af4e70::switchdataD_05754ff8)[(uint)param_1] * 4 + 0x4af4e74);
    switch(param_1) {
    case 0:
      GameStateMgr::TranslateTo(gGameStateMgr,0x16,5,5);
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
      pPVar1 = (PVPLabDlg *)INetworkMsgProcess::RequestPVPLogin(this_00);
      return pPVar1;
    case 10:
      pPVar1 = (PVPLabDlg *)LawnApp::ShowPvpUpgrade(gLawnApp,1);
      return pPVar1;
    case 0xb:
      pPVar1 = (PVPLabDlg *)LawnApp::ShowPvpUpgrade(gLawnApp,2);
      return pPVar1;
    case 0xc:
      pPVar1 = (PVPLabDlg *)LawnApp::ShowPvpUpgrade(gLawnApp,3);
      return pPVar1;
    case 0xd:
      pPVar1 = (PVPLabDlg *)LawnApp::ShowPVPZombieLevelUpDialog(gLawnApp);
      return pPVar1;
    case 0xf:
      pPVar1 = (PVPLabDlg *)LawnApp::ShowPvpUpgrade(gLawnApp,7);
      return pPVar1;
    }
  }
  return this;
}


/* non-virtual thunk to PVPLabDlg::ButtonDepress(int) */

void __thiscall PVPLabDlg::ButtonDepress(PVPLabDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PVPLabDlg::PVPLabDlg() */

void __thiscall PVPLabDlg::PVPLabDlg(PVPLabDlg *this)

{
  UISingletonDialog<PVPLabDlg>::UISingletonDialog((UISingletonDialog<PVPLabDlg> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06950220;
  *(undefined **)(this + 0xd8) = &DAT_06950588;
  *(undefined ***)(this + 0x138) = &PTR__PVPLabDlg_069505d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  return;
}


/* PVPLabDlg::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall PVPLabDlg::DrawAll(PVPLabDlg *this,ModalFlags *param_1,Graphics *param_2)

{
  Image *pIVar1;
  
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82240);
  Sexy::Graphics::DrawImage(param_2,pIVar1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPLabDlg::ScrollTouchMotion(Sexy::Touch const&) */

void PVPLabDlg::ScrollTouchMotion(Touch *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ScrollWidget *this;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  int local_28;
  int iStack_24;
  float local_20 [2];
  float local_18;
  float local_14;
  Point local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = std::vector<PVPLabItem*,std::allocator<PVPLabItem*>>::empty
                    ((vector<PVPLabItem*,std::allocator<PVPLabItem*>> *)(param_1 + 0x158));
  if (cVar3 == '\0') {
    plVar8 = (long *)0x0;
    lVar7 = 1;
    lVar9 = -1;
    plVar4 = (long *)FUN_04af4f9c(*(undefined8 *)(param_1 + 0x158));
    iVar1 = *(int *)(*plVar4 + 0x50);
    (**(code **)(**(long **)(param_1 + 0x148) + 0xd0))(&local_28,*(long **)(param_1 + 0x148));
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)local_20,
               (float)(local_28 + *(int *)(*(long *)(param_1 + 0x148) + 0x50) / 2),
               (float)(iStack_24 + *(int *)(*(long *)(param_1 + 0x148) + 0x54) / 2));
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_18);
    while( true ) {
      uVar10 = *(undefined8 *)(param_1 + 0x158);
      uVar5 = FUN_04af4f90(uVar10,*(undefined8 *)(param_1 + 0x160));
      if (uVar5 <= lVar7 - 1U) break;
      puVar6 = (undefined8 *)FUN_04af4f9c(uVar10,lVar7 - 1U);
      plVar4 = (long *)*puVar6;
      (**(code **)(*plVar4 + 0xd0))(local_10,plVar4);
      local_18 = (float)(local_10._0_4_ + (int)plVar4[10] / 2);
      local_14 = (float)(local_10._4_4_ + *(int *)((long)plVar4 + 0x54) / 2);
      uVar2 = (int)(local_18 - local_20[0]) >> 0x1f;
      fVar11 = (float)(int)(((int)(local_18 - local_20[0]) ^ uVar2) - uVar2);
      if (fVar11 < (float)iVar1 * 0.5) {
        uVar10 = 0;
        *(undefined4 *)(plVar4 + 0x61) = 0x3f800000;
        plVar8 = plVar4;
        lVar9 = lVar7;
      }
      else if ((float)iVar1 * 1.5 <= fVar11) {
        uVar10 = 1;
        *(undefined4 *)(plVar4 + 0x61) = 0x3f400000;
      }
      else {
        *(undefined4 *)(plVar4 + 0x61) = 0x3f59999a;
        uVar10 = 0;
      }
      lVar7 = lVar7 + 1;
      (**(code **)(*plVar4 + 0x188))(plVar4,uVar10);
    }
    if (plVar8 != (long *)0x0) {
      UIPage::SetCurPage(*(UIPage **)(param_1 + 0x140),(int)lVar9);
      cVar3 = Sexy::ScrollWidget::GetIsTrackingTouch(*(ScrollWidget **)(param_1 + 0x148));
      if (cVar3 == '\0') {
        this = *(ScrollWidget **)(param_1 + 0x148);
        Sexy::Point::Point(local_10,((int)plVar8[9] + (int)plVar8[10] / 2) -
                                    *(int *)(this + 0x50) / 2,0);
        Sexy::ScrollWidget::ScrollToPoint(this,local_10,true);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVPLabDlg::ScrollTouchMotion(Sexy::Touch const&) */

void __thiscall PVPLabDlg::ScrollTouchMotion(PVPLabDlg *this,Touch *param_1)

{
  ScrollTouchMotion((Touch *)(this + -0x138));
  return;
}


/* PVPLabDlg::~PVPLabDlg() */

void __thiscall PVPLabDlg::~PVPLabDlg(PVPLabDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_06950220;
  *(undefined **)(this + 0xd8) = &DAT_06950588;
  *(undefined ***)(this + 0x138) = &PTR__PVPLabDlg_069505d0;
  std::vector<PVPLabItem*,std::allocator<PVPLabItem*>>::~vector
            ((vector<PVPLabItem*,std::allocator<PVPLabItem*>> *)(this + 0x158));
  UISingletonDialog<PVPLabDlg>::~UISingletonDialog((UISingletonDialog<PVPLabDlg> *)this);
  return;
}


/* non-virtual thunk to PVPLabDlg::~PVPLabDlg() */

void __thiscall PVPLabDlg::~PVPLabDlg(PVPLabDlg *this)

{
  ~PVPLabDlg(this + -0x138);
  return;
}


/* PVPLabDlg::~PVPLabDlg() */

void __thiscall PVPLabDlg::~PVPLabDlg(PVPLabDlg *this)

{
  ~PVPLabDlg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPLabDlg::~PVPLabDlg() */

void __thiscall PVPLabDlg::~PVPLabDlg(PVPLabDlg *this)

{
  ~PVPLabDlg(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPLabDlg::CreateLabItem(int, std::string const&, int) */

void __thiscall PVPLabDlg::CreateLabItem(PVPLabDlg *this,int param_1,string *param_2,int param_3)

{
  vector<PVPLabItem*,std::allocator<PVPLabItem*>> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Image *this_01;
  PVPLabItem *pPVar7;
  SalesProgressBar *this_02;
  string *extraout_x1;
  long *plVar8;
  long lVar9;
  int iVar10;
  code *pcVar11;
  Sexy aSStack_18 [8];
  PVPLabItem *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_031dcc6c(aSStack_18,&DAT_06b82200,param_2);
  Sexy::Upper(aSStack_18,extraout_x1);
  this_01 = (Image *)StringHelper::ToImage((string *)&local_10,false);
  std::string::~string((string *)&local_10);
  std::string::~string((string *)aSStack_18);
  if (this_01 == (Image *)0x0) {
    pPVar7 = (PVPLabItem *)0x0;
  }
  else {
    this_00 = (vector<PVPLabItem*,std::allocator<PVPLabItem*>> *)(this + 0x158);
    pPVar7 = ::operator_new(0x310);
    PVPLabItem::PVPLabItem(pPVar7,this_01);
    local_10 = pPVar7;
    UI::Dialog::SetButtonListener
              ((Dialog *)this,(PVZ2UIButton *)pPVar7,param_1,(ButtonListener *)(this + 0xd8));
    iVar10 = *(int *)(*(long *)(this + 0x148) + 0x50);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_01);
    this_02 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82278);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_02);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    cVar1 = std::vector<PVPLabItem*,std::allocator<PVPLabItem*>>::empty(this_00);
    if (cVar1 == '\0') {
      plVar8 = (long *)std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)this_00);
      iVar10 = *(int *)(*plVar8 + 0x48) + *(int *)(*plVar8 + 0x50);
    }
    else {
      iVar10 = iVar10 / 2 - iVar2 / 2;
    }
    pPVar7 = local_10;
    pcVar11 = *(code **)(*(long *)local_10 + 0x198);
    uVar5 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_01);
    uVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_01);
    (*pcVar11)(pPVar7,iVar10,(iVar3 - iVar4) / 2,uVar5,uVar6);
    plVar8 = *(long **)(this + 0x148);
    lVar9 = *plVar8;
    *(int *)(local_10 + 0x30c) = param_3;
    (**(code **)(lVar9 + 0x60))(plVar8,local_10);
    std::vector<PVPLabItem*,std::allocator<PVPLabItem*>>::push_back(this_00,&local_10);
    pPVar7 = local_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPLabDlg::OnCreate() */

void __thiscall PVPLabDlg::OnCreate(PVPLabDlg *this)

{
  int iVar1;
  undefined *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  UIPage *pUVar6;
  UIScrollControl *pUVar7;
  long *plVar8;
  long lVar9;
  SalesProgressBar *this_01;
  PVPCurrencyBar *this_02;
  INetworkMsgProcess *this_03;
  long lVar10;
  CBMemberTranslatorX aCStack_88 [24];
  Delegate0 aDStack_70 [48];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)local_40,"Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  iVar3 = *(int *)(this + 0x54);
  *(int *)(pUVar5 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar5 + 0x50)) / 2;
  *(int *)(pUVar5 + 0x4c) = (iVar3 - *(int *)(pUVar5 + 0x54)) / 2;
  std::string::string((string *)local_40,"UIPage_0");
  pUVar6 = UI::Dialog::GetWidget<UIPage>((Dialog *)this,(string *)local_40);
  *(UIPage **)(this + 0x140) = pUVar6;
  std::string::~string((string *)local_40);
  nop();
  UIPage::SetClickable(*(UIPage **)(this + 0x140),false);
  std::string::string((string *)local_40,"UIScroll_0");
  pUVar7 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)local_40);
  *(UIScrollControl **)(this + 0x148) = pUVar7;
  std::string::~string((string *)local_40);
  nop();
  FUN_04af4f7c(*(long *)(this + 0x148) + 0xe0,this + 0x138);
  Sexy::ScrollWidget::EnableBounce(*(ScrollWidget **)(this + 0x148),false);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x148),false);
  std::string::string((string *)local_40,"base");
  CreateLabItem(this,10,(string *)local_40,1);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"sun");
  CreateLabItem(this,0xb,(string *)local_40,2);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"army");
  CreateLabItem(this,0xc,(string *)local_40,3);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"zombie");
  CreateLabItem(this,0xd,(string *)local_40,4);
  std::string::~string((string *)local_40);
  nop();
  std::string::string((string *)local_40,"skill");
  CreateLabItem(this,0xf,(string *)local_40,7);
  std::string::~string((string *)local_40);
  nop();
  plVar8 = (long *)std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x158));
  lVar10 = *plVar8;
  lVar9 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x148));
  *(int *)(lVar9 + 0x50) = *(int *)(lVar10 + 0x48) + *(int *)(lVar10 + 0x50) * 3;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82278);
  uVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  *(undefined4 *)(lVar9 + 0x54) = uVar2;
  UIScrollControl::Layout(*(UIScrollControl **)(this + 0x148));
  iVar3 = FUN_04af4f90(*(undefined8 *)(this + 0x158),*(undefined8 *)(this + 0x160));
  UIPage::SetMaxPage(*(UIPage **)(this + 0x140),iVar3);
  this_02 = ::operator_new(0x150);
  PVPCurrencyBar::PVPCurrencyBar(this_02);
  lVar9 = *(long *)pUVar5;
  *(PVPCurrencyBar **)(this + 0x150) = this_02;
  (**(code **)(lVar9 + 0x60))(pUVar5);
  std::string::string((string *)local_40,"UIButton_0");
  lVar9 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  lVar10 = *(long *)(this + 0x150);
  iVar3 = *(int *)(lVar9 + 0x50);
  iVar1 = *(int *)(lVar9 + 0x48);
  *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)(lVar9 + 0x4c);
  iVar4 = FUN_04af50d0(0x14);
  *(int *)(lVar10 + 0x48) = iVar1 + iVar3 + iVar4;
  Sexy::Touch::Touch((Touch *)local_40);
  local_40[0] = 0;
  (**(code **)(*(long *)this + 0x350))(this,(string *)local_40);
  this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPLabEnter(this_03);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLabRefresh);
  Sexy::Delegate0::Delegate0<PVPLabDlg,void(PVPLabDlg::*)()>(aDStack_70,aCStack_88);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PVPLabRefresh,aDStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

