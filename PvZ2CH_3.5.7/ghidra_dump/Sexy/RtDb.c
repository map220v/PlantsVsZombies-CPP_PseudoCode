// Class: Sexy::RtDb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::GetObjectForId(Sexy::RtId const&) const */

void Sexy::RtDb::GetObjectForId(RtId *param_1)

{
  char cVar1;
  uint uVar2;
  RtDbTable *this;
  undefined8 uVar3;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId(param_1);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar2 = RtId::GetTableIndex((RtId *)aeStack_10);
    this = (RtDbTable *)GetTable((RtDb *)param_1,uVar2);
    if (this != (RtDbTable *)0x0) {
      uVar3 = RtDbTable::GetObjectForId(this,(RtId *)aeStack_10);
      goto LAB_0318b548;
    }
  }
  uVar3 = 0;
LAB_0318b548:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::ReleaseId(Sexy::RtId const&) const */

void Sexy::RtDb::ReleaseId(RtId *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  RtDbTable *this;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId(param_1);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar3 = RtId::GetTableIndex((RtId *)aeStack_10);
    this = (RtDbTable *)GetTable((RtDb *)param_1,uVar3);
    if (this != (RtDbTable *)0x0) {
      uVar2 = RtDbTable::ReleaseId(this,(RtId *)aeStack_10);
      goto LAB_03d43d38;
    }
  }
  uVar2 = 0;
LAB_03d43d38:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::SetObjectDeletionMode(Sexy::RtId const&, Sexy::RtDbTable::EObjectDeletionMode) const
    */

void __thiscall Sexy::RtDb::SetObjectDeletionMode(RtDb *this,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  RtDbTable *pRVar4;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId((RtId *)this);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar3 = RtId::GetTableIndex((RtId *)aeStack_10);
    pRVar4 = (RtDbTable *)GetTable(this,uVar3);
    if (pRVar4 != (RtDbTable *)0x0) {
      uVar2 = RtDbTable::SetObjectDeletionMode(pRVar4,aeStack_10,param_3);
      goto LAB_03d43ddc;
    }
  }
  uVar2 = 0;
LAB_03d43ddc:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::RtDb::AllocId(unsigned int, Sexy::RtObject*, Sexy::RtDbTable::EObjectDeletionMode, bool,
   Sexy::RtId::Uid*) const */

