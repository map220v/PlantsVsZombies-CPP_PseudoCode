// Class: PlantPoolData


/* PlantPoolData::PlantPoolData(PlantPoolData const&) */

void __thiscall PlantPoolData::PlantPoolData(PlantPoolData *this,PlantPoolData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PlantPoolData PVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  PVar4 = param_1[8];
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  this[8] = PVar4;
  *(undefined4 *)(this + 0xc) = uVar3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x18),(RtWeakPtrBase *)(param_1 + 0x18));
  return;
}


/* PlantPoolData::PlantPoolData() */

void __thiscall PlantPoolData::PlantPoolData(PlantPoolData *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  *(undefined4 *)(this + 4) = 0;
  this[8] = (PlantPoolData)0x0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)this = 1000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoolData::FixupData() */

void __thiscall PlantPoolData::FixupData(PlantPoolData *this)

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
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x18),aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  Sexy::RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

