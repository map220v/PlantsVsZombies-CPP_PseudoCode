// Class: EA::Text::Typesetter


/* EA::Text::Typesetter::GetLayoutSpace(float&, float&, float&) const */

void __thiscall
EA::Text::Typesetter::GetLayoutSpace(Typesetter *this,float *param_1,float *param_2,float *param_3)

{
  *param_1 = *(float *)(this + 0x530);
  *param_2 = *(float *)(this + 0x534);
  *param_3 = *(float *)(this + 0x538);
  return;
}


/* EA::Text::Typesetter::SetLayoutSpace(float, float, float) */

void __thiscall
EA::Text::Typesetter::SetLayoutSpace(Typesetter *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x530) = param_1;
  *(float *)(this + 0x534) = param_2;
  *(float *)(this + 0x538) = param_3;
  return;
}


/* EA::Text::Typesetter::SetFontServer(EA::Text::FontServer*) */

void __thiscall EA::Text::Typesetter::SetFontServer(Typesetter *this,FontServer *param_1)

{
  *(FontServer **)(this + 0x4b8) = param_1;
  return;
}


/* EA::Text::Typesetter::SetDefaultTextStyle(EA::Text::TextStyle const*) */

void __thiscall EA::Text::Typesetter::SetDefaultTextStyle(Typesetter *this,TextStyle *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (TextStyle *)0x0) {
    TextStyle::operator=((TextStyle *)(this + 0x1ec),param_1);
    puVar1 = (undefined8 *)FUN_0536f40c(*(undefined8 *)(this + 0x4c0),0);
    *puVar1 = (TextStyle *)(this + 0x1ec);
    puVar1 = (undefined8 *)FUN_0536f40c(*(undefined8 *)(this + 0x4c0),0);
    *(undefined8 *)(this + 0x528) = *puVar1;
  }
  return;
}


/* EA::Text::Typesetter::GetDefaultTextStyle() const */

Typesetter * __thiscall EA::Text::Typesetter::GetDefaultTextStyle(Typesetter *this)

{
  return this + 0x1ec;
}


/* EA::Text::Typesetter::GetLineState() const */

undefined4 __thiscall EA::Text::Typesetter::GetLineState(Typesetter *this)

{
  return *(undefined4 *)(this + 0x5c8);
}


/* EA::Text::Typesetter::IsScheduleEmpty() const */

bool __thiscall EA::Text::Typesetter::IsScheduleEmpty(Typesetter *this)

{
  return *(long *)(this + 0x598) == *(long *)(this + 0x5b0);
}


/* EA::Text::Typesetter::GetScheduleLocationFromCharIndex(unsigned long,
   EA::Text::Typesetter::ScheduleLocation&, bool) const */

void __thiscall
EA::Text::Typesetter::GetScheduleLocationFromCharIndex
          (Typesetter *this,ulong param_1,ScheduleLocation *param_2,bool param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_3) {
    param_1 = param_1 + *(long *)(this + 0x718);
  }
  uVar6 = *(undefined8 *)(this + 0x540);
  lVar2 = FUN_0536f414(uVar6,*(undefined8 *)(this + 0x548));
  if (lVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar3 = FUN_0536f420(uVar6,lVar4);
      uVar1 = uVar5 + *(long *)(lVar3 + 0x10);
      if (param_1 < uVar1) {
        *(long *)param_2 = lVar4;
        *(ulong *)(param_2 + 8) = uVar5;
        *(ulong *)(param_2 + 0x10) = param_1 - uVar5;
        return;
      }
      lVar4 = lVar4 + 1;
      uVar5 = uVar1;
    } while (lVar4 != lVar2);
  }
  uVar6 = *(undefined8 *)(this + 0x5b8);
  *(undefined8 *)param_2 = *(undefined8 *)(this + 0x5b0);
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(this + 0x5c0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::GetScheduleItemFromCharIndex(unsigned long, bool) */

void __thiscall
EA::Text::Typesetter::GetScheduleItemFromCharIndex(Typesetter *this,ulong param_1,bool param_2)

{
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_impl::
  _Vector_impl((_Vector_impl *)local_20);
  GetScheduleLocationFromCharIndex(this,param_1,(ScheduleLocation *)local_20,param_2);
  if (local_8 == ___stack_chk_guard) {
    FUN_0536f428(*(undefined8 *)(this + 0x540),local_20[0]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::GetEndCharIndex() const */

undefined8 __thiscall EA::Text::Typesetter::GetEndCharIndex(Typesetter *this)

{
  return *(undefined8 *)(this + 0x5b8);
}


/* EA::Text::Typesetter::EllipsizeLine(bool) */

void __thiscall EA::Text::Typesetter::EllipsizeLine(Typesetter *this,bool param_1)

{
  this[0x53c] = (Typesetter)param_1;
  return;
}


/* EA::Text::Typesetter::GetLineLayout() */

Typesetter * __thiscall EA::Text::Typesetter::GetLineLayout(Typesetter *this)

{
  return this + 0x5d0;
}


/* EA::Text::Typesetter::ShapeText(EA::Text::Script, unsigned long, unsigned long) */

void __thiscall
EA::Text::Typesetter::ShapeText(Typesetter *this,undefined4 param_2,ulong param_3,ulong param_4)

{
  switch(param_2) {
  case 2:
    ShapeArabic(this,param_3,param_4);
    return;
  default:
    ShapeGeneral(this,param_3,param_4);
    return;
  case 4:
  case 0xe:
  case 0x13:
  case 0x14:
  case 0x1a:
  case 0x1f:
  case 0x21:
  case 0x26:
  case 0x2a:
  case 0x2f:
  case 0x30:
  case 0x33:
    ShapeIndic(this,param_3,param_4);
    return;
  case 0x16:
    ShapeHangul(this,param_3,param_4);
    return;
  case 0x18:
    ShapeHebrew(this,param_3,param_4);
    return;
  case 0x32:
    ShapeThai(this,param_3,param_4);
    return;
  }
}


/* EA::Text::Typesetter::GetGlyphsForChar(char16_t const*, unsigned long, EA::Text::AnalysisInfo
   const*, unsigned short*, unsigned long&, char16_t const*, unsigned long) */

void __thiscall
EA::Text::Typesetter::GetGlyphsForChar
          (Typesetter *this,wchar16 *param_1,ulong param_2,AnalysisInfo *param_3,ushort *param_4,
          ulong *param_5,wchar16 *param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  
  if (*param_1 == L'￼') {
    *param_4 = 0xffff;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_3 + 8) + 0x78))
                      (*(long **)(param_3 + 8),param_1,1,param_4,param_7 == 0,2,0);
    if ((iVar1 == 0) && (uVar2 = 0, param_7 != 0)) {
      do {
        uVar2 = uVar2 + 1;
        iVar1 = (**(code **)(**(long **)(param_3 + 8) + 0x78))
                          (*(long **)(param_3 + 8),param_6,1,param_4,uVar2 < param_7,2,0);
        if (iVar1 != 0) break;
        param_6 = param_6 + 1;
      } while (uVar2 < param_7);
    }
  }
  *param_5 = *param_5 + 1;
  return;
}


/* EA::Text::Typesetter::SetGlyphLayoutInfo(EA::Text::GlyphLayoutInfo&, float,
   EA::Text::GlyphMetrics const&) */

void __thiscall
EA::Text::Typesetter::SetGlyphLayoutInfo
          (Typesetter *this,GlyphLayoutInfo *param_1,float param_2,GlyphMetrics *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_3 + 0xc);
  fVar3 = *(float *)param_3;
  fVar2 = *(float *)(param_3 + 4);
  fVar6 = *(float *)(this + 0x4ac);
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  *(float *)(param_1 + 8) = param_2;
  *(float *)(param_1 + 0x14) = param_2 + fVar5;
  *(float *)(param_1 + 0x18) = -(fVar6 * fVar4);
  *(float *)(param_1 + 0x1c) = fVar5 + fVar3 + param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(float *)(param_1 + 0x20) = (fVar2 - fVar4) * fVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}


/* EA::Text::Typesetter::GetUnicodeLigatureGlyph(char16_t const*, unsigned long, EA::Text::Font*,
   unsigned short&) */

undefined8 __thiscall
EA::Text::Typesetter::GetUnicodeLigatureGlyph
          (Typesetter *this,wchar16 *param_1,ulong param_2,Font *param_3,ushort *param_4)

{
  (**(code **)(*(long *)param_3 + 0x78))(param_3,param_1,1,param_4,1,2,0);
  return 1;
}


/* EA::Text::Typesetter::GetObjectMetrics(unsigned long, EA::Text::GlyphMetrics&) */

void __thiscall
EA::Text::Typesetter::GetObjectMetrics(Typesetter *this,ulong param_1,GlyphMetrics *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = LineLayout::GetCharIndexFromGlyphIndex((LineLayout *)(this + 0x5d0),param_1);
  lVar3 = GetScheduleItemFromCharIndex(this,uVar2,true);
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x38);
  return;
}


/* EA::Text::Typesetter::GetTextWidth(unsigned long) */

float __thiscall EA::Text::Typesetter::GetTextWidth(Typesetter *this,ulong param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (param_1 != 0) {
    lVar1 = LineLayout::GetGlyphIndexFromCharIndex((LineLayout *)(this + 0x5d0),param_1);
    lVar1 = FUN_0536f36c(*(undefined8 *)(this + 0x678),lVar1 - (ulong)(lVar1 != 0));
    fVar2 = *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 8);
  }
  return fVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::UpdateLineState() */

void __thiscall EA::Text::Typesetter::UpdateLineState(Typesetter *this)

{
  int iVar1;
  ulong uVar2;
  wchar16 *pwVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TextRun aTStack_a0 [16];
  CharacterBreakIterator aCStack_90 [64];
  LineBreakIterator aLStack_50 [64];
  undefined4 local_10;
  undefined1 auStack_c [4];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x5d8);
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0536f31c(uVar5,*(undefined8 *)(this + 0x5e0));
  if (uVar2 != 0) {
    pwVar3 = (wchar16 *)FUN_0536f48c(uVar5);
    TextRun::TextRun(aTStack_a0,pwVar3,(uint)uVar2);
    LineBreakIterator::LineBreakIterator(aLStack_50,aTStack_a0,1,(LayoutContext *)0x0);
    fVar10 = *(float *)(this + 0x530);
    if (this[0x53c] == (Typesetter)0x0) {
      uVar8 = *(uint *)(this + 0x480);
      if (uVar8 == 1) {
        uVar8 = 4;
        uVar7 = 1;
      }
      else {
        uVar7 = (uint)(uVar8 != 0);
      }
    }
    else {
      uVar8 = 0;
      uVar7 = uVar8;
    }
    if (*(int *)(this + 0x474) == 3) {
      FUN_0536f828(auStack_c);
    }
    uVar6 = 0;
    fVar11 = 0.0;
    do {
      uVar4 = LineBreakIterator::GetNextLineBreak(aLStack_50,0xe);
      uVar4 = uVar4 & 0xffffffff;
      fVar9 = (float)GetTextWidth(this,uVar4);
      iVar1 = FUN_0536f2bc(local_10);
      if ((fVar10 < fVar9) && (uVar7 != 0)) {
        if (uVar8 == 3) {
LAB_05370d8c:
          *(ulong *)(this + 0x6f0) = uVar4;
          *(float *)(this + 0x700) = fVar9;
          *(undefined4 *)(this + 0x5c8) = 1;
          goto LAB_05370be4;
        }
        if ((uVar8 == 2) || ((uVar6 == 0 && (uVar8 == 4)))) {
          CharacterBreakIterator::CharacterBreakIterator
                    (aCStack_90,aTStack_a0,1,(LayoutContext *)0x0);
          BreakIteratorBase::SetPosition((BreakIteratorBase *)aCStack_90,(uint)uVar6);
          if (uVar6 < uVar2) {
            do {
              fVar11 = fVar9;
              uVar6 = uVar4;
              uVar2 = CharacterBreakIterator::GetNextCharBreak(aCStack_90);
              fVar9 = (float)GetTextWidth(this,uVar2 & 0xffffffff);
              uVar4 = uVar2 & 0xffffffff;
            } while (fVar9 <= fVar10);
            *(ulong *)(this + 0x6f0) = uVar6;
            *(float *)(this + 0x700) = fVar11;
          }
          goto LAB_05370d64;
        }
        *(ulong *)(this + 0x6f0) = uVar6;
        if (uVar6 == 0) {
          *(undefined4 *)(this + 0x5c8) = 0;
          *(undefined4 *)(this + 0x700) = 0;
        }
        else {
          *(float *)(this + 0x700) = fVar11;
LAB_05370d64:
          *(undefined4 *)(this + 0x5c8) = 1;
        }
        goto LAB_05370be4;
      }
      if ((uVar2 != uVar4) && (iVar1 == 8)) goto LAB_05370d8c;
      uVar6 = uVar4;
      fVar11 = fVar9;
    } while (uVar4 < uVar2);
    *(ulong *)(this + 0x6f0) = uVar4;
    *(float *)(this + 0x700) = fVar9;
    *(undefined4 *)(this + 0x5c8) = 0;
  }
LAB_05370be4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::ReverseGlyphs(EA::Text::GlyphLayoutInfo*, EA::Text::GlyphLayoutInfo*,
   float, float) */

void __thiscall
EA::Text::Typesetter::ReverseGlyphs
          (Typesetter *this,GlyphLayoutInfo *param_1,GlyphLayoutInfo *param_2,float param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  
  for (; param_1 < param_2; param_1 = param_1 + 0x28) {
    fVar1 = *(float *)(param_1 + 8);
    fVar2 = (param_4 + param_3) - fVar1;
    *(float *)(param_1 + 8) = fVar2;
    fVar1 = (fVar2 - fVar1) - *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x10) = -*(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
    *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + fVar1;
  }
  return;
}


/* EA::Text::Typesetter::Validate() */

undefined1 __thiscall EA::Text::Typesetter::Validate(Typesetter *this)

