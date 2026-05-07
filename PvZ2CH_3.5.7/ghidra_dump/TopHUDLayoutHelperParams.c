// Class: TopHUDLayoutHelperParams


/* TopHUDLayoutHelperParams::TopHUDLayoutHelperParams() */

void __thiscall TopHUDLayoutHelperParams::TopHUDLayoutHelperParams(TopHUDLayoutHelperParams *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  this[0x30] = (TopHUDLayoutHelperParams)0x0;
  this[0x31] = (TopHUDLayoutHelperParams)0x0;
  Set8BytesTo0(this + 0x38);
  return;
}


/* TopHUDLayoutHelperParams::~TopHUDLayoutHelperParams() */

void __thiscall TopHUDLayoutHelperParams::~TopHUDLayoutHelperParams(TopHUDLayoutHelperParams *this)

{
  std::string::~string((string *)(this + 0x38));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}

