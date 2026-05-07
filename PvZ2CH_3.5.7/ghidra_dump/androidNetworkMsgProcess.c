// Class: androidNetworkMsgProcess


/* androidNetworkMsgProcess::OnRequestFriendBorrowedPlantList(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestFriendBorrowedPlantList(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestFriendList(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestFriendList(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestFrindGiftList(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestFrindGiftList(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestFriedBorrowPlant(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestFriedBorrowPlant(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRquestSendGift(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRquestSendGift(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestUpdateProfile(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestUpdateProfile(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestUpdateLevelScore(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestUpdateLevelScore(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestFriendLeaderBoard(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestFriendLeaderBoard(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestTodaySendGiftList(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestTodaySendGiftList(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestStartTimeLevelCD(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestStartTimeLevelCD(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestRandReward(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestRandReward(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestAddFriendShip(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestAddFriendShip(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestLaunchSave(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestLaunchSave(_NetWorkMsg *param_1)

{
  return;
}


/* androidNetworkMsgProcess::OnRequestRanks() */

void androidNetworkMsgProcess::OnRequestRanks(void)

{
  return;
}


/* androidNetworkMsgProcess::~androidNetworkMsgProcess() */

void __thiscall androidNetworkMsgProcess::~androidNetworkMsgProcess(androidNetworkMsgProcess *this)

{
  *(undefined ***)this = &PTR__androidNetworkMsgProcess_06608b90;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x50))();
    *(undefined8 *)(this + 0xe0) = 0;
  }
  std::string::~string((string *)(this + 0xe48));
  std::string::~string((string *)(this + 0xe40));
  INetworkMsgProcess::~INetworkMsgProcess((INetworkMsgProcess *)this);
  return;
}


/* androidNetworkMsgProcess::~androidNetworkMsgProcess() */

void __thiscall androidNetworkMsgProcess::~androidNetworkMsgProcess(androidNetworkMsgProcess *this)

{
  ~androidNetworkMsgProcess(this);
  AK::FreeHook(this);
  return;
}


/* androidNetworkMsgProcess::OnRequestSurportPlant(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestSurportPlant(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF
            ((wchar_t *)"===============================   OnRequestSurportPlant----------[%s]\n",
             uVar1);
  return;
}


/* androidNetworkMsgProcess::OnRequestSendTLog(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestSendTLog(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined8 uVar1;
  
  Sexy::OutputDebugStrF((wchar_t *)"OnRequestSendTLog----erro:%d \n",(ulong)*(uint *)(param_1 + 8));
  uVar1 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"OnRequestSendTLog----msg: %s \n",uVar1);
  return;
}


/* androidNetworkMsgProcess::onRequestACLog(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestACLog(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  Sexy::OutputDebugStrF
            ((wchar_t *)"ACLog - onRequestACLog: result : %d",(ulong)*(uint *)(param_1 + 8));
  return;
}


/* androidNetworkMsgProcess::OnRequestHeartBeat(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestHeartBeat(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  NetworkMgr *this_00;
  
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::UpdateNetTime(this_00,(string *)param_1);
  return;
}


/* androidNetworkMsgProcess::OnRequestTimeLevelList(_NetWorkMsg const&) */

void androidNetworkMsgProcess::OnRequestTimeLevelList(_NetWorkMsg *param_1)

{
  LawnApp::KillNetConnectingUI(gLawnApp);
  return;
}


/* androidNetworkMsgProcess::RequestRanks() */

void androidNetworkMsgProcess::RequestRanks(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* androidNetworkMsgProcess::androidNetworkMsgProcess() */

void __thiscall androidNetworkMsgProcess::androidNetworkMsgProcess(androidNetworkMsgProcess *this)

{
  INetworkMsgProcess::INetworkMsgProcess((INetworkMsgProcess *)this);
  *(undefined ***)this = &PTR__androidNetworkMsgProcess_06608b90;
  Set8BytesTo0(this + 0xe40);
  Set8BytesTo0(this + 0xe48);
  this[0xe50] = (androidNetworkMsgProcess)0x0;
  this[0xe51] = (androidNetworkMsgProcess)0x5;
  this[0xe52] = (androidNetworkMsgProcess)0x0;
  this[0xe53] = (androidNetworkMsgProcess)0x2;
  *(undefined8 *)(this + 0xe0) = 0;
  this[0xe38] = (androidNetworkMsgProcess)0x1;
  this[0xe56] = (androidNetworkMsgProcess)0x0;
  this[0xe57] = (androidNetworkMsgProcess)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::getObjectJsons(int, int, std::string) */

void androidNetworkMsgProcess::getObjectJsons
               (string *param_1,undefined8 param_2_00,undefined4 param_2,undefined4 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  FUN_05475ad8(param_1,&DAT_05593308);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_05475ad8(param_1,"{\"i\":");
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_2);
  FUN_05462824(asStack_180,auStack_178);
  thunk_FUN_054757c0(param_1,asStack_180);
  std::string::~string(asStack_180);
  FUN_05475ad8(param_1,",\"q\":");
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  FUN_0546065c(auStack_168,param_4);
  FUN_05462824(asStack_180,auStack_178);
  thunk_FUN_054757c0(param_1,asStack_180);
  std::string::~string(asStack_180);
  FUN_05475ad8(param_1,",\"f\":\"");
  thunk_FUN_054757c0(param_1,param_5);
  FUN_05475ad8(param_1,&DAT_05594ef8);
  FUN_05475ad8(param_1,&DAT_05593350);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* androidNetworkMsgProcess::EnableBindUniqueID() */

androidNetworkMsgProcess __thiscall
androidNetworkMsgProcess::EnableBindUniqueID(androidNetworkMsgProcess *this)

{
  return this[0xe56];
}


/* androidNetworkMsgProcess::EnableBindForUUID() */

androidNetworkMsgProcess __thiscall
androidNetworkMsgProcess::EnableBindForUUID(androidNetworkMsgProcess *this)

{
  return this[0xe57];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::GetDefineId() */

void __thiscall androidNetworkMsgProcess::GetDefineId(androidNetworkMsgProcess *this)

{
  int iVar1;
  string *in_x8;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LawnApp::IsAndroidSDKInitEnd(gLawnApp);
  if ((iVar1 == 1) && (iVar1 = LawnApp::GetAndroidSDKInitStatus(gLawnApp), iVar1 == 0)) {
    Set8BytesTo0(asStack_28);
    Android::Diag::GetDeviceIMEI(asStack_28);
    Set8BytesTo0(asStack_20);
    Android::Diag::GetPrimaryMACAddress(asStack_20);
    FUN_031dcc6c(asStack_18,asStack_28,asStack_20);
    LawnApp::GetAppNameForiCloud();
    std::operator+(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestBindingUniqueID(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestBindingUniqueID
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  char cVar1;
  MainMenu *this_00;
  IdentifierMgr *this_01;
  UIMessageBox *this_02;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(param_1 + 8) == 0) {
    this_00 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp);
    MainMenu::SetBindBtnEnable(this_00,false);
    this[0xe56] = (androidNetworkMsgProcess)0x0;
    if (this[0xe57] != (androidNetworkMsgProcess)0x0) {
      this_01 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
      IdentifierMgr::SetUUIDLogin(this_01,false);
    }
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::LoginiCloudServer();
    Sexy::OutputDebugStrF((wchar_t *)"OnICloudRequestBindingUniqueID----success");
  }
  else {
    Sexy::StrFormat("[PVZ_ERROR_%d]",asStack_18,(ulong)*(uint *)(param_1 + 8));
    cVar1 = StringHelper::IsStringValueExist(asStack_18);
    if ((cVar1 == '\0') ||
       (this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
       this_02 == (UIMessageBox *)0x0)) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"OnICloudRequestBindingUniqueID----error %d",
                 (ulong)*(uint *)(param_1 + 8));
      std::string::~string(asStack_18);
    }
    else {
      std::string::string(asStack_10,"[REVIVE_TIP]");
      UIMessageBox::SetMessage(this_02,asStack_18,asStack_10);
      std::string::~string(asStack_10);
      nop();
      UIMessageBox::SetShowType(this_02,2);
      UIMessageBox::SetBackgroundDarken(this_02,true,0.5);
      Sexy::OutputDebugStrF
                ((wchar_t *)"OnICloudRequestBindingUniqueID----error %d",
                 (ulong)*(uint *)(param_1 + 8));
      std::string::~string(asStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::getObjectJsons(std::vector<NetworkCacheObjects,
   std::allocator<NetworkCacheObjects> > const&) */

void androidNetworkMsgProcess::getObjectJsons(vector *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *in_x1;
  string *in_x8;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  FUN_05475ad8();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  local_190 = FUN_031dd0d4(*in_x1);
  local_188 = FUN_031dd124(in_x1[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_190,(__normal_iterator *)&local_188), bVar1)
  {
    puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_190);
    FUN_05475ad8();
    std::string::string((string *)&local_180,"");
    FUN_05462980(auStack_178,(string *)&local_180);
    std::string::~string((string *)&local_180);
    nop();
    FUN_0546065c(auStack_168,*puVar3);
    FUN_05462824((string *)&local_180,auStack_178);
    thunk_FUN_054757c0();
    std::string::~string((string *)&local_180);
    FUN_05475ad8();
    std::string::string((string *)&local_180,"");
    FUN_05462980(auStack_178,(string *)&local_180);
    std::string::~string((string *)&local_180);
    nop();
    FUN_0546065c(auStack_168,puVar3[1]);
    FUN_05462824((string *)&local_180,auStack_178);
    thunk_FUN_054757c0();
    std::string::~string((string *)&local_180);
    FUN_05475ad8();
    thunk_FUN_054757c0();
    FUN_05475ad8();
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_190);
  }
  local_180 = FUN_05474eb0();
  __gnu_cxx::__normal_iterator<char*,std::string>::operator-
            ((__normal_iterator<char*,std::string> *)&local_180,1);
  FUN_05475070();
  FUN_05475ad8();
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ShowClearProfileHint() */

void __thiscall androidNetworkMsgProcess::ShowClearProfileHint(androidNetworkMsgProcess *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  long *plVar3;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this_00,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[BIND_UNIQUE_ID_CLEAR_PROFILE]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this_00);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
    plVar3 = (long *)UIMessageBox::GetButtonCloseNew(this_00);
    (**(code **)(*plVar3 + 0x158))(plVar3,0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,DoContinuedLoginV202ClearProfile);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<androidNetworkMsgProcess,void(androidNetworkMsgProcess::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
    FUN_05476c50(auStack_58);
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestUpLoadProfile(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestUpLoadProfile
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  int iVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PVZ2UIDialog *this_00;
  PrimeTypeface *pPVar4;
  bool bVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    this[0xe38] = (androidNetworkMsgProcess)0x1;
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::SaveResult(pPVar3,true);
    bVar5 = true;
  }
  else {
    if (*(int *)(param_1 + 8) == 0xafd6) {
      iVar1 = FUN_031dc0bc(400);
      iVar2 = FUN_031dc0bc(0xfa);
      this_00 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
      FUN_05478178(awStack_50,L"[REVIVE_TIP]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_00,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05478178(awStack_50,L"[PVZ_LOGIN_LOW_VERSION]",auStack_58);
      PVZ2UIDialog::SetFooterLabel(this_00,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      pPVar4 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(this_00,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar4 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)awStack_50,1);
      PVZ2UIDialog::SetFooterFont(this_00,pPVar4,(Color *)awStack_50);
      PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
      FUN_05478178(auStack_58,L"[PVZ_LOGIN_GO_UPDATE]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::OnHandleUpdateGame);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
      FUN_05476c50(auStack_58);
      nop();
      FUN_031dbef8(this_00 + 0x1c0);
      goto LAB_031ddb20;
    }
    this[0xe38] = (androidNetworkMsgProcess)0x0;
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::SaveResult(pPVar3,false);
    bVar5 = false;
  }
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::SyncProfileToServerFinish,bVar5);
LAB_031ddb20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* androidNetworkMsgProcess::ICloudRequestGetGoldenEggStat(int) */

undefined8 __thiscall
androidNetworkMsgProcess::ICloudRequestGetGoldenEggStat(androidNetworkMsgProcess *this,int param_1)

{
  long lVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  bool bVar2;
  
  lVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (lVar1 < 1) {
    bVar2 = false;
    if (param_1 == 1) {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GotGoldenEggStat,false);
      return 1;
    }
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::DailyRefreshGoldenEggInfo(this_01);
    }
    if (param_1 == 1) {
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GotGoldenEggStat,true)
      ;
      return 1;
    }
    bVar2 = true;
  }
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::RefreshGoldenEggStat,bVar2);
  return 1;
}


/* androidNetworkMsgProcess::ICloudRequestGetAccessoryStat(int) */

undefined8 __thiscall
androidNetworkMsgProcess::ICloudRequestGetAccessoryStat(androidNetworkMsgProcess *this,int param_1)

{
  long lVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  bool bVar2;
  
  lVar1 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (lVar1 < 1) {
    bVar2 = false;
    if (param_1 == 1) {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GotChristmasAccessoryStat,false);
      return 1;
    }
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::DailyRefreshChristmasAccessoryInfo(this_01);
    }
    if (param_1 == 1) {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GotChristmasAccessoryStat,true);
      return 1;
    }
    bVar2 = true;
  }
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::RefreshChristmasAccessoryStat,bVar2);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestAcceptFriendGitf(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestAcceptFriendGitf
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  long lVar1;
  int iVar2;
  SocialMgr *pSVar3;
  SocialInfo *this_00;
  int *piVar4;
  long lVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    pSVar3 = (SocialMgr *)Sexy::LazySingleton<SocialMgr>::GetInstance();
    SocialMgr::GetSocialInfo(pSVar3);
    SocialInfo::getUsedSunList();
    iVar2 = FUN_031db2d8(local_20,local_18);
    lVar5 = 0;
    if (0 < iVar2) {
      do {
        pSVar3 = (SocialMgr *)Sexy::LazySingleton<SocialMgr>::GetInstance();
        this_00 = (SocialInfo *)SocialMgr::GetSocialInfo(pSVar3);
        lVar1 = lVar5 + 1;
        piVar4 = (int *)FUN_031db2e4(local_20,lVar5);
        SocialInfo::RemoveUsedFriendSunList(this_00,*piVar4);
        lVar5 = lVar1;
      } while ((int)lVar1 < iVar2);
    }
    Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar2 * 0x19);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestGoldenEggOpen(int, int) */

void androidNetworkMsgProcess::ICloudRequestGoldenEggOpen(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActivityConfig *this_01;
  GoldenEggUI *this_02;
  undefined4 *puVar7;
  undefined1 auVar8 [12];
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = LawnApp::GetRealBeijingTime(gLawnApp);
  bVar2 = false;
  if (0 < lVar6) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
    if (((this_01 != (ActivityConfig *)0x0) && (this_00 != (PlayerInfo *)0x0)) &&
       (cVar1 = LawnApp::IsGoldenEggUIValid(gLawnApp), cVar1 != '\0')) {
      iVar3 = PlayerInfo::GetGoldenEggHammers(this_00);
      if (0 < iVar3) {
        PlayerInfo::SetGoldenEggHammers(this_00,iVar3 + -1,false);
      }
      this_02 = (GoldenEggUI *)LawnApp::GetGoldenEggUI(gLawnApp);
      auVar8 = ActivityConfig::RollGoldenEggPieceCount(this_01);
      local_40 = auVar8._8_4_;
      local_48 = auVar8._0_4_;
      local_44 = auVar8._4_4_;
      iVar4 = PlayerInfo::GetGoldenEggsObjectId(this_00);
      iVar3 = local_48;
      bVar2 = local_40._0_1_;
      iVar5 = PlayerInfo::GetGoldenEggDailyReward(this_00);
      PlayerInfo::SetGoldenEggDailyReward(this_00,iVar5 + iVar3,false);
      GoldenEggUI::AddBonus(this_02,param_2,iVar4,iVar3,bVar2);
      PlayerInfo::GetGoldenEggsStat();
      if (bVar2 == false) {
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_38);
        local_20[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(avStack_38);
        if (param_2 == 1) {
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_50,(__normal_iterator *)local_20),
                bVar2) {
            puVar7 = (undefined4 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
            *puVar7 = 2;
            eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                      ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_50);
          }
        }
        else {
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_50,(__normal_iterator *)local_20),
                bVar2) {
            eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                      ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_50);
          }
        }
      }
      else {
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_38);
        local_20[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(avStack_38);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_50,(__normal_iterator *)local_20),
              bVar2) {
          puVar7 = (undefined4 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
          *puVar7 = 1;
          eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                    ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_50);
        }
      }
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)local_20,(vector *)avStack_38);
      GoldenEggUI::SetRefreshStat(this_02,(vector<int,std::allocator<int>> *)local_20);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
      PlayerInfo::AddCommonGachaReward((int)this_00,iVar4,SUB41(iVar3,0),false);
      PlayerInfo::SAVE_PROFILE(this_00);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
    }
    bVar2 = true;
  }
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GoldenEggOpen,bVar2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::Initialize() */

void __thiscall androidNetworkMsgProcess::Initialize(androidNetworkMsgProcess *this)

{
  undefined *puVar1;
  HttpRequest *this_00;
  androidNetworkMsgProcess *paVar2;
  undefined8 *puVar3;
  size_t in_x2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x68);
  HttpRequest::HttpRequest(this_00);
  *(HttpRequest **)(this + 0xe0) = this_00;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 100) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  this[0xe55] = (androidNetworkMsgProcess)0x0;
  INetworkMsgProcess::LoadCache();
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0xe8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x100));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x120));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x128));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x118));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x110));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x108));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0xf0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x130));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x138));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x140));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x148));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x150));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x158));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x160));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x168));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x170));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x178));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x180));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x188));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 400));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1b0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1b8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1c0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1c8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1d0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1d8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1e0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1e8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1f0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x1f8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x208));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x210));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x378));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x380));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x218));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x370));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x220));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x598));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x230));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x238));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x240));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2a0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2b0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2b8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2c0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2c8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2d0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2d8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2e0));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2e8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x2f8));
  *puVar3 = paVar2;
  paVar2 = ::operator_new(0x20);
  PacketMemberFuncHandle<androidNetworkMsgProcess,_NetWorkMsg>::PacketMemberFuncHandle
            (paVar2,(_func_void__NetWorkMsg_ptr *)this);
  puVar3 = (undefined8 *)
           std::
           map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
           ::operator[]((map<std::string,PackMemberFunctionBase*,std::less<std::string>,std::allocator<std::pair<std::string_const,PackMemberFunctionBase*>>>
                         *)INetworkMsgProcess::G_msgFunMap,(string *)(this + 0x300));
  *puVar3 = paVar2;
  *(undefined8 *)(this + 0xdd8) = 0;
  INetworkMsgProcess::GetNetworkCacheQueue();
  Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData();
  FUN_05474278((string *)(this + 0x10),(string *)&local_50);
  std::string::~string((string *)&local_50);
  INetworkMsgProcess::GetNetworkCacheQueue();
  Sexy::WwiseSoundBank::GetBankName();
  FUN_05474278((string *)(this + 0x18),(string *)&local_50);
  std::string::~string((string *)&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRequestRanks);
  Sexy::Delegate0::Delegate0<androidNetworkMsgProcess,void(androidNetworkMsgProcess::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RequestRank,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RequestACLog);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<S2C_ACLog&,Sexy::CBMemberTranslatorX<androidNetworkMsgProcess,void(androidNetworkMsgProcess::*)(S2C_ACLog&)>>
            ((MessageRouter *)puVar1,Message::RequestACLog,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestAddFriendShip() */

void __thiscall androidNetworkMsgProcess::RequestAddFriendShip(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x188);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestSendTLog(std::string const&) */

void __thiscall
androidNetworkMsgProcess::RequestSendTLog(androidNetworkMsgProcess *this,string *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x180);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"tl");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,param_1);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestRandReward() */

