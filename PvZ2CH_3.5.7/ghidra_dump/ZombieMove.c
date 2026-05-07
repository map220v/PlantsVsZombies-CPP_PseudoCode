// Class: ZombieMove


/* ZombieMove::ZombieMove(ZombieMove const&) */

void __thiscall ZombieMove::ZombieMove(ZombieMove *this,ZombieMove *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ZombieMove ZVar6;
  ZombieMove ZVar7;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  ZVar6 = param_1[9];
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  ZVar7 = param_1[10];
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  this[8] = param_1[8];
  this[9] = ZVar6;
  this[10] = ZVar7;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return;
}


/* ZombieMove::ZombieMove() */

void __thiscall ZombieMove::ZombieMove(ZombieMove *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  this[8] = (ZombieMove)0x0;
  this[9] = (ZombieMove)0x1;
  this[10] = (ZombieMove)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* ZombieMove::TEMPNAMEPLACEHOLDERVALUE(ZombieMove&&) */

ZombieMove * __thiscall ZombieMove::operator=(ZombieMove *this,ZombieMove *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ZombieMove ZVar6;
  ZombieMove ZVar7;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  ZVar6 = param_1[9];
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  ZVar7 = param_1[10];
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  this[8] = param_1[8];
  this[9] = ZVar6;
  this[10] = ZVar7;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x18) = uVar4;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return this;
}

