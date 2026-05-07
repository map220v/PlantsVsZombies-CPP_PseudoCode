// Class: DraperHelpers


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DraperHelpers::GetDraperSaveDataPath(int) */

void __thiscall DraperHelpers::GetDraperSaveDataPath(DraperHelpers *this,int param_1)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_18,3);
  Sexy::StrFormat("draper_%d",asStack_10,(ulong)this & 0xffffffff);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DraperHelpers::SaveLocalDraperState(int) */

void DraperHelpers::SaveLocalDraperState(int param_1)

{
  undefined1 auVar1 [12];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  GetDraperSaveDataPath((DraperHelpers *)(ulong)(uint)param_1,auVar1._8_4_);
  PVZDB::SavePackageForTableToFile(auVar1._0_8_,0x42,asStack_10,0,1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DraperHelpers::GetDraperSaveData(int) */

void DraperHelpers::GetDraperSaveData(int param_1)

{
  SexyAppBase *this;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ResourceInfo *pRVar5;
  undefined8 extraout_x0;
  PVZDB *pPVar6;
  RtDbTable *this_00;
  int extraout_w1;
  int iVar7;
  int extraout_w1_00;
  undefined1 auVar8 [12];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_40);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x42);
  bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
  if (bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
    iVar7 = extraout_w1;
  }
  else {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_30);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
    iVar7 = extraout_w1_00;
  }
  if (cVar2 != '\0') {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    auVar8 = FUN_03cb1480(*(undefined8 *)(lVar4 + 0x20));
    iVar7 = auVar8._8_4_;
    if (auVar8._0_8_ == (long)param_1) goto LAB_03cb1900;
  }
  this = gLawnApp;
  GetDraperSaveDataPath((DraperHelpers *)(ulong)(uint)param_1,iVar7);
  cVar2 = Sexy::SexyAppBase::FileExists(this,(string *)aIStack_28);
  std::string::~string((string *)aIStack_28);
  if (cVar2 != '\0') {
    auVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
    GetDraperSaveDataPath((DraperHelpers *)(ulong)(uint)param_1,auVar8._8_4_);
    PVZDB::LoadPackageForTableFromFile(auVar8._0_8_,0x42,aIStack_28,0,1);
    std::string::~string((string *)aIStack_28);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x42);
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
    }
    else {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_30);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_40);
  if (cVar2 == '\0') {
    lVar4 = DraperSaveData::StaticGetClass();
    FUN_03cb1464(*(undefined8 *)(lVar4 + 0x18));
    nop();
    pPVar6 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtDbTable *)PVZDB::GetTable(pPVar6,0x42);
    Sexy::RtDbTable::Reset(this_00,false);
    Sexy::RtDbTable::AllocId(aIStack_28,this_00,extraout_x0,1,1,0);
    Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
              ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_40,(RtId *)aIStack_28);
    Sexy::RtId::~RtId((RtId *)aIStack_28);
  }
LAB_03cb1900:
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  FUN_03cb1484(lVar4 + 0x20,(long)param_1);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar5);
}

