// Class: SpringLoginTabUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringLoginTabUI::~SpringLoginTabUI() */

void __thiscall SpringLoginTabUI::~SpringLoginTabUI(SpringLoginTabUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__SpringLoginTabUI_0671e7f0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_BossChallenge");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringLoginTabUI::~SpringLoginTabUI() */

void __thiscall SpringLoginTabUI::~SpringLoginTabUI(SpringLoginTabUI *this)

{
  ~SpringLoginTabUI(this);
  AK::FreeHook(this);
  return;
}


/* SpringLoginTabUI::AddExternalWidget(Sexy::Widget*) */

void __thiscall SpringLoginTabUI::AddExternalWidget(SpringLoginTabUI *this,Widget *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  if (this[0x38] == (SpringLoginTabUI)0x0) {
    *(Widget **)(this + 0x40) = param_1;
    uVar1 = FUN_03ac4800(0x24e);
    plVar3 = *(long **)(this + 0x20);
    uVar2 = FUN_03ac4800(0x1d6);
    (**(code **)(*plVar3 + 0x198))(plVar3,0,0,uVar1,uVar2);
    plVar3 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
    (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(this + 0x20) + 0x60))
              (*(long **)(this + 0x20),*(undefined8 *)(this + 0x40));
    this[0x38] = (SpringLoginTabUI)0x1;
  }
  return;
}


/* SpringLoginTabUI::InitTestData() */

void __thiscall SpringLoginTabUI::InitTestData(SpringLoginTabUI *this)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  *(long *)(this + 0x30) = lVar1 + 0x178c8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringLoginTabUI::SetSelect(bool) */

void __thiscall SpringLoginTabUI::SetSelect(SpringLoginTabUI *this,bool param_1)

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
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,0);
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


/* SpringLoginTabUI::InitView() */

void __thiscall SpringLoginTabUI::InitView(SpringLoginTabUI *this)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac87f8);
  *(undefined8 *)(this + 0x28) = uVar1;
  plVar2 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined8 *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringLoginTabUI::SpringLoginTabUI(int, UI::Dialog*) */

void __thiscall
SpringLoginTabUI::SpringLoginTabUI(SpringLoginTabUI *this,int param_1,Dialog *param_2)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__SpringLoginTabUI_0671e7f0;
  this[0x38] = (SpringLoginTabUI)0x0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_BossChallenge");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringLoginTabUI::SyncActivityTime() */

void __thiscall SpringLoginTabUI::SyncActivityTime(SpringLoginTabUI *this)

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

