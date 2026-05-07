// Class: RiftLeaderboardData


/* RiftLeaderboardData::~RiftLeaderboardData() */

void __thiscall RiftLeaderboardData::~RiftLeaderboardData(RiftLeaderboardData *this)

{
  RiftLocalPlayerData::~RiftLocalPlayerData((RiftLocalPlayerData *)(this + 0x18));
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::~vector
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)this);
  return;
}


/* RiftLeaderboardData::RiftLeaderboardData(RiftLeaderboardData const&) */

void __thiscall
RiftLeaderboardData::RiftLeaderboardData(RiftLeaderboardData *this,RiftLeaderboardData *param_1)

{
  std::vector<RiftPlayerData,std::allocator<RiftPlayerData>>::vector
            ((vector<RiftPlayerData,std::allocator<RiftPlayerData>> *)this,(vector *)param_1);
  RiftLocalPlayerData::RiftLocalPlayerData
            ((RiftLocalPlayerData *)(this + 0x18),(RiftLocalPlayerData *)(param_1 + 0x18));
  return;
}


/* RiftLeaderboardData::RiftLeaderboardData() */

void __thiscall RiftLeaderboardData::RiftLeaderboardData(RiftLeaderboardData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  RiftLocalPlayerData::RiftLocalPlayerData((RiftLocalPlayerData *)(this + 0x18));
  return;
}

