// Class: EA::Text::LayoutScratchpad


/* EA::Text::LayoutScratchpad::~LayoutScratchpad() */

void __thiscall EA::Text::LayoutScratchpad::~LayoutScratchpad(LayoutScratchpad *this)

{
  Thread::Futex::~Futex((Futex *)(this + 0x1a000));
  return;
}


/* EA::Text::LayoutScratchpad::LayoutScratchpad() */

void __thiscall EA::Text::LayoutScratchpad::LayoutScratchpad(LayoutScratchpad *this)

{
  Thread::Futex::Futex((Futex *)(this + 0x1a000));
  return;
}

