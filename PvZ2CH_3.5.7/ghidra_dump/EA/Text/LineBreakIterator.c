// Class: EA::Text::LineBreakIterator


/* EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak(char16_t&, char16_t&,
   EA::Text::LineBreakCategory&, EA::Text::LineBreakCategory&, EA::Text::LineBreakCategory&) */

undefined8
EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
          (wchar16 *param_1,wchar16 *param_2,LineBreakCategory *param_3,LineBreakCategory *param_4,
          LineBreakCategory *param_5)

{
  return 0;
}


/* EA::Text::LineBreakIterator::GetNextBreak() */

void __thiscall EA::Text::LineBreakIterator::GetNextBreak(LineBreakIterator *this)

{
  GetNextLineBreak(this,*(int *)(this + 0x40));
  return;
}


/* EA::Text::LineBreakIterator::GetPrevBreak() */

void __thiscall EA::Text::LineBreakIterator::GetPrevBreak(LineBreakIterator *this)

{
  GetPrevLineBreak(this,*(int *)(this + 0x40));
  return;
}


/* EA::Text::LineBreakIterator::LineBreakIterator(EA::Text::TextRunIterator const&,
   EA::Text::LayoutContext const*) */

void __thiscall
EA::Text::LineBreakIterator::LineBreakIterator
          (LineBreakIterator *this,TextRunIterator *param_1,LayoutContext *param_2)

{
  CharacterBreakIterator::CharacterBreakIterator((CharacterBreakIterator *)this,param_1,param_2);
  *(undefined4 *)(this + 0x40) = 0xc;
  this[0x44] = (LineBreakIterator)0x1;
  *(undefined ***)this = &PTR_nop_06a36850;
  return;
}


/* EA::Text::LineBreakIterator::LineBreakIterator(EA::Text::TextRun const*, unsigned int,
   EA::Text::LayoutContext const*) */

void __thiscall
EA::Text::LineBreakIterator::LineBreakIterator
          (LineBreakIterator *this,TextRun *param_1,uint param_2,LayoutContext *param_3)