{
  undefined1 uVar1;
  char cVar2;
  ulong uVar3;
  
  uVar1 = LineLayout::Validate((LineLayout *)(this + 0x5d0),true);
  if (((*(int *)(this + 0x5c8) == 2) &&
      (cVar2 = FUN_0536f4f8(*(undefined8 *)(this + 0x628),*(undefined8 *)(this + 0x630)),
      cVar2 == '\0')) && (*(long *)(this + 0x710) == 0)) {
    uVar1 = 0;
  }
  uVar3 = FUN_0536f414(*(undefined8 *)(this + 0x540),*(undefined8 *)(this + 0x548));
  if (*(ulong *)(this + 0x5b0) != (uVar3 & 0xffffffff)) {
    uVar1 = 0;
  }
  if (*(long *)(this + 0x5c0) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


/* EA::Text::Typesetter::NextLine(bool) */

void __thiscall EA::Text::Typesetter::NextLine(Typesetter *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  Validate(this);
  uVar3 = ScheduleLocation::GetCharIndex((ScheduleLocation *)(this + 0x580));
  *(undefined8 *)(this + 0x718) = uVar3;
  cVar1 = IsScheduleEmpty(this);
  uVar3 = *(undefined8 *)(this + 0x580);
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  *(undefined8 *)(this + 0x578) = *(undefined8 *)(this + 0x590);
  *(undefined4 *)(this + 0x5c8) = uVar2;
  *(undefined8 *)(this + 0x568) = uVar3;
  *(undefined8 *)(this + 0x570) = *(undefined8 *)(this + 0x588);
  *(undefined8 *)(this + 0x598) = uVar3;
  *(undefined8 *)(this + 0x5a0) = *(undefined8 *)(this + 0x588);
  this[0x53c] = (Typesetter)0x0;
  *(undefined8 *)(this + 0x5a8) = *(undefined8 *)(this + 0x590);
  FUN_0536f6c4(*(undefined8 *)(this + 0x730),this + 0x738);
  *(undefined4 *)(this + 0x7bc) = 0;
  *(undefined4 *)(this + 0x7c0) = 0;
  if (param_1) {
    if (*(float *)(this + 0x4a4) <= 0.0) {
      *(float *)(this + 0x538) =
           *(float *)(this + 0x538) +
           *(float *)(this + 0x4ac) *
           ((float)(int)*(float *)(this + 0x708) - (float)(int)*(float *)(this + 0x70c));
      LineLayout::NewLine((LineLayout *)(this + 0x5d0));
      Validate(this);
      return;
    }
    *(float *)(this + 0x538) =
         *(float *)(this + 0x538) + *(float *)(this + 0x4a4) * *(float *)(this + 0x4ac);
  }
  LineLayout::NewLine((LineLayout *)(this + 0x5d0));
  Validate(this);
  return;
}


/* EA::Text::Typesetter::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::Typesetter::SetAllocator(Typesetter *this,ICoreAllocator *param_1)

{
  undefined8 uVar1;
  
  *(ICoreAllocator **)this = param_1;
  LineLayout::SetAllocator((LineLayout *)(this + 0x5d0),param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x540));
  FUN_0536f2d4(uVar1,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::UpdateFontSelection(unsigned long, unsigned long) */

void __thiscall
EA::Text::Typesetter::UpdateFontSelection(Typesetter *this,ulong param_1,ulong param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  long *plVar8;
  ushort *puVar9;
  exception_ptr *peVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  _func_void *extraout_x1;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e8] == (Typesetter)0x0) {
    cVar5 = FUN_0536f3f8(*(undefined8 *)(this + 0x48));
    if ((cVar5 == '\0') && (param_1 < param_2)) {
      do {
        puVar9 = (ushort *)FUN_0536f364(*(undefined8 *)(this + 0x5d8),param_1);
        uVar2 = *puVar9;
        if (0x7f < uVar2) {
          auVar16 = FUN_0536f480(*(undefined8 *)(this + 0x48));
          if (auVar16._0_8_ != 1) {
            std::__exception_ptr::exception_ptr::exception_ptr
                      ((exception_ptr *)&local_20,auVar16._8_8_);
            std::__exception_ptr::exception_ptr::exception_ptr
                      ((exception_ptr *)&local_18,extraout_x1);
            local_20 = FUN_05371494(*(undefined8 *)(this + 0x30));
            local_18 = std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)(this + 0x20));
            while (bVar4 = eastl::operator!=((rbtree_iterator *)&local_20,
                                             (rbtree_iterator *)&local_18), bVar4) {
              peVar10 = (exception_ptr *)
                        eastl::
                        rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                        ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                                     *)&local_20);
              plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get(peVar10);
              lVar15 = FUN_0536f46c(*(undefined8 *)(this + 0x600),param_1);
              cVar5 = (**(code **)(*plVar14 + 0x88))
                                (plVar14,uVar2,
                                 (long)((ulong)*(byte *)(lVar15 + 0x10) << 0x39) >> 0x39);
              if (cVar5 != '\0') {
                bVar4 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18)
                ;
                if (bVar4) {
                  lVar15 = FUN_0536f46c(*(undefined8 *)(this + 0x600),param_1);
                  peVar10 = (exception_ptr *)
                            eastl::
                            rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                            ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                                         *)&local_20);
                  uVar12 = std::__exception_ptr::exception_ptr::_M_get(peVar10);
                  *(undefined8 *)(lVar15 + 8) = uVar12;
                  goto LAB_053716f8;
                }
                break;
              }
              eastl::
              rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>
              ::operator++((rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>
                            *)&local_20);
            }
          }
        }
        lVar15 = FUN_0536f46c(*(undefined8 *)(this + 0x600),param_1);
        local_10 = FUN_05371494(*(undefined8 *)(this + 0x30));
        peVar10 = (exception_ptr *)
                  eastl::
                  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                  ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                               *)&local_10);
        uVar12 = std::__exception_ptr::exception_ptr::_M_get(peVar10);
        *(undefined8 *)(lVar15 + 8) = uVar12;
LAB_053716f8:
        param_1 = param_1 + 1;
      } while (param_1 < param_2);
    }
  }
  else {
    if (*(long *)(this + 0x4b8) == 0) {
      uVar12 = GetFontServer(true);
      *(undefined8 *)(this + 0x4b8) = uVar12;
    }
    if (*(int *)(this + 0x494) == 1) {
      plVar14 = *(long **)(this + 0x4b8);
      puVar11 = (undefined8 *)FUN_0536f40c(*(undefined8 *)(this + 0x4c0),0);
      plVar14 = (long *)(**(code **)(*plVar14 + 0x40))
                                  (plVar14,*puVar11,0,0,*(undefined2 *)(this + 0x53e),0xffffffff,1);
      iVar6 = (**(code **)(*plVar14 + 0x78))(plVar14,this + 0x53e,1,&local_10,0,2,0);
      if (iVar6 == 0) {
        *(undefined2 *)(this + 0x53e) = 0x2a;
      }
      if (param_1 < param_2) {
        do {
          uVar3 = param_1 + 1;
          lVar15 = FUN_0536f46c(*(undefined8 *)(this + 0x600),param_1);
          *(long **)(lVar15 + 8) = plVar14;
          param_1 = uVar3;
        } while (uVar3 != param_2);
      }
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
    else {
      lVar15 = 0;
      plVar14 = (long *)0x0;
      for (; param_1 < param_2; param_1 = param_1 + 1) {
        puVar7 = (undefined2 *)FUN_0536f364(*(undefined8 *)(this + 0x5d8),param_1);
        uVar1 = *puVar7;
        plVar8 = (long *)FUN_0536f46c(*(undefined8 *)(this + 0x600),param_1);
        lVar13 = *plVar8;
        uVar3 = (long)((ulong)*(byte *)(plVar8 + 2) << 0x39) >> 0x39;
        if (lVar15 == lVar13) {
          if (plVar14 == (long *)0x0) goto LAB_053715b4;
          cVar5 = (**(code **)(*plVar14 + 0x88))(plVar14,uVar1,uVar3 & 0xffffffff);
          if (cVar5 != '\0') goto LAB_053715a8;
          plVar8 = (long *)(**(code **)(**(long **)(this + 0x4b8) + 0x40))
                                     (*(long **)(this + 0x4b8),lVar15,0,0,uVar1,uVar3,1);
          (**(code **)(*plVar8 + 0x20))();
          lVar13 = FUN_0536f46c(*(undefined8 *)(this + 0x600),param_1);
          *(long **)(lVar13 + 8) = plVar8;
        }
        else {
          plVar14 = (long *)(**(code **)(**(long **)(this + 0x4b8) + 0x40))
                                      (*(long **)(this + 0x4b8),lVar13,0,0,uVar1,uVar3,1);
          (**(code **)(*plVar14 + 0x20))();
          lVar15 = lVar13;
LAB_053715a8:
          plVar8 = (long *)FUN_0536f46c(*(undefined8 *)(this + 0x600),param_1);
LAB_053715b4:
          plVar8[1] = (long)plVar14;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::AddChar(char16_t, EA::Text::TextStyle const*, bool) */

void __thiscall
EA::Text::Typesetter::AddChar(Typesetter *this,wchar16 param_1,TextStyle *param_2,bool param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  wchar16 *pwVar7;
  
  if ((param_1 == L'￼') && (param_3)) {
    param_1 = L'�';
  }
  lVar4 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  push_back((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0x5d8),param_1);
  eastl::
  vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::push_back((vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x600));
  puVar5 = (undefined8 *)FUN_0536f478(*(undefined8 *)(this + 0x608));
  if (lVar4 == 0) {
    *puVar5 = param_2;
    uVar3 = GetScriptFromChar(param_1);
    iVar1 = (int)(-(uVar3 >> 6 & 1) & 0xffffff00 | (uVar3 & 0x7f) << 1) >> 1;
    *(byte *)(puVar5 + 2) = *(byte *)(puVar5 + 2) & 0x80 | (byte)iVar1 & 0x7f;
    switch(iVar1) {
    case 2:
    case 4:
    case 6:
    case 0xe:
    case 0x16:
    case 0x18:
    case 0x1d:
    case 0x32:
      lVar6 = 0;
switchD_053721ec_caseD_2:
      this[0x7b8] = (Typesetter)0x1;
      goto switchD_053721ec_caseD_3;
    }
  }
  else {
    lVar6 = FUN_0536f46c(*(undefined8 *)(this + 0x600),lVar4 + -1);
    *puVar5 = param_2;
    uVar3 = GetScriptFromChar(param_1);
    iVar1 = (int)(-(uVar3 >> 6 & 1) & 0xffffff00 | (uVar3 & 0x7f) << 1) >> 1;
    *(byte *)(puVar5 + 2) = *(byte *)(puVar5 + 2) & 0x80 | (byte)iVar1 & 0x7f;
    switch(iVar1) {
    case 2:
    case 4:
    case 6:
    case 0xe:
    case 0x16:
    case 0x18:
    case 0x1d:
    case 0x32:
      goto switchD_053721ec_caseD_2;
    default:
switchD_053721ec_caseD_3:
      if (lVar6 != 0) {
        pwVar7 = (wchar16 *)FUN_0536f364(*(undefined8 *)(this + 0x5d8),lVar4 + -1);
        bVar2 = IsCharJoinControl(*pwVar7);
        *(byte *)((long)puVar5 + 0x12) = *(byte *)((long)puVar5 + 0x12) & 0xfe | bVar2 & 1;
        bVar2 = IsCharJoinControl(param_1);
        *(byte *)(lVar6 + 0x12) =
             *(byte *)(lVar6 + 0x12) & 0xfc | *(byte *)(lVar6 + 0x12) & 1 | (bVar2 & 1) << 1;
        *(byte *)((long)puVar5 + 0x12) = *(byte *)((long)puVar5 + 0x12) & 0xfd;
        return;
      }
    }
  }
  bVar2 = *(byte *)((long)puVar5 + 0x12);
  *(byte *)((long)puVar5 + 0x12) = bVar2 & 0xfe;
  *(byte *)((long)puVar5 + 0x12) = bVar2 & 0xfc;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::UpdateAnalysis() */

void __thiscall EA::Text::Typesetter::UpdateAnalysis(Typesetter *this)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  wchar16 *pwVar4;
  AnalysisInfo *pAVar5;
  wchar16 wVar6;
  long lVar7;
  TextStyle *pTVar8;
  ulong uVar9;
  wchar16 *pwVar10;
  wchar16 *pwVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TextRun aTStack_58 [16];
  CharacterBreakIterator aCStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
  uVar13 = *(undefined8 *)(this + 0x600);
  uVar12 = *(undefined8 *)(this + 0x608);
LAB_053722d8:
  do {
    uVar2 = FUN_0536f3bc(uVar13,uVar12);
    if ((0x3fff < uVar2) || (uVar9 = *(ulong *)(this + 0x598), *(ulong *)(this + 0x5b0) <= uVar9)) {
      uVar12 = *(undefined8 *)(this + 0x5d8);
      uVar2 = FUN_0536f31c(uVar12,*(undefined8 *)(this + 0x5e0));
      if (uVar1 < uVar2) {
        pwVar4 = (wchar16 *)FUN_0536f364(uVar12,0);
        pAVar5 = (AnalysisInfo *)FUN_0536f46c(uVar13,0);
        Bidi(*(int *)(this + 0x18),pwVar4,pAVar5,uVar2);
      }
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    piVar3 = (int *)FUN_0536f428(*(undefined8 *)(this + 0x540),uVar9);
    switch(*piVar3) {
    case 0:
      uVar9 = *(long *)(piVar3 + 4) - *(long *)(this + 0x5a8);
      pwVar4 = (wchar16 *)(*(long *)(piVar3 + 8) + *(long *)(this + 0x5a8) * 2);
      if (0x4000 - uVar2 < uVar9) {
        TextRun::TextRun(aTStack_58,pwVar4,(uint)uVar9);
        CharacterBreakIterator::CharacterBreakIterator(aCStack_48,aTStack_58,1,(LayoutContext *)0x0)
        ;
        do {
          uVar9 = CharacterBreakIterator::GetNextCharBreak(aCStack_48);
        } while ((uVar9 & 0xffffffff) < 0x4000 - uVar2);
        pwVar11 = pwVar4 + (uVar9 & 0xffffffff);
        if (pwVar4 < pwVar11) goto LAB_0537241c;
LAB_053724b8:
        lVar7 = *(long *)(this + 0x5a8);
        if (*(long *)(piVar3 + 4) == lVar7) {
LAB_053724c8:
          uVar9 = *(ulong *)(this + 0x598);
          uVar13 = *(undefined8 *)(this + 0x600);
          uVar12 = *(undefined8 *)(this + 0x608);
          goto LAB_05372374;
        }
      }
      else {
        pwVar11 = (wchar16 *)(*(long *)(piVar3 + 8) + *(long *)(piVar3 + 4) * 2);
        if (pwVar11 <= pwVar4) goto LAB_053724b8;
LAB_0537241c:
        do {
          pwVar10 = pwVar4 + 1;
          AddChar(this,*pwVar4,*(TextStyle **)(piVar3 + 6),true);
          lVar7 = *(long *)(this + 0x5a8) + 1;
          *(long *)(this + 0x5a8) = lVar7;
          pwVar4 = pwVar10;
        } while (pwVar10 < pwVar11);
        if (*(long *)(piVar3 + 4) == lVar7) goto LAB_053724c8;
      }
      uVar13 = *(undefined8 *)(this + 0x600);
      uVar12 = *(undefined8 *)(this + 0x608);
      goto LAB_053722d8;
    case 1:
      if ((char)piVar3[0xf] != '\0') {
        AddChar(this,L'\xfeff',*(TextStyle **)(piVar3 + 6),false);
      }
      AddChar(this,L'￼',*(TextStyle **)(piVar3 + 6),false);
      if (*(char *)((long)piVar3 + 0x3d) != '\0') {
        pTVar8 = *(TextStyle **)(piVar3 + 6);
        wVar6 = L'\xfeff';
        goto LAB_053723d0;
      }
      break;
    case 2:
    case 3:
      pTVar8 = *(TextStyle **)(piVar3 + 6);
      wVar6 = L'\x2028';
      if (*piVar3 != 2) {
        wVar6 = L'\x2029';
      }
LAB_053723d0:
      AddChar(this,wVar6,pTVar8,false);
      break;
    default:
      lVar7 = *(long *)(this + 0x5a8);
      goto LAB_05372374;
    }
    uVar9 = *(ulong *)(this + 0x598);
    lVar7 = *(long *)(this + 0x5a8);
    uVar13 = *(undefined8 *)(this + 0x600);
    uVar12 = *(undefined8 *)(this + 0x608);
LAB_05372374:
    *(undefined8 *)(this + 0x5a8) = 0;
    *(ulong *)(this + 0x598) = uVar9 + 1;
    *(long *)(this + 0x5a0) = *(long *)(this + 0x5a0) + lVar7;
  } while( true );
}


/* EA::Text::Typesetter::~Typesetter() */

void __thiscall EA::Text::Typesetter::~Typesetter(Typesetter *this)

{
  eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)(this + 0x730)
            );
  LineLayout::~LineLayout((LineLayout *)(this + 0x5d0));
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::~vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0x540));
  eastl::fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> *)(this + 0x4c0));
  LayoutSettings::~LayoutSettings((LayoutSettings *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::Justify() */

void __thiscall EA::Text::Typesetter::Justify(Typesetter *this)

{
  ulong uVar1;
  ushort uVar2;
  char cVar3;
  ushort *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  ulong local_238;
  undefined8 local_230;
  undefined8 local_228;
  long local_8;
  
  fVar10 = *(float *)(this + 0x530);
  fVar11 = *(float *)(this + 0x704);
  local_8 = ___stack_chk_guard;
  eastl::fixed_vector<unsigned_long,64ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<unsigned_long,64ul,true,eastl::allocator> *)&local_230);
  uVar9 = *(ulong *)(this + 0x6f8);
  local_238 = 0;
  if (uVar9 != 0) {
    do {
      uVar6 = local_238;
      uVar8 = *(undefined8 *)(this + 0x5d8);
      puVar4 = (ushort *)FUN_0536f364(uVar8,local_238);
      uVar2 = *puVar4;
      if ((((uVar2 & 0xff7f) == 0x20) || (uVar2 == 0x3000)) ||
         ((uVar2 == 0x200b &&
          ((uVar6 != 0 && (puVar4 = (ushort *)FUN_0536f364(uVar8,uVar6 - 1), *puVar4 - 0xe00 < 0x80)
           ))))) {
        eastl::fixed_vector<unsigned_long,64ul,true,eastl::allocator>::push_back
                  ((fixed_vector<unsigned_long,64ul,true,eastl::allocator> *)&local_230,&local_238);
      }
      local_238 = local_238 + 1;
    } while (local_238 < uVar9);
  }
  uVar8 = local_230;
  cVar3 = FUN_0536f4bc(local_230,local_228);
  if (cVar3 == '\0') {
    uVar9 = FUN_0536f4c8(uVar8,local_228);
    if (uVar9 != 0) {
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        plVar5 = (long *)FUN_0536f4d4(uVar8,uVar6);
        uVar6 = LineLayout::GetGlyphIndexFromCharIndex((LineLayout *)(this + 0x5d0),*plVar5 + 1);
        uVar7 = FUN_0536f2c0(*(undefined8 *)(this + 0x678),*(undefined8 *)(this + 0x680));
        LineLayout::OffsetSegment
                  ((LineLayout *)(this + 0x5d0),(fVar10 - fVar11) / (float)uVar9,0.0,uVar6,uVar7);
        uVar8 = local_230;
        uVar6 = uVar1;
      } while (uVar1 != uVar9);
    }
  }
  eastl::fixed_vector<unsigned_long,64ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<unsigned_long,64ul,true,eastl::allocator> *)&local_230);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AdjustPositioning() */