void __thiscall androidNetworkMsgProcess::RequestRandReward(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x178);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestIncreaseGems(int) */

void __thiscall
androidNetworkMsgProcess::RequestIncreaseGems(androidNetworkMsgProcess *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x170);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"wi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,0,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestTodaySendGiftList() */

void __thiscall androidNetworkMsgProcess::RequestTodaySendGiftList(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x168);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestFriendLeaderBoard(int) */

void __thiscall
androidNetworkMsgProcess::RequestFriendLeaderBoard(androidNetworkMsgProcess *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x160);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"si");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,0,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestUpdateLevelScore(int, int, unsigned long, std::string const&) */

void __thiscall
androidNetworkMsgProcess::RequestUpdateLevelScore
          (androidNetworkMsgProcess *this,int param_1,int param_2,ulong param_3,string *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x158);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"si");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_2);
  std::string::string(asStack_1b8,"s");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  thunk_FUN_0546069c(auStack_168,param_3);
  std::string::string(asStack_1b8,"t");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"f");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,param_4);
  std::string::~string(asStack_1b0);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,0,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestUpdateProfile(std::string const&, std::string const&) */

void __thiscall
androidNetworkMsgProcess::RequestUpdateProfile
          (androidNetworkMsgProcess *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x150);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"pr");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,param_1);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"m");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,param_2);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestAcceptFriendGitf(std::string const&) */

void __thiscall
androidNetworkMsgProcess::RequestAcceptFriendGitf(androidNetworkMsgProcess *this,string *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x148);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"si");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,param_1);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestProfile() */

void __thiscall androidNetworkMsgProcess::RequestProfile(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x140);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::HeartBeat() */

void __thiscall androidNetworkMsgProcess::HeartBeat(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x138);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestFrindGiftList() */

void __thiscall androidNetworkMsgProcess::RequestFrindGiftList(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x100);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::HttpReqFriends() */

void __thiscall androidNetworkMsgProcess::HttpReqFriends(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0xe8);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::SendGift(int, int) */

void __thiscall
androidNetworkMsgProcess::SendGift(androidNetworkMsgProcess *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_2);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0xf0);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"ri");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_1);
  std::string::string(asStack_1b8,"gti");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,0,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestPlayInfo() */

void __thiscall androidNetworkMsgProcess::RequestPlayInfo(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x108);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::FreshGems(int, std::string const&, std::string const&) */

void __thiscall
androidNetworkMsgProcess::FreshGems
          (androidNetworkMsgProcess *this,int param_1,string *param_2,string *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x118);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"gd");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"pf");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,param_2);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"pk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,param_3);
  std::string::~string(asStack_1b0);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,0,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::BorrowFriendPlant(unsigned int) */

void __thiscall
androidNetworkMsgProcess::BorrowFriendPlant(androidNetworkMsgProcess *this,uint param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_054608dc(auStack_168,param_1);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x120);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"fi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,0,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestBorrowedPlantList() */

void __thiscall androidNetworkMsgProcess::RequestBorrowedPlantList(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x128);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* androidNetworkMsgProcess::InitAfterLogin() */

void __thiscall androidNetworkMsgProcess::InitAfterLogin(androidNetworkMsgProcess *this)

{
  RequestBorrowedPlantList(this);
  INetworkMsgProcess::UpdatePlayerSupportPlant();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestTimeLevelList(int) */

void __thiscall
androidNetworkMsgProcess::RequestTimeLevelList(androidNetworkMsgProcess *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  FUN_0546065c(auStack_168,param_1);
  std::string::string(asStack_1b0,"req");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar3,this + 0x1d8);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar3,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar3,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"ci");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar3,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  cVar1 = INetworkMsgProcess::isSessionKeyValid((INetworkMsgProcess *)this);
  if (cVar1 != '\0') {
    pcVar4 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar4)(this,amStack_1a8,0,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
  }
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestStartTimeLevelCD(int) */

void __thiscall
androidNetworkMsgProcess::RequestStartTimeLevelCD(androidNetworkMsgProcess *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x1e0);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"ci");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,0,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestUUIDInit() */

void __thiscall androidNetworkMsgProcess::RequestUUIDInit(androidNetworkMsgProcess *this)

{
  LawnApp *pLVar1;
  char cVar2;
  undefined8 uVar3;
  DefineIDMgr *this_00;
  Util *this_01;
  long lVar4;
  code *pcVar5;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar3,this + 0x378);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_58,"00:00:00:00:00:00");
  nop();
  Android::Diag::GetPrimaryMACAddress(asStack_58);
  this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetUserDefineID(this_00);
  std::string::string(asStack_40,"di");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar3,asStack_50);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_48,"ma");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  LawnApp::GetDeviceMODEL(gLawnApp);
  FUN_05474278(uVar3,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"ver");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  pLVar1 = gLawnApp + 0x3d0;
  cVar2 = FUN_0547419c(pLVar1);
  if (cVar2 == '\0') {
    FUN_05475d88(asStack_40,pLVar1);
    FUN_05474278(uVar3,asStack_40);
    std::string::~string(asStack_40);
  }
  else {
    std::string::string(asStack_40,"1.7.5");
    FUN_05474278(uVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"pack");
  this_01 = (Util *)std::
                    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                                  *)amStack_38,asStack_48);
  Android::Util::GetPackageName(this_01);
  FUN_05474278(this_01,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  lVar4 = FUN_05474184(asStack_58);
  if (lVar4 != 0) {
    std::string::string(asStack_40,"mac");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,asStack_40);
    thunk_FUN_05475e00(uVar3,asStack_58);
    std::string::~string(asStack_40);
    nop();
  }
  pcVar5 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar5)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestUUIDCheck() */

void __thiscall androidNetworkMsgProcess::RequestUUIDCheck(androidNetworkMsgProcess *this)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar3,this + 0x380);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_48,"uuid");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  Sexy::IAsyncNetworkTask::GetName();
  FUN_05474278(uVar3,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"at");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(uVar3,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"ver");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  lVar1 = gLawnApp + 0x3d0;
  cVar2 = FUN_0547419c(lVar1);
  if (cVar2 == '\0') {
    FUN_05475d88(asStack_40,lVar1);
    FUN_05474278(uVar3,asStack_40);
    std::string::~string(asStack_40);
  }
  else {
    std::string::string(asStack_40,"1.7.5");
    FUN_05474278(uVar3,asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  std::string::~string(asStack_48);
  nop();
  pcVar4 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar4)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestUUIDBind() */

void __thiscall androidNetworkMsgProcess::RequestUUIDBind(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  DefineIDMgr *this_00;
  Util *this_01;
  code *pcVar2;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x208);
  std::string::~string(asStack_40);
  nop();
  this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetUserDefineID(this_00);
  std::string::string(asStack_40,"di");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,asStack_50);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_48,"uuid");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  Sexy::IAsyncNetworkTask::GetName();
  FUN_05474278(uVar1,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"at");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(uVar1,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_48,"pack");
  this_01 = (Util *)std::
                    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                    ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                                  *)amStack_38,asStack_48);
  Android::Util::GetPackageName(this_01);
  FUN_05474278(this_01,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::string::~string(asStack_50);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestUUIDLogin() */

void __thiscall androidNetworkMsgProcess::RequestUUIDLogin(androidNetworkMsgProcess *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  PVPManager *this_00;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  string *this_03;
  char *__s;
  string *this_04;
  code *pcVar5;
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 8) != 1) && (*(int *)(this + 100) < 4)) {
    *(int *)(this + 100) = *(int *)(this + 100) + 1;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    this_04 = asStack_1c0;
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x210);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b8,"uuid");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::IAsyncNetworkTask::GetName();
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    uVar1 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar1);
    uVar3 = (**(code **)(*(long *)this + 0x408))(this);
    thunk_FUN_05460424(auStack_168,uVar3);
    std::string::string(asStack_1b8,"r");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(this_04,"s");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,this_04);
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::IAsyncNetworkTask::GetName();
    INetworkMsgProcess::GetClientSignature((string *)this);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    std::string::~string(this_04);
    nop();
    std::string::string(asStack_1b8,"cv");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::GetProductVersion(this_00);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"ci");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)Sexy::LazySingleton<PurchaseMgr>::GetInstance();
    uVar4 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this_01);
    thunk_FUN_05475e00(uVar3,uVar4);
    std::string::~string(asStack_1b0);
    nop();
    iVar2 = LawnApp::IsAndroidSDKInitEnd(gLawnApp);
    if ((iVar2 == 1) && (iVar2 = LawnApp::GetAndroidSDKInitStatus(gLawnApp), iVar2 == 0)) {
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_rightmost(this_02);
      PurchaseBroker::GetUniqueID();
      std::string::string(asStack_1b0,"oi");
      this_03 = (string *)
                std::
                map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                              *)amStack_1a8,asStack_1b0);
      __s = (char *)FUN_0547429c(asStack_1b8);
      std::string::append(this_03,__s,(size_t)this_04);
      std::string::~string(asStack_1b0);
      nop();
      std::string::~string(asStack_1b8);
    }
    *(undefined4 *)(this + 8) = 1;
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::InitPurchaseOrder(std::string const&) */

void __thiscall
androidNetworkMsgProcess::InitPurchaseOrder(androidNetworkMsgProcess *this,string *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x218);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"dpi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,param_1);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,1,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestUpdateChargeInfo(std::string const&, bool, int) */

void __thiscall
androidNetworkMsgProcess::RequestUpdateChargeInfo
          (androidNetworkMsgProcess *this,string *param_1,bool param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  PVPManager *this_00;
  InvitationPlayerInfo *pIVar3;
  string *psVar4;
  string *psVar5;
  code *pcVar6;
  string asStack_1d8 [8];
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1c8,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1c8);
  thunk_FUN_05475e00(uVar2,this + 0x370);
  std::string::~string(asStack_1c8);
  nop();
  std::string::string(asStack_1c8,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1c8);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1c8);
  nop();
  std::string::string(asStack_1c8,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1c8);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1c8);
  nop();
  std::string::string(asStack_1d0,"ver_");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1d0);
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::GetProductVersion(this_00);
  FUN_05474278(uVar2,asStack_1c8);
  std::string::~string(asStack_1c8);
  std::string::~string(asStack_1d0);
  nop();
  pIVar3 = (InvitationPlayerInfo *)LawnApp::GetPaymentResultInfo(gLawnApp);
  InvitationPlayerInfo::InvitationPlayerInfo((InvitationPlayerInfo *)asStack_1c8,pIVar3);
  std::string::string(asStack_1d0,"r");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1d0);
  thunk_FUN_05475e00(uVar2,auStack_1c0);
  std::string::~string(asStack_1d0);
  nop();
  psVar5 = asStack_1d8;
  std::string::string(asStack_1d0,"oi");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_1a8,asStack_1d0);
  std::string::append(psVar4,"",(size_t)psVar5);
  std::string::~string(asStack_1d0);
  nop();
  psVar5 = asStack_1d8;
  std::string::string(asStack_1d0,"ci");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_1a8,asStack_1d0);
  std::string::append(psVar4,"",(size_t)psVar5);
  std::string::~string(asStack_1d0);
  nop();
  psVar5 = asStack_1d8;
  std::string::string(asStack_1d0,"pt");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_1a8,asStack_1d0);
  std::string::append(psVar4,"",(size_t)psVar5);
  std::string::~string(asStack_1d0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1d0,"");
  FUN_05462980(auStack_178,asStack_1d0);
  std::string::~string(asStack_1d0);
  nop();
  if (0 < param_3) {
    FUN_0546065c(auStack_168,param_3);
    std::string::string(asStack_1d8,"obi");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1d8);
    FUN_05462824(asStack_1d0,auStack_178);
    FUN_05474278(uVar2,asStack_1d0);
    std::string::~string(asStack_1d0);
    std::string::~string(asStack_1d8);
    nop();
  }
  std::string::string(asStack_1d0,"pdi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1d0);
  thunk_FUN_05475e00(uVar2,param_1);
  std::string::~string(asStack_1d0);
  nop();
  pcVar6 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1d0,"[NET_CONNECTING]");
  (*pcVar6)(this,amStack_1a8,1,asStack_1d0,0,0);
  std::string::~string(asStack_1d0);
  nop();
  FUN_054617bc(auStack_178);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_1c8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestLostPurchaseOrder() */

void __thiscall androidNetworkMsgProcess::RequestLostPurchaseOrder(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x220);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_38,1,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestACLog(S2C_ACLog&) */

void __thiscall
androidNetworkMsgProcess::RequestACLog(androidNetworkMsgProcess *this,S2C_ACLog *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  PlayerInfo *this_00;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestACLog enter");
  Set8BytesTo0(asStack_50);
  pcVar7 = *(code **)(*(long *)param_1 + 0x40);
  std::string::string(asStack_38,"d");
  cVar1 = (*pcVar7)(param_1,asStack_50,asStack_38);
  std::string::~string(asStack_38);
  nop();
  if (cVar1 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestACLog to json error");
    std::string::~string(asStack_50);
  }
  else {
    Set8BytesTo0(asStack_48);
    cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
    if (cVar1 == '\0') {
      thunk_FUN_05475e00(asStack_48,asStack_50);
    }
    else {
      pcVar5 = (char *)FUN_0547429c(asStack_50);
      iVar2 = FUN_05474178(asStack_50);
      pcVar6 = (char *)FUN_0547429c(this + 0xe40);
      EncryptString(pcVar5,iVar2,pcVar6);
      FUN_05474278(asStack_48,asStack_38);
      std::string::~string(asStack_38);
    }
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    std::string::string(asStack_40,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(uVar3,this + 0x230);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"ac");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(uVar3,asStack_48);
    std::string::~string(asStack_40);
    nop();
    pcVar7 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_40,"[NET_CONNECTING]");
    (*pcVar7)(this,asStack_38,0,asStack_40,0,0);
    std::string::~string(asStack_40);
    nop();
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    if (this_00 != (PlayerInfo *)0x0) {
      PlayerInfo::PushACLog(this_00,param_1);
      PlayerInfo::SerializeACLog(this_00,(string *)(this + 0xe40));
    }
    uVar3 = FUN_0547429c(asStack_50);
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestACLog, json : %s",uVar3);
    uVar3 = FUN_0547429c(asStack_48);
    uVar4 = FUN_0547429c((string *)(this + 0xe40));
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestACLog, ac : %s, key : %s",uVar3,uVar4);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestSyncPlayerData() */

void __thiscall androidNetworkMsgProcess::RequestSyncPlayerData(androidNetworkMsgProcess *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  PlayerInfo *this_00;
  ColourFit *this_01;
  uchar *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  ulong local_60;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestSyncPlayerData enter");
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 == (PlayerInfo *)0x0) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"ACLog - RequestSyncPlayerData, strProfileData error : no profile");
    uVar8 = 2;
  }
  else {
    Set8BytesTo0(asStack_78);
    Set8BytesTo0(asStack_70);
    uVar8 = true;
    Set8BytesTo0(asStack_68);
    PlayerInfo::UpdateDeltaDataForServer(this_00);
    PlayerInfo::GetDeltaDataForServer(this_00,asStack_78,asStack_70,asStack_68);
    PlayerInfo::SerializeACLog(this_00,(string *)(this + 0xe40));
    local_60 = 0x19000;
    this_01 = operator_new__(0x19000);
    std::string::string(asStack_50,"\"");
    puVar4 = (uchar *)FUN_0547429c(asStack_78);
    uVar2 = FUN_05474178(asStack_78);
    base64_url_safe(puVar4,uVar2);
    std::operator+(asStack_50,asStack_48);
    std::string::string(asStack_38,"\"");
    std::operator+(asStack_40,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    nop();
    puVar4 = (uchar *)FUN_0547429c(asStack_58);
    uVar5 = FUN_05474178(asStack_58);
    iVar3 = gzcompress(puVar4,uVar5,(uchar *)this_01,&local_60);
    if (iVar3 == 0) {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)asStack_38);
      std::string::string(asStack_40,"req");
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_38,asStack_40);
      thunk_FUN_05475e00(uVar6,this + 0x238);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"ui");
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_38,asStack_40);
      thunk_FUN_05475e00(uVar6,this + 0x10);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_40,"sk");
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_38,asStack_40);
      thunk_FUN_05475e00(uVar6,this + 0x18);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_48,"pr");
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_38,asStack_48);
      base64_url_safe((uchar *)this_01,(uint)local_60);
      FUN_05474278(uVar6,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      nop();
      std::string::string(asStack_40,"m");
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_38,asStack_40);
      thunk_FUN_05475e00(uVar6,asStack_70);
      std::string::~string(asStack_40);
      nop();
      std::string::string(asStack_48,"s");
      uVar6 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_38,asStack_48);
      puVar4 = (uchar *)FUN_0547429c(asStack_68);
      uVar2 = FUN_05474184(asStack_68);
      base64_url_safe(puVar4,uVar2);
      FUN_05474278(uVar6,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      nop();
      cVar1 = INetworkMsgProcess::isSessionKeyValid((INetworkMsgProcess *)this);
      if (cVar1 != '\0') {
        pcVar7 = *(code **)(*(long *)this + 0x40);
        std::string::string(asStack_40,"[NET_CONNECTING]");
        (*pcVar7)(this,asStack_38,1,asStack_40,0,0);
        std::string::~string(asStack_40);
        nop();
        uVar6 = FUN_0547429c(asStack_78);
        Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestSyncPlayerData, strProfileData : %s",uVar6)
        ;
      }
      uVar8 = cVar1 == '\0';
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)asStack_38);
    }
    EATextSquish::ColourFit::~ColourFit(this_01);
    std::string::~string(asStack_58);
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    std::string::~string(asStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestDownloadPlayerData() */

void __thiscall androidNetworkMsgProcess::RequestDownloadPlayerData(androidNetworkMsgProcess *this)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestDownloadPlayerData enter");
  if (*(code **)(*(long *)this + 0x28) == INetworkMsgProcess::IsLogined) {
    cVar1 = INetworkMsgProcess::IsLogined((INetworkMsgProcess *)this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x28))();
  }
  cVar2 = '\0';
  if (cVar1 != '\0') {
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    uVar4 = (**(code **)(*(long *)this + 0x408))(this);
    thunk_FUN_05460424(auStack_168,uVar4);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x240);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    cVar2 = INetworkMsgProcess::isSessionKeyValid((INetworkMsgProcess *)this);
    if (cVar2 != '\0') {
      pcVar5 = *(code **)(*(long *)this + 0x40);
      std::string::string(asStack_1b0,"[NET_CONNECTING]");
      (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
      std::string::~string(asStack_1b0);
      nop();
      Sexy::OutputDebugStrF((wchar_t *)"ACLog - RequestDownloadPlayerData Send");
    }
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
    FUN_054617bc(auStack_178);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::DoContinuedLoginV202() */

void __thiscall androidNetworkMsgProcess::DoContinuedLoginV202(androidNetworkMsgProcess *this)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  TGALogMgr *pTVar4;
  PlayerInfo *pPVar5;
  bool bVar6;
  size_t in_x2;
  TGABagData aTStack_18 [8];
  TGABagData aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)INetworkMsgProcess::GetNetworkCacheQueue();
  AnimationController::SetDescription(psVar3);
  psVar3 = (string *)INetworkMsgProcess::GetNetworkCacheQueue();
  NetworkCacheQueue::setSessionKey(psVar3);
  INetworkMsgProcess::SaveCache();
  TGABagData::TGABagData(aTStack_18);
  std::string::append((string *)aTStack_18,"8",in_x2);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData(aTStack_10,aTStack_18);
  TGALogMgr::LogAppLaunch(pTVar4,aTStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
  cVar1 = LawnApp::CheckProfileOpen();
  if (cVar1 == '\0') {
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar2 = ProfileMgr::GetNumProfiles();
    if (0 < iVar2) {
      pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
      PlayerInfo::ClearACLog(pPVar5);
      std::string::string((string *)aTStack_10,"");
      PlayerInfo::SerializeACLog(pPVar5,(string *)aTStack_10);
      std::string::~string((string *)aTStack_10);
      nop();
    }
    goto LAB_031e7104;
  }
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetNumProfiles();
  if (iVar2 == 0) {
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - OnICloudRequstLogin No Local Profile");
    RequestDownloadPlayerData(this);
    goto LAB_031e7120;
  }
  pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = PlayerInfo::UnserializeACLog(pPVar5,(string *)(this + 0xe48));
  if (cVar1 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - OnICloudRequstLogin Cheat Profile");
    RequestDownloadPlayerData(this);
    goto LAB_031e7120;
  }
  cVar1 = FUN_0547419c((string *)(this + 0xe48));
  if (cVar1 == '\0') {
    iVar2 = RequestSyncPlayerData(this);
    bVar6 = false;
    if (iVar2 != 2) goto LAB_031e7104;
  }
  else {
    (**(code **)(*(long *)this + 0x2c8))(this);
LAB_031e7104:
    bVar6 = true;
  }
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,bVar6);
LAB_031e7120:
  *(undefined4 *)(this + 8) = 3;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* androidNetworkMsgProcess::DoContinuedLoginV202ClearProfile(UIMessageBox*, int) */

