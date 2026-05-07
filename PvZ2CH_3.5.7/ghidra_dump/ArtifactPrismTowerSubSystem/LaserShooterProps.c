// Class: ArtifactPrismTowerSubSystem::LaserShooterProps


/* ArtifactPrismTowerSubSystem::LaserShooterProps::TEMPNAMEPLACEHOLDERVALUE(ArtifactPrismTowerSubSystem::LaserShooterProps
   const&) */

LaserShooterProps * __thiscall
ArtifactPrismTowerSubSystem::LaserShooterProps::operator=
          (LaserShooterProps *this,LaserShooterProps *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return this;
}


/* ArtifactPrismTowerSubSystem::LaserShooterProps::LaserShooterProps(ArtifactPrismTowerSubSystem::LaserShooterProps
   const&) */

void __thiscall
ArtifactPrismTowerSubSystem::LaserShooterProps::LaserShooterProps
          (LaserShooterProps *this,LaserShooterProps *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return;
}


/* ArtifactPrismTowerSubSystem::LaserShooterProps::LaserShooterProps() */

void __thiscall
ArtifactPrismTowerSubSystem::LaserShooterProps::LaserShooterProps(LaserShooterProps *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0x44610000;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)(this + 0x18) = 0x40000000;
  *(undefined4 *)(this + 0x1c) = 0x40000000;
  *(undefined4 *)(this + 0xc) = 0x44fa0000;
  return;
}

