// Class: RedPacketTab


/* RedPacketTab::SetWidgetsVisible(bool) */

void __thiscall RedPacketTab::SetWidgetsVisible(RedPacketTab *this,bool param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x30);
    uVar2 = FUN_03ac207c(uVar5,*(undefined8 *)(this + 0x38));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        return;
      }
      plVar1 = (long *)FUN_03ac2088(uVar5,uVar4);
      plVar1 = (long *)*plVar1;
      uVar4 = uVar3;
    } while (plVar1 == (long *)0x0);
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  } while( true );
}


/* RedPacketTab::HasTargetRedPacketOpen(RedPacketIndex) */

bool __thiscall RedPacketTab::HasTargetRedPacketOpen(RedPacketTab *this,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_03ac1f9c(*(undefined8 *)(this + 0x50),param_2);
  return *piVar1 == 1;
}


/* RedPacketTab::ResetDatas() */

void __thiscall RedPacketTab::ResetDatas(RedPacketTab *this)

{
  *(undefined4 *)(this + 0x68) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketTab::SetSelect(bool) */

void __thiscall RedPacketTab::SetSelect(RedPacketTab *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  Dialog *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetWidgetsVisible(this,param_1);
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  pDVar2 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
  }
  pDVar2 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Check_RedPack");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPacketTab::ResetWidgets() */

void __thiscall RedPacketTab::ResetWidgets(RedPacketTab *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x30);
  uVar4 = 0;
  uVar1 = FUN_03ac207c(uVar5,*(undefined8 *)(this + 0x38));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03ac2088(uVar5,uVar4);
      if (*plVar2 != 0) {
        (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20),*plVar2);
        puVar3 = (undefined8 *)FUN_03ac2088(*(undefined8 *)(this + 0x30),uVar4);
        plVar2 = (long *)*puVar3;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
          puVar3 = (undefined8 *)FUN_03ac2088(*(undefined8 *)(this + 0x30),uVar4);
          *puVar3 = 0;
          puVar3 = (undefined8 *)FUN_03ac2088(*(undefined8 *)(this + 0x30),uVar4);
        }
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x30);
        uVar1 = FUN_03ac207c(uVar5,*(undefined8 *)(this + 0x38));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<RedPacketWidget*,std::allocator<RedPacketWidget*>>::clear
            ((vector<RedPacketWidget*,std::allocator<RedPacketWidget*>> *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketTab::DrawGemLabel(Sexy::Graphics*) */

void __thiscall RedPacketTab::DrawGemLabel(RedPacketTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  RechargeWelfareUI *this_00;
  long *plVar9;
  Image *pIVar10;
  SalesProgressBar *pSVar11;
  LotteryResultProgressBar *this_01;
  undefined8 uVar12;
  Dialog *this_02;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  iVar4 = *(int *)(lVar8 + 0x48);
  this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  iVar2 = RechargeWelfareUI::getMX(this_00);
  this_02 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_18,"UIImage_Back");
  lVar8 = UI::Dialog::GetWidget(this_02,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar5 = 0;
  if (lVar8 != 0) {
    iVar5 = *(int *)(lVar8 + 0x4c);
  }
  lVar8 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  iVar6 = *(int *)(lVar8 + 0x4c);
  iVar3 = FUN_03ac4800(0x6e);
  plVar9 = (long *)FUN_03ac2088(*(undefined8 *)(this + 0x30),3);
  lVar8 = *plVar9;
  iVar7 = *(int *)(lVar8 + 0x4c);
  iVar1 = *(int *)(lVar8 + 0x54);
  iVar2 = (iVar4 + iVar2 + *(int *)(lVar8 + 0x48)) - (iVar3 - *(int *)(lVar8 + 0x50)) / 2;
  iVar4 = FUN_03ac4800(0xfffffff6);
  iVar4 = iVar5 + iVar6 + iVar7 + iVar1 + iVar4;
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8780);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8780);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar11);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar2,iVar4,iVar3,iVar5);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8448);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8448);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar11);
  pSVar11 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8780);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar4 = iVar4 + (iVar7 - (int)((double)iVar6 * 0.8)) / 2;
  iVar7 = FUN_03ac4800(5);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8448);
  Sexy::Graphics::DrawImage
            (param_1,pIVar10,iVar7 + iVar2,iVar4,(int)((double)iVar5 * 0.8),
             (int)((double)iVar6 * 0.8));
  iVar5 = FUN_03ac4800(0xf);
  iVar6 = FUN_03ac4800(0x18);
  iVar7 = FUN_03ac4800(0x50);
  Sexy::Insets::Insets(aIStack_28,iVar5 + iVar2,iVar4 - iVar6,iVar3,iVar7);
  Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0x68));
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar12,asStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketTab::DrawVipLabel(Sexy::Graphics*) */

