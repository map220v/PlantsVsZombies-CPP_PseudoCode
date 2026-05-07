// Class: OneYuanTabUI


/* OneYuanTabUI::GetTabContainerImageName() const */

undefined8 OneYuanTabUI::GetTabContainerImageName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OneYuanTabUI::~OneYuanTabUI() */

void __thiscall OneYuanTabUI::~OneYuanTabUI(OneYuanTabUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__OneYuanTabUI_0671d240;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_BossChallenge");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string((string *)(this + 0x50));
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OneYuanTabUI::~OneYuanTabUI() */

void __thiscall OneYuanTabUI::~OneYuanTabUI(OneYuanTabUI *this)

{
  ~OneYuanTabUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OneYuanTabUI::SetSelect(bool) */

void __thiscall OneYuanTabUI::SetSelect(OneYuanTabUI *this,bool param_1)

{
  undefined4 uVar1;
  PVZ2UIButton *this_00;
  long *plVar2;
  Dialog *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this_00 + 0x158))(this_00,1);
  PVZ2UIButton::ClearButton(this_00);
  TodStringTranslate(L"[GO_TO_EVENT]");
  PVZ2UIButton::SetLabelText(this_00,(wstring *)asStack_10);
  FUN_05476c50(asStack_10);
  uVar1 = FUN_03ac4800(0x17c);
  *(undefined4 *)(this_00 + 0x48) = uVar1;
  uVar1 = FUN_03ac4800(400);
  pDVar3 = *(Dialog **)(this + 0x10);
  *(undefined4 *)(this_00 + 0x4c) = uVar1;
  std::string::string(asStack_10,"Tab1_Cost_Back");
  plVar2 = (long *)UI::Dialog::GetWidget(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*plVar2 + 0x158))(plVar2,0);
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OneYuanTabUI::DrawForeground(Sexy::Graphics*) */

void __thiscall OneYuanTabUI::DrawForeground(OneYuanTabUI *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  RechargeWelfareUI *this_00;
  undefined8 uVar10;
  LotteryResultProgressBar *this_01;
  long lVar11;
  undefined1 auVar12 [12];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar2 = FUN_03ac12b0(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar2 != '\0')) {
    lVar11 = *(long *)(this + 0x48);
    auVar12 = LawnApp::GetRealServerTime(gLawnApp);
    StringHelper::ToTimeString
              ((StringHelper *)&DAT_00000004,(float)(lVar11 - auVar12._0_8_),auVar12._8_4_);
    (**(code **)(*(long *)this + 0x38))(asStack_30,this);
    lVar11 = FUN_05474184(asStack_30);
    iVar9 = 0;
    if (lVar11 != 0) {
      this_01 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_30,false);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    }
    lVar11 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    iVar1 = *(int *)(lVar11 + 0x48);
    this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
    iVar3 = RechargeWelfareUI::getMX(this_00);
    iVar4 = FUN_03ac4800(0x14);
    iVar5 = FUN_03ac4800(0x21);
    iVar6 = FUN_03ac4800(0x183);
    iVar7 = FUN_03ac4800(0x5c);
    iVar8 = FUN_03ac4800(0x50);
    Sexy::Insets::Insets(aIStack_28,iVar5 + ((iVar1 + iVar3) - iVar4),iVar6 + iVar7,iVar9,iVar8);
    uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_38,aIStack_28,uVar10,aCStack_18,5,1);
    std::string::~string(asStack_30);
    FUN_05476c50(auStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OneYuanTabUI::InitView() */

void __thiscall OneYuanTabUI::InitView(OneYuanTabUI *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  UIWidgetImage *pUVar4;
  long *plVar5;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac87f8);
  *(undefined8 *)(this + 0x28) = uVar3;
  plVar5 = *(long **)(this + 0x20);
  uVar1 = FUN_03ac4800(0x24e);
  uVar2 = FUN_03ac4800(0x1d6);
  (**(code **)(*plVar5 + 0x198))(plVar5,0,0,uVar1,uVar2);
  plVar5 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined8 *)(this + 0x20));
  this_00 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"UIImage_Gem_Icon");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar4 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OneYuanTabUI::OneYuanTabUI(int, UI::Dialog*) */

void __thiscall OneYuanTabUI::OneYuanTabUI(OneYuanTabUI *this,int param_1,Dialog *param_2)

{
  LawnApp *this_00;
  undefined1 *__n;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined8 *)(this + 0x28) = 0;
  this[0x38] = (OneYuanTabUI)0x0;
  *(undefined ***)this = &PTR__OneYuanTabUI_0671d240;
  Set8BytesTo0((string *)(this + 0x50));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_BossChallenge");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  std::string::append((string *)(this + 0x50),"IMAGE_UI_FESTIVALCENTER_LOTTERY_BG",(size_t)__n);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OneYuanTabUI::SyncActivityTime() */

void __thiscall OneYuanTabUI::SyncActivityTime(OneYuanTabUI *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  char local_70;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  if (local_70 != '\0') {
    *(undefined8 *)(this + 0x30) = local_38;
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OneYuanTabUI::SyncActivityData(int) */

void __thiscall OneYuanTabUI::SyncActivityData(OneYuanTabUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  ActivityConfig *this_00;
  undefined8 uVar3;
  long lVar4;
  Image *pIVar5;
  size_t __n;
  string asStack_b0 [36];
  int local_8c;
  ActiveItem aAStack_88 [24];
  char local_70;
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if (this_00 != (ActivityConfig *)0x0) {
    uVar3 = ActivityConfig::DateMKTime(this_00,param_1);
    *(undefined8 *)(this + 0x48) = uVar3;
  }
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    NetworkRedPackDisplayInfo::NetworkRedPackDisplayInfo((NetworkRedPackDisplayInfo *)asStack_b0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)asStack_b0);
    if (cVar1 != '\0') {
      if (local_8c == 0) {
        std::string::append((string *)(this + 0x50),"IMAGE_UI_FESTIVALCENTER_LOTTERY_BG",__n);
      }
      else {
        std::string::append((string *)(this + 0x50),"IMAGE_UI_FESTIVALCENTER_LOTTERY_BG_OLD",__n);
      }
    }
    NetworkRedPackDisplayInfo::~NetworkRedPackDisplayInfo((NetworkRedPackDisplayInfo *)asStack_b0);
  }
  (**(code **)(*(long *)this + 0x38))(asStack_b0,this);
  lVar4 = FUN_05474184(asStack_b0);
  if (lVar4 != 0) {
    pIVar5 = (Image *)StringHelper::ToImage(asStack_b0,false);
    UIWidgetImage::SetImage(*(UIWidgetImage **)(this + 0x20),pIVar5);
  }
  std::string::~string(asStack_b0);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

