// Class: CustomDisplayBoardDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomDisplayBoardDialog::~CustomDisplayBoardDialog() */

void __thiscall CustomDisplayBoardDialog::~CustomDisplayBoardDialog(CustomDisplayBoardDialog *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_066eff40;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066efc10;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  CustomDisplayBoard::~CustomDisplayBoard((CustomDisplayBoard *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomDisplayBoardDialog::~CustomDisplayBoardDialog() */

void __thiscall CustomDisplayBoardDialog::~CustomDisplayBoardDialog(CustomDisplayBoardDialog *this)

{
  ~CustomDisplayBoardDialog(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomDisplayBoardDialog::CustomDisplayBoardDialog(std::string const&, Sexy::TRect<int> const&)
    */

void __thiscall
CustomDisplayBoardDialog::CustomDisplayBoardDialog
          (CustomDisplayBoardDialog *this,string *param_1,TRect *param_2)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CustomDisplayBoard::CustomDisplayBoard((CustomDisplayBoard *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_066efc10;
  *(undefined **)(this + 0xd8) = &DAT_066eff40;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomDisplayBoardDialog::ButtonDepress(int) */

CustomDisplayBoardDialog * __thiscall
CustomDisplayBoardDialog::ButtonDepress(CustomDisplayBoardDialog *this,int param_1)

{
  UIHappyVaseBreaker *this_00;
  CustomDisplayBoardDialog *pCVar1;
  
  if ((param_1 == 0x67) &&
     (this_00 = (UIHappyVaseBreaker *)UISingletonDialog<UIFightZodiac>::GetSingletonPtr(),
     this = (CustomDisplayBoardDialog *)0x0, this_00 != (UIHappyVaseBreaker *)0x0)) {
    pCVar1 = (CustomDisplayBoardDialog *)UIHappyVaseBreaker::closeDescription(this_00);
    return pCVar1;
  }
  return this;
}


/* non-virtual thunk to CustomDisplayBoardDialog::ButtonDepress(int) */

void __thiscall CustomDisplayBoardDialog::ButtonDepress(CustomDisplayBoardDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