void __thiscall RedPacketTab::DrawVipLabel(RedPacketTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  RechargeWelfareUI *this_00;
  long *plVar9;
  Image *pIVar10;
  SalesProgressBar *this_01;
  undefined8 uVar11;
  Dialog *this_02;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar8 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  iVar5 = *(int *)(lVar8 + 0x48);
  this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  iVar3 = RechargeWelfareUI::getMX(this_00);
  this_02 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_18,"UIImage_Back");
  lVar8 = UI::Dialog::GetWidget(this_02,asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar6 = 0;
  if (lVar8 != 0) {
    iVar6 = *(int *)(lVar8 + 0x4c);
  }
  lVar8 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  iVar7 = *(int *)(lVar8 + 0x4c);
  iVar4 = FUN_03ac4800(0x96);
  plVar9 = (long *)FUN_03ac2088(*(undefined8 *)(this + 0x30),4);
  lVar8 = *plVar9;
  iVar1 = *(int *)(lVar8 + 0x4c);
  iVar2 = *(int *)(lVar8 + 0x54);
  iVar3 = (iVar5 + iVar3 + *(int *)(lVar8 + 0x48)) - (iVar4 - *(int *)(lVar8 + 0x50)) / 2;
  iVar5 = FUN_03ac4800(0xfffffff6);
  iVar5 = iVar6 + iVar7 + iVar1 + iVar2 + iVar5;
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8780);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8780);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar3,iVar5,iVar4,iVar6);
  iVar6 = FUN_03ac4800(0xffffffe9);
  iVar7 = FUN_03ac4800(0x50);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar6 + iVar5,iVar4,iVar7);
  TodStringTranslate(L"[FESTIVAL_REDPACK_VIP_LABEL]");
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,asStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPacketTab::RedPacketTab(int, UI::Dialog*) */

