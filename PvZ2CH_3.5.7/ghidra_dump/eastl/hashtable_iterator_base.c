// Class: eastl::hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>


/* eastl::hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>,
   false>::hashtable_iterator_base(eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo
   const, EA::Text::GlyphTextureInfo>, false>*,
   eastl::hash_node<eastl::pair<EA::Text::GlyphCache::GlyphInfo const, EA::Text::GlyphTextureInfo>,
   false>**) */

void __thiscall
eastl::
hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
::hashtable_iterator_base
          (hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
           *this,hash_node *param_1,hash_node **param_2)

{
  *(hash_node **)this = param_1;
  *(hash_node ***)(this + 8) = param_2;
  return;
}


/* eastl::hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false>::increment_bucket() */

void __thiscall
eastl::
hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
::increment_bucket(hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
                   *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar1 + 8;
  lVar3 = *(long *)(lVar1 + 8);
  if (lVar3 == 0) {
    plVar2 = (long *)(lVar1 + 0x10);
    do {
      *(long **)(this + 8) = plVar2;
      lVar3 = *plVar2;
      plVar2 = plVar2 + 1;
    } while (lVar3 == 0);
  }
  *(long *)this = lVar3;
  return;
}


/* eastl::hashtable_iterator_base<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, false>::increment() */

void __thiscall
eastl::
hashtable_iterator_base<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
::increment(hashtable_iterator_base<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
            *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)this + 0x7c0);
  *(long *)this = lVar1;
  if (lVar1 == 0) {
    plVar2 = *(long **)(this + 8);
    do {
      plVar2 = plVar2 + 1;
      *(long **)(this + 8) = plVar2;
      lVar1 = *plVar2;
      *(long *)this = lVar1;
    } while (lVar1 == 0);
  }
  return;
}


/* eastl::hashtable_iterator_base<eastl::pair<unsigned int const,
   EA::Text::StyleManager::TextStyleEx*>, false>::increment() */

void __thiscall
eastl::
hashtable_iterator_base<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,false>
::increment(hashtable_iterator_base<eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>,false>
            *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)this + 0x10);
  *(long *)this = lVar1;
  if (lVar1 == 0) {
    plVar2 = *(long **)(this + 8);
    do {
      plVar2 = plVar2 + 1;
      *(long **)(this + 8) = plVar2;
      lVar1 = *plVar2;
      *(long *)this = lVar1;
    } while (lVar1 == 0);
  }
  return;
}


/* eastl::hashtable_iterator_base<eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>,
   false>::increment() */

void __thiscall
eastl::hashtable_iterator_base<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,false>::
increment(hashtable_iterator_base<eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>,false>
          *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)this + 0x20);
  *(long *)this = lVar1;
  if (lVar1 == 0) {
    plVar2 = *(long **)(this + 8);
    do {
      plVar2 = plVar2 + 1;
      *(long **)(this + 8) = plVar2;
      lVar1 = *plVar2;
      *(long *)this = lVar1;
    } while (lVar1 == 0);
  }
  return;
}


/* eastl::hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false>::increment() */

void __thiscall
eastl::
hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
::increment(hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
            *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)this + 0x28);
  *(long *)this = lVar1;
  if (lVar1 == 0) {
    plVar2 = *(long **)(this + 8);
    do {
      plVar2 = plVar2 + 1;
      *(long **)(this + 8) = plVar2;
      lVar1 = *plVar2;
      *(long *)this = lVar1;
    } while (lVar1 == 0);
  }
  return;
}

