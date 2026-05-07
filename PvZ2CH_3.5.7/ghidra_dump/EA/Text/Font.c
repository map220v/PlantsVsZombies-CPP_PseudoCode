// Class: EA::Text::Font


/* EA::Text::Font::AddRef() */

void __thiscall EA::Text::Font::AddRef(Font *this)

{
  Thread::AtomicInt<int>::operator++((AtomicInt<int> *)(this + 0x30));
  return;
}


/* EA::Text::Font::Release() */

int __thiscall EA::Text::Font::Release(Font *this)

{
  int iVar1;
  
  iVar1 = Thread::AtomicInt<int>::Decrement((AtomicInt<int> *)(this + 0x30));
  if ((iVar1 == 0) && (*(ICoreAllocator **)(this + 8) != (ICoreAllocator *)0x0)) {
    Allocator::detail::DeleteObject<EA::Text::Font>(*(ICoreAllocator **)(this + 8),this);
  }
  return iVar1;
}


/* EA::Text::Font::Font(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::Font::Font(Font *this,ICoreAllocator *param_1)

{
  *(undefined **)this = &DAT_06a38100;
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x20) = 0;
  eastl::bitset<64ul,unsigned_long>::bitset((bitset<64ul,unsigned_long> *)(this + 0x28));
  Thread::AtomicInt<int>::AtomicInt((AtomicInt<int> *)(this + 0x30),0);
  return;
}


/* EA::Text::Font::Font(EA::Text::Font const&) */

void __thiscall EA::Text::Font::Font(Font *this,Font *param_1)

{
  *(undefined **)this = &DAT_06a38100;
  eastl::bitset<64ul,unsigned_long>::bitset((bitset<64ul,unsigned_long> *)(this + 0x28));
  nop();
  return;
}


/* EA::Text::Font::SetupSupportedScriptSet() */

void __thiscall EA::Text::Font::SetupSupportedScriptSet(Font *this)

{
  bitset<64ul,unsigned_long> *this_00;
  char cVar1;
  
  this_00 = (bitset<64ul,unsigned_long> *)(this + 0x28);
  eastl::bitset<64ul,unsigned_long>::reset();
  eastl::bitset<64ul,unsigned_long>::set(this_00,0,true);
  cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x621,0xffffffff);
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x641,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x401,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,2,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x401,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x414,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x909,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0xc,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x909,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x92a,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x391,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0xe,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x391,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x3b8,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x70a7,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x12,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x70a7,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x7535,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0xffffc2b9,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x15,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0xffffc2b9,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0xffffc9d1,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x5d0,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x16,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x5d0,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x5e2,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x3061,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x18,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x3061,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x3078,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x30a4,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x19,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x30a4,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x30ee,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x41,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x1b,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x41,0xffffffff);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0x7a,0xffffffff), cVar1 == '\0')) {
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0xe01,0xffffffff);
  }
  else {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x1e,true);
    cVar1 = (**(code **)(*(long *)this + 0x88))(this,0xe01,0xffffffff);
  }
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(*(long *)this + 0x88))(this,0xe2c,0xffffffff), cVar1 != '\0')) {
    eastl::bitset<64ul,unsigned_long>::set(this_00,0x32,true);
    return;
  }
  return;
}

