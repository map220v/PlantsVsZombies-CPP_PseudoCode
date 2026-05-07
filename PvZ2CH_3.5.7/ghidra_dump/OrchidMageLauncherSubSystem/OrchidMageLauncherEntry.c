// Class: OrchidMageLauncherSubSystem::OrchidMageLauncherEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OrchidMageLauncherSubSystem::OrchidMageLauncherEntry::OrchidMageLauncherEntry(PlantOrchidMage*,
   float, Sexy::Point const&, bool) */

void __thiscall
OrchidMageLauncherSubSystem::OrchidMageLauncherEntry::OrchidMageLauncherEntry
          (OrchidMageLauncherEntry *this,PlantOrchidMage *param_1,float param_2,Point *param_3,
          bool param_4)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  *(float *)(this + 0x10) = param_2;
  Sexy::Point::Point((Point *)(this + 0x14),(TPoint *)param_3);
  this[0x1c] = (OrchidMageLauncherEntry)param_4;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OrchidMageLauncherSubSystem::OrchidMageLauncherEntry::OrchidMageLauncherEntry(OrchidMageLauncherSubSystem::OrchidMageLauncherEntry
   const&) */

void __thiscall
OrchidMageLauncherSubSystem::OrchidMageLauncherEntry::OrchidMageLauncherEntry
          (OrchidMageLauncherEntry *this,OrchidMageLauncherEntry *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  Sexy::Point::Point((Point *)(this + 0x14),(TPoint *)(param_1 + 0x14));
  this[0x1c] = param_1[0x1c];
  return;
}


/* OrchidMageLauncherSubSystem::OrchidMageLauncherEntry::TEMPNAMEPLACEHOLDERVALUE(OrchidMageLauncherSubSystem::OrchidMageLauncherEntry&&)
    */

OrchidMageLauncherEntry * __thiscall
OrchidMageLauncherSubSystem::OrchidMageLauncherEntry::operator=
          (OrchidMageLauncherEntry *this,OrchidMageLauncherEntry *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x14);
  this[0x1c] = param_1[0x1c];
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  return this;
}

