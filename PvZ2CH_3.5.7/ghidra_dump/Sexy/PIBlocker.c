// Class: Sexy::PIBlocker


/* Sexy::PIBlocker::PIBlocker() */

void __thiscall Sexy::PIBlocker::PIBlocker(PIBlocker *this)

{
  Set8BytesTo0();
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x10));
  PIValue::PIValue((PIValue *)(this + 0x70));
  PIValue::PIValue((PIValue *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  return;
}


/* Sexy::PIBlocker::~PIBlocker() */

void __thiscall Sexy::PIBlocker::~PIBlocker(PIBlocker *this)

{
  std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::~vector
            ((vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)(this + 0x150));
  PIValue::~PIValue((PIValue *)(this + 0xe0));
  PIValue::~PIValue((PIValue *)(this + 0x70));
  PIValue2D::~PIValue2D((PIValue2D *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* Sexy::PIBlocker::PIBlocker(Sexy::PIBlocker const&) */

void __thiscall Sexy::PIBlocker::PIBlocker(PIBlocker *this,PIBlocker *param_1)

{
  FUN_05475d88();
  this[8] = param_1[8];
  PIValue2D::PIValue2D((PIValue2D *)(this + 0x10),(PIValue2D *)(param_1 + 0x10));
  PIValue::PIValue((PIValue *)(this + 0x70),(PIValue *)(param_1 + 0x70));
  PIValue::PIValue((PIValue *)(this + 0xe0),(PIValue *)(param_1 + 0xe0));
  std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>::vector
            ((vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>> *)(this + 0x150),
             (vector *)(param_1 + 0x150));
  return;
}

