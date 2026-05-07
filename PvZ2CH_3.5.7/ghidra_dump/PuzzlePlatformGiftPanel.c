// Class: PuzzlePlatformGiftPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::OnCreate() */

void __thiscall PuzzlePlatformGiftPanel::OnCreate(PuzzlePlatformGiftPanel *this)

{
  Widget *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pWVar1 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PuzzlePlatformGiftPanel::Resize(Sexy::TRect<int> const&) */

void __thiscall PuzzlePlatformGiftPanel::Resize(PuzzlePlatformGiftPanel *this,TRect *param_1)

{
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::GetLayoutName() */

void __thiscall PuzzlePlatformGiftPanel::GetLayoutName(PuzzlePlatformGiftPanel *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PlanformGift");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::SetLeftDays(int) */

void __thiscall PuzzlePlatformGiftPanel::SetLeftDays(PuzzlePlatformGiftPanel *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x178) = param_1;
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x148) != 0) {
    Sexy::StrFormat("%d",asStack_10);
    UIWidgetText::SetString(*(UIWidgetText **)(this + 0x148),asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PuzzlePlatformGiftPanel::ButtonDepress(int) */

void __thiscall PuzzlePlatformGiftPanel::ButtonDepress(PuzzlePlatformGiftPanel *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  NetworkMgr *this_00;
  long *plVar3;
  code *pcVar4;
  
  if (param_1 == 0) {
    cVar1 = PuzzleRotatePanel::IsRotating(*(PuzzleRotatePanel **)(this + 0x138));
    if (cVar1 == '\0') {
      UISingletonDialog<PuzzlePlatformGiftPanel>::CloseDialog();
      return;
    }
  }
  else if (param_1 == 100) {
    if (*(int *)(this + 0x17c) == 1) {
      cVar1 = LawnApp::IsNetworkModuleOK();
      if (cVar1 == '\0') {
        LawnApp::ShowNetworkError(gLawnApp);
        return;
      }
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
      pcVar4 = *(code **)(*plVar3 + 0x220);
      uVar2 = LawnApp::GetPlatform(gLawnApp);
      (*pcVar4)(plVar3,uVar2);
      (**(code **)(**(long **)(this + 0x140) + 0x158))(*(long **)(this + 0x140),0);
    }
    else if (*(int *)(this + 0x17c) == 0) {
      (**(code **)(*(long *)gLawnApp + 0x168))(gLawnApp,this + 0x188);
      UISingletonDialog<PuzzlePlatformGiftPanel>::CloseDialog();
      return;
    }
  }
  return;
}


/* non-virtual thunk to PuzzlePlatformGiftPanel::ButtonDepress(int) */

void __thiscall PuzzlePlatformGiftPanel::ButtonDepress(PuzzlePlatformGiftPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::PuzzlePlatformGiftPanel() */

void __thiscall PuzzlePlatformGiftPanel::PuzzlePlatformGiftPanel(PuzzlePlatformGiftPanel *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PuzzlePlatformGiftPanel>::UISingletonDialog
            ((UISingletonDialog<PuzzlePlatformGiftPanel> *)this);
  *(undefined ***)this = &PTR_GetClass_06987290;
  *(undefined **)(this + 0xd8) = &DAT_069875e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  Set8BytesTo0((string *)(this + 0x188));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_PlanformGift");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_LimitLottery");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyGetBonus);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,S2C_PlatformGiftData_const*,Sexy::CBMemberTranslatorX<PuzzlePlatformGiftPanel,void(PuzzlePlatformGiftPanel::*)(bool,S2C_PlatformGiftData_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyPlatformGiftList,&local_50);
  std::vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>>::clear
            ((vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>> *)(this + 0x160));
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x17c) = 2;
  *(undefined4 *)(this + 0x180) = 0;
  std::string::append((string *)(this + 0x188),"",2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::~PuzzlePlatformGiftPanel() */

void __thiscall PuzzlePlatformGiftPanel::~PuzzlePlatformGiftPanel(PuzzlePlatformGiftPanel *this)

{
  LawnApp *pLVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06987290;
  *(undefined **)(this + 0xd8) = &DAT_069875e0;
  uVar5 = 0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlanformGift");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LimitLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  uVar6 = *(undefined8 *)(this + 0x160);
  uVar2 = FUN_04c40778(uVar6,*(undefined8 *)(this + 0x168));
  if (uVar2 != 0) {
    do {
      plVar3 = (long *)FUN_04c40784(uVar6,uVar5);
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        puVar4 = (undefined8 *)FUN_04c40784(*(undefined8 *)(this + 0x160),uVar5);
        *puVar4 = 0;
        uVar6 = *(undefined8 *)(this + 0x160);
        uVar2 = FUN_04c40778(uVar6,*(undefined8 *)(this + 0x168));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  std::vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>>::clear
            ((vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>> *)(this + 0x160));
  std::string::~string((string *)(this + 0x188));
  std::vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>>::~vector
            ((vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>> *)(this + 0x160));
  UISingletonDialog<PuzzlePlatformGiftPanel>::~UISingletonDialog
            ((UISingletonDialog<PuzzlePlatformGiftPanel> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PuzzlePlatformGiftPanel::~PuzzlePlatformGiftPanel() */

void __thiscall PuzzlePlatformGiftPanel::~PuzzlePlatformGiftPanel(PuzzlePlatformGiftPanel *this)

{
  ~PuzzlePlatformGiftPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::NotifyGetBonus(bool, S2C_PlatformGiftData const*) */

void __thiscall
PuzzlePlatformGiftPanel::NotifyGetBonus
          (PuzzlePlatformGiftPanel *this,bool param_1,S2C_PlatformGiftData *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  CoreItemDataBase *this_00;
  undefined8 uVar6;
  GAME_ITEM_INFO aGStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (S2C_PlatformGiftData *)0x0) {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    lVar4 = FUN_04c407a4(uVar6,*(undefined8 *)(param_2 + 0x20));
    if ((lVar4 != 0) && (*(long *)(this + 0x138) != 0)) {
      piVar5 = (int *)FUN_04c408a4(uVar6);
      iVar1 = piVar5[1];
      iVar2 = *piVar5;
      this_00 = ::operator_new(0x10);
      CoreItemDataBase::CoreItemDataBase(this_00,iVar2,iVar1);
      iVar3 = PuzzleRotatePanel::GetFinalTargetSteps(*(PuzzleRotatePanel **)(this + 0x138),this_00);
      PuzzleRotatePanel::SetTargetIndex(*(PuzzleRotatePanel **)(this + 0x138),iVar3);
      (**(code **)(**(long **)(this + 0x138) + 0x318))(*(long **)(this + 0x138));
      (**(code **)(*(long *)this_00 + 8))(this_00);
      ProfileChangeItemAmount(iVar2,iVar1,false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::InitView(GachaStatus, int, std::string const&) */

void __thiscall
PuzzlePlatformGiftPanel::InitView
          (PuzzlePlatformGiftPanel *this,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIWidgetBackground *pUVar8;
  long *plVar9;
  UIWidgetText *pUVar10;
  PuzzleRotatePanel *pPVar11;
  PuzzleGetGiftButton *pPVar12;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  long lVar13;
  code *pcVar14;
  Insets aIStack_48 [8];
  int local_40;
  PuzzleRotateConfig aPStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 0x180) = param_3;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x17c) = param_2;
  thunk_FUN_05475e00(this + 0x188,param_4);
  std::string::string(asStack_20,"Confirm_Bg");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_20);
  *(UIWidgetBackground **)(this + 0x158) = pUVar8;
  std::string::~string(asStack_20);
  nop();
  plVar9 = *(long **)(this + 0x158);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x158))(plVar9,0);
  }
  std::string::string(asStack_20,"CountDown_Text");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  *(UIWidgetText **)(this + 0x148) = pUVar10;
  std::string::~string(asStack_20);
  nop();
  pUVar10 = *(UIWidgetText **)(this + 0x148);
  if (pUVar10 != (UIWidgetText *)0x0) {
    std::string::string(asStack_20,"");
    UIWidgetText::SetString(pUVar10,asStack_20);
    std::string::~string(asStack_20);
    nop();
  }
  std::string::string(asStack_20,"Background_0");
  pUVar8 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  PuzzleRotateConfig::PuzzleRotateConfig(aPStack_38);
  PuzzleRotateConfig::PuzzleRotateConfig((PuzzleRotateConfig *)asStack_20,aPStack_38);
  pPVar11 = ::operator_new(0x148);
  PuzzleRotatePanel::PuzzleRotatePanel(pPVar11,asStack_20);
  *(PuzzleRotatePanel **)(this + 0x138) = pPVar11;
  iVar4 = FUN_04c409f4(300);
  iVar1 = *(int *)(pUVar8 + 0x50);
  iVar2 = *(int *)(pUVar8 + 0x48);
  iVar5 = FUN_04c409f4(0x19);
  iVar3 = *(int *)(this + 0x54);
  iVar6 = FUN_04c409f4(0xe);
  Sexy::Insets::Insets
            (aIStack_48,iVar2 + (iVar1 - iVar4) / 2,(iVar3 / 2 - iVar5) - iVar6,iVar4,iVar4);
  (**(code **)(**(long **)(this + 0x138) + 0x1a0))(*(long **)(this + 0x138),aIStack_48);
  plVar9 = *(long **)(this + 0x138);
  pcVar14 = *(code **)(*plVar9 + 0x330);
  std::vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>>::vector
            ((vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>> *)asStack_20,
             (vector *)(this + 0x160));
  (*pcVar14)(plVar9,asStack_20);
  std::vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>>::~vector
            ((vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>> *)asStack_20);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  pPVar12 = ::operator_new(0x348);
  PuzzleGetGiftButton::PuzzleGetGiftButton
            (pPVar12,100,this + 0xd8,*(undefined4 *)(this + 0x17c),*(undefined4 *)(this + 0x180));
  lVar13 = *(long *)pPVar12;
  *(PuzzleGetGiftButton **)(this + 0x140) = pPVar12;
  (**(code **)(lVar13 + 0x188))(pPVar12,*(int *)(this + 0x17c) == 2);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b907a0);
  LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b907a0);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar1 = *(int *)(pUVar8 + 0x50);
  iVar2 = *(int *)(pUVar8 + 0x48);
  iVar5 = FUN_04c409f4(8);
  iVar6 = FUN_04c409f4(0x4b);
  iVar3 = *(int *)(this + 0x54);
  iVar7 = FUN_04c409f4(0xe);
  Sexy::Insets::Insets
            ((Insets *)asStack_20,(iVar2 + (iVar1 - local_40 / 2) / 2) - iVar5,
             (iVar6 + iVar3 / 2) - iVar7,local_40 / 2,iVar4);
  (**(code **)(**(long **)(this + 0x140) + 0x1a0))(*(long **)(this + 0x140),asStack_20);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x140));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuzzlePlatformGiftPanel::InitRotateList(std::vector<GiftItem, std::allocator<GiftItem> >) */

void __thiscall
PuzzlePlatformGiftPanel::InitRotateList(PuzzlePlatformGiftPanel *this,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CoreItemDataBase *this_00;
  undefined8 uVar5;
  long lVar6;
  CoreItemDataBase *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>>::clear
            ((vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>> *)(this + 0x160));
  uVar5 = *param_2;
  iVar3 = FUN_04c407a4(uVar5,param_2[1]);
  if (0 < iVar3) {
    lVar6 = 0;
    while( true ) {
      piVar4 = (int *)FUN_04c407b0(uVar5,lVar6);
      iVar1 = *piVar4;
      iVar2 = piVar4[1];
      this_00 = ::operator_new(0x10);
      CoreItemDataBase::CoreItemDataBase(this_00,iVar1,iVar2);
      local_10 = this_00;
      std::vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>>::push_back
                ((vector<CoreItemDataBase*,std::allocator<CoreItemDataBase*>> *)(this + 0x160),
                 &local_10);
      if (iVar3 <= (int)(lVar6 + 1)) break;
      uVar5 = *param_2;
      lVar6 = lVar6 + 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

