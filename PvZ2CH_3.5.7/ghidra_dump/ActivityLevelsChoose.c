// Class: ActivityLevelsChoose


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::GetLayoutName() */

void __thiscall ActivityLevelsChoose::GetLayoutName(ActivityLevelsChoose *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ActivityLevelsChoose");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ActivityLevelsChoose::LookMonthlyCard(UIMessageBox*, int) */

void ActivityLevelsChoose::LookMonthlyCard(UIMessageBox *param_1,int param_2)

{
  if (UISingletonDialog<UIMessageBox>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIMessageBox>::m_pInstance + 0x318))();
    UISingletonDialog<UIMessageBox>::m_pInstance = (long *)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::ShowMonthlyCardUI(UIMessageBox*, int) */

void ActivityLevelsChoose::ShowMonthlyCardUI(UIMessageBox *param_1,int param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  std::string::string(asStack_10,"OpenMonthlyCardUI");
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityLevelsChoose::IsAdvertisementEnable(int) */

byte __thiscall ActivityLevelsChoose::IsAdvertisementEnable(ActivityLevelsChoose *this,int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *pPVar4;
  long lVar5;
  long *plVar6;
  
  if (((DAT_06b896c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b896c8), iVar3 != 0)) {
    DAT_06b897e0 = LawnApp::IsAdChannel(gLawnApp,3);
    __cxa_guard_release(&DAT_06b896c8);
  }
  if (((DAT_06b89568 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b89568), iVar3 != 0)) {
    plVar6 = (long *)EASquared::Instance();
    DAT_06b895a0 = (**(code **)(*plVar6 + 0xb8))(plVar6,0x2a97);
    __cxa_guard_release(&DAT_06b89568);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar5 = PlayerInfo::GetAdvertisementWatchTime(pPVar4,param_1 + 3);
  bVar2 = TimeUtil::IsToday(lVar5);
  iVar3 = PlayerInfo::GetFestivalGameLeftCount(pPVar4,param_1);
  bVar1 = 0;
  if (DAT_06b897e0 != '\0') {
    bVar1 = bVar2 < (iVar3 == 0) & DAT_06b895a0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::HaveOpenToday(std::vector<int, std::allocator<int> > const&) */

void __thiscall ActivityLevelsChoose::HaveOpenToday(ActivityLevelsChoose *this,vector *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_20 < 1) {
    bVar1 = false;
  }
  else {
    lVar2 = LawnApp::BeijingTime(gLawnApp,&local_20);
    local_18 = FUN_04ba94f0(*(undefined8 *)param_1);
    local_10 = FUN_04ba9540(*(undefined8 *)(param_1 + 8));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if ((!bVar1) ||
         (piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
         *(int *)(lVar2 + 0x18) == *piVar3)) break;
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ActivityLevelsChoose::WatchADAddChance(UIMessageBox*, int) */

void ActivityLevelsChoose::WatchADAddChance(UIMessageBox *param_1,int param_2)

{
  undefined4 uVar1;
  ADManager *pAVar2;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  param_1[0x138] = (UIMessageBox)0x1;
  if (*(int *)(param_1 + 0x134) != 1) {
    uVar1 = 0x1d;
    if (*(int *)(param_1 + 0x134) != 2) {
      uVar1 = 0x1e;
    }
    pAVar2 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
    ADManager::ShowAD(pAVar2,uVar1);
    return;
  }
  pAVar2 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
  ADManager::ShowAD(pAVar2,0x1c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::ActivityLevelsChoose() */

void __thiscall ActivityLevelsChoose::ActivityLevelsChoose(ActivityLevelsChoose *this)

{
  undefined *puVar1;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<ActivityLevelsChoose>::UISingletonDialog
            ((UISingletonDialog<ActivityLevelsChoose> *)this);
  *(undefined4 *)(this + 0x134) = 1;
  this[0x138] = (ActivityLevelsChoose)0x0;
  *(undefined ***)this = &PTR_GetClass_069762f0;
  *(undefined **)(this + 0xd8) = &DAT_06976640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x160));
  FUN_05476574(this + 0x188);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFestivalGameModeCountChange);
  local_e0 = local_b0;
  uStack_d8 = uStack_a8;
  local_d0 = local_a0;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::FestivalGameMode_CountChange);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFestivalGameModeLeftBuyTimesChange);
  local_f0 = local_88;
  MessageRouter::
  Subscribe<int,int,int,Sexy::CBMemberTranslatorX<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(int,int,int)>>
            ((MessageRouter *)puVar1,Message::FestivalGameMode_LeftBuyTimesChange,local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMonthlyCardBought);
  local_120 = local_80;
  uStack_118 = uStack_78;
  local_110 = local_70;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(bool)>>
            ((MessageRouter *)puVar1,Message::MonthlyCardBought,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMonthlyCardTrial);
  Sexy::Delegate0::Delegate0<ActivityLevelsChoose,void(ActivityLevelsChoose::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::MonthlyCardTrial,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_130 = local_58;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onADFinished);
  local_160 = local_50;
  uStack_158 = uStack_48;
  local_150 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyADWatchFinish,&local_160);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::clear
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x140));
  *(undefined4 *)(this + 0x158) = 0;
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x160))
  ;
  FUN_05478178(auStack_b8,&DAT_056f11a8,auStack_c0);
  FUN_054766c8(this + 0x188,auStack_b8);
  FUN_05476c50(auStack_b8);
  nop();
  std::vector<UIWidgetText*,std::allocator<UIWidgetText*>>::clear
            ((vector<UIWidgetText*,std::allocator<UIWidgetText*>> *)(this + 400));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityLevelsChoose::~ActivityLevelsChoose() */

