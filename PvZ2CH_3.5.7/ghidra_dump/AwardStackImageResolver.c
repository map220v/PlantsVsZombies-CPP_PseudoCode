// Class: AwardStackImageResolver


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetPinataResourceName(std::string const&) */

void AwardStackImageResolver::GetPinataResourceName(string *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06ab4980 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ab4980), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ab4988,"IMAGE_UI_QUESTS_EPIC_REWARD_PINATA");
    __cxa_guard_release(&DAT_06ab4980);
    __cxa_atexit(std::string::~string,&DAT_06ab4988,&DAT_06a88000);
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ab4988);
}


/* AwardStackImageResolver::GetPinataImage(std::string const&) */

void __thiscall
AwardStackImageResolver::GetPinataImage(AwardStackImageResolver *this,string *param_1)

{
  string *psVar1;
  
  psVar1 = gLawnApp;
  GetPinataResourceName((string *)this);
  LawnApp::GetUIImageFromStringId(psVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHChestImage() */

void __thiscall AwardStackImageResolver::GetCHChestImage(AwardStackImageResolver *this)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  psVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"IMAGE_UI_FRAGMENT_CHEST_CHEST");
  LawnApp::GetUIImageFromStringId(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetPinataGemsImageForTier(int) */

void __thiscall
AwardStackImageResolver::GetPinataGemsImageForTier(AwardStackImageResolver *this,int param_1)

{
  string *psVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  psVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if ((int)this == 3) {
    __s = "IMAGE_UI_GEMS_STACK_2";
  }
  else if ((int)this == 2) {
    __s = "IMAGE_UI_GEMS_STACK_1";
  }
  else {
    __s = "IMAGE_UI_HUD_INGAME_GEM";
  }
  std::string::string(asStack_10,__s);
  LawnApp::GetUIImageFromStringId(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetPowerupResourceName(std::string const&) */

void AwardStackImageResolver::GetPowerupResourceName(string *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  
  lVar1 = ___stack_chk_guard;
  if (((DAT_06ab48e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ab48e8), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ab4900,"IMAGE_UI_POWERUPS_POWER_SHOCK");
    __cxa_guard_release(&DAT_06ab48e8);
    __cxa_atexit(std::string::~string,&DAT_06ab4900,&DAT_06a88000);
    nop();
  }
  if (((DAT_06ab4940 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ab4940), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ab48f0,"IMAGE_UI_POWERUPS_POWER_SWEEP");
    __cxa_guard_release(&DAT_06ab4940);
    __cxa_atexit(std::string::~string,&DAT_06ab48f0,&DAT_06a88000);
    nop();
  }
  if (((DAT_06ab4908 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ab4908), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ab4948,"IMAGE_UI_POWERUPS_POWER_ICE");
    __cxa_guard_release(&DAT_06ab4908);
    __cxa_atexit(std::string::~string,&DAT_06ab4948,&DAT_06a88000);
    nop();
  }
  if (((DAT_06ab4928 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ab4928), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ab4910,"IMAGE_UI_POWERUPS_POWER_FLAMETHROWER");
    __cxa_guard_release(&DAT_06ab4928);
    __cxa_atexit(std::string::~string,&DAT_06ab4910,&DAT_06a88000);
    nop();
  }
  bVar2 = std::operator==(param_1,"powerupwizardfinger");
  if (bVar2) {
    puVar4 = &DAT_06ab4900;
  }
  else {
    bVar2 = std::operator==(param_1,"powerupflickzombie");
    if (bVar2) {
      puVar4 = &DAT_06ab48f0;
    }
    else {
      bVar2 = std::operator==(param_1,"powerupsnowball");
      if (bVar2) {
        puVar4 = &DAT_06ab4948;
      }
      else {
        puVar4 = &DAT_06ab4910;
      }
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* AwardStackImageResolver::GetPowerupImage(std::string const&) */

void __thiscall
AwardStackImageResolver::GetPowerupImage(AwardStackImageResolver *this,string *param_1)

{
  string *psVar1;
  
  psVar1 = gLawnApp;
  GetPowerupResourceName((string *)this);
  LawnApp::GetUIImageFromStringId(psVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHMaterialImage(int, int) */

void AwardStackImageResolver::GetCHMaterialImage(int param_1,int param_2)

{
  int iVar1;
  string *extraout_x1;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = MaterialItemMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  Sexy::StringToUpper(aSStack_20,extraout_x1);
  std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",asStack_10);
  std::string::~string(asStack_10);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  std::string::~string(asStack_18);
  std::string::~string((string *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHPlantImage(int) */

void AwardStackImageResolver::GetCHPlantImage(int param_1)

{
  string *psVar1;
  int iVar2;
  Sexy aSStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  psVar1 = gLawnApp;
  Sexy::StringToUpper(aSStack_20,(string *)&gLawnApp);
  std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_18);
  LawnApp::GetUIImageFromStringId(psVar1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string((string *)aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHAvatarImage(int) */

void AwardStackImageResolver::GetCHAvatarImage(int param_1)

{
  string *psVar1;
  char cVar2;
  int iVar3;
  string *extraout_x1;
  string *extraout_x1_00;
  RtMixedPtr<Sexy::Image> *in_x8;
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = AvatarNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  psVar1 = gLawnApp;
  Sexy::StringToUpper(aSStack_28,extraout_x1);
  std::operator+((string *)&PlantHeadshot::AvatarBigPrefix,asStack_18);
  LawnApp::GetUIImageFromStringId(psVar1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(in_x8);
  psVar1 = gLawnApp;
  if (cVar2 != '\0') {
    Sexy::StringToUpper(aSStack_28,extraout_x1_00);
    std::operator+((string *)&PlantHeadshot::UpdateAvatarBigPrefix,asStack_20);
    LawnApp::GetUIImageFromStringId(psVar1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
  }
  std::string::~string((string *)aSStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHAccessoryImage(int) */

void AwardStackImageResolver::GetCHAccessoryImage(int param_1)

{
  bool bVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"");
  nop();
  iVar2 = PlantAccessoryInfoMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  psVar3 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryByType(psVar3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    thunk_FUN_05475e00(asStack_20,lVar4 + 0x28);
  }
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCoinsResourceName(int) */

void AwardStackImageResolver::GetCoinsResourceName(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageCoins");
  uVar1 = getStackImageName(asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCoinsPrizeResourceName(int) */

void AwardStackImageResolver::GetCoinsPrizeResourceName(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageCoinsPrize");
  uVar1 = getStackImageName(asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetGemsResourceName(int) */

void AwardStackImageResolver::GetGemsResourceName(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageGems");
  uVar1 = getStackImageName(asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetTicketsResourceName(int) */

void AwardStackImageResolver::GetTicketsResourceName(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageTickets");
  uVar1 = getStackImageName(asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetSproutsResourceName(int) */

void AwardStackImageResolver::GetSproutsResourceName(int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageSprouts");
  uVar1 = getStackImageName(asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* AwardStackImageResolver::GetCurrencyResourceNameFor(AwardEntry const&) */

void AwardStackImageResolver::GetCurrencyResourceNameFor(AwardEntry *param_1)

{
  switch(*(undefined4 *)param_1) {
  case 4:
    GetPowerupResourceName((string *)(param_1 + 8));
    return;
  default:
    GetCoinsResourceName(*(int *)(param_1 + 0x10));
    return;
  case 0xc:
    GetGemsResourceName(*(int *)(param_1 + 0x10));
    return;
  case 0x14:
    GetSproutsResourceName(*(int *)(param_1 + 0x10));
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCoinsImage(int) */

void __thiscall AwardStackImageResolver::GetCoinsImage(AwardStackImageResolver *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageCoins");
  getStackImage(asStack_10,(ulong)this & 0xffffffff);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHCoinsImage(int) */

void __thiscall AwardStackImageResolver::GetCHCoinsImage(AwardStackImageResolver *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageCoinsPrize");
  getStackImage(asStack_10,(ulong)this & 0xffffffff);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHGemsImage(int) */

void __thiscall AwardStackImageResolver::GetCHGemsImage(AwardStackImageResolver *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageGems");
  getStackImage(asStack_10,(ulong)this & 0xffffffff);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetTicketsImage(int) */

void __thiscall AwardStackImageResolver::GetTicketsImage(AwardStackImageResolver *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageTickets");
  getStackImage(asStack_10,(ulong)this & 0xffffffff);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetSproutsImage(int) */

void __thiscall AwardStackImageResolver::GetSproutsImage(AwardStackImageResolver *this,int param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"StackImageSprouts");
  getStackImage(asStack_10,(ulong)this & 0xffffffff);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardStackImageResolver::GetCHAccessoryChipImage(int) */

void AwardStackImageResolver::GetCHAccessoryChipImage(int param_1)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"");
  nop();
  iVar2 = PlantAccessoryPieceMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  std::operator+(asStack_20,"_piece");
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    thunk_FUN_05475e00(asStack_28,lVar4 + 0x60);
  }
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AwardStackImageResolver::GetCurrencyImageFor(AwardEntry const&) */

void __thiscall
AwardStackImageResolver::GetCurrencyImageFor(AwardStackImageResolver *this,AwardEntry *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)this - 4;
  uVar2 = uVar1;
  if (uVar1 < 0x23) {
    uVar2 = 0x385b550;
    switch(uVar1) {
    case 0:
      GetPowerupImage(this + 8,(string *)0x385b550);
      break;
    default:
      goto switchD_0385b54c_caseD_5;
    case 7:
    case 0x1f:
      GetCHCoinsImage((AwardStackImageResolver *)(ulong)*(uint *)(this + 0x10),0x385b550);
      return;
    case 8:
    case 0x1e:
      GetCHGemsImage((AwardStackImageResolver *)(ulong)*(uint *)(this + 0x10),0x385b550);
      return;
    case 0x10:
      GetSproutsImage((AwardStackImageResolver *)(ulong)*(uint *)(this + 0x10),0x385b550);
      break;
    case 0x18:
      GetCHPlantImage(*(int *)(this + 0x14));
      break;
    case 0x1a:
      GetCHAvatarImage(*(int *)(this + 0x14));
      break;
    case 0x1c:
      GetCHAccessoryImage(*(int *)(this + 0x14));
      break;
    case 0x1d:
      GetCHAccessoryChipImage(*(int *)(this + 0x14));
      break;
    case 0x21:
      GetCHMaterialImage(*(int *)(this + 0x14),*(int *)(this + 0x10));
      break;
    case 0x22:
      GetCHChestImage((AwardStackImageResolver *)
                      ((long)(char)(&switchD_0385b54c::switchdataD_05751b6c)[uVar1] * 4 + 0x385b550)
                     );
    }
  }
  else {
switchD_0385b54c_caseD_5:
    GetCoinsImage((AwardStackImageResolver *)(ulong)*(uint *)(this + 0x10),uVar2);
  }
  return;
}

