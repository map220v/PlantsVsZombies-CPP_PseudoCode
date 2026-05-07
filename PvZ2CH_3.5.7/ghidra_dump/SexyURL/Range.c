// Class: SexyURL::Range


/* SexyURL::Range::clear() */

void __thiscall SexyURL::Range::clear(Range_conflict *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* SexyURL::Range::length() const */

long __thiscall SexyURL::Range::length(Range_conflict *this)

{
  return *(long *)(this + 8) - *(long *)this;
}


/* SexyURL::Range::empty() const */

bool __thiscall SexyURL::Range::empty(Range_conflict *this)

{
  return *(ulong *)(this + 8) <= *(ulong *)this;
}

