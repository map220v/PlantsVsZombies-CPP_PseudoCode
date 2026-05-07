// Class: eastl::ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>


/* eastl::ListBase<EA::IO::DirectoryIterator::Entry,
   EA::Allocator::EAIOEASTLCoreAllocator>::DoClear() */

void __thiscall
eastl::ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::DoClear
          (ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  ListNode<EA::IO::DirectoryIterator::Entry> *this_00;
  ListNode<EA::IO::DirectoryIterator::Entry> *pLVar1;
  
  this_00 = *(ListNode<EA::IO::DirectoryIterator::Entry> **)this;
  while (this_00 != (ListNode<EA::IO::DirectoryIterator::Entry> *)this) {
    pLVar1 = *(ListNode<EA::IO::DirectoryIterator::Entry> **)this_00;
    ListNode<EA::IO::DirectoryIterator::Entry>::~ListNode(this_00);
    FUN_0533e47c(*(undefined8 *)(this + 0x18),this_00,0x50);
    this_00 = pLVar1;
  }
  return;
}


/* eastl::ListBase<EA::IO::DirectoryIterator::Entry,
   EA::Allocator::EAIOEASTLCoreAllocator>::~ListBase() */

void __thiscall
eastl::ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::~ListBase
          (ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  ListNode<EA::IO::DirectoryIterator::Entry> *this_00;
  ListNode<EA::IO::DirectoryIterator::Entry> *pLVar1;
  
  this_00 = *(ListNode<EA::IO::DirectoryIterator::Entry> **)this;
  while (this_00 != (ListNode<EA::IO::DirectoryIterator::Entry> *)this) {
    pLVar1 = *(ListNode<EA::IO::DirectoryIterator::Entry> **)this_00;
    ListNode<EA::IO::DirectoryIterator::Entry>::~ListNode(this_00);
    FUN_0533e47c(*(undefined8 *)(this + 0x18),this_00,0x50);
    this_00 = pLVar1;
  }
  return;
}


/* eastl::ListBase<EA::IO::DirectoryIterator::Entry,
   EA::Allocator::EAIOEASTLCoreAllocator>::ListBase() */

void __thiscall
eastl::ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::ListBase
          (ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),"EASTL list");
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)this);
  return;
}


/* eastl::ListBase<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::ListBase(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::ListBase(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,CoreAllocatorAdapter *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),(EAIOEASTLCoreAllocator *)param_1);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)this);
  return;
}


/* eastl::ListBase<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoClear() */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoClear(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this)

{
  ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *pLVar1;
  ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *pLVar2;
  
  pLVar1 = *(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             **)this;
  while (pLVar1 != this) {
    pLVar2 = *(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               **)pLVar1;
    FUN_0535a5f8(*(undefined8 *)(this + 0x18),pLVar1,0xb8);
    pLVar1 = pLVar2;
  }
  return;
}


/* eastl::ListBase<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~ListBase() */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~ListBase(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this)

{
  ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *pLVar1;
  ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *pLVar2;
  
  pLVar1 = *(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             **)this;
  while (pLVar1 != this) {
    pLVar2 = *(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               **)pLVar1;
    FUN_0535a5f8(*(undefined8 *)(this + 0x18),pLVar1,0xb8);
    pLVar1 = pLVar2;
  }
  return;
}


/* eastl::ListBase<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoFreeNode(eastl::ListNode<EA::Text::FontServer::EffectData>*) */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoFreeNode(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ListNode *param_1)

{
  FUN_0535a5f8(*(undefined8 *)(this + 0x18),param_1,0xb8);
  return;
}


/* eastl::ListBase<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::ListBase(eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::ListBase(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
           *this,fixed_node_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_node_allocator
            ((fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)this);
  return;
}


/* eastl::ListBase<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::DoClear() */

void __thiscall
eastl::
ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoClear(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
          *this)

{
  ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *pLVar1;
  ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *pLVar2;
  
  pLVar1 = *(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             **)this;
  while (pLVar1 != this) {
    pLVar2 = *(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               **)pLVar1;
    fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    deallocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x18),pLVar1);
    pLVar1 = pLVar2;
  }
  return;
}


