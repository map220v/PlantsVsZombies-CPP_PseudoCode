// Class: eastl::bitvector_reference<unsigned_long>


/* eastl::bitvector_reference<unsigned long>::TEMPNAMEPLACEHOLDERVALUE(bool) */

void __thiscall
eastl::bitvector_reference<unsigned_long>::operator=
          (bitvector_reference<unsigned_long> *this,bool param_1)

{
  ulong uVar1;
  
  uVar1 = 1L << (*(ulong *)(this + 8) & 0x3f);
  if (!param_1) {
    **(ulong **)this = **(ulong **)this & (uVar1 ^ 0xffffffffffffffff);
    return;
  }
  **(ulong **)this = **(ulong **)this | uVar1;
  return;
}


/* eastl::bitvector_reference<unsigned long>::operator bool() const */

bool __thiscall eastl::bitvector_reference::operator_cast_to_bool(bitvector_reference *this)

{
  return (bool)((byte)(**(ulong **)this >> (*(ulong *)(this + 8) & 0x3f)) & 1);
}

