// Class: LogPurchaseInfo


/* LogPurchaseInfo::LogPurchaseInfo() */

void __thiscall LogPurchaseInfo::LogPurchaseInfo(LogPurchaseInfo *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* LogPurchaseInfo::~LogPurchaseInfo() */

void __thiscall LogPurchaseInfo::~LogPurchaseInfo(LogPurchaseInfo *this)

{
  std::vector<LogItemInfo,std::allocator<LogItemInfo>>::~vector
            ((vector<LogItemInfo,std::allocator<LogItemInfo>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}

