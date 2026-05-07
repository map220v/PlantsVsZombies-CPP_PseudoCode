// Class: CallofWishManager


/* CallofWishManager::GetAccumLadder() */

undefined4 __thiscall CallofWishManager::GetAccumLadder(CallofWishManager *this)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0xa8);
  lVar1 = FUN_039d2798(uVar4,*(undefined8 *)(this + 0xb0));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_039d27c0(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(char *)(puVar2 + 1) != '\0');
  return *puVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishManager::GetPrograssValue(CallofWishTab) */

void __thiscall CallofWishManager::GetPrograssValue(CallofWishManager *this,int param_2)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 5) {
    iVar1 = *(int *)(this + 0xa0);
  }
  else {
    iVar1 = 0;
    if (param_2 == 6) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      iVar1 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar1);
      iVar1 = PlayerInfo::GetPlantStarLevel(this_01,asStack_10,false);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* CallofWishManager::CallofWishManager() */

void __thiscall CallofWishManager::CallofWishManager(CallofWishManager *this)

{
  Sexy::LazySingleton<CallofWishManager>::LazySingleton((LazySingleton<CallofWishManager> *)this);
  *(undefined ***)this = &PTR__CallofWishManager_066f1360;
  CallofWishData::CallofWishData((CallofWishData *)(this + 8));
  return;
}


/* CallofWishManager::~CallofWishManager() */

void __thiscall CallofWishManager::~CallofWishManager(CallofWishManager *this)

{
  *(undefined ***)this = &PTR__CallofWishManager_066f1360;
  CallofWishData::~CallofWishData((CallofWishData *)(this + 8));
  Sexy::LazySingleton<CallofWishManager>::~LazySingleton((LazySingleton<CallofWishManager> *)this);
  return;
}


/* CallofWishManager::~CallofWishManager() */

void __thiscall CallofWishManager::~CallofWishManager(CallofWishManager *this)

{
  ~CallofWishManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishManager::Initdata() */

void __thiscall CallofWishManager::Initdata(CallofWishManager *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039d2754(local_80);
  if (((cVar1 == '\0') || (local_70 == '\0')) ||
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 8)), cVar1 == '\0')) {
    LawnApp::ShowNetworkError(gLawnApp);
    lVar3 = UISingletonDialog<UICallofWish>::GetSingletonPtr();
    if (lVar3 != 0) {
      UISingletonDialog<UICallofWish>::CloseDialog();
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

