// Class: Sexy::PopAnimDef


/* Sexy::PopAnimDef::PopAnimDef() */

void __thiscall Sexy::PopAnimDef::PopAnimDef(PopAnimDef *this)

{
  *(undefined8 *)this = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0(this + 0x58);
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  this[0x68] = (PopAnimDef)0x0;
  return;
}


/* Sexy::PopAnimDef::~PopAnimDef() */

void __thiscall Sexy::PopAnimDef::~PopAnimDef(PopAnimDef *this)

{
  PASpriteDef *this_00;
  
  this_00 = *(PASpriteDef **)this;
  if (this_00 != (PASpriteDef *)0x0) {
    PASpriteDef::~PASpriteDef(this_00);
    AK::FreeHook(this_00);
  }
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::vector<Sexy::PAImage,std::allocator<Sexy::PAImage>>::~vector
            ((vector<Sexy::PAImage,std::allocator<Sexy::PAImage>> *)(this + 0x38));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>>::~vector
            ((vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>> *)(this + 8));
  return;
}

