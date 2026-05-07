// Class: PurchaseBroker


/* PurchaseBroker::OnAppResumeFocus() */

void __thiscall PurchaseBroker::OnAppResumeFocus(PurchaseBroker *this)

{
  if (*(AndroidPurchaseDriver **)(this + 0x40) != (AndroidPurchaseDriver *)0x0) {
    Sexy::AndroidPurchaseDriver::OnResume(*(AndroidPurchaseDriver **)(this + 0x40));
    return;
  }
  return;
}


/* PurchaseBroker::ShowAuthIDDialog() */

void PurchaseBroker::ShowAuthIDDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  UINameAuthentication::ShowDialog(true);
  return;
}


/* PurchaseBroker::onDialogButtonPressed() */

void __thiscall PurchaseBroker::onDialogButtonPressed(PurchaseBroker *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this[0xa8] = (PurchaseBroker)0x0;
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PurchaseBroker::GetPurchaseAdapter(PurchaseChannel) */

ChinaMobileMMChannelPurchaseAdapter * __thiscall
PurchaseBroker::GetPurchaseAdapter(PurchaseBroker *this,int param_2)

{
  ChinaMobileMMChannelPurchaseAdapter *this_00;
  ChinaMobileChannelPurchaseAdapter *this_01;
  
  if (param_2 == 1) {
    if (this[0xc] != (PurchaseBroker)0x0) {
      this_01 = ::operator_new(0x30);
      Sexy::ChinaMobileChannelPurchaseAdapter::ChinaMobileChannelPurchaseAdapter(this_01);
      return (ChinaMobileMMChannelPurchaseAdapter *)this_01;
    }
  }
  else if ((param_2 == 2) && (this[0xd] != (PurchaseBroker)0x0)) {
    this_00 = ::operator_new(0x28);
    Sexy::ChinaMobileMMChannelPurchaseAdapter::ChinaMobileMMChannelPurchaseAdapter(this_00);
    return this_00;
  }
  return (ChinaMobileMMChannelPurchaseAdapter *)0x0;
}


/* PurchaseBroker::LaunchSave() */

void __thiscall PurchaseBroker::LaunchSave(PurchaseBroker *this)

{
  Sexy::AndroidPurchaseDriver::StartRecharge(*(AndroidPurchaseDriver **)(this + 0x40));
  return;
}


/* PurchaseBroker::ExitGame() */

void __thiscall PurchaseBroker::ExitGame(PurchaseBroker *this)

{
  if (*(AndroidPurchaseDriver **)(this + 0x40) != (AndroidPurchaseDriver *)0x0) {
    Sexy::AndroidPurchaseDriver::ExitGame(*(AndroidPurchaseDriver **)(this + 0x40));
    return;
  }
  return;
}


/* PurchaseBroker::LaunchMoreGamesWebpage() */

void __thiscall PurchaseBroker::LaunchMoreGamesWebpage(PurchaseBroker *this)

{
  if (*(AndroidPurchaseDriver **)(this + 0x40) != (AndroidPurchaseDriver *)0x0) {
    Sexy::AndroidPurchaseDriver::LaunchMoreGamesWebpage(*(AndroidPurchaseDriver **)(this + 0x40));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetPurchasePlatform() */

void PurchaseBroker::GetPurchasePlatform(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"no-purchase-drvier");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetPurchasePlatform();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetAboutContentStringId() */

void PurchaseBroker::GetAboutContentStringId(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    FUN_05478178();
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetAboutContentStringId();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::DoOfflinePayment(std::string const&) */

void PurchaseBroker::DoOfflinePayment(string *param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x70) == 4) {
    psVar1 = *(string **)(param_1 + 0x40);
    std::string::string(asStack_10,"");
    Sexy::AndroidPurchaseDriver::RequestValidationPayment(psVar1,param_1 + 0x78,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::DoValidationPayment(std::string const&, std::string const&) */

void PurchaseBroker::DoValidationPayment(string *param_1,string *param_2)

{
  if (*(int *)(param_1 + 0x70) != 4) {
    return;
  }
  Sexy::AndroidPurchaseDriver::RequestValidationPayment
            (*(string **)(param_1 + 0x40),param_1 + 0x78,param_2);
  return;
}


/* PurchaseBroker::NeedPurchaseWhite() */

undefined8 __thiscall PurchaseBroker::NeedPurchaseWhite(PurchaseBroker *this)

{
  undefined8 uVar1;
  
  if (*(AndroidPurchaseDriver **)(this + 0x40) != (AndroidPurchaseDriver *)0x0) {
    uVar1 = Sexy::AndroidPurchaseDriver::NeedPurchaseWhite(*(AndroidPurchaseDriver **)(this + 0x40))
    ;
    return uVar1;
  }
  return 1;
}


/* PurchaseBroker::NeedShowChannelActivity() */

undefined8 __thiscall PurchaseBroker::NeedShowChannelActivity(PurchaseBroker *this)

{
  undefined8 uVar1;
  
  if (*(AndroidPurchaseDriver **)(this + 0x40) != (AndroidPurchaseDriver *)0x0) {
    uVar1 = Sexy::AndroidPurchaseDriver::NeedShowChannelActivity
                      (*(AndroidPurchaseDriver **)(this + 0x40));
    return uVar1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetChannelID() */

void PurchaseBroker::GetChannelID(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetChannelID();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetUniqueCharacterID() */

void PurchaseBroker::GetUniqueCharacterID(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetUniqueCharacterID();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetUniqueID() */

void PurchaseBroker::GetUniqueID(void)

{
  long in_x0;
  undefined8 uVar1;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetUniqueID();
    uVar1 = FUN_0547429c(asStack_10);
    Sexy::OutputDebugStrF((wchar_t *)"PurchaseBroker::GetUniqueID:m_purchaseDriver = %s",uVar1);
    Sexy::AndroidPurchaseDriver::GetUniqueID();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetChannelUpdateUrl() */

void PurchaseBroker::GetChannelUpdateUrl(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)"PurchaseBroker::GetChannelUpdateUrl %d",
             (ulong)(*(long *)(in_x0 + 0x40) != 0));
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetChannelUpdateUrl();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetDeviceID() */

void PurchaseBroker::GetDeviceID(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetDeviceID();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetTWRequestHead() */

void PurchaseBroker::GetTWRequestHead(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetTWRequestHead();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetSignature() */

void PurchaseBroker::GetSignature(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetSignature();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::QueryOrder(std::string const&) */

void PurchaseBroker::QueryOrder(string *param_1)

{
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x60))();
  }
  return;
}


/* PurchaseBroker::CheckRedeemOrders() */

void __thiscall PurchaseBroker::CheckRedeemOrders(PurchaseBroker *this)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x68))();
  }
  return;
}


/* PurchaseBroker::GetRedeemOrders(std::map<std::string, Sexy::RedeemInfo, std::less<std::string >,
   std::allocator<std::pair<std::string const, Sexy::RedeemInfo> > >&) */

void PurchaseBroker::GetRedeemOrders(map *param_1)

{
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x70))();
  }
  return;
}


/* PurchaseBroker::ShowGameCommunity() */

void __thiscall PurchaseBroker::ShowGameCommunity(PurchaseBroker *this)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x78))();
  }
  return;
}


/* PurchaseBroker::CheckGameCenterStatus() */

void __thiscall PurchaseBroker::CheckGameCenterStatus(PurchaseBroker *this)