void __thiscall
androidNetworkMsgProcess::DoContinuedLoginV202ClearProfile
          (androidNetworkMsgProcess *this,UIMessageBox *param_1,int param_2)

{
  ProfileMgr *this_00;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::ClearAllProfile(this_00);
  DoContinuedLoginV202(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::SendHttpRequest(std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > >&, bool,
   std::string const&, bool, bool) */

void androidNetworkMsgProcess::SendHttpRequest
               (map *param_1,bool param_2,string *param_3,bool param_4,bool param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  string *psVar8;
  char *pcVar9;
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *this;
  HttpRequest *this_00;
  undefined8 local_40;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(ulong)param_2;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"pi");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[](this,(string *)&local_18);
  std::string::string((string *)&local_10,"ui");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[](this,(string *)&local_10);
  thunk_FUN_05475e00(uVar5,uVar6);
  std::string::~string((string *)&local_10);
  nop();
  std::string::~string((string *)&local_18);
  nop();
  psVar8 = (string *)&local_18;
  std::string::string((string *)&local_10,"req");
  local_40 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find(this,(string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
  FUN_05475d88(asStack_38,lVar7 + 8);
  if (((ulong)param_3 & 0xff) != 0) {
    LawnApp::ShowNetConnectingUI(gLawnApp,(string *)(ulong)param_4);
  }
  Set8BytesTo0(asStack_30);
  local_40 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::begin(this);
  std::string::append(asStack_30,"{",(size_t)psVar8);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    psVar8 = (string *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
    bVar1 = std::operator!=(psVar8,"req");
    if (bVar1) {
      psVar8 = (string *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
      bVar1 = std::operator!=(psVar8,"exurl");
      if (bVar1) {
        FUN_05475ad8(asStack_30,&DAT_05593398);
        uVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
        thunk_FUN_054757c0(asStack_30,uVar5);
        FUN_05475ad8(asStack_30,&DAT_05593ef0);
        lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
        cVar2 = INetworkMsgProcess::IsJsonObj((INetworkMsgProcess *)param_1,(string *)(lVar7 + 8));
        if (cVar2 == '\0') {
          FUN_05475ad8(asStack_30,&DAT_05593398);
          lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
          thunk_FUN_054757c0(asStack_30,lVar7 + 8);
          FUN_05475ad8(asStack_30,&DAT_05593398);
        }
        else {
          lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
          thunk_FUN_054757c0(asStack_30,lVar7 + 8);
        }
        FUN_05475ad8(asStack_30,&DAT_05593348);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_40);
  }
  lVar7 = FUN_05474178(asStack_30);
  FUN_05475ffc((string *)&local_10,asStack_30,0,lVar7 + -1);
  FUN_05474278(asStack_30,(string *)&local_10);
  std::string::~string((string *)&local_10);
  FUN_05475ad8(asStack_30,&DAT_05593340);
  iVar3 = INetworkMsgProcess::GetMsgID((INetworkMsgProcess *)param_1,asStack_38);
  pcVar9 = (char *)FUN_0547429c(asStack_30);
  iVar4 = FUN_05474178(asStack_30);
  PCPEncryptSendDataStr(pcVar9,iVar4,iVar3,asStack_38);
  std::string::string(asStack_20,"exurl");
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find(this,asStack_20);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  std::string::~string(asStack_20);
  nop();
  if (bVar1) {
    this_00 = *(HttpRequest **)(param_1 + 0xe0);
    std::string::string((string *)&local_10,"exurl");
    psVar8 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[](this,(string *)&local_10);
    HttpRequest::StartRequest(this_00,asStack_38,asStack_28,psVar8);
    std::string::~string((string *)&local_10);
    nop();
  }
  else {
    HttpRequest::StartRequest
              (*(HttpRequest **)(param_1 + 0xe0),asStack_38,asStack_28,
               (string *)&HttpRequest::EmptyUrl);
  }
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequstLogin(std::string const&) */

void __thiscall
androidNetworkMsgProcess::ICloudRequstLogin(androidNetworkMsgProcess *this,string *param_1)

{
  LawnApp *this_00;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  MainMenu *this_01;
  undefined8 uVar5;
  GachaConfig *this_02;
  undefined8 uVar6;
  DefineIDMgr *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  PVPManager *this_04;
  ulong uVar8;
  PVZ2UIDialog *this_05;
  PrimeTypeface *pPVar9;
  ReceivedDataCallback *pRVar10;
  string *this_06;
  char *__s;
  string *__n;
  undefined1 uVar11;
  code *pcVar12;
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [48];
  Delegate0 aDStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x4000000);
  if ((cVar1 != '\0') &&
     (this_01 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp), this_01 != (MainMenu *)0x0)) {
    std::string::string(asStack_1a8,"dynamic.rsb");
    cVar1 = MainMenu::CheckConfigFile(this_01,asStack_1a8);
    std::string::~string(asStack_1a8);
    nop();
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      iVar3 = FUN_031dc0bc(400);
      iVar4 = FUN_031dc0bc(0xfa);
      this_05 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
      FUN_05478178(asStack_1a8,L"[MD5_CHECK_FAILED_TITLE]",asStack_1b0);
      PVZ2UIDialog::SetHeaderLabel(this_05,(wstring *)asStack_1a8);
      FUN_05476c50(asStack_1a8);
      nop();
      FUN_05478178(asStack_1a8,L"[MD5_CHECK_FAILED_DESC]",asStack_1b0);
      PVZ2UIDialog::SetFooterLabel(this_05,(wstring *)asStack_1a8);
      FUN_05476c50(asStack_1a8);
      nop();
      pPVar9 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(this_05,pPVar9,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar9 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)asStack_1a8,1);
      PVZ2UIDialog::SetFooterFont(this_05,pPVar9,(Color *)asStack_1a8);
      FUN_05478178(asStack_1b0,L"[BUTTON_OK]",asStack_1b8);
      pRVar10 = (ReceivedDataCallback *)LawnApp::GetMainMenu(gLawnApp);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                (pRVar10,MainMenu::OnCheckMD5Failed);
      Sexy::Delegate0::Delegate0<MainMenu,void(MainMenu::*)()>(aDStack_178,asStack_1a8);
      PVZ2UIDialog::AddButton(this_05,asStack_1b0,aDStack_178,0);
      FUN_05476c50(asStack_1b0);
      nop();
      uVar11 = 0;
      goto LAB_031e7714;
    }
  }
  if (*(int *)(this + 8) == 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (*(int *)(this + 100) < 4) {
      *(int *)(this + 100) = *(int *)(this + 100) + 1;
      uVar2 = operator|(0x10,8);
      FUN_05462470(aDStack_178,uVar2);
      uVar5 = (**(code **)(*(long *)this + 0x408))(this);
      thunk_FUN_05460424(auStack_168,uVar5);
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)asStack_1a8);
      std::string::string(asStack_1b0,"req");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      thunk_FUN_05475e00(uVar5,this + 0x1b0);
      std::string::~string(asStack_1b0);
      nop();
      std::string::string(asStack_1b0,"di");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      thunk_FUN_05475e00(uVar5,param_1);
      std::string::~string(asStack_1b0);
      nop();
      std::string::string(asStack_1b0,"t");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      this_02 = (GachaConfig *)Sexy::LazySingleton<AuthMgr>::GetInstance();
      uVar6 = GachaConfig::GetGachaPlantRewardList(this_02);
      thunk_FUN_05475e00(uVar5,uVar6);
      std::string::~string(asStack_1b0);
      nop();
      std::string::string(asStack_1b8,"li");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b8);
      this_03 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
      DefineIDMgr::GetNewUserDefineID(this_03);
      FUN_05474278(uVar5,asStack_1b0);
      std::string::~string(asStack_1b0);
      std::string::~string(asStack_1b8);
      nop();
      std::string::string(asStack_1b8,"head");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b8);
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_rightmost(p_Var7);
      PurchaseBroker::GetTWRequestHead();
      FUN_05474278(uVar5,asStack_1b0);
      std::string::~string(asStack_1b0);
      std::string::~string(asStack_1b8);
      nop();
      std::string::string(asStack_1b8,"r");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b8);
      FUN_05462824(asStack_1b0,aDStack_178);
      FUN_05474278(uVar5,asStack_1b0);
      std::string::~string(asStack_1b0);
      std::string::~string(asStack_1b8);
      nop();
      std::string::string(asStack_1b8,"s");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b8);
      INetworkMsgProcess::GetClientSignature((string *)this);
      FUN_05474278(uVar5,asStack_1b0);
      std::string::~string(asStack_1b0);
      std::string::~string(asStack_1b8);
      nop();
      iVar3 = LawnApp::IsAndroidSDKInitEnd(gLawnApp);
      if ((iVar3 == 1) && (iVar3 = LawnApp::GetAndroidSDKInitStatus(gLawnApp), iVar3 == 0)) {
        p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_rightmost(p_Var7);
        PurchaseBroker::GetUniqueID();
        __n = asStack_1c0;
        std::string::string(asStack_1b0,"oi");
        this_06 = (string *)
                  std::
                  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                  ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                                *)asStack_1a8,asStack_1b0);
        __s = (char *)FUN_0547429c(asStack_1b8);
        std::string::append(this_06,__s,(size_t)__n);
        std::string::~string(asStack_1b0);
        nop();
        std::string::~string(asStack_1b8);
      }
      this_04 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      uVar11 = 1;
      PVPManager::GetProductVersion(this_04);
      uVar5 = FUN_0547429c(asStack_1b0);
      uVar8 = Android::Info::SysGetProductVersionCode();
      Sexy::StrFormat("%s.%d",asStack_1c0,uVar5,uVar8 & 0xffffffff);
      std::string::~string(asStack_1b0);
      std::string::string(asStack_1b0,"cv");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      thunk_FUN_05475e00(uVar5,asStack_1c0);
      std::string::~string(asStack_1b0);
      nop();
      uVar8 = Android::Info::SysGetProductVersionCode();
      uVar5 = FUN_0547429c(asStack_1c0);
      Sexy::OutputDebugStrF
                ((wchar_t *)"androidNetworkMsgProcess::ICloudRequstLogin %d, fullVersionString = %s"
                 ,uVar8 & 0xffffffff,uVar5);
      std::string::string(asStack_1b0,"");
      FUN_05462980(aDStack_178,asStack_1b0);
      std::string::~string(asStack_1b0);
      nop();
      uVar2 = LawnApp::GetPlatform(gLawnApp);
      FUN_0546065c(auStack_168,uVar2);
      std::string::string(asStack_1b8,"ci");
      uVar5 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b8);
      FUN_05462824(asStack_1b0,aDStack_178);
      FUN_05474278(uVar5,asStack_1b0);
      std::string::~string(asStack_1b0);
      std::string::~string(asStack_1b8);
      nop();
      *(undefined4 *)(this + 8) = 1;
      Sexy::OutputDebugStrF((wchar_t *)"NetworkMsgProcess m_ICIoudState = Send_Request");
      pcVar12 = *(code **)(*(long *)this + 0x40);
      std::string::string(asStack_1b0,"[NET_CONNECTING]");
      (*pcVar12)(this,(map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                       *)asStack_1a8,1,asStack_1b0,0,0);
      std::string::~string(asStack_1b0);
      nop();
      std::string::~string(asStack_1c0);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)asStack_1a8);
      FUN_054617bc(aDStack_178);
    }
  }
LAB_031e7714:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestGetProfile() */

void __thiscall androidNetworkMsgProcess::ICloudRequestGetProfile(androidNetworkMsgProcess *this)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x28) == INetworkMsgProcess::IsLogined) {
    cVar1 = INetworkMsgProcess::IsLogined((INetworkMsgProcess *)this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x28))();
  }
  cVar2 = '\0';
  if (cVar1 != '\0') {
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    uVar4 = (**(code **)(*(long *)this + 0x408))(this);
    thunk_FUN_05460424(auStack_168,uVar4);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x1b8);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    cVar2 = INetworkMsgProcess::isSessionKeyValid((INetworkMsgProcess *)this);
    if (cVar2 != '\0') {
      pcVar5 = *(code **)(*(long *)this + 0x40);
      std::string::string(asStack_1b0,"[NET_CONNECTING]");
      (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
      std::string::~string(asStack_1b0);
      nop();
    }
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
    FUN_054617bc(auStack_178);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* androidNetworkMsgProcess::ICloudRequestUpLoadProfile(std::string const&, std::string const&,
   std::string const&, bool) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestUpLoadProfile
          (androidNetworkMsgProcess *this,string *param_1,string *param_2,string *param_3,
          bool param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uchar *__ptr;
  uchar *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong local_1d0;
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x28) == INetworkMsgProcess::IsLogined) {
    cVar1 = INetworkMsgProcess::IsLogined((INetworkMsgProcess *)this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x28))();
  }
  bVar2 = false;
  if ((cVar1 != '\0') && (bVar2 = false, this[0xe38] != (androidNetworkMsgProcess)0x0)) {
    local_1d0 = 0xf000;
    __ptr = malloc(0xf000);
    std::string::string(asStack_1c0,"\"");
    bVar2 = false;
    puVar6 = (uchar *)FUN_0547429c(param_1);
    uVar3 = FUN_05474178(param_1);
    base64_url_safe(puVar6,uVar3);
    std::operator+(asStack_1c0,asStack_1b8);
    std::string::string(asStack_1a8,"\"");
    std::operator+(asStack_1b0,asStack_1a8);
    std::string::~string(asStack_1a8);
    nop();
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    std::string::~string(asStack_1c0);
    nop();
    puVar6 = (uchar *)FUN_0547429c(asStack_1c8);
    uVar7 = FUN_05474178(asStack_1c8);
    iVar4 = gzcompress(puVar6,uVar7,__ptr,&local_1d0);
    if (iVar4 == 0) {
      uVar5 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar5);
      uVar8 = (**(code **)(*(long *)this + 0x408))(this);
      thunk_FUN_05460424(auStack_168,uVar8);
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)asStack_1a8);
      std::string::string(asStack_1b0,"req");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      thunk_FUN_05475e00(uVar8,this + 0x1d0);
      std::string::~string(asStack_1b0);
      nop();
      std::string::string(asStack_1b0,"ui");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      thunk_FUN_05475e00(uVar8,this + 0x10);
      std::string::~string(asStack_1b0);
      nop();
      std::string::string(asStack_1b0,"sk");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      thunk_FUN_05475e00(uVar8,this + 0x18);
      std::string::~string(asStack_1b0);
      nop();
      std::string::string(asStack_1b8,"pr");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b8);
      base64_url_safe(__ptr,(uint)local_1d0);
      FUN_05474278(uVar8,asStack_1b0);
      std::string::~string(asStack_1b0);
      std::string::~string(asStack_1b8);
      nop();
      std::string::string(asStack_1b0,"m");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b0);
      thunk_FUN_05475e00(uVar8,param_2);
      std::string::~string(asStack_1b0);
      nop();
      std::string::string(asStack_1b8,"s");
      uVar8 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_1a8,asStack_1b8);
      puVar6 = (uchar *)FUN_0547429c(param_3);
      uVar3 = FUN_05474184(param_3);
      base64_url_safe(puVar6,uVar3);
      FUN_05474278(uVar8,asStack_1b0);
      std::string::~string(asStack_1b0);
      std::string::~string(asStack_1b8);
      nop();
      cVar1 = INetworkMsgProcess::isSessionKeyValid((INetworkMsgProcess *)this);
      bVar2 = cVar1 != '\0';
      if (bVar2) {
        pcVar9 = *(code **)(*(long *)this + 0x40);
        std::string::string(asStack_1b0,"[NET_CONNECTING]");
        (*pcVar9)(this,asStack_1a8,param_4,asStack_1b0,0,0);
        std::string::~string(asStack_1b0);
        nop();
      }
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)asStack_1a8);
      FUN_054617bc(auStack_178);
    }
    free(__ptr);
    std::string::~string(asStack_1c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::UploadDangerRoomRank(int, int, int, int, int, int, int) */

void __thiscall
androidNetworkMsgProcess::UploadDangerRoomRank
          (androidNetworkMsgProcess *this,int param_1,int param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x1e8);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"s");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_2);
  std::string::string(asStack_1b8,"w");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_3);
  std::string::string(asStack_1b8,"t");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_4);
  std::string::string(asStack_1b8,"a");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_5);
  std::string::string(asStack_1b8,"i");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_6);
  std::string::string(asStack_1b8,"spt");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_7);
  std::string::string(asStack_1b8,"lss");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,1,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestDangerRoomRank(int) */

