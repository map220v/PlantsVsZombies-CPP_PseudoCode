// Class: PlayerInfoDeltaHandler


/* PlayerInfoDeltaHandler::~PlayerInfoDeltaHandler() */

void __thiscall PlayerInfoDeltaHandler::~PlayerInfoDeltaHandler(PlayerInfoDeltaHandler *this)

{
  *(undefined ***)this = &PTR__PlayerInfoDeltaHandler_06831150;
  OfflineDataPersistor::~OfflineDataPersistor((OfflineDataPersistor *)this);
  return;
}


/* PlayerInfoDeltaHandler::~PlayerInfoDeltaHandler() */

void __thiscall PlayerInfoDeltaHandler::~PlayerInfoDeltaHandler(PlayerInfoDeltaHandler *this)

{
  ~PlayerInfoDeltaHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerInfoDeltaHandler::PlayerInfoDeltaHandler() */

void __thiscall PlayerInfoDeltaHandler::PlayerInfoDeltaHandler(PlayerInfoDeltaHandler *this)

{
  string *psVar1;
  uint uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  OfflineDataPersistor::OfflineDataPersistor((OfflineDataPersistor *)this,"/dev/null",0x38);
  *(undefined ***)this = &PTR__PlayerInfoDeltaHandler_06831150;
  psVar1 = Sexy::gSexyAppBase;
  std::string::string(asStack_10,"CurrSnapshotIndx");
  uVar2 = Sexy::SexyAppBase::RegistryReadInteger(psVar1,(int *)asStack_10);
  *(uint *)(this + 0x14) = uVar2 & 0xff;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerInfoDeltaHandler::getOtherIndex() const */

int __thiscall PlayerInfoDeltaHandler::getOtherIndex(PlayerInfoDeltaHandler *this)

{
  return (*(int *)(this + 0x14) + 1) % 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerInfoDeltaHandler::UpdateFileIndex() */

void __thiscall PlayerInfoDeltaHandler::UpdateFileIndex(PlayerInfoDeltaHandler *this)

{
  string *psVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = getOtherIndex(this);
  *(undefined4 *)(this + 0x14) = uVar2;
  psVar1 = Sexy::gSexyAppBase;
  std::string::string(asStack_10,"CurrSnapshotIndx");
  Sexy::SexyAppBase::RegistryWriteInteger(psVar1,(int)asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerInfoDeltaHandler::getOfflineFilename() */

void PlayerInfoDeltaHandler::getOfflineFilename(void)

{
  long in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_10,3);
  std::operator+(asStack_10,(&PTR_s_snapshot1_dat_065fbb30)[*(int *)(in_x0 + 0x14)]);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerInfoDeltaHandler::SnapshotToDelta(std::map<long, Sexy::RtWeakPtr<PlayerInfo>,
   std::less<long>, std::allocator<std::pair<long const, Sexy::RtWeakPtr<PlayerInfo> > > >&,
   std::map<long, Sexy::RtWeakPtr<PlayerInfo>, std::less<long>, std::allocator<std::pair<long const,
   Sexy::RtWeakPtr<PlayerInfo> > > >&) */

void __thiscall
PlayerInfoDeltaHandler::SnapshotToDelta(PlayerInfoDeltaHandler *this,map *param_1,map *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  PlayerInfo *pPVar6;
  ResourceInfo *pRVar7;
  PVZDB *pPVar8;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  long local_48;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_40 [8];
  TextureInfo **local_38;
  undefined8 local_30;
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
  ::clear((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
           *)param_2);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Iterator *)local_28,uVar4,*(undefined4 *)(this + 0x10));
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&local_30);
    Sexy::RtId::~RtId((RtId *)&local_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_50);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      iVar3 = FUN_042e7d44(*(undefined4 *)(lVar5 + 0x600));
      local_48 = (long)iVar3;
      this_00 = (RtWeakPtr<PowerPropertySheet> *)
                std::
                map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                ::operator[]((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                              *)param_2,&local_48);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_50);
      local_30 = std::
                 map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                 ::find((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                         *)param_1,&local_48);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                (agStack_40,(TextureInfo ***)&local_30);
      local_38 = (TextureInfo **)
                 std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_1);
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_30,&local_38);
      bVar1 = eastl::operator!=((rbtree_iterator *)agStack_40,(rbtree_iterator *)&local_30);
      if (bVar1) {
        pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_40);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 8));
        PlayerInfo::UpdateForDelta(pPVar6,(PlayerInfo *)pRVar7);
      }
      else {
        pPVar6 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        PlayerInfo::MarkForDelete(pPVar6);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
  local_28[0] = std::
                map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                ::begin((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                         *)param_1);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_40,(TextureInfo ***)local_28);
  while( true ) {
    local_30 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_1);
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)local_28,(TextureInfo ***)&local_30
              );
    bVar1 = eastl::operator!=((rbtree_iterator *)agStack_40,(rbtree_iterator *)local_28);
    if (!bVar1) break;
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_40);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar5 + 8));
    iVar3 = FUN_042e7d44(*(undefined4 *)(lVar5 + 0x600));
    local_38 = (TextureInfo **)(long)iVar3;
    local_30 = std::
               map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
               ::find((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                       *)param_2,(long *)&local_38);
    local_28[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    cVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_30,(exception_ptr *)local_28);
    if (cVar2 != '\0') {
      pPVar8 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      uVar4 = PVZDB::GetTable(pPVar8,*(undefined4 *)(this + 0x10));
      lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_40);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar5 + 8));
      Sexy::RtDbTable::AllocId((Iterator *)local_28,uVar4,pRVar7,2,1,0);
      Sexy::RtId::~RtId((RtId *)local_28);
    }
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)agStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerInfoDeltaHandler::FillCurrentMap(std::map<long, Sexy::RtWeakPtr<PlayerInfo>,
   std::less<long>, std::allocator<std::pair<long const, Sexy::RtWeakPtr<PlayerInfo> > > >&) */

