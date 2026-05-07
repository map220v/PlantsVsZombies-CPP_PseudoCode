// Class: ZombieDance


/* ZombieDance::ZombieDance() */

void __thiscall ZombieDance::ZombieDance(ZombieDance *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  return;
}


/* ZombieDance::ZombieDance(ZombieDance const&) */

void __thiscall ZombieDance::ZombieDance(ZombieDance *this,ZombieDance *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  return;
}


/* ZombieDance::TEMPNAMEPLACEHOLDERVALUE(ZombieDance&&) */

ZombieDance * __thiscall ZombieDance::operator=(ZombieDance *this,ZombieDance *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  return this;
}

