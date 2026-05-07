// Class: eastl::map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::map<eastl::pair<unsigned short, unsigned short>, EA::Text::Kerning,
   eastl::less<eastl::pair<unsigned short, unsigned short> >,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::map(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::map(map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      *this,CoreAllocatorAdapter *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                )0x0;
  *(undefined8 *)(this + 0x28) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x30),(EAIOEASTLCoreAllocator *)param_1);
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::reset_lose_memory((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                       *)this);
  return;
}


/* eastl::map<char16_t, unsigned short, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~map() */

void __thiscall
eastl::
map<char16_t,unsigned_short,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~map(map<char16_t,unsigned_short,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this)

{
  rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
  ::DoNukeSubtree((rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
                   *)this,*(rbtree_node **)(this + 0x18));
  return;
}


/* eastl::map<eastl::pair<unsigned short, unsigned short>, EA::Text::Kerning,
   eastl::less<eastl::pair<unsigned short, unsigned short> >,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~map() */

void __thiscall
eastl::
map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~map(map<eastl::pair<unsigned_short,unsigned_short>,EA::Text::Kerning,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this)

{
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::DoNukeSubtree((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                   *)this,*(rbtree_node **)(this + 0x18));
  return;
}