void __thiscall ActivityLevelsChoose::~ActivityLevelsChoose(ActivityLevelsChoose *this)

{
  *(undefined ***)this = &PTR_GetClass_069762f0;
  *(undefined **)(this + 0xd8) = &DAT_06976640;
  std::vector<UIWidgetText*,std::allocator<UIWidgetText*>>::~vector
            ((vector<UIWidgetText*,std::allocator<UIWidgetText*>> *)(this + 400));
  FUN_05476c50(this + 0x188);
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x160));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0x140));
  UISingletonDialog<ActivityLevelsChoose>::~UISingletonDialog
            ((UISingletonDialog<ActivityLevelsChoose> *)this);
  return;
}


/* ActivityLevelsChoose::~ActivityLevelsChoose() */

void __thiscall ActivityLevelsChoose::~ActivityLevelsChoose(ActivityLevelsChoose *this)

{
  ~ActivityLevelsChoose(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::onADFinished(int) */

void __thiscall ActivityLevelsChoose::onADFinished(ActivityLevelsChoose *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  undefined4 uVar2;
  PVZ2UIDialog *pPVar3;
  NetworkMgr *this_01;
  INetworkMsgProcess *pIVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  wstring awStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 - 0x1cU < 3) && (this[0x138] != (ActivityLevelsChoose)0x0)) {
    this[0x138] = (ActivityLevelsChoose)0x0;
    cVar1 = LawnApp::IsNetworkModuleOK();
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_70,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_80);
      FUN_05478178(awStack_68,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_78);
      pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_70,awStack_68);
      FUN_05476c50(awStack_68);
      nop();
      FUN_05476c50(awStack_70);
      nop();
      FUN_05478178(awStack_70,L"[BUTTON_OK]",auStack_78);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_68);
      PVZ2UIDialog::AddButton(pPVar3,awStack_70,aDStack_38,1);
      FUN_05476c50(awStack_70);
      nop();
    }
    else {
      Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar2 = FUN_04ba8328(*(undefined4 *)(this + 0x134));
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)awStack_68);
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar4 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
      INetworkMsgProcess::ICloudRequestInstanceStatus
                (pIVar4,uVar2,2,
                 (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                  *)awStack_68,0,1);
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            *)awStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::BuyTimes(UIMessageBox*, int) */

void ActivityLevelsChoose::BuyTimes(UIMessageBox *param_1,int param_2)

{
  LawnApp *this;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar5;
  NetworkMgr *this_02;
  INetworkMsgProcess *pIVar6;
  PVZ2UIDialog *pPVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  wstring awStack_70 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  cVar1 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_70,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_80);
    FUN_05478178((wstring *)amStack_68,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_78);
    pPVar7 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_70,(wstring *)amStack_68);
    FUN_05476c50((wstring *)amStack_68);
    nop();
    FUN_05476c50(awStack_70);
    nop();
    FUN_05478178(awStack_70,L"[BUTTON_OK]",auStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)amStack_68);
    PVZ2UIDialog::AddButton(pPVar7,awStack_70,aDStack_38,1);
    FUN_05476c50(awStack_70);
    nop();
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar5 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar2 = FestivalManager::GetCanBuyTimes(uVar5,*(undefined4 *)(param_1 + 0x134));
    if (0 < iVar2) {
      uVar5 = Sexy::LazySingleton<FestivalManager>::GetInstance();
      iVar2 = FestivalManager::GetCurrentBuyPrice(uVar5,*(undefined4 *)(param_1 + 0x134));
      iVar3 = PlayerInfo::GetNumGems(this_01,false);
      if (iVar3 < iVar2) {
        LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      }
      else {
        Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar4 = FUN_04ba8328(*(undefined4 *)(param_1 + 0x134));
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_68);
        this_02 = (NetworkMgr *)NetworkMgr::Instance();
        pIVar6 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
        INetworkMsgProcess::ICloudRequestInstanceStatus(pIVar6,uVar4,2,amStack_68,0,0);
        std::
        map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
        ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                *)amStack_68);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::onMonthlyCardBought(bool) */

