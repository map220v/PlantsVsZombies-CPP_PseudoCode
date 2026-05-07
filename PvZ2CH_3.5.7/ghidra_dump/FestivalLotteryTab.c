// Class: FestivalLotteryTab


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::GetTabContainerImageName() const */

void __thiscall FestivalLotteryTab::GetTabContainerImageName(FestivalLotteryTab *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"IMAGE_UI_FESTIVALCENTER_LOTTERY_EVENT_BG");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::~FestivalLotteryTab() */

void __thiscall FestivalLotteryTab::~FestivalLotteryTab(FestivalLotteryTab *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__FestivalLotteryTab_0671d790;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Lottery_Cracker_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x18))();
    *(undefined8 *)(this + 0x38) = 0;
  }
  FUN_05476c50(this + 0x58);
  FUN_05476c50(this + 0x50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalLotteryTab::~FestivalLotteryTab() */

void __thiscall FestivalLotteryTab::~FestivalLotteryTab(FestivalLotteryTab *this)

{
  ~FestivalLotteryTab(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::GetGoToButtonTitle() */

void FestivalLotteryTab::GetGoToButtonTitle(void)

{
  long in_x0;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[GO_TO_LOTTERY]");
  TodReplaceNumberString(awStack_10,L"{CURRENCY_COST}",*(int *)(in_x0 + 0x68));
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::DisableTabs(bool) */

void __thiscall FestivalLotteryTab::DisableTabs(FestivalLotteryTab *this,bool param_1)

{
  uint uVar1;
  PVZ2UIButton *pPVar2;
  ulong uVar3;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 1;
  do {
    this_00 = *(Dialog **)(this + 0x10);
    Sexy::StrFormat("UIButton_%d",asStack_10,uVar3);
    pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
    std::string::~string(asStack_10);
    if (pPVar2 != (PVZ2UIButton *)0x0) {
      (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,param_1);
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar1;
  } while (uVar1 != 0x26);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::FestivalLotteryTab(int, UI::Dialog*) */

void __thiscall
FestivalLotteryTab::FestivalLotteryTab(FestivalLotteryTab *this,int param_1,Dialog *param_2)

{
  LawnApp *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::FestivalEventTabBase((FestivalEventTabBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR__FestivalLotteryTab_0671d790;
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  FUN_05476574(this + 0x50);
  FUN_05476574(this + 0x58);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Lottery_Cracker_Effect");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x38) = 0;
  lVar1 = ___stack_chk_guard;
  this[0x40] = (FestivalLotteryTab)0x1;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x74] = (FestivalLotteryTab)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::SetSelect(bool) */

void __thiscall FestivalLotteryTab::SetSelect(FestivalLotteryTab *this,bool param_1)

{
  int iVar1;
  PVZ2UIButton *this_00;
  PVZ2UIButton *pPVar2;
  UIWidgetImage *pUVar3;
  Dialog *pDVar4;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FestivalEventTabBase::SetSelect((FestivalEventTabBase *)this,param_1);
  pDVar4 = *(Dialog **)(this + 0x10);
  std::string::string((string *)local_18,"Btn_Goto");
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar4,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(*(long *)this_00 + 0x158))(this_00,1);
  pDVar4 = *(Dialog **)(this + 0x10);
  std::string::string((string *)local_18,"Btn_Check");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>(pDVar4,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  (**(code **)(*(long *)pPVar2 + 0x158))(pPVar2,param_1);
  if (param_1) {
    UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
    FestivalEventUI::GetFontRect();
    iVar1 = FUN_03ac4800(0xf);
    local_18[0] = local_18[0] + iVar1;
    PVZ2UIButton::SetContentsRect(this_00,(TRect *)local_18);
  }
  else {
    UISingletonDialog<FestivalEventUI>::GetSingletonPtr();
    FestivalEventUI::GetFontRect();
    PVZ2UIButton::SetContentsRect(this_00,(TRect *)local_18);
  }
  pDVar4 = *(Dialog **)(this + 0x10);
  std::string::string((string *)local_18,"UIImage_Gem_Icon");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>(pDVar4,(string *)local_18);
  std::string::~string((string *)local_18);
  nop();
  if (pUVar3 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::DrawForeground(Sexy::Graphics*) */

void __thiscall FestivalLotteryTab::DrawForeground(FestivalLotteryTab *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  undefined8 uVar8;
  GraphicsAutoState aGStack_40 [8];
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar3 = FUN_03ac12b0(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar3 != '\0')) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(**(long **)(this + 0x20) + 0xd0))(&local_38,*(long **)(this + 0x20));
    Sexy::Graphics::Translate(param_1,local_38,local_34);
    if (*(StandaloneEffect **)(this + 0x38) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x38),param_1);
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    Sexy::StrFormat(L"%d",auStack_30,(ulong)*(uint *)(this + 0x6c));
    iVar4 = FUN_03ac4800(0x189);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_03ac4800(0x20);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_03ac4800(0x1e);
    iVar7 = FUN_03ac4800(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar8 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,4);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    iVar4 = FUN_03ac4800(0x7b);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_03ac4800(0x20);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_03ac4800(0x2a);
    iVar7 = FUN_03ac4800(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar8 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x50,aIStack_28,uVar8,aCStack_18,3,1);
    iVar4 = FUN_03ac4800(0xac);
    iVar1 = *(int *)(this + 0x28);
    iVar5 = FUN_03ac4800(0x20);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_03ac4800(100);
    iVar7 = FUN_03ac4800(0x24);
    Sexy::Insets::Insets(aIStack_28,iVar4 + iVar1,iVar5 + iVar2,iVar6,iVar7);
    uVar8 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x58,aIStack_28,uVar8,aCStack_18,3,1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::OnButtonClicked(int) */

void FestivalLotteryTab::OnButtonClicked(int param_1)

{
  int iVar1;
  int iVar2;
  FestivalLotteryTab *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  Effect_PopAnim *pEVar3;
  string asStack_10 [8];
  long local_8;
  
  this = (FestivalLotteryTab *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (this[0x40] != (FestivalLotteryTab)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = *(int *)(this + 0x68);
    iVar1 = PlayerInfo::GetNumGems(this_01,true);
    if (iVar1 < iVar2) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
    }
    else if (*(long *)(this + 0x38) != 0) {
      this[0x40] = (FestivalLotteryTab)0x0;
      iVar2 = PlayerInfo::SubtractGems
                        (this_01,iVar2,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
      if (-1 < iVar2) {
        pEVar3 = *(Effect_PopAnim **)(this + 0x38);
        std::string::string(asStack_10,"idle2");
        Effect_PopAnim::PlaySingleAnimation(pEVar3,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
        DisableTabs(this,true);
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
/* FestivalLotteryTab::Update() */

void __thiscall FestivalLotteryTab::Update(FestivalLotteryTab *this)

{
  FestivalLotteryTab *pFVar1;
  uint uVar2;
  char cVar3;
  ProfileMgr *this_00;
  long lVar4;
  PVZ2UIButton *pPVar5;
  wchar_t *pwVar6;
  int iVar7;
  Dialog *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x18) != 0) &&
     (cVar3 = FUN_03ac12b0(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar3 != '\0')) {
    if (*(StandaloneEffect **)(this + 0x38) != (StandaloneEffect *)0x0) {
      StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x38));
    }
    pFVar1 = this + 0x50;
    FUN_054772c4(pFVar1,&DAT_056f11a8);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    if (lVar4 != 0) {
      lVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
      if (lVar4 == 0) {
        FUN_054772c4(pFVar1,&DAT_05700290);
        pwVar6 = L"[PLANT_ADVENTURE_UNCONNECTED]";
      }
      else {
        if (*(int *)(this + 0x44) != 0) {
          if (*(int *)(this + 0x44) == 1) {
            TodStringTranslate(L"[ACTIVITY_CLOSED]");
            FUN_054766c8(this + 0x58,asStack_10);
            FUN_05476c50(asStack_10);
            this_01 = *(Dialog **)(this + 0x10);
            std::string::string(asStack_10,"Btn_Goto");
            pPVar5 = UI::Dialog::GetWidget<PVZ2UIButton>(this_01,asStack_10);
            std::string::~string(asStack_10);
            nop();
            if (pPVar5 != (PVZ2UIButton *)0x0) {
              (**(code **)(*(long *)pPVar5 + 0x188))(pPVar5,1);
            }
          }
          goto LAB_03aca2dc;
        }
        if ((uint)lVar4 < (uint)*(undefined8 *)(this + 0x48)) {
          uVar2 = (uint)*(undefined8 *)(this + 0x48) - (uint)lVar4;
          Sexy::StrFormat(L"%d",asStack_10,(ulong)uVar2 / 0x15180);
          FUN_054766c8(pFVar1,asStack_10);
          FUN_05476c50(asStack_10);
          iVar7 = (int)((ulong)uVar2 / 0x3c);
          Sexy::StrFormat(L"%02d:%02d:%02d",asStack_10,
                          (ulong)(uint)((int)((ulong)uVar2 / 0xe10) +
                                       (int)(((ulong)uVar2 / 0xe10) / 0x18) * -0x18),
                          (ulong)(uint)(iVar7 + (int)(((ulong)uVar2 / 0x3c) / 0x3c) * -0x3c),
                          (ulong)(uVar2 + iVar7 * -0x3c));
          FUN_054766c8(this + 0x58,asStack_10);
          FUN_05476c50(asStack_10);
          goto LAB_03aca2dc;
        }
        pwVar6 = L"[ACTIVITY_CLOSED]";
      }
      TodStringTranslate(pwVar6);
      FUN_054766c8(this + 0x58,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
LAB_03aca2dc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::setupScreen() */

void __thiscall FestivalLotteryTab::setupScreen(FestivalLotteryTab *this)

{
  int iVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  TimeChallengeEndLevelUI *this_00;
  ProfileMgr *this_01;
  ActivityConfig *this_02;
  PVZ2UIButton *pPVar4;
  undefined8 uVar5;
  long lVar6;
  Dialog *this_03;
  StandaloneEffect *this_04;
  RtWeakPtr aRStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  lVar6 = *(long *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            ((Insets *)&local_50,*(int *)(lVar6 + 0x48),*(int *)(lVar6 + 0x4c),
             *(int *)(lVar6 + 0x50),*(int *)(lVar6 + 0x54));
  *(undefined8 *)(this + 0x28) = local_50;
  *(undefined8 *)(this + 0x30) = uStack_48;
  pEVar2 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x38) = pEVar2;
  std::string::string((string *)&local_50,"POPANIM_EFFECTS_LOTTERY_CRACKER");
  GetPAMByName((string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
  pEVar2 = *(Effect_PopAnim **)(this + 0x38);
  *(float *)(pRVar3 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.0006515625;
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  this_04 = *(StandaloneEffect **)(this + 0x38);
  iVar1 = FUN_03ac4800(0xb3);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_50,(float)(*(int *)(this + 0x28) + *(int *)(this + 0x30) / 2),
             (float)(iVar1 + *(int *)(this + 0x2c)));
  StandaloneEffect::SetScreenSpaceOrigin(this_04,(SexyVector2 *)&local_50,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x38),true);
  pEVar2 = *(Effect_PopAnim **)(this + 0x38);
  std::string::string((string *)&local_50,"idle1");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,(Insets *)&local_50,0);
  std::string::~string((string *)&local_50);
  nop();
  this_00 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x38));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<FestivalLotteryTab,void(FestivalLotteryTab::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,(Insets *)&local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar6 = ProfileMgr::GetCurrentProfile(this_01);
  this_02 = (ActivityConfig *)LawnApp::GetActivityConfig();
  if ((this_02 != (ActivityConfig *)0x0) && (lVar6 != 0)) {
    uVar5 = ActivityConfig::DateMKTime(this_02,*(int *)(this + 0x70));
    *(undefined8 *)(this + 0x48) = uVar5;
    if (this[0x74] == (FestivalLotteryTab)0x0) {
      *(undefined4 *)(this + 0x44) = 1;
    }
    else {
      *(undefined4 *)(this + 0x44) = 0;
    }
  }
  this_03 = *(Dialog **)(this + 0x10);
  std::string::string((string *)&local_50,"Btn_Goto");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>(this_03,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  if (pPVar4 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)this + 0x40))((Insets *)&local_50,this);
    FUN_054766c8(pPVar4 + 0xd8,(Insets *)&local_50);
    FUN_05476c50((Insets *)&local_50);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalLotteryTab::SyncActivityData(NetworkLotteryInfo const&, int, bool) */

void __thiscall
FestivalLotteryTab::SyncActivityData
          (FestivalLotteryTab *this,NetworkLotteryInfo *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x68) = uVar1;
  *(int *)(this + 0x70) = param_2;
  this[0x74] = (FestivalLotteryTab)param_3;
  setupScreen(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::onGotChristmasLottery(bool, int, int) */

void __thiscall
FestivalLotteryTab::onGotChristmasLottery
          (FestivalLotteryTab *this,bool param_1,int param_2,int param_3)

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
    this[0x40] = (FestivalLotteryTab)0x1;
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
/* FestivalLotteryTab::DoLottery() */

void __thiscall FestivalLotteryTab::DoLottery(FestivalLotteryTab *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1416];
  string asStack_760 [1880];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x2a16);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03ac4630(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_760,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalLotteryTab::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void FestivalLotteryTab::onAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"play");
  if ((bVar1) && (bVar1 = std::operator==(param_3,"idle2"), bVar1)) {
    pEVar2 = *(Effect_PopAnim **)(param_1 + 0x38);
    std::string::string(asStack_10,"idle1");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    DisableTabs((FestivalLotteryTab *)param_1,false);
    DoLottery((FestivalLotteryTab *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

