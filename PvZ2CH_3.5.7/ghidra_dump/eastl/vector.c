// Class: eastl::vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::vector<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::vector() */

void __thiscall
eastl::
vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::vector(vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~vector() */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~vector(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::vector(eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::vector(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,vector *param_1)

{
  ulong uVar1;
  TextureUsageInfo *pTVar2;
  
  uVar1 = FUN_053386c0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::VectorBase((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,uVar1,(CoreAllocatorAdapter *)(param_1 + 0x18));
  pTVar2 = uninitialized_copy_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*>
                     (*(TextureUsageInfo **)param_1,*(TextureUsageInfo **)(param_1 + 8),
                      *(TextureUsageInfo **)this);
  *(TextureUsageInfo **)(this + 8) = pTVar2;
  return;
}


/* Sexy::PrimeGlyphMesh::TextureUsageInfo* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoRealloc<Sexy::PrimeGlyphMesh::TextureUsageInfo*>(unsigned long,
   Sexy::PrimeGlyphMesh::TextureUsageInfo*, Sexy::PrimeGlyphMesh::TextureUsageInfo*) */

TextureUsageInfo * __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoRealloc<Sexy::PrimeGlyphMesh::TextureUsageInfo*>
          (vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1,TextureUsageInfo *param_2,TextureUsageInfo *param_3)

{
  TextureUsageInfo *pTVar1;
  
  pTVar1 = (TextureUsageInfo *)
           VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,param_1);
  uninitialized_copy_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*>
            (param_2,param_3,pTVar1);
  return pTVar1;
}


/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValueEnd(Sexy::PrimeGlyphMesh::TextureUsageInfo const&) */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoInsertValueEnd(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *this,TextureUsageInfo *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  TextureUsageInfo *pTVar3;
  TextureUsageInfo *pTVar4;
  undefined8 *puVar5;
  
  uVar2 = FUN_05338708(*(long *)(this + 8) - *(long *)this >> 4);
  pTVar3 = (TextureUsageInfo *)
           VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar2);
  pTVar4 = uninitialized_copy_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*>
                     (*(TextureUsageInfo **)this,*(TextureUsageInfo **)(this + 8),pTVar3);
  puVar5 = (undefined8 *)FUN_053386a0();
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar1;
  }
  VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(TextureUsageInfo **)this,
           *(long *)(this + 0x10) - (long)*(TextureUsageInfo **)this >> 4);
  *(TextureUsageInfo **)this = pTVar3;
  *(TextureUsageInfo **)(this + 8) = pTVar4 + 0x10;
  *(TextureUsageInfo **)(this + 0x10) = pTVar3 + uVar2 * 0x10;
  return;
}


