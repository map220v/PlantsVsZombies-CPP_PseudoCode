// Class: RafflesiaSubSystem::RafflesiaEntry


/* RafflesiaSubSystem::RafflesiaEntry::RafflesiaEntry() */

void __thiscall RafflesiaSubSystem::RafflesiaEntry::RafflesiaEntry(RafflesiaEntry *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  DVec3::DVec3((DVec3 *)(this + 0x14));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  return;
}


/* RafflesiaSubSystem::RafflesiaEntry::~RafflesiaEntry() */

void __thiscall RafflesiaSubSystem::RafflesiaEntry::~RafflesiaEntry(RafflesiaEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall RafflesiaSubSystem::RafflesiaEntry::~RafflesiaEntry(RafflesiaEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall RafflesiaSubSystem::RafflesiaEntry::~RafflesiaEntry(RafflesiaEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


void __thiscall RafflesiaSubSystem::RafflesiaEntry::~RafflesiaEntry(RafflesiaEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSubSystem::RafflesiaEntry::RafflesiaEntry(PlantRafflesia*, float, Sexy::SexyVector3
   const&, Sexy::RtWeakPtr<BoardEntity>, int) */

void __thiscall
RafflesiaSubSystem::RafflesiaEntry::RafflesiaEntry
          (undefined4 param_2,RafflesiaEntry *this,undefined8 param_3_00,undefined8 *param_3,
          RtWeakPtrBase *param_5,undefined4 param_6)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  *(undefined8 *)(this + 0x14) = *param_3;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(this + 0x10) = param_2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x20),param_5);
  *(undefined4 *)(this + 0x28) = param_6;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RafflesiaSubSystem::RafflesiaEntry::RafflesiaEntry(RafflesiaSubSystem::RafflesiaEntry const&) */

void __thiscall
RafflesiaSubSystem::RafflesiaEntry::RafflesiaEntry(RafflesiaEntry *this,RafflesiaEntry *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x20),(RtWeakPtrBase *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


/* RafflesiaSubSystem::RafflesiaEntry::TEMPNAMEPLACEHOLDERVALUE(RafflesiaSubSystem::RafflesiaEntry&&)
    */

RafflesiaEntry * __thiscall
RafflesiaSubSystem::RafflesiaEntry::operator=(RafflesiaEntry *this,RafflesiaEntry *param_1)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x14),(SexyVector3 *)(param_1 + 0x14));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),(RtWeakPtr *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}

