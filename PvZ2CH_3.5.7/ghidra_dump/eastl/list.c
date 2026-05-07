// Class: eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>


/* eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>::~list() */

void __thiscall
eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::~list
          (list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

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


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::end() */

rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
* eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
  end(void)

{
  rbtree_node *in_x0;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  *in_x8;
  
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  ::rbtree_iterator(in_x8,in_x0);
  return in_x8;
}


/* eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>::list() */

void __thiscall
eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::list
          (list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

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


/* eastl::list<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::list(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::list(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* eastl::list<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~list() */

void __thiscall
eastl::
list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~list(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        *this)

{
  list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *plVar1;
  list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *plVar2;
  
  plVar1 = *(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             **)this;
  while (plVar1 != this) {
    plVar2 = *(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               **)plVar1;
    FUN_0535a5f8(*(undefined8 *)(this + 0x18),plVar1,0xb8);
    plVar1 = plVar2;
  }
  return;
}


/* eastl::list<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::clear() */

void __thiscall
eastl::
list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::clear(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
        *this)

{
  ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoClear((ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)this);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)this);
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* eastl::list<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoErase(eastl::ListNodeBase*) */

void __thiscall
eastl::
list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoErase(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,ListNodeBase *param_1)

{
  ListNodeBase::remove(param_1);
  ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFreeNode((ListBase<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,(ListNode *)param_1);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  return;
}


/* eastl::list<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::erase(eastl::ListIterator<EA::Text::FontServer::EffectData, EA::Text::FontServer::EffectData*,
   EA::Text::FontServer::EffectData&>) */

generic_iterator<EA::Text::TextureInfo**,void> *
eastl::
list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::erase(generic_iterator<EA::Text::TextureInfo**,void> *param_1,
       list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *param_2,_List_const_iterator<Sexy::FontLayer> *param_3)

{
  std::_List_const_iterator<Sexy::FontLayer>::operator++(param_3);
  DoErase(param_2,*(ListNodeBase **)(*(long *)param_3 + 8));
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator(param_1,(TextureInfo ***)param_3)
  ;
  return param_1;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::list(eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void eastl::
     list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
     ::list(fixed_node_allocator *param_1)

{
  fixed_node_allocator *in_x1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_node_allocator
            ((fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_1 + 0x18),in_x1);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)param_1);
  return;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::~list() */

void __thiscall
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~list(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        *this)

{
  list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *plVar1;
  list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  *plVar2;
  
  plVar1 = *(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             **)this;
  while (plVar1 != this) {
    plVar2 = *(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               **)plVar1;
    fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    deallocate((fixed_pool_with_overflow<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x18),plVar1);
    plVar1 = plVar2;
  }
  return;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::clear() */

void __thiscall
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::clear(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
        *this)

{
  ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::DoClear((ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *)this);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)this);
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoErase(eastl::ListNodeBase*) */

void __thiscall
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoErase(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
          *this,ListNodeBase *param_1)

{
  ListNodeBase::remove(param_1);
  ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::DoFreeNode((ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                *)this,(ListNode *)param_1);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  return;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::erase(eastl::ListIterator<EA::Text::Font*, EA::Text::Font**, EA::Text::Font*&>) */

generic_iterator<EA::Text::TextureInfo**,void> *
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::erase(generic_iterator<EA::Text::TextureInfo**,void> *param_1,
       list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
       *param_2,_List_const_iterator<Sexy::FontLayer> *param_3)

{
  std::_List_const_iterator<Sexy::FontLayer>::operator++(param_3);
  DoErase(param_2,*(ListNodeBase **)(*(long *)param_3 + 8));
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator(param_1,(TextureInfo ***)param_3)
  ;
  return param_1;
}


/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::~list() */

void __thiscall
eastl::
list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~list(list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
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
/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::erase(eastl::ListIterator<EA::Text::Font*, EA::Text::Font**, EA::Text::Font*&>,
   eastl::ListIterator<EA::Text::Font*, EA::Text::Font**, EA::Text::Font*&>) */

void eastl::
     list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
     ::erase(generic_iterator<EA::Text::TextureInfo**,void> *param_1,undefined8 param_2,
            rbtree_iterator *param_3,rbtree_iterator *param_4)

{
  bool bVar1;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while (bVar1 = eastl::operator!=(param_3,param_4), bVar1) {
    generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              (agStack_18,(TextureInfo ***)param_3);
    erase(&local_10,param_2,agStack_18);
    *(undefined8 *)param_3 = local_10;
  }
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator(param_1,(TextureInfo ***)param_4)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::list(eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void eastl::
     list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
     ::list(fixed_node_allocator *param_1)

{
  fixed_node_allocator *in_x1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_node_allocator
            ((fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_1 + 0x18),in_x1);
  std::_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::_M_init
            ((_List_base<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)param_1);
  return;
}


/* eastl::list<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoCreateNode() */

void __thiscall
eastl::
list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoCreateNode(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *this)

{
  allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            ((CoreAllocatorAdapter *)(this + 0x18),0xb8,4,0);
  return;
}


/* eastl::list<EA::Text::FontServer::EffectData,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::push_back() */

long __thiscall
eastl::
list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::push_back(list<EA::Text::FontServer::EffectData,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this)

{
  ListNodeBase *this_00;
  
  this_00 = (ListNodeBase *)DoCreateNode(this);
  ListNodeBase::insert(this_00,(ListNodeBase *)this);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return *(long *)(this + 8) + 0x10;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoCreateNode(EA::Text::Font* const&) */

long __thiscall
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoCreateNode(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               *this,Font **param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
          ::DoAllocateNode((ListBase<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                            *)this);
  puVar2 = (undefined8 *)FUN_0535a408(lVar1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_1;
  }
  return lVar1;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoInsertValue(eastl::ListNodeBase*, EA::Text::Font* const&) */

void __thiscall
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoInsertValue(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                *this,ListNodeBase *param_1,Font **param_2)

{
  ListNodeBase *this_00;
  
  this_00 = (ListNodeBase *)DoCreateNode(this,param_2);
  ListNodeBase::insert(this_00,param_1);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::assign<eastl::ListIterator<EA::Text::Font*, EA::Text::Font* const*, EA::Text::Font* const&>
   >(eastl::ListIterator<EA::Text::Font*, EA::Text::Font* const*, EA::Text::Font* const&>,
   eastl::ListIterator<EA::Text::Font*, EA::Text::Font* const*, EA::Text::Font* const&>) */

void __thiscall
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::assign<eastl::ListIterator<EA::Text::Font*,EA::Text::Font*const*,EA::Text::Font*const&>>
          (list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
           *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  rbtree_node *prVar4;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 auStack_28 [2];
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_18 [8];
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long lStack_8;
  
  prVar4 = *(rbtree_node **)this;
  lStack_8 = ___stack_chk_guard;
  uStack_30 = param_3;
  auStack_28[0] = param_2;
  if (prVar4 == (rbtree_node *)this) {
LAB_0535ef30:
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)auStack_28,(exception_ptr *)&uStack_30);
  }
  else {
    do {
      bVar1 = eastl::operator!=((rbtree_iterator *)auStack_28,(rbtree_iterator *)&uStack_30);
      if (!bVar1) goto LAB_0535ef30;
      puVar3 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)auStack_28);
      *(undefined8 *)(prVar4 + 0x10) = *puVar3;
      prVar4 = *(rbtree_node **)prVar4;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)auStack_28);
    } while (prVar4 != (rbtree_node *)this);
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)auStack_28,(exception_ptr *)&uStack_30);
  }
  if (cVar2 == '\0') {
    FUN_0535ee68(this,this,auStack_28[0],uStack_30);
  }
  else {
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator(arStack_10,prVar4);
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator(arStack_18,(rbtree_node *)this);
    erase(auStack_40,this,arStack_10,arStack_18);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoCreateNode(EA::Text::FontServer::FaceSource const&) */

long __thiscall
eastl::
list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoCreateNode(list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
               *this,FaceSource *param_1)

{
  long lVar1;
  FaceSource *this_00;
  
  lVar1 = ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
          ::DoAllocateNode((ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                            *)this);
  this_00 = (FaceSource *)FUN_0535a408(lVar1 + 0x10);
  if (this_00 != (FaceSource *)0x0) {
    EA::Text::FontServer::FaceSource::FaceSource(this_00,param_1);
  }
  return lVar1;
}


/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoInsertValue(eastl::ListNodeBase*, EA::Text::FontServer::FaceSource const&) */

void __thiscall
eastl::
list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoInsertValue(list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                *this,ListNodeBase *param_1,FaceSource *param_2)

{
  ListNodeBase *this_00;
  
  this_00 = (ListNodeBase *)DoCreateNode(this,param_2);
  ListNodeBase::insert(this_00,param_1);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}


/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::push_back(EA::Text::FontServer::FaceSource const&) */

void __thiscall
eastl::
list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::push_back(list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            *this,FaceSource *param_1)

{
  DoInsertValue(this,(ListNodeBase *)this,param_1);
  return;
}


/* eastl::list<EA::Text::Font*, eastl::fixed_node_allocator<24ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::push_back(EA::Text::Font*
   const&) */

void __thiscall
eastl::
list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::push_back(list<EA::Text::Font*,eastl::fixed_node_allocator<24ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            *this,Font **param_1)

{
  DoInsertValue(this,(ListNodeBase *)this,param_1);
  return;
}


/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoErase(eastl::ListNodeBase*) */

void __thiscall
eastl::
list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoErase(list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
          *this,ListNodeBase *param_1)

{
  ListNodeBase::remove(param_1);
  ListNode<EA::Text::FontServer::FaceSource>::~ListNode
            ((ListNode<EA::Text::FontServer::FaceSource> *)param_1);
  ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::DoFreeNode((ListBase<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                *)this,(ListNode *)param_1);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  return;
}


/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::erase(eastl::ListIterator<EA::Text::FontServer::FaceSource, EA::Text::FontServer::FaceSource*,
   EA::Text::FontServer::FaceSource&>) */

generic_iterator<EA::Text::TextureInfo**,void> *
eastl::
list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::erase(generic_iterator<EA::Text::TextureInfo**,void> *param_1,
       list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
       *param_2,_List_const_iterator<Sexy::FontLayer> *param_3)

{
  std::_List_const_iterator<Sexy::FontLayer>::operator++(param_3);
  DoErase(param_2,*(ListNodeBase **)(*(long *)param_3 + 8));
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator(param_1,(TextureInfo ***)param_3)
  ;
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::erase(eastl::ListIterator<EA::Text::FontServer::FaceSource, EA::Text::FontServer::FaceSource*,
   EA::Text::FontServer::FaceSource&>, eastl::ListIterator<EA::Text::FontServer::FaceSource,
   EA::Text::FontServer::FaceSource*, EA::Text::FontServer::FaceSource&>) */

void eastl::
     list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
     ::erase(generic_iterator<EA::Text::TextureInfo**,void> *param_1,undefined8 param_2,
            rbtree_iterator *param_3,rbtree_iterator *param_4)

{
  bool bVar1;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while (bVar1 = eastl::operator!=(param_3,param_4), bVar1) {
    generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              (agStack_18,(TextureInfo ***)param_3);
    erase(&local_10,param_2,agStack_18);
    *(undefined8 *)param_3 = local_10;
  }
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator(param_1,(TextureInfo ***)param_4)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::list<EA::Text::FontServer::FaceSource, eastl::fixed_node_allocator<360ul, 4ul, 8ul,
   0ul, true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::assign<eastl::ListIterator<EA::Text::FontServer::FaceSource, EA::Text::FontServer::FaceSource
   const*, EA::Text::FontServer::FaceSource const&>
   >(eastl::ListIterator<EA::Text::FontServer::FaceSource, EA::Text::FontServer::FaceSource const*,
   EA::Text::FontServer::FaceSource const&>, eastl::ListIterator<EA::Text::FontServer::FaceSource,
   EA::Text::FontServer::FaceSource const*, EA::Text::FontServer::FaceSource const&>) */

void __thiscall
eastl::
list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::
assign<eastl::ListIterator<EA::Text::FontServer::FaceSource,EA::Text::FontServer::FaceSource_const*,EA::Text::FontServer::FaceSource_const&>>
          (list<EA::Text::FontServer::FaceSource,eastl::fixed_node_allocator<360ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
           *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  FaceSource *pFVar3;
  rbtree_node *prVar4;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 auStack_28 [2];
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_18 [8];
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_10 [8];
  long lStack_8;
  
  prVar4 = *(rbtree_node **)this;
  lStack_8 = ___stack_chk_guard;
  uStack_30 = param_3;
  auStack_28[0] = param_2;
  if (prVar4 == (rbtree_node *)this) {
LAB_05360224:
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)auStack_28,(exception_ptr *)&uStack_30);
  }
  else {
    do {
      bVar1 = eastl::operator!=((rbtree_iterator *)auStack_28,(rbtree_iterator *)&uStack_30);
      if (!bVar1) goto LAB_05360224;
      pFVar3 = (FaceSource *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)auStack_28);
      EA::Text::FontServer::FaceSource::operator=((FaceSource *)(prVar4 + 0x10),pFVar3);
      prVar4 = *(rbtree_node **)prVar4;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)auStack_28);
    } while (prVar4 != (rbtree_node *)this);
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)auStack_28,(exception_ptr *)&uStack_30);
  }
  if (cVar2 == '\0') {
    FUN_0535f254(this,this,auStack_28[0],uStack_30);
  }
  else {
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator(arStack_10,prVar4);
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator(arStack_18,(rbtree_node *)this);
    erase(auStack_40,this,arStack_10,arStack_18);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::DoErase(eastl::ListNodeBase*) */

void __thiscall
eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
DoErase(list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
        *this,ListNodeBase *param_1)

{
  ListNodeBase::remove(param_1);
  ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
  DoFreeNode((ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
              *)this,(ListNode *)param_1);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  return;
}


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::erase(eastl::ListIterator<EA::Text::Span, EA::Text::Span*, EA::Text::Span&>)
    */

generic_iterator<EA::Text::TextureInfo**,void> *
eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
erase(generic_iterator<EA::Text::TextureInfo**,void> *param_1,
     list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
     *param_2,_List_const_iterator<Sexy::FontLayer> *param_3)

{
  std::_List_const_iterator<Sexy::FontLayer>::operator++(param_3);
  DoErase(param_2,*(ListNodeBase **)(*(long *)param_3 + 8));
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator(param_1,(TextureInfo ***)param_3)
  ;
  return param_1;
}


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::~list() */

void __thiscall
eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
~list(list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
      *this)

{
  list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>> *plVar1;
  list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>> *plVar2;
  
  plVar1 = *(list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
             **)this;
  while (plVar1 != this) {
    plVar2 = *(list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
               **)plVar1;
    fixed_pool_with_overflow<eastl::allocator>::deallocate
              ((fixed_pool_with_overflow<eastl::allocator> *)(this + 0x18),plVar1);
    plVar1 = plVar2;
  }
  return;
}


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::list(eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> const&) */

void eastl::
     list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::list
               (fixed_node_allocator *param_1)

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


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::DoCreateNode(EA::Text::Span const&) */

long __thiscall
eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
DoCreateNode(list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
             *this,Span *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
          ::DoAllocateNode((ListBase<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
                            *)this);
  puVar2 = (undefined8 *)FUN_0536f2a8(lVar1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *(undefined8 *)param_1;
  }
  return lVar1;
}


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::DoInsertValue(eastl::ListNodeBase*, EA::Text::Span const&) */

void __thiscall
eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
DoInsertValue(list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
              *this,ListNodeBase *param_1,Span *param_2)

{
  ListNodeBase *this_00;
  
  this_00 = (ListNodeBase *)DoCreateNode(this,param_2);
  ListNodeBase::insert(this_00,param_1);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return;
}


/* eastl::list<EA::Text::Span, eastl::fixed_node_allocator<24ul, 16ul, 4ul, 0ul, true,
   eastl::allocator> >::push_back(EA::Text::Span const&) */

void __thiscall
eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
push_back(list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>
          *this,Span *param_1)

{
  DoInsertValue(this,(ListNodeBase *)this,param_1);
  return;
}


/* eastl::list<EA::IO::DirectoryIterator::Entry,
   EA::Allocator::EAIOEASTLCoreAllocator>::DoCreateNode() */

long __thiscall
eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::DoCreateNode
          (list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  long lVar1;
  Entry *pEVar2;
  
  lVar1 = ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::
          DoAllocateNode((ListBase<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>
                          *)this);
  pEVar2 = (Entry *)FUN_053f6f00(lVar1 + 0x10);
  if (pEVar2 != (Entry *)0x0) {
    EA::IO::DirectoryIterator::Entry::Entry(pEVar2,0,0);
  }
  return lVar1;
}


/* eastl::list<EA::IO::DirectoryIterator::Entry, EA::Allocator::EAIOEASTLCoreAllocator>::push_back()
    */

long __thiscall
eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::push_back
          (list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  ListNodeBase *this_00;
  
  this_00 = (ListNodeBase *)DoCreateNode(this);
  ListNodeBase::insert(this_00,(ListNodeBase *)this);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return *(long *)(this + 8) + 0x10;
}


/* eastl::list<EA::IO::DirectoryIterator::Entry,
   EA::Allocator::EAIOEASTLCoreAllocator>::push_front() */

long __thiscall
eastl::list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator>::push_front
          (list<EA::IO::DirectoryIterator::Entry,EA::Allocator::EAIOEASTLCoreAllocator> *this)

{
  ListNodeBase *this_00;
  
  this_00 = (ListNodeBase *)DoCreateNode(this);
  ListNodeBase::insert(this_00,*(ListNodeBase **)this);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return *(long *)this + 0x10;
}