void __thiscall EA::Text::Typesetter::AdjustPositioning(Typesetter *this)

{
  short sVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  short *psVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  FontMetrics aFStack_50 [20];
  float local_3c;
  float local_34;
  long local_8;
  
  lVar7 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0536f3d8(*(undefined8 *)(this + 0x650),*(undefined8 *)(this + 0x658));
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_0536f36c(*(undefined8 *)(this + 0x678),lVar7);
      FontMetrics::FontMetrics(aFStack_50);
      pbVar5 = (byte *)FUN_0536f3e4(*(undefined8 *)(this + 0x650),lVar7);
      if ((*pbVar5 >> 4 & 1) == 0) {
        (**(code **)(*(long *)*puVar4 + 0x68))((long *)*puVar4,aFStack_50);
        if (local_34 < -*(float *)(puVar4 + 3)) {
          local_34 = -*(float *)(puVar4 + 3);
        }
        if (-*(float *)(puVar4 + 4) < local_3c) {
          local_3c = -*(float *)(puVar4 + 4);
        }
      }
      else {
        local_34 = -*(float *)(puVar4 + 3);
        local_3c = -*(float *)(puVar4 + 4);
      }
      if (*(float *)(this + 0x708) < local_34) {
        *(float *)(this + 0x708) = local_34;
      }
      if (local_3c < *(float *)(this + 0x70c)) {
        *(float *)(this + 0x70c) = local_3c;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar3);
  }
  fVar9 = *(float *)(this + 0x534);
  fVar10 = *(float *)(this + 0x538);
  if (*(int *)(this + 0x474) == 3) {
    uVar8 = *(undefined8 *)(this + 0x5e0);
    cVar2 = FUN_0536f384(*(undefined8 *)(this + 0x5d8),uVar8);
    if (cVar2 == '\0') {
      psVar6 = (short *)FUN_0536f4b4(uVar8);
      sVar1 = *psVar6;
      if (((sVar1 == 10) || (sVar1 == 0x85)) || ((ushort)(sVar1 + 0xdfd8U) < 2)) {
        *(undefined4 *)(this + 0x474) = 0;
        goto switchD_05373db0_caseD_0;
      }
    }
    Justify(this);
    goto switchD_05373db0_caseD_3;
  }
  switch(*(int *)(this + 0x474)) {
  case 0:
  case 4:
switchD_05373db0_caseD_0:
    if (*(int *)(this + 0x18) != 1) goto switchD_05373db0_caseD_3;
    break;
  case 1:
    fVar9 = fVar9 + (float)(int)((*(float *)(this + 0x530) - *(float *)(this + 0x700)) * 0.5);
    goto switchD_05373db0_caseD_3;
  case 2:
    if (*(int *)(this + 0x18) != 0) goto switchD_05373db0_caseD_3;
    break;
  default:
    goto switchD_05373db0_caseD_3;
  }
  fVar9 = (fVar9 + *(float *)(this + 0x530)) - *(float *)(this + 0x700);
switchD_05373db0_caseD_3:
  if (this[0x4a9] != (Typesetter)0x0) {
    fVar10 = fVar10 + (float)(int)((*(float *)(this + 0x708) + 0.5) * *(float *)(this + 0x4ac));
  }
  LineLayout::Offset((LineLayout *)(this + 0x5d0),fVar9,fVar10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::AddTextRun(char16_t const*, unsigned long) */

void __thiscall EA::Text::Typesetter::AddTextRun(Typesetter *this,wchar16 *param_1,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  Validate(this);
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::push_back((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x540));
  puVar2 = (undefined4 *)FUN_0536f444(*(undefined8 *)(this + 0x548));
  uVar6 = *(undefined8 *)(this + 0x5b8);
  uVar5 = *(undefined8 *)(this + 0x528);
  *(wchar16 **)(puVar2 + 8) = param_1;
  lVar4 = *(long *)(this + 0x5b0);
  lVar3 = *(long *)(this + 0x5b8);
  iVar1 = *(int *)(this + 0x5c8);
  *puVar2 = 0;
  *(undefined8 *)(puVar2 + 2) = uVar6;
  *(ulong *)(puVar2 + 4) = param_2;
  *(undefined8 *)(puVar2 + 6) = uVar5;
  *(long *)(this + 0x5b0) = lVar4 + 1;
  *(ulong *)(this + 0x5b8) = lVar3 + param_2;
  if (iVar1 == 2) {
    *(undefined4 *)(this + 0x5c8) = 0;
  }
  Validate(this);
  return;
}


/* EA::Text::Typesetter::AddObject(void*, EA::Text::GlyphMetrics&, bool, bool) */

void __thiscall
EA::Text::Typesetter::AddObject
          (Typesetter *this,void *param_1,GlyphMetrics *param_2,bool param_3,bool param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  Validate(this);
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::push_back((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x540));
  puVar2 = (undefined4 *)FUN_0536f444(*(undefined8 *)(this + 0x548));
  uVar5 = *(undefined8 *)(this + 0x5b8);
  uVar4 = *(undefined8 *)(this + 0x528);
  *(void **)(puVar2 + 8) = param_1;
  iVar3 = 2;
  if (!param_3) {
    iVar3 = 1;
  }
  *(undefined8 *)(puVar2 + 2) = uVar5;
  uVar5 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar2 + 6) = uVar4;
  *puVar2 = 1;
  *(long *)(puVar2 + 4) = (long)(int)(iVar3 + (uint)param_4);
  *(undefined8 *)(puVar2 + 10) = uVar5;
  *(undefined8 *)(puVar2 + 0xc) = uVar1;
  puVar2[0xe] = *(undefined4 *)(param_2 + 0x10);
  *(bool *)(puVar2 + 0xf) = param_3;
  *(bool *)((long)puVar2 + 0x3d) = param_4;
  *(long *)(this + 0x5b0) = *(long *)(this + 0x5b0) + 1;
  *(long *)(this + 0x5b8) = *(long *)(this + 0x5b8) + (long)(int)(iVar3 + (uint)param_4);
  if (*(int *)(this + 0x5c8) == 2) {
    *(undefined4 *)(this + 0x5c8) = 0;
  }
  Validate(this);
  return;
}


/* EA::Text::Typesetter::AddLineBreak() */

void __thiscall EA::Text::Typesetter::AddLineBreak(Typesetter *this)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  Validate(this);
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::push_back((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x540));
  puVar2 = (undefined4 *)FUN_0536f444(*(undefined8 *)(this + 0x548));
  lVar4 = *(long *)(this + 0x5b8);
  lVar3 = *(long *)(this + 0x5b0);
  iVar1 = *(int *)(this + 0x5c8);
  uVar5 = *(undefined8 *)(this + 0x528);
  *(long *)(puVar2 + 2) = lVar4;
  *puVar2 = 2;
  *(undefined8 *)(puVar2 + 4) = 1;
  *(undefined8 *)(puVar2 + 6) = uVar5;
  *(long *)(this + 0x5b0) = lVar3 + 1;
  *(long *)(this + 0x5b8) = lVar4 + 1;
  if (iVar1 == 2) {
    *(undefined4 *)(this + 0x5c8) = 0;
  }
  Validate(this);
  return;
}


/* EA::Text::Typesetter::AddParagraphBreak() */

