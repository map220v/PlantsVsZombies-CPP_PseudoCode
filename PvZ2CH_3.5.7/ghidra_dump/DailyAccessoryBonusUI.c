// Class: DailyAccessoryBonusUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusUI::~DailyAccessoryBonusUI() */

void __thiscall DailyAccessoryBonusUI::~DailyAccessoryBonusUI(DailyAccessoryBonusUI *this)

{
  LawnApp *this_00;
  PrimeText *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__DailyAccessoryBonusUI_0697d380;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Christmas");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyAccessoryBonusUI::~DailyAccessoryBonusUI() */

void __thiscall DailyAccessoryBonusUI::~DailyAccessoryBonusUI(DailyAccessoryBonusUI *this)

{
  ~DailyAccessoryBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* DailyAccessoryBonusUI::KillBonusUI() */

void DailyAccessoryBonusUI::KillBonusUI(void)

{
  LawnApp::KillGoldenEggOpenUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusUI::AddBonus(int, int, int) */

void __thiscall
DailyAccessoryBonusUI::AddBonus(DailyAccessoryBonusUI *this,int param_1,int param_2,int param_3)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  NameMapperBase *this_00;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  nop();
  this_00 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar2 = NameMapperBase::ContainsId(this_00,param_1);
  if (cVar2 != '\0') {
    iVar3 = PlantAccessoryPieceMapper::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    std::operator+("accessory_piece_",asStack_18);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    pLVar1 = gLawnApp;
    FUN_05475d88(asStack_10,asStack_20);
    LawnApp::GoldenEggOpenUIAddBonus(pLVar1,asStack_10,param_2,param_3);
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusUI::Update() */

void __thiscall DailyAccessoryBonusUI::Update(DailyAccessoryBonusUI *this)

{
  char cVar1;
  byte bVar2;
  ProfileMgr *this_00;
  long lVar3;
  NetworkMgr *this_01;
  long *plVar4;
  ChristmasAccessoryInfo local_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(long *)(this + 0x18) != 0) &&
      (cVar1 = FUN_04be73ec(*(undefined1 *)(*(long *)(this + 0x18) + 0x1a8)), cVar1 != '\0')) &&
     (this[0x2d] == (DailyAccessoryBonusUI)0x0)) {
    this[0x2d] = (DailyAccessoryBonusUI)0x1;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_00);
    bVar2 = PlantSarracenia::IsInSpecialStatus((PlantSarracenia *)this);
    if (bVar2 < (lVar3 != 0)) {
      PlayerInfo::GetChristmasAccessoryInfo();
      ChristmasAccessoryInfo::~ChristmasAccessoryInfo(local_68);
      if (local_68[0] == (ChristmasAccessoryInfo)0x0) {
        Sexy::PILayer::SetVisible((PILayer *)this,true);
        this_01 = (NetworkMgr *)NetworkMgr::Instance();
        plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
        if (*(code **)(*plVar4 + 0x298) != INetworkMsgProcess::ICloudRequestGetAccessoryStat) {
          (**(code **)(*plVar4 + 0x298))(plVar4,1);
        }
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
/* DailyAccessoryBonusUI::InitView() */

void __thiscall DailyAccessoryBonusUI::InitView(DailyAccessoryBonusUI *this)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  DailyAccessoryBonusWidget *this_00;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  long *plVar7;
  code *pcVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  int local_20;
  int iStack_1c;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x2e] = (DailyAccessoryBonusUI)0x0;
  this[0x2d] = (DailyAccessoryBonusUI)0x0;
  this[0x2c] = (DailyAccessoryBonusUI)0x0;
  this_00 = ::operator_new(400);
  DailyAccessoryBonusWidget::DailyAccessoryBonusWidget(this_00);
  *(DailyAccessoryBonusWidget **)(this + 0x40) = this_00;
  *(undefined1 *)(*(long *)(this + 0x20) + 0x59) = 0;
  this_01 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bdc0);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_01);
  this_02 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8bdc0);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_02);
  plVar7 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar7 + 0x48))((Insets *)&local_20);
  iVar2 = local_20;
  plVar7 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar7 + 0x48))((Insets *)&local_20);
  iVar3 = iStack_1c;
  iVar6 = FUN_04be7470(0x1e);
  Sexy::Insets::Insets((Insets *)&local_20,iVar2,iVar3 + iVar6,iVar4,iVar5);
  *(ulong *)(this + 0x30) = CONCAT44(iStack_1c,local_20);
  *(undefined8 *)(this + 0x38) = uStack_18;
  plVar7 = (long *)ActiveCenterTabBase::GetTabContent((ActiveCenterTabBase *)this);
  (**(code **)(*plVar7 + 0x60))(plVar7,*(undefined8 *)(this + 0x20));
  (**(code **)(**(long **)(this + 0x20) + 0x198))(*(long **)(this + 0x20),0,0,iVar4,iVar5);
  plVar7 = *(long **)(this + 0x40);
  pcVar8 = *(code **)(*plVar7 + 0x1a0);
  Sexy::Insets::Insets((Insets *)&local_20,0,0,iVar4,iVar5);
  (*pcVar8)(plVar7,(Insets *)&local_20);
  DailyAccessoryBonusWidget::InitView(*(DailyAccessoryBonusWidget **)(this + 0x40));
  (**(code **)(**(long **)(this + 0x20) + 0x60))
            (*(long **)(this + 0x20),*(undefined8 *)(this + 0x40));
  LawnApp::SetAccessoryBonusUI(gLawnApp,this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGotChristmasAccessoryStat);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<DailyAccessoryBonusUI,void(DailyAccessoryBonusUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GotChristmasAccessoryStat,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRefreshChristmasAccessoryStat);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<DailyAccessoryBonusUI,void(DailyAccessoryBonusUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::RefreshChristmasAccessoryStat,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnChristmasAccessoryBought);
  uStack_68 = uStack_18;
  local_60 = local_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<DailyAccessoryBonusUI,void(DailyAccessoryBonusUI::*)(bool)>>
            ((MessageRouter *)puVar1,Message::ChristmasAccessoryBought,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusUI::DailyAccessoryBonusUI(int, UI::Dialog*) */

void __thiscall
DailyAccessoryBonusUI::DailyAccessoryBonusUI
          (DailyAccessoryBonusUI *this,int param_1,Dialog *param_2)

{
  LawnApp *this_00;
  PrimeText *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::ActiveCenterTabBase((ActiveCenterTabBase *)this,param_1,param_2);
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (DailyAccessoryBonusUI)0x0;
  *(undefined ***)this = &PTR__DailyAccessoryBonusUI_0697d380;
  this[0x2d] = (DailyAccessoryBonusUI)0x0;
  this[0x2e] = (DailyAccessoryBonusUI)0x0;
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_Christmas");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this_01 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_01);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusUI::OnGotChristmasAccessoryStat(bool) */

void __thiscall
DailyAccessoryBonusUI::OnGotChristmasAccessoryStat(DailyAccessoryBonusUI *this,bool param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(DailyAccessoryBonusWidget **)(this + 0x40) != (DailyAccessoryBonusWidget *)0x0) {
      DailyAccessoryBonusWidget::RefreshContents(*(DailyAccessoryBonusWidget **)(this + 0x40));
    }
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,param_1);
    FUN_05476c50(awStack_58);
    nop();
  }
  Sexy::PILayer::SetVisible((PILayer *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyAccessoryBonusUI::OnRefreshChristmasAccessoryStat(bool) */

void __thiscall
DailyAccessoryBonusUI::OnRefreshChristmasAccessoryStat(DailyAccessoryBonusUI *this,bool param_1)

{
  if ((param_1) &&
     (*(DailyAccessoryBonusWidget **)(this + 0x40) != (DailyAccessoryBonusWidget *)0x0)) {
    DailyAccessoryBonusWidget::RefreshContents(*(DailyAccessoryBonusWidget **)(this + 0x40));
  }
  Sexy::PILayer::SetVisible((PILayer *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusUI::OnChristmasAccessoryBought(bool) */

void __thiscall
DailyAccessoryBonusUI::OnChristmasAccessoryBought(DailyAccessoryBonusUI *this,bool param_1)

{
  LawnApp *this_00;
  int iVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  PVZ2UIDialog *pPVar2;
  ActivityConfig *this_03;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::DailyAccessoryBonusFinish,
               *(int *)(this + 0x28));
    LawnApp::ShowGoldenEggOpenUI(gLawnApp);
    if (*(DailyAccessoryBonusWidget **)(this + 0x40) != (DailyAccessoryBonusWidget *)0x0) {
      DailyAccessoryBonusWidget::RefreshContents(*(DailyAccessoryBonusWidget **)(this + 0x40));
    }
  }
  else {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if ((this_02 != (PlayerInfo *)0x0) && (*(int *)(this + 0x28) == 2)) {
      this_03 = (ActivityConfig *)LawnApp::GetActivityConfig();
      iVar1 = ActivityConfig::GetChristmasAccessoryPrice(this_03,2);
      PlayerInfo::AddCoins(this_02,iVar1);
    }
    this_00 = gLawnApp;
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  *(undefined4 *)(this + 0x28) = 0;
  Sexy::PILayer::SetVisible((PILayer *)this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyAccessoryBonusUI::SetSelect(bool) */

void __thiscall DailyAccessoryBonusUI::SetSelect(DailyAccessoryBonusUI *this,bool param_1)

{
  PVZ2UIButton *pPVar1;
  Dialog *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ActiveCenterTabBase::SetSelect((ActiveCenterTabBase *)this,param_1);
  FUN_04be73e4(*(long *)(this + 0x40) + 0xd1,param_1);
  (**(code **)(**(long **)(this + 0x40) + 0x158))(*(long **)(this + 0x40),param_1);
  (**(code **)(**(long **)(this + 0x40) + 0x188))(*(long **)(this + 0x40),!param_1);
  this_00 = *(Dialog **)(this + 0x10);
  std::string::string(asStack_10,"Btn_Goto");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,param_1);
  (**(code **)(*(long *)pPVar1 + 0x158))(pPVar1,!param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

