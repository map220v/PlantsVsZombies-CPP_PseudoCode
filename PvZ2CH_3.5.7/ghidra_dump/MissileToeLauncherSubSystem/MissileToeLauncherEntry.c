// Class: MissileToeLauncherSubSystem::MissileToeLauncherEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MissileToeLauncherSubSystem::MissileToeLauncherEntry::MissileToeLauncherEntry(PlantMissileToe*,
   float, Sexy::Point const&, bool) */

void __thiscall
MissileToeLauncherSubSystem::MissileToeLauncherEntry::MissileToeLauncherEntry
          (MissileToeLauncherEntry *this,PlantMissileToe *param_1,float param_2,Point *param_3,
          bool param_4)

{
  MissileToeLauncherEntry MVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  *(float *)(this + 0x10) = param_2;
  Sexy::Point::Point((Point *)(this + 0x14),(TPoint *)param_3);
  this[0x1c] = (MissileToeLauncherEntry)param_4;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  MVar1 = (MissileToeLauncherEntry)FUN_03bf25f8(param_1[0x38]);
  this[0x1d] = MVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MissileToeLauncherSubSystem::MissileToeLauncherEntry::MissileToeLauncherEntry(MissileToeLauncherSubSystem::MissileToeLauncherEntry
   const&) */

void __thiscall
MissileToeLauncherSubSystem::MissileToeLauncherEntry::MissileToeLauncherEntry
          (MissileToeLauncherEntry *this,MissileToeLauncherEntry *param_1)

{
  MissileToeLauncherEntry MVar1;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  Sexy::Point::Point((Point *)(this + 0x14),(TPoint *)(param_1 + 0x14));
  MVar1 = param_1[0x1c];
  this[0x1d] = param_1[0x1d];
  this[0x1c] = MVar1;
  return;
}


/* MissileToeLauncherSubSystem::MissileToeLauncherEntry::TEMPNAMEPLACEHOLDERVALUE(MissileToeLauncherSubSystem::MissileToeLauncherEntry&&)
    */

MissileToeLauncherEntry * __thiscall
MissileToeLauncherSubSystem::MissileToeLauncherEntry::operator=
          (MissileToeLauncherEntry *this,MissileToeLauncherEntry *param_1)

{
  undefined4 uVar1;
  MissileToeLauncherEntry MVar2;
  MissileToeLauncherEntry MVar3;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  MVar2 = param_1[0x1c];
  MVar3 = param_1[0x1d];
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  this[0x1c] = MVar2;
  this[0x1d] = MVar3;
  *(undefined4 *)(this + 0x10) = uVar1;
  return this;
}