void __thiscall ActivityLevelsChoose::onMonthlyCardBought(ActivityLevelsChoose *this,bool param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05755310,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityLevelsChoose::onMonthlyCardTrial() */

void __thiscall ActivityLevelsChoose::onMonthlyCardTrial(ActivityLevelsChoose *this)

{
  onMonthlyCardBought(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::UpdateActivityLevelData(FestivalGameMode) */

void __thiscall
ActivityLevelsChoose::UpdateActivityLevelData(ActivityLevelsChoose *this,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  Widget *pWVar5;
  UIWidgetText *pUVar6;
  UIWidgetImage *pUVar7;
  UIWidgetText *this_00;
  UIWidgetText *pUVar8;
  PVZ2UIButton *pPVar9;
  ProfileMgr *this_01;
  PlayerInfo *pPVar10;
  FestivalManager *pFVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  undefined4 local_a4 [3];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78 [14];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a4[0] = param_2;
  psVar4 = (string *)
           std::
           map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
           ::operator[]((map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
                         *)&DAT_06b89530,(FestivalGameMode *)local_a4);
  pWVar5 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,psVar4);
  if (pWVar5 != (Widget *)0x0) {
    std::string::string(asStack_40,"OpenTime");
    pUVar6 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar5,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes_Bg");
    pUVar7 = UI::Dialog::GetChildWidget<UIWidgetImage>(pWVar5,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes");
    this_00 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar5,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes_Text");
    pUVar8 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar5,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes_Add");
    pPVar9 = UI::Dialog::GetChildWidget<PVZ2UIButton>(pWVar5,asStack_40);
    std::string::~string(asStack_40);
    nop();
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar10 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (pPVar10 != (PlayerInfo *)0x0) {
      pFVar11 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      cVar2 = FestivalManager::HasGameModeToday(pFVar11,local_a4[0]);
      if (cVar2 == '\0') {
        (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7);
        (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8,0);
        uVar17 = DAT_06b896b0 & 1;
        if (((DAT_06b896b0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b896b0), iVar3 != 0)) {
          std::string::string((string *)&DAT_06b89748,"[WEEK_SUNDAY]");
          nop();
          std::string::string((string *)&DAT_06b89750,"[WEEK_MONDAY]");
          nop();
          std::string::string((string *)&DAT_06b89758,"[WEEK_TUESDAY]");
          nop();
          std::string::string((string *)&DAT_06b89760,"[WEEK_WEDNESDAY]");
          nop();
          std::string::string((string *)&DAT_06b89768,"[WEEK_THURSDAY]");
          nop();
          std::string::string((string *)&DAT_06b89770,"[WEEK_FRIDAY]");
          nop();
          std::string::string((string *)&DAT_06b89778,"[WEEK_SATURDAY]");
          nop();
          __cxa_guard_release(&DAT_06b896b0);
          __cxa_atexit(FUN_04ba8188,uVar17,&DAT_06a88000);
        }
        uVar12 = Sexy::LazySingleton<FestivalManager>::GetInstance();
        FestivalManager::GetOpenDays((FestivalManager *)&local_90,uVar12,local_a4[0]);
        lVar13 = FUN_04ba835c(local_90,local_88);
        if (lVar13 == 0) {
          (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
        }
        else {
          TodStringTranslate(L"[FESTIVALGAME_OPEN_TIME]");
          uVar12 = local_90;
          lVar13 = FUN_04ba835c(local_90,local_88);
          if (lVar13 != 0) {
            lVar15 = 0;
            while( true ) {
              lVar1 = lVar15 + 1;
              piVar14 = (int *)FUN_04ba8374(uVar12,lVar15);
              Sexy::ToWString((string *)(&DAT_06b89748 + (long)*piVar14 * 8));
              TodStringTranslate((wstring *)local_78);
              thunk_FUN_05477668(auStack_98,asStack_40);
              FUN_05476c50(asStack_40);
              FUN_05476c50((wstring *)local_78);
              if (lVar1 == lVar13) break;
              uVar12 = local_90;
              lVar15 = lVar1;
              if (lVar1 != 0) {
                TodStringTranslate(L"[WEEK_DAY_SEPARATE]");
                thunk_FUN_05477668(auStack_98,asStack_40);
                FUN_05476c50(asStack_40);
                uVar12 = local_90;
              }
            }
          }
          PuzzleTip::SetTip(pUVar6,auStack_98);
          FUN_05476c50(auStack_98);
        }
        std::string::string(asStack_40,"UIButton_Choose");
        pPVar9 = UI::Dialog::GetChildWidget<PVZ2UIButton>(pWVar5,asStack_40);
        std::string::~string(asStack_40);
        nop();
        std::string::string(asStack_40,"IMAGE_UI_ACTIVITY_FESTIVAL_BTN_NOTOPEN");
        uVar12 = StringHelper::ToImage(asStack_40,false);
        std::string::~string(asStack_40);
        nop();
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,uVar12,1);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar12,1);
        PVZ2UIButton::SetDialogStates(pPVar9,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
        (**(code **)(*(long *)pPVar9 + 0x188))(pPVar9,1);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_90);
      }
      else {
        (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,0);
        pcVar16 = *(code **)(*(long *)pPVar9 + 0x158);
        uVar12 = Sexy::LazySingleton<FestivalManager>::GetInstance();
        iVar3 = FestivalManager::GetCanBuyTimes(uVar12,local_a4[0]);
        (*pcVar16)(pPVar9,iVar3 != 0);
        local_78[0] = PlayerInfo::GetFestivalGameLeftCount(pPVar10,local_a4[0]);
        std::to_string<ActivityTypeID>((ActivityTypeID *)local_78);
        UIWidgetText::SetString(this_00,asStack_40);
        std::string::~string(asStack_40);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::InitByActivityLevelData(FestivalGameMode) */

void __thiscall
ActivityLevelsChoose::InitByActivityLevelData(ActivityLevelsChoose *this,int param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  string *psVar5;
  Widget *pWVar6;
  UIWidgetText *pUVar7;
  UIWidgetImage *pUVar8;
  UIWidgetText *this_00;
  UIWidgetText *pUVar9;
  PVZ2UIButton *pPVar10;
  Widget *pWVar11;
  ProfileMgr *this_01;
  PlayerInfo *pPVar12;
  FestivalManager *pFVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  int local_a4 [3];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78 [14];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a4[0] = param_2;
  psVar5 = (string *)
           std::
           map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
           ::operator[]((map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
                         *)&DAT_06b89530,(FestivalGameMode *)local_a4);
  pWVar6 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,psVar5);
  if (pWVar6 != (Widget *)0x0) {
    std::string::string(asStack_40,"OpenTime");
    pUVar7 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar6,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes_Bg");
    pUVar8 = UI::Dialog::GetChildWidget<UIWidgetImage>(pWVar6,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes");
    this_00 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar6,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes_Text");
    pUVar9 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar6,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"LeftTimes_Add");
    pPVar10 = UI::Dialog::GetChildWidget<PVZ2UIButton>(pWVar6,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"Widget_Ads");
    pWVar11 = UI::Dialog::GetChildWidget<Sexy::Widget>(pWVar6,asStack_40);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)pWVar11 + 0x158))(pWVar11,0);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (pPVar12 != (PlayerInfo *)0x0) {
      pFVar13 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      cVar2 = FestivalManager::HasGameModeToday(pFVar13,local_a4[0]);
      if (cVar2 == '\0') {
        (**(code **)(*(long *)pUVar8 + 0x158))(pUVar8);
        (**(code **)(*(long *)pUVar9 + 0x158))(pUVar9,0);
        uVar19 = DAT_06b89528 & 1;
        if (((DAT_06b89528 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b89528), iVar3 != 0)) {
          std::string::string((string *)&DAT_06b897a8,"[WEEK_SUNDAY]");
          nop();
          std::string::string((string *)&DAT_06b897b0,"[WEEK_MONDAY]");
          nop();
          std::string::string((string *)&DAT_06b897b8,"[WEEK_TUESDAY]");
          nop();
          std::string::string((string *)&DAT_06b897c0,"[WEEK_WEDNESDAY]");
          nop();
          std::string::string((string *)&DAT_06b897c8,"[WEEK_THURSDAY]");
          nop();
          std::string::string((string *)&DAT_06b897d0,"[WEEK_FRIDAY]");
          nop();
          std::string::string((string *)&DAT_06b897d8,"[WEEK_SATURDAY]");
          nop();
          __cxa_guard_release(&DAT_06b89528);
          __cxa_atexit(FUN_04ba81c0,uVar19,&DAT_06a88000);
        }
        uVar14 = Sexy::LazySingleton<FestivalManager>::GetInstance();
        FestivalManager::GetOpenDays((FestivalManager *)&local_90,uVar14,local_a4[0]);
        lVar16 = FUN_04ba835c(local_90,local_88);
        if (lVar16 == 0) {
          (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
        }
        else {
          TodStringTranslate(L"[FESTIVALGAME_OPEN_TIME]");
          uVar14 = local_90;
          lVar16 = FUN_04ba835c(local_90,local_88);
          if (lVar16 != 0) {
            lVar17 = 0;
            while( true ) {
              lVar1 = lVar17 + 1;
              piVar15 = (int *)FUN_04ba8374(uVar14,lVar17);
              Sexy::ToWString((string *)(&DAT_06b897a8 + (long)*piVar15 * 8));
              TodStringTranslate((wstring *)local_78);
              thunk_FUN_05477668(auStack_98,asStack_40);
              FUN_05476c50(asStack_40);
              FUN_05476c50((ActivityTypeID *)local_78);
              if (lVar1 == lVar16) break;
              uVar14 = local_90;
              lVar17 = lVar1;
              if (lVar1 != 0) {
                TodStringTranslate(L" ");
                thunk_FUN_05477668(auStack_98,asStack_40);
                FUN_05476c50(asStack_40);
                uVar14 = local_90;
              }
            }
          }
          PuzzleTip::SetTip(pUVar7,auStack_98);
          FUN_05476c50(auStack_98);
        }
        std::string::string(asStack_40,"UIButton_Choose");
        pPVar10 = UI::Dialog::GetChildWidget<PVZ2UIButton>(pWVar6,asStack_40);
        std::string::~string(asStack_40);
        nop();
        std::string::string(asStack_40,"IMAGE_UI_ACTIVITY_FESTIVAL_BTN_NOTOPEN");
        uVar14 = StringHelper::ToImage(asStack_40,false);
        std::string::~string(asStack_40);
        nop();
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,uVar14,2);
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,uVar14,2);
        PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)local_78,(PVZ2UIImage *)asStack_40);
        (**(code **)(*(long *)pPVar10 + 0x188))(pPVar10,1);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_90);
      }
      else {
        (**(code **)(*(long *)pUVar7 + 0x158))(pUVar7,0);
        pcVar18 = *(code **)(*(long *)pPVar10 + 0x158);
        uVar14 = Sexy::LazySingleton<FestivalManager>::GetInstance();
        iVar3 = FestivalManager::GetCanBuyTimes(uVar14,local_a4[0]);
        (*pcVar18)(pPVar10,iVar3 != 0);
        local_78[0] = PlayerInfo::GetFestivalGameLeftCount(pPVar12,local_a4[0]);
        std::to_string<ActivityTypeID>((ActivityTypeID *)local_78);
        UIWidgetText::SetString(this_00,asStack_40);
        std::string::~string(asStack_40);
        cVar2 = IsAdvertisementEnable(this,local_a4[0]);
        if (cVar2 == '\0') {
          uVar4 = FUN_04ba8c80(0x28);
          *(undefined4 *)(pUVar9 + 0x4c) = uVar4;
          uVar4 = FUN_04ba8c80(0x28);
          *(undefined4 *)(pUVar8 + 0x4c) = uVar4;
        }
        else {
          uVar4 = FUN_04ba8c80(0xf);
          *(undefined4 *)(pUVar9 + 0x4c) = uVar4;
          uVar4 = FUN_04ba8c80(0xf);
          lVar16 = *(long *)pWVar11;
          *(undefined4 *)(pUVar8 + 0x4c) = uVar4;
          (**(code **)(lVar16 + 0x158))(pWVar11,1);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ActivityLevelsChoose::InitData() */

void __thiscall ActivityLevelsChoose::InitData(ActivityLevelsChoose *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_06a88de0;
  do {
    puVar2 = puVar1 + 1;
    InitByActivityLevelData(this,*puVar1);
    puVar1 = puVar2;
  } while (puVar2 != (undefined4 *)0x6a88dec);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::OnCreate() */

void __thiscall ActivityLevelsChoose::OnCreate(ActivityLevelsChoose *this)

{
  char cVar1;
  Widget *pWVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"Dialog");
    pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    UI::Dialog::setWindowCenter((Dialog *)this,pWVar2);
    std::string::~string(asStack_10);
    nop();
    InitData(this);
    MessageRouter::Post<std::string_const&,char_const*>
              ((MessageRouter *)gMessageRouter,Message::SummerActivity,"Daily_Boss");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* ActivityLevelsChoose::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void ActivityLevelsChoose::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  if (((ulong)param_2 & 0xff) == 0) {
    return;
  }
  InitData((ActivityLevelsChoose *)(ulong)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::onFestivalGameModeLeftBuyTimesChange(int, int, int) */

void ActivityLevelsChoose::onFestivalGameModeLeftBuyTimesChange(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  FestivalManager *pFVar2;
  Activity_Level_Data *this;
  string *psVar3;
  Widget *pWVar4;
  PVZ2UIButton *pPVar5;
  code *pcVar6;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar2 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  this = (Activity_Level_Data *)FestivalManager::GetChooseByMode(pFVar2,param_2);
  if (this != (Activity_Level_Data *)0x0) {
    *(int *)(this + 8) = param_3;
    local_10[0] = param_2;
    psVar3 = (string *)
             std::
             map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
             ::operator[]((map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
                           *)&DAT_06b89530,(string *)local_10);
    pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)(ulong)(uint)param_1,psVar3);
    if (pWVar4 != (Widget *)0x0) {
      std::string::string((string *)local_10,"LeftTimes_Add");
      pPVar5 = UI::Dialog::GetChildWidget<PVZ2UIButton>(pWVar4,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      pcVar6 = *(code **)(*(long *)pPVar5 + 0x158);
      uVar1 = Activity_Level_Data::CanBuyTimes(this);
      (*pcVar6)(pPVar5,uVar1);
    }
  }
  InitData((ActivityLevelsChoose *)(ulong)(uint)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::onFestivalGameModeCountChange(int, int) */

void __thiscall
ActivityLevelsChoose::onFestivalGameModeCountChange
          (ActivityLevelsChoose *this,int param_1,int param_2)

{
  FestivalManager *pFVar1;
  long lVar2;
  string *psVar3;
  Widget *pWVar4;
  UIWidgetText *this_00;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  lVar2 = FestivalManager::GetChooseByMode(pFVar1,param_1);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 4) = param_2;
    local_10[0] = param_1;
    psVar3 = (string *)
             std::
             map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
             ::operator[]((map<FestivalGameMode,std::string,std::less<FestivalGameMode>,std::allocator<std::pair<FestivalGameMode_const,std::string>>>
                           *)&DAT_06b89530,(string *)local_10);
    pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,psVar3);
    if (pWVar4 != (Widget *)0x0) {
      std::string::string((string *)local_10,"LeftTimes");
      this_00 = UI::Dialog::GetChildWidget<UIWidgetText>(pWVar4,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 4));
      UIWidgetText::SetString(this_00,(string *)local_10);
      std::string::~string((string *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::ButtonDepress(int) */

void __thiscall ActivityLevelsChoose::ButtonDepress(ActivityLevelsChoose *this,int param_1)

{
  bool bVar1;
  LawnApp *this_00;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FestivalManager *pFVar8;
  Activity_Level_Data *this_01;
  ADManager *pAVar9;
  ProfileMgr *pPVar10;
  PlayerInfo *pPVar11;
  UIMessageBox *this_02;
  undefined8 uVar12;
  PVZ2UIButton *pPVar13;
  wchar_t *pwVar14;
  long *plVar15;
  PVZ2UIDialog *pPVar16;
  TGALogMgr *pTVar17;
  char *__s;
  NetworkMgr *this_03;
  INetworkMsgProcess *pIVar18;
  code *pcVar19;
  undefined1 auStack_90 [8];
  wstring awStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  string asStack_68 [48];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (6 < param_1) {
    if (param_1 - 10000U < 3) {
      *(uint *)(this + 0x158) = param_1 - 10000U;
      cVar2 = LawnApp::IsNetworkModuleOK();
      if (cVar2 != '\0') {
        plVar15 = (long *)EASquared::Instance();
        pcVar19 = *(code **)(*plVar15 + 0x28);
        std::string::string((string *)awStack_70,"ChallengeAdvertisement");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onAdsFinish);
        Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
        Delegate1<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
                  ((Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> *)aDStack_38,
                   (DString *)asStack_68);
        (*pcVar19)(plVar15,(string *)awStack_70,
                   (Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> *)aDStack_38,0,3
                   ,0x2a97);
        std::string::~string((string *)awStack_70);
        nop();
        iVar4 = (&DAT_06a88de0)[param_1 + -1];
        pTVar17 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        std::string::string((string *)awStack_88,"1");
        DString::DString((DString *)asStack_68,iVar4);
        __s = (char *)DString::c_str((DString *)asStack_68);
        std::string::string(asStack_80,__s);
        std::string::string((string *)awStack_78,"");
        std::string::string((string *)awStack_70,"");
        TGALogMgr::LogAD(pTVar17,(string *)awStack_88,asStack_80,0x2a97,(string *)awStack_78,
                         (string *)awStack_70);
        std::string::~string((string *)awStack_70);
        nop();
        std::string::~string((string *)awStack_78);
        nop();
        std::string::~string(asStack_80);
        nop();
        DString::~DString((DString *)asStack_68);
        std::string::~string((string *)awStack_88);
        nop();
      }
    }
    goto LAB_04bad26c;
  }
  if (param_1 < 4) {
    if (param_1 != 0) {
      if (param_1 < 0) goto LAB_04bad26c;
      uVar7 = (&DAT_06a88de0)[param_1 + -1];
      *(undefined4 *)(this + 0x134) = uVar7;
      pFVar8 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
      this_01 = (Activity_Level_Data *)FestivalManager::GetChooseByMode(pFVar8,uVar7);
      if (this_01 == (Activity_Level_Data *)0x0) goto LAB_04bad26c;
      if (*(int *)(this + 0x134) == 1) {
        uVar7 = 0x1c;
      }
      else {
        uVar7 = 0x1d;
        if (*(int *)(this + 0x134) != 2) {
          uVar7 = 0x1e;
        }
      }
      pAVar9 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
      cVar2 = ADManager::CanWatchAD(pAVar9,uVar7);
      if (cVar2 == '\0') {
        FUN_05478178(awStack_88,L"[FESTIVALGAME_LEFTTIME_TIP]",asStack_68);
        nop();
        pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
        cVar3 = PlayerInfo::IsMonthlyCardActivated(pPVar11,2);
        bVar1 = false;
        if (cVar3 != '\0') {
          pwVar14 = L"[FESTIVALGAME_MONTHLY_CARD_LEFTTIME_TIP]";
          goto LAB_04bad528;
        }
      }
      else {
        FUN_05478178(awStack_88,L"[FESTIVALGAME_LEFTTIME_TIP_AD]",asStack_68);
        nop();
        pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar11 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
        cVar3 = PlayerInfo::IsMonthlyCardActivated(pPVar11,2);
        bVar1 = false;
        if (cVar3 != '\0') {
          pwVar14 = L"[FESTIVALGAME_MONTHLY_CARD_LEFTTIME_TIP_AD]";
LAB_04bad528:
          bVar1 = true;
          FUN_054772c4(awStack_88,pwVar14);
        }
      }
      iVar4 = Activity_Level_Data::GetCurrentPrice(this_01);
      TodReplaceNumberString(awStack_88,L"{GEM_COUNT}",iVar4);
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        pAVar9 = (ADManager *)Sexy::LazySingleton<ADManager>::GetInstance();
        iVar4 = ADManager::GetLeftADWatchCount(pAVar9,uVar7);
        FUN_05478178(awStack_78,L"[LEFT_AD_COUNT]",asStack_68);
        nop();
        TodReplaceNumberString(awStack_78,L"{NUMBER}",iVar4);
        FUN_054766c8(awStack_78,asStack_68);
        FUN_05476c50(asStack_68);
        UIMessageBox::SetADMessage(this_02,awStack_78);
        uVar12 = FUN_054766ec(asStack_80);
        FUN_05478178(asStack_68,uVar12,auStack_90);
        TodStringTranslate(L"[SALES_SECOND_CONFIRM_TITLE]");
        UIMessageBox::SetMessage(this_02,(wstring *)asStack_68,awStack_70);
        FUN_05476c50(awStack_70);
        FUN_05476c50(asStack_68);
        nop();
        UIMessageBox::SetShowType(this_02,1);
        std::string::string(asStack_68,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
        UIMessageBox::SetBackground(this_02,asStack_68);
        std::string::~string(asStack_68);
        nop();
        UIMessageBox::SetBackgroundDarken(this_02,true,0.5);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,BuyTimes);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_68);
        UIMessageBox::SetCallback(this_02,aDStack_38);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,WatchADAddChance);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_68);
        UIMessageBox::SetCancelCallback(this_02,aDStack_38);
        if (bVar1) {
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,LookMonthlyCard);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(UIMessageBox*,int)>
                    (aDStack_38,asStack_68);
          UIMessageBox::SetExtraCallback(this_02,aDStack_38);
          pPVar13 = (PVZ2UIButton *)UIMessageBox::GetButtonExtra(this_02);
          pwVar14 = L"[LET_ME_THINK]";
        }
        else {
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,ShowMonthlyCardUI);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(UIMessageBox*,int)>
                    (aDStack_38,asStack_68);
          UIMessageBox::SetExtraCallback(this_02,aDStack_38);
          pPVar13 = (PVZ2UIButton *)UIMessageBox::GetButtonExtra(this_02);
          pwVar14 = L"[LOOK_MONTHLY_CARD]";
        }
        TodStringTranslate(pwVar14);
        PVZ2UIButton::SetLabelText(pPVar13,(wstring *)asStack_68);
        FUN_05476c50(asStack_68);
        uVar5 = FUN_04ba8c80(0x50);
        uVar6 = FUN_04ba8c80(0x44);
        uVar7 = 4;
        if (cVar2 == '\0') {
          uVar7 = 3;
        }
        UIMessageBox::SetNewBackground(this_02,uVar5,uVar6,uVar7);
        plVar15 = (long *)UIMessageBox::GetButtonLeft(this_02);
        pcVar19 = *(code **)(*plVar15 + 800);
        uVar12 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
        (*pcVar19)(plVar15,uVar12);
        plVar15 = (long *)UIMessageBox::GetButtonRight(this_02);
        pcVar19 = *(code **)(*plVar15 + 800);
        uVar12 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
        (*pcVar19)(plVar15,uVar12);
        plVar15 = (long *)UIMessageBox::GetButtonExtra(this_02);
        pcVar19 = *(code **)(*plVar15 + 800);
        uVar12 = PrimeText_PotentialTypeface::Typeface
                           (PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
        (*pcVar19)(plVar15,uVar12);
        FUN_05478178(awStack_70,L"[PLANT_ADV_BUY_GEM_FINISH_COUNT]",asStack_68);
        nop();
        iVar4 = Activity_Level_Data::GetCurrentPrice(this_01);
        TodReplaceNumberString(awStack_70,L"{GEM_COUNT}",iVar4);
        FUN_054766c8(awStack_70,asStack_68);
        FUN_05476c50(asStack_68);
        pPVar13 = (PVZ2UIButton *)UIMessageBox::GetButtonLeft(this_02);
        PVZ2UIButton::SetLabelText(pPVar13,awStack_70);
        FUN_05476c50(awStack_70);
        FUN_05476c50(awStack_78);
      }
      FUN_05476c50(asStack_80);
      FUN_05476c50(awStack_88);
      goto LAB_04bad26c;
    }
  }
  else {
    uVar7 = (&DAT_06a88de0)[param_1 + -4];
    cVar2 = LawnApp::IsNetworkModuleOK();
    this_00 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(awStack_70,L"[NETWORK_NOT_CONNECTED_TITLE]",asStack_80);
      FUN_05478178((wstring *)asStack_68,L"[NETWORK_NOT_CONNECTED_TEXT]",awStack_78);
      pPVar16 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_70,(wstring *)asStack_68);
      FUN_05476c50((wstring *)asStack_68);
      nop();
      FUN_05476c50(awStack_70);
      nop();
      FUN_05478178(awStack_70,L"[BUTTON_OK]",awStack_78);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                ((Delegate0 *)aDStack_38,(wstring *)asStack_68);
      PVZ2UIDialog::AddButton(pPVar16,awStack_70,(Delegate0 *)aDStack_38,1);
      FUN_05476c50(awStack_70);
      nop();
    }
    else {
      Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar7 = FUN_04ba8328(uVar7);
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)asStack_68);
      this_03 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar18 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
      INetworkMsgProcess::ICloudRequestInstanceStatus
                (pIVar18,uVar7,0,
                 (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
                  *)asStack_68,0,0);
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            *)asStack_68);
    }
  }
  UISingletonDialog<ActivityLevelsChoose>::CloseDialog();
