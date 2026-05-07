// Class: Sexy::RtDbTable::IteratorStorage


/* Sexy::RtDbTable::IteratorStorage::IteratorStorage() */

void __thiscall Sexy::RtDbTable::IteratorStorage::IteratorStorage(IteratorStorage *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* Sexy::RtDbTable::IteratorStorage::~IteratorStorage() */

void __thiscall Sexy::RtDbTable::IteratorStorage::~IteratorStorage(IteratorStorage *this)

{
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x18));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
  return;
}


/* Sexy::RtDbTable::IteratorStorage::PopIterator(unsigned int) */

void Sexy::RtDbTable::IteratorStorage::PopIterator(uint param_1)

{
  vector<unsigned_int,std::allocator<unsigned_int>> *this;
  uint *puVar1;
  
  this = (vector<unsigned_int,std::allocator<unsigned_int>> *)(ulong)param_1;
  puVar1 = (uint *)std::vector<unsigned_int,std::allocator<unsigned_int>>::back(this);
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::resize
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x18),(ulong)*puVar1);
  FUN_051b55bc(this + 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDbTable::IteratorStorage::PushIterator(unsigned int, Sexy::RtDbTable*) */

void __thiscall
Sexy::RtDbTable::IteratorStorage::PushIterator
          (IteratorStorage *this,uint param_1,RtDbTable *param_2)

{
  int iVar1;
  RtDbTable *pRVar2;
  RtId *this_00;
  int iVar3;
  uint local_14;
  RtId aRStack_10 [8];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_14 = FUN_051b54a0(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::resize
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x18),
             (ulong)(param_1 + local_14));
  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)this,&local_14);
  for (pRVar2 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(param_2 + 0x58)); pRVar2 != param_2 + 0x50
      ; pRVar2 = (RtDbTable *)FUN_051b54ac(*(undefined8 *)(pRVar2 + 8))) {
    iVar1 = iVar3 + local_14;
    iVar3 = iVar3 + 1;
    this_00 = (RtId *)FUN_051b54b0(*(undefined8 *)(this + 0x18),iVar1);
    FUN_051b5b78(aRStack_10,*(undefined4 *)param_2,*(undefined8 *)(param_2 + 8),pRVar2);
    RtId::operator=(this_00,aRStack_10);
    RtId::~RtId(aRStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_14);
  }
  return;
}

