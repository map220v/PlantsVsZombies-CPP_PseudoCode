// Class: CustomLevelMgr


/* CustomLevelMgr::GetNetworkFavouriteData() */

CustomLevelMgr * __thiscall CustomLevelMgr::GetNetworkFavouriteData(CustomLevelMgr *this)

{
  return this + 0x840;
}


/* CustomLevelMgr::IsCustomLevel(std::string const&) */

bool __thiscall CustomLevelMgr::IsCustomLevel(CustomLevelMgr *this,string *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = CustomLevelCreator::GetCustomLevelPrefix();
  lVar2 = FUN_05474368(param_1,uVar1,0);
  return lVar2 != -1;
}


/* CustomLevelMgr::SynServerPlantBanList() */

void __thiscall CustomLevelMgr::SynServerPlantBanList(CustomLevelMgr *this)

{
  NetworkHelper::MakeServerPlantBanList(0x2a58,this + 0x968);
  return;
}


/* CustomLevelMgr::IsCurrentNetworkLevelDownloaded() */

void __thiscall CustomLevelMgr::IsCurrentNetworkLevelDownloaded(CustomLevelMgr *this)

{
  CustomLevelDataCreator::IsLevelDownload
            ((CustomLevelDataCreator *)(this + 0x30),(string *)(this + 0x768));
  return;
}


/* CustomLevelMgr::IsLevelDownloaded(std::string const&) */

void __thiscall CustomLevelMgr::IsLevelDownloaded(CustomLevelMgr *this,string *param_1)

{
  CustomLevelDataCreator::IsLevelDownload((CustomLevelDataCreator *)(this + 0x30),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::FilterLevelName(std::string&) */

void __thiscall CustomLevelMgr::FilterLevelName(CustomLevelMgr *this,string *param_1)

{
  int iVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = utf8_str_len(param_1);
  if (7 < iVar1) {
    utf8_substr(param_1,0,7);
    FUN_05474278(param_1,asStack_10);
    std::string::~string(asStack_10);
    FUN_05475ad8(param_1,&DAT_055b65e0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::GetExtraData() */

CustomLevelMgr * __thiscall CustomLevelMgr::GetExtraData(CustomLevelMgr *this)

{
  return this + 0x8f8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetAppraiseTagInfo(int) */

void CustomLevelMgr::GetAppraiseTagInfo(int param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int in_w1;
  string *in_x8;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = ___stack_chk_guard;
  uVar5 = *(undefined8 *)((ulong)(uint)param_1 + 0x910);
  lVar4 = 0;
  lVar2 = FUN_0358f3f4(uVar5,*(undefined8 *)((ulong)(uint)param_1 + 0x918));
  do {
    if (lVar4 == lVar2) {
      std::string::string(in_x8,"");
      nop();
LAB_03594f7c:
      if (lVar1 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar3 = (int *)FUN_0358f41c(uVar5,lVar4);
    if (*piVar3 == in_w1) {
      FUN_05475d88();
      goto LAB_03594f7c;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}


/* CustomLevelMgr::IsReported() */

bool __thiscall CustomLevelMgr::IsReported(CustomLevelMgr *this)

{
  return *(int *)(this + 0x784) == 1;
}


/* CustomLevelMgr::IsPlayCoinObtained() */

bool __thiscall CustomLevelMgr::IsPlayCoinObtained(CustomLevelMgr *this)

{
  return *(int *)(this + 0x780) == 1;
}


/* CustomLevelMgr::IsSupported() */

bool __thiscall CustomLevelMgr::IsSupported(CustomLevelMgr *this)

{
  return *(int *)(this + 0x778) == 1;
}


/* CustomLevelMgr::IsNotSupported() */

bool __thiscall CustomLevelMgr::IsNotSupported(CustomLevelMgr *this)

{
  return *(int *)(this + 0x778) == 2;
}


/* CustomLevelMgr::IsNoAppraise() */

bool __thiscall CustomLevelMgr::IsNoAppraise(CustomLevelMgr *this)

{
  return *(int *)(this + 0x778) == 0;
}


/* CustomLevelMgr::RequestDownloadLevelData(std::string const&, int, bool, bool) */

void __thiscall
CustomLevelMgr::RequestDownloadLevelData
          (CustomLevelMgr *this,string *param_1,int param_2,bool param_3,bool param_4)

{
  CustomLevelDownloadMgr::Fetch
            ((CustomLevelDownloadMgr *)(this + 0x58),param_2,param_1,param_3,param_4);
  return;
}


/* CustomLevelMgr::ResetFinishedLevel() */

void __thiscall CustomLevelMgr::ResetFinishedLevel(CustomLevelMgr *this)

{
  this[0x33c] = (CustomLevelMgr)0x0;
  this[0x33d] = (CustomLevelMgr)0x0;
  return;
}


/* CustomLevelMgr::SetCanBuySunmoney(bool) */

void __thiscall CustomLevelMgr::SetCanBuySunmoney(CustomLevelMgr *this,bool param_1)

{
  this[0x2f1] = (CustomLevelMgr)param_1;
  return;
}


/* CustomLevelMgr::GetCanBuySunmoney() */

CustomLevelMgr __thiscall CustomLevelMgr::GetCanBuySunmoney(CustomLevelMgr *this)

{
  return this[0x2f1];
}


/* CustomLevelMgr::SetCanBuyPlantfood(bool) */

void __thiscall CustomLevelMgr::SetCanBuyPlantfood(CustomLevelMgr *this,bool param_1)

{
  this[0x2f2] = (CustomLevelMgr)param_1;
  return;
}


/* CustomLevelMgr::GetCanBuyPlantfood() */

CustomLevelMgr __thiscall CustomLevelMgr::GetCanBuyPlantfood(CustomLevelMgr *this)

{
  return this[0x2f2];
}


/* CustomLevelMgr::SetCanBuyMower(bool) */

void __thiscall CustomLevelMgr::SetCanBuyMower(CustomLevelMgr *this,bool param_1)

{
  this[0x2f3] = (CustomLevelMgr)param_1;
  return;
}


/* CustomLevelMgr::GetCanBuyMower() */

CustomLevelMgr __thiscall CustomLevelMgr::GetCanBuyMower(CustomLevelMgr *this)

{
  return this[0x2f3];
}


/* CustomLevelMgr::GetTowerDefendStartingSun() */

undefined4 __thiscall CustomLevelMgr::GetTowerDefendStartingSun(CustomLevelMgr *this)

{
  return *(undefined4 *)(this + 0x9c);
}


/* CustomLevelMgr::SetStartingSun(int) */

void __thiscall CustomLevelMgr::SetStartingSun(CustomLevelMgr *this,int param_1)

{
  *(int *)(this + 0x9c) = param_1;
  return;
}


/* CustomLevelMgr::GetPlantGrid(int, int, std::string&, int&) */

undefined8 __thiscall
CustomLevelMgr::GetPlantGrid
          (CustomLevelMgr *this,int param_1,int param_2,string *param_3,int *param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 600);
  lVar3 = 0;
  lVar1 = FUN_0358f460(uVar4,*(undefined8 *)(this + 0x260));
  if (lVar1 != 0) {
    do {
      piVar2 = (int *)FUN_0358f474(uVar4,lVar3);
      if ((*piVar2 == param_1) && (piVar2[1] == param_2)) {
        thunk_FUN_05475e00(param_3,piVar2 + 4);
        lVar3 = FUN_0358f474(*(undefined8 *)(this + 600),lVar3);
        *param_4 = *(int *)(lVar3 + 8);
        return 1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar1);
  }
  return 0;
}


/* CustomLevelMgr::GetGridItemGrid(int, int, std::string&) */

undefined8 __thiscall
CustomLevelMgr::GetGridItemGrid(CustomLevelMgr *this,int param_1,int param_2,string *param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x270);
  lVar2 = FUN_0358f460(uVar5,*(undefined8 *)(this + 0x278));
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 1;
    if (lVar4 == lVar2) {
      return 0;
    }
    piVar3 = (int *)FUN_0358f474(uVar5,lVar4);
    lVar4 = lVar1;
  } while ((*piVar3 != param_1) || (piVar3[1] != param_2));
  thunk_FUN_05475e00(param_3,piVar3 + 4);
  return 1;
}


/* CustomLevelMgr::GetMoldGrid(int, int) */

bool __thiscall CustomLevelMgr::GetMoldGrid(CustomLevelMgr *this,int param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined8 *)FUN_0358f27c(*(undefined8 *)(this + 0x138),(long)param_2);
  piVar2 = (int *)FUN_0358f480(*puVar1,(long)param_1);
  return *piVar2 == 1;
}


/* CustomLevelMgr::GetRailGrid(int, int) */

undefined8 __thiscall CustomLevelMgr::GetRailGrid(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x2c0);
  lVar2 = FUN_0358f488(uVar5,*(undefined8 *)(this + 0x2c8));
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 1;
    if (lVar4 == lVar2) {
      return 0;
    }
    piVar3 = (int *)FUN_0358f49c(uVar5,lVar4);
    lVar4 = lVar1;
  } while ((*piVar3 != param_1) || (piVar3[2] != param_2));
  return 1;
}


/* CustomLevelMgr::UpdateMoldGrid(int, int, bool) */

void __thiscall
CustomLevelMgr::UpdateMoldGrid(CustomLevelMgr *this,int param_1,int param_2,bool param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar1 = (undefined8 *)FUN_0358f27c(*(undefined8 *)(this + 0x138),(long)param_2);
  puVar2 = (uint *)FUN_0358f480(*puVar1,(long)param_1);
  *puVar2 = (uint)param_3;
  return;
}


/* CustomLevelMgr::GetPowerTile(int, int, PowerTileClass&) */

undefined8 __thiscall
CustomLevelMgr::GetPowerTile(CustomLevelMgr *this,int param_1,int param_2,PowerTileClass *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x2d8);
  lVar2 = FUN_0358f4a8(uVar5,*(undefined8 *)(this + 0x2e0));
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 1;
    if (lVar4 == lVar2) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_0358f4bc(uVar5,lVar4);
    lVar4 = lVar1;
  } while ((puVar3[1] != param_1) || (puVar3[2] != param_2));
  *(undefined4 *)param_3 = *puVar3;
  return 1;
}


/* CustomLevelMgr::GetSeedBankType() */

undefined4 __thiscall CustomLevelMgr::GetSeedBankType(CustomLevelMgr *this)

{
  return *(undefined4 *)(this + 0xf8);
}


/* CustomLevelMgr::GetSeedBankGlobalLevel() */

undefined4 __thiscall CustomLevelMgr::GetSeedBankGlobalLevel(CustomLevelMgr *this)

{
  return *(undefined4 *)(this + 0x118);
}


/* CustomLevelMgr::AddPresetSeedBankPlant(std::string const&, int) */

void __thiscall
CustomLevelMgr::AddPresetSeedBankPlant(CustomLevelMgr *this,string *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0358f458(*(undefined8 *)(this + 0xe0),(long)param_2);
  thunk_FUN_05475e00(uVar1,param_1);
  return;
}


/* CustomLevelMgr::RemovePresetSeedBankPlant(int) */

void __thiscall CustomLevelMgr::RemovePresetSeedBankPlant(CustomLevelMgr *this,int param_1)

{
  string *this_00;
  size_t in_x2;
  
  this_00 = (string *)FUN_0358f458(*(undefined8 *)(this + 0xe0),(long)param_1);
  std::string::append(this_00,"",in_x2);
  return;
}


/* CustomLevelMgr::GetPresetSeedBankPlant(int) */

void CustomLevelMgr::GetPresetSeedBankPlant(int param_1)

{
  int in_w1;
  
  FUN_0358f458(*(undefined8 *)((ulong)(uint)param_1 + 0xe0),(long)in_w1);
  FUN_05475d88();
  return;
}


/* CustomLevelMgr::IsConveyorValid() */

bool __thiscall CustomLevelMgr::IsConveyorValid(CustomLevelMgr *this)

{
  return *(int *)(this + 0xf8) == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddConveyorSeedBankPlant(std::string const&, int, int, int) */

void __thiscall
CustomLevelMgr::AddConveyorSeedBankPlant
          (CustomLevelMgr *this,string *param_1,int param_2,int param_3,int param_4)

{
  FrameRange *this_00;
  CustomConveyorData aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (FrameRange *)FUN_0358f4c8(*(undefined8 *)(this + 0x100),(long)param_4);
  CustomConveyorData::CustomConveyorData(aCStack_18,param_1,param_2,param_3);
  Effect_PlayFrame::FrameRange::operator=(this_00,(FrameRange *)aCStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::UpdateConveyorSeedBankPlant(int, int, int) */

void __thiscall
CustomLevelMgr::UpdateConveyorSeedBankPlant
          (CustomLevelMgr *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_0358f4c8(*(undefined8 *)(this + 0x100),(long)param_3);
  *(int *)(lVar1 + 8) = param_1;
  *(int *)(lVar1 + 0xc) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveConveyorSeedBankPlant(int) */

void __thiscall CustomLevelMgr::RemoveConveyorSeedBankPlant(CustomLevelMgr *this,int param_1)

{
  FrameRange *this_00;
  string asStack_20 [8];
  CustomConveyorData aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (FrameRange *)FUN_0358f4c8(*(undefined8 *)(this + 0x100),(long)param_1);
  std::string::string(asStack_20,"");
  CustomConveyorData::CustomConveyorData(aCStack_18,asStack_20,0,-1);
  Effect_PlayFrame::FrameRange::operator=(this_00,(FrameRange *)aCStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::GetConveyorSeedBankPlantData(int) */

void CustomLevelMgr::GetConveyorSeedBankPlantData(int param_1)

{
  GroupInfo *pGVar1;
  int in_w1;
  GroupInfo *in_x8;
  
  pGVar1 = (GroupInfo *)FUN_0358f4c8(*(undefined8 *)((ulong)(uint)param_1 + 0x100),(long)in_w1);
  Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(in_x8,pGVar1);
  return;
}


/* CustomLevelMgr::GetWaveZombie(int, int, int) */

void CustomLevelMgr::GetWaveZombie(int param_1,int param_2,int param_3)

{
  long lVar1;
  GroupInfo *pGVar2;
  int in_w3;
  GroupInfo *in_x8;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)((ulong)(uint)param_1 + 0xb0),(long)param_2);
  pGVar2 = (GroupInfo *)FUN_0358f4ec(*(undefined8 *)(lVar1 + 8),(long)(param_3 * 3 + in_w3));
  Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(in_x8,pGVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddWaveZombie(int, int, std::string const&, int, int) */

void __thiscall
CustomLevelMgr::AddWaveZombie
          (CustomLevelMgr *this,int param_1,int param_2,string *param_3,int param_4,int param_5)

{
  long lVar1;
  FrameRange *this_00;
  CustomConveyorData aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  this_00 = (FrameRange *)FUN_0358f4ec(*(undefined8 *)(lVar1 + 8),(long)param_2);
  CustomConveyorData::CustomConveyorData(aCStack_18,param_3,param_4,param_5);
  Effect_PlayFrame::FrameRange::operator=(this_00,(FrameRange *)aCStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddWaveZombie(int, std::string const&, int, int, int) */

void __thiscall
CustomLevelMgr::AddWaveZombie
          (CustomLevelMgr *this,int param_1,string *param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  FrameRange *this_00;
  CustomConveyorData aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  this_00 = (FrameRange *)FUN_0358f4ec(*(undefined8 *)(lVar1 + 8),(long)(param_3 * 3 + param_4));
  CustomConveyorData::CustomConveyorData(aCStack_18,param_2,param_3,param_5);
  Effect_PlayFrame::FrameRange::operator=(this_00,(FrameRange *)aCStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::UpdateWaveZombie(int, int, int, int) */

undefined8 __thiscall
CustomLevelMgr::UpdateWaveZombie
          (CustomLevelMgr *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  lVar1 = FUN_0358f4ec(*(undefined8 *)(lVar1 + 8),(long)(param_2 * 3 + param_3));
  *(int *)(lVar1 + 0xc) = param_4;
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveWaveZombie(int, int, int) */

void __thiscall
CustomLevelMgr::RemoveWaveZombie(CustomLevelMgr *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  FrameRange *this_00;
  CustomWaveZombie aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  this_00 = (FrameRange *)FUN_0358f4ec(*(undefined8 *)(lVar1 + 8),(long)(param_2 * 3 + param_3));
  CustomWaveZombie::CustomWaveZombie(aCStack_18);
  Effect_PlayFrame::FrameRange::operator=(this_00,(FrameRange *)aCStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveAllZombies() */

void __thiscall CustomLevelMgr::RemoveAllZombies(CustomLevelMgr *this)

{
  long lVar1;
  FrameRange *this_00;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  CustomWaveZombie aCStack_18 [16];
  long local_8;
  
  uVar6 = 0;
  uVar5 = *(undefined8 *)(this + 0xb0);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f510(uVar5,*(undefined8 *)(this + 0xb8));
  if (lVar1 != 0) {
    do {
      uVar3 = 0;
      while( true ) {
        lVar1 = FUN_0358f4d0(uVar5,uVar6);
        uVar4 = *(undefined8 *)(lVar1 + 8);
        uVar2 = FUN_0358f4e0(uVar4,*(undefined8 *)(lVar1 + 0x10));
        if (uVar2 <= uVar3) break;
        this_00 = (FrameRange *)FUN_0358f4ec(uVar4,uVar3);
        CustomWaveZombie::CustomWaveZombie(aCStack_18);
        Effect_PlayFrame::FrameRange::operator=(this_00,(FrameRange *)aCStack_18);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)aCStack_18);
        uVar5 = *(undefined8 *)(this + 0xb0);
        uVar3 = uVar3 + 1;
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_0358f510(uVar5,*(undefined8 *)(this + 0xb8));
    } while (uVar6 < uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::GetWaveAdditionalPlantfood(int) */

undefined4 __thiscall CustomLevelMgr::GetWaveAdditionalPlantfood(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x20);
}


/* CustomLevelMgr::SetWaveAdditionalPlantfood(int, int) */

void __thiscall
CustomLevelMgr::SetWaveAdditionalPlantfood(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x20) = param_2;
  return;
}


/* CustomLevelMgr::GetSandStormColumnEnd(int) */

undefined4 __thiscall CustomLevelMgr::GetSandStormColumnEnd(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x28);
}


/* CustomLevelMgr::GetSandStormColumnStart(int) */

undefined4 __thiscall CustomLevelMgr::GetSandStormColumnStart(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x2c);
}


/* CustomLevelMgr::GetWaveEventSandStormZombie(int, int) */

void CustomLevelMgr::GetWaveEventSandStormZombie(int param_1,int param_2)

{
  long lVar1;
  int in_w2;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)((ulong)(uint)param_1 + 0xb0),(long)param_2);
  FUN_0358f458(*(undefined8 *)(lVar1 + 0x30),(long)in_w2);
  FUN_05475d88();
  return;
}


/* CustomLevelMgr::GetSandStormType(int) */

undefined4 __thiscall CustomLevelMgr::GetSandStormType(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x48);
}


/* CustomLevelMgr::SetSandStormType(int, int) */

void __thiscall CustomLevelMgr::SetSandStormType(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x48) = param_2;
  return;
}


/* CustomLevelMgr::SetSandStormColumnEnd(int, int) */

void __thiscall CustomLevelMgr::SetSandStormColumnEnd(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x28) = param_2;
  return;
}


/* CustomLevelMgr::SetSandStormColumnStart(int, int) */

void __thiscall
CustomLevelMgr::SetSandStormColumnStart(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x2c) = param_2;
  return;
}


/* CustomLevelMgr::AddWaveEventSandStorm(int, int, std::string const&) */

void __thiscall
CustomLevelMgr::AddWaveEventSandStorm(CustomLevelMgr *this,int param_1,int param_2,string *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  uVar2 = FUN_0358f458(*(undefined8 *)(lVar1 + 0x30),(long)param_2);
  thunk_FUN_05475e00(uVar2,param_3);
  return;
}


/* CustomLevelMgr::RemoveWaveEventSandStorm(int, int) */

void __thiscall
CustomLevelMgr::RemoveWaveEventSandStorm(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  string *this_00;
  size_t __n;
  
  __n = (size_t)(uint)param_2;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  this_00 = (string *)FUN_0358f458(*(undefined8 *)(lVar1 + 0x30),(long)param_2);
  std::string::append(this_00,"",__n);
  return;
}


/* CustomLevelMgr::IsWaveEventSpiderStormValid(int) */

bool __thiscall CustomLevelMgr::IsWaveEventSpiderStormValid(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(int *)(lVar1 + 0x58) != 0;
}


/* CustomLevelMgr::SetSpiderStormColumnStartEnd(int, int) */

void __thiscall
CustomLevelMgr::SetSpiderStormColumnStartEnd(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x50) = param_2;
  *(int *)(lVar1 + 0x54) = param_2;
  return;
}


/* CustomLevelMgr::SetSpiderStormZombieCount(int, int) */

void __thiscall
CustomLevelMgr::SetSpiderStormZombieCount(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x58) = param_2;
  return;
}


/* CustomLevelMgr::RemoveWaveEventSpiderStorm(int) */

void __thiscall CustomLevelMgr::RemoveWaveEventSpiderStorm(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(undefined4 *)(lVar1 + 0x58) = 0;
  return;
}


/* CustomLevelMgr::GetSpiderStormColumnStartEnd(int) */

undefined4 __thiscall CustomLevelMgr::GetSpiderStormColumnStartEnd(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x50);
}


/* CustomLevelMgr::GetSpiderStormZombieCount(int) */

undefined4 __thiscall CustomLevelMgr::GetSpiderStormZombieCount(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x58);
}


/* CustomLevelMgr::IsWaveEventRaidingPartyValid(int) */

bool __thiscall CustomLevelMgr::IsWaveEventRaidingPartyValid(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(int *)(lVar1 + 0x80) != -1;
}


/* CustomLevelMgr::SetRaidingPartySwashbucklerCount(int, int) */

void __thiscall
CustomLevelMgr::SetRaidingPartySwashbucklerCount(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x80) = param_2;
  return;
}


/* CustomLevelMgr::GetRaidingPartySwashbucklerCount(int) */

undefined4 __thiscall
CustomLevelMgr::GetRaidingPartySwashbucklerCount(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x80);
}


/* CustomLevelMgr::IsWaveEventParachuteRainValid(int) */

bool __thiscall CustomLevelMgr::IsWaveEventParachuteRainValid(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(int *)(lVar1 + 0xa0) != -1;
}


/* CustomLevelMgr::SetParachuteRainColumnEnd(int, int) */

void __thiscall
CustomLevelMgr::SetParachuteRainColumnEnd(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xa0) = param_2;
  return;
}


/* CustomLevelMgr::GetParachuteRainColumnEnd(int) */

undefined4 __thiscall CustomLevelMgr::GetParachuteRainColumnEnd(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0xa0);
}


