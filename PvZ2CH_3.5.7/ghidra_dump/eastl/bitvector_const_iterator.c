// Class: eastl::bitvector_const_iterator<unsigned_long>


/* eastl::bitvector_const_iterator<unsigned long>::TEMPNAMEPLACEHOLDERVALUE(long) */

bitvector_const_iterator<unsigned_long> * __thiscall
eastl::bitvector_const_iterator<unsigned_long>::operator+=
          (bitvector_const_iterator<unsigned_long> *this,long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + *(long *)(this + 8);
  if (-1 < (long)uVar1) {
    *(ulong *)(this + 8) = uVar1 & 0x3f;
    *(long *)this = *(long *)this + ((long)uVar1 >> 6) * 8;
    return this;
  }
  *(ulong *)(this + 8) = ~(0x3f - uVar1) & 0x3f;
  *(ulong *)this = *(long *)this + (0x3f - uVar1 >> 6) * -8;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::bitvector_const_iterator<unsigned long>::TEMPNAMEPLACEHOLDERVALUE(long) const */

void __thiscall
eastl::bitvector_const_iterator<unsigned_long>::operator+
          (bitvector_const_iterator<unsigned_long> *this,long param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_18 = *(undefined8 *)this;
  uStack_10 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  operator+=((bitvector_const_iterator<unsigned_long> *)&local_18,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* eastl::bitvector_const_iterator<unsigned long>::TEMPNAMEPLACEHOLDERVALUE() const */

uint __thiscall
eastl::bitvector_const_iterator<unsigned_long>::operator*
          (bitvector_const_iterator<unsigned_long> *this)

{
  return (uint)(**(ulong **)this >> (*(ulong *)(this + 8) & 0x3f)) & 1;
}

