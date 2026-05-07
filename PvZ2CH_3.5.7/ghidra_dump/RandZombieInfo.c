// Class: RandZombieInfo


/* RandZombieInfo::RandZombieInfo(RandZombieInfo const&) */

void __thiscall RandZombieInfo::RandZombieInfo(RandZombieInfo *this,RandZombieInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  return;
}


/* RandZombieInfo::RandZombieInfo() */

void __thiscall RandZombieInfo::RandZombieInfo(RandZombieInfo *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  *(undefined4 *)(this + 0x10) = 1;
  return;
}

