// Class: BananaLauncherSubSystem::BananaLauncherEntry


/* BananaLauncherSubSystem::BananaLauncherEntry::BananaLauncherEntry() */

void __thiscall
BananaLauncherSubSystem::BananaLauncherEntry::BananaLauncherEntry(BananaLauncherEntry *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  this[0x14] = (BananaLauncherEntry)0x0;
  Sexy::Point::Point((Point *)(this + 0x18));
  return;
}


/* BananaLauncherSubSystem::BananaLauncherEntry::BananaLauncherEntry(BananaLauncherSubSystem::BananaLauncherEntry
   const&) */

void __thiscall
BananaLauncherSubSystem::BananaLauncherEntry::BananaLauncherEntry
          (BananaLauncherEntry *this,BananaLauncherEntry *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 0x10) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x18),(TPoint *)(param_1 + 0x18));
  this[0x20] = param_1[0x20];
  return;
}


/* BananaLauncherSubSystem::BananaLauncherEntry::TEMPNAMEPLACEHOLDERVALUE(BananaLauncherSubSystem::BananaLauncherEntry&&)
    */

BananaLauncherEntry * __thiscall
BananaLauncherSubSystem::BananaLauncherEntry::operator=
          (BananaLauncherEntry *this,BananaLauncherEntry *param_1)

{
  undefined4 uVar1;
  BananaLauncherEntry BVar2;
  undefined8 uVar3;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  BVar2 = param_1[0x20];
  this[0x14] = param_1[0x14];
  *(undefined8 *)(this + 0x18) = uVar3;
  this[0x20] = BVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BananaLauncherSubSystem::BananaLauncherEntry::BananaLauncherEntry(PlantBanana*, float,
   Sexy::Point const&, bool) */

void __thiscall
BananaLauncherSubSystem::BananaLauncherEntry::BananaLauncherEntry
          (BananaLauncherEntry *this,PlantBanana *param_1,float param_2,Point *param_3,bool param_4)

{
  BananaLauncherEntry BVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  this[0x14] = (BananaLauncherEntry)0x0;
  *(float *)(this + 0x10) = param_2;
  Sexy::Point::Point((Point *)(this + 0x18),(TPoint *)param_3);
  this[0x20] = (BananaLauncherEntry)param_4;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  BVar1 = (BananaLauncherEntry)FUN_041ed4c0(param_1[0x2a]);
  this[0x14] = BVar1;
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

