// Class: PVZDB


/* PVZDB::PVZDB() */

void __thiscall PVZDB::PVZDB(PVZDB *this)

{
  Sexy::LazySingleton<PVZDB>::LazySingleton((LazySingleton<PVZDB> *)this);
  *(undefined ***)this = &PTR__PVZDB_066083f0;
  Sexy::Event0::Event0((Event0 *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x78));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xa8));
  this[0x58] = (PVZDB)0x0;
  *(undefined4 *)(this + 0xd8) = 0xae;
  return;
}


/* PVZDB::~PVZDB() */

void __thiscall PVZDB::~PVZDB(PVZDB *this)

{
  *(undefined ***)this = &PTR__PVZDB_066083f0;
  std::
  map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
  ::~map((map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
          *)(this + 0xa8));
  std::
  map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
  ::~map((map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
          *)(this + 0x78));
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::~vector
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x60));
  std::vector<PVZDB::TableRuntimeInfo,std::allocator<PVZDB::TableRuntimeInfo>>::~vector
            ((vector<PVZDB::TableRuntimeInfo,std::allocator<PVZDB::TableRuntimeInfo>> *)
             (this + 0x40));
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::~vector
            ((vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>> *)(this + 0x28));
  Sexy::Event0::~Event0((Event0 *)(this + 8));
  Sexy::LazySingleton<PVZDB>::~LazySingleton((LazySingleton<PVZDB> *)this);
  return;
}


/* PVZDB::~PVZDB() */

void __thiscall PVZDB::~PVZDB(PVZDB *this)

