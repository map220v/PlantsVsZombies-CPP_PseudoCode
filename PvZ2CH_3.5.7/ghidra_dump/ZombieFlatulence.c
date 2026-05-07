// Class: ZombieFlatulence


/* ZombieFlatulence::ZombieFlatulence() */

void __thiscall ZombieFlatulence::ZombieFlatulence(ZombieFlatulence *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  this[0x1c] = (ZombieFlatulence)0x0;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* ZombieFlatulence::ZombieFlatulence(ZombieFlatulence const&) */

void __thiscall ZombieFlatulence::ZombieFlatulence(ZombieFlatulence *this,ZombieFlatulence *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar3;
  return;
}


/* ZombieFlatulence::TEMPNAMEPLACEHOLDERVALUE(ZombieFlatulence&&) */

ZombieFlatulence * __thiscall
ZombieFlatulence::operator=(ZombieFlatulence *this,ZombieFlatulence *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  this[0x1c] = param_1[0x1c];
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar3;
  return this;
}

