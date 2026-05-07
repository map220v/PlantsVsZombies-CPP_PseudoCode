// Class: EA::Text::LineLayout


/* EA::Text::LineLayout::~LineLayout() */

void __thiscall EA::Text::LineLayout::~LineLayout(LineLayout *this)

{
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0xf8));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0xd0));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0xa8));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x80));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x58));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~vector((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
           *)(this + 0x30));
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  ~basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 8));
  return;
}


/* EA::Text::LineLayout::TEMPNAMEPLACEHOLDERVALUE(EA::Text::LineLayout const&) */

LineLayout * __thiscall EA::Text::LineLayout::operator=(LineLayout *this,LineLayout *param_1)

{
  LineLayout LVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 8),(basic_string *)(param_1 + 8));
  eastl::
  vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::operator=((vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x30),(vector *)(param_1 + 0x30));
  eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0x58),(vector *)(param_1 + 0x58));
  eastl::
  vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0x80),(vector *)(param_1 + 0x80));
  eastl::
  vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::operator=((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0xa8),(vector *)(param_1 + 0xa8));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0xd0),(vector *)(param_1 + 0xd0));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0xf8),(vector *)(param_1 + 0xf8));
  LVar1 = param_1[0x150];
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(this + 0x138) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(this + 0x140) = uVar2;
  this[0x150] = LVar1;
  return this;
}


/* EA::Text::LineLayout::NewGlyphs() */

void __thiscall EA::Text::LineLayout::NewGlyphs(LineLayout *this)

{
  FUN_0536f69c(*(undefined8 *)(this + 0x58),this + 0x60);
  FUN_0536f6a4(*(undefined8 *)(this + 0x80),this + 0x88);
  FUN_0536f6ac(*(undefined8 *)(this + 0xa8),this + 0xb0);
  FUN_0536f6b4(*(undefined8 *)(this + 0xd0),this + 0xd8);
  FUN_0536f6b4(*(undefined8 *)(this + 0xf8),this + 0x100);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  this[0x150] = (LineLayout)0x0;
  return;
}


/* EA::Text::LineLayout::NewLine() */

void __thiscall EA::Text::LineLayout::NewLine(LineLayout *this)

{
  FUN_0536f2dc(*(undefined8 *)(this + 8),this + 0x10);
  FUN_0536f694(*(undefined8 *)(this + 0x30),this + 0x38);
  NewGlyphs(this);
  return;
}


/* EA::Text::LineLayout::Clear(bool) */

void EA::Text::LineLayout::Clear(bool param_1)

{
  LineLayout *this;
  
  this = (LineLayout *)(ulong)param_1;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  NewLine(this);
  return;
}


/* EA::Text::LineLayout::GetGlyphIndexFromCharIndex(unsigned long) const */

undefined8 __thiscall
EA::Text::LineLayout::GetGlyphIndexFromCharIndex(LineLayout *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0xd0);
  uVar1 = FUN_0536f300(uVar3,*(undefined8 *)(this + 0xd8));
  if (uVar1 <= param_1) {
    uVar3 = FUN_0536f2f4(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
    return uVar3;
  }
  puVar2 = (undefined8 *)FUN_0536f358(uVar3,param_1);
  return *puVar2;
}


/* EA::Text::LineLayout::GetCharIndexFromGlyphIndex(unsigned long) const */

undefined8 __thiscall
EA::Text::LineLayout::GetCharIndexFromGlyphIndex(LineLayout *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0xf8);
  uVar1 = FUN_0536f300(uVar3,*(undefined8 *)(this + 0x100));
  if (uVar1 <= param_1) {
    uVar3 = FUN_0536f31c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
    return uVar3;
  }
  puVar2 = (undefined8 *)FUN_0536f358(uVar3,param_1);
  return *puVar2;
}


/* EA::Text::LineLayout::GetGlyphRangeFromCharRange(unsigned long, unsigned long, unsigned long&,
   unsigned long&) const */

void __thiscall
EA::Text::LineLayout::GetGlyphRangeFromCharRange
          (LineLayout *this,ulong param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  
  uVar1 = GetGlyphIndexFromCharIndex(this,param_1);
  *param_3 = uVar1;
  uVar1 = GetGlyphIndexFromCharIndex(this,param_2);
  *param_4 = uVar1;
  return;
}


/* EA::Text::LineLayout::GetCharRangeFromGlyphRange(unsigned long, unsigned long, unsigned long&,
   unsigned long&) const */

