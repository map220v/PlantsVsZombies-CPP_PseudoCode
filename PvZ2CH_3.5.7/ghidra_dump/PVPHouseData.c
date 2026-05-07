// Class: PVPHouseData


/* PVPHouseData::~PVPHouseData() */

void __thiscall PVPHouseData::~PVPHouseData(PVPHouseData *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  return;
}


/* PVPHouseData::Update() */

void __thiscall PVPHouseData::Update(PVPHouseData *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x18);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


/* PVPHouseData::Destroy() */

void __thiscall PVPHouseData::Destroy(PVPHouseData *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x18))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  ~PVPHouseData(this);
  AK::FreeHook(this);
  return;
}


/* PVPHouseData::PVPHouseData() */

void __thiscall PVPHouseData::PVPHouseData(PVPHouseData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  *(undefined8 *)(this + 0x18) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x20));
  Sexy::Insets::Insets((Insets *)(this + 0x30));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  this[0x48] = (PVPHouseData)0x0;
  this[0x49] = (PVPHouseData)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}