{
  ~PVZDB(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<DragonBabyBruitProps>
   PVZDB::FindObjectByAlias<DragonBabyBruitProps>(PVZDB::TableIndex, Sexy::RtName) */

void PVZDB::FindObjectByAlias<DragonBabyBruitProps>
               (RtWeakPtr<Sexy::SoundResource> *param_1,undefined8 param_2,undefined4 param_3,
               RtName *param_4)

{
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtName::RtName(aRStack_18,param_4);
  GetIdByAlias(aRStack_20,param_2,param_3,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtId::~RtId(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ArcadePropertySheet>
   PVZDB::FindFirstObjectByClass<ArcadePropertySheet>(PVZDB::TableIndex) */

void PVZDB::FindFirstObjectByClass<ArcadePropertySheet>
               (RtWeakPtr<Sexy::SoundResource> *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = ArcadePropertySheet::StaticGetClass();
  FindFirstObjectByClass(aRStack_10,param_2,param_3,uVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PVZDB::IsInitialized() const */

PVZDB __thiscall PVZDB::IsInitialized(PVZDB *this)

{
  return this[0x58];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::releaseGameInfoObjects() */

void PVZDB::releaseGameInfoObjects(void)

{
  RtDb *this;
  RtName *this_00;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtDb *)Sexy::RtDb::GetDb();
  this_00 = (RtName *)Sexy::RtDb::GetTable(this,1);
  if (this_00 != (RtName *)0x0) {
    Sexy::RtName::RtName(aRStack_18,L"GameInfo");
    Sexy::RtDbTable::GetIdForAlias(this_00);
    Sexy::RtDbTable::ReleaseId((RtDbTable *)this_00,aRStack_20);
    Sexy::RtId::~RtId(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtName::RtName(aRStack_18,L"Control");
    Sexy::RtDbTable::GetIdForAlias(this_00);
    Sexy::RtDbTable::ReleaseId((RtDbTable *)this_00,aRStack_20);
    Sexy::RtId::~RtId(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZDB::isPredefinedTable(PVZDB::TableIndex) const */

bool __thiscall PVZDB::isPredefinedTable(undefined8 param_1,uint param_2)

{
  return param_2 < 0xaf;
}


/* PVZDB::isDynamicTable(PVZDB::TableIndex) const */

bool __thiscall PVZDB::isDynamicTable(undefined8 param_1,int param_2)

{
  return 0xae < param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::createTableForSchema(PVZDB::TableSchema const&) const */

void __thiscall PVZDB::createTableForSchema(PVZDB *this,TableSchema *param_1)

{
  RtDb *this_00;
  RtDbTable *this_01;
  TableOptions aTStack_30 [8];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  TableSchema local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtDbTable::TableOptions::TableOptions(aTStack_30);
  FUN_043e1f9c(auStack_28,(RtName *)(param_1 + 8));
  thunk_FUN_05475e00(auStack_18,param_1 + 0x18);
  local_10 = param_1[0x20];
  this_00 = (RtDb *)Sexy::RtDb::GetDb();
  this_01 = (RtDbTable *)Sexy::RtDb::CreateTable(this_00,*(uint *)param_1,aTStack_30);
  Sexy::RtDbTable::SetCurrentPackageName(this_01,(RtName *)(param_1 + 8));
  Sexy::RtDbTable::TableOptions::~TableOptions(aTStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZDB::GetTable(PVZDB::TableIndex) */

void __thiscall PVZDB::GetTable(undefined8 param_1,uint param_2)

{
  RtDb *this;
  
  this = (RtDb *)Sexy::RtDb::GetDb();
  Sexy::RtDb::GetTable(this,param_2);
  return;
}


/* PVZDB::GetObjectIteratorForTable(PVZDB::TableIndex) */

Iterator * PVZDB::GetObjectIteratorForTable(Iterator *param_1,undefined8 param_2,uint param_3)

{
  RtDb *this;
  RtDbTable *this_00;
  IteratorStorage *pIVar1;
  
  this = (RtDb *)Sexy::RtDb::GetDb();
  this_00 = (RtDbTable *)Sexy::RtDb::GetTable(this,param_3);
  pIVar1 = (IteratorStorage *)Sexy::RtDbTable::GetSharedIteratorStorage(this_00);
  Sexy::RtDbTable::Iterator::Iterator(param_1,this_00,pIVar1);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::FindFirstObjectByClass(PVZDB::TableIndex, Sexy::RtClass*) */

void PVZDB::FindFirstObjectByClass
               (exception_ptr *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  RtId *pRVar3;
  long *plVar4;
  int extraout_w1;
  _func_void *extraout_x1;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetObjectIteratorForTable(aIStack_28);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      std::__exception_ptr::exception_ptr::exception_ptr(param_1,extraout_x1);
LAB_043e2904:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    pRVar3 = (RtId *)Sexy::RtDb::GetDb();
    plVar4 = (long *)Sexy::RtDb::GetObjectForId(pRVar3);
    cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,param_4);
    if (cVar1 != '\0') {
      Sexy::RtId::RtId((RtId *)param_1,aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      goto LAB_043e2904;
    }
    Sexy::RtId::~RtId(aRStack_30);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::VerifyGameObjectTablesAreEmpty() */

void __thiscall PVZDB::VerifyGameObjectTablesAreEmpty(PVZDB *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  char *__s;
  RtId *pRVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int extraout_w1;
  undefined8 uVar10;
  ulong uVar11;
  string asStack_38 [8];
  string asStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_043e201c(uVar10,*(undefined8 *)(this + 0x30));
  uVar11 = 0;
  if (uVar4 != 0) {
    do {
      puVar5 = (uint *)FUN_043e2030(uVar10,uVar11);
      if (*(char *)((long)puVar5 + 0x21) != '\0') {
        lVar6 = GetTable(this,*puVar5);
        iVar3 = FUN_043e2000(*(undefined4 *)(lVar6 + 0x80));
        if (iVar3 != 0) {
          Set8BytesTo0(asStack_38);
          GetObjectIteratorForTable(aIStack_28,this,*puVar5);
          while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
            pRVar7 = (RtId *)Sexy::RtDb::GetDb();
            Sexy::RtDbTable::Iterator::operator*(aIStack_28);
            puVar8 = (undefined8 *)Sexy::RtDb::GetObjectForId(pRVar7);
            Sexy::RtId::~RtId((RtId *)asStack_30);
            __s = "##NULLPTR##";
            if (puVar8 != (undefined8 *)0x0) {
              lVar6 = (**(code **)*puVar8)(puVar8);
              __s = (char *)FUN_043e1ff4(*(undefined8 *)(lVar6 + 8));
            }
            std::string::string(asStack_30,__s);
            nop();
            cVar1 = FUN_0547419c(asStack_38);
            if (cVar1 == '\0') {
              FUN_05475ad8(asStack_38,&DAT_05633b30);
            }
            thunk_FUN_054757c0(asStack_38,asStack_30);
            std::string::~string(asStack_30);
            Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
          }
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          lVar6 = GetTable(this,*puVar5);
          uVar4 = FUN_043e2000(*(undefined4 *)(lVar6 + 0x80));
          uVar10 = FUN_0547429c(asStack_38);
          uVar9 = FUN_0547429c(puVar5 + 6);
          Sexy::StrFormat("PVZDB::VerifyGameObjectTablesAreEmpty failed! There are %d object(s) (%s) remaining in table %d (%s)!"
                          ,aIStack_28,uVar4 & 0xffffffff,uVar10,(ulong)*puVar5,uVar9);
          nop();
          std::string::~string((string *)aIStack_28);
          std::string::~string(asStack_38);
        }
        uVar10 = *(undefined8 *)(this + 0x28);
        uVar4 = FUN_043e201c(uVar10,*(undefined8 *)(this + 0x30));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PVZDB::DebugPrintTableInfo(PVZDB::TableIndex) */

void __thiscall PVZDB::DebugPrintTableInfo(PVZDB *this,uint param_2)

{
  RtDb *this_00;
  RtDbTable *this_01;
  
  if (this[0x58] == (PVZDB)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"*** PVZDB Tables not initialized! ***\n");
    return;
  }
  if (param_2 < 0xaf) {
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,param_2);
    Sexy::RtDbTable::DebugPrintTableInfo(this_01);
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"*** Table index %d out of bounds! ***\n");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::constructGameInfoObjects() */

void PVZDB::constructGameInfoObjects(void)

{
  RtDb *this;
  RtDbTable *this_00;
  PVZGameInfo *this_01;
  PVZRemoteControl *this_02;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtDb *)Sexy::RtDb::GetDb();
  this_00 = (RtDbTable *)Sexy::RtDb::GetTable(this,1);
  this_01 = ::operator_new(0x20);
  PVZGameInfo::PVZGameInfo
            (this_01,(string *)(gLawnApp + 0x90),(string *)(gLawnApp + 0x3d0),
             *(uint *)(gLawnApp + 0x3b8));
  Sexy::RtDbTable::AllocId(aRStack_38,this_00,this_01,0,1,0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  Sexy::RtName::RtName(aRStack_18,L"GameInfo");
  Sexy::RtDbTable::SetIdForAlias(this_00,aRStack_18,aRStack_38);
  Sexy::RtName::~RtName(aRStack_18);
  this_02 = ::operator_new(8);
  *(undefined8 *)this_02 = 0;
  PVZRemoteControl::PVZRemoteControl(this_02);
  Sexy::RtDbTable::AllocId(aRStack_28,this_00,this_02,0,1,0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  Sexy::RtName::RtName(aRStack_18,L"Control");
  Sexy::RtDbTable::SetIdForAlias(this_00,aRStack_18,aRStack_28);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtId::~RtId(aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::DestroyGameObjects() */

void __thiscall PVZDB::DestroyGameObjects(PVZDB *this)

{
  bool bVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ResourceInfo *pRVar4;
  long *extraout_x0;
  int extraout_w1;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  uVar2 = FUN_043e201c(uVar6,*(undefined8 *)(this + 0x30));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_043e2030(uVar6,uVar5);
      if (*(char *)((long)puVar3 + 0x21) != '\0') {
        GetObjectIteratorForTable(aIStack_28,this,*puVar3);
        while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
          Sexy::RtDbTable::Iterator::operator*(aIStack_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtId::~RtId(aRStack_30);
          pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
          if (pRVar4 != (ResourceInfo *)0x0) {
            nop();
            (**(code **)(*extraout_x0 + 0x48))();
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
        }
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        uVar6 = *(undefined8 *)(this + 0x28);
        uVar2 = FUN_043e201c(uVar6,*(undefined8 *)(this + 0x30));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::isTableIndexValid(PVZDB::TableIndex) const */

void __thiscall PVZDB::isTableIndexValid(PVZDB *this,int param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  cVar1 = isPredefinedTable();
  if (((cVar1 == '\0') && (cVar2 = isDynamicTable(this,local_24[0]), cVar2 != '\0')) &&
     (local_24[0] <= *(int *)(this + 0xd8))) {
    uVar3 = FUN_043e2dec(*(undefined8 *)(this + 0x60));
    uVar4 = FUN_043e2e3c(*(undefined8 *)(this + 0x68));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<PVZDB::TableIndex_const*,std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>>,PVZDB::TableIndex>
                         (uVar3,uVar4,local_24);
    local_10 = FUN_043e2e3c(*(undefined8 *)(this + 0x68));
    cVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PVZDB::RunDeferredDeletions() */

void __thiscall PVZDB::RunDeferredDeletions(PVZDB *this)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined4 *puVar4;
  RtDbTable *pRVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar7 = 0;
  do {
    uVar9 = *(undefined8 *)(this + 0x28);
    uVar3 = FUN_043e201c(uVar9,*(undefined8 *)(this + 0x30));
    uVar8 = uVar7;
    do {
      uVar7 = uVar8 + 1;
      if (uVar3 <= uVar8) {
        iVar6 = 0xaf;
        if (*(int *)(this + 0xd8) < 0xaf) {
          return;
        }
        do {
          while (cVar2 = isTableIndexValid(this,iVar6), cVar2 == '\0') {
            iVar6 = iVar6 + 1;
            if (*(int *)(this + 0xd8) < iVar6) {
              return;
            }
          }
          iVar1 = iVar6 + 1;
          pRVar5 = (RtDbTable *)GetTable(this,iVar6);
          Sexy::RtDbTable::RunDeferredDeletions(pRVar5);
          iVar6 = iVar1;
        } while (iVar1 <= *(int *)(this + 0xd8));
        return;
      }
      puVar4 = (undefined4 *)FUN_043e2030(uVar9,uVar8);
      uVar8 = uVar7;
    } while (*(char *)((long)puVar4 + 0x21) == '\0');
    pRVar5 = (RtDbTable *)GetTable(this,*puVar4);
    Sexy::RtDbTable::RunDeferredDeletions(pRVar5);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::DebugPrintTableContents(PVZDB::TableIndex) */

void __thiscall PVZDB::DebugPrintTableContents(PVZDB *this,uint param_2)

{
  undefined8 uVar1;
  bool bVar2;
  RtDb *this_00;
  RtDbTable *this_01;
  void *__base;
  size_t __nmemb;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  RtId *this_02;
  RtObject *this_03;
  ulong uVar6;
  int extraout_w1;
  ulong uVar7;
  RtId aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x58] == (PVZDB)0x0) {
    Sexy::OutputDebugStrF((wchar_t *)"*** PVZDB Tables not initialized! ***\n");
  }
  else if (param_2 < 0xaf) {
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,param_2);
    GetObjectIteratorForTable(aIStack_28,this,param_2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), uVar1 = local_40,
          bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
                ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)&local_40,aRStack_48);
      Sexy::RtId::~RtId(aRStack_48);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    __base = (void *)FUN_043e2058(local_40);
    __nmemb = FUN_043e2060(uVar1,local_38);
    qsort(__base,__nmemb,8,FUN_043e22bc);
    Sexy::OutputDebugStrF((wchar_t *)"==============================================\n");
    Sexy::OutputDebugStrF((wchar_t *)"Slot\tRevision\tPointer\t\t\tClass\n");
    for (uVar7 = 0; uVar1 = local_40, uVar5 = FUN_043e2060(local_40,local_38), uVar7 < uVar5;
        uVar7 = uVar7 + 1) {
      this_02 = (RtId *)FUN_043e2058(uVar1,uVar7);
      this_03 = (RtObject *)Sexy::RtDbTable::GetObjectForId(this_01,this_02);
      uVar5 = Sexy::RtId::GetSlotIndex(this_02);
      uVar6 = Sexy::RtId::GetRevision(this_02);
      pcVar4 = "<NULL>";
      if (this_03 != (RtObject *)0x0) {
        lVar3 = (*(code *)**(undefined8 **)this_03)(this_03);
        pcVar4 = (char *)FUN_043e1ff4(*(undefined8 *)(lVar3 + 8));
      }
      Sexy::OutputDebugStrF
                ((wchar_t *)"%d\t\t%d\t\t\t0x%08x\t\t%s\n",uVar5 & 0xffffffff,uVar6 & 0xffffffff,
                 this_03,pcVar4);
      Sexy::RtObject::Cast<GameObject>(this_03);
    }
    std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
              ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)&local_40);
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  else {
    Sexy::OutputDebugStrF((wchar_t *)"*** Table index %d out of bounds! ***\n");
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::InitializeTables() */

void __thiscall PVZDB::InitializeTables(PVZDB *this)

{
  vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>> *this_00;
  undefined4 uVar1;
  ulong uVar2;
  uint *puVar3;
  RtDb *this_01;
  RtDbTable *this_02;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  string asStack_58 [8];
  string asStack_50 [8];
  RtName aRStack_48 [16];
  TableSchema aTStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  undefined1 local_18;
  long local_8;
  
  this_00 = (vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::clear(this_00);
  Sexy::RtName::RtName(aRStack_48,L"ScratchSpace");
  std::string::string(asStack_58,"Scratch Space");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Game");
  std::string::string(asStack_58,"Game System");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,1,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Version");
  std::string::string(asStack_58,"Version");
  std::string::string(asStack_50,"RESFILE_PACKAGES_VERSION");
  TableSchema::TableSchema(aTStack_38,2,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Manifest");
  std::string::string(asStack_58,"Manifest");
  std::string::string(asStack_50,"RESFILE_PACKAGES_MANIFEST");
  TableSchema::TableSchema(aTStack_38,3,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LiveConfig");
  std::string::string(asStack_58,"Live Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LIVECONFIG");
  TableSchema::TableSchema(aTStack_38,4,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PropertySheets");
  std::string::string(asStack_58,"Property Sheets");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PROPERTYSHEETS");
  TableSchema::TableSchema(aTStack_38,5,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantTypes");
  std::string::string(asStack_58,"Plant Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTTYPES");
  TableSchema::TableSchema(aTStack_38,6,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantFamilyProperties");
  std::string::string(asStack_58,"Plant Family Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTFAMILYPROPERTIES");
  TableSchema::TableSchema(aTStack_38,7,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Powers");
  std::string::string(asStack_58,"Powers");
  std::string::string(asStack_50,"RESFILE_PACKAGES_POWERS");
  TableSchema::TableSchema(aTStack_38,8,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ZombieTypes");
  std::string::string(asStack_58,"Zombie Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ZOMBIETYPES");
  TableSchema::TableSchema(aTStack_38,9,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ZombieActions");
  std::string::string(asStack_58,"Zombie Actions");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ZOMBIEACTIONS");
  TableSchema::TableSchema(aTStack_38,10,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CreatureTypes");
  std::string::string(asStack_58,"Creature Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_CREATURETYPES");
  TableSchema::TableSchema(aTStack_38,0xb,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ProjectileTypes");
  std::string::string(asStack_58,"Projectile Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PROJECTILETYPES");
  TableSchema::TableSchema(aTStack_38,0xc,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GridItemTypes");
  std::string::string(asStack_58,"Grid Item Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_GRIDITEMTYPES");
  TableSchema::TableSchema(aTStack_38,0xd,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"EffectObjectTypes");
  std::string::string(asStack_58,"Effect Object Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_EFFECTOBJECTTYPES");
  TableSchema::TableSchema(aTStack_38,0xe,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CollectableTypes");
  std::string::string(asStack_58,"Collectable Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_COLLECTABLETYPES");
  TableSchema::TableSchema(aTStack_38,0xf,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PresentTables");
  std::string::string(asStack_58,"Present Table Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PRESENTTABLES");
  TableSchema::TableSchema(aTStack_38,0x10,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PresentTypes");
  std::string::string(asStack_58,"Present Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PRESENTTYPES");
  TableSchema::TableSchema(aTStack_38,0x11,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"UISheets");
  std::string::string(asStack_58,"UI Widget Sheets");
  std::string::string(asStack_50,"RESFILE_PACKAGES_UI_LAYOUT");
  TableSchema::TableSchema(aTStack_38,0x12,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"NPCDataSheets");
  std::string::string(asStack_58,"NPC Data Sheets");
  std::string::string(asStack_50,"RESFILE_PACKAGES_NPCS");
  TableSchema::TableSchema(aTStack_38,0x13,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelModules");
  std::string::string(asStack_58,"Level Modules");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELMODULES");
  TableSchema::TableSchema(aTStack_38,0x14,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PowerupTypes");
  std::string::string(asStack_58,"Powerup Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_POWERUPTYPES");
  TableSchema::TableSchema(aTStack_38,0x15,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GameFeatures");
  std::string::string(asStack_58,"Game Features");
  std::string::string(asStack_50,"RESFILE_PACKAGES_GAMEFEATURES");
  TableSchema::TableSchema(aTStack_38,0x16,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ToolPackets");
  std::string::string(asStack_58,"Tool Packets");
  std::string::string(asStack_50,"RESFILE_PACKAGES_TOOLPACKETS");
  TableSchema::TableSchema(aTStack_38,0x17,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"BonusTypes");
  std::string::string(asStack_58,"Bonus Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_BONUSTYPES");
  TableSchema::TableSchema(aTStack_38,0x18,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"StreamingMusic");
  std::string::string(asStack_58,"Streaming Music");
  std::string::string(asStack_50,"RESFILE_PACKAGES_STREAMINGWAVES");
  TableSchema::TableSchema(aTStack_38,0x19,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Magento");
  std::string::string(asStack_58,"Magento");
  std::string::string(asStack_50,"RESFILE_PACKAGES_MAGENTO");
  TableSchema::TableSchema(aTStack_38,0x1a,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMaps");
  std::string::string(asStack_58,"World Maps");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x1b,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMapList_New");
  std::string::string(asStack_58,"World Map List");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x1c,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMapList_Rift");
  std::string::string(asStack_58,"World Map List Rift");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x1d,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMapList_PVZ1");
  std::string::string(asStack_58,"World Map List PVZ1");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x1e,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMapList_UNCHARTED");
  std::string::string(asStack_58,"World Map List Uncharted");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x1f,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMapList_CardGame");
  std::string::string(asStack_58,"World Map List CardGame");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x20,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMapList_PlantWars");
  std::string::string(asStack_58,"World Map List PlantWars");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x21,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldMapEditorData");
  std::string::string(asStack_58,"World Map Editor Data");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x22,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldResourcesDataSheets");
  std::string::string(asStack_58,"World Resource Data Sheets");
  std::string::string(asStack_50,"RESFILE_PACKAGES_WORLDRESOURCES");
  TableSchema::TableSchema(aTStack_38,0x23,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"UIWidgets");
  std::string::string(asStack_58,"UI Widgets");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x24,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CurrentLevel");
  std::string::string(asStack_58,"Current Level Definition");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x25,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Board");
  std::string::string(asStack_58,"Board Save State");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x26,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GameObjects");
  std::string::string(asStack_58,"Other Game Objects");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x27,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"BoardEntities");
  std::string::string(asStack_58,"Other Board Entities");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x28,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Zombies");
  std::string::string(asStack_58,"Zombies");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x29,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Creatures");
  std::string::string(asStack_58,"Creatures");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x2a,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Projectiles");
  std::string::string(asStack_58,"Projectiles");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x2b,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Plants");
  std::string::string(asStack_58,"Plants");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x2c,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"TABLE_PLANTGROUPS");
  std::string::string(asStack_58,"TABLE_PLANTGROUPS");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x2d,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Collectables");
  std::string::string(asStack_58,"Collectables");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x2e,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GridItems");
  std::string::string(asStack_58,"Grid Items");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x2f,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"EffectObjects");
  std::string::string(asStack_58,"Effect Objects");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x30,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Effects");
  std::string::string(asStack_58,"Standalone Effects");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x31,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PopAnimRigs");
  std::string::string(asStack_58,"PopAnimRigs");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x32,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GameSubSystems");
  std::string::string(asStack_58,"Game SubSystems");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x33,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelModuleInstances");
  std::string::string(asStack_58,"Active Level Modules");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x34,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WaveActionInstances");
  std::string::string(asStack_58,"Active Wave Actions");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x35,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PowerupInstances");
  std::string::string(asStack_58,"Powerup Instances");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x36,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlayerProfiles");
  std::string::string(asStack_58,"Player profiles");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x37,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlayerInfoDelta");
  std::string::string(asStack_58,"Progression Data");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x38,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Fonts");
  std::string::string(asStack_58,"Fonts");
  std::string::string(asStack_50,"RESFILE_PACKAGES_FONTS");
  TableSchema::TableSchema(aTStack_38,0x39,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Fonts_Aliases");
  std::string::string(asStack_58,"Fonts_Aliases");
  std::string::string(asStack_50,"RESFILE_PACKAGES_FONTS_ALIASES");
  TableSchema::TableSchema(aTStack_38,0x3a,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ServerConfig");
  std::string::string(asStack_58,"Server Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_SERVERCONFIG");
  TableSchema::TableSchema(aTStack_38,0x3b,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PurchaseConfig");
  std::string::string(asStack_58,"Purchase Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PURCHASECONFIG");
  TableSchema::TableSchema(aTStack_38,0x3c,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LootSaveData");
  std::string::string(asStack_58,"Loot Save Data");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x3d,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DropItemGroups");
  std::string::string(asStack_58,"Drop Item Groups");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DROPITEMGROUPS");
  TableSchema::TableSchema(aTStack_38,0x3e,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DropItems");
  std::string::string(asStack_58,"Drop Items");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DROPITEMS");
  TableSchema::TableSchema(aTStack_38,0x3f,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ChallengeDropItems");
  std::string::string(asStack_58,"Challenge Drop Items");
  std::string::string(asStack_50,"RESFILE_PACKAGES_CHALLENGEDROPITEMS");
  TableSchema::TableSchema(aTStack_38,0x40,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ProfileLocalSaveData");
  std::string::string(asStack_58,"Profile Local Save Data");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x41,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DraperSaveData");
  std::string::string(asStack_58,"Draper Save Data");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x42,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"TLogCache");
  std::string::string(asStack_58,"TLog Cache");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x43,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ActivityConfig");
  std::string::string(asStack_58,"Activity Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ACTIVITYCONFIG");
  TableSchema::TableSchema(aTStack_38,0x44,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GachaConfig");
  std::string::string(asStack_58,"Gacha Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_GACHACONFIG");
  TableSchema::TableSchema(aTStack_38,0x45,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"SkillTypes");
  std::string::string(asStack_58,"Skill Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_SKILLTYPES");
  TableSchema::TableSchema(aTStack_38,0x46,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DisplayActions");
  std::string::string(asStack_58,"Display Actions");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DISPLAYACTIONS");
  TableSchema::TableSchema(aTStack_38,0x47,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DisplayAvatarActions");
  std::string::string(asStack_58,"Display Avatar Actions");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DISPLAYAVATARACTIONS");
  TableSchema::TableSchema(aTStack_38,0x48,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantPieceLevelData");
  std::string::string(asStack_58,"Plant Piece Level Data");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTPIECELEVELDATA");
  TableSchema::TableSchema(aTStack_38,0x49,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"StoreGiftConfig");
  std::string::string(asStack_58,"Store Gift Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_STOREGIFTCONFIG");
  TableSchema::TableSchema(aTStack_38,0x4a,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DailyRewardConfig");
  std::string::string(asStack_58,"Daily Reward Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DAILYREWARDCONFIG");
  TableSchema::TableSchema(aTStack_38,0x4b,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"NetworkCacheQueue");
  std::string::string(asStack_58,"Network Cache Queue");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x4c,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"TreasureConfig");
  std::string::string(asStack_58,"Treasure Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_TREASURECONFIG");
  TableSchema::TableSchema(aTStack_38,0x4d,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DangerRoomLevelReward");
  std::string::string(asStack_58,"danger room reward Data");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DANGERROOMLEVELREWARD");
  TableSchema::TableSchema(aTStack_38,0x4e,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"TreasureConfig");
  std::string::string(asStack_58,"PedTreasure Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PEDTREASURECONFIG");
  TableSchema::TableSchema(aTStack_38,0x4f,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RedPacketReward");
  std::string::string(asStack_58,"red packet reward Data");
  std::string::string(asStack_50,"RESFILE_PACKAGES_REDPACKETREWARD");
  TableSchema::TableSchema(aTStack_38,0x50,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantTrialConfig");
  std::string::string(asStack_58,"plant trial Data");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTTRIALCONFIG");
  TableSchema::TableSchema(aTStack_38,0x51,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantGiftTypes");
  std::string::string(asStack_58,"PlantGift Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTGIFTTYPES");
  TableSchema::TableSchema(aTStack_38,0x52,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RechargeGiftConfig");
  std::string::string(asStack_58,"Recharge Gift Data");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RECHARGEGIFTCONFIG");
  TableSchema::TableSchema(aTStack_38,0x53,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RechargeRewardConfig");
  std::string::string(asStack_58,"Recharge Reward Data");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RECHARGEREWARDCONFIG");
  TableSchema::TableSchema(aTStack_38,0x54,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ConsumptionReward");
  std::string::string(asStack_58,"consumption reward Data");
  std::string::string(asStack_50,"RESFILE_PACKAGES_CONSUMPTIONREWARD");
  TableSchema::TableSchema(aTStack_38,0x55,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantAdventureConfigData");
  std::string::string(asStack_58,"Plant Adventure Configs");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTADVENTURECONFIGDATA");
  TableSchema::TableSchema(aTStack_38,0x56,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"UILayout");
  std::string::string(asStack_58,"UILayout Definition");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x57,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DailyAchievement");
  std::string::string(asStack_58,"Daily Achievement List");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DAILYACHIEVEMENT");
  TableSchema::TableSchema(aTStack_38,0x58,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelOfTheDayConfig");
  std::string::string(asStack_58,"level of the day");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELOFTHEDAYCONFIG");
  TableSchema::TableSchema(aTStack_38,0x59,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"NationalDayRewardConfig");
  std::string::string(asStack_58,"national day");
  std::string::string(asStack_50,"RESFILE_PACKAGES_NATIONALDAYREWARDCONFIG");
  TableSchema::TableSchema(aTStack_38,0x5a,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DangerRoomRewardList");
  std::string::string(asStack_58,"danger room reward list");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DANGERROOMREWARDLIST");
  TableSchema::TableSchema(aTStack_38,0x5b,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PVPObjects");
  std::string::string(asStack_58,"pvp objects");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x5c,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"TrainingTypes");
  std::string::string(asStack_58,"Training Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_TRAININGTYPES");
  TableSchema::TableSchema(aTStack_38,0x5d,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RebateRewardConfig");
  std::string::string(asStack_58,"Rebate Reward Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_REBATEREWARDCONFIG");
  TableSchema::TableSchema(aTStack_38,0x5e,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"HardLevelConfig");
  std::string::string(asStack_58,"Hard Level Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_HARDLEVELCONFIG");
  TableSchema::TableSchema(aTStack_38,0x5f,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"StarConvertConfigData");
  std::string::string(asStack_58,"Star Convert Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_STARCONVERTCONFIGDATA");
  TableSchema::TableSchema(aTStack_38,0x60,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"EndLevelAward");
  std::string::string(asStack_58,"End Level Award");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ENDLEVELAWARD");
  TableSchema::TableSchema(aTStack_38,0x61,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PVPShopConfigData");
  std::string::string(asStack_58,"Pvp Shop Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PVPSHOPCONFIGDATA");
  TableSchema::TableSchema(aTStack_38,0x62,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PVPUpgrade");
  std::string::string(asStack_58,"PVPUpgrade");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PVPUPGRADE");
  TableSchema::TableSchema(aTStack_38,99,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LostNetActivityConfigData");
  std::string::string(asStack_58,"LostNetActivity Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LOSTNETACTIVITYCONFIG");
  TableSchema::TableSchema(aTStack_38,100,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CompensatedAwardList");
  std::string::string(asStack_58,"Compensated Award List");
  std::string::string(asStack_50,"RESFILE_PACKAGES_COMPENSATEDAWARDLIST");
  TableSchema::TableSchema(aTStack_38,0x65,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"EASquaredConfig");
  std::string::string(asStack_58,"EASquared Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_EASQUARED_CONFIG");
  TableSchema::TableSchema(aTStack_38,0x66,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ArmorTypes");
  std::string::string(asStack_58,"Armor Types");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ARMORTYPES");
  TableSchema::TableSchema(aTStack_38,0x67,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"OfferBundleConfigData");
  std::string::string(asStack_58,"Offer Bundle Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_OFFERBUNDLECONFIGDATA");
  TableSchema::TableSchema(aTStack_38,0x68,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"WorldCupConfigData");
  std::string::string(asStack_58,"WorldCup Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_WORLDCUPCONFIGDATA");
  TableSchema::TableSchema(aTStack_38,0x69,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"AwardConfig");
  std::string::string(asStack_58,"Award Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_AWARD_CONFIG");
  TableSchema::TableSchema(aTStack_38,0x6a,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustConfig");
  std::string::string(asStack_58,"Joust Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUST_CONFIG");
  TableSchema::TableSchema(aTStack_38,0x6b,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustSchedule");
  std::string::string(asStack_58,"Joust Schedule");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUST_SCHEDULE");
  TableSchema::TableSchema(aTStack_38,0x6c,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustLevels");
  std::string::string(asStack_58,"Joust Levels");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUST_LEVELS");
  TableSchema::TableSchema(aTStack_38,0x6d,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustLeaderboards");
  std::string::string(asStack_58,"Joust Leaderboards");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUST_LEADERBOARDS");
  TableSchema::TableSchema(aTStack_38,0x6e,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustCrownRewards");
  std::string::string(asStack_58,"Joust Crown Rewards");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUST_CROWNREWARDS");
  TableSchema::TableSchema(aTStack_38,0x6f,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustProgressiveRewards");
  std::string::string(asStack_58,"Joust Progressive Rewards");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUST_PROGRESSIVEREWARDS");
  TableSchema::TableSchema(aTStack_38,0x70,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustTournamentRewards");
  std::string::string(asStack_58,"Joust Tournament Rewards");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUST_TOURNAMENTREWARDS");
  TableSchema::TableSchema(aTStack_38,0x71,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RiftSchedule");
  std::string::string(asStack_58,"Rift Schedule");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_SCHEDULE");
  TableSchema::TableSchema(aTStack_38,0x72,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PerkProperties");
  std::string::string(asStack_58,"Perk Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_PERKS");
  TableSchema::TableSchema(aTStack_38,0x73,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Perks");
  std::string::string(asStack_58,"Perks");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x74,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PerkProgression");
  std::string::string(asStack_58,"Perk Progression");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_PERK_PROGRESSION");
  TableSchema::TableSchema(aTStack_38,0x75,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RiftEventConfig");
  std::string::string(asStack_58,"Rift Event Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_EVENT_CONFIG");
  TableSchema::TableSchema(aTStack_38,0x76,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RiftSubEvents");
  std::string::string(asStack_58,"Perk Sub Events");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_SUB_EVENT");
  TableSchema::TableSchema(aTStack_38,0x77,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RiftConfig");
  std::string::string(asStack_58,"Rift Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_CONFIG");
  TableSchema::TableSchema(aTStack_38,0x78,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RiftZombossRewards");
  std::string::string(asStack_58,"Rift Zomboss Rewards");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_ZOMBOSS_REWARDS");
  TableSchema::TableSchema(aTStack_38,0x79,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RiftLevelUnlocks");
  std::string::string(asStack_58,"Rift Level Unlocks");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_LEVEL_UNLOCKS");
  TableSchema::TableSchema(aTStack_38,0x7a,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RiftFirstClearRewards");
  std::string::string(asStack_58,"Rift First Clear Rewards");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_FIRST_CLEAR_REWARDS");
  TableSchema::TableSchema(aTStack_38,0x7b,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"BoardGridMaps");
  std::string::string(asStack_58,"BoardGridMaps");
  std::string::string(asStack_50,"RESFILE_PACKAGES_BOARDGRIDMAPS");
  TableSchema::TableSchema(aTStack_38,0x7c,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelModulesDifficulty");
  std::string::string(asStack_58,"LevelModulesDifficulty");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELMODULESDIFFICULTY");
  TableSchema::TableSchema(aTStack_38,0x7d,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelMutatorModules");
  std::string::string(asStack_58,"LevelMutatorModules");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELMUTATORMODULES");
  TableSchema::TableSchema(aTStack_38,0x7e,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelMutatorTables");
  std::string::string(asStack_58,"LevelMutatorTables");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELMUTATORTABLES");
  TableSchema::TableSchema(aTStack_38,0x7f,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"MainThemeProperties");
  std::string::string(asStack_58,"Main Theme Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_MAIN_THEMES");
  TableSchema::TableSchema(aTStack_38,0x80,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ThemeProperties");
  std::string::string(asStack_58,"Theme Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RIFT_THEMES");
  TableSchema::TableSchema(aTStack_38,0x81,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Themes");
  std::string::string(asStack_58,"Themes");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x82,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"AreaMainProperties");
  std::string::string(asStack_58,"Area Main Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_NEW_PVP_AREA_MAIN");
  TableSchema::TableSchema(aTStack_38,0x83,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"AreaProperties");
  std::string::string(asStack_58,"Area Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_NEW_PVP_AREAS");
  TableSchema::TableSchema(aTStack_38,0x84,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Areas");
  std::string::string(asStack_58,"Areas");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x85,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ArtifactProperties");
  std::string::string(asStack_58,"Artifact Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ARTIFACT");
  TableSchema::TableSchema(aTStack_38,0x86,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Artifact");
  std::string::string(asStack_58,"Artifact");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x87,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ArtifactDisplayActions");
  std::string::string(asStack_58,"Artifact Display Actions");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ARTIFACTDISPLAYACTIONS");
  TableSchema::TableSchema(aTStack_38,0x88,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ArtifactCultivation");
  std::string::string(asStack_58,"Artifact Cultivation");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ARTIFACTCULTIVATION");
  TableSchema::TableSchema(aTStack_38,0x89,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ArtifactImprovedProperties");
  std::string::string(asStack_58,"Artifact Improved Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ARTIFACTIMPROVEDPROPERTIES");
  TableSchema::TableSchema(aTStack_38,0x8a,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PVZ1Config");
  std::string::string(asStack_58,"pvz1 config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PVZ1_CONFIG");
  TableSchema::TableSchema(aTStack_38,0x8b,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CustomLevelConfig");
  std::string::string(asStack_58,"Custom Level Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_CUSTOMLEVELCONFIG");
  TableSchema::TableSchema(aTStack_38,0x8c,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CustomLevelData");
  std::string::string(asStack_58,"Custom Level Data");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x8d,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CardGameBoardConfig");
  std::string::string(asStack_58,"Card Game Board Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_CARDGAMEBOARDCONFIG");
  TableSchema::TableSchema(aTStack_38,0x8e,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"HotUIConfig");
  std::string::string(asStack_58,"HotUIConfig");
  std::string::string(asStack_50,"RESFILE_PACKAGES_HOTUICONFIG");
  TableSchema::TableSchema(aTStack_38,0x8f,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"HotUIWidgets");
  std::string::string(asStack_58,"Hot UI Widgets");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x90,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"HotUIComponents");
  std::string::string(asStack_58,"Hot UI Components");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x91,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"HotUIPropertySheets");
  std::string::string(asStack_58,"Hot UI Property Sheets");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x92,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Colors");
  std::string::string(asStack_58,"Colors");
  std::string::string(asStack_50,"RESFILE_PACKAGES_COLORS");
  TableSchema::TableSchema(aTStack_38,0x93,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Colors_Aliases");
  std::string::string(asStack_58,"Colors_Aliases");
  std::string::string(asStack_50,"RESFILE_PACKAGES_COLORS_ALIASES");
  TableSchema::TableSchema(aTStack_38,0x94,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelScoringRules");
  std::string::string(asStack_58,"LevelScoringRules");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELSCORINGRULES");
  TableSchema::TableSchema(aTStack_38,0x95,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"JoustPlantPowerConfigData");
  std::string::string(asStack_58,"JoustPlantPower Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_JOUSTPLANTPOWERCONFIG");
  TableSchema::TableSchema(aTStack_38,0x96,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ProbabilityConfig");
  std::string::string(asStack_58,"Probability Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PROBABILITYCONFIG");
  TableSchema::TableSchema(aTStack_38,0x97,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ArcadeConfig");
  std::string::string(asStack_58,"Arcade Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_ARCADE_CONFIG");
  TableSchema::TableSchema(aTStack_38,0x98,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"TravelLog");
  std::string::string(asStack_58,"TravelLog");
  std::string::string(asStack_50,"RESFILE_PACKAGES_TRAVELLOG");
  TableSchema::TableSchema(aTStack_38,0x99,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"TravelLogStatus");
  std::string::string(asStack_58,"TravelLogStatus");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0x9a,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"DaveTreasure");
  std::string::string(asStack_58,"DaveTreasure");
  std::string::string(asStack_50,"RESFILE_PACKAGES_DAVETREASURE");
  TableSchema::TableSchema(aTStack_38,0x9b,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantNewAvatars");
  std::string::string(asStack_58,"Plant New Avatars");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTNEWAVATARS");
  TableSchema::TableSchema(aTStack_38,0x9c,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"RichManEventPropertySheets");
  std::string::string(asStack_58,"Rich Man Event Property Sheets");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RICHMANEVENTPROPERTYSHEETS");
  TableSchema::TableSchema(aTStack_38,0x9d,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GeneralTask");
  std::string::string(asStack_58,"GeneralTask");
  std::string::string(asStack_50,"RESFILE_PACKAGES_GENERALTASK");
  TableSchema::TableSchema(aTStack_38,0x9e,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelEditor");
  std::string::string(asStack_58,"LevelEditor");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELEDITOR");
  TableSchema::TableSchema(aTStack_38,0x9f,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"Collection");
  std::string::string(asStack_58,"Collection");
  std::string::string(asStack_50,"RESFILE_PACKAGES_COLLECTION");
  TableSchema::TableSchema(aTStack_38,0xa0,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CardProperty");
  std::string::string(asStack_58,"CardProperty");
  std::string::string(asStack_50,"RESFILE_PACKAGES_CARDPROPERTY");
  TableSchema::TableSchema(aTStack_38,0xa1,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CardObjects");
  std::string::string(asStack_58,"About Card Objects");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0xa2,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"GeneEnhancementConfig");
  std::string::string(asStack_58,"GeneEnhancementConfig");
  std::string::string(asStack_50,"RESFILE_PACKAGES_GENEENHANCEMENTCONFIG");
  TableSchema::TableSchema(aTStack_38,0xa3,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"CthulhuConfig");
  std::string::string(asStack_58,"CthulhuConfig");
  std::string::string(asStack_50,"RESFILE_PACKAGES_CTHULHUCONFIG");
  TableSchema::TableSchema(aTStack_38,0xa4,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelModifierModuleCollection");
  std::string::string(asStack_58,"LevelModifierModuleCollection");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELMODIFIERMODULECOLLECTION");
  TableSchema::TableSchema(aTStack_38,0xa5,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"LevelModifierModule");
  std::string::string(asStack_58,"LevelModifierModule");
  std::string::string(asStack_50,"RESFILE_PACKAGES_LEVELMODIFIERMODULE");
  TableSchema::TableSchema(aTStack_38,0xa6,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ResistenceConfig");
  std::string::string(asStack_58,"ResistenceConfig");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RESISTENCECONFIG");
  TableSchema::TableSchema(aTStack_38,0xa7,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"ResilienceConfig");
  std::string::string(asStack_58,"ResilienceConfig");
  std::string::string(asStack_50,"RESFILE_PACKAGES_RESILIENCECONFIG");
  TableSchema::TableSchema(aTStack_38,0xa8,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"UnchartedBoostProperties");
  std::string::string(asStack_58,"UnchartedBoostProperties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_UNCHARTEDBOOSTPROPERTIES");
  TableSchema::TableSchema(aTStack_38,0xa9,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"HeroPlantConfig");
  std::string::string(asStack_58,"Hero Plant Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_HEROPLANTCONFIG");
  TableSchema::TableSchema(aTStack_38,0xaa,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"AvatarExchangeConfig");
  std::string::string(asStack_58,"Avatar Exchange Config");
  std::string::string(asStack_50,"RESFILE_PACKAGES_AVATAREXCHANGECONFIG");
  TableSchema::TableSchema(aTStack_38,0xab,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"PlantWarsZombieTitleConfig");
  std::string::string(asStack_58,"PlantWarsZombieTitleConfig");
  std::string::string(asStack_50,"RESFILE_PACKAGES_PLANTWARSZOMBIETITLECONFIG");
  TableSchema::TableSchema(aTStack_38,0xac,aRStack_48,asStack_58,1,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"MiniGamePerkProperties");
  std::string::string(asStack_58,"Mini Game Perk Properties");
  std::string::string(asStack_50,"RESFILE_PACKAGES_MINIGAME_PERKS");
  TableSchema::TableSchema(aTStack_38,0xad,aRStack_48,asStack_58,0,0,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  Sexy::RtName::RtName(aRStack_48,L"MiniGamePerks");
  std::string::string(asStack_58,"MiniGamePerks");
  std::string::string(asStack_50,"");
  TableSchema::TableSchema(aTStack_38,0xae,aRStack_48,asStack_58,0,1,asStack_50);
  std::vector<PVZDB::TableSchema,std::allocator<PVZDB::TableSchema>>::push_back(this_00,aTStack_38);
  TableSchema::~TableSchema(aTStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::~string(asStack_58);
  nop();
  Sexy::RtName::~RtName(aRStack_48);
  std::vector<PVZDB::TableRuntimeInfo,std::allocator<PVZDB::TableRuntimeInfo>>::clear
            ((vector<PVZDB::TableRuntimeInfo,std::allocator<PVZDB::TableRuntimeInfo>> *)
             (this + 0x40));
  uVar2 = FUN_043e201c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
  std::vector<PVZDB::TableRuntimeInfo,std::allocator<PVZDB::TableRuntimeInfo>>::resize
            ((vector<PVZDB::TableRuntimeInfo,std::allocator<PVZDB::TableRuntimeInfo>> *)
             (this + 0x40),uVar2);
  uVar2 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x28);
    uVar6 = FUN_043e201c(uVar7,*(undefined8 *)(this + 0x30));
    if (uVar6 <= uVar2) break;
    puVar3 = (uint *)FUN_043e2030(uVar7,uVar2);
    Sexy::RtDbTable::TableOptions::TableOptions((TableOptions *)aTStack_38);
    FUN_043e1f9c(auStack_30,(RtName *)(puVar3 + 2));
    thunk_FUN_05475e00(auStack_20,puVar3 + 6);
    local_18 = (undefined1)puVar3[8];
    this_01 = (RtDb *)Sexy::RtDb::GetDb();
    this_02 = (RtDbTable *)Sexy::RtDb::CreateTable(this_01,*puVar3,(TableOptions *)aTStack_38);
    Sexy::RtDbTable::SetCurrentPackageName(this_02,(RtName *)(puVar3 + 2));
    puVar4 = (undefined4 *)FUN_043e203c(*(undefined8 *)(this + 0x40),uVar2);
    uVar1 = FUN_043e1ffc(*(undefined4 *)this_02);
    *puVar4 = uVar1;
    lVar5 = Lua::CUIColorLayer::GetLayerColor((CUIColorLayer *)this_02);
    FUN_043e1f9c(puVar4 + 2,lVar5 + 8);
    lVar5 = FUN_043e203c(*(undefined8 *)(this + 0x40),uVar2);
    *(undefined1 *)(lVar5 + 0x18) = 0;
    Sexy::RtDbTable::TableOptions::~TableOptions((TableOptions *)aTStack_38);
    uVar2 = uVar2 + 1;
  }
  constructGameInfoObjects();
  this[0x58] = (PVZDB)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZDB::getRuntimeInfo(PVZDB::TableIndex) */

void __thiscall PVZDB::getRuntimeInfo(PVZDB *this,int param_2)

{
  char cVar1;
  int local_4;
  
  local_4 = param_2;
  cVar1 = isPredefinedTable();
  if (cVar1 != '\0') {
    FUN_043e203c(*(undefined8 *)(this + 0x40),(long)local_4);
    return;
  }
  std::
  map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
  ::operator[]((map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
                *)(this + 0xa8),(TableIndex *)&local_4);
  return;
}


/* PVZDB::SetPackageLoaded(PVZDB::TableIndex, bool) */

void __thiscall PVZDB::SetPackageLoaded(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = getRuntimeInfo();
  *(undefined1 *)(lVar1 + 0x18) = param_3;
  return;
}


/* PVZDB::ReleasePackageForTable(PVZDB::TableIndex) */

void __thiscall PVZDB::ReleasePackageForTable(undefined8 param_1,uint param_2)

{
  long lVar1;
  RtDb *this;
  RtDbTable *this_00;
  
  lVar1 = getRuntimeInfo();
  if (*(char *)(lVar1 + 0x18) != '\0') {
    this = (RtDb *)Sexy::RtDb::GetDb();
    this_00 = (RtDbTable *)Sexy::RtDb::GetTable(this,param_2);
    Sexy::RtDbTable::Reset(this_00,false);
    *(undefined1 *)(lVar1 + 0x18) = 0;
  }
  return;
}


/* PVZDB::ReleaseAllPackages() */

void __thiscall PVZDB::ReleaseAllPackages(PVZDB *this)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x28);
    uVar2 = FUN_043e201c(uVar4,*(undefined8 *)(this + 0x30));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined4 *)FUN_043e2030(uVar4,uVar3);
    ReleasePackageForTable(this,*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* PVZDB::Shutdown() */

void __thiscall PVZDB::Shutdown(PVZDB *this)

{
  uint uVar1;
  uint *puVar2;
  RtDb *this_00;
  RtDbTable *this_01;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  releaseGameInfoObjects();
  ReleaseAllPackages(this);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x28);
    uVar3 = FUN_043e201c(uVar5,*(undefined8 *)(this + 0x30));
    if (uVar3 <= uVar4) break;
    puVar2 = (uint *)FUN_043e2030(uVar5,uVar4);
    uVar1 = *puVar2;
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,uVar1);
    Sexy::RtDbTable::Reset(this_01,false);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::LoadPackageForTable(PVZDB::TableIndex, Sexy::RtWeakPtr<Sexy::GenericResFile>) */

void __thiscall
PVZDB::LoadPackageForTable(PVZDB *this,uint param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  RtDb *this_00;
  RtDbTable *this_01;
  GenericResFile *this_02;
  char *__s;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_043e2030(*(undefined8 *)(this + 0x28));
  lVar3 = getRuntimeInfo(this,param_2);
  if (*(char *)(lVar3 + 0x18) != '\0') {
    ReleasePackageForTable(this,param_2);
  }
  this_00 = (RtDb *)Sexy::RtDb::GetDb();
  this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,param_2);
  this_02 = (GenericResFile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_02);
  std::string::string(asStack_10,__s);
  cVar1 = Sexy::RtDbTable::LoadPackage(this_01,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    uVar4 = FUN_0547429c(lVar2 + 0x18);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "PVZDB::LoadPackageForTable - RtDbTable::LoadPackage Failure for Table (idx:%d, name:%s)"
               ,(ulong)param_2,uVar4);
  }
  else {
    Sexy::RtDbTable::SetCurrentPackageName(this_01,(RtName *)(lVar2 + 8));
    *(undefined1 *)(lVar3 + 0x18) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::RefreshPackageForTable(PVZDB::TableIndex, Sexy::RtWeakPtr<Sexy::GenericResFile>) */

void __thiscall
PVZDB::RefreshPackageForTable(PVZDB *this,uint param_2,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  RtDb *this_00;
  RtDbTable *this_01;
  GenericResFile *this_02;
  char *__s;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_043e2030(*(undefined8 *)(this + 0x28));
  lVar3 = getRuntimeInfo(this,param_2);
  if (*(char *)(lVar3 + 0x18) != '\0') {
    ReleasePackageForTable(this,param_2);
  }
  this_00 = (RtDb *)Sexy::RtDb::GetDb();
  this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,param_2);
  this_02 = (GenericResFile *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  __s = (char *)Sexy::GenericResFile::GetFilePath(this_02);
  std::string::string(asStack_10,__s);
  cVar1 = Sexy::RtDbTable::RefreshPackage(this_01,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    uVar4 = FUN_0547429c(lVar2 + 0x18);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "PVZDB::RefreshPackageForTable - RtDbTable::LoadPackage Failure for Table (idx:%d, name:%s)"
               ,(ulong)param_2,uVar4);
  }
  else {
    Sexy::RtDbTable::SetCurrentPackageName(this_01,(RtName *)(lVar2 + 8));
    *(undefined1 *)(lVar3 + 0x18) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZDB::GetIdByAlias(PVZDB::TableIndex, Sexy::RtName) */

RtId * PVZDB::GetIdByAlias(RtId *param_1,undefined8 param_2,undefined8 param_3,RtName *param_4)

{
  long lVar1;
  
  lVar1 = getRuntimeInfo();
  Sexy::RtId::RtId(param_1,param_4,(RtName *)(lVar1 + 8));
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::ClaimDynamicTable(bool) */

void __thiscall PVZDB::ClaimDynamicTable(PVZDB *this,bool param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  TableSchema *pTVar4;
  TableRuntimeInfo *this_00;
  RtDbTable *this_01;
  ulong uVar5;
  undefined8 uVar6;
  int local_5c;
  string asStack_58 [8];
  string asStack_50 [8];
  RtName aRStack_48 [16];
  int local_38 [2];
  undefined1 auStack_30 [16];
  undefined1 local_20;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 0x60);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_043e2044(uVar6,*(undefined8 *)(this + 0x68));
  if (lVar2 == 0) {
    local_5c = *(int *)(this + 0xd8) + 1;
    uVar5 = (ulong)(*(int *)(this + 0xd8) - 0xae);
    *(int *)(this + 0xd8) = local_5c;
    Sexy::StrFormat(L"_DYNAMIC%d_",(TableSchema *)local_38,uVar5);
    Sexy::RtName::RtName(aRStack_48,(wstring *)local_38);
    FUN_05476c50((TableSchema *)local_38);
    Sexy::StrFormat("<Dynamic #%d>",asStack_58,uVar5);
    pTVar4 = (TableSchema *)
             std::
             map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
             ::operator[]((map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
                           *)(this + 0x78),(TableIndex *)&local_5c);
    iVar1 = local_5c;
    std::string::string(asStack_50,"");
    TableSchema::TableSchema((TableSchema *)local_38,iVar1,aRStack_48,asStack_58,0,0,asStack_50);
    TableSchema::operator=(pTVar4,(TableSchema *)local_38);
    TableSchema::~TableSchema((TableSchema *)local_38);
    std::string::~string(asStack_50);
    nop();
    pTVar4 = (TableSchema *)
             std::
             map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
             ::operator[]((map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
                           *)(this + 0x78),(TableIndex *)&local_5c);
    TableRuntimeInfo::TableRuntimeInfo((TableRuntimeInfo *)local_38);
    local_20 = 0;
    local_38[0] = local_5c;
    FUN_043e1f9c(auStack_30,aRStack_48);
    this_00 = (TableRuntimeInfo *)
              std::
              map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
              ::operator[]((map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
                            *)(this + 0xa8),(TableIndex *)&local_5c);
    TableRuntimeInfo::operator=(this_00,(TableRuntimeInfo *)local_38);
    createTableForSchema(this,pTVar4);
    TableRuntimeInfo::~TableRuntimeInfo((TableRuntimeInfo *)local_38);
    std::string::~string(asStack_58);
    Sexy::RtName::~RtName(aRStack_48);
  }
  else {
    piVar3 = (int *)FUN_043e2050(uVar6,lVar2 + -1);
    local_5c = *piVar3;
    FUN_043e209c(this + 0x68);
    lVar2 = std::
            map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
            ::operator[]((map<PVZDB::TableIndex,PVZDB::TableRuntimeInfo,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableRuntimeInfo>>>
                          *)(this + 0xa8),(TableIndex *)&local_5c);
    *(undefined1 *)(lVar2 + 0x18) = 0;
    if (param_1) {
      this_01 = (RtDbTable *)GetTable(this,local_5c);
      Sexy::RtDbTable::Reset(this_01,false);
      Sexy::RtDbTable::Reset(this_01,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_5c);
}


/* PVZDB::getTableSchema(PVZDB::TableIndex) */

void __thiscall PVZDB::getTableSchema(PVZDB *this,int param_2)

{
  char cVar1;
  int local_4;
  
  local_4 = param_2;
  cVar1 = isPredefinedTable();
  if (cVar1 != '\0') {
    FUN_043e2030(*(undefined8 *)(this + 0x28),(long)local_4);
    return;
  }
  std::
  map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
  ::operator[]((map<PVZDB::TableIndex,PVZDB::TableSchema,std::less<PVZDB::TableIndex>,std::allocator<std::pair<PVZDB::TableIndex_const,PVZDB::TableSchema>>>
                *)(this + 0x78),(TableIndex *)&local_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::LoadDefaultPackageForTable(PVZDB::TableIndex) */

void __thiscall PVZDB::LoadDefaultPackageForTable(PVZDB *this,undefined4 param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = getTableSchema();
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
            (gResourceManager,(bool)(cVar1 + '('));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  LoadPackageForTable(this,param_2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZDB::LoadAllPackages() */

void __thiscall PVZDB::LoadAllPackages(PVZDB *this)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x28);
    uVar3 = FUN_043e201c(uVar6,*(undefined8 *)(this + 0x30));
    uVar1 = uVar5 + 1;
    if (uVar3 <= uVar5) break;
    puVar4 = (undefined4 *)FUN_043e2030(uVar6,uVar5);
    bVar2 = std::operator==((string *)(puVar4 + 10),"");
    uVar5 = uVar1;
    if (!bVar2) {
      LoadDefaultPackageForTable(this,*puVar4);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::LoadPackageForTableFromBuffer(PVZDB::TableIndex, Sexy::RtSerialRtonReader&, bool) */

void PVZDB::LoadPackageForTableFromBuffer(PVZDB *param_1,uint param_2,RtSerialRtonReader *param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  RtDb *this;
  RtSerialRtonSync *this_00;
  undefined8 uVar5;
  string asStack_28 [8];
  RtSerialRtonSync aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = getTableSchema();
  lVar4 = getRuntimeInfo(param_1,param_2);
  if (*(char *)(lVar4 + 0x18) != '\0') {
    ReleasePackageForTable(param_1,param_2);
  }
  this = (RtDb *)Sexy::RtDb::GetDb();
  this_00 = (RtSerialRtonSync *)Sexy::RtDb::GetTable(this,param_2);
  uVar2 = FUN_043e1ffc(*(undefined4 *)this_00);
  Sexy::RtId::StaticSetImplicitTableIndex(uVar2);
  Sexy::RtId::StaticSetImplicitTableIndex(0xffffffff);
  Sexy::RtSerialRtonSync::RtSerialRtonSync(aRStack_20,param_3);
  std::string::string(asStack_28,"");
  cVar1 = Sexy::RtDbTable::SerializeTable(this_00,(string *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  if (cVar1 == '\0') {
    uVar5 = FUN_0547429c(lVar3 + 0x18);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "PVZDB::LoadPackageForTableFromBuffer failed serialize data for table %ls.",uVar5);
  }
  else {
    Sexy::RtDbTable::SetCurrentPackageName((RtDbTable *)this_00,(RtName *)(lVar3 + 8));
    *(undefined1 *)(lVar4 + 0x18) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::LoadPackageForTableFromJson(PVZDB::TableIndex, std::string const&, bool) */

void __thiscall
PVZDB::LoadPackageForTableFromJson
          (undefined8 param_1,uint param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  string asStack_108 [8];
  RtSerialRtonReader aRStack_100 [40];
  RtSerialBuffer aRStack_d8 [48];
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtSerialBuffer::RtSerialBuffer(aRStack_d8,(uchar *)0x0,0);
  Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8,aRStack_d8);
  Set8BytesTo0(asStack_108);
  pcVar2 = (char *)FUN_0547429c(param_3);
  cVar1 = Sexy::RtSerial::JsonToRton(pcVar2,aRStack_a8,asStack_108);
  if (cVar1 == '\0') {
    uVar3 = FUN_0547429c(asStack_108);
    Sexy::OutputDebugStrF
              ((wchar_t *)"Load Table From Json Error, Table ID : %d, Error : %s",(ulong)param_2,
               uVar3);
  }
  else {
    Sexy::RtSerialRtonReader::RtSerialRtonReader(aRStack_100,aRStack_d8);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    LoadPackageForTableFromBuffer(uVar3,param_2,aRStack_100,param_4);
    Sexy::RtSerialRtonReader::~RtSerialRtonReader(aRStack_100);
  }
  std::string::~string(asStack_108);
  Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
  Sexy::RtSerialBuffer::~RtSerialBuffer(aRStack_d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::SavePackageForTableToFile(PVZDB::TableIndex, std::string const&, bool, bool) */

void __thiscall
PVZDB::SavePackageForTableToFile(PVZDB *this,uint param_2,string *param_3,bool param_4,bool param_5)

{
  char cVar1;
  long lVar2;
  RtDb *this_00;
  RtDbTable *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  RtSerialRtonWriter aRStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtSerialRtonWriter::RtSerialRtonWriter(aRStack_a8);
  lVar2 = getTableSchema(this,param_2);
  this_00 = (RtDb *)Sexy::RtDb::GetDb();
  this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,param_2);
  cVar1 = Sexy::RtDbTable::SavePackage(this_01,aRStack_a8,param_3,param_4,param_5);
  if (cVar1 == '\0') {
    uVar3 = FUN_0547429c(lVar2 + 0x18);
    uVar4 = FUN_0547429c(param_3);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "PVZDB::SavePackageForTableToFile - RtDbTable::SavePackage failed for Table (idx:%d, name%s), to file %s"
               ,(ulong)param_2,uVar3,uVar4);
  }
  else {
    Sexy::RtDbTable::SetCurrentPackageName(this_01,(RtName *)(lVar2 + 8));
  }
  Sexy::RtSerialRtonWriter::~RtSerialRtonWriter(aRStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PVZDB::GetTableName(PVZDB::TableIndex) */

undefined8 PVZDB::GetTableName(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = getTableSchema();
  FUN_05475d88(param_1,lVar1 + 0x18);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::onGameObjectSerialized(GameObject*) */

void __thiscall PVZDB::onGameObjectSerialized(PVZDB *this,GameObject *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_1,GameObject::PostLoad);
  Sexy::Delegate0::Delegate0<GameObject,void(GameObject::*)()>(aDStack_38,aCStack_50);
  Sexy::Event0::operator+=((Event0 *)(this + 8),aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZDB::ReleaseDynamicTable(PVZDB::TableIndex) */

void __thiscall PVZDB::ReleaseDynamicTable(PVZDB *this,undefined4 param_2)

{
  undefined4 local_4;
  
  local_4 = param_2;
  std::vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>>::push_back
            ((vector<PVZDB::TableIndex,std::allocator<PVZDB::TableIndex>> *)(this + 0x60),
             (TableIndex *)&local_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::SaveGameState(bool) */

void __thiscall PVZDB::SaveGameState(PVZDB *this,bool param_1)

{
  ulong uVar1;
  TableIndex *pTVar2;
  RtDb *this_00;
  bool *pbVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool abStack_60 [8];
  string asStack_58 [8];
  Sexy aSStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  uint local_30 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar5 = *(undefined8 *)(this + 0x28);
  uVar4 = 0;
  uVar1 = FUN_043e201c(uVar5,*(undefined8 *)(this + 0x30));
  if (uVar1 != 0) {
    do {
      pTVar2 = (TableIndex *)FUN_043e2030(uVar5,uVar4);
      if (pTVar2[0x21] != '\0') {
        std::string::string(asStack_58,"");
        nop();
        if (param_1) {
          GetFolder(asStack_48,3);
          std::operator+(asStack_48,'/');
          std::operator+(asStack_40,(string *)&DAT_06b056c0);
          std::operator+(asStack_38,'/');
          FUN_05474278(asStack_58,(string *)local_30);
          std::string::~string((string *)local_30);
          std::string::~string(asStack_38);
          std::string::~string(asStack_40);
          std::string::~string(asStack_48);
        }
        else {
          GetFolder((string *)local_30,3);
          FUN_05474278(asStack_58,(string *)local_30);
          std::string::~string((string *)local_30);
        }
        pbVar3 = abStack_60;
        uVar5 = Sexy::RtName::GetString();
        FUN_05478178(aSStack_50,uVar5);
        Sexy::WStringToString(aSStack_50,(wstring *)0x0,pbVar3);
        uVar5 = FUN_0547429c(asStack_48);
        Sexy::StrFormat("save_%s.rton",asStack_40,uVar5);
        std::operator+(asStack_58,asStack_40);
        std::pair<unsigned_int,std::string>::pair<PVZDB::TableIndex_const&,std::string,void>
                  ((pair<unsigned_int,std::string> *)local_30,pTVar2,asStack_38);
        std::
        vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
        ::push_back((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
                     *)avStack_20,(pair *)local_30);
        PakRecord::~PakRecord((PakRecord *)local_30);
        std::string::~string(asStack_38);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        FUN_05476c50(aSStack_50);
        nop();
        std::string::~string(asStack_58);
        uVar5 = *(undefined8 *)(this + 0x28);
        uVar1 = FUN_043e201c(uVar5,*(undefined8 *)(this + 0x30));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  this_00 = (RtDb *)Sexy::RtDb::GetDb();
  Sexy::RtDb::SavePackageGroupToFiles(this_00,(vector *)avStack_20,false,local_30);
  Sexy::OutputDebugStrF((wchar_t *)"---- save complete, total bytes: %d\n",(ulong)local_30[0]);
  std::
  vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>::
  ~vector((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
           *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::LoadGameState(bool) */

void __thiscall PVZDB::LoadGameState(PVZDB *this,bool param_1)

{
  Event0 *this_00;
  undefined *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  RtDb *this_01;
  RtDbTable *this_02;
  bool *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  bool abStack_80 [8];
  string asStack_78 [8];
  Sexy aSStack_70 [8];
  string asStack_68 [8];
  uint local_60 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_58 [24];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_58);
  uVar6 = *(undefined8 *)(this + 0x28);
  uVar5 = 0;
  uVar2 = FUN_043e201c(uVar6,*(undefined8 *)(this + 0x30));
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_043e2030(uVar6,uVar5);
      if (*(char *)((long)puVar3 + 0x21) != '\0') {
        this_02 = (RtDbTable *)GetTable(this,*puVar3);
        Sexy::RtDbTable::Reset(this_02,false);
        std::string::string(asStack_78,"");
        nop();
        if (param_1) {
          GetFolder(asStack_68,3);
          std::operator+(asStack_68,'/');
          std::operator+((string *)local_60,(string *)&DAT_06b056c0);
          std::operator+((string *)&local_40,'/');
          FUN_05474278(asStack_78,(Event0 *)&local_28);
          std::string::~string((string *)&local_28);
          std::string::~string((string *)&local_40);
          std::string::~string((string *)local_60);
          std::string::~string(asStack_68);
        }
        else {
          GetFolder((Event0 *)&local_28,3);
          FUN_05474278(asStack_78,(Event0 *)&local_28);
          std::string::~string((string *)&local_28);
        }
        pbVar4 = abStack_80;
        uVar6 = Sexy::RtName::GetString();
        FUN_05478178(aSStack_70,uVar6);
        Sexy::WStringToString(aSStack_70,(wstring *)0x0,pbVar4);
        uVar6 = FUN_0547429c(asStack_68);
        Sexy::StrFormat("save_%s.rton",(string *)local_60,uVar6);
        std::operator+(asStack_78,(string *)local_60);
        std::pair<unsigned_int,std::string>::pair<PVZDB::TableIndex_const&,std::string,void>
                  ((pair<unsigned_int,std::string> *)&local_28,(TableIndex *)puVar3,
                   (string *)&local_40);
        std::
        vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
        ::push_back((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
                     *)avStack_58,(pair *)&local_28);
        PakRecord::~PakRecord((PakRecord *)&local_28);
        std::string::~string((string *)&local_40);
        std::string::~string((string *)local_60);
        std::string::~string(asStack_68);
        FUN_05476c50(aSStack_70);
        nop();
        std::string::~string(asStack_78);
        uVar6 = *(undefined8 *)(this + 0x28);
        uVar2 = FUN_043e201c(uVar6,*(undefined8 *)(this + 0x30));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  puVar1 = gMessageRouter;
  this_00 = (Event0 *)(this + 8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameObjectSerialized);
  local_a0 = local_40;
  uStack_98 = uStack_38;
  local_90 = local_30;
  MessageRouter::Subscribe<GameObject*,Sexy::CBMemberTranslatorX<PVZDB,void(PVZDB::*)(GameObject*)>>
            ((MessageRouter *)puVar1,Message::GameObjectSerializedIn,&local_a0);
  this_01 = (RtDb *)Sexy::RtDb::GetDb();
  Sexy::RtDb::LoadPackageGroupFromFiles(this_01,(vector *)avStack_58,local_60);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::OutputDebugStrF((wchar_t *)"---- load complete, total bytes: %d\n",(ulong)local_60[0]);
  uVar6 = Sexy::Event0::GetDelegateCount(this_00);
  Sexy::OutputDebugStrF((wchar_t *)"*** Notifying %d listeners...\n",uVar6);
  Sexy::Event0::operator()(this_00);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  Sexy::Event0::Event0((Event0 *)&local_28);
  Sexy::Event0::operator=(this_00,(Event0 *)&local_28);
  Sexy::Event0::~Event0((Event0 *)&local_28);
  std::
  vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>::
  ~vector((vector<std::pair<unsigned_int,std::string>,std::allocator<std::pair<unsigned_int,std::string>>>
           *)avStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::LoadPackageForTableFromFile(PVZDB::TableIndex, std::string const&, bool, bool) */

void __thiscall
PVZDB::LoadPackageForTableFromFile
          (PVZDB *this,uint param_2,Buffer *param_3,undefined1 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  RtDb *this_00;
  RtDbTable *this_01;
  undefined8 uVar5;
  undefined4 uVar6;
  wstring awStack_a8 [8];
  RtName aRStack_a0 [16];
  RtSerialRtonReader aRStack_90 [40];
  Buffer aBStack_68 [48];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Buffer::Buffer(aBStack_68);
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    cVar1 = Sexy::SexyAppBase::ReadBufferFromFile(Sexy::gSexyAppBase,param_3,SUB81(aBStack_68,0));
    if (cVar1 == '\0') {
      uVar5 = FUN_0547429c(param_3);
      Sexy::OutputDebugStrF
                ((wchar_t *)"PVZDB::LoadPackageForTableFromFile failed to open file for reading %s."
                 ,uVar5);
      uVar6 = 0;
      goto LAB_043ed0fc;
    }
  }
  iVar2 = Sexy::Buffer::GetDataLen(aBStack_68);
  if (iVar2 == 0) {
    uVar5 = FUN_0547429c(param_3);
    Sexy::OutputDebugStrF((wchar_t *)"PVZDB::LoadPackageForTableFromFile %s length = 0.",uVar5);
    uVar6 = 0;
  }
  else {
    Sexy::Buffer::Buffer(aBStack_38);
    if (param_5 == '\0') {
      puVar4 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_68);
      uVar3 = Sexy::Buffer::GetDataLen(aBStack_68);
    }
    else {
      (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x68) + 0x20))
                (*(long **)(Sexy::gSexyAppBase + 0x68),aBStack_68,aBStack_38);
      puVar4 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_38);
      uVar3 = Sexy::Buffer::GetDataLen(aBStack_38);
    }
    uVar6 = 1;
    Sexy::RtSerialRtonReader::RtSerialRtonReader(aRStack_90,puVar4,uVar3);
    LoadPackageForTableFromBuffer(this,param_2,aRStack_90,param_4);
    this_00 = (RtDb *)Sexy::RtDb::GetDb();
    this_01 = (RtDbTable *)Sexy::RtDb::GetTable(this_00,param_2);
    Sexy::ToWString((string *)param_3);
    Sexy::RtName::RtName(aRStack_a0,awStack_a8);
    Sexy::RtDbTable::SetCurrentPackageName(this_01,aRStack_a0);
    Sexy::RtName::~RtName(aRStack_a0);
    FUN_05476c50(awStack_a8);
    WaveProgressMeter::setFillPercentage((WaveProgressMeter *)this_01,1);
    Sexy::RtSerialRtonReader::~RtSerialRtonReader(aRStack_90);
    Sexy::Buffer::~Buffer(aBStack_38);
  }
LAB_043ed0fc:
  Sexy::Buffer::~Buffer(aBStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::LoadPackageForTableFromRTONFile(PVZDB::TableIndex, std::string const&) */

void __thiscall
PVZDB::LoadPackageForTableFromRTONFile(PVZDB *this,undefined4 param_2,Buffer *param_3)

{
  char cVar1;
  uint uVar2;
  uchar *puVar3;
  undefined1 uVar4;
  RtSerialRtonReader aRStack_90 [40];
  Buffer aBStack_68 [48];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Buffer::Buffer(aBStack_68);
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    cVar1 = Sexy::SexyAppBase::ReadBufferFromFile(Sexy::gSexyAppBase,param_3,SUB81(aBStack_68,0));
    uVar4 = 0;
    if (cVar1 == '\0') goto LAB_043ed2b0;
  }
  uVar4 = 1;
  Sexy::Buffer::Buffer(aBStack_38);
  (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x68) + 0x20))
            (*(long **)(Sexy::gSexyAppBase + 0x68),aBStack_68,aBStack_38);
  puVar3 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_38);
  uVar2 = Sexy::Buffer::GetDataLen(aBStack_38);
  Sexy::RtSerialRtonReader::RtSerialRtonReader(aRStack_90,puVar3,uVar2);
  LoadPackageForTableFromBuffer(this,param_2,aRStack_90,0);
  Sexy::RtSerialRtonReader::~RtSerialRtonReader(aRStack_90);
  Sexy::Buffer::~Buffer(aBStack_38);
LAB_043ed2b0:
  Sexy::Buffer::~Buffer(aBStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZDB::SavePackageFromNetJsonStringToFile(PVZDB::TableIndex, std::string const&, std::string
   const&, bool, bool) */

void __thiscall
PVZDB::SavePackageFromNetJsonStringToFile
          (undefined8 param_1,uint param_2,undefined8 param_3,Sexy *param_4,char param_5,
          char param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  RtDb *this;
  RtDbTable *this_00;
  char *pcVar5;
  RtSerialBuffer *pRVar6;
  uchar *puVar7;
  string *extraout_x1;
  string asStack_150 [8];
  string asStack_148 [8];
  wstring awStack_140 [8];
  RtSerialBuffer aRStack_138 [48];
  Buffer aBStack_108 [48];
  RtName aRStack_d8 [48];
  undefined8 local_a8 [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtDb *)Sexy::RtDb::GetDb();
  this_00 = (RtDbTable *)Sexy::RtDb::GetTable(this,param_2);
  Sexy::RtSerialBuffer::RtSerialBuffer(aRStack_138,(uchar *)0x0,0);
  Sexy::RtSerialRtonWriter::RtSerialRtonWriter((RtSerialRtonWriter *)local_a8,aRStack_138);
  Set8BytesTo0(asStack_150);
  pcVar5 = (char *)FUN_0547429c(param_3);
  cVar1 = Sexy::RtSerial::JsonToRton(pcVar5,(RtSerialRtonWriter *)local_a8,asStack_150);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    cVar2 = '\0';
    cVar1 = FUN_0547419c(param_4);
    if (cVar1 == '\0') {
      Set8BytesTo0(asStack_148);
      if (param_5 == '\0') {
        pRVar6 = (RtSerialBuffer *)FUN_043e2004(local_a8[0]);
        puVar7 = (uchar *)Sexy::RtSerialBuffer::GetDataPtr(pRVar6);
        pRVar6 = (RtSerialBuffer *)FUN_043e2004(local_a8[0]);
        iVar3 = Sexy::RtSerialBuffer::GetDataSize(pRVar6);
      }
      else {
        pRVar6 = (RtSerialBuffer *)FUN_043e2004(local_a8[0]);
        puVar7 = (uchar *)Sexy::RtSerialBuffer::GetDataPtr(pRVar6);
        pRVar6 = (RtSerialBuffer *)FUN_043e2004(local_a8[0]);
        uVar4 = Sexy::RtSerialBuffer::GetDataSize(pRVar6);
        Sexy::RtSerial::RtonToJson(puVar7,uVar4,asStack_148,true);
        puVar7 = (uchar *)FUN_0547429c(asStack_148);
        iVar3 = FUN_05474178(asStack_148);
      }
      Sexy::Buffer::Buffer(aBStack_108);
      if (param_6 != '\0') {
        Sexy::Buffer::Buffer((Buffer *)aRStack_d8);
        Sexy::Buffer::SetData((Buffer *)aRStack_d8,puVar7,iVar3);
        (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x68) + 0x18))
                  (*(long **)(Sexy::gSexyAppBase + 0x68),(Buffer *)aRStack_d8,aBStack_108);
        puVar7 = (uchar *)Sexy::Buffer::GetDataPtr(aBStack_108);
        Sexy::Buffer::GetDataLen(aBStack_108);
        Sexy::Buffer::~Buffer((Buffer *)aRStack_d8);
      }
      cVar2 = Sexy::SexyAppBase::WriteBytesToFile(Sexy::gSexyAppBase,param_4,(ulong)puVar7);
      if (cVar2 != '\0') {
        Sexy::StringToWString(param_4,extraout_x1);
        Sexy::RtName::RtName(aRStack_d8,awStack_140);
        FUN_05476c50(awStack_140);
        Sexy::RtDbTable::SetCurrentPackageName(this_00,aRStack_d8);
        Sexy::RtName::~RtName(aRStack_d8);
      }
      Sexy::Buffer::~Buffer(aBStack_108);
      std::string::~string(asStack_148);
    }
  }
  std::string::~string(asStack_150);
  Sexy::RtSerialRtonWriter::~RtSerialRtonWriter((RtSerialRtonWriter *)local_a8);
  Sexy::RtSerialBuffer::~RtSerialBuffer(aRStack_138);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