void __thiscall
EA::Text::LineLayout::GetCharRangeFromGlyphRange
          (LineLayout *this,ulong param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  
  uVar1 = GetCharIndexFromGlyphIndex(this,param_1);
  *param_3 = uVar1;
  uVar1 = GetCharIndexFromGlyphIndex(this,param_2);
  *param_4 = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineLayout::OffsetSegment(float, float, unsigned long, unsigned long) */

void __thiscall
EA::Text::LineLayout::OffsetSegment
          (LineLayout *this,float param_1,float param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  
  if ((_FUN_0536fc0c < ABS(param_1)) || (_FUN_0536fc0c < ABS(param_2))) {
    lVar2 = FUN_0536f360(*(undefined8 *)(this + 0xa8));
    for (uVar1 = lVar2 + param_3 * 0x28; uVar1 < lVar2 + param_4 * 0x28; uVar1 = uVar1 + 0x28) {
      *(float *)(uVar1 + 8) = *(float *)(uVar1 + 8) + param_1;
      *(float *)(uVar1 + 0xc) = *(float *)(uVar1 + 0xc) + param_2;
      *(float *)(uVar1 + 0x14) = *(float *)(uVar1 + 0x14) + param_1;
      *(float *)(uVar1 + 0x18) = *(float *)(uVar1 + 0x18) + param_2;
      *(float *)(uVar1 + 0x1c) = *(float *)(uVar1 + 0x1c) + param_1;
      *(float *)(uVar1 + 0x20) = *(float *)(uVar1 + 0x20) + param_2;
    }
  }
  return;
}


/* EA::Text::LineLayout::Offset(float, float) */

void __thiscall EA::Text::LineLayout::Offset(LineLayout *this,float param_1,float param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0536f2c0(*(undefined8 *)(this + 0xa8),*(undefined8 *)(this + 0xb0));
  OffsetSegment(this,param_1,param_2,0,uVar1);
  return;
}


/* EA::Text::LineLayout::CalculateVisibleSpace() */

void __thiscall EA::Text::LineLayout::CalculateVisibleSpace(LineLayout *this)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  
  uVar4 = *(ulong *)(this + 0x120);
  if (uVar4 != 0) {
    uVar6 = *(undefined8 *)(this + 8);
    do {
      uVar5 = uVar4 - 1;
      puVar1 = (ushort *)FUN_0536f364(uVar6,uVar5);
      if (((*puVar1 & 0xff7f) != 0x20) && (*puVar1 != 0x3000)) break;
      uVar4 = uVar5;
    } while (uVar5 != 0);
  }
  *(ulong *)(this + 0x128) = uVar4;
  lVar2 = GetGlyphIndexFromCharIndex(this,uVar4);
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(this + 0xa8);
    lVar3 = FUN_0536f36c(uVar6,0);
    lVar2 = FUN_0536f36c(uVar6,lVar2 + -1);
    if (*(float *)(lVar2 + 0x10) <= 0.0) {
      fVar7 = *(float *)(lVar2 + 8);
    }
    else {
      fVar7 = *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 8);
    }
    *(float *)(this + 0x134) = fVar7 - *(float *)(lVar3 + 8);
    return;
  }
  *(undefined4 *)(this + 0x134) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineLayout::GetTextPositionFromDisplayPosition(float, float, bool, EA::Text::PickType,
   EA::Text::GlyphSide&, EA::Text::Direction) const */

long EA::Text::LineLayout::GetTextPositionFromDisplayPosition
               (float param_1,LineLayout *param_2,char param_3,int param_4,uint *param_5,int param_6
               )

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  uVar2 = FUN_0536f2c0(uVar6,*(undefined8 *)(param_2 + 0xb0));
  fVar9 = _FUN_0536ff38;
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      lVar3 = FUN_0536f378(uVar6,uVar5);
      fVar8 = *(float *)(lVar3 + 8);
      fVar7 = fVar8 + *(float *)(lVar3 + 0x10);
      if (fVar8 < fVar7) {
        fVar9 = (float)NEON_fminnm(fVar9,fVar8);
        if ((param_1 < fVar7) && (fVar8 <= param_1)) {
          fVar7 = (param_1 - fVar8) / (fVar7 - fVar8);
          *param_5 = (uint)(0.5 <= fVar7);
joined_r0x0536fdcc:
          if (fVar7 != -1.0) {
            if ((param_4 == 0) && (*param_5 == 1)) {
              *param_5 = 0;
              uVar5 = uVar5 + 1;
            }
            lVar3 = GetCharIndexFromGlyphIndex(param_2,uVar5);
            return lVar3;
          }
        }
      }
      else if (fVar7 < fVar8) {
        fVar9 = (float)NEON_fminnm(fVar9,fVar7);
        if ((param_1 < fVar8) && (fVar7 <= param_1)) {
          fVar7 = (param_1 - fVar7) / (fVar7 - fVar8) + 1.0;
          *param_5 = (uint)(0.5 <= fVar7);
          goto joined_r0x0536fdcc;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  if (param_3 == '\0') {
    if (fVar9 <= param_1) {
      if (param_6 == 0) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        *param_5 = 1;
        cVar1 = FUN_0536f384(uVar4,uVar6);
        if (cVar1 != '\0') {
          return 0;
        }
        lVar3 = FUN_0536f31c(uVar4,uVar6);
        return lVar3 + -1;
      }
    }
    else if (param_6 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      *param_5 = 1;
      lVar3 = FUN_0536f31c(uVar6,uVar4);
      return lVar3;
    }
    *param_5 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = -1;
  }
  return lVar3;
}


