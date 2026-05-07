// Class: BoostValue


/* BoostValue::BoostValue() */

void __thiscall BoostValue::BoostValue(BoostValue *this)

{
  *(undefined4 *)this = 7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  return;
}


/* BoostValue::~BoostValue() */

void __thiscall BoostValue::~BoostValue(BoostValue *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 8));
  return;
}


/* BoostValue::BoostValue(BoostValue const&) */

void __thiscall BoostValue::BoostValue(BoostValue *this,BoostValue *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}

