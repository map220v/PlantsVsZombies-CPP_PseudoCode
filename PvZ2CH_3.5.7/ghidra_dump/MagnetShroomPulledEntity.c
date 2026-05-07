// Class: MagnetShroomPulledEntity


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnetShroomPulledEntity::MagnetShroomPulledEntity(BoardEntity*) */

void __thiscall
MagnetShroomPulledEntity::MagnetShroomPulledEntity
          (MagnetShroomPulledEntity *this,BoardEntity *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  DVec3::DVec3((DVec3 *)(this + 8));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

