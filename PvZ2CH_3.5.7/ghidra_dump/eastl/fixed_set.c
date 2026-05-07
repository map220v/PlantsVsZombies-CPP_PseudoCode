// Class: eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>


/* eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>, 8ul, true,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::allocator>::~fixed_set() */

void __thiscall
eastl::
fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
::~fixed_set(fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
             *this)

{
  rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
  ::DoNukeSubtree((rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
                   *)this,*(rbtree_node **)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>, 8ul, true,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::allocator>::fixed_set() */

void __thiscall
eastl::
fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
::fixed_set(fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
            *this)

{
  fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>::fixed_node_allocator
            (afStack_38,(void *)0x0);
  set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
  ::set((fixed_node_allocator *)this);
  fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>::reset
            ((fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator> *)(this + 0x30),
             this + 0x60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>, 8ul, true,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >,
   eastl::allocator>::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,
   8ul, true, eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::allocator> const&) */

fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
* __thiscall
eastl::
fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
::operator=(fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
            *this,fixed_set *param_1)

{
  set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
  ::operator=((set<EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>>
               *)this,(set *)param_1);
  return this;
}

