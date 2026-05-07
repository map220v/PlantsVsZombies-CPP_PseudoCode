// Class: EA::Text::WordBreakIterator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::WordBreakIterator::GetNextWordBreak(int) */

void EA::Text::WordBreakIterator::GetNextWordBreak(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  wchar16 wVar12;
  wchar16 wVar13;
  wchar16 wVar14;
  int iVar15;
  CharacterBreakIterator *this;
  undefined4 uVar16;
  CharacterBreakIterator aCStack_48 [64];
  long local_8;
  
  this = (CharacterBreakIterator *)(ulong)(uint)param_1;
  uVar16 = *(undefined4 *)(this + 0x30);
  uVar1 = *(undefined4 *)(this + 0x2c);
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_05412cec(uVar1,uVar16);
  if (cVar3 == '\0') {
    wVar12 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar1,uVar16);
LAB_05413248:
    do {
      CharacterBreakIterator::GetNextCharBreak(this);
      uVar1 = *(undefined4 *)(this + 0x2c);
      uVar16 = *(undefined4 *)(this + 0x30);
      wVar13 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar1,uVar16);
      cVar3 = FUN_05412cec(uVar1,uVar16);
      if (cVar3 != '\0') goto LAB_054131e8;
      wVar14 = wVar12;
      if ((1 < (ushort)(wVar12 + L'\xdff4')) && (iVar15 = GetCharCategory(wVar12), iVar15 == 2)) {
        CharacterBreakIterator::CharacterBreakIterator(aCStack_48,this);
        CharacterBreakIterator::GetPrevCharBreak(aCStack_48);
        while (cVar3 = BreakIteratorBase::AtBegin((BreakIteratorBase *)aCStack_48), cVar3 == '\0') {
          CharacterBreakIterator::GetPrevCharBreak(aCStack_48);
          wVar14 = BreakIteratorBase::operator*((BreakIteratorBase *)aCStack_48);
          if (((ushort)(wVar14 + L'\xdff4') < 2) || (iVar15 = GetCharCategory(wVar14), iVar15 != 2))
          break;
        }
      }
      wVar12 = wVar13;
    } while ((1 < (ushort)(wVar13 + L'\xdff4')) && (iVar15 = GetCharCategory(wVar13), iVar15 == 2));
    cVar3 = FUN_05412bf4(wVar14);
    cVar4 = FUN_05412bf4(wVar13);
    if (cVar4 == '\0') {
      if (cVar3 == '\0') goto LAB_054134a4;
      cVar5 = FUN_05412ad0(wVar13);
      if (cVar5 != '\0') {
        GetNextChar(this);
        cVar5 = FUN_05412bf4();
        if (cVar5 != '\0') goto LAB_05413248;
      }
      cVar6 = FUN_05412b9c(wVar13);
      cVar5 = '\0';
      if (cVar6 != '\0') goto LAB_05413248;
    }
    else {
      if (cVar3 != '\0') goto LAB_05413248;
LAB_054134a4:
      cVar5 = FUN_05412ad0(wVar14);
      if ((cVar5 != '\0') && (cVar4 != '\0')) {
        GetPrevChar(this);
        cVar5 = FUN_05412bf4();
        if (cVar5 != '\0') goto LAB_05413248;
      }
      cVar5 = FUN_05412b9c(wVar13);
    }
    cVar6 = FUN_05412b9c(wVar14);
    if (cVar6 != '\0') {
      if ((cVar5 != '\0') || (cVar4 != '\0')) goto LAB_05413248;
      cVar7 = FUN_05412b24(wVar13);
      if (cVar7 != '\0') {
        GetNextChar(this);
        cVar7 = FUN_05412b9c();
        if (cVar7 != '\0') goto LAB_05413248;
      }
    }
    cVar7 = FUN_05412b24(wVar14);
    if ((cVar7 != '\0') && (cVar5 != '\0')) {
      GetPrevChar(this);
      cVar7 = FUN_05412b9c();
      if (cVar7 != '\0') goto LAB_05413248;
    }
    cVar7 = FUN_05412a98(wVar14);
    cVar8 = FUN_05412a98(wVar13);
    if ((((cVar8 == '\0') || (cVar7 == '\0')) &&
        ((cVar9 = IsCharCategory(wVar13,0x400000), cVar9 == '\0' ||
         ((cVar6 == '\0' && cVar3 == '\0' && (cVar7 == '\0')))))) &&
       ((cVar3 = IsCharCategory(wVar14,0x400000), cVar3 == '\0' ||
        ((((cVar4 == '\0' && (cVar5 == '\0')) && (cVar8 == '\0')) && (cVar9 == '\0')))))) {
      if ((*(uint *)(this + 0x40) & 7) == 7) goto LAB_05413440;
      bVar10 = IsSpace(wVar14,0xff,false);
      bVar11 = IsSpace(wVar13,0xff,false);
      uVar2 = *(uint *)(this + 0x40);
      if ((bVar11 < bVar10) && ((uVar2 & 1) != 0)) goto LAB_05413440;
      if (((bVar10 < bVar11) && ((uVar2 >> 1 & 1) != 0)) ||
         ((((uVar2 >> 2 & 1) != 0 && (bVar10 != 0)) && (bVar11 != 0)))) goto LAB_05413440;
    }
    goto LAB_05413248;
  }
LAB_054131e8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_05412d18(uVar16);
  return;
LAB_05413440:
  uVar16 = *(undefined4 *)(this + 0x30);
  goto LAB_054131e8;
}


/* EA::Text::WordBreakIterator::GetPrevWordBreak(int) */

void EA::Text::WordBreakIterator::GetPrevWordBreak(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = (ulong)(uint)param_1;
  uVar3 = FUN_05412d18(*(undefined4 *)(uVar5 + 0x30));
  TextRunIterator::SetPosition((TextRunIterator *)(uVar5 + 8),0);
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    uVar1 = *(undefined4 *)(uVar5 + 0x30);
    cVar2 = FUN_05412cec(*(undefined4 *)(uVar5 + 0x2c),uVar1);
    if (cVar2 != '\0') {
      FUN_05412d18(uVar1,cVar2);
      return;
    }
    uVar4 = GetNextWordBreak(param_1);
  } while (uVar4 < uVar3);
  TextRunIterator::SetPosition((TextRunIterator *)(uVar5 + 8),uVar6);
  FUN_05412d18(*(undefined4 *)(uVar5 + 0x30));
  return;
}

