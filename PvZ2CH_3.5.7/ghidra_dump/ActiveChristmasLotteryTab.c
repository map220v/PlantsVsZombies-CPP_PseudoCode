// Class: ActiveChristmasLotteryTab


/* ActiveChristmasLotteryTab::~ActiveChristmasLotteryTab() */

void __thiscall
ActiveChristmasLotteryTab::~ActiveChristmasLotteryTab(ActiveChristmasLotteryTab *this)

{
  *(undefined ***)this = &PTR__ActiveChristmasLotteryTab_0697c900;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x18))();
    *(undefined8 *)(this + 0x38) = 0;
  }
  FUN_05476c50(this + 0x58);
  FUN_05476c50(this + 0x50);
  nop();
  return;
}


/* ActiveChristmasLotteryTab::~ActiveChristmasLotteryTab() */

void __thiscall
ActiveChristmasLotteryTab::~ActiveChristmasLotteryTab(ActiveChristmasLotteryTab *this)

{
  ~ActiveChristmasLotteryTab(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::GetTabContainerImageName() const */

void __thiscall ActiveChristmasLotteryTab::GetTabContainerImageName(ActiveChristmasLotteryTab *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IMAGE_UI_ACTIVETABCENTER_LOTTERY_BG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::GetGoToButtonTitle() */

void __thiscall ActiveChristmasLotteryTab::GetGoToButtonTitle(ActiveChristmasLotteryTab *this)

{
  ActivityConfig *this_00;
  long lVar1;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[GO_TO_LOTTERY]");
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  lVar1 = ActivityConfig::GetChristmasLotteryData(this_00);
  TodReplaceNumberString(awStack_10,L"{CURRENCY_COST}",*(int *)(lVar1 + 8));
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveChristmasLotteryTab::OnButtonClicked(int) */

void ActiveChristmasLotteryTab::OnButtonClicked(int param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActivityConfig *this_01;
  long lVar4;
  NetworkMgr *this_02;
  long *plVar5;
  
  uVar3 = (ulong)(uint)param_1;
  if (*(char *)(uVar3 + 0x40) != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
    lVar4 = ActivityConfig::GetChristmasLotteryData(this_01);
    iVar1 = *(int *)(lVar4 + 8);
    iVar2 = PlayerInfo::GetNumGems(this_00,true);
    if (iVar2 < iVar1) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      return;
    }
    if (*(long *)(uVar3 + 0x38) != 0) {
      *(undefined1 *)(uVar3 + 0x40) = 0;
      this_02 = (NetworkMgr *)NetworkMgr::Instance();
      plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
      if (*(code **)(*plVar5 + 0x288) != INetworkMsgProcess::ICloudRequestChristmasLottery) {
        (**(code **)(*plVar5 + 0x288))();
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::Update() */

void __thiscall ActiveChristmasLotteryTab::Update(ActiveChristmasLotteryTab *this)

{
  ActiveChristmasLotteryTab *pAVar1;
  uint uVar2;
  char cVar3;
  ProfileMgr *this_00;
  long lVar4;
  wchar_t *pwVar5;
  PVZ2UIButton *pPVar6;
  int iVar7;
  Dialog *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar3 = FUN_04be474c(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar3 != '\0')) {
    if (*(StandaloneEffect **)(this + 0x38) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x38));
    }
    pAVar1 = this + 0x50;
    FUN_054772c4(pAVar1,&DAT_056f11a8);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar4 != 0) {
      lVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
      if (lVar4 == 0) {
        FUN_054772c4(pAVar1,&DAT_05700290);
        pwVar5 = L"[PLANT_ADVENTURE_UNCONNECTED]";
      }
      else {
        iVar7 = *(int *)(this + 0x44);
        if (iVar7 != 1) {
          if (iVar7 == 0) {
            pwVar5 = L"[ACTIVITY_NOT_OPEN]";
          }
          else {
            if (iVar7 != 2) goto LAB_04be4c44;
            pwVar5 = L"[ACTIVITY_CLOSED]";
          }
          TodStringTranslate(pwVar5);
          FUN_054766c8(this + 0x58,asStack_10);
          FUN_05476c50(asStack_10);
          this_01 = *(Dialog **)(this + 0x10);
          std::string::string(asStack_10,"Btn_Goto");
          pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>(this_01,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (pPVar6 != (PVZ2UIButton *)0x0) {
            (**(code **)(*(long *)pPVar6 + 0x188))(pPVar6,1);
          }
          goto LAB_04be4c44;
        }
        if ((uint)lVar4 < (uint)*(undefined8 *)(this + 0x48)) {
          uVar2 = (uint)*(undefined8 *)(this + 0x48) - (uint)lVar4;
          Sexy::StrFormat(L"%d",asStack_10,(ulong)uVar2 / 0x15180);
          FUN_054766c8(pAVar1,asStack_10);
          FUN_05476c50(asStack_10);
          iVar7 = (int)((ulong)uVar2 / 0x3c);
          Sexy::StrFormat(L"%02d:%02d:%02d",asStack_10,
                          (ulong)(uint)((int)((ulong)uVar2 / 0xe10) +
                                       (int)(((ulong)uVar2 / 0xe10) / 0x18) * -0x18),
                          (ulong)(uint)(iVar7 + (int)(((ulong)uVar2 / 0x3c) / 0x3c) * -0x3c),
                          (ulong)(uVar2 + iVar7 * -0x3c));
          FUN_054766c8(this + 0x58,asStack_10);
          FUN_05476c50(asStack_10);
          goto LAB_04be4c44;
        }
        pwVar5 = L"[ACTIVITY_CLOSED]";
      }
      TodStringTranslate(pwVar5);
      FUN_054766c8(this + 0x58,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
LAB_04be4c44:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::onAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ActiveChristmasLotteryTab::onAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ProfileMgr *this;
  NameMapperBase *pNVar5;
  undefined1 uVar6;
  Effect_PopAnim *pEVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_4,"play");
  if ((!bVar2) || (bVar2 = std::operator==(param_3,"idle2"), !bVar2)) goto LAB_04be4ed4;
  param_1[0x40] = (string)0x1;
  pEVar7 = *(Effect_PopAnim **)(param_1 + 0x38);
  std::string::string(asStack_10,"idle1");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar7,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  Set8BytesTo0(asStack_18);
  pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar5,*(int *)(param_1 + 0x60));
  if (cVar3 == '\0') {
    pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar3 = NameMapperBase::ContainsId(pNVar5,*(int *)(param_1 + 0x60));
    uVar6 = 0;
    if (cVar3 != '\0') {
      iVar4 = PlantChipNameMapperServerID::GetInstance();
      goto LAB_04be4f94;
    }
  }
  else {
    iVar4 = PlantNameMapperServerID::GetInstance();
    uVar6 = 1;
LAB_04be4f94:
    NameMapperBase::GetNameForId(iVar4);
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
  }
  pLVar1 = gLawnApp;
  FUN_05475d88(asStack_10,asStack_18);
  LawnApp::ShowChristmasLotteryReward(pLVar1,asStack_10,uVar6,*(undefined4 *)(param_1 + 100));
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
LAB_04be4ed4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::setupScreen() */

void __thiscall ActiveChristmasLotteryTab::setupScreen(ActiveChristmasLotteryTab *this)

{
  int iVar1;
  undefined4 uVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  TimeChallengeEndLevelUI *this_00;
  ProfileMgr *this_01;
  ActivityConfig *this_02;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  StandaloneEffect *this_03;
  RtWeakPtr aRStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  lVar7 = *(long *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            ((Insets *)&local_50,*(int *)(lVar7 + 0x48),*(int *)(lVar7 + 0x4c),
             *(int *)(lVar7 + 0x50),*(int *)(lVar7 + 0x54));
  *(undefined8 *)(this + 0x28) = local_50;
  *(undefined8 *)(this + 0x30) = uStack_48;
  pEVar3 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x38) = pEVar3;
  std::string::string((string *)&local_50,"POPANIM_EFFECTS_CHRISTMAS_TREE");
  GetPAMByName((string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  pEVar3 = *(Effect_PopAnim **)(this + 0x38);
  *(float *)(pRVar4 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.0006515625;
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  this_03 = *(StandaloneEffect **)(this + 0x38);
  iVar1 = FUN_04be4930(0xee);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_50,(float)(*(int *)(this + 0x28) + *(int *)(this + 0x30) / 2),
             (float)(iVar1 + *(int *)(this + 0x2c)));
  StandaloneEffect::SetScreenSpaceOrigin(this_03,(SexyVector2 *)&local_50,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x38),true);
  pEVar3 = *(Effect_PopAnim **)(this + 0x38);
  std::string::string((string *)&local_50,"idle1");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar3,(Insets *)&local_50,0);
  std::string::~string((string *)&local_50);
  nop();
  this_00 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x38));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ActiveChristmasLotteryTab,void(ActiveChristmasLotteryTab::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,(Insets *)&local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar7 = ProfileMgr::GetCurrentProfile(this_01);
  this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if ((this_02 != (ActivityConfig *)0x0) && (lVar7 != 0)) {
    piVar5 = (int *)ActivityConfig::GetChristmasLotteryData(this_02);
    uVar6 = ActivityConfig::DateMKTime(this_02,piVar5[1]);
    *(undefined8 *)(this + 0x48) = uVar6;
    uVar2 = ActivityConfig::GetCurrentActivityTimeStatus(this_02,*piVar5,piVar5[1]);
    *(undefined4 *)(this + 0x44) = uVar2;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActiveChristmasLotteryTab::ActiveChristmasLotteryTab(int, UI::Dialog*) */

void __thiscall
ActiveChristmasLotteryTab::ActiveChristmasLotteryTab
          (ActiveChristmasLotteryTab *this,int param_1,Dialog *param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR__ActiveChristmasLotteryTab_0697c900;
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  FUN_05476574(this + 0x50);
  FUN_05476574(this + 0x58);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  this[0x40] = (ActiveChristmasLotteryTab)0x1;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGotChristmasLottery);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,int,Sexy::CBMemberTranslatorX<ActiveChristmasLotteryTab,void(ActiveChristmasLotteryTab::*)(bool,int,int)>>
            ((MessageRouter *)puVar1,Message::GotChristmasLottery,&local_40);
  setupScreen(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::onGotChristmasLottery(bool, int, int) */

void __thiscall
ActiveChristmasLotteryTab::onGotChristmasLottery
          (ActiveChristmasLotteryTab *this,bool param_1,int param_2,int param_3)

{
  undefined *puVar1;
  LawnApp *this_00;
  Effect_PopAnim *pEVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pEVar2 = *(Effect_PopAnim **)(this + 0x38);
    std::string::string(asStack_10,"idle2");
    Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    *(int *)(this + 0x60) = param_2;
    *(int *)(this + 100) = param_3;
    Sexy::StrFormat("%d:%d",asStack_18,(ulong)(uint)param_2,(ulong)(uint)param_3);
    puVar1 = gMessageRouter;
    FUN_05475d88(asStack_10,asStack_18);
    MessageRouter::Post<int,std::string_const&,int,std::string>
              ((MessageRouter *)puVar1,Message::ActiveNewYearFinish,0,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  else {
    this[0x40] = (ActiveChristmasLotteryTab)0x1;
    this_00 = gLawnApp;
    std::string::string(asStack_18,"[REVIVE_TIP]");
    std::string::string(asStack_10,"[NETWORK_ERROR_TITLE]");
    LawnApp::ShowMessageDialogNoCallback(this_00,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::PickGachaReward(std::vector<GachaRewardItem,
   std::allocator<GachaRewardItem> > const&) */

void __thiscall
ActiveChristmasLotteryTab::PickGachaReward(ActiveChristmasLotteryTab *this,vector *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined1 local_48 [12];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04be4764(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
    local_50 = FUN_04be50b8(*(undefined8 *)param_1);
    local_48._0_8_ = FUN_04be5108(*(undefined8 *)(param_1 + 8));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)local_48), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      ProbabilitySet<GachaRewardItem>::AddItem
                (aPStack_38,*puVar3,*(undefined4 *)(puVar3 + 1),*(undefined4 *)(puVar3 + 1));
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_50);
    }
    local_48 = ProbabilitySet<GachaRewardItem>::PickItem
                         ((ProbabilitySet<GachaRewardItem> *)aPStack_38);
    *(int *)(this + 0x60) = local_48._0_4_;
    *(int *)(this + 100) = local_48._4_4_;
    ProbabilitySet<GachaRewardItem>::~ProbabilitySet((ProbabilitySet<GachaRewardItem> *)aPStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::DoLottery() */

void __thiscall ActiveChristmasLotteryTab::DoLottery(ActiveChristmasLotteryTab *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ActivityConfig *this_02;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar5 = false;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
  lVar8 = ActivityConfig::GetChristmasLotteryData(this_02);
  iVar7 = FUN_04be4748(*(undefined4 *)(this_01 + 0x110c));
  iVar7 = iVar7 + 1;
  PlayerInfo::SetChristmasLotteryIndex(this_01,iVar7);
  local_18 = FUN_04be5018(*(undefined8 *)(lVar8 + 0x10));
  local_10 = FUN_04be5068(*(undefined8 *)(lVar8 + 0x18));
  while (bVar6 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar6) {
    piVar10 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar10 == iVar7) {
      bVar5 = true;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  uVar13 = *(undefined8 *)(lVar8 + 0x10);
  lVar9 = FUN_04be4750(uVar13,*(undefined8 *)(lVar8 + 0x18));
  if (lVar9 == 0) {
joined_r0x04be5e10:
    if (!bVar5) {
      PickGachaReward(this,(vector *)(lVar8 + 0x28));
      goto LAB_04be5d9c;
    }
  }
  else {
    piVar10 = (int *)FUN_04be475c(uVar13,lVar9 + -1);
    iVar1 = *piVar10;
    if (iVar1 < iVar7) {
      iVar2 = *(int *)(lVar8 + 0xc);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (iVar7 - iVar1) / iVar2;
      }
      iVar7 = (iVar7 - iVar1) - iVar3 * iVar2;
      if (iVar7 == 0) {
        bVar5 = true;
      }
      PlayerInfo::SetChristmasLotteryPlantIndex(this_01,iVar2 - iVar7);
      goto joined_r0x04be5e10;
    }
    if (iVar7 != iVar1) {
      uVar4 = (int)lVar9 - 1;
      if (-1 < (int)uVar4) {
        lVar11 = (long)(int)uVar4 + -1;
        lVar9 = (long)(int)uVar4;
        lVar12 = lVar11;
        while( true ) {
          piVar10 = (int *)FUN_04be475c(uVar13,lVar9);
          if (iVar7 < *piVar10) {
            PlayerInfo::SetChristmasLotteryPlantIndex(this_01,*piVar10 - iVar7);
          }
          if (lVar12 == lVar11 - (ulong)uVar4) break;
          uVar13 = *(undefined8 *)(lVar8 + 0x10);
          lVar9 = lVar12;
          lVar12 = lVar12 + -1;
        }
      }
      goto joined_r0x04be5e10;
    }
    PlayerInfo::SetChristmasLotteryPlantIndex(this_01,*(int *)(lVar8 + 0xc));
  }
  PickGachaReward(this,(vector *)(lVar8 + 0x40));
LAB_04be5d9c:
  PlayerInfo::AddCommonGachaReward
            ((int)this_01,*(int *)(this + 0x60),SUB41(*(undefined4 *)(this + 100),0),false);
  PlayerInfo::SAVE_PROFILE(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::SetSelect(bool) */

void __thiscall ActiveChristmasLotteryTab::SetSelect(ActiveChristmasLotteryTab *this,bool param_1)

{
  UIWidgetImage *pUVar1;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::SetSelect((ActiveCenterTabBase *)this,param_1);
  this_00 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"UIImage_Gem_Icon");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveChristmasLotteryTab::DrawForeground(Sexy::Graphics*) */

void __thiscall
ActiveChristmasLotteryTab::DrawForeground(ActiveChristmasLotteryTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::DrawForeground((ActiveCenterTabBase *)this,param_1);
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar3 = FUN_04be474c(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar3 != '\0')) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(**(long **)(this + 0x20) + 0xd0))(&local_38,*(long **)(this + 0x20));
    Sexy::Graphics::Translate(param_1,local_38,local_34);
    if (*(StandaloneEffect **)(this + 0x38) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x38),param_1);
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar8 = ProfileMgr::GetCurrentProfile(this_00);
    uVar9 = FUN_04be4744(*(undefined4 *)(lVar8 + 0x1108));
    Sexy::StrFormat(L"%d",auStack_30,uVar9 & 0xffffffff);
    iVar4 = FUN_04be4930(0x189);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_04be4930(0x20);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_04be4930(0x1e);
    iVar7 = FUN_04be4930(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,4);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar10,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    iVar4 = FUN_04be4930(0x7e);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_04be4930(0x20);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_04be4930(0x2a);
    iVar7 = FUN_04be4930(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x50,aIStack_28,uVar10,aCStack_18,3,1);
    iVar4 = FUN_04be4930(0xac);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_04be4930(0x20);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_04be4930(100);
    iVar7 = FUN_04be4930(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x58,aIStack_28,uVar10,aCStack_18,3,1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

