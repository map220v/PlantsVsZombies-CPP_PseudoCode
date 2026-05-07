// Class: EA::Text::FontServer::FaceSource


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::FaceSource::FaceSource(EA::Allocator::ICoreAllocator*) */

void __thiscall
EA::Text::FontServer::FaceSource::FaceSource(FaceSource *this,ICoreAllocator *param_1)

{
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 8) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)this = 0;
  FontDescription::FontDescription((FontDescription *)(this + 0xc));
  this[0x80] = (FaceSource)0x0;
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/FontServer/FaceMap/FaceSource/FontList",param_1);
  eastl::
  fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_list((fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x88),(CoreAllocatorAdapter *)aCStack_18);
  *(undefined8 *)(this + 0x150) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::FaceSource::~FaceSource() */

void __thiscall EA::Text::FontServer::FaceSource::~FaceSource(FaceSource *this)

{
  bool bVar1;
  undefined8 *puVar2;
  _List_const_iterator<Sexy::ActiveFontLayer> a_Stack_18 [8];
  rbtree_iterator arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0535ae5c(a_Stack_18,*(undefined8 *)(this + 0x88));
  while( true ) {
    eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
    ::end();
    bVar1 = eastl::operator!=((rbtree_iterator *)a_Stack_18,arStack_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(a_Stack_18);
    (**(code **)(*(long *)*puVar2 + 0x20))((long *)*puVar2);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)a_Stack_18);
  }
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 0x18))();
  }
  if (*(FaceData **)(this + 0x150) != (FaceData *)0x0) {
    FaceData::Release(*(FaceData **)(this + 0x150));
  }
  eastl::
  fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~fixed_list((fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x88));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::FaceSource::TEMPNAMEPLACEHOLDERVALUE(EA::Text::FontServer::FaceSource
   const&) */

void __thiscall EA::Text::FontServer::FaceSource::operator=(FaceSource *this,FaceSource *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  FaceData *this_00;
  _List_const_iterator<Sexy::ActiveFontLayer> a_Stack_18 [8];
  rbtree_iterator arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != this) {
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    memcpy(this + 0xc,param_1 + 0xc,0x74);
    this[0x80] = param_1[0x80];
    eastl::
    fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator=((fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x88),(fixed_list *)(param_1 + 0x88));
    FUN_0535ae5c(a_Stack_18,*(undefined8 *)(this + 0x88));
    while( true ) {
      eastl::
      list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::end
                ();
      bVar1 = eastl::operator!=((rbtree_iterator *)a_Stack_18,arStack_10);
      if (!bVar1) break;
      puVar2 = (undefined8 *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(a_Stack_18)
      ;
      (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)a_Stack_18);
    }
    if (*(long **)param_1 != (long *)0x0) {
      (**(code **)(**(long **)param_1 + 0x10))();
    }
    if (*(long **)this != (long *)0x0) {
      (**(code **)(**(long **)this + 0x18))();
    }
    this_00 = *(FaceData **)(param_1 + 0x150);
    *(undefined8 *)this = *(undefined8 *)param_1;
    if (this_00 != (FaceData *)0x0) {
      FaceData::AddRef(this_00);
    }
    if (*(FaceData **)(this + 0x150) != (FaceData *)0x0) {
      FaceData::Release(*(FaceData **)(this + 0x150));
    }
    *(undefined8 *)(this + 0x150) = *(undefined8 *)(param_1 + 0x150);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* EA::Text::FontServer::FaceSource::FaceSource(EA::Text::FontServer::FaceSource const&) */

void __thiscall EA::Text::FontServer::FaceSource::FaceSource(FaceSource *this,FaceSource *param_1)

{
  CoreAllocatorAdapter *pCVar1;
  
  FontDescription::FontDescription((FontDescription *)(this + 0xc));
  pCVar1 = (CoreAllocatorAdapter *)
           eastl::
           fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::get_overflow_allocator
                     ((fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       *)(param_1 + 0x88));
  eastl::
  fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_list((fixed_list<EA::Text::Font*,4ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x88),pCVar1);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x150) = 0;
  operator=(this,param_1);
  return;
}

