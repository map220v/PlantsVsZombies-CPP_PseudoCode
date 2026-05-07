// Class: eastl::VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::set_allocator(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::set_allocator(VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *this,CoreAllocatorAdapter *param_1)

{
  FUN_053386e0(this + 0x18,*(undefined8 *)param_1,*(undefined4 *)(param_1 + 8));
  return;
}


/* eastl::VectorBase<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::VectorBase(VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this)

{
  ICoreAllocator *pIVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pIVar1 = (ICoreAllocator *)EA::Allocator::ICoreAllocator::GetDefaultAllocator();
  EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            ((CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> *)(this + 0x18),"EASTL vector",
             pIVar1);
  return;
}


/* eastl::VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~VectorBase(VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    FUN_053386ec(*(undefined8 *)(this + 0x18),lVar1,*(long *)(this + 0x10) - lVar1);
    return;
  }
  return;
}


/* eastl::VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoFree(Sexy::PrimeGlyphMesh::TextureUsageInfo*, unsigned long) */

void __thiscall
eastl::
VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoFree(VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,TextureUsageInfo *param_1,ulong param_2)

{
  if (param_1 != (TextureUsageInfo *)0x0) {
    FUN_053386ec(*(undefined8 *)(this + 0x18),param_1,param_2 << 4);
    return;
  }
  return;
}


/* eastl::VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::
VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoAllocate(VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 << 4,8,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::VectorBase(unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::VectorBase(VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1,CoreAllocatorAdapter *param_2)

{
  long lVar1;
  
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),(EAIOEASTLCoreAllocator *)param_2);
  lVar1 = DoAllocate(this,param_1);
  *(long *)this = lVar1;
  *(long *)(this + 8) = lVar1;
  *(ulong *)(this + 0x10) = lVar1 + param_1 * 0x10;
  return;
}


/* eastl::VectorBase<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 48ul, 8ul, 0ul,
   true, eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
::~VectorBase(VectorBase<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
              *this)

{
  if (*(long *)this != 0) {
    FUN_0533b3ac(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::TextureInfo*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> >::VectorBase(eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> const&) */

void __thiscall
eastl::
VectorBase<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
::VectorBase(VectorBase<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
             *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)(this + 0x18),param_1)
  ;
  return;
}


/* eastl::VectorBase<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~VectorBase() */

