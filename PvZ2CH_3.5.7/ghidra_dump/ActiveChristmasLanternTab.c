// Class: ActiveChristmasLanternTab


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLanternTab::GetTabContainerImageName() const */

void __thiscall ActiveChristmasLanternTab::GetTabContainerImageName(ActiveChristmasLanternTab *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IMAGE_UI_ACTIVETABCENTER_LANTERN_BG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ActiveChristmasLanternTab::~ActiveChristmasLanternTab() */

void __thiscall
ActiveChristmasLanternTab::~ActiveChristmasLanternTab(ActiveChristmasLanternTab *this)

{
  *(undefined ***)this = &PTR__ActiveChristmasLanternTab_06973080;
  nop();
  return;
}


/* ActiveChristmasLanternTab::~ActiveChristmasLanternTab() */

void __thiscall
ActiveChristmasLanternTab::~ActiveChristmasLanternTab(ActiveChristmasLanternTab *this)

{
  ~ActiveChristmasLanternTab(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLanternTab::ActiveChristmasLanternTab(int, UI::Dialog*) */

void __thiscall
ActiveChristmasLanternTab::ActiveChristmasLanternTab
          (ActiveChristmasLanternTab *this,int param_1,Dialog *param_2)

{
  char cVar1;
  ActivityConfig *this_00;
  Dialog *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  this_01 = *(Dialog **)(this + 0x10);
  *(undefined ***)this = &PTR__ActiveChristmasLanternTab_06973080;
  std::string::string(asStack_10,"Btn_Goto");
  UI::Dialog::GetWidget<PVZ2UIButton>(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  cVar1 = ActivityConfig::IsLanternRiddlesActivated(this_00);
  if (cVar1 == '\0') {
    (**(code **)(**(long **)(this + 0x18) + 0x158))(*(long **)(this + 0x18));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

