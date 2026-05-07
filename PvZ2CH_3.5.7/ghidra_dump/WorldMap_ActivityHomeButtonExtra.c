// Class: WorldMap_ActivityHomeButtonExtra


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::CheckFirstRechargeActivityTips() */

void WorldMap_ActivityHomeButtonExtra::CheckFirstRechargeActivityTips(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  vector *pvVar4;
  long lVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar3 = PlayerInfo::GetNumRechargeCurrency(this_00);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)LawnApp::GetRechargeRewardConfigInfo(gLawnApp);
  pvVar4 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_01);
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::vector
            (avStack_20,pvVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((*(int *)(lVar5 + 0x34) <= iVar3) &&
       (cVar2 = PlayerInfo::HasObtainedNewTotalRechargeReward(this_00,*(int *)(lVar5 + 0x34)),
       cVar2 == '\0')) break;
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_30);
  }
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WorldMap_ActivityHomeButtonExtra::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_ActivityHomeButtonExtra::Draw(WorldMap_ActivityHomeButtonExtra *this,Graphics *param_1)

{
  undefined4 uVar1;
  
  uVar1 = LawnApp::IsActivityHomeExtraValid(gLawnApp);
  FUN_04583380(this + 0x1a8,uVar1);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  return;
}


/* non-virtual thunk to WorldMap_ActivityHomeButtonExtra::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_ActivityHomeButtonExtra::Draw(WorldMap_ActivityHomeButtonExtra *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WorldMap_ActivityHomeButtonExtra::OnKillChooseDialog(UIWidget*) */

