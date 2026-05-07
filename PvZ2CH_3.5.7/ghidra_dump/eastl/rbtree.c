// Class: eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::DoAllocateNode() */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::DoAllocateNode(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
                 *this)

{
  fixed_pool_with_overflow<eastl::allocator>::allocate
            ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x30));
  return;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::DoCreateNode(EA::Text::AutoRefCount<EA::Text::Font> const&) */

long __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::DoCreateNode(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
               *this,AutoRefCount *param_1)

{
  long lVar1;
  AutoRefCount<EA::Text::Font> *this_00;
  
  lVar1 = DoAllocateNode(this);
  this_00 = (AutoRefCount<EA::Text::Font> *)FUN_0535a408(lVar1 + 0x20);
  if (this_00 != (AutoRefCount<EA::Text::Font> *)0x0) {
    EA::Text::AutoRefCount<EA::Text::Font>::AutoRefCount(this_00,param_1);
  }
  return lVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::DoInsertValueImpl(eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> >*,
   EA::Text::AutoRefCount<EA::Text::Font> const&, bool) */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::DoInsertValueImpl(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
                    *this,rbtree_node *param_1,AutoRefCount *param_2,bool param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  rbtree_node *prVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_3) ||
     (this + 8 ==
      (rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
       *)param_1)) {
    bVar1 = 0;
  }
  else {
    uVar2 = FUN_0535a62c(param_2);
    uVar3 = FUN_0535a62c(param_1 + 0x20);
    bVar1 = FUN_0535d85c(uVar2,uVar3);
    bVar1 = bVar1 ^ 1;
  }
  prVar4 = (rbtree_node *)DoCreateNode(this,param_2);
  RBTreeInsert(prVar4,param_1,this + 8,bVar1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_10,prVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::insert(EA::Text::AutoRefCount<EA::Text::Font> const&) */

void eastl::
     rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
     ::insert(AutoRefCount *param_1)

{
  FUN_0535fde8();
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::reset_lose_memory() */

void __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::reset_lose_memory(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                    *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
    **)(this + 8) = this + 8;
  *(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
    **)(this + 0x10) = this + 8;
  this[0x20] = (rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                )0x0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::DoFreeNode(eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> >*) */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::DoFreeNode(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
             *this,rbtree_node *param_1)

{
  rbtree_node<EA::Text::AutoRefCount<EA::Text::Font>>::~rbtree_node
            ((rbtree_node<EA::Text::AutoRefCount<EA::Text::Font>> *)param_1);
  fixed_pool_with_overflow<eastl::allocator>::deallocate
            ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x30),param_1);
  return;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::DoNukeSubtree(eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> >*) */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::DoNukeSubtree(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
                *this,rbtree_node *param_1)

{
  rbtree_node *prVar1;
  
  while (param_1 != (rbtree_node *)0x0) {
    DoNukeSubtree(this,*(rbtree_node **)param_1);
    prVar1 = *(rbtree_node **)(param_1 + 8);
    DoFreeNode(this,param_1);
    param_1 = prVar1;
  }
  return;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::~rbtree() */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::~rbtree(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
          *this)

{
  DoNukeSubtree(this,*(rbtree_node **)(this + 0x18));
  return;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::clear() */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::clear(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
        *this)

{
  DoNukeSubtree(this,*(rbtree_node **)(this + 0x18));
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::reset_lose_memory((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                       *)this);
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true, true>::find(char16_t
   const&) */

void eastl::
     rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
     ::find(wchar16 *param_1)

{
  rbtree_node *prVar1;
  undefined2 uVar2;
  rbtree_node *prVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined2 *in_x1;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  *in_x8;
  rbtree_node *prVar6;
  rbtree_node *prVar7;
  
  prVar6 = *(rbtree_node **)(param_1 + 0xc);
  prVar1 = (rbtree_node *)(param_1 + 4);
  if (prVar6 != (rbtree_node *)0x0) {
    uVar2 = *in_x1;
    prVar7 = prVar1;
    do {
      puVar5 = (undefined2 *)FUN_05368664(prVar6 + 0x20);
      cVar4 = FUN_05368668(*puVar5,uVar2);
      prVar3 = *(rbtree_node **)prVar6;
      if (cVar4 == '\0') {
        prVar7 = prVar6;
        prVar3 = *(rbtree_node **)(prVar6 + 8);
      }
      prVar6 = prVar3;
    } while (prVar6 != (rbtree_node *)0x0);
    if (prVar1 != prVar7) {
      puVar5 = (undefined2 *)FUN_05368664(prVar7 + 0x20);
      cVar4 = FUN_05368668(uVar2,*puVar5);
      if (cVar4 == '\0') {
        rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
        ::rbtree_iterator(in_x8,prVar7);
        return;
      }
    }
  }
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(in_x8,prVar1);
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::end() */

rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
* eastl::
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::end(void)

{
  long in_x0;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  *in_x8;
  
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(in_x8,(rbtree_node *)(in_x0 + 8));
  return in_x8;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true,
   true>::rbtree(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::rbtree(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
         *this,CoreAllocatorAdapter *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                )0x0;
  *(undefined8 *)(this + 0x28) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x30),(EAIOEASTLCoreAllocator *)param_1);
  reset_lose_memory(this);
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true,
   true>::DoFreeNode(eastl::rbtree_node<eastl::pair<char16_t const, unsigned short> >*) */

void __thiscall
eastl::
rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
::DoFreeNode(rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
             *this,rbtree_node *param_1)

{
  FUN_0536869c(*(undefined8 *)(this + 0x30),param_1,0x28);
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true,
   true>::DoNukeSubtree(eastl::rbtree_node<eastl::pair<char16_t const, unsigned short> >*) */

void __thiscall
eastl::
rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
::DoNukeSubtree(rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
                *this,rbtree_node *param_1)

{
  rbtree_node *prVar1;
  
  while (param_1 != (rbtree_node *)0x0) {
    DoNukeSubtree(this,*(rbtree_node **)param_1);
    prVar1 = *(rbtree_node **)(param_1 + 8);
    DoFreeNode(this,param_1);
    param_1 = prVar1;
  }
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true, true>::~rbtree() */

void __thiscall
eastl::
rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
::~rbtree(rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
          *this)

{
  DoNukeSubtree(this,*(rbtree_node **)(this + 0x18));
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true, true>::DoAllocateNode() */

void __thiscall
eastl::
rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
::DoAllocateNode(rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
                 *this)

{
  allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            ((CoreAllocatorAdapter *)(this + 0x30),0x28,2,0);
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true,
   true>::DoCreateNode(eastl::pair<char16_t const, unsigned short> const&) */

long __thiscall
eastl::
rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
::DoCreateNode(rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
               *this,pair *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = DoAllocateNode(this);
  puVar2 = (undefined4 *)FUN_0536853c(lVar1 + 0x20);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)param_1;
  }
  return lVar1;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true,
   true>::DoInsertValueImpl(eastl::rbtree_node<eastl::pair<char16_t const, unsigned short> >*,
   eastl::pair<char16_t const, unsigned short> const&, bool) */

void eastl::
     rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
     ::DoInsertValueImpl(rbtree_node *param_1,pair *param_2,bool param_3)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  rbtree_node *prVar4;
  char in_w3;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  *in_x8;
  
  if ((in_w3 == '\0') && (param_1 + 8 != (rbtree_node *)param_2)) {
    puVar2 = (undefined2 *)FUN_05368664((pair *)(ulong)param_3);
    puVar3 = (undefined2 *)FUN_05368664(param_2 + 0x20);
    bVar1 = FUN_05368668(*puVar2,*puVar3);
    bVar1 = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
  }
  prVar4 = (rbtree_node *)
           DoCreateNode((rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
                         *)param_1,(pair *)(ulong)param_3);
  RBTreeInsert(prVar4,param_2,param_1 + 8,bVar1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(in_x8,prVar4);
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true,
   true>::insert(eastl::pair<char16_t const, unsigned short> const&) */

void eastl::
     rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
     ::insert(pair *param_1)

{
  FUN_0536acb4();
  return;
}


/* eastl::rbtree<EA::Text::Rectangle, EA::Text::Rectangle, eastl::less<EA::Text::Rectangle>,
   eastl::fixed_node_allocator<48ul, 4ul, 4ul, 0ul, true, eastl::allocator>,
   eastl::use_self<EA::Text::Rectangle>, false,
   true>::DoFreeNode(eastl::rbtree_node<EA::Text::Rectangle>*) */

void __thiscall
eastl::
rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
::DoFreeNode(rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
             *this,rbtree_node *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::deallocate
            ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x30),param_1);
  return;
}


/* eastl::rbtree<EA::Text::Rectangle, EA::Text::Rectangle, eastl::less<EA::Text::Rectangle>,
   eastl::fixed_node_allocator<48ul, 4ul, 4ul, 0ul, true, eastl::allocator>,
   eastl::use_self<EA::Text::Rectangle>, false,
   true>::erase(eastl::rbtree_iterator<EA::Text::Rectangle, EA::Text::Rectangle const*,
   EA::Text::Rectangle const&>) */

rbtree_node_base * __thiscall
eastl::
rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
::erase(rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
        *this,rbtree_node_base *param_2)

{
  rbtree_node_base *local_8;
  
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
  local_8 = param_2;
  rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>::
  operator++((rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>
              *)&local_8);
  RBTreeErase(param_2,(rbtree_node_base *)(this + 8));
  DoFreeNode(this,(rbtree_node *)param_2);
  return local_8;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::rbtree(eastl::fixed_node_allocator<40ul, 8ul, 8ul, 0ul, true, eastl::allocator> const&) */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::rbtree(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
         *this,fixed_node_allocator *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
                )0x0;
  *(undefined8 *)(this + 0x28) = 0;
  fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>::fixed_node_allocator
            ((fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator> *)(this + 0x30),param_1);
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::reset_lose_memory((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                       *)this);
  return;
}


/* eastl::rbtree<EA::Text::Rectangle, EA::Text::Rectangle, eastl::less<EA::Text::Rectangle>,
   eastl::fixed_node_allocator<48ul, 4ul, 4ul, 0ul, true, eastl::allocator>,
   eastl::use_self<EA::Text::Rectangle>, false, true>::DoAllocateNode() */

void __thiscall
eastl::
rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
::DoAllocateNode(rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
                 *this)

{
  fixed_pool_with_overflow<eastl::allocator>::allocate
            ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x30));
  return;
}


/* eastl::rbtree<EA::Text::Rectangle, EA::Text::Rectangle, eastl::less<EA::Text::Rectangle>,
   eastl::fixed_node_allocator<48ul, 4ul, 4ul, 0ul, true, eastl::allocator>,
   eastl::use_self<EA::Text::Rectangle>, false, true>::DoCreateNode(EA::Text::Rectangle const&) */

long __thiscall
eastl::
rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
::DoCreateNode(rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
               *this,Rectangle *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = DoAllocateNode(this);
  puVar3 = (undefined8 *)FUN_0536f2a8(lVar2 + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar3 = *(undefined8 *)param_1;
    puVar3[1] = uVar1;
  }
  return lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::rbtree<EA::Text::Rectangle, EA::Text::Rectangle, eastl::less<EA::Text::Rectangle>,
   eastl::fixed_node_allocator<48ul, 4ul, 4ul, 0ul, true, eastl::allocator>,
   eastl::use_self<EA::Text::Rectangle>, false,
   true>::DoInsertValueImpl(eastl::rbtree_node<EA::Text::Rectangle>*, EA::Text::Rectangle const&,
   bool) */

void __thiscall
eastl::
rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
::DoInsertValueImpl(rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
                    *this,rbtree_node *param_1,Rectangle *param_2,bool param_3)

{
  char cVar1;
  Rectangle *pRVar2;
  Rectangle *pRVar3;
  rbtree_node *prVar4;
  undefined8 uVar5;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((!param_3) &&
     (this + 8 !=
      (rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
       *)param_1)) {
    pRVar2 = (Rectangle *)FUN_0536f580(param_2);
    pRVar3 = (Rectangle *)FUN_0536f580(param_1 + 0x20);
    cVar1 = EA::Text::operator<(pRVar2,pRVar3);
    if (cVar1 == '\0') {
      uVar5 = 1;
      goto LAB_0537514c;
    }
  }
  uVar5 = 0;
LAB_0537514c:
  prVar4 = (rbtree_node *)DoCreateNode(this,param_2);
  RBTreeInsert(prVar4,param_1,this + 8,uVar5);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                     *)&local_10,prVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* eastl::rbtree<EA::Text::Rectangle, EA::Text::Rectangle, eastl::less<EA::Text::Rectangle>,
   eastl::fixed_node_allocator<48ul, 4ul, 4ul, 0ul, true, eastl::allocator>,
   eastl::use_self<EA::Text::Rectangle>, false, true>::insert(EA::Text::Rectangle const&) */

void eastl::
     rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
     ::insert(Rectangle *param_1)

{
  FUN_053751c0();
  return;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::DoCreateNode(eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> > const*,
   eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> >*) */

void __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::DoCreateNode(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
               *this,rbtree_node *param_1,rbtree_node *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)DoCreateNode(this,(AutoRefCount *)(param_1 + 0x20));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_2;
  *(rbtree_node *)(puVar1 + 3) = param_1[0x18];
  return;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::DoCopySubtree(eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> > const*,
   eastl::rbtree_node<EA::Text::AutoRefCount<EA::Text::Font> >*) */

rbtree_node * __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::DoCopySubtree(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
                *this,rbtree_node *param_1,rbtree_node *param_2)

{
  rbtree_node *prVar1;
  rbtree_node *prVar2;
  undefined8 uVar3;
  rbtree_node *prVar4;
  rbtree_node *prVar5;
  rbtree_node *prVar6;
  
  prVar2 = (rbtree_node *)DoCreateNode(this,param_1,param_2);
  if (*(rbtree_node **)param_1 != (rbtree_node *)0x0) {
    uVar3 = DoCopySubtree(this,*(rbtree_node **)param_1,prVar2);
    *(undefined8 *)prVar2 = uVar3;
  }
  prVar1 = prVar2;
  for (prVar6 = *(rbtree_node **)(param_1 + 8); prVar6 != (rbtree_node *)0x0;
      prVar6 = *(rbtree_node **)(prVar6 + 8)) {
    prVar4 = (rbtree_node *)DoCreateNode(this,prVar6,prVar1);
    prVar5 = *(rbtree_node **)prVar6;
    *(rbtree_node **)(prVar1 + 8) = prVar4;
    if (prVar5 != (rbtree_node *)0x0) {
      uVar3 = DoCopySubtree(this,prVar5,prVar4);
      *(undefined8 *)prVar4 = uVar3;
    }
    prVar1 = prVar4;
  }
  return prVar2;
}


/* eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>, EA::Text::AutoRefCount<EA::Text::Font>,
   eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::fixed_node_allocator<40ul, 8ul, 8ul,
   0ul, true, eastl::allocator>, eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false,
   true>::TEMPNAMEPLACEHOLDERVALUE(eastl::rbtree<EA::Text::AutoRefCount<EA::Text::Font>,
   EA::Text::AutoRefCount<EA::Text::Font>, eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >,
   eastl::fixed_node_allocator<40ul, 8ul, 8ul, 0ul, true, eastl::allocator>,
   eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font> >, false, true> const&) */

rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
* __thiscall
eastl::
rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
::operator=(rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
            *this,rbtree *param_1)

{
  rbtree_node_base *prVar1;
  undefined8 uVar2;
  
  if (this != (rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
               *)param_1) {
    clear(this);
    if (*(rbtree_node **)(param_1 + 0x18) != (rbtree_node *)0x0) {
      prVar1 = (rbtree_node_base *)
               DoCopySubtree(this,*(rbtree_node **)(param_1 + 0x18),(rbtree_node *)(this + 8));
      *(rbtree_node_base **)(this + 0x18) = prVar1;
      uVar2 = RBTreeGetMaxChild(prVar1);
      *(undefined8 *)(this + 8) = uVar2;
      uVar2 = RBTreeGetMinChild(prVar1);
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(this + 0x10) = uVar2;
    }
  }
  return this;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::DoFreeNode(eastl::rbtree_node<eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning> >*) */

void __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::DoFreeNode(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
             *this,rbtree_node *param_1)

{
  FUN_0540ee5c(*(undefined8 *)(this + 0x30),param_1,0x30);
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true,
   true>::DoNukeSubtree(eastl::rbtree_node<eastl::pair<eastl::pair<unsigned short, unsigned short>
   const, EA::Text::Kerning> >*) */

void __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::DoNukeSubtree(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                *this,rbtree_node *param_1)

{
  rbtree_node *prVar1;
  
  while (param_1 != (rbtree_node *)0x0) {
    DoNukeSubtree(this,*(rbtree_node **)param_1);
    prVar1 = *(rbtree_node **)(param_1 + 8);
    DoFreeNode(this,param_1);
    param_1 = prVar1;
  }
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::~rbtree() */

void __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::~rbtree(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
          *this)

{
  DoNukeSubtree(this,*(rbtree_node **)(this + 0x18));
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::clear() */

void __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::clear(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
        *this)

{
  DoNukeSubtree(this,*(rbtree_node **)(this + 0x18));
  reset_lose_memory(this);
  return;
}


/* eastl::rbtree<char16_t, eastl::pair<char16_t const, unsigned short>, eastl::less<char16_t>,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<char16_t const, unsigned short> >, true, true>::clear() */

void __thiscall
eastl::
rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
::clear(rbtree<char16_t,eastl::pair<char16_t_const,unsigned_short>,eastl::less<char16_t>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<char16_t_const,unsigned_short>>,true,true>
        *this)

{
  DoNukeSubtree(this,*(rbtree_node **)(this + 0x18));
  rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
  ::reset_lose_memory((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                       *)this);
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::find(eastl::pair<unsigned short, unsigned short> const&) */

void eastl::
     rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
     ::find(pair *param_1)

{
  rbtree_node *prVar1;
  rbtree_node *prVar2;
  bool bVar3;
  pair *ppVar4;
  pair *in_x1;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  *in_x8;
  rbtree_node *prVar5;
  rbtree_node *prVar6;
  
  prVar1 = (rbtree_node *)(param_1 + 8);
  prVar2 = *(rbtree_node **)(param_1 + 0x18);
  prVar6 = prVar1;
  if (*(rbtree_node **)(param_1 + 0x18) != (rbtree_node *)0x0) {
    do {
      while( true ) {
        prVar5 = prVar2;
        ppVar4 = (pair *)FUN_0540ee58(prVar5 + 0x20);
        bVar3 = eastl::operator<(ppVar4,in_x1);
        if (bVar3) break;
        prVar2 = *(rbtree_node **)(prVar5 + 8);
        prVar6 = prVar5;
        if (*(rbtree_node **)(prVar5 + 8) == (rbtree_node *)0x0) goto LAB_05410e94;
      }
      prVar2 = *(rbtree_node **)prVar5;
    } while (*(rbtree_node **)prVar5 != (rbtree_node *)0x0);
LAB_05410e94:
    if (prVar1 != prVar6) {
      ppVar4 = (pair *)FUN_0540ee58(prVar6 + 0x20);
      bVar3 = eastl::operator<(in_x1,ppVar4);
      if (!bVar3) {
        rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
        ::rbtree_iterator(in_x8,prVar6);
        return;
      }
    }
  }
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(in_x8,prVar1);
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::DoAllocateNode() */

void __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::DoAllocateNode(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                 *this)

{
  allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            ((CoreAllocatorAdapter *)(this + 0x30),0x30,4,0);
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::DoCreateNode(eastl::pair<eastl::pair<unsigned short, unsigned
   short> const, EA::Text::Kerning> const&) */

long __thiscall
eastl::
rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
::DoCreateNode(rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
               *this,pair *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = DoAllocateNode(this);
  puVar2 = (undefined8 *)FUN_0540ec74(lVar1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  }
  return lVar1;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true,
   true>::DoInsertValueImpl(eastl::rbtree_node<eastl::pair<eastl::pair<unsigned short, unsigned
   short> const, EA::Text::Kerning> >*, eastl::pair<eastl::pair<unsigned short, unsigned short>
   const, EA::Text::Kerning> const&, bool) */

void eastl::
     rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
     ::DoInsertValueImpl(rbtree_node *param_1,pair *param_2,bool param_3)

{
  bool bVar1;
  pair *ppVar2;
  pair *ppVar3;
  rbtree_node *prVar4;
  char in_w3;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  *in_x8;
  
  if ((in_w3 == '\0') && (param_1 + 8 != (rbtree_node *)param_2)) {
    ppVar2 = (pair *)FUN_0540ee58((pair *)(ulong)param_3);
    ppVar3 = (pair *)FUN_0540ee58(param_2 + 0x20);
    bVar1 = eastl::operator<(ppVar2,ppVar3);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = false;
  }
  prVar4 = (rbtree_node *)
           DoCreateNode((rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
                         *)param_1,(pair *)(ulong)param_3);
  RBTreeInsert(prVar4,param_2,param_1 + 8,bVar1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(in_x8,prVar4);
  return;
}


/* eastl::rbtree<eastl::pair<unsigned short, unsigned short>, eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::less<eastl::pair<unsigned short,
   unsigned short> >, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,
   eastl::use_first<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning> >, true, true>::insert(eastl::pair<eastl::pair<unsigned short, unsigned short>
   const, EA::Text::Kerning> const&) */

void eastl::
     rbtree<eastl::pair<unsigned_short,unsigned_short>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::less<eastl::pair<unsigned_short,unsigned_short>>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>>,true,true>
     ::insert(pair *param_1)

{
  FUN_05411710();
  return;
}

