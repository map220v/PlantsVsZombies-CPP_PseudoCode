// Class: eastl::set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>


/* eastl::set<EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator> >::~set() */

void __thiscall
eastl::
set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
::~set(set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
       *this)

{
  rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
  ::DoNukeSubtree((rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
                   *)this,*(rbtree_node **)(this + 0x18));
  return;
}


/* eastl::set<EA::Text::Rectangle, eastl::less<EA::Text::Rectangle>,
   eastl::fixed_node_allocator<48ul, 4ul, 4ul, 0ul, true, eastl::allocator>
   >::erase(eastl::rbtree_iterator<EA::Text::Rectangle, EA::Text::Rectangle const*,
   EA::Text::Rectangle const&>) */

void eastl::
     set<EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>>
     ::erase(void)

{
  rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
  ::erase();
  return;
}


/* eastl::set<EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator> >::set(eastl::fixed_node_allocator<40ul, 8ul, 8ul, 0ul, true,
   eastl::allocator> const&) */

void eastl::
     set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
     ::set(fixed_node_allocator *param_1)

{
  fixed_node_allocator *in_x1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = (fixed_node_allocator)0x0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>::fixed_node_allocator
            ((fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator> *)(param_1 + 0x30),in_x1)
  ;
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::reset_lose_memory((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                       *)param_1);
  return;
}


/* eastl::set<EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::set<EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator> > const&) */

set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
* __thiscall
eastl::
set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
::operator=(set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
            *this,set *param_1)

{
  rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
  ::operator=((rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
               *)this,(rbtree *)param_1);
  return this;
}

