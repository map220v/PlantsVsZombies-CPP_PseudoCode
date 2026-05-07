// Class: eastl::copy_impl<false,eastl::random_access_iterator_tag>


/* EA::Text::Analysis* eastl::copy_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::Analysis*,
   EA::Text::Analysis*>(EA::Text::Analysis*, EA::Text::Analysis*, EA::Text::Analysis*) */

Analysis *
eastl::copy_impl<false,eastl::random_access_iterator_tag>::
do_copy<EA::Text::Analysis*,EA::Text::Analysis*>
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


/* EA::Text::TextureInfo** eastl::copy_impl<true,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::TextureInfo*>(EA::Text::TextureInfo*
   const*, EA::Text::TextureInfo* const*, EA::Text::TextureInfo**) */

TextureInfo **
eastl::copy_impl<true,eastl::random_access_iterator_tag>::do_copy<EA::Text::TextureInfo*>
          (TextureInfo **param_1,TextureInfo **param_2,TextureInfo **param_3)

{
  void *pvVar1;
  
  pvVar1 = memmove(param_3,param_1,(long)param_2 - (long)param_1);
  return (TextureInfo **)((long)pvVar1 + ((long)param_2 - (long)param_1));
}


/* EA::Text::Typesetter::RunInfo* eastl::copy_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo*>(EA::Text::Typesetter::RunInfo const*,
   EA::Text::Typesetter::RunInfo const*, EA::Text::Typesetter::RunInfo*) */

RunInfo * eastl::copy_impl<false,eastl::random_access_iterator_tag>::
          do_copy<EA::Text::Typesetter::RunInfo_const*,EA::Text::Typesetter::RunInfo*>
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


/* EA::Text::GlyphInfo* eastl::copy_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*>(EA::Text::GlyphInfo const*, EA::Text::GlyphInfo const*,
   EA::Text::GlyphInfo*) */

GlyphInfo *
eastl::copy_impl<false,eastl::random_access_iterator_tag>::
do_copy<EA::Text::GlyphInfo_const*,EA::Text::GlyphInfo*>
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


/* EA::Text::GlyphLayoutInfo* eastl::copy_impl<false,
   eastl::random_access_iterator_tag>::do_copy<EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*>(EA::Text::GlyphLayoutInfo const*, EA::Text::GlyphLayoutInfo const*,
   EA::Text::GlyphLayoutInfo*) */

GlyphLayoutInfo *
eastl::copy_impl<false,eastl::random_access_iterator_tag>::
do_copy<EA::Text::GlyphLayoutInfo_const*,EA::Text::GlyphLayoutInfo*>
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

