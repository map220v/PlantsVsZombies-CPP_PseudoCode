// Class: NewPlantUIMgr


/* NewPlantUIMgr::~NewPlantUIMgr() */

void __thiscall NewPlantUIMgr::~NewPlantUIMgr(NewPlantUIMgr *this)

{
  *(undefined ***)this = &PTR__NewPlantUIMgr_066198d0;
  Sexy::LazySingleton<NewPlantUIMgr>::~LazySingleton((LazySingleton<NewPlantUIMgr> *)this);
  return;
}


/* NewPlantUIMgr::~NewPlantUIMgr() */

void __thiscall NewPlantUIMgr::~NewPlantUIMgr(NewPlantUIMgr *this)

{
  ~NewPlantUIMgr(this);
  AK::FreeHook(this);
  return;
}


/* NewPlantUIMgr::NewPlantUIMgr() */

void __thiscall NewPlantUIMgr::NewPlantUIMgr(NewPlantUIMgr *this)

{
  Sexy::LazySingleton<NewPlantUIMgr>::LazySingleton((LazySingleton<NewPlantUIMgr> *)this);
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__NewPlantUIMgr_066198d0;
  return;
}


/* NewPlantUIMgr::cancelSwitch(UIMessageBox*, int) */

void NewPlantUIMgr::cancelSwitch(UIMessageBox *param_1,int param_2)

{
  if (UISingletonDialog<UIMessageBox>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIMessageBox>::m_pInstance + 0x318))();
    UISingletonDialog<UIMessageBox>::m_pInstance = (long *)0x0;
  }
  return;
}


/* NewPlantUIMgr::HasFinishedTutorial() */

void NewPlantUIMgr::HasFinishedTutorial(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x1d);
  if (cVar1 == '\0') {
    return;
  }
  PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x1e);
  return;
}


/* NewPlantUIMgr::IsNewUI() */

bool __thiscall NewPlantUIMgr::IsNewUI(NewPlantUIMgr *this)

{
  int iVar1;
  ProfileMgr *this_00;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_033bd388(*(undefined4 *)(this + 8));
  return iVar1 == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIMgr::confirmSwitch(UIMessageBox*, int) */

void NewPlantUIMgr::confirmSwitch(UIMessageBox *param_1,int param_2)

{
  TGALogMgr *pTVar1;
  undefined4 uVar2;
  TGAPlantWarsData aTStack_88 [64];
  TGALogPurchaseData aTStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
    FUN_033bd38c(param_1 + 8);
    TGAPlantWarsData::TGAPlantWarsData(aTStack_88);
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    uVar2 = 5;
    if (*(int *)(param_1 + 8) != 1) {
      uVar2 = 6;
    }
    TGALogPurchaseData::TGALogPurchaseData(aTStack_48,(TGALogPurchaseData *)aTStack_88);
    TGALogMgr::LogPlantLevelup(pTVar1,uVar2,aTStack_48);
    TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aTStack_48);
    if (*(int *)(param_1 + 8) == 1) {
      GameStateMgr::ShowNewPlantUIEntryScreen(gGameStateMgr,5,5);
    }
    else {
      GameStateMgr::ShowLevelUp();
    }
    TGAPlantWarsData::~TGAPlantWarsData(aTStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlantUIMgr::Switch(PlantUIType) */

void __thiscall NewPlantUIMgr::Switch(NewPlantUIMgr *this,int param_2)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  char *__s;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    *(int *)(this + 0xc) = param_2;
    if (param_2 == 1) {
      __s = "[NEW_PLANT_UI_SWITCH_TO_NEW]";
    }
    else {
      __s = "[NEW_PLANT_UI_SWITCH_TO_OLD]";
    }
    std::string::string(asStack_58,__s);
    std::string::string(asStack_50,"[REVIVE_TIP]");
    UIMessageBox::SetMessage(this_00,asStack_58,asStack_50);
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    UIMessageBox::SetShowType(this_00,6);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    TodStringTranslate(L"[BUTTON_OK]");
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,asStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,confirmSwitch);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<NewPlantUIMgr,void(NewPlantUIMgr::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelSwitch);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<NewPlantUIMgr,void(NewPlantUIMgr::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
    UIBagItemBox::SetCallBack((UIBagItemBox *)this_00,aDStack_38);
    FUN_05476c50(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

