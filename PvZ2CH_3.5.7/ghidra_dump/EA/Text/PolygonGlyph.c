// Class: EA::Text::PolygonGlyph


/* EA::Text::PolygonGlyph::~PolygonGlyph() */

void __thiscall EA::Text::PolygonGlyph::~PolygonGlyph(PolygonGlyph *this)

{
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x30));
  eastl::
  vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::PolygonGlyph::PolygonGlyph() */

void __thiscall EA::Text::PolygonGlyph::PolygonGlyph(PolygonGlyph *this)

{
  ICoreAllocator *pIVar1;
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined2 *)this = 0;
  *(undefined2 *)(this + 2) = 0;
  pIVar1 = (ICoreAllocator *)Allocator::ICoreAllocator::GetDefaultAllocator();
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/PolygonGlyph",pIVar1);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 8),(CoreAllocatorAdapter *)aCStack_18);
  pIVar1 = (ICoreAllocator *)Allocator::ICoreAllocator::GetDefaultAllocator();
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/PolygonGlyph",pIVar1);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0x30),(CoreAllocatorAdapter *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

