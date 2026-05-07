// Class: MutatorTable


/* MutatorTable::~MutatorTable() */

void __thiscall MutatorTable::~MutatorTable(MutatorTable *this)

{
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x20));
  std::vector<MutatorGridEntry,std::allocator<MutatorGridEntry>>::~vector
            ((vector<MutatorGridEntry,std::allocator<MutatorGridEntry>> *)(this + 8));
  return;
}


/* MutatorTable::MutatorTable() */

void __thiscall MutatorTable::MutatorTable(MutatorTable *this)

{
  *(undefined4 *)(this + 4) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}

