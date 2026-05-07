// Class: RelocationEvent


/* RelocationEvent::reset() */

void __thiscall RelocationEvent::reset(RelocationEvent *this)

{
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x1c] = (RelocationEvent)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x43480000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* RelocationEvent::RelocationEvent() */

void __thiscall RelocationEvent::RelocationEvent(RelocationEvent *this)

{
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x24));
  reset(this);
  return;
}

