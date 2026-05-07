// Class: BuffedProjectileData


/* BuffedProjectileData::BuffedProjectileData(Sexy::RtWeakPtr<Projectile>, Sexy::SexyVector3 const&)
    */

void __thiscall
BuffedProjectileData::BuffedProjectileData
          (BuffedProjectileData *this,RtWeakPtrBase *param_2,undefined8 *param_3)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr((RtWeakPtr<Sexy::SoundResource> *)this,param_2);
  *(undefined8 *)(this + 8) = *param_3;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_3 + 1);
  return;
}


/* BuffedProjectileData::BuffedProjectileData(BuffedProjectileData const&) */

void __thiscall
BuffedProjectileData::BuffedProjectileData(BuffedProjectileData *this,BuffedProjectileData *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* BuffedProjectileData::BuffedProjectileData() */

void __thiscall BuffedProjectileData::BuffedProjectileData(BuffedProjectileData *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 8));
  return;
}