exception_ptr *
Sexy::RtDb::AllocId(exception_ptr *param_1,RtDb *param_2,uint param_3,undefined8 param_4,
                   undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  auVar1 = GetTable(param_2,param_3);
  if (auVar1._0_8_ != 0) {
    RtDbTable::AllocId(param_1,auVar1._0_8_,param_4,param_5,param_6,param_7);
    return param_1;
  }
  std::__exception_ptr::exception_ptr::exception_ptr(param_1,auVar1._8_8_);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::RetainId(Sexy::RtId const&) const */

void Sexy::RtDb::RetainId(RtId *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  RtDbTable *this;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId(param_1);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar3 = RtId::GetTableIndex((RtId *)aeStack_10);
    this = (RtDbTable *)GetTable((RtDb *)param_1,uVar3);
    if (this != (RtDbTable *)0x0) {
      uVar2 = RtDbTable::RetainId(this,(RtId *)aeStack_10);
      goto LAB_051730d4;
    }
  }
  uVar2 = 0;
LAB_051730d4:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::ReplaceObjectForId(Sexy::RtId const&, Sexy::RtObject*) const */

void __thiscall Sexy::RtDb::ReplaceObjectForId(RtDb *this,RtId *param_1,RtObject *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  RtDbTable *this_00;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId((RtId *)this);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar3 = RtId::GetTableIndex((RtId *)aeStack_10);
    this_00 = (RtDbTable *)GetTable(this,uVar3);
    if (this_00 != (RtDbTable *)0x0) {
      uVar2 = RtDbTable::ReplaceObjectForId(this_00,(RtId *)aeStack_10,param_2);
      goto LAB_05194ef8;
    }
  }
  uVar2 = 0;
LAB_05194ef8:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::GetObjectDeletionMode(Sexy::RtId const&) const */

void Sexy::RtDb::GetObjectDeletionMode(RtId *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  RtDbTable *this;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId(param_1);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar2 = RtId::GetTableIndex((RtId *)aeStack_10);
    this = (RtDbTable *)GetTable((RtDb *)param_1,uVar2);
    if (this != (RtDbTable *)0x0) {
      uVar3 = RtDbTable::GetObjectDeletionMode(this,(RtId *)aeStack_10);
      goto LAB_05194f9c;
    }
  }
  uVar3 = 2;
LAB_05194f9c:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::SetObjectIsStandalone(Sexy::RtId const&, bool) const */

void __thiscall Sexy::RtDb::SetObjectIsStandalone(RtDb *this,RtId *param_1,bool param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  RtDbTable *this_00;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId((RtId *)this);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar3 = RtId::GetTableIndex((RtId *)aeStack_10);
    this_00 = (RtDbTable *)GetTable(this,uVar3);
    if (this_00 != (RtDbTable *)0x0) {
      uVar2 = RtDbTable::SetObjectIsStandalone(this_00,(RtId *)aeStack_10,param_2);
      goto LAB_05195040;
    }
  }
  uVar2 = 0;
LAB_05195040:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::GetObjectIsStandalone(Sexy::RtId const&) const */

void Sexy::RtDb::GetObjectIsStandalone(RtId *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  RtDbTable *this;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId(param_1);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_10);
  if (cVar1 == '\0') {
    uVar3 = RtId::GetTableIndex((RtId *)aeStack_10);
    this = (RtDbTable *)GetTable((RtDb *)param_1,uVar3);
    if (this != (RtDbTable *)0x0) {
      uVar2 = RtDbTable::GetObjectIsStandalone(this,(RtId *)aeStack_10);
      goto LAB_051950e4;
    }
  }
  uVar2 = 0;
LAB_051950e4:
  RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Sexy::RtDb::InternalRemoveTable(unsigned int) */

bool __thiscall Sexy::RtDb::InternalRemoveTable(RtDb *this,uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  RtDb *pRVar3;
  undefined8 uVar4;
  
  pRVar3 = this + 0x18;
  if ((param_1 >> 0xd & 1) != 0) {
    param_1 = param_1 & 0xffffdfff;
    pRVar3 = this;
  }
  uVar4 = *(undefined8 *)pRVar3;
  uVar1 = FUN_051b54f0(uVar4,*(undefined8 *)(pRVar3 + 8));
  if (param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_051b54fc(uVar4,param_1);
    *puVar2 = 0;
  }
  return param_1 < uVar1;
}


/* Sexy::RtDb::GetTable(unsigned int) const */

undefined8 __thiscall Sexy::RtDb::GetTable(RtDb *this,uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  RtDb *pRVar3;
  undefined8 uVar4;
  
  pRVar3 = this + 0x18;
  if ((param_1 >> 0xd & 1) != 0) {
    param_1 = param_1 & 0xffffdfff;
    pRVar3 = this;
  }
  uVar4 = *(undefined8 *)pRVar3;
  uVar1 = FUN_051b54f0(uVar4,*(undefined8 *)(pRVar3 + 8));
  if (param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_051b5504(uVar4,param_1);
    return *puVar2;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::RunDeferredDeletions(unsigned int) const */

void __thiscall Sexy::RtDb::RunDeferredDeletions(RtDb *this,uint param_1)

{
  bool bVar1;
  RtDbTable *this_00;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xffffffff) {
    local_18 = FUN_051b73a8(*(undefined8 *)this);
    while( true ) {
      local_10 = FUN_051b73f8(*(undefined8 *)(this + 8));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((RtDbTable *)*puVar2 != (RtDbTable *)0x0) {
        RtDbTable::RunDeferredDeletions((RtDbTable *)*puVar2);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    local_18 = FUN_051b73a8(*(undefined8 *)(this + 0x18));
    while( true ) {
      local_10 = FUN_051b73f8(*(undefined8 *)(this + 0x20));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if ((RtDbTable *)*puVar2 != (RtDbTable *)0x0) {
        RtDbTable::RunDeferredDeletions((RtDbTable *)*puVar2);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    this_00 = (RtDbTable *)GetTable(this,param_1);
    if (this_00 != (RtDbTable *)0x0) {
      RtDbTable::RunDeferredDeletions(this_00);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::RtDb() */

void __thiscall Sexy::RtDb::RtDb(RtDb *this)

{
  undefined4 uVar1;
  Sexy *this_00;
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::
  unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::unordered_map((ulong)(this + 0x38),(hash *)0xa,aeStack_20,aaStack_18);
  Event1<Sexy::RtDbTable_const&>::Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x70));
  Event1<Sexy::RtDbTable_const&>::Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x90));
  Event1<Sexy::RtDbTable_const&>::Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0xb0));
  this_00 = (Sexy *)Event1<Sexy::RtDbTable_const&>::Event1
                              ((Event1<Sexy::RtDbTable_const&> *)(this + 0xd0));
  uVar1 = SexyTime(this_00);
  *(undefined4 *)(this + 0x30) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtDb::GetDb() */

RtDb * Sexy::RtDb::GetDb(void)

{
  RtDb *this;
  
  if (DAT_06bbdac0 != (RtDb *)0x0) {
    return DAT_06bbdac0;
  }
  this = ::operator_new(0xf0);
  RtDb(this);
  sRtDb = this;
  DAT_06bbdac0 = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::WriteRtonTableSummary(Sexy::RtSerialBuffer*) const */

void __thiscall Sexy::RtDb::WriteRtonTableSummary(RtDb *this,RtSerialBuffer *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  RtDbTable *pRVar5;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [20];
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  local_b0 = FUN_051b73a8(*(undefined8 *)(this + 0x18));
  while( true ) {
    local_a8[0] = FUN_051b73f8(*(undefined8 *)(this + 0x20));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)local_a8);
    if (!bVar1) break;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    if (*plVar2 != 0) {
      iVar4 = iVar4 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  local_b0 = FUN_051b73a8(*(undefined8 *)this);
  while( true ) {
    local_a8[0] = FUN_051b73f8(*(undefined8 *)(this + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)local_a8);
    if (!bVar1) break;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    if (*plVar2 != 0) {
      iVar4 = iVar4 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  RtSerialRtonWriter::RtSerialRtonWriter((RtSerialRtonWriter *)local_a8,param_1);
  RtSerialRtonWriter::BeginDocumentObject((RtSerialRtonWriter *)local_a8);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_b0,"version");
  RtSerialRtonWriter::WriteInt32VarU((RtSerialRtonWriter *)local_a8,(RtSerialRtonKey *)&local_b0,1);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_b0);
  RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_b0,"tables");
  RtSerialRtonWriter::BeginArray
            ((RtSerialRtonWriter *)local_a8,(exception_ptr *)&local_b0,iVar4,0x85);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_b0);
  local_b8 = FUN_051b73a8(*(undefined8 *)(this + 0x18));
  while( true ) {
    local_b0 = FUN_051b73f8(*(undefined8 *)(this + 0x20));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
    pRVar5 = (RtDbTable *)*puVar3;
    if (pRVar5 != (RtDbTable *)0x0) {
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_b0,(char *)0x0);
      RtSerialRtonWriter::BeginObject((RtSerialRtonWriter *)local_a8,(RtSerialRtonKey *)&local_b0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_b0);
      RtDbTable::WriteTableRtonKeys(pRVar5,(RtSerialRtonWriter *)local_a8);
      RtSerialRtonWriter::EndObject((RtSerialRtonWriter *)local_a8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
  }
  local_b8 = FUN_051b73a8(*(undefined8 *)this);
  while( true ) {
    local_b0 = FUN_051b73f8(*(undefined8 *)(this + 8));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
    pRVar5 = (RtDbTable *)*puVar3;
    if (pRVar5 != (RtDbTable *)0x0) {
      RtSerialRtonKey::RtSerialRtonKey((RtSerialRtonKey *)&local_b0,(char *)0x0);
      RtSerialRtonWriter::BeginObject((RtSerialRtonWriter *)local_a8,(RtSerialRtonKey *)&local_b0);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_b0);
      RtDbTable::WriteTableRtonKeys(pRVar5,(RtSerialRtonWriter *)local_a8);
      RtSerialRtonWriter::EndObject((RtSerialRtonWriter *)local_a8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
  }
  RtSerialRtonWriter::EndArray((RtSerialRtonWriter *)local_a8);
  RtSerialRtonWriter::EndDocumentObject((RtSerialRtonWriter *)local_a8);
  RtSerialRtonWriter::~RtSerialRtonWriter((RtSerialRtonWriter *)local_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::GetTable(Sexy::RtName const&) const */

void __thiscall Sexy::RtDb::GetTable(RtDb *this,RtName *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_051b53b8(*(undefined4 *)param_1);
  local_10 = CONCAT44(local_10._4_4_,uVar2);
  local_18 = std::
             unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
             ::find((unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                     *)(this + 0x38),(uint *)&local_10);
  local_10 = FUN_051b8164();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar3 = std::__detail::
            _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::operator->
                      ((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                        *)&local_18);
    uVar4 = GetTable(this,*(uint *)(lVar3 + 4));
  }
  else {
    uVar4 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::ResolveNamedId(Sexy::RtId const&) const */

void Sexy::RtDb::ResolveNamedId(RtId *param_1)

{
  char cVar1;
  uint uVar2;
  exception_ptr *in_x1;
  RtId *in_x8;
  undefined1 auVar3 [16];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::__exception_ptr::exception_ptr::operator!(in_x1);
  if ((cVar1 == '\0') && (cVar1 = RtId::IsNamed((RtId *)in_x1), cVar1 != '\0')) {
    uVar2 = RtId::GetPackageNameIndex((RtId *)in_x1);
    RtName::RtName(aRStack_28,uVar2);
    auVar3 = GetTable((RtDb *)param_1,aRStack_28);
    if (auVar3._0_8_ == (RtName *)0x0) {
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)in_x8,auVar3._8_8_);
    }
    else {
      uVar2 = RtId::GetAliasNameIndex((RtId *)in_x1);
      RtName::RtName(aRStack_18,uVar2);
      RtDbTable::GetIdForAlias(auVar3._0_8_);
      RtName::~RtName(aRStack_18);
    }
    RtName::~RtName(aRStack_28);
  }
  else {
    RtId::RtId(in_x8,(RtId *)in_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::~RtDb() */

void __thiscall Sexy::RtDb::~RtDb(RtDb *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  RtDbTable *pRVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar3 = (RtDbTable *)*puVar2;
    if (pRVar3 != (RtDbTable *)0x0) {
      RtDbTable::~RtDbTable(pRVar3);
      AK::FreeHook(pRVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar3 = (RtDbTable *)*puVar2;
    if (pRVar3 != (RtDbTable *)0x0) {
      RtDbTable::~RtDbTable(pRVar3);
      AK::FreeHook(pRVar3);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>>::clear
            ((vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>> *)this);
  std::vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>>::clear
            ((vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>> *)this_00);
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0xd0));
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0xb0));
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x90));
  Event1<Sexy::RtDbTable_const&>::~Event1((Event1<Sexy::RtDbTable_const&> *)(this + 0x70));
  std::
  unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::~unordered_map((unordered_map<unsigned_int,unsigned_int,std::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                    *)(this + 0x38));
  std::vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>>::~vector
            ((vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>> *)this_00);
  std::vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>>::~vector
            ((vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::CreateTable(unsigned int, Sexy::RtDbTable::TableOptions const*) */

void __thiscall Sexy::RtDb::CreateTable(RtDb *this,uint param_1,TableOptions *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  RtDbTable *this_00;
  undefined8 *puVar4;
  RtDb *pRVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 local_48 [16];
  Delegate1<Sexy::RtDbTable_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtDbTable *)GetTable(this,param_1);
  if (this_00 == (RtDbTable *)0x0) {
    uVar6 = param_1 & 0xffffdfff;
    if ((param_1 >> 0xd & 1) == 0) {
      this = this + 0x18;
      uVar6 = param_1;
    }
    uVar3 = FUN_051b54f0(*(undefined8 *)this,*(undefined8 *)(this + 8));
    if (uVar3 <= uVar6) {
      uVar1 = uVar6 + 0x10;
      std::vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>>::reserve
                ((vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>> *)this,(ulong)uVar1);
      std::vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>>::resize
                ((vector<Sexy::RtDbTable*,std::allocator<Sexy::RtDbTable*>> *)this,(ulong)uVar1);
      if (uVar3 < uVar1) {
        do {
          uVar2 = uVar3 + 1;
          puVar4 = (undefined8 *)FUN_051b54fc(*(undefined8 *)this,uVar3);
          *puVar4 = 0;
          uVar3 = uVar2;
        } while (uVar1 != uVar2);
      }
    }
    this_00 = ::operator_new(0x2b8);
    RtDbTable::RtDbTable(this_00,param_1,param_2);
    puVar4 = (undefined8 *)FUN_051b54fc(*(undefined8 *)this,uVar6);
    *puVar4 = this_00;
    pRVar5 = (RtDb *)GetDb();
    local_48 = MakeDelegate<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>
                         (pRVar5,(RtDbTable *)0x70);
    Delegate1<Sexy::RtDbTable_const&>::
    Delegate1<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>(aDStack_38,local_48);
    Event1<Sexy::RtDbTable_const&>::operator+=
              ((Event1<Sexy::RtDbTable_const&> *)(this_00 + 0x238),aDStack_38);
    pRVar5 = (RtDb *)GetDb();
    auVar7 = MakeDelegate<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>
                       (pRVar5,(RtDbTable *)0x90);
    local_48 = auVar7;
    Delegate1<Sexy::RtDbTable_const&>::
    Delegate1<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>(aDStack_38,local_48);
    Event1<Sexy::RtDbTable_const&>::operator+=
              ((Event1<Sexy::RtDbTable_const&> *)(this_00 + 600),aDStack_38);
    pRVar5 = (RtDb *)GetDb();
    auVar7 = MakeDelegate<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>
                       (pRVar5,(RtDbTable *)0xb0);
    local_48 = auVar7;
    Delegate1<Sexy::RtDbTable_const&>::
    Delegate1<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>(aDStack_38,local_48);
    Event1<Sexy::RtDbTable_const&>::operator+=
              ((Event1<Sexy::RtDbTable_const&> *)(this_00 + 0x278),aDStack_38);
    pRVar5 = (RtDb *)GetDb();
    auVar7 = MakeDelegate<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>
                       (pRVar5,(RtDbTable *)0xd0);
    local_48 = auVar7;
    Delegate1<Sexy::RtDbTable_const&>::
    Delegate1<Sexy::RtDb,Sexy::Event1<Sexy::RtDbTable_const&>Sexy::RtDb::*>(aDStack_38,local_48);
    Event1<Sexy::RtDbTable_const&>::operator+=
              ((Event1<Sexy::RtDbTable_const&> *)(this_00 + 0x298),aDStack_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::LoadPackageGroupFromFiles(std::vector<std::pair<unsigned int, std::string >,
   std::allocator<std::pair<unsigned int, std::string > > >&, unsigned int*) */

void __thiscall Sexy::RtDb::LoadPackageGroupFromFiles(RtDb *this,vector *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  RtDbTable *pRVar9;
  Buffer *this_00;
  ulong uVar10;
  uchar *puVar11;
  RtSerialRtonReader *this_01;
  RtSerialRtonSync *this_02;
  vector *pvVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  string asStack_58 [8];
  undefined8 local_50 [3];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  uVar13 = 0;
  cVar2 = '\x01';
  uVar14 = 0;
  uVar5 = FUN_051b550c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  FUN_051be970((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50,uVar5);
  uVar5 = FUN_051b550c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  FUN_051beb78((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50,uVar5);
  uVar5 = *(undefined8 *)param_1;
  uVar15 = *(undefined8 *)(param_1 + 8);
  lVar6 = FUN_051b550c(uVar5,uVar15);
  uVar10 = 0;
  if (lVar6 != 0) {
    do {
      puVar7 = (uint *)FUN_051b5518(uVar5,uVar13);
      puVar8 = (undefined8 *)FUN_051b5260(local_50[0],uVar13);
      pRVar9 = (RtDbTable *)GetTable(this,*puVar7);
      this_00 = ::operator_new(0x30);
      Buffer::Buffer(this_00);
      *puVar8 = this_00;
      Buffer::Buffer(aBStack_38);
      cVar1 = SexyAppBase::ReadBufferFromFile
                        (gSexyAppBase,(Buffer *)(puVar7 + 2),SUB81(aBStack_38,0));
      if (cVar1 == '\0') {
        RtDbTable::Reset(pRVar9,false);
        Buffer::~Buffer(aBStack_38);
      }
      else {
        (**(code **)(**(long **)(gSexyAppBase + 0x68) + 0x20))
                  (*(long **)(gSexyAppBase + 0x68),aBStack_38,*puVar8);
        puVar11 = (uchar *)Buffer::GetDataPtr((Buffer *)*puVar8);
        uVar3 = Buffer::GetDataLen((Buffer *)*puVar8);
        this_01 = ::operator_new(0x28);
        RtSerialRtonReader::RtSerialRtonReader(this_01,puVar11,uVar3);
        puVar8[1] = this_01;
        this_02 = ::operator_new(0x18);
        RtSerialRtonSync::RtSerialRtonSync(this_02,(RtSerialRtonReader *)puVar8[1]);
        puVar8[3] = this_02;
        iVar4 = Buffer::GetDataLen((Buffer *)*puVar8);
        uVar14 = uVar14 + iVar4;
        if (cVar2 != '\0') {
          pvVar12 = (vector *)puVar8[3];
          std::string::string(asStack_58,"");
          cVar2 = RtDbTable::SerializeTableFirstPass
                            ((RtSerialRtonSync *)pRVar9,pvVar12,(string *)(puVar8 + 4));
          std::string::~string(asStack_58);
          nop();
        }
        Buffer::~Buffer(aBStack_38);
      }
      uVar13 = uVar13 + 1;
      uVar5 = *(undefined8 *)param_1;
      uVar15 = *(undefined8 *)(param_1 + 8);
      uVar10 = FUN_051b550c(uVar5,uVar15);
    } while (uVar13 < uVar10);
  }
  for (uVar13 = 0; uVar13 < uVar10; uVar13 = uVar13 + 1) {
    puVar7 = (uint *)FUN_051b5518(uVar5,uVar13);
    lVar6 = FUN_051b5260(local_50[0],uVar13);
    if ((*(long *)(lVar6 + 8) != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
      pRVar9 = (RtDbTable *)GetTable(this,*puVar7);
      if (cVar2 == '\0') {
        uVar5 = *(undefined8 *)param_1;
        uVar15 = *(undefined8 *)(param_1 + 8);
      }
      else {
        cVar2 = RtDbTable::SerializeTableSecondPass
                          (pRVar9,*(RtSerialRtonSync **)(lVar6 + 0x18),(vector *)(lVar6 + 0x20));
        uVar5 = *(undefined8 *)param_1;
        uVar15 = *(undefined8 *)(param_1 + 8);
      }
    }
    uVar10 = FUN_051b550c(uVar5,uVar15);
  }
  uVar13 = 0;
  while (uVar13 < uVar10) {
    FUN_051b5260(local_50[0]);
    FUN_051b8000();
    uVar10 = FUN_051b550c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    uVar13 = uVar13 + 1;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar14;
  }
  FUN_051b9168((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::LoadPackageFromFile(unsigned int, std::string const&) */

void __thiscall Sexy::RtDb::LoadPackageFromFile(RtDb *this,uint param_1,string *param_2)

{
  undefined4 uVar1;
  uint local_34;
  pair<unsigned_int,std::string> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::pair<unsigned_int,std::string>::pair<unsigned_int&,void>(apStack_30,&local_34,param_2);
  std::
  vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>::
  push_back((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
             *)avStack_20,(pair *)apStack_30);
  PakRecord::~PakRecord((PakRecord *)apStack_30);
  uVar1 = LoadPackageGroupFromFiles(this,(vector *)avStack_20,(uint *)0x0);
  std::
  vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>::
  ~vector((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
           *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::SavePackageGroupToFiles(std::vector<std::pair<unsigned int, std::string >,
   std::allocator<std::pair<unsigned int, std::string > > >&, bool, unsigned int*) */

void __thiscall
Sexy::RtDb::SavePackageGroupToFiles(RtDb *this,vector *param_1,bool param_2,uint *param_3)

{
  string *psVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  RtSerialRtonWriter *this_00;
  RtSerialRtonSync *pRVar8;
  ulong uVar9;
  RtDbTable *this_01;
  RtSerialBuffer *pRVar10;
  uchar *puVar11;
  ulong uVar12;
  vector *pvVar13;
  uint uVar14;
  string asStack_88 [8];
  undefined8 local_80 [3];
  Buffer aBStack_68 [48];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
  cVar2 = '\x01';
  uVar5 = FUN_051b550c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  FUN_051be970((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80,uVar5);
  uVar5 = FUN_051b550c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  FUN_051beb78((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80,uVar5);
  uVar5 = *(undefined8 *)param_1;
  lVar6 = FUN_051b550c(uVar5,*(undefined8 *)(param_1 + 8));
  uVar9 = 0;
  if (lVar6 != 0) {
    do {
      puVar7 = (uint *)FUN_051b5518(uVar5,uVar12);
      lVar6 = FUN_051b5260(local_80[0],uVar12);
      this_00 = ::operator_new(0xa0);
      RtSerialRtonWriter::RtSerialRtonWriter(this_00);
      *(RtSerialRtonWriter **)(lVar6 + 0x10) = this_00;
      pRVar8 = ::operator_new(0x18);
      RtSerialRtonSync::RtSerialRtonSync(pRVar8,*(RtSerialRtonWriter **)(lVar6 + 0x10));
      *(RtSerialRtonSync **)(lVar6 + 0x18) = pRVar8;
      pRVar8 = (RtSerialRtonSync *)GetTable(this,*puVar7);
      if (cVar2 != '\0') {
        pvVar13 = *(vector **)(lVar6 + 0x18);
        std::string::string(asStack_38,"");
        cVar2 = RtDbTable::SerializeTableFirstPass(pRVar8,pvVar13,(string *)(lVar6 + 0x20));
        std::string::~string(asStack_38);
        nop();
      }
      uVar12 = uVar12 + 1;
      uVar5 = *(undefined8 *)param_1;
      uVar9 = FUN_051b550c(uVar5,*(undefined8 *)(param_1 + 8));
    } while (uVar12 < uVar9);
  }
  uVar14 = 0;
  for (uVar12 = 0; uVar12 < uVar9; uVar12 = uVar12 + 1) {
    puVar7 = (uint *)FUN_051b5518(uVar5,uVar12);
    lVar6 = FUN_051b5260(local_80[0],uVar12);
    this_01 = (RtDbTable *)GetTable(this,*puVar7);
    if (cVar2 != '\0') {
      cVar2 = RtDbTable::SerializeTableSecondPass
                        (this_01,*(RtSerialRtonSync **)(lVar6 + 0x18),(vector *)(lVar6 + 0x20));
    }
    Set8BytesTo0(asStack_88);
    if (param_2) {
      pRVar10 = (RtSerialBuffer *)FUN_051b547c(**(undefined8 **)(lVar6 + 0x10));
      puVar11 = (uchar *)RtSerialBuffer::GetDataPtr(pRVar10);
      pRVar10 = (RtSerialBuffer *)FUN_051b547c(**(undefined8 **)(lVar6 + 0x10));
      uVar3 = RtSerialBuffer::GetDataSize(pRVar10);
      RtSerial::RtonToJson(puVar11,uVar3,asStack_88,true);
      puVar11 = (uchar *)FUN_0547429c(asStack_88);
      iVar4 = FUN_05474178(asStack_88);
    }
    else {
      pRVar10 = (RtSerialBuffer *)FUN_051b547c(**(undefined8 **)(lVar6 + 0x10));
      puVar11 = (uchar *)RtSerialBuffer::GetDataPtr(pRVar10);
      pRVar10 = (RtSerialBuffer *)FUN_051b547c(**(undefined8 **)(lVar6 + 0x10));
      iVar4 = RtSerialBuffer::GetDataSize(pRVar10);
    }
    Buffer::Buffer(aBStack_68);
    Buffer::Buffer((Buffer *)asStack_38);
    Buffer::SetData(aBStack_68,puVar11,iVar4);
    (**(code **)(**(long **)(gSexyAppBase + 0x68) + 0x18))
              (*(long **)(gSexyAppBase + 0x68),aBStack_68,(Buffer *)asStack_38);
    psVar1 = gSexyAppBase;
    if (cVar2 != '\0') {
      uVar9 = Buffer::GetDataPtr((Buffer *)asStack_38);
      Buffer::GetDataLen((Buffer *)asStack_38);
      cVar2 = SexyAppBase::WriteBytesToFile(psVar1,puVar7 + 2,uVar9);
    }
    uVar14 = uVar14 + iVar4;
    Buffer::~Buffer((Buffer *)asStack_38);
    Buffer::~Buffer(aBStack_68);
    std::string::~string(asStack_88);
    uVar5 = *(undefined8 *)param_1;
    uVar9 = FUN_051b550c(uVar5,*(undefined8 *)(param_1 + 8));
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar14;
  }
  FUN_051b9168((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::SavePackageToFile(unsigned int, std::string const&, bool) */

void __thiscall Sexy::RtDb::SavePackageToFile(RtDb *this,uint param_1,string *param_2,bool param_3)

{
  undefined4 uVar1;
  uint local_34;
  pair<unsigned_int,std::string> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::pair<unsigned_int,std::string>::pair<unsigned_int&,void>(apStack_30,&local_34,param_2);
  std::
  vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>::
  push_back((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
             *)avStack_20,(pair *)apStack_30);
  PakRecord::~PakRecord((PakRecord *)apStack_30);
  uVar1 = SavePackageGroupToFiles(this,(vector *)avStack_20,param_3,(uint *)0x0);
  std::
  vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>::
  ~vector((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
           *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtDb::GetUidForId(Sexy::RtId const&) const */

void Sexy::RtDb::GetUidForId(RtId *param_1)

{
  char cVar1;
  uint uVar2;
  RtDbTable *this;
  exception_ptr aeStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResolveNamedId(param_1);
  cVar1 = std::__exception_ptr::exception_ptr::operator!(aeStack_30);
  if (cVar1 == '\0') {
    uVar2 = RtId::GetTableIndex((RtId *)aeStack_30);
    this = (RtDbTable *)GetTable((RtDb *)param_1,uVar2);
    if (this == (RtDbTable *)0x0) {
      ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)local_18);
    }
    else {
      local_18 = RtDbTable::GetUidForId(this,(RtId *)aeStack_30);
    }
  }
  else {
    ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_28);
    local_18._8_4_ = local_20;
    local_18._0_8_ = local_28;
  }
  RtId::~RtId((RtId *)aeStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18._0_8_,local_18._8_4_);
}

