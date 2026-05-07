// Class: EA::Text::SentenceBreakIterator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::SentenceBreakIterator::GetNextSentenceBreak() */

void __thiscall EA::Text::SentenceBreakIterator::GetNextSentenceBreak(SentenceBreakIterator *this)

{
  undefined4 uVar1;
  char cVar2;
  wchar16 wVar3;
  wchar16 wVar4;
  int iVar5;
  wchar16 wVar6;
  undefined4 uVar7;
  CharacterBreakIterator aCStack_48 [64];
  long local_8;
  
  uVar7 = *(undefined4 *)(this + 0x30);
  uVar1 = *(undefined4 *)(this + 0x2c);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_05412cec(uVar1,uVar7);
  if (cVar2 == '\0') {
    wVar3 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar1,uVar7);
LAB_05413654:
    do {
      do {
        CharacterBreakIterator::GetNextCharBreak((CharacterBreakIterator *)this);
        uVar1 = *(undefined4 *)(this + 0x2c);
        uVar7 = *(undefined4 *)(this + 0x30);
        wVar4 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar1,uVar7);
        cVar2 = FUN_05412cec(uVar1,uVar7);
        if ((((cVar2 != '\0') || (wVar3 == L'\r')) || (wVar3 == L'\n')) ||
           (((ushort)(wVar3 + L'\xdfd8') < 2 || (wVar3 == L'\x85')))) goto LAB_054135ec;
        wVar6 = wVar3;
        if ((1 < (ushort)(wVar3 + L'\xdff4')) && (iVar5 = GetCharCategory(wVar3), iVar5 == 2)) {
          CharacterBreakIterator::CharacterBreakIterator(aCStack_48,(CharacterBreakIterator *)this);
          CharacterBreakIterator::GetPrevCharBreak(aCStack_48);
          while (cVar2 = BreakIteratorBase::AtBegin((BreakIteratorBase *)aCStack_48), wVar6 = wVar3,
                cVar2 == '\0') {
            CharacterBreakIterator::GetPrevCharBreak(aCStack_48);
            wVar3 = BreakIteratorBase::operator*((BreakIteratorBase *)aCStack_48);
            wVar6 = wVar3;
            if (((ushort)(wVar3 + L'\xdff4') < 2) || (iVar5 = GetCharCategory(wVar3), iVar5 != 2))
            break;
          }
        }
        wVar3 = wVar4;
      } while ((1 < (ushort)(wVar4 + L'\xdff4')) && (iVar5 = GetCharCategory(wVar4), iVar5 == 2));
      if (wVar6 == L'.') {
        cVar2 = FUN_05412b9c(wVar4);
        if (cVar2 != '\0') goto LAB_05413654;
        cVar2 = FUN_05412d60(wVar4);
        if (cVar2 != '\0') {
          GetPrevChar((CharacterBreakIterator *)this);
          cVar2 = FUN_05412d60();
          if (cVar2 != '\0') goto LAB_05413654;
        }
      }
      cVar2 = IsCharSTerm(wVar6);
    } while (cVar2 == '\0');
    uVar7 = *(undefined4 *)(this + 0x30);
  }
LAB_054135ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  FUN_05412d18(uVar7);
  return;
}


/* EA::Text::SentenceBreakIterator::GetPrevSentenceBreak() */

void __thiscall EA::Text::SentenceBreakIterator::GetPrevSentenceBreak(SentenceBreakIterator *this)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = FUN_05412d18(*(undefined4 *)(this + 0x30));
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),0);
  uVar4 = 0;
  do {
    uVar5 = uVar4;
    uVar1 = *(undefined4 *)(this + 0x30);
    cVar2 = FUN_05412cec(*(undefined4 *)(this + 0x2c),uVar1);
    if (cVar2 != '\0') {
      FUN_05412d18(uVar1);
      return;
    }
    uVar4 = GetNextSentenceBreak(this);
  } while (uVar4 < uVar3);
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),uVar5);
  FUN_05412d18(*(undefined4 *)(this + 0x30));
  return;
}

