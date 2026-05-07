// Class: eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>


/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::clear() */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::clear(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        *this)

{
  FUN_053650e0(*(undefined8 *)this,this + 8);
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::~bitvector() */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~bitvector(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    FUN_0533bcb4(*(undefined8 *)(this + 0x18),lVar1,*(long *)(this + 0x10) - lVar1);
    return;
  }
  return;
}


/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::size() const */

long __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::size(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
       *this)

{
  long lVar1;
  
  lVar1 = FUN_053650a8(*(undefined8 *)this,*(undefined8 *)(this + 8));
  return lVar1 * 0x40 - *(long *)(this + 0x28);
}


/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::bitvector(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::bitvector(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            *this,CoreAllocatorAdapter *param_1)

{
  vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::vector
            ((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,param_1);
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::bitvector() */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::bitvector(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            *this)

{
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this);
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::begin() const */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::begin(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        *this)

{
  hash_node *phVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar1 = (hash_node *)FUN_053651a0(*(undefined8 *)this);
  hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
  ::hashtable_iterator
            ((hashtable_iterator<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false,false>
              *)&local_18,phVar1,(hash_node **)0x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::test(unsigned long, bool)
   const */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::test(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
       *this,ulong param_1,bool param_2)

{
  ulong uVar1;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = size(this);
  if (param_1 < uVar1) {
    local_28 = begin(this);
    local_18 = bitvector_const_iterator<unsigned_long>::operator+
                         ((bitvector_const_iterator<unsigned_long> *)local_28,param_1);
    param_2 = (bool)bitvector_const_iterator<unsigned_long>::operator*
                              ((bitvector_const_iterator<unsigned_long> *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::begin() */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::begin(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        *this)

{
  ulong *puVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (ulong *)FUN_053651a4(*(undefined8 *)this);
  bitvector_iterator<unsigned_long>::bitvector_iterator
            ((bitvector_iterator<unsigned_long> *)&local_18,puVar1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,uStack_10);
}


/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::resize(unsigned long) */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::resize(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
         *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x3f >> 6;
  vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::resize
            ((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,uVar1);
  *(ulong *)(this + 0x28) = uVar1 * 0x40 - param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>, unsigned
   long, eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::set(unsigned long, bool)
    */

void __thiscall
eastl::
bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::set(bitvector<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,unsigned_long,eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
      *this,ulong param_1,bool param_2)

{
  ulong uVar1;
  bitvector_iterator<unsigned_long> local_38 [16];
  bitvector_iterator<unsigned_long> local_28 [16];
  bitvector_reference<unsigned_long> local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = size(this);
  if (uVar1 <= param_1) {
    resize(this,param_1 + 1);
  }
  local_38 = (bitvector_iterator<unsigned_long>  [16])begin(this);
  local_28 = (bitvector_iterator<unsigned_long>  [16])
             bitvector_iterator<unsigned_long>::operator+(local_38,param_1);
  local_18 = (bitvector_reference<unsigned_long>  [16])
             bitvector_iterator<unsigned_long>::operator*(local_28);
  bitvector_reference<unsigned_long>::operator=(local_18,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

