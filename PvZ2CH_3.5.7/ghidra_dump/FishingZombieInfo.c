// Class: FishingZombieInfo


/* FishingZombieInfo::FishingZombieInfo(FishingZombieInfo const&) */

void __thiscall
FishingZombieInfo::FishingZombieInfo(FishingZombieInfo *this,FishingZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}


/* FishingZombieInfo::FishingZombieInfo() */

void __thiscall FishingZombieInfo::FishingZombieInfo(FishingZombieInfo *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 8));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = 10;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0x18) = 0x3e99999a;
  return;
}


/* FishingZombieInfo::TEMPNAMEPLACEHOLDERVALUE(FishingZombieInfo const&) */

FishingZombieInfo * __thiscall
FishingZombieInfo::operator=(FishingZombieInfo *this,FishingZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return this;
}

