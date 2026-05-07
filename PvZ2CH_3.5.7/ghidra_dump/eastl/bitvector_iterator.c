// Class: eastl::bitvector_iterator<unsigned_long>


/* eastl::bitvector_iterator<unsigned long>::TEMPNAMEPLACEHOLDERVALUE() const */

undefined1  [16] __thiscall
eastl::bitvector_iterator<unsigned_long>::operator*(bitvector_iterator<unsigned_long> *this)

{
  return *(undefined1 (*) [16])this;
}


/* eastl::bitvector_iterator<unsigned long>::TEMPNAMEPLACEHOLDERVALUE(long) */

bitvector_iterator<unsigned_long> * __thiscall
eastl::bitvector_iterator<unsigned_long>::operator+=
          (bitvector_iterator<unsigned_long> *this,long param_1)

{
  bitvector_const_iterator<unsigned_long>::operator+=
            ((bitvector_const_iterator<unsigned_long> *)this,param_1);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::bitvector_iterator<unsigned long>::TEMPNAMEPLACEHOLDERVALUE(long) const */

void __thiscall
eastl::bitvector_iterator<unsigned_long>::operator+
          (bitvector_iterator<unsigned_long> *this,long param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_18 = *(undefined8 *)this;
  uStack_10 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  operator+=((bitvector_iterator<unsigned_long> *)&local_18,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* eastl::bitvector_iterator<unsigned long>::bitvector_iterator(unsigned long*, unsigned long) */

void __thiscall
eastl::bitvector_iterator<unsigned_long>::bitvector_iterator
          (bitvector_iterator<unsigned_long> *this,ulong *param_1,ulong param_2)

{
  *(ulong **)this = param_1;
  *(ulong *)(this + 8) = param_2;
  return;
}

