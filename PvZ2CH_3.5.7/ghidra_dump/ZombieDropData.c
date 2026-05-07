// Class: ZombieDropData


/* ZombieDropData::ZombieDropData(Sexy::SexyVector3, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombieDropData::ZombieDropData
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,ZombieDropData *this,
          RtWeakPtrBase *param_5)

{
  *(ulong *)this = CONCAT44(param_2,param_1);
  *(undefined4 *)(this + 8) = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),param_5);
  return;
}


/* ZombieDropData::TEMPNAMEPLACEHOLDERVALUE(ZombieDropData const&) */

ZombieDropData * __thiscall ZombieDropData::operator=(ZombieDropData *this,ZombieDropData *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)this,(SexyVector3 *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  return this;
}


/* ZombieDropData::ZombieDropData() */

void __thiscall ZombieDropData::ZombieDropData(ZombieDropData *this)

{
  DVec3::DVec3((DVec3 *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}

