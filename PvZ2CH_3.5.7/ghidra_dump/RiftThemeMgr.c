// Class: RiftThemeMgr


/* RiftThemeMgr::GetModeName(int) */

void RiftThemeMgr::GetModeName(int param_1)

{
  Sexy::StrFormat("[RIFT_MODE_%d]");
  return;
}


/* RiftThemeMgr::GetModeDescription(int) */

void RiftThemeMgr::GetModeDescription(int param_1)

{
  Sexy::StrFormat("[RIFT_MODE_DESC_%d]");
  return;
}


/* RiftThemeMgr::RiftThemeMgr() */

void __thiscall RiftThemeMgr::RiftThemeMgr(RiftThemeMgr *this)

{
  Sexy::LazySingleton<RiftThemeMgr>::LazySingleton((LazySingleton<RiftThemeMgr> *)this);
  *(undefined ***)this = &PTR__RiftThemeMgr_06689890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::themeDisabled(std::string const&) */

void __thiscall RiftThemeMgr::themeDisabled(RiftThemeMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)local_18,L"RiftThemeModuleProps");
  PVZDB::GetIdByAlias(aRStack_38,uVar3,0x14,(RtName *)local_18);
  Sexy::RtName::~RtName((RtName *)local_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
  cVar2 = '\0';
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0x40));
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar4 + 0x40));
    while( true ) {
      cVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
      if (!(bool)cVar2) break;
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_28,uVar3);
      cVar2 = std::operator==(asStack_28,param_1);
      if (cVar2 != '\0') {
        std::string::~string(asStack_28);
        break;
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::IsThemeDisabled(std::string const&) */

void __thiscall RiftThemeMgr::IsThemeDisabled(RiftThemeMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 uStack_20;
  undefined8 auStack_18 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)auStack_18,L"RiftThemeModuleProps");
  PVZDB::GetIdByAlias(aRStack_38,uVar3,0x14,(RtName *)auStack_18);
  Sexy::RtName::~RtName((RtName *)auStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
  cVar2 = '\0';
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    uStack_20 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar4 + 0x40));
    auStack_18[0] =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(lVar4 + 0x40));
    while( true ) {
      cVar2 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_20,(__normal_iterator *)auStack_18)
      ;
      if (!(bool)cVar2) break;
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
      FUN_05475d88(asStack_28,uVar3);
      cVar2 = std::operator==(asStack_28,param_1);
      if (cVar2 != '\0') {
        std::string::~string(asStack_28);
        break;
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_20);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::IsCurrentLevelThemeDisabled() */

