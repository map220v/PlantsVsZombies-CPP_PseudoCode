// Class: ZombieWarningInfo


/* ZombieWarningInfo::~ZombieWarningInfo() */

void __thiscall ZombieWarningInfo::~ZombieWarningInfo(ZombieWarningInfo *this)

{
  std::string::~string((string *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* ZombieWarningInfo::ZombieWarningInfo() */

void __thiscall ZombieWarningInfo::ZombieWarningInfo(ZombieWarningInfo *this)

{
  size_t in_x2;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)(this + 8),"",in_x2);
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* ZombieWarningInfo::ZombieWarningInfo(ZombieWarningInfo const&) */

void __thiscall
ZombieWarningInfo::ZombieWarningInfo(ZombieWarningInfo *this,ZombieWarningInfo *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* ZombieWarningInfo::TEMPNAMEPLACEHOLDERVALUE(ZombieWarningInfo const&) */

ZombieWarningInfo * __thiscall
ZombieWarningInfo::operator=(ZombieWarningInfo *this,ZombieWarningInfo *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}