LAB_04bad26c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to ActivityLevelsChoose::ButtonDepress(int) */

void __thiscall ActivityLevelsChoose::ButtonDepress(ActivityLevelsChoose *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityLevelsChoose::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall ActivityLevelsChoose::onAdsFinish(ActivityLevelsChoose *this,int param_2)

{
  TGALogMgr *pTVar1;
  char *pcVar2;
  string *this_00;
  DNetwork *this_01;
  undefined8 uVar3;
  ProfileMgr *this_02;
  PlayerInfo *pPVar4;
  string *this_03;
  string asStack_d50 [8];
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  string asStack_d18 [48];
  DString aDStack_ce8 [360];
  string asStack_b80 [2936];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"ActivityLevelsChoose::onAdsFinish %d");
  if (param_2 == 0) {
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_d50,"2");
    this_03 = asStack_d48;
    DString::DString(aDStack_ce8,*(int *)(this + 0x158));
    pcVar2 = (char *)DString::c_str(aDStack_ce8);
    std::string::string(this_03,pcVar2);
    std::string::string(asStack_d40,"");
    std::string::string(asStack_d18,"");
    TGALogMgr::LogAD(pTVar1,asStack_d50,this_03,0x2a97,asStack_d40,asStack_d18);
    std::string::~string(asStack_d18);
    nop();
    std::string::~string(asStack_d40);
    nop();
    std::string::~string(this_03);
    nop();
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d50);
    nop();
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_d18);
    std::string::string(asStack_d40,"i");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)asStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0x158) + 0x2905);
    pcVar2 = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,pcVar2,(size_t)this_03);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_04ba8c24(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_b80,(map *)asStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    uVar3 = LawnApp::GetRealServerTime(gLawnApp);
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    PlayerInfo::UpdateAdvertisementWatchTimeInfo(pPVar4,*(int *)(this + 0x158) + 3,uVar3,1);
    InitData(this);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_d18);
  }
  else {
    pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_d50,"4");
    DString::DString(aDStack_ce8,*(int *)(this + 0x158));
    pcVar2 = (char *)DString::c_str(aDStack_ce8);
    std::string::string(asStack_d48,pcVar2);
    std::string::string(asStack_d40,"");
    std::string::string(asStack_d18,"");
    TGALogMgr::LogAD(pTVar1,asStack_d50,asStack_d48,0x2a97,asStack_d40,asStack_d18);
    std::string::~string(asStack_d18);
    nop();
    std::string::~string(asStack_d40);
    nop();
    std::string::~string(asStack_d48);
    nop();
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