void __thiscall EA::Text::Typesetter::AddParagraphBreak(Typesetter *this)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  Validate(this);
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::push_back((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x540));
  puVar2 = (undefined4 *)FUN_0536f444(*(undefined8 *)(this + 0x548));
  lVar4 = *(long *)(this + 0x5b8);
  lVar3 = *(long *)(this + 0x5b0);
  iVar1 = *(int *)(this + 0x5c8);
  uVar5 = *(undefined8 *)(this + 0x528);
  *(long *)(puVar2 + 2) = lVar4;
  *puVar2 = 3;
  *(undefined8 *)(puVar2 + 4) = 1;
  *(undefined8 *)(puVar2 + 6) = uVar5;
  *(long *)(this + 0x5b0) = lVar3 + 1;
  *(long *)(this + 0x5b8) = lVar4 + 1;
  if (iVar1 == 2) {
    *(undefined4 *)(this + 0x5c8) = 0;
  }
  Validate(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ShapeText() */

void __thiscall EA::Text::Typesetter::ShapeText(Typesetter *this)

{
  Typesetter TVar1;
  byte bVar2;
  char cVar3;
  Typesetter TVar4;
  long *plVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  RunInfo aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_0536f384(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
  if (cVar3 == '\0') {
    LineLayout::NewGlyphs((LineLayout *)(this + 0x5d0));
    plVar5 = (long *)FUN_0536f46c(*(undefined8 *)(this + 0x600),0);
    lVar13 = *plVar5;
    uVar6 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
    if (uVar6 != 0) {
      uVar10 = 0;
      uVar15 = 0;
      lVar14 = lVar13;
      while( true ) {
        uVar17 = uVar10 + 1;
        uVar8 = uVar17;
        if ((uVar6 == uVar17) || (uVar8 = uVar10, uVar10 = uVar17, lVar13 != lVar14)) {
          uVar10 = uVar8 + 1;
          UpdateFontSelection(this,uVar15,uVar8);
          lVar14 = lVar13;
          uVar15 = uVar8;
        }
        if (uVar6 <= uVar10) break;
        plVar5 = (long *)FUN_0536f46c(*(undefined8 *)(this + 0x600),uVar10);
        lVar13 = *plVar5;
      }
    }
    TVar1 = this[0x7b8];
    if (TVar1 == (Typesetter)0x0) {
      uVar9 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
      RunInfo::RunInfo(aRStack_20,0x1e,0,0,uVar9);
      eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::push_back
                ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)
                 (this + 0x730),aRStack_20);
      ShapeText(this,0x1e,0,uVar9);
    }
    else {
      uVar6 = 0;
      uVar17 = 0;
      eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::push_back
                ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)
                 (this + 0x730));
      lVar13 = FUN_0536f46c(*(undefined8 *)(this + 0x600),0);
      bVar2 = *(byte *)(lVar13 + 0x10);
      uVar10 = (long)((ulong)*(byte *)(lVar13 + 0x11) << 0x38) >> 0x3c;
      puVar7 = (uint *)FUN_0536f460(*(undefined8 *)(this + 0x730),0);
      uVar15 = (long)((ulong)bVar2 << 0x39) >> 0x39;
      uVar8 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
      do {
        if (uVar6 < uVar8) {
          lVar13 = FUN_0536f46c(*(undefined8 *)(this + 0x600),uVar6);
          uVar11 = (uint)((long)((ulong)*(byte *)(lVar13 + 0x10) << 0x39) >> 0x39);
          uVar12 = (uint)((long)((ulong)*(byte *)(lVar13 + 0x11) << 0x38) >> 0x3c);
          TVar4 = (Typesetter)(uVar11 != 1);
        }
        else {
          uVar11 = 0xffffffff;
          uVar12 = 0xffffffff;
          TVar4 = TVar1;
        }
        uVar16 = (uint)uVar10;
        if ((uVar16 != uVar12 || uVar6 == uVar8) || (((byte)TVar4 & (uint)uVar15 != uVar11) != 0)) {
          *puVar7 = (uint)uVar15;
          puVar7[1] = uVar16;
          *(ulong *)(puVar7 + 4) = uVar6;
          ShapeText(this,uVar15 & 0xffffffff,uVar17,uVar6);
          uVar17 = uVar6;
          if ((uVar16 == uVar12) || (uVar6 == uVar8)) {
            uVar10 = (ulong)uVar12;
            uVar15 = (ulong)uVar11;
          }
          else {
            uVar10 = (ulong)uVar12;
            uVar15 = (ulong)uVar11;
            RunInfo::RunInfo(aRStack_20,uVar11,uVar10,uVar6,uVar6);
            eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::push_back
                      ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)
                       (this + 0x730),aRStack_20);
            puVar7 = (uint *)FUN_0536f484(*(undefined8 *)(this + 0x738));
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar8);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EA::Text::Typesetter::ProcessLine() */

undefined4 __thiscall EA::Text::Typesetter::ProcessLine(Typesetter *this)

{
  Validate(this);
  if (*(int *)(this + 0x5c8) != 1) {
    *(undefined4 *)(this + 0x7bc) = 0;
    *(undefined4 *)(this + 0x7c0) = 0;
    FUN_0536f6c4(*(undefined8 *)(this + 0x730),this + 0x738);
    UpdateAnalysis(this);
    ShapeText(this);
    UpdateLineState(this);
  }
  Validate(this);
  return *(undefined4 *)(this + 0x5c8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AdjustWhitespaceEmbedding() */

void __thiscall EA::Text::Typesetter::AdjustWhitespaceEmbedding(Typesetter *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  RunInfo aRStack_20 [24];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x738);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0536f498(*(undefined8 *)(this + 0x730),uVar5);
  if (cVar1 == '\0') {
    lVar2 = FUN_0536f484(uVar5);
    iVar6 = *(int *)(this + 0x18);
    if (*(int *)(lVar2 + 4) % 2 != iVar6) {
      lVar3 = eastl::
              basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              ::find_last_not_of((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                                  *)(this + 0x5d8),L" \r\n\t",0xffffffffffffffff);
      lVar4 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
      if (lVar3 != lVar4 + -1) {
        if (lVar3 == -1) {
          FUN_0536f4a4(this + 0x738);
          iVar6 = *(int *)(this + 0x18);
          lVar4 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
          lVar3 = 0;
        }
        else {
          lVar3 = lVar3 + 1;
          *(long *)(lVar2 + 0x10) = lVar3;
        }
        RunInfo::RunInfo(aRStack_20,0xffffffff,iVar6,lVar3,lVar4);
        eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::push_back
                  ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)
                   (this + 0x730),aRStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::SetLayoutSettings(EA::Text::LayoutSettings&) */

void __thiscall EA::Text::Typesetter::SetLayoutSettings(Typesetter *this,LayoutSettings *param_1)

{
  LayoutSettings *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_10;
  byte local_f;
  long local_8;
  
  this_00 = (LayoutSettings *)(this + 8);
  local_8 = ___stack_chk_guard;
  Validate(this);
  LayoutSettings::operator=(this_00,param_1);
  if (*(short *)(this + 8) == 0) {
    StdC::Strcpy((wchar16 *)this_00,L"en-us");
    iVar1 = *(int *)(this + 0x14);
  }
  else {
    iVar1 = *(int *)(this + 0x14);
  }
  if (iVar1 < 2) {
    uVar2 = GetScriptFromLocale((wchar16 *)this_00,0);
    *(undefined4 *)(this + 0x14) = uVar2;
  }
  if (1 < *(uint *)(this + 0x18)) {
    GetScriptProperties(*(undefined4 *)(this + 0x14),&uStack_10,1);
    *(uint *)(this + 0x18) = local_f >> 4 & 1;
  }
  Validate(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::SubstituteEllipsis() */

void __thiscall EA::Text::Typesetter::SubstituteEllipsis(Typesetter *this)

{
  byte bVar1;
  AnalysisInfo *pAVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  wchar16 local_5a;
  ushort local_58 [4];
  ulong local_50;
  GlyphMetrics aGStack_48 [24];
  long *local_30;
  float local_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  undefined4 uStack_18;
  float local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x530) < *(float *)(this + 0x700)) {
    Validate(this);
    local_50 = 0;
    local_5a = L'…';
    pAVar2 = (AnalysisInfo *)FUN_0536f46c(*(undefined8 *)(this + 0x600));
    local_30 = *(long **)(pAVar2 + 8);
    GetGlyphsForChar(this,&local_5a,1,pAVar2,local_58,&local_50,L"_",1);
    (**(code **)(*local_30 + 0x70))(local_30,local_58[0],aGStack_48);
    SetGlyphLayoutInfo(this,(GlyphLayoutInfo *)&local_30,0.0,aGStack_48);
    uVar12 = *(undefined8 *)(this + 0x678);
    fVar14 = *(float *)(this + 0x530) - local_20;
    uVar3 = FUN_0536f2c0(uVar12,*(undefined8 *)(this + 0x680));
    uVar9 = uVar3 - 1;
    if (uVar3 == 0) {
      uVar11 = *(undefined8 *)(this + 0x650);
    }
    else {
      uVar11 = *(undefined8 *)(this + 0x650);
      do {
        pbVar4 = (byte *)FUN_0536f3e4(uVar11,uVar9);
        if ((*pbVar4 & 0xe0) == 0) {
          lVar5 = FUN_0536f36c(uVar12,uVar9);
          fVar13 = *(float *)(lVar5 + 8);
          if (fVar13 <= fVar14) {
            uVar3 = uVar9 + 1;
            goto LAB_05376c50;
          }
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < uVar3);
    }
    uVar9 = 0;
    uVar3 = 1;
    pbVar4 = (byte *)FUN_0536f3e4(uVar11);
    fVar13 = 0.0;
LAB_05376c50:
    fStack_1c = fVar13 + fStack_1c;
    bVar1 = pbVar4[1];
    local_28 = fVar13 + local_28;
    local_14 = fVar13 + local_14;
    puVar6 = (ushort *)FUN_0536f490(*(undefined8 *)(this + 0x628),uVar9);
    *puVar6 = local_58[0];
    *pbVar4 = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[1] = pbVar4[1] & 0x80 | (bVar1 >> 6 & 1) << 6 | 0x11;
    puVar7 = (undefined8 *)FUN_0536f36c(*(undefined8 *)(this + 0x678),uVar9);
    *puVar7 = local_30;
    puVar7[1] = CONCAT44(uStack_24,local_28);
    puVar7[2] = CONCAT44(fStack_1c,local_20);
    puVar7[3] = CONCAT44(local_14,uStack_18);
    puVar7[4] = local_10;
    eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x628),uVar3);
    eastl::
    vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    resize((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x650),uVar3);
    eastl::
    vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x678),uVar3);
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x6c8),uVar3);
    uVar12 = *(undefined8 *)(this + 0x6a0);
    uVar3 = FUN_0536f300(uVar12,*(undefined8 *)(this + 0x6a8));
    uVar10 = uVar3 - 1;
    if (uVar3 != 0) {
      do {
        puVar8 = (ulong *)FUN_0536f3d0(uVar12,uVar10);
        if (*puVar8 <= (uVar9 & 0xffffffff)) break;
        uVar10 = uVar10 - 1;
        *puVar8 = uVar9 & 0xffffffff;
      } while (uVar10 < uVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::Typesetter(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::Typesetter::Typesetter(Typesetter *this,ICoreAllocator *param_1)

{
  LayoutSettings *pLVar1;
  
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)this = param_1;
  pLVar1 = (LayoutSettings *)GetDefaultLayoutSettings();
  LayoutSettings::LayoutSettings((LayoutSettings *)(this + 8),pLVar1);
  *(undefined8 *)(this + 0x4b8) = 0;
  eastl::fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> *)(this + 0x4c0),1)
  ;
  *(undefined8 *)(this + 0x528) = 0;
  *(undefined2 *)(this + 0x53e) = 0x25cf;
  this[0x53c] = (Typesetter)0x0;
  *(undefined4 *)(this + 0x530) = 0;
  *(undefined4 *)(this + 0x534) = 0;
  *(undefined4 *)(this + 0x538) = 0;
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x540));
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_impl::
  _Vector_impl((_Vector_impl *)(this + 0x568));
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_impl::
  _Vector_impl((_Vector_impl *)(this + 0x580));
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_impl::
  _Vector_impl((_Vector_impl *)(this + 0x598));
  std::_Vector_base<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::_Vector_impl::
  _Vector_impl((_Vector_impl *)(this + 0x5b0));
  *(undefined4 *)(this + 0x5c8) = 2;
  LineLayout::LineLayout((LineLayout *)(this + 0x5d0),(ICoreAllocator *)0x0);
  *(undefined8 *)(this + 0x728) = 0;
  eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)(this + 0x730)
            );
  this[0x7b8] = (Typesetter)0x0;
  *(undefined4 *)(this + 0x7bc) = 0;
  *(undefined4 *)(this + 0x7c0) = 0;
  SetDefaultTextStyle(this,(TextStyle *)(this + 0x1ec));
  return;
}


/* EA::Text::Typesetter::Reset(bool) */

void __thiscall EA::Text::Typesetter::Reset(Typesetter *this,bool param_1)

{
  undefined8 uVar1;
  
  Validate(this);
  if (param_1) {
    FUN_0536f6bc(*(undefined8 *)(this + 0x540),this + 0x548);
    *(undefined8 *)(this + 0x5b0) = 0;
    *(undefined8 *)(this + 0x5c0) = 0;
    *(undefined8 *)(this + 0x5b8) = 0;
    *(undefined8 *)(this + 0x568) = *(undefined8 *)(this + 0x5b0);
    *(undefined8 *)(this + 0x570) = *(undefined8 *)(this + 0x5b8);
    *(undefined8 *)(this + 0x578) = 0;
    *(undefined8 *)(this + 0x728) = 0;
  }
  uVar1 = *(undefined8 *)(this + 0x568);
  *(undefined8 *)(this + 0x580) = uVar1;
  *(undefined8 *)(this + 0x588) = *(undefined8 *)(this + 0x570);
  *(undefined8 *)(this + 0x590) = *(undefined8 *)(this + 0x578);
  *(undefined8 *)(this + 0x5a8) = *(undefined8 *)(this + 0x578);
  *(undefined8 *)(this + 0x598) = uVar1;
  *(undefined8 *)(this + 0x5a0) = *(undefined8 *)(this + 0x570);
  eastl::
  vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
  ::resize((vector<EA::Text::TextStyle_const*,eastl::fixed_vector_allocator<8ul,8ul,8ul,0ul,true,eastl::allocator>>
            *)(this + 0x4c0),1);
  this[0x7b8] = (Typesetter)0x0;
  *(Typesetter **)(this + 0x528) = this + 0x1ec;
  *(undefined4 *)(this + 0x5c8) = 2;
  NextLine(this,false);
  *(undefined8 *)(this + 0x718) = 0;
  Validate(this);
  return;
}


/* EA::Text::Typesetter::AddTextStyle(EA::Text::TextStyle const*) */

undefined8 __thiscall EA::Text::Typesetter::AddTextStyle(Typesetter *this,TextStyle *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  TextStyle *local_8;
  
  uVar4 = *(undefined8 *)(this + 0x4c0);
  local_8 = param_1;
  lVar2 = FUN_0536f430(uVar4,*(undefined8 *)(this + 0x4c8));
  if (lVar2 != 0) {
    lVar5 = 0;
    while( true ) {
      puVar3 = (undefined8 *)FUN_0536f40c(uVar4,lVar5);
      if (((TextStyle *)*puVar3 != (TextStyle *)0x0) &&
         (cVar1 = Text::operator==(local_8,(TextStyle *)*puVar3), cVar1 != '\0')) {
        puVar3 = (undefined8 *)FUN_0536f40c(*(undefined8 *)(this + 0x4c0),lVar5);
        return *puVar3;
      }
      lVar5 = lVar5 + 1;
      if (lVar5 == lVar2) break;
      uVar4 = *(undefined8 *)(this + 0x4c0);
    }
  }
  eastl::fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator>::push_back
            ((fixed_vector<EA::Text::TextStyle_const*,8ul,true,eastl::allocator> *)(this + 0x4c0),
             &local_8);
  puVar3 = (undefined8 *)FUN_0536f43c(*(undefined8 *)(this + 0x4c8));
  return *puVar3;
}


/* EA::Text::Typesetter::AddStyleChange(EA::Text::TextStyle const*) */

void __thiscall EA::Text::Typesetter::AddStyleChange(Typesetter *this,TextStyle *param_1)

{
  undefined8 uVar1;
  
  uVar1 = AddTextStyle(this,param_1);
  *(undefined8 *)(this + 0x528) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ReorderBidiRunInfoArray(eastl::fixed_vector<EA::Text::Typesetter::RunInfo,
   4ul, true, eastl::allocator>&) */

void __thiscall
EA::Text::Typesetter::ReorderBidiRunInfoArray(Typesetter *this,fixed_vector *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  RunInfo *pRVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 0x730);
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0536f44c(uVar10,*(undefined8 *)(this + 0x738));
  if ((lVar3 == 1) && (lVar3 = FUN_0536f460(uVar10,0), (*(uint *)(lVar3 + 4) & 1) == 0)) {
    eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::operator=
              ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)param_1,
               (fixed_vector *)(this + 0x730));
    goto LAB_05378074;
  }
  eastl::fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator>::fixed_vector
            ((fixed_vector<EA::Text::OTFLookup*,16ul,true,eastl::allocator> *)&local_b0);
  uVar10 = *(undefined8 *)(this + 0x730);
  local_b8 = 0;
  uVar4 = FUN_0536f44c(uVar10,*(undefined8 *)(this + 0x738));
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar15 = 0x7fffffff;
    uVar13 = 0x80000000;
    while( true ) {
      lVar3 = FUN_0536f460(uVar10,uVar9);
      uVar2 = *(uint *)(lVar3 + 4);
      eastl::fixed_vector<unsigned_long,16ul,true,eastl::allocator>::push_back
                ((fixed_vector<unsigned_long,16ul,true,eastl::allocator> *)&local_b0,&local_b8);
      if ((int)uVar13 < (int)uVar2) {
        uVar13 = uVar2;
      }
      if (((int)uVar2 < (int)uVar15) && ((uVar2 & 1) != 0)) {
        uVar15 = uVar2;
      }
      uVar9 = local_b8 + 1;
      local_b8 = uVar9;
      if (uVar4 <= uVar9) break;
      uVar10 = *(undefined8 *)(this + 0x730);
    }
    if (uVar13 == 0x80000000) {
      if (uVar15 == 0x7fffffff) goto LAB_0537800c;
      iVar14 = -1;
    }
    else {
      iVar14 = uVar13 - 1;
      if (uVar15 == 0x7fffffff) {
        uVar15 = 1;
      }
    }
    for (; (int)uVar15 <= iVar14; iVar14 = iVar14 + -1) {
      puVar5 = (ulong *)FUN_0536f4dc(local_b0);
      puVar6 = (ulong *)FUN_0536f4e0(local_a8);
      while (puVar5 != puVar6) {
        uVar10 = *(undefined8 *)(this + 0x730);
        puVar11 = puVar5;
        while (lVar3 = FUN_0536f460(uVar10,*puVar11), *(int *)(lVar3 + 4) < iVar14) {
          puVar11 = puVar11 + 1;
          if (puVar6 == puVar11) goto LAB_05378000;
        }
        puVar5 = puVar11;
        if (puVar6 == puVar11) break;
        do {
          puVar5 = puVar5 + 1;
          if (puVar6 == puVar5) break;
          lVar3 = FUN_0536f460(uVar10,*puVar5);
        } while (iVar14 <= *(int *)(lVar3 + 4));
        eastl::reverse<unsigned_long*>(puVar11,puVar5);
      }
LAB_05378000:
    }
  }
LAB_0537800c:
  FUN_0536f6c4(*(undefined8 *)param_1,param_1 + 8);
  uVar10 = local_b0;
  lVar3 = FUN_0536f4e4(local_b0,local_a8);
  if (lVar3 != 0) {
    lVar12 = 0;
    do {
      lVar1 = lVar12 + 1;
      puVar7 = (undefined8 *)FUN_0536f4f0(uVar10,lVar12);
      pRVar8 = (RunInfo *)FUN_0536f460(*(undefined8 *)(this + 0x730),*puVar7);
      eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::push_back
                ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)param_1,
                 pRVar8);
      uVar10 = local_b0;
      lVar12 = lVar1;
    } while (lVar1 != lVar3);
  }
  eastl::fixed_vector<unsigned_long,16ul,true,eastl::allocator>::~fixed_vector
            ((fixed_vector<unsigned_long,16ul,true,eastl::allocator> *)&local_b0);
LAB_05378074:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::OrderGlyphs() */

void __thiscall EA::Text::Typesetter::OrderGlyphs(Typesetter *this)

