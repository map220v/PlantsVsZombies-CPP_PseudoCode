// Class: PVPZombieLevelUpMain


/* PVPZombieLevelUpMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVPZombieLevelUpMain::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVPZombieLevelUpMain::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVPZombieLevelUpMain::ScrollTargetReached(PVPZombieLevelUpMain *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PVPZombieLevelUpMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVPZombieLevelUpMain::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVPZombieLevelUpMain::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PVPZombieLevelUpMain::ScrollTargetInterrupted(PVPZombieLevelUpMain *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PVPZombieLevelUpMain::ConfirmCompletePVPUpgrade(int) */

void __thiscall
PVPZombieLevelUpMain::ConfirmCompletePVPUpgrade(PVPZombieLevelUpMain *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  
  if (param_1 != 1) {
    return;
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestCompletePVPUpgrade(this_01);
  return;
}


/* PVPZombieLevelUpMain::~PVPZombieLevelUpMain() */

void __thiscall PVPZombieLevelUpMain::~PVPZombieLevelUpMain(PVPZombieLevelUpMain *this)

{
  DAT_06b82c58 = 0;
  *(undefined ***)(this + 0xd8) = &PTR__PVPZombieLevelUpMain_06952c50;
  *(undefined ***)this = &PTR_GetClass_06952920;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PVPZombieLevelUpMain::~PVPZombieLevelUpMain() */

void __thiscall PVPZombieLevelUpMain::~PVPZombieLevelUpMain(PVPZombieLevelUpMain *this)

{
  ~PVPZombieLevelUpMain(this + -0xd8);
  return;
}


/* PVPZombieLevelUpMain::~PVPZombieLevelUpMain() */

void __thiscall PVPZombieLevelUpMain::~PVPZombieLevelUpMain(PVPZombieLevelUpMain *this)

{
  ~PVPZombieLevelUpMain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVPZombieLevelUpMain::~PVPZombieLevelUpMain() */

void __thiscall PVPZombieLevelUpMain::~PVPZombieLevelUpMain(PVPZombieLevelUpMain *this)

{
  ~PVPZombieLevelUpMain(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpMain::GetDoPVPCompleteUpgradeGemSuccess(int) */

void __thiscall
PVPZombieLevelUpMain::GetDoPVPCompleteUpgradeGemSuccess(PVPZombieLevelUpMain *this,int param_1)

{
  CardGameDeckButton *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0xe0) != 0) &&
     (this_00 = (CardGameDeckButton *)FUN_04afcc4c(*(undefined8 *)(*(long *)(this + 0xe0) + 0x110)),
     this_00 != (CardGameDeckButton *)0x0)) {
    CardGameDeckButton::SetIndex(this_00,param_1);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ConfirmCompletePVPUpgrade);
    Sexy::Delegate1<int>::Delegate1<PVPZombieLevelUpMain,void(PVPZombieLevelUpMain::*)(int)>
              (aDStack_38,aCStack_50);
    PVPFinishButton::ShowBuyConfirm((PVPFinishButton *)this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpMain::Draw(Sexy::Graphics*) */

void __thiscall PVPZombieLevelUpMain::Draw(PVPZombieLevelUpMain *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  nop();
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82d98);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  iVar2 = FUN_04afce4c(0x28);
  iVar3 = FUN_04afce4c(0x154);
  iVar4 = FUN_04afce4c(0x50);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04afce4c(0x96);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b82b00);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  TodStringTranslate(L"[PVP_ZOMBIE_LEVEL_UP_TITLE]");
  iVar1 = *(int *)(this + 0x50);
  iVar2 = FUN_04afce4c(100);
  iVar3 = FUN_04afce4c(0xffffffba);
  iVar4 = FUN_04afce4c(200);
  Sexy::Insets::Insets(aIStack_28,(iVar1 - iVar2) / 2,iVar3,iVar1,iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,3,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpMain::RefreshMainView(std::string const&) */

void __thiscall PVPZombieLevelUpMain::RefreshMainView(PVPZombieLevelUpMain *this,string *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  PVPZombieLevelUpTitle *this_00;
  PVPZombieLevelUpContent *this_01;
  
  cVar2 = FUN_0547419c(param_1);
  if (cVar2 != '\0') {
    return;
  }
  thunk_FUN_05475e00(this + 0xf0,param_1);
  if (*(long *)(this + 0xe0) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0xe0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x18))();
    }
    *(undefined8 *)(this + 0xe0) = 0;
  }
  if (*(long *)(this + 0xe8) != 0) {
    (**(code **)(*(long *)this + 0x68))(this);
    if (*(long **)(this + 0xe8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xe8) + 0x18))();
    }
    *(undefined8 *)(this + 0xe8) = 0;
  }
  this_00 = ::operator_new(0x120);
  PVPZombieLevelUpTitle::PVPZombieLevelUpTitle(this_00,param_1);
  *(PVPZombieLevelUpTitle **)(this + 0xe0) = this_00;
  uVar3 = FUN_04afce4c(0x19);
  uVar4 = FUN_04afce4c(0x50);
  (**(code **)(*(long *)this_00 + 0x1a8))(this_00,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  this_01 = ::operator_new(0xe0);
  PVPZombieLevelUpContent::PVPZombieLevelUpContent(this_01,param_1);
  *(PVPZombieLevelUpContent **)(this + 0xe8) = this_01;
  iVar5 = FUN_04afce4c(0x32);
  iVar1 = *(int *)(*(long *)(this + 0xe0) + 0x50);
  uVar3 = FUN_04afce4c(0x50);
  (**(code **)(*(long *)this_01 + 0x1a8))(this_01,iVar5 + iVar1,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpMain::InitView(std::string const&) */

void __thiscall PVPZombieLevelUpMain::InitView(PVPZombieLevelUpMain *this,string *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04afce4c(0x30c);
  uVar3 = FUN_04afce4c(500);
  (**(code **)(*(long *)this + 0x198))(this,0,0,uVar2,uVar3);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLabRefresh);
  Sexy::Delegate0::Delegate0<PVPZombieLevelUpMain,void(PVPZombieLevelUpMain::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PVPLabRefresh,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GetDoPVPCompleteUpgradeGemSuccess);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PVPZombieLevelUpMain,void(PVPZombieLevelUpMain::*)(int)>>
            ((MessageRouter *)puVar1,Message::GetPVPCompleteUpgradeGemSuccess,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGetPVPCompletePVPUpgrade);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<S2C_PVPCompleteUpgradeData*,Sexy::CBMemberTranslatorX<PVPZombieLevelUpMain,void(PVPZombieLevelUpMain::*)(S2C_PVPCompleteUpgradeData*)>>
            ((MessageRouter *)puVar1,Message::GetPVPCompletePVPUpgrade,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RecvBeginPVPUpgradeSuccess);
  Sexy::Delegate0::Delegate0<PVPZombieLevelUpMain,void(PVPZombieLevelUpMain::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BeginPVPUpgradeSuccess,aDStack_38);
  RefreshMainView(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpMain::onPVPLabRefresh() */

void __thiscall PVPZombieLevelUpMain::onPVPLabRefresh(PVPZombieLevelUpMain *this)

{
  RefreshMainView(this,(string *)(this + 0xf0));
  return;
}


/* PVPZombieLevelUpMain::RecvBeginPVPUpgradeSuccess() */

void __thiscall PVPZombieLevelUpMain::RecvBeginPVPUpgradeSuccess(PVPZombieLevelUpMain *this)

{
  if (*(PVPZombieLevelUpTitle **)(this + 0xe0) != (PVPZombieLevelUpTitle *)0x0) {
    PVPZombieLevelUpTitle::BeginPVPUpgradeSuccess(*(PVPZombieLevelUpTitle **)(this + 0xe0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpMain::OnGetPVPCompletePVPUpgrade(S2C_PVPCompleteUpgradeData*) */

void __thiscall
PVPZombieLevelUpMain::OnGetPVPCompletePVPUpgrade
          (PVPZombieLevelUpMain *this,S2C_PVPCompleteUpgradeData *param_1)

{
  PlayerInfo *this_00;
  PVPManager *this_01;
  long lVar1;
  AssetsManagerManifest *this_02;
  PVPLabData *pPVar2;
  string asStack_20 [8];
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (S2C_PVPCompleteUpgradeData *)0x0) && (*(int *)(param_1 + 0x14) == 4)) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    if (this_00 != (PlayerInfo *)0x0) {
      PlayerInfo::SetGems(this_00,*(int *)(param_1 + 0x20));
    }
    this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    ServerZombieID::ServerZombieID(aSStack_18,*(int *)(param_1 + 0x1c));
    ServerZombieID::ToString();
    lVar1 = PVPManager::GetZombieData(this_01,asStack_20);
    std::string::~string(asStack_20);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_1 + 0x18);
    }
    this_02 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    pPVar2 = (PVPLabData *)AssetsManagerManifest::getAssets(this_02);
    PVPLabData::SetUpgradeItem(pPVar2,0,0,0);
    RefreshMainView(this,(string *)(this + 0xf0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPZombieLevelUpMain::AddZombiesSeedScroll() */

void __thiscall PVPZombieLevelUpMain::AddZombiesSeedScroll(PVPZombieLevelUpMain *this)

{
  PVPZombieLevelUpMain *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  AssetsManagerManifest *pAVar8;
  long lVar9;
  PVPZombieChooser *this_01;
  string *psVar10;
  PVZ2UIScrollingWidget *this_02;
  string asStack_28 [8];
  string asStack_20 [8];
  DVec2 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"pvp_nurse");
  nop();
  pAVar8 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar9 = AssetsManagerManifest::getAssets(pAVar8);
  iVar1 = FUN_04afcc28(*(undefined4 *)(lVar9 + 0x30));
  if (iVar1 == 4) {
    pAVar8 = (AssetsManagerManifest *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    lVar9 = AssetsManagerManifest::getAssets(pAVar8);
    iVar1 = FUN_04afcc2c(*(undefined4 *)(lVar9 + 0x34));
    if (0 < iVar1) {
      ServerZombieID::ServerZombieID((ServerZombieID *)aDStack_18,iVar1);
      ServerZombieID::ToString();
      FUN_05474278(asStack_28,asStack_20);
      std::string::~string(asStack_20);
    }
  }
  this_01 = ::operator_new(0x100);
  PVPZombieChooser::PVPZombieChooser(this_01,asStack_28);
  uVar2 = FUN_04afce4c(0x32);
  iVar3 = FUN_04afce4c(0xb9);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_04afce4c(100);
  iVar6 = *(int *)(this + 0x50);
  uVar5 = FUN_04afce4c(0xaa);
  (**(code **)(*(long *)this_01 + 0x310))(this_01,uVar2,iVar1 - iVar3,iVar6 - iVar4,uVar5);
  this_00 = DAT_06b82c58;
  psVar10 = (string *)UIWidgetAnim::GetScale((UIWidgetAnim *)this_01);
  RefreshMainView(this_00,psVar10);
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0xd8));
  uVar2 = FUN_04afce4c(0x32);
  uVar5 = FUN_04afce4c(0x136);
  iVar6 = FUN_04afce4c(100);
  iVar1 = *(int *)(this + 0x50);
  uVar7 = FUN_04afce4c(0xaa);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar2,uVar5,iVar1 - iVar6,uVar7);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,1);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  (**(code **)(*(long *)this_02 + 0x60))(this_02,this_01);
  iVar1 = PVPZombieChooser::GetScrollOffset(this_01);
  lVar9 = AccessoryContent::GetDisplayImage((AccessoryContent *)this_02);
  DVec2::DVec2(aDStack_18,(float)iVar1,(float)*(int *)(lVar9 + 0x4c));
  Sexy::ScrollWidget::SetScrollOffset((ScrollWidget *)this_02,aDStack_18,0);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPZombieLevelUpMain::PVPZombieLevelUpMain(std::string const&) */

void __thiscall
PVPZombieLevelUpMain::PVPZombieLevelUpMain(PVPZombieLevelUpMain *this,string *param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined ***)this = &PTR_GetClass_06952920;
  *(undefined ***)(this + 0xd8) = &PTR__PVPZombieLevelUpMain_06952c50;
  Set8BytesTo0(this + 0xf0);
  DAT_06b82c58 = this;
  InitView(this,param_1);
  AddZombiesSeedScroll(this);
  return;
}

