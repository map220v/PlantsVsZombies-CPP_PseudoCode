// Class: GameInfoUtil


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInfoUtil::GetRareByAccessaryName(std::string, int&) */

void GameInfoUtil::GetRareByAccessaryName(string *param_1,int *param_2)

{
  PlantAccessoryMgr *this;
  TGAAccumulatedLoginData aTStack_40 [32];
  int local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
  PlantAccessoryMgr::GetAccessoryUIInfo(this,param_1);
  *param_2 = local_20 + 1;
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInfoUtil::GetRareByPlantName(std::string, int&) */

void GameInfoUtil::GetRareByPlantName(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    *param_2 = *(undefined4 *)(lVar3 + 0xd0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInfoUtil::GetItemInfoById(int, GameItemInfo&) */

void GameInfoUtil::GetItemInfoById(int param_1,GameItemInfo *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_4c;
  string asStack_48 [8];
  string asStack_40 [8];
  int local_38;
  int local_34;
  string asStack_28 [16];
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(param_1,0x7fffffff,0);
  if (local_38 == 0) goto LAB_04c593b8;
  Set8BytesTo0(asStack_48);
  switch((ulong)(local_34 - 1)) {
  case 0:
    iVar1 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    FUN_05474278(asStack_48,asStack_40);
    std::string::~string(asStack_40);
    FUN_05475d88(asStack_40,asStack_48);
    GetRareByPlantName(asStack_40,&local_4c);
    std::string::~string(asStack_40);
    *(undefined4 *)(param_2 + 0x18) = 2;
    break;
  case 1:
    iVar1 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar1);
    FUN_05474278(asStack_48,asStack_40);
    std::string::~string(asStack_40);
    FUN_05475d88(asStack_40,asStack_48);
    GetRareByPlantName(asStack_40,&local_4c);
    std::string::~string(asStack_40);
    *(undefined4 *)(param_2 + 0x18) = 3;
    break;
  default:
    std::string::append(asStack_48,"",(ulong)(local_34 - 1));
    local_4c = 0;
    *(undefined4 *)(param_2 + 0x18) = 5;
    break;
  case 3:
    iVar1 = AvatarNameMapperServerID::GetInstance();
    goto LAB_04c59530;
  case 7:
    iVar1 = AvatarChipNameMapperServerID::GetInstance();
LAB_04c59530:
    NameMapperBase::GetNameForId(iVar1);
    FUN_05474278(asStack_48,asStack_40);
    std::string::~string(asStack_40);
    FUN_05475d88(asStack_40,asStack_48);
    GetRareByPlantName(asStack_40,&local_4c);
    std::string::~string(asStack_40);
    *(undefined4 *)(param_2 + 0x18) = 4;
    break;
  case 0xf:
    iVar1 = PlantAccessoryInfoMapper::GetInstance();
    goto LAB_04c59490;
  case 0x1f:
    iVar1 = PlantAccessoryPieceMapper::GetInstance();
LAB_04c59490:
    NameMapperBase::GetNameForId(iVar1);
    FUN_05474278(asStack_48,asStack_40);
    std::string::~string(asStack_40);
    FUN_05475d88(asStack_40,asStack_48);
    GetRareByAccessaryName(asStack_40,&local_4c);
    std::string::~string(asStack_40);
    *(undefined4 *)(param_2 + 0x18) = 5;
    uVar2 = StringHelper::ToImage(asStack_18,false);
    goto joined_r0x04c594f0;
  }
  uVar2 = StringHelper::ToImage(asStack_18,false);
joined_r0x04c594f0:
  if (local_34 == 2) {
    Sexy::ToWString(asStack_28);
    FUN_054766c8(param_2,asStack_40);
    FUN_05476c50(asStack_40);
  }
  else {
    thunk_FUN_05477b9c(param_2,auStack_10);
  }
  *(int *)(param_2 + 8) = local_34;
  uVar3 = 1;
  *(undefined4 *)(param_2 + 0xc) = local_4c;
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  std::string::~string(asStack_48);
LAB_04c593b8:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameInfoUtil::GetDescriptionById(int) */

void __thiscall GameInfoUtil::GetDescriptionById(GameInfoUtil *this,int param_1)

{
  char cVar1;
  int iVar2;
  GameItemInfo aGStack_28 [32];
  long local_8;
  
  iVar2 = (int)this;
  local_8 = ___stack_chk_guard;
  if (iVar2 == 0xfad) {
    TodStringTranslate(L"[COIN_STORE]");
  }
  else if (iVar2 == 0xbc0) {
    TodStringTranslate(L"[GEM_STORE]");
  }
  else {
    GameItemInfo::GameItemInfo(aGStack_28);
    cVar1 = GetItemInfoById(iVar2,aGStack_28);
    if (cVar1 == '\0') {
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)aGStack_28);
      FUN_05478178();
      nop();
    }
    else {
      FUN_05477b24();
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)aGStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

