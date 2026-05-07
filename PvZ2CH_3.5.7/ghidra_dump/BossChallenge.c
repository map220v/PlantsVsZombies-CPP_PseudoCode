// Class: BossChallenge


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BossChallenge::ShowDialog(void)

{
  int iVar1;
  long lVar2;
  LuaFunctionCallback *this;
  char *pcVar3;
  PlayerInfo *this_00;
  TGALogMgr *pTVar4;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_100 [7];
  bool bStack_f9;
  long lStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  TGABossChallengeData aTStack_d8 [8];
  string asStack_d0 [96];
  string asStack_70 [104];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar2 = GetSingletonPtr();
  if (lVar2 == 0) {
    bStack_f9 = false;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    lStack_f8 = lVar2;
    lStack_f0 = lVar2;
    this = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&lStack_f8)
    ;
    std::string::string(asStack_70,"luaBossChallengeDlg:CreateUI");
    __n = 1;
    Lua::LuaFunctionCallback::Execute(this,asStack_70,1,&bStack_f9);
    std::string::~string(asStack_70);
    nop();
    if (bStack_f9 != false) {
      __n_00 = auStack_100;
      lVar2 = Lua::LuaFunctionCallback::PopParamUserTypePtr((LuaFunctionCallback *)&lStack_f8);
      TGABossChallengeData::TGABossChallengeData(aTStack_d8);
      DString::DString((DString *)asStack_70,1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append((string *)aTStack_d8,pcVar3,__n);
      DString::~DString((DString *)asStack_70);
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      std::string::string(asStack_70,"mat_BossRush_crystal_blue");
      iVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_70);
      std::string::~string(asStack_70);
      nop();
      DString::DString((DString *)asStack_70,iVar1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append(asStack_d0,pcVar3,(size_t)__n_00);
      DString::~DString((DString *)asStack_70);
      pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)asStack_70,aTStack_d8);
      TGALogMgr::LogBossChallenge(pTVar4,asStack_70);
      TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)asStack_70);
      TGABossChallengeData::~TGABossChallengeData(aTStack_d8);
    }
    Lua::LuaFunctionCallback::End((LuaFunctionCallback *)&lStack_f8);
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&lStack_f8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BossChallenge::ShowDialog(void)

{
  int iVar1;
  long lVar2;
  LuaFunctionCallback *this;
  char *pcVar3;
  PlayerInfo *this_00;
  TGALogMgr *pTVar4;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_100 [7];
  bool bStack_f9;
  long lStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  TGABossChallengeData aTStack_d8 [8];
  string asStack_d0 [96];
  string asStack_70 [104];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar2 = GetSingletonPtr();
  if (lVar2 == 0) {
    bStack_f9 = false;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    lStack_f8 = lVar2;
    lStack_f0 = lVar2;
    this = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&lStack_f8)
    ;
    std::string::string(asStack_70,"luaBossChallengeDlg:CreateUI");
    __n = 1;
    Lua::LuaFunctionCallback::Execute(this,asStack_70,1,&bStack_f9);
    std::string::~string(asStack_70);
    nop();
    if (bStack_f9 != false) {
      __n_00 = auStack_100;
      lVar2 = Lua::LuaFunctionCallback::PopParamUserTypePtr((LuaFunctionCallback *)&lStack_f8);
      TGABossChallengeData::TGABossChallengeData(aTStack_d8);
      DString::DString((DString *)asStack_70,1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append((string *)aTStack_d8,pcVar3,__n);
      DString::~DString((DString *)asStack_70);
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      std::string::string(asStack_70,"mat_BossRush_crystal_blue");
      iVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_70);
      std::string::~string(asStack_70);
      nop();
      DString::DString((DString *)asStack_70,iVar1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append(asStack_d0,pcVar3,(size_t)__n_00);
      DString::~DString((DString *)asStack_70);
      pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)asStack_70,aTStack_d8);
      TGALogMgr::LogBossChallenge(pTVar4,asStack_70);
      TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)asStack_70);
      TGABossChallengeData::~TGABossChallengeData(aTStack_d8);
    }
    Lua::LuaFunctionCallback::End((LuaFunctionCallback *)&lStack_f8);
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&lStack_f8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* BossChallenge::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

