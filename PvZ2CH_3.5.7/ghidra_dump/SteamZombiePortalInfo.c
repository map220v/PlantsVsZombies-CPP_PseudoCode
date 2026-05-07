// Class: SteamZombiePortalInfo


/* SteamZombiePortalInfo::SteamZombiePortalInfo() */

void __thiscall SteamZombiePortalInfo::SteamZombiePortalInfo(SteamZombiePortalInfo *this)

{
  *(undefined4 *)this = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  Sexy::Point::Point((Point *)(this + 0x10));
  return;
}


/* SteamZombiePortalInfo::SteamZombiePortalInfo(SteamZombiePortalInfo const&) */

void __thiscall
SteamZombiePortalInfo::SteamZombiePortalInfo
          (SteamZombiePortalInfo *this,SteamZombiePortalInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  Sexy::Point::Point((Point *)(this + 0x10),(TPoint *)(param_1 + 0x10));
  return;
}

