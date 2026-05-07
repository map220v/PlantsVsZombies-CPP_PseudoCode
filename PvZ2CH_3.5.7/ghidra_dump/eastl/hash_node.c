// Class: eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>


/* eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, false>::~hash_node() */

void __thiscall
eastl::
hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
::~hash_node(hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,false>
             *this)

{
  EA::Text::FontServer::Face::~Face((Face *)(this + 0x28));
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)this);
  return;
}


/* eastl::hash_node<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, false>::~hash_node() */

void __thiscall
eastl::
hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false>
::~hash_node(hash_node<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,false>
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

