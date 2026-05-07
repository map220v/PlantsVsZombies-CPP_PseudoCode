// Class: S2C_PlayerGetAvatarInfo


/* S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo() */

void __thiscall S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo(S2C_PlayerGetAvatarInfo *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)this);
  return;
}


/* S2C_PlayerGetAvatarInfo::TEMPNAMEPLACEHOLDERVALUE(S2C_PlayerGetAvatarInfo const&) */

S2C_PlayerGetAvatarInfo * __thiscall
S2C_PlayerGetAvatarInfo::operator=(S2C_PlayerGetAvatarInfo *this,S2C_PlayerGetAvatarInfo *param_1)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)this,(vector *)param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  return this;
}

