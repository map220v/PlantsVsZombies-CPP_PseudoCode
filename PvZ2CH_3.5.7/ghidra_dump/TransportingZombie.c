// Class: TransportingZombie


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransportingZombie::TransportingZombie() */

void __thiscall TransportingZombie::TransportingZombie(TransportingZombie *this)

{
  long lVar1;
  undefined4 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar2 = PVZ_EOT();
  this[0xc] = (TransportingZombie)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 8) = uVar2;
  this[0xd] = (TransportingZombie)0x0;
  this[0xe] = (TransportingZombie)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3f000000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransportingZombie::TransportingZombie(TransportingZombie&&) */

void __thiscall
TransportingZombie::TransportingZombie(TransportingZombie *this,TransportingZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TransportingZombie TVar6;
  TransportingZombie TVar7;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  TVar6 = param_1[0xd];
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  TVar7 = param_1[0xe];
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  this[0xc] = param_1[0xc];
  this[0xd] = TVar6;
  this[0xe] = TVar7;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return;
}


/* TransportingZombie::TEMPNAMEPLACEHOLDERVALUE(TransportingZombie const&) */

TransportingZombie * __thiscall
TransportingZombie::operator=(TransportingZombie *this,TransportingZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TransportingZombie TVar6;
  TransportingZombie TVar7;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  TVar6 = param_1[0xd];
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  TVar7 = param_1[0xe];
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  this[0xc] = param_1[0xc];
  this[0xd] = TVar6;
  this[0xe] = TVar7;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return this;
}

