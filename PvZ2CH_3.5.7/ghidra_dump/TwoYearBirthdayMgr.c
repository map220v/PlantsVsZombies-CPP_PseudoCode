// Class: TwoYearBirthdayMgr


/* TwoYearBirthdayMgr::~TwoYearBirthdayMgr() */

void __thiscall TwoYearBirthdayMgr::~TwoYearBirthdayMgr(TwoYearBirthdayMgr *this)

{
  *(undefined ***)this = &PTR__TwoYearBirthdayMgr_069824e0;
  Sexy::LazySingleton<TwoYearBirthdayMgr>::~LazySingleton((LazySingleton<TwoYearBirthdayMgr> *)this)
  ;
  return;
}


/* TwoYearBirthdayMgr::~TwoYearBirthdayMgr() */

void __thiscall TwoYearBirthdayMgr::~TwoYearBirthdayMgr(TwoYearBirthdayMgr *this)

{
  ~TwoYearBirthdayMgr(this);
  AK::FreeHook(this);
  return;
}


/* TwoYearBirthdayMgr::TwoYearBirthdayMgr() */

void __thiscall TwoYearBirthdayMgr::TwoYearBirthdayMgr(TwoYearBirthdayMgr *this)

{
  Sexy::LazySingleton<TwoYearBirthdayMgr>::LazySingleton((LazySingleton<TwoYearBirthdayMgr> *)this);
  *(undefined ***)this = &PTR__TwoYearBirthdayMgr_069824e0;
  return;
}


/* TwoYearBirthdayMgr::NeedShowChannelActivity() */

void TwoYearBirthdayMgr::NeedShowChannelActivity(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  PurchaseBroker *this_00;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this);
  PurchaseBroker::NeedShowChannelActivity(this_00);
  return;
}


/* TwoYearBirthdayMgr::GetChannelID() */

void __thiscall TwoYearBirthdayMgr::GetChannelID(TwoYearBirthdayMgr *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost(this_00);
  PurchaseBroker::GetChannelID();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthdayMgr::requestNetwork() */

void TwoYearBirthdayMgr::requestNetwork(void)

{
  LawnApp *this;
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)avStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)avStack_50);
    FUN_05476c50((wstring *)avStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)avStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_50,&DAT_05755620,1,awStack_58);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_50,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TwoYearBirthdayMgr::RefreshActivity(bool) */

void __thiscall TwoYearBirthdayMgr::RefreshActivity(TwoYearBirthdayMgr *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  TwoYearBirthday *this_00;
  PVZ2UIDialog *pPVar5;
  Delegate0 *local_118;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  wstring awStack_f8 [8];
  wstring awStack_f0 [24];
  wstring awStack_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  Delegate0 aDStack_b8 [48];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    FUN_05478178(awStack_f0,&DAT_056f11a8,auStack_100);
    FUN_05478178(awStack_d8,L"[WECHAT_ACTIVITY_DATA_LOST]",awStack_f8);
    pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_f0,awStack_d8);
    FUN_05476c50(awStack_d8);
    nop();
    FUN_05476c50(awStack_f0);
    nop();
    FUN_05478178(awStack_f0,L"[BUTTON_OK]",awStack_f8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>((Delegate0 *)aAStack_88,awStack_d8);
    PVZ2UIDialog::AddButton(pPVar5,awStack_f0,(Delegate0 *)aAStack_88,1);
    FUN_05476c50(awStack_f0);
    nop();
    goto LAB_04c22540;
  }
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  if (local_70 != '\0') {
    WechatRewardInfo::WechatRewardInfo((WechatRewardInfo *)awStack_d8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)awStack_d8);
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(awStack_f8,&DAT_056f11a8,auStack_108);
      FUN_05478178(awStack_f0,L"[WECHAT_ACTIVITY_DATA_ERROR]",auStack_100);
      pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_f8,awStack_f0);
      FUN_05476c50(awStack_f0);
      nop();
      FUN_05476c50(awStack_f8);
      nop();
      FUN_05478178(awStack_f8,L"[BUTTON_OK]",auStack_100);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_b8,awStack_f0);
LAB_04c22778:
      local_118 = aDStack_b8;
      PVZ2UIDialog::AddButton(pPVar5,awStack_f8,local_118,1);
      FUN_05476c50(awStack_f8);
      nop();
    }
    else {
      lVar4 = FUN_04c1dad0(local_d0,local_c8);
      pLVar1 = gLawnApp;
      if (lVar4 == 0) {
        FUN_05478178(awStack_f8,&DAT_056f11a8,auStack_108);
        FUN_05478178(awStack_f0,L"[WECHAT_ACTIVITY_EMPTY_CONFIG]",auStack_100);
        pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_f8,awStack_f0);
        FUN_05476c50(awStack_f0);
        nop();
        FUN_05476c50(awStack_f8);
        nop();
        FUN_05478178(awStack_f8,L"[BUTTON_OK]",auStack_100);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_b8,awStack_f0);
        goto LAB_04c22778;
      }
      LawnApp::ShowTwoYearBirthday(gLawnApp);
      this_00 = (TwoYearBirthday *)LawnApp::GetTwoYearBirthday(gLawnApp);
      TwoYearBirthday::SyncActivityData(this_00,(WechatRewardInfo *)awStack_d8);
    }
    WechatRewardInfo::~WechatRewardInfo((WechatRewardInfo *)awStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
LAB_04c22540:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

