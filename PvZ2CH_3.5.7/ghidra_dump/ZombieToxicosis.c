// Class: ZombieToxicosis


/* ZombieToxicosis::ZombieToxicosis() */

void __thiscall ZombieToxicosis::ZombieToxicosis(ZombieToxicosis *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  this[0xc] = (ZombieToxicosis)0x0;
  this[0xd] = (ZombieToxicosis)0x0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* ZombieToxicosis::ZombieToxicosis(ZombieToxicosis const&) */

void __thiscall ZombieToxicosis::ZombieToxicosis(ZombieToxicosis *this,ZombieToxicosis *param_1)

{
  undefined4 uVar1;
  ZombieToxicosis ZVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  ZVar2 = param_1[0xc];
  this[0xd] = param_1[0xd];
  this[0xc] = ZVar2;
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


/* ZombieToxicosis::TEMPNAMEPLACEHOLDERVALUE(ZombieToxicosis&&) */

ZombieToxicosis * __thiscall
ZombieToxicosis::operator=(ZombieToxicosis *this,ZombieToxicosis *param_1)

{
  undefined4 uVar1;
  ZombieToxicosis ZVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  ZVar2 = param_1[0xc];
  this[0xd] = param_1[0xd];
  this[0xc] = ZVar2;
  *(undefined4 *)(this + 8) = uVar1;
  return this;
}

