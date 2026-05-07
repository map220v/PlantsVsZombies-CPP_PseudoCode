// Class: SparkingZombieTracker


/* SparkingZombieTracker::SparkingZombieTracker(SparkingZombieTracker const&) */

void __thiscall
SparkingZombieTracker::SparkingZombieTracker
          (SparkingZombieTracker *this,SparkingZombieTracker *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined8 *)(this + 0x1c) = uVar1;
  *(undefined8 *)(this + 0x24) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x34) = uVar1;
  return;
}


/* SparkingZombieTracker::SparkingZombieTracker() */

void __thiscall SparkingZombieTracker::SparkingZombieTracker(SparkingZombieTracker *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 8));
  ElectriciteaBurstProperties::ElectriciteaBurstProperties
            ((ElectriciteaBurstProperties *)(this + 0x1c));
  return;
}


/* SparkingZombieTracker::TEMPNAMEPLACEHOLDERVALUE(SparkingZombieTracker&&) */

SparkingZombieTracker * __thiscall
SparkingZombieTracker::operator=(SparkingZombieTracker *this,SparkingZombieTracker *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 8),(SexyVector3 *)(param_1 + 8));
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  uVar2 = *(undefined8 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0x1c) = uVar1;
  *(undefined8 *)(this + 0x24) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x34) = uVar1;
  return this;
}