void __thiscall
WorldMap_ActivityHomeButtonExtra::OnKillChooseDialog
          (WorldMap_ActivityHomeButtonExtra *this,UIWidget *param_1)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  if (param_1 != (UIWidget *)this) {
    cVar1 = LawnApp::IsActivityHomeExtraValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillActivityHomeExtra(this_00);
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WorldMap_ActivityHomeButtonExtra::KillChooseDialog() */

void WorldMap_ActivityHomeButtonExtra::KillChooseDialog(void)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsActivityHomeExtraValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillActivityHomeExtra(this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::StaticClassInit() */

void WorldMap_ActivityHomeButtonExtra::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"WorldMap_ActivityHomeButtonExtra");
    (*pcVar2)(plVar1,asStack_10,FUN_04583a80,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ActivityHomeButtonExtra::StaticGetClass() */

long * WorldMap_ActivityHomeButtonExtra::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_ActivityHomeButtonExtra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ActivityHomeButtonExtra::GetClass() const */

long * WorldMap_ActivityHomeButtonExtra::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_ActivityHomeButtonExtra",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra() */

void __thiscall
WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra
          (WorldMap_ActivityHomeButtonExtra *this)

{
  *(undefined ***)this = &PTR_GetClass_06861080;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ActivityHomeButtonExtra_06861228;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra() */

void __thiscall
WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra
          (WorldMap_ActivityHomeButtonExtra *this)

{
  ~WorldMap_ActivityHomeButtonExtra(this + -0x10);
  return;
}


/* WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra() */

void __thiscall
WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra
          (WorldMap_ActivityHomeButtonExtra *this)

{
  ~WorldMap_ActivityHomeButtonExtra(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra() */

void __thiscall
WorldMap_ActivityHomeButtonExtra::~WorldMap_ActivityHomeButtonExtra
          (WorldMap_ActivityHomeButtonExtra *this)

{
  ~WorldMap_ActivityHomeButtonExtra(this + -0x10);
  return;
}


/* WorldMap_ActivityHomeButtonExtra::CheckTutorialAndCancel() */

void WorldMap_ActivityHomeButtonExtra::CheckTutorialAndCancel(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  long *plVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_0458339c(*(undefined4 *)(lVar2 + 0x40));
  if ((iVar1 == 0x35) && (plVar3 = (long *)LawnApp::GetWorldMap(gLawnApp), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x348))(plVar3,0x35);
    return;
  }
  return;
}


/* WorldMap_ActivityHomeButtonExtra::onNotifyStaticConfig(int, S2C_StaticConfig const*) */

void __thiscall
WorldMap_ActivityHomeButtonExtra::onNotifyStaticConfig
          (WorldMap_ActivityHomeButtonExtra *this,int param_1,S2C_StaticConfig *param_2)

{
  DangerRoomManager *this_00;
  ActivityManager *this_01;
  
  if (param_1 != 0) {
    this[0x1d1] = (WorldMap_ActivityHomeButtonExtra)0x0;
    CheckTutorialAndCancel();
    return;
  }
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::InitProps(this_00,(S2C_DangerRoomPropertySheet *)(param_2 + 0x18));
  this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_01,0x297e,true,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::onMsgErrorRequest(int, std::string const&) */

void __thiscall
WorldMap_ActivityHomeButtonExtra::onMsgErrorRequest
          (WorldMap_ActivityHomeButtonExtra *this,int param_1,string *param_2)

{
  LawnApp *this_00;
  char cVar1;
  long lVar2;
  _PacketId a_Stack_19c8 [1152];
  string asStack_1548 [2144];
  _PacketId a_Stack_ce8 [968];
  string asStack_920 [2328];
  long local_8;
  
  this[0x1d1] = (WorldMap_ActivityHomeButtonExtra)0x0;
  local_8 = ___stack_chk_guard;
  CheckTutorialAndCancel();
  _PacketId::_PacketId(a_Stack_19c8);
  cVar1 = std::operator==(param_2,asStack_1548);
  if (cVar1 == '\0') {
    _PacketId::_PacketId(a_Stack_ce8);
    cVar1 = std::operator==(param_2,asStack_920);
    _PacketId::~_PacketId(a_Stack_ce8);
    _PacketId::~_PacketId(a_Stack_19c8);
    if (cVar1 == '\0') goto LAB_04583e34;
  }
  else {
    _PacketId::~_PacketId(a_Stack_19c8);
  }
  this_00 = gLawnApp;
  lVar2 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if ((lVar2 == 0) && (lVar2 = UISingletonDialog<UIMessageBox>::GetSingletonPtr(), lVar2 == 0)) {
    std::string::string((string *)a_Stack_19c8,"[NETWORK_NOT_CONNECTED_TITLE]");
    std::string::string((string *)a_Stack_ce8,"[NETWORK_NOT_CONNECTED_TEXT]");
    LawnApp::ShowMessageDialogNoCallback(this_00,(string *)a_Stack_19c8,(string *)a_Stack_ce8);
    std::string::~string((string *)a_Stack_ce8);
    nop();
    std::string::~string((string *)a_Stack_19c8);
    nop();
  }
LAB_04583e34:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::RequestData(ActivityTypeID) */

void __thiscall
WorldMap_ActivityHomeButtonExtra::RequestData(WorldMap_ActivityHomeButtonExtra *this,int param_2)

{
  LawnApp *this_00;
  char cVar1;
  ActivityManager *pAVar2;
  PVZ2UIDialog *pPVar3;
  long lVar4;
  NetworkMgr *pNVar5;
  INetworkMsgProcess *pIVar6;
  wchar_t local_68 [2];
  wchar_t local_60 [2];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",local_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",local_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",local_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    CheckTutorialAndCancel();
    goto LAB_04584724;
  }
  if (param_2 == 0x2975) {
    BossChallenge::RequestDatas();
  }
  else if (param_2 == 0x2978) {
    RechargeRewardUI::requestNetwork();
  }
  else if (param_2 == 0x297e) {
    lVar4 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar1 = FUN_045833a4(*(undefined1 *)(lVar4 + 0x1f9));
    if (cVar1 != '\0') goto LAB_04584768;
    pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
    pIVar6 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
    INetworkMsgProcess::RequestStaticConfig(pIVar6);
  }
  else if (param_2 == 0x299a) {
    Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstance();
    TwoYearBirthdayMgr::requestNetwork();
  }
  else if (param_2 == 0x29b5) {
    GameStateMgr::ShowActiveCenter(gGameStateMgr,5,5);
  }
  else {
    if ((param_2 == 0x2a02) || (param_2 == 0x299c)) goto LAB_04584768;
    if (param_2 == 0x2a53) {
      LawnApp::ShowActivityCollection(gLawnApp);
    }
    else if (param_2 == 0x29d1) {
      GameStateMgr::Show5thCenter(gGameStateMgr,5,5);
    }
    else if (param_2 == 0x29c0) {
      PlantSpecialOfferUI::requestNetwork();
    }
    else if ((((param_2 == 0x29a6) || (param_2 == 0x29c3)) || (param_2 == 0x29c4)) ||
            (((param_2 == 0x29f3 || (param_2 == 0x2a32)) || (param_2 == 0x2a27)))) {
LAB_04584768:
      pAVar2 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::Request(pAVar2,param_2,true,0);
    }
    else if (param_2 == 0x2983) {
      RechargeBundleUI::requestNetwork();
    }
    else {
      if (param_2 == 0x29c6) goto LAB_04584768;
      if (param_2 == 0x29c2) {
        GameStateMgr::ShowRedPack(gGameStateMgr,1,5,5);
      }
      else {
        if (param_2 == 0x29c5) goto LAB_04584768;
        if (param_2 == 0x29cc) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_50);
          local_60[0] = L'\0';
          local_68[0] = L'⧍';
          std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                    ((pair<wchar_t_const,wchar_t> *)awStack_58,local_68,local_60);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)awStack_50,
                     (pair *)awStack_58);
          local_60[0] = L'\0';
          local_68[0] = L'⧎';
          std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                    ((pair<wchar_t_const,wchar_t> *)awStack_58,local_68,local_60);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)awStack_50,
                     (pair *)awStack_58);
          local_60[0] = L'\0';
          local_68[0] = L'⧏';
          std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                    ((pair<wchar_t_const,wchar_t> *)awStack_58,local_68,local_60);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)awStack_50,
                     (pair *)awStack_58);
          pNVar5 = (NetworkMgr *)NetworkMgr::Instance();
          pIVar6 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar5);
          INetworkMsgProcess::RequestActivityList(pIVar6,(vector *)awStack_50,0,true);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)awStack_50);
        }
        else {
          if (param_2 == 0x2a31) goto LAB_04584768;
          pAVar2 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::Request(pAVar2,param_2,false,0);
        }
      }
    }
  }
  this[0x1d1] = (WorldMap_ActivityHomeButtonExtra)0x1;