void __thiscall RiftThemeMgr::IsCurrentLevelThemeDisabled(RiftThemeMgr *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    thunk_FUN_05475e00(asStack_10,uVar2);
  }
  uVar1 = themeDisabled(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::AddThemeModuleIfNeeded() */

void __thiscall RiftThemeMgr::AddThemeModuleIfNeeded(RiftThemeMgr *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  LevelModuleManager *pLVar4;
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsCurrentLevelThemeDisabled(this);
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"RiftThemeModuleProps");
    PVZDB::GetIdByAlias(aRStack_28,uVar3,0x14,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
    if (bVar2) {
      pLVar4 = (LevelModuleManager *)
               FUN_037130b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      LevelModuleManager::AddModuleFromProperties(pLVar4,aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtId::~RtId(aRStack_28);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtId::~RtId(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::GetMainThemeById(ThemeType) */

void RiftThemeMgr::GetMainThemeById
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  RiftMainThemeProperties *pRVar3;
  int extraout_w1;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x80);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_03713cb8:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pRVar3 = Sexy::RtObject::Cast<RiftMainThemeProperties>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    if ((pRVar3 != (RiftMainThemeProperties *)0x0) && (*(int *)(pRVar3 + 0x30) == param_3)) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)param_1,(RtId *)aRStack_30);
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      goto LAB_03713cb8;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::GetThemeName(int) */

void RiftThemeMgr::GetThemeName(int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetMainThemeById(aRStack_10,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::GetThemeDescription(int) */

void RiftThemeMgr::GetThemeDescription(int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetMainThemeById(aRStack_10,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::GetThemeDescriptionDetails(int) */

void RiftThemeMgr::GetThemeDescriptionDetails(int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetMainThemeById(aRStack_10,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::GetThemeIcon(int) */

void RiftThemeMgr::GetThemeIcon(int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetMainThemeById(aRStack_10,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::CreateThemeData(std::string) */

void RiftThemeMgr::CreateThemeData(ThemeData *param_1,undefined8 param_2,string *param_3)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ThemeData::ThemeData(param_1);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(param_3);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar1,0x81,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::themeDisabled(ThemeType, std::string const&) */

void __thiscall
RiftThemeMgr::themeDisabled(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)local_18,L"RiftThemeModuleProps");
  PVZDB::GetIdByAlias(aRStack_38,uVar3,0x14,(RtName *)local_18);
  Sexy::RtName::~RtName((RtName *)local_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
  bVar2 = false;
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar4 + 0x58));
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar4 + 0x58));
    local_28 = FUN_0371422c(uVar3,uVar5,param_2);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar4 + 0x58));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_18);
    if (bVar2) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(lVar4 + 8);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this);
      FUN_05475d88((RtName *)local_18,param_3);
      local_20 = FUN_037135e8(uVar3,uVar5,(RtName *)local_18);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
      local_18[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
      if (!bVar2) {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::IsThemeDisabled(ThemeType, std::string const&) */

void __thiscall
RiftThemeMgr::IsThemeDisabled(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 auStack_18 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)auStack_18,L"RiftThemeModuleProps");
  PVZDB::GetIdByAlias(aRStack_38,uVar3,0x14,(RtName *)auStack_18);
  Sexy::RtName::~RtName((RtName *)auStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
  bVar2 = false;
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar4 + 0x58));
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar4 + 0x58));
    uStack_28 = FUN_0371422c(uVar3,uVar5,param_2);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    auStack_18[0] =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(lVar4 + 0x58));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_28,(__normal_iterator *)auStack_18);
    if (bVar2) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_28);
      this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(lVar4 + 8);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this);
      FUN_05475d88((RtName *)auStack_18,param_3);
      uStack_20 = FUN_037135e8(uVar3,uVar5,(RtName *)auStack_18);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)auStack_18);
      auStack_18[0] =
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_20,(__normal_iterator *)auStack_18)
      ;
      if (!bVar2) {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* RiftThemeMgr::~RiftThemeMgr() */

void __thiscall RiftThemeMgr::~RiftThemeMgr(RiftThemeMgr *this)

{
  *(undefined ***)this = &PTR__RiftThemeMgr_06689890;
  std::vector<ThemeData,std::allocator<ThemeData>>::clear
            ((vector<ThemeData,std::allocator<ThemeData>> *)(this + 8));
  std::vector<ThemeData,std::allocator<ThemeData>>::~vector
            ((vector<ThemeData,std::allocator<ThemeData>> *)(this + 8));
  Sexy::LazySingleton<RiftThemeMgr>::~LazySingleton((LazySingleton<RiftThemeMgr> *)this);
  return;
}


/* RiftThemeMgr::~RiftThemeMgr() */

void __thiscall RiftThemeMgr::~RiftThemeMgr(RiftThemeMgr *this)

{
  ~RiftThemeMgr(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeMgr::GetThemeList() */

vector<ThemeData,std::allocator<ThemeData>> * RiftThemeMgr::GetThemeList(void)

{
  long in_x0;
  vector<ThemeData,std::allocator<ThemeData>> *in_x8;
  
  std::vector<ThemeData,std::allocator<ThemeData>>::vector(in_x8,(vector *)(in_x0 + 8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::addTheme(std::string) */

void __thiscall RiftThemeMgr::addTheme(RiftThemeMgr *this,string *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    uVar3 = FUN_037130c8(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      FUN_05475d88(asStack_18,param_2);
      CreateThemeData(aRStack_10,this,asStack_18);
      std::vector<ThemeData,std::allocator<ThemeData>>::push_back
                ((vector<ThemeData,std::allocator<ThemeData>> *)(this + 8),(ThemeData *)aRStack_10);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_10);
      std::string::~string(asStack_18);
      break;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037130d4(uVar5,uVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==(param_2,(string *)(lVar2 + 0x10));
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::handleRandomTheme(std::vector<std::string, std::allocator<std::string > > const&)
    */

void __thiscall RiftThemeMgr::handleRandomTheme(RiftThemeMgr *this,vector *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  RiftThemeProperties *pRVar3;
  undefined8 uVar4;
  int extraout_w1;
  int iVar5;
  int extraout_w1_00;
  int extraout_w1_01;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_40);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x81);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_50);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    pRVar3 = Sexy::RtObject::Cast<RiftThemeProperties>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    Sexy::RtId::~RtId((RtId *)&local_50);
    iVar5 = extraout_w1_00;
    if (pRVar3 != (RiftThemeProperties *)0x0) {
      FUN_05475d88(asStack_58,pRVar3 + 0x10);
      uVar2 = FUN_03713354(*(undefined8 *)param_1);
      uVar4 = FUN_037133a4(*(undefined8 *)(param_1 + 8));
      FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)&local_48,asStack_58);
      local_50 = FUN_037146f8(uVar2,uVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_48);
      local_48 = FUN_037133a4(*(undefined8 *)(param_1 + 8));
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
      if (bVar1) {
        std::string::~string(asStack_58);
        iVar5 = extraout_w1_01;
      }
      else {
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)local_40,asStack_58);
        std::string::~string(asStack_58);
        iVar5 = extraout_w1;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_40);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_40);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar2,uVar4);
  uVar2 = FUN_037130c0(local_40[0],0);
  FUN_05475d88(aIStack_28,uVar2);
  addTheme(this,aIStack_28);
  std::string::~string((string *)aIStack_28);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::syncTheme(int) */

void RiftThemeMgr::syncTheme(int param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetMainThemeById(aRStack_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    uVar7 = 0;
    bVar1 = false;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    lVar3 = FUN_037130b4(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
    if (lVar3 != 0) {
      do {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        psVar4 = (string *)FUN_037130c0(*(undefined8 *)(lVar3 + 0x38),uVar7);
        bVar2 = std::operator==(psVar4,"random");
        if (bVar2) {
          bVar1 = true;
        }
        else {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          uVar6 = FUN_037130c0(*(undefined8 *)(lVar3 + 0x38),uVar7);
          FUN_05475d88(asStack_10,uVar6);
          addTheme((RiftThemeMgr *)(ulong)(uint)param_1,asStack_10);
          std::string::~string(asStack_10);
        }
        uVar7 = uVar7 + 1;
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        uVar5 = FUN_037130b4(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
      } while (uVar7 < uVar5);
    }
    if (bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      handleRandomTheme((RiftThemeMgr *)(ulong)(uint)param_1,(vector *)(lVar3 + 0x38));
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeMgr::SyncTheme(int) */

void RiftThemeMgr::SyncTheme(int param_1)

{
  std::vector<ThemeData,std::allocator<ThemeData>>::clear
            ((vector<ThemeData,std::allocator<ThemeData>> *)((ulong)(uint)param_1 + 8));
  syncTheme(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeMgr::SyncTheme(std::vector<int, std::allocator<int> > const&) */

void __thiscall RiftThemeMgr::SyncTheme(RiftThemeMgr *this,vector *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<ThemeData,std::allocator<ThemeData>>::clear
            ((vector<ThemeData,std::allocator<ThemeData>> *)(this + 8));
  local_18 = FUN_03713240(*(undefined8 *)param_1);
  local_10 = FUN_03713290(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    syncTheme((int)this);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