void __thiscall
androidNetworkMsgProcess::RequestDangerRoomRank(androidNetworkMsgProcess *this,int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x1f0);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b8,"pr");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar3 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar3)(this,amStack_1a8,1,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestGetRedPackLeaderBoard() */

void __thiscall
androidNetworkMsgProcess::RequestGetRedPackLeaderBoard(androidNetworkMsgProcess *this)

{
  undefined8 uVar1;
  code *pcVar2;
  string asStack_70 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  string asStack_38 [8];
  undefined1 auStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  std::string::string(asStack_38,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_68,asStack_38);
  thunk_FUN_05475e00(uVar1,this + 0x1f8);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_68,asStack_38);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_38);
  nop();
  std::string::string(asStack_38,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_68,asStack_38);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_38);
  nop();
  _NetworkEventConfig::_NetworkEventConfig((_NetworkEventConfig *)asStack_38);
  std::string::string(asStack_70,"exurl");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_68,asStack_70);
  thunk_FUN_05475e00(uVar1,auStack_30);
  std::string::~string(asStack_70);
  nop();
  pcVar2 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_70,"[NET_CONNECTING]");
  (*pcVar2)(this,amStack_68,0,asStack_70,0,0);
  std::string::~string(asStack_70);
  nop();
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)asStack_38);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestProfileMd5() */

void __thiscall androidNetworkMsgProcess::ICloudRequestProfileMd5(androidNetworkMsgProcess *this)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 0x28) == INetworkMsgProcess::IsLogined) {
    cVar1 = INetworkMsgProcess::IsLogined((INetworkMsgProcess *)this);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x28))();
  }
  cVar2 = '\0';
  if (cVar1 != '\0') {
    uVar3 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar3);
    uVar4 = (**(code **)(*(long *)this + 0x408))(this);
    thunk_FUN_05460424(auStack_168,uVar4);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x1c8);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar4 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar4,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    cVar2 = INetworkMsgProcess::isSessionKeyValid((INetworkMsgProcess *)this);
    if (cVar2 != '\0') {
      pcVar5 = *(code **)(*(long *)this + 0x40);
      std::string::string(asStack_1b0,"[NET_CONNECTING]");
      (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
      std::string::~string(asStack_1b0);
      nop();
    }
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
    FUN_054617bc(auStack_178);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestGetExploreTeamStatus() */

void __thiscall
androidNetworkMsgProcess::ICloudRequestGetExploreTeamStatus(androidNetworkMsgProcess *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::OpenPlantAdventure,false);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExploreTeamStatus,false);
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1b0,"req");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar3,this + 0x2b0);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar3,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
  FUN_0546065c(auStack_168,uVar2);
  std::string::string(asStack_1b8,"pi");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar3,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar3,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  pcVar5 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestGetExplorePlantStatus(int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestGetExplorePlantStatus
          (androidNetworkMsgProcess *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<int,bool,int,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExplorePlantStatus,param_1,false);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x2b8);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(asStack_1b8,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_1);
    std::string::string(asStack_1b8,"wi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestStartExplore(std::vector<int, std::allocator<int> >
   const&, int, int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestStartExplore
          (androidNetworkMsgProcess *this,vector *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::StartExplore,false);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x2c0);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(asStack_1b8,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_2);
    std::string::string(asStack_1b8,"wi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b8,"pl");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_031debbc(asStack_1b0,param_1);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_3);
    std::string::string(asStack_1b8,"ic");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestStopExplore(int, int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestStopExplore
          (androidNetworkMsgProcess *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)gMessageRouter,Message::StopExplore,param_1,-1,false);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x2c8);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(asStack_1b8,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_1);
    std::string::string(asStack_1b8,"wi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_2);
    std::string::string(asStack_1b8,"f");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestCalcExploreReward(int, bool) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestCalcExploreReward
          (androidNetworkMsgProcess *this,int param_1,bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GotExploreReward,false);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x2d0);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(asStack_1b8,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_1);
    std::string::string(asStack_1b8,"wi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_2);
    std::string::string(asStack_1b8,"ad");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestOpenExploreSurpriseBox(int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestOpenExploreSurpriseBox
          (androidNetworkMsgProcess *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExploreSurprise,false);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x2d8);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(asStack_1b8,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_1);
    std::string::string(asStack_1b8,"wi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestRecoverExplorePlant(int, int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestRecoverExplorePlant
          (androidNetworkMsgProcess *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::RecoverExplorePlant,false);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x2e0);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(asStack_1b8,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_2);
    std::string::string(asStack_1b8,"f");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_1);
    std::string::string(asStack_1b8,"pli");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestSyncWithIdAndSource(int, int, std::string, int) */

void androidNetworkMsgProcess::ICloudRequestSyncWithIdAndSource
               (long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *pPVar4;
  long lVar5;
  PlayerInfo *this;
  string *this_00;
  NetworkCacheQueue *pNVar6;
  string *this_01;
  code *pcVar7;
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    pNVar6 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue();
    FUN_05475d88((string *)amStack_1a8,param_4);
    NetworkCacheQueue::insertCachedObject(pNVar6,param_2,param_3,(string *)amStack_1a8);
    std::string::~string((string *)amStack_1a8);
    INetworkMsgProcess::SaveCache();
  }
  else {
    this_01 = asStack_1b8;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,param_1 + 0x54);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,param_1 + 2);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,param_1 + 3);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar5 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(this_01,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,this_01);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(this_01);
    nop();
    std::string::string(asStack_1c0,"o");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1c0);
    FUN_05475d88(this_01,param_4);
    getObjectJsons(asStack_1b0,param_1,param_2,param_3,this_01);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(this_01);
    std::string::~string(asStack_1c0);
    nop();
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    PlayerInfo::increaseUploadKey(this);
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    uVar2 = FUN_031db2b4(*(undefined4 *)(lVar5 + 0xdd0));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(this_01,"uk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,this_01);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(this_01);
    nop();
    std::string::string(asStack_1b0,"nfc");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_1a8,asStack_1b0);
    std::string::append(this_00,"1",(size_t)this_01);
    std::string::~string(asStack_1b0);
    nop();
    pcVar7 = *(code **)(*param_1 + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar7)(param_1,amStack_1a8,0,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestSyncWithNameAndSource(std::string const&, int,
   std::string, int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestSyncWithNameAndSource
          (androidNetworkMsgProcess *this,string *param_1,undefined4 param_2,undefined8 param_4,
          undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0xbc0;
  bVar1 = std::operator==(param_1,"gems");
  if (bVar1) goto LAB_031eac18;
  pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsName(pNVar4,param_1);
  if (cVar2 == '\0') {
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,param_1);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,param_1);
      goto LAB_031eac18;
    }
    pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,param_1);
    if (cVar2 == '\0') {
      pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsName(pNVar4,param_1);
      uVar3 = 0;
      if (cVar2 != '\0') {
        pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
        uVar3 = NameMapperBase::GetIdForName(pNVar4,param_1);
      }
      goto LAB_031eac18;
    }
  }
  pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  uVar3 = NameMapperBase::GetIdForName(pNVar4,param_1);
LAB_031eac18:
  FUN_05475d88(asStack_10,param_4);
  ICloudRequestSyncWithIdAndSource(this,uVar3,param_2,asStack_10,param_5);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestSyncObjectListWithSource(std::vector<NetworkCacheObjects,
   std::allocator<NetworkCacheObjects> > const&) */

void androidNetworkMsgProcess::ICloudRequestSyncObjectListWithSource(vector *param_1)

{
  vector vVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *pPVar4;
  long lVar5;
  PlayerInfo *this;
  string *this_00;
  string *this_01;
  vector vVar6;
  code *pcVar7;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  vVar1 = (vector)LawnApp::IsNetworkModuleOK();
  vVar6 = vVar1;
  if ((vVar1 != (vector)0x0) && (vVar6 = param_1[0xe55], vVar6 == (vector)0x0)) {
    param_1[0xe55] = (vector)0x1;
    this_01 = asStack_1b8;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,param_1 + 0x2a0);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,param_1 + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,param_1 + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar5 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(this_01,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,this_01);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(this_01);
    nop();
    std::string::string(this_01,"o");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,this_01);
    getObjectJsons(param_1);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(this_01);
    nop();
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    PlayerInfo::increaseUploadKey(this);
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(pPVar4);
    uVar2 = FUN_031db2b4(*(undefined4 *)(lVar5 + 0xdd0));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(this_01,"uk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,this_01);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(this_01);
    nop();
    std::string::string(asStack_1b0,"nfc");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_1a8,asStack_1b0);
    std::string::append(this_00,"1",(size_t)this_01);
    std::string::~string(asStack_1b0);
    nop();
    pcVar7 = *(code **)(*(long *)param_1 + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar7)(param_1,amStack_1a8,0,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
    vVar6 = vVar1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(vVar6);
  }
  return;
}


/* androidNetworkMsgProcess::IRequestFlushCacheObjects() */

undefined8 __thiscall
androidNetworkMsgProcess::IRequestFlushCacheObjects(androidNetworkMsgProcess *this)

{
  GachaConfig *this_00;
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (this[0xe55] == (androidNetworkMsgProcess)0x0) {
    this_00 = (GachaConfig *)INetworkMsgProcess::GetNetworkCacheQueue();
    puVar1 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(this_00);
    uVar3 = 1;
    lVar2 = FUN_031db2ec(*puVar1,puVar1[1]);
    if (lVar2 != 0) {
      ICloudRequestSyncObjectListWithSource((vector *)this);
      return 1;
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::RequestADSReward() */

void __thiscall androidNetworkMsgProcess::RequestADSReward(androidNetworkMsgProcess *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ProfileMgr *pPVar3;
  long lVar4;
  PlayerInfo *this_00;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x598);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
  uVar1 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
  FUN_0546065c(auStack_168,uVar1);
  std::string::string(asStack_1b8,"pi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  PlayerInfo::increaseUploadKey(this_00);
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
  uVar1 = FUN_031db2b4(*(undefined4 *)(lVar4 + 0xdd0));
  FUN_0546065c(auStack_168,uVar1);
  std::string::string(asStack_1b8,"uk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  pcVar5 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::UploadIdentification(std::string const&, std::string const&, bool) */

void __thiscall
androidNetworkMsgProcess::UploadIdentification
          (androidNetworkMsgProcess *this,string *param_1,string *param_2,bool param_3)

{
  string *psVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  EASquaredImpl *this_02;
  DefineIDMgr *pDVar6;
  code *pcVar7;
  undefined4 local_1cc;
  string asStack_1c8 [8];
  string asStack_1c0 [8];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1b0,"req");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar5,this + 0x248);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar5,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar4 = FUN_031db2b0(*(undefined4 *)(this_01 + 0x604));
  FUN_0546065c(auStack_168,uVar4);
  std::string::string(asStack_1b8,"pi");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar5,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar5,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"i");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar5,param_1);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"n");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar5,param_2);
  std::string::~string(asStack_1b0);
  nop();
  if (param_3) {
    this_02 = (EASquaredImpl *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    cVar2 = EASquaredImpl::IsEnabledForUser(this_02);
    pDVar6 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
    DefineIDMgr::GetUserDefineID(pDVar6);
    cVar3 = FUN_0547419c(asStack_1c8);
    if (cVar3 != '\0') {
      pDVar6 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
      DefineIDMgr::GetNewUserDefineID(pDVar6);
      FUN_05474278(asStack_1c8,asStack_1b0);
      std::string::~string(asStack_1b0);
    }
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::IAsyncNetworkTask::GetName();
    std::string::string(asStack_1b0,"did");
    uVar5 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    psVar1 = asStack_1c0;
    if (cVar2 == '\0') {
      psVar1 = asStack_1c8;
    }
    thunk_FUN_05475e00(uVar5,psVar1);
    std::string::~string(asStack_1b0);
    nop();
    local_1cc = PlayerInfo::GetNumRechargeCurrency(this_01);
    std::string::string(asStack_1b8,"ps");
    uVar5 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1cc);
    FUN_05474278(uVar5,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::~string(asStack_1c0);
    std::string::~string(asStack_1c8);
  }
  pcVar7 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar7)(this,amStack_1a8,1,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestChristmasLottery() */

void __thiscall
androidNetworkMsgProcess::ICloudRequestChristmasLottery(androidNetworkMsgProcess *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ProfileMgr *this_00;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    MessageRouter::Post<bool,int,int,bool,int,int>
              ((MessageRouter *)gMessageRouter,Message::GotChristmasLottery,false,0,0);
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_1a8);
    std::string::string(asStack_1b0,"req");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x2e8);
    std::string::~string(asStack_1b0);
    nop();
    std::string::string(asStack_1b0,"ui");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x10);
    std::string::~string(asStack_1b0);
    nop();
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    uVar2 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
    FUN_0546065c(auStack_168,uVar2);
    std::string::string(asStack_1b8,"pi");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar3,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
    std::string::string(asStack_1b0,"sk");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b0);
    thunk_FUN_05475e00(uVar3,this + 0x18);
    std::string::~string(asStack_1b0);
    nop();
    pcVar5 = *(code **)(*(long *)this + 0x40);
    std::string::string(asStack_1b0,"[NET_CONNECTING]");
    (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_054617bc(auStack_178);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_1a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestChargeReward(int, int, int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestChargeReward
          (androidNetworkMsgProcess *this,int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ProfileMgr *pPVar3;
  long lVar4;
  code *pcVar5;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1a8);
  std::string::string(asStack_1b0,"req");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x2f8);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"ui");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x10);
  std::string::~string(asStack_1b0);
  nop();
  std::string::string(asStack_1b0,"sk");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b0);
  thunk_FUN_05475e00(uVar2,this + 0x18);
  std::string::~string(asStack_1b0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar4 = ProfileMgr::GetCurrentProfile(pPVar3);
  uVar1 = FUN_031db2b0(*(undefined4 *)(lVar4 + 0x604));
  FUN_0546065c(auStack_168,uVar1);
  std::string::string(asStack_1b8,"pi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  FUN_0544a0a4(auStack_110,0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar3);
  PlayerInfo::GetLastPurchaseReceiptMD5();
  FUN_0545ec84(auStack_168,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::string(asStack_1b8,"m");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  FUN_0544a0a4(auStack_110,0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_1);
  std::string::string(asStack_1b8,"t");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  FUN_0544a0a4(auStack_110,0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,param_2);
  std::string::string(asStack_1b8,"i");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  FUN_0544a0a4(auStack_110,0);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_0546065c(auStack_168,*(undefined4 *)(gLawnApp + 0x2980));
  std::string::string(asStack_1b8,"rv");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_1a8,asStack_1b8);
  FUN_05462824(asStack_1b0,auStack_178);
  FUN_05474278(uVar2,asStack_1b0);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  nop();
  if (param_3 != -1) {
    FUN_0544a0a4(auStack_110,0);
    std::string::string(asStack_1b0,"");
    FUN_05462980(auStack_178,asStack_1b0);
    std::string::~string(asStack_1b0);
    nop();
    FUN_0546065c(auStack_168,param_3);
    std::string::string(asStack_1b8,"s");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_1a8,asStack_1b8);
    FUN_05462824(asStack_1b0,auStack_178);
    FUN_05474278(uVar2,asStack_1b0);
    std::string::~string(asStack_1b0);
    std::string::~string(asStack_1b8);
    nop();
  }
  pcVar5 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_1b0,"[NET_CONNECTING]");
  (*pcVar5)(this,amStack_1a8,1,asStack_1b0,0,0);
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestBindingUniqueID(std::string const&, std::string const&) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestBindingUniqueID
          (androidNetworkMsgProcess *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  DefineIDMgr *this_00;
  string *psVar2;
  char *__s;
  string *psVar3;
  code *pcVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_40,"req");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x300);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_48,"di");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  this_00 = (DefineIDMgr *)Sexy::LazySingleton<DefineIDMgr>::GetInstance();
  DefineIDMgr::GetNewUserDefineID(this_00);
  FUN_05474278(uVar1,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  std::string::string(asStack_40,"ui");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x10);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"sk");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(uVar1,this + 0x18);
  std::string::~string(asStack_40);
  nop();
  psVar3 = asStack_48;
  std::string::string(asStack_40,"pi");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar2,"",(size_t)psVar3);
  std::string::~string(asStack_40);
  nop();
  psVar3 = asStack_48;
  std::string::string(asStack_40,"t");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar2,"",(size_t)psVar3);
  std::string::~string(asStack_40);
  nop();
  psVar3 = asStack_48;
  std::string::string(asStack_40,"oi");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  __s = (char *)FUN_0547429c(param_2);
  std::string::append(psVar2,__s,(size_t)psVar3);
  std::string::~string(asStack_40);
  nop();
  if (this[0xe57] != (androidNetworkMsgProcess)0x0) {
    std::string::string(asStack_48,"uuid");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_38,asStack_48);
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::IAsyncNetworkTask::GetName();
    FUN_05474278(uVar1,asStack_40);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    nop();
  }
  pcVar4 = *(code **)(*(long *)this + 0x40);
  std::string::string(asStack_40,"[NET_CONNECTING]");
  (*pcVar4)(this,amStack_38,0,asStack_40,0,0);
  std::string::~string(asStack_40);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::ICloudRequestAccessoryStatBuy(int) */

