// Class: EntitySearch_MatchesZombieType


/* EntitySearch_MatchesZombieType::EntitySearch_MatchesZombieType(Sexy::RtWeakPtr<ZombieType const>)
    */

void __thiscall
EntitySearch_MatchesZombieType::EntitySearch_MatchesZombieType
          (EntitySearch_MatchesZombieType *this,RtWeakPtr *param_2)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this,param_2);
  return;
}


/* EntitySearch_MatchesZombieType::Accept(BoardEntity*) */

undefined8 __thiscall
EntitySearch_MatchesZombieType::Accept(EntitySearch_MatchesZombieType *this,BoardEntity *param_1)

{
  Zombie *this_00;
  RtWeakPtrBase *this_01;
  undefined8 uVar1;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
    this_01 = (RtWeakPtrBase *)Zombie::GetType(this_00);
    uVar1 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)this);
    return uVar1;
  }
  return 0;
}