void __thiscall RedPacketTab::RedPacketTab(RedPacketTab *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR__RedPacketTab_0671ef40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  this[0x48] = (RedPacketTab)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketTab::DrawForeground(Sexy::Graphics*) */

void __thiscall RedPacketTab::DrawForeground(RedPacketTab *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  RechargeWelfareUI *this_00;
  undefined8 uVar8;
  LotteryResultProgressBar *this_01;
  long lVar9;
  undefined1 auVar10 [12];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [16];
  wstring awStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar2 = FUN_03ac12b0(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar2 != '\0')) {
    TodStringTranslate(L"[FESTIVAL_REDPACK_NOTICE]");
    lVar9 = *(long *)(this + 0x28);
    auVar10 = LawnApp::GetRealServerTime(gLawnApp);
    StringHelper::ToTimeString
              ((StringHelper *)&DAT_00000004,(float)(lVar9 - auVar10._0_8_),auVar10._8_4_);
    TodReplaceString(awStack_28,L"{TIME}",awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_28);
    (**(code **)(*(long *)this + 0x38))(asStack_30,this);
    lVar9 = FUN_05474184(asStack_30);
    iVar7 = 0;
    if (lVar9 != 0) {
      this_01 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_30,false);
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    }
    lVar9 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    iVar1 = *(int *)(lVar9 + 0x48);
    this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
    iVar3 = RechargeWelfareUI::getMX(this_00);
    iVar4 = FUN_03ac4800(5);
    iVar5 = FUN_03ac4800(0x1b5);
    iVar6 = FUN_03ac4800(0x50);
    Sexy::Insets::Insets((Insets *)awStack_28,iVar4 + iVar1 + iVar3,iVar5,iVar7,iVar6);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)awStack_18,1);
    WriteWordInRect(param_1,auStack_38,awStack_28,uVar8,awStack_18,5,1);
    cVar2 = std::vector<RedPacketWidget*,std::allocator<RedPacketWidget*>>::empty
                      ((vector<RedPacketWidget*,std::allocator<RedPacketWidget*>> *)(this + 0x30));
    if (cVar2 == '\0') {
      DrawGemLabel(this,param_1);
      DrawVipLabel(this,param_1);
    }
    std::string::~string(asStack_30);
    FUN_05476c50(auStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPacketTab::~RedPacketTab() */

void __thiscall RedPacketTab::~RedPacketTab(RedPacketTab *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x30);
  uVar4 = 0;
  *(undefined ***)this = &PTR__RedPacketTab_0671ef40;
  uVar1 = FUN_03ac207c(uVar5,*(undefined8 *)(this + 0x38));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03ac2088(uVar5,uVar4);
      if (*plVar2 != 0) {
        (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20),*plVar2);
        puVar3 = (undefined8 *)FUN_03ac2088(*(undefined8 *)(this + 0x30),uVar4);
        plVar2 = (long *)*puVar3;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
          puVar3 = (undefined8 *)FUN_03ac2088(*(undefined8 *)(this + 0x30),uVar4);
          *puVar3 = 0;
          puVar3 = (undefined8 *)FUN_03ac2088(*(undefined8 *)(this + 0x30),uVar4);
        }
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x30);
        uVar1 = FUN_03ac207c(uVar5,*(undefined8 *)(this + 0x38));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<RedPacketWidget*,std::allocator<RedPacketWidget*>>::~vector
            ((vector<RedPacketWidget*,std::allocator<RedPacketWidget*>> *)(this + 0x30));
  nop();
  return;
}


/* RedPacketTab::~RedPacketTab() */

void __thiscall RedPacketTab::~RedPacketTab(RedPacketTab *this)

