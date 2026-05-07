// Class: ChooserItemData


/* ChooserItemData::ChooserItemData(ChooserItemData const&) */

void __thiscall ChooserItemData::ChooserItemData(ChooserItemData *this,ChooserItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = param_1[0x34];
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(this + 0x10) = uVar8;
  *(undefined8 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar6;
  *(undefined4 *)(this + 0x30) = uVar5;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x38),(RtWeakPtrBase *)(param_1 + 0x38));
  return;
}


/* ChooserItemData::ChooserItemData() */

void __thiscall ChooserItemData::ChooserItemData(ChooserItemData *this)

{
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18));
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* ChooserItemData::~ChooserItemData() */

void __thiscall ChooserItemData::~ChooserItemData(ChooserItemData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  return;
}


void __thiscall ChooserItemData::~ChooserItemData(ChooserItemData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  return;
}


void __thiscall ChooserItemData::~ChooserItemData(ChooserItemData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  return;
}


void __thiscall ChooserItemData::~ChooserItemData(ChooserItemData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  return;
}


/* ChooserItemData::TEMPNAMEPLACEHOLDERVALUE(ChooserItemData&&) */

ChooserItemData * __thiscall
ChooserItemData::operator=(ChooserItemData *this,ChooserItemData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar9 = *(undefined8 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = param_1[0x34];
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(this + 0x10) = uVar8;
  *(undefined8 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar6;
  *(undefined4 *)(this + 0x30) = uVar5;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)(param_1 + 0x38));
  return this;
}

