// Class: ZombieLaneChangingRecord


/* ZombieLaneChangingRecord::ZombieLaneChangingRecord() */

void __thiscall ZombieLaneChangingRecord::ZombieLaneChangingRecord(ZombieLaneChangingRecord *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 4;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ZombieLaneChangingRecord::ZombieLaneChangingRecord(ZombieLaneChangingRecord const&) */

void __thiscall
ZombieLaneChangingRecord::ZombieLaneChangingRecord
          (ZombieLaneChangingRecord *this,ZombieLaneChangingRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar6;
  return;
}


/* ZombieLaneChangingRecord::TEMPNAMEPLACEHOLDERVALUE(ZombieLaneChangingRecord&&) */

ZombieLaneChangingRecord * __thiscall
ZombieLaneChangingRecord::operator=
          (ZombieLaneChangingRecord *this,ZombieLaneChangingRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x24) = uVar7;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar5;
  return this;
}

