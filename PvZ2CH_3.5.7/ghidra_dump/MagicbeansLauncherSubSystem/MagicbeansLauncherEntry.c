// Class: MagicbeansLauncherSubSystem::MagicbeansLauncherEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicbeansLauncherSubSystem::MagicbeansLauncherEntry::MagicbeansLauncherEntry(PlantMagicbeans*,
   float, Sexy::Point const&, bool) */

void __thiscall
MagicbeansLauncherSubSystem::MagicbeansLauncherEntry::MagicbeansLauncherEntry
          (MagicbeansLauncherEntry *this,PlantMagicbeans *param_1,float param_2,Point *param_3,
          bool param_4)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  this[0x14] = (MagicbeansLauncherEntry)0x0;
  *(float *)(this + 0x10) = param_2;
  Sexy::Point::Point((Point *)(this + 0x18),(TPoint *)param_3);
  this[0x20] = (MagicbeansLauncherEntry)param_4;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this[0x14] = (MagicbeansLauncherEntry)0x0;
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

