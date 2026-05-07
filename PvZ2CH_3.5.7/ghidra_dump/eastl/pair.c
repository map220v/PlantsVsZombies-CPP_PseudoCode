// Class: eastl::pair<eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>,bool>


/* eastl::pair<eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false, false>,
   bool>::pair(eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>, false, false> const&, bool const&) */

void __thiscall
eastl::
pair<eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>,bool>
::pair(pair<eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>,bool>
       *this,hashtable_iterator *param_1,bool *param_2)

{
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)this,param_1);
  this[0x10] = (pair<eastl::hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>,bool>
                )*param_2;
  return;
}


/* eastl::pair<std::string const, unsigned int>::pair(std::string const&) */

void eastl::pair<std::string_const,unsigned_int>::pair(string *param_1)

{
  FUN_05475d88();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* eastl::pair<std::wstring const, unsigned int>::pair(std::wstring const&) */

void eastl::pair<std::wstring_const,unsigned_int>::pair(wstring *param_1)

{
  FUN_05477b24();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* eastl::pair<bool, unsigned int>::pair(bool const&, unsigned int const&) */

void __thiscall
eastl::pair<bool,unsigned_int>::pair(pair<bool,unsigned_int> *this,bool *param_1,uint *param_2)

{
  pair<bool,unsigned_int> pVar1;
  
  pVar1 = (pair<bool,unsigned_int>)*param_1;
  *(uint *)(this + 4) = *param_2;
  *this = pVar1;
  return;
}


/* eastl::pair<eastl::hashtable_iterator<char16_t, true, false>,
   bool>::pair(eastl::hashtable_iterator<char16_t, true, false> const&, bool const&) */

void __thiscall
eastl::pair<eastl::hashtable_iterator<char16_t,true,false>,bool>::pair
          (pair<eastl::hashtable_iterator<char16_t,true,false>,bool> *this,
          hashtable_iterator *param_1,bool *param_2)

{
  undefined8 uVar1;
  pair<eastl::hashtable_iterator<char16_t,true,false>,bool> pVar2;
  
  pVar2 = (pair<eastl::hashtable_iterator<char16_t,true,false>,bool>)*param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x10] = pVar2;
  return;
}


/* eastl::pair<eastl::rbtree_iterator<EA::Text::Rectangle, EA::Text::Rectangle const*,
   EA::Text::Rectangle const&>, bool>::pair(eastl::rbtree_iterator<EA::Text::Rectangle,
   EA::Text::Rectangle const*, EA::Text::Rectangle const&> const&, bool const&) */

void __thiscall
eastl::
pair<eastl::rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>,bool>
::pair(pair<eastl::rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>,bool>
       *this,rbtree_iterator *param_1,bool *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  this[8] = (pair<eastl::rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>,bool>
             )*param_2;
  *(undefined8 *)this = uVar1;
  return;
}


/* eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >::~pair() */

void __thiscall
eastl::
pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~pair(pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        *this)

{
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x28));
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)this);
  return;
}


/* eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>::~pair() */

void __thiscall
eastl::
pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
::~pair(pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
        *this)

{
  EA::Text::FontServer::Face::~Face((Face *)(this + 0x28));
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)this);
  return;
}


/* eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >::pair(eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > const&) */

void __thiscall
eastl::
pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::pair(pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
       *this,basic_string *param_1,basic_string *param_2)

{
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,param_1);
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x28),param_2);
  return;
}


/* eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >::pair(eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > const&) */

void __thiscall
eastl::
pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::pair(pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
       *this,pair *param_1)

{
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,(basic_string *)param_1);
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x28),(basic_string *)(param_1 + 0x28));
  return;
}


/* eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>::pair(eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&,
   EA::Text::FontServer::Face const&) */

void __thiscall
eastl::
pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
::pair(pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
       *this,basic_string *param_1,Face *param_2)

{
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,param_1);
  EA::Text::FontServer::Face::Face((Face *)(this + 0x28),param_2);
  return;
}


/* eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>::pair(eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> const&) */

