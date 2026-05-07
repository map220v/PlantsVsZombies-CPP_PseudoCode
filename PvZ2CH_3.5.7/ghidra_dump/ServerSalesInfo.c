// Class: ServerSalesInfo


/* ServerSalesInfo::ServerSalesInfo() */

void __thiscall ServerSalesInfo::ServerSalesInfo(ServerSalesInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *this = (ServerSalesInfo)0x0;
  this[1] = (ServerSalesInfo)0x0;
  std::string::append((string *)(this + 8),"",in_x2);
  std::vector<SalesObject,std::allocator<SalesObject>>::clear
            ((vector<SalesObject,std::allocator<SalesObject>> *)(this + 0x10));
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::clear
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x28));
  return;
}


/* ServerSalesInfo::~ServerSalesInfo() */

void __thiscall ServerSalesInfo::~ServerSalesInfo(ServerSalesInfo *this)

{
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::~vector
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x28));
  std::vector<SalesObject,std::allocator<SalesObject>>::~vector
            ((vector<SalesObject,std::allocator<SalesObject>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* ServerSalesInfo::ServerSalesInfo(ServerSalesInfo const&) */

void __thiscall ServerSalesInfo::ServerSalesInfo(ServerSalesInfo *this,ServerSalesInfo *param_1)

{
  ServerSalesInfo SVar1;
  
  SVar1 = *param_1;
  this[1] = param_1[1];
  *this = SVar1;
  FUN_05475d88(this + 8,param_1 + 8);
  std::vector<SalesObject,std::allocator<SalesObject>>::vector
            ((vector<SalesObject,std::allocator<SalesObject>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::vector
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return;
}


/* ServerSalesInfo::TEMPNAMEPLACEHOLDERVALUE(ServerSalesInfo const&) */

ServerSalesInfo * __thiscall
ServerSalesInfo::operator=(ServerSalesInfo *this,ServerSalesInfo *param_1)

{
  ServerSalesInfo SVar1;
  
  SVar1 = *param_1;
  this[1] = param_1[1];
  *this = SVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  std::vector<SalesObject,std::allocator<SalesObject>>::operator=
            ((vector<SalesObject,std::allocator<SalesObject>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::operator=
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return this;
}

