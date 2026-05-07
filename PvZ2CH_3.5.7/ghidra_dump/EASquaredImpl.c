// Class: EASquaredImpl


/* EASquaredImpl::IsEnabledForUser() */

EASquaredImpl __thiscall EASquaredImpl::IsEnabledForUser(EASquaredImpl *this)

{
  return this[0x20];
}


/* EASquaredImpl::IsShowingAds() */

EASquaredImpl __thiscall EASquaredImpl::IsShowingAds(EASquaredImpl *this)

{
  return this[0x69];
}


/* EASquaredImpl::IsAwardingAds() */

EASquaredImpl __thiscall EASquaredImpl::IsAwardingAds(EASquaredImpl *this)

{
  return this[0x6a];
}


/* EASquaredImpl::addNumRewardsReceived(int, int) */

void __thiscall EASquaredImpl::addNumRewardsReceived(EASquaredImpl *this,int param_1,int param_2)

{
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + param_1;
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + param_2;
  return;
}


/* EASquaredImpl::onItemPurchasedFromStore(MagentoProductProps*) */

void EASquaredImpl::onItemPurchasedFromStore(MagentoProductProps *param_1)

{
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* EASquaredImpl::HasAdsAvailable() */

undefined8 __thiscall EASquaredImpl::HasAdsAvailable(EASquaredImpl *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x50))();
  if ((cVar1 != '\0') && (cVar1 = Connectivity::IsConnected(), cVar1 != '\0')) {
    uVar2 = Ultra::HasAdvertisements(*(Ultra **)(this + 0x28));
    return uVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::GetUnavailableReason() const */

void EASquaredImpl::GetUnavailableReason(void)

{
  long lVar1;
  char cVar2;
  long *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((char)in_x0[4] == '\0') {
    std::string::string(in_x8,"Uninitialized");
    nop();
  }
  else {
    cVar2 = (**(code **)(*in_x0 + 0x90))();
    if (cVar2 == '\0') {
      std::string::string(in_x8,"NotInSelectedMonetizationGroup");
      nop();
    }
    else {
      cVar2 = (**(code **)(*in_x0 + 0x80))();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*in_x0 + 0x88))();
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*in_x0 + 0x98))();
          if (cVar2 == '\0') {
            std::string::string(in_x8,"FailedMemoryRequirement");
            nop();
          }
          else {
            cVar2 = Connectivity::IsConnected();
            if (cVar2 == '\0') {
              std::string::string(in_x8,"NotConnected");
              nop();
            }
            else {
              cVar2 = Ultra::HasAdvertisements((Ultra *)in_x0[5]);
              if (cVar2 == '\0') {
                std::string::string(in_x8,"NoInventory");
                nop();
              }
              else {
                std::string::string(in_x8,"UnknownReason");
                nop();
              }
            }
          }
        }
        else {
          std::string::string(in_x8,"InstallTooRecent");
          nop();
        }
      }
      else {
        std::string::string(in_x8,"HasTooManyCoins");
        nop();
      }
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredImpl::onShowButtonPress() */

void __thiscall EASquaredImpl::onShowButtonPress(EASquaredImpl *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0x21] = (EASquaredImpl)0x1;
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::PlayerMeetsMemoryRequirements() const */

void EASquaredImpl::PlayerMeetsMemoryRequirements(void)