{
  ~RedPacketTab(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketTab::RefreshRedPackets() */

void __thiscall RedPacketTab::RefreshRedPackets(RedPacketTab *this)

{
  vector<RedPacketWidget*,std::allocator<RedPacketWidget*>> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  RedPacketWidget *pRVar11;
  long lVar12;
  RedPacketWidget *local_18;
  RedPacketWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<RedPacketWidget*,std::allocator<RedPacketWidget*>> *)(this + 0x30);
  ResetWidgets(this);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac81e0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac81e0);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_02);
  lVar12 = *(long *)(this + 0x20);
  iVar4 = FUN_03ac4800(0x73);
  iVar7 = *(int *)(lVar12 + 0x50);
  iVar10 = iVar4 * -2;
  iVar9 = *(int *)(lVar12 + 0x48);
  iVar8 = 0;
  while( true ) {
    iVar5 = FUN_03ac4800(0x82);
    iVar1 = *(int *)(lVar12 + 0x4c);
    uVar6 = HasTargetRedPacketOpen(this,iVar8);
    pRVar11 = ::operator_new(0x318);
    RedPacketWidget::RedPacketWidget(pRVar11,0,iVar8 + 200,uVar6,iVar8);
    local_10 = pRVar11;
    (**(code **)(*(long *)pRVar11 + 0x198))
              (pRVar11,iVar9 + (iVar10 + iVar2 * -3 + iVar7) / 2 + (iVar2 + iVar4) * iVar8,
               iVar5 + iVar1,iVar2,iVar3);
    (**(code **)(**(long **)(this + 0x20) + 0x60))(*(long **)(this + 0x20),local_10);
    std::vector<RedPacketWidget*,std::allocator<RedPacketWidget*>>::push_back(this_00,&local_10);
    if (iVar8 + 1 == 3) break;
    iVar4 = FUN_03ac4800(0x73);
    lVar12 = *(long *)(this + 0x20);
    iVar8 = iVar8 + 1;
  }
  lVar12 = *(long *)(this + 0x20);
  iVar7 = FUN_03ac4800(0x73);
  iVar7 = *(int *)(lVar12 + 0x48) + ((iVar2 * -2 - iVar7) + *(int *)(lVar12 + 0x50)) / 2;
  iVar8 = FUN_03ac4800(0x82);
  iVar10 = *(int *)(lVar12 + 0x4c);
  iVar9 = FUN_03ac4800(0xffffffdd);
  iVar9 = iVar8 + iVar10 + iVar3 + iVar9;
  uVar6 = HasTargetRedPacketOpen(this,3);
  pRVar11 = ::operator_new(0x318);
  RedPacketWidget::RedPacketWidget(pRVar11,1,0xcb,uVar6,3);
  local_18 = pRVar11;
  (**(code **)(*(long *)pRVar11 + 0x198))(pRVar11,iVar7,iVar9,iVar2,iVar3);
  FUN_03ac12f0(local_18 + 0x314,*(undefined4 *)(this + 0x68));
  (**(code **)(**(long **)(this + 0x20) + 0x60))(*(long **)(this + 0x20),local_18);
  std::vector<RedPacketWidget*,std::allocator<RedPacketWidget*>>::push_back(this_00,&local_18);
  iVar10 = FUN_03ac4800(0x73);
  uVar6 = HasTargetRedPacketOpen(this,4);
  pRVar11 = ::operator_new(0x318);
  RedPacketWidget::RedPacketWidget(pRVar11,2,0xcc,uVar6,4);
  local_10 = pRVar11;
  (**(code **)(*(long *)pRVar11 + 0x198))(pRVar11,iVar7 + iVar10 + iVar2,iVar9,iVar2,iVar3);
  (**(code **)(**(long **)(this + 0x20) + 0x60))(*(long **)(this + 0x20),local_10);
  std::vector<RedPacketWidget*,std::allocator<RedPacketWidget*>>::push_back(this_00,&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketTab::InitView() */

void __thiscall RedPacketTab::InitView(RedPacketTab *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PVZ2UIButton *pPVar3;
  long *plVar4;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] == (RedPacketTab)0x0) {
    plVar4 = *(long **)(this + 0x20);
    uVar1 = FUN_03ac4800(0x24e);
    uVar2 = FUN_03ac4800(0x1d6);
    (**(code **)(*plVar4 + 0x198))(plVar4,0,0,uVar1,uVar2);
    plVar4 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    (**(code **)(*plVar4 + 0x60))(plVar4,*(undefined8 *)(this + 0x20));
    this_00 = *(Dialog **)(this + 0x10);
    std::string::string(asStack_10,"Btn_Check_RedPack");
    pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pPVar3 + 0x158))(pPVar3,1);
    RefreshRedPackets(this);
    this[0x48] = (RedPacketTab)0x1;
  }
  else {
    RefreshRedPackets(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPacketTab::SyncActivityData(NetworkRedPacketInfo const&, int, bool) */

void RedPacketTab::SyncActivityData(NetworkRedPacketInfo *param_1,int param_2,bool param_3)

{
  ActivityConfig *this;
  undefined8 uVar1;
  
  ResetDatas((RedPacketTab *)param_1);
  this = (ActivityConfig *)LawnApp::GetActivityConfig();
  if (this != (ActivityConfig *)0x0) {
    uVar1 = ActivityConfig::DateMKTime(this,(uint)param_3);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(param_1 + 0x50),
             (vector *)((ulong)(uint)param_2 + 8));
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((ulong)(uint)param_2 + 0x20);
  InitView((RedPacketTab *)param_1);
  return;
}

