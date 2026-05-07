// Class: EA::Text::Layout


/* EA::Text::Layout::Layout() */

void __thiscall EA::Text::Layout::Layout(Layout *this)

{
  *(undefined4 *)(this + 0xc) = 0x1e;
  *(undefined4 *)(this + 0x10) = 0;
  eastl::
  fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
  ::fixed_set((fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
               *)(this + 0x18));
  this[0x1e0] = (Layout)0x1;
  TextStyle::TextStyle((TextStyle *)(this + 0x1e4));
  this[0x4a0] = (Layout)0x0;
  this[0x4a1] = (Layout)0x1;
  this[0x4a8] = (Layout)0x0;
  this[0x4a9] = (Layout)0x0;
  this[0x4aa] = (Layout)0x0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x4a4) = 0x3f800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::GetParagraphBoundary(EA::Text::TextRun const*, unsigned int, unsigned int*,
   unsigned int*) */

void __thiscall
EA::Text::Layout::GetParagraphBoundary
          (Layout *this,TextRun *param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  TextRunIterator aTStack_38 [24];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TextRunIterator::TextRunIterator(aTStack_38,param_1,param_2,0,0,0xffffffff);
  uVar2 = local_14;
  cVar3 = FUN_0536186c(local_18,local_14);
  if (cVar3 == '\0') {
    sVar4 = FUN_05361878(local_20,uVar2,local_10);
    uVar5 = 0;
    while( true ) {
      uVar1 = uVar5 + 1;
      uVar6 = uVar1;
      if (sVar4 == 0xd) break;
      if ((sVar4 == 0x2029) || (sVar4 == 10)) goto LAB_05361ff0;
      TextRunIterator::operator++(aTStack_38);
      sVar4 = FUN_05361878(local_20,local_14,local_10);
      uVar5 = uVar1;
      if (sVar4 == -1) goto LAB_05361ff0;
    }
    TextRunIterator::operator++(aTStack_38);
    sVar4 = FUN_05361878(local_20,local_14,local_10);
    uVar6 = uVar5 + 2;
    if (sVar4 != 10) {
      uVar6 = uVar1;
    }
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
  }
LAB_05361ff0:
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar5;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar6;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::GetTextProperties(EA::Text::TextRun const*, unsigned int,
   EA::Text::TextProperties&) */

void __thiscall
EA::Text::Layout::GetTextProperties
          (Layout *this,TextRun *param_1,uint param_2,TextProperties *param_3)

{
  undefined4 uVar1;
  char cVar2;
  wchar16 wVar3;
  undefined8 uVar4;
  char local_40;
  byte local_3f;
  TextRunIterator aTStack_38 [24];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined2 *)param_3 = 0;
  TextRunIterator::TextRunIterator(aTStack_38,param_1,param_2,0,0,0xffffffff);
  uVar1 = local_14;
  cVar2 = FUN_0536186c(local_18,local_14);
  if (cVar2 == '\0') {
    wVar3 = FUN_05361878(local_20,uVar1,local_10);
    do {
      uVar4 = GetScriptFromChar(wVar3);
      GetScriptProperties(uVar4,&local_40,1);
      if (local_40 < '\0') {
        *param_3 = (TextProperties)((byte)*param_3 | 1);
      }
      if ((local_3f & 1) != 0) {
        *param_3 = (TextProperties)((byte)*param_3 | 2);
      }
      if ((local_3f >> 1 & 1) != 0) {
        *param_3 = (TextProperties)((byte)*param_3 | 4);
      }
      if ((local_3f >> 2 & 1) != 0) {
        *param_3 = (TextProperties)((byte)*param_3 | 8);
      }
      if ((local_3f >> 3 & 1) != 0) {
        *param_3 = (TextProperties)((byte)*param_3 | 0x10);
      }
      if ((local_3f >> 4 & 1) == 0) {
        *param_3 = (TextProperties)((byte)*param_3 | 0x20);
      }
      else {
        *param_3 = (TextProperties)((byte)*param_3 | 0x40);
      }
      if ((local_3f >> 3 & 1) != 0) {
        param_3[1] = (TextProperties)((byte)param_3[1] | 1);
      }
      TextRunIterator::operator++(aTStack_38);
      wVar3 = FUN_05361878(local_20,local_14,local_10);
    } while (wVar3 != L'\xffff');
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::JustifyGlyphs(EA::Text::TextRun const*, unsigned int, unsigned int, unsigned
   int, unsigned int*, EA::Text::GlyphAttributes*, unsigned int, unsigned int*, float, bool) */

void __thiscall
EA::Text::Layout::JustifyGlyphs
          (Layout *this,TextRun *param_1,uint param_2,uint param_3,uint param_4,uint *param_5,
          GlyphAttributes *param_6,uint param_7,uint *param_8,float param_9,bool param_10)

{
  uint uVar1;
  short sVar2;
  uint *puVar3;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_440 [8];
  TextRunIterator aTStack_438 [24];
  undefined8 local_420;
  undefined4 local_414;
  undefined4 local_410;
  uint local_408 [256];
  long local_8;
  uint *puVar4;
  
  local_8 = ___stack_chk_guard;
  GetScriptProperties(*(undefined4 *)(this + 0xc),auStack_440,1);
  uVar1 = param_3 + param_4;
  TextRunIterator::TextRunIterator(aTStack_438,param_1,param_2,param_3,0,0xffffffff);
  if (param_3 < uVar1) {
    uVar5 = 0;
    uVar6 = param_3;
    do {
      sVar2 = FUN_05361878(local_420,local_414,local_410);
      TextRunIterator::operator++(aTStack_438);
      if ((sVar2 == 0x20) && (uVar5 < 0x100)) {
        local_408[uVar5] = uVar6;
        uVar5 = uVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
    fVar9 = (float)uVar5;
  }
  else {
    fVar9 = 0.0;
    uVar5 = 0;
  }
  if (param_10) {
    uVar6 = param_5[param_3];
    if (uVar6 < param_5[uVar1 - 1] + 1) {
      fVar8 = 0.0;
      do {
        fVar7 = fVar8 + *(float *)(param_6 + (ulong)uVar6 * 0x30 + 0x20);
        if (*(float *)(param_6 + (ulong)uVar6 * 0x30 + 0x20) <= 0.0) {
          fVar7 = fVar8;
        }
        uVar6 = uVar6 + 1;
        fVar8 = fVar7;
      } while (param_5[uVar1 - 1] + 1 != uVar6);
      param_9 = param_9 * fVar7 - fVar7;
    }
    else {
      param_9 = 0.0;
    }
  }
  if (uVar5 != 0) {
    puVar3 = local_408;
    do {
      puVar4 = puVar3 + 1;
      *(float *)(param_6 + (ulong)param_5[*puVar3] * 0x30 + 0x20) =
           *(float *)(param_6 + (ulong)param_5[*puVar3] * 0x30 + 0x20) + param_9 / fVar9;
      puVar3 = puVar4;
    } while (puVar4 != local_408 + (ulong)(uVar5 - 1) + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Layout::PlaceGlyphs(EA::Text::Analysis const*, unsigned int, unsigned int const*,
   EA::Text::GlyphAttributes const*, unsigned int, float, float, EA::Text::GlyphDisplayEntry*) */

int __thiscall
EA::Text::Layout::PlaceGlyphs
          (Layout *this,Analysis *param_1,uint param_2,uint *param_3,GlyphAttributes *param_4,
          uint param_5,float param_6,float param_7,GlyphDisplayEntry *param_8)

{
  Analysis *pAVar1;
  GlyphAttributes *pGVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 uVar6;
  GlyphDisplayEntry *pGVar7;
  undefined8 uVar8;
  float fVar9;
  
  if (param_2 == 0) {
    return 0;
  }
  pAVar1 = param_1 + ((ulong)(param_2 - 1) + 1) * 0x10;
  pGVar7 = param_8;
  do {
    uVar5 = param_3[*(uint *)param_1 + *(uint *)(param_1 + 4)];
    for (pGVar2 = param_4 + (ulong)param_3[*(uint *)param_1] * 0x30;
        pGVar2 < param_4 + (ulong)uVar5 * 0x30; pGVar2 = pGVar2 + 0x30) {
      uVar8 = *(undefined8 *)pGVar2;
      *(float *)(pGVar7 + 8) = param_6;
      uVar3 = *(undefined4 *)(pGVar2 + 0x24);
      *(float *)(pGVar7 + 0xc) = param_7;
      uVar6 = *(undefined2 *)(pGVar2 + 0x28);
      fVar9 = *(float *)(pGVar2 + 0x10);
      *(undefined8 *)pGVar7 = uVar8;
      *(float *)(pGVar7 + 0x10) = fVar9 + param_6;
      *(float *)(pGVar7 + 0x14) = *(float *)(pGVar2 + 0x14) + param_7;
      *(float *)(pGVar7 + 0x18) = *(float *)(pGVar2 + 0x18) + param_6;
      *(float *)(pGVar7 + 0x1c) = *(float *)(pGVar2 + 0x1c) + param_7;
      uVar4 = *(undefined4 *)(pGVar2 + 0x20);
      *(undefined4 *)(pGVar7 + 0x24) = uVar3;
      *(undefined2 *)(pGVar7 + 0x28) = uVar6;
      *(undefined4 *)(pGVar7 + 0x20) = uVar4;
      param_6 = param_6 + *(float *)(pGVar2 + 0x20);
      pGVar7 = pGVar7 + 0x30;
    }
    param_1 = param_1 + 0x10;
  } while (param_1 != pAVar1);
  return (int)((long)pGVar7 - (long)param_8 >> 4) * -0x55555555;
}


/* EA::Text::Layout::TextPositionToDisplayPosition(unsigned int, bool, unsigned int const*, unsigned
   int, EA::Text::GlyphAttributes const*, unsigned int, EA::Text::Point&) */

bool __thiscall
EA::Text::Layout::TextPositionToDisplayPosition
          (Layout *this,uint param_1,bool param_2,uint *param_3,uint param_4,
          GlyphAttributes *param_5,uint param_6,Point *param_7)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (param_2) {
    param_1 = param_1 + 1;
  }
  if (param_4 <= param_1) {
    uVar1 = param_3[param_4 - 1];
    fVar2 = *(float *)(param_5 + (ulong)uVar1 * 0x30 + 0x20);
    fVar4 = *(float *)(param_5 + (ulong)uVar1 * 0x30 + 8);
    *(undefined4 *)(param_7 + 4) = *(undefined4 *)(param_5 + (ulong)uVar1 * 0x30 + 0xc);
    *(float *)param_7 = fVar2 + fVar4;
    return param_1 < param_4;
  }
  uVar3 = *(undefined4 *)(param_5 + (ulong)param_3[param_1] * 0x30 + 8);
  *(undefined4 *)(param_7 + 4) = *(undefined4 *)(param_5 + (ulong)param_3[param_1] * 0x30 + 0xc);
  *(undefined4 *)param_7 = uVar3;
  return param_1 < param_4;
}


/* EA::Text::Layout::DisplayPositionToTextPosition(EA::Text::Point const&, unsigned int const*,
   unsigned int, EA::Text::GlyphAttributes*, unsigned int, unsigned int&, bool&) */

undefined8 __thiscall
EA::Text::Layout::DisplayPositionToTextPosition
          (Layout *this,Point *param_1,uint *param_2,uint param_3,GlyphAttributes *param_4,
          uint param_5,uint *param_6,bool *param_7)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  GlyphAttributes *pGVar4;
  float fVar5;
  float fVar6;
  
  if (param_5 != 0) {
    fVar6 = *(float *)param_1;
    pGVar4 = param_4 + 8;
    uVar3 = 0xffffffff;
    lVar2 = 0;
    do {
      while( true ) {
        fVar5 = *(float *)pGVar4 - fVar6;
        if (0.0 < fVar5) break;
LAB_053625c0:
        lVar2 = lVar2 + 1;
        pGVar4 = pGVar4 + 0x30;
        uVar3 = uVar3 + 1;
        if (param_5 <= (uint)lVar2) {
          return 1;
        }
      }
      if (lVar2 == 0) {
        *param_7 = true;
        *param_6 = 0;
        goto LAB_053625c0;
      }
      if (fVar5 < fVar6 - *(float *)(param_4 + (ulong)uVar3 * 0x30 + 8)) {
        *param_7 = true;
        *param_6 = param_2[lVar2];
        goto LAB_053625c0;
      }
      uVar1 = param_2[lVar2];
      lVar2 = lVar2 + 1;
      *param_7 = false;
      *param_6 = uVar1;
      pGVar4 = pGVar4 + 0x30;
      uVar3 = uVar3 + 1;
    } while ((uint)lVar2 < param_5);
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::LayoutSimple(char16_t const*, unsigned int, float, float, EA::Text::Font*,
   EA::Text::GlyphDisplayEntry*) */

void __thiscall
EA::Text::Layout::LayoutSimple
          (Layout *this,wchar16 *param_1,uint param_2,float param_3,float param_4,Font *param_5,
          GlyphDisplayEntry *param_6)

{
  wchar16 *pwVar1;
  GlyphDisplayEntry *pGVar2;
  char cVar3;
  exception_ptr *this_00;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_34;
  long local_8;
  
  uVar4 = (ulong)param_2;
  local_8 = ___stack_chk_guard;
  if ((param_5 == (Font *)0x0) &&
     (cVar3 = FUN_053619dc(*(undefined8 *)(this + 0x40)), cVar3 == '\0')) {
    local_50 = FUN_05362694(*(undefined8 *)(this + 0x28));
    this_00 = (exception_ptr *)
              eastl::
              rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
              ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                           *)&local_50);
    param_5 = (Font *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  }
  if (this[0x4a1] != (Layout)0x0) {
    FontMetrics::FontMetrics((FontMetrics *)&local_50);
    (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)&local_50);
    param_4 = param_4 + local_34 * *(float *)(this + 0x4a4);
  }
  pwVar1 = param_1 + uVar4;
  (**(code **)(*(long *)param_5 + 0x78))(param_5,param_1,uVar4,param_6 + 0x28,1,0x30,0);
  pGVar2 = param_6 + 0x24;
  for (; param_1 < pwVar1; param_1 = param_1 + 1) {
    *(Font **)(pGVar2 + -0x24) = param_5;
    (**(code **)(*(long *)param_5 + 0x70))(param_5,*(undefined2 *)(pGVar2 + 4),&local_50);
    *(float *)(pGVar2 + -0x1c) = param_3;
    fVar5 = param_3 + local_48;
    *(float *)(pGVar2 + -0x18) = param_4;
    *(float *)(pGVar2 + -0x14) = fVar5;
    fVar7 = *(float *)(this + 0x4a4);
    fVar6 = param_4 - local_44 * fVar7;
    param_3 = param_3 + local_40;
    *(float *)(pGVar2 + -4) = local_40;
    *(float *)(pGVar2 + -0xc) = fVar5 + (float)local_50;
    *(float *)(pGVar2 + -0x10) = fVar6;
    *(float *)(pGVar2 + -8) = fVar6 + fVar7 * local_50._4_4_;
    *(undefined4 *)pGVar2 = 0;
    pGVar2 = pGVar2 + 0x30;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::LayoutSimple(char const*, unsigned int, float, float, EA::Text::Font*,
   EA::Text::GlyphDisplayEntry*) */

void __thiscall
EA::Text::Layout::LayoutSimple
          (Layout *this,char *param_1,uint param_2,float param_3,float param_4,Font *param_5,
          GlyphDisplayEntry *param_6)

{
  char cVar1;
  exception_ptr *this_00;
  GlyphDisplayEntry *pGVar2;
  byte *pbVar3;
  byte *pbVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort local_52;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_5 == (Font *)0x0) {
    cVar1 = FUN_053619dc(*(undefined8 *)(this + 0x40));
    if (cVar1 == '\0') {
      local_50 = FUN_05362694(*(undefined8 *)(this + 0x28));
      this_00 = (exception_ptr *)
                eastl::
                rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                             *)&local_50);
      param_5 = (Font *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    }
  }
  if (this[0x4a1] != (Layout)0x0) {
    FontMetrics::FontMetrics((FontMetrics *)&local_50);
    (**(code **)(*(long *)param_5 + 0x68))(param_5,(FontMetrics *)&local_50);
    param_4 = param_4 + local_34 * *(float *)(this + 0x4a4);
  }
  if (param_1 < param_1 + param_2) {
    pGVar2 = param_6 + 0x28;
    pbVar3 = (byte *)param_1;
    do {
      pbVar4 = pbVar3 + 1;
      local_52 = (ushort)*pbVar3;
      (**(code **)(*(long *)param_5 + 0x78))(param_5,&local_52,1,pGVar2,1,2,0);
      *(Font **)(pGVar2 + -0x28) = param_5;
      (**(code **)(*(long *)param_5 + 0x70))(param_5,*(undefined2 *)pGVar2,&local_50);
      *(float *)(pGVar2 + -0x20) = param_3;
      fVar5 = param_3 + local_48;
      *(float *)(pGVar2 + -0x1c) = param_4;
      *(float *)(pGVar2 + -0x18) = fVar5;
      fVar7 = *(float *)(this + 0x4a4);
      *(undefined4 *)(pGVar2 + -4) = 0;
      fVar6 = param_4 - local_44 * fVar7;
      param_3 = param_3 + local_40;
      *(float *)(pGVar2 + -8) = local_40;
      *(float *)(pGVar2 + -0x10) = fVar5 + (float)local_50;
      *(float *)(pGVar2 + -0x14) = fVar6;
      *(float *)(pGVar2 + -0xc) = fVar6 + fVar7 * local_50._4_4_;
      pGVar2 = pGVar2 + 0x30;
      pbVar3 = pbVar4;
    } while (pbVar4 != (byte *)(param_1 + param_2));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((ulong)param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::ShapeGlyphs(EA::Text::TextRun const*, unsigned int, unsigned int*,
   EA::Text::Analysis const*, unsigned int, EA::Text::GlyphAttributes*, unsigned int, unsigned int*)
    */

void __thiscall
EA::Text::Layout::ShapeGlyphs
          (Layout *this,TextRun *param_1,uint param_2,uint *param_3,Analysis *param_4,uint param_5,
          GlyphAttributes *param_6,uint param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  exception_ptr *this_00;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  GlyphAttributes *pGVar9;
  uint uVar10;
  float fVar11;
  uint local_64 [2];
  uint local_5c;
  float local_58 [2];
  undefined8 local_50;
  float local_48;
  float local_44;
  undefined4 local_40;
  TextRunIterator aTStack_38 [24];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  local_5c = 0;
  local_64[0] = param_7;
  TextRunIterator::TextRunIterator(aTStack_38,param_1,param_2,0,0,0xffffffff);
  cVar3 = FUN_0536186c(local_18,local_14);
  if (cVar3 == '\0') {
    local_50 = FUN_05362694(*(undefined8 *)(this + 0x28));
    this_00 = (exception_ptr *)
              eastl::
              rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
              ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                           *)&local_50);
    plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    sVar4 = FUN_05361878(local_20,local_14,local_10);
    uVar2 = local_64[0] - 1;
    puVar6 = param_3;
    uVar10 = 0;
    do {
      local_58[0] = (float)CONCAT22(local_58[0]._2_2_,sVar4);
      param_3 = puVar6;
      if (uVar10 < uVar2) {
        lVar7 = (ulong)uVar10 * 0x30;
        if (*(int *)(this + 0x48c) == 1) {
          local_58[0] = (float)CONCAT22(local_58[0]._2_2_,0x25cf);
        }
        (**(code **)(*plVar5 + 0x78))(plVar5,local_58,1,param_6 + lVar7 + 0x28,1,2,0);
        (**(code **)(*plVar5 + 0x70))
                  (plVar5,*(undefined2 *)(param_6 + lVar7 + 0x28),
                   (rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                    *)&local_50);
        fVar11 = *(float *)(this + 0x4a4);
        param_3 = puVar6 + 1;
        *(undefined4 *)(param_6 + lVar7 + 8) = 0;
        *(undefined4 *)(param_6 + lVar7 + 0xc) = 0;
        *(float *)(param_6 + lVar7 + 0x10) = local_48;
        *(float *)(param_6 + lVar7 + 0x14) = -(fVar11 * local_44);
        *(float *)(param_6 + lVar7 + 0x18) = (float)local_50 + local_48;
        *(float *)(param_6 + lVar7 + 0x1c) = (local_50._4_4_ - local_44) * fVar11;
        *(undefined4 *)(param_6 + lVar7 + 0x20) = local_40;
        *(long **)(param_6 + lVar7) = plVar5;
        param_6[lVar7 + 0x24] = (GlyphAttributes)((byte)param_6[lVar7 + 0x24] & 0x80);
        uVar1 = *(ushort *)(param_6 + lVar7 + 0x24) & 0xfffffc00;
        *(ushort *)(param_6 + lVar7 + 0x24) =
             (ushort)uVar1 | *(ushort *)(param_6 + lVar7 + 0x24) & 0x7f | 0x80;
        param_6[lVar7 + 0x25] =
             (GlyphAttributes)((byte)(uVar1 >> 8) & 0xe0 | (local_58[0]._0_2_ == 0x20) << 3);
        *puVar6 = uVar10;
        if (param_8 != (uint *)0x0) {
          *param_8 = uVar10;
          param_8 = param_8 + 1;
        }
      }
      uVar10 = uVar10 + 1;
      local_5c = uVar10;
      TextRunIterator::operator++(aTStack_38);
      sVar4 = FUN_05361878(local_20,local_14,local_10);
      puVar6 = param_3;
    } while (sVar4 != -1);
    puVar6 = eastl::min_alt<unsigned_int>(&local_5c,local_64);
    uVar2 = *puVar6;
    if (uVar2 != 1) {
      pGVar9 = param_6 + 0x20;
      uVar8 = 0;
      do {
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        cVar3 = (**(code **)(*plVar5 + 0x90))
                          (plVar5,*(undefined2 *)(pGVar9 + 8),
                           *(undefined2 *)(param_6 + uVar8 * 0x30 + 0x28),local_58,0,1);
        if (cVar3 != '\0') {
          *(float *)pGVar9 = *(float *)pGVar9 + local_58[0];
        }
        pGVar9 = pGVar9 + 0x30;
      } while (uVar2 - 1 != uVar1);
    }
  }
  *param_3 = uVar10;
  if ((param_8 != (uint *)0x0) && (uVar10 < local_64[0])) {
    *param_8 = uVar10;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}


/* EA::Text::Layout::~Layout() */

void __thiscall EA::Text::Layout::~Layout(Layout *this)

{
  eastl::
  fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
  ::~fixed_set((fixed_set<EA::Text::AutoRefCount<EA::Text::Font>,8ul,true,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::allocator>
                *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::SetLayoutSettings(EA::Text::LayoutSettings const*) */

void __thiscall EA::Text::Layout::SetLayoutSettings(Layout *this,LayoutSettings *param_1)

{
  LayoutSettings aLStack_4b8 [1200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (LayoutSettings *)0x0) {
    LayoutSettings::LayoutSettings(aLStack_4b8);
    LayoutSettings::operator=((LayoutSettings *)this,aLStack_4b8);
    LayoutSettings::~LayoutSettings(aLStack_4b8);
  }
  else {
    LayoutSettings::operator=((LayoutSettings *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::Layout::SetLayoutFonts(EA::Text::TextStyle const*, EA::Text::LayoutSettings*,
   EA::Text::FontServer*) */

void __thiscall
EA::Text::Layout::SetLayoutFonts
          (Layout *this,TextStyle *param_1,LayoutSettings *param_2,FontServer *param_3)

{
  if (param_2 == (LayoutSettings *)0x0) {
    param_2 = (LayoutSettings *)this;
  }
  if (param_1 == (TextStyle *)0x0) {
    param_1 = (TextStyle *)(param_2 + 0x1e4);
  }
  if (param_3 == (FontServer *)0x0) {
    param_3 = (FontServer *)GetFontServer(true);
  }
  eastl::
  rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
  ::clear((rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
           *)(param_2 + 0x18));
  (**(code **)(*(long *)param_3 + 0x48))
            (param_3,param_1,
             (rbtree<EA::Text::AutoRefCount<EA::Text::Font>,EA::Text::AutoRefCount<EA::Text::Font>,eastl::less<EA::Text::AutoRefCount<EA::Text::Font>>,eastl::fixed_node_allocator<40ul,8ul,8ul,0ul,true,eastl::allocator>,eastl::use_self<EA::Text::AutoRefCount<EA::Text::Font>>,false,true>
              *)(param_2 + 0x18),0x1e,1,0xffffffff,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::GetNominalBaseline(EA::Text::TextStyle const*) const */

void __thiscall EA::Text::Layout::GetNominalBaseline(Layout *this,TextStyle *param_1)

{
  float fVar1;
  bool bVar2;
  exception_ptr *this_00;
  long *plVar3;
  float *pfVar4;
  float local_514;
  undefined8 local_510;
  undefined8 local_508;
  FontMetrics aFStack_500 [28];
  float afStack_4e4 [11];
  LayoutSettings aLStack_4b8 [1200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_514 = 0.0;
  LayoutSettings::LayoutSettings(aLStack_4b8);
  if (param_1 != (TextStyle *)0x0) {
    SetLayoutFonts(this,param_1,aLStack_4b8,(FontServer *)0x0);
    this = (Layout *)aLStack_4b8;
  }
  local_510 = FUN_05362d44(*(undefined8 *)(this + 0x28));
  local_508 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(this + 0x18));
  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_510,(rbtree_iterator *)&local_508),
        fVar1 = local_514, bVar2) {
    this_00 = (exception_ptr *)
              eastl::
              rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
              ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                           *)&local_510);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    if (plVar3 != (long *)0x0) {
      FontMetrics::FontMetrics(aFStack_500);
      (**(code **)(*plVar3 + 0x68))(plVar3,aFStack_500);
      pfVar4 = eastl::max_alt<float>(&local_514,afStack_4e4);
      local_514 = *pfVar4;
    }
    eastl::
    rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>::
    operator++((rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>
                *)&local_510);
  }
  LayoutSettings::~LayoutSettings(aLStack_4b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::GetNominalDescent(EA::Text::TextStyle const*) const */

void __thiscall EA::Text::Layout::GetNominalDescent(Layout *this,TextStyle *param_1)

{
  float fVar1;
  bool bVar2;
  exception_ptr *this_00;
  long *plVar3;
  float *pfVar4;
  float local_518;
  float local_514;
  undefined8 local_510;
  undefined8 local_508;
  FontMetrics aFStack_500 [20];
  float local_4ec;
  LayoutSettings aLStack_4b8 [1200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_518 = 0.0;
  LayoutSettings::LayoutSettings(aLStack_4b8);
  if (param_1 != (TextStyle *)0x0) {
    SetLayoutFonts(this,param_1,aLStack_4b8,(FontServer *)0x0);
    this = (Layout *)aLStack_4b8;
  }
  local_510 = FUN_05362d44(*(undefined8 *)(this + 0x28));
  local_508 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(this + 0x18));
  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_510,(rbtree_iterator *)&local_508),
        fVar1 = local_518, bVar2) {
    this_00 = (exception_ptr *)
              eastl::
              rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
              ::operator*((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>const&>
                           *)&local_510);
    plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    if (plVar3 != (long *)0x0) {
      FontMetrics::FontMetrics(aFStack_500);
      (**(code **)(*plVar3 + 0x68))(plVar3,aFStack_500);
      local_514 = (float)(int)local_4ec;
      pfVar4 = eastl::min_alt<float>(&local_518,&local_514);
      local_518 = *pfVar4;
    }
    eastl::
    rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>::
    operator++((rbtree_iterator<EA::Text::Rectangle,EA::Text::Rectangle_const*,EA::Text::Rectangle_const&>
                *)&local_510);
  }
  LayoutSettings::~LayoutSettings(aLStack_4b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}


/* EA::Text::Layout::AnalyzeText(EA::Text::TextRun const*, unsigned int,
   eastl::vector<EA::Text::Analysis, eastl::allocator>&, EA::Text::TextState const*) */

undefined8
EA::Text::Layout::AnalyzeText(TextRun *param_1,uint param_2,vector *param_3,TextState *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  lVar2 = FUN_053619ec(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8));
  eastl::vector<EA::Text::Analysis,eastl::allocator>::resize
            ((vector<EA::Text::Analysis,eastl::allocator> *)param_4,lVar2 + 1);
  puVar3 = (undefined4 *)FUN_05361a00(*(undefined8 *)(param_4 + 8));
  uVar1 = uVar4 + ((ulong)param_3 & 0xffffffff) * 0x10;
  if (uVar4 < uVar1) {
    puVar3[1] = *(int *)(uVar4 + 8) + puVar3[1] + *(int *)(uVar4 + 8) * (int)(~uVar4 + uVar1 >> 4);
  }
  *puVar3 = 0;
  *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) & 0x80;
  *(byte *)((long)puVar3 + 0xd) = *(byte *)((long)puVar3 + 0xd) & 0xf8;
  *(undefined1 *)(puVar3 + 3) = 0x1e;
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* EA::Text::Layout::LayoutTextLine(char16_t const*, unsigned int, float, float, EA::Text::TextStyle
   const*, EA::Text::GlyphDisplayEntry*, unsigned int, EA::Text::LayoutMetrics*) */

void __thiscall
EA::Text::Layout::LayoutTextLine
          (Layout *this,wchar16 *param_1,uint param_2,float param_3,float param_4,TextStyle *param_5
          ,GlyphDisplayEntry *param_6,uint param_7,LayoutMetrics *param_8)

{
  wchar16 wVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  TextState *pTVar6;
  Analysis *pAVar7;
  uint *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_60;
  uint local_54 [4];
  uint local_44;
  AutoFutex aAStack_40 [8];
  TextRun aTStack_38 [16];
  LayoutMetrics aLStack_28 [16];
  float local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_54[0] = param_7;
  Thread::AutoFutex::AutoFutex(aAStack_40,(Futex *)(gLayoutScratchpad + 0x1a000));
  if (param_5 == (TextStyle *)0x0) {
    param_5 = (TextStyle *)(this + 0x1e4);
  }
  if (param_2 == 0) {
    local_18 = 1.0;
    local_14 = 0;
    if (param_8 != (LayoutMetrics *)0x0) {
      *(undefined4 *)param_8 = 0;
      *(undefined4 *)(param_8 + 0x18) = 1;
      iVar5 = 0;
      *(undefined4 *)(param_8 + 0x10) = 0x3f800000;
      *(undefined4 *)(param_8 + 0x14) = 0;
      *(undefined4 *)(param_8 + 4) = 0;
LAB_05363ba8:
      *(undefined4 *)(param_8 + 8) = 0;
      *(undefined4 *)(param_8 + 0xc) = 0;
      goto LAB_05363b2c;
    }
LAB_05363cf0:
    iVar5 = 0;
  }
  else {
    cVar3 = FUN_053619dc(*(undefined8 *)(this + 0x40));
    if (cVar3 != '\0') {
      SetLayoutFonts(this,param_5,(LayoutSettings *)0x0,(FontServer *)0x0);
    }
    TextRun::TextRun(aTStack_38,param_1,param_2);
    pTVar6 = (TextState *)GetLayoutLineAnalysisArray();
    FUN_05361a2c(*(undefined8 *)pTVar6,pTVar6 + 8);
    AnalyzeText((TextRun *)this,(uint)aTStack_38,(vector *)0x1,pTVar6);
    if (0x400 < local_54[0]) {
      local_54[0] = 0x400;
    }
    uVar2 = local_54[0];
    uVar9 = *(undefined8 *)pTVar6;
    pAVar7 = (Analysis *)FUN_053619e8(uVar9);
    uVar4 = FUN_053619ec(uVar9,*(undefined8 *)(pTVar6 + 8));
    uVar4 = ShapeGlyphs(this,aTStack_38,1,(uint *)gLayoutScratchpad,pAVar7,uVar4,
                        (GlyphAttributes *)(gLayoutScratchpad + 0x2000),uVar2,(uint *)0x0);
    local_44 = uVar4;
    puVar8 = eastl::min_alt<unsigned_int>(&local_44,local_54);
    GetBaselineAndDescent((GlyphAttributes *)(gLayoutScratchpad + 0x2000),*puVar8,aLStack_28);
    if (uVar2 < uVar4) {
      if (param_8 == (LayoutMetrics *)0x0) goto LAB_05363cf0;
      *(uint *)param_8 = param_2;
      *(undefined4 *)(param_8 + 0x18) = 1;
      *(float *)(param_8 + 0x10) = local_18;
      *(undefined4 *)(param_8 + 0x14) = local_14;
    }
    else {
      if (this[0x4a1] != (Layout)0x0) {
        param_4 = param_4 + local_18 * *(float *)(this + 0x4a4);
      }
      local_60 = *(undefined8 *)pTVar6;
      uVar11 = FUN_053619ec(local_60,*(undefined8 *)(pTVar6 + 8));
      if (1 < uVar11) {
        FUN_053619e8(local_60);
        nop();
        local_60 = *(undefined8 *)pTVar6;
        uVar11 = FUN_053619ec(local_60,*(undefined8 *)(pTVar6 + 8));
      }
      pAVar7 = (Analysis *)FUN_053619e8(local_60);
      iVar5 = PlaceGlyphs(this,pAVar7,(uint)uVar11,(uint *)gLayoutScratchpad,
                          (GlyphAttributes *)(gLayoutScratchpad + 0x2000),0x400,param_3,param_4,
                          param_6);
      if (param_8 == (LayoutMetrics *)0x0) goto LAB_05363b2c;
      *(undefined4 *)(param_8 + 0x18) = 1;
      *(uint *)param_8 = param_2;
      *(float *)(param_8 + 0x10) = local_18;
      *(undefined4 *)(param_8 + 0x14) = local_14;
      if (iVar5 != 0) {
        lVar10 = (ulong)(iVar5 - 1) * 0x30;
        *(float *)(param_8 + 4) =
             (*(float *)(gLayoutScratchpad + lVar10 + 0x2020) + *(float *)(param_6 + lVar10 + 8)) -
             param_3;
        goto LAB_05363cb8;
      }
    }
    uVar11 = (ulong)(param_2 - 1);
    iVar5 = 0;
    wVar1 = param_1[uVar11];
    *(undefined4 *)(param_8 + 4) = 0;
    cVar3 = IsSpace(wVar1,0xff,false);
    while (cVar3 != '\0') {
      param_2 = (uint)uVar11;
      if (param_2 == 0) goto LAB_05363ba8;
LAB_05363cb8:
      uVar11 = (ulong)(param_2 - 1);
      cVar3 = IsSpace(param_1[uVar11],0xff,false);
    }
    *(uint *)(param_8 + 8) = param_2;
    *(undefined4 *)(param_8 + 0xc) = 0;
    if (*(uint *)(gLayoutScratchpad + uVar11 * 4) != 0xffffffff) {
      lVar10 = (ulong)*(uint *)(gLayoutScratchpad + uVar11 * 4) * 0x30;
      *(float *)(param_8 + 0xc) =
           (*(float *)(gLayoutScratchpad + lVar10 + 0x2020) + *(float *)(param_6 + lVar10 + 8)) -
           param_3;
    }
  }
LAB_05363b2c:
  Thread::AutoFutex::~AutoFutex(aAStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::GetTextLayoutMetrics(char16_t const*, unsigned int, EA::Text::TextStyle const*,
   EA::Text::LayoutMetrics*) */

void __thiscall
EA::Text::Layout::GetTextLayoutMetrics
          (Layout *this,wchar16 *param_1,uint param_2,TextStyle *param_3,LayoutMetrics *param_4)

{
  undefined4 uVar1;
  AutoFutex aAStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_10,(Futex *)(gLayoutScratchpad + 0x1a000));
  LayoutTextLine(this,param_1,param_2,0.0,0.0,param_3,
                 (GlyphDisplayEntry *)(gLayoutScratchpad + 0xe000),0x400,param_4);
  uVar1 = *(undefined4 *)(param_4 + 4);
  Thread::AutoFutex::~AutoFutex(aAStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::LineBreakText(EA::Text::TextRun const*, unsigned int, unsigned int, unsigned
   int, unsigned int const*, eastl::vector<EA::Text::Analysis, eastl::allocator>*,
   EA::Text::GlyphAttributes const*, unsigned int const*, float, unsigned int*, unsigned int,
   float*) */

void __thiscall
EA::Text::Layout::LineBreakText
          (Layout *this,TextRun *param_1,uint param_2,uint param_3,uint param_4,uint *param_5,
          vector *param_6,GlyphAttributes *param_7,uint *param_8,float param_9,uint *param_10,
          uint param_11,float *param_12)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  Analysis *pAVar7;
  Analysis *pAVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  wchar16 local_7a;
  undefined4 local_78;
  int iStack_74;
  undefined8 uStack_70;
  TextRunIterator aTStack_68 [24];
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  TextRunIterator aTStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = (ulong)param_3;
  uVar1 = param_3 + param_4;
  TextRunIterator::TextRunIterator(aTStack_68,param_1,param_2,param_3,0,0xffffffff);
  uVar11 = 0;
  TextRunIterator::TextRunIterator(aTStack_38,aTStack_68);
  if (param_9 <= 0.1) {
    param_9 = 0.1;
  }
  if ((param_3 < uVar1) && (param_11 != 0)) {
    uVar13 = (ulong)(param_3 < uVar1);
    if (param_3 >= uVar1) goto LAB_0536416c;
LAB_05364054:
    local_7a = L'\0';
    iVar12 = (int)uVar13;
    uVar13 = 0;
    uVar15 = uVar10;
    fVar17 = 0.0;
    while (cVar3 = IsCharNewline(local_7a), fVar16 = fVar17, cVar3 == '\0') {
      TextRunIterator::operator=(aTStack_38,aTStack_68);
      iVar5 = GetWord(aTStack_68,&local_7a);
      uVar14 = iVar5 + (int)uVar15;
      uVar13 = (ulong)uVar14;
      for (uVar9 = param_5[uVar15]; uVar9 < param_5[uVar13]; uVar9 = uVar9 + 1) {
        if ((0.0 < *(float *)(param_7 + (ulong)uVar9 * 0x30 + 0x20)) &&
           (fVar16 = fVar16 + *(float *)(param_7 + (ulong)uVar9 * 0x30 + 0x20), param_9 < fVar16))
        goto LAB_0536407c;
      }
      uVar15 = uVar13;
      fVar17 = fVar16;
      if ((param_9 < fVar16) || (uVar1 <= uVar14)) break;
    }
LAB_0536407c:
    if ((uint)uVar15 == (uint)uVar10) goto LAB_05364178;
    if (((uint)uVar15 < uVar1) &&
       ((param_9 < fVar16 || (cVar3 = IsCharNewline(local_7a), cVar3 == '\0')))) {
      TextRunIterator::operator=(aTStack_68,aTStack_38);
    }
LAB_053640b0:
    sVar4 = FUN_05361878(local_50,local_44,local_40);
    uVar13 = uVar15;
    if (sVar4 == 0x20) goto LAB_053641a8;
LAB_053640cc:
    if (fVar17 <= 0.1) {
      fVar17 = 0.1;
    }
LAB_053640d0:
    uVar9 = (uint)uVar10;
    uVar10 = uVar13;
    if (uVar9 < (uint)uVar13) {
      do {
        if (param_12 == (float *)0x0) {
          lVar6 = uVar11 << 2;
        }
        else {
          lVar6 = uVar11 * 4;
          param_12[uVar11] = fVar17;
        }
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar9;
        uVar14 = (uint)uVar10;
        *(uint *)((long)param_10 + lVar6) = uVar14;
        if (param_6 != (vector *)0x0) {
          pAVar7 = (Analysis *)FUN_05361a08(*(undefined8 *)param_6);
          pAVar8 = (Analysis *)FUN_05361a0c(*(undefined8 *)(param_6 + 8));
          for (; pAVar7 != pAVar8; pAVar7 = pAVar7 + 0x10) {
            uVar2 = *(uint *)pAVar7;
            if ((uVar2 <= uVar14) && (uVar14 < uVar2 + *(int *)(pAVar7 + 4))) {
              if (uVar2 < uVar14) {
                uStack_70 = *(undefined8 *)(pAVar7 + 8);
                iVar12 = *(int *)pAVar7;
                _local_78 = CONCAT44(uVar14 - iVar12,(int)*(undefined8 *)pAVar7);
                *(uint *)pAVar7 = uVar14;
                *(uint *)(pAVar7 + 4) = *(int *)(pAVar7 + 4) - (uVar14 - iVar12);
                eastl::vector<EA::Text::Analysis,eastl::allocator>::insert
                          ((vector<EA::Text::Analysis,eastl::allocator> *)param_6,pAVar7,
                           (Analysis *)&local_78);
              }
              break;
            }
          }
        }
        if ((uVar1 <= uVar14) || (param_11 <= uVar9)) break;
        uVar13 = (ulong)(uVar14 < uVar1);
        if (uVar14 < uVar1) goto LAB_05364054;
LAB_0536416c:
        local_7a = L'\0';
        iVar12 = (int)uVar13;
        fVar17 = 0.0;
        fVar16 = 0.0;
LAB_05364178:
        uVar9 = (uint)uVar10;
        if (*(int *)(this + 0x478) == 4) {
          TextRunIterator::operator=(aTStack_68,aTStack_38);
          uVar14 = param_5[uVar10];
          if ((0.0 < param_9) && (iVar12 != 0)) {
            fVar17 = 0.0;
            uVar15 = uVar10;
            goto LAB_053642d4;
          }
          sVar4 = FUN_05361878(local_50,local_44,local_40);
          if ((sVar4 != 0x20) || ((uVar1 <= uVar9 || (local_7a == L' ')))) break;
          fVar17 = 0.1;
          uVar14 = uVar9;
        }
        else {
          fVar17 = fVar17 + fVar16;
          sVar4 = FUN_05361878(local_50,local_44,local_40);
          if (sVar4 != 0x20) goto LAB_053640cc;
LAB_053641a8:
          uVar9 = (uint)uVar13;
          if (fVar17 <= 0.1) {
            fVar17 = 0.1;
          }
          if ((uVar1 <= uVar9) || (uVar14 = (uint)uVar10, local_7a == L' ')) goto LAB_053640d0;
        }
        uVar10 = (ulong)(uVar9 + 1);
        TextRunIterator::operator++(aTStack_68);
        if (uVar9 + 1 <= uVar14) break;
      } while( true );
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
LAB_053642d4:
  uVar13 = (ulong)uVar14;
  if (0.0 < *(float *)(param_7 + uVar13 * 0x30 + 0x20)) {
    fVar17 = fVar17 + *(float *)(param_7 + uVar13 * 0x30 + 0x20);
    if (param_9 <= fVar17) goto LAB_053640b0;
    if ((uint)uVar15 <= param_8[uVar13]) {
      do {
        uVar9 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar9;
        TextRunIterator::operator++(aTStack_68);
      } while (uVar9 <= param_8[uVar13]);
    }
  }
  uVar14 = uVar14 + 1;
  if ((param_9 <= fVar17) || (uVar1 <= (uint)uVar15)) goto LAB_053640b0;
  goto LAB_053642d4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::LayoutTextParagraph(char16_t const*, unsigned int, float, float, float, float,
   EA::Text::TextStyle const*, EA::Text::GlyphDisplayEntry*, unsigned int, EA::Text::LayoutMetrics*)
    */

void __thiscall
EA::Text::Layout::LayoutTextParagraph
          (Layout *this,wchar16 *param_1,uint param_2,float param_3,float param_4,float param_5,
          float param_6,TextStyle *param_7,GlyphDisplayEntry *param_8,uint param_9,
          LayoutMetrics *param_10)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TextState *pTVar6;
  Analysis *pAVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  AutoFutex aAStack_840 [8];
  TextRun aTStack_838 [16];
  LayoutMetrics aLStack_828 [16];
  float local_818;
  float local_814;
  uint local_808 [256];
  float local_408 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_840,(Futex *)(gLayoutScratchpad + 0x1a000));
  local_818 = 1.0;
  if (param_7 == (TextStyle *)0x0) {
    param_7 = (TextStyle *)(this + 0x1e4);
  }
  local_814 = 0.0;
  if (param_2 == 0) {
    uVar13 = 0;
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_053619dc(*(undefined8 *)(this + 0x40));
    if (cVar2 != '\0') {
      SetLayoutFonts(this,param_7,(LayoutSettings *)0x0,(FontServer *)0x0);
    }
    TextRun::TextRun(aTStack_838,param_1,param_2);
    pTVar6 = (TextState *)GetParagraphAnalysisArray();
    FUN_05361a2c(*(undefined8 *)pTVar6,pTVar6 + 8);
    AnalyzeText((TextRun *)this,(uint)aTStack_838,(vector *)0x1,pTVar6);
    uVar10 = *(undefined8 *)pTVar6;
    if (0x400 < param_9) {
      param_9 = 0x400;
    }
    pAVar7 = (Analysis *)FUN_053619e8(uVar10);
    uVar3 = FUN_053619ec(uVar10,*(undefined8 *)(pTVar6 + 8));
    uVar3 = ShapeGlyphs(this,aTStack_838,1,(uint *)gLayoutScratchpad,pAVar7,uVar3,
                        (GlyphAttributes *)(gLayoutScratchpad + 0x2000),param_9,
                        (uint *)(gLayoutScratchpad + 0x1000));
    if (param_9 < uVar3) {
      uVar13 = 0;
      uVar3 = 0;
    }
    else {
      fVar20 = param_5 - param_3;
      GetBaselineAndDescent((GlyphAttributes *)(gLayoutScratchpad + 0x2000),uVar3,aLStack_828);
      fVar16 = local_818 - local_814;
      fVar19 = *(float *)(this + 0x4a4);
      uVar3 = LineBreakText(this,aTStack_838,1,0,param_2,(uint *)gLayoutScratchpad,(vector *)pTVar6,
                            (GlyphAttributes *)(gLayoutScratchpad + 0x2000),
                            (uint *)(gLayoutScratchpad + 0x1000),fVar20,local_808,0x100,local_408);
      if (*(int *)(param_7 + 0x28c) == 1) {
        fVar17 = *(float *)(this + 0x4a4);
        param_4 = param_4 + ((param_6 - param_4) - fVar16 * (float)(int)uVar3) * fVar17 * 0.5;
      }
      else {
        fVar17 = *(float *)(this + 0x4a4);
        if (*(int *)(param_7 + 0x28c) == 2) {
          param_4 = param_6 - (float)uVar3 * fVar16 * fVar17;
        }
      }
      fVar17 = local_818 * fVar17;
      uVar10 = *(undefined8 *)pTVar6;
      uVar4 = FUN_053619ec(uVar10,*(undefined8 *)(pTVar6 + 8));
      if (uVar3 != 0) {
        lVar12 = 0;
        uVar13 = 0;
        fVar17 = param_4 + fVar17;
        uVar15 = 0;
        do {
          uVar14 = uVar15;
          if (uVar15 < uVar4) {
            uVar11 = local_808[lVar12];
            do {
              piVar8 = (int *)FUN_053619f8(uVar10,uVar14);
              if (uVar11 < (uint)(piVar8[1] + *piVar8)) break;
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar4);
            uVar11 = uVar14 - uVar15;
            if (uVar11 < 2) goto LAB_053646f4;
            FUN_053619f8(uVar10,uVar15);
            nop();
            uVar10 = *(undefined8 *)pTVar6;
            iVar5 = *(int *)(param_7 + 0x288);
            if (iVar5 != 1) goto LAB_05364704;
LAB_05364804:
            fVar18 = param_3 + (fVar20 - local_408[lVar12]) * 0.5;
          }
          else {
            uVar11 = 0;
LAB_053646f4:
            iVar5 = *(int *)(param_7 + 0x288);
            if (iVar5 == 1) goto LAB_05364804;
LAB_05364704:
            if (iVar5 == 2) {
              fVar18 = param_5 - local_408[lVar12];
            }
            else {
              fVar18 = param_3;
              if (iVar5 == 3) {
                puVar9 = (uint *)FUN_053619f8(uVar10,uVar15);
                uVar1 = *puVar9;
                piVar8 = (int *)FUN_053619f8(uVar10,uVar14 - 1);
                JustifyGlyphs(this,aTStack_838,1,uVar1,(piVar8[1] + *piVar8) - uVar1,
                              (uint *)gLayoutScratchpad,
                              (GlyphAttributes *)(gLayoutScratchpad + 0x2000),param_9,
                              (uint *)(gLayoutScratchpad + 0x1000),fVar20 - local_408[lVar12],false)
                ;
                uVar10 = *(undefined8 *)pTVar6;
              }
            }
          }
          lVar12 = lVar12 + 1;
          pAVar7 = (Analysis *)FUN_053619f8(uVar10,uVar15);
          iVar5 = PlaceGlyphs(this,pAVar7,uVar11,(uint *)gLayoutScratchpad,
                              (GlyphAttributes *)(gLayoutScratchpad + 0x2000),param_9,fVar18,fVar17,
                              param_8 + uVar13 * 0x30);
          uVar13 = (ulong)(uint)((int)uVar13 + iVar5);
          if (uVar3 <= (uint)lVar12) goto LAB_05364560;
          uVar10 = *(undefined8 *)pTVar6;
          fVar17 = fVar17 + fVar16 * fVar19;
          uVar15 = uVar14;
        } while( true );
      }
      uVar13 = 0;
    }
  }
LAB_05364560:
  if (param_10 != (LayoutMetrics *)0x0) {
    *(uint *)param_10 = param_2;
    *(uint *)(param_10 + 8) = param_2;
    *(uint *)(param_10 + 0x18) = uVar3;
    *(float *)(param_10 + 0x10) = local_818;
    *(float *)(param_10 + 0x14) = local_814;
    fVar16 = (float)(int)uVar3 * (local_818 - local_814);
    *(float *)(param_10 + 4) = fVar16;
    *(float *)(param_10 + 0xc) = fVar16;
  }
  Thread::AutoFutex::~AutoFutex(aAStack_840);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar13);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::Layout::CalculateLineBreak(char16_t const*, unsigned int, float, EA::Text::TextStyle
   const*, EA::Text::LayoutMetrics*) */

void __thiscall
EA::Text::Layout::CalculateLineBreak
          (Layout *this,wchar16 *param_1,uint param_2,float param_3,TextStyle *param_4,
          LayoutMetrics *param_5)

{
  float *pfVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  TextState *pTVar6;
  Analysis *pAVar7;
  ulong uVar8;
  uint local_28;
  float local_24;
  AutoFutex aAStack_20 [8];
  TextRun aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Thread::AutoFutex::AutoFutex(aAStack_20,(Futex *)(gLayoutScratchpad + 0x1a000));
  TextRun::TextRun(aTStack_18,param_1,param_2);
  pTVar6 = (TextState *)GetLineBreakAnalysysArray();
  FUN_05361a2c(*(undefined8 *)pTVar6,pTVar6 + 8);
  cVar4 = FUN_053619dc(*(undefined8 *)(this + 0x40));
  if (cVar4 != '\0') {
    SetLayoutFonts(this,param_4,(LayoutSettings *)0x0,(FontServer *)0x0);
  }
  uVar5 = AnalyzeText((TextRun *)this,(uint)aTStack_18,(vector *)0x1,pTVar6);
  pAVar7 = (Analysis *)FUN_053619e8(*(undefined8 *)pTVar6);
  ShapeGlyphs(this,aTStack_18,1,(uint *)gLayoutScratchpad,pAVar7,uVar5,
              (GlyphAttributes *)(gLayoutScratchpad + 0x2000),0x400,
              (uint *)(gLayoutScratchpad + 0x1000));
  LineBreakText(this,aTStack_18,1,0,param_2,(uint *)gLayoutScratchpad,(vector *)pTVar6,
                (GlyphAttributes *)(gLayoutScratchpad + 0x2000),(uint *)(gLayoutScratchpad + 0x1000)
                ,param_3,&local_28,1,&local_24);
  uVar5 = local_28;
  if (param_5 != (LayoutMetrics *)0x0) {
    *(uint *)param_5 = local_28;
    *(undefined4 *)(param_5 + 0x18) = 1;
    *(float *)(param_5 + 4) = local_24;
    do {
      uVar3 = uVar5;
      if (uVar3 == 0) {
        *(undefined4 *)(param_5 + 8) = 0;
        *(float *)(param_5 + 0xc) = local_24;
        uVar5 = local_28;
        goto LAB_05364af8;
      }
      uVar5 = uVar3 - 1;
      cVar4 = IsSpace(param_1[uVar5],0xff,false);
    } while (cVar4 != '\0');
    *(uint *)(param_5 + 8) = uVar3;
    *(float *)(param_5 + 0xc) = local_24;
    uVar8 = (ulong)(*(int *)(gLayoutScratchpad + (ulong)uVar5 * 4) + 1) * 0x30 + 0x6bc7c70;
    uVar2 = (ulong)(*(int *)(gLayoutScratchpad + (ulong)(local_28 - 1) * 4) + 1) * 0x30 + 0x6bc7c70;
    uVar5 = local_28;
    if (uVar8 < uVar2) {
      do {
        pfVar1 = (float *)(uVar8 + 0x20);
        uVar8 = uVar8 + 0x30;
        local_24 = local_24 - *pfVar1;
      } while (uVar8 < uVar2);
      *(float *)(param_5 + 0xc) = local_24;
    }
  }
LAB_05364af8:
  Thread::AutoFutex::~AutoFutex(aAStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

