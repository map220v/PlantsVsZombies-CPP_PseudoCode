// Class: Sexy::AndroidPurchaseDriver


/* Sexy::AndroidPurchaseDriver::CanMakePayments() */

undefined1 __thiscall Sexy::AndroidPurchaseDriver::CanMakePayments(AndroidPurchaseDriver *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x10))();
  }
  return uVar1;
}


/* Sexy::AndroidPurchaseDriver::RequestPayment(std::string const&, std::string const&) */

void Sexy::AndroidPurchaseDriver::RequestPayment(string *param_1,string *param_2)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x70))();
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::QueryOrder(std::string const&) */

void Sexy::AndroidPurchaseDriver::QueryOrder(string *param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x78))();
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::CheckRedeemOrders() */

void __thiscall Sexy::AndroidPurchaseDriver::CheckRedeemOrders(AndroidPurchaseDriver *this)

{
  code *pcVar1;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)(this + 0x10) + 0xe8);
    if (pcVar1 != IPurchaseAdapter::CheckRedeemOrders) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::GetRedeemOrders(std::map<std::string, Sexy::RedeemInfo,
   std::less<std::string >, std::allocator<std::pair<std::string const, Sexy::RedeemInfo> > >&) */

void Sexy::AndroidPurchaseDriver::GetRedeemOrders(map *param_1)

{
  map *pmVar1;
  
  pmVar1 = *(map **)(param_1 + 0x10);
  if (pmVar1 != (map *)0x0) {
    if (*(code **)(*(long *)pmVar1 + 0xf0) == IPurchaseAdapter::GetRedeemOrders) {
      IPurchaseAdapter::GetRedeemOrders(pmVar1);
      return;
    }
    (**(code **)(*(long *)pmVar1 + 0xf0))();
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::ShowGameCommunity() */

void __thiscall Sexy::AndroidPurchaseDriver::ShowGameCommunity(AndroidPurchaseDriver *this)

{
  code *pcVar1;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)(this + 0x10) + 0xf8);
    if (pcVar1 != IPurchaseAdapter::ShowGameCommunity) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::~AndroidPurchaseDriver() */

void __thiscall Sexy::AndroidPurchaseDriver::~AndroidPurchaseDriver(AndroidPurchaseDriver *this)

{
  *(undefined ***)this = &PTR__AndroidPurchaseDriver_06a35340;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x20))();
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  std::string::~string((string *)(this + 0x18));
  return;
}


/* Sexy::AndroidPurchaseDriver::~AndroidPurchaseDriver() */

void __thiscall Sexy::AndroidPurchaseDriver::~AndroidPurchaseDriver(AndroidPurchaseDriver *this)

{
  ~AndroidPurchaseDriver(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::AndroidPurchaseDriver::SetPurchaseAdapter(Sexy::IPurchaseAdapter*) */

void __thiscall
Sexy::AndroidPurchaseDriver::SetPurchaseAdapter
          (AndroidPurchaseDriver *this,IPurchaseAdapter *param_1)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x20))();
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
  }
  *(IPurchaseAdapter **)(this + 0x10) = param_1;
  if (param_1 != (IPurchaseAdapter *)0x0) {
    (**(code **)(*(long *)param_1 + 0x90))(param_1,this);
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::Init() */

void __thiscall Sexy::AndroidPurchaseDriver::Init(AndroidPurchaseDriver *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x18))();
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::StartRecharge() */

void __thiscall Sexy::AndroidPurchaseDriver::StartRecharge(AndroidPurchaseDriver *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x80))();
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::OnResume() */

void __thiscall Sexy::AndroidPurchaseDriver::OnResume(AndroidPurchaseDriver *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x28))();
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::ExitGame() */

undefined1 __thiscall Sexy::AndroidPurchaseDriver::ExitGame(AndroidPurchaseDriver *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x30))();
  }
  return uVar1;
}


/* Sexy::AndroidPurchaseDriver::LaunchMoreGamesWebpage() */

undefined1 __thiscall
Sexy::AndroidPurchaseDriver::LaunchMoreGamesWebpage(AndroidPurchaseDriver *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x38))();
  }
  return uVar1;
}


/* Sexy::AndroidPurchaseDriver::GetTodayRechargeMax() */

