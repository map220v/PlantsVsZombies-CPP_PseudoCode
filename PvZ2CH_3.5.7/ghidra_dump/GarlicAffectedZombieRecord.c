// Class: GarlicAffectedZombieRecord


/* GarlicAffectedZombieRecord::~GarlicAffectedZombieRecord() */

void __thiscall
GarlicAffectedZombieRecord::~GarlicAffectedZombieRecord(GarlicAffectedZombieRecord *this)

{
  GarlicStateInfo::~GarlicStateInfo((GarlicStateInfo *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall
GarlicAffectedZombieRecord::~GarlicAffectedZombieRecord(GarlicAffectedZombieRecord *this)

{
  GarlicStateInfo::~GarlicStateInfo((GarlicStateInfo *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall
GarlicAffectedZombieRecord::~GarlicAffectedZombieRecord(GarlicAffectedZombieRecord *this)

{
  GarlicStateInfo::~GarlicStateInfo((GarlicStateInfo *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall
GarlicAffectedZombieRecord::~GarlicAffectedZombieRecord(GarlicAffectedZombieRecord *this)

{
  GarlicStateInfo::~GarlicStateInfo((GarlicStateInfo *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* GarlicAffectedZombieRecord::GarlicAffectedZombieRecord() */

void __thiscall
GarlicAffectedZombieRecord::GarlicAffectedZombieRecord(GarlicAffectedZombieRecord *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  GarlicStateInfo::GarlicStateInfo((GarlicStateInfo *)(this + 0x18));
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* GarlicAffectedZombieRecord::GarlicAffectedZombieRecord(GarlicAffectedZombieRecord const&) */

void __thiscall
GarlicAffectedZombieRecord::GarlicAffectedZombieRecord
          (GarlicAffectedZombieRecord *this,GarlicAffectedZombieRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  GarlicStateInfo::GarlicStateInfo
            ((GarlicStateInfo *)(this + 0x18),(GarlicStateInfo *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* GarlicAffectedZombieRecord::TEMPNAMEPLACEHOLDERVALUE(GarlicAffectedZombieRecord&&) */

GarlicAffectedZombieRecord * __thiscall
GarlicAffectedZombieRecord::operator=
          (GarlicAffectedZombieRecord *this,GarlicAffectedZombieRecord *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  GarlicStateInfo::operator=((GarlicStateInfo *)(this + 0x18),(GarlicStateInfo *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x48) = uVar1;
  return this;
}