/* EA::Text::LineLayout::GetDisplayPositionFromTextPosition(unsigned long, EA::Text::GlyphSide,
   EA::Text::Point&, EA::Text::Direction) const */

void EA::Text::LineLayout::GetDisplayPositionFromTextPosition
               (LineLayout *param_1,ulong param_2,int param_3,float *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  *param_4 = 0.0;
  param_4[1] = 0.0;
  uVar4 = FUN_0536f2c0(uVar3,uVar9);
  if (uVar4 == 0) {
    return;
  }
  uVar5 = GetGlyphIndexFromCharIndex(param_1,param_2);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  if (uVar5 < uVar4) {
    lVar6 = FUN_0536f378(uVar3,uVar5);
    lVar7 = FUN_0536f390(*(undefined8 *)(param_1 + 0x80),uVar5);
    if (param_3 != 1) {
      fVar10 = *(float *)(lVar6 + 0xc);
      *param_4 = *(float *)(lVar6 + 8);
      param_4[1] = fVar10;
      return;
    }
  }
  else {
    lVar6 = FUN_0536f378(uVar3,uVar4 - 1);
    lVar7 = FUN_0536f390(*(undefined8 *)(param_1 + 0x80),uVar4 - 1);
  }
  lVar8 = FUN_0536f350(uVar3);
  uVar5 = lVar8 + uVar4 * 0x28;
  uVar4 = lVar6 + 0x28;
  pbVar1 = (byte *)(lVar7 + 4);
  if (uVar4 < uVar5) {
    bVar2 = *(byte *)(lVar7 + 4);
    while ((bVar2 & 0xe0) != 0) {
      uVar4 = uVar4 + 0x28;
      pbVar1 = pbVar1 + 4;
      if (uVar5 <= uVar4) break;
      bVar2 = *pbVar1;
    }
  }
  fVar11 = *(float *)(uVar4 - 0x20);
  fVar10 = *(float *)(lVar6 + 0x10);
  param_4[1] = *(float *)(uVar4 - 0x1c);
  *param_4 = fVar11;
  bVar2 = *(byte *)(lVar7 + 1);
  if (((bVar2 & 7) != 0) && ((bVar2 >> 3 & 1) != 0)) {
    fVar10 = fVar10 / (float)(bVar2 & 7);
  }
  *param_4 = fVar10 + fVar11;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineLayout::GetDisplayPositionFromTextPosition(unsigned long, EA::Text::GlyphSide,
   EA::Text::Direction) const */

void __thiscall
EA::Text::LineLayout::GetDisplayPositionFromTextPosition
          (LineLayout *this,undefined8 param_1,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)local_10,0.0,0.0);
  GetDisplayPositionFromTextPosition(this,param_1,param_3,(FastCurve *)local_10,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10[0]);
}


/* EA::Text::LineLayout::GetLineHeight() const */

float __thiscall EA::Text::LineLayout::GetLineHeight(LineLayout *this)

{
  return (float)(int)*(float *)(this + 0x138) - (float)(int)*(float *)(this + 0x13c);
}


/* EA::Text::LineLayout::GetBoundingBox(float&, float&, bool) */

void __thiscall
EA::Text::LineLayout::GetBoundingBox(LineLayout *this,float *param_1,float *param_2,bool param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (param_3) {
    uVar5 = *(undefined8 *)(this + 0xa8);
    uVar4 = *(undefined8 *)(this + 0xb0);
    *param_1 = *(float *)(this + 0x130);
    cVar1 = FUN_0536f3a4(uVar5,uVar4);
  }
  else {
    if (*(float *)(this + 0x134) == 0.0) {
      CalculateVisibleSpace(this);
      *param_1 = *(float *)(this + 0x134);
    }
    else {
      *param_1 = *(float *)(this + 0x134);
    }
    uVar5 = *(undefined8 *)(this + 0xa8);
    uVar4 = *(undefined8 *)(this + 0xb0);
    cVar1 = FUN_0536f3a4(uVar5,uVar4);
  }
  if (cVar1 != '\0') {
    *param_2 = 0.0;
    return;
  }
  lVar2 = FUN_0536f3b0(uVar5);
  lVar3 = FUN_0536f3b4(uVar4);
  fVar6 = (float)GetLineHeight(this);
  *param_2 = fVar6 + ABS(*(float *)(lVar2 + 0xc) - *(float *)(lVar3 + 0xc));
  return;
}


/* EA::Text::LineLayout::Validate(bool) */

