// Class: YuanBaoEventTab


/* YuanBaoEventTab::~YuanBaoEventTab() */

void __thiscall YuanBaoEventTab::~YuanBaoEventTab(YuanBaoEventTab *this)

{
  *(undefined ***)this = &PTR__YuanBaoEventTab_0671e930;
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YuanBaoEventTab::GetTabContainerImageName() const */

void __thiscall YuanBaoEventTab::GetTabContainerImageName(YuanBaoEventTab *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IMAGE_UI_FESTIVALCENTER_YUANBAO_EVENT_BG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* YuanBaoEventTab::~YuanBaoEventTab() */

void __thiscall YuanBaoEventTab::~YuanBaoEventTab(YuanBaoEventTab *this)

{
  ~YuanBaoEventTab(this);
  AK::FreeHook(this);
  return;
}


/* YuanBaoEventTab::SyncActivityData(int) */

void __thiscall YuanBaoEventTab::SyncActivityData(YuanBaoEventTab *this,int param_1)

{
  ActivityConfig *this_00;
  undefined8 uVar1;
  
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if (this_00 != (ActivityConfig *)0x0) {
    uVar1 = ActivityConfig::DateMKTime(this_00,param_1);
    *(undefined8 *)(this + 0x28) = uVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YuanBaoEventTab::SetSelect(bool) */

void __thiscall YuanBaoEventTab::SetSelect(YuanBaoEventTab *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  this_00 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* YuanBaoEventTab::YuanBaoEventTab(int, UI::Dialog*) */

void __thiscall YuanBaoEventTab::YuanBaoEventTab(YuanBaoEventTab *this,int param_1,Dialog *param_2)

{
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__YuanBaoEventTab_0671e930;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YuanBaoEventTab::DrawForeground(Sexy::Graphics*) */

void __thiscall YuanBaoEventTab::DrawForeground(YuanBaoEventTab *this,Graphics *param_1)

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
    TodStringTranslate(L"[FESTIVAL_EVENT_LEFT_TIME]");
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
    iVar4 = FUN_03ac4800(0x32);
    iVar5 = FUN_03ac4800(0x183);
    iVar6 = FUN_03ac4800(0x50);
    Sexy::Insets::Insets((Insets *)awStack_28,iVar4 + iVar1 + iVar3,iVar5,iVar7,iVar6);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color((Color *)awStack_18,1);
    WriteWordInRect(param_1,auStack_38,awStack_28,uVar8,awStack_18,5,1);
    std::string::~string(asStack_30);
    FUN_05476c50(auStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

