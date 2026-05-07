// Class: DiscountPlant


/* DiscountPlant::~DiscountPlant() */

void __thiscall DiscountPlant::~DiscountPlant(DiscountPlant *this)

{
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  return;
}


/* DiscountPlant::DiscountPlant() */

void __thiscall DiscountPlant::DiscountPlant(DiscountPlant *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x18));
  *(undefined4 *)this = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  this[0x10] = (DiscountPlant)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  std::string::append((string *)(this + 0x18),"",in_x2);
  return;
}


/* DiscountPlant::TEMPNAMEPLACEHOLDERVALUE(DiscountPlant const&) */

DiscountPlant * __thiscall DiscountPlant::operator=(DiscountPlant *this,DiscountPlant *param_1)

{
  DiscountPlant DVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  DVar1 = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = DVar1;
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}


/* DiscountPlant::DiscountPlant(DiscountPlant&&) */

void __thiscall DiscountPlant::DiscountPlant(DiscountPlant *this,DiscountPlant *param_1)

{
  DiscountPlant DVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  DVar1 = param_1[0x10];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x10] = DVar1;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

