// Class: eastl::copy_backward_impl<false,eastl::random_access_iterator_tag>


/* EA::Text::Analysis* eastl::copy_backward_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::Analysis*,
   EA::Text::Analysis*>(EA::Text::Analysis*, EA::Text::Analysis*, EA::Text::Analysis*) */

Analysis *
eastl::copy_backward_impl<false,eastl::random_access_iterator_tag>::
do_copy<EA::Text::Analysis*,EA::Text::Analysis*>
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


/* unsigned short* eastl::copy_backward_impl<true,
   eastl::random_access_iterator_tag>::do_copy<unsigned short>(unsigned short const*, unsigned short
   const*, unsigned short*) */

ushort * eastl::copy_backward_impl<true,eastl::random_access_iterator_tag>::do_copy<unsigned_short>
                   (ushort *param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  
  puVar1 = memmove((void *)((long)param_3 - ((long)param_2 - (long)param_1)),param_1,
                   (long)param_2 - (long)param_1);
  return puVar1;
}


/* EA::Text::AnalysisInfo* eastl::copy_backward_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo*>(EA::Text::AnalysisInfo const*, EA::Text::AnalysisInfo const*,
   EA::Text::AnalysisInfo*) */

AnalysisInfo *
eastl::copy_backward_impl<false,eastl::random_access_iterator_tag>::
do_copy<EA::Text::AnalysisInfo_const*,EA::Text::AnalysisInfo*>
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


/* EA::Text::GlyphInfo* eastl::copy_backward_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::copy_backward_impl<false,eastl::random_access_iterator_tag>::
do_copy<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
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


/* EA::Text::GlyphLayoutInfo* eastl::copy_backward_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::copy_backward_impl<false,eastl::random_access_iterator_tag>::
do_copy<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
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