void __thiscall
eastl::
pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
::pair(pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>
       *this,pair *param_1)

{
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,(basic_string *)param_1);
  EA::Text::FontServer::Face::Face((Face *)(this + 0x28),(Face *)(param_1 + 0x28));
  return;
}


/* eastl::pair<unsigned short const, EA::Text::GlyphMetrics>::pair(unsigned short const&,
   EA::Text::GlyphMetrics const&) */

void __thiscall
eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
          (pair<unsigned_short_const,EA::Text::GlyphMetrics> *this,ushort *param_1,
          GlyphMetrics *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(ushort *)this = *param_1;
  *(undefined8 *)(this + 4) = uVar1;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x10);
  return;
}


/* eastl::pair<unsigned short const, EA::Text::GlyphMetrics>::pair(unsigned short const&) */

void __thiscall
eastl::pair<unsigned_short_const,EA::Text::GlyphMetrics>::pair
          (pair<unsigned_short_const,EA::Text::GlyphMetrics> *this,ushort *param_1)

{
  *(ushort *)this = *param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* eastl::pair<unsigned short, unsigned short>::pair(unsigned short const&, unsigned short const&)
    */

void __thiscall
eastl::pair<unsigned_short,unsigned_short>::pair
          (pair<unsigned_short,unsigned_short> *this,ushort *param_1,ushort *param_2)

{
  *(ushort *)this = *param_1;
  *(ushort *)(this + 2) = *param_2;
  return;
}


/* eastl::pair<eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>*, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>&>, bool>::pair(eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned short,
   unsigned short> const, EA::Text::Kerning>, eastl::pair<eastl::pair<unsigned short, unsigned
   short> const, EA::Text::Kerning>*, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>&> const&, bool const&) */

void __thiscall
eastl::
pair<eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>,bool>
::pair(pair<eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>,bool>
       *this,rbtree_iterator *param_1,bool *param_2)

{
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)this,(TextureInfo ***)param_1);
  this[8] = (pair<eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>,bool>
             )*param_2;
  return;
}


/* eastl::pair<unsigned short const, EA::Text::PolygonGlyphPtr>::pair(unsigned short const&) */

void __thiscall
eastl::pair<unsigned_short_const,EA::Text::PolygonGlyphPtr>::pair
          (pair<unsigned_short_const,EA::Text::PolygonGlyphPtr> *this,ushort *param_1)

{
  *(ushort *)this = *param_1;
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* eastl::pair<unsigned int const, EA::Text::StyleManager::TextStyleEx*>::pair(unsigned int const&,
   EA::Text::StyleManager::TextStyleEx* const&) */

void __thiscall
eastl::pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*>::pair
          (pair<unsigned_int_const,EA::Text::StyleManager::TextStyleEx*> *this,uint *param_1,
          TextStyleEx **param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *(TextStyleEx **)(this + 8) = *param_2;
  *(uint *)this = uVar1;
  return;
}


/* eastl::pair<unsigned short const, EA::Text::BmpGlyphMetrics>::pair(unsigned short const&,
   EA::Text::BmpGlyphMetrics const&) */

void __thiscall
eastl::pair<unsigned_short_const,EA::Text::BmpGlyphMetrics>::pair
          (pair<unsigned_short_const,EA::Text::BmpGlyphMetrics> *this,ushort *param_1,
          BmpGlyphMetrics *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(ushort *)this = *param_1;
  *(undefined8 *)(this + 4) = uVar1;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_2 + 0x10);
  return;
}


/* eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>::pair(eastl::pair<unsigned short, unsigned short> const&, EA::Text::Kerning
   const&) */

void __thiscall
eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>::pair
          (pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning> *this,
          pair *param_1,Kerning *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 4) = *(undefined8 *)param_2;
  *(undefined4 *)this = uVar1;
  return;
}


/* eastl::pair<EA::Text::GlyphCache::GlyphInfo const,
   EA::Text::GlyphTextureInfo>::pair(EA::Text::GlyphCache::GlyphInfo const&) */

void __thiscall
eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>::pair
          (pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo> *this,
          GlyphInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}

