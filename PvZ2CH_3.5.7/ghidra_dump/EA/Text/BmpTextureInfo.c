// Class: EA::Text::BmpTextureInfo


/* EA::Text::BmpTextureInfo::~BmpTextureInfo() */

void __thiscall EA::Text::BmpTextureInfo::~BmpTextureInfo(BmpTextureInfo *this)

{
  *(undefined ***)this = &PTR__BmpTextureInfo_06a37d60;
  eastl::fixed_string<char16_t,129,true,eastl::allocator>::~fixed_string
            ((fixed_string<char16_t,129,true,eastl::allocator> *)(this + 0x150));
  TextureInfo::~TextureInfo((TextureInfo *)this);
  return;
}


/* EA::Text::BmpTextureInfo::~BmpTextureInfo() */

void __thiscall EA::Text::BmpTextureInfo::~BmpTextureInfo(BmpTextureInfo *this)

{
  ~BmpTextureInfo(this);
  AK::FreeHook(this);
  return;
}


/* EA::Text::BmpTextureInfo::BmpTextureInfo() */

void __thiscall EA::Text::BmpTextureInfo::BmpTextureInfo(BmpTextureInfo *this)

{
  undefined8 uVar1;
  
  TextureInfo::TextureInfo((TextureInfo *)this);
  *(undefined ***)this = &PTR__BmpTextureInfo_06a37d60;
  eastl::fixed_string<char16_t,129,true,eastl::allocator>::fixed_string
            ((fixed_string<char16_t,129,true,eastl::allocator> *)(this + 0x150));
  *(undefined4 *)(this + 0x280) = 0;
  uVar1 = FUN_0540eca8(*(undefined8 *)(this + 0x150));
  this[0x13d] = (BmpTextureInfo)0x0;
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}

