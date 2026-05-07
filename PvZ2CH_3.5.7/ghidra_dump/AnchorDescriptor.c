// Class: AnchorDescriptor


/* AnchorDescriptor::~AnchorDescriptor() */

void __thiscall AnchorDescriptor::~AnchorDescriptor(AnchorDescriptor *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x20));
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)(this + 0x10));
  Sexy::RtId::~RtId((RtId *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnchorDescriptor::AnchorDescriptor() */

void __thiscall AnchorDescriptor::AnchorDescriptor(AnchorDescriptor *this)

{
  RtId aRStack_10 [8];
  _func_void *local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 8),___stack_chk_guard)
  ;
  DynamicSizeData::DynamicSizeData((DynamicSizeData *)(this + 0x10));
  DynamicSizeData::DynamicSizeData((DynamicSizeData *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  Sexy::RtId::RtId(aRStack_10,0);
  Sexy::RtId::operator=((RtId *)(this + 8),aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnchorDescriptor::AnchorDescriptor(AnchorDescriptor const&) */

void __thiscall AnchorDescriptor::AnchorDescriptor(AnchorDescriptor *this,AnchorDescriptor *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  Sexy::RtId::RtId((RtId *)(this + 8),(RtId *)(param_1 + 8));
  AnimationSequenceEntry::AnimationSequenceEntry
            ((AnimationSequenceEntry *)(this + 0x10),(AnimationSequenceEntry *)(param_1 + 0x10));
  AnimationSequenceEntry::AnimationSequenceEntry
            ((AnimationSequenceEntry *)(this + 0x20),(AnimationSequenceEntry *)(param_1 + 0x20));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x30),(RtWeakPtrBase *)(param_1 + 0x30));
  return;
}


/* AnchorDescriptor::TEMPNAMEPLACEHOLDERVALUE(AnchorDescriptor const&) */

AnchorDescriptor * __thiscall
AnchorDescriptor::operator=(AnchorDescriptor *this,AnchorDescriptor *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  Sexy::RtId::operator=((RtId *)(this + 8),(RtId *)(param_1 + 8));
  CthulhuDangerroomInfo::operator=
            ((CthulhuDangerroomInfo *)(this + 0x10),(CthulhuDangerroomInfo *)(param_1 + 0x10));
  CthulhuDangerroomInfo::operator=
            ((CthulhuDangerroomInfo *)(this + 0x20),(CthulhuDangerroomInfo *)(param_1 + 0x20));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)(param_1 + 0x30));
  return this;
}