{
  LineLayout *this_00;
  long lVar1;
  long lVar2;
  ulong uVar3;
  GlyphLayoutInfo *pGVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_90;
  undefined8 local_88;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x7b8] != (Typesetter)0x0) {
    uVar8 = *(undefined8 *)(this + 0x730);
    lVar1 = FUN_0536f44c(uVar8,*(undefined8 *)(this + 0x738));
    if (lVar1 != 0) {
      lVar7 = 0;
      do {
        lVar2 = FUN_0536f460(uVar8,lVar7);
        if ((*(uint *)(lVar2 + 4) & 1) != 0) {
          eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::fixed_vector
                    ((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)
                     &local_90);
          ReorderBidiRunInfoArray(this,(fixed_vector *)&local_90);
          lVar1 = FUN_0536f36c(*(undefined8 *)(this + 0x678),0);
          uVar8 = local_90;
          fVar12 = *(float *)(lVar1 + 8);
          lVar1 = FUN_0536f44c(local_90,local_88);
          if (lVar1 != 0) {
            this_00 = (LineLayout *)(this + 0x5d0);
            lVar7 = 0;
            while( true ) {
              lVar2 = FUN_0536f460(uVar8,lVar7);
              uVar8 = local_90;
              if (*(ulong *)(lVar2 + 8) < *(ulong *)(lVar2 + 0x10)) {
                uVar3 = LineLayout::GetGlyphIndexFromCharIndex(this_00,*(ulong *)(lVar2 + 8));
                pGVar4 = (GlyphLayoutInfo *)FUN_0536f36c(*(undefined8 *)(this + 0x678),uVar3);
                if (*(float *)(pGVar4 + 0x10) <= 0.0) {
                  fVar11 = *(float *)(pGVar4 + 8);
                  fVar9 = fVar11 + *(float *)(pGVar4 + 0x10);
                }
                else {
                  fVar11 = *(float *)(pGVar4 + 8);
                  fVar9 = fVar11;
                }
                uVar5 = LineLayout::GetGlyphIndexFromCharIndex(this_00,*(ulong *)(lVar2 + 0x10));
                lVar6 = FUN_0536f36c(*(undefined8 *)(this + 0x678),uVar5 - 1);
                if (*(float *)(lVar6 + 0x10) <= 0.0) {
                  fVar10 = *(float *)(lVar6 + 8);
                }
                else {
                  fVar10 = *(float *)(lVar6 + 0x10) + *(float *)(lVar6 + 8);
                }
                LineLayout::OffsetSegment(this_00,fVar12 - fVar11,0.0,uVar3,uVar5);
                if ((*(uint *)(lVar2 + 4) & 1) == 0) {
                  fVar12 = (fVar10 - fVar9) + fVar12;
                  uVar8 = local_90;
                }
                else {
                  fVar9 = (fVar10 - fVar9) + fVar12;
                  ReverseGlyphs(this,pGVar4,(GlyphLayoutInfo *)(lVar6 + 0x28),fVar12,fVar9);
                  fVar12 = fVar9;
                  uVar8 = local_90;
                }
              }
              if (lVar7 + 1 == lVar1) break;
              lVar7 = lVar7 + 1;
              local_90 = uVar8;
            }
          }
          eastl::fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator>::
          ~fixed_vector((fixed_vector<EA::Text::Typesetter::RunInfo,4ul,true,eastl::allocator> *)
                        &local_90);
          break;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EA::Text::Typesetter::FinalizeLine() */

void __thiscall EA::Text::Typesetter::FinalizeLine(Typesetter *this)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  Validate(this);
  if ((*(int *)(this + 0x5c8) == 0) && (cVar1 = IsScheduleEmpty(this), cVar1 == '\0')) {
    ProcessLine(this);
  }
  LineLayout::CalculateVisibleSpace((LineLayout *)(this + 0x5d0));
  uVar6 = *(ulong *)(this + 0x6f0);
  uVar2 = FUN_0536f31c(*(undefined8 *)(this + 0x5d8),*(undefined8 *)(this + 0x5e0));
  if (uVar6 != uVar2) {
    uVar2 = LineLayout::GetGlyphIndexFromCharIndex((LineLayout *)(this + 0x5d0),uVar6);
    eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x628),uVar2);
    eastl::
    vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    resize((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x650),uVar2);
    eastl::
    vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x678),uVar2);
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x6c8),uVar2);
    eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x5d8),uVar6);
    eastl::
    vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x600),uVar6);
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::resize((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0x6a0),uVar6);
    uVar7 = *(undefined8 *)(this + 0x730);
    lVar3 = FUN_0536f44c(uVar7,*(undefined8 *)(this + 0x738));
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        lVar4 = FUN_0536f460(uVar7,lVar5);
        if (uVar6 <= *(ulong *)(lVar4 + 0x10)) {
          *(ulong *)(lVar4 + 0x10) = uVar6;
          eastl::
          vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
          ::resize((vector<EA::Text::Typesetter::RunInfo,eastl::fixed_vector_allocator<24ul,4ul,8ul,0ul,true,eastl::allocator>>
                    *)(this + 0x730),lVar5 + 1);
          break;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar3);
    }
  }
  *(undefined8 *)(this + 0x710) = 1;
  lVar3 = ScheduleLocation::GetCharIndex((ScheduleLocation *)(this + 0x568));
  GetScheduleLocationFromCharIndex
            (this,lVar3 + *(long *)(this + 0x6f0),(ScheduleLocation *)(this + 0x580),false);
  *(undefined8 *)(this + 0x598) = *(undefined8 *)(this + 0x580);
  *(undefined8 *)(this + 0x5a0) = *(undefined8 *)(this + 0x588);
  *(undefined8 *)(this + 0x5a8) = *(undefined8 *)(this + 0x590);
  *(long *)(this + 0x728) = *(long *)(this + 0x728) + *(long *)(this + 0x6f0);
  Validate(this);
  if ((this[0x53c] != (Typesetter)0x0) && (*(float *)(this + 0x530) < *(float *)(this + 0x700))) {
    SubstituteEllipsis(this);
  }
  AdjustWhitespaceEmbedding(this);
  AdjustPositioning(this);
  OrderGlyphs(this);
  *(undefined4 *)(this + 0x5c8) = 1;
  Validate(this);
  return;
}


/* EA::Text::Typesetter::LayoutLine(char16_t const*, unsigned long, float, float,
   EA::Text::TextStyle const*) */

void __thiscall
EA::Text::Typesetter::LayoutLine
          (Typesetter *this,wchar16 *param_1,ulong param_2,float param_3,float param_4,
          TextStyle *param_5)