undefined1 BossChallenge::OnNotifyRefreshActivityList(bool param_1,set *param_2)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::GetSingletonPtr() */

void BossChallenge::GetSingletonPtr(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06b89b20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b89b20), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b89b98,"BossChallenge");
    __cxa_guard_release(&DAT_06b89b20);
    __cxa_atexit(std::string::~string,&DAT_06b89b98,&DAT_06a88000);
    nop();
  }
  pcVar3 = (char *)FUN_0547429c(&DAT_06b89b98);
  Lua::CUIDialog::GetDialog(pcVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::CloseDialog() */

void BossChallenge::CloseDialog(void)

{
  LuaFunctionCallback *pLVar1;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_31 = false;
  local_28 = 0;
  local_20 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
  std::string::string(asStack_30,"luaBossChallengeDlg:Close");
  pLVar1 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar1,asStack_30,0,&local_31);
  Lua::LuaFunctionCallback::End(pLVar1);
  std::string::~string(asStack_30);
  nop();
  Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallenge::CloseActivityCollection() */

void BossChallenge::CloseActivityCollection(void)

{
  LawnApp::KillActivityCollection(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::OnActiveItemRefresh(ActiveItem*) */

void BossChallenge::OnActiveItemRefresh(ActiveItem *param_1)

{
  long lVar1;
  LuaFunctionCallback *pLVar2;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetSingletonPtr();
  if (lVar1 != 0) {
    local_31 = false;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    pLVar2 = (LuaFunctionCallback *)
             Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
    std::string::string(asStack_30,"luaBossChallengeDlg:OnTabSelectionChanged");
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar2,asStack_30,0,&local_31)
    ;
    Lua::LuaFunctionCallback::End(pLVar2);
    std::string::~string(asStack_30);
    nop();
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::ResponseRankList(std::string const&) */

void BossChallenge::ResponseRankList(string *param_1)

{
  long lVar1;
  LuaFunctionCallback *pLVar2;
  bool local_31;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetSingletonPtr();
  if (lVar1 != 0) {
    local_31 = false;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    pLVar2 = (LuaFunctionCallback *)
             Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_28);
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::PushParamStdString(pLVar2,param_1);
    std::string::string(asStack_30,"luaBossChallengeDlg:ResponseRankList");
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Execute(pLVar2,asStack_30,0,&local_31)
    ;
    pLVar2 = (LuaFunctionCallback *)Lua::LuaFunctionCallback::PushParamInt(pLVar2,1);
    Lua::LuaFunctionCallback::End(pLVar2);
    std::string::~string(asStack_30);
    nop();
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallenge::RequestBuyChallenge() */

void BossChallenge::RequestBuyChallenge(void)

{
  ActivityManager *this;
  
  this = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::RequestUseGem(this,0x2711,1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::SetButtonsDisabled(bool) */

void BossChallenge::SetButtonsDisabled(bool param_1)

{
  int iVar1;
  Dialog *this;
  UITabControl *this_00;
  long lVar2;
  long *plVar3;
  int iVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Dialog *)GetSingletonPtr();
  if (this != (Dialog *)0x0) {
    std::string::string(asStack_10,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    iVar4 = 1;
    do {
      iVar1 = iVar4 + 1;
      lVar2 = UITabControl::GetTab(this_00,iVar4);
      plVar3 = (long *)FUN_04bb2e20(*(undefined8 *)(lVar2 + 0xd8));
      (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
      iVar4 = iVar1;
    } while (iVar1 != 5);
    std::string::string(asStack_10,"BtnClose");
    lVar2 = UI::Dialog::GetWidget(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar2 != 0) {
      std::string::string(asStack_10,"BtnClose");
      plVar3 = (long *)UI::Dialog::GetWidget(this,asStack_10);
      (**(code **)(*plVar3 + 0x188))(plVar3,param_1);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::ShowTab(int) */

void BossChallenge::ShowTab(int param_1)

{
  Dialog *this;
  UITabControl *this_00;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Dialog *)GetSingletonPtr();
  if (this != (Dialog *)0x0) {
    std::string::string(asStack_10,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,param_1);
    UITabControl::SetTabSelected(this_00,pUVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::InitDialog(Lua::CUIDialog*) */

void BossChallenge::InitDialog(CUIDialog *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  UITabControl *this;
  long *plVar4;
  UIWidgetText *pUVar5;
  UIBossMedalLottery *this_00;
  PVZ2UIButton *pPVar6;
  BossChallengeInfo *this_01;
  LoadingWidget *pLVar7;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (CUIDialog *)0x0) {
    __n_00 = auStack_18;
    std::string::string(asStack_10,"UITabControl_0");
    this = UI::Dialog::GetWidget<UITabControl>((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_2");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"Tab1_Cost_Text");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar4 != (long *)0x0) {
      this_00 = ::operator_new(0x158);
      UIBossMedalLottery::UIBossMedalLottery(this_00,pUVar5);
      uVar1 = FUN_04bb3110(0x207);
      uVar2 = FUN_04bb3110(0x162);
      (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,uVar1,uVar2);
      (**(code **)(*plVar4 + 0x60))(plVar4,this_00);
      std::string::string(asStack_10,"Tab1_Cost_Btn");
      pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)param_1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pPVar6 != (PVZ2UIButton *)0x0) {
        *(UIBossMedalLottery **)(pPVar6 + 0x168) = this_00 + 0xd8;
      }
      std::string::string(asStack_10,"UIButton_0");
      pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)param_1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pPVar6 != (PVZ2UIButton *)0x0) {
        *(UIBossMedalLottery **)(pPVar6 + 0x168) = this_00 + 0xd8;
      }
    }
    plVar4 = (long *)UITabControl::GetTab(this,3);
    if (plVar4 != (long *)0x0) {
      this_01 = ::operator_new(0xe8);
      BossChallengeInfo::BossChallengeInfo(this_01);
      (**(code **)(*plVar4 + 0x60))(plVar4,this_01);
      *(int *)(this_01 + 0x48) = ((int)plVar4[10] - *(int *)(this_01 + 0x50)) / 2;
      iVar3 = FUN_04bb3110(10);
      *(int *)(this_01 + 0x4c) =
           iVar3 + (*(int *)((long)plVar4 + 0x54) - *(int *)(this_01 + 0x54)) / 2;
    }
    __n = __n_00;
    std::string::string(asStack_10,"TabRank_Day_Scroll");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar4 != (long *)0x0) {
      pLVar7 = ::operator_new(0xe0);
      LoadingWidget::LoadingWidget(pLVar7);
      std::string::append((string *)(pLVar7 + 0xc0),"TabRank_DayLoading",(size_t)__n);
      (**(code **)(*(long *)pLVar7 + 0x158))(pLVar7,0);
      (**(code **)(*plVar4 + 0x60))(plVar4,pLVar7);
    }
    std::string::string(asStack_10,"TabRank_Mon_Scroll");
    plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (plVar4 != (long *)0x0) {
      pLVar7 = ::operator_new(0xe0);
      LoadingWidget::LoadingWidget(pLVar7);
      std::string::append((string *)(pLVar7 + 0xc0),"TabRank_MonLoading",(size_t)__n_00);
      (**(code **)(*(long *)pLVar7 + 0x158))(pLVar7,0);
      (**(code **)(*plVar4 + 0x60))(plVar4,pLVar7);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossChallenge::BossChallenge() */

void __thiscall BossChallenge::BossChallenge(BossChallenge *this)

{
  undefined *puVar1;
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
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyItemFinish);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*,Sexy::CBMemberTranslatorX<BossChallenge,void(BossChallenge::*)(MsgResultInfo*,S2C_ICloud_GetConsumeGemInfo_const*,S2C_PlayerInfo_const*)>>
            ((MessageRouter *)puVar1,Message::BuyItemFinish,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<BossChallenge,void(BossChallenge::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::RequestDatas() */

void BossChallenge::RequestDatas(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⥵';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  local_30[1] = 1;
  local_30[0] = L'⨯';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::IsOpened() */

void BossChallenge::IsOpened(void)

{
  byte bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  string asStack_110 [8];
  ActiveItem aAStack_108 [24];
  char local_f0;
  ActiveItem aAStack_88 [24];
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_110,"egypt3");
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar1 = ProfileUtils::HasCompletedLevel(asStack_110,false,pPVar3);
  std::string::~string(asStack_110);
  nop();
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_f0 == '\0') {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    bVar1 = bVar1 & local_70;
    ActiveItem::~ActiveItem(aAStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::IsHaveNewTips() */

void BossChallenge::IsHaveNewTips(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  StructuredData aSStack_180 [120];
  ActiveItem aAStack_108 [64];
  string asStack_c8 [64];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  Sexy::StructuredData::StructuredData(aSStack_180);
  cVar1 = StringHelper::ReadJson(asStack_c8,aSStack_180);
  if ((cVar1 == '\0') ||
     (iVar3 = Sexy::StructuredData::IntegerForPath(aSStack_180,"$.lt",0), iVar3 < 1)) {
    Sexy::StructuredData::Clear(aSStack_180);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    ActiveItem::operator=(aAStack_108,aAStack_88);
    ActiveItem::~ActiveItem(aAStack_88);
    cVar2 = StringHelper::ReadJson(asStack_c8,aSStack_180);
    cVar1 = '\0';
    if (cVar2 != '\0') {
      iVar3 = Sexy::StructuredData::IntegerForPath(aSStack_180,"$.rn",0);
      iVar4 = Sexy::StructuredData::IntegerForPath(aSStack_180,"$.cn",0);
      cVar1 = iVar4 < iVar3;
    }
  }
  Sexy::StructuredData::~StructuredData(aSStack_180);
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::ShowDialog() */

void BossChallenge::ShowDialog(void)

{
  int iVar1;
  long lVar2;
  LuaFunctionCallback *this;
  char *pcVar3;
  PlayerInfo *this_00;
  TGALogMgr *pTVar4;
  size_t __n;
  undefined1 *__n_00;
  undefined1 auStack_100 [7];
  bool local_f9;
  long local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  TGABossChallengeData aTStack_d8 [8];
  string asStack_d0 [96];
  string asStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetSingletonPtr();
  if (lVar2 == 0) {
    local_f9 = false;
    local_e8 = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_f8 = lVar2;
    local_f0 = lVar2;
    this = (LuaFunctionCallback *)Lua::LuaFunctionCallback::Begin((LuaFunctionCallback *)&local_f8);
    std::string::string(asStack_70,"luaBossChallengeDlg:CreateUI");
    __n = 1;
    Lua::LuaFunctionCallback::Execute(this,asStack_70,1,&local_f9);
    std::string::~string(asStack_70);
    nop();
    if (local_f9 != false) {
      __n_00 = auStack_100;
      lVar2 = Lua::LuaFunctionCallback::PopParamUserTypePtr((LuaFunctionCallback *)&local_f8);
      TGABossChallengeData::TGABossChallengeData(aTStack_d8);
      DString::DString((DString *)asStack_70,1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append((string *)aTStack_d8,pcVar3,__n);
      DString::~DString((DString *)asStack_70);
      this_00 = (PlayerInfo *)ProfileUtils::Profile();
      std::string::string(asStack_70,"mat_BossRush_crystal_blue");
      iVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_70);
      std::string::~string(asStack_70);
      nop();
      DString::DString((DString *)asStack_70,iVar1);
      pcVar3 = (char *)DString::c_str((DString *)asStack_70);
      std::string::append(asStack_d0,pcVar3,(size_t)__n_00);
      DString::~DString((DString *)asStack_70);
      pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)asStack_70,aTStack_d8);
      TGALogMgr::LogBossChallenge(pTVar4,asStack_70);
      TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)asStack_70);
      TGABossChallengeData::~TGABossChallengeData(aTStack_d8);
    }
    Lua::LuaFunctionCallback::End((LuaFunctionCallback *)&local_f8);
    Lua::LuaFunctionCallback::~LuaFunctionCallback((LuaFunctionCallback *)&local_f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossChallenge::OnBuyItemFinish(MsgResultInfo*, S2C_ICloud_GetConsumeGemInfo const*,
   S2C_PlayerInfo const*) */

void __thiscall
BossChallenge::OnBuyItemFinish
          (BossChallenge *this,MsgResultInfo *param_1,S2C_ICloud_GetConsumeGemInfo *param_2,
          S2C_PlayerInfo *param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  TGALogMgr *pTVar4;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  ActivityManager *pAVar5;
  UIMessageBox *this_02;
  wchar_t local_10c [3];
  pair<wchar_t_const,wchar_t> apStack_100 [8];
  function<bool(Sexy::Touch_const&)> afStack_f8 [32];
  TGABossChallengeData aTStack_d8 [16];
  string asStack_c8 [88];
  DString aDStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (MsgResultInfo *)0x0) && (lVar2 = GetSingletonPtr(), lVar2 != 0)) {
    iVar1 = *(int *)param_1;
    if (iVar1 == 0) {
      if ((param_2 != (S2C_ICloud_GetConsumeGemInfo *)0x0) && (*(int *)(param_2 + 0x6c) == 0x2711))
      {
        lVar2 = UISingletonDialog<UIMessageBox>::GetSingletonPtr();
        if ((lVar2 == 0) &&
           (this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
           this_02 != (UIMessageBox *)0x0)) {
          UIMessageBox::SetShowType(this_02,2);
          std::string::string((string *)aTStack_d8,"[PURCHASE_DIALOG_CONFIRMED_HEADER]");
          std::string::string((string *)aDStack_70,"[REVIVE_TIP]");
          param_2 = (S2C_ICloud_GetConsumeGemInfo *)aDStack_70;
          UIMessageBox::SetMessage(this_02,(string *)aTStack_d8,(string *)aDStack_70);
          std::string::~string((string *)aDStack_70);
          nop();
          std::string::~string((string *)aTStack_d8);
          nop();
          UIMessageBox::SetBackgroundDarken(this_02,true,0.5);
        }
        TGABossChallengeData::TGABossChallengeData(aTStack_d8);
        DString::DString(aDStack_70,2);
        pcVar3 = (char *)DString::c_str(aDStack_70);
        std::string::append((string *)aTStack_d8,pcVar3,(size_t)param_2);
        DString::~DString(aDStack_70);
        DString::DString(aDStack_70,*(int *)(param_3 + 0x34));
        pcVar3 = (char *)DString::c_str(aDStack_70);
        std::string::append(asStack_c8,pcVar3,(size_t)param_2);
        DString::~DString(aDStack_70);
        pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGABossChallengeData::TGABossChallengeData((TGABossChallengeData *)aDStack_70,aTStack_d8);
        TGALogMgr::LogBossChallenge(pTVar4,aDStack_70);
        TGABossChallengeData::~TGABossChallengeData((TGABossChallengeData *)aDStack_70);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aDStack_70);
        local_10c[0] = L'⥵';
        local_10c[1] = 1;
        std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                  (apStack_100,local_10c,local_10c + 1);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aDStack_70,
                   (pair *)apStack_100);
        this_00 = (NetworkMgr *)NetworkMgr::Instance();
        this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
        INetworkMsgProcess::RequestActivityList(this_01,(vector *)aDStack_70,0,false);
        pAVar5 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        FUN_04bb30b4(afStack_f8,this);
        ActivityManager::SetActiveUpdateNotice(pAVar5,0x2975,afStack_f8);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_f8);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)aDStack_70);
        TGABossChallengeData::~TGABossChallengeData(aTStack_d8);
      }
    }
    else {
      lVar2 = UISingletonDialog<UIMessageBox>::GetSingletonPtr();
      if (lVar2 == 0) {
        INetworkErrorData::INetworkErrorData((INetworkErrorData *)aDStack_70,iVar1);
        INetworkMsgProcess::ShowErrorMessage((INetworkErrorData *)aDStack_70);
        INetworkErrorData::~INetworkErrorData((INetworkErrorData *)aDStack_70);
        param_1[4] = (MsgResultInfo)0x0;
      }
      else {
        param_1[4] = (MsgResultInfo)0x0;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