void __thiscall
androidNetworkMsgProcess::ICloudRequestAccessoryStatBuy(androidNetworkMsgProcess *this,int param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ActivityConfig *this_02;
  int extraout_var;
  int extraout_var_00;
  NameMapperBase *pNVar7;
  undefined8 uVar8;
  DailyAccessoryBonusUI *pDVar9;
  int extraout_w1;
  int extraout_w1_00;
  bool bVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = LawnApp::GetRealBeijingTime(gLawnApp);
  bVar10 = false;
  if (0 < lVar6) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
    if ((this_02 != (ActivityConfig *)0x0) && (this_01 != (PlayerInfo *)0x0)) {
      iVar3 = PlayerInfo::GetChristmasAccessoryChances(this_01,param_1);
      if (iVar3 < 1) {
        MessageRouter::Post<bool,bool>
                  ((MessageRouter *)gMessageRouter,Message::ChristmasAccessoryBought,false);
        uVar8 = 0;
        goto LAB_031ec5a8;
      }
      iVar4 = PlayerInfo::GetChristmasAccessoryIndex(this_01,param_1,0);
      iVar5 = PlayerInfo::GetChristmasAccessoryIndex(this_01,param_1,1);
      ActivityConfig::GetChristmasAccessoryIdByIndex(this_02,param_1,iVar4);
      ActivityConfig::GetChristmasAccessoryIdByIndex(this_02,param_1,iVar5);
      ActivityConfig::GetChristmasAccessoryIdByIndex(this_02,param_1,iVar4);
      ActivityConfig::GetChristmasAccessoryIdByIndex(this_02,param_1,iVar5);
      pNVar7 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar7,extraout_var);
      if (cVar2 != '\0') {
        iVar4 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar4);
        PlayerInfo::AddAccessoryPieceCount(this_01,(string *)local_20,extraout_w1,true);
        pLVar1 = gLawnApp;
        cVar2 = LawnApp::IsAccessoryBonusUIValid(gLawnApp);
        if (cVar2 != '\0') {
          pDVar9 = (DailyAccessoryBonusUI *)LawnApp::GetAccessoryBonusUI(pLVar1);
          DailyAccessoryBonusUI::AddBonus(pDVar9,extraout_var,extraout_w1,1);
        }
        std::string::~string((string *)local_20);
      }
      pNVar7 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar7,extraout_var_00);
      if (cVar2 != '\0') {
        iVar4 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar4);
        PlayerInfo::AddAccessoryPieceCount(this_01,(string *)local_20,extraout_w1_00,true);
        pLVar1 = gLawnApp;
        cVar2 = LawnApp::IsAccessoryBonusUIValid(gLawnApp);
        if (cVar2 != '\0') {
          pDVar9 = (DailyAccessoryBonusUI *)LawnApp::GetAccessoryBonusUI(pLVar1);
          DailyAccessoryBonusUI::AddBonus(pDVar9,extraout_var_00,extraout_w1_00,2);
        }
        std::string::~string((string *)local_20);
      }
      iVar4 = 2;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_38);
      while( true ) {
        local_20[0] = ActivityConfig::RollChristmasAccessoryIndex(this_02,param_1);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_38,(int *)local_20);
        if (iVar4 == 1) break;
        iVar4 = 1;
      }
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)local_20,(vector *)avStack_38);
      PlayerInfo::ResetChristmasAccessoryIndex
                (this_01,param_1,(vector<int,std::allocator<int>> *)local_20,0);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
      PlayerInfo::SetChristmasAccessoryChances(this_01,param_1,iVar3 + -1,false);
      PlayerInfo::SAVE_PROFILE(this_01);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
    }
    bVar10 = true;
  }
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::ChristmasAccessoryBought,bVar10);
  uVar8 = 1;