{
  if (*(AndroidPurchaseDriver **)(this + 0x40) != (AndroidPurchaseDriver *)0x0) {
    Sexy::AndroidPurchaseDriver::CheckGameCenterStatus(*(AndroidPurchaseDriver **)(this + 0x40));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetGameCenterUrl() */

void PurchaseBroker::GetGameCenterUrl(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x40) == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::AndroidPurchaseDriver::GetGameCenterUrl();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::Consume(std::string const&, std::string const&) */

void PurchaseBroker::Consume(string *param_1,string *param_2)

{
  if (*(string **)(param_1 + 0x40) != (string *)0x0) {
    Sexy::AndroidPurchaseDriver::Consume(*(string **)(param_1 + 0x40),param_2);
    return;
  }
  return;
}


/* PurchaseBroker::CheckSpecialRedeem() */

void __thiscall PurchaseBroker::CheckSpecialRedeem(PurchaseBroker *this)

{
  if (*(AndroidPurchaseDriver **)(this + 0x40) != (AndroidPurchaseDriver *)0x0) {
    Sexy::AndroidPurchaseDriver::CheckSpecialRedeem(*(AndroidPurchaseDriver **)(this + 0x40));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetProductInfo(std::string const&) */

void PurchaseBroker::GetProductInfo(string *param_1)

{
  long *plVar1;
  undefined8 in_x1;
  ProductInfo *in_x8;
  DownloadInfo aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ProductInfo::ProductInfo(in_x8);
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x80))(aDStack_28,plVar1,in_x1);
    Sexy::ProductInfo::operator=(in_x8,(ProductInfo *)aDStack_28);
    Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::ConfirmDelivery(std::string const&) */

void PurchaseBroker::ConfirmDelivery(string *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x40) + 0x50))(*(long **)(param_1 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::SetRechargeBundleObjectID(int) */

void __thiscall PurchaseBroker::SetRechargeBundleObjectID(PurchaseBroker *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"rechargeBundleObjectID");
  UserPrefs::SetInt(asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetRechargeBundleObjectID() */

void PurchaseBroker::GetRechargeBundleObjectID(void)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"rechargeBundleObjectID");
  uVar1 = UserPrefs::GetInt(asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::SetArtifactPresentBundleObjectID(int) */

void __thiscall PurchaseBroker::SetArtifactPresentBundleObjectID(PurchaseBroker *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"artifactPresentBundleObjectID");
  UserPrefs::SetInt(asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetArtifactPresentBundleObjectID() */

void PurchaseBroker::GetArtifactPresentBundleObjectID(void)

{
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"artifactPresentBundleObjectID");
  uVar1 = UserPrefs::GetInt(asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::onMsgError(int, std::string const&) */

void __thiscall PurchaseBroker::onMsgError(PurchaseBroker *this,int param_1,string *param_2)

{
  char cVar1;
  _PacketId a_Stack_ce8 [1856];
  string asStack_5a8 [16];
  string asStack_598 [1424];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_5a8);
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_2,asStack_598);
    if (cVar1 != '\0') {
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  else {
    this[0xd8] = (PurchaseBroker)0x0;
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::UpdateDialog() */

void __thiscall PurchaseBroker::UpdateDialog(PurchaseBroker *this)

{
  bool bVar1;
  PVZ2UIDialog *this_00;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((*(int *)(this + 0x70) != 0) && (this[0xa9] != (PurchaseBroker)0x0)) &&
      (this_00 = (PVZ2UIDialog *)LawnApp::GetPVZ2Dialog(gLawnApp), this_00 != (PVZ2UIDialog *)0x0))
     && (this[0xa8] != (PurchaseBroker)0x0)) {
    FUN_05476574(awStack_20);
    FUN_05476574(awStack_18);
    bVar1 = std::operator==((string *)(this + 0x90),"");
    if (bVar1) {
      TodStringTranslate(L"[PURCHASE_DIALOG_HEADER]");
      FUN_054766c8(awStack_20,auStack_10);
      FUN_05476c50(auStack_10);
      pwVar2 = L"[PURCHASE_DIALOG_BODY_CONNECT]";
    }
    else {
      TodStringTranslate(L"[PURCHASE_RESTORE_DIALOG_HEADER]");
      FUN_054766c8(awStack_20,auStack_10);
      FUN_05476c50(auStack_10);
      pwVar2 = L"[PURCHASE_RESTORE_DIALOG_BODY_CONNECT]";
    }
    TodStringTranslate(pwVar2);
    FUN_054766c8(awStack_18,auStack_10);
    FUN_05476c50(auStack_10);
    iVar3 = *(int *)(this + 0x88) % 0x3c;
    *(int *)(this + 0x88) = iVar3;
    if (-1 < iVar3) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 10;
        FUN_05477888(awStack_18,&DAT_05722e58);
        iVar3 = *(int *)(this + 0x88);
      } while (iVar4 <= iVar3);
    }
    *(int *)(this + 0x88) = iVar3 + 1;
    PVZ2UIDialog::SetHeaderLabel(this_00,awStack_20);
    PVZ2UIDialog::SetFooterLabel(this_00,awStack_18);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::onPurchaseConfirm(MagentoProductProps*, std::string const&) */

void __thiscall
PurchaseBroker::onPurchaseConfirm(PurchaseBroker *this,MagentoProductProps *param_1,string *param_2)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MagentoProductProps *)0x0) {
    Sexy::AndroidPurchaseDriver::setParam(*(AndroidPurchaseDriver **)(this + 0x40));
    Sexy::LazySingleton<talkingGame>::GetInstancePtr();
    MagentoProductProps::GetLocalizedName();
    FUN_0547429c(asStack_18);
    MagentoProductProps::GetPriceInUSD(param_1,false);
    MagentoProductProps::GetLocalizedDescription();
    FUN_0547429c(asStack_10);
    nop();
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    this[0x68] = (PurchaseBroker)0x1;
    this[0x69] = (PurchaseBroker)0x0;
    this_00 = gLawnApp;
    if (this[0xa9] != (PurchaseBroker)0x0) {
      iVar1 = FUN_048f8434(400);
      iVar2 = FUN_048f8434(300);
      this_01 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
      this[0xa8] = (PurchaseBroker)0x1;
      PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
      FUN_05478178(asStack_10,L"[PURCHASE_DIALOG_HEADER]",asStack_18);
      PVZ2UIDialog::SetHeaderLabel(this_01,(wstring *)asStack_10);
      FUN_05476c50(asStack_10);
      nop();
    }
    *(undefined4 *)(this + 0x88) = 0;
    thunk_FUN_05475e00(this + 0x80,param_2);
    thunk_FUN_05475e00(this + 0x78,param_1 + 0x10);
    *(undefined4 *)(this + 0x70) = 3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::validateTimeout() */

bool __thiscall PurchaseBroker::validateTimeout(PurchaseBroker *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_RealT();
  return *(float *)(this + 0xd0) < fVar1;
}


/* PurchaseBroker::validateRetry() */

bool __thiscall PurchaseBroker::validateRetry(PurchaseBroker *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_RealT();
  return *(float *)(this + 0xd4) < fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::PurchaseFailed() */

void __thiscall PurchaseBroker::PurchaseFailed(PurchaseBroker *this)

{
  PVZ2UIDialog *this_00;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char **)(this + 0xa0) != (char *)0x0) {
    PlayerInfo::setLastOrderId(*(char **)(this + 0xa0));
    if (((this[0xa9] != (PurchaseBroker)0x0) &&
        (this_00 = (PVZ2UIDialog *)LawnApp::GetPVZ2Dialog(gLawnApp), this_00 != (PVZ2UIDialog *)0x0)
        ) && (this[0xa8] != (PurchaseBroker)0x0)) {
      FUN_05478178(awStack_68,L"[PURCHASE_ERROR_HEADER]",aCStack_50);
      nop();
      FUN_05478178(awStack_60,L"[PURCHASE_ERROR_BODY]",aCStack_50);
      nop();
      FUN_054772c4(awStack_68,L"[PURCHASE_ERROR_HEADER]");
      FUN_054772c4(awStack_60,L"[PURCHASE_ERROR_BODY]");
      PVZ2UIDialog::SetHeaderLabel(this_00,awStack_68);
      PVZ2UIDialog::SetFooterLabel(this_00,awStack_60);
      FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_70);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onDialogButtonPressed);
      Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>(aDStack_38,aCStack_50);
      PVZ2UIDialog::AddButton(this_00,auStack_58,aDStack_38,0);
      FUN_05476c50(auStack_58);
      nop();
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::onLostPurchaseDialogButtonPressed() */

void PurchaseBroker::onLostPurchaseDialogButtonPressed(void)

{
  PurchaseMgr *this;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = (PurchaseMgr *)Sexy::LazySingleton<PurchaseMgr>::GetInstance();
  PurchaseMgr::TryRetreiveLostOrders(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::showLostPurchaseDialog(std::string const&) */

void __thiscall PurchaseBroker::showLostPurchaseDialog(PurchaseBroker *this,string *param_1)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  string *extraout_x1;
  wstring awStack_70 [8];
  RtMixedPtrBase aRStack_68 [8];
  Sexy aSStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_70);
  Magento::GetProduct((Magento *)param_1,param_1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_68);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString(aSStack_60,extraout_x1);
    TodStringTranslate(awStack_58);
    FUN_054766c8(awStack_70,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    std::string::~string((string *)aSStack_60);
  }
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[LOST_PURCHASE_DIALOG_DES]",awStack_58);
  pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_70,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",aSStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  FUN_05476c50(awStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PurchaseBroker::~PurchaseBroker() */

void __thiscall PurchaseBroker::~PurchaseBroker(PurchaseBroker *this)

{
  *(undefined ***)this = &PTR_nop_0690bfe0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)(this + 0xb0));
  std::string::~string((string *)(this + 0x90));
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x78));
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x48));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x10));
  return;
}


/* PurchaseBroker::~PurchaseBroker() */

void __thiscall PurchaseBroker::~PurchaseBroker(PurchaseBroker *this)

{
  ~PurchaseBroker(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::LostPurchaseSuccessed(std::string) */

void __thiscall PurchaseBroker::LostPurchaseSuccessed(PurchaseBroker *this,string *param_2)

{
  LawnApp *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined8 uVar5;
  RtObject *this_03;
  MagentoProductProps *pMVar6;
  PVZ2UIDialog *this_04;
  int extraout_w1;
  int extraout_w1_00;
  string *extraout_x1;
  undefined1 auStack_a0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_98 [8];
  wstring awStack_90 [8];
  wstring awStack_88 [8];
  wstring awStack_80 [8];
  Sexy aSStack_78 [8];
  wstring awStack_70 [8];
  RtId aRStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    gLawnApp[0x2960] = (LawnApp)0x1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
    PlayerInfo::HandlePurchase(this_02,param_2,(vector *)avStack_58);
    std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
              ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)avStack_58);
    gLawnApp[0x2960] = (LawnApp)0x0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_98);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(avStack_58,uVar5,0x1a);
    while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)avStack_58), bVar1)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)avStack_58);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)aRStack_68);
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      pMVar6 = Sexy::RtObject::Cast<MagentoProductProps>(this_03);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      Sexy::RtId::~RtId(aRStack_68);
      iVar3 = extraout_w1;
      if ((pMVar6 != (MagentoProductProps *)0x0) &&
         (cVar2 = std::operator==((string *)(pMVar6 + 0x10),param_2), iVar3 = extraout_w1_00,
         cVar2 != '\0')) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)avStack_58);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_98,(RtId *)aRStack_60);
        Sexy::RtId::~RtId((RtId *)aRStack_60);
        break;
      }
      Sexy::RtDbTable::Iterator::operator++((Iterator *)avStack_58,iVar3);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)avStack_58);
    iVar3 = FUN_048f8434(400);
    this_00 = gLawnApp;
    iVar4 = FUN_048f8434(300);
    this_04 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(this_00,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
    if (this_04 != (PVZ2UIDialog *)0x0) {
      FUN_05476574(awStack_90);
      FUN_05476574(awStack_88);
      TodStringTranslate(L"[PURCHASE_DIALOG_CONFIRMED_HEADER]");
      FUN_054766c8(awStack_90,avStack_58);
      FUN_05476c50(avStack_58);
      TodStringTranslate(L"[PURCHASE_COMPLETE]");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98);
      MagentoProductProps::GetLocalizedShortDescription();
      Sexy::UTF8StringToWString(aSStack_78,extraout_x1);
      TodStringTranslate(awStack_70);
      uVar5 = FUN_054766ec(aRStack_68);
      FUN_05478178((wstring *)aRStack_60,uVar5,auStack_a0);
      TodReplaceString(awStack_80,L"{PRODUCT_NAME}",(wstring *)aRStack_60);
      FUN_054766c8(awStack_88,avStack_58);
      FUN_05476c50(avStack_58);
      FUN_05476c50((wstring *)aRStack_60);
      nop();
      FUN_05476c50(aRStack_68);
      FUN_05476c50(awStack_70);
      std::string::~string((string *)aSStack_78);
      FUN_05476c50(awStack_80);
      PVZ2UIDialog::SetHeaderLabel(this_04,awStack_90);
      PVZ2UIDialog::SetFooterLabel(this_04,awStack_88);
      FUN_05478178((wstring *)aRStack_60,L"[CONTINUE_BUTTON]",aRStack_68);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onLostPurchaseDialogButtonPressed);
      Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>(aDStack_38,avStack_58);
      PVZ2UIDialog::AddButton(this_04,(wstring *)aRStack_60,aDStack_38,0);
      FUN_05476c50((wstring *)aRStack_60);
      nop();
      FUN_05476c50(awStack_88);
      FUN_05476c50(awStack_90);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_98);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::PurchaseBroker() */

