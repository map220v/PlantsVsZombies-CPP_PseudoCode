// Class: ZombiePoolData


/* ZombiePoolData::ZombiePoolData() */

void __thiscall ZombiePoolData::ZombiePoolData(ZombiePoolData *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[8] = (ZombiePoolData)0x0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePoolData::FixupData() */

void __thiscall ZombiePoolData::FixupData(ZombiePoolData *this)

{
  RtId *pRVar1;
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtId *)Sexy::RtDb::GetDb();
  Sexy::RtMixedPtrBase::GetId();
  Sexy::RtDb::ResolveNamedId(pRVar1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x10),aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