/* CustomLevelMgr::IsWaveEventBlackHoleValid(int) */

bool __thiscall CustomLevelMgr::IsWaveEventBlackHoleValid(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(int *)(lVar1 + 0xa4) != -1;
}


/* CustomLevelMgr::SetBlackHoleColumnEnd(int, int) */

void __thiscall CustomLevelMgr::SetBlackHoleColumnEnd(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xa4) = param_2;
  return;
}


/* CustomLevelMgr::GetBlackHoleColumnEnd(int) */

undefined4 __thiscall CustomLevelMgr::GetBlackHoleColumnEnd(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0xa4);
}


/* CustomLevelMgr::IsWaveEventPortalValid(int) */

byte __thiscall CustomLevelMgr::IsWaveEventPortalValid(CustomLevelMgr *this,int param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  bVar1 = FUN_0547419c(lVar2 + 0x70);
  return bVar1 ^ 1;
}


/* CustomLevelMgr::SetPortalColumn(int, int) */

void __thiscall CustomLevelMgr::SetPortalColumn(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x68) = param_2;
  return;
}


/* CustomLevelMgr::SetPortalRow(int, int) */

void __thiscall CustomLevelMgr::SetPortalRow(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x6c) = param_2;
  return;
}


/* CustomLevelMgr::SetPortalType(int, std::string const&) */

void __thiscall CustomLevelMgr::SetPortalType(CustomLevelMgr *this,int param_1,string *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  thunk_FUN_05475e00(lVar1 + 0x70,param_2);
  return;
}


/* CustomLevelMgr::GetPortalColumn(int) */

undefined4 __thiscall CustomLevelMgr::GetPortalColumn(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x68);
}


/* CustomLevelMgr::GetPortalRow(int) */

undefined4 __thiscall CustomLevelMgr::GetPortalRow(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x6c);
}


/* CustomLevelMgr::GetPortalType(int) */

long __thiscall CustomLevelMgr::GetPortalType(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return lVar1 + 0x70;
}


/* CustomLevelMgr::IsWaveEventDinoValid(int) */

bool __thiscall CustomLevelMgr::IsWaveEventDinoValid(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(int *)(lVar1 + 0x78) != -1;
}


/* CustomLevelMgr::SetDinoRow(int, int) */

void __thiscall CustomLevelMgr::SetDinoRow(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0x78) = param_2;
  return;
}


/* CustomLevelMgr::SetDinoTimeInterval(int, float) */

void __thiscall CustomLevelMgr::SetDinoTimeInterval(CustomLevelMgr *this,int param_1,float param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(float *)(lVar1 + 0x7c) = param_2;
  return;
}


/* CustomLevelMgr::GetDinoRow(int) */

undefined4 __thiscall CustomLevelMgr::GetDinoRow(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x78);
}


/* CustomLevelMgr::GetDinoTimeInterval(int) */

undefined4 __thiscall CustomLevelMgr::GetDinoTimeInterval(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0x7c);
}


/* CustomLevelMgr::UpdateWaveEventFrostWind(int, int, int) */

void __thiscall
CustomLevelMgr::UpdateWaveEventFrostWind(CustomLevelMgr *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  piVar2 = (int *)FUN_0358f530(*(undefined8 *)(lVar1 + 0x88),(long)param_2);
  *piVar2 = param_3;
  return;
}


/* CustomLevelMgr::IsWaveEventSummonZombieValid(int) */

byte __thiscall CustomLevelMgr::IsWaveEventSummonZombieValid(CustomLevelMgr *this,int param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  bVar1 = FUN_0547419c(lVar2 + 0xc0);
  return bVar1 ^ 1;
}


/* CustomLevelMgr::SetSummonZombieLevel(int, int) */

void __thiscall CustomLevelMgr::SetSummonZombieLevel(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xb8) = param_2;
  return;
}


/* CustomLevelMgr::SetSummonZombieEndRow(int, int) */

void __thiscall CustomLevelMgr::SetSummonZombieEndRow(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xb4) = param_2;
  return;
}


/* CustomLevelMgr::SetSummonZombieStartRow(int, int) */

void __thiscall
CustomLevelMgr::SetSummonZombieStartRow(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xb0) = param_2;
  return;
}


/* CustomLevelMgr::SetSummonZombieEndColumn(int, int) */

void __thiscall
CustomLevelMgr::SetSummonZombieEndColumn(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xac) = param_2;
  return;
}


/* CustomLevelMgr::SetSummonZombieStartColumn(int, int) */

void __thiscall
CustomLevelMgr::SetSummonZombieStartColumn(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xa8) = param_2;
  return;
}


/* CustomLevelMgr::SetSummonZombieTypeName(int, std::string const&) */

void __thiscall
CustomLevelMgr::SetSummonZombieTypeName(CustomLevelMgr *this,int param_1,string *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  thunk_FUN_05475e00(lVar1 + 0xc0,param_2);
  return;
}


/* CustomLevelMgr::SetSummonZombieNums(int, int) */

void __thiscall CustomLevelMgr::SetSummonZombieNums(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  *(int *)(lVar1 + 0xbc) = param_2;
  return;
}


/* CustomLevelMgr::GetSummonZombieLevel(int) */

undefined4 __thiscall CustomLevelMgr::GetSummonZombieLevel(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0xb8);
}


/* CustomLevelMgr::GetSummonZombieTypeName(int) */

void CustomLevelMgr::GetSummonZombieTypeName(int param_1)

{
  int in_w1;
  
  FUN_0358f4d0(*(undefined8 *)((ulong)(uint)param_1 + 0xb0),(long)in_w1);
  FUN_05475d88();
  return;
}


/* CustomLevelMgr::GetSummonZombieNums(int) */

undefined4 __thiscall CustomLevelMgr::GetSummonZombieNums(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  return *(undefined4 *)(lVar1 + 0xbc);
}


/* CustomLevelMgr::IsLastStandValid() */

void __thiscall CustomLevelMgr::IsLastStandValid(CustomLevelMgr *this)

{
  CustomChallenge::HasLastStand((CustomChallenge *)(this + 0x120));
  return;
}


/* CustomLevelMgr::SetLastStandPlantfood(int) */

void __thiscall CustomLevelMgr::SetLastStandPlantfood(CustomLevelMgr *this,int param_1)

{
  *(int *)(this + 0x130) = param_1;
  return;
}


/* CustomLevelMgr::GetLastStandPlantfood() */

undefined4 __thiscall CustomLevelMgr::GetLastStandPlantfood(CustomLevelMgr *this)

{
  return *(undefined4 *)(this + 0x130);
}


/* CustomLevelMgr::RemoveLastStand() */

void __thiscall CustomLevelMgr::RemoveLastStand(CustomLevelMgr *this)

{
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  return;
}


/* CustomLevelMgr::GetSet(int) */

undefined * __thiscall CustomLevelMgr::GetSet(CustomLevelMgr *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x150);
  iVar1 = FUN_0358f538(uVar3,*(undefined8 *)(this + 0x158));
  if (param_1 < iVar1) {
    puVar2 = (undefined *)FUN_0358f54c(uVar3,(long)param_1);
    return puVar2;
  }
  return &DAT_06aa6f98;
}


/* CustomLevelMgr::GetSetSize() */

void __thiscall CustomLevelMgr::GetSetSize(CustomLevelMgr *this)

{
  FUN_0358f538(*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158));
  return;
}


/* CustomLevelMgr::GetSetMatrix(int, int) */

undefined * __thiscall CustomLevelMgr::GetSetMatrix(CustomLevelMgr *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x150);
  iVar1 = FUN_0358f538(uVar4,*(undefined8 *)(this + 0x158));
  if (param_1 < iVar1) {
    lVar2 = FUN_0358f54c(uVar4,(long)param_1);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    iVar1 = FUN_0358f558(uVar4,*(undefined8 *)(lVar2 + 0x18));
    if (param_2 < iVar1) {
      puVar3 = (undefined *)FUN_0358f56c(uVar4,(long)param_2);
      return puVar3;
    }
  }
  return &DAT_06aa7208;
}


/* CustomLevelMgr::GetSetMatrixSize(int) */

undefined8 __thiscall CustomLevelMgr::GetSetMatrixSize(CustomLevelMgr *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x150);
  iVar1 = FUN_0358f538(uVar4,*(undefined8 *)(this + 0x158));
  uVar2 = 0;
  if (param_1 < iVar1) {
    lVar3 = FUN_0358f54c(uVar4,(long)param_1);
    uVar2 = FUN_0358f558(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
  }
  return uVar2;
}


/* CustomLevelMgr::UpdateSetMatrix(int, int, bool) */

void __thiscall
CustomLevelMgr::UpdateSetMatrix(CustomLevelMgr *this,int param_1,int param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0358f54c(*(undefined8 *)(this + 0x150),(long)param_1);
  uVar2 = FUN_0358f56c(*(undefined8 *)(lVar1 + 0x10),(long)param_2);
  *(bool *)uVar2 = param_3;
  return;
}


/* CustomLevelMgr::SetTowerDefendStartingSun(int) */

void __thiscall CustomLevelMgr::SetTowerDefendStartingSun(CustomLevelMgr *this,int param_1)

{
  *(int *)(this + 0x9c) = param_1;
  return;
}


/* CustomLevelMgr::GetEvilDaveStartingSun() */

undefined4 __thiscall CustomLevelMgr::GetEvilDaveStartingSun(CustomLevelMgr *this)

{
  return *(undefined4 *)(this + 0x9c);
}


/* CustomLevelMgr::AddEvilDaveZombie(int, std::string const&) */

void __thiscall CustomLevelMgr::AddEvilDaveZombie(CustomLevelMgr *this,int param_1,string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0358f458(*(undefined8 *)(this + 0x188),(long)param_1);
  thunk_FUN_05475e00(uVar1,param_2);
  return;
}


/* CustomLevelMgr::RemoveEvilDaveZombie(int) */

void __thiscall CustomLevelMgr::RemoveEvilDaveZombie(CustomLevelMgr *this,int param_1)

{
  string *this_00;
  size_t in_x2;
  
  this_00 = (string *)FUN_0358f458(*(undefined8 *)(this + 0x188),(long)param_1);
  std::string::append(this_00,"",in_x2);
  return;
}


/* CustomLevelMgr::GetEvilDavePlantGrid(int, int, std::string&) */

undefined8 __thiscall
CustomLevelMgr::GetEvilDavePlantGrid(CustomLevelMgr *this,int param_1,int param_2,string *param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x170);
  lVar2 = FUN_0358f578(uVar5,*(undefined8 *)(this + 0x178));
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 1;
    if (lVar4 == lVar2) {
      return 0;
    }
    piVar3 = (int *)FUN_0358f584(uVar5,lVar4);
    lVar4 = lVar1;
  } while ((*piVar3 != param_1) || (piVar3[1] != param_2));
  thunk_FUN_05475e00(param_3,piVar3 + 2);
  return 1;
}


/* CustomLevelMgr::GetEvilDaveZombieTypeName(int) */

void __thiscall CustomLevelMgr::GetEvilDaveZombieTypeName(CustomLevelMgr *this,int param_1)

{
  FUN_0358f458(*(undefined8 *)(this + 0x188),(long)param_1);
  return;
}


/* CustomLevelMgr::AddTowerDefendPresetSeedBankPlant(std::string const&, int) */

void __thiscall
CustomLevelMgr::AddTowerDefendPresetSeedBankPlant(CustomLevelMgr *this,string *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0358f458(*(undefined8 *)(this + 0x1a0),(long)param_2);
  thunk_FUN_05475e00(uVar1,param_1);
  return;
}


/* CustomLevelMgr::GetTowerDefendPresetSeedBankPlant(int) */

void __thiscall CustomLevelMgr::GetTowerDefendPresetSeedBankPlant(CustomLevelMgr *this,int param_1)

