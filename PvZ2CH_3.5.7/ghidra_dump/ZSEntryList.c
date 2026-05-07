// Class: ZSEntryList


/* ZSEntryList::~ZSEntryList() */

void __thiscall ZSEntryList::~ZSEntryList(ZSEntryList *this)

{
  std::_Destroy<Sexy::ResStreamsUnpacker::GroupInfo*>(*(GroupInfo **)this,*(GroupInfo **)(this + 8))
  ;
  std::_Vector_base<ZombieSpawnerEntry,std::allocator<ZombieSpawnerEntry>>::~_Vector_base
            ((_Vector_base<ZombieSpawnerEntry,std::allocator<ZombieSpawnerEntry>> *)this);
  return;
}


/* ZSEntryList::ZSEntryList() */

void __thiscall ZSEntryList::ZSEntryList(ZSEntryList *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0x41200000;
  return;
}


/* ZSEntryList::ZSEntryList(ZSEntryList&&) */

void __thiscall ZSEntryList::ZSEntryList(ZSEntryList *this,ZSEntryList *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}