{
  Reset(this,true);
  SetLayoutSpace(this,100000.0,param_3,param_4);
  SetDefaultTextStyle(this,param_5);
  *(undefined4 *)(this + 0x474) = 0;
  AddTextRun(this,param_1,param_2);
  FinalizeLine(this);
  LineLayout::Offset((LineLayout *)(this + 0x5d0),0.0,0.0);
  FUN_0536f2f4(*(undefined8 *)(this + 0x628),*(undefined8 *)(this + 0x630));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::LayoutParagraph(char16_t const*, unsigned long, float, float, float, float,
   EA::Text::TextStyle const*, EA::Text::LineLayout&, int) */

void __thiscall
EA::Text::Typesetter::LayoutParagraph
          (Typesetter *this,wchar16 *param_1,ulong param_2,float param_3,float param_4,float param_5
          ,float param_6,TextStyle *param_7,LineLayout *param_8,int param_9)

{
  LineLayout *pLVar1;
  LineLayout *this_00;
  Typesetter TVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  LineLayout aLStack_160 [344];
  long local_8;
  
  fVar9 = param_5 - param_3;
  local_8 = ___stack_chk_guard;
  LineLayout::LineLayout(aLStack_160,*(ICoreAllocator **)param_8);
  pLVar1 = (LineLayout *)(this + 0x5d0);
  TVar2 = this[0x4a9];
  this[0x4a9] = (Typesetter)0x1;
  this_00 = aLStack_160;
  if (pLVar1 != param_8) {
    this_00 = param_8;
  }
  LineLayout::Clear(SUB81(pLVar1,0));
  Reset(this,true);
  SetLayoutSpace(this,fVar9,param_3,0.0);
  SetDefaultTextStyle(this,param_7);
  AddTextRun(this,param_1,param_2);
  if (((param_2 != 0) && (*(int *)(param_7 + 0x288) == 3)) && (param_1[param_2 - 1] != L'\n')) {
    AddParagraphBreak(this);
  }
  fVar10 = param_6 - param_4;
  iVar3 = GetLineState(this);
  if (iVar3 == 2) {
    fVar8 = 0.0;
LAB_05378718:
    iVar3 = *(int *)(param_7 + 0x28c);
    if (iVar3 != 1) goto LAB_05378724;
LAB_05378874:
    param_4 = param_4 + (float)(int)(*(float *)(this + 0x4ac) * 0.5 * (fVar10 - fVar8));
  }
  else {
    fVar8 = 0.0;
    if (0.0 < fVar10) {
      do {
        FinalizeLine(this);
        fVar6 = (float)(int)(*(float *)(this + 0x708) + 0.5);
        fVar7 = (float)(int)(*(float *)(this + 0x708) - *(float *)(this + 0x70c));
        fVar8 = fVar8 + fVar7;
        *(float *)(this + 0x708) = fVar6;
        *(float *)(this + 0x70c) = fVar6 - fVar7;
        SetLayoutSpace(this,fVar9,param_3,fVar8 * *(float *)(this + 0x4ac));
        LineLayout::Append(this_00,pLVar1,param_9);
        *(long *)(this_00 + 0x140) = *(long *)(this_00 + 0x140) + 1;
        NextLine(this,false);
        iVar3 = GetLineState(this);
      } while (iVar3 != 2);
      goto LAB_05378718;
    }
    FinalizeLine(this);
    fVar6 = (float)(int)(*(float *)(this + 0x708) + 0.5);
    fVar8 = (float)(int)(*(float *)(this + 0x708) - *(float *)(this + 0x70c));
    *(float *)(this + 0x708) = fVar6;
    *(float *)(this + 0x70c) = fVar6 - fVar8;
    SetLayoutSpace(this,fVar9,param_3,fVar8 * *(float *)(this + 0x4ac));
    LineLayout::Append(this_00,pLVar1,param_9);
    *(long *)(this_00 + 0x140) = *(long *)(this_00 + 0x140) + 1;
    NextLine(this,false);
    GetLineState(this);
    iVar3 = *(int *)(param_7 + 0x28c);
    if (iVar3 == 1) goto LAB_05378874;
LAB_05378724:
    if (iVar3 == 2) {
      LineLayout::Offset(this_00,0.0,
                         param_4 + (float)(int)((fVar10 - fVar8) * *(float *)(this + 0x4ac)));
      goto joined_r0x053787d0;
    }
  }
  LineLayout::Offset(this_00,0.0,param_4);
joined_r0x053787d0:
  if (param_8 == pLVar1) {
    LineLayout::Clear(SUB81(param_8,0));
    LineLayout::Append(aLStack_160,param_8,0x7f);
  }
  uVar5 = *(undefined8 *)(param_8 + 0x60);
  uVar4 = *(undefined8 *)(param_8 + 0x58);
  this[0x4a9] = TVar2;
  uVar4 = FUN_0536f2f4(uVar4,uVar5);
  LineLayout::~LineLayout(aLStack_160);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::FinalizeParagraph(float) */

void __thiscall EA::Text::Typesetter::FinalizeParagraph(Typesetter *this,float param_1)

{
  Typesetter TVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_16c;
  float local_168;
  float local_164;
  LineLayout aLStack_160 [320];
  long local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetLayoutSpace(this,&local_16c,&local_168,&local_164);
  fVar6 = 0.0;
  iVar2 = GetLineState(this);
  LineLayout::LineLayout(aLStack_160,*(ICoreAllocator **)(this + 0x5d0));
  TVar1 = this[0x4a9];
  if (iVar2 != 2) {
    do {
      FinalizeLine(this);
      fVar4 = *(float *)(this + 0x708);
      fVar5 = (float)(int)(fVar4 + 0.5);
      *(float *)(this + 0x708) = fVar5;
      fVar4 = (float)(int)(fVar4 - *(float *)(this + 0x70c));
      fVar6 = fVar6 + fVar4;
      *(float *)(this + 0x70c) = fVar5 - fVar4;
      LineLayout::Append(aLStack_160,(LineLayout *)(this + 0x5d0),0x7f);
      local_20 = local_20 + 1;
      NextLine(this,false);
      iVar2 = GetLineState(this);
      local_164 = local_164 + *(float *)(this + 0x4ac) * fVar4;
      SetLayoutSpace(this,local_16c,local_168,local_164);
      if (iVar2 == 2) break;
    } while (fVar6 + fVar4 < param_1);
  }
  lVar3 = GetDefaultTextStyle(this);
  if (*(int *)(lVar3 + 0x28c) == 1) {
    fVar4 = (float)(int)(*(float *)(this + 0x4ac) * 0.5 * (param_1 - fVar6));
  }
  else {
    fVar4 = 0.0;
    if (*(int *)(lVar3 + 0x28c) == 2) {
      fVar4 = (float)(int)((param_1 - fVar6) * *(float *)(this + 0x4ac));
    }
  }
  LineLayout::Offset(aLStack_160,0.0,fVar4);
  LineLayout::operator=((LineLayout *)(this + 0x5d0),aLStack_160);
  this[0x4a9] = TVar1;
  LineLayout::~LineLayout(aLStack_160);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::GetParagraphSize(char16_t const*, unsigned long, EA::Text::TextStyle
   const*, float) */

void __thiscall
EA::Text::Typesetter::GetParagraphSize
          (Typesetter *this,wchar16 *param_1,ulong param_2,TextStyle *param_3,float param_4)

{
  int iVar1;
  LineLayout *this_00;
  float *pfVar2;
  float fVar3;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  this_00 = (LineLayout *)GetLineLayout(this);
  Reset(this,true);
  if (param_4 <= 0.0) {
    param_4 = 10000.0;
  }
  SetLayoutSpace(this,param_4,0.0,0.0);
  SetDefaultTextStyle(this,param_3);
  AddTextRun(this,param_1,param_2);
  while (iVar1 = GetLineState(this), iVar1 != 2) {
    FinalizeLine(this);
    fVar3 = (float)LineLayout::GetLineHeight(this_00);
    fStack_c = fStack_c + fVar3;
    pfVar2 = eastl::max_alt<float>(&local_10,(float *)(this_00 + 0x134));
    local_10 = *pfVar2;
    NextLine(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,fStack_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AppendArabicGlyphCluster(unsigned long, unsigned long, char16_t const*,
   unsigned long, unsigned short const*, unsigned long, int, EA::Text::OTF const*) */

void __thiscall
EA::Text::Typesetter::AppendArabicGlyphCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong param_4,
          ushort *param_5,ulong param_6,int param_7,OTF *param_8)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ushort local_a;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_6 != 0) {
    uVar3 = 0;
    do {
      local_a = param_5[uVar3];
      eastl::
      vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      push_back((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x628),&local_a);
      eastl::
      vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::push_back((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x650));
      pbVar2 = (byte *)FUN_0537d850(*(undefined8 *)(this + 0x658));
      bVar1 = (byte)(((uint)uVar3 & 7) << 5);
      *pbVar2 = *pbVar2 & 0x10 | bVar1;
      uVar3 = uVar3 + 1;
      pbVar2[1] = pbVar2[1] & 0x80 | (byte)((param_7 & 1U) << 6);
      *pbVar2 = bVar1 | (*param_3 != L'￼') << 4;
      bVar1 = OTFClassDef::GetGlyphClass((OTFClassDef *)(param_8 + 0xb0),local_a);
      pbVar2[3] = bVar1;
    } while (uVar3 != param_6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::CompleteLineLayoutArrays(unsigned long, unsigned long, unsigned long) */

void __thiscall
EA::Text::Typesetter::CompleteLineLayoutArrays
          (Typesetter *this,ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  short *psVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  resize((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
         )(this + 0x6a0),param_2);
  uVar1 = FUN_0537d80c(*(undefined8 *)(this + 0x650),*(undefined8 *)(this + 0x658));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  resize((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *
         )(this + 0x6c8),uVar1);
  uVar1 = FUN_0537d80c(*(undefined8 *)(this + 0x650),*(undefined8 *)(this + 0x658));
  eastl::
  vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::resize((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x678),uVar1);
  uVar8 = *(undefined8 *)(this + 0x650);
  uVar1 = FUN_0537d80c(uVar8,*(undefined8 *)(this + 0x658));
  if (uVar1 <= param_3) {
    return;
  }
  do {
    uVar10 = 0;
    pbVar2 = (byte *)FUN_0537d798(uVar8,param_3);
    puVar3 = (undefined8 *)FUN_0537d818(*(undefined8 *)(this + 0x678),param_3);
    uVar7 = (ulong)pbVar2[1];
    if ((pbVar2[1] >> 4 & 3) != 0) {
      do {
        while( true ) {
          uVar7 = uVar10 + param_1;
          puVar6 = (ulong *)FUN_0537d824(*(undefined8 *)(this + 0x6a0),uVar7);
          *puVar6 = param_3 & 0xffffffff;
          psVar4 = (short *)FUN_0537d82c(*(undefined8 *)(this + 0x5d8),uVar7);
          if (*psVar4 != -4) break;
          uVar10 = uVar10 + 1;
          lVar5 = GetScheduleItemFromCharIndex(this,uVar7,true);
          *puVar3 = *(undefined8 *)(lVar5 + 0x20);
          uVar7 = (ulong)pbVar2[1];
          *pbVar2 = *pbVar2 | 0x10;
          if (((ulong)(pbVar2[1] >> 4) & 3) <= uVar10) goto LAB_0537ed38;
        }
        uVar10 = uVar10 + 1;
        lVar5 = FUN_0537d834(*(undefined8 *)(this + 0x600),uVar7);
        *puVar3 = *(undefined8 *)(lVar5 + 8);
        *pbVar2 = *pbVar2 & 0xef;
        uVar7 = (ulong)pbVar2[1];
      } while (uVar10 < ((ulong)(pbVar2[1] >> 4) & 3));
    }
LAB_0537ed38:
    uVar10 = 0;
    if ((uVar7 & 7) != 0) {
      uVar8 = *(undefined8 *)(this + 0x6c8);
      uVar9 = 0;
      do {
        lVar5 = uVar9 + param_3;
        uVar9 = uVar9 + 1;
        puVar6 = (ulong *)FUN_0537d824(uVar8,lVar5);
        *puVar6 = param_1 & 0xffffffff;
        uVar7 = (ulong)pbVar2[1];
        uVar10 = uVar7 & 7;
      } while (uVar9 < uVar10);
    }
    param_3 = param_3 + uVar10;
    param_1 = param_1 + (uVar7 >> 4 & 3);
    if (uVar1 <= param_3) {
      return;
    }
    uVar8 = *(undefined8 *)(this + 0x650);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ShapeArabic(unsigned long, unsigned long) */

void __thiscall EA::Text::Typesetter::ShapeArabic(Typesetter *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  OTF *this_00;
  ulong uVar4;
  AnalysisInfo *pAVar5;
  ulong uVar6;
  ulong uVar7;
  wchar16 *pwVar8;
  GlyphInfo *pGVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_760;
  ulong local_758;
  wchar16 awStack_750 [32];
  fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator> afStack_710 [1800];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0537d834(*(undefined8 *)(this + 0x600),0);
  this_00 = (OTF *)(**(code **)(**(long **)(lVar3 + 8) + 0xc0))(*(long **)(lVar3 + 8));
  if ((this_00 == (OTF *)0x0) ||
     (cVar2 = OTF::IsScriptSupported(this_00,"arab",(char *)0x0), cVar2 == '\0')) {
    ShapeGeneral(this,param_1,param_2);
  }
  else {
    uVar4 = LineLayout::GetGlyphIndexFromCharIndex((LineLayout *)(this + 0x5d0),param_1);
    if (param_1 < param_2) {
      uVar11 = param_1;
      do {
        uVar10 = 0;
        pAVar5 = (AnalysisInfo *)FUN_0537d834(*(undefined8 *)(this + 0x600),uVar11);
        local_760 = 0;
        uVar6 = GetGeneralCharCluster(this,uVar11,param_2,awStack_750,&local_760);
        local_758 = 0;
        if (local_760 != 0) {
          do {
            uVar1 = local_758;
            pwVar8 = awStack_750 + uVar10;
            lVar3 = local_758 * 2;
            uVar7 = GetGlyphsForChar(this,pwVar8,local_760 - uVar10,pAVar5,
                                     (ushort *)(afStack_710 + lVar3),&local_758,(wchar16 *)0x0,0);
            uVar10 = uVar10 + uVar7;
            AppendArabicGlyphCluster
                      (this,param_1,uVar6,pwVar8,uVar7,(ushort *)(afStack_710 + lVar3),
                       local_758 - uVar1,(int)((long)((ulong)(byte)pAVar5[0x11] << 0x38) >> 0x3c),
                       this_00);
          } while (uVar10 < local_760);
        }
        uVar11 = uVar11 + uVar6;
      } while (uVar11 < param_2);
    }
    eastl::fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator>::fixed_vector
              (afStack_710);
    SetupArabicGsubLookup((fixed_vector *)afStack_710,this_00);
    pwVar8 = (wchar16 *)FUN_0537d82c(*(undefined8 *)(this + 0x5d8),param_1);
    pGVar9 = (GlyphInfo *)FUN_0537d798(*(undefined8 *)(this + 0x650),uVar4);
    AssignArabicCharProperties(pwVar8,param_2 - param_1,pGVar9);
    DoGlyphSubstitution((LineLayout *)(this + 0x5d0),uVar4,(fixed_vector *)afStack_710,this_00);
    CompleteLineLayoutArrays(this,param_1,param_2,uVar4);
    PlaceGeneralGlyphCluster(this,param_1,param_2 - param_1);
    eastl::fixed_vector<EA::Text::FeatureLookup,10ul,true,eastl::allocator>::~fixed_vector
              (afStack_710);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::PlaceGeneralGlyphCluster(unsigned long, unsigned long) */

void __thiscall
EA::Text::Typesetter::PlaceGeneralGlyphCluster(Typesetter *this,ulong param_1,ulong param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  char cVar3;
  long *plVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  GlyphLayoutInfo *pGVar7;
  ulong uVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong local_30;
  ulong local_28;
  float local_20 [4];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)FUN_0537fa50(*(undefined8 *)(this + 0x600));
  fVar12 = *(float *)(*plVar4 + 0x2b0);
  LineLayout::GetGlyphRangeFromCharRange
            ((LineLayout *)(this + 0x5d0),param_1,param_1 + param_2,&local_30,&local_28);
  if (local_30 < local_28) {
    uVar8 = local_30;
    uVar9 = 0;
    do {
      uVar2 = local_30;
      puVar5 = (undefined2 *)FUN_0537fa5c(*(undefined8 *)(this + 0x628),uVar8);
      uVar1 = *puVar5;
      pbVar6 = (byte *)FUN_0537fa64(*(undefined8 *)(this + 0x650),uVar8);
      pGVar7 = (GlyphLayoutInfo *)FUN_0537fa6c(*(undefined8 *)(this + 0x678),uVar8);
      if (uVar8 == uVar2) {
LAB_0537fc08:
        if ((*pbVar6 >> 4 & 1) != 0) goto LAB_0537fb58;
        (**(code **)(**(long **)pGVar7 + 0x70))(*(long **)pGVar7,uVar1,(GlyphMetrics *)local_20);
      }
      else {
        if ((*pbVar6 >> 4 & 1) == 0) {
          cVar3 = (**(code **)(**(long **)pGVar7 + 0x90))
                            (*(long **)pGVar7,uVar9,uVar1,(GlyphMetrics *)local_20,
                             pbVar6[1] >> 6 & 1,1);
          if (cVar3 != '\0') {
            *(float *)(this + 0x7bc) = *(float *)(this + 0x7bc) + local_20[0];
          }
          goto LAB_0537fc08;
        }
LAB_0537fb58:
        GetObjectMetrics(this,uVar8,(GlyphMetrics *)local_20);
      }
      SetGlyphLayoutInfo(this,pGVar7,*(float *)(this + 0x7bc),(GlyphMetrics *)local_20);
      if ((*pbVar6 & 0xe0) == 0) {
        local_10 = fVar12 + local_10;
      }
      fVar10 = local_10 + *(float *)(this + 0x7bc);
      *(float *)(this + 0x7bc) = fVar10;
      fVar11 = *(float *)(this + 0x7c0);
      if (*(float *)(this + 0x7c0) < fVar10) {
        *(float *)(this + 0x7c0) = fVar10;
        fVar11 = fVar10;
      }
      uVar8 = uVar8 + 1;
      *(float *)(this + 0x7bc) = fVar11;
      uVar9 = uVar1;
    } while (uVar8 < local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Typesetter::GetGeneralCharCluster(unsigned long, unsigned long, char16_t*, unsigned
   long&) */

void __thiscall
EA::Text::Typesetter::GetGeneralCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong *param_4)

{
  char cVar1;
  wchar16 wVar2;
  wchar16 *pwVar3;
  long lVar4;
  
  pwVar3 = (wchar16 *)FUN_0537faa0(*(undefined8 *)(this + 0x5d8));
  wVar2 = *pwVar3;
  cVar1 = IsCharZeroWidth(wVar2);
  if (*(int *)(this + 0x494) == 1) {
    wVar2 = *(wchar16 *)(this + 0x53e);
    *param_4 = 1;
    *param_3 = wVar2;
    return;
  }
  if (wVar2 == L'\xa0') {
    wVar2 = L' ';
  }
  else if ((cVar1 == '\0') || (this[0x4b2] == (Typesetter)0x0)) {
    if ((wVar2 == L'\n') ||
       (((wVar2 == L'\r' || ((ushort)(wVar2 + L'\xdfd8') < 2)) || (wVar2 == L'\x85')))) {
      *param_4 = 1;
      *param_3 = L'\x200b';
      return;
    }
    if ((this[0x4b1] == (Typesetter)0x0) || (cVar1 = IsCharCategory(wVar2,2), cVar1 == '\0')) {
      lVar4 = FUN_0537fa50(*(undefined8 *)(this + 0x600),param_1);
      if ((*(byte *)(lVar4 + 0x11) >> 4 & 1) != 0) {
        wVar2 = GetMirrorChar(wVar2);
      }
    }
    else {
      wVar2 = L'\xfeff';
    }
  }
  else {
    wVar2 = L'_';
  }
  *param_4 = 1;
  *param_3 = wVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AppendGeneralGlyphCluster(unsigned long, unsigned long, char16_t const*,
   unsigned long, unsigned short const*, unsigned long, int) */

void __thiscall
EA::Text::Typesetter::AppendGeneralGlyphCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong param_4,
          ushort *param_5,ulong param_6,int param_7)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_28 [2];
  ushort local_12;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_10 = FUN_0537fa78(*(undefined8 *)(this + 0x628),*(undefined8 *)(this + 0x630));
  while (uVar1 = FUN_0537fa84(*(undefined8 *)(this + 0x6a0),*(undefined8 *)(this + 0x6a8)),
        uVar1 < param_2 + local_28[0]) {
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::push_back((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x6a0),&local_10);
  }
  if (param_6 != 0) {
    lVar5 = 0;
    while( true ) {
      local_12 = param_5[lVar5];
      lVar2 = FUN_0537fa50(*(undefined8 *)(this + 0x600),local_28[0]);
      uVar6 = *(undefined8 *)(lVar2 + 8);
      eastl::
      vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
      push_back((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x628),&local_12);
      eastl::
      vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::push_back((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x650));
      pbVar3 = (byte *)FUN_0537fa90(*(undefined8 *)(this + 0x658));
      eastl::
      vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
      ::push_back((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x678));
      puVar4 = (undefined8 *)FUN_0537fa98(*(undefined8 *)(this + 0x680));
      *pbVar3 = *pbVar3 & 0x10 | (byte)(((uint)lVar5 & 7) << 5);
      pbVar3[1] = pbVar3[1] & 0x80 | (byte)((param_7 & 1U) << 6);
      if (*param_3 == L'￼') {
        lVar2 = GetScheduleItemFromCharIndex(this,local_28[0],true);
        *puVar4 = *(undefined8 *)(lVar2 + 0x20);
        *pbVar3 = *pbVar3 | 0x10;
        eastl::
        vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
        push_back((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x6c8),local_28);
      }
      else {
        *puVar4 = uVar6;
        *pbVar3 = *pbVar3 & 0xef;
        eastl::
        vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
        push_back((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                   *)(this + 0x6c8),local_28);
      }
      if (lVar5 + 1U == param_6) break;
      lVar5 = lVar5 + 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AppendGeneralCharCluster(unsigned long, unsigned long, char16_t const*,
   unsigned long) */

void __thiscall
EA::Text::Typesetter::AppendGeneralCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong param_4)

{
  ushort *puVar1;
  ulong uVar2;
  AnalysisInfo *pAVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_50;
  ushort auStack_48 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar3 = (AnalysisInfo *)FUN_0537fa50(*(undefined8 *)(this + 0x600));
  local_50 = 0;
  if (param_4 != 0) {
    uVar5 = 0;
    do {
      uVar2 = local_50;
      puVar1 = auStack_48 + local_50;
      uVar4 = GetGlyphsForChar(this,param_3 + uVar5,param_4 - uVar5,pAVar3,puVar1,&local_50,
                               (wchar16 *)0x0,0);
      AppendGeneralGlyphCluster
                (this,param_1,param_2,param_3 + uVar5,uVar4,puVar1,local_50 - uVar2,
                 (int)((long)((ulong)(byte)pAVar3[0x11] << 0x38) >> 0x3c));
      uVar2 = uVar5 + param_1;
      uVar5 = uVar5 + uVar4;
      PlaceGeneralGlyphCluster(this,uVar2,uVar4);
    } while (uVar5 < param_4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_50);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ShapeGeneral(unsigned long, unsigned long) */

void __thiscall EA::Text::Typesetter::ShapeGeneral(Typesetter *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  wchar16 awStack_48 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < param_2) {
    do {
      uVar2 = GetGeneralCharCluster(this,param_1,param_2,awStack_48,&local_50);
      uVar1 = param_1 + uVar2;
      AppendGeneralCharCluster(this,param_1,uVar2,awStack_48,local_50);
      param_1 = uVar1;
    } while (uVar1 < param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AppendHangulCharCluster(unsigned long, unsigned long, char16_t const*,
   unsigned long, int) */

void __thiscall
EA::Text::Typesetter::AppendHangulCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong param_4,int param_5)

{
  bool bVar1;
  wchar16 wVar2;
  wchar16 wVar3;
  AnalysisInfo *pAVar4;
  long lVar5;
  ulong uVar6;
  wchar16 *pwVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  wchar16 local_56;
  wchar16 local_54 [2];
  ulong local_50;
  ushort auStack_48 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar4 = (AnalysisInfo *)FUN_053804ac(*(undefined8 *)(this + 0x600));
  local_50 = 0;
  uVar6 = param_4;
  uVar9 = param_4;
  if (param_5 == 2) {
    local_54[1] = 0x25cc;
    if (param_4 != 0) {
      uVar8 = 0;
      uVar9 = 0;
      do {
        pwVar7 = L"·";
        if (param_3[uVar8] != L'〮') {
          pwVar7 = L":";
        }
        lVar5 = GetGlyphsForChar(this,param_3 + uVar8,param_4 - uVar8,pAVar4,auStack_48 + local_50,
                                 &local_50,pwVar7,1);
        uVar9 = uVar9 + lVar5;
        uVar8 = uVar8 + uVar9;
        GetGlyphsForChar(this,local_54 + 1,1,pAVar4,auStack_48 + local_50,&local_50,L"○ _o",4);
        uVar6 = local_50;
      } while (uVar8 < param_4);
    }
    goto LAB_05380548;
  }
  if (param_5 == 3) {
    if (param_4 != 0) {
      uVar8 = 0;
      uVar9 = 0;
      do {
        lVar5 = GetGlyphsForChar(this,param_3 + uVar8,param_4 - uVar8,pAVar4,auStack_48 + local_50,
                                 &local_50,(wchar16 *)0x0,0);
        uVar9 = uVar9 + lVar5;
        uVar8 = uVar8 + uVar9;
        uVar6 = local_50;
      } while (uVar8 < param_4);
    }
    goto LAB_05380548;
  }
  if (param_5 != 1) {
    uVar6 = 0;
    uVar9 = 0;
    goto LAB_05380548;
  }
  local_56 = param_3[param_4 - 1];
  bVar1 = (ushort)local_56 - 0x302e < 2;
  uVar8 = param_4 - bVar1;
  if (uVar8 < 3) {
    if (uVar8 == 2) {
      wVar2 = *param_3;
      if (((ushort)wVar2 - 0x1100 < 0x13) && (wVar3 = param_3[1], (ushort)wVar3 - 0x1161 < 0x15)) {
LAB_0538083c:
        uVar9 = 2;
        local_54[0] = ((wVar2 + L'\xef00') * 0x15 + wVar3 + L'\xee9f') * 0x1c + L'가';
        goto LAB_0538086c;
      }
      goto LAB_05380618;
    }
    if (uVar8 != 0) goto LAB_05380618;
    uVar9 = 0;
LAB_053808b8:
    local_54[1] = 0x3164;
    lVar5 = GetGlyphsForChar(this,local_54 + 1,1,pAVar4,auStack_48,&local_50,L"○ _o",4);
    uVar9 = uVar9 + lVar5;
    uVar6 = local_50;
  }
  else {
    wVar2 = *param_3;
    if ((ushort)wVar2 - 0x1100 < 0x13) {
      wVar3 = param_3[1];
      if (0x14 < (ushort)wVar3 - 0x1161) goto LAB_05380618;
      if (0x1a < (ushort)param_3[2] - 0x11a8) goto LAB_0538083c;
      uVar9 = 3;
      local_54[0] = param_3[2] + L'驙' +
                    ((short)((ushort)wVar2 - 0x1100) * 0x15 + (short)((ushort)wVar3 - 0x1161)) *
                    0x1c;
LAB_0538086c:
      GetGlyphsForChar(this,local_54,1,pAVar4,auStack_48,&local_50,(wchar16 *)0x0,0);
      uVar6 = local_50;
      if (uVar9 < uVar8) goto LAB_05380624;
    }
    else {
LAB_05380618:
      uVar9 = 0;
LAB_05380624:
      uVar6 = local_50;
      uVar10 = uVar9;
      do {
        while (1 < (ushort)(param_3[uVar10] + L'\xeea1')) {
          lVar5 = GetGlyphsForChar(this,param_3 + uVar10,uVar8 - uVar10,pAVar4,auStack_48 + uVar6,
                                   &local_50,(wchar16 *)0x0,0);
          uVar9 = uVar9 + lVar5;
          uVar10 = uVar10 + uVar9;
          uVar6 = local_50;
          if (uVar8 <= uVar10) goto LAB_05380694;
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + uVar9;
      } while (uVar10 < uVar8);
    }
LAB_05380694:
    if (uVar6 == 0) goto LAB_053808b8;
  }
  if (bVar1) {
    if (local_56 == L'〮') {
      pwVar7 = L"·";
    }
    else {
      pwVar7 = L":";
    }
    lVar5 = GetGlyphsForChar(this,&local_56,1,pAVar4,auStack_48 + uVar6,&local_50,pwVar7,1);
    uVar6 = local_50;
    uVar9 = uVar9 + lVar5;
  }
LAB_05380548:
  AppendGeneralGlyphCluster
            (this,param_1,param_2,param_3,uVar9,auStack_48,uVar6,
             (int)((long)((ulong)(byte)pAVar4[0x11] << 0x38) >> 0x3c));
  PlaceGeneralGlyphCluster(this,param_1,uVar9);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_50);
  }
  return;
}


/* EA::Text::Typesetter::GetHangulCharCluster(unsigned long, unsigned long, char16_t*, unsigned
   long&, int&) */

void __thiscall
EA::Text::Typesetter::GetHangulCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong *param_4,int *param_5
          )

{
  undefined8 uVar1;
  wchar16 *pwVar2;
  
  uVar1 = *(undefined8 *)(this + 0x5d8);
  *param_5 = 3;
  pwVar2 = (wchar16 *)FUN_053804b8(uVar1);
  *param_3 = *pwVar2;
  *param_4 = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ShapeHangul(unsigned long, unsigned long) */

void __thiscall EA::Text::Typesetter::ShapeHangul(Typesetter *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int local_54;
  ulong local_50;
  wchar16 awStack_48 [32];
  long local_8;
  
  local_54 = 0;
  local_8 = ___stack_chk_guard;
  if (param_1 < param_2) {
    do {
      uVar2 = GetHangulCharCluster(this,param_1,param_2,awStack_48,&local_50,&local_54);
      uVar1 = param_1 + uVar2;
      AppendHangulCharCluster(this,param_1,uVar2,awStack_48,local_50,local_54);
      param_1 = uVar1;
    } while (uVar1 < param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::GetHebrewGlyphsForChars(char16_t const*, unsigned long,
   EA::Text::AnalysisInfo const*, unsigned short*, unsigned long&) */

void __thiscall
EA::Text::Typesetter::GetHebrewGlyphsForChars
          (Typesetter *this,wchar16 *param_1,ulong param_2,AnalysisInfo *param_3,ushort *param_4,
          ulong *param_5)

{
  wchar16 wVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  wchar16 local_48 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_5 = 0;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      wVar1 = param_1[uVar3];
      if ((uVar3 == 0) && ((&DAT_05767a00)[(int)((ushort)wVar1 - 0x590)] == '\x02')) {
        uVar5 = uVar4 + 1;
        local_48[uVar4] = wVar1;
        local_48[uVar5] = L'◌';
      }
      else {
        local_48[uVar4] = wVar1;
        uVar5 = uVar4;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar5 + 1;
    } while (uVar3 != param_2);
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        lVar2 = GetGlyphsForChar(this,local_48 + uVar3,uVar4 - uVar3,param_3,param_4 + *param_5,
                                 param_5,L"○ _o",4);
        uVar3 = uVar3 + lVar2;
      } while (uVar3 < uVar4);
    }
    uVar3 = *param_5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AppendHebrewCharCluster(unsigned long, unsigned long, char16_t const*,
   unsigned long) */

void __thiscall
EA::Text::Typesetter::AppendHebrewCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  AnalysisInfo *pAVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_50;
  ushort auStack_48 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar3 = (AnalysisInfo *)FUN_05380a54(*(undefined8 *)(this + 0x600));
  local_50 = 0;
  if (param_4 != 0) {
    uVar5 = 0;
    do {
      uVar1 = local_50;
      cVar2 = IsCharHebrew(*param_3);
      if (cVar2 == '\0') {
        uVar4 = GetGlyphsForChar(this,param_3 + uVar5,param_4 - uVar5,pAVar3,auStack_48 + uVar1,
                                 &local_50,(wchar16 *)0x0,0);
      }
      else {
        uVar4 = GetHebrewGlyphsForChars
                          (this,param_3 + uVar5,param_4 - uVar5,pAVar3,auStack_48 + uVar1,&local_50)
        ;
      }
      AppendGeneralGlyphCluster
                (this,param_1,param_2,param_3 + uVar5,uVar4,auStack_48 + uVar1,local_50 - uVar1,
                 (int)((long)((ulong)(byte)pAVar3[0x11] << 0x38) >> 0x3c));
      uVar1 = uVar5 + param_1;
      uVar5 = uVar5 + uVar4;
      PlaceGeneralGlyphCluster(this,uVar1,uVar4);
    } while (uVar5 < param_4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_50);
  }
  return;
}


/* EA::Text::Typesetter::GetHebrewCharCluster(unsigned long, unsigned long, char16_t*, unsigned
   long&) */

ulong __thiscall
EA::Text::Typesetter::GetHebrewCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong *param_4)

{
  byte bVar1;
  wchar16 wVar2;
  char cVar3;
  byte bVar4;
  wchar16 *pwVar5;
  wchar16 *pwVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar8 = *(undefined8 *)(this + 0x5d8);
  *param_4 = 0;
  pwVar5 = (wchar16 *)FUN_05380a60(uVar8);
  uVar9 = 0;
  pwVar6 = (wchar16 *)FUN_05380a60(uVar8,param_2);
joined_r0x05380d88:
  if (pwVar5 < pwVar6) {
    wVar2 = *pwVar5;
    cVar3 = IsCharHebrew(wVar2);
    if (cVar3 != '\0') {
      do {
        if (uVar9 == 0) {
          bVar1 = (&DAT_05767a00)[(int)((ushort)wVar2 - 0x590)];
          if ((0xc >> (bVar1 & 0x1f) & 1U) != 0) {
            *param_4 = 1;
            *param_3 = wVar2;
            return 1;
          }
          *param_4 = 1;
          *param_3 = wVar2;
          uVar7 = 1;
          bVar4 = bVar1;
        }
        else {
          uVar7 = *param_4;
          bVar1 = (&DAT_05767a00)[(int)((ushort)*param_3 - 0x590)];
          bVar4 = (&DAT_05767a00)[(int)((ushort)wVar2 - 0x590)];
          if (uVar7 == 0) goto code_r0x05380dd4;
        }
        if (*(int *)(&DAT_05767a70 + ((ulong)bVar1 * 4 + (ulong)bVar4) * 4) == 0) {
          return uVar7;
        }
        uVar9 = uVar7 + 1;
        pwVar5 = pwVar5 + 1;
        *param_4 = uVar9;
        param_3[uVar7] = wVar2;
        if (pwVar6 <= pwVar5) {
          return uVar9;
        }
        if (0x1f < uVar9) {
          return uVar9;
        }
        wVar2 = *pwVar5;
        cVar3 = IsCharHebrew(wVar2);
        if (cVar3 == '\0') break;
      } while( true );
    }
    if (uVar9 == 0) {
      uVar9 = GetGeneralCharCluster(this,param_1,param_2,param_3,param_4);
      return uVar9;
    }
    uVar9 = *param_4;
  }
  return uVar9;
code_r0x05380dd4:
  *param_4 = 1;
  pwVar5 = pwVar5 + 1;
  *param_3 = wVar2;
  uVar9 = 1;
  goto joined_r0x05380d88;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ShapeHebrew(unsigned long, unsigned long) */

void __thiscall EA::Text::Typesetter::ShapeHebrew(Typesetter *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  wchar16 awStack_48 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < param_2) {
    do {
      uVar2 = GetHebrewCharCluster(this,param_1,param_2,awStack_48,&local_50);
      uVar1 = param_1 + uVar2;
      AppendHebrewCharCluster(this,param_1,uVar2,awStack_48,local_50);
      param_1 = uVar1;
    } while (uVar1 < param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ShapeIndic(unsigned long, unsigned long) */

void __thiscall EA::Text::Typesetter::ShapeIndic(Typesetter *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_50;
  wchar16 awStack_48 [32];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 < param_2) {
    do {
      uVar2 = GetGeneralCharCluster(this,param_1,param_2,awStack_48,&uStack_50);
      uVar1 = param_1 + uVar2;
      AppendGeneralCharCluster(this,param_1,uVar2,awStack_48,uStack_50);
      param_1 = uVar1;
    } while (uVar1 < param_2);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::GetThaiGlyphs(unsigned long, char16_t const*, unsigned long, unsigned
   short*) */

void __thiscall
EA::Text::Typesetter::GetThaiGlyphs
          (Typesetter *this,ulong param_1,wchar16 *param_2,ulong param_3,ushort *param_4)

{
  wchar16 *pwVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  ThaiCharAdjustment TVar6;
  wchar16 wVar7;
  AnalysisInfo *pAVar8;
  long lVar9;
  ushort *puVar11;
  ulong uVar12;
  ThaiCharAdjustment *this_00;
  wchar16 wVar13;
  wchar16 local_12;
  ulong local_10;
  long local_8;
  long lVar10;
  
  local_8 = ___stack_chk_guard;
  local_10 = 0;
  pAVar8 = (AnalysisInfo *)FUN_05380f88(*(undefined8 *)(this + 0x600));
  wVar7 = *param_2;
  cVar3 = IsCharThai(wVar7);
  if (cVar3 == '\0') {
    this_00 = (ThaiCharAdjustment *)&DAT_05768140;
    if (param_3 == 2) goto LAB_05381230;
LAB_05381168:
    if (param_3 != 3) {
      if (param_3 == 1) {
        cVar3 = IsThaiCharLayoutFlag(wVar7,0x3f0);
        if (cVar3 == '\0') {
          lVar9 = 0;
        }
        else {
          local_12 = L'◌';
          GetGlyphsForChar(this,&local_12,1,pAVar8,param_4,&local_10,L"○ _o",4);
          wVar7 = *param_2;
          lVar9 = local_10 << 1;
        }
        lVar10 = GetThaiTableIndex(wVar7);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar10 * 2),1,pAVar8,
                         (ushort *)((long)param_4 + lVar9),&local_10,(wchar16 *)0x0,0);
      }
      else {
        local_10 = GetThaiGlyphs(this,param_1,param_2,3,param_4);
        if (3 < param_3) {
          uVar12 = 3;
          do {
            uVar2 = local_10;
            pwVar1 = param_2 + uVar12;
            uVar12 = uVar12 + 1;
            lVar9 = GetThaiTableIndex(*pwVar1);
            GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4 + uVar2,
                             &local_10,(wchar16 *)0x0,0);
          } while (uVar12 != param_3);
        }
      }
      goto LAB_053811ec;
    }
    cVar3 = IsThaiCharLayoutFlag(wVar7,0xd);
    if (cVar3 == '\0') {
      cVar3 = IsThaiCharLayoutFlag(wVar7,2);
      if (cVar3 != '\0') {
        wVar13 = param_2[1];
        cVar3 = IsThaiCharLayoutFlag(wVar13,0x40);
        if ((cVar3 == '\0') || (cVar3 = IsThaiCharLayoutFlag(param_2[2],0x200), cVar3 == '\0'))
        goto LAB_0538166c;
        lVar9 = GetThaiTableIndex(wVar7);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                         (wchar16 *)0x0,0);
        bVar4 = ThaiCharAdjustment::shiftleft_tone_ad(this_00,(ulong)(byte)this_00[0x2a]);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + (ulong)bVar4 * 2),1,pAVar8,
                         param_4 + local_10,&local_10,(wchar16 *)0x0,0);
        uVar12 = GetThaiTableIndex(param_2[1]);
        bVar4 = ThaiCharAdjustment::shiftleft_tone_ad(this_00,uVar12);
        uVar12 = (ulong)bVar4;
        goto LAB_053813fc;
      }
LAB_05381448:
      cVar3 = IsThaiCharLayoutFlag(wVar7,1);
      if (cVar3 != '\0') {
        cVar3 = IsThaiCharLayoutFlag(param_2[1],0x20);
        if (cVar3 != '\0') {
          cVar3 = IsThaiCharLayoutFlag(param_2[2],0xc0);
          if (cVar3 != '\0') {
            uVar12 = GetThaiTableIndex(wVar7);
            goto LAB_05381844;
          }
LAB_053816bc:
          cVar3 = IsThaiCharLayoutFlag(wVar7,8);
          if (cVar3 == '\0') goto LAB_05381894;
        }
LAB_053816d0:
        lVar9 = 0;
        uVar12 = 0;
        do {
          pwVar1 = param_2 + lVar9;
          lVar9 = lVar9 + 1;
          lVar10 = GetThaiTableIndex(*pwVar1);
          GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar10 * 2),1,pAVar8,param_4 + uVar12,
                           &local_10,(wchar16 *)0x0,0);
          uVar12 = local_10;
        } while (lVar9 != 3);
        goto LAB_053811ec;
      }
LAB_053817cc:
      cVar3 = IsThaiCharLayoutFlag(wVar7,8);
      if (cVar3 == '\0') {
LAB_05381894:
        cVar3 = IsThaiCharLayoutFlag(wVar7,4);
        if (((cVar3 != '\0') && (cVar3 = IsThaiCharLayoutFlag(param_2[1],0x20), cVar3 != '\0')) &&
           (cVar3 = IsThaiCharLayoutFlag(param_2[2],0xc0), cVar3 != '\0')) {
          lVar9 = GetThaiTableIndex(wVar7);
          GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                           (wchar16 *)0x0,0);
          uVar12 = GetThaiTableIndex(param_2[1]);
          bVar4 = ThaiCharAdjustment::shiftdown_bv_bd(this_00,uVar12);
          uVar12 = (ulong)bVar4;
          lVar9 = local_10 << 1;
          goto LAB_05381874;
        }
        goto LAB_053816d0;
      }
      cVar3 = IsThaiCharLayoutFlag(param_2[1],0x20);
      if ((cVar3 == '\0') || (cVar3 = IsThaiCharLayoutFlag(param_2[2],0xc0), cVar3 == '\0'))
      goto LAB_053816d0;
      uVar12 = GetThaiTableIndex(wVar7);
      bVar4 = ThaiCharAdjustment::tailcutcons(this_00,uVar12);
      uVar12 = (ulong)bVar4;
LAB_05381844:
      GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + uVar12 * 2),1,pAVar8,param_4,&local_10,
                       (wchar16 *)0x0,0);
      uVar12 = GetThaiTableIndex(param_2[1]);
      lVar9 = local_10 * 2;
LAB_05381874:
      GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + uVar12 * 2),1,pAVar8,
                       (ushort *)((long)param_4 + lVar9),&local_10,(wchar16 *)0x0,0);
      wVar7 = param_2[2];
LAB_05381880:
      uVar12 = GetThaiTableIndex(wVar7);
      bVar4 = ThaiCharAdjustment::shiftdown_tone_ad(this_00,uVar12);
    }
    else {
      cVar3 = IsThaiCharLayoutFlag(param_2[1],0x40);
      if ((cVar3 != '\0') && (cVar3 = IsThaiCharLayoutFlag(param_2[2],0x200), cVar3 != '\0')) {
        lVar9 = GetThaiTableIndex(wVar7);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                         (wchar16 *)0x0,0);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + (ulong)(byte)this_00[0x2a] * 2),1,pAVar8,
                         param_4 + local_10,&local_10,(wchar16 *)0x0,0);
        uVar12 = GetThaiTableIndex(param_2[1]);
LAB_053813fc:
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + uVar12 * 2),1,pAVar8,param_4 + local_10,
                         &local_10,(wchar16 *)0x0,0);
        TVar6 = this_00[0x2b];
        goto LAB_053812d4;
      }
      cVar3 = IsThaiCharLayoutFlag(wVar7,2);
      if (cVar3 == '\0') goto LAB_05381448;
      wVar13 = param_2[1];
LAB_0538166c:
      cVar3 = IsThaiCharLayoutFlag(wVar13,0x10);
      if (cVar3 == '\0') {
        cVar3 = IsThaiCharLayoutFlag(wVar13,0x20);
        if (cVar3 == '\0') goto LAB_053817cc;
        cVar3 = IsThaiCharLayoutFlag(param_2[2],0xc0);
        if (cVar3 == '\0') goto LAB_053816a8;
        lVar9 = GetThaiTableIndex(wVar7);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                         (wchar16 *)0x0,0);
        lVar9 = GetThaiTableIndex(param_2[1]);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4 + local_10,
                         &local_10,(wchar16 *)0x0,0);
        uVar12 = GetThaiTableIndex(param_2[2]);
        bVar4 = ThaiCharAdjustment::shiftdownleft_tone_ad(this_00,uVar12);
      }
      else {
        cVar3 = IsThaiCharLayoutFlag(param_2[2],0xc0);
        if (cVar3 == '\0') {
          cVar3 = IsThaiCharLayoutFlag(wVar13,0x20);
          if (cVar3 != '\0') {
LAB_053816a8:
            cVar3 = IsThaiCharLayoutFlag(wVar7,1);
            if (cVar3 != '\0') goto LAB_053816bc;
          }
          goto LAB_053817cc;
        }
        lVar9 = GetThaiTableIndex(wVar7);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                         (wchar16 *)0x0,0);
        uVar12 = GetThaiTableIndex(param_2[1]);
        bVar4 = ThaiCharAdjustment::shiftleft_av(this_00,uVar12);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + (ulong)bVar4 * 2),1,pAVar8,
                         param_4 + local_10,&local_10,(wchar16 *)0x0,0);
        uVar12 = GetThaiTableIndex(param_2[2]);
        bVar4 = ThaiCharAdjustment::shiftleft_tone_ad(this_00,uVar12);
      }
    }