{
  long lVar1;
  bool bVar2;
  double dVar3;
  string asStack_10 [8];
  long local_8;
  
  bVar2 = true;
  local_8 = ___stack_chk_guard;
  Sexy::SexyAppBase::GetDeviceName();
  lVar1 = FUN_05474374(asStack_10,"iPod4",0);
  if (lVar1 != -1) {
    dVar3 = (double)(**(code **)(**(long **)(Sexy::gSexyAppBase + 0x60) + 0x30))
                              (*(long **)(Sexy::gSexyAppBase + 0x60),2);
    bVar2 = (float)(dVar3 * 9.5367431640625e-07) <= 95.0;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::PlayerInstalledRecently() const */

void __thiscall EASquaredImpl::PlayerInstalledRecently(EASquaredImpl *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = InstallTracker::GetDaysSinceInstall();
  iVar3 = (**(code **)(*(long *)this + 0xa8))(this);
  EASquaredCore::playerInstalledRecently(iVar2,iVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredImpl::GetAdInventoryCount() const */

void __thiscall EASquaredImpl::GetAdInventoryCount(EASquaredImpl *this)

{
  Ultra::GetNumAdvertisementsAvailable(*(Ultra **)(this + 0x28));
  return;
}


/* EASquaredImpl::~EASquaredImpl() */

void __thiscall EASquaredImpl::~EASquaredImpl(EASquaredImpl *this)

{
  *(undefined ***)this = &PTR__EASquaredImpl_0697deb0;
  *(undefined ***)(this + 8) = &PTR__EASquaredImpl_0697df98;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x18));
  Sexy::LazySingleton<EASquaredImpl>::~LazySingleton((LazySingleton<EASquaredImpl> *)(this + 8));
  return;
}


/* non-virtual thunk to EASquaredImpl::~EASquaredImpl() */

void __thiscall EASquaredImpl::~EASquaredImpl(EASquaredImpl *this)

{
  ~EASquaredImpl(this + -8);
  return;
}


/* EASquaredImpl::~EASquaredImpl() */

void __thiscall EASquaredImpl::~EASquaredImpl(EASquaredImpl *this)

{
  ~EASquaredImpl(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EASquaredImpl::~EASquaredImpl() */

void __thiscall EASquaredImpl::~EASquaredImpl(EASquaredImpl *this)

{
  ~EASquaredImpl(this + -8);
  return;
}


/* EASquaredImpl::clearAndLogBasicInfo() */

void __thiscall EASquaredImpl::clearAndLogBasicInfo(EASquaredImpl *this)

{
  EASquaredCheatLogging::ClearFlowLog();
  EASquaredCheatLogging::CommitEa2BasicInfo
            ((string *)(this + 0x18),(bool)this[0x20],(bool)this[0x21],*(int *)(this + 0x30),
             *(int *)(this + 0x34),(bool)this[0x68],(bool)this[0x69],(bool)this[0x6a]);
  nop();
  return;
}


/* EASquaredImpl::clearAndLogEndOfFlow(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall EASquaredImpl::clearAndLogEndOfFlow(EASquaredImpl *this,undefined4 param_2)

{
  EASquaredCheatLogging::ClearFlowLog();
  EASquaredCheatLogging::CommitEa2BasicInfo
            ((string *)(this + 0x18),(bool)this[0x20],(bool)this[0x21],*(int *)(this + 0x30),
             *(int *)(this + 0x34),(bool)this[0x68],(bool)this[0x69],(bool)this[0x6a]);
  EASquaredCheatLogging::CommitEa2FlowEndReason(param_2);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::GetObfuscatedUserId(std::string const&) */

void __thiscall EASquaredImpl::GetObfuscatedUserId(EASquaredImpl *this,string *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  pvVar2 = (void *)FUN_0547429c(this);
  uVar3 = FUN_05474184(this);
  uVar1 = EA::StdC::FNV1(pvVar2,uVar3,0x811c9dc5);
  FUN_054608dc(auStack_168,uVar1);
  FUN_05462824(auStack_178);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::CancelAdvertisementCallback() */

void __thiscall EASquaredImpl::CancelAdvertisementCallback(EASquaredImpl *this)

{
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredImpl::isAdReadyForFinalization() const */

bool __thiscall EASquaredImpl::isAdReadyForFinalization(EASquaredImpl *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  bVar1 = false;
  if (*(float *)(this + 0x10) != fVar2) {
    fVar2 = (float)PVZ_RealT();
    bVar1 = true;
    if (fVar2 < *(float *)(this + 0x10)) {
      return 0 < *(int *)(this + 0x30);
    }
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::onAdvertisementsClosed() */

void __thiscall EASquaredImpl::onAdvertisementsClosed(EASquaredImpl *this)

{
  char cVar1;
  Toggles *this_00;
  long lVar2;
  float fVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  fVar3 = (float)PVZ_RealT();
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"EASquaredAwaitAdCloseDelay");
  cVar1 = Toggles::IsEnabled(this_00,asStack_10);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    lVar2 = LiveConfig::Get();
    fVar4 = *(float *)(lVar2 + 0x30);
  }
  *(float *)(this + 0x10) = fVar4 + fVar3;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::Initialize(std::string const&) */

void __thiscall EASquaredImpl::Initialize(EASquaredImpl *this,string *param_1)

{
  string *extraout_x1;
  Ultra *this_00;
  string asStack_80 [24];
  Delegate2<int,int> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] == (EASquaredImpl)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,addNumRewardsReceived);
    Sexy::Delegate2<int,int>::Delegate2<EASquaredImpl,void(EASquaredImpl::*)(int,int)>
              (aDStack_68,asStack_80);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdvertisementsClosed);
    Sexy::Delegate0::Delegate0<EASquaredImpl,void(EASquaredImpl::*)()>(aDStack_38,asStack_80);
    this_00 = *(Ultra **)(this + 0x28);
    GetObfuscatedUserId((EASquaredImpl *)param_1,extraout_x1);
    Ultra::Initialize(this_00,asStack_80,(Delegate2 *)aDStack_68,aDStack_38);
    std::string::~string(asStack_80);
    this[0x20] = (EASquaredImpl)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::showNoAdsAvailableDialog() */

void __thiscall EASquaredImpl::showNoAdsAvailableDialog(EASquaredImpl *this)

{
  LawnApp *this_00;
  long lVar1;
  PVZ2UIDialog *this_01;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[REVIVE_TIP]",auStack_68);
  FUN_05478178(awStack_50,L"[EA_SQUARED_NO_ADS_AVAILABLE]",auStack_60);
  this_01 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelButtonPress);
  Sexy::Delegate0::Delegate0<EASquaredImpl,void(EASquaredImpl::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  lVar1 = ___stack_chk_guard;
  this[0x6a] = (EASquaredImpl)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredImpl::showAdvertisement(Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>
   const&, bool) */

void __thiscall
EASquaredImpl::showAdvertisement(EASquaredImpl *this,Delegate1 *param_1,bool param_2)

{
  char cVar1;
  
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),(Delegate2 *)param_1);
  this[0x68] = (EASquaredImpl)param_2;
  cVar1 = (**(code **)(*(long *)this + 0x58))(this);
  if (cVar1 == '\0') {
    showNoAdsAvailableDialog(this);
    return;
  }
  (**(code **)(**(long **)(this + 0x28) + 0x10))(*(long **)(this + 0x28));
  this[0x69] = (EASquaredImpl)0x1;
  return;
}


/* EASquaredImpl::PlayerHasTooManyCoins() const */

void __thiscall EASquaredImpl::PlayerHasTooManyCoins(EASquaredImpl *this)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetNumCoins(this_01,false);
  iVar2 = (**(code **)(*(long *)this + 0xa0))(this);
  EASquaredCore::playerHasTooManyCoins(iVar1,iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::PlayerInSelectedMonetizationGroup() const */

void __thiscall EASquaredImpl::PlayerInSelectedMonetizationGroup(EASquaredImpl *this)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_04bf1044(*(undefined4 *)(lVar3 + 0x600));
  lVar3 = DraperHelpers::GetDraperSaveData(iVar1);
  iVar1 = FUN_04bf1048(*(undefined4 *)(lVar3 + 0x28));
  (**(code **)(*(long *)this + 0xb0))(asStack_10,this);
  uVar2 = EASquaredCore::inSelectedMonetizationGroup(iVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::OfferToShowAdvertisements(std::string const&,
   Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> const&) */

void __thiscall
EASquaredImpl::OfferToShowAdvertisements(EASquaredImpl *this,string *param_1,Delegate1 *param_2)

{
  undefined *puVar1;
  LawnApp *this_00;
  char cVar2;
  PVZ2UIDialog *this_01;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x18);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_50,param_1);
  MessageRouter::Broadcast<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::EASquaredOpened,asStack_50);
  std::string::~string(asStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),(Delegate2 *)param_2);
  cVar2 = (**(code **)(*(long *)this + 0x58))(this);
  this_00 = gLawnApp;
  if (cVar2 == '\0') {
    showNoAdsAvailableDialog(this);
  }
  else {
    FUN_05478178(asStack_50,L"[EA_SQUARED_CONFIRMATION_DIALOG_TEXT]",auStack_58);
    this_01 = (PVZ2UIDialog *)LawnApp::ShowPVZ2DialogOneLine(this_00,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    nop();
    FUN_05478178(auStack_58,L"[BUTTON_NO]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelButtonPress);
    Sexy::Delegate0::Delegate0<EASquaredImpl,void(EASquaredImpl::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[BUTTON_YES]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onShowButtonPress);
    Sexy::Delegate0::Delegate0<EASquaredImpl,void(EASquaredImpl::*)()>(aDStack_38,asStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  }
  clearAndLogBasicInfo(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::ShowAdvertisement(std::string const&,
   Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> const&, bool, ViewType,
   ViewPositionType) */

void EASquaredImpl::ShowAdvertisement
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 3);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,param_2);
  MessageRouter::Broadcast<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::EASquaredOpened,asStack_10);
  std::string::~string(asStack_10);
  (**(code **)(*param_1 + 0xd0))(param_1,param_3,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredImpl::EASquaredImpl() */

void __thiscall EASquaredImpl::EASquaredImpl(EASquaredImpl *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  EASquared::EASquared((EASquared *)this);
  Sexy::LazySingleton<EASquaredImpl>::LazySingleton((LazySingleton<EASquaredImpl> *)(this + 8));
  *(undefined ***)this = &PTR__EASquaredImpl_0697deb0;
  *(undefined ***)(this + 8) = &PTR__EASquaredImpl_0697df98;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x10) = uVar3;
  Set8BytesTo0(this + 0x18);
  this[0x20] = (EASquaredImpl)0x0;
  this[0x21] = (EASquaredImpl)0x0;
  uVar2 = Ultra::PlatformSpecificInstance();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x34) = 0;
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1
            ((DummyInit *)(this + 0x38));
  this[0x68] = (EASquaredImpl)0x0;
  this[0x69] = (EASquaredImpl)0x0;
  this[0x6a] = (EASquaredImpl)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onItemPurchasedFromStore);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<EASquaredImpl,void(EASquaredImpl::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredImpl::onFlowEnded(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall EASquaredImpl::onFlowEnded(EASquaredImpl *this,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_40,this + 0x18);
  MessageRouter::Broadcast<std::string_const&,int,int,std::string,int,int>
            ((MessageRouter *)puVar1,Message::EASquaredFlowEnded,asStack_40,
             *(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  std::string::~string(asStack_40);
  clearAndLogEndOfFlow(this,param_2);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = 0;
  this[0x68] = (EASquaredImpl)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x10) = uVar3;
  iVar2 = FUN_04bf1028(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x50));
  if (iVar2 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x38),(SexyURL *)(ulong)param_2);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38);
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x38),(Delegate2 *)aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredImpl::doAdFinalize() */

void __thiscall EASquaredImpl::doAdFinalize(EASquaredImpl *this)

{
  this[0x69] = (EASquaredImpl)0x0;
  if (0 < *(int *)(this + 0x30)) {
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    onFlowEnded(this,0);
    this[0x6a] = (EASquaredImpl)0x0;
    return;
  }
  onFlowEnded(this,4);
  return;
}


/* EASquaredImpl::Update() */

void __thiscall EASquaredImpl::Update(EASquaredImpl *this)

{
  char cVar1;
  
  if (this[0x21] != (EASquaredImpl)0x0) {
    (**(code **)(*(long *)this + 0xd0))(this,this + 0x38,0);
    this[0x21] = (EASquaredImpl)0x0;
    return;
  }
  cVar1 = isAdReadyForFinalization(this);
  if (cVar1 == '\0') {
    return;
  }
  doAdFinalize(this);
  return;
}


/* EASquaredImpl::onCancelButtonPress() */

void __thiscall EASquaredImpl::onCancelButtonPress(EASquaredImpl *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  onFlowEnded(this,4);
  this[0x6a] = (EASquaredImpl)0x0;
  return;
}


/* EASquaredImpl::GetMaxCoinBalance() const */

undefined4 EASquaredImpl::GetMaxCoinBalance(void)

{
  long lVar1;
  
  lVar1 = EASquared::GetProperties();
  return *(undefined4 *)(lVar1 + 0x1c);
}


/* EASquaredImpl::GetMinimumDaysSinceInstall() const */

undefined4 EASquaredImpl::GetMinimumDaysSinceInstall(void)

{
  long lVar1;
  
  lVar1 = EASquared::GetProperties();
  return *(undefined4 *)(lVar1 + 0x18);
}


/* EASquaredImpl::GetDesiredMonetizerType() const */

void __thiscall EASquaredImpl::GetDesiredMonetizerType(EASquaredImpl *this)

{
  EASquared::GetProperties();
  FUN_05475d88();
  return;
}