void __thiscall PurchaseBroker::PurchaseBroker(PurchaseBroker *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *__n;
  undefined4 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  __n = auStack_58;
  local_8 = ___stack_chk_guard;
  Sexy::IPaymentMonitor::IPaymentMonitor((IPaymentMonitor *)this);
  *(undefined ***)this = &PTR_nop_0690bfe0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  CartInstanceInfo::CartInstanceInfo((CartInstanceInfo *)(this + 0x48));
  Sexy::RedeemInfo::RedeemInfo((RedeemInfo *)(this + 0x78));
  Set8BytesTo0((string *)(this + 0x90));
  PurchaseInfo::PurchaseInfo((PurchaseInfo *)(this + 0xb0));
  *(undefined4 *)(this + 0x70) = 0;
  std::string::string((string *)&local_50,"");
  uVar2 = Sexy::IPurchaseDriver::CreatePurchaseDriver((string *)&local_50);
  *(undefined8 *)(this + 0x40) = uVar2;
  std::string::~string((string *)&local_50);
  nop();
  *(undefined4 *)(this + 0x88) = 0;
  this[0xa8] = (PurchaseBroker)0x0;
  this[0xa9] = (PurchaseBroker)0x0;
  this[0x98] = (PurchaseBroker)0x0;
  std::string::append((string *)(this + 0x90),"",(size_t)__n);
  *(undefined8 *)(this + 0xa0) = 0;
  uVar3 = PVZ_EOT();
  this[0xd8] = (PurchaseBroker)0x0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (PurchaseBroker)0x0;
  this[0xd] = (PurchaseBroker)0x0;
  this[0xe] = (PurchaseBroker)0x0;
  *(undefined4 *)(this + 0xd0) = uVar3;
  *(undefined4 *)(this + 0xd4) = uVar3;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAppResumeFocus);
  Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>
            (aDStack_38,(string *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::AppResumeFocus,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMsgError);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<PurchaseBroker,void(PurchaseBroker::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::PurchaseDriverPaymentIncomplete(Sexy::IPurchaseDriver*, std::string const&,
   Sexy::IPurchaseDriver::CauseForIncompletion) */

void __thiscall
PurchaseBroker::PurchaseDriverPaymentIncomplete
          (PurchaseBroker *this,undefined8 param_2,undefined8 param_3,int param_4)

{
  PurchaseMgr *this_00;
  PVZ2UIDialog *this_01;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char **)(this + 0xa0) == (char *)0x0) goto LAB_048faa80;
  PlayerInfo::setLastOrderId(*(char **)(this + 0xa0));
  this_00 = (PurchaseMgr *)Sexy::LazySingleton<PurchaseMgr>::GetInstance();
  PurchaseMgr::ResetPurchaseInfo(this_00);
  if (param_4 == 1) {
    if ((this[0xa9] != (PurchaseBroker)0x0) && (this[0xa8] != (PurchaseBroker)0x0)) {
      LawnApp::KillPVZ2Dialog(gLawnApp);
      this[0xa8] = (PurchaseBroker)0x0;
    }
    *(undefined4 *)(this + 0x70) = 0;
    goto LAB_048faa80;
  }
  if (((this[0xa9] != (PurchaseBroker)0x0) &&
      (this_01 = (PVZ2UIDialog *)LawnApp::GetPVZ2Dialog(gLawnApp), this_01 != (PVZ2UIDialog *)0x0))
     && (this[0xa8] != (PurchaseBroker)0x0)) {
    FUN_05478178(awStack_68,L"[PURCHASE_ERROR_HEADER]",aCStack_50);
    nop();
    FUN_05478178(awStack_60,L"[PURCHASE_ERROR_BODY]",aCStack_50);
    nop();
    if (param_4 == 0) {
      FUN_054772c4(awStack_68,L"[PURCHASE_ERROR_HEADER]");
      FUN_054772c4(awStack_60,L"[PURCHASE_ERROR_BODY]");
    }
    else if (param_4 == 4) {
      FUN_054772c4(awStack_68,L"[PURCHASE_ERROR_NOT_AUTHORIZED_HEADER]");
      FUN_054772c4(awStack_60,L"[PURCHASE_ERROR_NOT_AUTHORIZED_BODY]");
    }
    else if (param_4 == 5) {
LAB_048fac28:
      FUN_054772c4(awStack_68,L"[PURCHASE_ERROR_SERVICE_UNAVAILABLE_HEADER]");
      FUN_054772c4(awStack_60,L"[PURCHASE_ERROR_SERVICE_UNAVAILABLE_BODY]");
    }
    else if (param_4 - 7U < 2) {
      FUN_054772c4(awStack_68,L"[PURCHASE_ERROR_HEADER]");
      FUN_054772c4(awStack_60,L"[PURCHASE_ERROR_VALIDATE_BODY]");
    }
    else if (param_4 == 9) {
      FUN_054772c4(awStack_68,L"[PURCHASE_ERROR_HEADER]");
      FUN_054772c4(awStack_60,L"[PURCHASE_CHEAT_VALIDATE_BODY]");
    }
    else if (param_4 == 3) goto LAB_048fac28;
    PVZ2UIDialog::SetHeaderLabel(this_01,awStack_68);
    PVZ2UIDialog::SetFooterLabel(this_01,awStack_60);
    FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_70);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onDialogButtonPressed);
    Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>(aDStack_38,aCStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05476c50(awStack_60);
    FUN_05476c50(awStack_68);
  }
  *(undefined4 *)(this + 0x70) = 0;
  MessageRouter::Post<MagentoProductProps*,MagentoProductProps*>
            ((MessageRouter *)gMessageRouter,Message::CartInstanceEvent,(MagentoProductProps *)0x0);
LAB_048faa80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::EndCartInstance() */

void __thiscall PurchaseBroker::EndCartInstance(PurchaseBroker *this)

