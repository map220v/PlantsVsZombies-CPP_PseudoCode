// Class: EA::Text::CharacterBreakIterator


/* EA::Text::CharacterBreakIterator::GetNextBreak() */

void __thiscall EA::Text::CharacterBreakIterator::GetNextBreak(CharacterBreakIterator *this)

{
  wchar16 wVar1;
  char cVar2;
  wchar16 wVar3;
  wchar16 wVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = *(undefined4 *)(this + 0x30);
  uVar8 = *(undefined4 *)(this + 0x2c);
  cVar2 = FUN_05412cec(uVar8,uVar7);
  if (cVar2 == '\0') {
    wVar3 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar8,uVar7);
    TextRunIterator::operator++((TextRunIterator *)(this + 8));
    uVar8 = *(undefined4 *)(this + 0x2c);
    uVar7 = *(undefined4 *)(this + 0x30);
    wVar4 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar8,uVar7);
    while (wVar1 = wVar4, cVar2 = FUN_05412cec(uVar8,uVar7), cVar2 == '\0') {
      if (wVar3 == L'\r') {
        if (wVar1 == L'\n') goto LAB_05412e94;
        break;
      }
      cVar2 = FUN_05412d1c(wVar3);
      if ((((cVar2 != '\0') || (wVar3 == L'\n')) || (cVar2 = FUN_05412d1c(wVar1), cVar2 != '\0')) ||
         ((wVar1 == L'\n' || (wVar1 == L'\r')))) goto switchD_05412f54_default;
      cVar2 = IsGraphemeExtend(wVar1);
      if (cVar2 != '\0') goto LAB_05412e94;
      iVar5 = GetHangulSyllableType(wVar3);
      if ((iVar5 == 0) || (iVar6 = GetHangulSyllableType(wVar1), iVar6 == 0)) {
switchD_05412f54_default:
        uVar7 = *(undefined4 *)(this + 0x30);
LAB_05412f64:
        FUN_05412d18(uVar7);
        return;
      }
      switch(iVar5) {
      case 1:
        if (iVar6 == 3) {
          uVar7 = *(undefined4 *)(this + 0x30);
          goto LAB_05412f64;
        }
        break;
      case 2:
      case 4:
        if (1 < iVar6 - 2U) {
          uVar7 = *(undefined4 *)(this + 0x30);
          goto LAB_05412f64;
        }
        break;
      case 3:
      case 5:
        if (iVar6 != 3) goto switchD_05412f54_default;
        break;
      default:
        goto switchD_05412f54_default;
      }
LAB_05412e94:
      TextRunIterator::operator++((TextRunIterator *)(this + 8));
      uVar8 = *(undefined4 *)(this + 0x2c);
      uVar7 = *(undefined4 *)(this + 0x30);
      wVar4 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar8,uVar7);
      wVar3 = wVar1;
    }
  }
  FUN_05412d18(uVar7);
  return;
}


/* EA::Text::CharacterBreakIterator::GetPrevBreak() */

void __thiscall EA::Text::CharacterBreakIterator::GetPrevBreak(CharacterBreakIterator *this)

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
    uVar4 = GetNextCharBreak(this);
  } while (uVar4 < uVar3);
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),uVar5);
  FUN_05412d18(*(undefined4 *)(this + 0x30));
  return;
}


/* EA::Text::CharacterBreakIterator::CharacterBreakIterator(EA::Text::TextRunIterator const&,
   EA::Text::LayoutContext const*) */

void __thiscall
EA::Text::CharacterBreakIterator::CharacterBreakIterator
          (CharacterBreakIterator *this,TextRunIterator *param_1,LayoutContext *param_2)