LAB_031ec5a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRquestPlayerInfo(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRquestPlayerInfo(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  PlayerInfo *this_00;
  S2C_PlayerInfo aSStack_58 [52];
  int local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_PlayerInfo::S2C_PlayerInfo(aSStack_58);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_58,(string *)param_1);
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    if (this_00 != (PlayerInfo *)0x0) {
      PlayerInfo::SetGems(this_00,local_24);
    }
    S2C_PlayerInfo::~S2C_PlayerInfo(aSStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestGetExploreTeamStatus(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestGetExploreTeamStatus
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  S2C_Explore_Team *pSVar4;
  undefined8 local_148;
  undefined8 local_140;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_138 [24];
  S2C_ExplorerTeamStatus aSStack_120 [32];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_100 [24];
  S2C_Explore_Team local_e8;
  undefined1 local_e7;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  vector<int,std::allocator<int>> avStack_b8 [24];
  S2C_Explore_Team aSStack_a0 [36];
  int local_7c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  vector avStack_28 [24];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ExplorerTeamStatus::S2C_ExplorerTeamStatus(aSStack_120);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_120,(string *)param_1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      FUN_031db2a4(this_01 + 0x350,0);
      PlayerInfo::RemoveAllAdventure(this_01,false,false,true);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_138);
      local_148 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(avStack_100);
      local_140 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_100);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_148,(__normal_iterator *)&local_140),
            bVar3) {
        pSVar4 = (S2C_Explore_Team *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_148);
        S2C_Explore_Team::S2C_Explore_Team((S2C_Explore_Team *)&local_58,pSVar4);
        PlantAdventureInfo::PlantAdventureInfo((PlantAdventureInfo *)&local_e8);
        iVar1 = local_54;
        uVar2 = local_4c - 2;
        PlayerInfo::SetPlantAdventureState(this_01,local_54,local_4c,local_50,true,local_10);
        if (uVar2 < 2) {
          local_e7 = 0 < local_3c;
          local_e8 = (S2C_Explore_Team)0x1;
          local_e0 = local_38;
          local_c8 = local_30;
          local_dc = local_48;
          local_d8 = local_44;
          local_d4 = local_40;
          local_d0 = local_34;
          local_cc = local_3c;
          local_c0 = local_58;
          local_e4 = iVar1;
          PlayerInfo::GetPlantAdventureInfo((int)this_01);
          iVar1 = local_7c;
          S2C_Explore_Team::~S2C_Explore_Team(aSStack_a0);
          if (iVar1 < 1) {
            iVar1 = local_c0 + 0x3c;
            local_c4 = Sexy::Rand(0x1518);
            local_c4 = iVar1 - local_c4;
          }
          else {
            local_c4 = iVar1;
          }
          std::vector<int,std::allocator<int>>::operator=(avStack_b8,avStack_28);
          std::vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>>::push_back
                    ((vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>> *)avStack_138,
                     (PlantAdventureInfo *)&local_e8);
        }
        S2C_Explore_Team::~S2C_Explore_Team(&local_e8);
        S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)&local_58);
        std::move_iterator<RappellingZombieInfo*>::operator++
                  ((move_iterator<RappellingZombieInfo*> *)&local_148);
      }
      PlayerInfo::RemoveAllAdventure(this_01,true,true,false);
      std::vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>>::vector
                ((vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>> *)&local_58,
                 (vector *)avStack_138);
      PlayerInfo::SetPlantAdventureInfos(this_01,(S2C_Explore_Team *)&local_58);
      std::vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>>::~vector
                ((vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>> *)&local_58);
      FUN_031db2a4(this_01 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_01);
      std::vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>>::~vector
                ((vector<PlantAdventureInfo,std::allocator<PlantAdventureInfo>> *)avStack_138);
    }
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::OpenPlantAdventure,true)
    ;
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExploreTeamStatus,true);
    S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus(aSStack_120);
  }
  else {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::OpenPlantAdventure,false);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExploreTeamStatus,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestChristmasLottery(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestChristmasLottery
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  S2C_ChristmasLottery aSStack_80 [20];
  int local_6c;
  int local_68;
  int local_64;
  int local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ChristmasLottery::S2C_ChristmasLottery(aSStack_80);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_80,(string *)param_1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      FUN_031db2a4(this_01 + 0x350,0);
      PlayerInfo::SetGems(this_01,local_24);
      PlayerInfo::SetChristmasLotteryPlantIndex(this_01,local_6c);
      FUN_031db2a4(this_01 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_01);
    }
    MessageRouter::Post<bool,int,int,bool,int,int>
              ((MessageRouter *)gMessageRouter,Message::GotChristmasLottery,true,local_68,local_64);
    S2C_ChristmasLottery::~S2C_ChristmasLottery(aSStack_80);
  }
  else {
    MessageRouter::Post<bool,int,int,bool,int,int>
              ((MessageRouter *)gMessageRouter,Message::GotChristmasLottery,false,0,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestProfile(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestProfile(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  S2C_LoadPlayerProfile aSStack_e0 [216];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_LoadPlayerProfile::S2C_LoadPlayerProfile(aSStack_e0);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_e0,(string *)param_1);
    ProfileUtils::Profile();
    S2C_LoadPlayerProfile::~S2C_LoadPlayerProfile(aSStack_e0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onRequestUUIDBind(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestUUIDBind(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  S2C_UUID_BindResult aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_UUID_BindResult::S2C_UUID_BindResult(aSStack_28);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_28,(string *)param_1);
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyUUIDBind,true);
    S2C_UUID_BindResult::~S2C_UUID_BindResult(aSStack_28);
  }
  else {
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyUUIDBind,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onRequestUUIDInit(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestUUIDInit(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined *puVar1;
  string asStack_40 [8];
  string asStack_38 [8];
  S2C_UUID_InitResult aSStack_30 [24];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_UUID_InitResult::S2C_UUID_InitResult(aSStack_30);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_30,(string *)param_1);
    puVar1 = gMessageRouter;
    FUN_05475d88(asStack_40,auStack_18);
    FUN_05475d88(asStack_38,auStack_10);
    MessageRouter::
    Broadcast<bool,std::string_const&,std::string_const&,bool,std::string,std::string>
              ((MessageRouter *)puVar1,Message::NotifyUUIDInit,1,asStack_40,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    S2C_UUID_InitResult::~S2C_UUID_InitResult(aSStack_30);
  }
  else {
    MessageRouter::
    Broadcast<bool,std::string_const&,std::string_const&,bool,char_const*,char_const*>
              ((MessageRouter *)gMessageRouter,Message::NotifyUUIDInit,false,"","");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onRequestUUIDCheck(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestUUIDCheck(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  string asStack_30 [8];
  S2C_UUID_CheckResult aSStack_28 [24];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_UUID_CheckResult::S2C_UUID_CheckResult(aSStack_28);
  PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aSStack_28,(string *)param_1);
  puVar2 = gMessageRouter;
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_05475d88(asStack_30,auStack_10);
  MessageRouter::Broadcast<int,std::string_const&,int,std::string>
            ((MessageRouter *)puVar2,Message::NotifyUUIDCheck,uVar1,asStack_30);
  std::string::~string(asStack_30);
  S2C_UUID_CheckResult::~S2C_UUID_CheckResult(aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onInitPurchaseOrder(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onInitPurchaseOrder(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  string asStack_40 [8];
  string asStack_38 [8];
  S2C_Purchase_InitResult aSStack_30 [24];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_Purchase_InitResult::S2C_Purchase_InitResult(aSStack_30);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_30,(string *)param_1);
    puVar2 = gMessageRouter;
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_05475d88(asStack_40,auStack_18);
    FUN_05475d88(asStack_38,auStack_10);
    MessageRouter::Post<int,std::string_const&,std::string_const&,int,std::string,std::string>
              ((MessageRouter *)puVar2,Message::NotifyPurchaseInit,uVar1,asStack_40,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    S2C_Purchase_InitResult::~S2C_Purchase_InitResult(aSStack_30);
  }
  else {
    MessageRouter::Post<int,std::string_const&,std::string_const&,int,char_const*,char_const*>
              ((MessageRouter *)gMessageRouter,Message::NotifyPurchaseInit,*(int *)(param_1 + 8),"",
               "");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestUpdateChargeInfo(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestUpdateChargeInfo
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  PlayerInfo *this_00;
  string asStack_48 [8];
  string asStack_40 [8];
  S2C_Purchase_ValidateResult aSStack_38 [32];
  undefined1 auStack_18 [8];
  undefined4 local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_Purchase_ValidateResult::S2C_Purchase_ValidateResult(aSStack_38);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_38,(string *)param_1);
    if ((0 < local_c) &&
       (this_00 = (PlayerInfo *)ProfileUtils::Profile(), puVar2 = gMessageRouter,
       this_00 != (PlayerInfo *)0x0)) {
      iVar3 = PlayerInfo::GetNumRechargeCurrency(this_00);
      MessageRouter::Post<int,int>
                ((MessageRouter *)puVar2,Message::RechargeRewardCurrencyChanged,iVar3);
    }
    puVar2 = gMessageRouter;
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_05475d88(asStack_40,auStack_18);
    MessageRouter::Post<int,std::string_const&,int,int,std::string,int>
              ((MessageRouter *)puVar2,Message::NotifyPurchaseValidation,uVar1,asStack_40,local_10);
    std::string::~string(asStack_40);
    std::string::string(asStack_48,"ValidateChargeFinish");
    FUN_05475d88(asStack_40,auStack_18);
    Cpp2Lua<std::string>(asStack_48,asStack_40);
    std::string::~string(asStack_40);
    std::string::~string(asStack_48);
    nop();
    S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult(aSStack_38);
  }
  else {
    MessageRouter::Post<int,std::string_const&,int,int,char_const*,int>
              ((MessageRouter *)gMessageRouter,Message::NotifyPurchaseValidation,
               *(int *)(param_1 + 8),"",-1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestFreshGems(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestFreshGems(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  S2C_SubGemRequest aSStack_20 [20];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_SubGemRequest::S2C_SubGemRequest(aSStack_20);
  PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aSStack_20,(string *)param_1);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::SetGems(this_01,local_c);
    }
  }
  LawnApp::WaitingGemCallBack(gLawnApp,iVar1 == 0);
  S2C_SubGemRequest::~S2C_SubGemRequest(aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestLogin(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestLogin(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  SocialMgr *this_00;
  PlayerInfo *this_01;
  string asStack_1a8 [8];
  S2C_AuthInfo aSStack_1a0 [20];
  int local_18c;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF
            ((wchar_t *)"===============================   OnRequestLogin----------[%s]\n",uVar2);
  S2C_AuthInfo::S2C_AuthInfo(aSStack_1a0);
  PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aSStack_1a0,(string *)param_1)
  ;
  this_00 = (SocialMgr *)Sexy::LazySingleton<SocialMgr>::GetInstance();
  SocialMgr::UpdateAuthInfo(this_00,aSStack_1a0);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,local_18c);
  FUN_05462824(asStack_1a8,auStack_178);
  FUN_05474278(this + 0x10,asStack_1a8);
  std::string::~string(asStack_1a8);
  thunk_FUN_05475e00(this + 0x18,auStack_188);
  this_01 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::SetProfileId(this_01,local_18c);
  }
  RequestPlayInfo(this);
  (**(code **)(*(long *)this + 0x410))(this);
  FUN_054617bc(auStack_178);
  S2C_AuthInfo::~S2C_AuthInfo(aSStack_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestIncreaseGems(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestIncreaseGems(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  S2C_AddGemRequest aSStack_20 [20];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_AddGemRequest::S2C_AddGemRequest(aSStack_20);
  PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aSStack_20,(string *)param_1);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::SetGems(this_01,local_c);
    }
  }
  LawnApp::WaitingGemCallBack(gLawnApp,iVar1 == 0);
  S2C_AddGemRequest::~S2C_AddGemRequest(aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnUploadDangerRoomRank(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnUploadDangerRoomRank
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  S2C_UploadDangerRoomRank aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_UploadDangerRoomRank::S2C_UploadDangerRoomRank(aSStack_30);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_30,(string *)param_1);
    S2C_UploadDangerRoomRank::~S2C_UploadDangerRoomRank(aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestDangerRoomRank(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestDangerRoomRank
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  S2C_UploadDangerRoomRank aSStack_30 [28];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_UploadDangerRoomRank::S2C_UploadDangerRoomRank(aSStack_30);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_30,(string *)param_1);
    MessageRouter::Post<bool,int,bool,int>
              ((MessageRouter *)gMessageRouter,Message::RequestDangerRoomFinish,true,local_14);
    S2C_UploadDangerRoomRank::~S2C_UploadDangerRoomRank(aSStack_30);
  }
  else {
    MessageRouter::Post<bool,int,bool,int>
              ((MessageRouter *)gMessageRouter,Message::RequestDangerRoomFinish,false,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestLostPurchaseOrder(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestLostPurchaseOrder
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  S2C_Purchase_LostPurchaseOrder aSStack_68 [48];
  S2C_Purchase_LostPurchaseOrder aSStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  S2C_Purchase_LostPurchaseOrder::S2C_Purchase_LostPurchaseOrder(aSStack_68);
  PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aSStack_68,(string *)param_1);
  puVar2 = gMessageRouter;
  uVar1 = *(undefined4 *)(param_1 + 8);
  S2C_Purchase_LostPurchaseOrder::S2C_Purchase_LostPurchaseOrder(aSStack_38,aSStack_68);
  MessageRouter::Post<int,S2C_Purchase_LostPurchaseOrder_const&,int,S2C_Purchase_LostPurchaseOrder>
            ((MessageRouter *)puVar2,Message::NotifyLostPurchaseOrder,uVar1,aSStack_38);
  S2C_Purchase_LostPurchaseOrder::~S2C_Purchase_LostPurchaseOrder(aSStack_38);
  S2C_Purchase_LostPurchaseOrder::~S2C_Purchase_LostPurchaseOrder(aSStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onRequestSyncPlayerData(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestSyncPlayerData
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  androidNetworkMsgProcess aVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ProfileMgr *pPVar6;
  undefined8 uVar7;
  PlayerInfo *pPVar8;
  S2C_ACLog *pSVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  PVZ2UIDialog *this_00;
  PrimeTypeface *pPVar13;
  undefined8 local_160;
  undefined8 local_158;
  ACLogProfile aAStack_150 [8];
  vector avStack_148 [24];
  Delegate0 aDStack_130 [48];
  S2C_ProfileSync aSStack_100 [24];
  undefined1 auStack_e8 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_e0 [24];
  INetworkErrorData aIStack_c8 [192];
  long local_8;
  
  iVar4 = *(int *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if (iVar4 == 0) {
    pPVar8 = (PlayerInfo *)ProfileUtils::Profile();
    if (pPVar8 != (PlayerInfo *)0x0) {
      PlayerInfo::ClearACLog(pPVar8);
    }
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,true);
    this[0xe50] = (androidNetworkMsgProcess)0x0;
    this[0xe52] = (androidNetworkMsgProcess)0x0;
    *(undefined4 *)(this + 8) = 3;
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::SaveResult(pPVar6,true);
    S2C_ACLog::ClearLogIndex();
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestSyncPlayerData: upload successfully");
  }
  else if (iVar4 == 75000) {
    if ((byte)this[0xe50] < (byte)this[0xe51]) {
      RequestDownloadPlayerData(this);
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::SaveResult(pPVar6,false);
      INetworkErrorData::INetworkErrorData(aIStack_c8,*(int *)(param_1 + 8));
      INetworkMsgProcess::ShowErrorMessage(aIStack_c8);
      INetworkErrorData::~INetworkErrorData(aIStack_c8);
      Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestSyncPlayerData: error : 75000");
    }
  }
  else if (iVar4 == 0x12504) {
    RequestDownloadPlayerData(this);
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::SaveResult(pPVar6,false);
    INetworkErrorData::INetworkErrorData(aIStack_c8,*(int *)(param_1 + 8));
    INetworkMsgProcess::ShowErrorMessage(aIStack_c8);
    INetworkErrorData::~INetworkErrorData(aIStack_c8);
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestSyncPlayerData: error : 75012");
  }
  else if (iVar4 == 0x12503) {
    aVar1 = this[0xe52];
    this[0xe52] = (androidNetworkMsgProcess)((char)aVar1 + 1);
    if ((byte)aVar1 < (byte)this[0xe53]) {
      S2C_ProfileSync::S2C_ProfileSync(aSStack_100);
      PlantPacketJsonConverter::SerializeJson
                ((PlantPacketJsonConverter *)aSStack_100,(string *)param_1);
      uVar7 = FUN_0547429c(auStack_e8);
      Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestSyncPlayerData, aclog : %s",uVar7);
      pPVar8 = (PlayerInfo *)ProfileUtils::Profile();
      if (pPVar8 != (PlayerInfo *)0x0) {
        ACLogProfile::ACLogProfile(aAStack_150);
        cVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
        if (cVar2 != '\0') {
          Set8BytesTo0((string *)&local_158);
          pcVar10 = (char *)FUN_0547429c(auStack_e8);
          iVar4 = FUN_05474178(auStack_e8);
          pcVar11 = (char *)FUN_0547429c(this + 0xe40);
          DecryptString(pcVar10,iVar4,pcVar11);
          FUN_05474278((string *)&local_158,(string *)aIStack_c8);
          std::string::~string((string *)aIStack_c8);
          uVar7 = FUN_0547429c((string *)&local_158);
          uVar12 = FUN_0547429c(this + 0xe40);
          Sexy::OutputDebugStrF
                    ((wchar_t *)"ACLog - onRequestSyncPlayerData, aclog json : %s, key : %s",uVar7,
                     uVar12);
          std::string::string((string *)aIStack_c8,"ml");
          cVar2 = Sexy::RtObject::SerializeJsonToObj
                            ((RtObject *)aAStack_150,(string *)&local_158,(string *)aIStack_c8);
          std::string::~string((string *)aIStack_c8);
          nop();
          if (cVar2 == '\0') {
            Sexy::OutputDebugStrF
                      ((wchar_t *)"ACLog - onRequestSyncPlayerData, aclog json to object error : %s"
                      );
          }
          std::vector<S2C_ACLog,std::allocator<S2C_ACLog>>::operator=
                    ((vector<S2C_ACLog,std::allocator<S2C_ACLog>> *)avStack_e0,avStack_148);
          std::string::~string((string *)&local_158);
        }
        local_160 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(avStack_e0);
        local_158 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_e0);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_160,(__normal_iterator *)&local_158),
              bVar3) {
          pSVar9 = (S2C_ACLog *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_160);
          S2C_ACLog::S2C_ACLog((S2C_ACLog *)aIStack_c8,pSVar9);
          Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestSyncPlayerData, push ac log");
          PlayerInfo::PushACLog(pPVar8,(S2C_ACLog *)aIStack_c8);
          S2C_ACLog::~S2C_ACLog((S2C_ACLog *)aIStack_c8);
          std::move_iterator<S2C_ACLog*>::operator++((move_iterator<S2C_ACLog*> *)&local_160);
        }
        PlayerInfo::SerializeACLog(pPVar8,(string *)(this + 0xe40));
        RequestSyncPlayerData(this);
        ACLogProfile::~ACLogProfile(aAStack_150);
      }
      Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestSyncPlayerData: error : 75011");
      S2C_ProfileSync::~S2C_ProfileSync(aSStack_100);
    }
    else if (*(int *)(param_1 + 8) == 0xafd6) {
      iVar4 = FUN_031dc0bc(400);
      iVar5 = FUN_031dc0bc(0xfa);
      this_00 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar4,(float)iVar5,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)aIStack_c8,L"[REVIVE_TIP]",aSStack_100);
      PVZ2UIDialog::SetHeaderLabel(this_00,(wstring *)aIStack_c8);
      FUN_05476c50((wstring *)aIStack_c8);
      nop();
      FUN_05478178((wstring *)aIStack_c8,L"[PVZ_LOGIN_LOW_VERSION]",aSStack_100);
      PVZ2UIDialog::SetFooterLabel(this_00,(wstring *)aIStack_c8);
      FUN_05476c50((wstring *)aIStack_c8);
      nop();
      pPVar13 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(this_00,pPVar13,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar13 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)aIStack_c8,1);
      PVZ2UIDialog::SetFooterFont(this_00,pPVar13,(Color *)aIStack_c8);
      PVZ2UIDialog::SetBackgroundDarken(this_00,true,0.5);
      FUN_05478178(aSStack_100,L"[PVZ_LOGIN_GO_UPDATE]",aAStack_150);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::OnHandleUpdateGame);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_130,(wstring *)aIStack_c8);
      PVZ2UIDialog::AddButton(this_00,aSStack_100,aDStack_130,0);
      FUN_05476c50(aSStack_100);
      nop();
      FUN_031dbef8(this_00 + 0x1c0);
    }
    else {
      this[0xe52] = (androidNetworkMsgProcess)0x0;
      INetworkErrorData::INetworkErrorData(aIStack_c8,0x15f92);
      INetworkMsgProcess::ShowErrorMessage(aIStack_c8);
      INetworkErrorData::~INetworkErrorData(aIStack_c8);
      pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::SaveResult(pPVar6,false);
      Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestSyncPlayerData: error : 90002");
    }
  }
  else {
    this[0xe50] = (androidNetworkMsgProcess)0x0;
    this[0xe52] = (androidNetworkMsgProcess)0x0;
    INetworkErrorData::INetworkErrorData(aIStack_c8,*(int *)(param_1 + 8));
    INetworkMsgProcess::ShowErrorMessage(aIStack_c8);
    INetworkErrorData::~INetworkErrorData(aIStack_c8);
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::SaveResult(pPVar6,false);
    Sexy::OutputDebugStrF
              ((wchar_t *)"ACLog - onRequestSyncPlayerData: error : %d",
               (ulong)*(uint *)(param_1 + 8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onRequestDownloadPlayerData(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestDownloadPlayerData
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  PlayerInfo *this_00;
  long lVar4;
  undefined8 uVar5;
  string asStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [48];
  INetworkErrorData aIStack_b0 [32];
  string asStack_90 [8];
  string asStack_88 [8];
  uint local_80;
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ICloud_GetProfile::S2C_ICloud_GetProfile((S2C_ICloud_GetProfile *)aIStack_b0);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aIStack_b0,(string *)param_1);
    base64_decode_url_safe(asStack_90);
    MD5::MD5(aMStack_78,asStack_f0);
    MD5::toString();
    bVar1 = std::operator!=(asStack_e0,asStack_88);
    std::string::~string(asStack_e0);
    if (bVar1) {
      if ((byte)this[0xe50] < (byte)this[0xe51]) {
        this[0xe50] = (androidNetworkMsgProcess)((char)this[0xe50] + 1);
        RequestDownloadPlayerData(this);
        Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestDownloadPlayerData: retry");
      }
      else {
        *(undefined4 *)(this + 8) = 2;
        INetworkErrorData::INetworkErrorData((INetworkErrorData *)asStack_e0,90000);
        INetworkMsgProcess::ShowErrorMessage(asStack_e0);
        INetworkErrorData::~INetworkErrorData((INetworkErrorData *)asStack_e0);
        Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestDownloadPlayerData: retry failed");
      }
    }
    else {
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      if (this_00 == (PlayerInfo *)0x0) {
        uVar5 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
        FUN_05475d88(asStack_e8,asStack_f0);
        ProfileMgr::CreateProfileFromServer(asStack_e0,uVar5,asStack_e8);
        this_00 = (PlayerInfo *)
                  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_e0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_e0)
        ;
        std::string::~string(asStack_e8);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"ACLog - onRequestDownloadPlayerData: CreateProfileFromServer");
      }
      else {
        PlayerInfo::SetMapConversionState(this_00,0);
        PlayerInfo::UpdateDeltaDataFromServer(this_00,asStack_f0,asStack_88,local_80);
        PlayerInfo::ResetStarTotal(this_00);
        lVar4 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
        uVar3 = FUN_031db2ac(*(undefined4 *)(this_00 + 0x600));
        FUN_031db2b8(lVar4 + 0x100,uVar3);
      }
      PlayerInfo::SerializeACLog(this_00,(string *)(this + 0xe40));
      PlayerInfo::SAVE_PROFILE(this_00);
      S2C_ACLog::ClearLogIndex();
      this[0xe50] = (androidNetworkMsgProcess)0x0;
      *(undefined4 *)(this + 8) = 3;
      this[0xe52] = (androidNetworkMsgProcess)0x0;
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,true);
      Sexy::OutputDebugStrF
                ((wchar_t *)"ACLog - onRequestDownloadPlayerData: sync profile successfully");
    }
    std::string::~string(asStack_f0);
    S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile((S2C_ICloud_GetProfile *)aIStack_b0);
  }
  else if (*(int *)(param_1 + 8) == 0x126f0) {
    Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar2 = ProfileMgr::GetNumProfiles();
    if (0 < iVar2) {
      LawnApp::RemoveAllCaches();
      INetworkErrorData::INetworkErrorData(aIStack_b0,0x15f91);
      INetworkMsgProcess::ShowErrorMessage(aIStack_b0);
      INetworkErrorData::~INetworkErrorData(aIStack_b0);
    }
    *(undefined4 *)(this + 8) = 3;
    this[0xe50] = (androidNetworkMsgProcess)0x0;
    this[0xe52] = (androidNetworkMsgProcess)0x0;
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,false);
    Sexy::OutputDebugStrF((wchar_t *)"ACLog - onRequestDownloadPlayerData: error : 75504");
  }
  else {
    this[0xe50] = (androidNetworkMsgProcess)0x0;
    this[0xe52] = (androidNetworkMsgProcess)0x0;
    *(undefined4 *)(this + 8) = 2;
    INetworkErrorData::INetworkErrorData(aIStack_b0,*(int *)(param_1 + 8));
    INetworkMsgProcess::ShowErrorMessage(aIStack_b0);
    INetworkErrorData::~INetworkErrorData(aIStack_b0);
    Sexy::OutputDebugStrF
              ((wchar_t *)"ACLog - onRequestDownloadPlayerData: error : %d",
               (ulong)*(uint *)(param_1 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestProfileMd5(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestProfileMd5
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  PlayerInfo *this_00;
  string asStack_40 [8];
  S2C_ICloud_GetProfileMD5 aSStack_38 [24];
  string asStack_20 [8];
  string asStack_18 [8];
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ICloud_GetProfileMD5::S2C_ICloud_GetProfileMD5(aSStack_38);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_38,(string *)param_1);
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    if (this_00 != (PlayerInfo *)0x0) {
      base64_decode_url_safe(asStack_18);
      PlayerInfo::UpdateDeltaDataSignFromServer(this_00,asStack_20,asStack_40,local_10);
      std::string::~string(asStack_40);
    }
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::SyncProfileSummaryFinish,true);
    S2C_ICloud_GetProfileMD5::~S2C_ICloud_GetProfileMD5(aSStack_38);
  }
  else {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::SyncProfileSummaryFinish,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestSyncCachedObjects(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestSyncCachedObjects
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlayerInfo *this_00;
  undefined8 *puVar4;
  NameMapperBase *this_01;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 local_80;
  string asStack_78 [8];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_70 [24];
  S2C_SyncCachedObjectsInfo aSStack_58 [20];
  int local_44;
  int local_40;
  vector avStack_38 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  iVar3 = *(int *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  this[0xe55] = (androidNetworkMsgProcess)0x0;
  if (iVar3 == 0) {
    S2C_SyncCachedObjectsInfo::S2C_SyncCachedObjectsInfo(aSStack_58);
    local_40 = iVar3;
    cVar1 = PlantPacketJsonConverter::SerializeJson
                      ((PlantPacketJsonConverter *)aSStack_58,(string *)param_1);
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    if ((this_00 == (PlayerInfo *)0x0) || (cVar1 == '\0')) {
      S2C_SyncCachedObjectsInfo::~S2C_SyncCachedObjectsInfo(aSStack_58);
    }
    else {
      FUN_031db2a4(this_00 + 0x350,0);
      PlayerInfo::AddCoins(this_00,local_40);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_70,avStack_38);
      PlayerInfo::AddCommonGachaRewardList(this_00,avStack_70,0);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_70);
      PlayerInfo::SetGems(this_00,local_44);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_20);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
            bVar2) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        iVar3 = *(int *)(puVar4 + 1);
        uVar5 = *puVar4;
        std::string::string(asStack_78,"");
        nop();
        this_01 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
        cVar1 = NameMapperBase::ContainsId(this_01,iVar3);
        if (cVar1 != '\0') {
          iVar3 = PlantAccessoryInfoMapper::GetInstance();
          NameMapperBase::GetNameForId(iVar3);
          FUN_05474278(asStack_78,avStack_70);
          std::string::~string((string *)avStack_70);
          FUN_05475d88(avStack_70,asStack_78);
          cVar1 = PlayerInfo::HasPlantAccessoryInfos(this_00,avStack_70,uVar5);
          std::string::~string((string *)avStack_70);
          if (cVar1 == '\0') {
            FUN_05475d88(avStack_70,asStack_78);
            PlayerInfo::AddPlantAccessoryInfos(this_00,avStack_70,uVar5,1);
            std::string::~string((string *)avStack_70);
          }
        }
        std::string::~string(asStack_78);
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_88);
      }
      FUN_031db2a4(this_00 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_00);
      bVar2 = (bool)INetworkMsgProcess::GetNetworkCacheQueue();
      NetworkCacheQueue::onFlushedCachedObjects(bVar2);
      INetworkMsgProcess::SaveCache();
      S2C_SyncCachedObjectsInfo::~S2C_SyncCachedObjectsInfo(aSStack_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onRequestADSReward(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestADSReward(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined *puVar1;
  PlayerInfo *pPVar2;
  S2C_ADSReward aSStack_168 [104];
  vector avStack_100 [72];
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> avStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ADSReward::S2C_ADSReward(aSStack_168);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_168,(string *)param_1);
    pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
    if (pPVar2 != (PlayerInfo *)0x0) {
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_b8,avStack_100);
      PlayerInfo::AddCommonGachaRewardList(pPVar2,avStack_b8,0);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_b8);
    }
    puVar1 = gMessageRouter;
    S2C_ADSReward::S2C_ADSReward((S2C_ADSReward *)avStack_b8,aSStack_168);
    MessageRouter::Broadcast<S2C_ADSReward_const&,S2C_ADSReward>
              ((MessageRouter *)puVar1,Message::NotifyAdsReward,avStack_b8);
    S2C_ADSReward::~S2C_ADSReward((S2C_ADSReward *)avStack_b8);
    puVar1 = gMessageRouter;
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector(avStack_b8,avStack_100);
    MessageRouter::
    Broadcast<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,char_const*,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>
              ((MessageRouter *)puVar1,Message::EASquareReward,"EA2World",avStack_b8);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector(avStack_b8);
    S2C_ADSReward::~S2C_ADSReward(aSStack_168);
  }
  else {
    INetworkErrorData::INetworkErrorData((INetworkErrorData *)avStack_b8,(string *)param_1);
    INetworkMsgProcess::ShowErrorMessage((INetworkErrorData *)avStack_b8);
    INetworkErrorData::~INetworkErrorData((INetworkErrorData *)avStack_b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestGetExplorePlantStatus(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestGetExplorePlantStatus
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  uint *puVar2;
  undefined8 local_50;
  undefined8 local_48;
  S2C_ExplorerPlantStatus aSStack_40 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_28 [24];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ExplorerPlantStatus::S2C_ExplorerPlantStatus(aSStack_40);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_40,(string *)param_1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      FUN_031db2a4(this_01 + 0x350,0);
      PlayerInfo::RemoveAllAdventure(this_01,false,true,false);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(avStack_28);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_28);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar1) {
        puVar2 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        if (puVar2[2] == 0) {
          PlayerInfo::SetAdventurePlantEndTime(this_01,puVar2[1],*puVar2,false);
        }
        else if (puVar2[2] - 1 < 2) {
          PlayerInfo::RemoveAdventurePlants(this_01,puVar2[1]);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_50);
      }
      FUN_031db2a4(this_01 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_01);
    }
    MessageRouter::Post<int,bool,int,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExplorePlantStatus,local_10,true);
    S2C_ExplorerPlantStatus::~S2C_ExplorerPlantStatus(aSStack_40);
  }
  else {
    MessageRouter::Post<int,bool,int,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExplorePlantStatus,-1,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestStartExplore(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestStartExplore
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  S2C_Explore_Team *pSVar15;
  int *piVar16;
  undefined4 uVar17;
  int local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  PlantAdventureInfo local_170;
  undefined1 local_16f;
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  vector<int,std::allocator<int>> avStack_140 [24];
  undefined8 local_128 [9];
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_b0 [24];
  undefined4 local_98;
  S2C_ExplorerStart aSStack_90 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_78 [76];
  int local_2c;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ExplorerStart::S2C_ExplorerStart(aSStack_90);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_90,(string *)param_1);
    if (local_10 == 1) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::NeedRecoverExplorePlant,local_c);
      S2C_ExplorerStart::~S2C_ExplorerStart(aSStack_90);
    }
    else {
      uVar14 = time((time_t *)0x0);
      Sexy::SRand(uVar14);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      if ((this_01 != (PlayerInfo *)0x0) &&
         (cVar10 = PlayerInfo::CanStartNewPlantAdventure(this_01), cVar10 != '\0')) {
        FUN_031db2a4(this_01 + 0x350,0);
        PlayerInfo::SetGems(this_01,local_2c);
        local_188 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(avStack_78);
        local_180 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_78);
        bVar11 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_188,(__normal_iterator *)&local_180);
        if (bVar11) {
          do {
            pSVar15 = (S2C_Explore_Team *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_188);
            S2C_Explore_Team::S2C_Explore_Team((S2C_Explore_Team *)&local_e0,pSVar15);
            uVar9 = local_bc;
            uVar8 = local_c0;
            iVar7 = local_c4;
            uVar6 = local_c8;
            uVar5 = local_cc;
            uVar4 = local_d0;
            iVar3 = local_d4;
            uVar2 = local_d8;
            iVar1 = local_dc;
            iVar12 = Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
            cVar10 = MysteryCrystalMgr::CanAwards(iVar12);
            iVar12 = local_e0;
            uVar17 = 0;
            if (cVar10 != '\0') {
              uVar17 = local_b8;
            }
            PlantAdventureInfo::PlantAdventureInfo(&local_170);
            local_16c = iVar1;
            local_168 = uVar8;
            local_164 = uVar4;
            local_160 = uVar5;
            local_15c = uVar6;
            local_158 = uVar9;
            local_154 = iVar7;
            local_170 = (PlantAdventureInfo)0x1;
            local_16f = 0 < iVar7;
            local_150 = uVar17;
            local_14c = Sexy::Rand(0x1518);
            local_148 = iVar12;
            local_14c = (iVar12 + 0x3c) - local_14c;
            local_178 = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::begin(avStack_b0);
            local_128[0] = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end(avStack_b0);
            while( true ) {
              bVar11 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_178,(__normal_iterator *)local_128);
              if (!bVar11) break;
              piVar16 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_178);
              local_18c = *piVar16;
              std::vector<int,std::allocator<int>>::push_back(avStack_140,&local_18c);
              eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                        ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_178);
            }
            PlantAdventureInfo::PlantAdventureInfo((PlantAdventureInfo *)local_128,&local_170);
            PlayerInfo::AddPlantAdventureInfo(this_01,(PlantAdventureInfo *)local_128);
            S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)local_128);
            iVar13 = PlayerInfo::GetPlantAdventureState(this_01,iVar1);
            if ((iVar13 != 5) && (iVar3 != 0)) {
              std::vector<int,std::allocator<int>>::vector
                        ((vector<int,std::allocator<int>> *)local_128,(vector *)avStack_b0);
              PlayerInfo::FixPlantAdventureInfoByServer
                        (this_01,iVar1,iVar3,uVar2,0 < iVar7,iVar12,(PlantAdventureInfo *)local_128,
                         local_98);
              std::vector<int,std::allocator<int>>::~vector
                        ((vector<int,std::allocator<int>> *)local_128);
              if ((1 < iVar3 - 2U) && (iVar13 - 2U < 2)) {
                PlayerInfo::RemovePlantAdventureInfo(this_01,iVar1,(uint)bVar11);
              }
            }
            S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)&local_170);
            S2C_Explore_Team::~S2C_Explore_Team((S2C_Explore_Team *)&local_e0);
            std::move_iterator<RappellingZombieInfo*>::operator++
                      ((move_iterator<RappellingZombieInfo*> *)&local_188);
            bVar11 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_188,(__normal_iterator *)&local_180);
          } while (bVar11);
        }
        FUN_031db2a4(this_01 + 0x350,1);
        PlayerInfo::SAVE_PROFILE(this_01);
      }
      MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::StartExplore,true);
      S2C_ExplorerStart::~S2C_ExplorerStart(aSStack_90);
    }
  }
  else {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::StartExplore,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestStopExplore(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestStopExplore
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar5;
  undefined4 *puVar6;
  ADManager *pAVar7;
  int iVar8;
  int iVar9;
  vector<int,std::allocator<int>> avStack_a8 [24];
  S2C_StopExplore aSStack_90 [20];
  int local_7c;
  int local_44;
  undefined8 local_28;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_StopExplore::S2C_StopExplore(aSStack_90);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_90,(string *)param_1);
    if (local_10 == 5) {
      pAVar7 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      ADManager::SetADWatchCount(pAVar7,0x18,local_c);
    }
    else if (local_10 == 7) {
      pAVar7 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      ADManager::SetADWatchCount(pAVar7,0x19,local_c);
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 == (PlayerInfo *)0x0) {
      iVar9 = -1;
      iVar8 = -1;
    }
    else {
      lVar5 = FUN_031dbef4(local_28);
      iVar8 = *(int *)(lVar5 + 4);
      iVar9 = *(int *)(lVar5 + 0xc);
      if (local_7c != 0) {
        MessageRouter::Post<int,bool,int,bool>
                  ((MessageRouter *)gMessageRouter,Message::FreeExplore,iVar8,local_7c == 1);
        S2C_StopExplore::~S2C_StopExplore(aSStack_90);
        goto LAB_031f20cc;
      }
      FUN_031db2a4(this_01 + 0x350,0);
      puVar6 = (undefined4 *)FUN_031dbef4(local_28);
      uVar1 = puVar6[2];
      uVar2 = *puVar6;
      iVar3 = puVar6[7];
      iVar4 = PlayerInfo::GetPlantAdventureState(this_01,iVar8);
      if ((iVar4 != 5) && (iVar9 != 0)) {
        lVar5 = FUN_031dbef4(local_28);
        std::vector<int,std::allocator<int>>::vector(avStack_a8,(vector *)(lVar5 + 0x30));
        lVar5 = FUN_031dbef4(local_28);
        PlayerInfo::FixPlantAdventureInfoByServer
                  (this_01,iVar8,iVar9,uVar1,0 < iVar3,uVar2,avStack_a8,
                   *(undefined4 *)(lVar5 + 0x48));
        std::vector<int,std::allocator<int>>::~vector(avStack_a8);
        if ((1 < iVar9 - 2U) && (iVar4 - 2U < 2)) {
          PlayerInfo::RemovePlantAdventureInfo(this_01,iVar8,0);
        }
      }
      PlayerInfo::SetGems(this_01,local_44);
      FUN_031db2a4(this_01 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_01);
    }
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)gMessageRouter,Message::StopExplore,iVar8,iVar9,true);
    S2C_StopExplore::~S2C_StopExplore(aSStack_90);
  }
  else {
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)gMessageRouter,Message::StopExplore,-1,-1,false);
  }
