// Class: Sexy::RtRingItem<Sexy::RtNameTable::Entry>


/* Sexy::RtRingItem<Sexy::RtNameTable::Entry>::RtRingItem() */

void __thiscall
Sexy::RtRingItem<Sexy::RtNameTable::Entry>::RtRingItem(RtRingItem<Sexy::RtNameTable::Entry> *this)

{
  *(RtRingItem<Sexy::RtNameTable::Entry> **)(this + 8) = this;
  *(RtRingItem<Sexy::RtNameTable::Entry> **)this = this;
  return;
}


/* Sexy::RtRingItem<Sexy::RtNameTable::Entry>::RingUnlink() */

void __thiscall
Sexy::RtRingItem<Sexy::RtNameTable::Entry>::RingUnlink(RtRingItem<Sexy::RtNameTable::Entry> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *puVar1 = *(undefined8 *)this;
  *(undefined8 **)(*(long *)this + 8) = puVar1;
  *(RtRingItem<Sexy::RtNameTable::Entry> **)this = this;
  *(RtRingItem<Sexy::RtNameTable::Entry> **)(this + 8) = this;
  return;
}


/* Sexy::RtRingItem<Sexy::RtDbTable::Slot>::RingLinkBefore(Sexy::RtDbTable::Slot*) */

void __thiscall
Sexy::RtRingItem<Sexy::RtDbTable::Slot>::RingLinkBefore
          (RtRingItem<Sexy::RtDbTable::Slot> *this,Slot *param_1)

{
  long lVar1;
  
  RtRingItem<Sexy::RtNameTable::Entry>::RingUnlink((RtRingItem<Sexy::RtNameTable::Entry> *)this);
  lVar1 = *(long *)param_1;
  *(long *)this = lVar1;
  *(Slot **)(this + 8) = param_1;
  *(RtRingItem<Sexy::RtDbTable::Slot> **)(lVar1 + 8) = this;
  *(RtRingItem<Sexy::RtDbTable::Slot> **)param_1 = this;
  return;
}


/* Sexy::RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter(Sexy::RtNameTable::Entry*) */

void __thiscall
Sexy::RtRingItem<Sexy::RtNameTable::Entry>::RingLinkAfter
          (RtRingItem<Sexy::RtNameTable::Entry> *this,Entry *param_1)

{
  undefined8 *puVar1;
  
  RingUnlink(this);
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(this + 8) = puVar1;
  *(Entry **)this = param_1;
  *(RtRingItem<Sexy::RtNameTable::Entry> **)(param_1 + 8) = this;
  *puVar1 = this;
  return;
}


/* Sexy::RtRingItem<Sexy::RtNameTable::Entry>::~RtRingItem() */

void __thiscall
Sexy::RtRingItem<Sexy::RtNameTable::Entry>::~RtRingItem(RtRingItem<Sexy::RtNameTable::Entry> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 8);
  *puVar1 = *(undefined8 *)this;
  *(undefined8 **)(*(long *)this + 8) = puVar1;
  *(RtRingItem<Sexy::RtNameTable::Entry> **)this = this;
  *(RtRingItem<Sexy::RtNameTable::Entry> **)(this + 8) = this;
  return;
}

