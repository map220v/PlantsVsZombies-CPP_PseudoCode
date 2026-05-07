// Class: SecretGachaMgr


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::GetScreenType() */

void __thiscall SecretGachaMgr::GetScreenType(SecretGachaMgr *this)

{
  string *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_10 = 0;
  local_8 = ___stack_chk_guard;
  local_c = 0;
  Android::Graphics::GetScreenSizeInPixels
            (*(AndroidAppDriver **)(Sexy::gSexyAppBase + 0x10),&local_10,&local_c);
  if (2.1 <= (float)local_10 / (float)local_c) {
    std::string::string(in_x8,"Full");
    nop();
  }
  else if (1.5 <= (float)local_10 / (float)local_c) {
    std::string::string(in_x8,"Normal");
    nop();
  }
  else {
    std::string::string(in_x8,"Large");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecretGachaMgr::SetSelectId(int) */

void __thiscall SecretGachaMgr::SetSelectId(SecretGachaMgr *this,int param_1)

{
  *(int *)(this + 0x18) = param_1;
  return;
}


/* SecretGachaMgr::OnNetworkError(int, std::string const&) */

int SecretGachaMgr::OnNetworkError(int param_1,string *param_2)

{
  return param_1;
}


/* SecretGachaMgr::RemoveMainUI() */

void SecretGachaMgr::RemoveMainUI(void)

{
  UISecretGacha *this;
  
  this = (UISecretGacha *)UISecretGacha::get();
  if (this != (UISecretGacha *)0x0) {
    UISecretGacha::removeFromParent(this);
    return;
  }
  return;
}


/* SecretGachaMgr::IsUIActive() */

bool SecretGachaMgr::IsUIActive(void)

{
  long lVar1;
  
  lVar1 = UISecretGacha::get();
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::CreateMainUI(Sexy::TRect<int> const&, Sexy::Widget*) */

void __thiscall SecretGachaMgr::CreateMainUI(SecretGachaMgr *this,TRect *param_1,Widget *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)FUN_03de6518((float)*(int *)(param_1 + 8));
  fVar3 = (float)FUN_03de6518((float)*(int *)(param_1 + 0xc));
  Sexy::Insets::Insets(aIStack_18,0,0,(int)fVar2,(int)fVar3);
  uVar1 = UISecretGacha::create((TRect *)aIStack_18);
  (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SecretGachaMgr::~SecretGachaMgr() */

void __thiscall SecretGachaMgr::~SecretGachaMgr(SecretGachaMgr *this)

{
  *(undefined ***)this = &PTR__SecretGachaMgr_0677f3b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NetworkSecretGachaInfo::~NetworkSecretGachaInfo((NetworkSecretGachaInfo *)(this + 0x10));
  Sexy::LazySingleton<SecretGachaMgr>::~LazySingleton((LazySingleton<SecretGachaMgr> *)this);
  return;
}


/* SecretGachaMgr::~SecretGachaMgr() */

void __thiscall SecretGachaMgr::~SecretGachaMgr(SecretGachaMgr *this)

{
  ~SecretGachaMgr(this);
  AK::FreeHook(this);
  return;
}


/* SecretGachaMgr::SecretGachaMgr() */

void __thiscall SecretGachaMgr::SecretGachaMgr(SecretGachaMgr *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<SecretGachaMgr>::LazySingleton((LazySingleton<SecretGachaMgr> *)this);
  *(undefined ***)this = &PTR__SecretGachaMgr_0677f3b0;
  NetworkSecretGachaInfo::NetworkSecretGachaInfo((NetworkSecretGachaInfo *)(this + 0x10));
  this[8] = (SecretGachaMgr)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x60) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<SecretGachaMgr,void(SecretGachaMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNetworkError);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<SecretGachaMgr,void(SecretGachaMgr::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::SyncActivityData(NetworkSecretGachaInfo const&) */

void __thiscall
SecretGachaMgr::SyncActivityData(SecretGachaMgr *this,NetworkSecretGachaInfo *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NetworkSecretGachaInfo::operator=((NetworkSecretGachaInfo *)(this + 0x10),param_1);
  local_10 = LawnApp::GetRealBeijingTime(gLawnApp);
  piVar6 = (int *)LawnApp::BeijingTime(gLawnApp,&local_10);
  iVar1 = piVar6[1];
  iVar2 = piVar6[2];
  iVar3 = *piVar6;
  iVar5 = LawnApp::GetRealServerTime(gLawnApp);
  lVar4 = ___stack_chk_guard;
  *(int *)(this + 0x58) = ((iVar2 * -0xe10 + iVar1 * -0x3c) - iVar3) + 0x15180 + iVar5;
  if (local_8 == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::RequestGachaInit() */

void __thiscall SecretGachaMgr::RequestGachaInit(SecretGachaMgr *this)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    FUN_03de4548(this + 8);
  }
  else {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05752870,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::InitTestData() */

void __thiscall SecretGachaMgr::InitTestData(SecretGachaMgr *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_60;
  NetworkSecretGachaInfo aNStack_58 [8];
  int local_50 [2];
  vector<SecretGachaItem,std::allocator<SecretGachaItem>> avStack_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  vector<int,std::allocator<int>> avStack_28 [24];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NetworkSecretGachaInfo::NetworkSecretGachaInfo(aNStack_58);
  local_50[0] = 0x3f7;
  UnchartedModePlantNumData::UnchartedModePlantNumData
            ((UnchartedModePlantNumData *)&local_60,0x45f,10);
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::push_back
            (avStack_48,(SecretGachaItem *)&local_60);
  UnchartedModePlantNumData::UnchartedModePlantNumData
            ((UnchartedModePlantNumData *)&local_60,0x460,10);
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::push_back
            (avStack_48,(SecretGachaItem *)&local_60);
  UnchartedModePlantNumData::UnchartedModePlantNumData
            ((UnchartedModePlantNumData *)&local_60,0x461,10);
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::push_back
            (avStack_48,(SecretGachaItem *)&local_60);
  UnchartedModePlantNumData::UnchartedModePlantNumData
            ((UnchartedModePlantNumData *)&local_60,0x535,10);
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::push_back
            (avStack_48,(SecretGachaItem *)&local_60);
  UnchartedModePlantNumData::UnchartedModePlantNumData
            ((UnchartedModePlantNumData *)&local_60,0x536,10);
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::push_back
            (avStack_48,(SecretGachaItem *)&local_60);
  UnchartedModePlantNumData::UnchartedModePlantNumData
            ((UnchartedModePlantNumData *)&local_60,0x537,10);
  std::vector<SecretGachaItem,std::allocator<SecretGachaItem>>::push_back
            (avStack_48,(SecretGachaItem *)&local_60);
  local_30 = 0x32;
  local_2c = 5000;
  std::vector<int,std::allocator<int>>::push_back(avStack_28,local_50);
  local_60._0_4_ = 0x40d;
  std::vector<int,std::allocator<int>>::push_back(avStack_28,(int *)&local_60);
  local_60._0_4_ = 0x418;
  std::vector<int,std::allocator<int>>::push_back(avStack_28,(int *)&local_60);
  local_60._0_4_ = 0x40f;
  std::vector<int,std::allocator<int>>::push_back(avStack_28,(int *)&local_60);
  local_60._0_4_ = 0x410;
  std::vector<int,std::allocator<int>>::push_back(avStack_28,(int *)&local_60);
  local_60 = CONCAT44(local_60._4_4_,0x411);
  std::vector<int,std::allocator<int>>::push_back(avStack_28,(int *)&local_60);
  local_60 = LawnApp::GetRealBeijingTime(gLawnApp);
  piVar4 = (int *)LawnApp::BeijingTime(gLawnApp,(long *)&local_60);
  iVar1 = piVar4[1];
  iVar2 = piVar4[2];
  iVar3 = *piVar4;
  local_10 = LawnApp::GetRealServerTime(gLawnApp);
  local_10 = ((iVar2 * -0xe10 + iVar1 * -0x3c) - iVar3) + 0x15180 + local_10;
  SyncActivityData(this,aNStack_58);
  MessageRouter::Post<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::NotifySyncActivityData,true);
  NetworkSecretGachaInfo::~NetworkSecretGachaInfo(aNStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::NeedInit() */

void SecretGachaMgr::NeedInit(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  NetworkSecretGachaInfo aNStack_d8 [80];
  ActiveItem aAStack_88 [24];
  undefined1 local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  NetworkSecretGachaInfo::NetworkSecretGachaInfo(aNStack_d8);
  cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d8);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = local_70;
  }
  NetworkSecretGachaInfo::~NetworkSecretGachaInfo(aNStack_d8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::RefreshActivity() */

void __thiscall SecretGachaMgr::RefreshActivity(SecretGachaMgr *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  wstring awStack_128 [8];
  wstring awStack_120 [24];
  Delegate0 aDStack_108 [48];
  NetworkSecretGachaInfo aNStack_d8 [80];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  NetworkSecretGachaInfo::NetworkSecretGachaInfo(aNStack_d8);
  cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d8);
  pLVar1 = gLawnApp;
  if (cVar2 == '\0') {
    FUN_05478178(awStack_128,&DAT_056f11a8,auStack_138);
    FUN_05478178(awStack_120,L"[GACHA_ACTIVITY_DATA_ERROR]",auStack_130);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_128,awStack_120);
    FUN_05476c50(awStack_120);
    nop();
    FUN_05476c50(awStack_128);
    nop();
    FUN_05478178(awStack_128,L"[BUTTON_OK]",auStack_130);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_108,awStack_120);
    PVZ2UIDialog::AddButton(pPVar4,awStack_128,aDStack_108,1);
    FUN_05476c50(awStack_128);
    nop();
  }
  else if (local_70 != '\0') {
    SyncActivityData(this,aNStack_d8);
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifySyncActivityData,true);
    goto LAB_03de9e80;
  }
  pLVar1 = gLawnApp;
  FUN_05478178(awStack_128,&DAT_056f11a8,auStack_138);
  FUN_05478178(awStack_120,L"[GACHA_ACTIVITY_CLOSED]",auStack_130);
  pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_128,awStack_120);
  FUN_05476c50(awStack_120);
  nop();
  FUN_05476c50(awStack_128);
  nop();
  FUN_05478178(awStack_128,L"[BUTTON_OK]",auStack_130);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_108,awStack_120);
  PVZ2UIDialog::AddButton(pPVar4,awStack_128,aDStack_108,1);
  FUN_05476c50(awStack_128);
  nop();
LAB_03de9e80:
  NetworkSecretGachaInfo::~NetworkSecretGachaInfo(aNStack_d8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretGachaMgr::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
SecretGachaMgr::OnNotifyRefreshActivityList(SecretGachaMgr *this,bool param_1,set *param_2)

{
  LawnApp *this_00;
  bool bVar1;
  char cVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  int local_60 [2];
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_60[0] = 0x2a24;
    local_58 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_60);
    local_50[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_58,(rbtree_iterator *)local_50);
    if ((bVar1) && (cVar2 = LawnApp::IsStoreUIShowing(gLawnApp), cVar2 != '\0')) {
      RefreshActivity(this);
    }
  }
  else {
    FUN_05478178((wstring *)&local_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((wstring *)local_50,L"[GACHA_ACTIVITY_DATA_LOST]",local_60);
    pPVar3 = (PVZ2UIDialog *)
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
    PVZ2UIDialog::AddButton(pPVar3,(wstring *)&local_58,aDStack_38,1);
    FUN_05476c50((wstring *)&local_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

