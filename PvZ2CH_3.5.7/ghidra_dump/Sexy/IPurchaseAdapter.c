// Class: Sexy::IPurchaseAdapter


/* Sexy::IPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::IPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  thunk_FUN_05475e00(param_1 + 0x10);
  return;
}


/* Sexy::IPurchaseAdapter::RequestValidationPayment(std::string const&, std::string const&,
   std::string const&) */

void Sexy::IPurchaseAdapter::RequestValidationPayment
               (string *param_1,string *param_2,string *param_3)

{
  return;
}


/* Sexy::IPurchaseAdapter::NeedPurchaseWhite() */

undefined8 Sexy::IPurchaseAdapter::NeedPurchaseWhite(void)

{
  return 1;
}


/* Sexy::IPurchaseAdapter::NeedShowChannelActivity() */

undefined8 Sexy::IPurchaseAdapter::NeedShowChannelActivity(void)

{
  return 0;
}


/* Sexy::IPurchaseAdapter::CheckRedeemOrders() */

void Sexy::IPurchaseAdapter::CheckRedeemOrders(void)

{
  return;
}


/* Sexy::IPurchaseAdapter::GetRedeemOrders(std::map<std::string, Sexy::RedeemInfo,
   std::less<std::string >, std::allocator<std::pair<std::string const, Sexy::RedeemInfo> > >&) */

undefined8 Sexy::IPurchaseAdapter::GetRedeemOrders(map *param_1)

{
  return 0;
}


/* Sexy::IPurchaseAdapter::ShowGameCommunity() */

void Sexy::IPurchaseAdapter::ShowGameCommunity(void)

{
  return;
}


/* Sexy::IPurchaseAdapter::Consume(std::string const&, std::string const&) */

void Sexy::IPurchaseAdapter::Consume(string *param_1,string *param_2)

{
  return;
}


/* Sexy::IPurchaseAdapter::CheckSpecialRedeem() */

void Sexy::IPurchaseAdapter::CheckSpecialRedeem(void)

{
  return;
}


/* Sexy::IPurchaseAdapter::CheckGameCenterStatus() */

void Sexy::IPurchaseAdapter::CheckGameCenterStatus(void)

{
  return;
}


/* Sexy::IPurchaseAdapter::OnPaymentComplete(std::string const&) */

void Sexy::IPurchaseAdapter::OnPaymentComplete(string *param_1)

{
  if (*(AndroidPurchaseDriver **)(param_1 + 8) != (AndroidPurchaseDriver *)0x0) {
    AndroidPurchaseDriver::OnPaymentComplete
              (*(AndroidPurchaseDriver **)(param_1 + 8),param_1 + 0x10);
    return;
  }
  return;
}


/* Sexy::IPurchaseAdapter::OnPaymentIncomplete(Sexy::IPurchaseDriver::CauseForIncompletion const&)
    */

void __thiscall
Sexy::IPurchaseAdapter::OnPaymentIncomplete(IPurchaseAdapter *this,CauseForIncompletion *param_1)

{
  if (*(AndroidPurchaseDriver **)(this + 8) != (AndroidPurchaseDriver *)0x0) {
    AndroidPurchaseDriver::OnPaymentIncomplete
              (*(AndroidPurchaseDriver **)(this + 8),(string *)(this + 0x10),param_1);
    return;
  }
  return;
}


/* Sexy::IPurchaseAdapter::GetProductInfo(std::string const&) */

ProductInfo * Sexy::IPurchaseAdapter::GetProductInfo(string *param_1)

{
  ProductInfo *in_x8;
  
  ProductInfo::ProductInfo(in_x8);
  return in_x8;
}


/* Sexy::IPurchaseAdapter::IPurchaseAdapter() */

void __thiscall Sexy::IPurchaseAdapter::IPurchaseAdapter(IPurchaseAdapter *this)

{
  size_t in_x2;
  
  *(undefined **)this = &DAT_06a353e0;
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined8 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* Sexy::IPurchaseAdapter::~IPurchaseAdapter() */

void __thiscall Sexy::IPurchaseAdapter::~IPurchaseAdapter(IPurchaseAdapter *this)

{
  *(undefined **)this = &DAT_06a353e0;
  std::string::~string((string *)(this + 0x10));
  return;
}


/* Sexy::IPurchaseAdapter::~IPurchaseAdapter() */

void __thiscall Sexy::IPurchaseAdapter::~IPurchaseAdapter(IPurchaseAdapter *this)

{
  ~IPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}

