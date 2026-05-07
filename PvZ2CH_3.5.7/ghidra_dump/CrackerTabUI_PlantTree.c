// Class: CrackerTabUI_PlantTree


/* CrackerTabUI_PlantTree::~CrackerTabUI_PlantTree() */

void __thiscall CrackerTabUI_PlantTree::~CrackerTabUI_PlantTree(CrackerTabUI_PlantTree *this)

{
  *(undefined ***)this = &PTR__CrackerTabUI_PlantTree_0671d1a0;
  if (*(long *)(this + 0x40) != 0) {
    (**(code **)(**(long **)(this + 0x20) + 0x68))(*(long **)(this + 0x20));
    if (*(long **)(this + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x40) + 0x18))();
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  CrackerTabUI::~CrackerTabUI((CrackerTabUI *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrackerTabUI_PlantTree::GetTabContainerImageName() const */

void __thiscall CrackerTabUI_PlantTree::GetTabContainerImageName(CrackerTabUI_PlantTree *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IMAGE_UI_FESTIVALCENTER_LOTTERY_BG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CrackerTabUI_PlantTree::~CrackerTabUI_PlantTree() */

void __thiscall CrackerTabUI_PlantTree::~CrackerTabUI_PlantTree(CrackerTabUI_PlantTree *this)

{
  ~CrackerTabUI_PlantTree(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrackerTabUI_PlantTree::SetSelect(bool) */

void __thiscall CrackerTabUI_PlantTree::SetSelect(CrackerTabUI_PlantTree *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  long *plVar2;
  Dialog *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  pDVar3 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,1);
  pDVar3 = *(Dialog **)(this + 0x10);
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
/* CrackerTabUI_PlantTree::DrawForeground(Sexy::Graphics*) */

void __thiscall
CrackerTabUI_PlantTree::DrawForeground(CrackerTabUI_PlantTree *this,Graphics *param_1)

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
    lVar9 = *(long *)(this + 0x30);
    auVar10 = LawnApp::GetRealServerTime(gLawnApp);
    StringHelper::ToTimeString
              ((StringHelper *)&DAT_00000004,(float)(lVar9 - auVar10._0_8_),auVar10._8_4_);
    TodReplaceString(awStack_28,L"{TIME}",awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_28);
    (**(code **)(*(long *)this + 0x38))(asStack_30,this);
    lVar9 = FUN_05474184(asStack_30);
    if (lVar9 != 0) {
      this_01 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_30,false);
      LotteryResultProgressBar::GetCurrentLevel(this_01);
    }
    lVar9 = ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    iVar1 = *(int *)(lVar9 + 0x48);
    this_00 = (RechargeWelfareUI *)UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
    iVar3 = RechargeWelfareUI::getMX(this_00);
    iVar4 = FUN_03ac4800(0x8c);
    iVar5 = FUN_03ac4800(0x188);
    iVar6 = FUN_03ac4800(200);
    iVar7 = FUN_03ac4800(0x50);
    Sexy::Insets::Insets((Insets *)awStack_28,iVar4 + iVar1 + iVar3,iVar5,iVar6,iVar7);
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


/* CrackerTabUI_PlantTree::CrackerTabUI_PlantTree(int, UI::Dialog*) */

void __thiscall
CrackerTabUI_PlantTree::CrackerTabUI_PlantTree
          (CrackerTabUI_PlantTree *this,int param_1,Dialog *param_2)

{
  CrackerTabUI::CrackerTabUI((CrackerTabUI *)this,param_1,param_2);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__CrackerTabUI_PlantTree_0671d1a0;
  CrackerTabUI::InitView((CrackerTabUI *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrackerTabUI_PlantTree::SyncActivityData(int) */

void CrackerTabUI_PlantTree::SyncActivityData(int param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03ac12f8(local_80);
  if (cVar1 != '\0') {
    *(undefined8 *)((ulong)(uint)param_1 + 0x30) = local_38;
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

