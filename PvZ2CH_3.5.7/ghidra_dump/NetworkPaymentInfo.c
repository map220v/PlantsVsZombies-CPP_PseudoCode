// Class: NetworkPaymentInfo


/* NetworkPaymentInfo::NetworkPaymentInfo() */

void __thiscall NetworkPaymentInfo::NetworkPaymentInfo(NetworkPaymentInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  return;
}


/* NetworkPaymentInfo::~NetworkPaymentInfo() */

void __thiscall NetworkPaymentInfo::~NetworkPaymentInfo(NetworkPaymentInfo *this)

{
  std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
            ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* NetworkPaymentInfo::NetworkPaymentInfo(NetworkPaymentInfo const&) */

void __thiscall
NetworkPaymentInfo::NetworkPaymentInfo(NetworkPaymentInfo *this,NetworkPaymentInfo *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::vector
            ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}

