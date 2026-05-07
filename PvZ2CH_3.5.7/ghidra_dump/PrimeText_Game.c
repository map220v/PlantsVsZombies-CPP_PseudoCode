// Class: PrimeText_Game


/* PrimeText_Game::ScaleFont(int) */

int PrimeText_Game::ScaleFont(int param_1)

{
  float fVar1;
  
  fVar1 = (float)ScaledApp::GetUIScaleAmount(Sexy::gSexyApp);
  fVar1 = fVar1 * (float)param_1;
  if (fVar1 <= 9.0) {
    fVar1 = 9.0;
  }
  return (int)fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimeText_Game::GenerateFontEffects() */

void PrimeText_Game::GenerateFontEffects(void)

{
  int iVar1;
  uint uVar2;
  PrimeText *pPVar3;
  double dVar4;
  double dVar5;
  EffectsState aEStack_338 [64];
  EffectsInstructionWord aEStack_2f8 [160];
  uint local_258;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::ApplyBoxBlur(aEStack_338,2.0,1.1,2);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,3,0.5,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x101,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,3,0.5,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x102,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  iVar1 = ScaleFont(8);
  uVar2 = FUN_0431f4e4(8);
  EA::Text::EffectsState::SetExpansion(aEStack_338,uVar2,uVar2);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff003733);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.9,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  uVar2 = Sexy::Color::ToInt((Color *)&Color_Horror_Green);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,uVar2);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x103,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  iVar1 = ScaleFont(0xe);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.9,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  uVar2 = Sexy::Color::ToInt((Color *)&Color_Horror_Green);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,uVar2);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x106,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0);
  iVar1 = FUN_0431f4e4(9);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.9,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x104,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  iVar1 = FUN_0431f4e4(2);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.7,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  dVar4 = (double)FUN_0431f4f8(0x3ff4000000000000);
  dVar5 = (double)FUN_0431f4f8(0x400199999999999a);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,(int)dVar4,(int)dVar5);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x105,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphMinAlpha(aEStack_338,8);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  iVar1 = FUN_0431f4e4(2);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.8,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0x80000000);
  dVar4 = (double)FUN_0431f4f8(0x3ffe666666666666);
  dVar5 = (double)FUN_0431f4f8(0x400599999999999a);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,(int)dVar4,(int)dVar5);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x107,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  iVar1 = FUN_0431f4e4(2);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.7,1.0);
  EA::Text::EffectsState::DrawGlyphSmearOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff000000);
  dVar4 = (double)FUN_0431f4f8(0x3fe999999999999a);
  iVar1 = FUN_0431f4e4(1);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,(int)dVar4,iVar1);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x108,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  iVar1 = FUN_0431f4e4(2);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.7,1.0);
  EA::Text::EffectsState::DrawGlyphBrushOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff0000ff);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x10a,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  EA::Text::EffectsState::EffectsState(aEStack_338,(ICoreAllocator *)0x0);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xffffffff);
  iVar1 = FUN_0431f4e4(2);
  EA::Text::EffectsState::SetGlyphBrush(aEStack_338,0,iVar1 + 1,0.7,1.0);
  EA::Text::EffectsState::DrawGlyphBrushOutline(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::Clear(aEStack_338);
  EA::Text::EffectsState::SetGlyphColor(aEStack_338,0xff8c7100);
  EA::Text::EffectsState::SetGlyphOffset(aEStack_338,0,0);
  EA::Text::EffectsState::DrawGlyph(aEStack_338);
  EA::Text::EffectsState::Merge(aEStack_338);
  EA::Text::EffectsState::SetGlyphHSpace(aEStack_338,1,0);
  pPVar3 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::Font_AddUserEffect(pPVar3,0x109,aEStack_2f8,local_258);
  EA::Text::EffectsState::~EffectsState(aEStack_338);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimeText_Game::GenerateFontInstances() */

void PrimeText_Game::GenerateFontInstances(void)

{
  ObjectTypeDirectory<PrimeText_PotentialTypeface> *pOVar1;
  ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *pOVar2;
  ObjectTypeDirectory<HotUIColor> *pOVar3;
  ObjectTypeDirectory<HotUIColorAlias> *pOVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pOVar1 = (ObjectTypeDirectory<PrimeText_PotentialTypeface> *)
           Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface>>::GetInstancePtr();
  ObjectTypeDirectory<PrimeText_PotentialTypeface>::Init(pOVar1,0x39);
  pOVar2 = (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *)
           Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::
           GetInstancePtr();
  ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::Init(pOVar2,0x3a);
  std::string::string(asStack_10,"BLACK_26_HARDSHADOW");
  PrimeText_PotentialTypefaceDictionary::SetDefaultTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pOVar3 = (ObjectTypeDirectory<HotUIColor> *)
           Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::GetInstancePtr();
  ObjectTypeDirectory<HotUIColor>::Init(pOVar3,0x93);
  pOVar4 = (ObjectTypeDirectory<HotUIColorAlias> *)
           Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::GetInstancePtr();
  ObjectTypeDirectory<HotUIColorAlias>::Init(pOVar4,0x94);
  std::string::string(asStack_10,"Black");
  HotUIColor_Dictionary::SetDefaultColor(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_16");
  Typeface_CafeteriaBlack_16 =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_18");
  Typeface_CafeteriaBlack_18 =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_19_THICKOUTLINE");
  Typeface_CafeteriaBlack_19_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_20");
  Typeface_CafeteriaBlack_20 =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_22");
  Typeface_CafeteriaBlack_22 =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_22_SHADED");
  Typeface_CafeteriaBlack_22_Shaded =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_22_HARDSHADOW");
  Typeface_CafeteriaBlack_22_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_22_THICKOUTLINE");
  Typeface_CafeteriaBlack_22_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_32_THICKOUTLINE");
  Typeface_CafeteriaBlack_32_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_24_SHADED");
  Typeface_CafeteriaBlack_24_Shaded =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_24_HARDSHADOW");
  Typeface_CafeteriaBlack_24_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_26");
  Typeface_CafeteriaBlack_26 =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_26_OUTLINE");
  Typeface_CafeteriaBlack_26_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_26_HARDSHADOW");
  Typeface_CafeteriaBlack_26_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_26_SHADED");
  Typeface_CafeteriaBlack_26_Shaded =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"BLACK_28_OUTLINE");
  Typeface_CafeteriaBlack_28_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_22");
  Typeface_FZKaTong_22 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_22_HARDSHADOW");
  Typeface_FZKaTong_22_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_26");
  Typeface_FZKaTong_26 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_28");
  Typeface_FZKaTong_28 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_30");
  Typeface_FZKaTong_30 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_30_HARDSHADOW");
  Typeface_FZKaTong_30_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_42_OUTLINE");
  Typeface_FZKaTong_42_BlackOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_32");
  Typeface_FZKaTong_32 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_36");
  Typeface_FZKaTong_36 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_40");
  Typeface_FZKaTong_40 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_42_HARDSHADOW");
  Typeface_FZKaTong_42_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"KATONG_42");
  Typeface_FZKaTong_42 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_16");
  Typeface_FZShaoEr_16 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_18");
  Typeface_FZShaoEr_18 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_20");
  Typeface_FZShaoEr_20 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_20_OUTLINE");
  Typeface_FZShaoEr_20_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_22");
  Typeface_FZShaoEr_22 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_22_SHADED");
  Typeface_FZShaoEr_22_Shaded =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_22_HARDSHADOW");
  Typeface_FZShaoEr_22_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_22_THICKOUTLINE");
  Typeface_FZShaoEr_22_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_24_HARDSHADOW");
  Typeface_FZShaoEr_24_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_24_OUTLINE");
  Typeface_FZShaoEr_24_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_24_NAVYOUTLINE");
  Typeface_FZShaoEr_24_Navy_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_26");
  Typeface_FZShaoEr_26 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_26_OUTLINE");
  Typeface_FZShaoEr_26_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_26_THICKOUTLINE");
  Typeface_FZShaoEr_26_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_26_HARDSHADOW");
  Typeface_FZShaoEr_26_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_26_SHADED");
  Typeface_FZShaoEr_26_Shaded =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_28");
  Typeface_FZShaoEr_28 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_28_OUTLINE");
  Typeface_FZShaoEr_28_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_28_THICKOUTLINE");
  Typeface_FZShaoEr_28_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_28_HARDSHADOW");
  Typeface_FZShaoEr_28_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_32_SHADED");
  Typeface_FZShaoEr_32_Shaded =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_32_THICKOUTLINE");
  Typeface_FZShaoEr_32_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_32_HARDSHADOW");
  Typeface_FZShaoEr_32_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_32");
  Typeface_FZShaoEr_32 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_34_THICKOUTLINE");
  Typeface_FZShaoEr_34_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_34_HARDSHADOW");
  Typeface_FZShaoEr_34_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_36_THICKOUTLINE");
  Typeface_FZShaoEr_36_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_40_OUTLINE");
  Typeface_FZShaoEr_40_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_40_THICKOUTLINE");
  Typeface_FZShaoEr_40_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"SHAOER_60");
  Typeface_FZShaoEr_60 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_12");
  Typeface_FZCuYuan_12 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_12_OUTLINE");
  Typeface_FZCuYuan_12_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_16");
  Typeface_FZCuYuan_16 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_16_OUTLINE");
  Typeface_FZCuYuan_16_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_16_THICKOUTLINE");
  Typeface_FZCuYuan_16_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_18");
  Typeface_FZCuYuan_18 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_19_HARDSHADOW");
  Typeface_FZCuYuan_19_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_19_OUTLINE");
  Typeface_FZCuYuan_19_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_20");
  Typeface_FZCuYuan_20 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_20_HARDSHADOW");
  Typeface_FZCuYuan_20_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_24");
  Typeface_FZCuYuan_24 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_24_THICKOUTLINE");
  Typeface_FZCuYuan_24_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_26");
  Typeface_FZCuYuan_26 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_26_OUTLINE");
  Typeface_FZCuYuan_26_Outline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_26_HARDSHADOW");
  Typeface_FZCuYuan_26_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_26_SHADED");
  Typeface_FZCuYuan_26_Shaded =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_28");
  Typeface_FZCuYuan_28 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_32_HARDSHADOW");
  Typeface_FZCuYuan_32_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_32");
  Typeface_FZCuYuan_32 = PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_32_THICKOUTLINE");
  Typeface_FZCuYuan_32_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_40_THICKOUTLINE");
  Typeface_FZCuYuan_40_ThickOutline =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"CUYUAN_46_HARDSHADOW");
  Typeface_FZCuYuan_46_HardShadow =
       PrimeText_PotentialTypefaceDictionary::GetPotentialTypeface(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