{
  FUN_0358f458(*(undefined8 *)(this + 0x1a0),(long)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddTowerDefendWaveZombie(int, std::string const&, int, int) */

void __thiscall
CustomLevelMgr::AddTowerDefendWaveZombie
          (CustomLevelMgr *this,int param_1,string *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  AccessoryPiece *this_00;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_0358f5c0(*(undefined8 *)(this + 0x1d0),(long)param_1);
  this_00 = (AccessoryPiece *)FUN_0358f5cc(*puVar1,(long)(param_3 * 3 + param_4));
  ProbabilitySet<std::string>::ProbabilityBucket::ProbabilityBucket
            ((ProbabilityBucket *)apStack_18,param_2,param_3);
  AccessoryPiece::operator=(this_00,(AccessoryPiece *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::RemoveTowerDefendWaveZombie(int, int, int) */

undefined8 __thiscall
CustomLevelMgr::RemoveTowerDefendWaveZombie
          (CustomLevelMgr *this,int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  string *this_00;
  size_t __n;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  __n = (size_t)(uint)param_2;
  puVar2 = (undefined8 *)FUN_0358f5c0(*(undefined8 *)(this + 0x1d0),(long)param_1);
  uVar5 = *puVar2;
  lVar4 = 0;
  iVar6 = 0;
  lVar3 = FUN_0358f5d4(uVar5,puVar2[1]);
  if (lVar3 != 0) {
    do {
      this_00 = (string *)FUN_0358f5cc(uVar5,lVar4);
      if (*(int *)(this_00 + 8) == param_2) {
        bVar1 = iVar6 == param_3;
        iVar6 = iVar6 + 1;
        if (bVar1) {
          std::string::append(this_00,"",__n);
          puVar2 = (undefined8 *)FUN_0358f5c0(*(undefined8 *)(this + 0x1d0),(long)param_1);
          lVar4 = FUN_0358f5cc(*puVar2,lVar4);
          *(undefined4 *)(lVar4 + 8) = 0xffffffff;
          return 1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar3);
  }
  return 0;
}


/* CustomLevelMgr::GetTowerDefendWaveZombie(int, int, int) */

void CustomLevelMgr::GetTowerDefendWaveZombie(int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  pair *ppVar2;
  int in_w3;
  pair<std::string_const,int> *in_x8;
  
  puVar1 = (undefined8 *)FUN_0358f5c0(*(undefined8 *)((ulong)(uint)param_1 + 0x1d0),(long)param_2);
  ppVar2 = (pair *)FUN_0358f5cc(*puVar1,(long)(param_3 * 3 + in_w3));
  std::pair<std::string_const,int>::pair(in_x8,ppVar2);
  return;
}


/* CustomLevelMgr::AddStartingPlant(std::string const&) */

void CustomLevelMgr::AddStartingPlant(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x230);
  return;
}


/* CustomLevelMgr::RemoveStartingPlant() */

void __thiscall CustomLevelMgr::RemoveStartingPlant(CustomLevelMgr *this)

{
  size_t in_x2;
  
  std::string::append((string *)(this + 0x230),"",in_x2);
  return;
}


/* CustomLevelMgr::GetUpgradePlant(int, std::string&, int&) */

void __thiscall
CustomLevelMgr::GetUpgradePlant(CustomLevelMgr *this,int param_1,string *param_2,int *param_3)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x200);
  uVar4 = (ulong)param_1;
  uVar1 = FUN_0358f5e0(uVar5,*(undefined8 *)(this + 0x208));
  if (uVar4 < uVar1) {
    lVar2 = FUN_0358f5ec(uVar5,uVar4);
    thunk_FUN_05475e00(param_2,lVar2 + 8);
    piVar3 = (int *)FUN_0358f5ec(*(undefined8 *)(this + 0x200),uVar4);
    *param_3 = *piVar3;
  }
  return;
}


/* CustomLevelMgr::SetSingleHandedWavePlantfood(int, bool) */

void __thiscall
CustomLevelMgr::SetSingleHandedWavePlantfood(CustomLevelMgr *this,int param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = FUN_0358f5f4(*(undefined8 *)(this + 0x218),(long)param_1);
  *(bool *)(lVar1 + 0x18) = param_2;
  return;
}


/* CustomLevelMgr::GetSingleHandedWavePlantfood(int) */

undefined1 __thiscall CustomLevelMgr::GetSingleHandedWavePlantfood(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_0358f5f4(*(undefined8 *)(this + 0x218),(long)param_1);
  return *(undefined1 *)(lVar1 + 0x18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddSingleHandedWaveZombie(int, std::string const&, int, int) */

void __thiscall
CustomLevelMgr::AddSingleHandedWaveZombie
          (CustomLevelMgr *this,int param_1,string *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  AccessoryPiece *this_00;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)FUN_0358f5f4(*(undefined8 *)(this + 0x218),(long)param_1);
  this_00 = (AccessoryPiece *)FUN_0358f5fc(*puVar1,(long)(param_3 * 3 + param_4));
  ProbabilitySet<std::string>::ProbabilityBucket::ProbabilityBucket
            ((ProbabilityBucket *)apStack_18,param_2,param_3);
  AccessoryPiece::operator=(this_00,(AccessoryPiece *)apStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::RemoveSingleHandedWaveZombie(int, int, int) */

undefined8 __thiscall
CustomLevelMgr::RemoveSingleHandedWaveZombie
          (CustomLevelMgr *this,int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  string *this_00;
  long lVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  __n = (size_t)(uint)param_2;
  puVar1 = (undefined8 *)FUN_0358f5f4(*(undefined8 *)(this + 0x218),(long)param_1);
  uVar6 = *puVar1;
  uVar4 = 0;
  uVar5 = 0;
  uVar2 = FUN_0358f604(uVar6,puVar1[1]);
  if (uVar2 != 0) {
    do {
      this_00 = (string *)FUN_0358f5fc(uVar6,uVar4);
      if ((*(int *)(this_00 + 8) == param_2) && ((int)uVar5 % 3 == param_3)) {
        std::string::append(this_00,"",__n);
        puVar1 = (undefined8 *)FUN_0358f5f4(*(undefined8 *)(this + 0x218),(long)param_1);
        lVar3 = FUN_0358f5fc(*puVar1,uVar4);
        *(undefined4 *)(lVar3 + 8) = 0xffffffff;
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar4 & 0xffffffff;
    } while (uVar4 != uVar2);
  }
  return 0;
}


/* CustomLevelMgr::GetSingleHandedWaveZombie(int, int, int) */

void CustomLevelMgr::GetSingleHandedWaveZombie(int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  pair *ppVar2;
  int in_w3;
  pair<std::string_const,int> *in_x8;
  
  puVar1 = (undefined8 *)FUN_0358f5f4(*(undefined8 *)((ulong)(uint)param_1 + 0x218),(long)param_2);
  ppVar2 = (pair *)FUN_0358f5fc(*puVar1,(long)(param_3 * 3 + in_w3));
  std::pair<std::string_const,int>::pair(in_x8,ppVar2);
  return;
}


/* CustomLevelMgr::SetVaseBreakerMinMaxColumn(int, int) */

void __thiscall
CustomLevelMgr::SetVaseBreakerMinMaxColumn(CustomLevelMgr *this,int param_1,int param_2)

{
  *(int *)(this + 0x238) = param_1;
  *(int *)(this + 0x23c) = param_2;
  return;
}


/* CustomLevelMgr::GetVaseBreakerMinMaxColumn(int&, int&) */

void __thiscall
CustomLevelMgr::GetVaseBreakerMinMaxColumn(CustomLevelMgr *this,int *param_1,int *param_2)

{
  *param_1 = *(int *)(this + 0x238);
  *param_2 = *(int *)(this + 0x23c);
  return;
}


/* CustomLevelMgr::SetVaseBreakerCount(int) */

void __thiscall CustomLevelMgr::SetVaseBreakerCount(CustomLevelMgr *this,int param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  SetVaseBreakerMinMaxColumn(this,iVar1 - param_1 / 5,iVar1 + -1);
  return;
}


/* CustomLevelMgr::GetVaseBreakerCount() */

int __thiscall CustomLevelMgr::GetVaseBreakerCount(CustomLevelMgr *this)

{
  return ((*(int *)(this + 0x23c) - *(int *)(this + 0x238)) + 1) * 5;
}


/* CustomLevelMgr::SetVaseBreakerContent(int, VaseType, std::string const&, int) */

void __thiscall
CustomLevelMgr::SetVaseBreakerContent
          (CustomLevelMgr *this,int param_1,undefined4 param_3,undefined8 param_4,undefined4 param_5
          )

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_0358f610(*(undefined8 *)(this + 0x240),(long)param_1);
  *puVar1 = param_3;
  thunk_FUN_05475e00(puVar1 + 2,param_4);
  lVar2 = FUN_0358f610(*(undefined8 *)(this + 0x240),(long)param_1);
  *(undefined4 *)(lVar2 + 0x10) = param_5;
  return;
}


/* CustomLevelMgr::GetVaseBreakerContent(int, VaseType&, std::string&, int&) */

void __thiscall
CustomLevelMgr::GetVaseBreakerContent
          (CustomLevelMgr *this,int param_1,VaseType *param_2,string *param_3,int *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)FUN_0358f610(*(undefined8 *)(this + 0x240),(long)param_1);
  *(undefined4 *)param_2 = *puVar1;
  thunk_FUN_05475e00(param_3,puVar1 + 2);
  lVar2 = FUN_0358f610(*(undefined8 *)(this + 0x240),(long)param_1);
  *param_4 = *(int *)(lVar2 + 0x10);
  return;
}


/* CustomLevelMgr::RemoveVaseBreakerContent(int) */

void __thiscall CustomLevelMgr::RemoveVaseBreakerContent(CustomLevelMgr *this,int param_1)

{
  TokenRet *this_00;
  
  this_00 = (TokenRet *)FUN_0358f610(*(undefined8 *)(this + 0x240),(long)param_1);
  TokenRet::operator=(this_00,(TokenRet *)&DAT_06aa7250);
  return;
}


/* CustomLevelMgr::GetSummonZombieRowRange(int) */

void CustomLevelMgr::GetSummonZombieRowRange(int param_1)

{
  long lVar1;
  int in_w1;
  Point *in_x8;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)((ulong)(uint)param_1 + 0xb0),(long)in_w1);
  Sexy::Point::Point(in_x8,*(int *)(lVar1 + 0xb0),*(int *)(lVar1 + 0xb4));
  return;
}


/* CustomLevelMgr::GetSummonZombieColumnRange(int) */

void CustomLevelMgr::GetSummonZombieColumnRange(int param_1)

{
  long lVar1;
  int in_w1;
  Point *in_x8;
  
  lVar1 = FUN_0358f4d0(*(undefined8 *)((ulong)(uint)param_1 + 0xb0),(long)in_w1);
  Sexy::Point::Point(in_x8,*(int *)(lVar1 + 0xa8),*(int *)(lVar1 + 0xac));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::SyncLocalLevelDataToLocalLevelDetails() */

void __thiscall CustomLevelMgr::SyncLocalLevelDataToLocalLevelDetails(CustomLevelMgr *this)

{
  undefined4 uVar1;
  undefined4 local_188 [2];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x70c) = *(undefined4 *)(this + 0x2f8);
  thunk_FUN_05475e00(this + 0x710,this + 0x300);
  *(undefined4 *)(this + 0x718) = *(undefined4 *)(this + 0x308);
  *(undefined4 *)(this + 0x71c) = *(undefined4 *)(this + 0x30c);
  this[0x720] = this[0x310];
  thunk_FUN_05475e00(this + 0x748,this + 0x318);
  *(undefined4 *)(this + 0x744) = *(undefined4 *)(this + 800);
  thunk_FUN_05475e00(this + 0x760,this + 0x330);
  thunk_FUN_05475e00(this + 0x758,this + 0x328);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  if (this[0x2f0] == (CustomLevelMgr)0x0) goto LAB_03596f3c;
  if (this[0x2f1] == (CustomLevelMgr)0x0) {
    if (this[0x2f2] != (CustomLevelMgr)0x0) {
LAB_03596fb8:
      local_188[0] = 0xc;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_188);
      FUN_0545ec84(auStack_168,asStack_180);
      std::string::~string(asStack_180);
      goto LAB_03596fe0;
    }
    if (this[0x2f3] != (CustomLevelMgr)0x0) goto LAB_03596ef4;
  }
  else {
    local_188[0] = 0xd;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_188);
    FUN_0545ec84(auStack_168,asStack_180);
    std::string::~string(asStack_180);
    if (this[0x2f2] != (CustomLevelMgr)0x0) {
      FUN_054603b8(auStack_168,&DAT_05593348);
      goto LAB_03596fb8;
    }
LAB_03596fe0:
    if (this[0x2f3] != (CustomLevelMgr)0x0) {
      FUN_054603b8(auStack_168,&DAT_05593348);
LAB_03596ef4:
      local_188[0] = 0xb;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_188);
      FUN_0545ec84(auStack_168,asStack_180);
      std::string::~string(asStack_180);
    }
  }
  FUN_05462824(asStack_180,auStack_178);
  FUN_05474278(this + 0x7c0,asStack_180);
  std::string::~string(asStack_180);
LAB_03596f3c:
  this[0x77c] = (CustomLevelMgr)0x1;
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::TryLoadLevelDef(std::string const&) */

void CustomLevelMgr::TryLoadLevelDef(string *param_1)

{
  char cVar1;
  string *in_x1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  
  cVar1 = IsCustomLevel((CustomLevelMgr *)param_1,in_x1);
  if (cVar1 == '\0') {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
    return;
  }
  CustomLevelCreator::LoadLevelDef(param_1 + 0x20);
  return;
}


/* CustomLevelMgr::SetAllZombiesLevel(int) */

void __thiscall CustomLevelMgr::SetAllZombiesLevel(CustomLevelMgr *this,int param_1)

{
  bool bVar1;
  long lVar2;
  string *psVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar9 = 0;
  uVar8 = *(undefined8 *)(this + 0xb0);
  lVar2 = FUN_0358f510(uVar8,*(undefined8 *)(this + 0xb8));
  if (lVar2 != 0) {
    do {
      uVar7 = 0;
      lVar2 = FUN_0358f4d0(uVar8,uVar9);
      uVar6 = *(undefined8 *)(lVar2 + 8);
      lVar2 = FUN_0358f4e0(uVar6,*(undefined8 *)(lVar2 + 0x10));
      if (lVar2 != 0) {
        do {
          psVar3 = (string *)FUN_0358f4ec(uVar6,uVar7);
          bVar1 = std::operator!=(psVar3,"");
          uVar8 = *(undefined8 *)(this + 0xb0);
          if (bVar1) {
            lVar2 = FUN_0358f4d0(uVar8,uVar9);
            uVar6 = *(undefined8 *)(lVar2 + 8);
            lVar5 = FUN_0358f4ec(uVar6,uVar7);
            *(int *)(lVar5 + 0xc) = param_1;
          }
          else {
            lVar2 = FUN_0358f4d0(uVar8,uVar9);
            uVar6 = *(undefined8 *)(lVar2 + 8);
          }
          uVar7 = uVar7 + 1;
          uVar4 = FUN_0358f4e0(uVar6,*(undefined8 *)(lVar2 + 0x10));
        } while (uVar7 < uVar4);
      }
      uVar9 = uVar9 + 1;
      uVar7 = FUN_0358f510(uVar8,*(undefined8 *)(this + 0xb8));
    } while (uVar9 < uVar7);
  }
  return;
}


/* CustomLevelMgr::IsWaveEventSandStormVaild(int) */

bool __thiscall CustomLevelMgr::IsWaveEventSandStormVaild(CustomLevelMgr *this,int param_1)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  do {
    lVar3 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
    uVar6 = *(undefined8 *)(lVar3 + 0x30);
    uVar4 = FUN_0358f44c(uVar6,*(undefined8 *)(lVar3 + 0x38));
    if (uVar4 <= uVar5) {
      return false;
    }
    psVar2 = (string *)FUN_0358f458(uVar6,uVar5);
    uVar5 = uVar5 + 1;
    bVar1 = std::operator!=(psVar2,"");
  } while (!bVar1);
  return bVar1;
}


/* CustomLevelMgr::GetFavouriteTotalCount() */

void __thiscall CustomLevelMgr::GetFavouriteTotalCount(CustomLevelMgr *this)

{
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x988))
  ;
  return;
}


/* CustomLevelMgr::CheckInTutorial() */

bool CustomLevelMgr::CheckInTutorial(void)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  long lVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this);
  bVar1 = false;
  if (lVar3 != 0) {
    iVar2 = FUN_0358f250(*(undefined4 *)(lVar3 + 0x40));
    bVar1 = iVar2 - 0x3cU < 2;
  }
  return bVar1;
}


/* CustomLevelMgr::TryResetTutorialSkipTimer() */

void __thiscall CustomLevelMgr::TryResetTutorialSkipTimer(CustomLevelMgr *this)

{
  char cVar1;
  
  cVar1 = CheckInTutorial();
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x980) = 0x40a00000;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::ClearModules() */

void __thiscall CustomLevelMgr::ClearModules(CustomLevelMgr *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::clear
            ((vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::Reset() */

void __thiscall CustomLevelMgr::Reset(CustomLevelMgr *this)

{
  CustomLevelCreator::Reset((CustomLevelCreator *)(this + 0x20));
  ClearModules(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::SetSetRotateAndWaitTime(int, float, float) */

void __thiscall
CustomLevelMgr::SetSetRotateAndWaitTime
          (CustomLevelMgr *this,int param_1,float param_2,float param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_0358f54c(*(undefined8 *)(this + 0x150),(long)param_1);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar2 + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar2 + 0x10));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(float *)(lVar2 + 4) = param_3;
    *(float *)(lVar2 + 8) = param_2;
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::CreateTutorialSkipMenu() */

void CustomLevelMgr::CreateTutorialSkipMenu(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  CustomLevelTutorialSkipWidget *this;
  long lVar5;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = ::operator_new(0x108);
  CustomLevelTutorialSkipWidget::CustomLevelTutorialSkipWidget(this);
  iVar2 = FUN_03592b2c(0x78);
  uVar3 = FUN_03592b2c(0x46);
  iVar1 = *(int *)(gLawnApp + 0xd4);
  iVar4 = FUN_03592b2c(10);
  (**(code **)(*(long *)this + 0x198))(this,(iVar1 - iVar2) - iVar4,iVar4,iVar2,uVar3);
  CustomLevelTutorialSkipWidget::Init(this);
  lVar5 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this,true);
  FUN_035910a8(lVar5 + 0xd8);
  FUN_03592624(afStack_28,lVar5);
  CustomLevelTutorialSkipWidget::SetCallBack(this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::Update(float) */

void __thiscall CustomLevelMgr::Update(CustomLevelMgr *this,float param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = CheckInTutorial();
  if (((cVar1 != '\0') && (0.0 < *(float *)(this + 0x980))) &&
     (fVar2 = *(float *)(this + 0x980) - param_1, *(float *)(this + 0x980) = fVar2, fVar2 <= 0.0)) {
    CreateTutorialSkipMenu();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::IsEvilDaveValid() */

void __thiscall CustomLevelMgr::IsEvilDaveValid(CustomLevelMgr *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = CustomChallenge::HasEvilDave((CustomChallenge *)(this + 0x120));
  bVar2 = false;
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x188);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = FUN_0359c20c(uVar3,uVar4);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    bVar2 = !bVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetTowerDefendRoad(int, int, std::string&) */

void __thiscall
CustomLevelMgr::GetTowerDefendRoad(CustomLevelMgr *this,int param_1,int param_2,string *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0359cc34(uVar2,uVar3,CONCAT44(param_2,param_1));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    thunk_FUN_05475e00(param_3,lVar4 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::getConfig() const */

void CustomLevelMgr::getConfig(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06aa6f88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa6f88), iVar2 != 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&DAT_06aa71b0);
    __cxa_guard_release(&DAT_06aa6f88);
    __cxa_atexit(Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr,&DAT_06aa71b0,&DAT_06a88000);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&DAT_06aa71b0);
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"CustomConfig");
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0x8c,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&DAT_06aa71b0,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&DAT_06aa71b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetConfig() const */

void CustomLevelMgr::GetConfig(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (((DAT_06aa6f88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06aa6f88), iVar2 != 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&DAT_06aa71b0);
    __cxa_guard_release(&DAT_06aa6f88);
    __cxa_atexit(Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr,&DAT_06aa71b0,&DAT_06a88000);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&DAT_06aa71b0);
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName(aRStack_18,L"CustomConfig");
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0x8c,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)&DAT_06aa71b0,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&DAT_06aa71b0);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CustomLevelMgr::GetDefaultZombieListByCurrentWorld() */

long __thiscall CustomLevelMgr::GetDefaultZombieListByCurrentWorld(CustomLevelMgr *this)

{
  CustomLevelConfig *this_00;
  long lVar1;
  
  this_00 = (CustomLevelConfig *)getConfig();
  lVar1 = CustomLevelConfig::GetDefaultModuleConfigByWorld(this_00,(string *)(this + 0x78));
  return lVar1 + 0x30;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetWorldTypeByWorld(std::string const&) */

void __thiscall CustomLevelMgr::GetWorldTypeByWorld(CustomLevelMgr *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
             ::begin((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
                      *)g_worldTypeMaps);
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)g_worldTypeMaps);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    uVar3 = (uint)bVar2;
    if (!bVar2) {
LAB_0359ec64:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    puVar4 = (uint *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    cVar1 = std::operator==((string *)(puVar4 + 2),param_1);
    if (cVar1 != '\0') {
      uVar3 = *puVar4;
      goto LAB_0359ec64;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetUpgradeTree(int, std::string&, int&) */

void __thiscall
CustomLevelMgr::GetUpgradeTree(CustomLevelMgr *this,int param_1,string *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_0358f458(*(undefined8 *)(this + 0x1a0),(long)param_1);
  FUN_05475d88(asStack_20,uVar3);
  uVar6 = 0;
  do {
    uVar10 = uVar6;
    uVar3 = *(undefined8 *)(this + 0x1b8);
    uVar6 = FUN_0358f58c(uVar3,*(undefined8 *)(this + 0x1c0));
    if (uVar6 <= uVar10) goto LAB_0359faf0;
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(uVar3,uVar10);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar4);
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar10);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar4);
    FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,asStack_20);
    local_18 = FUN_0359f954(uVar3,uVar5,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10)
    ;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar4);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar6 = uVar10 + 1;
  } while (!bVar1);
  puVar7 = (undefined8 *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar10);
  uVar5 = *puVar7;
  piVar8 = (int *)FUN_0358f5ac(uVar5,0);
  uVar3 = puVar7[1];
  *param_3 = *piVar8;
  iVar2 = FUN_0358f5b4(uVar5,uVar3);
  if (iVar2 < 2) {
    std::string::string((string *)&local_10,"");
    FUN_05474278(param_2,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  else {
    lVar9 = FUN_0358f5ac(uVar5,1);
    FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,lVar9 + 8);
    FUN_05474278(param_2,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    std::string::~string((string *)&local_10);
  }
LAB_0359faf0:
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::ClearSeedBankPlantBlackList() */

void __thiscall CustomLevelMgr::ClearSeedBankPlantBlackList(CustomLevelMgr *this)

{
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 200));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::FindGridInfo(std::vector<PlacementInfo, std::allocator<PlacementInfo> > const&,
   std::string const&) */

void __thiscall CustomLevelMgr::FindGridInfo(CustomLevelMgr *this,vector *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0359885c(*(undefined8 *)param_1);
  uVar3 = FUN_035988ac(*(undefined8 *)(param_1 + 8));
  local_18 = FUN_035a14a8(uVar2,uVar3,param_2);
  local_10 = FUN_035988ac(*(undefined8 *)(param_1 + 8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::UpdateSet(int, int, int, float, float) */

void __thiscall
CustomLevelMgr::UpdateSet
          (CustomLevelMgr *this,int param_1,int param_2,int param_3,float param_4,float param_5)

{
  StatueMazeSet *this_00;
  StatueMazeSet aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StatueMazeSet *)FUN_0358f54c(*(undefined8 *)(this + 0x150),(long)param_1);
  StatueMazeSet::StatueMazeSet(aSStack_30,param_2,param_3,param_4,(int)param_5);
  StatueMazeSet::operator=(this_00,aSStack_30);
  StatueMazeSet::~StatueMazeSet(aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::~CustomLevelMgr() */

void __thiscall CustomLevelMgr::~CustomLevelMgr(CustomLevelMgr *this)

{
  *(undefined ***)this = &PTR__CustomLevelMgr_0665e1c0;
  TGACustomLevelData::~TGACustomLevelData((TGACustomLevelData *)(this + 0x9b8));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x988))
  ;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x968));
  CustomNetworkExtraData::~CustomNetworkExtraData((CustomNetworkExtraData *)(this + 0x8f8));
  CustomNetworkPreviewData::~CustomNetworkPreviewData((CustomNetworkPreviewData *)(this + 0x8a8));
  CustomNetworkListData::~CustomNetworkListData((CustomNetworkListData *)(this + 0x868));
  std::string::~string((string *)(this + 0x860));
  CustomNetworkFavouriteResponseData::~CustomNetworkFavouriteResponseData
            ((CustomNetworkFavouriteResponseData *)(this + 0x840));
  CustomNetworkPlayCountData::~CustomNetworkPlayCountData
            ((CustomNetworkPlayCountData *)(this + 0x820));
  CustomNetworkLikeDislikeData::~CustomNetworkLikeDislikeData
            ((CustomNetworkLikeDislikeData *)(this + 0x800));
  CustomNetworkListData::~CustomNetworkListData((CustomNetworkListData *)(this + 0x7c8));
  CustomNetworkUploadData::~CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x6f8));
  CustomNetworkUploadData::~CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x628));
  CustomLevelWorldParams::~CustomLevelWorldParams((CustomLevelWorldParams *)(this + 0x350));
  CustomLevelWorldParams::~CustomLevelWorldParams((CustomLevelWorldParams *)(this + 0x78));
  CustomLevelDownloadMgr::~CustomLevelDownloadMgr((CustomLevelDownloadMgr *)(this + 0x58));
  CustomLevelDataCreator::~CustomLevelDataCreator((CustomLevelDataCreator *)(this + 0x30));
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x20));
  std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::~vector
            ((vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>> *)(this + 8));
  Sexy::LazySingleton<CustomLevelMgr>::~LazySingleton((LazySingleton<CustomLevelMgr> *)this);
  return;
}


