// Class: PoisonGumInfo


/* PoisonGumInfo::PoisonGumInfo() */

void __thiscall PoisonGumInfo::PoisonGumInfo(PoisonGumInfo *this)

{
  undefined4 uVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  uVar1 = PVZ_EOT();
  this[0x10] = (PoisonGumInfo)0x0;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x14) = 1;
  this[0x18] = (PoisonGumInfo)0x0;
  *(undefined4 *)(this + 0xc) = 0x40a00000;
  return;
}


/* PoisonGumInfo::PoisonGumInfo(PoisonGumInfo const&) */

void __thiscall PoisonGumInfo::PoisonGumInfo(PoisonGumInfo *this,PoisonGumInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PoisonGumInfo PVar4;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  PVar4 = param_1[0x10];
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  this[0x18] = param_1[0x18];
  this[0x10] = PVar4;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  return;
}


/* PoisonGumInfo::TEMPNAMEPLACEHOLDERVALUE(PoisonGumInfo&&) */

PoisonGumInfo * __thiscall PoisonGumInfo::operator=(PoisonGumInfo *this,PoisonGumInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PoisonGumInfo PVar4;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  PVar4 = param_1[0x10];
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  this[0x18] = param_1[0x18];
  this[0x10] = PVar4;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  return this;
}