{
  CharacterBreakIterator::CharacterBreakIterator
            ((CharacterBreakIterator *)this,param_1,param_2,param_3);
  *(undefined4 *)(this + 0x40) = 0xc;
  this[0x44] = (LineBreakIterator)0x1;
  *(undefined ***)this = &PTR_nop_06a36850;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::LineBreakIterator::GetNextLineBreak(int) */

void __thiscall EA::Text::LineBreakIterator::GetNextLineBreak(LineBreakIterator *this,int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  wchar16 local_18;
  wchar16 local_16;
  uint local_14;
  uint local_10;
  uint local_c;
  long local_8;
  
  uVar5 = *(undefined4 *)(this + 0x30);
  uVar4 = *(undefined4 *)(this + 0x2c);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_05412cec(uVar4,uVar5);
  if (cVar2 == '\0') {
    local_18 = FUN_05412cf8(*(undefined8 *)(this + 0x20),uVar4,uVar5);
    TextRunIterator::operator++((TextRunIterator *)(this + 8));
    local_16 = FUN_05412cf8(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x2c),
                            *(undefined4 *)(this + 0x30));
    local_10 = FUN_05412c98(local_18);
    local_14 = local_10;
    if (local_10 != 0x1f) {
      if (local_10 == 0x1b) {
        local_14 = 0xb;
      }
      local_c = FUN_05412c98(local_16);
      if (this[0x44] != (LineBreakIterator)0x0) {
        if (local_14 - 0x15 < 5) {
          local_10 = 0xb;
          local_14 = 0xb;
        }
        if (local_c - 0x15 < 5) {
          local_c = 0xb;
        }
      }
      uVar1 = param_1 & 4;
LAB_05413acc:
      uVar5 = *(undefined4 *)(this + 0x30);
      cVar2 = FUN_05412cec(*(undefined4 *)(this + 0x2c),uVar5);
      if (((cVar2 != '\0') || (local_14 == 0x1d)) || ((local_c != 0x1f && (local_14 == 0x1e))))
      goto LAB_05413b04;
      if (local_c != 0x1b) {
        if ((local_c & 0xfffffffd) == 0x1d) {
          local_14 = 0x1d;
        }
        else {
          if (local_c != 0x1e) {
            if ((local_c == 0x1a) || (local_14 == 0x1a)) {
              if (uVar1 != 0) {
                if (local_14 == 0x1a) {
                  iVar3 = GetNextSoutheastAsianLineBreak
                                    ((wchar16 *)this,&local_18,(LineBreakCategory *)&local_16,
                                     (LineBreakCategory *)&local_14,(LineBreakCategory *)&local_10);
                  if (iVar3 == 0) {
                    uVar5 = *(undefined4 *)(this + 0x30);
                    cVar2 = FUN_05412cec(*(undefined4 *)(this + 0x2c),uVar5);
                    uVar4 = 8;
                    if (cVar2 == '\0') {
                      uVar4 = 4;
                    }
                    *(undefined4 *)(this + 0x40) = uVar4;
                  }
                  else {
                    *(int *)(this + 0x40) = iVar3;
                    uVar5 = *(undefined4 *)(this + 0x30);
                  }
                }
                else {
                  cVar2 = (&DAT_05769ba0)[(long)(int)local_14 * 0x1b + (long)(int)local_c];
                  if (cVar2 == '\x01') goto LAB_05413c48;
                  if ((cVar2 != '\x06') && (cVar2 != '\0')) goto LAB_05413bbc;
LAB_05413c10:
                  *(undefined4 *)(this + 0x40) = 4;
                }
                goto LAB_05413a20;
              }
              if ((param_1 & 1U) == 0) goto LAB_05413b28;
            }
            else {
              cVar2 = (&DAT_05769ba0)[(long)(int)local_14 * 0x1b + (long)(int)local_c];
              if (cVar2 == '\x01') {
                if (uVar1 != 0) {
LAB_05413c48:
                  if (local_10 == 0x1b) goto LAB_05413c10;
                }
              }
              else {
                if ((cVar2 != '\x06') && (cVar2 != '\0')) {
LAB_05413bbc:
                  if (cVar2 != '\x03') {
                    if (cVar2 == '\x02') {
                      if (local_10 == 0x1b) goto LAB_05413c28;
                      goto LAB_05413b28;
                    }
                    if (cVar2 != '\x05') goto joined_r0x05413c54;
                    goto LAB_05413b04;
                  }
                  if (local_10 == 0x1b) goto joined_r0x05413c54;
                  goto LAB_05413b28;
                }
LAB_05413c28:
                if (uVar1 != 0) goto LAB_05413c10;
              }
joined_r0x05413c54:
              if ((param_1 & 1U) == 0) goto LAB_05413bd8;
            }
            *(undefined4 *)(this + 0x40) = 1;
            goto LAB_05413a20;
          }
LAB_05413bd8:
          local_14 = local_c;
        }
      }
LAB_05413b28:
      local_18 = local_16;
      TextRunIterator::operator++((TextRunIterator *)(this + 8));
      local_16 = FUN_05412cf8(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x2c),
                              *(undefined4 *)(this + 0x30));
      local_10 = local_c;
      local_c = FUN_05412c98();
      if ((this[0x44] != (LineBreakIterator)0x0) && (local_c - 0x15 < 5)) {
        local_c = 0xb;
      }
      goto LAB_05413acc;
    }
    uVar5 = *(undefined4 *)(this + 0x30);
LAB_05413b04:
    *(undefined4 *)(this + 0x40) = 8;
  }
LAB_05413a20:
  if (local_8 == ___stack_chk_guard) {
    FUN_05412d18(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EA::Text::LineBreakIterator::GetPrevLineBreak(int) */

void __thiscall EA::Text::LineBreakIterator::GetPrevLineBreak(LineBreakIterator *this,int param_1)

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
    uVar4 = GetNextLineBreak(this,param_1);
  } while (uVar4 < uVar3);
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),uVar5);
  FUN_05412d18(*(undefined4 *)(this + 0x30));
  return;
}