/* CustomLevelMgr::~CustomLevelMgr() */

void __thiscall CustomLevelMgr::~CustomLevelMgr(CustomLevelMgr *this)

{
  ~CustomLevelMgr(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelMgr::SetExtraData(CustomNetworkExtraData&) */

void __thiscall CustomLevelMgr::SetExtraData(CustomLevelMgr *this,CustomNetworkExtraData *param_1)

{
  CustomNetworkExtraData::operator=((CustomNetworkExtraData *)(this + 0x8f8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveSeedBankPlantBlackList(std::string const&) */

void __thiscall CustomLevelMgr::RemoveSeedBankPlantBlackList(CustomLevelMgr *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 200);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_0359c070(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)this_00,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveGridInfo(std::vector<PlacementInfo, std::allocator<PlacementInfo> >&, int,
   int) */

void __thiscall
CustomLevelMgr::RemoveGridInfo(CustomLevelMgr *this,vector *param_1,int param_2,int param_3)

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
                   *)param_1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  local_28 = FUN_0359b114(uVar2,uVar3,CONCAT44(param_3,param_2));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
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
                      *)param_1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<PlacementInfo,std::allocator<PlacementInfo>>::erase
              ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)param_1,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveRailInfo(std::vector<RailInfo, std::allocator<RailInfo> >&, int, int) */

void __thiscall
CustomLevelMgr::RemoveRailInfo(CustomLevelMgr *this,vector *param_1,int param_2,int param_3)

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
                   *)param_1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  local_28 = FUN_0359b430(uVar2,uVar3,CONCAT44(param_3,param_2));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
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
                      *)param_1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<RailInfo,std::allocator<RailInfo>>::erase
              ((vector<RailInfo,std::allocator<RailInfo>> *)param_1,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemovePowerTile(int, int) */

void __thiscall CustomLevelMgr::RemovePowerTile(CustomLevelMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x2d8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_0359b714(uVar2,uVar3,CONCAT44(param_2,param_1));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>>::erase
              ((vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>> *)this_00,local_18,
               local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveWaveEventFrostWind(int, int) */

void __thiscall
CustomLevelMgr::RemoveWaveEventFrostWind(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar1 + 0x88));
  local_18 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>::
             operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>> *)
                       &local_20,(long)param_2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<CustomWaveWind,std::allocator<CustomWaveWind>>::erase
            ((vector<CustomWaveWind,std::allocator<CustomWaveWind>> *)(lVar1 + 0x88),local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveSet(int) */

void __thiscall CustomLevelMgr::RemoveSet(CustomLevelMgr *this,int param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
  local_18 = __gnu_cxx::
             __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
             ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                          *)&local_20,(long)param_1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<StatueMazeSet,std::allocator<StatueMazeSet>>::erase
            ((vector<StatueMazeSet,std::allocator<StatueMazeSet>> *)(this + 0x150),local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveSetMatrix(int, int) */

void __thiscall CustomLevelMgr::RemoveSetMatrix(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f54c(*(undefined8 *)(this + 0x150),(long)param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar1 + 0x10));
  local_18 = __gnu_cxx::
             __normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
             ::operator+((__normal_iterator<CardGameLevelBonusData*,std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>>
                          *)&local_20,(long)param_2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::erase
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(lVar1 + 0x10),local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveEvilDavePlant(int, int) */

void __thiscall CustomLevelMgr::RemoveEvilDavePlant(CustomLevelMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x170);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_0359c784(uVar2,uVar3,CONCAT44(param_2,param_1));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>>::erase
              ((vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>> *)this_00,local_18,
               local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveTowerDefendRoad(int, int) */

void __thiscall CustomLevelMgr::RemoveTowerDefendRoad(CustomLevelMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_0359ca60(uVar2,uVar3,CONCAT44(param_2,param_1));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>>::erase
              ((vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>> *)this_00,local_18,
               local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveUpgradePlant(int) */

void __thiscall CustomLevelMgr::RemoveUpgradePlant(CustomLevelMgr *this,int param_1)

{
  ulong uVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0358f5e0(*(undefined8 *)(this + 0x200),*(undefined8 *)(this + 0x208));
  if ((ulong)(long)param_1 < uVar1) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x200));
    local_18 = __gnu_cxx::
               __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
               ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                            *)&local_20,(long)param_1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>>::erase
              ((vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>> *)(this + 0x200)
               ,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetValueByWorldType(CustomLevelNetworkWorldType, bool) */

void CustomLevelMgr::GetValueByWorldType
               (string *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_10 = CONCAT44(local_10._4_4_,param_3);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
             ::find((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
                     *)g_worldTypeMaps,(int *)&local_10);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)g_worldTypeMaps);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    if (param_4 == '\0') {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      lVar2 = lVar2 + 0x10;
    }
    else {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      lVar2 = lVar2 + 8;
    }
    FUN_05475d88(param_1,lVar2);
  }
  else {
    std::string::string(param_1,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* CustomLevelMgr::GetWorldByWorldType(CustomLevelNetworkWorldType) */

undefined8
CustomLevelMgr::GetWorldByWorldType(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  GetValueByWorldType(param_2,param_3,1);
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::SetWorld(CustomLevelNetworkWorldType) */

void __thiscall CustomLevelMgr::SetWorld(CustomLevelMgr *this,undefined4 param_2)

{
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x308) = param_2;
  local_8 = ___stack_chk_guard;
  GetWorldByWorldType(asStack_10);
  FUN_05474278(this + 0x78,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::SetMode(CustomLevelNetworkLevelMode) */

void __thiscall CustomLevelMgr::SetMode(CustomLevelMgr *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x30c) = param_2;
  switch(param_2) {
  case 1:
    UIRewardFrame::SetDecoratorType((UIRewardFrame *)this,1);
    return;
  case 2:
    TGPieceTableUI::SetMinChips((TGPieceTableUI *)this,500);
    SetLastStandPlantfood(this,3);
    return;
  case 3:
    SetWorld(this,0xf);
    return;
  case 4:
    SetWorld(this,0x10);
    return;
  case 5:
    SetWorld(this,0x11);
    return;
  case 6:
    SetWorld(this,0x12);
    return;
  case 7:
    SetWorld(this,0x13);
    return;
  default:
    return;
  }
}


/* CustomLevelMgr::GetStageByWorldType(CustomLevelNetworkWorldType) */

undefined8
CustomLevelMgr::GetStageByWorldType(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  GetValueByWorldType(param_2,param_3,0);
  return param_1;
}


/* CustomLevelMgr::GetStageByCurrentWorldType() */

void CustomLevelMgr::GetStageByCurrentWorldType(void)

{
  UISummeryLotteryItem *in_x0;
  
  UISummeryLotteryItem::GetItemID(in_x0);
  GetStageByWorldType();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetWorldInfoByWorldType(CustomLevelNetworkWorldType) */

void CustomLevelMgr::GetWorldInfoByWorldType
               (LogCacheInfo *param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_20;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_10 = CONCAT44(local_10._4_4_,param_3);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
             ::find((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
                     *)g_worldTypeMaps,(int *)&local_10);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)g_worldTypeMaps);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    LogCacheInfo::LogCacheInfo(param_1,(LogCacheInfo *)(lVar2 + 8));
  }
  else {
    std::string::string(asStack_18,"egypt");
    std::string::string((string *)&local_10,"egypt");
    ProfileConversionResults::LevelChange::LevelChange
              ((LevelChange *)param_1,asStack_18,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::IsMyFavourite(int) */

void __thiscall CustomLevelMgr::IsMyFavourite(CustomLevelMgr *this,int param_1)

{
  bool bVar1;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x988),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x988));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::FillFavouriteLevelMap(std::vector<CustomNetworkPreviewData,
   std::allocator<CustomNetworkPreviewData> >) */

void __thiscall
CustomLevelMgr::FillFavouriteLevelMap
          (CustomLevelMgr *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x988))
  ;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar3 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        (this + 0x988),piVar2);
    *puVar3 = 1;
    std::move_iterator<RappellingZombieInfo*>::operator++
              ((move_iterator<RappellingZombieInfo*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::UpdateMyFavourite(int, bool) */

void __thiscall CustomLevelMgr::UpdateMyFavourite(CustomLevelMgr *this,int param_1,bool param_2)

{
  undefined4 *puVar1;
  int local_4;
  
  local_4 = param_1;
  if (!param_2) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((int *)(this + 0x988));
    return;
  }
  puVar1 = (undefined4 *)
           std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                     ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                      (this + 0x988),&local_4);
  *puVar1 = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveAllEvents(int) */

void __thiscall CustomLevelMgr::RemoveAllEvents(CustomLevelMgr *this,int param_1)

{
  long lVar1;
  CustomWaveEvent aCStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  CustomWaveEvent::CustomWaveEvent(aCStack_a8);
  CustomWaveEvent::operator=((CustomWaveEvent *)(lVar1 + 0x28),aCStack_a8);
  CustomWaveEvent::~CustomWaveEvent(aCStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddSeedBankPlantBlackList(std::string const&) */

void __thiscall CustomLevelMgr::AddSeedBankPlantBlackList(CustomLevelMgr *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 200);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0359bd94(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    if (local_8 == ___stack_chk_guard) {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)this_00,param_1);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::GetWaveRowZombies(int, int, std::vector<std::string, std::allocator<std::string >
   >&) */

void __thiscall
CustomLevelMgr::GetWaveRowZombies(CustomLevelMgr *this,int param_1,int param_2,vector *param_3)

{
  long lVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_3);
  uVar4 = 0;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  do {
    uVar6 = *(undefined8 *)(lVar1 + 8);
    uVar2 = FUN_0358f4e0(uVar6,*(undefined8 *)(lVar1 + 0x10));
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar2 <= uVar5) {
        return;
      }
      psVar3 = (string *)FUN_0358f4ec(uVar6,uVar5);
      uVar5 = uVar4;
    } while (*(int *)(psVar3 + 8) != param_2);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)param_3,psVar3);
  } while( true );
}


/* CustomLevelMgr::GetTowerDefendWaveRowZombies(int, int, std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall
CustomLevelMgr::GetTowerDefendWaveRowZombies
          (CustomLevelMgr *this,int param_1,int param_2,vector *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_3);
  uVar4 = 0;
  puVar1 = (undefined8 *)FUN_0358f5c0(*(undefined8 *)(this + 0x1d0),(long)param_1);
  do {
    uVar6 = *puVar1;
    uVar2 = FUN_0358f5d4(uVar6,puVar1[1]);
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar2 <= uVar5) {
        return;
      }
      psVar3 = (string *)FUN_0358f5cc(uVar6,uVar5);
      uVar5 = uVar4;
    } while (*(int *)(psVar3 + 8) != param_2);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)param_3,psVar3);
  } while( true );
}


/* CustomLevelMgr::GetSingleHandedWaveRowZombies(int, int, std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall
CustomLevelMgr::GetSingleHandedWaveRowZombies
          (CustomLevelMgr *this,int param_1,int param_2,vector *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_3);
  uVar4 = 0;
  puVar1 = (undefined8 *)FUN_0358f5f4(*(undefined8 *)(this + 0x218),(long)param_1);
  do {
    uVar6 = *puVar1;
    uVar2 = FUN_0358f604(uVar6,puVar1[1]);
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar2 <= uVar5) {
        return;
      }
      psVar3 = (string *)FUN_0358f5fc(uVar6,uVar5);
      uVar5 = uVar4;
    } while (*(int *)(psVar3 + 8) != param_2);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)param_3,psVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::UpdateRailInfo(std::vector<RailInfo, std::allocator<RailInfo> >&, int, int) */

void __thiscall
CustomLevelMgr::UpdateRailInfo(CustomLevelMgr *this,vector *param_1,int param_2,int param_3)

{
  SortedKern aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SortedKern::SortedKern(aSStack_18,param_2,param_3,param_3);
  std::vector<RailInfo,std::allocator<RailInfo>>::push_back
            ((vector<RailInfo,std::allocator<RailInfo>> *)param_1,(RailInfo *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::UpdateRails(int, int, bool) */

void __thiscall
CustomLevelMgr::UpdateRails(CustomLevelMgr *this,int param_1,int param_2,bool param_3)

{
  if (!param_3) {
    RemoveRailInfo(this,(vector *)(this + 0x2c0),param_1,param_2);
    return;
  }
  UpdateRailInfo(this,(vector *)(this + 0x2c0),param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::UpdateGridInfo(std::vector<PlacementInfo, std::allocator<PlacementInfo> >&,
   std::string const&, int, int, int) */

void __thiscall
CustomLevelMgr::UpdateGridInfo
          (CustomLevelMgr *this,vector *param_1,string *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)param_1);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    if (!bVar1) {
      PlacementInfo::PlacementInfo((PlacementInfo *)local_20,param_3,param_4,param_5,param_2);
      std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back
                ((vector<PlacementInfo,std::allocator<PlacementInfo>> *)param_1,
                 (PlacementInfo *)local_20);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                ((GridItemCardGameZombieActionData *)local_20);
LAB_035ad344:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
      thunk_FUN_05475e00(piVar2 + 4,param_2);
      goto LAB_035ad344;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_28);
  } while( true );
}


/* CustomLevelMgr::UpdatePlantGrid(std::string const&, int, int, int, bool) */

void __thiscall
CustomLevelMgr::UpdatePlantGrid
          (CustomLevelMgr *this,string *param_1,int param_2,int param_3,int param_4,bool param_5)

{
  if (!param_5) {
    RemoveGridInfo(this,(vector *)(this + 600),param_2,param_3);
    return;
  }
  UpdateGridInfo(this,(vector *)(this + 600),param_1,param_2,param_3,param_4);
  return;
}


/* CustomLevelMgr::UpdateGridItemGrid(std::string const&, int, int, int, bool) */

void __thiscall
CustomLevelMgr::UpdateGridItemGrid
          (CustomLevelMgr *this,string *param_1,int param_2,int param_3,int param_4,bool param_5)

{
  if (!param_5) {
    RemoveGridInfo(this,(vector *)(this + 0x270),param_2,param_3);
    return;
  }
  UpdateGridInfo(this,(vector *)(this + 0x270),param_1,param_2,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::initializeDefaultModules() */

void __thiscall CustomLevelMgr::initializeDefaultModules(CustomLevelMgr *this)

{
  vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>> *this_00;
  CustomLevelBasicTemplate *this_01;
  CustomLevelWaveTemplate *this_02;
  CustomLevelSeedBankTemplate *this_03;
  CustomLevelElementsTemplate *this_04;
  CustomLevelBasicTemplate *local_10;
  long local_8;
  
  this_00 = (vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>> *)(this + 8);
  local_8 = ___stack_chk_guard;
  this_01 = ::operator_new(0x10);
  CustomLevelBasicTemplate::CustomLevelBasicTemplate(this_01,this);
  local_10 = this_01;
  std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
            (this_00,(CustomLevelTemplate **)&local_10);
  this_02 = ::operator_new(0x30);
  CustomLevelWaveTemplate::CustomLevelWaveTemplate(this_02,this);
  local_10 = (CustomLevelBasicTemplate *)this_02;
  std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
            (this_00,(CustomLevelTemplate **)&local_10);
  this_03 = ::operator_new(0x10);
  CustomLevelSeedBankTemplate::CustomLevelSeedBankTemplate(this_03,this);
  local_10 = (CustomLevelBasicTemplate *)this_03;
  std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
            (this_00,(CustomLevelTemplate **)&local_10);
  this_04 = ::operator_new(0x10);
  CustomLevelElementsTemplate::CustomLevelElementsTemplate(this_04,this);
  local_10 = (CustomLevelBasicTemplate *)this_04;
  std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
            (this_00,(CustomLevelTemplate **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::initOtherModules(CustomLevelWorldParams const&) */

void __thiscall
CustomLevelMgr::initOtherModules(CustomLevelMgr *this,CustomLevelWorldParams *param_1)

{
  CustomChallenge *this_00;
  vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>> *this_01;
  char cVar1;
  CustomLevelChallengeTemplate *this_02;
  CustomLevelChallengeVaseBreakerTemplate *this_03;
  CustomLevelChallengeSingleHandedTemplate *this_04;
  CustomLevelChallengeTowerDefendTemplate *this_05;
  CustomLevelChallengeEvilDaveTemplate *this_06;
  CustomLevelChallengeStatueMazeTemplate *this_07;
  CustomLevelChallengeMoldsTemplate *this_08;
  CustomLevelChallengeLastStandTemplate *this_09;
  CustomLevelChallengeTemplate *local_10;
  long local_8;
  
  this_00 = (CustomChallenge *)(param_1 + 0xa8);
  local_8 = ___stack_chk_guard;
  cVar1 = CustomChallenge::HasAnyChallenge(this_00);
  if (cVar1 != '\0') {
    this_01 = (vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>> *)(this + 8);
    this_02 = ::operator_new(0x10);
    CustomLevelChallengeTemplate::CustomLevelChallengeTemplate(this_02,this);
    local_10 = this_02;
    std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
              (this_01,(CustomLevelTemplate **)&local_10);
    cVar1 = CustomChallenge::HasLastStand(this_00);
    if (cVar1 != '\0') {
      this_09 = ::operator_new(0x10);
      CustomLevelChallengeLastStandTemplate::CustomLevelChallengeLastStandTemplate(this_09,this);
      local_10 = (CustomLevelChallengeTemplate *)this_09;
      std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
                (this_01,(CustomLevelTemplate **)&local_10);
    }
    cVar1 = CustomChallenge::HasMolds(this_00);
    if (cVar1 != '\0') {
      this_08 = ::operator_new(0x10);
      CustomLevelChallengeMoldsTemplate::CustomLevelChallengeMoldsTemplate(this_08,this);
      local_10 = (CustomLevelChallengeTemplate *)this_08;
      std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
                (this_01,(CustomLevelTemplate **)&local_10);
    }
    cVar1 = CustomChallenge::HasStatueMaze(this_00);
    if (cVar1 != '\0') {
      this_07 = ::operator_new(0x10);
      CustomLevelChallengeStatueMazeTemplate::CustomLevelChallengeStatueMazeTemplate(this_07,this);
      local_10 = (CustomLevelChallengeTemplate *)this_07;
      std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
                (this_01,(CustomLevelTemplate **)&local_10);
    }
    cVar1 = CustomChallenge::HasEvilDave(this_00);
    if (cVar1 != '\0') {
      this_06 = ::operator_new(0x10);
      CustomLevelChallengeEvilDaveTemplate::CustomLevelChallengeEvilDaveTemplate(this_06,this);
      local_10 = (CustomLevelChallengeTemplate *)this_06;
      std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
                (this_01,(CustomLevelTemplate **)&local_10);
    }
    cVar1 = CustomChallenge::HasTowerDefend(this_00);
    if (cVar1 != '\0') {
      this_05 = ::operator_new(0x10);
      CustomLevelChallengeTowerDefendTemplate::CustomLevelChallengeTowerDefendTemplate(this_05,this)
      ;
      local_10 = (CustomLevelChallengeTemplate *)this_05;
      std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
                (this_01,(CustomLevelTemplate **)&local_10);
    }
    cVar1 = CustomChallenge::HasSingleHanded(this_00);
    if (cVar1 != '\0') {
      this_04 = ::operator_new(0x10);
      CustomLevelChallengeSingleHandedTemplate::CustomLevelChallengeSingleHandedTemplate
                (this_04,this);
      local_10 = (CustomLevelChallengeTemplate *)this_04;
      std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
                (this_01,(CustomLevelTemplate **)&local_10);
    }
    cVar1 = CustomChallenge::HasVaseBreaker(this_00);
    if (cVar1 != '\0') {
      this_03 = ::operator_new(0x10);
      CustomLevelChallengeVaseBreakerTemplate::CustomLevelChallengeVaseBreakerTemplate(this_03,this)
      ;
      local_10 = (CustomLevelChallengeTemplate *)this_03;
      std::vector<CustomLevelTemplate*,std::allocator<CustomLevelTemplate*>>::push_back
                (this_01,(CustomLevelTemplate **)&local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::InitModules(CustomLevelWorldParams const&) */

void __thiscall CustomLevelMgr::InitModules(CustomLevelMgr *this,CustomLevelWorldParams *param_1)

{
  initializeDefaultModules(this);
  initOtherModules(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GenerateTemplate(CustomLevelWorldParams const&) */

void CustomLevelMgr::GenerateTemplate(CustomLevelWorldParams *param_1)

{
  CustomLevelCreator *this;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  CustomLevelWorldParams *in_x1;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (CustomLevelCreator *)(param_1 + 0x20);
  local_8 = ___stack_chk_guard;
  Reset((CustomLevelMgr *)param_1);
  InitModules((CustomLevelMgr *)param_1,in_x1);
  CustomLevelCreator::CreateLevel(this,(CustomLevelParams *)(in_x1 + 0x10));
  lVar3 = getConfig();
  if (lVar3 == 0) {
LAB_035ada24:
    std::string::string(in_x8,"");
    nop();
  }
  else {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 8));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      cVar1 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,this);
      if (cVar1 == '\0') goto LAB_035ada24;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    CustomLevelCreator::SaveLevelDef((CustomLevelWorldParams *)this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::UpdatePowerTile(PowerTileClass, int, int) */

void __thiscall
CustomLevelMgr::UpdatePowerTile
          (CustomLevelMgr *this,wchar_t param_2,wchar_t param_3,wchar_t param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  wchar_t *pwVar2;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x2d8);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar1) {
      SortedKern::SortedKern((SortedKern *)local_18,param_2,param_3,param_4);
      std::vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>>::push_back
                ((vector<CustomPowerTileInfo,std::allocator<CustomPowerTileInfo>> *)this_00,
                 (CustomPowerTileInfo *)local_18);
LAB_035adc88:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pwVar2 = (wchar_t *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if ((pwVar2[1] == param_3) && (pwVar2[2] == param_4)) {
      *pwVar2 = param_2;
      goto LAB_035adc88;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddWaveEventFrostWind(int, int) */

void __thiscall CustomLevelMgr::AddWaveEventFrostWind(CustomLevelMgr *this,int param_1,int param_2)

{
  long lVar1;
  OTFTagStruct aOStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f4d0(*(undefined8 *)(this + 0xb0),(long)param_1);
  EA::Text::OTFTagStruct::OTFTagStruct(aOStack_10,param_2);
  std::vector<CustomWaveWind,std::allocator<CustomWaveWind>>::push_back
            ((vector<CustomWaveWind,std::allocator<CustomWaveWind>> *)(lVar1 + 0x88),
             (CustomWaveWind *)aOStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddSet(int, int, float, float) */

void __thiscall
CustomLevelMgr::AddSet(CustomLevelMgr *this,int param_1,int param_2,float param_3,float param_4)

{
  StatueMazeSet aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StatueMazeSet::StatueMazeSet(aSStack_30,param_1,param_2,param_3,(int)param_4);
  std::vector<StatueMazeSet,std::allocator<StatueMazeSet>>::push_back
            ((vector<StatueMazeSet,std::allocator<StatueMazeSet>> *)(this + 0x150),aSStack_30);
  StatueMazeSet::~StatueMazeSet(aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddSetMatrix(int, bool) */

void __thiscall CustomLevelMgr::AddSetMatrix(CustomLevelMgr *this,int param_1,bool param_2)

{
  long lVar1;
  StatueMazeMatrix aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0358f54c(*(undefined8 *)(this + 0x150),(long)param_1);
  StatueMazeMatrix::StatueMazeMatrix(aSStack_18,param_2,0.0,0.0);
  std::vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>>::push_back
            ((vector<StatueMazeMatrix,std::allocator<StatueMazeMatrix>> *)(lVar1 + 0x10),aSStack_18)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddEvilDavePlant(int, int, std::string const&) */

void __thiscall
CustomLevelMgr::AddEvilDavePlant(CustomLevelMgr *this,int param_1,int param_2,string *param_3)

{
  EvilDavePlantEntry aEStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EvilDavePlantEntry::EvilDavePlantEntry(aEStack_18,param_1,param_2,param_3);
  std::vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>>::push_back
            ((vector<EvilDavePlantEntry,std::allocator<EvilDavePlantEntry>> *)(this + 0x170),
             aEStack_18);
  PakRecord::~PakRecord((PakRecord *)aEStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddTowerDefendRoad(int, int, std::string const&) */

void __thiscall
CustomLevelMgr::AddTowerDefendRoad(CustomLevelMgr *this,int param_1,int param_2,string *param_3)

{
  EvilDavePlantEntry aEStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EvilDavePlantEntry::EvilDavePlantEntry(aEStack_18,param_1,param_2,param_3);
  std::vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>>::push_back
            ((vector<TowerDefendRoadInfo,std::allocator<TowerDefendRoadInfo>> *)(this + 0x1e8),
             (TowerDefendRoadInfo *)aEStack_18);
  PakRecord::~PakRecord((PakRecord *)aEStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RemoveTowerDefendPresetSeedBankPlant(int) */

void __thiscall
CustomLevelMgr::RemoveTowerDefendPresetSeedBankPlant(CustomLevelMgr *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  string *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  size_t __n;
  ulong uVar7;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  uVar3 = FUN_0358f458(*(undefined8 *)(this + 0x1a0),(long)param_1);
  FUN_05475d88(asStack_30,uVar3);
  this_00 = (string *)FUN_0358f458(*(undefined8 *)(this + 0x1a0),(long)param_1);
  std::string::append(this_00,"",__n);
  uVar7 = 0;
  do {
    uVar3 = *(undefined8 *)(this + 0x1b8);
    iVar1 = (int)uVar7;
    uVar6 = FUN_0358f58c(uVar3,*(undefined8 *)(this + 0x1c0));
    if (uVar6 <= uVar7) goto LAB_035aec74;
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(uVar3,uVar7);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar4);
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar7);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar4);
    FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,asStack_30);
    local_28 = FUN_0359f434(uVar3,uVar5,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10)
    ;
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar7);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar4);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    uVar7 = uVar7 + 1;
  } while (!bVar2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1b8));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
             ::operator+((__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<TowerDefendTree,std::allocator<TowerDefendTree>>::erase
            ((vector<TowerDefendTree,std::allocator<TowerDefendTree>> *)(this + 0x1b8),local_10);
LAB_035aec74:
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddUpgradeTree(int, std::string const&, int) */

void __thiscall
CustomLevelMgr::AddUpgradeTree(CustomLevelMgr *this,int param_1,string *param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  string asStack_38 [8];
  undefined8 local_30 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_0358f458(*(undefined8 *)(this + 0x1a0),(long)param_1);
  FUN_05475d88(asStack_38,uVar2);
  uVar5 = 0;
  do {
    uVar9 = uVar5;
    uVar2 = *(undefined8 *)(this + 0x1b8);
    uVar5 = FUN_0358f58c(uVar2,*(undefined8 *)(this + 0x1c0));
    if (uVar5 <= uVar9) {
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_20);
      LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_30,param_3,asStack_38);
      std::vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::push_back
                ((vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)local_20,
                 (TowerDefendTreeInfo *)local_30);
      PakRecord::~PakRecord((PakRecord *)local_30);
      LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_30,0,param_2);
      std::vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>>::push_back
                ((vector<TowerDefendTreeInfo,std::allocator<TowerDefendTreeInfo>> *)local_20,
                 (TowerDefendTreeInfo *)local_30);
      PakRecord::~PakRecord((PakRecord *)local_30);
      std::vector<TowerDefendTree,std::allocator<TowerDefendTree>>::push_back
                ((vector<TowerDefendTree,std::allocator<TowerDefendTree>> *)(this + 0x1b8),
                 (TowerDefendTree *)local_20);
      TowerDefendTree::~TowerDefendTree((TowerDefendTree *)local_20);
      std::string::~string(asStack_38);
      goto LAB_035afb8c;
    }
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(uVar2,uVar9);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar3);
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar9);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar3);
    FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)local_20,asStack_38);
    local_30[0] = FUN_0359f6c4(uVar2,uVar4,
                               (pair<std::string_const,Sexy::PILifeValueTable> *)local_20);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_20);
    pvVar3 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar9);
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar3);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_30,(__normal_iterator *)local_20);
    uVar5 = uVar9 + 1;
  } while (!bVar1);
  puVar6 = (undefined8 *)FUN_0358f5a0(*(undefined8 *)(this + 0x1b8),uVar9);
  uVar2 = *puVar6;
  piVar7 = (int *)FUN_0358f5ac(uVar2,0);
  *piVar7 = param_3;
  lVar8 = FUN_0358f5ac(uVar2,1);
  thunk_FUN_05475e00(lVar8 + 8,param_2);
  std::string::~string(asStack_38);
LAB_035afb8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::TestCreateUIData() */

void __thiscall CustomLevelMgr::TestCreateUIData(CustomLevelMgr *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SetMode(this,5);
  UIRewardFrame::SetDecoratorType((UIRewardFrame *)this,0);
  Sexy::PrimeGlyphCache::SetGlyphPadding((PrimeGlyphCache *)this,3);
  SetTowerDefendStartingSun(this,6000);
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_CENTRE");
  AddTowerDefendRoad(this,0,4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_LEFT");
  AddTowerDefendRoad(this,1,2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_LEFT");
  AddTowerDefendRoad(this,1,3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_BOTOOM_RIGHT");
  AddTowerDefendRoad(this,1,4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_CENTRE");
  AddTowerDefendRoad(this,2,2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_RIGHT");
  AddTowerDefendRoad(this,3,2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_LEFT");
  AddTowerDefendRoad(this,3,3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_BOTOOM_LEFT");
  AddTowerDefendRoad(this,3,4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_CENTRE");
  AddTowerDefendRoad(this,4,4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_LEFT");
  AddTowerDefendRoad(this,5,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_LEFT");
  AddTowerDefendRoad(this,5,1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_LEFT");
  AddTowerDefendRoad(this,5,2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_LEFT");
  AddTowerDefendRoad(this,5,3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_BOTOOM_RIGHT");
  AddTowerDefendRoad(this,5,4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_CENTRE");
  AddTowerDefendRoad(this,6,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_RIGHT");
  AddTowerDefendRoad(this,7,0,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_LEFT");
  AddTowerDefendRoad(this,7,1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_BOTOOM_LEFT");
  AddTowerDefendRoad(this,7,2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"IMAGE_BACKGROUNDS_THEATRE_DARK_RUG_TOP_CENTRE");
  AddTowerDefendRoad(this,8,2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"puffshroom");
  AddTowerDefendPresetSeedBankPlant(this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"peashooter");
  AddTowerDefendPresetSeedBankPlant(this,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"fumeshroom");
  AddUpgradeTree(this,0,asStack_10,0x96);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"threepeater");
  AddUpgradeTree(this,1,asStack_10,0xfa);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_towerdefend_normal");
  AddTowerDefendWaveZombie(this,0,asStack_10,0,0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_towerdefend_normal");
  AddTowerDefendWaveZombie(this,0,asStack_10,0,1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_towerdefend_normal");
  AddTowerDefendWaveZombie(this,0,asStack_10,0,2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_towerdefend_wolf_fire");
  AddTowerDefendWaveZombie(this,1,asStack_10,0,3);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"zombie_towerdefend_wolf_fire");
  AddTowerDefendWaveZombie(this,1,asStack_10,1,3);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::AddUpgradePlant(int, std::string const&, std::string const&, int) */

void __thiscall
CustomLevelMgr::AddUpgradePlant
          (CustomLevelMgr *this,int param_1,string *param_2,string *param_3,int param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x200);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)local_18,param_2);
  local_20 = FUN_0359fe88(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)local_18);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    thunk_FUN_05475e00(lVar4 + 8,param_3);
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    *piVar5 = param_4;
  }
  else {
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)local_18,param_4,param_3);
    std::vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>>::push_back
              ((vector<SingleHandedPlantInfo,std::allocator<SingleHandedPlantInfo>> *)this_00,
               (SingleHandedPlantInfo *)local_18);
    PakRecord::~PakRecord((PakRecord *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::CustomLevelMgr() */

void __thiscall CustomLevelMgr::CustomLevelMgr(CustomLevelMgr *this)

{
  bool bVar1;
  string *__n;
  int local_44;
  string asStack_40 [8];
  string asStack_38 [8];
  PACommand aPStack_30 [16];
  pair<int_const,CustomLevelWorldInfo> apStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<CustomLevelMgr>::LazySingleton((LazySingleton<CustomLevelMgr> *)this);
  *(undefined ***)this = &PTR__CustomLevelMgr_0665e1c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::pair<Sexy::RtWeakPtr<PlantType>,int>::pair
            ((pair<Sexy::RtWeakPtr<PlantType>,int> *)(this + 0x20));
  CustomLevelDataCreator::CustomLevelDataCreator((CustomLevelDataCreator *)(this + 0x30));
  CustomLevelDownloadMgr::CustomLevelDownloadMgr((CustomLevelDownloadMgr *)(this + 0x58));
  CustomLevelWorldParams::CustomLevelWorldParams((CustomLevelWorldParams *)(this + 0x78));
  CustomLevelWorldParams::CustomLevelWorldParams((CustomLevelWorldParams *)(this + 0x350));
  CustomNetworkUploadData::CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x628));
  CustomNetworkUploadData::CustomNetworkUploadData((CustomNetworkUploadData *)(this + 0x6f8));
  CustomNetworkListData::CustomNetworkListData((CustomNetworkListData *)(this + 0x7c8));
  CustomNetworkLikeDislikeData::CustomNetworkLikeDislikeData
            ((CustomNetworkLikeDislikeData *)(this + 0x800));
  CustomNetworkPlayCountData::CustomNetworkPlayCountData
            ((CustomNetworkPlayCountData *)(this + 0x820));
  CustomNetworkFavouriteResponseData::CustomNetworkFavouriteResponseData
            ((CustomNetworkFavouriteResponseData *)(this + 0x840));
  Set8BytesTo0((string *)(this + 0x860));
  CustomNetworkListData::CustomNetworkListData((CustomNetworkListData *)(this + 0x868));
  CustomNetworkPreviewData::CustomNetworkPreviewData((CustomNetworkPreviewData *)(this + 0x8a8));
  CustomNetworkExtraData::CustomNetworkExtraData((CustomNetworkExtraData *)(this + 0x8f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x968));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x988));
  TGACustomLevelData::TGACustomLevelData((TGACustomLevelData *)(this + 0x9b8));
  local_44 = 0;
  std::string::string(asStack_40,"egypt");
  std::string::string(asStack_38,"egypt");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 1;
  std::string::string(asStack_40,"pirate");
  std::string::string(asStack_38,"pirate");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 2;
  std::string::string(asStack_40,"cowboy");
  std::string::string(asStack_38,"cowboy");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 3;
  std::string::string(asStack_40,"kongfu");
  std::string::string(asStack_38,"kongfu");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 4;
  std::string::string(asStack_40,"future");
  std::string::string(asStack_38,"future");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 5;
  std::string::string(asStack_40,"eighties");
  std::string::string(asStack_38,"eighties");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 6;
  std::string::string(asStack_40,"dark");
  std::string::string(asStack_38,"dark");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 7;
  std::string::string(asStack_40,"beach");
  std::string::string(asStack_38,"beach");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 8;
  std::string::string(asStack_40,"dino");
  std::string::string(asStack_38,"dino");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 9;
  std::string::string(asStack_40,"iceage");
  std::string::string(asStack_38,"iceage");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 10;
  std::string::string(asStack_40,"lostcity");
  std::string::string(asStack_38,"lostcity");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0xb;
  std::string::string(asStack_40,"modern");
  std::string::string(asStack_38,"modern");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0xc;
  std::string::string(asStack_40,"steam");
  std::string::string(asStack_38,"steam");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0xd;
  std::string::string(asStack_40,"renai");
  std::string::string(asStack_38,"renai");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0xe;
  std::string::string(asStack_40,"heian");
  std::string::string(asStack_38,"heian");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0xf;
  std::string::string(asStack_40,"statue");
  std::string::string(asStack_38,"renai");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0x10;
  std::string::string(asStack_40,"evil_dave");
  std::string::string(asStack_38,"future");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0x11;
  std::string::string(asStack_40,"tower_defend");
  std::string::string(asStack_38,"theatre_dark");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0x12;
  std::string::string(asStack_40,"single_handed");
  std::string::string(asStack_38,"future");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0x13;
  std::string::string(asStack_40,"vase_breaker");
  std::string::string(asStack_38,"lostcity");
  ProfileConversionResults::LevelChange::LevelChange
            ((LevelChange *)aPStack_30,asStack_40,asStack_38);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  local_44 = 0x14;
  std::string::string(asStack_40,"childrenday");
  std::string::string(asStack_38,"childrenday");
  __n = asStack_38;
  ProfileConversionResults::LevelChange::LevelChange((LevelChange *)aPStack_30,asStack_40);
  std::make_pair<int,CustomLevelWorldInfo>(&local_44,(CustomLevelWorldInfo *)aPStack_30);
  std::
  map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
  ::insert<std::pair<int,CustomLevelWorldInfo>,void>
            ((map<int,CustomLevelWorldInfo,std::less<int>,std::allocator<std::pair<int_const,CustomLevelWorldInfo>>>
              *)g_worldTypeMaps,(pair *)apStack_20);
  std::pair<int_const,CustomLevelWorldInfo>::~pair(apStack_20);
  Sexy::PACommand::~PACommand(aPStack_30);
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  nop();
  std::string::append((string *)(this + 0x860),"",(size_t)__n);
  this[0x8a0] = (CustomLevelMgr)0x0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x980) = 0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::TestLoadLevelData() */

void __thiscall CustomLevelMgr::TestLoadLevelData(CustomLevelMgr *this)

{
  bool bVar1;
  undefined8 *extraout_x0;
  CustomLevelWorldParams *pCVar2;
  undefined8 local_2f0;
  undefined8 local_2e8;
  CustomLevelWorldParams aCStack_2e0 [728];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CustomLevelDataCreator::Load((CustomLevelDataCreator *)(this + 0x30));
  nop();
  local_2f0 = FUN_03598624(*extraout_x0);
  local_2e8 = FUN_03598674(extraout_x0[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_2f0,(__normal_iterator *)&local_2e8), bVar1)
  {
    pCVar2 = (CustomLevelWorldParams *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_2f0);
    CustomLevelWorldParams::CustomLevelWorldParams(aCStack_2e0,pCVar2);
    CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_2e0);
    std::move_iterator<CustomLevelWorldParams*>::operator++
              ((move_iterator<CustomLevelWorldParams*> *)&local_2f0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::TestDeleteLevelData() */

void __thiscall CustomLevelMgr::TestDeleteLevelData(CustomLevelMgr *this)

{
  CustomLevelDataCreator *this_00;
  CustomLevelWorldParams *pCVar1;
  CustomLevelWorldParams aCStack_2e0 [728];
  long local_8;
  
  this_00 = (CustomLevelDataCreator *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  CustomLevelDataCreator::Load(this_00);
  pCVar1 = (CustomLevelWorldParams *)CustomLevelDataCreator::GetLevelDataPtr(this_00,0);
  CustomLevelWorldParams::CustomLevelWorldParams(aCStack_2e0,pCVar1);
  CustomLevelDataCreator::DeleteLevelData(this_00,aCStack_2e0);
  CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_2e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::SaveCurrentLevel() */

void __thiscall CustomLevelMgr::SaveCurrentLevel(CustomLevelMgr *this)

{
  CustomLevelWorldParams aCStack_2e0 [728];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CustomLevelWorldParams::CustomLevelWorldParams
            (aCStack_2e0,(CustomLevelWorldParams *)(this + 0x78));
  CustomLevelDataCreator::Save((CustomLevelDataCreator *)(this + 0x30),aCStack_2e0);
  CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_2e0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::SyncUploadedDataToLocal() */

void __thiscall CustomLevelMgr::SyncUploadedDataToLocal(CustomLevelMgr *this)

{
  *(undefined4 *)(this + 0x2f8) = *(undefined4 *)(this + 0x63c);
  *(undefined4 *)(this + 800) = *(undefined4 *)(this + 0x674);
  thunk_FUN_05475e00(this + 0x318,this + 0x678);
  thunk_FUN_05475e00(this + 0x330,this + 0x690);
  thunk_FUN_05475e00(this + 0x328,this + 0x688);
  this[0x33d] = (CustomLevelMgr)0x1;
  SaveCurrentLevel(this);
  return;
}


/* CustomLevelMgr::RecordFinishedLevel(float) */

void __thiscall CustomLevelMgr::RecordFinishedLevel(CustomLevelMgr *this,float param_1)

{
  if (this[0x33c] != (CustomLevelMgr)0x0) {
    return;
  }
  this[0x33c] = (CustomLevelMgr)0x1;
  *(float *)(this + 0x348) = param_1;
  SaveCurrentLevel(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::LoadLevelDatas() */

void CustomLevelMgr::LoadLevelDatas(void)

{
  bool bVar1;
  long in_x0;
  vector *extraout_x0;
  long lVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_50;
  undefined8 local_48;
  vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>> avStack_40 [24];
  CustomPreviewData aCStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CustomLevelDataCreator::Load((CustomLevelDataCreator *)(in_x0 + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  nop();
  std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>::vector
            (avStack_40,extraout_x0);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_40);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_40);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    CustomPreviewData::CustomPreviewData(aCStack_28);
    thunk_FUN_05475e00(auStack_20,lVar2);
    thunk_FUN_05475e00(aCStack_28,lVar2 + 0x288);
    local_14 = *(undefined4 *)(lVar2 + 0x294);
    local_18 = *(undefined1 *)(lVar2 + 0x2c5);
    local_10 = *(undefined4 *)(lVar2 + 0x280);
    std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::push_back
              ((vector<CustomPreviewData,std::allocator<CustomPreviewData>> *)in_x8,aCStack_28);
    Sexy::PACommand::~PACommand((PACommand *)aCStack_28);
    std::move_iterator<CustomLevelWorldParams*>::operator++
              ((move_iterator<CustomLevelWorldParams*> *)&local_50);
  }
  std::vector<CustomLevelWorldParams,std::allocator<CustomLevelWorldParams>>::~vector(avStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::LoadLevelData(int) */

CustomLevelMgr * __thiscall CustomLevelMgr::LoadLevelData(CustomLevelMgr *this,int param_1)

{
  CustomLevelWorldParams *pCVar1;
  
  pCVar1 = (CustomLevelWorldParams *)
           CustomLevelDataCreator::GetLevelDataPtr((CustomLevelDataCreator *)(this + 0x30),param_1);
  CustomLevelWorldParams::operator=((CustomLevelWorldParams *)(this + 0x78),pCVar1);
  SyncLocalLevelDataToLocalLevelDetails(this);
  return this + 0x6f8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::ConstructNetworkLevelData(CustomLevelWorldParams const&) */

void CustomLevelMgr::ConstructNetworkLevelData(CustomLevelWorldParams *param_1)

{
  CustomLevelWorldParams *in_x1;
  string *in_x8;
  string asStack_2f0 [8];
  NetworkCustomLevelData aNStack_2e8 [8];
  CustomLevelWorldParams aCStack_2e0 [728];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  NetworkCustomLevelData::NetworkCustomLevelData(aNStack_2e8);
  CustomLevelWorldParams::operator=(aCStack_2e0,in_x1);
  PlantPacketJsonConverter::SerializeObj();
  FUN_05474278();
  std::string::~string(asStack_2f0);
  NetworkCustomLevelData::~NetworkCustomLevelData(aNStack_2e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::SaveNetworkLevelData(std::string const&, bool, bool) */

void __thiscall
CustomLevelMgr::SaveNetworkLevelData(CustomLevelMgr *this,string *param_1,bool param_2,bool param_3)

{
  char cVar1;
  char cVar2;
  size_t __n;
  CustomLevelWorldParams aCStack_898 [640];
  uint local_618;
  undefined1 auStack_610 [24];
  string asStack_5f8 [8];
  uint local_5f0;
  string asStack_5e8 [8];
  string asStack_5e0 [13];
  undefined1 local_5d3;
  CustomLevelWorldParams aCStack_5c0 [728];
  NetworkCustomLevelData aNStack_2e8 [8];
  CustomLevelWorldParams aCStack_2e0 [728];
  long local_8;
  
  __n = (size_t)param_2;
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if (cVar1 == '\0') {
    NetworkCustomLevelData::NetworkCustomLevelData(aNStack_2e8);
    cVar2 = PlantPacketJsonConverter::SerializeJson((PlantPacketJsonConverter *)aNStack_2e8,param_1)
    ;
    if (cVar2 != '\0') {
      CustomLevelWorldParams::CustomLevelWorldParams(aCStack_898,aCStack_2e0);
      if (param_2) {
        local_618 = (uint)param_3;
        if (local_618 == 0) {
          std::string::append(asStack_5e8,"",__n);
          std::string::append(asStack_5e0,"",__n);
          std::string::append(asStack_5f8,"",__n);
          local_5f0 = (uint)param_3;
          thunk_FUN_05475e00(auStack_610,this + 0x710);
        }
        else {
          thunk_FUN_05475e00(auStack_610,this + 0x8b0);
          local_618 = *(uint *)(this + 0x8a8);
          local_5f0 = *(uint *)(this + 0x8cc);
          thunk_FUN_05475e00(asStack_5f8,this + 0x8d0);
          local_5d3 = 1;
        }
        CustomLevelWorldParams::CustomLevelWorldParams(aCStack_5c0,aCStack_898);
        CustomLevelDataCreator::Save((CustomLevelDataCreator *)(this + 0x30),aCStack_5c0);
        CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_5c0);
      }
      else {
        CustomLevelWorldParams::operator=((CustomLevelWorldParams *)(this + 0x350),aCStack_898);
      }
      CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_898);
    }
    NetworkCustomLevelData::~NetworkCustomLevelData(aNStack_2e8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::TestConstructLevelData() */

void __thiscall CustomLevelMgr::TestConstructLevelData(CustomLevelMgr *this)

{
  int iVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *__n;
  CustomLevelWorldParams *in_x8;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_698;
  undefined4 uStack_694;
  UnchartedModePlantNumData aUStack_690 [8];
  UnchartedModePlantNumData aUStack_688 [8];
  string asStack_680 [8];
  SortedKern aSStack_678 [16];
  string asStack_668 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_658 [24];
  CustomChallengeMolds aCStack_640 [24];
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  vector<CustomWave,std::allocator<CustomWave>> avStack_618 [24];
  PlacementInfo aPStack_600 [8];
  vector<RailCartInfo,std::allocator<RailCartInfo>> avStack_5f8 [24];
  vector<RailInfo,std::allocator<RailInfo>> avStack_5e0 [24];
  string asStack_5c8 [48];
  undefined4 local_598;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_570 [24];
  vector<PlacementInfo,std::allocator<PlacementInfo>> avStack_558 [48];
  CustomRailInfo aCStack_528 [80];
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_3b0 [2];
  vector<CustomWaveZombie,std::allocator<CustomWaveZombie>> avStack_3a8 [8];
  CustomChallengeData aCStack_3a0 [16];
  undefined4 local_390;
  CustomWaveEventSandStorm aCStack_388 [80];
  undefined8 local_338;
  CustomLevelParams aCStack_278 [8];
  string asStack_270 [8];
  undefined4 local_268;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = avStack_658;
  CustomLevelParams::CustomLevelParams(aCStack_278);
  uVar4 = 0;
  std::string::append((string *)aCStack_278,"Test",(size_t)__n);
  std::string::append(asStack_270,"[PLAYERS_TRIP_TO_EGYPT]",(size_t)__n);
  local_268 = 1;
  CustomLevelWorldParams::CustomLevelWorldParams(in_x8);
  std::string::append((string *)in_x8,"beach",(size_t)__n);
  CustomLevelParams::operator=((CustomLevelParams *)(in_x8 + 0x10),aCStack_278);
  CustomWaveData::CustomWaveData((CustomWaveData *)&local_628);
  local_628 = 9;
  local_624 = 7;
  local_620 = 0x32;
  local_61c = 100;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_658);
  do {
    iVar2 = 8;
    CustomWave::CustomWave((CustomWave *)local_3b0);
    local_390 = 1;
    local_3b0[0] = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_570);
    do {
      CustomWaveZombie::CustomWaveZombie((CustomWaveZombie *)&local_4d8);
      std::string::append((string *)&local_4d8,"pirate",(size_t)__n);
      local_4d0 = 2;
      local_4cc = 4;
      std::vector<CustomWaveZombie,std::allocator<CustomWaveZombie>>::push_back
                ((vector<CustomWaveZombie,std::allocator<CustomWaveZombie>> *)avStack_570,
                 (CustomWaveZombie *)&local_4d8);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_4d8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    std::vector<CustomWaveZombie,std::allocator<CustomWaveZombie>>::operator=
              (avStack_3a8,(vector *)avStack_570);
    if ((uVar4 & 1) == 0) {
      CustomWaveEventSandStorm::CustomWaveEventSandStorm((CustomWaveEventSandStorm *)&local_4d8);
      local_4d8 = 4;
      uStack_4d4 = 4;
      std::string::string(asStack_5c8,"mummy");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_4d0,asStack_5c8);
      std::string::~string(asStack_5c8);
      nop();
      std::string::string(asStack_5c8,"mummy");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_4d0,asStack_5c8);
      std::string::~string(asStack_5c8);
      nop();
      std::string::string(asStack_5c8,"mummy");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_4d0,asStack_5c8);
      std::string::~string(asStack_5c8);
      nop();
      __n = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_600;
      std::string::string(asStack_5c8,"mummy");
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_4d0,asStack_5c8);
      std::string::~string(asStack_5c8);
      nop();
      CustomWaveEventSandStorm::operator=(aCStack_388,(CustomWaveEventSandStorm *)&local_4d8);
      WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)&local_4d8);
    }
    else {
      CustomWaveEventDinoRun::CustomWaveEventDinoRun((CustomWaveEventDinoRun *)&local_4d8);
      local_4d8 = 3;
      uStack_4d4 = 0x40400000;
      local_338 = 0x4040000000000003;
    }
    uVar4 = uVar4 + 1;
    std::vector<CustomWave,std::allocator<CustomWave>>::push_back
              ((vector<CustomWave,std::allocator<CustomWave>> *)avStack_658,(CustomWave *)local_3b0)
    ;
    std::vector<CustomWaveZombie,std::allocator<CustomWaveZombie>>::~vector
              ((vector<CustomWaveZombie,std::allocator<CustomWaveZombie>> *)avStack_570);
    CustomWave::~CustomWave((CustomWave *)local_3b0);
  } while (uVar4 != 6);
  std::vector<CustomWave,std::allocator<CustomWave>>::operator=(avStack_618,(vector *)avStack_658);
  CustomWaveData::operator=((CustomWaveData *)(in_x8 + 0x28),(CustomWaveData *)&local_628);
  CustomSeedBankData::CustomSeedBankData((CustomSeedBankData *)asStack_5c8);
  local_598 = 0;
  CustomSeedBankData::operator=
            ((CustomSeedBankData *)(in_x8 + 0x50),(CustomSeedBankData *)asStack_5c8);
  CustomChallenge::CustomChallenge((CustomChallenge *)local_3b0);
  std::string::append((string *)local_3b0,"[STARCHALLENGE_LASTSTAND_MINIGAME]",(size_t)__n);
  std::string::append((string *)avStack_3a8,"[STARCHALLENGE_LASTSTAND_MINIGAME_NAME]",(size_t)__n);
  CustomChallengeData::CustomChallengeData((CustomChallengeData *)&local_4d8);
  WeeklyGameModesCount::WeeklyGameModesCount((WeeklyGameModesCount *)&local_698);
  local_698 = 3;
  uStack_694 = 5000;
  uStack_4d4 = 5000;
  local_4d8 = 3;
  CustomChallengeMolds::CustomChallengeMolds(aCStack_640);
  std::
  vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
  ::operator=((vector<std::vector<unsigned_int,std::allocator<unsigned_int>>,std::allocator<std::vector<unsigned_int,std::allocator<unsigned_int>>>>
               *)aCStack_640,(vector *)&DAT_06aa7148);
  CustomChallengeMolds::operator=((CustomChallengeMolds *)&local_4d0,aCStack_640);
  CustomChallengeData::operator=(aCStack_3a0,(CustomChallengeData *)&local_4d8);
  CustomChallenge::operator=((CustomChallenge *)(in_x8 + 0xa8),(CustomChallenge *)local_3b0);
  CustomLevelElements::CustomLevelElements((CustomLevelElements *)avStack_570);
  std::string::string(asStack_668,"zombiepotion_poison");
  PlacementInfo::PlacementInfo(aPStack_600,5,0,1,asStack_668);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back(avStack_558,aPStack_600);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aPStack_600);
  std::string::~string(asStack_668);
  nop();
  std::string::string(asStack_668,"zombiepotion_invisible");
  PlacementInfo::PlacementInfo(aPStack_600,5,1,1,asStack_668);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back(avStack_558,aPStack_600);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aPStack_600);
  std::string::~string(asStack_668);
  nop();
  std::string::string(asStack_668,"zombiepotion_toughness");
  PlacementInfo::PlacementInfo(aPStack_600,5,2,2,asStack_668);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back(avStack_558,aPStack_600);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aPStack_600);
  std::string::~string(asStack_668);
  nop();
  std::string::string(asStack_668,"zombiepotion_speed");
  PlacementInfo::PlacementInfo(aPStack_600,5,3,1,asStack_668);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back(avStack_558,aPStack_600);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aPStack_600);
  std::string::~string(asStack_668);
  nop();
  std::string::string(asStack_668,"gravestone_dark");
  PlacementInfo::PlacementInfo(aPStack_600,5,4,2,asStack_668);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back(avStack_558,aPStack_600);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aPStack_600);
  std::string::~string(asStack_668);
  nop();
  std::string::string(asStack_668,"gravestone_heian");
  PlacementInfo::PlacementInfo(aPStack_600,5,5,3,asStack_668);
  std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back(avStack_558,aPStack_600);
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)aPStack_600);
  std::string::~string(asStack_668);
  nop();
  iVar2 = 6;
  do {
    iVar3 = 0;
    do {
      std::string::string(asStack_668,"gravestone_dark");
      iVar1 = iVar3 + 1;
      PlacementInfo::PlacementInfo(aPStack_600,iVar2,iVar3,1,asStack_668);
      std::vector<PlacementInfo,std::allocator<PlacementInfo>>::push_back(avStack_558,aPStack_600);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
                ((GridItemCardGameZombieActionData *)aPStack_600);
      std::string::~string(asStack_668);
      nop();
      iVar3 = iVar1;
    } while (iVar1 != 5);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 9);
  std::string::string(asStack_668,"railcart_cowboy");
  CustomRailInfo::CustomRailInfo((CustomRailInfo *)aPStack_600,asStack_668);
  std::string::~string(asStack_668);
  nop();
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_690,0,3);
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_688,1,1);
  std::vector<RailCartInfo,std::allocator<RailCartInfo>>::push_back
            (avStack_5f8,(RailCartInfo *)aUStack_690);
  std::vector<RailCartInfo,std::allocator<RailCartInfo>>::push_back
            (avStack_5f8,(RailCartInfo *)aUStack_688);
  SortedKern::SortedKern(aSStack_678,L'\0',L'\x04',2);
  SortedKern::SortedKern((SortedKern *)asStack_668,L'\x01',L'\x02',0);
  std::vector<RailInfo,std::allocator<RailInfo>>::push_back(avStack_5e0,(RailInfo *)aSStack_678);
  std::vector<RailInfo,std::allocator<RailInfo>>::push_back(avStack_5e0,(RailInfo *)asStack_668);
  CustomRailInfo::operator=(aCStack_528,(CustomRailInfo *)aPStack_600);
  CustomLevelElements::operator=
            ((CustomLevelElements *)(in_x8 + 0x1e0),(CustomLevelElements *)avStack_570);
  CustomLevelDataCreator::CreateLevelID();
  FUN_05474278(in_x8 + 8,asStack_680);
  std::string::~string(asStack_680);
  CustomRailInfo::~CustomRailInfo((CustomRailInfo *)aPStack_600);
  CustomLevelElements::~CustomLevelElements((CustomLevelElements *)avStack_570);
  CustomChallengeMolds::~CustomChallengeMolds(aCStack_640);
  CustomChallengeData::~CustomChallengeData((CustomChallengeData *)&local_4d8);
  CustomChallenge::~CustomChallenge((CustomChallenge *)local_3b0);
  CustomSeedBankData::~CustomSeedBankData((CustomSeedBankData *)asStack_5c8);
  std::vector<CustomWave,std::allocator<CustomWave>>::~vector
            ((vector<CustomWave,std::allocator<CustomWave>> *)avStack_658);
  CustomWaveData::~CustomWaveData((CustomWaveData *)&local_628);
  CustomLevelParams::~CustomLevelParams(aCStack_278);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::TestSaveLevelData() */

void __thiscall CustomLevelMgr::TestSaveLevelData(CustomLevelMgr *this)

{
  CustomLevelWorldParams aCStack_5b8 [728];
  CustomLevelWorldParams aCStack_2e0 [728];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TestConstructLevelData(this);
  CustomLevelWorldParams::CustomLevelWorldParams(aCStack_2e0,aCStack_5b8);
  CustomLevelDataCreator::Save((CustomLevelDataCreator *)(this + 0x30),aCStack_2e0);
  CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_2e0);
  CustomLevelWorldParams::~CustomLevelWorldParams(aCStack_5b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::ProcessDefaultWave(DefaultWave const&, int) */

void __thiscall
CustomLevelMgr::ProcessDefaultWave(CustomLevelMgr *this,DefaultWave *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  pair *ppVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50 [3];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  local_68 = FUN_03598a84(*(undefined8 *)(param_1 + 8));
  local_60[0] = FUN_03598ad4(*(undefined8 *)(param_1 + 0x10));
  while( true ) {
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_60);
    uVar10 = (uint)bVar3;
    if (!bVar3) break;
    ppVar4 = (pair *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    std::pair<std::string_const,int>::pair((pair<std::string_const,int> *)local_50,ppVar4);
    ProbabilitySet<DefaultWaveConfig>::AddItem
              ((ProbabilitySet<DefaultWaveConfig> *)aPStack_38,
               (pair<std::string_const,int> *)local_50,*(undefined4 *)(ppVar4 + 8));
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)local_50);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_68);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  do {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + 1;
      Sexy::Point::Point((Point *)local_60,uVar10,iVar8);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_50,(Point *)local_60);
      iVar8 = iVar1;
    } while (iVar1 != 3);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 5);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_50);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_50);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar5,uVar6);
  local_60[0] = CONCAT44(local_60[0]._4_4_,0xf);
  piVar7 = eastl::min_alt<int>((int *)param_1,(int *)local_60);
  iVar8 = *piVar7;
  lVar9 = 0;
  if (0 < iVar8) {
    do {
      ProbabilitySet<DefaultWaveConfig>::PickItem();
      lVar2 = lVar9 + 1;
      piVar7 = (int *)FUN_0358f508(local_50[0],lVar9);
      AddWaveZombie(this,param_2,(string *)local_60,*piVar7,piVar7[1],1);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)local_60);
      lVar9 = lVar2;
    } while ((int)lVar2 < iVar8);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_50);
  ProbabilitySet<DefaultWaveConfig>::~ProbabilitySet
            ((ProbabilitySet<DefaultWaveConfig> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::AddRandomZombies() */

void __thiscall CustomLevelMgr::AddRandomZombies(CustomLevelMgr *this)

{
  CustomLevelConfig *this_00;
  long lVar1;
  DefaultWave *pDVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  this_00 = (CustomLevelConfig *)getConfig();
  lVar1 = CustomLevelConfig::GetDefaultModuleConfigByWorld(this_00,(string *)(this + 0x78));
  uVar4 = 0;
  if (lVar1 != 0) {
    while( true ) {
      uVar5 = *(undefined8 *)(lVar1 + 0x48);
      uVar3 = FUN_0358f4f4(uVar5,*(undefined8 *)(lVar1 + 0x50));
      if (uVar3 <= uVar4) break;
      pDVar2 = (DefaultWave *)FUN_0358f500(uVar5,uVar4);
      ProcessDefaultWave(this,pDVar2,(int)uVar4);
      uVar4 = uVar4 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::FilterGroup(std::string const&, std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall CustomLevelMgr::FilterGroup(CustomLevelMgr *this,string *param_1,vector *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CustomLevelShopData *pCVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  string asStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_d0 [24];
  CustomLevelShopData aCStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
  pCVar5 = (CustomLevelShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CustomLevelShopData::CustomLevelShopData(aCStack_b8,pCVar5);
  CustomLevelShopData::GetConstraintValue((string *)aCStack_b8);
  uVar7 = *(undefined8 *)param_2;
  iVar4 = FUN_0358f44c(uVar7,*(undefined8 *)(param_2 + 8));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar8 = (long)(int)uVar1 + -1;
    lVar2 = lVar8;
    lVar10 = (long)(int)uVar1;
    while( true ) {
      lVar9 = lVar2;
      uVar7 = FUN_0358f458(uVar7,lVar10);
      FUN_05475d88(asStack_f8,uVar7);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_d0);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_d0);
      local_f0 = FUN_0359b9ec(uVar7,uVar6,asStack_f8);
      local_d8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(avStack_d0);
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_f0,(__normal_iterator *)&local_d8);
      if (bVar3) {
        local_e8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)param_2);
        local_e0 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_e8,lVar10);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_d8,(__normal_iterator *)&local_e0);
        std::vector<std::string,std::allocator<std::string>>::erase
                  ((vector<std::string,std::allocator<std::string>> *)param_2,local_d8);
        std::string::~string(asStack_f8);
      }
      else {
        std::string::~string(asStack_f8);
      }
      if (lVar9 == lVar8 - (ulong)uVar1) break;
      uVar7 = *(undefined8 *)param_2;
      lVar2 = lVar9 + -1;
      lVar10 = lVar9;
    }
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_d0);
  CustomLevelShopData::~CustomLevelShopData(aCStack_b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::IsValueValid(std::string const&, std::string const&) */

void __thiscall CustomLevelMgr::IsValueValid(CustomLevelMgr *this,string *param_1,string *param_2)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CustomLevelShopData *pCVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_e0;
  undefined8 local_d8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_d0 [24];
  CustomLevelShopData aCStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
  pCVar2 = (CustomLevelShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CustomLevelShopData::CustomLevelShopData(aCStack_b8,pCVar2);
  CustomLevelShopData::GetConstraintValue((string *)aCStack_b8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_d0);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_d0);
  local_e0 = FUN_0359bbc0(uVar3,uVar4,param_2);
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_d0);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_e0,(__normal_iterator *)&local_d8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_d0);
  CustomLevelShopData::~CustomLevelShopData(aCStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::IsValueValid(std::string const&, float, bool) */

void __thiscall
CustomLevelMgr::IsValueValid(CustomLevelMgr *this,string *param_1,float param_2,bool param_3)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CustomLevelShopData *pCVar2;
  float fVar3;
  CustomLevelShopData aCStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
  pCVar2 = (CustomLevelShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CustomLevelShopData::CustomLevelShopData(aCStack_b8,pCVar2);
  fVar3 = (float)CustomLevelShopData::GetConstraintValue(aCStack_b8,param_1,0.0);
  bVar1 = fVar3 <= param_2;
  if (!param_3) {
    bVar1 = param_2 <= fVar3;
  }
  CustomLevelShopData::~CustomLevelShopData(aCStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GetGroupValue(std::string const&) */

void __thiscall CustomLevelMgr::GetGroupValue(CustomLevelMgr *this,string *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CustomLevelShopData *pCVar1;
  undefined8 uVar2;
  CustomLevelShopData aCStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CustomLevelShopMgr>::GetInstancePtr();
  pCVar1 = (CustomLevelShopData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CustomLevelShopData::CustomLevelShopData(aCStack_b8,pCVar1);
  uVar2 = CustomLevelShopData::GetConstraintValue(aCStack_b8,param_1,0.0);
  CustomLevelShopData::~CustomLevelShopData(aCStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::GenerateTemplateAndStart(CustomLevelWorldParams const&, LevelSource) */

void __thiscall
CustomLevelMgr::GenerateTemplateAndStart(CustomLevelMgr *this,long param_1,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  TGALogMgr *this_00;
  string *__n;
  undefined4 local_220 [2];
  string asStack_218 [8];
  DString aDStack_210 [16];
  TGACustomLevelData aTStack_200 [56];
  string asStack_1c8 [40];
  undefined1 auStack_1a0 [40];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GenerateTemplate((CustomLevelWorldParams *)this);
  __n = asStack_218;
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06aa7218,asStack_218,0xffffffff,1,1,param_3);
  TGACustomLevelData::TGACustomLevelData(aTStack_200);
  DString::DString(aDStack_210,0xe);
  pcVar2 = (char *)DString::c_str(aDStack_210);
  std::string::append((string *)aTStack_200,pcVar2,(size_t)__n);
  DString::~DString(aDStack_210);
  DString::DString(aDStack_210,(string *)(param_1 + 8));
  pcVar2 = (char *)DString::c_str(aDStack_210);
  std::string::append(asStack_1c8,pcVar2,(size_t)__n);
  DString::~DString(aDStack_210);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  std::string::string((string *)aDStack_210,"");
  FUN_05462980(auStack_178,aDStack_210);
  std::string::~string((string *)aDStack_210);
  nop();
  if (*(char *)(param_1 + 0x278) == '\0') goto LAB_035b6c98;
  if (*(char *)(param_1 + 0x279) == '\0') {
    if (*(char *)(param_1 + 0x27a) != '\0') {
LAB_035b6d6c:
      local_220[0] = 0xc;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_220);
      FUN_0545ec84(auStack_168,aDStack_210);
      std::string::~string((string *)aDStack_210);
      goto LAB_035b6d94;
    }
    if (*(char *)(param_1 + 0x27b) == '\0') goto LAB_035b6c98;
  }
  else {
    local_220[0] = 0xd;
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_220);
    FUN_0545ec84(auStack_168,aDStack_210);
    std::string::~string((string *)aDStack_210);
    if (*(char *)(param_1 + 0x27a) != '\0') {
      FUN_054603b8(auStack_168,&DAT_05593348);
      goto LAB_035b6d6c;
    }
LAB_035b6d94:
    if (*(char *)(param_1 + 0x27b) == '\0') goto LAB_035b6c98;
    FUN_054603b8(auStack_168,&DAT_05593348);
  }
  local_220[0] = 0xb;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_220);
  FUN_0545ec84(auStack_168,aDStack_210);
  std::string::~string((string *)aDStack_210);
LAB_035b6c98:
  FUN_05462824(aDStack_210,auStack_178);
  FUN_05474278(auStack_1a0,aDStack_210);
  std::string::~string((string *)aDStack_210);
  uVar3 = FUN_0547429c(auStack_1a0);
  Sexy::OutputDebugStrF((wchar_t *)"TGACustomLevelData CustomLevelAPIContext::StartLevel %s",uVar3);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCustomLevel(this_00,aTStack_200);
  FUN_054617bc(auStack_178);
  TGACustomLevelData::~TGACustomLevelData(aTStack_200);
  std::string::~string(asStack_218);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::StartLoadedLevel() */

void __thiscall CustomLevelMgr::StartLoadedLevel(CustomLevelMgr *this)

{
  GenerateTemplateAndStart(this,this + 0x78,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::TestLevelTemplate() */

void __thiscall CustomLevelMgr::TestLevelTemplate(CustomLevelMgr *this)

{
  vector<CustomPreviewData,std::allocator<CustomPreviewData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LoadLevelDatas();
  std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::~vector(avStack_20);
  LoadLevelData(this,0);
  TestCreateUIData(this);
  SaveCurrentLevel(this);
  LoadLevelDatas();
  std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::~vector(avStack_20);
  LoadLevelData(this,0);
  StartLoadedLevel(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::OnDownloadedFinish(bool, bool) */

void __thiscall CustomLevelMgr::OnDownloadedFinish(CustomLevelMgr *this,bool param_1,bool param_2)

{
  int iVar1;
  vector<CustomPreviewData,std::allocator<CustomPreviewData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2) {
    if (!param_1) {
      GenerateTemplateAndStart(this,this + 0x350,10);
      goto LAB_035b6ec0;
    }
    LoadLevelDatas();
    std::vector<CustomPreviewData,std::allocator<CustomPreviewData>>::~vector(avStack_20);
    iVar1 = 2;
  }
  else {
    iVar1 = 3;
  }
  MessageRouter::Broadcast<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::CustomLevelNetworkResponseReceived,0xd,iVar1);
LAB_035b6ec0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::CreateNetworkLevelData(std::string, bool, bool) */

void __thiscall
CustomLevelMgr::CreateNetworkLevelData
          (CustomLevelMgr *this,string *param_2,bool param_3,bool param_4)

{
  char cVar1;
  int iVar2;
  uchar *__s;
  uchar *puVar3;
  ulong uVar4;
  string asStack_38 [8];
  ulong local_30;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_2);
  if (cVar1 == '\0') {
    base64_decode_url_safe(param_2);
    local_30 = 0x100000;
    AutoBuffer::AutoBuffer((AutoBuffer *)local_18,0x100000);
    __s = (uchar *)FUN_0358f254(local_18[0]);
    puVar3 = (uchar *)FUN_0547429c(asStack_38);
    uVar4 = FUN_05474178(asStack_38);
    iVar2 = gzdecompress(puVar3,uVar4,__s,&local_30);
    if (iVar2 == 0) {
      __s[local_30 + 1] = '\0';
      std::string::string(asStack_28,(char *)__s);
      nop();
      base64_decode_url_safe(asStack_28);
      cVar1 = SaveNetworkLevelData(this,asStack_20,param_3,param_4);
      if (cVar1 != '\0') {
        OnDownloadedFinish(this,param_3,true);
      }
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
    }
    else {
      OnDownloadedFinish(this,param_3,false);
      cVar1 = '\0';
    }
    AutoBuffer::~AutoBuffer((AutoBuffer *)local_18);
    std::string::~string(asStack_38);
  }
  else {
    cVar1 = '\0';
    OnDownloadedFinish(this,param_3,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestAuthorLevels(int) */

void __thiscall CustomLevelMgr::RequestAuthorLevels(CustomLevelMgr *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2448];
  string asStack_358 [848];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03592680(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_358,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestChangeDownloadable(bool) */

void __thiscall CustomLevelMgr::RequestChangeDownloadable(CustomLevelMgr *this,bool param_1)

{
  string *psVar1;
  char *pcVar2;
  string *this_00;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2432];
  string asStack_368 [864];
  long local_8;
  
  this[0x310] = (CustomLevelMgr)param_1;
  local_8 = ___stack_chk_guard;
  SaveCurrentLevel(this);
  if (*(int *)(this + 0x2f8) == 0) {
    MessageRouter::Broadcast<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelNetworkResponseReceived,0xc,2);
  }
  else {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    psVar1 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0x2f8));
    pcVar2 = (char *)DString::c_str(aDStack_ce8);
    std::string::append(psVar1,pcVar2,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    psVar1 = asStack_d40;
    std::string::string((string *)aDStack_ce8,"d");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,(string *)aDStack_ce8);
    if (this[0x310] == (CustomLevelMgr)0x0) {
      pcVar2 = "0";
    }
    else {
      pcVar2 = "1";
    }
    std::string::append(this_00,pcVar2,(size_t)psVar1);
    std::string::~string((string *)aDStack_ce8);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_035926dc(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_368,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestGetPlayCount() */

void __thiscall CustomLevelMgr::RequestGetPlayCount(CustomLevelMgr *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2416];
  string asStack_378 [880];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2f8) == 0) {
    *(undefined4 *)(this + 0x834) = 0;
    *(undefined4 *)(this + 0x838) = 0;
    MessageRouter::Broadcast<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelNetworkResponseReceived,0xb,2);
  }
  else {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0x2f8));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_03592738(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_378,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestUpdateLevelName(std::string const&) */

void CustomLevelMgr::RequestUpdateLevelName(string *param_1)

{
  string *this;
  char *__s;
  undefined8 uVar1;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2424];
  string asStack_370 [872];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 0x300);
  SaveCurrentLevel((CustomLevelMgr *)param_1);
  if (*(int *)(param_1 + 0x2f8) == 0) {
    MessageRouter::Broadcast<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelNetworkResponseReceived,10,2);
  }
  else {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    this = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(param_1 + 0x2f8));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string((string *)aDStack_ce8,"n");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,(string *)aDStack_ce8);
    thunk_FUN_05475e00(uVar1,param_1 + 0x300);
    std::string::~string((string *)aDStack_ce8);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_03592794(afStack_d38,param_1);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_370,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestUpdateFavourite(bool) */

void __thiscall CustomLevelMgr::RequestUpdateFavourite(CustomLevelMgr *this,bool param_1)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  char *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2400];
  string asStack_388 [896];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x70c));
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"op");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  if (param_1) {
    pcVar2 = "1";
  }
  else {
    pcVar2 = "0";
  }
  __n_00 = "phone";
  DString::DString(aDStack_ce8,pcVar2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_035927f0(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_388,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestStartLevel() */

void __thiscall CustomLevelMgr::RequestStartLevel(CustomLevelMgr *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2440];
  string asStack_360 [856];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x70c));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_0359284c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_360,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestPerformLikeDislike(bool) */

void __thiscall CustomLevelMgr::RequestPerformLikeDislike(CustomLevelMgr *this,bool param_1)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2352];
  string asStack_3b8 [944];
  long local_8;
  
  __n_00 = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"id");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x70c));
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"t");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  if (param_1) {
    pcVar2 = "1";
  }
  else {
    pcVar2 = "2";
  }
  DString::DString(aDStack_ce8,pcVar2);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_035928a8(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_3b8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestGetSearchPreviewList(int, std::vector<CustomLevelNetworkWorldType,
   std::allocator<CustomLevelNetworkWorldType> >, std::vector<CustomLevelNetworkLevelMode,
   std::allocator<CustomLevelNetworkLevelMode> >) */

void __thiscall
CustomLevelMgr::RequestGetSearchPreviewList
          (CustomLevelMgr *this,int param_1,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_ec8 [8];
  string asStack_ec0 [8];
  string asStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [2376];
  string asStack_3a0 [920];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  std::string::string(asStack_ec0,"");
  nop();
  std::string::string(asStack_eb8,"");
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  uVar6 = *param_3;
  lVar2 = FUN_0358f424(uVar6,param_3[1]);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_0358f430(uVar6,uVar5);
      FUN_0546065c(auStack_e48,*puVar3);
      FUN_05462824(asStack_ce8,auStack_e58);
      thunk_FUN_054757c0(asStack_ec0,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::string(asStack_ce8,"");
      FUN_05462980(auStack_e58,asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      uVar6 = *param_3;
      uVar4 = FUN_0358f424(uVar6,param_3[1]);
      if (uVar5 < uVar4 - 1) {
        FUN_05475ad8(asStack_ec0,&DAT_05593348);
        uVar6 = *param_3;
        uVar4 = FUN_0358f424(uVar6,param_3[1]);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar6 = *param_4;
  uVar5 = 0;
  lVar2 = FUN_0358f438(uVar6,param_4[1]);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_0358f444(uVar6,uVar5);
      FUN_0546065c(auStack_e48,*puVar3);
      FUN_05462824(asStack_ce8,auStack_e58);
      thunk_FUN_054757c0(asStack_eb8,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::string(asStack_ce8,"");
      FUN_05462980(auStack_e58,asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      uVar6 = *param_4;
      uVar4 = FUN_0358f438(uVar6,param_4[1]);
      if (uVar5 < uVar4 - 1) {
        FUN_05475ad8(asStack_eb8,&DAT_05593348);
        uVar6 = *param_4;
        uVar4 = FUN_0358f438(uVar6,param_4[1]);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  __n = auStack_ec8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  std::string::string(asStack_eb0,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_e88,asStack_eb0);
  DString::DString((DString *)asStack_ce8,param_1);
  __s = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_ce8,"w");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_ce8);
  thunk_FUN_05475e00(uVar6,asStack_ec0);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"pk");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_ce8);
  thunk_FUN_05475e00(uVar6,asStack_eb8);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03592904(afStack_ea8,this);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_3a0,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  FUN_054617bc(auStack_e58);
  std::string::~string(asStack_eb8);
  std::string::~string(asStack_ec0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestGetViewPreviewList(std::vector<CustomLevelNetworkWorldType,
   std::allocator<CustomLevelNetworkWorldType> >, std::vector<CustomLevelNetworkLevelMode,
   std::allocator<CustomLevelNetworkLevelMode> >, ViewLevelType, ViewRankType, int, int, bool) */

void __thiscall
CustomLevelMgr::RequestGetViewPreviewList
          (CustomLevelMgr *this,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
          int param_6,int param_7,char param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  string *psVar5;
  char *pcVar6;
  string *this_00;
  DNetwork *this_01;
  undefined1 *puVar7;
  undefined1 *__n;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_ec8 [8];
  string asStack_ec0 [8];
  string asStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [2360];
  string asStack_3b0 [936];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_ec0,"");
  uVar9 = 0;
  nop();
  std::string::string(asStack_eb8,"");
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  uVar8 = *param_2;
  lVar2 = FUN_0358f424(uVar8,param_2[1]);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_0358f430(uVar8,uVar9);
      FUN_0546065c(auStack_e48,*puVar3);
      FUN_05462824(asStack_ce8,auStack_e58);
      thunk_FUN_054757c0(asStack_ec0,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::string(asStack_ce8,"");
      FUN_05462980(auStack_e58,asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      uVar8 = *param_2;
      uVar4 = FUN_0358f424(uVar8,param_2[1]);
      if (uVar9 < uVar4 - 1) {
        FUN_05475ad8(asStack_ec0,&DAT_05593348);
        uVar8 = *param_2;
        uVar4 = FUN_0358f424(uVar8,param_2[1]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  uVar8 = *param_3;
  uVar9 = 0;
  lVar2 = FUN_0358f438(uVar8,param_3[1]);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined4 *)FUN_0358f444(uVar8,uVar9);
      FUN_0546065c(auStack_e48,*puVar3);
      FUN_05462824(asStack_ce8,auStack_e58);
      thunk_FUN_054757c0(asStack_eb8,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::string(asStack_ce8,"");
      FUN_05462980(auStack_e58,asStack_ce8);
      std::string::~string(asStack_ce8);
      nop();
      uVar8 = *param_3;
      uVar4 = FUN_0358f438(uVar8,param_3[1]);
      if (uVar9 < uVar4 - 1) {
        FUN_05475ad8(asStack_eb8,&DAT_05593348);
        uVar8 = *param_3;
        uVar4 = FUN_0358f438(uVar8,param_3[1]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  __n = auStack_ec8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  puVar7 = __n;
  std::string::string(asStack_eb0,"t");
  psVar5 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_e88,asStack_eb0);
  DString::DString((DString *)asStack_ce8,param_4);
  pcVar6 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar5,pcVar6,(size_t)puVar7);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  puVar7 = __n;
  std::string::string(asStack_eb0,"k");
  psVar5 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_e88,asStack_eb0);
  DString::DString((DString *)asStack_ce8,param_5);
  pcVar6 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar5,pcVar6,(size_t)puVar7);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_ce8,"w");
  uVar8 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_ce8);
  thunk_FUN_05475e00(uVar8,asStack_ec0);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"pk");
  uVar8 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_ce8);
  thunk_FUN_05475e00(uVar8,asStack_eb8);
  std::string::~string(asStack_ce8);
  nop();
  puVar7 = __n;
  std::string::string(asStack_eb0,"s");
  psVar5 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_e88,asStack_eb0);
  DString::DString((DString *)asStack_ce8,param_6);
  pcVar6 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar5,pcVar6,(size_t)puVar7);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"c");
  psVar5 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_e88,asStack_eb0);
  DString::DString((DString *)asStack_ce8,param_7);
  pcVar6 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar5,pcVar6,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  psVar5 = asStack_eb0;
  std::string::string(asStack_ce8,"f");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_e88,asStack_ce8);
  if (param_8 == '\0') {
    pcVar6 = "0";
  }
  else {
    pcVar6 = "1";
  }
  std::string::append(this_00,pcVar6,(size_t)psVar5);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03592960(afStack_ea8,this);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_3b0,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  FUN_054617bc(auStack_e58);
  std::string::~string(asStack_eb8);
  std::string::~string(asStack_ec0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestGetFilterPreviewList(int, int) */

void __thiscall
CustomLevelMgr::RequestGetFilterPreviewList(CustomLevelMgr *this,int param_1,int param_2)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2368];
  string asStack_3a8 [928];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x8a0] == (CustomLevelMgr)0x0) {
    __n_00 = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    __n = __n_00;
    std::string::string(asStack_d40,"s");
    psVar1 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,param_1);
    pcVar2 = (char *)DString::c_str(aDStack_ce8);
    std::string::append(psVar1,pcVar2,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"c");
    psVar1 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,param_2);
    pcVar2 = (char *)DString::c_str(aDStack_ce8);
    std::string::append(psVar1,pcVar2,(size_t)__n_00);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_035929bc(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_00,asStack_3a8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  else {
    MessageRouter::Broadcast<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelNetworkResponseReceived,0xe,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestGetNetworkLevelDetails(int) */

void __thiscall CustomLevelMgr::RequestGetNetworkLevelDetails(CustomLevelMgr *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2384];
  string asStack_398 [912];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03592a18(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_398,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestDeleteLevelData() */

void __thiscall CustomLevelMgr::RequestDeleteLevelData(CustomLevelMgr *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2392];
  string asStack_390 [904];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x2f8) == 0) {
    CustomLevelDataCreator::DeleteLevelData
              ((CustomLevelDataCreator *)(this + 0x30),(CustomLevelWorldParams *)(this + 0x78));
    MessageRouter::Broadcast<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::CustomLevelNetworkResponseReceived,2,2);
  }
  else {
    __n = auStack_d48;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_d40,"id");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
    DString::DString(aDStack_ce8,*(int *)(this + 0x2f8));
    __s = (char *)DString::c_str(aDStack_ce8);
    std::string::append(this_00,__s,(size_t)__n);
    DString::~DString(aDStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_03592a74(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_390,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelMgr::RequestUploadLevelData(CustomLevelWorldParams const&) */

void __thiscall
CustomLevelMgr::RequestUploadLevelData(CustomLevelMgr *this,CustomLevelWorldParams *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  uchar *puVar6;
  ulong uVar7;
  string *psVar8;
  char *pcVar9;
  undefined8 uVar10;
  string *this_00;
  DNetwork *this_01;
  long lVar11;
  float fVar12;
  string asStack_e00 [8];
  string asStack_df8 [8];
  ulong local_df0;
  string asStack_de8 [8];
  string asStack_de0 [8];
  string asStack_dd8 [8];
  undefined8 local_dd0 [2];
  function<bool(Sexy::Touch_const&)> afStack_dc0 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_da0 [48];
  SHA256Context aSStack_d70 [104];
  DString aDStack_d08 [2336];
  string asStack_3e8 [960];
  byte local_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ConstructNetworkLevelData((CustomLevelWorldParams *)this);
  Sexy::SHA256Init(aSStack_d70);
  puVar5 = (uchar *)FUN_054742a4(asStack_e00);
  uVar3 = FUN_05474184(asStack_e00);
  Sexy::SHA256Update(aSStack_d70,puVar5,uVar3);
  Sexy::SHA256Final(aSStack_d70,local_28);
  lVar11 = 0;
  pcVar9 = &DAT_06aa72b0;
  do {
    bVar1 = local_28[lVar11];
    lVar11 = lVar11 + 1;
    cVar2 = "0123456789abcdef"[(ulong)bVar1 & 0xf];
    *pcVar9 = "0123456789abcdef"[(int)(uint)(bVar1 >> 4)];
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (lVar11 != 0x20);
  DAT_06aa72f0 = 0;
  std::string::string(asStack_df8,&DAT_06aa72b0);
  nop();
  local_df0 = 0x1400;
  AutoBuffer::AutoBuffer((AutoBuffer *)local_dd0,0x1400);
  puVar5 = (uchar *)FUN_0358f254(local_dd0[0]);
  puVar6 = (uchar *)FUN_0547429c(asStack_e00);
  uVar3 = FUN_05474178(asStack_e00);
  base64_url_safe(puVar6,uVar3);
  puVar6 = (uchar *)FUN_0547429c(asStack_de8);
  uVar7 = FUN_05474178(asStack_de8);
  iVar4 = gzcompress(puVar6,uVar7,puVar5,&local_df0);
  if (iVar4 == 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_da0);
    std::string::string(asStack_dd8,"id");
    psVar8 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,asStack_dd8);
    DString::DString(aDStack_d08,*(int *)(param_1 + 0x280));
    pcVar9 = (char *)DString::c_str(aDStack_d08);
    std::string::append(psVar8,pcVar9,(size_t)psVar8);
    DString::~DString(aDStack_d08);
    std::string::~string(asStack_dd8);
    nop();
    std::string::string((string *)aDStack_d08,"n");
    uVar10 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,(string *)aDStack_d08);
    thunk_FUN_05475e00(uVar10,param_1 + 0x288);
    std::string::~string((string *)aDStack_d08);
    nop();
    std::string::string(asStack_dd8,"w");
    psVar8 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,asStack_dd8);
    DString::DString(aDStack_d08,*(int *)(param_1 + 0x290));
    pcVar9 = (char *)DString::c_str(aDStack_d08);
    std::string::append(psVar8,pcVar9,(size_t)psVar8);
    DString::~DString(aDStack_d08);
    std::string::~string(asStack_dd8);
    nop();
    std::string::string(asStack_dd8,"pk");
    psVar8 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,asStack_dd8);
    DString::DString(aDStack_d08,*(int *)(param_1 + 0x294));
    pcVar9 = (char *)DString::c_str(aDStack_d08);
    std::string::append(psVar8,pcVar9,(size_t)psVar8);
    DString::~DString(aDStack_d08);
    std::string::~string(asStack_dd8);
    nop();
    psVar8 = asStack_dd8;
    std::string::string((string *)aDStack_d08,"dl");
    this_00 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_da0,(string *)aDStack_d08);
    if (param_1[0x298] == (CustomLevelWorldParams)0x0) {
      pcVar9 = "0";
    }
    else {
      pcVar9 = "1";
    }
    std::string::append(this_00,pcVar9,(size_t)psVar8);
    std::string::~string((string *)aDStack_d08);
    nop();
    base64_url_safe(puVar5,(uint)local_df0);
    std::string::string((string *)aDStack_d08,"lvd");
    uVar10 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,(string *)aDStack_d08);
    thunk_FUN_05475e00(uVar10,asStack_de0);
    std::string::~string((string *)aDStack_d08);
    nop();
    std::string::string((string *)aDStack_d08,"checksum");
    uVar10 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,(string *)aDStack_d08);
    thunk_FUN_05475e00(uVar10,asStack_df8);
    std::string::~string((string *)aDStack_d08);
    nop();
    std::string::string((string *)aDStack_d08,"ci");
    uVar10 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,(string *)aDStack_d08);
    thunk_FUN_05475e00(uVar10,param_1 + 8);
    std::string::~string((string *)aDStack_d08);
    nop();
    fVar12 = *(float *)(param_1 + 0x2d0);
    std::string::string(asStack_dd8,"s");
    psVar8 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)amStack_da0,asStack_dd8);
    DString::DString(aDStack_d08,(int)fVar12);
    pcVar9 = (char *)DString::c_str(aDStack_d08);
    std::string::append(psVar8,pcVar9,(size_t)psVar8);
    DString::~DString(aDStack_d08);
    std::string::~string(asStack_dd8);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_d08);
    FUN_03592ad0(afStack_dc0,this);
    std::string::string(asStack_dd8,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_3e8,(map *)amStack_da0,30.0,(function *)afStack_dc0,true,true,
               asStack_dd8,0);
    std::string::~string(asStack_dd8);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_dc0);
    _PacketId::~_PacketId((_PacketId *)aDStack_d08);
    std::string::~string(asStack_de0);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_da0);
  }
  std::string::~string(asStack_de8);
  AutoBuffer::~AutoBuffer((AutoBuffer *)local_dd0);
  std::string::~string(asStack_df8);
  std::string::~string(asStack_e00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelMgr::UploadCurrentLevelData() */

void __thiscall CustomLevelMgr::UploadCurrentLevelData(CustomLevelMgr *this)

{
  RequestUploadLevelData(this,(CustomLevelWorldParams *)(this + 0x78));
  return;
}


/* CustomLevelMgr::GetNetworkLevelDetails() */

CustomLevelMgr * __thiscall CustomLevelMgr::GetNetworkLevelDetails(CustomLevelMgr *this)

{
  return this + 0x6f8;
}


/* CustomLevelMgr::SetTutorialDownloadURL(std::string const&) */

void CustomLevelMgr::SetTutorialDownloadURL(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x860);
  return;
}


