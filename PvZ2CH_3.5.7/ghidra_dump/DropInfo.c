// Class: DropInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropInfo::GetTotalWeight() */

void __thiscall DropInfo::GetTotalWeight(DropInfo *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar3 = iVar3 + *piVar2;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* DropInfo::~DropInfo() */

void __thiscall DropInfo::~DropInfo(DropInfo *this)

{
  std::vector<DangerRoomDropTypeInfo,std::allocator<DangerRoomDropTypeInfo>>::~vector
            ((vector<DangerRoomDropTypeInfo,std::allocator<DangerRoomDropTypeInfo>> *)(this + 0x18))
  ;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)this);
  return;
}


/* DropInfo::DropInfo(DropInfo const&) */

void __thiscall DropInfo::DropInfo(DropInfo *this,DropInfo *param_1)

{
  Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)this,(GroupInfo *)param_1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  std::vector<DangerRoomDropTypeInfo,std::allocator<DangerRoomDropTypeInfo>>::vector
            ((vector<DangerRoomDropTypeInfo,std::allocator<DangerRoomDropTypeInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}


/* DropInfo::TEMPNAMEPLACEHOLDERVALUE(DropInfo const&) */

DropInfo * __thiscall DropInfo::operator=(DropInfo *this,DropInfo *param_1)

{
  AutumnHarvestRewardPlayerData::operator=
            ((AutumnHarvestRewardPlayerData *)this,(AutumnHarvestRewardPlayerData *)param_1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  std::vector<DangerRoomDropTypeInfo,std::allocator<DangerRoomDropTypeInfo>>::operator=
            ((vector<DangerRoomDropTypeInfo,std::allocator<DangerRoomDropTypeInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}


/* DropInfo::DropInfo() */

void __thiscall DropInfo::DropInfo(DropInfo *this)

{
  PakFileDesc::PakFileDesc((PakFileDesc *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* DropInfo::DropInfo(DropInfo&&) */

void __thiscall DropInfo::DropInfo(DropInfo *this,DropInfo *param_1)

{
  Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)this,(GroupInfo *)param_1);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}

