// Class: SpewingZombieTracker


/* SpewingZombieTracker::SpewingZombieTracker() */

void __thiscall SpewingZombieTracker::SpewingZombieTracker(SpewingZombieTracker *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 0x10));
  return;
}


/* SpewingZombieTracker::SpewingZombieTracker(SpewingZombieTracker const&) */

void __thiscall
SpewingZombieTracker::SpewingZombieTracker(SpewingZombieTracker *this,SpewingZombieTracker *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  return;
}


/* SpewingZombieTracker::TEMPNAMEPLACEHOLDERVALUE(SpewingZombieTracker&&) */

SpewingZombieTracker * __thiscall
SpewingZombieTracker::operator=(SpewingZombieTracker *this,SpewingZombieTracker *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x10),(SexyVector3 *)(param_1 + 0x10));
  return this;
}

