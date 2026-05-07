// Class: FShopTabUI


/* FShopTabUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void FShopTabUI::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FShopTabUI::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall FShopTabUI::ScrollTargetReached(FShopTabUI *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x28));
  return;
}


/* FShopTabUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void FShopTabUI::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FShopTabUI::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall FShopTabUI::ScrollTargetInterrupted(FShopTabUI *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x28));
  return;
}


/* FShopTabUI::RefreshShopData(std::vector<FShopContentData, std::allocator<FShopContentData> >
   const&) */

void __thiscall FShopTabUI::RefreshShopData(FShopTabUI *this,vector *param_1)

{
  FestivalShopUI::RefreshShopData(*(FestivalShopUI **)(this + 0x30),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FShopTabUI::SetSelect(bool) */

void __thiscall FShopTabUI::SetSelect(FShopTabUI *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  long *plVar2;
  Dialog *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  if (*(FestivalShopUI **)(this + 0x30) != (FestivalShopUI *)0x0) {
    FestivalShopUI::HideWidgets(*(FestivalShopUI **)(this + 0x30),param_1);
  }
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Tab1_Cost_Back");
  plVar2 = (long *)UI::Dialog::GetWidget(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar2 + 0x158))(plVar2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FShopTabUI::~FShopTabUI() */

void __thiscall FShopTabUI::~FShopTabUI(FShopTabUI *this)

{
  *(undefined ***)this = &PTR__FShopTabUI_0671e340;
  *(undefined ***)(this + 0x28) = &PTR__FShopTabUI_0671e3e8;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::~vector
            ((vector<FShopContentData,std::allocator<FShopContentData>> *)(this + 0x48));
  nop();
  return;
}


/* non-virtual thunk to FShopTabUI::~FShopTabUI() */

void __thiscall FShopTabUI::~FShopTabUI(FShopTabUI *this)

{
  ~FShopTabUI(this + -0x28);
  return;
}


/* FShopTabUI::~FShopTabUI() */

void __thiscall FShopTabUI::~FShopTabUI(FShopTabUI *this)

{
  ~FShopTabUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FShopTabUI::~FShopTabUI() */

void __thiscall FShopTabUI::~FShopTabUI(FShopTabUI *this)

{
  ~FShopTabUI(this + -0x28);
  return;
}


/* FShopTabUI::FShopTabUI(int, UI::Dialog*) */

void __thiscall FShopTabUI::FShopTabUI(FShopTabUI *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x28));
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__FShopTabUI_0671e340;
  *(undefined ***)(this + 0x28) = &PTR__FShopTabUI_0671e3e8;
  Sexy::Point::Point((Point *)(this + 0x38));
  Sexy::Point::Point((Point *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  Sexy::Insets::Insets((Insets *)(this + 0x70));
  this[0x60] = (FShopTabUI)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FShopTabUI::InitView() */

void __thiscall FShopTabUI::InitView(FShopTabUI *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  FestivalShopUI *this_00;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  RechargeWelfareUI *pRVar8;
  long *plVar9;
  Dialog *this_03;
  code *pcVar10;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x120);
  FestivalShopUI::FestivalShopUI(this_00,*(UIWidgetImage **)(this + 0x20),(vector *)(this + 0x48));
  *(FestivalShopUI **)(this + 0x30) = this_00;
  plVar9 = *(long **)(this + 0x20);
  uVar4 = FUN_03ac4800(0x24e);
  uVar5 = FUN_03ac4800(0x1d6);
  (**(code **)(*plVar9 + 0x198))(plVar9,0,0,uVar4,uVar5);
  plVar9 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar9 + 0x60))(plVar9,*(undefined8 *)(this + 0x20));
  plVar9 = *(long **)(this + 0x30);
  iVar1 = *(int *)(*(long *)(this + 0x20) + 0x48);
  iVar2 = *(int *)(*(long *)(this + 0x20) + 0x4c);
  pcVar10 = *(code **)(*plVar9 + 0x1a0);
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac8380);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_02);
  Sexy::Insets::Insets((Insets *)local_18,iVar1,iVar2,iVar6,iVar7);
  (*pcVar10)(plVar9,(Insets *)local_18);
  (**(code **)(**(long **)(this + 0x20) + 0x60))
            (*(long **)(this + 0x20),*(undefined8 *)(this + 0x30));
  FestivalShopUI::InitView(*(FestivalShopUI **)(this + 0x30));
  this_03 = *(Dialog **)(this + 0x10);
  std::string::string((string *)local_18,"Pannel");
  plVar9 = (long *)UI::Dialog::GetWidget(this_03,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0xd0))((Insets *)local_18,plVar9);
    iVar1 = *(int *)((long)plVar9 + 0x4c);
    iVar2 = *(int *)((long)plVar9 + 0x54);
    lVar3 = plVar9[9];
    *(undefined8 *)(this + 0x40) = local_18[0];
    *(int *)(this + 0x38) = (int)lVar3;
    *(int *)(this + 0x3c) = iVar1 + iVar2;
  }
  pRVar8 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  uVar4 = RechargeWelfareUI::getMX(pRVar8);
  *(undefined4 *)(this + 0x70) = uVar4;
  uVar4 = FUN_03ac4800(0x1fc);
  *(undefined4 *)(this + 0x74) = uVar4;
  pRVar8 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
  uVar4 = RechargeWelfareUI::getWidth(pRVar8);
  *(undefined4 *)(this + 0x78) = uVar4;
  uVar4 = FUN_03ac4800(0x3c);
  *(undefined4 *)(this + 0x7c) = uVar4;
  this[0x60] = (FShopTabUI)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FShopTabUI::SyncActivityData(NetworkFShopInfo const&) */

void __thiscall FShopTabUI::SyncActivityData(FShopTabUI *this,NetworkFShopInfo *param_1)

{
  vector<FShopContentData,std::allocator<FShopContentData>> *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  ActiveItem aAStack_88 [24];
  char local_70;
  undefined8 local_38;
  long local_8;
  
  this_00 = (vector<FShopContentData,std::allocator<FShopContentData>> *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  std::vector<FShopContentData,std::allocator<FShopContentData>>::clear(this_00);
  uVar8 = 0;
  while( true ) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_03ac2044(uVar9,*(undefined8 *)(param_1 + 0x10));
    if (uVar7 <= uVar8) break;
    puVar6 = (undefined4 *)FUN_03ac206c(uVar9,uVar8);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    Sexy::Insets::Insets((Insets *)&local_98);
    local_98 = uVar1;
    local_94 = uVar2;
    local_90 = uVar3;
    local_8c = uVar4;
    std::vector<FShopContentData,std::allocator<FShopContentData>>::push_back
              (this_00,(FShopContentData *)&local_98);
    uVar8 = uVar8 + 1;
  }
  if (this[0x60] == (FShopTabUI)0x0) {
    InitView(this);
  }
  else {
    RefreshShopData(this,(vector *)this_00);
  }
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  if (local_70 != '\0') {
    *(undefined8 *)(this + 0x68) = local_38;
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

