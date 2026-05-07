// Class: CustomLevelDataCreator


/* CustomLevelDataCreator::~CustomLevelDataCreator() */

void __thiscall CustomLevelDataCreator::~CustomLevelDataCreator(CustomLevelDataCreator *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>::~vector
            ((vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>> *)this);
  return;
}


/* CustomLevelDataCreator::GetLevelDataPtr(int) */

undefined * __thiscall
CustomLevelDataCreator::GetLevelDataPtr(CustomLevelDataCreator *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  FUN_035dbfe8(this + 0x18);
  uVar3 = *(undefined8 *)this;
  iVar1 = FUN_035dbff0(uVar3,*(undefined8 *)(this + 8));
  if (param_1 < iVar1) {
    puVar2 = (undefined *)FUN_035dc010(uVar3,(long)param_1);
    return puVar2;
  }
  return &DAT_06aa7540;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::GenerateRandomLevelIDSegment() */

void __thiscall CustomLevelDataCreator::GenerateRandomLevelIDSegment(CustomLevelDataCreator *this)

{
  undefined4 uVar1;
  ulong uVar2;
  time_t tVar3;
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = time((time_t *)0x0);
  Sexy::SRand(uVar2);
  tVar3 = time((time_t *)0x0);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  thunk_FUN_05460424(auStack_168,tVar3);
  FUN_05462824(asStack_188,auStack_178);
  uVar2 = Sexy::Rand();
  Sexy::StrFormat("%08x",asStack_180,uVar2 & 0xffffffff);
  std::operator+(asStack_188,asStack_180);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::CreateLevelID() */

void CustomLevelDataCreator::CreateLevelID(void)

{
  CustomLevelDataCreator *in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  MD5 aMStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost(this);
  PurchaseBroker::GetDeviceID();
  GenerateRandomLevelIDSegment(in_x0);
  FUN_031dcc6c(asStack_90);
  std::operator+(asStack_90,asStack_98);
  MD5::MD5(aMStack_78,asStack_88);
  MD5::toString();
  FUN_05474278();
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelDataCreator::CustomLevelDataCreator() */

void __thiscall CustomLevelDataCreator::CustomLevelDataCreator(CustomLevelDataCreator *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::GetLevelData(std::string const&) */

void __thiscall CustomLevelDataCreator::GetLevelData(CustomLevelDataCreator *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = FUN_035dc974(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa7540;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::GetLevelDataPtr(std::string const&) */

void __thiscall
CustomLevelDataCreator::GetLevelDataPtr(CustomLevelDataCreator *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = FUN_035dcbf4(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::IsLevelDownload(std::string const&) */

void __thiscall
CustomLevelDataCreator::IsLevelDownload(CustomLevelDataCreator *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  local_18 = FUN_035dce70(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::RemoveLevelData(std::string const&) */

void __thiscall
CustomLevelDataCreator::RemoveLevelData(CustomLevelDataCreator *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,param_1);
  local_28 = FUN_035de66c(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>::erase
              ((vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>> *)this,
               local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::DeleteLevelData(std::string const&) */

void __thiscall
CustomLevelDataCreator::DeleteLevelData(CustomLevelDataCreator *this,string *param_1)

{
  char cVar1;
  undefined8 uVar2;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_20,3);
  std::operator+(asStack_20,(string *)&DAT_06aa7500);
  uVar2 = FUN_0547429c(param_1);
  Sexy::StrFormat("%s.rton",asStack_10,uVar2);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  cVar1 = (**(code **)(*Sexy::gFileDriver + 0x110))(Sexy::gFileDriver,asStack_28,0);
  if (cVar1 != '\0') {
    (**(code **)(*Sexy::gFileDriver + 0x140))(Sexy::gFileDriver,asStack_28);
    RemoveLevelData(this,param_1);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* CustomLevelDataCreator::DeleteLevelData(CustomLevelWorldParams const&) */

void __thiscall
CustomLevelDataCreator::DeleteLevelData
          (CustomLevelDataCreator *this,CustomLevelWorldParams *param_1)

{
  DeleteLevelData(this,(string *)(param_1 + 8));
  return;
}


/* CustomLevelDataCreator::SortLevelDatas() */

void __thiscall CustomLevelDataCreator::SortLevelDatas(CustomLevelDataCreator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this);
  std::
  sort<__gnu_cxx::__normal_iterator<CustomLevelWorldParams*,std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>>,bool(*)(CustomLevelWorldParams_const&,CustomLevelWorldParams_const&)>
            (uVar1,uVar2,sortByLevelIndex);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::FillLevelData(Sexy::RtWeakPtr<CustomLevelData>) */

void __thiscall
CustomLevelDataCreator::FillLevelData(CustomLevelDataCreator *this,RtWeakPtr *param_2)

{
  bool bVar1;
  long lVar2;
  CustomLevelWorldParams aCStack_2e0 [728];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    CustomLevelWorldParams::CustomLevelWorldParams
              (aCStack_2e0,(CustomLevelWorldParams *)(lVar2 + 0x10));
    std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>::push_back
              ((vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>> *)this,
               aCStack_2e0);
    CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_2e0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::LoadLevelData(std::string const&) */

void __thiscall CustomLevelDataCreator::LoadLevelData(CustomLevelDataCreator *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  PVZDB *pPVar5;
  RtDbTable *pRVar6;
  RtObject *this_00;
  int extraout_w1;
  int extraout_w1_00;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,param_1);
  if (cVar1 != '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x8d);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar6 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x8d);
    Sexy::RtDbTable::Reset(pRVar6,false);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar6 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x8d);
    Sexy::RtDbTable::Reset(pRVar6,true);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::LoadPackageForTableFromRTONFile(pPVar5,0x8d,param_1);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x8d);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar2) {
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        bVar2 = Sexy::RtObject::IsA<CustomLevelData>(this_00);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
          FillLevelData(this,(RtId *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          break;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1_00);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::LoadLevelDatas() */

void __thiscall CustomLevelDataCreator::LoadLevelDatas(CustomLevelDataCreator *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  char local_38;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>::clear
            ((vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>> *)this);
  GetFolder(asStack_40,3);
  std::operator+(asStack_40,(string *)&DAT_06aa7500);
  std::string::~string(asStack_40);
  plVar5 = *(long **)(Sexy::gSexyAppBase + 0x28);
  PakFileDesc::PakFileDesc((PakFileDesc *)asStack_40);
  uVar3 = (**(code **)(*plVar5 + 0x160))(plVar5,asStack_58,asStack_40);
  do {
    while (local_38 == '\0') {
      FUN_05475d88(asStack_50,asStack_40);
      lVar4 = FUN_05474374(asStack_50,".rton",0);
      if (lVar4 != -1) {
        uVar6 = 1;
        FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
        LoadLevelData(this,asStack_48);
        std::string::~string(asStack_48);
      }
      std::string::~string(asStack_50);
      cVar1 = (**(code **)(*plVar5 + 0x170))(plVar5,uVar3,asStack_40);
      if (cVar1 == '\0') goto LAB_035e0238;
    }
    cVar1 = (**(code **)(*plVar5 + 0x170))(plVar5,uVar3,asStack_40);
  } while (cVar1 != '\0');
LAB_035e0238:
  (**(code **)(*plVar5 + 0x178))(plVar5,uVar3);
  SortLevelDatas(this);
  uVar2 = FUN_035dbff0(*(undefined8 *)this,*(undefined8 *)(this + 8));
  *(undefined4 *)(this + 0x18) = uVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_40);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::Load() */

void __thiscall CustomLevelDataCreator::Load(CustomLevelDataCreator *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  char cStack_38;
  long lStack_8;
  
  uVar6 = 0;
  lStack_8 = ___stack_chk_guard;
  std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>::clear
            ((vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>> *)this);
  GetFolder(asStack_40,3);
  std::operator+(asStack_40,(string *)&DAT_06aa7500);
  std::string::~string(asStack_40);
  plVar5 = *(long **)(Sexy::gSexyAppBase + 0x28);
  PakFileDesc::PakFileDesc((PakFileDesc *)asStack_40);
  uVar3 = (**(code **)(*plVar5 + 0x160))(plVar5,asStack_58,asStack_40);
  do {
    while (cStack_38 == '\0') {
      FUN_05475d88(asStack_50,asStack_40);
      lVar4 = FUN_05474374(asStack_50,".rton",0);
      if (lVar4 != -1) {
        uVar6 = 1;
        FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
        LoadLevelData(this,asStack_48);
        std::string::~string(asStack_48);
      }
      std::string::~string(asStack_50);
      cVar1 = (**(code **)(*plVar5 + 0x170))(plVar5,uVar3,asStack_40);
      if (cVar1 == '\0') goto LAB_035e0238;
    }
    cVar1 = (**(code **)(*plVar5 + 0x170))(plVar5,uVar3,asStack_40);
  } while (cVar1 != '\0');
LAB_035e0238:
  (**(code **)(*plVar5 + 0x178))(plVar5,uVar3);
  SortLevelDatas(this);
  uVar2 = FUN_035dbff0(*(undefined8 *)this,*(undefined8 *)(this + 8));
  *(undefined4 *)(this + 0x18) = uVar2;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_40);
  std::string::~string(asStack_58);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::ConstructLevelData(CustomLevelWorldParams const&) */

void __thiscall
CustomLevelDataCreator::ConstructLevelData
          (CustomLevelDataCreator *this,CustomLevelWorldParams *param_1)

{
  GameObject *pGVar1;
  PVZDB *pPVar2;
  undefined8 uVar3;
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = (GameObject *)CustomLevelData::StaticNew();
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar3 = PVZDB::GetTable(pPVar2,0x8d);
  Sexy::RtDbTable::AllocId(aRStack_18,uVar3,pGVar1,0,1,0);
  Sexy::RtId::RtId(aRStack_10,aRStack_18);
  GameObject::CallInitialize(pGVar1,aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  CustomLevelWorldParams::operator=((CustomLevelWorldParams *)(pGVar1 + 0x10),param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::SaveLevelData(CustomLevelWorldParams const&) */

void __thiscall
CustomLevelDataCreator::SaveLevelData(CustomLevelDataCreator *this,CustomLevelWorldParams *param_1)

{
  undefined8 uVar1;
  PVZDB *pPVar2;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ConstructLevelData(this,param_1);
  FUN_05475d88(asStack_30,param_1 + 8);
  GetFolder(asStack_20,3);
  std::operator+(asStack_20,(string *)&DAT_06aa7500);
  uVar1 = FUN_0547429c(asStack_30);
  Sexy::StrFormat("%s.rton",asStack_10,uVar1);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::SavePackageForTableToFile(pPVar2,0x8d,asStack_28,0,1);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelDataCreator::Save(CustomLevelWorldParams) */

void __thiscall
CustomLevelDataCreator::Save(CustomLevelDataCreator *this,CustomLevelWorldParams *param_2)

{
  CustomLevelWorldParams *pCVar1;
  char cVar2;
  CustomLevelWorldParams CVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  pCVar1 = param_2 + 8;
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0547419c(pCVar1);
  if (cVar2 == '\0') {
    FUN_05475d88(asStack_10,pCVar1);
  }
  else {
    CreateLevelID();
  }
  FUN_05474278(pCVar1,asStack_10);
  std::string::~string(asStack_10);
  *(undefined4 *)(param_2 + 0x2c0) = *(undefined4 *)(this + 0x18);
  uVar4 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(param_2 + 0x2c8) = uVar4;
  CVar3 = (CustomLevelWorldParams)CustomLevelUtils::IsCertifiedAuthor();
  param_2[0x278] = CVar3;
  if (*(uint *)(param_2 + 0x294) < 3) {
    if (*(uint *)(param_2 + 0x294) == 1) {
      param_2[0x279] = (CustomLevelWorldParams)0x0;
    }
  }
  else {
    param_2[0x278] = (CustomLevelWorldParams)0x0;
  }
  SaveLevelData(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

