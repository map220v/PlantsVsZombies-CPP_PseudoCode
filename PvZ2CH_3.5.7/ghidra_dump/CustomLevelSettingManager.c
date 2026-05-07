// Class: CustomLevelSettingManager


/* CustomLevelSettingManager::SetLinkPhoneNumber(std::string const&) */

void CustomLevelSettingManager::SetLinkPhoneNumber(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 8);
  return;
}


/* CustomLevelSettingManager::~CustomLevelSettingManager() */

void __thiscall
CustomLevelSettingManager::~CustomLevelSettingManager(CustomLevelSettingManager *this)

{
  *(undefined ***)this = &PTR__CustomLevelSettingManager_06796270;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 8));
  Sexy::LazySingleton<CustomLevelSettingManager>::~LazySingleton
            ((LazySingleton<CustomLevelSettingManager> *)this);
  return;
}


/* CustomLevelSettingManager::~CustomLevelSettingManager() */

void __thiscall
CustomLevelSettingManager::~CustomLevelSettingManager(CustomLevelSettingManager *this)

{
  ~CustomLevelSettingManager(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelSettingManager::GetLinkState() */

byte __thiscall CustomLevelSettingManager::GetLinkState(CustomLevelSettingManager *this)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(this + 8);
  return bVar1 ^ 1;
}


/* CustomLevelSettingManager::GetRelinkDays() */

long __thiscall CustomLevelSettingManager::GetRelinkDays(CustomLevelSettingManager *this)

{
  long lVar1;
  
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  if (*(int *)(this + 0x10) < lVar1) {
    lVar1 = 0xffffffff;
  }
  else {
    lVar1 = (*(int *)(this + 0x10) - lVar1) / 0x15180;
  }
  return lVar1;
}


/* CustomLevelSettingManager::CustomLevelSettingManager() */

void __thiscall
CustomLevelSettingManager::CustomLevelSettingManager(CustomLevelSettingManager *this)

{
  Sexy::LazySingleton<CustomLevelSettingManager>::LazySingleton
            ((LazySingleton<CustomLevelSettingManager> *)this);
  *(undefined ***)this = &PTR__CustomLevelSettingManager_06796270;
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (CustomLevelSettingManager)0x1;
  this[0x19] = (CustomLevelSettingManager)0x1;
  Set8BytesTo0(this + 0x20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelSettingManager::SynizeData() */

void __thiscall CustomLevelSettingManager::SynizeData(CustomLevelSettingManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CustomNetworkExtraData aCStack_f8 [48];
  undefined1 auStack_c8 [8];
  string asStack_c0 [32];
  undefined4 local_a0;
  undefined1 auStack_98 [8];
  int local_90;
  int local_8c;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CustomNetworkExtraData::CustomNetworkExtraData(aCStack_f8);
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aCStack_f8);
  if (cVar1 != '\0') {
    thunk_FUN_05475e00(this + 8,auStack_c8);
    uVar3 = StringHelper::ToInt(asStack_c0);
    *(undefined4 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x14) = local_a0;
    thunk_FUN_05475e00(this + 0x20,auStack_98);
    this[0x18] = (CustomLevelSettingManager)(local_90 != 0);
    this[0x19] = (CustomLevelSettingManager)(local_8c != 0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  CustomNetworkExtraData::~CustomNetworkExtraData(aCStack_f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

