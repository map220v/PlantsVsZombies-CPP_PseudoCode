// Class: plantInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* plantInfo::plantInfo() */

void __thiscall plantInfo::plantInfo(plantInfo *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0xc] = (plantInfo)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 8) = 0xffffffff;
  this[0xd] = (plantInfo)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* plantInfo::plantInfo(plantInfo&&) */

void __thiscall plantInfo::plantInfo(plantInfo *this,plantInfo *param_1)

{
  undefined4 uVar1;
  plantInfo pVar2;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  pVar2 = param_1[0xc];
  this[0xd] = param_1[0xd];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = pVar2;
  return;
}


/* plantInfo::TEMPNAMEPLACEHOLDERVALUE(plantInfo&&) */

plantInfo * __thiscall plantInfo::operator=(plantInfo *this,plantInfo *param_1)

{
  undefined4 uVar1;
  plantInfo pVar2;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  pVar2 = param_1[0xc];
  this[0xd] = param_1[0xd];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = pVar2;
  return this;
}

