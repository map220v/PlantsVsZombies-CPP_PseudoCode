// Class: HeroPlantUtils


/* HeroPlantUtils::GetCurrentHeroPlant() */

undefined4 HeroPlantUtils::GetCurrentHeroPlant(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
  return *(undefined4 *)(lVar1 + 8);
}


/* HeroPlantUtils::SetCurrentHeroPlant(int) */

void HeroPlantUtils::SetCurrentHeroPlant(int param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
  *(int *)(lVar1 + 8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantUtils::IsHeroPlant(std::string const&) */

void HeroPlantUtils::IsHeroPlant(string *param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  PlantType *this;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    this = (PlantType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    cVar2 = PlantType::IsHeroPlant(this);
    if (cVar2 != '\0') goto LAB_042b7de0;
  }
  cVar2 = '\0';
LAB_042b7de0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantUtils::IsHeroPlant(int) */

void HeroPlantUtils::IsHeroPlant(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  uVar2 = IsHeroPlant(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantUtils::GetHeroPlantList() */

void __thiscall HeroPlantUtils::GetHeroPlantList(HeroPlantUtils *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  PlantType *this_00;
  NameMapperBase *this_01;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  LevelEditorCardPlantInterface aLStack_18 [4];
  int local_14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_18);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_18), bVar1) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_18);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_10);
    if ((cVar2 == '\0') &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10),
       *(char *)(lVar3 + 0x30) != '\0')) {
      this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      cVar2 = PlantType::IsHeroPlant(this_00);
      if (cVar2 != '\0') {
        this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        local_14 = NameMapperBase::GetIdForName(this_01,(string *)(lVar3 + 8));
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)in_x8,&local_14);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantUtils::GetPlayerHeroPlantList() */

void __thiscall HeroPlantUtils::GetPlayerHeroPlantList(HeroPlantUtils *this)

{
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  string *psVar3;
  ulong uVar4;
  NameMapperBase *this_01;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar5;
  undefined8 uVar6;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::GetUnlockedPlantList();
  uVar6 = local_20;
  lVar2 = FUN_042b79a0(local_20,local_18);
  if (lVar2 != 0) {
    do {
      psVar3 = (string *)FUN_042b79ac(uVar6,uVar5);
      cVar1 = IsHeroPlant(psVar3);
      if (cVar1 != '\0') {
        this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        psVar3 = (string *)FUN_042b79ac(local_20,uVar5);
        local_24 = NameMapperBase::GetIdForName(this_01,psVar3);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)in_x8,&local_24);
      }
      uVar6 = local_20;
      uVar5 = uVar5 + 1;
      uVar4 = FUN_042b79a0(local_20,local_18);
    } while (uVar5 < uVar4);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