{
  if (this[0x6a] != (PurchaseBroker)0x0) {
    if (this[0x68] == (PurchaseBroker)0x0) {
      MessageRouter::Post<MagentoProductProps*,MagentoProductProps*>
                ((MessageRouter *)gMessageRouter,Message::CartInstanceEvent,
                 (MagentoProductProps *)0x0);
    }
    this[0x6a] = (PurchaseBroker)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::StartNewCartInstance(std::string const&, std::string const&, std::string const&)
    */

void __thiscall
PurchaseBroker::StartNewCartInstance
          (PurchaseBroker *this,string *param_1,string *param_2,string *param_3)

{
  Sexy *this_00;
  undefined8 uVar1;
  string asStack_170 [8];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EndCartInstance(this);
  this[0x6a] = (PurchaseBroker)0x1;
  this_00 = (Sexy *)FUN_05462144(auStack_168,0x10);
  uVar1 = Sexy::SexyTime(this_00);
  thunk_FUN_0546069c(auStack_168,uVar1);
  FUN_054622ac(asStack_170,auStack_168);
  FUN_05474278(this + 0x48,asStack_170);
  std::string::~string(asStack_170);
  thunk_FUN_05475e00(this + 0x50,param_1);
  thunk_FUN_05475e00(this + 0x58,param_2);
  thunk_FUN_05475e00(this + 0x60,param_3);
  this[0x68] = (PurchaseBroker)0x0;
  this[0x69] = (PurchaseBroker)0x0;
  FUN_054614ac(auStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::requestLostPayment() */

void __thiscall PurchaseBroker::requestLostPayment(PurchaseBroker *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [1872];
  string asStack_598 [1424];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_048f83d8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_598,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
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


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::InitIMSIData() */

void __thiscall PurchaseBroker::InitIMSIData(PurchaseBroker *this)

{
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *this_00;
  ColourFit *pCVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *__filename;
  FILE *__stream;
  ColourFit *this_01;
  undefined8 uVar5;
  ColourFit *pCVar6;
  int iVar7;
  ColourFit *pCVar8;
  undefined4 local_38;
  undefined4 local_34;
  string asStack_30 [8];
  string asStack_28 [8];
  long local_20;
  long local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_30);
  (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))
            ((string *)&local_10,*(long **)(gLawnApp + 0x28));
  std::operator+((string *)&local_10,"imsin.dat");
  std::string::~string((string *)&local_10);
  local_20 = 0;
  local_18 = 0;
  cVar2 = Android::Resources::GetAssetFileInfo(asStack_28,asStack_30,&local_20,&local_18);
  if (cVar2 != '\0') {
    this_00 = (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x10);
    __filename = (char *)FUN_0547429c(asStack_30);
    __stream = fopen(__filename,"rb");
    fseek(__stream,local_20,0);
    this_01 = operator_new__(0x14);
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_01 + 8) = 0;
    *(undefined4 *)(this_01 + 0x10) = 0;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(this_00);
    if (__stream != (FILE *)0x0) {
      if (0 < local_18) {
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          uVar3 = getc(__stream);
          uVar4 = uVar3 & 0xff;
          pCVar8 = (ColourFit *)(long)iVar7;
          if (((uVar3 & 0xff) != 10) && ((long)pCVar8 < local_18)) {
            pCVar1 = pCVar8 + (1 - (long)this_01);
            pCVar6 = this_01;
            do {
              *pCVar6 = SUB41(uVar4,0);
              iVar7 = iVar7 + 1;
              uVar4 = getc(__stream);
              uVar4 = uVar4 & 0xff;
              if (uVar4 == 10) {
                pCVar8 = (ColourFit *)(long)iVar7;
                break;
              }
              pCVar8 = pCVar1 + (long)pCVar6;
              pCVar6 = pCVar6 + 1;
            } while ((long)pCVar8 < local_18);
          }
          local_38 = 0;
          local_34 = 0;
          sscanf((char *)this_01,"%d,%d",(FestivalTab *)&local_38,(ActivityTypeID *)&local_34);
          local_10 = std::make_pair<FestivalTab,ActivityTypeID>
                               ((FestivalTab *)&local_38,(ActivityTypeID *)&local_34);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
          insert<std::pair<int,int>,void>(this_00,(pair *)&local_10);
        } while ((long)pCVar8 < local_18);
      }
      fclose(__stream);
    }
    uVar5 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size(this_00)
    ;
    Sexy::OutputDebugStrF((wchar_t *)"m_provinces.size = %d",uVar5);
    EATextSquish::ColourFit::~ColourFit(this_01);
  }
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetSimProvince() */

void __thiscall PurchaseBroker::GetSimProvince(PurchaseBroker *this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *__s;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Android::Diag::GetSimProvince();
  if (iVar1 < 1) {
    uVar5 = 0;
    std::string::string(asStack_18,"");
    nop();
    Android::Diag::GetDeviceIMSI(asStack_18);
    uVar2 = FUN_0547429c(asStack_18);
    Sexy::OutputDebugStrF((wchar_t *)"i_imsi = %s\n",uVar2);
    uVar3 = FUN_05474184(asStack_18);
    if (9 < uVar3) {
      local_1c = 0;
      FUN_05475ffc(asStack_10,asStack_18,5,5);
      __s = (char *)FUN_0547429c(asStack_10);
      sscanf(__s,"%d",&local_1c);
      Sexy::OutputDebugStrF((wchar_t *)"i_companyCode = %d\n",(ulong)local_1c);
      puVar4 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          (this + 0x10),(int *)&local_1c);
      uVar5 = *puVar4;
      std::string::~string(asStack_10);
    }
    std::string::~string(asStack_18);
  }
  else {
    uVar5 = 0;
    if (iVar1 < 0x20) {
      uVar5 = *(undefined4 *)(&DAT_05754b70 + (long)iVar1 * 4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::GetPurchaseChannel() */

void __thiscall PurchaseBroker::GetPurchaseChannel(PurchaseBroker *this)

{
  int iVar1;
  PVZDB *pPVar2;
  RtName *this_00;
  PurchaseConfig *this_01;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetSimProvince(this);
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtName *)PVZDB::GetTable(pPVar2,0x3c);
  Sexy::RtName::RtName(aRStack_18,L"PurchaseConfig");
  Sexy::RtDbTable::GetIdForAlias(this_00);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  PurchaseConfig::GetPurchaseChannel(this_01,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::ResetPurchaseAdapter() */

void __thiscall PurchaseBroker::ResetPurchaseAdapter(PurchaseBroker *this)

{
  PurchaseBroker PVar1;
  int iVar2;
  long lVar3;
  IPurchaseAdapter *pIVar4;
  
  lVar3 = open_vcdiff::JSONCodeTableWriter::target_length(*(JSONCodeTableWriter **)(this + 0x40));
  if ((lVar3 == 0) || (*(int *)(this + 8) != 0)) {
    iVar2 = GetPurchaseChannel(this);
    if (*(int *)(this + 8) != iVar2) {
      *(int *)(this + 8) = iVar2;
      pIVar4 = (IPurchaseAdapter *)GetPurchaseAdapter(this);
      if (pIVar4 != (IPurchaseAdapter *)0x0) {
        PVar1 = (PurchaseBroker)(**(code **)(*(long *)pIVar4 + 0x48))();
        this[0xa9] = PVar1;
      }
      Sexy::AndroidPurchaseDriver::SetPurchaseAdapter
                (*(AndroidPurchaseDriver **)(this + 0x40),pIVar4);
      Sexy::AndroidPurchaseDriver::Init(*(AndroidPurchaseDriver **)(this + 0x40));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::createPayment(MagentoProductProps*) */

void __thiscall PurchaseBroker::createPayment(PurchaseBroker *this,MagentoProductProps *param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 uVar2;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1848];
  string asStack_5b0 [1448];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xd0) = uVar2;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"pdi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar1,param_1 + 0x10);
  std::string::~string(asStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_048f82c4(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5b0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* PurchaseBroker::RequestPayment(std::string const&, int) */

void __thiscall PurchaseBroker::RequestPayment(PurchaseBroker *this,string *param_1,int param_2)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  undefined8 uVar3;
  PVZDB *pPVar4;
  RtName *this_02;
  ResourceInfo *pRVar5;
  string *extraout_x1;
  RtWeakPtr aRStack_60 [8];
  RtId aRStack_58 [8];
  RtName aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar3 = ProfileMgr::GetCurrentProfile(this_01);
  *(undefined8 *)(this + 0xa0) = uVar3;
  cVar1 = LawnApp::IsServiceAvailable(gLawnApp,0x2000);
  if (((cVar1 == '\0') ||
      (iVar2 = PlayerInfo::GetNumRechargeCurrency(*(PlayerInfo **)(this + 0xa0)), iVar2 < 1000)) ||
     (cVar1 = PlayerInfo::getIsAuthIDCard(*(PlayerInfo **)(this + 0xa0)), this_00 = gLawnApp,
     cVar1 != '\0')) {
    SetRechargeBundleObjectID(this,param_2);
    SetArtifactPresentBundleObjectID(this,param_2);
    if ((*(int *)(this + 0x70) == 0) && (*(PlayerInfo **)(this + 0xa0) != (PlayerInfo *)0x0)) {
      PlayerInfo::RefreshRechargeCurrency(*(PlayerInfo **)(this + 0xa0));
      Magento::GetProductPtr((Magento *)param_1,extraout_x1);
      pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      this_02 = (RtName *)PVZDB::GetTable(pPVar4,0x3c);
      Sexy::RtName::RtName(aRStack_50,L"PurchaseConfig");
      Sexy::RtDbTable::GetIdForAlias(this_02);
      Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_02,aRStack_58);
      Sexy::RtId::~RtId(aRStack_58);
      Sexy::RtName::~RtName(aRStack_50);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
      createPayment(this,(MagentoProductProps *)pRVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    }
  }
  else {
    std::string::string((string *)aRStack_60,"[PAY_CHECK_DIALOG_TITLE]");
    std::string::string((string *)aRStack_58,"[PAY_CHECK_DIALOG_CONTENT]");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShowAuthIDDialog);
    Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>(aDStack_38,aRStack_50);
    LawnApp::ShowMessageDialog(this_00,(string *)aRStack_60,(string *)aRStack_58,aDStack_38);
    std::string::~string((string *)aRStack_58);
    nop();
    std::string::~string((string *)aRStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::validatePayment(std::string const&, std::string const&) */

void __thiscall
PurchaseBroker::validatePayment(PurchaseBroker *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  DNetwork *this_00;
  float fVar2;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1856];
  string asStack_5a8 [1440];
  long local_8;
  
  this[0xd8] = (PurchaseBroker)0x1;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_RealT();
  *(float *)(this + 0xd4) = fVar2 + 5.0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"r");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar1,param_2);
  std::string::~string(asStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_048f8320(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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
/* PurchaseBroker::Update() */

void __thiscall PurchaseBroker::Update(PurchaseBroker *this)

{
  char cVar1;
  InvitationPlayerInfo *pIVar2;
  InvitationPlayerInfo aIStack_28 [8];
  string asStack_20 [16];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateDialog(this);
  if (*(int *)(this + 0x70) == 3) {
    *(undefined4 *)(this + 0x70) = 4;
    (**(code **)(**(long **)(this + 0x40) + 0x40))(*(long **)(this + 0x40),this + 0x78,this + 0x80);
  }
  else if (*(int *)(this + 0x70) == 5) {
    cVar1 = validateTimeout(this);
    if (cVar1 == '\0') {
      if ((this[0xd8] == (PurchaseBroker)0x0) && (cVar1 = validateRetry(this), cVar1 != '\0')) {
        pIVar2 = (InvitationPlayerInfo *)LawnApp::GetPaymentResultInfo(gLawnApp);
        InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,pIVar2);
        validatePayment(this,asStack_10,asStack_20);
        TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
      }
    }
    else if (this[0xd8] == (PurchaseBroker)0x0) {
      PurchaseFailed(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::PurchaseDriverPaymentComplete(Sexy::IPurchaseDriver*, std::string const&) */

void __thiscall
PurchaseBroker::PurchaseDriverPaymentComplete
          (PurchaseBroker *this,IPurchaseDriver *param_1,string *param_2)

{
  bool bVar1;
  InvitationPlayerInfo *pIVar2;
  float fVar3;
  undefined4 uVar4;
  InvitationPlayerInfo aIStack_28 [8];
  string asStack_20 [16];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined4 *)(this + 0x70) = 5;
    bVar1 = std::operator==((string *)(this + 0x78),"");
    if (bVar1) {
      thunk_FUN_05475e00((string *)(this + 0x78),param_2);
    }
    pIVar2 = (InvitationPlayerInfo *)LawnApp::GetPaymentResultInfo(gLawnApp);
    InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,pIVar2);
    fVar3 = (float)PVZ_RealT();
    *(float *)(this + 0xd0) = fVar3 + 120.0;
    uVar4 = PVZ_EOT();
    *(undefined4 *)(this + 0xd4) = uVar4;
    validatePayment(this,asStack_10,asStack_20);
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::onSyncPayment(std::string const&, std::string const&, bool,
   std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >) */

void __thiscall
PurchaseBroker::onSyncPayment
          (PurchaseBroker *this,undefined8 param_2_00,string *param_2,char param_3,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  WorldLevelPackageManager *pWVar6;
  TGALogMgr *pTVar7;
  NetworkMgr *pNVar8;
  INetworkMsgProcess *pIVar9;
  MessageRouter *pMVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  wchar_t local_8c;
  undefined8 local_88;
  undefined8 local_80;
  DownloadInfo aDStack_78 [8];
  string asStack_70 [24];
  TGANFSLinkageData aTStack_58 [40];
  undefined4 local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetProductInfo((string *)this);
  Consume((string *)this,asStack_70);
  if (param_3 != '\0') {
    showLostPurchaseDialog(this,param_2);
  }
  Sexy::LazySingleton<NewYearChargeManager>::GetInstancePtr();
  NewYearChargeManager::CheckChargeAward();
  Sexy::LazySingleton<RechargeDailySignActivityManager>::GetInstancePtr();
  RechargeDailySignActivityUI::RequestNetwork();
  Sexy::LazySingleton<DiscountShopActivityManager>::GetInstancePtr();
  DiscountShopActivityUI::RequestNetwork();
  Sexy::LazySingleton<FirstRechargeExtraManager>::GetInstancePtr();
  FirstRechargeExtraManager::RequestNetwork();
  Sexy::LazySingleton<MonthlyCardSpecialManager>::GetInstancePtr();
  MonthlyCardSpecialManager::RequestNetwork();
  lVar5 = FUN_05474374(param_2,"DangerRoomSpecialOfferExtra",0);
  if (lVar5 == -1) {
    bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.NewRecallBank18");
    if (bVar4) {
      TGANFSLinkageData::TGANFSLinkageData(aTStack_58);
      local_80 = CONCAT44(local_80._4_4_,2);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_80);
      FUN_05474278(aTStack_58,(string *)&local_30);
      std::string::~string((string *)&local_30);
      pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAArtifactPresentData::TGAArtifactPresentData
                ((TGAArtifactPresentData *)&local_30,(TGAArtifactPresentData *)aTStack_58);
      TGALogMgr::LogNewRecallBank(pTVar7,(string *)&local_30);
      TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_30);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_30);
      local_88 = CONCAT44(local_88._4_4_,1);
      local_8c = L'⨩';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                ((pair<wchar_t_const,wchar_t> *)&local_80,&local_8c,(wchar_t *)&local_88);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_30,
                 (pair *)&local_80);
      pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
      pIVar9 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
      INetworkMsgProcess::RequestActivityList(pIVar9,(vector *)&local_30,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_30);
      TGANFSLinkageData::~TGANFSLinkageData(aTStack_58);
    }
    else {
      bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.TimeMystery45");
      if (bVar4) {
        Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
        UnchartedModeNetworkMgr::RequestNetwork();
      }
      else {
        bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.EasterEgg06");
        if (bVar4) {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_30);
          local_80 = CONCAT44(local_80._4_4_,1);
          local_88 = CONCAT44(local_88._4_4_,0x2a7d);
          std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                    ((pair<wchar_t_const,wchar_t> *)aTStack_58,(wchar_t *)&local_88,
                     (wchar_t *)&local_80);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_30,
                     (pair *)aTStack_58);
          pNVar8 = (NetworkMgr *)NetworkMgr::Instance();
          pIVar9 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar8);
          INetworkMsgProcess::RequestActivityList(pIVar9,(vector *)&local_30,0,true);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_30);
        }
        else {
          bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.DuelChest3");
          pMVar10 = (MessageRouter *)gMessageRouter;
          if (bVar4) {
            std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30,
                       (vector *)param_5);
            uVar12 = 1;
          }
          else {
            bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.DuelChest4");
            pMVar10 = (MessageRouter *)gMessageRouter;
            if (!bVar4) {
              lVar5 = FUN_05474374(param_2,"com.popcap.ios.chs.PVZ2.LevelPackage_",0);
              if (lVar5 == -1) {
                bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.newpvpbattlepass45");
                if (bVar4) {
                  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                             aTStack_58);
                  local_88 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::begin(param_5);
                  local_80 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end(param_5);
                  while (bVar4 = __gnu_cxx::operator!=
                                           ((__normal_iterator *)&local_88,
                                            (__normal_iterator *)&local_80),
                        pMVar10 = (MessageRouter *)gMessageRouter, bVar4) {
                    puVar11 = (undefined4 *)
                              std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_88);
                    iVar1 = puVar11[1];
                    uVar2 = *puVar11;
                    if (iVar1 != 0) {
                      Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_30);
                      local_30 = uVar2;
                      local_2c = iVar1;
                      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aTStack_58,
                                 (S2C_BonusInfo *)&local_30);
                    }
                    __gnu_cxx::
                    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                                  *)&local_88);
                  }
                  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30,
                             (vector *)aTStack_58);
                  uVar12 = 3;
                }
                else {
                  bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.newpvpbattlepass78");
                  if (!bVar4) {
                    lVar5 = FUN_05474374(param_2,"com.popcap.ios.chs.PVZ2.TreasureBowl",0);
                    if (lVar5 == -1) {
                      lVar5 = FUN_05474374(param_2,"com.popcap.ios.chs.PVZ2.PartyEpsActivity",0);
                      if (lVar5 == -1) {
                        bVar4 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.newpvpbattlepass68"
                                               );
                        puVar3 = gMessageRouter;
                        if (bVar4) {
                          std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)
                                     &local_30,(vector *)param_5);
                          MessageRouter::
                          Post<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>
                                    ((MessageRouter *)puVar3,Message::NewPVPBattlePassBuyPrivilege,
                                     (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)
                                     &local_30);
                          std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)
                                     &local_30);
                        }
                      }
                      else {
                        Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
                        PartyAssistMgr::RequestNetwork();
                      }
                    }
                    else {
                      Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
                      CornucopiaMgr::RequestNetwork();
                    }
                    goto LAB_048fbdac;
                  }
                  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                             aTStack_58);
                  local_88 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::begin(param_5);
                  local_80 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end(param_5);
                  while (bVar4 = __gnu_cxx::operator!=
                                           ((__normal_iterator *)&local_88,
                                            (__normal_iterator *)&local_80),
                        pMVar10 = (MessageRouter *)gMessageRouter, bVar4) {
                    puVar11 = (undefined4 *)
                              std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_88);
                    iVar1 = puVar11[1];
                    uVar2 = *puVar11;
                    if (iVar1 != 0) {
                      Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_30);
                      local_30 = uVar2;
                      local_2c = iVar1;
                      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aTStack_58,
                                 (S2C_BonusInfo *)&local_30);
                    }
                    __gnu_cxx::
                    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                                  *)&local_88);
                  }
                  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30,
                             (vector *)aTStack_58);
                  uVar12 = 4;
                }
                MessageRouter::
                Post<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,int>
                          (pMVar10,Message::NewPVPBattlePassExtrarewards,
                           (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30,uVar12);
                std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                          ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30);
                std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                          ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)aTStack_58);
              }
              else {
                pWVar6 = (WorldLevelPackageManager *)
                         Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
                WorldLevelPackageManager::ResetInitRequest(pWVar6);
                pWVar6 = (WorldLevelPackageManager *)
                         Sexy::LazySingleton<WorldLevelPackageManager>::GetInstancePtr();
                WorldLevelPackageManager::RequestNetwork(pWVar6,true);
              }
              goto LAB_048fbdac;
            }
            std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
                      ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30,
                       (vector *)param_5);
            uVar12 = 0;
          }
          MessageRouter::
          Post<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&,int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>
                    (pMVar10,Message::NewPVPShopBuyChest,uVar12,
                     (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30);
          std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                    ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_30);
        }
      }
    }
  }
  else {
    Sexy::LazySingleton<DangerRoomSpecialOfferExtraManager>::GetInstancePtr();
    DangerRoomSpecialOfferExtraManager::RequestNetwork();
  }
