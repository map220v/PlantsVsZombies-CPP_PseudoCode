// Class: Sexy::RtDbTable::Iterator


/* Sexy::RtDbTable::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall Sexy::RtDbTable::Iterator::operator*(Iterator *this)

{
  RtId *pRVar1;
  _func_void *in_x1;
  RtId *in_x8;
  
  if (*(long *)(this + 8) != 0) {
    pRVar1 = (RtId *)FUN_051b54b0(*(undefined8 *)(*(long *)(this + 8) + 0x18),
                                  *(int *)(this + 0x18) + *(int *)(this + 0x14));
    RtId::RtId(in_x8,pRVar1);
    return;
  }
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)in_x8,in_x1);
  return;
}


/* Sexy::RtDbTable::Iterator::TEMPNAMEPLACEHOLDERVALUE() const */

undefined8 __thiscall Sexy::RtDbTable::Iterator::operator->(Iterator *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 8) != 0) {
    uVar1 = FUN_051b54b0(*(undefined8 *)(*(long *)(this + 8) + 0x18),
                         *(int *)(this + 0x18) + *(int *)(this + 0x14));
    return uVar1;
  }
  return 0;
}


/* Sexy::RtDbTable::Iterator::operator bool() const */

bool __thiscall Sexy::RtDbTable::Iterator::operator_cast_to_bool(Iterator *this)

{
  return *(int *)(this + 0x18) != *(int *)(this + 0x10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::Iterator::TEMPNAMEPLACEHOLDERVALUE(int) */

void __thiscall Sexy::RtDbTable::Iterator::operator++(Iterator *this,int param_1)

{
  long lVar1;
  uint *puVar2;
  uint local_c;
  long local_8;
  
  local_c = *(int *)(this + 0x18) + 1;
  local_8 = ___stack_chk_guard;
  puVar2 = eastl::min_alt<unsigned_int>(&local_c,(uint *)(this + 0x10));
  lVar1 = ___stack_chk_guard;
  *(uint *)(this + 0x18) = *puVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* Sexy::RtDbTable::Iterator::Iterator(Sexy::RtDbTable::Iterator&&) */

void __thiscall Sexy::RtDbTable::Iterator::Iterator(Iterator *this,Iterator *param_1)

{
  unique_ptr *extraout_x0;
  undefined8 *extraout_x0_00;
  undefined4 *extraout_x0_01;
  undefined4 *extraout_x0_02;
  undefined4 *extraout_x0_03;
  
  nop();
  std::
  unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
  ::unique_ptr((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                *)this,extraout_x0);
  nop();
  *(undefined8 *)(this + 8) = *extraout_x0_00;
  nop();
  *(undefined4 *)(this + 0x10) = *extraout_x0_01;
  nop();
  *(undefined4 *)(this + 0x14) = *extraout_x0_02;
  nop();
  *(undefined4 *)(this + 0x18) = *extraout_x0_03;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* Sexy::RtDbTable::Iterator::~Iterator() */

void __thiscall Sexy::RtDbTable::Iterator::~Iterator(Iterator *this)

{
  if (*(long *)(this + 8) != 0) {
    IteratorStorage::PopIterator((uint)*(long *)(this + 8));
  }
  std::
  unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
  ::~unique_ptr((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                 *)this);
  return;
}


/* Sexy::RtDbTable::Iterator::Iterator(Sexy::RtDbTable*, Sexy::RtDbTable::IteratorStorage*) */

void __thiscall
Sexy::RtDbTable::Iterator::Iterator(Iterator *this,RtDbTable *param_1,IteratorStorage *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  IteratorStorage *this_00;
  
  if (param_2 == (IteratorStorage *)0x0) {
    this_00 = ::operator_new(0x30);
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    IteratorStorage::IteratorStorage(this_00);
    std::
    unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
    ::unique_ptr((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                  *)this,this_00);
    param_2 = (IteratorStorage *)
              std::
              unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
              ::get((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                     *)this);
  }
  else {
    std::
    unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
    ::unique_ptr((unique_ptr<Sexy::RtDbTable::IteratorStorage,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                  *)this,(IteratorStorage *)0x0);
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  *(uint *)(this + 0x10) = uVar1;
  *(IteratorStorage **)(this + 8) = param_2;
  uVar2 = IteratorStorage::PushIterator(param_2,uVar1,param_1);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}