{
  BreakIteratorBase::BreakIteratorBase((BreakIteratorBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_nop_06a36820;
  return;
}


/* EA::Text::CharacterBreakIterator::CharacterBreakIterator(EA::Text::TextRun const*, unsigned int,
   EA::Text::LayoutContext const*) */

void __thiscall
EA::Text::CharacterBreakIterator::CharacterBreakIterator
          (CharacterBreakIterator *this,TextRun *param_1,uint param_2,LayoutContext *param_3)

{
  BreakIteratorBase::BreakIteratorBase((BreakIteratorBase *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_nop_06a36820;
  return;
}


/* EA::Text::CharacterBreakIterator::GetNextCharBreak() */

void __thiscall EA::Text::CharacterBreakIterator::GetNextCharBreak(CharacterBreakIterator *this)

{
  wchar16 wVar1;
  char cVar2;
  wchar16 wVar3;
  wchar16 wVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = *(undefined4 *)(this + 0x30);
  uVar8 = *(undefined4 *)(this + 0x2c);
  cVar2 = FUN_05412cec(uVar8,uVar7);
  if (cVar2 == '\0') {
    wVar3 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar8,uVar7);
    TextRunIterator::operator++((TextRunIterator *)(this + 8));
    uVar8 = *(undefined4 *)(this + 0x2c);
    uVar7 = *(undefined4 *)(this + 0x30);
    wVar4 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar8,uVar7);
    while (wVar1 = wVar4, cVar2 = FUN_05412cec(uVar8,uVar7), cVar2 == '\0') {
      if (wVar3 == L'\r') {
        if (wVar1 == L'\n') goto LAB_05412e94;
        break;
      }
      cVar2 = FUN_05412d1c(wVar3);
      if ((((cVar2 != '\0') || (wVar3 == L'\n')) || (cVar2 = FUN_05412d1c(wVar1), cVar2 != '\0')) ||
         ((wVar1 == L'\n' || (wVar1 == L'\r')))) goto switchD_05412f54_default;
      cVar2 = IsGraphemeExtend(wVar1);
      if (cVar2 != '\0') goto LAB_05412e94;
      iVar5 = GetHangulSyllableType(wVar3);
      if ((iVar5 == 0) || (iVar6 = GetHangulSyllableType(wVar1), iVar6 == 0)) {
switchD_05412f54_default:
        uVar7 = *(undefined4 *)(this + 0x30);
LAB_05412f64:
        FUN_05412d18(uVar7);
        return;
      }
      switch(iVar5) {
      case 1:
        if (iVar6 == 3) {
          uVar7 = *(undefined4 *)(this + 0x30);
          goto LAB_05412f64;
        }
        break;
      case 2:
      case 4:
        if (1 < iVar6 - 2U) {
          uVar7 = *(undefined4 *)(this + 0x30);
          goto LAB_05412f64;
        }
        break;
      case 3:
      case 5:
        if (iVar6 != 3) goto switchD_05412f54_default;
        break;
      default:
        goto switchD_05412f54_default;
      }
LAB_05412e94:
      TextRunIterator::operator++((TextRunIterator *)(this + 8));
      uVar8 = *(undefined4 *)(this + 0x2c);
      uVar7 = *(undefined4 *)(this + 0x30);
      wVar4 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar8,uVar7);
      wVar3 = wVar1;
    }
  }
  FUN_05412d18(uVar7);
  return;
}


/* EA::Text::CharacterBreakIterator::GetPrevCharBreak() */

void __thiscall EA::Text::CharacterBreakIterator::GetPrevCharBreak(CharacterBreakIterator *this)

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
    uVar4 = GetNextCharBreak(this);
  } while (uVar4 < uVar3);
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),uVar5);
  FUN_05412d18(*(undefined4 *)(this + 0x30));
  return;
}


/* EA::Text::CharacterBreakIterator::CharacterBreakIterator(EA::Text::CharacterBreakIterator const&)
    */

void __thiscall
EA::Text::CharacterBreakIterator::CharacterBreakIterator
          (CharacterBreakIterator *this,CharacterBreakIterator *param_1)

{
  BreakIteratorBase::BreakIteratorBase((BreakIteratorBase *)this,(BreakIteratorBase *)param_1);
  *(undefined ***)this = &PTR_nop_06a36820;
  return;
}