LAB_048fbdac:
  Lua::DownloadInfo::~DownloadInfo(aDStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::CreatePurchaseAdapter() */

void __thiscall PurchaseBroker::CreatePurchaseAdapter(PurchaseBroker *this)

{
  SexyAppBase *pSVar1;
  char cVar2;
  char cVar3;
  PurchaseBroker PVar4;
  PurchaseBroker PVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  PurchaseBroker PVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  TWPurchaseAdapter *this_00;
  ColourFit *this_01;
  char *__filename;
  FILE *__stream;
  size_t sVar13;
  string asStack_88 [8];
  string asStack_80 [8];
  long local_78;
  ulong local_70;
  string asStack_68 [8];
  string asStack_60 [40];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Buffer::Buffer(aBStack_38);
  Set8BytesTo0(asStack_88);
  (**(code **)(**(long **)(gLawnApp + 0x28) + 0x38))(asStack_60,*(long **)(gLawnApp + 0x28));
  std::operator+(asStack_60,"PurchaseChannel.xml");
  std::string::~string(asStack_60);
  local_78 = 0;
  local_70 = 0;
  cVar2 = Android::Resources::GetAssetFileInfo(asStack_80,asStack_88,&local_78,(long *)&local_70);
  if (cVar2 != '\0') {
    this_01 = operator_new__(local_70);
    __filename = (char *)FUN_0547429c(asStack_88);
    __stream = fopen(__filename,"rb");
    if (__stream != (FILE *)0x0) {
      fseek(__stream,local_78,0);
      sVar13 = fread(this_01,1,local_70,__stream);
      if (sVar13 == local_70) {
        Sexy::Buffer::Clear(aBStack_38);
        Sexy::Buffer::SetData(aBStack_38,(uchar *)this_01,(int)local_70);
        fclose(__stream);
        EATextSquish::ColourFit::~ColourFit(this_01);
        Sexy::PropertiesParser::PropertiesParser((PropertiesParser *)asStack_60,gLawnApp);
        cVar2 = Sexy::PropertiesParser::ParsePropertiesBuffer((Buffer *)asStack_60);
        pSVar1 = gLawnApp;
        if (cVar2 == '\0') {
          this_00 = (TWPurchaseAdapter *)0x0;
          Sexy::OutputDebugStrF
                    ((wchar_t *)"PurchaseBroker::CreatePurchaseAdapter parse config file failed");
        }
        else {
          std::string::string(asStack_68,"WechatPurchase");
          cVar2 = Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"UnicomPurchase");
          cVar3 = Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"TelecomPurchase");
          PVar4 = (PurchaseBroker)Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"ChinaMobilePurchase");
          PVar5 = (PurchaseBroker)Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          this[0xc] = PVar5;
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"ChinaMobileMMPurchase");
          PVar5 = (PurchaseBroker)Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          this[0xd] = PVar5;
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"QQGameCenterPurchase");
          cVar6 = Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"MultiPurchase");
          cVar7 = Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"UnicomWidebandPurchase");
          cVar8 = Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"Unicom3ChannelPurchase");
          PVar5 = (PurchaseBroker)Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          std::string::~string(asStack_68);
          nop();
          pSVar1 = gLawnApp;
          std::string::string(asStack_68,"TWPurchase");
          PVar9 = (PurchaseBroker)Sexy::SexyAppBase::GetBoolean(pSVar1,asStack_68,false);
          this[0xe] = PVar9;
          std::string::~string(asStack_68);
          nop();
          uVar10 = Android::Diag::GetMobileCardType();
          if (cVar7 == '\0') {
            if (cVar2 == '\0') {
              if (this[0xe] == (PurchaseBroker)0x0) {
                if (this[0xc] == (PurchaseBroker)0x0) {
                  if ((byte)PVar5 < (byte)PVar4) {
                    if ((uVar10 >> 2 & 1) == 0) {
                      if ((cVar3 == '\0') || ((uVar10 >> 1 & 1) == 0)) {
                        if ((this[0xd] != (PurchaseBroker)0x0) && ((uVar10 & 1) != 0))
                        goto LAB_048fca0c;
                        goto LAB_048fcabc;
                      }
LAB_048fcaa8:
                      this_00 = ::operator_new(0x28);
                      Sexy::UnicomChannelPurchaseAdapter::UnicomChannelPurchaseAdapter
                                ((UnicomChannelPurchaseAdapter *)this_00);
                    }
                    else {
                      this_00 = ::operator_new(0x28);
                      Sexy::TelecomPurchaseAdapter::TelecomPurchaseAdapter
                                ((TelecomPurchaseAdapter *)this_00);
                    }
                  }
                  else if ((byte)PVar5 < (byte)this[0xd]) {
                    this_00 = ::operator_new(0x28);
                    Sexy::ChinaMobileMMPurchaseAdapter::ChinaMobileMMPurchaseAdapter
                              ((ChinaMobileMMPurchaseAdapter *)this_00);
                  }
                  else if ((PVar5 == (PurchaseBroker)0x0) || (cVar3 == '\0')) {
                    if (cVar6 == '\0') {
                      if (cVar8 == '\0') goto LAB_048fcabc;
                      this_00 = ::operator_new(0x28);
                      Sexy::UnicomWidebandPurchaseAdapter::UnicomWidebandPurchaseAdapter
                                ((UnicomWidebandPurchaseAdapter *)this_00);
                    }
                    else {
                      uVar10 = Android::Diag::GetMobileCardType();
                      if ((uVar10 & 1) == 0) {
                        if ((uVar10 >> 1 & 1) == 0) goto LAB_048fcabc;
                        this_00 = ::operator_new(0x28);
                        Sexy::QQGameCenterUnicomPurchaseAdapter::QQGameCenterUnicomPurchaseAdapter
                                  ((QQGameCenterUnicomPurchaseAdapter *)this_00);
                      }
                      else {
                        this_00 = ::operator_new(0x28);
                        Sexy::QQGameCenterPurchaseAdapter::QQGameCenterPurchaseAdapter
                                  ((QQGameCenterPurchaseAdapter *)this_00);
                      }
                    }
                  }
                  else {
                    iVar12 = LawnApp::GetPlatform((LawnApp *)gLawnApp);
                    if (iVar12 == 10) goto LAB_048fcaa8;
                    iVar12 = LawnApp::GetPlatform((LawnApp *)gLawnApp);
                    if ((iVar12 != 2) &&
                       (iVar12 = LawnApp::GetPlatform((LawnApp *)gLawnApp), iVar12 != 8))
                    goto LAB_048fcabc;
                    this_00 = ::operator_new(0x28);
                    Sexy::UnicomPurchaseAdapter::UnicomPurchaseAdapter
                              ((UnicomPurchaseAdapter *)this_00);
                  }
                }
                else {
                  this_00 = ::operator_new(0x30);
                  Sexy::ChinaMobilePurchaseAdapter::ChinaMobilePurchaseAdapter
                            ((ChinaMobilePurchaseAdapter *)this_00);
                }
              }
              else {
                this_00 = ::operator_new(0x28);
                Sexy::TWPurchaseAdapter::TWPurchaseAdapter(this_00);
              }
            }
            else {
              this_00 = ::operator_new(0x28);
              Sexy::WeChatPurchaseAdapter::WeChatPurchaseAdapter((WeChatPurchaseAdapter *)this_00);
            }
          }
          else if ((uVar10 & 1) == 0) {
            if ((PVar4 == (PurchaseBroker)0x0) || ((uVar10 >> 2 & 1) == 0)) {
              if ((cVar3 != '\0') && ((uVar10 >> 1 & 1) != 0)) goto LAB_048fcaa8;
LAB_048fcabc:
              this_00 = (TWPurchaseAdapter *)0x0;
            }
            else {
              this_00 = ::operator_new(0x28);
              Sexy::TelecomChannelPurchaseAdapter::TelecomChannelPurchaseAdapter
                        ((TelecomChannelPurchaseAdapter *)this_00);
            }
          }
          else if (this[0xd] == (PurchaseBroker)0x0) {
            if (this[0xc] == (PurchaseBroker)0x0) goto LAB_048fcabc;
            this_00 = ::operator_new(0x30);
            Sexy::ChinaMobileChannelPurchaseAdapter::ChinaMobileChannelPurchaseAdapter
                      ((ChinaMobileChannelPurchaseAdapter *)this_00);
          }
          else if (this[0xc] == (PurchaseBroker)0x0) {
LAB_048fca0c:
            this_00 = ::operator_new(0x28);
            Sexy::ChinaMobileMMChannelPurchaseAdapter::ChinaMobileMMChannelPurchaseAdapter
                      ((ChinaMobileMMChannelPurchaseAdapter *)this_00);
          }
          else {
            iVar12 = LawnApp::GetPlatform((LawnApp *)gLawnApp);
            if ((this[0xd] != (PurchaseBroker)0x0) &&
               ((iVar12 - 0x43U < 0x70 || (iVar12 - 0xfU < 0x2b)))) {
              InitIMSIData(this);
            }
            uVar11 = GetPurchaseChannel(this);
            *(undefined4 *)(this + 8) = uVar11;
            this_00 = (TWPurchaseAdapter *)GetPurchaseAdapter(this,uVar11);
          }
        }
        Sexy::PropertiesParser::~PropertiesParser((PropertiesParser *)asStack_60);
        goto LAB_048fc5cc;
      }
      fclose(__stream);
    }
    EATextSquish::ColourFit::~ColourFit(this_01);
  }
  Sexy::OutputDebugStrF((wchar_t *)"PurchaseBroker::CreatePurchaseAdapter read config file failed");
  this_00 = ::operator_new(0x28);
  Sexy::TWPurchaseAdapter::TWPurchaseAdapter(this_00);
