// Class: PurchasedBundleInfo


/* PurchasedBundleInfo::~PurchasedBundleInfo() */

void __thiscall PurchasedBundleInfo::~PurchasedBundleInfo(PurchasedBundleInfo *this)

{
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::~vector
            ((vector<bundleItemInfo,std::allocator<bundleItemInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


void __thiscall PurchasedBundleInfo::~PurchasedBundleInfo(PurchasedBundleInfo *this)

{
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::~vector
            ((vector<bundleItemInfo,std::allocator<bundleItemInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


void __thiscall PurchasedBundleInfo::~PurchasedBundleInfo(PurchasedBundleInfo *this)

{
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::~vector
            ((vector<bundleItemInfo,std::allocator<bundleItemInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


void __thiscall PurchasedBundleInfo::~PurchasedBundleInfo(PurchasedBundleInfo *this)

{
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::~vector
            ((vector<bundleItemInfo,std::allocator<bundleItemInfo>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* PurchasedBundleInfo::TEMPNAMEPLACEHOLDERVALUE(PurchasedBundleInfo const&) */

PurchasedBundleInfo * __thiscall
PurchasedBundleInfo::operator=(PurchasedBundleInfo *this,PurchasedBundleInfo *param_1)

{
  thunk_FUN_05475e00();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::operator=
            ((vector<bundleItemInfo,std::allocator<bundleItemInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* PurchasedBundleInfo::PurchasedBundleInfo(PurchasedBundleInfo const&) */

void __thiscall
PurchasedBundleInfo::PurchasedBundleInfo(PurchasedBundleInfo *this,PurchasedBundleInfo *param_1)

{
  FUN_05475d88();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::vector
            ((vector<bundleItemInfo,std::allocator<bundleItemInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* PurchasedBundleInfo::PurchasedBundleInfo(PurchasedBundleInfo&&) */

void __thiscall
PurchasedBundleInfo::PurchasedBundleInfo(PurchasedBundleInfo *this,PurchasedBundleInfo *param_1)

{
  FUN_05474148();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* PurchasedBundleInfo::TEMPNAMEPLACEHOLDERVALUE(PurchasedBundleInfo&&) */

PurchasedBundleInfo * __thiscall
PurchasedBundleInfo::operator=(PurchasedBundleInfo *this,PurchasedBundleInfo *param_1)

{
  FUN_05474278();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::operator=
            ((vector<bundleItemInfo,std::allocator<bundleItemInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* PurchasedBundleInfo::PurchasedBundleInfo() */

void __thiscall PurchasedBundleInfo::PurchasedBundleInfo(PurchasedBundleInfo *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}

