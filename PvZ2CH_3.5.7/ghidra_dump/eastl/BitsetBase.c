// Class: eastl::BitsetBase<1ul,unsigned_long>


/* eastl::BitsetBase<1ul, unsigned long>::set(unsigned long, bool) */

void __thiscall
eastl::BitsetBase<1ul,unsigned_long>::set
          (BitsetBase<1ul,unsigned_long> *this,ulong param_1,bool param_2)

{
  if (!param_2) {
    *(ulong *)this = *(ulong *)this & (1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU);
    return;
  }
  *(ulong *)this = 1L << (param_1 & 0x3f) | *(ulong *)this;
  return;
}

