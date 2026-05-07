// Class: Sexy::RtDbTable::Slot


/* Sexy::RtDbTable::Slot::Slot() */

void __thiscall Sexy::RtDbTable::Slot::Slot(Slot *this)

{
  RtRingItem<Sexy::RtNameTable::Entry>::RtRingItem((RtRingItem<Sexy::RtNameTable::Entry> *)this);
  ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x20));
  return;
}


/* Sexy::RtDbTable::Slot::~Slot() */

void __thiscall Sexy::RtDbTable::Slot::~Slot(Slot *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *puVar1 = *(undefined8 *)this;
  *(undefined8 **)(*(long *)this + 8) = puVar1;
  *(Slot **)this = this;
  *(Slot **)(this + 8) = this;
  return;
}

