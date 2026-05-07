// Class: PlantPediaManager


/* PlantPediaManager::PlantPediaManager() */

void __thiscall PlantPediaManager::PlantPediaManager(PlantPediaManager *this)

{
  Sexy::LazySingleton<PlantPediaManager>::LazySingleton((LazySingleton<PlantPediaManager> *)this);
  *(undefined ***)this = &PTR__PlantPediaManager_066168e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  return;
}


/* PlantPediaManager::~PlantPediaManager() */

void __thiscall PlantPediaManager::~PlantPediaManager(PlantPediaManager *this)

{
  *(undefined ***)this = &PTR__PlantPediaManager_066168e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::LazySingleton<PlantPediaManager>::~LazySingleton((LazySingleton<PlantPediaManager> *)this);
  return;
}


/* PlantPediaManager::~PlantPediaManager() */

void __thiscall PlantPediaManager::~PlantPediaManager(PlantPediaManager *this)

{
  ~PlantPediaManager(this);
  AK::FreeHook(this);
  return;
}


/* PlantPediaManager::HasReceivedReward(std::string const&) */

void __thiscall PlantPediaManager::HasReceivedReward(PlantPediaManager *this,string *param_1)

{
  NameMapperBase *this_00;
  int iVar1;
  
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar1 = NameMapperBase::GetIdForName(this_00,param_1);
  LocalProfileSaveData::HasPlantPediaRewarded(iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPediaManager::CheckConfig() */

void __thiscall PlantPediaManager::CheckConfig(PlantPediaManager *this)

{
  char cVar1;
  undefined8 uVar2;
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 8));
  if (cVar1 != '\0') {
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"PlantEncyclopedia");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar2,5,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 8),(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_28);
    std::string::~string(asStack_30);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPediaManager::HasAnyUnRewardedPedia() */

undefined1 __thiscall PlantPediaManager::HasAnyUnRewardedPedia(PlantPediaManager *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  
  CheckConfig(this);
  this_00 = (RtWeakPtr *)(this + 8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  uVar6 = 0;
  if (bVar1) {
    do {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      uVar5 = FUN_038d1fd4(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
      if (uVar5 <= uVar6) goto LAB_038d2810;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      psVar3 = (string *)FUN_038d1fe0(*(undefined8 *)(lVar4 + 0x10),uVar6);
      cVar2 = HasReceivedReward(this,psVar3);
      uVar7 = 1;
      uVar6 = uVar6 + 1;
    } while (cVar2 != '\0');
  }
  else {
LAB_038d2810:
    uVar7 = 0;
  }
  return uVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPediaManager::IsPediaEnabled(std::string const&) */

void __thiscall PlantPediaManager::IsPediaEnabled(PlantPediaManager *this,string *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 8);
  local_8 = ___stack_chk_guard;
  CheckConfig(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  bVar2 = false;
  if (bVar1) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(lVar3 + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar3 + 0x10));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,param_1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar3 + 0x10));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

