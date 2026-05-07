// Class: eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>


/* eastl::generic_iterator<EA::Text::GlyphInfo const*, void>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
          (generic_iterator<EA::Text::GlyphInfo_const*,void> *this)

{
  *(long *)this = *(long *)this + 4;
  return;
}


/* eastl::generic_iterator<EA::Text::BmpTextureInfo**, void>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
          (generic_iterator<EA::Text::BmpTextureInfo**,void> *this)

{
  *(long *)this = *(long *)this + 8;
  return;
}


/* eastl::generic_iterator<EA::Text::TextureInfo**, void>::generic_iterator(EA::Text::TextureInfo**
   const&) */

void __thiscall
eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
          (generic_iterator<EA::Text::TextureInfo**,void> *this,TextureInfo ***param_1)

{
  *(TextureInfo ***)this = *param_1;
  return;
}


/* eastl::generic_iterator<EA::Text::Typesetter::Item*, void>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
          (generic_iterator<EA::Text::Typesetter::Item*,void> *this)

{
  *(long *)this = *(long *)this + 0x40;
  return;
}


/* eastl::generic_iterator<EA::Text::FeatureLookup*, void>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
          (generic_iterator<EA::Text::FeatureLookup*,void> *this)

{
  *(long *)this = *(long *)this + 0xb0;
  return;
}


/* eastl::generic_iterator<unsigned short*, void>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
eastl::generic_iterator<unsigned_short*,void>::operator++
          (generic_iterator<unsigned_short*,void> *this)

{
  *(long *)this = *(long *)this + 2;
  return;
}

