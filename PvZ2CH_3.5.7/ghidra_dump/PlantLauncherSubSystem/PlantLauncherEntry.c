// Class: PlantLauncherSubSystem::PlantLauncherEntry


/* PlantLauncherSubSystem::PlantLauncherEntry::PlantLauncherEntry() */

void __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::PlantLauncherEntry(PlantLauncherEntry *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  Sexy::Point::Point((Point *)(this + 0x1c));
  return;
}


/* PlantLauncherSubSystem::PlantLauncherEntry::~PlantLauncherEntry() */

void __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::~PlantLauncherEntry(PlantLauncherEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::~PlantLauncherEntry(PlantLauncherEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::~PlantLauncherEntry(PlantLauncherEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::~PlantLauncherEntry(PlantLauncherEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLauncherSubSystem::PlantLauncherEntry::PlantLauncherEntry(ComponentPlantLauncher*, float,
   Sexy::Point const&, PlantWeapon) */

void __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::PlantLauncherEntry
          (undefined4 param_2,PlantLauncherEntry *this,undefined8 param_3_00,TPoint *param_3,
          undefined4 param_5)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  *(undefined4 *)(this + 0x18) = param_2;
  Sexy::Point::Point((Point *)(this + 0x1c),param_3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Plant::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = param_5;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLauncherSubSystem::PlantLauncherEntry::PlantLauncherEntry(PlantLauncherSubSystem::PlantLauncherEntry
   const&) */

void __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::PlantLauncherEntry
          (PlantLauncherEntry *this,PlantLauncherEntry *param_1)

{
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  Sexy::Point::Point((Point *)(this + 0x1c),(TPoint *)(param_1 + 0x1c));
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}


/* PlantLauncherSubSystem::PlantLauncherEntry::TEMPNAMEPLACEHOLDERVALUE(PlantLauncherSubSystem::PlantLauncherEntry&&)
    */

PlantLauncherEntry * __thiscall
PlantLauncherSubSystem::PlantLauncherEntry::operator=
          (PlantLauncherEntry *this,PlantLauncherEntry *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar1;
  return this;
}

