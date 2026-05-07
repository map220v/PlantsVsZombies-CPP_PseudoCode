// Class: ShareDriverMgr


/* ShareDriverMgr::~ShareDriverMgr() */

void __thiscall ShareDriverMgr::~ShareDriverMgr(ShareDriverMgr *this)

{
  *(undefined ***)this = &PTR__ShareDriverMgr_06615b40;
  Sexy::LazySingleton<ShareDriverMgr>::~LazySingleton((LazySingleton<ShareDriverMgr> *)this);
  return;
}


/* ShareDriverMgr::~ShareDriverMgr() */

void __thiscall ShareDriverMgr::~ShareDriverMgr(ShareDriverMgr *this)

{
  ~ShareDriverMgr(this);
  AK::FreeHook(this);
  return;
}


/* ShareDriverMgr::InitializeSDK() */

void __thiscall ShareDriverMgr::InitializeSDK(ShareDriverMgr *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)IShareDriver::CreateShareDriver();
  lVar2 = *plVar1;
  *(long **)(this + 8) = plVar1;
  (**(code **)(lVar2 + 0x10))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareDriverMgr::Share(SharePlatform, ScreenInfo) */

void __thiscall ShareDriverMgr::Share(ShareDriverMgr *this,undefined4 param_2,SurpriseInfo *param_3)

{
  long *plVar1;
  code *pcVar2;
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  plVar1 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  SurpriseInfo::SurpriseInfo(aSStack_20,param_3);
  (*pcVar2)(plVar1,param_2,aSStack_20);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShareDriverMgr::IsClientInstalled(SharePlatform) */

void ShareDriverMgr::IsClientInstalled(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareDriverMgr::SaveScreenImageToGallery(ScreenInfo) */

void __thiscall ShareDriverMgr::SaveScreenImageToGallery(ShareDriverMgr *this,SurpriseInfo *param_2)

{
  long *plVar1;
  code *pcVar2;
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  plVar1 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x28);
  SurpriseInfo::SurpriseInfo(aSStack_20,param_2);
  (*pcVar2)(plVar1,aSStack_20);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareDriverMgr::SaveScreenImageToLocal(ScreenInfo) */

void __thiscall ShareDriverMgr::SaveScreenImageToLocal(ShareDriverMgr *this,SurpriseInfo *param_2)

{
  long *plVar1;
  code *pcVar2;
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  plVar1 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x30);
  SurpriseInfo::SurpriseInfo(aSStack_20,param_2);
  (*pcVar2)(plVar1,aSStack_20);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShareDriverMgr::DeleteLocalImage(ScreenInfo) */

void __thiscall ShareDriverMgr::DeleteLocalImage(ShareDriverMgr *this,SurpriseInfo *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  SurpriseInfo aSStack_20 [24];
  long local_8;
  
  plVar2 = *(long **)(this + 8);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x38);
  SurpriseInfo::SurpriseInfo(aSStack_20,param_2);
  uVar1 = (*pcVar3)(plVar2,aSStack_20);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ShareDriverMgr::ShareDriverMgr() */

void __thiscall ShareDriverMgr::ShareDriverMgr(ShareDriverMgr *this)

{
  Sexy::LazySingleton<ShareDriverMgr>::LazySingleton((LazySingleton<ShareDriverMgr> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ShareDriverMgr_06615b40;
  return;
}

