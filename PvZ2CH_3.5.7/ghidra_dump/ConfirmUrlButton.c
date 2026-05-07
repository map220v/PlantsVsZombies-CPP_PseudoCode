// Class: ConfirmUrlButton


/* ConfirmUrlButton::~ConfirmUrlButton() */

void __thiscall ConfirmUrlButton::~ConfirmUrlButton(ConfirmUrlButton *this)

{
  *(undefined ***)this = &PTR_GetClass_067918e0;
  *(undefined ***)(this + 0x198) = &PTR__ConfirmUrlButton_06791c48;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06791c70;
  FUN_05476c50(this + 0x308);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to ConfirmUrlButton::~ConfirmUrlButton() */

void __thiscall ConfirmUrlButton::~ConfirmUrlButton(ConfirmUrlButton *this)

{
  ~ConfirmUrlButton(this + -0x198);
  return;
}


/* ConfirmUrlButton::~ConfirmUrlButton() */

void __thiscall ConfirmUrlButton::~ConfirmUrlButton(ConfirmUrlButton *this)

{
  ~ConfirmUrlButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConfirmUrlButton::~ConfirmUrlButton() */

void __thiscall ConfirmUrlButton::~ConfirmUrlButton(ConfirmUrlButton *this)

{
  ~ConfirmUrlButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfirmUrlButton::ButtonDepress(int) */

void __thiscall ConfirmUrlButton::ButtonDepress(ConfirmUrlButton *this,int param_1)

{
  LawnApp *pLVar1;
  int iVar2;
  char *__s;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) == param_1) {
    iVar2 = LawnApp::GetPlatform(gLawnApp);
    pLVar1 = gLawnApp;
    pcVar3 = *(code **)(*(long *)gLawnApp + 0x168);
    if (iVar2 == 0xb0) {
      __s = "http://115.182.216.157/user/start.html";
    }
    else {
      __s = "https://beian.miit.gov.cn";
    }
    std::string::string(asStack_10,__s);
    (*pcVar3)(pLVar1,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ConfirmUrlButton::ButtonDepress(int) */

void __thiscall ConfirmUrlButton::ButtonDepress(ConfirmUrlButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfirmUrlButton::InitView() */

void __thiscall ConfirmUrlButton::InitView(ConfirmUrlButton *this)

{
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"[HEALTH_NOTICE_CONTENT_5]");
  StringHelper::ToStringValue(asStack_18);
  FUN_054766c8(this + 0x308,auStack_10);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfirmUrlButton::ConfirmUrlButton(int) */

void __thiscall ConfirmUrlButton::ConfirmUrlButton(ConfirmUrlButton *this,int param_1)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_067918e0;
  *(undefined ***)(this + 0x198) = &PTR__ConfirmUrlButton_06791c48;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06791c70;
  FUN_05476574(this + 0x308);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConfirmUrlButton::Draw(Sexy::Graphics*) */

void __thiscall ConfirmUrlButton::Draw(ConfirmUrlButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  LotteryResultProgressBar *pLVar4;
  SalesProgressBar *pSVar5;
  Insets aIStack_28 [16];
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if (iVar1 == 0xb0) {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae08b8);
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae08b8);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    pSVar5 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae08b8);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
  }
  else {
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae09e0);
    Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    pLVar4 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae09e0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar4);
    pSVar5 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae09e0);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar5);
  }
  Sexy::Insets::Insets((Insets *)aTStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_1,pIVar3,(TRect *)aIStack_28,aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

