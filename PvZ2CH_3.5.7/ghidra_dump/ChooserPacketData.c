// Class: ChooserPacketData


/* ChooserPacketData::ChooserPacketData(ChooserPacketData&&) */

void __thiscall
ChooserPacketData::ChooserPacketData(ChooserPacketData *this,ChooserPacketData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ChooserPacketData CVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)this = uVar7;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x28),(RtWeakPtrBase *)(param_1 + 0x28));
  CVar4 = param_1[0x34];
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = CVar4;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x38),(RtWeakPtrBase *)(param_1 + 0x38));
  return;
}


/* ChooserPacketData::TEMPNAMEPLACEHOLDERVALUE(ChooserPacketData const&) */

ChooserPacketData * __thiscall
ChooserPacketData::operator=(ChooserPacketData *this,ChooserPacketData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ChooserPacketData CVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)this = uVar7;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0x18) = uVar5;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)(param_1 + 0x28));
  CVar4 = param_1[0x34];
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = CVar4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)(param_1 + 0x38));
  return this;
}


/* ChooserPacketData::~ChooserPacketData() */

void __thiscall ChooserPacketData::~ChooserPacketData(ChooserPacketData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  return;
}


/* ChooserPacketData::ChooserPacketData() */

void __thiscall ChooserPacketData::ChooserPacketData(ChooserPacketData *this)

{
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}