LAB_048fc5cc:
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  Sexy::Buffer::~Buffer(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PurchaseBroker::Init() */

void __thiscall PurchaseBroker::Init(PurchaseBroker *this)

{
  PurchaseBroker PVar1;
  IPurchaseAdapter *pIVar2;
  
  pIVar2 = (IPurchaseAdapter *)CreatePurchaseAdapter(this);
  if (pIVar2 != (IPurchaseAdapter *)0x0) {
    PVar1 = (PurchaseBroker)(**(code **)(*(long *)pIVar2 + 0x48))();
    this[0xa9] = PVar1;
    Sexy::AndroidPurchaseDriver::SetPurchaseAdapter(*(AndroidPurchaseDriver **)(this + 0x40),pIVar2)
    ;
  }
  (**(code **)(**(long **)(this + 0x40) + 0x10))(*(long **)(this + 0x40),this);
  Sexy::AndroidPurchaseDriver::Init(*(AndroidPurchaseDriver **)(this + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::syncPayment(std::string const&, std::string const&, std::string const&, bool) */

void __thiscall
PurchaseBroker::syncPayment
          (PurchaseBroker *this,string *param_1,string *param_2,string *param_3,bool param_4)

{
  bool bVar1;
  char *__s;
  undefined8 uVar2;
  DNetwork *this_00;
  DString *__n;
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1864];
  string asStack_5a0 [1432];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aDStack_ce8;
  std::string::string(asStack_d48,"");
  nop();
  bVar1 = std::operator==(param_3,"monthlycard");
  if (((bVar1) || (bVar1 = std::operator==(param_3,"rechargeBundle"), bVar1)) ||
     (bVar1 = std::operator==(param_3,"artifact_present"), bVar1)) {
    DString::DString(aDStack_ce8,*(int *)(this + 0xdc));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(asStack_d48,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string((string *)aDStack_ce8,"on");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)aDStack_ce8);
  thunk_FUN_05475e00(uVar2,param_2);
  std::string::~string((string *)aDStack_ce8);
  nop();
  std::string::string((string *)aDStack_ce8,"oi");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,(string *)aDStack_ce8);
  thunk_FUN_05475e00(uVar2,asStack_d48);
  std::string::~string((string *)aDStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_048f837c(afStack_d38,this,param_4);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_5a0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  std::string::~string(asStack_d48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::NDREChargeReward(int, std::string) */

void __thiscall
PurchaseBroker::NDREChargeReward(undefined8 param_1_00,int param_1,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  NetworkMgr *this;
  long *plVar3;
  char *pcVar4;
  TGALogMgr *pTVar5;
  code *__n;
  NDRechargeRewardConfig aNStack_128 [8];
  int local_120;
  TGALuckyChestData aTStack_f8 [8];
  undefined1 auStack_f0 [8];
  string asStack_e8 [40];
  DString aDStack_c0 [56];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_048f7aec(local_80);
  if (cVar1 != '\0') {
    NDRechargeRewardConfig::NDRechargeRewardConfig(aNStack_128);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_128);
    if ((((cVar1 != '\0') && (local_70 != '\0')) && (0 < local_120)) && (0x1d < param_1)) {
      this = (NetworkMgr *)NetworkMgr::Instance();
      plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
      __n = *(code **)(*plVar3 + 0x268);
      (*__n)(plVar3,param_1);
      TGALuckyChestData::TGALuckyChestData(aTStack_f8);
      DString::DString(aDStack_c0,2);
      pcVar4 = (char *)DString::c_str(aDStack_c0);
      std::string::append((string *)aTStack_f8,pcVar4,(size_t)__n);
      DString::~DString(aDStack_c0);
      thunk_FUN_05475e00(auStack_f0,param_3);
      DString::DString(aDStack_c0,param_1);
      pcVar4 = (char *)DString::c_str(aDStack_c0);
      std::string::append(asStack_e8,pcVar4,(size_t)__n);
      DString::~DString(aDStack_c0);
      pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAPlantSpecialOfferData::TGAPlantSpecialOfferData
                ((TGAPlantSpecialOfferData *)aDStack_c0,(TGAPlantSpecialOfferData *)aTStack_f8);
      TGALogMgr::LogDailyRechargeReward(pTVar5,aDStack_c0);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aDStack_c0);
      TGALuckyChestData::~TGALuckyChestData(aTStack_f8);
    }
    NDRechargeRewardConfig::~NDRechargeRewardConfig(aNStack_128);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::PurchaseSuccessed(std::string, std::string, std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&, bool) */

void __thiscall
PurchaseBroker::PurchaseSuccessed
          (PurchaseBroker *this,string *param_2,string *param_3,vector *param_4,bool param_5)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  RtObject *this_00;
  MagentoProductProps *pMVar8;
  PVZ2UIDialog *this_01;
  PurchaseMgr *this_02;
  char *pcVar9;
  TGALogMgr *pTVar10;
  long lVar11;
  ChristmasChargeManager *this_03;
  HappyVaseCheckBilling *this_04;
  LimitGroupBuyManager *this_05;
  ProfileMgr *pPVar12;
  BigInt *this_06;
  PlayerInfo *this_07;
  wchar_t *pwVar13;
  ResourceInfo *pRVar14;
  PurchaseItemWidget *this_08;
  NetworkMgr *pNVar15;
  long *plVar16;
  int iVar17;
  int extraout_w1;
  int extraout_w1_00;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  uint uVar18;
  code *pcVar19;
  PlayerInfo *this_09;
  float fVar20;
  PlayerInfo *local_1f8;
  undefined1 auStack_1c8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_1c0 [8];
  wstring awStack_1b8 [8];
  wstring awStack_1b0 [8];
  wstring awStack_1a8 [8];
  Sexy aSStack_1a0 [8];
  Sexy aSStack_198 [8];
  RtId aRStack_190 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_188 [8];
  string asStack_180 [32];
  undefined1 auStack_160 [16];
  string asStack_150 [8];
  Iterator aIStack_148 [20];
  undefined4 local_134;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80 [4];
  byte local_70;
  long local_8;
  
  this_09 = *(PlayerInfo **)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  if (this_09 == (PlayerInfo *)0x0) {
    pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_09 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
  }
  iVar6 = PlayerInfo::GetMonthVIPState(this_09);
  gLawnApp[0x2960] = (LawnApp)0x1;
  PlayerInfo::HandlePurchase(this_09,param_3,param_4);
  gLawnApp[0x2960] = (LawnApp)0x0;
  this[0x69] = (PurchaseBroker)0x1;
  PlayerInfo::AddRechargeProductId(this_09,param_3);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_1c0);
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_148,uVar7,0x1a);
  while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_148), bVar2) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_148);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_188,(RtWeakPtrBase *)aRStack_190);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_188)
    ;
    pMVar8 = Sexy::RtObject::Cast<MagentoProductProps>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_188);
    Sexy::RtId::~RtId(aRStack_190);
    iVar17 = extraout_w1;
    if ((pMVar8 != (MagentoProductProps *)0x0) &&
       (cVar3 = std::operator==((string *)(pMVar8 + 0x10),param_3), iVar17 = extraout_w1_00,
       cVar3 != '\0')) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_148);
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_1c0,(RtId *)aRStack_188);
      Sexy::RtId::~RtId((RtId *)aRStack_188);
      break;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_148,iVar17);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_148);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_1c0);
  if (!bVar2) goto LAB_048fd1a0;
  bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.redpack1");
  if (bVar2) {
    std::string::string((string *)aRStack_190,"2019_SPRING");
    std::string::string((string *)aAStack_88,"HB_GACHA");
    pcVar9 = "1";
LAB_048fd92c:
    std::string::string((string *)local_80,pcVar9);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)aIStack_148,(string *)aAStack_88,2
               ,aSStack_1a0);
    std::string::string((string *)aRStack_188,"");
    BehaviorLog::inGameBehavior((string *)aRStack_190,(vector *)aIStack_148,(string *)aRStack_188);
    std::string::~string((string *)aRStack_188);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)aIStack_148);
    std::string::~string((string *)local_80);
    std::string::~string((string *)aAStack_88);
    nop();
    nop();
    std::string::~string((string *)aRStack_190);
    nop();
  }
  else {
    bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.redpack10");
    if (bVar2) {
      std::string::string((string *)aRStack_190,"2019_SPRING");
      std::string::string((string *)aAStack_88,"HB_GACHA");
      pcVar9 = "12";
      goto LAB_048fd92c;
    }
  }
  bVar2 = std::operator==(param_3,"com.popcap.android.chs.PVZ2.MonthlyVIPSubs30");
  puVar1 = gMessageRouter;
  if ((bVar2) && (0 < iVar6)) goto LAB_048fd1a0;
  FUN_05475d88(aRStack_188,param_3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_148);
  MessageRouter::
  Post<std::string_const&,std::vector<int,std::allocator<int>>const&,std::string,std::vector<int,std::allocator<int>>>
            ((MessageRouter *)puVar1,Message::NationalDayChargeReward,aRStack_188,aIStack_148);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)aIStack_148);
  std::string::~string((string *)aRStack_188);
  pMVar8 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
  fVar20 = (float)MagentoProductProps::GetPriceInUSD(pMVar8,false);
  PlayerInfo::AddRechargeCurrency(this_09,(int)fVar20);
  pMVar8 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
  fVar20 = (float)MagentoProductProps::GetPriceInUSD(pMVar8,false);
  FUN_05475d88(aIStack_148,param_3);
  NDREChargeReward(this,(int)fVar20,aIStack_148);
  std::string::~string((string *)aIStack_148);
  this_03 = (ChristmasChargeManager *)Sexy::LazySingleton<ChristmasChargeManager>::GetInstancePtr();
  ChristmasChargeManager::NewYearChargeAward(this_03);
  this_04 = (HappyVaseCheckBilling *)Sexy::LazySingleton<HappyVaseCheckBilling>::GetInstancePtr();
  HappyVaseCheckBilling::CheckBillingPoint(this_04,param_3);
  this_05 = (LimitGroupBuyManager *)Sexy::LazySingleton<LimitGroupBuyManager>::GetInstancePtr();
  pMVar8 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
  fVar20 = (float)MagentoProductProps::GetPriceInUSD(pMVar8,false);
  LimitGroupBuyManager::AddDaveTicket(this_05,(int)fVar20);
  MessageRouter::Post((_func_void *)gMessageRouter);
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar3 = FUN_048f7aec(local_100);
  if ((cVar3 != '\0') && (local_f0 != '\0')) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
    bVar2 = std::operator!=((string *)(lVar11 + 0x88),"money");
    if (!bVar2) {
      pMVar8 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
      fVar20 = (float)MagentoProductProps::GetPriceInUSD(pMVar8,bVar2);
      bVar4 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.SecretTreasure");
      uVar18 = (uint)bVar2;
      if (!bVar4) {
        uVar18 = (int)fVar20 * 5;
      }
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::ObtainDaveTreasureIntegral,uVar18);
    }
  }
  bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Richman1");
  if (bVar2) {
    pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar6 = ProfileMgr::GetCurrentProfile(pPVar12);
    PlayerInfo::AddCommonGachaReward(iVar6,0xfad,true,false);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::RichmanDiceShopBuyFinish,1);
  }
  else {
    bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Richman12");
    if (bVar2) {
      pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      iVar6 = ProfileMgr::GetCurrentProfile(pPVar12);
      PlayerInfo::AddCommonGachaReward(iVar6,0xfad,true,false);
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::RichmanDiceShopBuyFinish,0xf);
    }
    else {
      bVar4 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Richman88");
      if (bVar4) {
        pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        iVar6 = ProfileMgr::GetCurrentProfile(pPVar12);
        PlayerInfo::AddCommonGachaReward(iVar6,0xfad,true,bVar2);
        MessageRouter::Post<int,int>
                  ((MessageRouter *)gMessageRouter,Message::RichmanDiceShopBuyFinish,0xbe);
      }
      else {
        bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Richman168");
        if (bVar2) {
          pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          iVar6 = ProfileMgr::GetCurrentProfile(pPVar12);
          PlayerInfo::AddCommonGachaReward(iVar6,0xfad,true,bVar4);
          MessageRouter::Post<int,int>
                    ((MessageRouter *)gMessageRouter,Message::RichmanDiceShopBuyFinish,0x1c8);
        }
        else {
          bVar4 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Richman248");
          if (bVar4) {
            pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            iVar6 = ProfileMgr::GetCurrentProfile(pPVar12);
            PlayerInfo::AddCommonGachaReward(iVar6,0xfad,false,bVar2);
            MessageRouter::Post<int,int>
                      ((MessageRouter *)gMessageRouter,Message::RichmanDiceShopBuyFinish,800);
          }
        }
      }
    }
  }
  std::operator==(param_3,"com.popcap.ios.chs.PVZ2.NewYearLuckyBag45");
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  this_06 = (BigInt *)Sexy::LazySingleton<AcFirstRechargeManager>::GetInstancePtr();
  bVar5 = BigInt::IsNegative(this_06);
  cVar3 = FUN_048f7aec(local_80[0]);
  if ((cVar3 != '\0') && (bVar5 < local_70)) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
    bVar2 = std::operator!=((string *)(lVar11 + 0x88),"money");
    if (!bVar2) {
      pMVar8 = (MagentoProductProps *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
      fVar20 = (float)MagentoProductProps::GetPriceInUSD(pMVar8,bVar2);
      iVar6 = (int)fVar20;
      if (1 < iVar6) {
        pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        DString::DString((DString *)aIStack_148,iVar6);
        DString::operator_cast_to_string((DString *)aIStack_148);
        TGALogMgr::LogSegments(pTVar10,0x2718,(uint)bVar2,(string *)aRStack_188);
        std::string::~string((string *)aRStack_188);
        DString::~DString((DString *)aIStack_148);
        pNVar15 = (NetworkMgr *)NetworkMgr::Instance();
        plVar16 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar15);
        (**(code **)(*plVar16 + 0x168))(plVar16,iVar6);
      }
    }
  }
  bVar2 = std::operator==(param_3,"com.popcap.pvz2.battlez.1");
  if ((bVar2) || (bVar2 = std::operator==(param_3,"com.popcap.pvz2.battlez.6"), bVar2)) {
    MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::GLBuyZMatchTicket,true);
  }
  else {
    bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Lottery6");
    if (bVar2) {
      pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_07 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
      MessageRouter::Post<int,int,int,int>
                ((MessageRouter *)gMessageRouter,Message::LimitLotteryBuyCoin,6,6000);
      ProfileChangeItemAmount(0xfad,6000,false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_148);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
      ProfileChangeItemAmount(0x59fc,*(int *)(lVar11 + 0x90),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_148);
      S2C_LimitLotteryCrystalBuy::S2C_LimitLotteryCrystalBuy
                ((S2C_LimitLotteryCrystalBuy *)aIStack_148);
      local_134 = PlayerInfo::GetMaterialNum(this_07,0x59fc);
    }
    else {
      bVar4 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Lottery25");
      if (bVar4) {
        pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        local_1f8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
        MessageRouter::Post<int,int,int,int>
                  ((MessageRouter *)gMessageRouter,Message::LimitLotteryBuyCoin,0x19,30000);
        ProfileChangeItemAmount(0xfad,30000,bVar2);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_148);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
        iVar6 = *(int *)(lVar11 + 0x90);
      }
      else {
        bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Lottery328");
        if (!bVar2) {
          bVar2 = std::operator==(param_3,"com.popcap.ios.chs.PVZ2.Bank30");
          if (bVar2) {
            pNVar15 = (NetworkMgr *)NetworkMgr::Instance();
            plVar16 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar15);
            (**(code **)(*plVar16 + 0x370))(plVar16,2,1,1,9999,0x1e);
          }
          goto LAB_048fd754;
        }
        pPVar12 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        local_1f8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar12);
        MessageRouter::Post<int,int,int,int>
                  ((MessageRouter *)gMessageRouter,Message::LimitLotteryBuyCoin,0x148,0x60ae0);
        ProfileChangeItemAmount(0xfad,0x60ae0,false);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_148);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
        iVar6 = *(int *)(lVar11 + 0x90);
        bVar2 = false;
      }
      ProfileChangeItemAmount(0x59fc,iVar6,bVar2);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_148);
      S2C_LimitLotteryCrystalBuy::S2C_LimitLotteryCrystalBuy
                ((S2C_LimitLotteryCrystalBuy *)aIStack_148);
      local_134 = PlayerInfo::GetMaterialNum(local_1f8,0x59fc);
    }
    MessageRouter::Post<bool,S2C_LimitLotteryCrystalBuy_const*,bool,S2C_LimitLotteryCrystalBuy*>
              ((MessageRouter *)gMessageRouter,Message::NotifyLimitLotteryBuyCrystalFinish,true,
               (S2C_LimitLotteryCrystalBuy *)aIStack_148);
    S2C_LimitLotteryCrystalBuy::~S2C_LimitLotteryCrystalBuy
              ((S2C_LimitLotteryCrystalBuy *)aIStack_148);
  }
