// Class: EA::Text::ParagraphBreakIterator


/* EA::Text::ParagraphBreakIterator::GetNextParagraphBreak() */

void __thiscall
EA::Text::ParagraphBreakIterator::GetNextParagraphBreak(ParagraphBreakIterator *this)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(this + 0x30);
  uVar5 = *(undefined4 *)(this + 0x2c);
  cVar1 = FUN_05412cec(uVar5,uVar4);
  if (cVar1 == '\0') {
    sVar2 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar5,uVar4);
    TextRunIterator::operator++((TextRunIterator *)(this + 8));
    uVar5 = *(undefined4 *)(this + 0x2c);
    uVar4 = *(undefined4 *)(this + 0x30);
    while( true ) {
      sVar3 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar5,uVar4);
      cVar1 = FUN_05412cec(uVar5,uVar4);
      if (cVar1 != '\0') break;
      if (sVar2 == 0xd) {
        if (sVar3 != 10) break;
      }
      else if ((sVar2 == 10) || (sVar2 == 0x2029)) break;
      TextRunIterator::operator++((TextRunIterator *)(this + 8));
      uVar5 = *(undefined4 *)(this + 0x2c);
      uVar4 = *(undefined4 *)(this + 0x30);
      sVar2 = sVar3;
    }
  }
  FUN_05412d18(uVar4);
  return;
}


/* EA::Text::ParagraphBreakIterator::GetPrevParagraphBreak() */

void __thiscall
EA::Text::ParagraphBreakIterator::GetPrevParagraphBreak(ParagraphBreakIterator *this)

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
    uVar4 = GetNextParagraphBreak(this);
  } while (uVar4 < uVar3);
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),uVar5);
  FUN_05412d18(*(undefined4 *)(this + 0x30));
  return;
}

