// Class: CollectionUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUtils::GetCollectionImageName(int, int) */

void __thiscall
CollectionUtils::GetCollectionImageName(CollectionUtils *this,int param_1,int param_2)

{
  int iVar1;
  string *extraout_x1;
  int local_34 [3];
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  iVar1 = CollectionMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  Sexy::StringToUpper(aSStack_28,extraout_x1);
  std::operator+("IMAGE_UI_COLLECTION_",asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_34);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string((string *)aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUtils::GetCollectionImage(int, int, bool) */

void CollectionUtils::GetCollectionImage(int param_1,int param_2,bool param_3)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCollectionImageName((CollectionUtils *)(ulong)(uint)param_1,param_2,(uint)param_3);
  lVar1 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  if ((lVar1 == 0) && (param_3 != 0)) {
    std::string::string(asStack_10,"IMAGE_UI_COLLECTION_COLLECTION_DEFAULT");
    lVar1 = StringHelper::ToImage(asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUtils::GetCollectionConfig(int) */

void CollectionUtils::GetCollectionConfig(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int extraout_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  code *pcVar7;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = CollectionMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0xa0);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (in_x8);
LAB_03830678:
      std::string::~string(asStack_40);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar7 = *(code **)(*plVar5 + 0x20);
      uVar4 = CollectionType::StaticGetClass();
      cVar2 = (*pcVar7)(plVar5,uVar4);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = std::operator==((string *)(lVar6 + 0x10),asStack_40);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)in_x8,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
          goto LAB_03830678;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUtils::GetCollectionName(int, int) */

void __thiscall CollectionUtils::GetCollectionName(CollectionUtils *this,int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  RtWeakPtr aRStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCollectionConfig((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (!bVar1) {
    FUN_05476574();
    goto LAB_03830784;
  }
  if (param_1 < 1) {
LAB_03830748:
    lVar2 = 0;
  }
  else {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    uVar3 = FUN_0382ff18(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20));
    if (uVar3 < (ulong)(long)param_1) goto LAB_03830748;
    lVar2 = (long)(param_1 + -1);
  }
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  psVar5 = (string *)FUN_0382ff24(*(undefined8 *)(lVar4 + 0x18),lVar2);
  Sexy::ToWString(psVar5);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
LAB_03830784:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectionUtils::GetPlayerCollectionName(int) */

void CollectionUtils::GetPlayerCollectionName(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  int extraout_var;
  int in_w2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetCollection(this_00,param_1);
  GetCollectionName((CollectionUtils *)(ulong)(uint)param_1,extraout_var,in_w2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUtils::GetCollectionDescription(int, int) */

void __thiscall
CollectionUtils::GetCollectionDescription(CollectionUtils *this,int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  string *psVar5;
  undefined8 *puVar6;
  ulong uVar7;
  wstring *in_x8;
  RtWeakPtr aRStack_38 [8];
  undefined1 auStack_30 [8];
  ulong local_28;
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  GetCollectionConfig((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_38);
  if ((bVar1) && (0 < param_1)) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    uVar3 = FUN_0382ff2c(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
    if ((ulong)(long)param_1 <= uVar3) {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::ToWString((string *)(lVar2 + 0x30));
      TodStringTranslate(awStack_18);
      FUN_054766c8();
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      uVar3 = 0;
      while( true ) {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        puVar6 = (undefined8 *)FUN_0382ff5c(*(undefined8 *)(lVar2 + 0x38),(long)(param_1 + -1));
        uVar7 = FUN_0382ff18(*puVar6,puVar6[1]);
        if (uVar7 <= uVar3) break;
        local_28 = uVar3 + 1;
        std::to_string<unsigned_long>(&local_28);
        std::operator+("{STUFF_",asStack_20);
        std::operator+((string *)awStack_18,"}");
        Sexy::ToWString(asStack_10);
        std::string::~string(asStack_10);
        std::string::~string((string *)awStack_18);
        std::string::~string(asStack_20);
        pwVar4 = (wchar_t *)FUN_054766ec(auStack_30);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        puVar6 = (undefined8 *)FUN_0382ff5c(*(undefined8 *)(lVar2 + 0x38),(long)(param_1 + -1));
        psVar5 = (string *)FUN_0382ff24(*puVar6,uVar3);
        Sexy::ToWString(psVar5);
        TodReplaceString(in_x8,pwVar4,awStack_18);
        FUN_054766c8();
        FUN_05476c50(asStack_10);
        FUN_05476c50(awStack_18);
        FUN_05476c50(auStack_30);
        uVar3 = uVar3 + 1;
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectionUtils::GetPlayerCollectionDescription(int) */

void CollectionUtils::GetPlayerCollectionDescription(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  int extraout_var;
  int in_w2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetCollection(this_00,param_1);
  GetCollectionDescription((CollectionUtils *)(ulong)(uint)param_1,extraout_var,in_w2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionUtils::GetCollectionBoostForPlant(std::vector<PlantBoost const*,
   std::allocator<PlantBoost const*> >&, int, PlantBoostType) */

void CollectionUtils::GetCollectionBoostForPlant
               (vector<PlantBoost_const*,std::allocator<PlantBoost_const*>> *param_1,
               undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this;
  PVZ1ModeNetworkMgr *this_00;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  RtWeakPtr *this_02;
  ulong uVar10;
  undefined8 uVar11;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  iVar3 = PlantNameMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PVZ1ModeNetworkMgr *)ProfileMgr::GetCurrentProfile(this);
  puVar4 = (undefined8 *)PVZ1ModeNetworkMgr::GetServerPlantBanList(this_00);
  uVar11 = *puVar4;
  uVar5 = FUN_0382febc(uVar11,puVar4[1]);
  if (uVar5 != 0) {
    do {
      piVar6 = (int *)FUN_0382fed0(uVar11,uVar10);
      if (piVar6[2] == 1) {
        GetCollectionConfig(*piVar6);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
        if (cVar1 != '\0') {
          lVar7 = FUN_0382fed0(*puVar4,uVar10);
          iVar3 = *(int *)(lVar7 + 4);
          if (0 < iVar3) {
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            uVar5 = FUN_0382fedc(*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(lVar7 + 0x60));
            if ((ulong)(long)iVar3 <= uVar5) {
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              uVar11 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(lVar7 + 0x70));
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              uVar8 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar7 + 0x70));
              local_18 = std::
                         find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                   (uVar11,uVar8,asStack_30);
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
              local_10 = (RtWeakPtr *)
                         std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(lVar7 + 0x70));
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
              if (!bVar2) {
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
                lVar9 = FUN_0382fed0(*puVar4,uVar10);
                this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)FUN_0382ff0c(*(undefined8 *)(lVar7 + 0x58),
                                          (long)(*(int *)(lVar9 + 4) + -1));
                local_20 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin(this_01);
                local_18 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::end(this_01);
                while (bVar2 = __gnu_cxx::operator!=
                                         ((__normal_iterator *)&local_20,
                                          (__normal_iterator *)&local_18), bVar2) {
                  this_02 = (RtWeakPtr *)
                            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
                  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
                  if ((bVar2) &&
                     (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)this_02),
                     *(int *)(lVar7 + 0x10) == param_3)) {
                    local_10 = this_02;
                    std::vector<PlantBoost_const*,std::allocator<PlantBoost_const*>>::push_back
                              (param_1,(PlantBoost **)&local_10);
                  }
                  std::move_iterator<SexyURL::KeyedValue*>::operator++
                            ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
                }
              }
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        uVar11 = *puVar4;
        uVar5 = FUN_0382febc(uVar11,puVar4[1]);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  std::string::~string(asStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

