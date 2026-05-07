// Class: DangerRoomPlantInfo


/* DangerRoomPlantInfo::TEMPNAMEPLACEHOLDERVALUE(DangerRoomPlantInfo const&) */

DangerRoomPlantInfo * __thiscall
DangerRoomPlantInfo::operator=(DangerRoomPlantInfo *this,DangerRoomPlantInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  return this;
}


/* DangerRoomPlantInfo::DangerRoomPlantInfo() */

void __thiscall DangerRoomPlantInfo::DangerRoomPlantInfo(DangerRoomPlantInfo *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