void __thiscall
eastl::VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~VectorBase(VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* eastl::VectorBase<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoFree(EA::Text::AnalysisInfo*, unsigned long) */

void __thiscall
eastl::
VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoFree(VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,AnalysisInfo *param_1,ulong param_2)

{
  if (param_1 != (AnalysisInfo *)0x0) {
    FUN_0533bcb4(*(undefined8 *)(this + 0x18),param_1,param_2 * 0x18);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoFree(EA::Text::GlyphInfo*, unsigned long) */

void __thiscall
eastl::
VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoFree(VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,GlyphInfo *param_1,ulong param_2)

{
  if (param_1 != (GlyphInfo *)0x0) {
    FUN_0533bcb4(*(undefined8 *)(this + 0x18),param_1,param_2 << 2);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoFree(EA::Text::GlyphLayoutInfo*, unsigned long) */

void __thiscall
eastl::
VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoFree(VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,GlyphLayoutInfo *param_1,ulong param_2)

{
  if (param_1 != (GlyphLayoutInfo *)0x0) {
    FUN_0533bcb4(*(undefined8 *)(this + 0x18),param_1,param_2 * 0x28);
    return;
  }
  return;
}


/* eastl::VectorBase<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoFree(unsigned long*,
   unsigned long) */

void __thiscall
eastl::VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoFree(VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,ulong *param_1,ulong param_2)

{
  if (param_1 != (ulong *)0x0) {
    FUN_0533bcb4(*(undefined8 *)(this + 0x18),param_1,param_2 << 3);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::
VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoAllocate(VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 * 0x18,8,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<unsigned short,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoAllocate(VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 << 1,2,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::
VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoAllocate(VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 << 2,4,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::
VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoAllocate(VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 * 0x28,8,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoAllocate(VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 << 3,8,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::VectorBase(eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::VectorBase(VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *this,fixed_vector_allocator *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x18),param_1);
  return;
}


/* eastl::VectorBase<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~VectorBase(VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
              *this)

{
  if (*(ulong *)this != 0) {
    fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::deallocate(this + 0x18,*(ulong *)this);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoFree(EA::Text::FontServer::Face**, unsigned long) */

void eastl::
     VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
     ::DoFree(Face **param_1,ulong param_2)

{
  if (param_2 != 0) {
    fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::deallocate(param_1 + 3,param_2);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::DoAllocate(unsigned
   long) */

void * __thiscall
eastl::
VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoAllocate(VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
             *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                       ((fixed_vector_allocator *)(this + 0x18),param_1 << 3,8,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<EA::Text::Analysis, eastl::allocator>::~VectorBase() */

void __thiscall
eastl::VectorBase<EA::Text::Analysis,eastl::allocator>::~VectorBase
          (VectorBase<EA::Text::Analysis,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0536184c();
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::Analysis, eastl::allocator>::VectorBase(unsigned long,
   eastl::allocator const&) */

void eastl::VectorBase<EA::Text::Analysis,eastl::allocator>::VectorBase
               (ulong param_1,allocator *param_2)

{
  long lVar1;
  
  lVar1 = FUN_05361a38(param_2);
  *(long *)param_1 = lVar1;
  *(long *)(param_1 + 8) = lVar1;
  *(long *)(param_1 + 0x10) = lVar1 + (long)param_2 * 0x10;
  return;
}


/* eastl::VectorBase<unsigned int,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::VectorBase(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::VectorBase<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
VectorBase(VectorBase<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,CoreAllocatorAdapter *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),(EAIOEASTLCoreAllocator *)param_1);
  return;
}


/* eastl::VectorBase<EA::Text::Vertex3D,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
~VectorBase(VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    FUN_0536869c(*(undefined8 *)(this + 0x18),lVar1,*(long *)(this + 0x10) - lVar1);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::Vertex3D,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoFree(EA::Text::Vertex3D*,
   unsigned long) */

void __thiscall
eastl::
VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoFree(VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,Vertex3D *param_1,ulong param_2)

{
  if (param_1 != (Vertex3D *)0x0) {
    FUN_0536869c(*(undefined8 *)(this + 0x18),param_1,param_2 * 0x18);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::Vertex3D,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::
VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoAllocate(VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 * 0x18,4,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
::~VectorBase(VectorBase<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
              *this)

{
  if (*(long *)this != 0) {
    FUN_0536f5c4(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~VectorBase(VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    FUN_0536f588(*(undefined8 *)(this + 0x18),lVar1,*(long *)(this + 0x10) - lVar1);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul,
   0ul, true, eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::~VectorBase(VectorBase<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
              *this)

{
  if (*(long *)this != 0) {
    FUN_0536f5d8(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true,
   eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>::
~VectorBase(VectorBase<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>
            *this)

{
  if (*(long *)this != 0) {
    FUN_0536f66c(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<unsigned long, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
~VectorBase(VectorBase<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
            *this)

{
  if (*(long *)this != 0) {
    FUN_0536f680(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoFree(EA::Text::Typesetter::Item*, unsigned long) */

void __thiscall
eastl::
VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoFree(VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,Item *param_1,ulong param_2)

{
  if (param_1 != (Item *)0x0) {
    FUN_0536f588(*(undefined8 *)(this + 0x18),param_1,param_2 << 6);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoAllocate(unsigned long)
    */

void * __thiscall
eastl::
VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoAllocate(VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *this,ulong param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                       ((CoreAllocatorAdapter *)(this + 0x18),param_1 << 6,8,0);
    return pvVar1;
  }
  return (void *)0x0;
}


/* eastl::VectorBase<unsigned short, eastl::fixed_vector_allocator<2ul, 1024ul, 2ul, 0ul, true,
   eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>::
~VectorBase(VectorBase<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>
            *this)

{
  if (*(long *)this != 0) {
    FUN_0537aca8(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::FeatureLookup, eastl::fixed_vector_allocator<176ul, 10ul, 8ul, 0ul,
   true, eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
::~VectorBase(VectorBase<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
              *this)

{
  if (*(long *)this != 0) {
    FUN_0537d888(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::OTFLookup*, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
::~VectorBase(VectorBase<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
              *this)

{
  if (*(long *)this != 0) {
    FUN_0537d974(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::BmpTextureInfo*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul,
   true, eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
::~VectorBase(VectorBase<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
              *this)

{
  if (*(long *)this != 0) {
    FUN_0540ee78(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::VectorBase<unsigned int,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~VectorBase() */

void __thiscall
eastl::VectorBase<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
~VectorBase(VectorBase<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
    FUN_0541437c(*(undefined8 *)(this + 0x18),lVar1,*(long *)(this + 0x10) - lVar1);
    return;
  }
  return;
}


/* eastl::VectorBase<EA::Text::TextureInfo*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> >::~VectorBase() */

void __thiscall
eastl::
VectorBase<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
::~VectorBase(VectorBase<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
              *this)

{
  if (*(long *)this != 0) {
    FUN_05414398(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}

