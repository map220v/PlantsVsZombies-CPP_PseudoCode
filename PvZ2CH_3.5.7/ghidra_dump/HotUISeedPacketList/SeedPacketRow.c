// Class: HotUISeedPacketList::SeedPacketRow


/* HotUISeedPacketList::SeedPacketRow::~SeedPacketRow() */

void __thiscall HotUISeedPacketList::SeedPacketRow::~SeedPacketRow(SeedPacketRow *this)

{
  std::vector<HotUISeedPacket*,std::allocator<HotUISeedPacket*>>::~vector
            ((vector<HotUISeedPacket*,std::allocator<HotUISeedPacket*>> *)(this + 8));
  return;
}


/* HotUISeedPacketList::SeedPacketRow::SeedPacketRow(HotUISeedPacketList::SeedPacketRow const&) */

void __thiscall
HotUISeedPacketList::SeedPacketRow::SeedPacketRow(SeedPacketRow *this,SeedPacketRow *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::vector<HotUISeedPacket*,std::allocator<HotUISeedPacket*>>::vector
            ((vector<HotUISeedPacket*,std::allocator<HotUISeedPacket*>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}

