// Class: NighttheToySkillDisplayWidget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NighttheToySkillDisplayWidget::~NighttheToySkillDisplayWidget() */

void __thiscall
NighttheToySkillDisplayWidget::~NighttheToySkillDisplayWidget(NighttheToySkillDisplayWidget *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b9fe0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066b9c90;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_WorldMap");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_New_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ToyNight");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NighttheToySkillDisplayWidget::~NighttheToySkillDisplayWidget() */

void __thiscall
NighttheToySkillDisplayWidget::~NighttheToySkillDisplayWidget(NighttheToySkillDisplayWidget *this)

{
  ~NighttheToySkillDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NighttheToySkillDisplayWidget::NighttheToySkillDisplayWidget(int, int, int) */

void __thiscall
NighttheToySkillDisplayWidget::NighttheToySkillDisplayWidget
          (NighttheToySkillDisplayWidget *this,int param_1,int param_2,int param_3)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(int *)(this + 0xfc) = param_3;
  *(undefined ***)this = &PTR_GetClass_066b9c90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b9fe0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_WorldMap");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_New_Plant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ToyNight");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NighttheToySkillDisplayWidget::InitSkillDisplay(std::string) */

void NighttheToySkillDisplayWidget::InitSkillDisplay(void)

{
  int iVar1;
  string *psVar2;
  NameMapperBase *this;
  UINewPlantView_SkillDisplay *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)UISingletonDialog<UINewPlantView_SkillDisplay>::ShowDialog();
  UINewPlantView_SkillDisplay::InitView(psVar2);
  this = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"gluttonydragon_new_avatar_2");
  iVar1 = NameMapperBase::GetIdForName(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  NewAvatar::GetAvatarIndexForAvatarID(iVar1);
  iVar1 = UISingletonDialog<UINewPlantView_SkillDisplay>::ShowDialog();
  UINewPlantView_SkillDisplay::SetAvatarIndex(iVar1);
  this_00 = (UINewPlantView_SkillDisplay *)
            UISingletonDialog<UINewPlantView_SkillDisplay>::ShowDialog();
  UINewPlantView_SkillDisplay::SetDisplayLevel(this_00,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NighttheToySkillDisplayWidget::ButtonDepress(int) */

void NighttheToySkillDisplayWidget::ButtonDepress(int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"gluttonydragon");
  InitSkillDisplay(param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NighttheToySkillDisplayWidget::ButtonDepress(int) */

void __thiscall
NighttheToySkillDisplayWidget::ButtonDepress(NighttheToySkillDisplayWidget *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* NighttheToySkillDisplayWidget::InitView() */

void __thiscall NighttheToySkillDisplayWidget::InitView(NighttheToySkillDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = FUN_038c1478(*(int *)(this + 0xfc) + 1);
  (*pcVar2)(this,uVar1);
  return;
}