LAB_053819bc:
    GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + (ulong)bVar4 * 2),1,pAVar8,param_4 + local_10,
                     &local_10,(wchar16 *)0x0,0);
  }
  else {
    this_00 = (ThaiCharAdjustment *)&UNK_05768170;
    if (param_3 != 2) goto LAB_05381168;
LAB_05381230:
    cVar3 = IsThaiCharLayoutFlag(wVar7,0xd);
    puVar11 = param_4;
    if (cVar3 == '\0') {
      cVar3 = IsThaiCharLayoutFlag(wVar7,(uint)param_3);
      if (cVar3 == '\0') goto LAB_053814cc;
      cVar5 = IsThaiCharLayoutFlag(param_2[1],0x200);
      if (cVar5 == '\0') goto LAB_05381954;
      lVar9 = GetThaiTableIndex(wVar7);
      GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                       (wchar16 *)0x0,0);
      TVar6 = (ThaiCharAdjustment)
              ThaiCharAdjustment::shiftleft_tone_ad(this_00,(ulong)(byte)this_00[0x2a]);
    }
    else {
      wVar13 = param_2[1];
      cVar3 = IsThaiCharLayoutFlag(wVar13,0x200);
      if (cVar3 == '\0') {
        cVar3 = IsThaiCharLayoutFlag(wVar7,(uint)param_3);
        cVar5 = IsThaiCharLayoutFlag(wVar13,0x10);
        if (cVar5 == '\0') {
          cVar5 = IsThaiCharLayoutFlag(wVar13,0xc0);
          if (cVar5 != '\0') {
            lVar9 = GetThaiTableIndex(wVar7);
            GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                             (wchar16 *)0x0,0);
            wVar7 = param_2[1];
            goto LAB_05381880;
          }
LAB_05381954:
          if (cVar3 != '\0') {
            wVar13 = param_2[1];
            cVar3 = IsThaiCharLayoutFlag(wVar13,0x10);
            if (cVar3 == '\0') {
              cVar3 = IsThaiCharLayoutFlag(wVar13,0xc0);
              if (cVar3 == '\0') goto LAB_053814cc;
              lVar9 = GetThaiTableIndex(wVar7);
              GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,
                               &local_10,(wchar16 *)0x0,0);
              uVar12 = GetThaiTableIndex(param_2[1]);
              bVar4 = ThaiCharAdjustment::shiftdownleft_tone_ad(this_00,uVar12);
            }
            else {
              lVar9 = GetThaiTableIndex(wVar7);
              GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,
                               &local_10,(wchar16 *)0x0,0);
              uVar12 = GetThaiTableIndex(param_2[1]);
              bVar4 = ThaiCharAdjustment::shiftleft_av(this_00,uVar12);
            }
            goto LAB_053819bc;
          }
