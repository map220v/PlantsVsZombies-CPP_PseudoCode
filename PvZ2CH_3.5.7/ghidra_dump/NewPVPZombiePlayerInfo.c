// Class: NewPVPZombiePlayerInfo


/* NewPVPZombiePlayerInfo::~NewPVPZombiePlayerInfo() */

void __thiscall NewPVPZombiePlayerInfo::~NewPVPZombiePlayerInfo(NewPVPZombiePlayerInfo *this)

{
  std::vector<NewPVPZombiePieceInfo,std::allocator<NewPVPZombiePieceInfo>>::~vector
            ((vector<NewPVPZombiePieceInfo,std::allocator<NewPVPZombiePieceInfo>> *)(this + 0x30));
  std::vector<NewPVPZombiePacketLevelInfo,std::allocator<NewPVPZombiePacketLevelInfo>>::~vector
            ((vector<NewPVPZombiePacketLevelInfo,std::allocator<NewPVPZombiePacketLevelInfo>> *)
             (this + 0x18));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)this);
  return;
}


/* NewPVPZombiePlayerInfo::TEMPNAMEPLACEHOLDERVALUE(NewPVPZombiePlayerInfo const&) */

NewPVPZombiePlayerInfo * __thiscall
NewPVPZombiePlayerInfo::operator=(NewPVPZombiePlayerInfo *this,NewPVPZombiePlayerInfo *param_1)

{
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)this,(vector *)param_1);
  std::vector<NewPVPZombiePacketLevelInfo,std::allocator<NewPVPZombiePacketLevelInfo>>::operator=
            ((vector<NewPVPZombiePacketLevelInfo,std::allocator<NewPVPZombiePacketLevelInfo>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<NewPVPZombiePieceInfo,std::allocator<NewPVPZombiePieceInfo>>::operator=
            ((vector<NewPVPZombiePieceInfo,std::allocator<NewPVPZombiePieceInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}

