// Class: ActionCheckForShowReturnWorldKey


/* ActionCheckForShowReturnWorldKey::~ActionCheckForShowReturnWorldKey() */

void __thiscall
ActionCheckForShowReturnWorldKey::~ActionCheckForShowReturnWorldKey
          (ActionCheckForShowReturnWorldKey *this)

{
  *(undefined ***)this = &PTR_GetClass_068587c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionCheckForShowReturnWorldKey::~ActionCheckForShowReturnWorldKey() */

void __thiscall
ActionCheckForShowReturnWorldKey::~ActionCheckForShowReturnWorldKey
          (ActionCheckForShowReturnWorldKey *this)

{
  ~ActionCheckForShowReturnWorldKey(this);
  AK::FreeHook(this);
  return;
}


/* ActionCheckForShowReturnWorldKey::OnBtnOk() */

void __thiscall ActionCheckForShowReturnWorldKey::OnBtnOk(ActionCheckForShowReturnWorldKey *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[9] = (ActionCheckForShowReturnWorldKey)0x1;
  return;
}


/* ActionCheckForShowReturnWorldKey::ActionCheckForShowReturnWorldKey() */

void __thiscall
ActionCheckForShowReturnWorldKey::ActionCheckForShowReturnWorldKey
          (ActionCheckForShowReturnWorldKey *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068587c0;
  return;
}


/* ActionCheckForShowReturnWorldKey::StaticNew() */

ActionCheckForShowReturnWorldKey * ActionCheckForShowReturnWorldKey::StaticNew(void)

{
  ActionCheckForShowReturnWorldKey *this;
  
  this = ::operator_new(0x18);
  ActionCheckForShowReturnWorldKey(this);
  return this;
}


/* ActionCheckForShowReturnWorldKey::StaticGetClass() */

long * ActionCheckForShowReturnWorldKey::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionCheckForShowReturnWorldKey",uVar2,StaticNew);
  return sClass;
}


/* ActionCheckForShowReturnWorldKey::GetClass() const */

long * ActionCheckForShowReturnWorldKey::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionCheckForShowReturnWorldKey",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionCheckForShowReturnWorldKey::Start() */

void __thiscall ActionCheckForShowReturnWorldKey::Start(ActionCheckForShowReturnWorldKey *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *this_03;
  undefined8 uVar6;
  LotteryResultProgressBar *this_04;
  SalesProgressBar *this_05;
  PrimeTypeface *pPVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  Point aPStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar1 = PlayerInfo::GetReturnWorldKeyValue(this_02);
  this_00 = gLawnApp;
  if (iVar1 < 1) {
    this[9] = (ActionCheckForShowReturnWorldKey)0x1;
  }
  else {
    iVar2 = FUN_0454dc00(500);
    iVar3 = FUN_0454dc00(0x140);
    this_03 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10560);
    iVar2 = FUN_0454dc00(0xfa);
    this_04 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10560);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_04);
    iVar4 = FUN_0454dc00(0x7d);
    this_05 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10560);
    iVar5 = SalesProgressBar::GetCurrentLevel(this_05);
    Sexy::Point::Point(aPStack_50,iVar2 - iVar3 / 2,iVar4 - iVar5 / 2);
    PVZ2UIDialog::SetImage(this_03,uVar6,aPStack_50);
    FUN_05478178(aPStack_50,L"[AWARD_SCREEN_WORLDKEY_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_03,(wstring *)aPStack_50);
    FUN_05476c50(aPStack_50);
    nop();
    FUN_05478178(aPStack_50,L"[AWARD_SCREEN_RETURN_WORLDKEY_DESCRIPTION]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_03,(wstring *)aPStack_50);
    FUN_05476c50(aPStack_50);
    nop();
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
    PVZ2UIDialog::SetHeaderFont(this_03,pPVar7,(Color *)&PrimeText_Game::Color_Generic_Title);
    PlayerInfo::SetReturnWorldKeyValue(this_02,0);
    PlayerInfo::AddWorldKeys(this_02,iVar1);
    FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnBtnOk);
    Sexy::Delegate0::
    Delegate0<ActionCheckForShowReturnWorldKey,void(ActionCheckForShowReturnWorldKey::*)()>
              (aDStack_38,aPStack_50);
    PVZ2UIDialog::AddButton(this_03,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

