// Class: JoustLeaderboardData


/* JoustLeaderboardData::JoustLeaderboardData(JoustLeaderboardData const&) */

void __thiscall
JoustLeaderboardData::JoustLeaderboardData(JoustLeaderboardData *this,JoustLeaderboardData *param_1)

{
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::vector
            ((vector<JoustPlayerData,std::allocator<JoustPlayerData>> *)this,(vector *)param_1);
  JoustLocalPlayerData::JoustLocalPlayerData
            ((JoustLocalPlayerData *)(this + 0x18),(JoustLocalPlayerData *)(param_1 + 0x18));
  return;
}


/* JoustLeaderboardData::~JoustLeaderboardData() */

void __thiscall JoustLeaderboardData::~JoustLeaderboardData(JoustLeaderboardData *this)

{
  JoustLocalPlayerData::~JoustLocalPlayerData((JoustLocalPlayerData *)(this + 0x18));
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::~vector
            ((vector<JoustPlayerData,std::allocator<JoustPlayerData>> *)this);
  return;
}


/* JoustLeaderboardData::JoustLeaderboardData() */

void __thiscall JoustLeaderboardData::JoustLeaderboardData(JoustLeaderboardData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  JoustLocalPlayerData::JoustLocalPlayerData((JoustLocalPlayerData *)(this + 0x18));
  return;
}