void __thiscall PlayerInfoDeltaHandler::FillCurrentMap(PlayerInfoDeltaHandler *this,map *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  long local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
  ::clear((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
           *)param_1);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x37);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)&local_30);
    Sexy::RtId::~RtId((RtId *)&local_30);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar3 = FUN_042e7d44(*(undefined4 *)(lVar5 + 0x600));
      local_30 = (long)iVar3;
      this_00 = (RtWeakPtr<PowerPropertySheet> *)
                std::
                map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                ::operator[]((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
                              *)param_1,&local_30);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)aRStack_38);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerInfoDeltaHandler::CreateDelta() */

void __thiscall PlayerInfoDeltaHandler::CreateDelta(PlayerInfoDeltaHandler *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  PVZDB *pPVar4;
  string asStack_70 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  OfflineDataPersistor aOStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  FillCurrentMap(this,(map *)amStack_68);
  iVar3 = getOtherIndex(this);
  OfflineDataPersistor::OfflineDataPersistor(aOStack_38,(&PTR_s_snapshot1_dat_065fbb30)[iVar3],0x37)
  ;
  OfflineDataPersistor::Save(aOStack_38);
  OfflineDataPersistor::~OfflineDataPersistor(aOStack_38);
  (**(code **)(*(long *)this + 0x30))(asStack_70,this);
  cVar1 = Sexy::SexyAppBase::FileExists(gLawnApp,asStack_70);
  if (cVar1 == '\0') {
    pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    uVar2 = PVZDB::SavePackageForTableToFile(pPVar4,0x37,this + 8,0,0);
  }
  else {
    (**(code **)(*(long *)this + 0x40))(this,asStack_70);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)aOStack_38);
    SnapshotToDelta(this,(map *)amStack_68,(map *)aOStack_38);
    uVar2 = (**(code **)(*(long *)this + 0x38))(this,this + 8);
    std::
    map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
    ::~map((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
            *)aOStack_38);
  }
  std::string::~string(asStack_70);
  std::
  map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
  ::~map((map<long,Sexy::RtWeakPtr<PlayerInfo>,std::less<long>,std::allocator<std::pair<long_const,Sexy::RtWeakPtr<PlayerInfo>>>>
          *)amStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