LAB_031f20cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestCalcExploreReward(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestCalcExploreReward
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 *puVar11;
  long lVar12;
  ADManager *pAVar13;
  NameMapperBase *this_02;
  MysteryCrystalMgr *pMVar14;
  string asStack_88 [48];
  S2C_ExploreReward aSStack_58 [24];
  undefined8 local_40;
  vector avStack_28 [24];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ExploreReward::S2C_ExploreReward(aSStack_58);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_58,(string *)param_1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      FUN_031db2a4(this_01 + 0x350,0);
      puVar11 = (undefined4 *)FUN_031dbef4(local_40);
      uVar1 = puVar11[2];
      iVar2 = puVar11[1];
      iVar3 = puVar11[3];
      iVar4 = puVar11[7];
      uVar5 = *puVar11;
      iVar7 = PlayerInfo::GetPlantAdventureState(this_01,iVar2);
      lVar12 = FUN_031dbef4(local_40);
      PlayerInfo::AddCoins(this_01,*(int *)(lVar12 + 0x20));
      pAVar13 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      ADManager::SetADWatchCount(pAVar13,0x1a,local_10);
      this_02 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      std::string::string(asStack_88,"mat_mystery_crystal");
      iVar8 = NameMapperBase::GetIdForName(this_02,asStack_88);
      std::string::~string(asStack_88);
      nop();
      lVar12 = FUN_031dbef4(local_40);
      iVar9 = *(int *)(lVar12 + 0x28);
      if (0 < iVar9) {
        pMVar14 = (MysteryCrystalMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
        iVar9 = MysteryCrystalMgr::GetRealDropAmount(pMVar14,iVar9);
        pMVar14 = (MysteryCrystalMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
        MysteryCrystalMgr::AddToCurrentGained(pMVar14,iVar9);
        iVar10 = Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
        cVar6 = MysteryCrystalMgr::CanAwards(iVar10);
        if (cVar6 != '\0') {
          ProfileChangeItemAmount(iVar8,iVar9,false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_88);
        }
      }
      if ((iVar7 != 5) && (iVar3 != 0)) {
        lVar12 = FUN_031dbef4(local_40);
        std::vector<int,std::allocator<int>>::vector
                  ((vector<int,std::allocator<int>> *)asStack_88,(vector *)(lVar12 + 0x30));
        lVar12 = FUN_031dbef4(local_40);
        PlayerInfo::FixPlantAdventureInfoByServer
                  (this_01,iVar2,iVar3,uVar1,0 < iVar4,uVar5,asStack_88,
                   *(undefined4 *)(lVar12 + 0x48));
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_88)
        ;
        if ((1 < iVar3 - 2U) && (iVar7 - 2U < 2)) {
          PlayerInfo::RemovePlantAdventureInfo(this_01,iVar2,0);
        }
      }
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)asStack_88,avStack_28);
      PlayerInfo::AddCommonGachaRewardList(this_01,asStack_88,0);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)asStack_88);
      FUN_031db2a4(this_01 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_01);
    }
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GotExploreReward,true);
    S2C_ExploreReward::~S2C_ExploreReward(aSStack_58);
  }
  else {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GotExploreReward,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestOpenExploreSurpriseBox(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestOpenExploreSurpriseBox
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  GAME_ITEM_INFO aGStack_110 [48];
  S2C_SurpriseRewardNew aSStack_e0 [128];
  int local_60;
  int local_5c;
  int local_24;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_SurpriseRewardNew::S2C_SurpriseRewardNew(aSStack_e0);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_e0,(string *)param_1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      FUN_031db2a4(this_01 + 0x350,0);
      ProfileChangeItemAmount(local_60,local_5c,false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_110);
      PlayerInfo::SetGems(this_01,local_24);
      FUN_031db2a4(this_01 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_01);
    }
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GotExploreSurprise,true)
    ;
    S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew(aSStack_e0);
  }
  else {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GotExploreSurprise,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestRecoverExplorePlant(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestRecoverExplorePlant
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  S2C_ExplorePlantRecover aSStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ExplorePlantRecover::S2C_ExplorePlantRecover(aSStack_90);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_90,(string *)param_1);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::RecoverExplorePlant,true);
    S2C_ExplorePlantRecover::~S2C_ExplorePlantRecover(aSStack_90);
  }
  else {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::RecoverExplorePlant,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestChargeReward(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestChargeReward
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  int iVar1;
  undefined *puVar2;
  LawnApp *pLVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  PlayerInfo *this_00;
  int *piVar7;
  UserInfo *this_01;
  wchar_t *pwVar8;
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_f0 [48];
  GAME_ITEM_INFO aGStack_c0 [48];
  S2C_ICloud_GetChargeRewardInfo aSStack_90 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_78 [76];
  int local_2c;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_031e0600(gMessageRouter);
    goto LAB_031f29b0;
  }
  S2C_ICloud_GetChargeRewardInfo::S2C_ICloud_GetChargeRewardInfo(aSStack_90);
  PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aSStack_90,(string *)param_1);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    FUN_031db2a4(this_00 + 0x350,0);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_f0);
    local_100 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(avStack_78);
    local_f8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_78);
    while (bVar5 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_100,(__normal_iterator *)&local_f8),
          puVar2 = gMessageRouter, bVar5) {
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
      local_104 = *piVar7;
      iVar1 = piVar7[1];
      OtherServerNameMapper::GetInstance();
      cVar6 = FUN_031db280(local_104);
      if (cVar6 == '\0') {
        OtherServerNameMapper::GetInstance();
        iVar4 = local_104;
        cVar6 = FUN_031db290(local_104);
        if (cVar6 == '\0') {
          if (iVar4 == 0x62f2) {
            this_01 = (UserInfo *)DSingleton<UserInfo>::getInstance();
            UserInfo::unlockHeadShotId(this_01,0x62f2);
          }
          else {
            ProfileChangeItemAmount(iVar4,iVar1,false);
            GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_c0);
          }
        }
        else {
          std::string::string((string *)aGStack_c0,"poweruptacticalcuke");
          PlayerInfo::ModifyPowerupUses(this_00,(string *)aGStack_c0,iVar1);
          std::string::~string((string *)aGStack_c0);
          nop();
        }
      }
      else {
        PlayerInfo::AddCoins(this_00,iVar1);
      }
      piVar7 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_f0,&local_104);
      *piVar7 = iVar1;
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_100);
    }
    if (local_10 == 3) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)aGStack_c0,
                 (map *)amStack_f0);
      MessageRouter::
      Post<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
                ((MessageRouter *)puVar2,Message::RechargeRewardGot,1,local_c,
                 (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)aGStack_c0)
      ;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)aGStack_c0)
      ;
      pwVar8 = L"[RECHARGE_PACKAGE_FIRST_RECHARGE_TITLE]";
LAB_031f2ab8:
      pLVar3 = gLawnApp;
      FUN_05478178(aGStack_c0,pwVar8,(__normal_iterator *)&local_f8);
      LawnApp::ShowServerBoxOpenUI(pLVar3,amStack_f0,aGStack_c0);
      FUN_05476c50(aGStack_c0);
      nop();
    }
    else if (local_10 == 4) {
      MessageRouter::
      Post<bool,S2C_ICloud_GetChargeRewardInfo_const*,bool,S2C_ICloud_GetChargeRewardInfo*>
                ((MessageRouter *)gMessageRouter,Message::TotalRechargePackageGot,true,aSStack_90);
      pwVar8 = L"[RECHARGE_PACKAGE_REWARD_TITLE]";
      goto LAB_031f2ab8;
    }
    PlayerInfo::SetGems(this_00,local_2c);
    FUN_031db2a4(this_00 + 0x350,1);
    PlayerInfo::SAVE_PROFILE(this_00);
    cVar6 = LawnApp::IsCoinStoreShowing(gLawnApp);
    if (cVar6 != '\0') {
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_f0);
  }
  S2C_ICloud_GetChargeRewardInfo::~S2C_ICloud_GetChargeRewardInfo(aSStack_90);
