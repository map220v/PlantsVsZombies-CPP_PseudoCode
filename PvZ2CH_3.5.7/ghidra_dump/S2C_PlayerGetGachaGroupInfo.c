// Class: S2C_PlayerGetGachaGroupInfo


/* S2C_PlayerGetGachaGroupInfo::S2C_PlayerGetGachaGroupInfo() */

void __thiscall
S2C_PlayerGetGachaGroupInfo::S2C_PlayerGetGachaGroupInfo(S2C_PlayerGetGachaGroupInfo *this)

{
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)this);
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x30));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x60));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x90));
  return;
}


/* S2C_PlayerGetGachaGroupInfo::~S2C_PlayerGetGachaGroupInfo() */

void __thiscall
S2C_PlayerGetGachaGroupInfo::~S2C_PlayerGetGachaGroupInfo(S2C_PlayerGetGachaGroupInfo *this)

{
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)(this + 0x90));
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)(this + 0x60));
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)(this + 0x30));
  S2C_PlayerGetAvatarInfo::~S2C_PlayerGetAvatarInfo((S2C_PlayerGetAvatarInfo *)this);
  return;
}


/* S2C_PlayerGetGachaGroupInfo::TEMPNAMEPLACEHOLDERVALUE(S2C_PlayerGetGachaGroupInfo const&) */

S2C_PlayerGetGachaGroupInfo * __thiscall
S2C_PlayerGetGachaGroupInfo::operator=
          (S2C_PlayerGetGachaGroupInfo *this,S2C_PlayerGetGachaGroupInfo *param_1)

{
  S2C_PlayerGetAvatarInfo::operator=
            ((S2C_PlayerGetAvatarInfo *)this,(S2C_PlayerGetAvatarInfo *)param_1);
  S2C_PlayerGetAvatarInfo::operator=
            ((S2C_PlayerGetAvatarInfo *)(this + 0x30),(S2C_PlayerGetAvatarInfo *)(param_1 + 0x30));
  S2C_PlayerGetAvatarInfo::operator=
            ((S2C_PlayerGetAvatarInfo *)(this + 0x60),(S2C_PlayerGetAvatarInfo *)(param_1 + 0x60));
  S2C_PlayerGetAvatarInfo::operator=
            ((S2C_PlayerGetAvatarInfo *)(this + 0x90),(S2C_PlayerGetAvatarInfo *)(param_1 + 0x90));
  return this;
}

