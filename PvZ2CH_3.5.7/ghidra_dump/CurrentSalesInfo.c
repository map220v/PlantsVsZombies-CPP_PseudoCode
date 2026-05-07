// Class: CurrentSalesInfo


/* CurrentSalesInfo::~CurrentSalesInfo() */

void __thiscall CurrentSalesInfo::~CurrentSalesInfo(CurrentSalesInfo *this)

{
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::~vector
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* CurrentSalesInfo::CurrentSalesInfo() */

void __thiscall CurrentSalesInfo::CurrentSalesInfo(CurrentSalesInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *this = (CurrentSalesInfo)0x0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  this[1] = (CurrentSalesInfo)0x0;
  *(undefined4 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::clear
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x18));
  return;
}


/* CurrentSalesInfo::CurrentSalesInfo(CurrentSalesInfo const&) */

void __thiscall CurrentSalesInfo::CurrentSalesInfo(CurrentSalesInfo *this,CurrentSalesInfo *param_1)

{
  undefined4 uVar1;
  CurrentSalesInfo CVar2;
  CurrentSalesInfo CVar3;
  
  CVar2 = *param_1;
  CVar3 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *this = CVar2;
  this[1] = CVar3;
  *(undefined4 *)(this + 4) = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::vector
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}


/* CurrentSalesInfo::TEMPNAMEPLACEHOLDERVALUE(CurrentSalesInfo const&) */

CurrentSalesInfo * __thiscall
CurrentSalesInfo::operator=(CurrentSalesInfo *this,CurrentSalesInfo *param_1)

{
  undefined4 uVar1;
  CurrentSalesInfo CVar2;
  CurrentSalesInfo CVar3;
  
  CVar2 = *param_1;
  CVar3 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *this = CVar2;
  this[1] = CVar3;
  *(undefined4 *)(this + 4) = uVar1;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  std::vector<SalesPriceList,std::allocator<SalesPriceList>>::operator=
            ((vector<SalesPriceList,std::allocator<SalesPriceList>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}

