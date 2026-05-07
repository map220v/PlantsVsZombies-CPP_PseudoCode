// Class: Sexy::RtNameTable::Entry


/* Sexy::RtNameTable::Entry::Entry() */

void __thiscall Sexy::RtNameTable::Entry::Entry(Entry *this)

{
  RtRingItem<Sexy::RtNameTable::Entry>::RtRingItem((RtRingItem<Sexy::RtNameTable::Entry> *)this);
  FUN_05476574(this + 0x18);
  return;
}


/* Sexy::RtNameTable::Entry::~Entry() */

void __thiscall Sexy::RtNameTable::Entry::~Entry(Entry *this)

{
  FUN_05476c50(this + 0x18);
  RtRingItem<Sexy::RtNameTable::Entry>::~RtRingItem((RtRingItem<Sexy::RtNameTable::Entry> *)this);
  return;
}

