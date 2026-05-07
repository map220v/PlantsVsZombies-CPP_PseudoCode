// Class: Sexy::FontLayer


/* Sexy::FontLayer::~FontLayer() */

void __thiscall Sexy::FontLayer::~FontLayer(FontLayer *this)

{
  std::string::~string((string *)(this + 0xf8));
  RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)(this + 0xe0));
  CharDataHashTable::~CharDataHashTable((CharDataHashTable *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  ::~map((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
          *)(this + 8));
  return;
}


/* Sexy::FontLayer::FontLayer(Sexy::FontLayer const&) */

void __thiscall Sexy::FontLayer::FontLayer(FontLayer *this,FontLayer *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  ::map((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
         *)(this + 8),(map *)(param_1 + 8));
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x58),
             (vector *)(param_1 + 0x58));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x70),(vector *)(param_1 + 0x70));
  CharDataHashTable::CharDataHashTable
            ((CharDataHashTable *)(this + 0x88),(CharDataHashTable *)(param_1 + 0x88));
  Insets::Insets((Insets *)(this + 0xc0),(Insets *)(param_1 + 0xc0));
  Insets::Insets((Insets *)(this + 0xd0),(Insets *)(param_1 + 0xd0));
  RtMixedPtr<Sexy::Image>::RtMixedPtr
            ((RtMixedPtr<Sexy::Image> *)(this + 0xe0),(RtMixedPtr *)(param_1 + 0xe0));
  this[0xf0] = param_1[0xf0];
  Set8BytesTo0(this + 0xf8);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  Point::Point((Point *)(this + 0x104),(TPoint *)(param_1 + 0x104));
  uVar1 = *(undefined4 *)(param_1 + 0x10c);
  uVar2 = *(undefined4 *)(param_1 + 0x110);
  uVar3 = *(undefined4 *)(param_1 + 0x114);
  uVar4 = *(undefined4 *)(param_1 + 0x118);
  uVar5 = *(undefined4 *)(param_1 + 0x11c);
  uVar6 = *(undefined4 *)(param_1 + 0x120);
  uVar7 = *(undefined4 *)(param_1 + 0x124);
  uVar8 = *(undefined4 *)(param_1 + 0x128);
  uVar9 = *(undefined4 *)(param_1 + 300);
  uVar10 = *(undefined4 *)(param_1 + 0x130);
  this[0x134] = param_1[0x134];
  *(undefined4 *)(this + 0x10c) = uVar1;
  *(undefined4 *)(this + 0x110) = uVar2;
  *(undefined4 *)(this + 0x114) = uVar3;
  *(undefined4 *)(this + 0x118) = uVar4;
  *(undefined4 *)(this + 0x11c) = uVar5;
  *(undefined4 *)(this + 0x120) = uVar6;
  *(undefined4 *)(this + 0x124) = uVar7;
  *(undefined4 *)(this + 0x128) = uVar8;
  *(undefined4 *)(this + 300) = uVar9;
  *(undefined4 *)(this + 0x130) = uVar10;
  return;
}


/* Sexy::FontLayer::GetCharData(wchar_t) */

void __thiscall Sexy::FontLayer::GetCharData(FontLayer *this,wchar_t param_1)

{
  CharDataHashTable::GetCharData((CharDataHashTable *)(this + 0x88),param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontLayer::FontLayer() */

void __thiscall Sexy::FontLayer::FontLayer(FontLayer *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  CharDataHashTable::CharDataHashTable((CharDataHashTable *)(this + 0x88));
  Color::Color((Color *)(this + 0xc0));
  Color::Color((Color *)(this + 0xd0));
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  Set8BytesTo0(this + 0xf8);
  Point::Point((Point *)(this + 0x104));
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0xc0) = local_18;
  *(undefined8 *)(this + 200) = uStack_10;
  Insets::Insets((Insets *)&local_18,0,0,0,0);
  *(undefined4 *)(this + 300) = 0;
  *(undefined8 *)(this + 0xd0) = local_18;
  *(undefined8 *)(this + 0xd8) = uStack_10;
  *(undefined4 *)(this + 0x130) = 0;
  this[0x134] = (FontLayer)0x1;
  this[0xf0] = (FontLayer)0x0;
  bVar1 = local_8 == ___stack_chk_guard;
  this[0x88] = ImageFont::mOrderedHash;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::FontLayer::FontLayer(Sexy::FontData*) */

void __thiscall Sexy::FontLayer::FontLayer(FontLayer *this,FontData *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  Set8BytesTo0(this + 0x38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  CharDataHashTable::CharDataHashTable((CharDataHashTable *)(this + 0x88));
  Color::Color((Color *)(this + 0xc0));
  Color::Color((Color *)(this + 0xd0));
  RtMixedPtr<Sexy::Image>::RtMixedPtr();
  Set8BytesTo0(this + 0xf8);
  Point::Point((Point *)(this + 0x104));
  *(FontData **)this = param_1;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0xc0) = local_18;
  *(undefined8 *)(this + 200) = uStack_10;
  Insets::Insets((Insets *)&local_18,0,0,0,0);
  *(undefined4 *)(this + 300) = 0;
  *(undefined8 *)(this + 0xd0) = local_18;
  *(undefined8 *)(this + 0xd8) = uStack_10;
  *(undefined4 *)(this + 0x130) = 0;
  this[0x134] = (FontLayer)0x1;
  this[0xf0] = (FontLayer)0x0;
  bVar1 = local_8 == ___stack_chk_guard;
  this[0x88] = ImageFont::mOrderedHash;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