bool __thiscall EA::Text::LineLayout::Validate(LineLayout *this,bool param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (this[0x150] == (LineLayout)0x0) {
    uVar3 = FUN_0536f31c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
    uVar5 = FUN_0536f3bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
    uVar10 = *(undefined8 *)(this + 0xd0);
    uVar4 = FUN_0536f300(uVar10,*(undefined8 *)(this + 0xd8));
    bVar2 = false;
    if (uVar3 == uVar4) {
      bVar2 = uVar3 == uVar5;
      uVar4 = uVar3;
    }
LAB_053703cc:
    if (param_1 != false) {
      uVar5 = FUN_0536f2f4(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
      if (uVar4 != 0) {
        uVar9 = 0;
        do {
          uVar1 = uVar9 + 1;
          puVar8 = (ulong *)FUN_0536f3d0(uVar10,uVar9);
          if (uVar5 <= *puVar8) {
            bVar2 = false;
          }
          uVar9 = uVar1;
        } while (uVar1 != uVar4);
      }
      uVar4 = FUN_0536f3d8(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88));
      uVar10 = *(undefined8 *)(this + 0xa8);
      if (uVar5 != uVar4) {
        bVar2 = false;
      }
      uVar4 = FUN_0536f2c0(uVar10,*(undefined8 *)(this + 0xb0));
      uVar11 = *(undefined8 *)(this + 0xf8);
      if (uVar5 != uVar4) {
        bVar2 = false;
      }
      uVar9 = FUN_0536f300(uVar11,*(undefined8 *)(this + 0x100));
      if (uVar5 != uVar9) {
        bVar2 = false;
      }
      uVar5 = 0;
      if (uVar9 != 0) {
        do {
          uVar1 = uVar5 + 1;
          puVar8 = (ulong *)FUN_0536f3d0(uVar11,uVar5);
          if (uVar3 <= *puVar8) {
            bVar2 = false;
          }
          uVar5 = uVar1;
        } while (uVar1 != uVar9);
      }
      goto LAB_053702e4;
    }
  }
  else {
    bVar2 = false;
    uVar3 = FUN_0536f31c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
    uVar4 = FUN_0536f3bc(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
    uVar10 = *(undefined8 *)(this + 0xd0);
    uVar5 = FUN_0536f300(uVar10,*(undefined8 *)(this + 0xd8));
    if (uVar3 == uVar5) {
      bVar2 = uVar3 == uVar4;
      param_1 = false;
      uVar4 = uVar3;
      goto LAB_053703cc;
    }
  }
  uVar3 = FUN_0536f2f4(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
  uVar10 = *(undefined8 *)(this + 0xa8);
  uVar4 = FUN_0536f2c0(uVar10,*(undefined8 *)(this + 0xb0));
  if (uVar3 != uVar4) {
    bVar2 = false;
  }
LAB_053702e4:
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      plVar6 = (long *)FUN_0536f36c(uVar10,uVar3);
      if ((*plVar6 == 0) &&
         (pbVar7 = (byte *)FUN_0536f3e4(*(undefined8 *)(this + 0x80),uVar3), (*pbVar7 & 0x10) == 0))
      {
        bVar2 = false;
      }
      uVar3 = uVar3 + 1;
      if (10000.0 <= ABS(*(float *)(plVar6 + 2))) {
        bVar2 = false;
      }
      if (10000.0 <= ABS(*(float *)((long)plVar6 + 0x1c) - *(float *)((long)plVar6 + 0x14))) {
        bVar2 = false;
      }
      if (10000.0 <= ABS(*(float *)(plVar6 + 4) - *(float *)(plVar6 + 3))) {
        bVar2 = false;
      }
    } while (uVar3 != uVar4);
  }
  return bVar2;
}


/* EA::Text::LineLayout::SetAllocator(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::LineLayout::SetAllocator(LineLayout *this,ICoreAllocator *param_1)

{
  undefined8 uVar1;
  
  *(ICoreAllocator **)this = param_1;
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 8));
  FUN_0536f2d4(uVar1,param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x30));
  FUN_0536f2d4(uVar1,param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x58));
  FUN_0536f2d4(uVar1,param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0x80));
  FUN_0536f2d4(uVar1,param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0xa8));
  FUN_0536f2d4(uVar1,param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0xd0));
  FUN_0536f2d4(uVar1,param_1);
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(this + 0xf8));
  FUN_0536f2d4(uVar1,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineLayout::LineLayout(EA::Allocator::ICoreAllocator*) */

void __thiscall EA::Text::LineLayout::LineLayout(LineLayout *this,ICoreAllocator *param_1)

{
  CoreAllocatorAdapter<EA::Allocator::ICoreAllocator> aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (ICoreAllocator *)0x0) {
    param_1 = (ICoreAllocator *)GetAllocator();
  }
  *(ICoreAllocator **)this = param_1;
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/Typesetter/LineLayout",param_1);
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 8),(CoreAllocatorAdapter *)aCStack_18);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/Typesetter/AnalysisInfoArray",*(ICoreAllocator **)this);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0x30),(CoreAllocatorAdapter *)aCStack_18);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/Typesetter/GlyphArray",*(ICoreAllocator **)this);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0x58),(CoreAllocatorAdapter *)aCStack_18);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/Typesetter/GlyphInfoArray",*(ICoreAllocator **)this);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0x80),(CoreAllocatorAdapter *)aCStack_18);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/Typesetter/GlyphLayoutInfoArray",*(ICoreAllocator **)this);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0xa8),(CoreAllocatorAdapter *)aCStack_18);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/Typesetter/GlyphIndexArray",*(ICoreAllocator **)this);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0xd0),(CoreAllocatorAdapter *)aCStack_18);
  Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>::CoreAllocatorAdapter
            (aCStack_18,"EAText/Typesetter/CharIndexArray",*(ICoreAllocator **)this);
  eastl::vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  vector((vector<unsigned_int,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>> *)
         (this + 0xf8),(CoreAllocatorAdapter *)aCStack_18);
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x150] = (LineLayout)0x0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::LineLayout::LineLayout(EA::Text::LineLayout const&) */

