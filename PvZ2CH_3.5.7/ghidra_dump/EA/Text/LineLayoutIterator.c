// Class: EA::Text::LineLayoutIterator


/* EA::Text::LineLayoutIterator::LineLayoutIterator(EA::Text::LineLayout const*) */

void __thiscall
EA::Text::LineLayoutIterator::LineLayoutIterator(LineLayoutIterator *this,LineLayout *param_1)

{
  *(LineLayout **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* EA::Text::LineLayoutIterator::Reset(EA::Text::LineLayout const*) */

void __thiscall EA::Text::LineLayoutIterator::Reset(LineLayoutIterator *this,LineLayout *param_1)

{
  if (param_1 != (LineLayout *)0x0) {
    *(LineLayout **)this = param_1;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}


/* EA::Text::LineLayoutIterator::GetNextTextStyleSegment(unsigned long&, unsigned long&) */

undefined8 __thiscall
EA::Text::LineLayoutIterator::GetNextTextStyleSegment
          (LineLayoutIterator *this,ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  LineLayout *pLVar6;
  long lVar7;
  
  pLVar6 = *(LineLayout **)this;
  uVar5 = *(undefined8 *)(pLVar6 + 0x80);
  uVar4 = *(ulong *)(this + 8);
  uVar1 = FUN_0536f3d8(uVar5,*(undefined8 *)(pLVar6 + 0x88));
  do {
    if (uVar1 <= uVar4) {
      *param_1 = uVar4;
      *param_2 = uVar4;
LAB_053705bc:
      *(ulong *)(this + 8) = uVar1;
      return 0;
    }
    pbVar2 = (byte *)FUN_0536f390(uVar5,uVar4);
    if ((*pbVar2 >> 4 & 1) == 0) {
      *param_1 = uVar4;
      *param_2 = uVar4;
      if (uVar1 <= uVar4) goto LAB_053705bc;
      uVar5 = LineLayout::GetCharIndexFromGlyphIndex(pLVar6,*param_1);
      pLVar6 = *(LineLayout **)this;
      plVar3 = (long *)FUN_0536f3ec(*(undefined8 *)(pLVar6 + 0x30),uVar5);
      lVar7 = *plVar3;
      break;
    }
    uVar4 = uVar4 + 1;
  } while( true );
  while( true ) {
    pLVar6 = *(LineLayout **)this;
    pbVar2 = (byte *)FUN_0536f390(*(undefined8 *)(pLVar6 + 0x80),uVar4);
    if ((*pbVar2 >> 4 & 1) != 0) break;
    uVar4 = uVar4 + 1;
    *param_2 = *param_2 + 1;
    if (uVar1 <= uVar4) break;
    uVar5 = LineLayout::GetCharIndexFromGlyphIndex(pLVar6,uVar4);
    plVar3 = (long *)FUN_0536f3ec(*(undefined8 *)(pLVar6 + 0x30),uVar5);
    if (*plVar3 != lVar7) break;
  }
  *(ulong *)(this + 8) = uVar4;
  return 1;
}


/* EA::Text::LineLayoutIterator::GetNextObject(unsigned long&) */

undefined8 __thiscall
EA::Text::LineLayoutIterator::GetNextObject(LineLayoutIterator *this,ulong *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)this + 0x80);
  uVar3 = *(ulong *)(this + 8);
  uVar1 = FUN_0536f3d8(uVar4,*(undefined8 *)(*(long *)this + 0x88));
  while( true ) {
    if (uVar1 <= uVar3) {
      *(ulong *)(this + 8) = uVar1;
      return 0;
    }
    pbVar2 = (byte *)FUN_0536f390(uVar4,uVar3);
    if ((*pbVar2 >> 4 & 1) != 0) break;
    uVar3 = uVar3 + 1;
  }
  *param_1 = uVar3;
  *(ulong *)(this + 8) = uVar3 + 1;
  return 1;
}

