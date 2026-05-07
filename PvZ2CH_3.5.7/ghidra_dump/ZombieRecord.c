// Class: ZombieRecord


/* ZombieRecord::TEMPNAMEPLACEHOLDERVALUE(ZombieRecord const&) */

ZombieRecord * __thiscall ZombieRecord::operator=(ZombieRecord *this,ZombieRecord *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  return this;
}


/* ZombieRecord::ZombieRecord() */

void __thiscall ZombieRecord::ZombieRecord(ZombieRecord *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