undefined8 __thiscall Sexy::AndroidPurchaseDriver::GetTodayRechargeMax(AndroidPurchaseDriver *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x58))();
    return uVar1;
  }
  return 999999;
}


/* Sexy::AndroidPurchaseDriver::GetMonthRechargeMax() */

undefined8 __thiscall Sexy::AndroidPurchaseDriver::GetMonthRechargeMax(AndroidPurchaseDriver *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x60))();
    return uVar1;
  }
  return 999999;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetPurchasePlatform() */

void Sexy::AndroidPurchaseDriver::GetPurchasePlatform(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"no-purchase-adapter");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0x40))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidPurchaseDriver::NeedShowDialog() */

undefined1 __thiscall Sexy::AndroidPurchaseDriver::NeedShowDialog(AndroidPurchaseDriver *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x48))();
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetAboutContentStringId() */

void Sexy::AndroidPurchaseDriver::GetAboutContentStringId(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    FUN_05478178();
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0x50))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidPurchaseDriver::setParam() */

void __thiscall Sexy::AndroidPurchaseDriver::setParam(AndroidPurchaseDriver *this)

{
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 0x88))();
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::Refresh(Sexy::StructuredData const*,
   Sexy::Delegate2<Sexy::IPurchaseDriver*, bool>) */

void __thiscall
Sexy::AndroidPurchaseDriver::Refresh
          (AndroidPurchaseDriver *this,undefined8 param_2,Delegate2 *param_3)

{
  Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x20),param_3);
  return;
}


/* Sexy::AndroidPurchaseDriver::RestorePurchases(Sexy::Delegate2<Sexy::IPurchaseDriver*, bool>) */

void __thiscall
Sexy::AndroidPurchaseDriver::RestorePurchases(AndroidPurchaseDriver *this,Delegate2 *param_2)

{
  Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x50),param_2);
  return;
}


/* Sexy::AndroidPurchaseDriver::RequestValidationPayment(std::string const&, std::string const&,
   std::string const&) */

void Sexy::AndroidPurchaseDriver::RequestValidationPayment
               (string *param_1,string *param_2,string *param_3)

{
  code *pcVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0x10) + 0xa8);
    if (pcVar1 != IPurchaseAdapter::RequestValidationPayment) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::Consume(std::string const&, std::string const&) */

void Sexy::AndroidPurchaseDriver::Consume(string *param_1,string *param_2)

{
  code *pcVar1;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0x10) + 0x110);
    if (pcVar1 != IPurchaseAdapter::Consume) {
      (*pcVar1)();
    }
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::CheckSpecialRedeem() */

void __thiscall Sexy::AndroidPurchaseDriver::CheckSpecialRedeem(AndroidPurchaseDriver *this)

{
  code *pcVar1;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)(this + 0x10) + 0x118);
    if (pcVar1 != IPurchaseAdapter::CheckSpecialRedeem) {
      (*pcVar1)();
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetProductInfo(std::string const&) */

void Sexy::AndroidPurchaseDriver::GetProductInfo(string *param_1)

{
  long *plVar1;
  undefined8 in_x1;
  ProductInfo *in_x8;
  DownloadInfo aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProductInfo::ProductInfo(in_x8);
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x68))(aDStack_28,plVar1,in_x1);
    ProductInfo::operator=(in_x8,(ProductInfo *)aDStack_28);
    Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidPurchaseDriver::NeedPurchaseWhite() */

ulong __thiscall Sexy::AndroidPurchaseDriver::NeedPurchaseWhite(AndroidPurchaseDriver *this)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return 1;
  }
  pcVar3 = *(code **)(**(long **)(this + 0x10) + 0xb0);
  if (pcVar3 == IPurchaseAdapter::NeedPurchaseWhite) {
    uVar2 = IPurchaseAdapter::NeedPurchaseWhite();
    return uVar2;
  }
  bVar1 = (*pcVar3)();
  return (ulong)bVar1;
}


/* Sexy::AndroidPurchaseDriver::NeedShowChannelActivity() */

