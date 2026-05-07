// Class: Sexy::PIDeflector


/* Sexy::PIDeflector::PIDeflector() */

void __thiscall Sexy::PIDeflector::PIDeflector(PIDeflector *this)

{
  Set8BytesTo0();
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x18));
  PIValue::PIValue((PIValue *)(this + 0x78));
  PIValue::PIValue((PIValue *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  return;
}


/* Sexy::PIDeflector::~PIDeflector() */

void __thiscall Sexy::PIDeflector::~PIDeflector(PIDeflector *this)

{
  std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::~vector
            ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)(this + 0x170));
  std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::~vector
            ((vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)(this + 0x158));
  PIValue::~PIValue((PIValue *)(this + 0xe8));
  PIValue::~PIValue((PIValue *)(this + 0x78));
  PIValue2D::~PIValue2D((PIValue2D *)(this + 0x18));
  std::string::~string((string *)this);
  return;
}


/* Sexy::PIDeflector::PIDeflector(Sexy::PIDeflector const&) */

void __thiscall Sexy::PIDeflector::PIDeflector(PIDeflector *this,PIDeflector *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x18),(PIValue2D *)(param_1 + 0x18));
  PIValue::PIValue((PIValue *)(this + 0x78),(PIValue *)(param_1 + 0x78));
  PIValue::PIValue((PIValue *)(this + 0xe8),(PIValue *)(param_1 + 0xe8));
  std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::vector
            ((vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)(this + 0x158),
             (vector *)(param_1 + 0x158));
  std::vector<Sexy::FPoint,std::allocator<Sexy::FPoint>>::vector
            ((vector<Sexy::FPoint,std::allocator<Sexy::FPoint>> *)(this + 0x170),
             (vector *)(param_1 + 0x170));
  return;
}

