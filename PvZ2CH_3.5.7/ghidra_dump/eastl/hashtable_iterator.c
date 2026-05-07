// Class: eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>


/* eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false,
   false>::hashtable_iterator(eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false>*,
   eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>,
   false>**) */

void __thiscall
eastl::
hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
::hashtable_iterator
          (hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
           *this,hash_node *param_1,hash_node **param_2)

{
  *(hash_node **)this = param_1;
  *(hash_node ***)(this + 8) = param_2;
  return;
}


/* eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false,
   false>::hashtable_iterator(eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false>**) */

void __thiscall
eastl::
hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
::hashtable_iterator
          (hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
           *this,hash_node **param_1)

{
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base
            ((hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
              *)this,*param_1,param_1);
  return;
}


/* eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false,
   false>::hashtable_iterator(eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>, false, false> const&) */

void __thiscall
eastl::
hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
::hashtable_iterator
          (hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
           *this,hashtable_iterator *param_1)

{
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base
            ((hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
              *)this,*(hash_node **)param_1,*(hash_node ***)(param_1 + 8));
  return;
}


/* eastl::hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, true, false>::TEMPNAMEPLACEHOLDERVALUE() */

hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
* __thiscall
eastl::
hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
::operator++(hashtable_iterator<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,true,false>
             *this)

{
  hashtable_iterator_base<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
  ::increment((hashtable_iterator_base<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
               *)this);
  return this;
}


/* eastl::hashtable_iterator<eastl::pair<unsigned int const, EA::Text::StyleManager::TextStyleEx*>,
   true, false>::TEMPNAMEPLACEHOLDERVALUE() */

hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
* __thiscall
eastl::
hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
::operator++(hashtable_iterator<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,true,false>
             *this)

{
  hashtable_iterator_base<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,false>
  ::increment((hashtable_iterator_base<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,false>
               *)this);
  return this;
}


/* eastl::hashtable_iterator<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>, true,
   false>::TEMPNAMEPLACEHOLDERVALUE() */

hashtable_iterator<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,true,false> *
__thiscall
eastl::hashtable_iterator<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,true,false>::
operator++(hashtable_iterator<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,true,false>
           *this)

{
  hashtable_iterator_base<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,false>::
  increment((hashtable_iterator_base<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,false>
             *)this);
  return this;
}


/* eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false, false>::TEMPNAMEPLACEHOLDERVALUE() */

hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
* __thiscall
eastl::
hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
::operator++(hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
             *this)

{
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::increment((hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
               *)this);
  return this;
}