LAB_048fd754:
  ActiveItem::~ActiveItem(aAStack_88);
  ActiveItem::~ActiveItem(aAStack_108);
LAB_048fd1a0:
  if (this[0xa9] == (PurchaseBroker)0x0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else {
    this_01 = (PVZ2UIDialog *)LawnApp::GetPVZ2Dialog(gLawnApp);
    if ((this_01 != (PVZ2UIDialog *)0x0) && (this[0xa8] != (PurchaseBroker)0x0)) {
      FUN_05476574();
      FUN_05476574(awStack_1b0);
      bVar2 = std::operator==((string *)(this + 0x90),"");
      if (bVar2) {
        TodStringTranslate(L"[PURCHASE_DIALOG_CONFIRMED_HEADER]");
        FUN_054766c8(awStack_1b8,aIStack_148);
        FUN_05476c50(aIStack_148);
        cVar3 = PlayerInfo::IsShowRechargeDoubleDialog(this_09);
        if (cVar3 == '\0') {
          TodStringTranslate(L"[PURCHASE_COMPLETE]");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
          MagentoProductProps::GetLocalizedShortDescription();
          Sexy::UTF8StringToWString(aSStack_1a0,extraout_x1_01);
          TodStringTranslate((wstring *)aSStack_198);
          uVar7 = FUN_054766ec(aRStack_190);
          FUN_05478178(aRStack_188,uVar7,auStack_1c8);
          TodReplaceString(awStack_1a8,L"{PRODUCT_NAME}",(wstring *)aRStack_188);
          FUN_054766c8(awStack_1b0,aIStack_148);
          FUN_05476c50(aIStack_148);
          FUN_05476c50(aRStack_188);
          nop();
          FUN_05476c50(aRStack_190);
          FUN_05476c50((wstring *)aSStack_198);
          std::string::~string((string *)aSStack_1a0);
          FUN_05476c50(awStack_1a8);
        }
        else {
          TodStringTranslate(L"[PURCHASE_DOUBLE_COMPLETE]");
          pwVar13 = (wchar_t *)FUN_054766ec(aSStack_1a0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
          MagentoProductProps::GetLocalizedShortDescription();
          Sexy::UTF8StringToWString(aSStack_198,extraout_x1);
          TodStringTranslate((wstring *)aRStack_190);
          uVar7 = FUN_054766ec(aRStack_188);
          Sexy::StrFormat(pwVar13,aIStack_148,uVar7);
          FUN_054766c8(awStack_1b0,aIStack_148);
          FUN_05476c50(aIStack_148);
          FUN_05476c50(aRStack_188);
          FUN_05476c50(aRStack_190);
          std::string::~string((string *)aSStack_198);
          FUN_05476c50(aSStack_1a0);
          PlayerInfo::SetShowRechargeDoubleDialog(this_09,false);
        }
      }
      else {
        TodStringTranslate(L"[PURCHASE_RESTORE_DIALOG_HEADER]");
        FUN_054766c8(awStack_1b8,aIStack_148);
        FUN_05476c50(aIStack_148);
        TodStringTranslate(L"[PURCHASE_RESTORE_DIALOG_DESC]");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
        MagentoProductProps::GetLocalizedShortDescription();
        Sexy::UTF8StringToWString(aSStack_1a0,extraout_x1_00);
        TodStringTranslate((wstring *)aSStack_198);
        uVar7 = FUN_054766ec(aRStack_190);
        FUN_05478178(aRStack_188,uVar7,auStack_1c8);
        TodReplaceString(awStack_1a8,L"{PRODUCT_NAME}",(wstring *)aRStack_188);
        FUN_054766c8(awStack_1b0,aIStack_148);
        FUN_05476c50(aIStack_148);
        FUN_05476c50(aRStack_188);
        nop();
        FUN_05476c50(aRStack_190);
        FUN_05476c50((wstring *)aSStack_198);
        std::string::~string((string *)aSStack_1a0);
        FUN_05476c50(awStack_1a8);
      }
      PVZ2UIDialog::SetHeaderLabel(this_01,awStack_1b8);
      PVZ2UIDialog::SetFooterLabel(this_01,awStack_1b0);
      FUN_05478178(aRStack_188,L"[CONTINUE_BUTTON]",aRStack_190);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onDialogButtonPressed);
      Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>
                ((Delegate0 *)aAStack_88,aIStack_148);
      PVZ2UIDialog::AddButton(this_01,aRStack_188,(Delegate0 *)aAStack_88,0);
      FUN_05476c50(aRStack_188);
      nop();
      pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_1c0);
      cVar3 = PurchaseItemWidget::SupportsProduct((MagentoProductProps *)pRVar14);
      if (cVar3 != '\0') {
        pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_1c0);
        this_08 = ::operator_new(0x118);
        PurchaseItemWidget::PurchaseItemWidget(this_08,(MagentoProductProps *)pRVar14);
        iVar17 = *(int *)(this_01 + 0x54);
        iVar6 = iVar17 + 3;
        if (-1 < iVar17) {
          iVar6 = iVar17;
        }
        pcVar19 = *(code **)(*(long *)this_08 + 0x1a0);
        Sexy::Insets::Insets((Insets *)aIStack_148,0,iVar6 >> 2,*(int *)(this_01 + 0x50),iVar17 / 2)
        ;
        (*pcVar19)(this_08,aIStack_148);
        PVZ2UIDialog::SetContents(this_01,(Widget *)this_08);
      }
      FUN_05476c50(awStack_1b0);
      FUN_05476c50(awStack_1b8);
    }
  }
  *(undefined4 *)(this + 0x70) = 0;
  this_02 = (PurchaseMgr *)Sexy::LazySingleton<PurchaseMgr>::GetInstance();
  PurchaseMgr::ResetPurchaseInfo(this_02);
  std::string::string((string *)aRStack_190,"");
  nop();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_1c0);
  if (bVar2) {
    lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
    thunk_FUN_05475e00(aRStack_190,lVar11 + 0x78);
  }
  syncPayment(this,param_3,param_2,(string *)aRStack_190,param_5);
  TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)aRStack_188);
  thunk_FUN_05475e00(aRStack_188,param_3);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_1c0);
  if (bVar2) {
    pMVar8 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
    fVar20 = (float)MagentoProductProps::GetPriceInUSD(pMVar8,false);
    DString::DString((DString *)aIStack_148,fVar20);
    pcVar9 = (char *)DString::c_str((DString *)aIStack_148);
    std::string::append(asStack_180,pcVar9,(size_t)param_2);
    DString::~DString((DString *)aIStack_148);
  }
  thunk_FUN_05475e00(auStack_160,this + 0x80);
  iVar6 = PlayerInfo::GetNumRechargeCurrency(this_09);
  DString::DString((DString *)aIStack_148,iVar6);
  pcVar9 = (char *)DString::c_str((DString *)aIStack_148);
  std::string::append(asStack_150,pcVar9,(size_t)param_2);
  DString::~DString((DString *)aIStack_148);
  pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogPurchaseData::TGALogPurchaseData
            ((TGALogPurchaseData *)aIStack_148,(TGALogPurchaseData *)aRStack_188);
  TGALogMgr::LogPurchase(pTVar10,aIStack_148);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aIStack_148);
  pTVar10 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::clearSegments(pTVar10,0x2729);
  TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)aRStack_188);
  std::string::~string((string *)aRStack_190);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_1c0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::OnNotifyPurchaseResult(bool, std::string const&, int) */

