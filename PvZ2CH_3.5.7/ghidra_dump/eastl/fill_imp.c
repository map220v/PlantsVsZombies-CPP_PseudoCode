// Class: eastl::fill_imp<false>


/* void eastl::fill_imp<false>::do_fill<EA::Text::GlyphInfo*,
   EA::Text::GlyphInfo>(EA::Text::GlyphInfo*, EA::Text::GlyphInfo*, EA::Text::GlyphInfo const&) */

void eastl::fill_imp<false>::do_fill<EA::Text::GlyphInfo*,EA::Text::GlyphInfo>
               (GlyphInfo *param_1,GlyphInfo *param_2,GlyphInfo *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *(undefined4 *)param_1 = *(undefined4 *)param_3;
  }
  return;
}

