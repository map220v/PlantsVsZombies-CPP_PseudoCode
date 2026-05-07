// Class: OpenSurpriseUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenSurpriseUI::~OpenSurpriseUI() */

void __thiscall OpenSurpriseUI::~OpenSurpriseUI(OpenSurpriseUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682fff0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0682fcb0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"PlantAdventure");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  BoxOpenUI::~BoxOpenUI((BoxOpenUI *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OpenSurpriseUI::~OpenSurpriseUI() */

void __thiscall OpenSurpriseUI::~OpenSurpriseUI(OpenSurpriseUI *this)

{
  ~OpenSurpriseUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenSurpriseUI::ResetAnimName() */

void __thiscall OpenSurpriseUI::ResetAnimName(OpenSurpriseUI *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVPManager::GetCurrentLevelName();
  BoxOpenUI::SetAnimName(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OpenSurpriseUI::TouchEnded(Sexy::Touch const&) */

void OpenSurpriseUI::TouchEnded(Touch *param_1)

{
  LawnApp::KillOpenSurpriseBoxUI(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenSurpriseUI::OpenSurpriseUI(std::string) */

void __thiscall OpenSurpriseUI::OpenSurpriseUI(OpenSurpriseUI *this,string *param_2)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoxOpenUI::BoxOpenUI((BoxOpenUI *)this,param_2);
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682fff0;
  *(undefined ***)this = &PTR_GetClass_0682fcb0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"PlantAdventure");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

