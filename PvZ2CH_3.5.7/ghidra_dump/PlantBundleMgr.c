// Class: PlantBundleMgr


/* PlantBundleMgr::~PlantBundleMgr() */

void __thiscall PlantBundleMgr::~PlantBundleMgr(PlantBundleMgr *this)

{
  *(undefined ***)this = &PTR__PlantBundleMgr_06983470;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<PlantBundleMgr>::~LazySingleton((LazySingleton<PlantBundleMgr> *)this);
  return;
}


/* PlantBundleMgr::~PlantBundleMgr() */

void __thiscall PlantBundleMgr::~PlantBundleMgr(PlantBundleMgr *this)

{
  ~PlantBundleMgr(this);
  AK::FreeHook(this);
  return;
}


/* PlantBundleMgr::PlantBundleMgr() */

void __thiscall PlantBundleMgr::PlantBundleMgr(PlantBundleMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PlantBundleMgr>::LazySingleton((LazySingleton<PlantBundleMgr> *)this);
  *(undefined ***)this = &PTR__PlantBundleMgr_06983470;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<PlantBundleMgr,void(PlantBundleMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleMgr::requestNetwork() */

void PlantBundleMgr::requestNetwork(void)

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
              (avStack_50,&DAT_05755650,1,awStack_58);
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
/* PlantBundleMgr::RefreshActivity() */

void PlantBundleMgr::RefreshActivity(void)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PVZ2UIDialog *pPVar5;
  PlantBundleUI *this;
  Delegate0 *local_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  wstring awStack_120 [8];
  wstring awStack_118 [24];
  Delegate0 aDStack_100 [48];
  PlantBundleInfo aPStack_d0 [48];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  pLVar1 = gLawnApp;
  if (local_70 == '\0') {
    FUN_05478178(awStack_118,&DAT_056f11a8,auStack_128);
    FUN_05478178((wstring *)aPStack_d0,L"[PLANTBUNDLE_ACTIVITY_CLOSED]",awStack_120);
    pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_118,(wstring *)aPStack_d0);
    FUN_05476c50((wstring *)aPStack_d0);
    nop();
    FUN_05476c50(awStack_118);
    nop();
    FUN_05478178(awStack_118,L"[BUTTON_OK]",awStack_120);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_100,(wstring *)aPStack_d0);
    PVZ2UIDialog::AddButton(pPVar5,awStack_118,aDStack_100,1);
    FUN_05476c50(awStack_118);
    nop();
    goto LAB_04c286f0;
  }
  PlantBundleInfo::PlantBundleInfo(aPStack_d0);
  cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aPStack_d0);
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') {
    FUN_05478178(awStack_120,&DAT_056f11a8,auStack_130);
    FUN_05478178(awStack_118,L"[PLANTBUNDLE_ACTIVITY_DATA_ERROR]",auStack_128);
    pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_120,awStack_118);
    FUN_05476c50(awStack_118);
    nop();
    FUN_05476c50(awStack_120);
    nop();
    FUN_05478178(awStack_120,L"[BUTTON_OK]",auStack_128);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_100,awStack_118);
LAB_04c285e8:
    local_138 = aDStack_100;
    PVZ2UIDialog::AddButton(pPVar5,awStack_120,local_138,1);
    FUN_05476c50(awStack_120);
    nop();
  }
  else {
    lVar4 = FUN_04c24da4(local_a0,local_98);
    pLVar1 = gLawnApp;
    if (lVar4 == 0) {
      FUN_05478178(awStack_120,&DAT_056f11a8,auStack_130);
      FUN_05478178(awStack_118,L"[PLANTBUNDLE_ACTIVITY_EMPTY_CONFIG]",auStack_128);
      pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_120,awStack_118);
      FUN_05476c50(awStack_118);
      nop();
      FUN_05476c50(awStack_120);
      nop();
      FUN_05478178(awStack_120,L"[BUTTON_OK]",auStack_128);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_100,awStack_118);
      goto LAB_04c285e8;
    }
    LawnApp::ShowPlantBundleUI(gLawnApp);
    this = (PlantBundleUI *)LawnApp::GetPlantBundleUI(gLawnApp);
    PlantBundleUI::SyncActivityData(this,aPStack_d0);
  }
  PlantBundleInfo::~PlantBundleInfo(aPStack_d0);
LAB_04c286f0:
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBundleMgr::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PlantBundleMgr::OnNotifyRefreshActivityList(PlantBundleMgr *this,bool param_1,set *param_2)

{
  LawnApp *this_00;
  bool bVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  int local_60 [2];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_60[0] = 0x299d;
    local_58 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_60);
    local_50[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50);
    if (bVar1) {
      RefreshActivity();
    }
  }
  else {
    FUN_05478178((wstring *)&local_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((wstring *)local_50,L"[PLANTBUNDLE_ACTIVITY_DATA_LOST]",local_60);
    pPVar2 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(this_00,(wstring *)&local_58,(wstring *)local_50);
    FUN_05476c50((wstring *)local_50);
    nop();
    FUN_05476c50((wstring *)&local_58);
    nop();
    FUN_05478178((wstring *)&local_58,L"[BUTTON_OK]",local_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)local_50);
    PVZ2UIDialog::AddButton(pPVar2,(wstring *)&local_58,aDStack_38,1);
    FUN_05476c50((wstring *)&local_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