ulong __thiscall Sexy::AndroidPurchaseDriver::NeedShowChannelActivity(AndroidPurchaseDriver *this)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  
  if (*(long **)(this + 0x10) == (long *)0x0) {
    return 1;
  }
  pcVar3 = *(code **)(**(long **)(this + 0x10) + 0xb8);
  if (pcVar3 == IPurchaseAdapter::NeedShowChannelActivity) {
    uVar2 = IPurchaseAdapter::NeedShowChannelActivity();
    return uVar2;
  }
  bVar1 = (*pcVar3)();
  return (ulong)bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetChannelID() */

void Sexy::AndroidPurchaseDriver::GetChannelID(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0xc0))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetUniqueID() */

void Sexy::AndroidPurchaseDriver::GetUniqueID(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0xd0))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetUniqueCharacterID() */

void Sexy::AndroidPurchaseDriver::GetUniqueCharacterID(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0xd8))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetChannelUpdateUrl() */

void Sexy::AndroidPurchaseDriver::GetChannelUpdateUrl(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"AndroidPurchaseDriver::GetChannelUpdateUrl mPurchaseAdapter = %d",
                  (ulong)(*(long *)(in_x0 + 0x10) != 0));
  if (*(long **)(in_x0 + 0x10) == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(**(long **)(in_x0 + 0x10) + 200))();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetTWRequestHead() */

void Sexy::AndroidPurchaseDriver::GetTWRequestHead(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"AndroidPurchaseDriver::GetTWRequestHead mPurchaseAdapter = %d",
                  (ulong)(*(long *)(in_x0 + 0x10) != 0));
  if (*(long **)(in_x0 + 0x10) == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(**(long **)(in_x0 + 0x10) + 0xe0))();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetDeviceID() */

void Sexy::AndroidPurchaseDriver::GetDeviceID(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0x100))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetSignature() */

void Sexy::AndroidPurchaseDriver::GetSignature(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0x108))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidPurchaseDriver::CheckGameCenterStatus() */

void __thiscall Sexy::AndroidPurchaseDriver::CheckGameCenterStatus(AndroidPurchaseDriver *this)

{
  code *pcVar1;
  
  if (*(long **)(this + 0x10) != (long *)0x0) {
    pcVar1 = *(code **)(**(long **)(this + 0x10) + 0x120);
    if (pcVar1 != IPurchaseAdapter::CheckGameCenterStatus) {
      (*pcVar1)();
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidPurchaseDriver::GetGameCenterUrl() */

void Sexy::AndroidPurchaseDriver::GetGameCenterUrl(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  plVar2 = *(long **)(in_x0 + 0x10);
  if (plVar2 == (long *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    (**(code **)(*plVar2 + 0x128))(plVar2);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidPurchaseDriver::OnPaymentComplete(std::string const&) */

void __thiscall
Sexy::AndroidPurchaseDriver::OnPaymentComplete(AndroidPurchaseDriver *this,string *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,this,param_1);
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::OnPaymentComplete(std::string const&, std::string const&,
   std::string const&) */

void __thiscall
Sexy::AndroidPurchaseDriver::OnPaymentComplete
          (AndroidPurchaseDriver *this,string *param_1,string *param_2,string *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,this,param_1,param_2,param_3);
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::OnPaymentIncomplete(std::string const&,
   Sexy::IPurchaseDriver::CauseForIncompletion const&) */

void __thiscall
Sexy::AndroidPurchaseDriver::OnPaymentIncomplete
          (AndroidPurchaseDriver *this,string *param_1,CauseForIncompletion *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,this,param_1,*(undefined4 *)param_2);
  }
  return;
}


/* Sexy::AndroidPurchaseDriver::AndroidPurchaseDriver() */

void __thiscall Sexy::AndroidPurchaseDriver::AndroidPurchaseDriver(AndroidPurchaseDriver *this)

{
  IPurchaseDriver::IPurchaseDriver((IPurchaseDriver *)this);
  *(undefined ***)this = &PTR__AndroidPurchaseDriver_06a35340;
  Set8BytesTo0(this + 0x18);
  Delegate2<Sexy::IPurchaseDriver*,bool>::Delegate2((DummyInit *)(this + 0x20));
  Delegate2<Sexy::IPurchaseDriver*,bool>::Delegate2((DummyInit *)(this + 0x50));
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

