// Class: eastl::bitset<64ul,unsigned_long>


/* eastl::bitset<64ul, unsigned long>::bitset() */

void __thiscall eastl::bitset<64ul,unsigned_long>::bitset(bitset<64ul,unsigned_long> *this)

{
  *(undefined8 *)this = 0;
  return;
}


/* eastl::bitset<64ul, unsigned long>::test(unsigned long) const */

uint __thiscall
eastl::bitset<64ul,unsigned_long>::test(bitset<64ul,unsigned_long> *this,ulong param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x40) {
    uVar1 = FUN_05368694();
    return (uint)(uVar1 >> (param_1 & 0x3f)) & 1;
  }
  return 0;
}


/* eastl::bitset<64ul, unsigned long>::reset() */

void eastl::bitset<64ul,unsigned_long>::reset(void)

{
  exception_ptr *in_x0;
  _func_void *in_x1;
  
  std::__exception_ptr::exception_ptr::exception_ptr(in_x0,in_x1);
  return;
}


/* eastl::bitset<64ul, unsigned long>::set(unsigned long, bool) */

bitset<64ul,unsigned_long> * __thiscall
eastl::bitset<64ul,unsigned_long>::set(bitset<64ul,unsigned_long> *this,ulong param_1,bool param_2)

{
  if (param_1 < 0x40) {
    BitsetBase<1ul,unsigned_long>::set((BitsetBase<1ul,unsigned_long> *)this,param_1,param_2);
  }
  return this;
}

