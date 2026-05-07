// Class: ZombieSpawnLoc


/* ZombieSpawnLoc::ZombieSpawnLoc(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
ZombieSpawnLoc::ZombieSpawnLoc
          (ZombieSpawnLoc *this,RtWeakPtr *param_2,undefined4 param_3,undefined4 param_4)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this,param_2);
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  return;
}