void __thiscall EA::Text::LineLayout::LineLayout(LineLayout *this,LineLayout *param_1)

{
  LineLayout LVar1;
  undefined8 uVar2;
  
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  basic_string((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 8));
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x30));
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x58));
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0x80));
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0xa8));
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0xd0));
  eastl::
  vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::vector((vector<EA::Text::Typesetter::Item,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
            *)(this + 0xf8));
  eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 8),(basic_string *)(param_1 + 8));
  eastl::
  vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::operator=((vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x30),(vector *)(param_1 + 0x30));
  eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0x58),(vector *)(param_1 + 0x58));
  eastl::
  vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0x80),(vector *)(param_1 + 0x80));
  eastl::
  vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::operator=((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0xa8),(vector *)(param_1 + 0xa8));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0xd0),(vector *)(param_1 + 0xd0));
  eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
  operator=((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
             *)(this + 0xf8),(vector *)(param_1 + 0xf8));
  LVar1 = param_1[0x150];
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(this + 0x138) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(this + 0x140) = uVar2;
  this[0x150] = LVar1;
  return;
}


/* EA::Text::LineLayout::Assign(EA::Text::LineLayout const&, int) */

void __thiscall EA::Text::LineLayout::Assign(LineLayout *this,LineLayout *param_1,int param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  if ((param_2 & 1U) == 0) {
    FUN_0536f2dc(*(undefined8 *)(this + 8),this + 0x10);
  }
  else {
    eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator=((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 8),(basic_string *)(param_1 + 8));
  }
  if (((uint)param_2 >> 1 & 1) == 0) {
    FUN_0536f694(*(undefined8 *)(this + 0x30),this + 0x38);
  }
  else {
    eastl::
    vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator=((vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x30),(vector *)(param_1 + 0x30));
  }
  if (((uint)param_2 >> 2 & 1) == 0) {
    FUN_0536f69c(*(undefined8 *)(this + 0x58),this + 0x60);
  }
  else {
    eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator=((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0x58),(vector *)(param_1 + 0x58));
  }
  if (((uint)param_2 >> 3 & 1) == 0) {
    FUN_0536f6a4(*(undefined8 *)(this + 0x80),this + 0x88);
  }
  else {
    eastl::
    vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    operator=((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
               *)(this + 0x80),(vector *)(param_1 + 0x80));
  }
  if (((uint)param_2 >> 4 & 1) == 0) {
    FUN_0536f6ac(*(undefined8 *)(this + 0xa8),this + 0xb0);
  }
  else {
    eastl::
    vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator=((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0xa8),(vector *)(param_1 + 0xa8));
  }
  if (((uint)param_2 >> 5 & 1) == 0) {
    FUN_0536f6b4(*(undefined8 *)(this + 0xd0),this + 0xd8);
  }
  else {
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator=((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0xd0),(vector *)(param_1 + 0xd0));
  }
  if (((uint)param_2 >> 6 & 1) == 0) {
    FUN_0536f6b4(*(undefined8 *)(this + 0xf8),this + 0x100);
  }
  else {
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator=((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                 *)(this + 0xf8),(vector *)(param_1 + 0xf8));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(this + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(this + 0x148) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(this + 0x140) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineLayout::GetGlyphSelection(unsigned long, unsigned long,
   eastl::fixed_set<EA::Text::Rectangle, 4ul, true, eastl::less<EA::Text::Rectangle>,
   eastl::allocator>&, EA::Text::LayoutSettings*, float) const */

void __thiscall
EA::Text::LineLayout::GetGlyphSelection
          (LineLayout *this,ulong param_1,ulong param_2,fixed_set *param_3,LayoutSettings *param_4,
          float param_5)

{
  byte *pbVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  undefined8 uVar7;
  ulong local_218;
  ulong local_210;
  _List_const_iterator<Sexy::ActiveFontLayer> a_Stack_208 [8];
  float local_200 [2];
  float local_1f8;
  float local_1f4;
  undefined8 local_1e8 [60];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  eastl::fixed_list<EA::Text::Span,16ul,true,eastl::allocator>::fixed_list
            ((fixed_list<EA::Text::Span,16ul,true,eastl::allocator> *)local_1e8);
  GetGlyphRangeFromCharRange(this,param_1,param_2,&local_218,&local_210);
  lVar4 = FUN_0536f350(*(undefined8 *)(this + 0xa8));
  lVar5 = FUN_0536f344(*(undefined8 *)(this + 0x80));
  lVar5 = lVar5 + local_218 * 4;
  for (uVar2 = lVar4 + local_218 * 0x28; uVar2 < lVar4 + local_210 * 0x28; uVar2 = uVar2 + 0x28) {
    pbVar1 = (byte *)(lVar5 + 1);
    lVar5 = lVar5 + 4;
    local_200[0] = *(float *)(uVar2 + 0x10) / (float)(*pbVar1 >> 4 & 3) + *(float *)(uVar2 + 8);
    pfVar6 = eastl::min_alt<float>((float *)(uVar2 + 8),local_200);
    local_1f8 = *pfVar6;
    pfVar6 = eastl::max_alt<float>((float *)(uVar2 + 8),local_200);
    local_1f4 = *pfVar6;
    FUN_05374f80(&local_1f8,(fixed_list<EA::Text::Span,16ul,true,eastl::allocator> *)local_1e8);
  }
  if ((param_4 != (LayoutSettings *)0x0) && (param_4[0x4a1] != (LayoutSettings)0x0)) {
    param_5 = param_5 - *(float *)(this + 0x138);
  }
  FUN_053710c4(a_Stack_208,local_1e8[0]);
  eastl::list<EA::Text::Span,eastl::fixed_node_allocator<24ul,16ul,4ul,0ul,true,eastl::allocator>>::
  end();
  while (bVar3 = eastl::operator!=((rbtree_iterator *)a_Stack_208,(rbtree_iterator *)local_200),
        bVar3) {
    pfVar6 = (float *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*(a_Stack_208);
    Rectangle::Rectangle
              ((Rectangle *)&local_1f8,*pfVar6,param_5 + *(float *)(this + 0x138),pfVar6[1],
               param_5 + *(float *)(this + 0x13c));
    eastl::
    rbtree<EA::Text::Rectangle,EA::Text::Rectangle,eastl::less<EA::Text::Rectangle>,eastl::fixed_node_allocator<48ul,4ul,4ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::Rectangle>,false,true>
    ::insert((Rectangle *)param_3);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)a_Stack_208);
  }
  uVar7 = FUN_0536f398(*(undefined8 *)(param_3 + 0x28));
  eastl::fixed_list<EA::Text::Span,16ul,true,eastl::allocator>::~fixed_list
            ((fixed_list<EA::Text::Span,16ul,true,eastl::allocator> *)local_1e8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineLayout::GetGlyphDecoration(EA::Text::DecorationFlags, unsigned long, unsigned long,
   eastl::fixed_set<EA::Text::Rectangle, 4ul, true, eastl::less<EA::Text::Rectangle>,
   eastl::allocator>&, EA::Text::LayoutSettings*, float) const */

void EA::Text::LineLayout::GetGlyphDecoration
               (float param_1,LineLayout *param_2,int param_3,ulong param_4,ulong param_5,
               long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_74;
  ulong local_70;
  ulong local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  FontMetrics aFStack_50 [20];
  float local_3c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 != 0) {
    GetGlyphRangeFromCharRange(param_2,param_4,param_5,&local_70,&local_68);
    lVar2 = FUN_0536f39c(*(undefined8 *)(param_2 + 0xa8));
    puVar8 = (undefined8 *)(lVar2 + local_70 * 0x28);
    puVar1 = (undefined8 *)(lVar2 + local_68 * 0x28);
    lVar3 = FUN_0536f3a0(*(undefined8 *)(param_2 + 0x80));
    pbVar9 = (byte *)(lVar3 + local_70 * 4);
    FontMetrics::FontMetrics(aFStack_50);
    Rectangle::Rectangle((Rectangle *)&local_60,0.0,0.0,0.0,0.0);
    if (puVar8 < puVar1) {
      fVar12 = 0.0;
      do {
        fVar11 = *(float *)(puVar8 + 2) / (float)(pbVar9[1] >> 4 & 3) + *(float *)(puVar8 + 1);
        local_74 = fVar11;
        pfVar4 = eastl::min_alt<float>((float *)(puVar8 + 1),&local_74);
        local_60 = *pfVar4;
        local_74 = fVar11;
        pfVar4 = eastl::max_alt<float>((float *)(puVar8 + 1),&local_74);
        local_58 = *pfVar4;
        puVar6 = puVar8;
        if ((*pbVar9 >> 4 & 1) == 0) {
LAB_0537587c:
          (**(code **)(*(long *)*puVar6 + 0x68))((long *)*puVar6,aFStack_50);
          fVar11 = local_18;
          fVar10 = local_1c;
          if ((param_3 == 2) || (fVar11 = local_10, fVar10 = local_14, param_3 == 4)) {
            local_5c = (float)(int)(-(fVar11 * 0.5) - fVar10);
            local_54 = (float)(int)(fVar11 * 0.5 - fVar10);
            fVar12 = (float)(int)-local_3c;
          }
          else if (param_3 == 1) {
            local_5c = (float)(int)(-(local_20 * 0.5) - local_24);
            local_54 = (float)(int)(local_20 * 0.5 - local_24);
          }
          fVar11 = param_1 + *(float *)((long)puVar6 + 0xc) + fVar12;
          local_5c = fVar11 + local_5c;
          local_54 = fVar11 + local_54;
          FUN_0537555c((Rectangle *)&local_60,param_6);
        }
        else {
          uVar7 = *(undefined8 *)(param_2 + 0xa8);
          lVar3 = FUN_0536f39c(uVar7);
          lVar5 = FUN_0536f2c0(uVar7,*(undefined8 *)(param_2 + 0xb0));
          puVar6 = (undefined8 *)FUN_0536f230(pbVar9,lVar2,puVar8,lVar3 + lVar5 * 0x28);
          if (puVar6 != (undefined8 *)0x0) goto LAB_0537587c;
        }
        puVar8 = puVar8 + 5;
        pbVar9 = pbVar9 + 4;
      } while (puVar8 < puVar1);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_0536f398(*(undefined8 *)(param_6 + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineLayout::GetFontSelection(eastl::fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,
   8ul, true, eastl::less<EA::Text::AutoRefCount<EA::Text::Font> >, eastl::allocator>&) const */

void __thiscall EA::Text::LineLayout::GetFontSelection(LineLayout *this,fixed_set *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  AutoRefCount<EA::Text::Font> aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_0536f350(*(undefined8 *)(this + 0xa8));
  puVar2 = (undefined8 *)FUN_0536f354(*(undefined8 *)(this + 0xb0));
  for (; puVar1 != puVar2; puVar1 = puVar1 + 5) {
    AutoRefCount<EA::Text::Font>::AutoRefCount(aAStack_10,(Font *)*puVar1);
    eastl::
    rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
    ::insert((AutoRefCount *)param_1);
    AutoRefCount<EA::Text::Font>::~AutoRefCount(aAStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* EA::Text::LineLayout::Append(EA::Text::LineLayout const&, int) */

void __thiscall EA::Text::LineLayout::Append(LineLayout *this,LineLayout *param_1,int param_2)

{
  ulong uVar1;
  float *pfVar2;
  GlyphInfo *pGVar3;
  GlyphInfo *pGVar4;
  GlyphInfo *pGVar5;
  GlyphLayoutInfo *pGVar6;
  GlyphLayoutInfo *pGVar7;
  GlyphLayoutInfo *pGVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  AnalysisInfo *pAVar12;
  AnalysisInfo *pAVar13;
  AnalysisInfo *pAVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  
  lVar21 = *(long *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = 0;
  *(long *)(this + 0x120) = *(long *)(this + 0x120) + lVar21;
  pfVar2 = eastl::max_alt<float>((float *)(this + 0x130),(float *)(param_1 + 0x130));
  *(float *)(this + 0x130) = *pfVar2;
  pfVar2 = eastl::max_alt<float>((float *)(this + 0x134),(float *)(param_1 + 0x134));
  *(float *)(this + 0x134) = *pfVar2;
  pfVar2 = eastl::max_alt<float>((float *)(this + 0x138),(float *)(param_1 + 0x138));
  *(float *)(this + 0x138) = *pfVar2;
  pfVar2 = eastl::min_alt<float>((float *)(this + 0x13c),(float *)(param_1 + 0x13c));
  *(float *)(this + 0x13c) = *pfVar2;
  if ((param_2 & 0x25U) == 0x25) {
    lVar21 = FUN_0536f2f4(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
    uVar26 = *(undefined8 *)(this + 0xd8);
    lVar15 = FUN_0536f300(*(undefined8 *)(this + 0xd0),uVar26);
    puVar16 = (ulong *)FUN_0536f30c(uVar26);
    puVar17 = (ulong *)FUN_0536f310(*(undefined8 *)(param_1 + 0xd0));
    puVar18 = (ulong *)FUN_0536f314(*(undefined8 *)(param_1 + 0xd8));
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::insert<unsigned_long_const*>
              ((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0xd0),puVar16,puVar17,puVar18);
    lVar19 = FUN_0536f318(*(undefined8 *)(this + 0xd0));
    plVar25 = (long *)(lVar19 + lVar15 * 8);
    lVar15 = FUN_0536f300(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8));
    if (plVar25 < plVar25 + lVar15) {
      uVar22 = ~(ulong)plVar25 + (long)(plVar25 + lVar15);
      uVar20 = uVar22 >> 3;
      uVar1 = (uVar20 - 1 >> 1) + 1;
      if (7 < uVar22) {
        uVar22 = 0;
        plVar23 = plVar25;
        plVar24 = plVar25;
        do {
          lVar15 = *plVar24;
          uVar22 = uVar22 + 1;
          plVar23[1] = plVar24[1] + lVar21;
          *plVar23 = lVar15 + lVar21;
          plVar23 = plVar23 + 2;
          plVar24 = plVar24 + 2;
        } while (uVar22 < uVar1);
        plVar25 = plVar25 + uVar1 * 2;
        if (uVar20 + 1 == uVar1 * 2) goto LAB_05377324;
      }
      *plVar25 = *plVar25 + lVar21;
    }
  }
LAB_05377324:
  if ((param_2 & 0x45U) == 0x45) {
    lVar21 = FUN_0536f31c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
    uVar26 = *(undefined8 *)(this + 0x100);
    lVar15 = FUN_0536f300(*(undefined8 *)(this + 0xf8),uVar26);
    puVar16 = (ulong *)FUN_0536f30c(uVar26);
    puVar17 = (ulong *)FUN_0536f310(*(undefined8 *)(param_1 + 0xf8));
    puVar18 = (ulong *)FUN_0536f314(*(undefined8 *)(param_1 + 0x100));
    eastl::vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::insert<unsigned_long_const*>
              ((vector<unsigned_long,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0xf8),puVar16,puVar17,puVar18);
    lVar19 = FUN_0536f318(*(undefined8 *)(this + 0xf8));
    plVar25 = (long *)(lVar19 + lVar15 * 8);
    lVar15 = FUN_0536f300(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100));
    if (plVar25 < plVar25 + lVar15) {
      uVar22 = ~(ulong)plVar25 + (long)(plVar25 + lVar15);
      uVar20 = uVar22 >> 3;
      uVar1 = (uVar20 - 1 >> 1) + 1;
      if (7 < uVar22) {
        uVar22 = 0;
        plVar23 = plVar25;
        plVar24 = plVar25;
        do {
          lVar15 = *plVar23;
          uVar22 = uVar22 + 1;
          plVar24[1] = plVar23[1] + lVar21;
          *plVar24 = lVar15 + lVar21;
          plVar23 = plVar23 + 2;
          plVar24 = plVar24 + 2;
        } while (uVar22 < uVar1);
        plVar25 = plVar25 + uVar1 * 2;
        if (uVar20 + 1 == uVar1 * 2) goto joined_r0x05377554;
      }
      *plVar25 = *plVar25 + lVar21;
    }
  }
joined_r0x05377554:
  if ((param_2 & 1U) != 0) {
    eastl::basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::operator+=((basic_string<char16_t,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                  *)(this + 8),(basic_string *)(param_1 + 8));
  }
  if (((uint)param_2 >> 1 & 1) != 0) {
    pAVar12 = (AnalysisInfo *)FUN_0536f328(*(undefined8 *)(this + 0x38));
    pAVar13 = (AnalysisInfo *)FUN_0536f32c(*(undefined8 *)(param_1 + 0x30));
    pAVar14 = (AnalysisInfo *)FUN_0536f330(*(undefined8 *)(param_1 + 0x38));
    eastl::
    vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::insert<EA::Text::AnalysisInfo_const*>
              ((vector<EA::Text::AnalysisInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x30),pAVar12,pAVar13,pAVar14);
  }
  if (((uint)param_2 >> 2 & 1) != 0) {
    puVar9 = (ushort *)FUN_0536f334(*(undefined8 *)(this + 0x60));
    puVar10 = (ushort *)FUN_0536f338(*(undefined8 *)(param_1 + 0x58));
    puVar11 = (ushort *)FUN_0536f33c(*(undefined8 *)(param_1 + 0x60));
    eastl::vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
    ::insert<unsigned_short_const*>
              ((vector<unsigned_short,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x58),puVar9,puVar10,puVar11);
  }
  if (((uint)param_2 >> 3 & 1) != 0) {
    pGVar3 = (GlyphInfo *)FUN_0536f340(*(undefined8 *)(this + 0x88));
    pGVar4 = (GlyphInfo *)FUN_0536f344(*(undefined8 *)(param_1 + 0x80));
    pGVar5 = (GlyphInfo *)FUN_0536f348(*(undefined8 *)(param_1 + 0x88));
    eastl::
    vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>::
    insert<EA::Text::GlyphInfo_const*>
              ((vector<EA::Text::GlyphInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
                *)(this + 0x80),pGVar3,pGVar4,pGVar5);
  }
  if (((uint)param_2 >> 4 & 1) == 0) {
    return;
  }
  pGVar6 = (GlyphLayoutInfo *)FUN_0536f34c(*(undefined8 *)(this + 0xb0));
  pGVar7 = (GlyphLayoutInfo *)FUN_0536f350(*(undefined8 *)(param_1 + 0xa8));
  pGVar8 = (GlyphLayoutInfo *)FUN_0536f354(*(undefined8 *)(param_1 + 0xb0));
  eastl::
  vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
  ::insert<EA::Text::GlyphLayoutInfo_const*>
            ((vector<EA::Text::GlyphLayoutInfo,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>>
              *)(this + 0xa8),pGVar6,pGVar7,pGVar8);
  return;
}