/* eastl::ListBase<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::~ListBase() */

void __thiscall
eastl::
ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~ListBase(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            *this)

{
  ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *pLVar1;
  ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *pLVar2;
  
  pLVar1 = *(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             **)this;
  while (pLVar1 != this) {
    pLVar2 = *(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               **)pLVar1;
    fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    deallocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x18),pLVar1);
    pLVar1 = pLVar2;
  }
  return;
}


/* eastl::ListBase<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoFreeNode(eastl::ListNode<EA::Text::Font*>*) */

void __thiscall
eastl::
ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoFreeNode(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *this,ListNode *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  deallocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  return;
}


/* eastl::ListBase<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul,
   0ul, true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::DoClear() */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoClear(ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
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


/* eastl::ListBase<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul,
   0ul, true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::~ListBase() */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~ListBase(ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
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


/* eastl::ListBase<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul,
   0ul, true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::ListBase(eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::ListBase(ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
           *this,fixed_node_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_node_allocator
            ((fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)this);
  return;
}


/* eastl::ListBase<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocateNode() */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoAllocateNode(ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this)

{
  allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            ((CoreAllocatorAdapter *)(this + 0x18),0xb8,4,0);
  return;
}


/* eastl::ListBase<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul,
   0ul, true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoAllocateNode() */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoAllocateNode(ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                 *this)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  allocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x18));
  return;
}


/* eastl::ListBase<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::DoAllocateNode() */

void __thiscall
eastl::
ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoAllocateNode(ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                 *this)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  allocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x18));
  return;
}


/* eastl::ListBase<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul,
   0ul, true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoFreeNode(eastl::ListNode<EA::Text::FontServer::FaceSource>*) */

void __thiscall
eastl::
ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoFreeNode(ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *this,ListNode *param_1)

{
  fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  deallocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  return;
}


/* eastl::ListBase<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::DoFreeNode(eastl::ListNode<EA::Text::Span>*) */

void __thiscall
eastl::ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
::DoFreeNode(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
             *this,ListNode *param_1)

{
  fixed_pool_with_overflow<eastl::allocator>::deallocate
            ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x18),param_1);
  return;
}


/* eastl::ListBase<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::DoClear() */

void __thiscall
eastl::ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
::DoClear(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
          *this)

{
  ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
  *pLVar1;
  ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
  *pLVar2;
  
  pLVar1 = *(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
             **)this;
  while (pLVar1 != this) {
    pLVar2 = *(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
               **)pLVar1;
    fixed_pool_with_overflow<eastl::allocator>::deallocate
              ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x18),pLVar1);
    pLVar1 = pLVar2;
  }
  return;
}


/* eastl::ListBase<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::~ListBase() */

void __thiscall
eastl::ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
::~ListBase(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
            *this)

{
  ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
  *pLVar1;
  ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
  *pLVar2;
  
  pLVar1 = *(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
             **)this;
  while (pLVar1 != this) {
    pLVar2 = *(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
               **)pLVar1;
    fixed_pool_with_overflow<eastl::allocator>::deallocate
              ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x18),pLVar1);
    pLVar1 = pLVar2;
  }
  return;
}


/* eastl::ListBase<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::ListBase(eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> const&) */

void eastl::
     ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
     ListBase(fixed_node_allocator *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>::fixed_node_allocator
            (param_1 + 0x18);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)param_1);
  return;
}


/* eastl::ListBase<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::DoAllocateNode() */

void __thiscall
eastl::ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
::DoAllocateNode(ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
                 *this)

{
  fixed_pool_with_overflow<eastl::allocator>::allocate
            ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x18));
  return;
}


/* eastl::ListBase<EA::IO::DirectoryIterator::Entry,
   EA::Allocator::EAIOEASTLCoreAllocator>::DoAllocateNode() */

void __thiscall
eastl::ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::
DoAllocateNode(ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>
               *this)

{
  allocate_memory<EA::Allocator::EAIOEASTLCoreAllocator>
            ((EAIOEASTLCoreAllocator *)(this + 0x18),0x50,8,0);
  return;
}

