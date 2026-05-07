// Class: NukeLauncherSubSystem::NukeLauncherEntry


/* NukeLauncherSubSystem::NukeLauncherEntry::NukeLauncherEntry() */

void __thiscall NukeLauncherSubSystem::NukeLauncherEntry::NukeLauncherEntry(NukeLauncherEntry *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  *(undefined4 *)(this + 0x14) = 0;
  Sexy::Point::Point((Point *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherSubSystem::NukeLauncherEntry::NukeLauncherEntry(PlantNukeLauncher*, float,
   Sexy::Point const&, RocketType) */

void __thiscall
NukeLauncherSubSystem::NukeLauncherEntry::NukeLauncherEntry
          (undefined4 param_2,NukeLauncherEntry *this,undefined8 param_3_00,TPoint *param_3,
          undefined4 param_5)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  *(undefined4 *)(this + 0x14) = param_5;
  *(undefined4 *)(this + 0x10) = param_2;
  Sexy::Point::Point((Point *)(this + 0x18),param_3);
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


/* NukeLauncherSubSystem::NukeLauncherEntry::NukeLauncherEntry(NukeLauncherSubSystem::NukeLauncherEntry
   const&) */

void __thiscall
NukeLauncherSubSystem::NukeLauncherEntry::NukeLauncherEntry
          (NukeLauncherEntry *this,NukeLauncherEntry *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x18),(TPoint *)(param_1 + 0x18));
  return;
}


/* NukeLauncherSubSystem::NukeLauncherEntry::TEMPNAMEPLACEHOLDERVALUE(NukeLauncherSubSystem::NukeLauncherEntry&&)
    */

NukeLauncherEntry * __thiscall
NukeLauncherSubSystem::NukeLauncherEntry::operator=
          (NukeLauncherEntry *this,NukeLauncherEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  return this;
}

