// Class: eastl::fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>


/* eastl::fixed_vector<EA::Text::FontServer::Face*, 8ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::get_overflow_allocator() */

void eastl::
     fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
     ::get_overflow_allocator(void)

{
  nop();
  return;
}


/* eastl::fixed_vector<EA::Text::TextStyle const*, 48ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0533b3ac(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::TextStyle const*, 48ul, true, eastl::allocator>::fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> *this)

{
  fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> **)(this + 0x10) =
       this + 0x1a8;
  *(fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> **)this = pfVar1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<EA::Text::TextStyle const*, 48ul, true,
   eastl::allocator>::push_back(EA::Text::TextStyle const* const&) */

void __thiscall
eastl::fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator>::push_back
          (fixed_vector<EA::Text::TextStyle_const*,48ul,true,eastl::allocator> *this,
          TextStyle **param_1)

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
  vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
  ::DoInsertValueEnd((vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,48ul,8ul,0ul,true,eastl::allocator>>
                      *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::FontServer::Face*, 8ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::fixed_vector(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> const&) */

void __thiscall
eastl::
fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::fixed_vector(fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *this,CoreAllocatorAdapter *param_1)

{
  fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  afStack_20 [24];
  long local_8;
  
  pfVar1 = this + 0x30;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::fixed_vector_allocator(afStack_20,pfVar1,param_1);
  vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    **)this = pfVar1;
  *(fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    **)(this + 0x10) = this + 0x70;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<EA::Text::FontServer::Face*, 8ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >::~fixed_vector() */

void __thiscall
eastl::
fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::~fixed_vector(fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *this)

{
  if (*(ulong *)this != 0) {
    fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::deallocate(this + 0x18,*(ulong *)this);
    return;
  }
  return;
}


/* eastl::fixed_vector<EA::Text::FontServer::Face*, 8ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::push_back(EA::Text::FontServer::Face* const&) */

void __thiscall
eastl::
fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
::push_back(fixed_vector<EA::Text::FontServer::Face*,8ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
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
  vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
  ::DoInsertValueEnd((vector<EA::Text::FontServer::Face*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                      *)this,param_1);
  return;
}


/* eastl::fixed_vector<EA::Text::TextStyle const*, 8ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0536f5c4(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::fixed_vector<EA::Text::Typesetter::RunInfo, 4ul, true, eastl::allocator>::~fixed_vector()
    */

void __thiscall
eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0536f5d8(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::fixed_vector<unsigned long, 64ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<unsigned_long,64ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<unsigned_long,64ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0536f66c(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::fixed_vector<unsigned long, 16ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<unsigned_long,16ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<unsigned_long,16ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0536f680(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::Typesetter::RunInfo, 4ul, true, eastl::allocator>::fixed_vector()
    */

void __thiscall
eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *this)

{
  fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> **)this = pfVar1;
  *(fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> **)(this + 0x10) =
       this + 0x88;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<unsigned long, 64ul, true, eastl::allocator>::fixed_vector() */

void __thiscall
eastl::fixed_vector<unsigned_long,64ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<unsigned_long,64ul,true,eastl::allocator> *this)

{
  fixed_vector<unsigned_long,64ul,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<unsigned_long,64ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<unsigned_long,64ul,true,eastl::allocator> **)(this + 0x10) = this + 0x228;
  *(fixed_vector<unsigned_long,64ul,true,eastl::allocator> **)this = pfVar1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::OTFLookup*, 16ul, true, eastl::allocator>::fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *this)

{
  fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> **)this = pfVar1;
  *(fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> **)(this + 0x10) = this + 0xa8;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<unsigned long, 64ul, true, eastl::allocator>::push_back(unsigned long const&)
    */

void __thiscall
eastl::fixed_vector<unsigned_long,64ul,true,eastl::allocator>::push_back
          (fixed_vector<unsigned_long,64ul,true,eastl::allocator> *this,ulong *param_1)

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
  vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>::
  DoInsertValueEnd((vector<unsigned_long,eastl::fixed_vector_allocator<8ul,64ul,8ul,0ul,true,eastl::allocator>>
                    *)this,param_1);
  return;
}


/* eastl::fixed_vector<unsigned long, 16ul, true, eastl::allocator>::push_back(unsigned long const&)
    */

void __thiscall
eastl::fixed_vector<unsigned_long,16ul,true,eastl::allocator>::push_back
          (fixed_vector<unsigned_long,16ul,true,eastl::allocator> *this,ulong *param_1)

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
  vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>::
  DoInsertValueEnd((vector<unsigned_long,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
                    *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::Typesetter::RunInfo, 4ul, true, eastl::allocator>::push_back() */

void __thiscall
eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::push_back
          (fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *this)

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
    vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
    ::DoInsertValueEnd((vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
                        *)this,aRStack_20);
    lVar2 = *(long *)(this + 8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 + -0x18);
}


/* eastl::fixed_vector<EA::Text::Typesetter::RunInfo, 4ul, true,
   eastl::allocator>::push_back(EA::Text::Typesetter::RunInfo const&) */

void __thiscall
eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::push_back
          (fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *this,
          RunInfo *param_1)

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
  vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
  ::DoInsertValueEnd((vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
                      *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::TextStyle const*, 8ul, true,
   eastl::allocator>::fixed_vector(unsigned long) */

void __thiscall
eastl::fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> *this,ulong param_1)

{
  fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> *pfVar1;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  *(fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> **)this = pfVar1;
  *(fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> **)(this + 0x10) =
       this + 0x68;
  vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
  ::resize((vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
            *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<EA::Text::TextStyle const*, 8ul, true,
   eastl::allocator>::push_back(EA::Text::TextStyle const* const&) */

void __thiscall
eastl::fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator>::push_back
          (fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> *this,
          TextStyle **param_1)

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
  vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
  ::DoInsertValueEnd((vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
                      *)this,param_1);
  return;
}


/* eastl::fixed_vector<EA::Text::Typesetter::RunInfo, 4ul, true,
   eastl::allocator>::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<EA::Text::Typesetter::RunInfo,
   4ul, true, eastl::allocator> const&) */

fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> * __thiscall
eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::operator=
          (fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *this,
          fixed_vector *param_1)

{
  RunInfo *pRVar1;
  RunInfo *pRVar2;
  
  if (this != (fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)param_1) {
    FUN_0536f6c4(*(undefined8 *)this,this + 8);
    pRVar1 = (RunInfo *)FUN_0536f578(*(undefined8 *)param_1);
    pRVar2 = (RunInfo *)FUN_0536f57c(*(undefined8 *)(param_1 + 8));
    vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
    ::assign<EA::Text::Typesetter::RunInfo_const*>
              ((vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
                *)this,pRVar1,pRVar2);
  }
  return this;
}


/* eastl::fixed_vector<unsigned short, 1024ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<unsigned_short,1024ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<unsigned_short,1024ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0537aca8(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<unsigned short, 1024ul, true, eastl::allocator>::fixed_vector(unsigned long,
   unsigned short const&) */

void __thiscall
eastl::fixed_vector<unsigned_short,1024ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<unsigned_short,1024ul,true,eastl::allocator> *this,ulong param_1,
          ushort *param_2)

{
  fixed_vector<unsigned_short,1024ul,true,eastl::allocator> *pfVar1;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<unsigned_short,1024ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  *(fixed_vector<unsigned_short,1024ul,true,eastl::allocator> **)(this + 0x10) = this + 0x828;
  *(fixed_vector<unsigned_short,1024ul,true,eastl::allocator> **)this = pfVar1;
  vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>::
  resize((vector<unsigned_short,eastl::fixed_vector_allocator<2ul,1024ul,2ul,0ul,true,eastl::allocator>>
          *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<EA::Text::OTFLookup*, 16ul, true,
   eastl::allocator>::push_back(EA::Text::OTFLookup* const&) */

void __thiscall
eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::push_back
          (fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *this,OTFLookup **param_1)

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
  vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
  ::DoInsertValueEnd((vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
                      *)this,param_1);
  return;
}


/* eastl::fixed_vector<EA::Text::OTFLookup*, 16ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0537d974(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* eastl::fixed_vector<EA::Text::FeatureLookup, 10ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator> *this)

{
  destruct<EA::Text::FeatureLookup*>(*(FeatureLookup **)this,*(FeatureLookup **)(this + 8));
  VectorBase<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
  ::~VectorBase((VectorBase<EA::Text::FeatureLookup,eastl::fixed_vector_allocator<176ul,10ul,8ul,0ul,true,eastl::allocator>>
                 *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::FeatureLookup, 10ul, true, eastl::allocator>::fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator> *this)

{
  fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator> **)(this + 0x10) = this + 0x708
  ;
  *(fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator> **)this = pfVar1;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::OTFLookup*, 16ul, true,
   eastl::allocator>::fixed_vector(eastl::fixed_vector<EA::Text::OTFLookup*, 16ul, true,
   eastl::allocator> const&) */

void __thiscall
eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *this,fixed_vector *param_1
          )

{
  fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *pfVar1;
  OTFLookup **ppOVar2;
  OTFLookup **ppOVar3;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  *(fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> **)this = pfVar1;
  *(fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> **)(this + 0x10) = this + 0xa8;
  ppOVar2 = (OTFLookup **)FUN_0537d98c(*(undefined8 *)param_1);
  ppOVar3 = (OTFLookup **)FUN_0537d990(*(undefined8 *)(param_1 + 8));
  vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
  ::assign<EA::Text::OTFLookup*const*>
            ((vector<EA::Text::OTFLookup*,eastl::fixed_vector_allocator<8ul,16ul,8ul,0ul,true,eastl::allocator>>
              *)this,ppOVar2,ppOVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<EA::Text::BmpTextureInfo*, 4ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_0540ee78(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::BmpTextureInfo*, 4ul, true, eastl::allocator>::fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> *this)

{
  fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> **)this = pfVar1;
  *(fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> **)(this + 0x10) = this + 0x48
  ;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<EA::Text::BmpTextureInfo*, 4ul, true,
   eastl::allocator>::push_back(EA::Text::BmpTextureInfo* const&) */

void __thiscall
eastl::fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator>::push_back
          (fixed_vector<EA::Text::BmpTextureInfo*,4ul,true,eastl::allocator> *this,
          BmpTextureInfo **param_1)

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
  vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
  ::DoInsertValueEnd((vector<EA::Text::BmpTextureInfo*,eastl::fixed_vector_allocator<8ul,4ul,8ul,0ul,true,eastl::allocator>>
                      *)this,param_1);
  return;
}


/* eastl::fixed_vector<EA::Text::TextureInfo*, 1ul, true, eastl::allocator>::~fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator>::~fixed_vector
          (fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *this)

{
  if (*(long *)this != 0) {
    FUN_05414398(*(undefined8 *)(this + 0x20));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::fixed_vector<EA::Text::TextureInfo*, 1ul, true, eastl::allocator>::fixed_vector() */

void __thiscall
eastl::fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator>::fixed_vector
          (fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *this)

{
  fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *pfVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long local_8;
  
  pfVar1 = this + 0x28;
  local_8 = ___stack_chk_guard;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pfVar1);
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::vector((fixed_vector_allocator *)this);
  *(fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> **)(this + 8) = pfVar1;
  lVar2 = ___stack_chk_guard;
  *(fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> **)this = pfVar1;
  *(fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> **)(this + 0x10) = this + 0x30;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::fixed_vector<EA::Text::TextureInfo*, 1ul, true,
   eastl::allocator>::push_back(EA::Text::TextureInfo* const&) */

void __thiscall
eastl::fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator>::push_back
          (fixed_vector<EA::Text::TextureInfo*,1ul,true,eastl::allocator> *this,
          TextureInfo **param_1)

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
  vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
  ::DoInsertValueEnd((vector<EA::Text::TextureInfo*,eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>>
                      *)this,param_1);
  return;
}

