// Class: eastl


/* bool eastl::TEMPNAMEPLACEHOLDERVALUE(eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned
   short, unsigned short> const, EA::Text::Kerning>, eastl::pair<eastl::pair<unsigned short,
   unsigned short> const, EA::Text::Kerning> const*, eastl::pair<eastl::pair<unsigned short,
   unsigned short> const, EA::Text::Kerning> const&> const&,
   eastl::rbtree_iterator<eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>*, eastl::pair<eastl::pair<unsigned short, unsigned short> const,
   EA::Text::Kerning>&> const&) */

bool eastl::operator!=(rbtree_iterator *param_1,rbtree_iterator *param_2)

{
  return *(long *)param_1 != *(long *)param_2;
}


/* int const& eastl::max_alt<int>(int const&, int const&) */

int * eastl::max_alt<int>(int *param_1,int *param_2)

{
  if (*param_2 <= *param_1) {
    param_2 = param_1;
  }
  return param_2;
}


/* unsigned long const& eastl::max_alt<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * eastl::max_alt<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_2 <= *param_1) {
    param_2 = param_1;
  }
  return param_2;
}


/* float const& eastl::max_alt<float>(float const&, float const&) */

float * eastl::max_alt<float>(float *param_1,float *param_2)

{
  if (*param_2 <= *param_1) {
    param_2 = param_1;
  }
  return param_2;
}


/* float const& eastl::min_alt<float>(float const&, float const&) */

float * eastl::min_alt<float>(float *param_1,float *param_2)

{
  if (*param_1 <= *param_2) {
    param_2 = param_1;
  }
  return param_2;
}


/* int const& eastl::min_alt<int>(int const&, int const&) */

int * eastl::min_alt<int>(int *param_1,int *param_2)

{
  if (*param_1 <= *param_2) {
    param_2 = param_1;
  }
  return param_2;
}


/* unsigned long const& eastl::min_alt<unsigned long>(unsigned long const&, unsigned long const&) */

ulong * eastl::min_alt<unsigned_long>(ulong *param_1,ulong *param_2)

{
  if (*param_1 <= *param_2) {
    param_2 = param_1;
  }
  return param_2;
}


/* unsigned int const& eastl::min_alt<unsigned int>(unsigned int const&, unsigned int const&) */

uint * eastl::min_alt<unsigned_int>(uint *param_1,uint *param_2)

{
  if (*param_1 <= *param_2) {
    param_2 = param_1;
  }
  return param_2;
}


/* void* eastl::allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >(EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>&, unsigned long, unsigned
   long, unsigned long) */