LAB_053814cc:
          cVar3 = IsThaiCharLayoutFlag(wVar7,3);
          if (cVar3 == '\0') {
            cVar3 = IsThaiCharLayoutFlag(wVar7,4);
            if (cVar3 == '\0') {
              cVar3 = IsThaiCharLayoutFlag(wVar7,8);
              if ((cVar3 != '\0') && (cVar3 = IsThaiCharLayoutFlag(param_2[1],0x120), cVar3 != '\0')
                 ) {
                uVar12 = GetThaiTableIndex(wVar7);
                bVar4 = ThaiCharAdjustment::tailcutcons(this_00,uVar12);
                uVar12 = (ulong)bVar4;
                goto LAB_05381a40;
              }
            }
            else {
              cVar3 = IsThaiCharLayoutFlag(param_2[1],0x120);
              if (cVar3 != '\0') {
                lVar9 = GetThaiTableIndex(wVar7);
                GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,
                                 &local_10,(wchar16 *)0x0,0);
                uVar12 = GetThaiTableIndex(param_2[1]);
                bVar4 = ThaiCharAdjustment::shiftdown_bv_bd(this_00,uVar12);
                goto LAB_053819bc;
              }
            }
          }
          else {
            cVar3 = IsThaiCharLayoutFlag(param_2[1],0x120);
            if (cVar3 != '\0') goto LAB_05381a10;
          }
          local_12 = L'◌';
          GetGlyphsForChar(this,&local_12,1,pAVar8,param_4,&local_10,L"○ _o",4);
          uVar12 = GetThaiTableIndex(*param_2);
          puVar11 = param_4 + local_10;
        }
        else {
LAB_05381a10:
          uVar12 = GetThaiTableIndex(wVar7);
        }
LAB_05381a40:
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + uVar12 * 2),1,pAVar8,puVar11,&local_10,
                         (wchar16 *)0x0,0);
        lVar9 = GetThaiTableIndex(param_2[1]);
        GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4 + local_10,
                         &local_10,(wchar16 *)0x0,0);
        goto LAB_053811ec;
      }
      lVar9 = GetThaiTableIndex(wVar7);
      GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + lVar9 * 2),1,pAVar8,param_4,&local_10,
                       (wchar16 *)0x0,0);
      TVar6 = this_00[0x2a];
    }
    GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + (ulong)(byte)TVar6 * 2),1,pAVar8,
                     param_4 + local_10,&local_10,(wchar16 *)0x0,0);
    TVar6 = this_00[0x2b];
LAB_053812d4:
    GetGlyphsForChar(this,(wchar16 *)(&UNK_05767cb0 + (ulong)(byte)TVar6 * 2),1,pAVar8,
                     param_4 + local_10,&local_10,(wchar16 *)0x0,0);
  }
LAB_053811ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::AppendThaiCharCluster(unsigned long, unsigned long, char16_t const*,
   unsigned long) */

void __thiscall
EA::Text::Typesetter::AppendThaiCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  AnalysisInfo *pAVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_50;
  ushort auStack_48 [32];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x600);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_05380f88(uVar7);
  local_50 = 0;
  cVar1 = IsCharThaiLao(*param_3);
  if (cVar1 == '\0') {
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      uVar5 = 0;
      while( true ) {
        pAVar3 = (AnalysisInfo *)FUN_05380f88(uVar7,uVar6);
        lVar4 = GetGlyphsForChar(this,param_3 + uVar6,param_4 - uVar6,pAVar3,auStack_48 + uVar5,
                                 &local_50,(wchar16 *)0x0,0);
        uVar6 = uVar6 + lVar4;
        uVar5 = local_50;
        if (param_4 <= uVar6) break;
        uVar7 = *(undefined8 *)(this + 0x600);
      }
    }
  }
  else {
    local_50 = GetThaiGlyphs(this,param_1,param_3,param_4,auStack_48);
    uVar5 = local_50;
  }
  AppendGeneralGlyphCluster
            (this,param_1,param_2,param_3,param_2,auStack_48,uVar5,
             (int)((long)((ulong)*(byte *)(lVar2 + 0x11) << 0x38) >> 0x3c));
  PlaceGeneralGlyphCluster(this,param_1,param_2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_50);
  }
  return;
}


/* EA::Text::Typesetter::GetThaiCharCluster(unsigned long, unsigned long, char16_t*, unsigned long&)
    */

ulong __thiscall
EA::Text::Typesetter::GetThaiCharCluster
          (Typesetter *this,ulong param_1,ulong param_2,wchar16 *param_3,ulong *param_4)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar16 *pwVar5;
  wchar16 *pwVar6;
  wchar16 wVar7;
  wchar16 wVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar9 = *(undefined8 *)(this + 0x5d8);
  *param_4 = 0;
  pwVar5 = (wchar16 *)FUN_05380f94(uVar9);
  pwVar6 = (wchar16 *)FUN_05380f94(uVar9,param_2);
  if (pwVar5 < pwVar6) {
    wVar8 = *pwVar5;
    wVar7 = L'\0';
    iVar3 = GetScriptFromChar(wVar8);
LAB_05381f3c:
    iVar4 = iVar3;
    uVar10 = *param_4;
    if (uVar10 == 0) goto LAB_05381f10;
    while (cVar2 = GetThaiCharPairingResult(wVar7,wVar8), cVar2 == 'C') {
      uVar1 = uVar10 + 1;
      pwVar5 = pwVar5 + 1;
      *param_4 = uVar1;
      param_3[uVar10] = wVar8;
      if ((pwVar6 <= pwVar5) || (wVar7 = wVar8, 0x1f < uVar1)) {
        return uVar1;
      }
      while( true ) {
        wVar8 = *pwVar5;
        iVar3 = GetScriptFromChar(wVar8);
        if (iVar4 == -1) goto LAB_05381f3c;
        if (iVar3 != iVar4) {
          return *param_4;
        }
        uVar10 = *param_4;
        if (uVar10 != 0) break;
LAB_05381f10:
        *param_4 = 1;
        pwVar5 = pwVar5 + 1;
        *param_3 = wVar8;
        wVar7 = wVar8;
        if (pwVar6 <= pwVar5) {
          return 1;
        }
      }
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Typesetter::ShapeThai(unsigned long, unsigned long) */

void __thiscall EA::Text::Typesetter::ShapeThai(Typesetter *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50;
  wchar16 awStack_48 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < param_2) {
    do {
      uVar2 = GetThaiCharCluster(this,param_1,param_2,awStack_48,&local_50);
      uVar1 = param_1 + uVar2;
      AppendThaiCharCluster(this,param_1,uVar2,awStack_48,local_50);
      param_1 = uVar1;
    } while (uVar1 < param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

