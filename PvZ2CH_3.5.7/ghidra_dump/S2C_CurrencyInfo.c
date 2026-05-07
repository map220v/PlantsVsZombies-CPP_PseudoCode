// Class: S2C_CurrencyInfo


/* S2C_CurrencyInfo::S2C_CurrencyInfo() */

void __thiscall S2C_CurrencyInfo::S2C_CurrencyInfo(S2C_CurrencyInfo *this)

{
  *(undefined4 *)this = 0xffffffff;
  this[4] = (S2C_CurrencyInfo)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  this[0xc] = (S2C_CurrencyInfo)0x0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_CurrencyInfo::~S2C_CurrencyInfo() */

void __thiscall S2C_CurrencyInfo::~S2C_CurrencyInfo(S2C_CurrencyInfo *this)

{
  std::vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>>::~vector
            ((vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>> *)(this + 0x18));
  return;
}


/* S2C_CurrencyInfo::S2C_CurrencyInfo(S2C_CurrencyInfo&&) */

void __thiscall S2C_CurrencyInfo::S2C_CurrencyInfo(S2C_CurrencyInfo *this,S2C_CurrencyInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  S2C_CurrencyInfo SVar4;
  S2C_CurrencyInfo SVar5;
  
  uVar1 = *(undefined4 *)param_1;
  SVar4 = param_1[4];
  uVar2 = *(undefined4 *)(param_1 + 8);
  SVar5 = param_1[0xc];
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  this[4] = SVar4;
  *(undefined4 *)(this + 8) = uVar2;
  this[0xc] = SVar5;
  *(undefined4 *)(this + 0x10) = uVar3;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


/* S2C_CurrencyInfo::S2C_CurrencyInfo(S2C_CurrencyInfo const&) */

void __thiscall S2C_CurrencyInfo::S2C_CurrencyInfo(S2C_CurrencyInfo *this,S2C_CurrencyInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  S2C_CurrencyInfo SVar4;
  S2C_CurrencyInfo SVar5;
  
  uVar1 = *(undefined4 *)param_1;
  SVar4 = param_1[4];
  uVar2 = *(undefined4 *)(param_1 + 8);
  SVar5 = param_1[0xc];
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  this[4] = SVar4;
  *(undefined4 *)(this + 8) = uVar2;
  this[0xc] = SVar5;
  *(undefined4 *)(this + 0x10) = uVar3;
  std::vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>>::vector
            ((vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}


/* S2C_CurrencyInfo::TEMPNAMEPLACEHOLDERVALUE(S2C_CurrencyInfo const&) */

S2C_CurrencyInfo * __thiscall
S2C_CurrencyInfo::operator=(S2C_CurrencyInfo *this,S2C_CurrencyInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  S2C_CurrencyInfo SVar4;
  S2C_CurrencyInfo SVar5;
  
  uVar1 = *(undefined4 *)param_1;
  SVar4 = param_1[4];
  uVar2 = *(undefined4 *)(param_1 + 8);
  SVar5 = param_1[0xc];
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  this[4] = SVar4;
  *(undefined4 *)(this + 8) = uVar2;
  this[0xc] = SVar5;
  *(undefined4 *)(this + 0x10) = uVar3;
  std::vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>>::operator=
            ((vector<S2C_ItemInfo,std::allocator<S2C_ItemInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_CurrencyInfo::SetToPlayerInfo() */

void __thiscall S2C_CurrencyInfo::SetToPlayerInfo(S2C_CurrencyInfo *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVPManager *pPVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_38 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this[4] != (S2C_CurrencyInfo)0x0) {
    local_38[0] = 0;
    piVar3 = eastl::max_alt<int>((int *)this,local_38);
    PlayerInfo::SetGems(this_01,*piVar3);
    this[4] = (S2C_CurrencyInfo)0x0;
  }
  if (this[0xc] != (S2C_CurrencyInfo)0x0) {
    iVar1 = *(int *)(this + 8);
    if (iVar1 < 0) {
      PlayerInfo::SubtractCoins(this_01,-iVar1);
      this[0xc] = (S2C_CurrencyInfo)0x0;
    }
    else {
      PlayerInfo::AddCoins(this_01,iVar1);
      this[0xc] = (S2C_CurrencyInfo)0x0;
    }
  }
  if (-1 < *(int *)(this + 0x10)) {
    pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::SetPVPCoin(pPVar2,*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0xffffffff;
  }
  if (-1 < *(int *)(this + 0x14)) {
    pPVar2 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    PVPManager::SetPVPMedal(pPVar2,*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0xffffffff;
  }
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x18);
    uVar4 = FUN_04ac8cac(uVar6,*(undefined8 *)(this + 0x20));
    if (uVar4 <= uVar5) break;
    piVar3 = (int *)FUN_04ac8cb8(uVar6,uVar5);
    ProfileChangeItemAmount(*piVar3,piVar3[1],false);
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