void * eastl::allocate_memory<EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 (CoreAllocatorAdapter *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  
  if (8 < param_3) {
    pvVar1 = (void *)FUN_05338748();
    return pvVar1;
  }
  pvVar1 = (void *)FUN_05338720(*(undefined8 *)param_1,*(undefined4 *)(param_1 + 8),param_2,param_4,
                                param_4);
  return pvVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeGlyphMesh::TextureUsageInfo*
   eastl::uninitialized_copy_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo*,
   Sexy::PrimeGlyphMesh::TextureUsageInfo*,
   Sexy::PrimeGlyphMesh::TextureUsageInfo*>(Sexy::PrimeGlyphMesh::TextureUsageInfo*,
   Sexy::PrimeGlyphMesh::TextureUsageInfo*, Sexy::PrimeGlyphMesh::TextureUsageInfo*) */

TextureUsageInfo *
eastl::
uninitialized_copy_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*,Sexy::PrimeGlyphMesh::TextureUsageInfo*>
          (TextureUsageInfo *param_1,TextureUsageInfo *param_2,TextureUsageInfo *param_3)

{
  undefined8 *extraout_x0;
  TextureUsageInfo *local_48;
  TextureUsageInfo *local_40;
  TextureUsageInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_053391e8(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (TextureUsageInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo, unsigned
   long>(Sexy::PrimeGlyphMesh::TextureUsageInfo*, unsigned long,
   Sexy::PrimeGlyphMesh::TextureUsageInfo const&) */

void eastl::uninitialized_fill_n_ptr<Sexy::PrimeGlyphMesh::TextureUsageInfo,unsigned_long>
               (TextureUsageInfo *param_1,ulong param_2,TextureUsageInfo *param_3)

{
  TextureUsageInfo *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_05339ac8(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Analysis* eastl::copy_chooser<EA::Text::Analysis*,
   EA::Text::Analysis*>(EA::Text::Analysis*, EA::Text::Analysis*, EA::Text::Analysis*) */

Analysis *
eastl::copy_chooser<EA::Text::Analysis*,EA::Text::Analysis*>
          (Analysis *param_1,Analysis *param_2,Analysis *param_3)

{
  undefined8 uVar1;
  Analysis *pAVar2;
  Analysis *pAVar4;
  Analysis *pAVar3;
  
  pAVar3 = param_1;
  pAVar4 = param_3;
  if (param_1 != param_2) {
    do {
      pAVar2 = pAVar3 + 0x10;
      uVar1 = *(undefined8 *)(pAVar3 + 8);
      *(undefined8 *)pAVar4 = *(undefined8 *)pAVar3;
      *(undefined8 *)(pAVar4 + 8) = uVar1;
      pAVar3 = pAVar2;
      pAVar4 = pAVar4 + 0x10;
    } while (param_2 != pAVar2);
    param_3 = param_3 + ((long)param_2 - (long)(param_1 + 0x10) & 0xfffffffffffffff0U) + 0x10;
  }
  return param_3;
}


/* EA::Text::Analysis* eastl::copy<EA::Text::Analysis*, EA::Text::Analysis*>(EA::Text::Analysis*,
   EA::Text::Analysis*, EA::Text::Analysis*) */

Analysis *
eastl::copy<EA::Text::Analysis*,EA::Text::Analysis*>
          (Analysis *param_1,Analysis *param_2,Analysis *param_3)

{
  undefined8 uVar1;
  Analysis *pAVar2;
  Analysis *pAVar4;
  Analysis *pAVar3;
  
  pAVar3 = param_1;
  pAVar4 = param_3;
  if (param_1 != param_2) {
    do {
      pAVar2 = pAVar3 + 0x10;
      uVar1 = *(undefined8 *)(pAVar3 + 8);
      *(undefined8 *)pAVar4 = *(undefined8 *)pAVar3;
      *(undefined8 *)(pAVar4 + 8) = uVar1;
      pAVar3 = pAVar2;
      pAVar4 = pAVar4 + 0x10;
    } while (param_2 != pAVar2);
    param_3 = param_3 + ((long)param_2 - (long)(param_1 + 0x10) & 0xfffffffffffffff0U) + 0x10;
  }
  return param_3;
}


/* eastl::CharStringUninitializedFillN(char16_t*, unsigned long, char16_t) */

wchar16 * eastl::CharStringUninitializedFillN(wchar16 *param_1,ulong param_2,wchar16 param_3)

{
  ulong uVar1;
  wchar16 *pwVar2;
  ulong uVar3;
  ulong uVar4;
  wchar16 *pwVar5;
  
  pwVar2 = param_1 + param_2;
  if (param_1 < pwVar2) {
    pwVar5 = param_1 + 1;
    uVar3 = (long)pwVar2 + (1 - (long)pwVar5);
    uVar4 = uVar3 >> 1;
    uVar1 = (uVar4 - 7 >> 3) + 1;
    if (0xd < uVar3) {
      uVar3 = 0;
      pwVar5 = param_1;
      do {
        *(ulong *)(pwVar5 + 4) = CONCAT26(param_3,CONCAT24(param_3,CONCAT22(param_3,param_3)));
        *(ulong *)pwVar5 = CONCAT26(param_3,CONCAT24(param_3,CONCAT22(param_3,param_3)));
        uVar3 = uVar3 + 1;
        pwVar5 = pwVar5 + 8;
      } while (uVar3 < uVar1);
      param_1 = param_1 + uVar1 * 8;
      if (uVar4 + 1 == uVar1 * 8) {
        return pwVar2;
      }
      pwVar5 = param_1 + 1;
    }
    *param_1 = param_3;
    if ((((pwVar5 < pwVar2) && (param_1[1] = param_3, param_1 + 2 < pwVar2)) &&
        (param_1[2] = param_3, param_1 + 3 < pwVar2)) &&
       (((param_1[3] = param_3, param_1 + 4 < pwVar2 && (param_1[4] = param_3, param_1 + 5 < pwVar2)
         ) && (param_1[5] = param_3, param_1 + 6 < pwVar2)))) {
      param_1[6] = param_3;
    }
  }
  return pwVar2;
}


/* wchar_t* eastl::CharStringUninitializedCopy<wchar_t>(wchar_t const*, wchar_t const*, wchar_t*) */

wchar_t * eastl::CharStringUninitializedCopy<wchar_t>
                    (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  void *pvVar1;
  
  pvVar1 = memmove(param_3,param_1,(long)param_2 - (long)param_1);
  return (wchar_t *)((long)pvVar1 + ((long)param_2 - (long)param_1));
}


/* EA::Text::TextureInfo** eastl::copy_chooser<EA::Text::TextureInfo**,
   EA::Text::TextureInfo**>(EA::Text::TextureInfo**, EA::Text::TextureInfo**,
   EA::Text::TextureInfo**) */

TextureInfo **
eastl::copy_chooser<EA::Text::TextureInfo**,EA::Text::TextureInfo**>
          (TextureInfo **param_1,TextureInfo **param_2,TextureInfo **param_3)

{
  void *pvVar1;
  
  pvVar1 = memmove(param_3,param_1,(long)param_2 - (long)param_1);
  return (TextureInfo **)((long)pvVar1 + ((long)param_2 - (long)param_1));
}


/* eastl::generic_iterator<EA::Text::TextureInfo**, void>
   eastl::copy<eastl::generic_iterator<EA::Text::TextureInfo**, void>,
   eastl::generic_iterator<EA::Text::TextureInfo**, void>
   >(eastl::generic_iterator<EA::Text::TextureInfo**, void>,
   eastl::generic_iterator<EA::Text::TextureInfo**, void>,
   eastl::generic_iterator<EA::Text::TextureInfo**, void>) */

void eastl::
     copy<eastl::generic_iterator<EA::Text::TextureInfo**,void>,eastl::generic_iterator<EA::Text::TextureInfo**,void>>
               (void)

{
  copy_generic_iterator<true,true>::
  do_copy<eastl::generic_iterator<EA::Text::TextureInfo**,void>,eastl::generic_iterator<EA::Text::TextureInfo**,void>>
            ();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::TextStyle const** eastl::uninitialized_copy_ptr<EA::Text::TextStyle const**,
   EA::Text::TextStyle const**, EA::Text::TextStyle const**>(EA::Text::TextStyle const**,
   EA::Text::TextStyle const**, EA::Text::TextStyle const**) */

TextStyle **
eastl::
uninitialized_copy_ptr<EA::Text::TextStyle_const**,EA::Text::TextStyle_const**,EA::Text::TextStyle_const**>
          (TextStyle **param_1,TextStyle **param_2,TextStyle **param_3)

{
  undefined8 *extraout_x0;
  TextStyle **local_48;
  TextStyle **local_40;
  TextStyle **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0533b6d0(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (TextStyle **)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::AnalysisInfo* eastl::uninitialized_copy_ptr<EA::Text::AnalysisInfo*,
   EA::Text::AnalysisInfo*, EA::Text::AnalysisInfo*>(EA::Text::AnalysisInfo*,
   EA::Text::AnalysisInfo*, EA::Text::AnalysisInfo*) */

AnalysisInfo *
eastl::
uninitialized_copy_ptr<EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*,EA::Text::AnalysisInfo*>
          (AnalysisInfo *param_1,AnalysisInfo *param_2,AnalysisInfo *param_3)

{
  undefined8 *extraout_x0;
  AnalysisInfo *local_48;
  AnalysisInfo *local_40;
  AnalysisInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0533d334(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (AnalysisInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphInfo* eastl::uninitialized_copy_ptr<EA::Text::GlyphInfo*, EA::Text::GlyphInfo*,
   EA::Text::GlyphInfo*>(EA::Text::GlyphInfo*, EA::Text::GlyphInfo*, EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::uninitialized_copy_ptr<EA::Text::GlyphInfo*,EA::Text::GlyphInfo*,EA::Text::GlyphInfo*>
          (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  undefined8 *extraout_x0;
  GlyphInfo *local_48;
  GlyphInfo *local_40;
  GlyphInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0533d4c8(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (GlyphInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphLayoutInfo* eastl::uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,
   EA::Text::GlyphLayoutInfo*, EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo*,
   EA::Text::GlyphLayoutInfo*, EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::
uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*,EA::Text::GlyphLayoutInfo*>
          (GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  undefined8 *extraout_x0;
  GlyphLayoutInfo *local_48;
  GlyphLayoutInfo *local_40;
  GlyphLayoutInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0533d654(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (GlyphLayoutInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::RunInfo* eastl::copy_chooser<EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo*>(EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo const*, EA::Text::Typesetter::RunInfo*) */

RunInfo * eastl::copy_chooser<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                    (RunInfo *param_1,RunInfo *param_2,RunInfo *param_3)

{
  RunInfo *pRVar1;
  undefined8 uVar2;
  RunInfo *pRVar3;
  RunInfo *pRVar4;
  
  pRVar3 = param_1;
  pRVar4 = param_3;
  if (param_1 != param_2) {
    do {
      uVar2 = *(undefined8 *)(pRVar3 + 8);
      pRVar1 = pRVar3 + 0x18;
      *(undefined8 *)pRVar4 = *(undefined8 *)pRVar3;
      *(undefined8 *)(pRVar4 + 8) = uVar2;
      *(undefined8 *)(pRVar4 + 0x10) = *(undefined8 *)(pRVar3 + 0x10);
      pRVar3 = pRVar1;
      pRVar4 = pRVar4 + 0x18;
    } while (param_2 != pRVar1);
    param_3 = param_3 + ((((ulong)((long)param_2 - (long)(param_1 + 0x18)) >> 3) * 0xaaaaaaaaaaaaaab
                         & 0x1fffffffffffffff) + 1) * 0x18;
  }
  return param_3;
}


/* EA::Text::Typesetter::RunInfo* eastl::copy<EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo*>(EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo const*, EA::Text::Typesetter::RunInfo*) */

RunInfo * eastl::copy<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                    (RunInfo *param_1,RunInfo *param_2,RunInfo *param_3)

{
  RunInfo *pRVar1;
  undefined8 uVar2;
  RunInfo *pRVar3;
  RunInfo *pRVar4;
  
  pRVar3 = param_1;
  pRVar4 = param_3;
  if (param_1 != param_2) {
    do {
      uVar2 = *(undefined8 *)(pRVar3 + 8);
      pRVar1 = pRVar3 + 0x18;
      *(undefined8 *)pRVar4 = *(undefined8 *)pRVar3;
      *(undefined8 *)(pRVar4 + 8) = uVar2;
      *(undefined8 *)(pRVar4 + 0x10) = *(undefined8 *)(pRVar3 + 0x10);
      pRVar3 = pRVar1;
      pRVar4 = pRVar4 + 0x18;
    } while (param_2 != pRVar1);
    param_3 = param_3 + ((((ulong)((long)param_2 - (long)(param_1 + 0x18)) >> 3) * 0xaaaaaaaaaaaaaab
                         & 0x1fffffffffffffff) + 1) * 0x18;
  }
  return param_3;
}


/* EA::Text::OTFLookup** eastl::copy<EA::Text::OTFLookup* const*,
   EA::Text::OTFLookup**>(EA::Text::OTFLookup* const*, EA::Text::OTFLookup* const*,
   EA::Text::OTFLookup**) */

OTFLookup **
eastl::copy<EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>
          (OTFLookup **param_1,OTFLookup **param_2,OTFLookup **param_3)

{
  void *pvVar1;
  
  pvVar1 = memmove(param_3,param_1,(long)param_2 - (long)param_1);
  return (OTFLookup **)((long)pvVar1 + ((long)param_2 - (long)param_1));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned short* eastl::uninitialized_copy_ptr<unsigned short*, unsigned short*, unsigned
   short*>(unsigned short*, unsigned short*, unsigned short*) */

ushort * eastl::uninitialized_copy_ptr<unsigned_short*,unsigned_short*,unsigned_short*>
                   (ushort *param_1,ushort *param_2,ushort *param_3)

{
  undefined8 *extraout_x0;
  TextureInfo **local_48;
  TextureInfo **local_40;
  TextureInfo **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = (TextureInfo **)param_3;
  local_40 = (TextureInfo **)param_2;
  local_38[0] = (TextureInfo **)param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,&local_40);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_48);
  local_28 = FUN_0533d9a8(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (ushort *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::GlyphInfo* eastl::copy_chooser<EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::copy_chooser<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
          (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  GlyphInfo *pGVar1;
  GlyphInfo *pGVar3;
  GlyphInfo *pGVar2;
  
  pGVar2 = param_1;
  pGVar3 = param_3;
  if (param_1 != param_2) {
    do {
      pGVar1 = pGVar2 + 4;
      *(undefined4 *)pGVar3 = *(undefined4 *)pGVar2;
      pGVar2 = pGVar1;
      pGVar3 = pGVar3 + 4;
    } while (param_2 != pGVar1);
    param_3 = param_3 + ((long)param_2 - (long)(param_1 + 4) & 0xfffffffffffffffcU) + 4;
  }
  return param_3;
}


/* EA::Text::GlyphInfo* eastl::copy<EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::copy<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
          (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  GlyphInfo *pGVar1;
  GlyphInfo *pGVar3;
  GlyphInfo *pGVar2;
  
  pGVar2 = param_1;
  pGVar3 = param_3;
  if (param_1 != param_2) {
    do {
      pGVar1 = pGVar2 + 4;
      *(undefined4 *)pGVar3 = *(undefined4 *)pGVar2;
      pGVar2 = pGVar1;
      pGVar3 = pGVar3 + 4;
    } while (param_2 != pGVar1);
    param_3 = param_3 + ((long)param_2 - (long)(param_1 + 4) & 0xfffffffffffffffcU) + 4;
  }
  return param_3;
}


/* EA::Text::GlyphLayoutInfo* eastl::copy_chooser<EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::copy_chooser<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
          (GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  GlyphLayoutInfo *pGVar1;
  undefined8 uVar2;
  GlyphLayoutInfo *pGVar3;
  GlyphLayoutInfo *pGVar4;
  
  pGVar3 = param_1;
  pGVar4 = param_3;
  if (param_1 != param_2) {
    do {
      uVar2 = *(undefined8 *)(pGVar3 + 8);
      *(undefined8 *)pGVar4 = *(undefined8 *)pGVar3;
      *(undefined8 *)(pGVar4 + 8) = uVar2;
      uVar2 = *(undefined8 *)(pGVar3 + 0x18);
      pGVar1 = pGVar3 + 0x28;
      *(undefined8 *)(pGVar4 + 0x10) = *(undefined8 *)(pGVar3 + 0x10);
      *(undefined8 *)(pGVar4 + 0x18) = uVar2;
      *(undefined8 *)(pGVar4 + 0x20) = *(undefined8 *)(pGVar3 + 0x20);
      pGVar3 = pGVar1;
      pGVar4 = pGVar4 + 0x28;
    } while (param_2 != pGVar1);
    param_3 = param_3 + ((((ulong)((long)param_2 - (long)(param_1 + 0x28)) >> 3) * 0xccccccccccccccd
                         & 0x1fffffffffffffff) + 1) * 0x28;
  }
  return param_3;
}


/* EA::Text::GlyphLayoutInfo* eastl::copy<EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::copy<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
          (GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  GlyphLayoutInfo *pGVar1;
  undefined8 uVar2;
  GlyphLayoutInfo *pGVar3;
  GlyphLayoutInfo *pGVar4;
  
  pGVar3 = param_1;
  pGVar4 = param_3;
  if (param_1 != param_2) {
    do {
      uVar2 = *(undefined8 *)(pGVar3 + 8);
      *(undefined8 *)pGVar4 = *(undefined8 *)pGVar3;
      *(undefined8 *)(pGVar4 + 8) = uVar2;
      uVar2 = *(undefined8 *)(pGVar3 + 0x18);
      pGVar1 = pGVar3 + 0x28;
      *(undefined8 *)(pGVar4 + 0x10) = *(undefined8 *)(pGVar3 + 0x10);
      *(undefined8 *)(pGVar4 + 0x18) = uVar2;
      *(undefined8 *)(pGVar4 + 0x20) = *(undefined8 *)(pGVar3 + 0x20);
      pGVar3 = pGVar1;
      pGVar4 = pGVar4 + 0x28;
    } while (param_2 != pGVar1);
    param_3 = param_3 + ((((ulong)((long)param_2 - (long)(param_1 + 0x28)) >> 3) * 0xccccccccccccccd
                         & 0x1fffffffffffffff) + 1) * 0x28;
  }
  return param_3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long* eastl::uninitialized_copy_ptr<unsigned long*, unsigned long*, unsigned
   long*>(unsigned long*, unsigned long*, unsigned long*) */

ulong * eastl::uninitialized_copy_ptr<unsigned_long*,unsigned_long*,unsigned_long*>
                  (ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *extraout_x0;
  TextureInfo **local_48;
  TextureInfo **local_40;
  TextureInfo **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = (TextureInfo **)param_3;
  local_40 = (TextureInfo **)param_2;
  local_38[0] = (TextureInfo **)param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,&local_40);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_48);
  local_28 = FUN_0533deb8(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (ulong *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::CharToLower(char16_t) */

wchar16 eastl::CharToLower(wchar16 param_1)

{
  int iVar1;
  
  if ((ushort)param_1 < 0x100) {
    iVar1 = tolower((uint)(ushort)param_1);
    param_1 = (wchar16)iVar1;
  }
  return param_1;
}


/* eastl::CharStrlen(char const*) */

long eastl::CharStrlen(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (*param_1 == '\0') {
    return 0;
  }
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  return (long)pcVar1 - (long)param_1;
}


/* eastl::CharStrlen(char16_t const*) */

long eastl::CharStrlen(wchar16 *param_1)

{
  wchar16 *pwVar1;
  
  pwVar1 = param_1;
  if (*param_1 == L'\0') {
    return 0;
  }
  do {
    pwVar1 = pwVar1 + 1;
  } while (*pwVar1 != L'\0');
  return (long)pwVar1 - (long)param_1 >> 1;
}


/* eastl::CharStrlen(wchar_t const*) */

long eastl::CharStrlen(wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = param_1;
  if (*param_1 == L'\0') {
    return 0;
  }
  do {
    pwVar1 = pwVar1 + 1;
  } while (*pwVar1 != L'\0');
  return (long)pwVar1 - (long)param_1 >> 2;
}


/* eastl::CharStringUninitializedFillN(wchar_t*, unsigned long, wchar_t) */

wchar_t * eastl::CharStringUninitializedFillN(wchar_t *param_1,ulong param_2,wchar_t param_3)

{
  ulong uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  
  pwVar2 = param_1 + param_2;
  if (param_1 < pwVar2) {
    pwVar5 = param_1 + 1;
    uVar3 = (long)pwVar2 + (3 - (long)pwVar5);
    uVar4 = uVar3 >> 2;
    uVar1 = (uVar4 - 3 >> 2) + 1;
    if (0xb < uVar3) {
      uVar3 = 0;
      pwVar5 = param_1;
      do {
        *(ulong *)(pwVar5 + 2) = CONCAT44(param_3,param_3);
        *(ulong *)pwVar5 = CONCAT44(param_3,param_3);
        uVar3 = uVar3 + 1;
        pwVar5 = pwVar5 + 4;
      } while (uVar3 < uVar1);
      param_1 = param_1 + uVar1 * 4;
      if (uVar4 + 1 == uVar1 * 4) {
        return pwVar2;
      }
      pwVar5 = param_1 + 1;
    }
    *param_1 = param_3;
    if ((pwVar5 < pwVar2) && (param_1[1] = param_3, param_1 + 2 < pwVar2)) {
      param_1[2] = param_3;
    }
  }
  return pwVar2;
}


/* bool eastl::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char16_t,
   eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> > const&, eastl::basic_string<char16_t,
   eastl::fixed_vector_allocator<2ul, 96ul, 2ul, 0ul, true,
   EA::Allocator::EAIOPathStringCoreAllocator> >::value_type const*) */

bool eastl::operator==(basic_string *param_1,value_type *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *__s1;
  undefined8 uVar4;
  
  lVar2 = CharStrlen((wchar16 *)param_2);
  uVar4 = *(undefined8 *)param_1;
  lVar3 = FUN_0533e5e8(uVar4,*(undefined8 *)(param_1 + 8));
  if (lVar3 != lVar2) {
    return false;
  }
  __s1 = (void *)FUN_0533e4d4(uVar4);
  iVar1 = memcmp(__s1,param_2,lVar3 << 1);
  return iVar1 == 0;
}


/* char16_t* eastl::find<char16_t*, char16_t>(char16_t*, char16_t*, char16_t const&) */

wchar16 * eastl::find<char16_t*,char16_t>(wchar16 *param_1,wchar16 *param_2,wchar16 *param_3)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
  }
  return param_1;
}


/* char16_t* eastl::search<char16_t*, char16_t const*>(char16_t*, char16_t*, char16_t const*,
   char16_t const*) */

wchar16 * eastl::search<char16_t*,char16_t_const*>
                    (wchar16 *param_1,wchar16 *param_2,wchar16 *param_3,wchar16 *param_4)

{
  wchar16 *pwVar1;
  wchar16 *pwVar2;
  wchar16 wVar3;
  wchar16 *pwVar4;
  wchar16 *pwVar5;
  
  if (param_3 != param_4) {
    if (param_3 + 1 == param_4) {
      pwVar5 = find<char16_t*,char16_t>(param_1,param_2,param_3);
      return pwVar5;
    }
    if (param_1 != param_2) {
      do {
        while (*param_1 == *param_3) {
          pwVar5 = param_1;
          if (param_2 == param_1) {
            return param_2;
          }
          param_1 = param_1 + 1;
          pwVar4 = param_3 + 1;
          pwVar2 = param_1;
          while( true ) {
            if (param_2 == pwVar2) {
              return param_2;
            }
            pwVar1 = pwVar4 + 1;
            wVar3 = *pwVar2;
            pwVar2 = pwVar2 + 1;
            if (wVar3 != *pwVar4) break;
            pwVar4 = pwVar1;
            if (param_4 == pwVar1) {
              return pwVar5;
            }
          }
        }
        param_1 = param_1 + 1;
      } while (param_2 != param_1);
      return param_2;
    }
  }
  return param_1;
}


/* eastl::CharStringUninitializedFillN(char*, unsigned long, char) */

char * eastl::CharStringUninitializedFillN(char *param_1,ulong param_2,char param_3)

{
  if (param_2 != 0) {
    memset(param_1,(uint)(byte)param_3,param_2);
  }
  return param_1 + param_2;
}


/* eastl::iterator_traits<unsigned int const*>::difference_type eastl::distance<unsigned int
   const*>(unsigned int const*, unsigned int const*) */

long eastl::distance<unsigned_int_const*>(uint *param_1,uint *param_2)

{
  return (long)param_2 - (long)param_1 >> 2;
}


/* void eastl::advance<unsigned int const*, long>(unsigned int const*&, long) */

void eastl::advance<unsigned_int_const*,long>(uint **param_1,long param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned int const* eastl::upper_bound<unsigned int const*, unsigned int>(unsigned int const*,
   unsigned int const*, unsigned int const&) */

uint * eastl::upper_bound<unsigned_int_const*,unsigned_int>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = distance<unsigned_int_const*>(param_1,param_2);
  if (0 < (long)uVar1) {
    do {
      while( true ) {
        uVar2 = (long)uVar1 >> 1;
        local_10 = param_1;
        advance<unsigned_int_const*,long>(&local_10,uVar2);
        if (*local_10 <= *param_3) break;
        uVar1 = uVar2;
        if ((long)uVar2 < 1) goto LAB_05356468;
      }
      param_1 = local_10 + 1;
      uVar1 = uVar1 + ~uVar2;
    } while (0 < (long)uVar1);
  }
LAB_05356468:
  if (local_8 == ___stack_chk_guard) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned int const* eastl::lower_bound<unsigned int const*, unsigned int>(unsigned int const*,
   unsigned int const*, unsigned int const&) */

uint * eastl::lower_bound<unsigned_int_const*,unsigned_int>
                 (uint *param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = distance<unsigned_int_const*>(param_1,param_2);
  if (0 < (long)uVar1) {
    do {
      while( true ) {
        uVar2 = (long)uVar1 >> 1;
        local_10 = param_1;
        advance<unsigned_int_const*,long>(&local_10,uVar2);
        if (*local_10 < *param_3) break;
        uVar1 = uVar2;
        if ((long)uVar2 < 1) goto LAB_053565a4;
      }
      param_1 = local_10 + 1;
      uVar1 = uVar1 + ~uVar2;
    } while (0 < (long)uVar1);
  }
LAB_053565a4:
  if (local_8 == ___stack_chk_guard) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::UCS4ToUTF8(unsigned int, char*&) */

undefined8 eastl::UCS4ToUTF8(uint param_1,char **param_2)

{
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar1 = (byte)param_1;
  if (param_1 < 0x80) {
    pbVar4 = (byte *)*param_2;
    *param_2 = (char *)(pbVar4 + 1);
    *pbVar4 = bVar1;
    return 1;
  }
  if (param_1 < 0x800) {
    pbVar4 = (byte *)*param_2;
    *param_2 = (char *)(pbVar4 + 1);
    bVar3 = (byte)(param_1 >> 6) | 0xc0;
  }
  else {
    if (param_1 < 0x10000) {
      pbVar4 = (byte *)*param_2;
      *param_2 = (char *)(pbVar4 + 1);
      *pbVar4 = (byte)(param_1 >> 0xc) | 0xe0;
    }
    else {
      if (param_1 < 0x200000) {
        pbVar4 = (byte *)*param_2;
        bVar3 = (byte)(param_1 >> 0xc);
        *param_2 = (char *)(pbVar4 + 1);
        *pbVar4 = (byte)(param_1 >> 0x12) | 0xf0;
        pbVar4 = (byte *)*param_2;
      }
      else {
        bVar3 = (byte)(param_1 >> 0x18);
        if (0x3ffffff < param_1) {
          if (-1 < (int)param_1) {
            pbVar4 = (byte *)*param_2;
            *param_2 = (char *)(pbVar4 + 1);
            *pbVar4 = bVar3 >> 6 | 0xfc;
            pbVar4 = (byte *)*param_2;
            *param_2 = (char *)(pbVar4 + 1);
            *pbVar4 = bVar3 & 0x3f | 0x80;
            pbVar4 = (byte *)*param_2;
            *param_2 = (char *)(pbVar4 + 1);
            *pbVar4 = (byte)(param_1 >> 0x12) & 0x3f | 0x80;
            pbVar4 = (byte *)*param_2;
            *param_2 = (char *)(pbVar4 + 1);
            *pbVar4 = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
            pbVar4 = (byte *)*param_2;
            *param_2 = (char *)(pbVar4 + 1);
            *pbVar4 = (byte)(param_1 >> 6) & 0x3f | 0x80;
            pbVar4 = (byte *)*param_2;
            *param_2 = (char *)(pbVar4 + 1);
            *pbVar4 = bVar1 & 0x3f | 0x80;
            return 1;
          }
          pcVar2 = *param_2;
          *param_2 = pcVar2 + 1;
          *pcVar2 = '\x01';
          return 0;
        }
        pbVar4 = (byte *)*param_2;
        *param_2 = (char *)(pbVar4 + 1);
        *pbVar4 = bVar3 | 0xf8;
        bVar3 = (byte)(param_1 >> 0xc);
        pbVar4 = (byte *)*param_2;
        *param_2 = (char *)(pbVar4 + 1);
        *pbVar4 = (byte)(param_1 >> 0x12) | 0x80;
        pbVar4 = (byte *)*param_2;
      }
      *param_2 = (char *)(pbVar4 + 1);
      *pbVar4 = bVar3 & 0x3f | 0x80;
    }
    bVar3 = (byte)(param_1 >> 6) & 0x3f | 0x80;
    pbVar4 = (byte *)*param_2;
    *param_2 = (char *)(pbVar4 + 1);
  }
  *pbVar4 = bVar3;
  pbVar4 = (byte *)*param_2;
  *param_2 = (char *)(pbVar4 + 1);
  *pbVar4 = bVar1 & 0x3f | 0x80;
  return 1;
}


/* eastl::UCS2ToUTF8(unsigned short, char*&) */

void eastl::UCS2ToUTF8(ushort param_1,char **param_2)

{
  UCS4ToUTF8((uint)param_1,param_2);
  return;
}


/* eastl::UTF8ToUCS4(char const*&, char const*, unsigned int&) */

undefined8 eastl::UTF8ToUCS4(char **param_1,char *param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 < param_2) {
    bVar1 = *pbVar2;
    uVar3 = (uint)bVar1;
    if (-1 < (char)bVar1) {
      pbVar5 = pbVar2 + 1;
      goto LAB_05356a2c;
    }
    if ((bVar1 & 0xc0) == 0xc0) {
      uVar4 = (uint)bVar1;
      if ((uVar4 & 0xe0) == 0xc0) {
        pbVar5 = pbVar2 + 2;
        if (((pbVar5 <= param_2) && ((pbVar2[1] & 0xc0) == 0x80)) &&
           (uVar3 = (uVar4 & 0x1f) << 6 | pbVar2[1] & 0x3f, uVar3 - 0x80 < 0x780))
        goto LAB_05356a2c;
      }
      else if ((uVar4 & 0xf0) == 0xe0) {
        pbVar5 = pbVar2 + 3;
        if (pbVar5 <= param_2) {
          if ((((pbVar2[1] & 0xc0) == 0x80) && ((pbVar2[2] & 0xc0) == 0x80)) &&
             (uVar3 = (pbVar2[1] & 0x3f) << 6 | (uVar4 & 0xf) << 0xc | pbVar2[2] & 0x3f,
             uVar3 - 0x800 < 0xf800)) goto LAB_05356a2c;
        }
      }
      else if ((uVar3 & 0xf8) == 0xf0) {
        pbVar5 = pbVar2 + 4;
        if (pbVar5 <= param_2) {
          if ((((pbVar2[1] & 0xc0) == 0x80) && ((pbVar2[2] & 0xc0) == 0x80)) &&
             (uVar3 = (pbVar2[1] & 0x3f) << 0xc | (uVar3 & 7) << 0x12 | pbVar2[3] & 0x3f |
                      (pbVar2[2] & 0x3f) << 6, uVar3 - 0x10000 < 0x100000)) goto LAB_05356a2c;
        }
      }
      else if ((uVar3 & 0xfc) == 0xf8) {
        pbVar5 = pbVar2 + 4;
        if (pbVar5 <= param_2) {
          uVar3 = 0xffff;
          goto LAB_05356a2c;
        }
      }
      else if (((uVar3 & 0xfe) == 0xfc) && (pbVar5 = pbVar2 + 5, pbVar5 <= param_2)) {
        uVar3 = 0xffff;
LAB_05356a2c:
        *param_1 = (char *)pbVar5;
        *param_3 = uVar3;
        return 1;
      }
    }
  }
  *param_1 = (char *)(pbVar2 + 1);
  *param_3 = 0xffff;
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* eastl::UTF8ToUCS2(char const*&, char const*, unsigned short&) */

void eastl::UTF8ToUCS2(char **param_1,char *param_2,ushort *param_3)

{
  char cVar1;
  ushort uVar2;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UTF8ToUCS4(param_1,param_2,&local_c);
  uVar2 = 0xffff;
  if (cVar1 != '\0') {
    if (local_c < 0x10000) {
      uVar2 = (ushort)local_c;
    }
    else {
      cVar1 = '\0';
    }
  }
  *param_3 = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* eastl::DecodePart(char const*&, char const*, char*&, char*) */

undefined8 eastl::DecodePart(char **param_1,char *param_2,char **param_3,char *param_4)

{
  ulong uVar1;
  size_t __n;
  
  __n = (long)param_2 - (long)*param_1;
  uVar1 = (long)param_4 - (long)*param_3;
  if (uVar1 < __n) {
    __n = uVar1;
  }
  memmove(*param_3,*param_1,__n);
  *param_1 = *param_1 + __n;
  *param_3 = *param_3 + __n;
  return 1;
}


/* eastl::DecodePart(char const*&, char const*, char16_t*&, char16_t*) */

undefined1 eastl::DecodePart(char **param_1,char *param_2,wchar16 **param_3,wchar16 *param_4)

{
  char cVar1;
  wchar16 *pwVar2;
  
  while( true ) {
    if (param_2 <= *param_1) {
      return 1;
    }
    pwVar2 = *param_3;
    if (param_4 <= pwVar2) break;
    *param_3 = pwVar2 + 1;
    cVar1 = UTF8ToUCS2(param_1,param_2,(ushort *)pwVar2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* eastl::DecodePart(char const*&, char const*, char32_t*&, char32_t*) */

undefined1 eastl::DecodePart(char **param_1,char *param_2,wchar32 **param_3,wchar32 *param_4)

{
  char cVar1;
  wchar32 *pwVar2;
  
  while( true ) {
    if (param_2 <= *param_1) {
      return 1;
    }
    pwVar2 = *param_3;
    if (param_4 <= pwVar2) break;
    *param_3 = pwVar2 + 1;
    cVar1 = UTF8ToUCS4(param_1,param_2,(uint *)pwVar2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* eastl::DecodePart(char16_t const*&, char16_t const*, char*&, char*) */

undefined1 eastl::DecodePart(wchar16 **param_1,wchar16 *param_2,char **param_3,char *param_4)

{
  wchar16 wVar1;
  char cVar2;
  wchar16 *pwVar3;
  
  while( true ) {
    pwVar3 = *param_1;
    if ((param_2 <= pwVar3) || (param_4 + -6 <= *param_3)) break;
    wVar1 = *pwVar3;
    *param_1 = pwVar3 + 1;
    cVar2 = UCS2ToUTF8(wVar1,param_3);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* eastl::DecodePart(char16_t const*&, char16_t const*, char16_t*&, char16_t*) */

undefined8 eastl::DecodePart(wchar16 **param_1,wchar16 *param_2,wchar16 **param_3,wchar16 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (long)param_2 - (long)*param_1 >> 1;
  uVar2 = (long)param_4 - (long)*param_3 >> 1;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  memmove(*param_3,*param_1,uVar1 * 2);
  *param_1 = *param_1 + uVar1;
  *param_3 = *param_3 + uVar1;
  return 1;
}


/* eastl::DecodePart(char16_t const*&, char16_t const*, char32_t*&, char32_t*) */

undefined8 eastl::DecodePart(wchar16 **param_1,wchar16 *param_2,wchar32 **param_3,wchar32 *param_4)

{
  wchar32 *pwVar1;
  wchar16 *pwVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  
  pwVar1 = *param_3;
  pwVar2 = *param_1;
  uVar4 = (long)param_4 - (long)pwVar1 >> 2;
  if (uVar4 < (ulong)((long)param_2 - (long)pwVar2 >> 1)) {
    param_2 = pwVar2 + uVar4;
  }
  if (pwVar2 != param_2) {
    while( true ) {
      *param_3 = pwVar1 + 1;
      pwVar3 = *param_1;
      pwVar2 = pwVar3 + 1;
      *param_1 = pwVar2;
      *pwVar1 = (uint)(ushort)*pwVar3;
      if (param_2 == pwVar2) break;
      pwVar1 = *param_3;
    }
  }
  return 1;
}


/* eastl::DecodePart(int const*&, int const*, char*&, char*) */

undefined1 eastl::DecodePart(int **param_1,int *param_2,char **param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  
  while( true ) {
    puVar3 = (uint *)*param_1;
    if ((param_2 <= puVar3) || (param_4 + -6 <= *param_3)) break;
    uVar1 = *puVar3;
    *param_1 = (int *)(puVar3 + 1);
    cVar2 = UCS4ToUTF8(uVar1,param_3);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* eastl::DecodePart(int const*&, int const*, char16_t*&, char16_t*) */

undefined8 eastl::DecodePart(int **param_1,int *param_2,wchar16 **param_3,wchar16 *param_4)

{
  wchar16 *pwVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  
  pwVar1 = *param_3;
  piVar2 = *param_1;
  uVar4 = (long)param_4 - (long)pwVar1 >> 1;
  if (uVar4 < (ulong)((long)param_2 - (long)piVar2 >> 2)) {
    param_2 = piVar2 + uVar4;
  }
  if (piVar2 != param_2) {
    while( true ) {
      *param_3 = pwVar1 + 1;
      piVar3 = *param_1;
      piVar2 = piVar3 + 1;
      *param_1 = piVar2;
      *pwVar1 = (wchar16)*piVar3;
      if (param_2 == piVar2) break;
      pwVar1 = *param_3;
    }
  }
  return 1;
}


/* eastl::DecodePart(char32_t const*&, char32_t const*, char32_t*&, char32_t*) */

undefined8 eastl::DecodePart(wchar32 **param_1,wchar32 *param_2,wchar32 **param_3,wchar32 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (long)param_2 - (long)*param_1 >> 2;
  uVar2 = (long)param_4 - (long)*param_3 >> 2;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  memmove(*param_3,*param_1,uVar1 * 4);
  *param_1 = *param_1 + uVar1;
  *param_3 = *param_3 + uVar1;
  return 1;
}


/* eastl::DecodePart(int const*&, int const*, char32_t*&, char32_t*) */

undefined8 eastl::DecodePart(int **param_1,int *param_2,wchar32 **param_3,wchar32 *param_4)

{
  wchar32 *pwVar1;
  wchar32 *pwVar2;
  wchar32 *pwVar3;
  
  pwVar2 = *param_1;
  pwVar1 = *param_3;
  if ((ulong)((long)param_4 - (long)pwVar1 >> 2) < (ulong)((long)param_2 - (long)pwVar2 >> 2)) {
    param_2 = (wchar32 *)((long)pwVar2 + ((long)param_4 - (long)pwVar1));
  }
  if (pwVar2 != param_2) {
    while( true ) {
      *param_3 = pwVar1 + 1;
      pwVar3 = *param_1;
      pwVar2 = pwVar3 + 1;
      *param_1 = pwVar2;
      *pwVar1 = *pwVar3;
      if (param_2 == pwVar2) break;
      pwVar1 = *param_3;
    }
  }
  return 1;
}


/* bool eastl::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > const&) */

bool eastl::operator==(basic_string *param_1,basic_string *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *__s1;
  void *__s2;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  lVar2 = FUN_0535a8a8(uVar5,*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)param_2;
  lVar3 = FUN_0535a8a8(uVar4,*(undefined8 *)(param_2 + 8));
  if (lVar2 != lVar3) {
    return false;
  }
  __s1 = (void *)FUN_0535a8a4(uVar5);
  __s2 = (void *)FUN_0535a8a4(uVar4);
  iVar1 = memcmp(__s1,__s2,lVar2 << 1);
  return iVar1 == 0;
}


bool eastl::operator==(basic_string *param_1,basic_string *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *__s1;
  void *__s2;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  lVar2 = FUN_0535a8a8(uVar5,*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)param_2;
  lVar3 = FUN_0535a8a8(uVar4,*(undefined8 *)(param_2 + 8));
  if (lVar2 != lVar3) {
    return false;
  }
  __s1 = (void *)FUN_0535a8a4(uVar5);
  __s2 = (void *)FUN_0535a8a4(uVar4);
  iVar1 = memcmp(__s1,__s2,lVar2 << 1);
  return iVar1 == 0;
}


/* bool eastl::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const&,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   >::value_type const*) */

bool eastl::operator==(basic_string *param_1,value_type *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *__s1;
  undefined8 uVar4;
  
  lVar2 = CharStrlen((wchar16 *)param_2);
  uVar4 = *(undefined8 *)param_1;
  lVar3 = FUN_0535a8a8(uVar4,*(undefined8 *)(param_1 + 8));
  if (lVar3 != lVar2) {
    return false;
  }
  __s1 = (void *)FUN_0535a8a4(uVar4);
  iVar1 = memcmp(__s1,param_2,lVar3 << 1);
  return iVar1 == 0;
}


bool eastl::operator==(basic_string *param_1,value_type *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *__s1;
  undefined8 uVar4;
  
  lVar2 = CharStrlen((wchar16 *)param_2);
  uVar4 = *(undefined8 *)param_1;
  lVar3 = FUN_0535a8a8(uVar4,*(undefined8 *)(param_1 + 8));
  if (lVar3 != lVar2) {
    return false;
  }
  __s1 = (void *)FUN_0535a8a4(uVar4);
  iVar1 = memcmp(__s1,param_2,lVar3 << 1);
  return iVar1 == 0;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::iterator
   eastl::hashtable_find<eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>,
   char16_t*>(eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > >, eastl::fixed_hashtable_allocator<6ul, 88ul, 4ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   eastl::basic_string<char16_t, EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>
   > > >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>&, char16_t*) */

void eastl::
     hashtable_find<eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::fixed_hashtable_allocator<6ul,88ul,4ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>,char16_t*>
               (hashtable *param_1,wchar16 *param_2)

{
  FUN_0535f9f8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


bool eastl::operator==(basic_string *param_1,value_type *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *__s1;
  undefined8 uVar4;
  
  lVar2 = CharStrlen((wchar16 *)param_2);
  uVar4 = *(undefined8 *)param_1;
  lVar3 = FUN_0535a8a8(uVar4,*(undefined8 *)(param_1 + 8));
  if (lVar3 != lVar2) {
    return false;
  }
  __s1 = (void *)FUN_0535a8a4(uVar4);
  iVar1 = memcmp(__s1,param_2,lVar3 << 1);
  return iVar1 == 0;
}


/* eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::iterator
   eastl::hashtable_find<eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>, char16_t
   const*>(eastl::hashtable<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face>, eastl::fixed_hashtable_allocator<10ul, 1992ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >,
   eastl::use_first<eastl::pair<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > const,
   EA::Text::FontServer::Face> >, eastl::equal_to<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >,
   eastl::string_hash<eastl::basic_string<char16_t,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> > >, eastl::mod_range_hashing,
   eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>&, char16_t const*) */

void eastl::
     hashtable_find<eastl::hashtable<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>,eastl::fixed_hashtable_allocator<10ul,1992ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>,eastl::use_first<eastl::pair<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>const,EA::Text::FontServer::Face>>,eastl::equal_to<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::string_hash<eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>,char16_t_const*>
               (hashtable *param_1,wchar16 *param_2)

{
  FUN_0535fb34(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


/* void* eastl::allocate_memory<eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >
   >(eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true,
   EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> >&, unsigned long, unsigned
   long, unsigned long) */

void * eastl::
       allocate_memory<eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>>
                 (fixed_vector_allocator *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  
  if (8 < param_3) {
    pvVar1 = (void *)FUN_0535a8c8();
    return pvVar1;
  }
  pvVar1 = (void *)FUN_0535a8b4();
  return pvVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontServer::Face** eastl::uninitialized_copy_ptr<EA::Text::FontServer::Face**,
   EA::Text::FontServer::Face**, EA::Text::FontServer::Face**>(EA::Text::FontServer::Face**,
   EA::Text::FontServer::Face**, EA::Text::FontServer::Face**) */

Face ** eastl::
        uninitialized_copy_ptr<EA::Text::FontServer::Face**,EA::Text::FontServer::Face**,EA::Text::FontServer::Face**>
                  (Face **param_1,Face **param_2,Face **param_3)

{
  undefined8 *extraout_x0;
  Face **local_48;
  Face **local_40;
  Face **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_05360914(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (Face **)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Analysis* eastl::uninitialized_copy_ptr<EA::Text::Analysis*, EA::Text::Analysis*,
   EA::Text::Analysis*>(EA::Text::Analysis*, EA::Text::Analysis*, EA::Text::Analysis*) */

Analysis *
eastl::uninitialized_copy_ptr<EA::Text::Analysis*,EA::Text::Analysis*,EA::Text::Analysis*>
          (Analysis *param_1,Analysis *param_2,Analysis *param_3)

{
  undefined8 *extraout_x0;
  Analysis *local_48;
  Analysis *local_40;
  Analysis *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_05363454(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (Analysis *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::Analysis, unsigned long>(EA::Text::Analysis*,
   unsigned long, EA::Text::Analysis const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::Analysis,unsigned_long>
               (Analysis *param_1,ulong param_2,Analysis *param_3)

{
  Analysis *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_05363630(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Analysis* eastl::copy_backward_chooser<EA::Text::Analysis*,
   EA::Text::Analysis*>(EA::Text::Analysis*, EA::Text::Analysis*, EA::Text::Analysis*) */

Analysis *
eastl::copy_backward_chooser<EA::Text::Analysis*,EA::Text::Analysis*>
          (Analysis *param_1,Analysis *param_2,Analysis *param_3)

{
  undefined8 uVar1;
  Analysis *pAVar2;
  Analysis *pAVar4;
  Analysis *pAVar3;
  
  pAVar3 = param_2;
  pAVar4 = param_3;
  if (param_2 != param_1) {
    do {
      pAVar2 = pAVar3 + -0x10;
      uVar1 = *(undefined8 *)(pAVar3 + -8);
      *(undefined8 *)(pAVar4 + -0x10) = *(undefined8 *)pAVar2;
      *(undefined8 *)(pAVar4 + -8) = uVar1;
      pAVar3 = pAVar2;
      pAVar4 = pAVar4 + -0x10;
    } while (param_1 != pAVar2);
    param_3 = param_3 + ~((ulong)(param_2 + (-0x10 - (long)param_1)) >> 4) * 0x10;
  }
  return param_3;
}


/* EA::Text::Analysis* eastl::copy_backward<EA::Text::Analysis*,
   EA::Text::Analysis*>(EA::Text::Analysis*, EA::Text::Analysis*, EA::Text::Analysis*) */

Analysis *
eastl::copy_backward<EA::Text::Analysis*,EA::Text::Analysis*>
          (Analysis *param_1,Analysis *param_2,Analysis *param_3)

{
  undefined8 uVar1;
  Analysis *pAVar2;
  Analysis *pAVar4;
  Analysis *pAVar3;
  
  pAVar3 = param_2;
  pAVar4 = param_3;
  if (param_2 != param_1) {
    do {
      pAVar2 = pAVar3 + -0x10;
      uVar1 = *(undefined8 *)(pAVar3 + -8);
      *(undefined8 *)(pAVar4 + -0x10) = *(undefined8 *)pAVar2;
      *(undefined8 *)(pAVar4 + -8) = uVar1;
      pAVar3 = pAVar2;
      pAVar4 = pAVar4 + -0x10;
    } while (param_1 != pAVar2);
    param_3 = param_3 + ~((ulong)(param_2 + (-0x10 - (long)param_1)) >> 4) * 0x10;
  }
  return param_3;
}


/* void eastl::swap<unsigned short>(unsigned short&, unsigned short&) */

void eastl::swap<unsigned_short>(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<unsigned long, unsigned long>(unsigned long*, unsigned long,
   unsigned long const&) */

void eastl::uninitialized_fill_n_ptr<unsigned_long,unsigned_long>
               (ulong *param_1,ulong param_2,ulong *param_3)

{
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = (TextureInfo **)param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  FUN_05367c10(local_10,param_2,*param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* char* eastl::find<char*, char>(char*, char*, char const&) */

char * eastl::find<char*,char>(char *param_1,char *param_2,char *param_3)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Vertex3D* eastl::uninitialized_copy_ptr<EA::Text::Vertex3D*, EA::Text::Vertex3D*,
   EA::Text::Vertex3D*>(EA::Text::Vertex3D*, EA::Text::Vertex3D*, EA::Text::Vertex3D*) */

Vertex3D *
eastl::uninitialized_copy_ptr<EA::Text::Vertex3D*,EA::Text::Vertex3D*,EA::Text::Vertex3D*>
          (Vertex3D *param_1,Vertex3D *param_2,Vertex3D *param_3)

{
  undefined8 *extraout_x0;
  Vertex3D *local_48;
  Vertex3D *local_40;
  Vertex3D *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0536ae7c(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (Vertex3D *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::Vertex3D, unsigned long>(EA::Text::Vertex3D*,
   unsigned long, EA::Text::Vertex3D const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::Vertex3D,unsigned_long>
               (Vertex3D *param_1,ulong param_2,Vertex3D *param_3)

{
  Vertex3D *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_0536afcc(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<unsigned short, unsigned long>(unsigned short*, unsigned
   long, unsigned short const&) */

void eastl::uninitialized_fill_n_ptr<unsigned_short,unsigned_long>
               (ushort *param_1,ulong param_2,ushort *param_3)

{
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = (TextureInfo **)param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  FUN_0536b2e0(local_10,param_2,*param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::RBTreeGetMinChild(eastl::rbtree_node_base const*) */

void eastl::RBTreeGetMinChild(rbtree_node_base *param_1)

{
  do {
    param_1 = *(rbtree_node_base **)(param_1 + 8);
  } while (param_1 != (rbtree_node_base *)0x0);
  return;
}


/* eastl::RBTreeGetMaxChild(eastl::rbtree_node_base const*) */

void eastl::RBTreeGetMaxChild(rbtree_node_base *param_1)

{
  do {
    param_1 = *(rbtree_node_base **)param_1;
  } while (param_1 != (rbtree_node_base *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::AnalysisInfo, unsigned
   long>(EA::Text::AnalysisInfo*, unsigned long, EA::Text::AnalysisInfo const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::AnalysisInfo,unsigned_long>
               (AnalysisInfo *param_1,ulong param_2,AnalysisInfo *param_3)

{
  AnalysisInfo *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_0537252c(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::GlyphInfo, unsigned long>(EA::Text::GlyphInfo*,
   unsigned long, EA::Text::GlyphInfo const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::GlyphInfo,unsigned_long>
               (GlyphInfo *param_1,ulong param_2,GlyphInfo *param_3)

{
  GlyphInfo *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_053727f0(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::GlyphLayoutInfo, unsigned
   long>(EA::Text::GlyphLayoutInfo*, unsigned long, EA::Text::GlyphLayoutInfo const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::GlyphLayoutInfo,unsigned_long>
               (GlyphLayoutInfo *param_1,ulong param_2,GlyphLayoutInfo *param_3)

{
  GlyphLayoutInfo *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_05372a4c(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::iterator_traits<unsigned long const*>::difference_type eastl::distance<unsigned long
   const*>(unsigned long const*, unsigned long const*) */

long eastl::distance<unsigned_long_const*>(ulong *param_1,ulong *param_2)

{
  return (long)param_2 - (long)param_1 >> 3;
}


/* void eastl::advance<unsigned long const*, unsigned long>(unsigned long const*&, unsigned long) */

void eastl::advance<unsigned_long_const*,unsigned_long>(ulong **param_1,ulong param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}


/* eastl::iterator_traits<EA::Text::AnalysisInfo const*>::difference_type
   eastl::distance<EA::Text::AnalysisInfo const*>(EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo const*) */

long eastl::distance<EA::Text::AnalysisInfo_const*>(AnalysisInfo *param_1,AnalysisInfo *param_2)

{
  return ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
}


/* void eastl::advance<EA::Text::AnalysisInfo const*, unsigned long>(EA::Text::AnalysisInfo const*&,
   unsigned long) */

void eastl::advance<EA::Text::AnalysisInfo_const*,unsigned_long>
               (AnalysisInfo **param_1,ulong param_2)

{
  *param_1 = *param_1 + param_2 * 0x18;
  return;
}


/* eastl::iterator_traits<unsigned short const*>::difference_type eastl::distance<unsigned short
   const*>(unsigned short const*, unsigned short const*) */

long eastl::distance<unsigned_short_const*>(ushort *param_1,ushort *param_2)

{
  return (long)param_2 - (long)param_1 >> 1;
}


/* void eastl::advance<unsigned short const*, unsigned long>(unsigned short const*&, unsigned long)
    */

void eastl::advance<unsigned_short_const*,unsigned_long>(ushort **param_1,ulong param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}


/* eastl::iterator_traits<EA::Text::GlyphInfo const*>::difference_type
   eastl::distance<EA::Text::GlyphInfo const*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo
   const*) */

long eastl::distance<EA::Text::GlyphInfo_const*>(GlyphInfo *param_1,GlyphInfo *param_2)

{
  return (long)param_2 - (long)param_1 >> 2;
}


/* void eastl::advance<EA::Text::GlyphInfo const*, unsigned long>(EA::Text::GlyphInfo const*&,
   unsigned long) */

void eastl::advance<EA::Text::GlyphInfo_const*,unsigned_long>(GlyphInfo **param_1,ulong param_2)

{
  *param_1 = *param_1 + param_2 * 4;
  return;
}


/* eastl::iterator_traits<EA::Text::GlyphLayoutInfo const*>::difference_type
   eastl::distance<EA::Text::GlyphLayoutInfo const*>(EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo const*) */

long eastl::distance<EA::Text::GlyphLayoutInfo_const*>
               (GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2)

{
  return ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
}


/* void eastl::advance<EA::Text::GlyphLayoutInfo const*, unsigned long>(EA::Text::GlyphLayoutInfo
   const*&, unsigned long) */

void eastl::advance<EA::Text::GlyphLayoutInfo_const*,unsigned_long>
               (GlyphLayoutInfo **param_1,ulong param_2)

{
  *param_1 = *param_1 + param_2 * 0x28;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::Item* eastl::uninitialized_copy_ptr<EA::Text::Typesetter::Item*,
   EA::Text::Typesetter::Item*, EA::Text::Typesetter::Item*>(EA::Text::Typesetter::Item*,
   EA::Text::Typesetter::Item*, EA::Text::Typesetter::Item*) */

Item * eastl::
       uninitialized_copy_ptr<EA::Text::Typesetter::Item*,EA::Text::Typesetter::Item*,EA::Text::Typesetter::Item*>
                 (Item *param_1,Item *param_2,Item *param_3)

{
  undefined8 *extraout_x0;
  Item *local_48;
  Item *local_40;
  Item *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_05373f78(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (Item *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::RunInfo* eastl::uninitialized_copy_ptr<EA::Text::Typesetter::RunInfo*,
   EA::Text::Typesetter::RunInfo*, EA::Text::Typesetter::RunInfo*>(EA::Text::Typesetter::RunInfo*,
   EA::Text::Typesetter::RunInfo*, EA::Text::Typesetter::RunInfo*) */

RunInfo * eastl::
          uninitialized_copy_ptr<EA::Text::Typesetter::RunInfo*,EA::Text::Typesetter::RunInfo*,EA::Text::Typesetter::RunInfo*>
                    (RunInfo *param_1,RunInfo *param_2,RunInfo *param_3)

{
  undefined8 *extraout_x0;
  RunInfo *local_48;
  RunInfo *local_40;
  RunInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_05374488(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (RunInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::Typesetter::RunInfo, unsigned
   long>(EA::Text::Typesetter::RunInfo*, unsigned long, EA::Text::Typesetter::RunInfo const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::Typesetter::RunInfo,unsigned_long>
               (RunInfo *param_1,ulong param_2,RunInfo *param_3)

{
  RunInfo *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_05374bf4(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::iterator_traits<EA::Text::Typesetter::RunInfo const*>::difference_type
   eastl::distance<EA::Text::Typesetter::RunInfo const*>(EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo const*) */

long eastl::distance<EA::Text::Typesetter::RunInfo_const*>(RunInfo *param_1,RunInfo *param_2)

{
  return ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
}


/* void eastl::iter_swap<unsigned long*, unsigned long*>(unsigned long*, unsigned long*) */

void eastl::iter_swap<unsigned_long*,unsigned_long*>(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* void eastl::reverse<unsigned long*>(unsigned long*, unsigned long*) */

void eastl::reverse<unsigned_long*>(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if ((param_1 != param_2) && (puVar2 = param_2 + -1, param_1 < param_2 + -1)) {
    do {
      puVar1 = param_1 + 1;
      puVar3 = puVar2 + -1;
      iter_swap<unsigned_long*,unsigned_long*>(param_1,puVar2);
      puVar2 = puVar3;
      param_1 = puVar1;
    } while (puVar1 < puVar3);
  }
  return;
}


/* unsigned short* eastl::copy_backward_chooser<unsigned short const*, unsigned short*>(unsigned
   short const*, unsigned short const*, unsigned short*) */

ushort * eastl::copy_backward_chooser<unsigned_short_const*,unsigned_short*>
                   (ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = memmove((void *)((long)param_3 - ((long)param_2 - (long)param_1)),param_1,
                   (long)param_2 - (long)param_1);
  return puVar1;
}


/* unsigned short* eastl::copy_backward<unsigned short const*, unsigned short*>(unsigned short
   const*, unsigned short const*, unsigned short*) */

ushort * eastl::copy_backward<unsigned_short_const*,unsigned_short*>
                   (ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = memmove((void *)((long)param_3 - ((long)param_2 - (long)param_1)),param_1,
                   (long)param_2 - (long)param_1);
  return puVar1;
}


/* EA::Text::AnalysisInfo* eastl::copy_backward_chooser<EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo*>(EA::Text::AnalysisInfo const*, EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo*) */

AnalysisInfo *
eastl::copy_backward_chooser<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
          (AnalysisInfo *param_1,AnalysisInfo *param_2,AnalysisInfo *param_3)

{
  undefined8 uVar1;
  AnalysisInfo *pAVar2;
  AnalysisInfo *pAVar4;
  AnalysisInfo *pAVar3;
  
  pAVar3 = param_2;
  pAVar4 = param_3;
  if (param_2 != param_1) {
    do {
      pAVar2 = pAVar3 + -0x18;
      uVar1 = *(undefined8 *)(pAVar3 + -0x10);
      *(undefined8 *)(pAVar4 + -0x18) = *(undefined8 *)pAVar2;
      *(undefined8 *)(pAVar4 + -0x10) = uVar1;
      *(undefined8 *)(pAVar4 + -8) = *(undefined8 *)(pAVar3 + -8);
      pAVar3 = pAVar2;
      pAVar4 = pAVar4 + -0x18;
    } while (param_1 != pAVar2);
    param_3 = param_3 + ((((ulong)(param_2 + (-0x18 - (long)param_1)) >> 3) * 0xaaaaaaaaaaaaaab &
                         0x1fffffffffffffff) + 1) * -0x18;
  }
  return param_3;
}


/* EA::Text::AnalysisInfo* eastl::copy_backward<EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo*>(EA::Text::AnalysisInfo const*, EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo*) */

AnalysisInfo *
eastl::copy_backward<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
          (AnalysisInfo *param_1,AnalysisInfo *param_2,AnalysisInfo *param_3)

{
  undefined8 uVar1;
  AnalysisInfo *pAVar2;
  AnalysisInfo *pAVar4;
  AnalysisInfo *pAVar3;
  
  pAVar3 = param_2;
  pAVar4 = param_3;
  if (param_2 != param_1) {
    do {
      pAVar2 = pAVar3 + -0x18;
      uVar1 = *(undefined8 *)(pAVar3 + -0x10);
      *(undefined8 *)(pAVar4 + -0x18) = *(undefined8 *)pAVar2;
      *(undefined8 *)(pAVar4 + -0x10) = uVar1;
      *(undefined8 *)(pAVar4 + -8) = *(undefined8 *)(pAVar3 + -8);
      pAVar3 = pAVar2;
      pAVar4 = pAVar4 + -0x18;
    } while (param_1 != pAVar2);
    param_3 = param_3 + ((((ulong)(param_2 + (-0x18 - (long)param_1)) >> 3) * 0xaaaaaaaaaaaaaab &
                         0x1fffffffffffffff) + 1) * -0x18;
  }
  return param_3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::AnalysisInfo* eastl::uninitialized_copy_ptr<EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo const*, EA::Text::AnalysisInfo*>(EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo const*, EA::Text::AnalysisInfo*) */

AnalysisInfo *
eastl::
uninitialized_copy_ptr<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
          (AnalysisInfo *param_1,AnalysisInfo *param_2,AnalysisInfo *param_3)

{
  undefined8 *extraout_x0;
  AnalysisInfo *local_48;
  AnalysisInfo *local_40;
  AnalysisInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_05375db0(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (AnalysisInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::GlyphInfo* eastl::copy_backward_chooser<EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::copy_backward_chooser<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
          (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  GlyphInfo *pGVar1;
  GlyphInfo *pGVar2;
  
  pGVar1 = param_2;
  pGVar2 = param_3;
  if (param_2 != param_1) {
    do {
      pGVar1 = pGVar1 + -4;
      *(undefined4 *)(pGVar2 + -4) = *(undefined4 *)pGVar1;
      pGVar2 = pGVar2 + -4;
    } while (param_1 != pGVar1);
    param_3 = param_3 + ~((ulong)(param_2 + (-4 - (long)param_1)) >> 2) * 4;
  }
  return param_3;
}


/* EA::Text::GlyphInfo* eastl::copy_backward<EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::copy_backward<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
          (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  GlyphInfo *pGVar1;
  GlyphInfo *pGVar2;
  
  pGVar1 = param_2;
  pGVar2 = param_3;
  if (param_2 != param_1) {
    do {
      pGVar1 = pGVar1 + -4;
      *(undefined4 *)(pGVar2 + -4) = *(undefined4 *)pGVar1;
      pGVar2 = pGVar2 + -4;
    } while (param_1 != pGVar1);
    param_3 = param_3 + ~((ulong)(param_2 + (-4 - (long)param_1)) >> 2) * 4;
  }
  return param_3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphInfo* eastl::uninitialized_copy_ptr<EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo const*, EA::Text::GlyphInfo*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo
   const*, EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::
uninitialized_copy_ptr<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
          (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  undefined8 *extraout_x0;
  GlyphInfo *local_48;
  GlyphInfo *local_40;
  GlyphInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_05376148(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (GlyphInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::GlyphLayoutInfo* eastl::copy_backward_chooser<EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::copy_backward_chooser<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
          (GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  undefined8 uVar1;
  GlyphLayoutInfo *pGVar2;
  GlyphLayoutInfo *pGVar4;
  GlyphLayoutInfo *pGVar3;
  
  pGVar3 = param_2;
  pGVar4 = param_3;
  if (param_2 != param_1) {
    do {
      pGVar2 = pGVar3 + -0x28;
      uVar1 = *(undefined8 *)(pGVar3 + -0x20);
      *(undefined8 *)(pGVar4 + -0x28) = *(undefined8 *)pGVar2;
      *(undefined8 *)(pGVar4 + -0x20) = uVar1;
      uVar1 = *(undefined8 *)(pGVar3 + -0x10);
      *(undefined8 *)(pGVar4 + -0x18) = *(undefined8 *)(pGVar3 + -0x18);
      *(undefined8 *)(pGVar4 + -0x10) = uVar1;
      *(undefined8 *)(pGVar4 + -8) = *(undefined8 *)(pGVar3 + -8);
      pGVar3 = pGVar2;
      pGVar4 = pGVar4 + -0x28;
    } while (param_1 != pGVar2);
    param_3 = param_3 + (((ulong)(param_2 + (-0x28 - (long)param_1)) >> 3) * 0xccccccccccccccd &
                        0x1fffffffffffffff) * -0x28 + -0x28;
  }
  return param_3;
}


/* EA::Text::GlyphLayoutInfo* eastl::copy_backward<EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::copy_backward<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
          (GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  undefined8 uVar1;
  GlyphLayoutInfo *pGVar2;
  GlyphLayoutInfo *pGVar4;
  GlyphLayoutInfo *pGVar3;
  
  pGVar3 = param_2;
  pGVar4 = param_3;
  if (param_2 != param_1) {
    do {
      pGVar2 = pGVar3 + -0x28;
      uVar1 = *(undefined8 *)(pGVar3 + -0x20);
      *(undefined8 *)(pGVar4 + -0x28) = *(undefined8 *)pGVar2;
      *(undefined8 *)(pGVar4 + -0x20) = uVar1;
      uVar1 = *(undefined8 *)(pGVar3 + -0x10);
      *(undefined8 *)(pGVar4 + -0x18) = *(undefined8 *)(pGVar3 + -0x18);
      *(undefined8 *)(pGVar4 + -0x10) = uVar1;
      *(undefined8 *)(pGVar4 + -8) = *(undefined8 *)(pGVar3 + -8);
      pGVar3 = pGVar2;
      pGVar4 = pGVar4 + -0x28;
    } while (param_1 != pGVar2);
    param_3 = param_3 + (((ulong)(param_2 + (-0x28 - (long)param_1)) >> 3) * 0xccccccccccccccd &
                        0x1fffffffffffffff) * -0x28 + -0x28;
  }
  return param_3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::GlyphLayoutInfo* eastl::uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::
uninitialized_copy_ptr<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
          (GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,GlyphLayoutInfo *param_3)

{
  undefined8 *extraout_x0;
  GlyphLayoutInfo *local_48;
  GlyphLayoutInfo *local_40;
  GlyphLayoutInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_053764ec(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (GlyphLayoutInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::TextStyle const*, unsigned
   long>(EA::Text::TextStyle const**, unsigned long, EA::Text::TextStyle const* const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::TextStyle_const*,unsigned_long>
               (TextStyle **param_1,ulong param_2,TextStyle **param_3)

{
  TextStyle **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_05376a6c(local_10,param_2,*param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long* eastl::uninitialized_copy_ptr<unsigned long const*, unsigned long const*, unsigned
   long*>(unsigned long const*, unsigned long const*, unsigned long*) */

ulong * eastl::uninitialized_copy_ptr<unsigned_long_const*,unsigned_long_const*,unsigned_long*>
                  (ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *extraout_x0;
  TextureInfo **local_48;
  TextureInfo **local_40;
  TextureInfo **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = (TextureInfo **)param_3;
  local_40 = (TextureInfo **)param_2;
  local_38[0] = (TextureInfo **)param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,&local_40);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_48);
  local_28 = FUN_05376d8c(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (ulong *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned short* eastl::uninitialized_copy_ptr<unsigned short const*, unsigned short const*,
   unsigned short*>(unsigned short const*, unsigned short const*, unsigned short*) */

ushort * eastl::uninitialized_copy_ptr<unsigned_short_const*,unsigned_short_const*,unsigned_short*>
                   (ushort *param_1,ushort *param_2,ushort *param_3)

{
  undefined8 *extraout_x0;
  TextureInfo **local_48;
  TextureInfo **local_40;
  TextureInfo **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = (TextureInfo **)param_3;
  local_40 = (TextureInfo **)param_2;
  local_38[0] = (TextureInfo **)param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,&local_40);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_48);
  local_28 = FUN_0537700c(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (ushort *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::RunInfo* eastl::uninitialized_copy_ptr<EA::Text::Typesetter::RunInfo
   const*, EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo*>(EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo const*, EA::Text::Typesetter::RunInfo*) */

RunInfo * eastl::
          uninitialized_copy_ptr<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
                    (RunInfo *param_1,RunInfo *param_2,RunInfo *param_3)

{
  undefined8 *extraout_x0;
  RunInfo *local_48;
  RunInfo *local_40;
  RunInfo *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_05377b88(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (RunInfo *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTFLookup** eastl::uninitialized_copy_ptr<EA::Text::OTFLookup**, EA::Text::OTFLookup**,
   EA::Text::OTFLookup**>(EA::Text::OTFLookup**, EA::Text::OTFLookup**, EA::Text::OTFLookup**) */

OTFLookup **
eastl::uninitialized_copy_ptr<EA::Text::OTFLookup**,EA::Text::OTFLookup**,EA::Text::OTFLookup**>
          (OTFLookup **param_1,OTFLookup **param_2,OTFLookup **param_3)

{
  undefined8 *extraout_x0;
  OTFLookup **local_48;
  OTFLookup **local_40;
  OTFLookup **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0537d3f4(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (OTFLookup **)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* void eastl::destruct<EA::Text::FeatureLookup*>(EA::Text::FeatureLookup*,
   EA::Text::FeatureLookup*) */

void eastl::destruct<EA::Text::FeatureLookup*>(FeatureLookup *param_1,FeatureLookup *param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0xb0) {
    EA::Text::FeatureLookup::~FeatureLookup(param_1);
  }
  return;
}


void eastl::destruct<EA::Text::FeatureLookup*>(FeatureLookup *param_1,FeatureLookup *param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0xb0) {
    EA::Text::FeatureLookup::~FeatureLookup(param_1);
  }
  return;
}


/* void eastl::fill<EA::Text::GlyphInfo*, EA::Text::GlyphInfo>(EA::Text::GlyphInfo*,
   EA::Text::GlyphInfo*, EA::Text::GlyphInfo const&) */

void eastl::fill<EA::Text::GlyphInfo*,EA::Text::GlyphInfo>
               (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
  }
  return;
}


/* eastl::iterator_traits<EA::Text::OTFLookup* const*>::difference_type
   eastl::distance<EA::Text::OTFLookup* const*>(EA::Text::OTFLookup* const*, EA::Text::OTFLookup*
   const*) */

long eastl::distance<EA::Text::OTFLookup*const*>(OTFLookup **param_1,OTFLookup **param_2)

{
  return (long)param_2 - (long)param_1 >> 3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTFLookup** eastl::uninitialized_copy_ptr<EA::Text::OTFLookup* const*,
   EA::Text::OTFLookup* const*, EA::Text::OTFLookup**>(EA::Text::OTFLookup* const*,
   EA::Text::OTFLookup* const*, EA::Text::OTFLookup**) */

OTFLookup **
eastl::
uninitialized_copy_ptr<EA::Text::OTFLookup*const*,EA::Text::OTFLookup*const*,EA::Text::OTFLookup**>
          (OTFLookup **param_1,OTFLookup **param_2,OTFLookup **param_3)

{
  undefined8 *extraout_x0;
  OTFLookup **local_48;
  OTFLookup **local_40;
  OTFLookup **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0537edb0(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (OTFLookup **)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FeatureLookup* eastl::uninitialized_copy_ptr<EA::Text::FeatureLookup*,
   EA::Text::FeatureLookup*, EA::Text::FeatureLookup*>(EA::Text::FeatureLookup*,
   EA::Text::FeatureLookup*, EA::Text::FeatureLookup*) */

FeatureLookup *
eastl::
uninitialized_copy_ptr<EA::Text::FeatureLookup*,EA::Text::FeatureLookup*,EA::Text::FeatureLookup*>
          (FeatureLookup *param_1,FeatureLookup *param_2,FeatureLookup *param_3)

{
  undefined8 *extraout_x0;
  FeatureLookup *local_48;
  FeatureLookup *local_40;
  FeatureLookup *local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_0537f04c(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (FeatureLookup *)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::FeatureLookup, unsigned
   long>(EA::Text::FeatureLookup*, unsigned long, EA::Text::FeatureLookup const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::FeatureLookup,unsigned_long>
               (FeatureLookup *param_1,ulong param_2,FeatureLookup *param_3)

{
  FeatureLookup *local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_0537f194(local_10,param_2,param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* eastl::CharTypeAssignN(wchar_t*, unsigned long, wchar_t) */

void eastl::CharTypeAssignN(wchar_t *param_1,ulong param_2,wchar_t param_3)

{
  ulong uVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  
  pwVar2 = param_1 + param_2;
  if (param_1 < pwVar2) {
    uVar3 = ~(ulong)param_1 + (long)pwVar2 >> 2;
    uVar1 = (uVar3 - 3 >> 2) + 1;
    if (0xb < ~(ulong)param_1 + (long)pwVar2) {
      uVar4 = 0;
      pwVar5 = param_1;
      do {
        *(ulong *)(pwVar5 + 2) = CONCAT44(param_3,param_3);
        *(ulong *)pwVar5 = CONCAT44(param_3,param_3);
        uVar4 = uVar4 + 1;
        pwVar5 = pwVar5 + 4;
      } while (uVar4 < uVar1);
      param_1 = param_1 + uVar1 * 4;
      if (uVar3 + 1 == uVar1 * 4) {
        return;
      }
    }
    *param_1 = param_3;
    if ((param_1 + 1 < pwVar2) && (param_1[1] = param_3, param_1 + 2 < pwVar2)) {
      param_1[2] = param_3;
    }
  }
  return;
}


/* void eastl::advance<eastl::ListIterator<EA::IO::DirectoryIterator::Entry,
   EA::IO::DirectoryIterator::Entry*, EA::IO::DirectoryIterator::Entry&>,
   int>(eastl::ListIterator<EA::IO::DirectoryIterator::Entry, EA::IO::DirectoryIterator::Entry*,
   EA::IO::DirectoryIterator::Entry&>&, int) */

void eastl::
     advance<eastl::ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>,int>
               (ListIterator *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    if (param_2 != 0) {
      do {
        ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
        ::operator--((ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
                      *)param_1);
        param_2 = param_2 + 1;
      } while (param_2 != 0);
      return;
    }
  }
  else {
    iVar1 = param_2 + -1;
    do {
      iVar1 = iVar1 + -1;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)param_1);
    } while (iVar1 != -1);
  }
  return;
}


/* void* 
   eastl::allocate_memory<EA::Allocator::EAIOEASTLCoreAllocator>(EA::Allocator::EAIOEASTLCoreAllocator&,
   unsigned long, unsigned long, unsigned long) */

void * eastl::allocate_memory<EA::Allocator::EAIOEASTLCoreAllocator>
                 (EAIOEASTLCoreAllocator *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  
  if (8 < param_3) {
    pvVar1 = (void *)FUN_053f6f3c();
    return pvVar1;
  }
  pvVar1 = (void *)FUN_053f6f14(*(undefined8 *)param_1,*(undefined4 *)(param_1 + 8),param_2,param_4,
                                param_4);
  return pvVar1;
}


/* char* eastl::search<char*, char const*>(char*, char*, char const*, char const*) */

char * eastl::search<char*,char_const*>(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_3 != param_4) {
    if (param_3 + 1 == param_4) {
      pcVar5 = find<char*,char>(param_1,param_2,param_3);
      return pcVar5;
    }
    if (param_1 != param_2) {
      do {
        while (*param_1 == *param_3) {
          pcVar5 = param_1;
          if (param_2 == param_1) {
            return param_2;
          }
          param_1 = param_1 + 1;
          pcVar4 = param_3 + 1;
          pcVar2 = param_1;
          while( true ) {
            if (param_2 == pcVar2) {
              return param_2;
            }
            pcVar1 = pcVar4 + 1;
            cVar3 = *pcVar2;
            pcVar2 = pcVar2 + 1;
            if (cVar3 != *pcVar4) break;
            pcVar4 = pcVar1;
            if (param_4 == pcVar1) {
              return pcVar5;
            }
          }
        }
        param_1 = param_1 + 1;
      } while (param_2 != param_1);
      return param_2;
    }
  }
  return param_1;
}


/* eastl::RBTreeIncrement(eastl::rbtree_node_base const*) */

undefined8 * eastl::RBTreeIncrement(rbtree_node_base *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)param_1;
  if (*(undefined8 **)param_1 != (undefined8 *)0x0) {
    do {
      puVar1 = puVar2;
      puVar2 = (undefined8 *)puVar1[1];
    } while (puVar2 != (undefined8 *)0x0);
    return puVar1;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (param_1 == (rbtree_node_base *)*puVar2) {
    do {
      puVar1 = puVar2;
      puVar2 = (undefined8 *)puVar1[2];
    } while ((undefined8 *)*puVar2 == puVar1);
    if ((undefined8 *)*puVar1 == puVar2) {
      puVar2 = puVar1;
    }
    return puVar2;
  }
  return puVar2;
}


/* eastl::RBTreeDecrement(eastl::rbtree_node_base const*) */

rbtree_node_base * eastl::RBTreeDecrement(rbtree_node_base *param_1)

{
  rbtree_node_base *prVar1;
  rbtree_node_base *prVar2;
  rbtree_node_base *prVar3;
  
  prVar2 = *(rbtree_node_base **)(param_1 + 0x10);
  prVar3 = *(rbtree_node_base **)(prVar2 + 0x10);
  if ((prVar3 == param_1) && (prVar3[0x18] == (rbtree_node_base)0x0)) {
    return *(rbtree_node_base **)prVar3;
  }
  prVar1 = *(rbtree_node_base **)(param_1 + 8);
  if (*(rbtree_node_base **)(param_1 + 8) != (rbtree_node_base *)0x0) {
    do {
      prVar3 = prVar1;
      prVar1 = *(rbtree_node_base **)prVar3;
    } while (prVar1 != (rbtree_node_base *)0x0);
    return prVar3;
  }
  if (param_1 != *(rbtree_node_base **)(prVar2 + 8)) {
    return prVar2;
  }
  while (prVar1 = prVar3, *(rbtree_node_base **)(prVar1 + 8) == prVar2) {
    prVar2 = prVar1;
    prVar3 = *(rbtree_node_base **)(prVar1 + 0x10);
  }
  return prVar1;
}


/* eastl::RBTreeGetBlackCount(eastl::rbtree_node_base const*, eastl::rbtree_node_base const*) */

long eastl::RBTreeGetBlackCount(rbtree_node_base *param_1,rbtree_node_base *param_2)

{
  long lVar1;
  
  if (param_2 != (rbtree_node_base *)0x0) {
    lVar1 = 0;
    do {
      if (param_2[0x18] == (rbtree_node_base)0x1) {
        lVar1 = lVar1 + 1;
      }
    } while ((param_2 != param_1) &&
            (param_2 = *(rbtree_node_base **)(param_2 + 0x10), param_2 != (rbtree_node_base *)0x0));
    return lVar1;
  }
  return 0;
}


/* eastl::RBTreeRotateLeft(eastl::rbtree_node_base*, eastl::rbtree_node_base*) */

rbtree_node_base * eastl::RBTreeRotateLeft(rbtree_node_base *param_1,rbtree_node_base *param_2)

{
  long *plVar1;
  rbtree_node_base *prVar2;
  long lVar3;
  
  prVar2 = *(rbtree_node_base **)param_1;
  lVar3 = *(long *)(prVar2 + 8);
  *(long *)param_1 = lVar3;
  if (lVar3 != 0) {
    *(rbtree_node_base **)(lVar3 + 0x10) = param_1;
  }
  *(undefined8 *)(prVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  if (param_1 != param_2) {
    plVar1 = *(long **)(param_1 + 0x10);
    if ((rbtree_node_base *)plVar1[1] == param_1) {
      plVar1[1] = (long)prVar2;
    }
    else {
      *plVar1 = (long)prVar2;
    }
    *(rbtree_node_base **)(prVar2 + 8) = param_1;
    *(rbtree_node_base **)(param_1 + 0x10) = prVar2;
    return param_2;
  }
  *(rbtree_node_base **)(prVar2 + 8) = param_1;
  *(rbtree_node_base **)(param_1 + 0x10) = prVar2;
  return prVar2;
}


/* eastl::RBTreeRotateRight(eastl::rbtree_node_base*, eastl::rbtree_node_base*) */

rbtree_node_base * eastl::RBTreeRotateRight(rbtree_node_base *param_1,rbtree_node_base *param_2)

{
  undefined8 *puVar1;
  rbtree_node_base *prVar2;
  long lVar3;
  
  prVar2 = *(rbtree_node_base **)(param_1 + 8);
  lVar3 = *(long *)prVar2;
  *(long *)(param_1 + 8) = lVar3;
  if (lVar3 != 0) {
    *(rbtree_node_base **)(lVar3 + 0x10) = param_1;
  }
  *(long *)(prVar2 + 0x10) = *(long *)(param_1 + 0x10);
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((rbtree_node_base *)*puVar1 == param_1) {
      *puVar1 = prVar2;
    }
    else {
      puVar1[1] = prVar2;
    }
    *(rbtree_node_base **)prVar2 = param_1;
    *(rbtree_node_base **)(param_1 + 0x10) = prVar2;
    return param_2;
  }
  *(rbtree_node_base **)prVar2 = param_1;
  *(rbtree_node_base **)(param_1 + 0x10) = prVar2;
  return prVar2;
}


/* eastl::RBTreeInsert(eastl::rbtree_node_base*, eastl::rbtree_node_base*, eastl::rbtree_node_base*,
   eastl::RBTreeSide) */

void eastl::RBTreeInsert(rbtree_node_base *param_1,undefined8 *param_2,undefined8 *param_3,
                        int param_4)

{
  long lVar1;
  undefined8 uVar2;
  rbtree_node_base *prVar3;
  rbtree_node_base *prVar4;
  rbtree_node_base *prVar5;
  rbtree_node_base *prVar6;
  
  *(undefined8 **)(param_1 + 0x10) = param_2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x18] = (rbtree_node_base)0x0;
  if (param_4 == 0) {
    param_2[1] = param_1;
    if (param_2 == param_3) {
      param_3[2] = param_1;
      *param_3 = param_1;
    }
    else if ((undefined8 *)param_3[1] == param_2) {
      param_3[1] = param_1;
    }
  }
  else {
    *param_2 = param_1;
    if ((undefined8 *)*param_3 == param_2) {
      *param_3 = param_1;
    }
  }
  prVar3 = (rbtree_node_base *)param_3[2];
LAB_0540e6cc:
  do {
    if (param_1 == prVar3) {
LAB_0540e718:
      prVar3[0x18] = (rbtree_node_base)0x1;
      return;
    }
    while( true ) {
      prVar5 = *(rbtree_node_base **)(param_1 + 0x10);
      if (prVar5[0x18] != (rbtree_node_base)0x0) goto LAB_0540e718;
      prVar6 = *(rbtree_node_base **)(prVar5 + 0x10);
      prVar4 = *(rbtree_node_base **)(prVar6 + 8);
      if (prVar5 == prVar4) {
        lVar1 = *(long *)prVar6;
        if ((lVar1 == 0) || (*(char *)(lVar1 + 0x18) != '\0')) {
          prVar4 = prVar5;
          if (*(rbtree_node_base **)prVar5 == param_1) {
            uVar2 = RBTreeRotateLeft(prVar5,prVar3);
            param_3[2] = uVar2;
            prVar4 = *(rbtree_node_base **)(prVar5 + 0x10);
            param_1 = prVar5;
          }
          prVar4[0x18] = (rbtree_node_base)0x1;
          prVar6[0x18] = (rbtree_node_base)0x0;
          prVar3 = (rbtree_node_base *)RBTreeRotateRight(prVar6,(rbtree_node_base *)param_3[2]);
          param_3[2] = prVar3;
        }
        else {
          prVar5[0x18] = (rbtree_node_base)0x1;
          *(undefined1 *)(lVar1 + 0x18) = 1;
          prVar6[0x18] = (rbtree_node_base)0x0;
          prVar3 = (rbtree_node_base *)param_3[2];
          param_1 = prVar6;
        }
        goto LAB_0540e6cc;
      }
      if ((prVar4 == (rbtree_node_base *)0x0) || (prVar4[0x18] != (rbtree_node_base)0x0)) break;
      prVar5[0x18] = (rbtree_node_base)0x1;
      prVar4[0x18] = (rbtree_node_base)0x1;
      prVar6[0x18] = (rbtree_node_base)0x0;
      prVar3 = (rbtree_node_base *)param_3[2];
      param_1 = prVar6;
      if (prVar6 == prVar3) goto LAB_0540e718;
    }
    prVar4 = prVar5;
    if (*(rbtree_node_base **)(prVar5 + 8) == param_1) {
      uVar2 = RBTreeRotateRight(prVar5,prVar3);
      param_3[2] = uVar2;
      prVar4 = *(rbtree_node_base **)(prVar5 + 0x10);
      param_1 = prVar5;
    }
    prVar4[0x18] = (rbtree_node_base)0x1;
    prVar6[0x18] = (rbtree_node_base)0x0;
    prVar3 = (rbtree_node_base *)RBTreeRotateLeft(prVar6,(rbtree_node_base *)param_3[2]);
    param_3[2] = prVar3;
  } while( true );
}


/* void eastl::swap<char>(char&, char&) */

void eastl::swap<char>(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = cVar1;
  return;
}


/* eastl::RBTreeErase(eastl::rbtree_node_base*, eastl::rbtree_node_base*) */

void eastl::RBTreeErase(rbtree_node_base *param_1,rbtree_node_base *param_2)

{
  rbtree_node_base *prVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  rbtree_node_base *prVar5;
  long lVar6;
  rbtree_node_base *prVar7;
  rbtree_node_base *prVar8;
  rbtree_node_base *prVar9;
  
  prVar5 = *(rbtree_node_base **)(param_1 + 8);
  prVar7 = param_1;
  if (prVar5 == (rbtree_node_base *)0x0) {
    prVar9 = *(rbtree_node_base **)param_1;
  }
  else {
    prVar1 = *(rbtree_node_base **)param_1;
    prVar8 = prVar1;
    prVar9 = prVar5;
    if (prVar1 != (rbtree_node_base *)0x0) {
      do {
        prVar7 = prVar8;
        prVar8 = *(rbtree_node_base **)(prVar7 + 8);
      } while (*(rbtree_node_base **)(prVar7 + 8) != (rbtree_node_base *)0x0);
      prVar9 = *(rbtree_node_base **)prVar7;
      if (param_1 != prVar7) {
        *(rbtree_node_base **)(prVar5 + 0x10) = prVar7;
        *(rbtree_node_base **)(prVar7 + 8) = prVar5;
        prVar5 = prVar7;
        if (prVar1 != prVar7) {
          prVar5 = *(rbtree_node_base **)(prVar7 + 0x10);
          if (prVar9 != (rbtree_node_base *)0x0) {
            *(rbtree_node_base **)(prVar9 + 0x10) = prVar5;
          }
          *(rbtree_node_base **)(prVar5 + 8) = prVar9;
          *(rbtree_node_base **)prVar7 = prVar1;
          *(rbtree_node_base **)(*(long *)param_1 + 0x10) = prVar7;
        }
        if (*(rbtree_node_base **)(param_2 + 0x10) == param_1) {
          *(rbtree_node_base **)(param_2 + 0x10) = prVar7;
          puVar2 = *(undefined8 **)(param_1 + 0x10);
        }
        else {
          puVar2 = *(undefined8 **)(param_1 + 0x10);
          if ((rbtree_node_base *)puVar2[1] == param_1) {
            puVar2[1] = prVar7;
          }
          else {
            *puVar2 = prVar7;
          }
        }
        *(undefined8 **)(prVar7 + 0x10) = puVar2;
        swap<char>((char *)(prVar7 + 0x18),(char *)(param_1 + 0x18));
        goto LAB_0540e8d0;
      }
    }
  }
  prVar5 = *(rbtree_node_base **)(prVar7 + 0x10);
  if (prVar9 != (rbtree_node_base *)0x0) {
    *(rbtree_node_base **)(prVar9 + 0x10) = prVar5;
  }
  if (*(rbtree_node_base **)(param_2 + 0x10) == param_1) {
    *(rbtree_node_base **)(param_2 + 0x10) = prVar9;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((rbtree_node_base *)puVar2[1] == param_1) {
      puVar2[1] = prVar9;
    }
    else {
      *puVar2 = prVar9;
    }
  }
  if (*(rbtree_node_base **)(param_2 + 8) == param_1) {
    if ((prVar9 == (rbtree_node_base *)0x0) || (*(long *)param_1 == 0)) {
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(rbtree_node_base **)(param_2 + 8) + 0x10);
    }
    else {
      uVar3 = RBTreeGetMinChild(prVar9);
      *(undefined8 *)(param_2 + 8) = uVar3;
    }
  }
  if (*(rbtree_node_base **)param_2 == param_1) {
    if ((prVar9 == (rbtree_node_base *)0x0) || (*(long *)(param_1 + 8) == 0)) {
      *(undefined8 *)param_2 = *(undefined8 *)(*(rbtree_node_base **)param_2 + 0x10);
    }
    else {
      uVar3 = RBTreeGetMaxChild(prVar9);
      *(undefined8 *)param_2 = uVar3;
    }
  }
LAB_0540e8d0:
  if (param_1[0x18] != (rbtree_node_base)0x1) {
    return;
  }
LAB_0540e948:
  do {
    prVar8 = prVar5;
    prVar7 = prVar9;
    if (*(rbtree_node_base **)(param_2 + 0x10) == prVar9) {
LAB_0540e9e8:
      if (prVar7 == (rbtree_node_base *)0x0) {
        return;
      }
LAB_0540e9ec:
      prVar7[0x18] = (rbtree_node_base)0x1;
      return;
    }
    if ((prVar9 != (rbtree_node_base *)0x0) && (prVar9[0x18] != (rbtree_node_base)0x1))
    goto LAB_0540e9ec;
    prVar7 = *(rbtree_node_base **)(prVar8 + 8);
    if (prVar7 == prVar9) {
      prVar5 = *(rbtree_node_base **)prVar8;
      if (prVar5[0x18] == (rbtree_node_base)0x0) {
        prVar5[0x18] = (rbtree_node_base)0x1;
        prVar8[0x18] = (rbtree_node_base)0x0;
        uVar3 = RBTreeRotateLeft(prVar8,*(rbtree_node_base **)(param_2 + 0x10));
        *(undefined8 *)(param_2 + 0x10) = uVar3;
        prVar5 = *(rbtree_node_base **)prVar8;
      }
      lVar6 = *(long *)(prVar5 + 8);
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x18) == '\x01')) {
        lVar4 = *(long *)prVar5;
        if ((lVar4 == 0) || (*(char *)(lVar4 + 0x18) == '\x01')) {
          prVar5[0x18] = (rbtree_node_base)0x0;
          prVar5 = *(rbtree_node_base **)(prVar8 + 0x10);
          prVar9 = prVar8;
          goto LAB_0540e948;
        }
LAB_0540e9bc:
        prVar5[0x18] = prVar8[0x18];
        prVar8[0x18] = (rbtree_node_base)0x1;
LAB_0540e9d0:
        *(undefined1 *)(lVar4 + 0x18) = 1;
      }
      else {
        lVar4 = *(long *)prVar5;
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x18) != '\x01')) goto LAB_0540e9bc;
        *(undefined1 *)(lVar6 + 0x18) = 1;
        prVar5[0x18] = (rbtree_node_base)0x0;
        uVar3 = RBTreeRotateRight(prVar5,*(rbtree_node_base **)(param_2 + 0x10));
        *(undefined8 *)(param_2 + 0x10) = uVar3;
        lVar4 = **(long **)prVar8;
        *(rbtree_node_base *)(*(long **)prVar8 + 3) = prVar8[0x18];
        prVar8[0x18] = (rbtree_node_base)0x1;
        if (lVar4 != 0) goto LAB_0540e9d0;
      }
      uVar3 = RBTreeRotateLeft(prVar8,*(rbtree_node_base **)(param_2 + 0x10));
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      goto LAB_0540e9e8;
    }
    if (prVar7[0x18] == (rbtree_node_base)0x0) {
      prVar7[0x18] = (rbtree_node_base)0x1;
      prVar8[0x18] = (rbtree_node_base)0x0;
      uVar3 = RBTreeRotateRight(prVar8,*(rbtree_node_base **)(param_2 + 0x10));
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      prVar7 = *(rbtree_node_base **)(prVar8 + 8);
    }
    lVar6 = *(long *)prVar7;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x18) != '\x01')) {
      lVar4 = *(long *)(prVar7 + 8);
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0x18) == '\x01')) {
        *(undefined1 *)(lVar6 + 0x18) = 1;
        prVar7[0x18] = (rbtree_node_base)0x0;
        uVar3 = RBTreeRotateLeft(prVar7,*(rbtree_node_base **)(param_2 + 0x10));
        *(undefined8 *)(param_2 + 0x10) = uVar3;
        lVar4 = *(long *)(*(long *)(prVar8 + 8) + 8);
        *(rbtree_node_base *)(*(long *)(prVar8 + 8) + 0x18) = prVar8[0x18];
        prVar8[0x18] = (rbtree_node_base)0x1;
        if (lVar4 != 0) goto LAB_0540ead4;
      }
      else {
LAB_0540eac4:
        prVar7[0x18] = prVar8[0x18];
        prVar8[0x18] = (rbtree_node_base)0x1;
LAB_0540ead4:
        *(undefined1 *)(lVar4 + 0x18) = 1;
      }
      uVar3 = RBTreeRotateRight(prVar8,*(rbtree_node_base **)(param_2 + 0x10));
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      prVar7 = prVar9;
      if (prVar9 == (rbtree_node_base *)0x0) {
        return;
      }
      goto LAB_0540e9ec;
    }
    lVar4 = *(long *)(prVar7 + 8);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x18) != '\x01')) goto LAB_0540eac4;
    prVar7[0x18] = (rbtree_node_base)0x0;
    prVar5 = *(rbtree_node_base **)(prVar8 + 0x10);
    prVar9 = prVar8;
  } while( true );
}


/* bool eastl::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<unsigned short, unsigned short> const&,
   eastl::pair<unsigned short, unsigned short> const&) */

bool eastl::operator<(pair *param_1,pair *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(ushort *)param_2 <= *(ushort *)param_1) &&
     (bVar1 = false, *(ushort *)param_1 <= *(ushort *)param_2)) {
    bVar1 = *(ushort *)(param_1 + 2) < *(ushort *)(param_2 + 2);
  }
  return bVar1;
}


bool eastl::operator<(pair *param_1,pair *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(ushort *)param_2 <= *(ushort *)param_1) &&
     (bVar1 = false, *(ushort *)param_1 <= *(ushort *)param_2)) {
    bVar1 = *(ushort *)(param_1 + 2) < *(ushort *)(param_2 + 2);
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void eastl::uninitialized_fill_n_ptr<EA::Text::BmpTextureInfo*, unsigned
   long>(EA::Text::BmpTextureInfo**, unsigned long, EA::Text::BmpTextureInfo* const&) */

void eastl::uninitialized_fill_n_ptr<EA::Text::BmpTextureInfo*,unsigned_long>
               (BmpTextureInfo **param_1,ulong param_2,BmpTextureInfo **param_3)

{
  BmpTextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_18)
  ;
  FUN_0541193c(local_10,param_2,*param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::BmpTextureInfo** eastl::uninitialized_copy_ptr<EA::Text::BmpTextureInfo**,
   EA::Text::BmpTextureInfo**, EA::Text::BmpTextureInfo**>(EA::Text::BmpTextureInfo**,
   EA::Text::BmpTextureInfo**, EA::Text::BmpTextureInfo**) */

BmpTextureInfo **
eastl::
uninitialized_copy_ptr<EA::Text::BmpTextureInfo**,EA::Text::BmpTextureInfo**,EA::Text::BmpTextureInfo**>
          (BmpTextureInfo **param_1,BmpTextureInfo **param_2,BmpTextureInfo **param_3)

{
  undefined8 *extraout_x0;
  BmpTextureInfo **local_48;
  BmpTextureInfo **local_40;
  BmpTextureInfo **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,(TextureInfo ***)local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,(TextureInfo ***)&local_40)
  ;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,(TextureInfo ***)&local_48)
  ;
  local_28 = FUN_054119b8(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (BmpTextureInfo **)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::TextureInfo** eastl::find<EA::Text::TextureInfo**,
   EA::Text::TextureInfo*>(EA::Text::TextureInfo**, EA::Text::TextureInfo**, EA::Text::TextureInfo*
   const&) */

TextureInfo **
eastl::find<EA::Text::TextureInfo**,EA::Text::TextureInfo*>
          (TextureInfo **param_1,TextureInfo **param_2,TextureInfo **param_3)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::TextureInfo** eastl::uninitialized_copy_ptr<EA::Text::TextureInfo**,
   EA::Text::TextureInfo**, EA::Text::TextureInfo**>(EA::Text::TextureInfo**,
   EA::Text::TextureInfo**, EA::Text::TextureInfo**) */

TextureInfo **
eastl::
uninitialized_copy_ptr<EA::Text::TextureInfo**,EA::Text::TextureInfo**,EA::Text::TextureInfo**>
          (TextureInfo **param_1,TextureInfo **param_2,TextureInfo **param_3)

{
  undefined8 *extraout_x0;
  TextureInfo **local_48;
  TextureInfo **local_40;
  TextureInfo **local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_48 = param_3;
  local_40 = param_2;
  local_38[0] = param_1;
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_20,local_38);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_18,&local_40);
  generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_48);
  local_28 = FUN_054170f0(local_20,local_18,local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return (TextureInfo **)*extraout_x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