LAB_031f29b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnRequestGetRedPackLeaderBoard(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnRequestGetRedPackLeaderBoard
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  char cVar1;
  Value *pVVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  char *pcVar3;
  Value *pVVar4;
  undefined1 *puVar5;
  RedPackLeaderBoardInfo aRStack_d0 [8];
  string asStack_c8 [8];
  undefined4 local_c0;
  S2C_ICloud_RedPackLeaderBoard aSStack_b8 [24];
  vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>> avStack_a0 [24];
  undefined4 local_88;
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ICloud_RedPackLeaderBoard::S2C_ICloud_RedPackLeaderBoard(aSStack_b8);
    Sexy::StructuredData::StructuredData(aSStack_80);
    cVar1 = StringHelper::ReadJson((string *)param_1,aSStack_80);
    if ((cVar1 == '\0') ||
       (pVVar2 = (Value *)Sexy::StructuredData::ValueForPath(aSStack_80,"$.d"),
       pVVar2 == (Value *)0x0)) {
      Sexy::StructuredData::~StructuredData(aSStack_80);
      S2C_ICloud_RedPackLeaderBoard::~S2C_ICloud_RedPackLeaderBoard(aSStack_b8);
    }
    else {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::StructuredData::Value::ArrayForName(pVVar2,"ny5rpprl");
      local_88 = Sexy::StructuredData::Value::IntegerForName(pVVar2,"sir",0);
      for (pVVar2 = (Value *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_rightmost(this_00);
          pVVar4 = (Value *)Sexy::StructuredData::Value::ChildrenEnd((Value *)this_00),
          pVVar2 != pVVar4; pVVar2 = (Value *)Sexy::StructuredData::Value::Next(pVVar2)) {
        if (pVVar2 != (Value *)0x0) {
          RedPackLeaderBoardInfo::RedPackLeaderBoardInfo(aRStack_d0);
          puVar5 = &DAT_055923fe;
          pcVar3 = (char *)Sexy::StructuredData::Value::StringForName(pVVar2,"s","");
          std::string::append(asStack_c8,pcVar3,(size_t)puVar5);
          puVar5 = &DAT_055923fe;
          pcVar3 = (char *)Sexy::StructuredData::Value::StringForName(pVVar2,"n","");
          std::string::append((string *)aRStack_d0,pcVar3,(size_t)puVar5);
          local_c0 = Sexy::StructuredData::Value::IntegerForName(pVVar2,"r",0);
          std::vector<S2C_RedPack_Public,std::allocator<S2C_RedPack_Public>>::push_back
                    (avStack_a0,(S2C_RedPack_Public *)aRStack_d0);
          Sexy::PACommand::~PACommand((PACommand *)aRStack_d0);
        }
      }
      MessageRouter::Post<S2C_ICloud_RedPackLeaderBoard_const*,S2C_ICloud_RedPackLeaderBoard*>
                ((MessageRouter *)gMessageRouter,Message::ProcessRedPackLeaderBoardInfo,aSStack_b8);
      Sexy::StructuredData::~StructuredData(aSStack_80);
      S2C_ICloud_RedPackLeaderBoard::~S2C_ICloud_RedPackLeaderBoard(aSStack_b8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequestGetProfile(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequestGetProfile
          (androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  bool bVar1;
  char cVar2;
  PlayerInfo *this_00;
  bool bVar3;
  string asStack_1a38 [8];
  string asStack_1a30 [8];
  S2C_ICloud_GetProfile aSStack_1a28 [32];
  string asStack_1a08 [8];
  string asStack_1a00 [8];
  uint local_19f8;
  MD5 aMStack_19f0 [112];
  string asStack_1980 [6520];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 8) == 0) {
    S2C_ICloud_GetProfile::S2C_ICloud_GetProfile(aSStack_1a28);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_1a28,(string *)param_1);
    base64_decode_url_safe(asStack_1a08);
    MD5::MD5(aMStack_19f0,asStack_1a38);
    MD5::toString();
    bVar1 = std::operator!=(asStack_1980,asStack_1a00);
    std::string::~string(asStack_1980);
    bVar3 = false;
    if (!bVar1) {
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      if (this_00 != (PlayerInfo *)0x0) {
        PlayerInfo::PlayerInfo((PlayerInfo *)asStack_1980);
        std::string::string(asStack_1a30,"sd");
        cVar2 = Sexy::RtObject::SerializeJsonToObj
                          ((RtObject *)asStack_1980,asStack_1a38,asStack_1a30);
        std::string::~string(asStack_1a30);
        nop();
        if (cVar2 == '\0') {
          PlayerInfo::~PlayerInfo((PlayerInfo *)asStack_1980);
          std::string::~string(asStack_1a38);
          S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile(aSStack_1a28);
          goto LAB_031f47d4;
        }
        PlayerInfo::SetMapConversionState(this_00,0);
        PlayerInfo::UpdateDeltaDataFromServer(this_00,asStack_1a38,asStack_1a00,local_19f8);
        PlayerInfo::ResetStarTotal(this_00);
        PlayerInfo::~PlayerInfo((PlayerInfo *)asStack_1980);
      }
      bVar3 = true;
    }
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::SyncProfileFromServerFinish,bVar3);
    std::string::~string(asStack_1a38);
    S2C_ICloud_GetProfile::~S2C_ICloud_GetProfile(aSStack_1a28);
  }
  else {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::SyncProfileFromServerFinish,false);
  }
LAB_031f47d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::OnICloudRequstLogin(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::OnICloudRequstLogin(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  string *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  char *__s;
  TGALogMgr *pTVar7;
  PVZ2UIDialog *pPVar8;
  PrimeTypeface *pPVar9;
  size_t __n;
  undefined1 auStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  TGABagData aTStack_200 [8];
  undefined1 auStack_1f8 [8];
  string asStack_1f0 [16];
  S2C_ICloud_LoginResult aSStack_1e0 [20];
  undefined4 local_1cc;
  long local_1c8;
  undefined1 auStack_1c0 [8];
  string asStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  androidNetworkMsgProcess local_1a0;
  undefined4 local_19c;
  int local_190;
  bool local_18c;
  int local_188;
  androidNetworkMsgProcess local_184;
  string asStack_180 [8];
  Delegate0 aDStack_178 [16];
  undefined1 auStack_168 [352];
  size_t local_8;
  
  iVar3 = *(int *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if (iVar3 == 0) {
    __n = ___stack_chk_guard;
    SettingsDialog::SetHaveSendV202(true);
    this_00 = (string *)(this + 0x10);
    S2C_ICloud_LoginResult::S2C_ICloud_LoginResult(aSStack_1e0);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_1e0,(string *)param_1);
    uVar5 = operator|(0x10,8);
    FUN_05462470(aDStack_178,uVar5);
    FUN_0546065c(auStack_168,local_1cc);
    FUN_05462824(asStack_1f0,aDStack_178);
    FUN_05474278(this_00,asStack_1f0);
    std::string::~string(asStack_1f0);
    thunk_FUN_05475e00((string *)(this + 0x18),auStack_1c0);
    thunk_FUN_05475e00(this + 0xe40,auStack_1a8);
    thunk_FUN_05475e00(this + 0xe48,auStack_1b0);
    this[0xe54] = local_1a0;
    this[0xe56] = local_184;
    lVar6 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
    FUN_031db2c0(local_19c,lVar6 + 0x134);
    SettingsDialog::SetEncryptIndex(local_190);
    cVar1 = FUN_0547419c(asStack_180);
    if (cVar1 == '\0') {
      _NetworkEventConfig::SetStageURL(asStack_180);
    }
    INetworkMsgProcess::GetServerSignature();
    bVar2 = std::operator!=(asStack_1f0,asStack_1b8);
    std::string::~string(asStack_1f0);
    if (bVar2) {
      std::string::append(this_00,"",__n);
      std::string::append((string *)(this + 0x18),"",__n);
    }
    LawnApp::InitServerTimeOffset(gLawnApp,local_1c8);
    LawnApp::SetProfileCreatedTime((string *)gLawnApp);
    LawnApp::SetIsNewUser(gLawnApp,local_18c);
    Sexy::OutputDebugStrF((wchar_t *)"adnroid v202 Load Rsb newuser %d",(ulong)local_18c);
    if ((local_18c != false) || (0 < local_188)) {
      TGABagData::TGABagData(aTStack_200);
      DString::DString((DString *)asStack_1f0,local_188);
      __s = (char *)DString::c_str((DString *)asStack_1f0);
      std::string::append((string *)aTStack_200,__s,__n);
      DString::~DString((DString *)asStack_1f0);
      pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGABagData::TGABagData((TGABagData *)asStack_1f0,aTStack_200);
      TGALogMgr::LogPlayerReturn(pTVar7,asStack_1f0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_1f0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_200);
    }
    INetworkMsgProcess::GetNetworkCacheQueue();
    Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData();
    bVar2 = std::operator!=(this_00,asStack_208);
    if ((bVar2) && (bVar2 = std::operator!=(asStack_208,""), bVar2)) {
      TGAScrollbannerData::TGAScrollbannerData((TGAScrollbannerData *)aTStack_200);
      thunk_FUN_05475e00((TGAScrollbannerData *)aTStack_200,asStack_208);
      thunk_FUN_05475e00(auStack_1f8,this_00);
      pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      LogCacheInfo::LogCacheInfo((LogCacheInfo *)asStack_1f0,(LogCacheInfo *)aTStack_200);
      TGALogMgr::LogClearProfile(pTVar7,asStack_1f0);
      Sexy::PACommand::~PACommand((PACommand *)asStack_1f0);
      ShowClearProfileHint(this);
      Sexy::PACommand::~PACommand((PACommand *)aTStack_200);
    }
    else {
      DoContinuedLoginV202(this);
    }
    std::string::~string(asStack_208);
    FUN_054617bc(aDStack_178);
    S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult(aSStack_1e0);
  }
  else if (iVar3 == 0x501b) {
    SettingsDialog::SetIsACheatProfile(true);
    iVar3 = FUN_031dc0bc(400);
    iVar4 = FUN_031dc0bc(0xfa);
    pPVar8 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
    INetworkMsgProcess::GetNetworkCacheQueue();
    Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData();
    uVar5 = SettingsDialog::GetEncryptIndex();
    GetEncryptIDString(asStack_210,(string *)aSStack_1e0,uVar5);
    std::string::~string((string *)aSStack_1e0);
    Sexy::ToWString(asStack_210);
    TodStringTranslate(L"[PVZ_LOGIN_CHEAT_ERROR]");
    TodReplaceString((wstring *)aSStack_1e0,L"{UID}",(wstring *)asStack_208);
    FUN_05476c50((string *)aSStack_1e0);
    FUN_05478178((string *)aSStack_1e0,L"[REVIVE_TIP]",asStack_1f0);
    PVZ2UIDialog::SetHeaderLabel(pPVar8,(wstring *)aSStack_1e0);
    FUN_05476c50((string *)aSStack_1e0);
    nop();
    PVZ2UIDialog::SetFooterLabel(pPVar8,(wstring *)aTStack_200);
    pPVar9 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(pPVar8,pPVar9,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar9 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)aSStack_1e0,1);
    PVZ2UIDialog::SetFooterFont(pPVar8,pPVar9,(Color *)aSStack_1e0);
    PVZ2UIDialog::SetBackgroundDarken(pPVar8,true,0.5);
    FUN_05478178(asStack_1f0,L"[BUTTON_OK]",auStack_218);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_178,(string *)aSStack_1e0);
    PVZ2UIDialog::AddButton(pPVar8,asStack_1f0,aDStack_178,0);
    FUN_05476c50(asStack_1f0);
    nop();
    FUN_05476c50((wstring *)aTStack_200);
    FUN_05476c50((wstring *)asStack_208);
    std::string::~string(asStack_210);
  }
  else {
    if (iVar3 == 0x5034) {
      iVar3 = FUN_031dc0bc(400);
      iVar4 = FUN_031dc0bc(0xfa);
      pPVar8 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)aSStack_1e0,L"[REVIVE_TIP]",asStack_1f0);
      PVZ2UIDialog::SetHeaderLabel(pPVar8,(wstring *)aSStack_1e0);
      FUN_05476c50((wstring *)aSStack_1e0);
      nop();
      FUN_05478178((wstring *)aSStack_1e0,L"[PVZ_LOGIN_ERROR_TOKEN]",asStack_1f0);
      PVZ2UIDialog::SetFooterLabel(pPVar8,(wstring *)aSStack_1e0);
      FUN_05476c50((wstring *)aSStack_1e0);
      nop();
      pPVar9 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(pPVar8,pPVar9,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar9 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)aSStack_1e0,1);
      PVZ2UIDialog::SetFooterFont(pPVar8,pPVar9,(Color *)aSStack_1e0);
      PVZ2UIDialog::SetBackgroundDarken(pPVar8,true,0.5);
      FUN_05478178(asStack_1f0,L"[BUTTON_OK]",aTStack_200);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_178,(wstring *)aSStack_1e0);
      PVZ2UIDialog::AddButton(pPVar8,asStack_1f0,aDStack_178,0);
      FUN_05476c50(asStack_1f0);
      nop();
      goto LAB_031f48e8;
    }
    if (iVar3 == 0xafd6) {
      iVar3 = FUN_031dc0bc(400);
      iVar4 = FUN_031dc0bc(0xfa);
      pPVar8 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)aSStack_1e0,L"[REVIVE_TIP]",asStack_1f0);
      PVZ2UIDialog::SetHeaderLabel(pPVar8,(wstring *)aSStack_1e0);
      FUN_05476c50((wstring *)aSStack_1e0);
      nop();
      FUN_05478178((wstring *)aSStack_1e0,L"[PVZ_LOGIN_LOW_VERSION]",asStack_1f0);
      PVZ2UIDialog::SetFooterLabel(pPVar8,(wstring *)aSStack_1e0);
      FUN_05476c50((wstring *)aSStack_1e0);
      nop();
      pPVar9 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(pPVar8,pPVar9,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar9 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)aSStack_1e0,1);
      PVZ2UIDialog::SetFooterFont(pPVar8,pPVar9,(Color *)aSStack_1e0);
      PVZ2UIDialog::SetBackgroundDarken(pPVar8,true,0.5);
      FUN_05478178(asStack_1f0,L"[PVZ_LOGIN_GO_UPDATE]",aTStack_200);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::OnHandleUpdateGame);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_178,(wstring *)aSStack_1e0);
      PVZ2UIDialog::AddButton(pPVar8,asStack_1f0,aDStack_178,0);
      FUN_05476c50(asStack_1f0);
      nop();
      FUN_031dbef8(pPVar8 + 0x1c0);
      goto LAB_031f48e8;
    }
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,false);
    *(undefined4 *)(this + 8) = 2;
  }
  (**(code **)(*(long *)this + 0x2f0))(this,0xffffffff);
LAB_031f48e8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* androidNetworkMsgProcess::onRequestUUIDLogin(_NetWorkMsg const&) */

void __thiscall
androidNetworkMsgProcess::onRequestUUIDLogin(androidNetworkMsgProcess *this,_NetWorkMsg *param_1)

{
  string *psVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  size_t __n;
  char *__s;
  TGALogMgr *pTVar9;
  string *psVar10;
  PVZ2UIDialog *pPVar11;
  PrimeTypeface *pPVar12;
  PlayerInfo *this_00;
  size_t in_x2;
  undefined1 auStack_210 [8];
  string asStack_208 [8];
  wstring awStack_200 [8];
  TGABagData aTStack_1f8 [8];
  string asStack_1f0 [16];
  S2C_ICloud_LoginResult aSStack_1e0 [20];
  undefined4 local_1cc;
  long local_1c8;
  undefined1 auStack_1c0 [8];
  string asStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  androidNetworkMsgProcess local_1a0;
  undefined4 local_19c;
  int local_190;
  int local_188;
  androidNetworkMsgProcess local_184;
  Delegate0 aDStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  uVar2 = *(uint *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if (uVar2 == 0) {
    SettingsDialog::SetHaveSendV202(true);
    psVar10 = (string *)(this + 0x10);
    psVar1 = (string *)(this + 0xe48);
    S2C_ICloud_LoginResult::S2C_ICloud_LoginResult(aSStack_1e0);
    PlantPacketJsonConverter::SerializeJson
              ((PlantPacketJsonConverter *)aSStack_1e0,(string *)param_1);
    uVar7 = operator|(0x10,8);
    FUN_05462470(aDStack_178,uVar7);
    FUN_0546065c(auStack_168,local_1cc);
    FUN_05462824(asStack_1f0,aDStack_178);
    FUN_05474278(psVar10,asStack_1f0);
    std::string::~string(asStack_1f0);
    thunk_FUN_05475e00((string *)(this + 0x18),auStack_1c0);
    thunk_FUN_05475e00(this + 0xe40,auStack_1a8);
    thunk_FUN_05475e00(psVar1,auStack_1b0);
    this[0xe54] = local_1a0;
    this[0xe56] = local_184;
    this[0xe57] = (androidNetworkMsgProcess)0x1;
    lVar8 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
    FUN_031db2c0(local_19c,lVar8 + 0x134);
    SettingsDialog::SetEncryptIndex(local_190);
    INetworkMsgProcess::GetServerSignature();
    bVar3 = std::operator!=(asStack_1f0,asStack_1b8);
    std::string::~string(asStack_1f0);
    if (bVar3) {
      std::string::append(psVar10,"",in_x2);
      std::string::append((string *)(this + 0x18),"",in_x2);
    }
    __n = FUN_0547429c(psVar10);
    Sexy::OutputDebugStrF
              ((wchar_t *)"INetworkMsgProcess::onRequestUUIDLogin erro = [%d], userid = [%s]",
               (ulong)*(uint *)(param_1 + 8));
    Sexy::OutputDebugStrF((wchar_t *)"\nINIT SERVERTIME BY LOGIN = [%ld]\n",local_1c8);
    LawnApp::InitServerTimeOffset(gLawnApp,local_1c8);
    LawnApp::SetProfileCreatedTime((string *)gLawnApp);
    if (0 < local_188) {
      TGABagData::TGABagData(aTStack_1f8);
      DString::DString((DString *)asStack_1f0,local_188);
      __s = (char *)DString::c_str((DString *)asStack_1f0);
      std::string::append((string *)aTStack_1f8,__s,__n);
      DString::~DString((DString *)asStack_1f0);
      pTVar9 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGABagData::TGABagData((TGABagData *)asStack_1f0,aTStack_1f8);
      TGALogMgr::LogPlayerReturn(pTVar9,asStack_1f0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_1f0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_1f8);
    }
    psVar10 = (string *)INetworkMsgProcess::GetNetworkCacheQueue();
    AnimationController::SetDescription(psVar10);
    psVar10 = (string *)INetworkMsgProcess::GetNetworkCacheQueue();
    NetworkCacheQueue::setSessionKey(psVar10);
    INetworkMsgProcess::SaveCache();
    cVar4 = LawnApp::CheckProfileOpen();
    if (cVar4 == '\0') {
LAB_031f536c:
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,true);
      *(undefined4 *)(this + 8) = 3;
    }
    else {
      Sexy::LazySingleton<ProfileMgr>::GetInstance();
      iVar5 = ProfileMgr::GetNumProfiles();
      if (iVar5 == 0) {
        Sexy::OutputDebugStrF((wchar_t *)"ACLog - OnICloudRequstLogin No Local Profile");
        RequestDownloadPlayerData(this);
      }
      else {
        this_00 = (PlayerInfo *)ProfileUtils::Profile();
        cVar4 = PlayerInfo::UnserializeACLog(this_00,psVar1);
        if (cVar4 == '\0') {
          Sexy::OutputDebugStrF((wchar_t *)"ACLog - OnICloudRequstLogin Cheat Profile");
          RequestDownloadPlayerData(this);
        }
        else {
          cVar4 = FUN_0547419c(psVar1);
          if (cVar4 == '\0') {
            iVar5 = RequestSyncPlayerData(this);
            if (iVar5 != 2) goto LAB_031f536c;
            MessageRouter::Post<bool,bool>
                      ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,false);
            *(undefined4 *)(this + 8) = 2;
          }
          else {
            (**(code **)(*(long *)this + 0x2c8))(this);
            MessageRouter::Post<bool,bool>
                      ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,true);
            *(undefined4 *)(this + 8) = 3;
          }
        }
      }
    }
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyUUIDLogin,true);
    FUN_054617bc(aDStack_178);
    S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult(aSStack_1e0);
  }
  else if (uVar2 == 0x501b) {
    SettingsDialog::SetIsACheatProfile(true);
    iVar5 = FUN_031dc0bc(400);
    iVar6 = FUN_031dc0bc(0xfa);
    pPVar11 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar5,(float)iVar6,(PVZ2UIDialog *)0x0);
    INetworkMsgProcess::GetNetworkCacheQueue();
    Sexy::AndroidAsyncIOFileDriver::GetDataPathCacheData();
    uVar7 = SettingsDialog::GetEncryptIndex();
    GetEncryptIDString(asStack_208,(string *)aSStack_1e0,uVar7);
    std::string::~string((string *)aSStack_1e0);
    Sexy::ToWString(asStack_208);
    TodStringTranslate(L"[PVZ_LOGIN_CHEAT_ERROR]");
    TodReplaceString((wstring *)aSStack_1e0,L"{UID}",awStack_200);
    FUN_05476c50((string *)aSStack_1e0);
    FUN_05478178((string *)aSStack_1e0,L"[REVIVE_TIP]",asStack_1f0);
    PVZ2UIDialog::SetHeaderLabel(pPVar11,(wstring *)aSStack_1e0);
    FUN_05476c50((string *)aSStack_1e0);
    nop();
    PVZ2UIDialog::SetFooterLabel(pPVar11,(wstring *)aTStack_1f8);
    pPVar12 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(pPVar11,pPVar12,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar12 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow)
    ;
    Sexy::Color::Color((Color *)aSStack_1e0,1);
    PVZ2UIDialog::SetFooterFont(pPVar11,pPVar12,(Color *)aSStack_1e0);
    PVZ2UIDialog::SetBackgroundDarken(pPVar11,true,0.5);
    FUN_05478178(asStack_1f0,L"[BUTTON_OK]",auStack_210);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_178,(string *)aSStack_1e0);
    PVZ2UIDialog::AddButton(pPVar11,asStack_1f0,aDStack_178,0);
    FUN_05476c50(asStack_1f0);
    nop();
    FUN_05476c50((wstring *)aTStack_1f8);
    FUN_05476c50(awStack_200);
    std::string::~string(asStack_208);
  }
  else {
    if (uVar2 == 0xafd6) {
      iVar5 = FUN_031dc0bc(400);
      iVar6 = FUN_031dc0bc(0xfa);
      pPVar11 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar5,(float)iVar6,(PVZ2UIDialog *)0x0);
      FUN_05478178((wstring *)aSStack_1e0,L"[REVIVE_TIP]",asStack_1f0);
      PVZ2UIDialog::SetHeaderLabel(pPVar11,(wstring *)aSStack_1e0);
      FUN_05476c50((wstring *)aSStack_1e0);
      nop();
      FUN_05478178((wstring *)aSStack_1e0,L"[PVZ_LOGIN_LOW_VERSION]",asStack_1f0);
      PVZ2UIDialog::SetFooterLabel(pPVar11,(wstring *)aSStack_1e0);
      FUN_05476c50((wstring *)aSStack_1e0);
      nop();
      pPVar12 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
      PVZ2UIDialog::SetHeaderFont(pPVar11,pPVar12,(Color *)&PrimeText_Game::Color_Generic_Title);
      pPVar12 = (PrimeTypeface *)
                PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
      Sexy::Color::Color((Color *)aSStack_1e0,1);
      PVZ2UIDialog::SetFooterFont(pPVar11,pPVar12,(Color *)aSStack_1e0);
      PVZ2UIDialog::SetBackgroundDarken(pPVar11,true,0.5);
      FUN_05478178(asStack_1f0,L"[PVZ_LOGIN_GO_UPDATE]",aTStack_1f8);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::OnHandleUpdateGame);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_178,(wstring *)aSStack_1e0);
      PVZ2UIDialog::AddButton(pPVar11,asStack_1f0,aDStack_178,0);
      FUN_05476c50(asStack_1f0);
      nop();
      FUN_031dbef8(pPVar11 + 0x1c0);
      goto LAB_031f5144;
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)"INetworkMsgProcess::onRequestUUIDLogin erro = [%d]",(ulong)uVar2);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::LoginiCloudServerFinish,false);
    *(undefined4 *)(this + 8) = 2;
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyUUIDLogin,false);
  }
  (**(code **)(*(long *)this + 0x2f0))(this,0xffffffff);
LAB_031f5144:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* androidNetworkMsgProcess::CheckACLogOpen() */

byte __thiscall androidNetworkMsgProcess::CheckACLogOpen(androidNetworkMsgProcess *this)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(this + 0xe40);
  return bVar1 ^ 1;
}


/* androidNetworkMsgProcess::CheckACLogFirstLogin() */

void __thiscall androidNetworkMsgProcess::CheckACLogFirstLogin(androidNetworkMsgProcess *this)

{
  FUN_0547419c(this + 0xe48);
  return;
}