/* CustomLevelMgr::GetLogData() */

CustomLevelMgr * __thiscall CustomLevelMgr::GetLogData(CustomLevelMgr *this)

{
  return this + 0x9b8;
}


/* CustomLevelMgr::SetLogData(TGACustomLevelData const&) */

void __thiscall CustomLevelMgr::SetLogData(CustomLevelMgr *this,TGACustomLevelData *param_1)

{
  TGACustomLevelData::operator=((TGACustomLevelData *)(this + 0x9b8),param_1);
  return;
}


/* CustomLevelMgr::GetNetworkPreviewListData() */

CustomLevelMgr * __thiscall CustomLevelMgr::GetNetworkPreviewListData(CustomLevelMgr *this)

{
  return this + 0x7c8;
}


/* CustomLevelMgr::GetNetworkLikeDislikeData() */

CustomLevelMgr * __thiscall CustomLevelMgr::GetNetworkLikeDislikeData(CustomLevelMgr *this)

{
  return this + 0x800;
}


/* CustomLevelMgr::GetNetworkUploadedListData() */

CustomLevelMgr * __thiscall CustomLevelMgr::GetNetworkUploadedListData(CustomLevelMgr *this)

{
  return this + 0x868;
}


/* CustomLevelMgr::SetCurrentSelfDownloadData(CustomNetworkPreviewData const&) */

void __thiscall
CustomLevelMgr::SetCurrentSelfDownloadData(CustomLevelMgr *this,CustomNetworkPreviewData *param_1)

{
  CustomNetworkPreviewData::operator=((CustomNetworkPreviewData *)(this + 0x8a8),param_1);
  return;
}


/* CustomLevelMgr::GetServerPlantBanList() const */

CustomLevelMgr * __thiscall CustomLevelMgr::GetServerPlantBanList(CustomLevelMgr *this)

{
  return this + 0x968;
}

