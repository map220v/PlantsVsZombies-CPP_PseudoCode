// Class: EA::Text::LayoutSettings


/* EA::Text::LayoutSettings::~LayoutSettings() */

void __thiscall EA::Text::LayoutSettings::~LayoutSettings(LayoutSettings *this)

{
  eastl::
  fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
  ::~fixed_set((fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
                *)(this + 0x18));
  return;
}


/* EA::Text::LayoutSettings::LayoutSettings() */

void __thiscall EA::Text::LayoutSettings::LayoutSettings(LayoutSettings *this)

{
  *(undefined4 *)(this + 0xc) = 0x1e;
  *(undefined4 *)(this + 0x10) = 0;
  eastl::
  fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
  ::fixed_set((fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
               *)(this + 0x18));
  this[0x1e0] = (LayoutSettings)0x1;
  TextStyle::TextStyle((TextStyle *)(this + 0x1e4));
  this[0x4a0] = (LayoutSettings)0x0;
  this[0x4a1] = (LayoutSettings)0x1;
  this[0x4a8] = (LayoutSettings)0x0;
  this[0x4a9] = (LayoutSettings)0x0;
  this[0x4aa] = (LayoutSettings)0x0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x4a4) = 0x3f800000;
  return;
}


/* EA::Text::LayoutSettings::TEMPNAMEPLACEHOLDERVALUE(EA::Text::LayoutSettings const&) */

LayoutSettings * __thiscall
EA::Text::LayoutSettings::operator=(LayoutSettings *this,LayoutSettings *param_1)

{
  undefined4 uVar1;
  LayoutSettings LVar2;
  LayoutSettings LVar3;
  LayoutSettings LVar4;
  LayoutSettings LVar5;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = uVar1;
  eastl::
  fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
  ::operator=((fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
               *)(this + 0x18),(fixed_set *)(param_1 + 0x18));
  this[0x1e0] = param_1[0x1e0];
  TextStyle::operator=((TextStyle *)(this + 0x1e4),(TextStyle *)(param_1 + 0x1e4));
  uVar1 = *(undefined4 *)(param_1 + 0x4a4);
  LVar2 = param_1[0x4a0];
  LVar3 = param_1[0x4a1];
  LVar4 = param_1[0x4a8];
  LVar5 = param_1[0x4a9];
  this[0x4aa] = param_1[0x4aa];
  this[0x4a0] = LVar2;
  this[0x4a1] = LVar3;
  this[0x4a8] = LVar4;
  this[0x4a9] = LVar5;
  *(undefined4 *)(this + 0x4a4) = uVar1;
  return this;
}


/* EA::Text::LayoutSettings::LayoutSettings(EA::Text::LayoutSettings const&) */

void __thiscall
EA::Text::LayoutSettings::LayoutSettings(LayoutSettings *this,LayoutSettings *param_1)

{
  eastl::
  fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
  ::fixed_set((fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
               *)(this + 0x18));
  TextStyle::TextStyle((TextStyle *)(this + 0x1e4));
  operator=(this,param_1);
  return;
}

