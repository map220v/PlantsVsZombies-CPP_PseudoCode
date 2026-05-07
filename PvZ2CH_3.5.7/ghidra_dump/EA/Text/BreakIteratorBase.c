// Class: EA::Text::BreakIteratorBase


/* EA::Text::BreakIteratorBase::BreakIteratorBase(EA::Text::TextRunIterator const&,
   EA::Text::LayoutContext const*) */

void __thiscall
EA::Text::BreakIteratorBase::BreakIteratorBase
          (BreakIteratorBase *this,TextRunIterator *param_1,LayoutContext *param_2)

{
  *(undefined **)this = &DAT_06a367f0;
  TextRunIterator::TextRunIterator((TextRunIterator *)(this + 8),param_1);
  *(LayoutContext **)(this + 0x38) = param_2;
  return;
}


/* EA::Text::BreakIteratorBase::BreakIteratorBase(EA::Text::TextRun const*, unsigned int,
   EA::Text::LayoutContext const*) */

void __thiscall
EA::Text::BreakIteratorBase::BreakIteratorBase
          (BreakIteratorBase *this,TextRun *param_1,uint param_2,LayoutContext *param_3)

{
  *(undefined **)this = &DAT_06a367f0;
  TextRunIterator::TextRunIterator((TextRunIterator *)(this + 8),param_1,param_2,0,0,0xffffffff);
  *(LayoutContext **)(this + 0x38) = param_3;
  return;
}


/* EA::Text::BreakIteratorBase::AtBegin() const */

void __thiscall EA::Text::BreakIteratorBase::AtBegin(BreakIteratorBase *this)

{
  FUN_05412ce0(*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x30));
  return;
}


/* EA::Text::BreakIteratorBase::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall EA::Text::BreakIteratorBase::operator*(BreakIteratorBase *this)

{
  FUN_05412cf8(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x2c),
               *(undefined4 *)(this + 0x30));
  return;
}


/* EA::Text::BreakIteratorBase::SetPosition(unsigned int) */

void __thiscall EA::Text::BreakIteratorBase::SetPosition(BreakIteratorBase *this,uint param_1)

{
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),param_1);
  FUN_05412d18(*(undefined4 *)(this + 0x30));
  return;
}


/* EA::Text::BreakIteratorBase::SetRelativePosition(int) */

void __thiscall
EA::Text::BreakIteratorBase::SetRelativePosition(BreakIteratorBase *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_05412d18(*(undefined4 *)(this + 0x30));
  TextRunIterator::SetPosition((TextRunIterator *)(this + 8),iVar1 + param_1);
  FUN_05412d18(*(undefined4 *)(this + 0x30));
  return;
}


/* EA::Text::BreakIteratorBase::BreakIteratorBase(EA::Text::BreakIteratorBase const&) */

void __thiscall
EA::Text::BreakIteratorBase::BreakIteratorBase(BreakIteratorBase *this,BreakIteratorBase *param_1)

{
  *(undefined **)this = &DAT_06a367f0;
  TextRunIterator::TextRunIterator((TextRunIterator *)(this + 8),(TextRunIterator *)(param_1 + 8));
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  return;
}

