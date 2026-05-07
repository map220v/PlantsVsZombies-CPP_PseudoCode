// Class: eastl::fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::fixed_list<EA::Text::Font*, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::get_overflow_allocator() */

void __thiscall
eastl::
fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::get_overflow_allocator
          (fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this)

{
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_list<EA::Text::Font*, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_list(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_list(fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,CoreAllocatorAdapter *param_1)

{
  fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  afStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_node_allocator(afStack_40,(void *)0x0,param_1);
  list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::list((fixed_node_allocator *)this);
  fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::reset((fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x18),this + 0x50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_list<EA::Text::Font*, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~fixed_list() */

void __thiscall
eastl::
fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~fixed_list(fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *this)

{
  fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *pfVar1;
  fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *pfVar2;
  
  pfVar1 = *(fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             **)this;
  while (pfVar1 != this) {
    pfVar2 = *(fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               **)pfVar1;
    fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    deallocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x18),pfVar1);
    pfVar1 = pfVar2;
  }
  return;
}


/* eastl::fixed_list<EA::Text::FontServer::FaceSource, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~fixed_list() */

void __thiscall
eastl::
fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~fixed_list(fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *this)

{
  ListNode<EA::Text::FontServer::FaceSource> *this_00;
  ListNode<EA::Text::FontServer::FaceSource> *pLVar1;
  
  this_00 = *(ListNode<EA::Text::FontServer::FaceSource> **)this;
  while (this_00 != (ListNode<EA::Text::FontServer::FaceSource> *)this) {
    pLVar1 = *(ListNode<EA::Text::FontServer::FaceSource> **)this_00;
    ListNode<EA::Text::FontServer::FaceSource>::~ListNode(this_00);
    fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    deallocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x18),this_00);
    this_00 = pLVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_list<EA::Text::FontServer::FaceSource, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_list(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_list(fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,CoreAllocatorAdapter *param_1)

{
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  afStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_node_allocator(afStack_40,(void *)0x0,param_1);
  list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::list((fixed_node_allocator *)this);
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::reset((fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x18),this + 0x50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_list<EA::Text::Font*, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_list<EA::Text::Font*, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
* __thiscall
eastl::
fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::operator=(fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this,fixed_list *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (this != (fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)param_1) {
    list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
    ::clear((list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *)this);
    uVar1 = FUN_0535b360(*(undefined8 *)param_1);
    uVar2 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)param_1);
    list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
    ::assign<eastl::ListIterator<EA::Text::Font*,EA::Text::Font*const*,EA::Text::Font*const&>>
              ((list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                *)this,uVar1,uVar2);
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_list<EA::Text::FontServer::FaceSource, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_list(eastl::fixed_list<EA::Text::FontServer::FaceSource, 4ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_list(fixed_list<EA::Text::FontServer::FaceSource,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,fixed_list *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  afStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_node_allocator(afStack_40,(void *)0x0);
  list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::list((fixed_node_allocator *)this);
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::copy_overflow_allocator
            ((fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),(fixed_node_allocator *)(param_1 + 0x18));
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::reset((fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x18),this + 0x50);
  uVar1 = FUN_0535b15c(*(undefined8 *)param_1);
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)param_1);
  list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::
  assign<eastl::ListIterator<EA::Text::FontServer::FaceSource,EA::Text::FontServer::FaceSource_const*,EA::Text::FontServer::FaceSource_const&>>
            ((list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
              *)this,uVar1,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_list<EA::Text::Span, 16ul, true, eastl::allocator>::~fixed_list() */

void __thiscall
eastl::fixed_list<EA::Text::Span,16ul,true,eastl::allocator>::~fixed_list
          (fixed_list<EA::Text::Span,16ul,true,eastl::allocator> *this)

{
  fixed_list<EA::Text::Span,16ul,true,eastl::allocator> *pfVar1;
  fixed_list<EA::Text::Span,16ul,true,eastl::allocator> *pfVar2;
  
  pfVar1 = *(fixed_list<EA::Text::Span,16ul,true,eastl::allocator> **)this;
  while (pfVar1 != this) {
    pfVar2 = *(fixed_list<EA::Text::Span,16ul,true,eastl::allocator> **)pfVar1;
    fixed_pool_with_overflow<eastl::allocator>::deallocate
              ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x18),pfVar1);
    pfVar1 = pfVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_list<EA::Text::Span, 16ul, true, eastl::allocator>::fixed_list() */

void __thiscall
eastl::fixed_list<EA::Text::Span,16ul,true,eastl::allocator>::fixed_list
          (fixed_list<EA::Text::Span,16ul,true,eastl::allocator> *this)

{
  fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>::fixed_node_allocator
            (afStack_38,(void *)0x0);
  list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::list
            ((fixed_node_allocator *)this);
  fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>::reset
            ((fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator> *)(this + 0x18),
             this + 0x48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