/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::push_back(Sexy::PrimeGlyphMesh::TextureUsageInfo const&) */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::push_back(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this,TextureUsageInfo *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar3 + 0x10;
    puVar2 = (undefined8 *)FUN_053386a0(uVar3);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *puVar2 = *(undefined8 *)param_1;
      puVar2[1] = uVar1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoInsertValuesEnd(unsigned
   long, Sexy::PrimeGlyphMesh::TextureUsageInfo const&) */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoInsertValuesEnd(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *this,ulong param_1,TextureUsageInfo *param_2)

{
  ulong uVar1;
  TextureUsageInfo *pTVar2;
  ulong uVar3;
  TextureUsageInfo *pTVar4;
  long lVar5;
  
  pTVar2 = *(TextureUsageInfo **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pTVar2 >> 4)) {
    uninitialized_fill_n_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo,unsigned_long>
              (pTVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 0x10;
    return;
  }
  lVar5 = (long)pTVar2 - *(long *)this >> 4;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_05338708(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pTVar2 = (TextureUsageInfo *)
           VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar3);
  pTVar4 = uninitialized_copy_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*>
                     (*(TextureUsageInfo **)this,*(TextureUsageInfo **)(this + 8),pTVar2);
  uninitialized_fill_n_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo,unsigned_long>
            (pTVar4,param_1,param_2);
  VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(TextureUsageInfo **)this,
           *(long *)(this + 0x10) - (long)*(TextureUsageInfo **)this >> 4);
  *(TextureUsageInfo **)this = pTVar2;
  *(TextureUsageInfo **)(this + 0x10) = pTVar2 + uVar3 * 0x10;
  *(TextureUsageInfo **)(this + 8) = pTVar4 + param_1 * 0x10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::resize(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 4;
  local_8 = ___stack_chk_guard;
  if (uVar1 < param_1) {
    local_18 = 0;
    local_10 = 0;
    local_c = 0;
    DoInsertValuesEnd(this,param_1 - uVar1,(TextureUsageInfo *)&local_18);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
* __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::operator=(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this,vector *param_1)

{
  ulong uVar1;
  TextureUsageInfo *pTVar2;
  Analysis *pAVar3;
  Analysis *pAVar4;
  Analysis *pAVar5;
  
  if (param_1 != (vector *)this) {
    pAVar4 = *(Analysis **)param_1;
    pAVar5 = *(Analysis **)(param_1 + 8);
    uVar1 = FUN_053386c0(pAVar4,pAVar5);
    pAVar3 = *(Analysis **)this;
    if ((ulong)(*(long *)(this + 0x10) - (long)pAVar3 >> 4) < uVar1) {
      pTVar2 = DoRealloc<Sexy::PrimeGlyphMesh::TextureUsageInfo*>
                         (this,uVar1,(TextureUsageInfo *)pAVar4,(TextureUsageInfo *)pAVar5);
      VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(TextureUsageInfo **)this,
               *(long *)(this + 0x10) - (long)*(TextureUsageInfo **)this >> 4);
      *(TextureUsageInfo **)this = pTVar2;
      *(TextureUsageInfo **)(this + 0x10) = pTVar2 + uVar1 * 0x10;
      *(TextureUsageInfo **)(this + 8) = pTVar2 + uVar1 * 0x10;
    }
    else if ((ulong)(*(long *)(this + 8) - (long)pAVar3 >> 4) < uVar1) {
      copy<EA::Text::Analysis*,EA::Text::Analysis*>
                (pAVar4,pAVar4 + (*(long *)(this + 8) - (long)pAVar3),pAVar3);
      uninitialized_copy_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*>
                (*(TextureUsageInfo **)(this + 8) + (*(long *)param_1 - *(long *)this),
                 *(TextureUsageInfo **)(param_1 + 8),*(TextureUsageInfo **)(this + 8));
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 0x10;
    }
    else {
      copy<EA::Text::Analysis*,EA::Text::Analysis*>(pAVar4,pAVar5,pAVar3);
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 0x10;
    }
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::swap(eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >&) */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::swap(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,vector *param_1)

{
  bool bVar1;
  vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = EA::Allocator::operator==
                    ((CoreAllocatorAdapter *)(this + 0x18),(CoreAllocatorAdapter *)(param_1 + 0x18))
  ;
  if (bVar1) {
    std::__exception_ptr::exception_ptr::swap((exception_ptr *)this,(exception_ptr *)param_1);
    std::__exception_ptr::exception_ptr::swap
              ((exception_ptr *)(this + 8),(exception_ptr *)(param_1 + 8));
    std::__exception_ptr::exception_ptr::swap
              ((exception_ptr *)(this + 0x10),(exception_ptr *)(param_1 + 0x10));
  }
  else {
    vector(avStack_30,(vector *)this);
    operator=(this,param_1);
    operator=((vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)param_1,(vector *)avStack_30);
    ~vector(avStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::set_capacity(unsigned long)
    */

void __thiscall
eastl::
vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::set_capacity(vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *this,ulong param_1)

{
  TextureUsageInfo *pTVar1;
  long lVar2;
  ulong uVar3;
  vector<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0xffffffffffffffff) {
    uVar3 = (long)*(TextureUsageInfo **)(this + 8) - (long)*(TextureUsageInfo **)this >> 4;
    if (uVar3 < param_1) {
      pTVar1 = DoRealloc<Sexy::PrimeGlyphMesh::TextureUsageInfo*>
                         (this,param_1,*(TextureUsageInfo **)this,*(TextureUsageInfo **)(this + 8));
      VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<Sexy::PrimeGlyphMesh::TextureUsageInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(TextureUsageInfo **)this,
               *(long *)(this + 0x10) - (long)*(TextureUsageInfo **)this >> 4);
      *(TextureUsageInfo **)(this + 0x10) = pTVar1 + param_1 * 0x10;
      lVar2 = *(long *)this;
      *(TextureUsageInfo **)this = pTVar1;
      *(TextureUsageInfo **)(this + 8) = pTVar1 + (*(long *)(this + 8) - lVar2);
      goto LAB_05339fa4;
    }
    if (param_1 < uVar3) {
      resize(this,param_1);
    }
  }
  vector(avStack_30,(vector *)this);
  swap(this,(vector *)avStack_30);
  ~vector(avStack_30);
LAB_05339fa4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 48ul, 8ul, 0ul,
   true, eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
::~vector(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
          *this)

{
  if (*(long *)this != 0) {
    FUN_0533b3ac(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<EA::Text::TextureInfo*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> >::vector(eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> const&) */

void eastl::
     vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
     ::vector(fixed_vector_allocator *param_1)

{
  fixed_vector_allocator *in_x1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> *)(param_1 + 0x18),in_x1
            );
  return;
}


/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 48ul, 8ul, 0ul,
   true, eastl::allocator> >::DoInsertValueEnd(EA::Text::TextStyle const* const&) */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValueEnd(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
                   *this,TextStyle **param_1)

{
  long lVar1;
  TextStyle **ppTVar2;
  TextStyle **ppTVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_0533b3c0(*(long *)(this + 8) - *(long *)this >> 3);
  ppTVar2 = (TextStyle **)FUN_0533b3e8();
  ppTVar3 = uninitialized_copy_ptr<EA::Text::TextStyle_const**,EA::Text::TextStyle_const**,EA::Text::TextStyle_const**>
                      (*(TextStyle ***)this,*(TextStyle ***)(this + 8),ppTVar2);
  puVar4 = (undefined8 *)FUN_0533b390();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_1;
  }
  FUN_0533b3d0(this,*(undefined8 *)this);
  *(TextStyle ***)this = ppTVar2;
  *(TextStyle ***)(this + 8) = ppTVar3 + 1;
  *(TextStyle ***)(this + 0x10) = ppTVar2 + lVar1;
  return;
}


/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 48ul, 8ul, 0ul,
   true, eastl::allocator> >::push_back(EA::Text::TextStyle const* const&) */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
            *this,TextStyle **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0533b390(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
            *this,TextStyle **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0533b390(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<unsigned long, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::~vector() */

void __thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
~vector(vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* EA::Text::AnalysisInfo* eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoRealloc<EA::Text::AnalysisInfo*>(unsigned long, EA::Text::AnalysisInfo*,
   EA::Text::AnalysisInfo*) */

AnalysisInfo * __thiscall
eastl::
vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoRealloc<EA::Text::AnalysisInfo*>
          (vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1,AnalysisInfo *param_2,AnalysisInfo *param_3)

{
  AnalysisInfo *pAVar1;
  
  pAVar1 = (AnalysisInfo *)
           VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,param_1);
  uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
            (param_2,param_3,pAVar1);
  return pAVar1;
}


/* EA::Text::GlyphInfo* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoRealloc<EA::Text::GlyphInfo*>(unsigned long, EA::Text::GlyphInfo*, EA::Text::GlyphInfo*) */

GlyphInfo * __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoRealloc<EA::Text::GlyphInfo*>
          (vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  GlyphInfo *pGVar1;
  
  pGVar1 = (GlyphInfo *)
           VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,param_1);
  uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
            (param_2,param_3,pGVar1);
  return pGVar1;
}


/* EA::Text::GlyphLayoutInfo* eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoRealloc<EA::Text::GlyphLayoutInfo*>(unsigned long, EA::Text::GlyphLayoutInfo*,
   EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo * __thiscall
eastl::
vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoRealloc<EA::Text::GlyphLayoutInfo*>
          (vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  GlyphLayoutInfo *pGVar1;
  
  pGVar1 = (GlyphLayoutInfo *)
           VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,param_1);
  uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
            (param_2,param_3,pGVar1);
  return pGVar1;
}


/* eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
__thiscall
eastl::
vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
operator=(vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,vector *param_1)

{
  ulong uVar1;
  AnalysisInfo *pAVar2;
  RunInfo *pRVar3;
  RunInfo *pRVar4;
  RunInfo *pRVar5;
  
  if (param_1 != (vector *)this) {
    pRVar4 = *(RunInfo **)param_1;
    pRVar5 = *(RunInfo **)(param_1 + 8);
    uVar1 = FUN_0533bc7c(pRVar4,pRVar5);
    pRVar3 = *(RunInfo **)this;
    if ((ulong)((*(long *)(this + 0x10) - (long)pRVar3 >> 3) * -0x5555555555555555) < uVar1) {
      pAVar2 = DoRealloc<EA::Text::AnalysisInfo*>
                         (this,uVar1,(AnalysisInfo *)pRVar4,(AnalysisInfo *)pRVar5);
      VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(AnalysisInfo **)this,
               (*(long *)(this + 0x10) - (long)*(AnalysisInfo **)this >> 3) * -0x5555555555555555);
      *(AnalysisInfo **)this = pAVar2;
      *(AnalysisInfo **)(this + 0x10) = pAVar2 + uVar1 * 0x18;
      *(AnalysisInfo **)(this + 8) = pAVar2 + uVar1 * 0x18;
    }
    else if ((ulong)((*(long *)(this + 8) - (long)pRVar3 >> 3) * -0x5555555555555555) < uVar1) {
      copy<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                (pRVar4,pRVar4 + (*(long *)(this + 8) - (long)pRVar3),pRVar3);
      uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
                (*(AnalysisInfo **)(this + 8) + (*(long *)param_1 - *(long *)this),
                 *(AnalysisInfo **)(param_1 + 8),*(AnalysisInfo **)(this + 8));
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 0x18;
    }
    else {
      copy<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                (pRVar4,pRVar5,pRVar3);
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 0x18;
    }
  }
  return this;
}


/* unsigned short* eastl::vector<unsigned short,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoRealloc<unsigned
   short*>(unsigned long, unsigned short*, unsigned short*) */

ushort * __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoRealloc<unsigned_short*>
          (vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,param_1);
  uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>(param_2,param_3,puVar1);
  return puVar1;
}


/* eastl::vector<unsigned short, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<unsigned short,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
__thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
operator=(vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,vector *param_1)

{
  ulong uVar1;
  ushort *puVar2;
  OTFLookup **ppOVar3;
  OTFLookup **ppOVar4;
  OTFLookup **ppOVar5;
  
  if (param_1 != (vector *)this) {
    ppOVar4 = *(OTFLookup ***)param_1;
    ppOVar5 = *(OTFLookup ***)(param_1 + 8);
    uVar1 = FUN_0533bc90(ppOVar4,ppOVar5);
    ppOVar3 = *(OTFLookup ***)this;
    if ((ulong)(*(long *)(this + 0x10) - (long)ppOVar3 >> 1) < uVar1) {
      puVar2 = DoRealloc<unsigned_short*>(this,uVar1,(ushort *)ppOVar4,(ushort *)ppOVar5);
      basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      DoFree((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(wchar16 **)this,*(long *)(this + 0x10) - (long)*(wchar16 **)this >> 1);
      *(ushort **)this = puVar2;
      *(ushort **)(this + 0x10) = puVar2 + uVar1;
      *(ushort **)(this + 8) = puVar2 + uVar1;
    }
    else if ((ulong)(*(long *)(this + 8) - (long)ppOVar3 >> 1) < uVar1) {
      copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>
                (ppOVar4,(OTFLookup **)((long)ppOVar4 + (*(long *)(this + 8) - (long)ppOVar3)),
                 ppOVar3);
      uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                ((ushort *)((long)*(ushort **)(this + 8) + (*(long *)param_1 - *(long *)this)),
                 *(ushort **)(param_1 + 8),*(ushort **)(this + 8));
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 2;
    }
    else {
      copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>(ppOVar4,ppOVar5,ppOVar3);
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 2;
    }
  }
  return this;
}


/* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
__thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
operator=(vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,vector *param_1)

{
  ulong uVar1;
  GlyphInfo *pGVar2;
  GlyphInfo *pGVar3;
  GlyphInfo *pGVar4;
  
  if (param_1 != (vector *)this) {
    pGVar3 = *(GlyphInfo **)param_1;
    pGVar4 = *(GlyphInfo **)(param_1 + 8);
    uVar1 = FUN_0533bc9c(pGVar3,pGVar4);
    pGVar2 = *(GlyphInfo **)this;
    if ((ulong)(*(long *)(this + 0x10) - (long)pGVar2 >> 2) < uVar1) {
      pGVar2 = DoRealloc<EA::Text::GlyphInfo*>(this,uVar1,pGVar3,pGVar4);
      VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(GlyphInfo **)this,*(long *)(this + 0x10) - (long)*(GlyphInfo **)this >> 2);
      *(GlyphInfo **)this = pGVar2;
      *(GlyphInfo **)(this + 0x10) = pGVar2 + uVar1 * 4;
      *(GlyphInfo **)(this + 8) = pGVar2 + uVar1 * 4;
    }
    else if ((ulong)(*(long *)(this + 8) - (long)pGVar2 >> 2) < uVar1) {
      copy<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
                (pGVar3,pGVar3 + (*(long *)(this + 8) - (long)pGVar2),pGVar2);
      uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                (*(GlyphInfo **)(this + 8) + (*(long *)param_1 - *(long *)this),
                 *(GlyphInfo **)(param_1 + 8),*(GlyphInfo **)(this + 8));
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 4;
    }
    else {
      copy<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>(pGVar3,pGVar4,pGVar2);
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 4;
    }
  }
  return this;
}


/* eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
* __thiscall
eastl::
vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::operator=(vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this,vector *param_1)

{
  ulong uVar1;
  GlyphLayoutInfo *pGVar2;
  GlyphLayoutInfo *pGVar3;
  GlyphLayoutInfo *pGVar4;
  
  if (param_1 != (vector *)this) {
    pGVar3 = *(GlyphLayoutInfo **)param_1;
    pGVar4 = *(GlyphLayoutInfo **)(param_1 + 8);
    uVar1 = FUN_0533bc68(pGVar3,pGVar4);
    pGVar2 = *(GlyphLayoutInfo **)this;
    if ((ulong)((*(long *)(this + 0x10) - (long)pGVar2 >> 3) * -0x3333333333333333) < uVar1) {
      pGVar2 = DoRealloc<EA::Text::GlyphLayoutInfo*>(this,uVar1,pGVar3,pGVar4);
      VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(GlyphLayoutInfo **)this,
               (*(long *)(this + 0x10) - (long)*(GlyphLayoutInfo **)this >> 3) * -0x3333333333333333
              );
      *(GlyphLayoutInfo **)this = pGVar2;
      *(GlyphLayoutInfo **)(this + 0x10) = pGVar2 + uVar1 * 0x28;
      *(GlyphLayoutInfo **)(this + 8) = pGVar2 + uVar1 * 0x28;
    }
    else if ((ulong)((*(long *)(this + 8) - (long)pGVar2 >> 3) * -0x3333333333333333) < uVar1) {
      copy<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
                (pGVar3,pGVar3 + (*(long *)(this + 8) - (long)pGVar2),pGVar2);
      uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
                (*(GlyphLayoutInfo **)(this + 8) + (*(long *)param_1 - *(long *)this),
                 *(GlyphLayoutInfo **)(param_1 + 8),*(GlyphLayoutInfo **)(this + 8));
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 0x28;
    }
    else {
      copy<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>(pGVar3,pGVar4,pGVar2);
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 0x28;
    }
  }
  return this;
}


/* unsigned long* eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoRealloc<unsigned
   long*>(unsigned long, unsigned long*, unsigned long*) */

ulong * __thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoRealloc<unsigned_long*>
          (vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    ::DoAllocate((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                                  *)this,param_1);
  uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>(param_2,param_3,puVar1);
  return puVar1;
}


/* eastl::vector<unsigned long, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
__thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
operator=(vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,vector *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  OTFLookup **ppOVar3;
  OTFLookup **ppOVar4;
  OTFLookup **ppOVar5;
  
  if (param_1 != (vector *)this) {
    ppOVar4 = *(OTFLookup ***)param_1;
    ppOVar5 = *(OTFLookup ***)(param_1 + 8);
    uVar1 = FUN_0533bca8(ppOVar4,ppOVar5);
    ppOVar3 = *(OTFLookup ***)this;
    if ((ulong)(*(long *)(this + 0x10) - (long)ppOVar3 >> 3) < uVar1) {
      puVar2 = DoRealloc<unsigned_long*>(this,uVar1,(ulong *)ppOVar4,(ulong *)ppOVar5);
      VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      DoFree((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(ulong **)this,*(long *)(this + 0x10) - (long)*(ulong **)this >> 3);
      *(ulong **)this = puVar2;
      *(ulong **)(this + 0x10) = puVar2 + uVar1;
      *(ulong **)(this + 8) = puVar2 + uVar1;
    }
    else if ((ulong)(*(long *)(this + 8) - (long)ppOVar3 >> 3) < uVar1) {
      copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>
                (ppOVar4,(OTFLookup **)((long)ppOVar4 + (*(long *)(this + 8) - (long)ppOVar3)),
                 ppOVar3);
      uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                ((ulong *)((long)*(ulong **)(this + 8) + (*(long *)param_1 - *(long *)this)),
                 *(ulong **)(param_1 + 8),*(ulong **)(this + 8));
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 8;
    }
    else {
      copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>(ppOVar4,ppOVar5,ppOVar3);
      *(ulong *)(this + 8) = *(long *)this + uVar1 * 8;
    }
  }
  return this;
}


/* eastl::vector<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::vector(eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&) */

void eastl::
     vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
     ::vector(fixed_vector_allocator *param_1)

{
  fixed_vector_allocator *in_x1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector_allocator
            ((fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(param_1 + 0x18),in_x1);
  return;
}


/* eastl::vector<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >::~vector() */

void __thiscall
eastl::
vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::~vector(vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
          *this)

{
  if (*(ulong *)this != 0) {
    fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::deallocate(this + 0x18,*(ulong *)this);
    return;
  }
  return;
}


/* eastl::vector<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::DoInsertValueEnd(EA::Text::FontServer::Face* const&) */

void __thiscall
eastl::
vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::DoInsertValueEnd(vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                   *this,Face **param_1)

{
  ulong uVar1;
  Face **ppFVar2;
  Face **ppFVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_0535a828(*(long *)(this + 8) - *(long *)this >> 3);
  ppFVar2 = (Face **)VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                     ::DoAllocate((VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                                   *)this,uVar1);
  ppFVar3 = uninitialized_copy_ptr<EA::Text::FontServer::Face**,EA::Text::FontServer::Face**,EA::Text::FontServer::Face**>
                      (*(Face ***)this,*(Face ***)(this + 8),ppFVar2);
  puVar4 = (undefined8 *)FUN_0535a408();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_1;
  }
  VectorBase<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::DoFree((Face **)this,*(ulong *)this);
  *(Face ***)this = ppFVar2;
  *(Face ***)(this + 8) = ppFVar3 + 1;
  *(Face ***)(this + 0x10) = ppFVar2 + uVar1;
  return;
}


/* eastl::vector<EA::Text::FontServer::Face*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul,
   true, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >::push_back(EA::Text::FontServer::Face* const&) */

void __thiscall
eastl::
vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::push_back(vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            *this,Face **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0535a408(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::
vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
::push_back(vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
            *this,Face **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0535a408(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<EA::Text::Analysis, eastl::allocator>::~vector() */

void __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::~vector
          (vector<EA::Text::Analysis,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0536184c();
    return;
  }
  return;
}


/* eastl::vector<EA::Text::Analysis, eastl::allocator>::vector(eastl::vector<EA::Text::Analysis,
   eastl::allocator> const&) */

void __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::vector
          (vector<EA::Text::Analysis,eastl::allocator> *this,vector *param_1)

{
  allocator *paVar1;
  Analysis *pAVar2;
  
  paVar1 = (allocator *)FUN_053619ec(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  VectorBase<EA::Text::Analysis,eastl::allocator>::VectorBase((ulong)this,paVar1);
  pAVar2 = uninitialized_copy_ptr<EA::Text::Analysis*,EA::Text::Analysis*,EA::Text::Analysis*>
                     (*(Analysis **)param_1,*(Analysis **)(param_1 + 8),*(Analysis **)this);
  *(Analysis **)(this + 8) = pAVar2;
  return;
}


/* eastl::vector<EA::Text::Analysis, eastl::allocator>::DoInsertValuesEnd(unsigned long,
   EA::Text::Analysis const&) */

void __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::DoInsertValuesEnd
          (vector<EA::Text::Analysis,eastl::allocator> *this,ulong param_1,Analysis *param_2)

{
  ulong uVar1;
  Analysis *pAVar2;
  ulong uVar3;
  Analysis *pAVar4;
  long lVar5;
  
  pAVar2 = *(Analysis **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pAVar2 >> 4)) {
    uninitialized_fill_n_ptr<EA::Text::Analysis,unsigned_long>(pAVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 0x10;
    return;
  }
  lVar5 = (long)pAVar2 - *(long *)this >> 4;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_05361a1c(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pAVar2 = (Analysis *)FUN_05361a38(uVar3);
  pAVar4 = uninitialized_copy_ptr<EA::Text::Analysis*,EA::Text::Analysis*,EA::Text::Analysis*>
                     (*(Analysis **)this,*(Analysis **)(this + 8),pAVar2);
  uninitialized_fill_n_ptr<EA::Text::Analysis,unsigned_long>(pAVar4,param_1,param_2);
  FUN_05361a10(*(undefined8 *)this);
  *(Analysis **)this = pAVar2;
  *(Analysis **)(this + 0x10) = pAVar2 + uVar3 * 0x10;
  *(Analysis **)(this + 8) = pAVar4 + param_1 * 0x10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::Analysis, eastl::allocator>::resize(unsigned long) */

void __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::resize
          (vector<EA::Text::Analysis,eastl::allocator> *this,ulong param_1)

{
  ulong uVar1;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  undefined1 local_c;
  byte local_b;
  long local_8;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 4;
  local_8 = ___stack_chk_guard;
  if (uVar1 < param_1) {
    local_10 = local_10 & 0x80;
    local_18 = 0;
    local_b = local_b & 0xf8;
    local_14 = 0;
    local_c = 0;
    DoInsertValuesEnd(this,param_1 - uVar1,(Analysis *)&local_18);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::Analysis, eastl::allocator>::DoInsertValue(EA::Text::Analysis*,
   EA::Text::Analysis const&) */

void __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::DoInsertValue
          (vector<EA::Text::Analysis,eastl::allocator> *this,Analysis *param_1,Analysis *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  Analysis *pAVar3;
  long lVar4;
  Analysis *pAVar5;
  
  pAVar5 = *(Analysis **)(this + 8);
  if (pAVar5 == *(Analysis **)(this + 0x10)) {
    lVar4 = FUN_05361a1c((long)pAVar5 - *(long *)this >> 4);
    pAVar5 = (Analysis *)FUN_05361a38();
    pAVar3 = uninitialized_copy_ptr<EA::Text::Analysis*,EA::Text::Analysis*,EA::Text::Analysis*>
                       (*(Analysis **)this,param_1,pAVar5);
    puVar2 = (undefined8 *)FUN_05361844();
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_2 + 8);
      *puVar2 = *(undefined8 *)param_2;
      puVar2[1] = uVar1;
    }
    pAVar3 = uninitialized_copy_ptr<EA::Text::Analysis*,EA::Text::Analysis*,EA::Text::Analysis*>
                       (param_1,*(Analysis **)(this + 8),pAVar3 + 0x10);
    FUN_05361a10(*(undefined8 *)this);
    *(Analysis **)this = pAVar5;
    *(Analysis **)(this + 8) = pAVar3;
    *(Analysis **)(this + 0x10) = pAVar5 + lVar4 * 0x10;
  }
  else {
    if ((param_1 <= param_2) && (param_2 < pAVar5)) {
      param_2 = param_2 + 0x10;
    }
    puVar2 = (undefined8 *)FUN_05361844(pAVar5);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(pAVar5 + -8);
      *puVar2 = *(undefined8 *)(pAVar5 + -0x10);
      puVar2[1] = uVar1;
    }
    copy_backward<EA::Text::Analysis*,EA::Text::Analysis*>(param_1,pAVar5 + -0x10,pAVar5);
    lVar4 = *(long *)(this + 8);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(long *)(this + 8) = lVar4 + 0x10;
  }
  return;
}


/* eastl::vector<EA::Text::Analysis, eastl::allocator>::insert(EA::Text::Analysis*,
   EA::Text::Analysis const&) */

Analysis * __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::insert
          (vector<EA::Text::Analysis,eastl::allocator> *this,Analysis *param_1,Analysis *param_2)

{
  undefined8 uVar1;
  Analysis *pAVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  pAVar2 = *(Analysis **)(this + 8);
  lVar4 = *(long *)this;
  if ((param_1 == pAVar2) && (pAVar2 != *(Analysis **)(this + 0x10))) {
    *(Analysis **)(this + 8) = pAVar2 + 0x10;
    puVar3 = (undefined8 *)FUN_05361844();
    lVar5 = lVar4;
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_2 + 8);
      *puVar3 = *(undefined8 *)param_2;
      puVar3[1] = uVar1;
      return param_1;
    }
  }
  else {
    DoInsertValue(this,param_1,param_2);
    lVar5 = *(long *)this;
  }
  return param_1 + (lVar5 - lVar4);
}


/* eastl::vector<EA::Text::Analysis,
   eastl::allocator>::TEMPNAMEPLACEHOLDERVALUE(eastl::vector<EA::Text::Analysis, eastl::allocator>
   const&) */

vector<EA::Text::Analysis,eastl::allocator> * __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::operator=
          (vector<EA::Text::Analysis,eastl::allocator> *this,vector *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  Analysis *pAVar4;
  Analysis *pAVar5;
  Analysis *pAVar6;
  
  if (param_1 != (vector *)this) {
    pAVar5 = *(Analysis **)param_1;
    pAVar6 = *(Analysis **)(param_1 + 8);
    uVar2 = FUN_053619ec(pAVar5,pAVar6);
    pAVar4 = *(Analysis **)this;
    if ((ulong)(*(long *)(this + 0x10) - (long)pAVar4 >> 4) < uVar2) {
      lVar3 = FUN_053635ec(uVar2,pAVar5,pAVar6);
      lVar1 = lVar3 + uVar2 * 0x10;
      FUN_05361a10(*(undefined8 *)this);
      *(long *)this = lVar3;
      *(long *)(this + 0x10) = lVar1;
      *(long *)(this + 8) = lVar1;
    }
    else if ((ulong)(*(long *)(this + 8) - (long)pAVar4 >> 4) < uVar2) {
      copy<EA::Text::Analysis*,EA::Text::Analysis*>
                (pAVar5,pAVar5 + (*(long *)(this + 8) - (long)pAVar4),pAVar4);
      uninitialized_copy_ptr<EA::Text::Analysis*,EA::Text::Analysis*,EA::Text::Analysis*>
                (*(Analysis **)(this + 8) + (*(long *)param_1 - *(long *)this),
                 *(Analysis **)(param_1 + 8),*(Analysis **)(this + 8));
      *(ulong *)(this + 8) = *(long *)this + uVar2 * 0x10;
    }
    else {
      copy<EA::Text::Analysis*,EA::Text::Analysis*>(pAVar5,pAVar6,pAVar4);
      *(ulong *)(this + 8) = *(long *)this + uVar2 * 0x10;
    }
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::Analysis, eastl::allocator>::swap(eastl::vector<EA::Text::Analysis,
   eastl::allocator>&) */

void __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::swap
          (vector<EA::Text::Analysis,eastl::allocator> *this,vector *param_1)

{
  char cVar1;
  vector<EA::Text::Analysis,eastl::allocator> avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_05361858();
  if (cVar1 == '\0') {
    vector(avStack_28,(vector *)this);
    operator=(this,param_1);
    operator=((vector<EA::Text::Analysis,eastl::allocator> *)param_1,(vector *)avStack_28);
    ~vector(avStack_28);
  }
  else {
    std::__exception_ptr::exception_ptr::swap((exception_ptr *)this,(exception_ptr *)param_1);
    std::__exception_ptr::exception_ptr::swap
              ((exception_ptr *)(this + 8),(exception_ptr *)(param_1 + 8));
    std::__exception_ptr::exception_ptr::swap
              ((exception_ptr *)(this + 0x10),(exception_ptr *)(param_1 + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::Analysis, eastl::allocator>::set_capacity(unsigned long) */

void __thiscall
eastl::vector<EA::Text::Analysis,eastl::allocator>::set_capacity
          (vector<EA::Text::Analysis,eastl::allocator> *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  vector<EA::Text::Analysis,eastl::allocator> avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0xffffffffffffffff) {
    uVar3 = *(long *)(this + 8) - *(long *)this >> 4;
    if (uVar3 < param_1) {
      lVar1 = FUN_053635ec(param_1,*(long *)this);
      FUN_05361a10(*(undefined8 *)this);
      *(ulong *)(this + 0x10) = lVar1 + param_1 * 0x10;
      lVar2 = *(long *)this;
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1 + (*(long *)(this + 8) - lVar2);
      goto LAB_05364d98;
    }
    if (param_1 < uVar3) {
      resize(this,param_1);
    }
  }
  vector(avStack_28,(vector *)this);
  swap(this,(vector *)avStack_28);
  ~vector(avStack_28);
LAB_05364d98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<unsigned int, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::vector(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
vector(vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *this
      ,CoreAllocatorAdapter *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  EA::Allocator::EAIOEASTLCoreAllocator::EAIOEASTLCoreAllocator
            ((EAIOEASTLCoreAllocator *)(this + 0x18),(EAIOEASTLCoreAllocator *)param_1);
  return;
}


/* eastl::vector<unsigned long, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValuesEnd(unsigned long, unsigned long const&) */

void __thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValuesEnd(vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *this,ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  puVar2 = *(ulong **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar2 >> 3)) {
    uninitialized_fill_n_ptr<unsigned_long,unsigned_long>(puVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 8;
    return;
  }
  lVar5 = (long)puVar2 - *(long *)this >> 3;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_05365190(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  puVar2 = (ulong *)VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    ::DoAllocate((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                                  *)this,uVar3);
  puVar4 = uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                     (*(ulong **)this,*(ulong **)(this + 8),puVar2);
  uninitialized_fill_n_ptr<unsigned_long,unsigned_long>(puVar4,param_1,param_2);
  VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  DoFree((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)this,*(ulong **)this,*(long *)(this + 0x10) - (long)*(ulong **)this >> 3);
  *(ulong **)this = puVar2;
  *(ulong **)(this + 0x10) = puVar2 + uVar3;
  *(ulong **)(this + 8) = puVar4 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<unsigned long, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::resize(unsigned long) */

void __thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
resize(vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,ulong param_1)

{
  ulong uVar1;
  ulong local_10;
  long local_8;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  local_8 = ___stack_chk_guard;
  if (uVar1 < param_1) {
    local_10 = 0;
    DoInsertValuesEnd(this,param_1 - uVar1,&local_10);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::Vertex3D,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~vector() */

void __thiscall
eastl::vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~vector(vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* eastl::vector<EA::Text::Vertex3D,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoInsertValuesEnd(unsigned
   long, EA::Text::Vertex3D const&) */

void __thiscall
eastl::vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoInsertValuesEnd(vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *this,ulong param_1,Vertex3D *param_2)

{
  ulong uVar1;
  Vertex3D *pVVar2;
  ulong uVar3;
  Vertex3D *pVVar4;
  long lVar5;
  
  pVVar2 = *(Vertex3D **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pVVar2 >> 3) * -0x5555555555555555)) {
    uninitialized_fill_n_ptr<EA::Text::Vertex3D,unsigned_long>(pVVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 0x18;
    return;
  }
  lVar5 = ((long)pVVar2 - *(long *)this >> 3) * -0x5555555555555555;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_053686bc(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pVVar2 = (Vertex3D *)
           VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar3);
  pVVar4 = uninitialized_copy_ptr<EA::Text::Vertex3D*,EA::Text::Vertex3D*,EA::Text::Vertex3D*>
                     (*(Vertex3D **)this,*(Vertex3D **)(this + 8),pVVar2);
  uninitialized_fill_n_ptr<EA::Text::Vertex3D,unsigned_long>(pVVar4,param_1,param_2);
  VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(Vertex3D **)this,
           (*(long *)(this + 0x10) - (long)*(Vertex3D **)this >> 3) * -0x5555555555555555);
  *(Vertex3D **)this = pVVar2;
  *(Vertex3D **)(this + 0x10) = pVVar2 + uVar3 * 0x18;
  *(Vertex3D **)(this + 8) = pVVar4 + param_1 * 0x18;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::Vertex3D,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::resize(vector<EA::Text::Vertex3D,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,ulong param_1)

{
  long lVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  lVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  local_8 = ___stack_chk_guard;
  if ((ulong)(lVar1 * -0x5555555555555555) < param_1) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    DoInsertValuesEnd(this,param_1 + lVar1 * 0x5555555555555555,(Vertex3D *)&local_20);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x18;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<unsigned short, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValuesEnd(unsigned long, unsigned short const&) */

void __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValuesEnd(vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *this,ulong param_1,ushort *param_2)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  
  puVar2 = *(ushort **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar2 >> 1)) {
    uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 2;
    return;
  }
  lVar5 = (long)puVar2 - *(long *)this >> 1;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_053686cc(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  puVar2 = (ushort *)
           VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar3);
  puVar4 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                     (*(ushort **)this,*(ushort **)(this + 8),puVar2);
  uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar4,param_1,param_2);
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::DoFree
            ((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(wchar16 **)this,*(long *)(this + 0x10) - (long)*(wchar16 **)this >> 1);
  *(ushort **)this = puVar2;
  *(ushort **)(this + 0x10) = puVar2 + uVar3;
  *(ushort **)(this + 8) = puVar4 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<unsigned short, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::resize(unsigned long) */

void __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
resize(vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,ulong param_1)

{
  ulong uVar1;
  ushort local_a;
  long local_8;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 1;
  local_8 = ___stack_chk_guard;
  if (uVar1 < param_1) {
    local_a = 0;
    DoInsertValuesEnd(this,param_1 - uVar1,&local_a);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
::~vector(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
          *this)

{
  if (*(long *)this != 0) {
    FUN_0536f5c4(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~vector(vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* eastl::vector<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul, 0ul,
   true, eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::~vector(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
          *this)

{
  if (*(long *)this != 0) {
    FUN_0536f5d8(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>::
~vector(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>
        *this)

{
  if (*(long *)this != 0) {
    FUN_0536f66c(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
~vector(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
        *this)

{
  if (*(long *)this != 0) {
    FUN_0536f680(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValueEnd(EA::Text::AnalysisInfo const&) */

void __thiscall
eastl::
vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValueEnd(vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this,AnalysisInfo *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  AnalysisInfo *pAVar3;
  AnalysisInfo *pAVar4;
  undefined8 *puVar5;
  
  uVar2 = FUN_0536f63c((*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555);
  pAVar3 = (AnalysisInfo *)
           VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar2);
  pAVar4 = uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
                     (*(AnalysisInfo **)this,*(AnalysisInfo **)(this + 8),pAVar3);
  puVar5 = (undefined8 *)FUN_0536f2a8();
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar1;
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  }
  VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(AnalysisInfo **)this,
           (*(long *)(this + 0x10) - (long)*(AnalysisInfo **)this >> 3) * -0x5555555555555555);
  *(AnalysisInfo **)this = pAVar3;
  *(AnalysisInfo **)(this + 8) = pAVar4 + 0x18;
  *(AnalysisInfo **)(this + 0x10) = pAVar3 + uVar2 * 0x18;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::push_back() */

void __thiscall
eastl::
vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
push_back(vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_10;
  byte local_e;
  long local_8;
  
  uVar2 = *(ulong *)(this + 8);
  local_8 = ___stack_chk_guard;
  if (uVar2 < *(ulong *)(this + 0x10)) {
    lVar3 = uVar2 + 0x18;
    *(long *)(this + 8) = lVar3;
    puVar1 = (undefined8 *)FUN_0536f2a8(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) & 0x80;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(ushort *)(puVar1 + 2) = *(ushort *)(puVar1 + 2) & 0xf07f;
      *(undefined1 *)((long)puVar1 + 0x11) = 0;
      *(byte *)((long)puVar1 + 0x12) = *(byte *)((long)puVar1 + 0x12) & 0xfc;
    }
  }
  else {
    local_e = local_e & 0xfc;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    DoInsertValueEnd(this,(AnalysisInfo *)&local_20);
    lVar3 = *(long *)(this + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 + -0x18);
}


/* eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoInsertValuesEnd(unsigned
   long, EA::Text::AnalysisInfo const&) */

void __thiscall
eastl::
vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValuesEnd(vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *this,ulong param_1,AnalysisInfo *param_2)

{
  ulong uVar1;
  AnalysisInfo *pAVar2;
  ulong uVar3;
  AnalysisInfo *pAVar4;
  long lVar5;
  
  pAVar2 = *(AnalysisInfo **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pAVar2 >> 3) * -0x5555555555555555)) {
    uninitialized_fill_n_ptr<EA::Text::AnalysisInfo,unsigned_long>(pAVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 0x18;
    return;
  }
  lVar5 = ((long)pAVar2 - *(long *)this >> 3) * -0x5555555555555555;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0536f63c(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pAVar2 = (AnalysisInfo *)
           VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar3);
  pAVar4 = uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
                     (*(AnalysisInfo **)this,*(AnalysisInfo **)(this + 8),pAVar2);
  uninitialized_fill_n_ptr<EA::Text::AnalysisInfo,unsigned_long>(pAVar4,param_1,param_2);
  VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(AnalysisInfo **)this,
           (*(long *)(this + 0x10) - (long)*(AnalysisInfo **)this >> 3) * -0x5555555555555555);
  *(AnalysisInfo **)this = pAVar2;
  *(AnalysisInfo **)(this + 0x10) = pAVar2 + uVar3 * 0x18;
  *(AnalysisInfo **)(this + 8) = pAVar4 + param_1 * 0x18;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
resize(vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,ulong param_1)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_10;
  byte local_e;
  long local_8;
  
  lVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  local_8 = ___stack_chk_guard;
  if ((ulong)(lVar1 * -0x5555555555555555) < param_1) {
    local_e = local_e & 0xfc;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    DoInsertValuesEnd(this,param_1 + lVar1 * 0x5555555555555555,(AnalysisInfo *)&local_20);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x18;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoInsertValuesEnd(unsigned
   long, EA::Text::GlyphInfo const&) */

void __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValuesEnd(vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *this,ulong param_1,GlyphInfo *param_2)

{
  ulong uVar1;
  GlyphInfo *pGVar2;
  ulong uVar3;
  GlyphInfo *pGVar4;
  long lVar5;
  
  pGVar2 = *(GlyphInfo **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)pGVar2 >> 2)) {
    uninitialized_fill_n_ptr<EA::Text::GlyphInfo,unsigned_long>(pGVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 4;
    return;
  }
  lVar5 = (long)pGVar2 - *(long *)this >> 2;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0536f61c(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pGVar2 = (GlyphInfo *)
           VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar3);
  pGVar4 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                     (*(GlyphInfo **)this,*(GlyphInfo **)(this + 8),pGVar2);
  uninitialized_fill_n_ptr<EA::Text::GlyphInfo,unsigned_long>(pGVar4,param_1,param_2);
  VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(GlyphInfo **)this,*(long *)(this + 0x10) - (long)*(GlyphInfo **)this >> 2);
  *(GlyphInfo **)this = pGVar2;
  *(GlyphInfo **)(this + 0x10) = pGVar2 + uVar3 * 4;
  *(GlyphInfo **)(this + 8) = pGVar4 + param_1 * 4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
resize(vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,ulong param_1)

{
  ulong uVar1;
  GlyphInfo local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  long local_8;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 2;
  local_8 = ___stack_chk_guard;
  if (uVar1 < param_1) {
    local_10 = (GlyphInfo)0x0;
    local_f = local_f & 0x80;
    local_e = 0;
    local_d = 0;
    DoInsertValuesEnd(this,param_1 - uVar1,&local_10);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::DoInsertValuesEnd(unsigned
   long, EA::Text::GlyphLayoutInfo const&) */

void __thiscall
eastl::
vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoInsertValuesEnd(vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    *this,ulong param_1,GlyphLayoutInfo *param_2)

{
  ulong uVar1;
  GlyphLayoutInfo *pGVar2;
  ulong uVar3;
  GlyphLayoutInfo *pGVar4;
  long lVar5;
  
  pGVar2 = *(GlyphLayoutInfo **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pGVar2 >> 3) * -0x3333333333333333)) {
    uninitialized_fill_n_ptr<EA::Text::GlyphLayoutInfo,unsigned_long>(pGVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 0x28;
    return;
  }
  lVar5 = ((long)pGVar2 - *(long *)this >> 3) * -0x3333333333333333;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0536f5b4(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pGVar2 = (GlyphLayoutInfo *)
           VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar3);
  pGVar4 = uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
                     (*(GlyphLayoutInfo **)this,*(GlyphLayoutInfo **)(this + 8),pGVar2);
  uninitialized_fill_n_ptr<EA::Text::GlyphLayoutInfo,unsigned_long>(pGVar4,param_1,param_2);
  VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(GlyphLayoutInfo **)this,
           (*(long *)(this + 0x10) - (long)*(GlyphLayoutInfo **)this >> 3) * -0x3333333333333333);
  *(GlyphLayoutInfo **)this = pGVar2;
  *(GlyphLayoutInfo **)(this + 0x10) = pGVar2 + uVar3 * 0x28;
  *(GlyphLayoutInfo **)(this + 8) = pGVar4 + param_1 * 0x28;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::resize(vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
         *this,ulong param_1)

{
  long lVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  lVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  local_8 = ___stack_chk_guard;
  if ((ulong)(lVar1 * -0x3333333333333333) < param_1) {
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    DoInsertValuesEnd(this,param_1 + lVar1 * 0x3333333333333333,(GlyphLayoutInfo *)&local_30);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x28;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValueEnd(unsigned long const&) */

void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>::
DoInsertValueEnd(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>
                 *this,ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  lVar1 = FUN_0536f778(*(long *)(this + 8) - *(long *)this >> 3);
  puVar2 = (ulong *)FUN_0536f7ec();
  puVar3 = uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                     (*(ulong **)this,*(ulong **)(this + 8),puVar2);
  puVar4 = (ulong *)FUN_0536f2a8();
  if (puVar4 != (ulong *)0x0) {
    *puVar4 = *param_1;
  }
  FUN_0536f788(this,*(undefined8 *)this);
  *(ulong **)this = puVar2;
  *(ulong **)(this + 8) = puVar3 + 1;
  *(ulong **)(this + 0x10) = puVar2 + lVar1;
  return;
}


/* eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true,
   eastl::allocator> >::push_back(unsigned long const&) */

void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>::
push_back(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>
          *this,ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (ulong *)FUN_0536f2a8(uVar2);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>::
push_back(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>
          *this,ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (ulong *)FUN_0536f2a8(uVar2);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValueEnd(unsigned long const&) */

void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
DoInsertValueEnd(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
                 *this,ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  lVar1 = FUN_0536f798(*(long *)(this + 8) - *(long *)this >> 3);
  puVar2 = (ulong *)FUN_0536f7d8();
  puVar3 = uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                     (*(ulong **)this,*(ulong **)(this + 8),puVar2);
  puVar4 = (ulong *)FUN_0536f2a8();
  if (puVar4 != (ulong *)0x0) {
    *puVar4 = *param_1;
  }
  FUN_0536f7a8(this,*(undefined8 *)this);
  *(ulong **)this = puVar2;
  *(ulong **)(this + 8) = puVar3 + 1;
  *(ulong **)(this + 0x10) = puVar2 + lVar1;
  return;
}


/* eastl::vector<unsigned long, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::push_back(unsigned long const&) */

void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
push_back(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
          *this,ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (ulong *)FUN_0536f2a8(uVar2);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
push_back(vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
          *this,ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (ulong *)FUN_0536f2a8(uVar2);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValueEnd(EA::Text::Typesetter::Item const&) */

void __thiscall
eastl::
vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoInsertValueEnd(vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *this,Item *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  Item *pIVar3;
  Item *pIVar4;
  undefined8 *puVar5;
  
  uVar2 = FUN_0536f60c(*(long *)(this + 8) - *(long *)this >> 6);
  pIVar3 = (Item *)VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   ::DoAllocate((VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                                 *)this,uVar2);
  pIVar4 = uninitialized_copy_ptr<EA::Text::Typesetter::Item*,EA::Text::Typesetter::Item*,EA::Text::Typesetter::Item*>
                     (*(Item **)this,*(Item **)(this + 8),pIVar3);
  puVar5 = (undefined8 *)FUN_0536f2a8();
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
    puVar5[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar5[4] = *(undefined8 *)(param_1 + 0x20);
    puVar5[5] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar5[6] = *(undefined8 *)(param_1 + 0x30);
    puVar5[7] = uVar1;
  }
  VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(Item **)this,*(long *)(this + 0x10) - (long)*(Item **)this >> 6);
  *(Item **)this = pIVar3;
  *(Item **)(this + 8) = pIVar4 + 0x40;
  *(Item **)(this + 0x10) = pIVar3 + uVar2 * 0x40;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::Typesetter::Item,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::push_back() */

void __thiscall
eastl::
vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::push_back(vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  uVar2 = *(ulong *)(this + 8);
  local_8 = ___stack_chk_guard;
  if (uVar2 < *(ulong *)(this + 0x10)) {
    lVar3 = uVar2 + 0x40;
    *(long *)(this + 8) = lVar3;
    puVar1 = (undefined8 *)FUN_0536f2a8(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    DoInsertValueEnd(this,(Item *)&local_48);
    lVar3 = *(long *)(this + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 + -0x40);
}


/* eastl::vector<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul, 0ul,
   true, eastl::allocator> >::DoInsertValueEnd(EA::Text::Typesetter::RunInfo const&) */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValueEnd(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
                   *this,RunInfo *param_1)

{
  undefined8 uVar1;
  long lVar2;
  RunInfo *pRVar3;
  RunInfo *pRVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_0536f64c((*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555);
  pRVar3 = (RunInfo *)FUN_0536f800();
  pRVar4 = uninitialized_copy_ptr<EA::Text::Typesetter::RunInfo*,EA::Text::Typesetter::RunInfo*,EA::Text::Typesetter::RunInfo*>
                     (*(RunInfo **)this,*(RunInfo **)(this + 8),pRVar3);
  puVar5 = (undefined8 *)FUN_0536f2a8();
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar1;
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  }
  FUN_0536f65c(this,*(undefined8 *)this);
  *(RunInfo **)this = pRVar3;
  *(RunInfo **)(this + 8) = pRVar4 + 0x18;
  *(RunInfo **)(this + 0x10) = pRVar3 + lVar2 * 0x18;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul, 0ul,
   true, eastl::allocator> >::push_back() */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
            *this)

{
  RunInfo *pRVar1;
  long lVar2;
  RunInfo aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(ulong *)(this + 8) < *(ulong *)(this + 0x10)) {
    lVar2 = *(ulong *)(this + 8) + 0x18;
    *(long *)(this + 8) = lVar2;
    pRVar1 = (RunInfo *)FUN_0536f2a8();
    if (pRVar1 != (RunInfo *)0x0) {
      EA::Text::Typesetter::RunInfo::RunInfo(pRVar1,0xffffffff,0,0,0);
      lVar2 = *(long *)(this + 8);
    }
  }
  else {
    EA::Text::Typesetter::RunInfo::RunInfo(aRStack_20,0xffffffff,0,0,0);
    DoInsertValueEnd(this,aRStack_20);
    lVar2 = *(long *)(this + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 + -0x18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
            *this)

{
  RunInfo *pRVar1;
  long lVar2;
  RunInfo aRStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(ulong *)(this + 8) < *(ulong *)(this + 0x10)) {
    lVar2 = *(ulong *)(this + 8) + 0x18;
    *(long *)(this + 8) = lVar2;
    pRVar1 = (RunInfo *)FUN_0536f2a8();
    if (pRVar1 != (RunInfo *)0x0) {
      EA::Text::Typesetter::RunInfo::RunInfo(pRVar1,0xffffffff,0,0,0);
      lVar2 = *(long *)(this + 8);
    }
  }
  else {
    EA::Text::Typesetter::RunInfo::RunInfo(aRStack_20,0xffffffff,0,0,0);
    DoInsertValueEnd(this,aRStack_20);
    lVar2 = *(long *)(this + 8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 + -0x18);
}


/* eastl::vector<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul, 0ul,
   true, eastl::allocator> >::push_back(EA::Text::Typesetter::RunInfo const&) */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
            *this,RunInfo *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar3 + 0x18;
    puVar2 = (undefined8 *)FUN_0536f2a8(uVar3);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *puVar2 = *(undefined8 *)param_1;
      puVar2[1] = uVar1;
      puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
            *this,RunInfo *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar3 + 0x18;
    puVar2 = (undefined8 *)FUN_0536f2a8(uVar3);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *puVar2 = *(undefined8 *)param_1;
      puVar2[1] = uVar1;
      puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul, 0ul,
   true, eastl::allocator> >::DoInsertValuesEnd(unsigned long, EA::Text::Typesetter::RunInfo const&)
    */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValuesEnd(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
                    *this,ulong param_1,RunInfo *param_2)

{
  ulong uVar1;
  RunInfo *pRVar2;
  ulong uVar3;
  RunInfo *pRVar4;
  long lVar5;
  
  pRVar2 = *(RunInfo **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pRVar2 >> 3) * -0x5555555555555555)) {
    uninitialized_fill_n_ptr<EA::Text::Typesetter::RunInfo,unsigned_long>(pRVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 0x18;
    return;
  }
  lVar5 = ((long)pRVar2 - *(long *)this >> 3) * -0x5555555555555555;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0536f64c(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pRVar2 = (RunInfo *)FUN_0536f800(uVar3);
  pRVar4 = uninitialized_copy_ptr<EA::Text::Typesetter::RunInfo*,EA::Text::Typesetter::RunInfo*,EA::Text::Typesetter::RunInfo*>
                     (*(RunInfo **)this,*(RunInfo **)(this + 8),pRVar2);
  uninitialized_fill_n_ptr<EA::Text::Typesetter::RunInfo,unsigned_long>(pRVar4,param_1,param_2);
  FUN_0536f65c(this,*(undefined8 *)this);
  *(RunInfo **)this = pRVar2;
  *(RunInfo **)(this + 0x10) = pRVar2 + uVar3 * 0x18;
  *(RunInfo **)(this + 8) = pRVar4 + param_1 * 0x18;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul, 0ul,
   true, eastl::allocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::resize(vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
         *this,ulong param_1)

{
  long lVar1;
  RunInfo aRStack_20 [24];
  long local_8;
  
  lVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  local_8 = ___stack_chk_guard;
  if ((ulong)(lVar1 * -0x5555555555555555) < param_1) {
    EA::Text::Typesetter::RunInfo::RunInfo(aRStack_20,0xffffffff,0,0,0);
    DoInsertValuesEnd(this,param_1 + lVar1 * 0x5555555555555555,aRStack_20);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x18;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::vector<EA::Text::AnalysisInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::insert<EA::Text::AnalysisInfo const*>(EA::Text::AnalysisInfo*, EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo const*) */

void __thiscall
eastl::
vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
insert<EA::Text::AnalysisInfo_const*>
          (vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,AnalysisInfo *param_1,AnalysisInfo *param_2,AnalysisInfo *param_3)

{
  ulong uVar1;
  AnalysisInfo *pAVar2;
  long lVar3;
  ulong uVar4;
  AnalysisInfo *pAVar5;
  AnalysisInfo *pAStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_2 != param_3) {
    uVar1 = distance<EA::Text::AnalysisInfo_const*>(param_2,param_3);
    pAVar5 = *(AnalysisInfo **)(this + 8);
    if ((ulong)((*(long *)(this + 0x10) - (long)pAVar5 >> 3) * -0x5555555555555555) < uVar1) {
      lVar3 = ((long)pAVar5 - *(long *)this >> 3) * -0x5555555555555555;
      uVar1 = uVar1 + lVar3;
      uVar4 = FUN_0536f63c(lVar3);
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      pAVar5 = (AnalysisInfo *)
               VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               ::DoAllocate((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                             *)this,uVar4);
      pAVar2 = uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
                         (*(AnalysisInfo **)this,param_1,pAVar5);
      pAVar2 = uninitialized_copy_ptr<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
                         (param_2,param_3,pAVar2);
      pAVar2 = uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
                         (param_1,*(AnalysisInfo **)(this + 8),pAVar2);
      VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(AnalysisInfo **)this,
               (*(long *)(this + 0x10) - (long)*(AnalysisInfo **)this >> 3) * -0x5555555555555555);
      *(AnalysisInfo **)this = pAVar5;
      *(AnalysisInfo **)(this + 8) = pAVar2;
      *(AnalysisInfo **)(this + 0x10) = pAVar5 + uVar4 * 0x18;
    }
    else {
      lVar3 = (long)pAVar5 - (long)param_1 >> 3;
      uVar4 = lVar3 * -0x5555555555555555;
      if (uVar1 < uVar4) {
        uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
                  (pAVar5 + uVar1 * -0x18,pAVar5,pAVar5);
        copy_backward<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
                  (param_1,*(AnalysisInfo **)(this + 8) + uVar1 * -0x18,*(AnalysisInfo **)(this + 8)
                  );
        copy<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                  ((RunInfo *)param_2,(RunInfo *)param_3,(RunInfo *)param_1);
      }
      else {
        pAStack_10 = param_2;
        advance<EA::Text::AnalysisInfo_const*,unsigned_long>(&pAStack_10,uVar4);
        uninitialized_copy_ptr<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
                  (pAStack_10,param_3,*(AnalysisInfo **)(this + 8));
        uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
                  (param_1,*(AnalysisInfo **)(this + 8),
                   *(AnalysisInfo **)(this + 8) + (uVar1 + lVar3 * 0x5555555555555555) * 0x18);
        copy_backward<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
                  (param_2,pAStack_10,pAVar5);
      }
      *(ulong *)(this + 8) = *(long *)(this + 8) + uVar1 * 0x18;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::insert<EA::Text::GlyphInfo
   const*>(EA::Text::GlyphInfo*, EA::Text::GlyphInfo const*, EA::Text::GlyphInfo const*) */

void __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
insert<EA::Text::GlyphInfo_const*>
          (vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  ulong uVar1;
  GlyphInfo *pGVar2;
  GlyphInfo *pGVar3;
  long lVar4;
  ulong uVar5;
  GlyphInfo *pGStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_2 != param_3) {
    uVar1 = distance<EA::Text::GlyphInfo_const*>(param_2,param_3);
    pGVar3 = *(GlyphInfo **)(this + 8);
    if ((ulong)(*(long *)(this + 0x10) - (long)pGVar3 >> 2) < uVar1) {
      lVar4 = (long)pGVar3 - *(long *)this >> 2;
      uVar1 = uVar1 + lVar4;
      uVar5 = FUN_0536f61c(lVar4);
      if (uVar5 < uVar1) {
        uVar5 = uVar1;
      }
      pGVar3 = (GlyphInfo *)
               VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               ::DoAllocate((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                             *)this,uVar5);
      pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                         (*(GlyphInfo **)this,param_1,pGVar3);
      pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
                         (param_2,param_3,pGVar2);
      pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                         (param_1,*(GlyphInfo **)(this + 8),pGVar2);
      VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(GlyphInfo **)this,*(long *)(this + 0x10) - (long)*(GlyphInfo **)this >> 2);
      *(GlyphInfo **)this = pGVar3;
      *(GlyphInfo **)(this + 8) = pGVar2;
      *(GlyphInfo **)(this + 0x10) = pGVar3 + uVar5 * 4;
    }
    else {
      uVar5 = (long)pGVar3 - (long)param_1 >> 2;
      if (uVar1 < uVar5) {
        uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                  (pGVar3 + uVar1 * -4,pGVar3,pGVar3);
        copy_backward<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
                  (param_1,*(GlyphInfo **)(this + 8) + uVar1 * -4,*(GlyphInfo **)(this + 8));
        copy<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>(param_2,param_3,param_1);
      }
      else {
        pGStack_10 = param_2;
        advance<EA::Text::GlyphInfo_const*,unsigned_long>(&pGStack_10,uVar5);
        uninitialized_copy_ptr<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
                  (pGStack_10,param_3,*(GlyphInfo **)(this + 8));
        uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                  (param_1,*(GlyphInfo **)(this + 8),*(GlyphInfo **)(this + 8) + (uVar1 - uVar5) * 4
                  );
        copy_backward<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>(param_2,pGStack_10,pGVar3);
      }
      *(ulong *)(this + 8) = *(long *)(this + 8) + uVar1 * 4;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::insert<EA::Text::GlyphLayoutInfo const*>(EA::Text::GlyphLayoutInfo*, EA::Text::GlyphLayoutInfo
   const*, EA::Text::GlyphLayoutInfo const*) */

void __thiscall
eastl::
vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::insert<EA::Text::GlyphLayoutInfo_const*>
          (vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  ulong uVar1;
  GlyphLayoutInfo *pGVar2;
  long lVar3;
  ulong uVar4;
  GlyphLayoutInfo *pGVar5;
  GlyphLayoutInfo *pGStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_2 != param_3) {
    uVar1 = distance<EA::Text::GlyphLayoutInfo_const*>(param_2,param_3);
    pGVar5 = *(GlyphLayoutInfo **)(this + 8);
    if ((ulong)((*(long *)(this + 0x10) - (long)pGVar5 >> 3) * -0x3333333333333333) < uVar1) {
      lVar3 = ((long)pGVar5 - *(long *)this >> 3) * -0x3333333333333333;
      uVar1 = uVar1 + lVar3;
      uVar4 = FUN_0536f5b4(lVar3);
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      pGVar5 = (GlyphLayoutInfo *)
               VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               ::DoAllocate((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                             *)this,uVar4);
      pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
                         (*(GlyphLayoutInfo **)this,param_1,pGVar5);
      pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
                         (param_2,param_3,pGVar2);
      pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
                         (param_1,*(GlyphLayoutInfo **)(this + 8),pGVar2);
      VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::DoFree((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)this,*(GlyphLayoutInfo **)this,
               (*(long *)(this + 0x10) - (long)*(GlyphLayoutInfo **)this >> 3) * -0x3333333333333333
              );
      *(GlyphLayoutInfo **)this = pGVar5;
      *(GlyphLayoutInfo **)(this + 8) = pGVar2;
      *(GlyphLayoutInfo **)(this + 0x10) = pGVar5 + uVar4 * 0x28;
    }
    else {
      lVar3 = (long)pGVar5 - (long)param_1 >> 3;
      uVar4 = lVar3 * -0x3333333333333333;
      if (uVar1 < uVar4) {
        uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
                  (pGVar5 + uVar1 * -0x28,pGVar5,pGVar5);
        copy_backward<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
                  (param_1,*(GlyphLayoutInfo **)(this + 8) + uVar1 * -0x28,
                   *(GlyphLayoutInfo **)(this + 8));
        copy<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>(param_2,param_3,param_1);
      }
      else {
        pGStack_10 = param_2;
        advance<EA::Text::GlyphLayoutInfo_const*,unsigned_long>(&pGStack_10,uVar4);
        uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
                  (pGStack_10,param_3,*(GlyphLayoutInfo **)(this + 8));
        uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
                  (param_1,*(GlyphLayoutInfo **)(this + 8),
                   *(GlyphLayoutInfo **)(this + 8) + (uVar1 + lVar3 * 0x3333333333333333) * 0x28);
        copy_backward<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
                  (param_2,pGStack_10,pGVar5);
      }
      *(ulong *)(this + 8) = *(long *)(this + 8) + uVar1 * 0x28;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::vector<unsigned long,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::insert<unsigned long
   const*>(unsigned long*, unsigned long const*, unsigned long const*) */

void __thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
insert<unsigned_long_const*>
          (vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong *puStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_2 != param_3) {
    uVar1 = distance<unsigned_long_const*>(param_2,param_3);
    puVar3 = *(ulong **)(this + 8);
    if ((ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 3) < uVar1) {
      lVar4 = (long)puVar3 - *(long *)this >> 3;
      uVar1 = uVar1 + lVar4;
      uVar5 = FUN_0536f62c(lVar4);
      if (uVar5 < uVar1) {
        uVar5 = uVar1;
      }
      puVar3 = (ulong *)VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                        ::DoAllocate((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                                      *)this,uVar5);
      puVar2 = uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                         (*(ulong **)this,param_1,puVar3);
      puVar2 = uninitialized_copy_ptr<unsigned_long_const*,unsigned_long_const*,unsigned_long*>
                         (param_2,param_3,puVar2);
      puVar2 = uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                         (param_1,*(ulong **)(this + 8),puVar2);
      VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      DoFree((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(ulong **)this,*(long *)(this + 0x10) - (long)*(ulong **)this >> 3);
      *(ulong **)this = puVar3;
      *(ulong **)(this + 8) = puVar2;
      *(ulong **)(this + 0x10) = puVar3 + uVar5;
    }
    else {
      uVar5 = (long)puVar3 - (long)param_1 >> 3;
      if (uVar1 < uVar5) {
        uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                  (puVar3 + -uVar1,puVar3,puVar3);
        copy_backward<unsigned_short_const*,unsigned_short*>
                  ((ushort *)param_1,*(ushort **)(this + 8) + uVar1 * -4,*(ushort **)(this + 8));
        copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>
                  ((OTFLookup **)param_2,(OTFLookup **)param_3,(OTFLookup **)param_1);
      }
      else {
        puStack_10 = param_2;
        advance<unsigned_long_const*,unsigned_long>(&puStack_10,uVar5);
        uninitialized_copy_ptr<unsigned_long_const*,unsigned_long_const*,unsigned_long*>
                  (puStack_10,param_3,*(ulong **)(this + 8));
        uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                  (param_1,*(ulong **)(this + 8),*(ulong **)(this + 8) + (uVar1 - uVar5));
        copy_backward<unsigned_short_const*,unsigned_short*>
                  ((ushort *)param_2,(ushort *)puStack_10,(ushort *)puVar3);
      }
      *(ulong *)(this + 8) = *(long *)(this + 8) + uVar1 * 8;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::vector<unsigned short,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::insert<unsigned short
   const*>(unsigned short*, unsigned short const*, unsigned short const*) */

void __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
insert<unsigned_short_const*>
          (vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *this,ushort *param_1,ushort *param_2,ushort *param_3)

{
  ulong uVar1;
  ushort *puVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  ushort *puStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_2 != param_3) {
    uVar1 = distance<unsigned_short_const*>(param_2,param_3);
    puVar3 = *(ushort **)(this + 8);
    if ((ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 1) < uVar1) {
      lVar4 = (long)puVar3 - *(long *)this >> 1;
      uVar1 = uVar1 + lVar4;
      uVar5 = FUN_0536f5a4(lVar4);
      if (uVar5 < uVar1) {
        uVar5 = uVar1;
      }
      puVar3 = (ushort *)
               VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               ::DoAllocate((VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                             *)this,uVar5);
      puVar2 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                         (*(ushort **)this,param_1,puVar3);
      puVar2 = uninitialized_copy_ptr<unsigned_short_const*,unsigned_short_const*,unsigned_short*>
                         (param_2,param_3,puVar2);
      puVar2 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                         (param_1,*(ushort **)(this + 8),puVar2);
      basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      DoFree((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(wchar16 **)this,*(long *)(this + 0x10) - (long)*(wchar16 **)this >> 1);
      *(ushort **)this = puVar3;
      *(ushort **)(this + 8) = puVar2;
      *(ushort **)(this + 0x10) = puVar3 + uVar5;
    }
    else {
      uVar5 = (long)puVar3 - (long)param_1 >> 1;
      if (uVar1 < uVar5) {
        uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                  (puVar3 + -uVar1,puVar3,puVar3);
        copy_backward<unsigned_short_const*,unsigned_short*>
                  (param_1,*(ushort **)(this + 8) + -uVar1,*(ushort **)(this + 8));
        copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>
                  ((OTFLookup **)param_2,(OTFLookup **)param_3,(OTFLookup **)param_1);
      }
      else {
        puStack_10 = param_2;
        advance<unsigned_short_const*,unsigned_long>(&puStack_10,uVar5);
        uninitialized_copy_ptr<unsigned_short_const*,unsigned_short_const*,unsigned_short*>
                  (puStack_10,param_3,*(ushort **)(this + 8));
        uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                  (param_1,*(ushort **)(this + 8),*(ushort **)(this + 8) + (uVar1 - uVar5));
        copy_backward<unsigned_short_const*,unsigned_short*>(param_2,puStack_10,puVar3);
      }
      *(ulong *)(this + 8) = *(long *)(this + 8) + uVar1 * 2;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValuesEnd(unsigned long, EA::Text::TextStyle const* const&) */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValuesEnd(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
                    *this,ulong param_1,TextStyle **param_2)

{
  ulong uVar1;
  TextStyle **ppTVar2;
  ulong uVar3;
  TextStyle **ppTVar4;
  long lVar5;
  
  ppTVar2 = *(TextStyle ***)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)ppTVar2 >> 3)) {
    uninitialized_fill_n_ptr<EA::Text::TextStyle_const*,unsigned_long>(ppTVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 8;
    return;
  }
  lVar5 = (long)ppTVar2 - *(long *)this >> 3;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0536f5ec(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  ppTVar2 = (TextStyle **)FUN_0536f818(uVar3);
  ppTVar4 = uninitialized_copy_ptr<EA::Text::TextStyle_const**,EA::Text::TextStyle_const**,EA::Text::TextStyle_const**>
                      (*(TextStyle ***)this,*(TextStyle ***)(this + 8),ppTVar2);
  uninitialized_fill_n_ptr<EA::Text::TextStyle_const*,unsigned_long>(ppTVar4,param_1,param_2);
  FUN_0536f5fc(this,*(undefined8 *)this);
  *(TextStyle ***)this = ppTVar2;
  *(TextStyle ***)(this + 0x10) = ppTVar2 + uVar3;
  *(TextStyle ***)(this + 8) = ppTVar4 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   eastl::allocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
::resize(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  TextStyle *local_10;
  long local_8;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  local_8 = ___stack_chk_guard;
  if (uVar1 < param_1) {
    local_10 = (TextStyle *)0x0;
    DoInsertValuesEnd(this,param_1 - uVar1,&local_10);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValueEnd(EA::Text::TextStyle const* const&) */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValueEnd(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
                   *this,TextStyle **param_1)

{
  long lVar1;
  TextStyle **ppTVar2;
  TextStyle **ppTVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_0536f5ec(*(long *)(this + 8) - *(long *)this >> 3);
  ppTVar2 = (TextStyle **)FUN_0536f818();
  ppTVar3 = uninitialized_copy_ptr<EA::Text::TextStyle_const**,EA::Text::TextStyle_const**,EA::Text::TextStyle_const**>
                      (*(TextStyle ***)this,*(TextStyle ***)(this + 8),ppTVar2);
  puVar4 = (undefined8 *)FUN_0536f2a8();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_1;
  }
  FUN_0536f5fc(this,*(undefined8 *)this);
  *(TextStyle ***)this = ppTVar2;
  *(TextStyle ***)(this + 8) = ppTVar3 + 1;
  *(TextStyle ***)(this + 0x10) = ppTVar2 + lVar1;
  return;
}


/* eastl::vector<EA::Text::TextStyle const*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   eastl::allocator> >::push_back(EA::Text::TextStyle const* const&) */

void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
            *this,TextStyle **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0536f2a8(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::
vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
            *this,TextStyle **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0536f2a8(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* void eastl::vector<EA::Text::Typesetter::RunInfo, eastl::fixed_vector_allocator<24ul, 4ul, 8ul,
   0ul, true, eastl::allocator> >::assign<EA::Text::Typesetter::RunInfo
   const*>(EA::Text::Typesetter::RunInfo const*, EA::Text::Typesetter::RunInfo const*) */

void __thiscall
eastl::
vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
::assign<EA::Text::Typesetter::RunInfo_const*>
          (vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
           *this,RunInfo *param_1,RunInfo *param_2)

{
  ulong uVar1;
  long lVar2;
  RunInfo *pRVar3;
  long lVar4;
  
  uVar1 = distance<EA::Text::Typesetter::RunInfo_const*>(param_1,param_2);
  pRVar3 = *(RunInfo **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pRVar3 >> 3) * -0x5555555555555555) < uVar1) {
    lVar2 = FUN_05377cd8(uVar1,param_1,param_2);
    lVar4 = lVar2 + uVar1 * 0x18;
    FUN_0536f65c(this,*(undefined8 *)this);
    *(long *)this = lVar2;
    *(long *)(this + 8) = lVar4;
    *(long *)(this + 0x10) = lVar4;
    return;
  }
  lVar4 = *(long *)(this + 8);
  if ((ulong)((lVar4 - (long)pRVar3 >> 3) * -0x5555555555555555) < uVar1) {
    copy<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
              (param_1,param_1 + (lVar4 - (long)pRVar3),pRVar3);
    pRVar3 = uninitialized_copy_ptr<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                       (param_1 + (lVar4 - (long)pRVar3),param_2,*(RunInfo **)(this + 8));
    *(RunInfo **)(this + 8) = pRVar3;
    return;
  }
  pRVar3 = copy<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                     (param_1,param_2,pRVar3);
  *(RunInfo **)(this + 8) = pRVar3;
  return;
}


/* eastl::vector<unsigned short, eastl::fixed_vector_allocator<2ul, 1024ul, 2ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>::
~vector(vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>
        *this)

{
  if (*(long *)this != 0) {
    FUN_0537aca8(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<unsigned short, eastl::fixed_vector_allocator<2ul, 1024ul, 2ul, 0ul, true,
   eastl::allocator> >::DoInsertValuesEnd(unsigned long, unsigned short const&) */

void __thiscall
eastl::
vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>::
DoInsertValuesEnd(vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>
                  *this,ulong param_1,ushort *param_2)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  
  puVar2 = *(ushort **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar2 >> 1)) {
    uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 2;
    return;
  }
  lVar5 = (long)puVar2 - *(long *)this >> 1;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0537acbc(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  puVar2 = (ushort *)FUN_0537ad38(uVar3);
  puVar4 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                     (*(ushort **)this,*(ushort **)(this + 8),puVar2);
  uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar4,param_1,param_2);
  FUN_0537accc(this,*(undefined8 *)this);
  *(ushort **)this = puVar2;
  *(ushort **)(this + 0x10) = puVar2 + uVar3;
  *(ushort **)(this + 8) = puVar4 + param_1;
  return;
}


/* eastl::vector<unsigned short, eastl::fixed_vector_allocator<2ul, 1024ul, 2ul, 0ul, true,
   eastl::allocator> >::resize(unsigned long, unsigned short const&) */

void __thiscall
eastl::
vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>::
resize(vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>
       *this,ulong param_1,ushort *param_2)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 1;
  if (param_1 <= uVar1) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 2;
    return;
  }
  DoInsertValuesEnd(this,param_1 - uVar1,param_2);
  return;
}


/* eastl::vector<EA::Text::OTFLookup*, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValueEnd(EA::Text::OTFLookup* const&) */

void __thiscall
eastl::
vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
DoInsertValueEnd(vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
                 *this,OTFLookup **param_1)

{
  long lVar1;
  OTFLookup **ppOVar2;
  OTFLookup **ppOVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_0537ace4(*(long *)(this + 8) - *(long *)this >> 3);
  ppOVar2 = (OTFLookup **)FUN_0537ad24();
  ppOVar3 = uninitialized_copy_ptr<EA::Text::OTFLookup**,EA::Text::OTFLookup**,EA::Text::OTFLookup**>
                      (*(OTFLookup ***)this,*(OTFLookup ***)(this + 8),ppOVar2);
  puVar4 = (undefined8 *)FUN_0537ac5c();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_1;
  }
  FUN_0537ad0c(this,*(undefined8 *)this);
  *(OTFLookup ***)this = ppOVar2;
  *(OTFLookup ***)(this + 8) = ppOVar3 + 1;
  *(OTFLookup ***)(this + 0x10) = ppOVar2 + lVar1;
  return;
}


/* eastl::vector<EA::Text::OTFLookup*, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::push_back(EA::Text::OTFLookup* const&) */

void __thiscall
eastl::
vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
push_back(vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
          *this,OTFLookup **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0537ac5c(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::
vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
push_back(vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
          *this,OTFLookup **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0537ac5c(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<EA::Text::OTFLookup*, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
~vector(vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
        *this)

{
  if (*(long *)this != 0) {
    FUN_0537d974(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<EA::Text::FeatureLookup, eastl::fixed_vector_allocator<176ul, 10ul, 8ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
::~vector(vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
          *this)

{
  destruct<EA::Text::FeatureLookup*>(*(FeatureLookup **)this,*(FeatureLookup **)(this + 8));
  VectorBase<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
  ::~VectorBase((VectorBase<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
                 *)this);
  return;
}


/* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValueEnd(EA::Text::GlyphInfo const&) */

void __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValueEnd(vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this,GlyphInfo *param_1)

{
  ulong uVar1;
  GlyphInfo *pGVar2;
  GlyphInfo *pGVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_0537d868(*(long *)(this + 8) - *(long *)this >> 2);
  pGVar2 = (GlyphInfo *)
           VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar1);
  pGVar3 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                     (*(GlyphInfo **)this,*(GlyphInfo **)(this + 8),pGVar2);
  puVar4 = (undefined4 *)FUN_0537d770();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *(undefined4 *)param_1;
  }
  VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(GlyphInfo **)this,*(long *)(this + 0x10) - (long)*(GlyphInfo **)this >> 2);
  *(GlyphInfo **)this = pGVar2;
  *(GlyphInfo **)(this + 8) = pGVar3 + 4;
  *(GlyphInfo **)(this + 0x10) = pGVar2 + uVar1 * 4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::push_back() */

void __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
push_back(vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  GlyphInfo local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  long local_8;
  
  uVar2 = *(ulong *)(this + 8);
  local_8 = ___stack_chk_guard;
  if (uVar2 < *(ulong *)(this + 0x10)) {
    lVar3 = uVar2 + 4;
    *(long *)(this + 8) = lVar3;
    puVar1 = (undefined1 *)FUN_0537d770(uVar2);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1[1] = puVar1[1] & 0x80;
      puVar1[3] = 0;
      lVar3 = *(long *)(this + 8);
    }
  }
  else {
    local_10 = (GlyphInfo)0x0;
    local_f = local_f & 0x80;
    local_e = 0;
    local_d = 0;
    DoInsertValueEnd(this,&local_10);
    lVar3 = *(long *)(this + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 + -4);
}


/* eastl::vector<unsigned short, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValueEnd(unsigned short const&) */

void __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValueEnd(vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this,ushort *param_1)

{
  ulong uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  uVar1 = FUN_0537d858(*(long *)(this + 8) - *(long *)this >> 1);
  puVar2 = (ushort *)
           VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar1);
  puVar3 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                     (*(ushort **)this,*(ushort **)(this + 8),puVar2);
  puVar4 = (ushort *)FUN_0537d770();
  if (puVar4 != (ushort *)0x0) {
    *puVar4 = *param_1;
  }
  basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::DoFree
            ((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(wchar16 **)this,*(long *)(this + 0x10) - (long)*(wchar16 **)this >> 1);
  *(ushort **)this = puVar2;
  *(ushort **)(this + 8) = puVar3 + 1;
  *(ushort **)(this + 0x10) = puVar2 + uVar1;
  return;
}


/* eastl::vector<unsigned short, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::push_back(unsigned short const&) */

void __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
push_back(vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,ushort *param_1)

{
  ushort *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 2;
    puVar1 = (ushort *)FUN_0537d770(uVar2);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValues(EA::Text::GlyphInfo*, unsigned long, EA::Text::GlyphInfo const&) */

void __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValues(vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *this,GlyphInfo *param_1,ulong param_2,GlyphInfo *param_3)

{
  ulong uVar1;
  GlyphInfo *pGVar2;
  ulong uVar3;
  GlyphInfo *pGVar4;
  long lVar5;
  undefined4 local_10 [2];
  long local_8;
  
  pGVar4 = *(GlyphInfo **)(this + 8);
  local_8 = ___stack_chk_guard;
  if ((ulong)(*(long *)(this + 0x10) - (long)pGVar4 >> 2) < param_2) {
    lVar5 = (long)pGVar4 - *(long *)this >> 2;
    uVar3 = lVar5 + param_2;
    uVar1 = FUN_0537d868(lVar5);
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    pGVar4 = (GlyphInfo *)
             VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             ::DoAllocate((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                           *)this,uVar1);
    pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                       (*(GlyphInfo **)this,param_1,pGVar4);
    uninitialized_fill_n_ptr<EA::Text::GlyphInfo,unsigned_long>(pGVar2,param_2,param_3);
    pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                       (param_1,*(GlyphInfo **)(this + 8),pGVar2 + param_2 * 4);
    VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::DoFree((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(GlyphInfo **)this,*(long *)(this + 0x10) - (long)*(GlyphInfo **)this >> 2);
    *(GlyphInfo **)this = pGVar4;
    *(GlyphInfo **)(this + 8) = pGVar2;
    *(GlyphInfo **)(this + 0x10) = pGVar4 + uVar1 * 4;
  }
  else if (param_2 != 0) {
    local_10[0] = *(undefined4 *)param_3;
    uVar3 = (long)pGVar4 - (long)param_1 >> 2;
    if (param_2 < uVar3) {
      lVar5 = param_2 * 4;
      uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                (pGVar4 + param_2 * -4,pGVar4,pGVar4);
      copy_backward<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
                (param_1,*(GlyphInfo **)(this + 8) + param_2 * -4,*(GlyphInfo **)(this + 8));
      fill<EA::Text::GlyphInfo*,EA::Text::GlyphInfo>(param_1,param_1 + lVar5,(GlyphInfo *)local_10);
    }
    else {
      uVar3 = param_2 - uVar3;
      lVar5 = param_2 << 2;
      uninitialized_fill_n_ptr<EA::Text::GlyphInfo,unsigned_long>
                (pGVar4,uVar3,(GlyphInfo *)local_10);
      uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                (param_1,*(GlyphInfo **)(this + 8),*(GlyphInfo **)(this + 8) + uVar3 * 4);
      fill<EA::Text::GlyphInfo*,EA::Text::GlyphInfo>
                (param_1,*(GlyphInfo **)(this + 8),(GlyphInfo *)local_10);
    }
    *(long *)(this + 8) = *(long *)(this + 8) + lVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::GlyphInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::insert(EA::Text::GlyphInfo*, unsigned long, EA::Text::GlyphInfo const&) */

void __thiscall
eastl::
vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
insert(vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,GlyphInfo *param_1,ulong param_2,GlyphInfo *param_3)

{
  ulong uVar1;
  GlyphInfo *pGVar2;
  ulong uVar3;
  GlyphInfo *pGVar4;
  long lVar5;
  undefined4 auStack_10 [2];
  long lStack_8;
  
  pGVar4 = *(GlyphInfo **)(this + 8);
  lStack_8 = ___stack_chk_guard;
  if ((ulong)(*(long *)(this + 0x10) - (long)pGVar4 >> 2) < param_2) {
    lVar5 = (long)pGVar4 - *(long *)this >> 2;
    uVar3 = lVar5 + param_2;
    uVar1 = FUN_0537d868(lVar5);
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    pGVar4 = (GlyphInfo *)
             VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             ::DoAllocate((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                           *)this,uVar1);
    pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                       (*(GlyphInfo **)this,param_1,pGVar4);
    uninitialized_fill_n_ptr<EA::Text::GlyphInfo,unsigned_long>(pGVar2,param_2,param_3);
    pGVar2 = uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                       (param_1,*(GlyphInfo **)(this + 8),pGVar2 + param_2 * 4);
    VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::DoFree((VectorBase<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)this,*(GlyphInfo **)this,*(long *)(this + 0x10) - (long)*(GlyphInfo **)this >> 2);
    *(GlyphInfo **)this = pGVar4;
    *(GlyphInfo **)(this + 8) = pGVar2;
    *(GlyphInfo **)(this + 0x10) = pGVar4 + uVar1 * 4;
  }
  else if (param_2 != 0) {
    auStack_10[0] = *(undefined4 *)param_3;
    uVar3 = (long)pGVar4 - (long)param_1 >> 2;
    if (param_2 < uVar3) {
      lVar5 = param_2 * 4;
      uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                (pGVar4 + param_2 * -4,pGVar4,pGVar4);
      copy_backward<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
                (param_1,*(GlyphInfo **)(this + 8) + param_2 * -4,*(GlyphInfo **)(this + 8));
      fill<EA::Text::GlyphInfo*,EA::Text::GlyphInfo>
                (param_1,param_1 + lVar5,(GlyphInfo *)auStack_10);
    }
    else {
      uVar3 = param_2 - uVar3;
      lVar5 = param_2 << 2;
      uninitialized_fill_n_ptr<EA::Text::GlyphInfo,unsigned_long>
                (pGVar4,uVar3,(GlyphInfo *)auStack_10);
      uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
                (param_1,*(GlyphInfo **)(this + 8),*(GlyphInfo **)(this + 8) + uVar3 * 4);
      fill<EA::Text::GlyphInfo*,EA::Text::GlyphInfo>
                (param_1,*(GlyphInfo **)(this + 8),(GlyphInfo *)auStack_10);
    }
    *(long *)(this + 8) = *(long *)(this + 8) + lVar5;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<unsigned short, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValues(unsigned short*, unsigned long, unsigned short const&) */

void __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValues(vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *this,ushort *param_1,ulong param_2,ushort *param_3)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  ushort local_a;
  long local_8;
  
  puVar4 = *(ushort **)(this + 8);
  local_8 = ___stack_chk_guard;
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 1) < param_2) {
    lVar5 = (long)puVar4 - *(long *)this >> 1;
    uVar3 = lVar5 + param_2;
    uVar1 = FUN_0537d858(lVar5);
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    puVar4 = (ushort *)
             VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             ::DoAllocate((VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                           *)this,uVar1);
    puVar2 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                       (*(ushort **)this,param_1,puVar4);
    uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar2,param_2,param_3);
    puVar2 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                       (param_1,*(ushort **)(this + 8),puVar2 + param_2);
    basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    DoFree((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(wchar16 **)this,*(long *)(this + 0x10) - (long)*(wchar16 **)this >> 1);
    *(ushort **)this = puVar4;
    *(ushort **)(this + 8) = puVar2;
    *(ushort **)(this + 0x10) = puVar4 + uVar1;
  }
  else if (param_2 != 0) {
    local_a = *param_3;
    uVar3 = (long)puVar4 - (long)param_1 >> 1;
    if (param_2 < uVar3) {
      lVar5 = param_2 * 2;
      uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                (puVar4 + -param_2,puVar4,puVar4);
      copy_backward<unsigned_short_const*,unsigned_short*>
                (param_1,*(ushort **)(this + 8) + -param_2,*(ushort **)(this + 8));
      thunk_FUN_0537d8ac(param_1,param_1 + param_2,local_a);
    }
    else {
      uVar3 = param_2 - uVar3;
      lVar5 = param_2 << 1;
      uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar4,uVar3,&local_a);
      uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                (param_1,*(ushort **)(this + 8),*(ushort **)(this + 8) + uVar3);
      thunk_FUN_0537d8ac(param_1,*(undefined8 *)(this + 8),local_a);
    }
    *(long *)(this + 8) = *(long *)(this + 8) + lVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<unsigned short, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::insert(unsigned short*, unsigned long, unsigned short const&) */

void __thiscall
eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
insert(vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
       *this,ushort *param_1,ulong param_2,ushort *param_3)

{
  ulong uVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  ushort uStack_a;
  long lStack_8;
  
  puVar4 = *(ushort **)(this + 8);
  lStack_8 = ___stack_chk_guard;
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 1) < param_2) {
    lVar5 = (long)puVar4 - *(long *)this >> 1;
    uVar3 = lVar5 + param_2;
    uVar1 = FUN_0537d858(lVar5);
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    puVar4 = (ushort *)
             VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             ::DoAllocate((VectorBase<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                           *)this,uVar1);
    puVar2 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                       (*(ushort **)this,param_1,puVar4);
    uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar2,param_2,param_3);
    puVar2 = uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                       (param_1,*(ushort **)(this + 8),puVar2 + param_2);
    basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    DoFree((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(wchar16 **)this,*(long *)(this + 0x10) - (long)*(wchar16 **)this >> 1);
    *(ushort **)this = puVar4;
    *(ushort **)(this + 8) = puVar2;
    *(ushort **)(this + 0x10) = puVar4 + uVar1;
  }
  else if (param_2 != 0) {
    uStack_a = *param_3;
    uVar3 = (long)puVar4 - (long)param_1 >> 1;
    if (param_2 < uVar3) {
      lVar5 = param_2 * 2;
      uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                (puVar4 + -param_2,puVar4,puVar4);
      copy_backward<unsigned_short_const*,unsigned_short*>
                (param_1,*(ushort **)(this + 8) + -param_2,*(ushort **)(this + 8));
      thunk_FUN_0537d8ac(param_1,param_1 + param_2,uStack_a);
    }
    else {
      uVar3 = param_2 - uVar3;
      lVar5 = param_2 << 1;
      uninitialized_fill_n_ptr<unsigned_short,unsigned_long>(puVar4,uVar3,&uStack_a);
      uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                (param_1,*(ushort **)(this + 8),*(ushort **)(this + 8) + uVar3);
      thunk_FUN_0537d8ac(param_1,*(undefined8 *)(this + 8),uStack_a);
    }
    *(long *)(this + 8) = *(long *)(this + 8) + lVar5;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* void eastl::vector<EA::Text::OTFLookup*, eastl::fixed_vector_allocator<8ul, 16ul, 8ul, 0ul, true,
   eastl::allocator> >::assign<EA::Text::OTFLookup* const*>(EA::Text::OTFLookup* const*,
   EA::Text::OTFLookup* const*) */

void __thiscall
eastl::
vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
assign<EA::Text::OTFLookup*const*>
          (vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
           *this,OTFLookup **param_1,OTFLookup **param_2)

{
  OTFLookup **ppOVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  OTFLookup **ppOVar5;
  
  uVar3 = distance<EA::Text::OTFLookup*const*>(param_1,param_2);
  ppOVar5 = *(OTFLookup ***)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)ppOVar5 >> 3) < uVar3) {
    lVar4 = FUN_0537ee54(uVar3,param_1,param_2);
    lVar2 = lVar4 + uVar3 * 8;
    FUN_0537d994(this,*(undefined8 *)this);
    *(long *)this = lVar4;
    *(long *)(this + 8) = lVar2;
    *(long *)(this + 0x10) = lVar2;
    return;
  }
  if ((ulong)(*(long *)(this + 8) - (long)ppOVar5 >> 3) < uVar3) {
    ppOVar1 = (OTFLookup **)((long)param_1 + (*(long *)(this + 8) - (long)ppOVar5));
    copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>(param_1,ppOVar1,ppOVar5);
    ppOVar5 = uninitialized_copy_ptr<EA::Text::OTFLookup*const*,EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>
                        (ppOVar1,param_2,*(OTFLookup ***)(this + 8));
    *(OTFLookup ***)(this + 8) = ppOVar5;
    return;
  }
  ppOVar5 = copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>(param_1,param_2,ppOVar5);
  *(OTFLookup ***)(this + 8) = ppOVar5;
  return;
}


/* eastl::vector<EA::Text::FeatureLookup, eastl::fixed_vector_allocator<176ul, 10ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValuesEnd(unsigned long, EA::Text::FeatureLookup const&) */

void __thiscall
eastl::
vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValuesEnd(vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
                    *this,ulong param_1,FeatureLookup *param_2)

{
  ulong uVar1;
  FeatureLookup *pFVar2;
  ulong uVar3;
  FeatureLookup *pFVar4;
  long lVar5;
  
  pFVar2 = *(FeatureLookup **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pFVar2 >> 4) * 0x2e8ba2e8ba2e8ba3)) {
    uninitialized_fill_n_ptr<EA::Text::FeatureLookup,unsigned_long>(pFVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 0xb0;
    return;
  }
  lVar5 = ((long)pFVar2 - *(long *)this >> 4) * 0x2e8ba2e8ba2e8ba3;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0537d878(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  pFVar2 = (FeatureLookup *)FUN_0537d9cc(uVar3);
  pFVar4 = uninitialized_copy_ptr<EA::Text::FeatureLookup*,EA::Text::FeatureLookup*,EA::Text::FeatureLookup*>
                     (*(FeatureLookup **)this,*(FeatureLookup **)(this + 8),pFVar2);
  uninitialized_fill_n_ptr<EA::Text::FeatureLookup,unsigned_long>(pFVar4,param_1,param_2);
  destruct<EA::Text::FeatureLookup*>(*(FeatureLookup **)this,*(FeatureLookup **)(this + 8));
  FUN_0537d89c(this,*(undefined8 *)this);
  *(FeatureLookup **)this = pFVar2;
  *(FeatureLookup **)(this + 8) = pFVar4 + param_1 * 0xb0;
  *(FeatureLookup **)(this + 0x10) = pFVar2 + uVar3 * 0xb0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::FeatureLookup, eastl::fixed_vector_allocator<176ul, 10ul, 8ul, 0ul, true,
   eastl::allocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
::resize(vector<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
         *this,ulong param_1)

{
  long lVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  lVar1 = (long)*(FeatureLookup **)(this + 8) - *(long *)this >> 4;
  local_8 = ___stack_chk_guard;
  if ((ulong)(lVar1 * 0x2e8ba2e8ba2e8ba3) < param_1) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    EA::Text::FeatureLookup::FeatureLookup((FeatureLookup *)&local_b8);
    DoInsertValuesEnd(this,param_1 + lVar1 * -0x2e8ba2e8ba2e8ba3,(FeatureLookup *)&local_b8);
    EA::Text::FeatureLookup::~FeatureLookup((FeatureLookup *)&local_b8);
  }
  else {
    destruct<EA::Text::FeatureLookup*>
              ((FeatureLookup *)(*(long *)this + param_1 * 0xb0),*(FeatureLookup **)(this + 8));
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0xb0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValueEnd(EA::Text::GlyphLayoutInfo const&) */

void __thiscall
eastl::
vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::DoInsertValueEnd(vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *this,GlyphLayoutInfo *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  GlyphLayoutInfo *pGVar3;
  GlyphLayoutInfo *pGVar4;
  undefined8 *puVar5;
  
  uVar2 = FUN_0537fab8((*(long *)(this + 8) - *(long *)this >> 3) * -0x3333333333333333);
  pGVar3 = (GlyphLayoutInfo *)
           VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           ::DoAllocate((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                         *)this,uVar2);
  pGVar4 = uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
                     (*(GlyphLayoutInfo **)this,*(GlyphLayoutInfo **)(this + 8),pGVar3);
  puVar5 = (undefined8 *)FUN_0537fa4c();
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
    puVar5[3] = uVar1;
    puVar5[4] = *(undefined8 *)(param_1 + 0x20);
  }
  VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::DoFree((VectorBase<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)this,*(GlyphLayoutInfo **)this,
           (*(long *)(this + 0x10) - (long)*(GlyphLayoutInfo **)this >> 3) * -0x3333333333333333);
  *(GlyphLayoutInfo **)this = pGVar3;
  *(GlyphLayoutInfo **)(this + 8) = pGVar4 + 0x28;
  *(GlyphLayoutInfo **)(this + 0x10) = pGVar3 + uVar2 * 0x28;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::GlyphLayoutInfo,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::push_back() */

void __thiscall
eastl::
vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::push_back(vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar2 = *(ulong *)(this + 8);
  local_8 = ___stack_chk_guard;
  if (uVar2 < *(ulong *)(this + 0x10)) {
    lVar3 = uVar2 + 0x28;
    *(long *)(this + 8) = lVar3;
    puVar1 = (undefined8 *)FUN_0537fa4c(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((long)puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)((long)puVar1 + 0x14) = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
    }
  }
  else {
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    DoInsertValueEnd(this,(GlyphLayoutInfo *)&local_30);
    lVar3 = *(long *)(this + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3 + -0x28);
}


/* eastl::vector<unsigned long, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::DoInsertValueEnd(unsigned long const&) */

void __thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
DoInsertValueEnd(vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *this,ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  uVar1 = FUN_0537faa8(*(long *)(this + 8) - *(long *)this >> 3);
  puVar2 = (ulong *)VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                    ::DoAllocate((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                                  *)this,uVar1);
  puVar3 = uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                     (*(ulong **)this,*(ulong **)(this + 8),puVar2);
  puVar4 = (ulong *)FUN_0537fa4c();
  if (puVar4 != (ulong *)0x0) {
    *puVar4 = *param_1;
  }
  VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  DoFree((VectorBase<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *)this,*(ulong **)this,*(long *)(this + 0x10) - (long)*(ulong **)this >> 3);
  *(ulong **)this = puVar2;
  *(ulong **)(this + 8) = puVar3 + 1;
  *(ulong **)(this + 0x10) = puVar2 + uVar1;
  return;
}


/* eastl::vector<unsigned long, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::push_back(unsigned long const&) */

void __thiscall
eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
push_back(vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
          *this,ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (ulong *)FUN_0537fa4c(uVar2);
    if (puVar1 != (ulong *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<EA::Text::BmpTextureInfo*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
::~vector(vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
          *this)

{
  if (*(long *)this != 0) {
    FUN_0540ee78(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<EA::Text::BmpTextureInfo*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValueEnd(EA::Text::BmpTextureInfo* const&) */

void __thiscall
eastl::
vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValueEnd(vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
                   *this,BmpTextureInfo **param_1)

{
  long lVar1;
  BmpTextureInfo **ppBVar2;
  BmpTextureInfo **ppBVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_0540eeb8(*(long *)(this + 8) - *(long *)this >> 3);
  ppBVar2 = (BmpTextureInfo **)FUN_0540efe4();
  ppBVar3 = uninitialized_copy_ptr<EA::Text::BmpTextureInfo**,EA::Text::BmpTextureInfo**,EA::Text::BmpTextureInfo**>
                      (*(BmpTextureInfo ***)this,*(BmpTextureInfo ***)(this + 8),ppBVar2);
  puVar4 = (undefined8 *)FUN_0540ec74();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_1;
  }
  FUN_0540eec8(this,*(undefined8 *)this);
  *(BmpTextureInfo ***)this = ppBVar2;
  *(BmpTextureInfo ***)(this + 8) = ppBVar3 + 1;
  *(BmpTextureInfo ***)(this + 0x10) = ppBVar2 + lVar1;
  return;
}


/* eastl::vector<EA::Text::BmpTextureInfo*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true,
   eastl::allocator> >::push_back(EA::Text::BmpTextureInfo* const&) */

void __thiscall
eastl::
vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
            *this,BmpTextureInfo **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0540ec74(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::
vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
            *this,BmpTextureInfo **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0540ec74(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


/* eastl::vector<EA::Text::BmpTextureInfo*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValuesEnd(unsigned long, EA::Text::BmpTextureInfo* const&) */

void __thiscall
eastl::
vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValuesEnd(vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
                    *this,ulong param_1,BmpTextureInfo **param_2)

{
  ulong uVar1;
  BmpTextureInfo **ppBVar2;
  ulong uVar3;
  BmpTextureInfo **ppBVar4;
  long lVar5;
  
  ppBVar2 = *(BmpTextureInfo ***)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)ppBVar2 >> 3)) {
    uninitialized_fill_n_ptr<EA::Text::BmpTextureInfo*,unsigned_long>(ppBVar2,param_1,param_2);
    *(ulong *)(this + 8) = *(long *)(this + 8) + param_1 * 8;
    return;
  }
  lVar5 = (long)ppBVar2 - *(long *)this >> 3;
  uVar1 = lVar5 + param_1;
  uVar3 = FUN_0540eeb8(lVar5);
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  ppBVar2 = (BmpTextureInfo **)FUN_0540efe4(uVar3);
  ppBVar4 = uninitialized_copy_ptr<EA::Text::BmpTextureInfo**,EA::Text::BmpTextureInfo**,EA::Text::BmpTextureInfo**>
                      (*(BmpTextureInfo ***)this,*(BmpTextureInfo ***)(this + 8),ppBVar2);
  uninitialized_fill_n_ptr<EA::Text::BmpTextureInfo*,unsigned_long>(ppBVar4,param_1,param_2);
  FUN_0540eec8(this,*(undefined8 *)this);
  *(BmpTextureInfo ***)this = ppBVar2;
  *(BmpTextureInfo ***)(this + 0x10) = ppBVar2 + uVar3;
  *(BmpTextureInfo ***)(this + 8) = ppBVar4 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::vector<EA::Text::BmpTextureInfo*, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true,
   eastl::allocator> >::resize(unsigned long) */

void __thiscall
eastl::
vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
::resize(vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
         *this,ulong param_1)

{
  ulong uVar1;
  BmpTextureInfo *local_10;
  long local_8;
  
  uVar1 = *(long *)(this + 8) - *(long *)this >> 3;
  local_8 = ___stack_chk_guard;
  if (uVar1 < param_1) {
    local_10 = (BmpTextureInfo *)0x0;
    DoInsertValuesEnd(this,param_1 - uVar1,&local_10);
  }
  else {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::vector<unsigned int, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::~vector() */

void __thiscall
eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
~vector(vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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


/* eastl::vector<EA::Text::TextureInfo*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> >::~vector() */

void __thiscall
eastl::
vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
::~vector(vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
          *this)

{
  if (*(long *)this != 0) {
    FUN_05414398(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::vector<EA::Text::TextureInfo*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> >::DoInsertValueEnd(EA::Text::TextureInfo* const&) */

void __thiscall
eastl::
vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
::DoInsertValueEnd(vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
                   *this,TextureInfo **param_1)

{
  long lVar1;
  TextureInfo **ppTVar2;
  TextureInfo **ppTVar3;
  undefined8 *puVar4;
  
  lVar1 = FUN_0541441c(*(long *)(this + 8) - *(long *)this >> 3);
  ppTVar2 = (TextureInfo **)FUN_05414444();
  ppTVar3 = uninitialized_copy_ptr<EA::Text::TextureInfo**,EA::Text::TextureInfo**,EA::Text::TextureInfo**>
                      (*(TextureInfo ***)this,*(TextureInfo ***)(this + 8),ppTVar2);
  puVar4 = (undefined8 *)FUN_0541424c();
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_1;
  }
  FUN_0541442c(this,*(undefined8 *)this);
  *(TextureInfo ***)this = ppTVar2;
  *(TextureInfo ***)(this + 8) = ppTVar3 + 1;
  *(TextureInfo ***)(this + 0x10) = ppTVar2 + lVar1;
  return;
}


/* eastl::vector<EA::Text::TextureInfo*, eastl::fixed_vector_allocator<8ul, 1ul, 8ul, 0ul, true,
   eastl::allocator> >::push_back(EA::Text::TextureInfo* const&) */

void __thiscall
eastl::
vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
            *this,TextureInfo **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0541424c(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}


void __thiscall
eastl::
vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
::push_back(vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
            *this,TextureInfo **param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(this + 8) = uVar2 + 8;
    puVar1 = (undefined8 *)FUN_0541424c(uVar2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_1;
    }
    return;
  }
  DoInsertValueEnd(this,param_1);
  return;
}