void __thiscall
PurchaseBroker::OnNotifyPurchaseResult
          (PurchaseBroker *this,bool param_1,string *param_2,int param_3)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PurchaseMgr *this_01;
  PVZ2UIDialog *pPVar5;
  undefined1 auStack_70 [8];
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    lVar4 = Sexy::LazySingleton<PurchaseMgr>::GetInstance();
    cVar1 = FUN_048f7af8(*(undefined1 *)(lVar4 + 0x40));
    if (cVar1 == '\0') {
      FUN_05475d88(asStack_58,param_2);
      std::string::string(asStack_50,"");
      PurchaseSuccessed(this,asStack_58,asStack_50,&DAT_06b6da80,0);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
    }
    else {
      FUN_05475d88(asStack_50,param_2);
      LostPurchaseSuccessed(this,asStack_50);
      std::string::~string(asStack_50);
    }
  }
  else {
    lVar4 = Sexy::LazySingleton<PurchaseMgr>::GetInstance();
    cVar1 = FUN_048f7af8(*(undefined1 *)(lVar4 + 0x40));
    this_00 = gLawnApp;
    if (cVar1 == '\0') {
      if (*(char **)(this + 0xa0) != (char *)0x0) {
        PlayerInfo::setLastOrderId(*(char **)(this + 0xa0));
        this_01 = (PurchaseMgr *)Sexy::LazySingleton<PurchaseMgr>::GetInstance();
        PurchaseMgr::ResetPurchaseInfo(this_01);
        if (((this[0xa9] == (PurchaseBroker)0x0) ||
            (pPVar5 = (PVZ2UIDialog *)LawnApp::GetPVZ2Dialog(gLawnApp),
            pPVar5 == (PVZ2UIDialog *)0x0)) || (this[0xa8] == (PurchaseBroker)0x0)) {
          *(undefined4 *)(this + 0x70) = 0;
        }
        else {
          FUN_05478178(awStack_68,L"[PURCHASE_ERROR_HEADER]",asStack_50);
          nop();
          FUN_05478178(awStack_60,L"[PURCHASE_ERROR_BODY]",asStack_50);
          nop();
          if (param_3 == 0x5033) {
            FUN_054772c4(awStack_68,L"[PURCHASE_FULL_ERROR_HEADER]");
            FUN_054772c4(awStack_60,L"[PURCHASE_FULL_ERROR_BODY]");
          }
          else {
            FUN_054772c4(awStack_68,L"[PURCHASE_ERROR_HEADER]");
            FUN_054772c4(awStack_60,L"[PURCHASE_ERROR_BODY]");
          }
          PVZ2UIDialog::SetHeaderLabel(pPVar5,awStack_68);
          PVZ2UIDialog::SetFooterLabel(pPVar5,awStack_60);
          FUN_05478178(asStack_58,L"[CONTINUE_BUTTON]",auStack_70);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onDialogButtonPressed);
          Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>
                    (aDStack_38,asStack_50);
          PVZ2UIDialog::AddButton(pPVar5,asStack_58,aDStack_38,0);
          FUN_05476c50(asStack_58);
          nop();
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_68);
          *(undefined4 *)(this + 0x70) = 0;
        }
      }
    }
    else {
      iVar2 = FUN_048f8434(400);
      iVar3 = FUN_048f8434(300);
      pPVar5 = (PVZ2UIDialog *)
               LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
      if (pPVar5 != (PVZ2UIDialog *)0x0) {
        FUN_05478178(awStack_68,L"[RESTORE_LOST_ERROR_HEADER]",asStack_50);
        nop();
        FUN_05478178(awStack_60,L"[RESTORE_LOST_ERROR_BODY]",asStack_50);
        nop();
        FUN_054772c4(awStack_68,L"[RESTORE_LOST_ERROR_HEADER]");
        FUN_054772c4(awStack_60,L"[RESTORE_LOST_ERROR_BODY]");
        PVZ2UIDialog::SetHeaderLabel(pPVar5,awStack_68);
        PVZ2UIDialog::SetFooterLabel(pPVar5,awStack_60);
        FUN_05478178(asStack_58,L"[CONTINUE_BUTTON]",auStack_70);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onLostPurchaseDialogButtonPressed);
        Sexy::Delegate0::Delegate0<PurchaseBroker,void(PurchaseBroker::*)()>(aDStack_38,asStack_50);
        PVZ2UIDialog::AddButton(pPVar5,asStack_58,aDStack_38,0);
        FUN_05476c50(asStack_58);
        nop();
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
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
/* PurchaseBroker::OnNotifyPurchaseResult(int, std::string const&, std::string const&,
   std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> > const&) */

void __thiscall
PurchaseBroker::OnNotifyPurchaseResult
          (PurchaseBroker *this,int param_1,string *param_2,string *param_3,vector *param_4)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    FUN_05475d88(asStack_18,param_2);
    FUN_05475d88(asStack_10,param_3);
    PurchaseSuccessed(this,asStack_18,asStack_10,param_4,0);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseBroker::onNotifyPurchaseValidation(std::string const&, std::string const&,
   std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> > const&, int) */

void __thiscall
PurchaseBroker::onNotifyPurchaseValidation
          (PurchaseBroker *this,string *param_1,string *param_2,vector *param_3,int param_4)

{
  OnNotifyPurchaseResult(this,param_4,param_1,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseBroker::onNotifyLostPurchase(std::vector<NetworkPaymentInfo,
   std::allocator<NetworkPaymentInfo> > const&) */

void __thiscall PurchaseBroker::onNotifyLostPurchase(PurchaseBroker *this,vector *param_1)

{
  bool bVar1;
  NetworkPaymentInfo *pNVar2;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  string asStack_38 [8];
  NetworkPaymentInfo aNStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = FUN_048f9e94(*(undefined8 *)param_1);
  local_48 = FUN_048f9ee4(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    pNVar2 = (NetworkPaymentInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    NetworkPaymentInfo::NetworkPaymentInfo(aNStack_30,pNVar2);
    FUN_05475d88(asStack_40,aNStack_30);
    FUN_05475d88(asStack_38,auStack_28);
    PurchaseSuccessed(this,asStack_40,asStack_38,auStack_20,1);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    NetworkPaymentInfo::~NetworkPaymentInfo(aNStack_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_50);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