LAB_04584724:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::CheckDrawDollActivityTips() */

void WorldMap_ActivityHomeButtonExtra::CheckDrawDollActivityTips(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  GeilivableLotteryConfig aGStack_d8 [20];
  int local_c4;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsChannelWithBigDeal();
  bVar3 = false;
  if (cVar1 != '\0') {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_04583388(local_80);
    bVar3 = false;
    if (cVar1 != '\0') {
      GeilivableLotteryConfig::GeilivableLotteryConfig(aGStack_d8);
      cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aGStack_d8);
      if (cVar1 == '\0') {
        GeilivableLotteryConfig::~GeilivableLotteryConfig(aGStack_d8);
        bVar3 = false;
      }
      else {
        bVar3 = 0 < local_c4;
        GeilivableLotteryConfig::~GeilivableLotteryConfig(aGStack_d8);
      }
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::CheckActivityTips() */

void WorldMap_ActivityHomeButtonExtra::CheckActivityTips(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlayerInfo *this;
  undefined1 auVar4 [12];
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = BossChallenge::IsHaveNewTips();
  if (cVar1 == '\0') {
    std::string::string((string *)&local_98,"Anniversary/warning");
    bVar2 = GetLuaSharedData<bool>((string *)&local_98,false);
    std::string::~string((string *)&local_98);
    nop();
    if ((!bVar2) && (cVar1 = CheckDrawDollActivityTips(), cVar1 == '\0')) {
      std::string::string((string *)&local_98,"SpringShop/warning");
      bVar2 = GetLuaSharedData<bool>((string *)&local_98,false);
      std::string::~string((string *)&local_98);
      nop();
      if (!bVar2) {
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        iVar3 = ActiveItem::GetLeftDays(aAStack_88);
        if (iVar3 < 0) {
          this = (PlayerInfo *)ProfileUtils::Profile();
          std::string::string((string *)&local_a8,"mat_redpacket_b");
          iVar3 = PlayerInfo::GetMaterialNum(this,(string *)&local_a8);
          if (iVar3 < 1) {
            std::string::string((string *)&local_98,"mat_redpacket_s");
            iVar3 = PlayerInfo::GetMaterialNum(this,(string *)&local_98);
            std::string::~string((string *)&local_98);
            nop();
            std::string::~string((string *)&local_a8);
            nop();
            if (0 < iVar3) goto LAB_04584b3c;
            cVar1 = PlayerInfo::IsLevelOfTheDayInfoValid(this,0x2a0a);
            if ((cVar1 != '\0') &&
               (cVar1 = PlayerInfo::IsLevelOfTheDayOpening(this,0x2a0a), cVar1 != '\0')) {
              auVar4 = PlayerInfo::GetLevelOfTheDayInfo(this,0x2a0a);
              local_a0 = auVar4._8_4_;
              local_a8 = auVar4._0_4_;
              local_a4 = auVar4._4_4_;
              if ((local_a8 < 8) &&
                 (iVar3 = PlayerInfo::GetLevelOfTheDayRemainDays(this,0x2a0a), 0 < iVar3)) {
                auVar4 = PlayerInfo::GetLevelOfTheDayInfo(this,0x2a0a);
                local_90 = auVar4._8_4_;
                local_98 = auVar4._0_4_;
                local_94 = auVar4._4_4_;
                if (local_94 == 0) goto LAB_04584b3c;
              }
            }
          }
          else {
            bVar2 = true;
            std::string::~string((string *)&local_a8);
            nop();
          }
        }
        else {
LAB_04584b3c:
          bVar2 = true;
        }
        ActiveItem::~ActiveItem(aAStack_88);
        goto LAB_04584a64;
      }
    }
  }
  bVar2 = true;
LAB_04584a64:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::CheckVisibility(bool) */

void WorldMap_ActivityHomeButtonExtra::CheckVisibility(bool param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  UniverseMap *this;
  string asStack_110 [8];
  ActiveItem aAStack_108 [24];
  byte local_f0;
  ActiveItem aAStack_88 [24];
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = LawnApp::GetWorldMap(gLawnApp);
  if (((lVar6 == 0) ||
      (this = (UniverseMap *)FUN_045833a0(*(undefined8 *)(lVar6 + 0x2b0)),
      this == (UniverseMap *)0x0)) || (cVar2 = UniverseMap::isInState(this,2), cVar2 != '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = RiftUtils::IsWorldMapButtonsEnabled();
    bVar3 = bVar3 | param_1;
    if ((bVar3 != 0) && (cVar2 = BossChallenge::IsOpened(), cVar2 == '\0')) {
      Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
      cVar2 = DangerRoomManager::IsOpened();
      if (cVar2 == '\0') {
        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar5);
        bVar1 = local_f0;
        if (local_f0 == 0) {
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          bVar1 = local_70;
          ActiveItem::~ActiveItem(aAStack_88);
          ActiveItem::~ActiveItem(aAStack_108);
          if (bVar1 != 0) goto LAB_04584cd0;
          std::string::string(asStack_110,"Anniversary/active");
          bVar4 = GetLuaSharedData<bool>(asStack_110,false);
          std::string::~string(asStack_110);
          nop();
          if (bVar4) goto LAB_04584cd0;
          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar5);
          bVar1 = local_f0;
          if (local_f0 == 0) {
            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
            ActivityManager::GetActiveItem(iVar5);
            bVar1 = local_70;
            ActiveItem::~ActiveItem(aAStack_88);
            ActiveItem::~ActiveItem(aAStack_108);
            if (bVar1 == 0) {
              std::string::string(asStack_110,"DinosaurDanger/active");
              bVar4 = GetLuaSharedData<bool>(asStack_110,false);
              std::string::~string(asStack_110);
              nop();
              if (!bVar4) {
                iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                ActivityManager::GetActiveItem(iVar5);
                bVar1 = local_70;
                ActiveItem::~ActiveItem(aAStack_88);
                if (bVar1 == 0) {
                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar5);
                  bVar1 = local_70;
                  ActiveItem::~ActiveItem(aAStack_88);
                  if (bVar1 == 0) {
                    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                    ActivityManager::GetActiveItem(iVar5);
                    bVar1 = local_70;
                    ActiveItem::~ActiveItem(aAStack_88);
                    if (bVar1 == 0) {
                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                      ActivityManager::GetActiveItem(iVar5);
                      bVar1 = local_70;
                      ActiveItem::~ActiveItem(aAStack_88);
                      if (bVar1 == 0) {
                        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                        ActivityManager::GetActiveItem(iVar5);
                        bVar1 = local_70;
                        ActiveItem::~ActiveItem(aAStack_88);
                        if (bVar1 == 0) {
                          iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                          ActivityManager::GetActiveItem(iVar5);
                          bVar1 = local_70;
                          ActiveItem::~ActiveItem(aAStack_88);
                          if (bVar1 == 0) {
                            iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                            ActivityManager::GetActiveItem(iVar5);
                            bVar1 = local_70;
                            ActiveItem::~ActiveItem(aAStack_88);
                            if (bVar1 == 0) {
                              iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                              ActivityManager::GetActiveItem(iVar5);
                              bVar1 = local_70;
                              ActiveItem::~ActiveItem(aAStack_88);
                              if (bVar1 == 0) {
                                iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                ActivityManager::GetActiveItem(iVar5);
                                bVar1 = local_70;
                                ActiveItem::~ActiveItem(aAStack_88);
                                if (bVar1 == 0) {
                                  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                  ActivityManager::GetActiveItem(iVar5);
                                  bVar1 = local_70;
                                  ActiveItem::~ActiveItem(aAStack_88);
                                  if (bVar1 == 0) {
                                    iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                                    ActivityManager::GetActiveItem(iVar5);
                                    bVar1 = local_70;
                                    ActiveItem::~ActiveItem(aAStack_88);
                                    if (bVar1 == 0) {
                                      iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr()
                                      ;
                                      ActivityManager::GetActiveItem(iVar5);
                                      bVar1 = local_70;
                                      ActiveItem::~ActiveItem(aAStack_88);
                                      if (bVar1 == 0) {
                                        iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr
                                                          ();
                                        ActivityManager::GetActiveItem(iVar5);
                                        bVar1 = local_70;
                                        ActiveItem::~ActiveItem(aAStack_88);
                                        if (bVar1 == 0) {
                                          iVar5 = Sexy::LazySingleton<ActivityManager>::
                                                  GetInstancePtr();
                                          ActivityManager::GetActiveItem(iVar5);
                                          bVar1 = local_70;
                                          ActiveItem::~ActiveItem(aAStack_88);
                                          if (bVar1 == 0) {
                                            iVar5 = Sexy::LazySingleton<ActivityManager>::
                                                    GetInstancePtr();
                                            ActivityManager::GetActiveItem(iVar5);
                                            ActiveItem::~ActiveItem(aAStack_88);
                                            bVar3 = local_70;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_04584cd0;
          }
        }
        ActiveItem::~ActiveItem(aAStack_108);
        bVar3 = bVar1;
      }
    }
  }
LAB_04584cd0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::WorldMap_ActivityHomeButtonExtra() */

void __thiscall
WorldMap_ActivityHomeButtonExtra::WorldMap_ActivityHomeButtonExtra
          (WorldMap_ActivityHomeButtonExtra *this)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  this[0x1d1] = (WorldMap_ActivityHomeButtonExtra)0x0;
  *(undefined ***)this = &PTR_GetClass_06861080;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_ActivityHomeButtonExtra_06861228;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_ICON_MORE_INFO");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_0458379c(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  this[0x1d0] = (WorldMap_ActivityHomeButtonExtra)0x0;
  bVar2 = (bool)CheckVisibility(false);
  UIWidget::SetVisible((UIWidget *)this,bVar2);
  bVar2 = (bool)CheckActivityTips();
  WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this,bVar2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillChooseDialog);
  Sexy::Delegate0::
  Delegate0<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)()>
            ((Delegate0 *)afStack_38,(string *)&local_50);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CheckValidChooseDialog,(Delegate0 *)afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnKillChooseDialog);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<UIWidget*,Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(UIWidget*)>>
            ((MessageRouter *)puVar1,Message::KillChooseDialog,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgErrorRequest);
  local_100 = local_68;
  uStack_f8 = uStack_60;
  local_f0 = local_58;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStaticConfig);
  local_120 = local_50;
  uStack_118 = uStack_48;
  local_110 = local_40;
  MessageRouter::
  Subscribe<int,S2C_StaticConfig_const*,Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(int,S2C_StaticConfig_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyStaticConfig,&local_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_ActivityHomeButtonExtra::StaticNew() */

WorldMap_ActivityHomeButtonExtra * WorldMap_ActivityHomeButtonExtra::StaticNew(void)

{
  WorldMap_ActivityHomeButtonExtra *this;
  
  this = ::operator_new(0x1d8);
  WorldMap_ActivityHomeButtonExtra(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_ActivityHomeButtonExtra::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_ActivityHomeButtonExtra::onNotifyRefreshActivityList
          (WorldMap_ActivityHomeButtonExtra *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  DangerRoomManager *this_00;
  TwoYearBirthdayMgr *this_01;
  MiniGameManager *this_02;
  NewerPresentMgr *this_03;
  SecretStoreMgr *this_04;
  WorldCupManager *this_05;
  LevelOfTheDaySystem *pLVar4;
  string *psVar5;
  MonthlyCardSpecialManager *this_06;
  long lVar6;
  int local_1ec [3];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8 [6];
  ActiveItem aAStack_188 [24];
  char local_170;
  ActiveItem aAStack_108 [24];
  char local_f0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (!param_1) {
    CheckTutorialAndCancel();
    goto LAB_0458536c;
  }
  bVar1 = (bool)CheckVisibility(false);
  UIWidget::SetVisible((UIWidget *)this,bVar1);
  if (this[0x1d1] != (WorldMap_ActivityHomeButtonExtra)0x0) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x2975);
    local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)&local_1c8)
    ;
    local_1b8[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_1b8);
    if ((bVar1) && (cVar2 = BossChallenge::IsOpened(), cVar2 != '\0')) {
      BossChallenge::ShowDialog();
    }
    else {
      local_1c8 = CONCAT44(local_1c8._4_4_,0x2978);
      local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                             (int *)&local_1c8);
      local_1b8[0] = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_1b8);
      if (bVar1) {
        LawnApp::ShowRechargeRewardUI(gLawnApp);
      }
      else {
        local_1c8 = CONCAT44(local_1c8._4_4_,0x297e);
        local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                              ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                               (int *)&local_1c8);
        local_1b8[0] = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_1b8);
        if (bVar1) {
          this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
          DangerRoomManager::ShowMainDialog(this_00);
        }
        else {
          local_1c8 = CONCAT44(local_1c8._4_4_,0x299a);
          local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                 (int *)&local_1c8);
          local_1b8[0] = std::
                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_1b8);
          if (bVar1) {
            this_01 = (TwoYearBirthdayMgr *)Sexy::LazySingleton<TwoYearBirthdayMgr>::GetInstance();
            TwoYearBirthdayMgr::RefreshActivity(this_01,true);
          }
          else {
            local_1c8 = CONCAT44(local_1c8._4_4_,0x2a02);
            local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                  ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                   (int *)&local_1c8);
            local_1b8[0] = std::
                           map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)param_2);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_1b8);
            if (bVar1) {
              this_02 = (MiniGameManager *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
              MiniGameManager::loadData(this_02);
              UISingletonDialog<UIMiniGameEntrance>::ShowDialog();
              std::string::string((string *)local_1b8,"OpenMiniGameUI");
              Cpp2Lua((string *)local_1b8);
              std::string::~string((string *)local_1b8);
              nop();
            }
            else {
              local_1c8 = CONCAT44(local_1c8._4_4_,0x299c);
              local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                    ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                     (int *)&local_1c8);
              local_1b8[0] = std::
                             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_2);
              bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_1b8);
              if (bVar1) {
                UISingletonDialog<DaveClubUI>::ShowDialog();
              }
              else {
                local_1c8 = CONCAT44(local_1c8._4_4_,0x29c0);
                local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                      ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                       (int *)&local_1c8);
                local_1b8[0] = std::
                               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)param_2);
                bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,(rbtree_iterator *)local_1b8
                                         );
                if (bVar1) {
                  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
                  ActivityManager::GetActiveItem(iVar3);
                  cVar2 = FUN_04583388(local_80);
                  if ((cVar2 != '\0') && (local_70 != '\0')) {
                    LawnApp::ShowPlantSpecialOfferUI(gLawnApp);
                  }
LAB_04585600:
                  ActiveItem::~ActiveItem(aAStack_88);
                }
                else {
                  local_1c8 = CONCAT44(local_1c8._4_4_,0x29a6);
                  local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                         (int *)&local_1c8);
                  local_1b8[0] = std::
                                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)param_2);
                  bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                            (rbtree_iterator *)local_1b8);
                  if (bVar1) {
                    UISingletonDialog<UIRechargeReward>::ShowDialog();
                  }
                  else {
                    local_1c8 = CONCAT44(local_1c8._4_4_,0x2a1b);
                    local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                           (int *)&local_1c8);
                    local_1b8[0] = std::
                                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)param_2);
                    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                              (rbtree_iterator *)local_1b8);
                    if (bVar1) {
                      UISingletonDialog<UILuckBagAnnouncement>::ShowDialog();
                    }
                    else {
                      local_1c8 = CONCAT44(local_1c8._4_4_,0x29f3);
                      local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                             (int *)&local_1c8);
                      local_1b8[0] = std::
                                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            *)param_2);
                      bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                (rbtree_iterator *)local_1b8);
                      if (bVar1) {
                        this_03 = (NewerPresentMgr *)
                                  Sexy::LazySingleton<NewerPresentMgr>::GetInstance();
                        NewerPresentMgr::Init(this_03);
                      }
                      else {
                        local_1c8 = CONCAT44(local_1c8._4_4_,0x2a32);
                        local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                              ((set<int,std::less<int>,std::allocator<int>> *)
                                               param_2,(int *)&local_1c8);
                        local_1b8[0] = std::
                                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              *)param_2);
                        bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                  (rbtree_iterator *)local_1b8);
                        if (bVar1) {
                          this_04 = (SecretStoreMgr *)
                                    Sexy::LazySingleton<SecretStoreMgr>::GetInstance();
                          SecretStoreMgr::Init(this_04);
                        }
                        else {
                          local_1c8 = CONCAT44(local_1c8._4_4_,0x2a27);
                          local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                                ((set<int,std::less<int>,std::allocator<int>> *)
                                                 param_2,(int *)&local_1c8);
                          local_1b8[0] = std::
                                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                *)param_2);
                          bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                    (rbtree_iterator *)local_1b8);
                          if (bVar1) {
                            UISingletonDialog<UINewRecall>::ShowDialog();
                          }
                          else {
                            local_1c8 = CONCAT44(local_1c8._4_4_,0x29c4);
                            local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                                  ((set<int,std::less<int>,std::allocator<int>> *)
                                                   param_2,(int *)&local_1c8);
                            local_1b8[0] = std::
                                           map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                            bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                      (rbtree_iterator *)local_1b8);
                            if (bVar1) {
                              this_05 = (WorldCupManager *)
                                        Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
                              WorldCupManager::loadData(this_05);
                              UISingletonDialog<UIWorldCupEntrance>::ShowDialog();
                            }
                            else {
                              local_1c8 = CONCAT44(local_1c8._4_4_,0x2994);
                              local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                                    ((set<int,std::less<int>,std::allocator<int>> *)
                                                     param_2,(int *)&local_1c8);
                              local_1b8[0] = std::
                                             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                              bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                        (rbtree_iterator *)local_1b8);
                              if (bVar1) {
                                pLVar4 = (LevelOfTheDaySystem *)
                                         Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
                                LevelOfTheDaySystem::setCurLotdAcType(pLVar4,6);
                                psVar5 = (string *)LevelOfTheDayMgr::GetInstance();
                                std::string::string((string *)local_1b8,"birthzChildrenEvent");
                                CustomLevelSettingManager::SetLinkPhoneNumber(psVar5);
                                std::string::~string((string *)local_1b8);
                                nop();
                                LawnApp::ShowLevelofDayEntrance(gLawnApp);
                              }
                              else {
                                local_1c8 = CONCAT44(local_1c8._4_4_,0x2990);
                                local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                                      ((set<int,std::less<int>,std::allocator<int>>
                                                        *)param_2,(int *)&local_1c8);
                                local_1b8[0] = std::
                                               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                          (rbtree_iterator *)local_1b8);
                                if (bVar1) {
                                  pLVar4 = (LevelOfTheDaySystem *)
                                           Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
                                  LevelOfTheDaySystem::setCurLotdAcType(pLVar4,1);
                                  LawnApp::ShowLevelofDayEntrance(gLawnApp);
                                }
                                else {
                                  local_1c8 = CONCAT44(local_1c8._4_4_,0x29c6);
                                  local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::find
                                                        ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)&local_1c8);
                                  local_1b8[0] = std::
                                                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                 ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                  bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                            (rbtree_iterator *)local_1b8);
                                  if (bVar1) {
                                    UISingletonDialog<UIChagreDouble>::ShowDialog();
                                  }
                                  else {
                                    local_1c8 = CONCAT44(local_1c8._4_4_,0x2983);
                                    local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::
                                                find((set<int,std::less<int>,std::allocator<int>> *)
                                                     param_2,(int *)&local_1c8);
                                    local_1b8[0] = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                              (rbtree_iterator *)local_1b8);
                                    if (bVar1) {
                                      LawnApp::ShowRechargeBundleUI(gLawnApp);
                                    }
                                    else {
                                      local_1c8 = CONCAT44(local_1c8._4_4_,0x29c5);
                                      local_1c0 = std::set<int,std::less<int>,std::allocator<int>>::
                                                  find((set<int,std::less<int>,std::allocator<int>>
                                                        *)param_2,(int *)&local_1c8);
                                      local_1b8[0] = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                      bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                                (rbtree_iterator *)local_1b8);
                                      if (bVar1) {
                                        UISingletonDialog<SpringDailyAwardUI>::ShowDialog();
                                      }
                                      else {
                                        local_1ec[0] = 0x29cd;
                                        local_1e0 = std::set<int,std::less<int>,std::allocator<int>>
                                                    ::find((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,local_1ec);
                                        local_1d8 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                        bVar1 = eastl::operator!=((rbtree_iterator *)&local_1e0,
                                                                  (rbtree_iterator *)&local_1d8);
                                        if (bVar1) {
                                          local_1ec[1] = 0x29ce;
                                          local_1d0 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,local_1ec + 1);
                                          local_1c8 = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                          bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d0,
                                                                    (rbtree_iterator *)&local_1c8);
                                          if (bVar1) {
                                            local_1ec[2] = 0x29cf;
                                            local_1c0 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,local_1ec + 2);
                                            local_1b8[0] = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                            bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                                      (rbtree_iterator *)local_1b8);
                                            if (bVar1) {
                                              iVar3 = Sexy::LazySingleton<ActivityManager>::
                                                      GetInstancePtr();
                                              ActivityManager::GetActiveItem(iVar3);
                                              if (local_170 == '\0') {
                                                iVar3 = Sexy::LazySingleton<ActivityManager>::
                                                        GetInstancePtr();
                                                ActivityManager::GetActiveItem(iVar3);
                                                if (local_f0 == '\0') {
                                                  iVar3 = Sexy::LazySingleton<ActivityManager>::
                                                          GetInstancePtr();
                                                  ActivityManager::GetActiveItem(iVar3);
                                                  ActiveItem::~ActiveItem(aAStack_88);
                                                  ActiveItem::~ActiveItem(aAStack_108);
                                                  ActiveItem::~ActiveItem(aAStack_188);
                                                  if (local_70 == '\0') goto LAB_04585358;
                                                }
                                                else {
                                                  ActiveItem::~ActiveItem(aAStack_108);
                                                  ActiveItem::~ActiveItem(aAStack_188);
                                                }
                                              }
                                              else {
                                                ActiveItem::~ActiveItem(aAStack_188);
                                              }
                                              GameStateMgr::ShowActiveCenter(gGameStateMgr,5,5);
                                              goto LAB_04585358;
                                            }
                                          }
                                        }
                                        local_1c8 = CONCAT44(local_1c8._4_4_,0x2a31);
                                        local_1c0 = std::set<int,std::less<int>,std::allocator<int>>
                                                    ::find((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)&local_1c8);
                                        local_1b8[0] = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                        bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                                  (rbtree_iterator *)local_1b8);
                                        if (bVar1) {
                                          UISingletonDialog<UILimitLottery>::ShowDialog();
                                        }
                                        else {
                                          local_1c8 = CONCAT44(local_1c8._4_4_,0x2a3f);
                                          local_1c0 = std::
                                                  set<int,std::less<int>,std::allocator<int>>::find
                                                            ((
                                                  set<int,std::less<int>,std::allocator<int>> *)
                                                  param_2,(int *)&local_1c8);
                                          local_1b8[0] = std::
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::end((
                                                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)param_2);
                                          bVar1 = eastl::operator!=((rbtree_iterator *)&local_1c0,
                                                                    (rbtree_iterator *)local_1b8);
                                          if (bVar1) {
                                            iVar3 = Sexy::LazySingleton<ActivityManager>::
                                                    GetInstancePtr();
                                            ActivityManager::GetActiveItem(iVar3);
                                            cVar2 = FUN_04583388(local_80);
                                            if ((cVar2 != '\0') && (local_70 != '\0')) {
                                              MonthlyCardSpecialData::MonthlyCardSpecialData
                                                        ((MonthlyCardSpecialData *)local_1b8);
                                              cVar2 = ActiveItem::GetDataSerialized
                                                                (aAStack_88,(RtObject *)local_1b8);
                                              if (cVar2 != '\0') {
                                                this_06 = (MonthlyCardSpecialManager *)
                                                          Sexy::
                                                  LazySingleton<MonthlyCardSpecialManager>::
                                                  GetInstance();
                                                MonthlyCardSpecialManager::LoadData
                                                          (this_06,(MonthlyCardSpecialData *)
                                                                   local_1b8);
                                                lVar6 = Sexy::
                                                  LazySingleton<MonthlyCardSpecialManager>::
                                                  GetInstance();
                                                FUN_02fd4554(lVar6 + 0x38,local_38);
                                                UISingletonDialog<MonthlyCardSpecialUI>::ShowDialog
                                                          ();
                                              }
                                              MonthlyCardSpecialData::~MonthlyCardSpecialData
                                                        ((MonthlyCardSpecialData *)local_1b8);
                                            }
                                            goto LAB_04585600;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04585358:
  bVar1 = (bool)CheckActivityTips();
  WorldMap_WelfareButtonExtra::SetNotice((WorldMap_WelfareButtonExtra *)this,bVar1);
LAB_0458536c:
  this[0x1d1] = (WorldMap_ActivityHomeButtonExtra)0x0;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

