// Class: EA::Text::TextureIterator


/* EA::Text::TextureIterator::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall EA::Text::TextureIterator::operator++(TextureIterator *this)

{
  *(long *)this = *(long *)this + *(long *)(this + 8);
  return;
}


/* EA::Text::TextureIterator::Offset(int, int) */

void __thiscall EA::Text::TextureIterator::Offset(TextureIterator *this,int param_1,int param_2)

{
  *(long *)this = *(long *)this + (long)param_1 + (long)param_2 * *(long *)(this + 8);
  return;
}

