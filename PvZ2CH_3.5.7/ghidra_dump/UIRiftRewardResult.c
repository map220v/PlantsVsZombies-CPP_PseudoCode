// Class: UIRiftRewardResult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRiftRewardResult::GetLayoutName() */

void __thiscall UIRiftRewardResult::GetLayoutName(UIRiftRewardResult *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIRiftRewardResult");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIRiftRewardResult::ButtonDepress(int) */

void __thiscall UIRiftRewardResult::ButtonDepress(UIRiftRewardResult *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<UIRiftRewardResult>::CloseDialog();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* non-virtual thunk to UIRiftRewardResult::ButtonDepress(int) */

void __thiscall UIRiftRewardResult::ButtonDepress(UIRiftRewardResult *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIRiftRewardResult::UIRiftRewardResult() */

void __thiscall UIRiftRewardResult::UIRiftRewardResult(UIRiftRewardResult *this)

{
  UISingletonDialog<UIRiftRewardResult>::UISingletonDialog
            ((UISingletonDialog<UIRiftRewardResult> *)this);
  *(undefined ***)this = &PTR_GetClass_0667a430;
  *(undefined **)(this + 0xd8) = &DAT_0667a780;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  return;
}


/* UIRiftRewardResult::~UIRiftRewardResult() */

void __thiscall UIRiftRewardResult::~UIRiftRewardResult(UIRiftRewardResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0667a430;
  *(undefined **)(this + 0xd8) = &DAT_0667a780;
  std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::~vector
            ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)(this + 0x138));
  UISingletonDialog<UIRiftRewardResult>::~UISingletonDialog
            ((UISingletonDialog<UIRiftRewardResult> *)this);
  return;
}


/* UIRiftRewardResult::~UIRiftRewardResult() */

void __thiscall UIRiftRewardResult::~UIRiftRewardResult(UIRiftRewardResult *this)

{
  ~UIRiftRewardResult(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRiftRewardResult::ConvertRewards(std::vector<LevelOfTheDay_RewardItemType,
   std::allocator<LevelOfTheDay_RewardItemType> > const&) */

void __thiscall UIRiftRewardResult::ConvertRewards(UIRiftRewardResult *this,vector *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  PakRecord aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_03676f30(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    lVar1 = FUN_03676f58(uVar4,uVar3);
    SecretStoreUtils::GetAwardInfoByActId
              ((SecretStoreUtils *)(ulong)*(uint *)(lVar1 + 0x38),*(int *)(lVar1 + 0x28),(int)lVar1)
    ;
    std::vector<SecretAwardInfo,std::allocator<SecretAwardInfo>>::push_back
              ((vector<SecretAwardInfo,std::allocator<SecretAwardInfo>> *)(this + 0x138),
               (SecretAwardInfo *)aPStack_20);
    PakRecord::~PakRecord(aPStack_20);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIRiftRewardResult::InitRewards(std::vector<LevelOfTheDay_RewardItemType,
   std::allocator<LevelOfTheDay_RewardItemType> > const&) */

void __thiscall UIRiftRewardResult::InitRewards(UIRiftRewardResult *this,vector *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  UIRewardFrame *pUVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  
  ConvertRewards(this,param_1);
  uVar9 = *(undefined8 *)(this + 0x138);
  uVar6 = FUN_03676f60(uVar9,*(undefined8 *)(this + 0x140));
  iVar4 = FUN_03677438(100);
  iVar5 = FUN_03677438(0x1e);
  iVar1 = *(int *)(this + 0x54);
  uVar10 = 0;
  iVar11 = (((1 - (int)uVar6) * iVar5 - iVar4 * (int)uVar6) + *(int *)(this + 0x50)) / 2;
  while (uVar10 < uVar6) {
    puVar7 = (undefined4 *)FUN_03676f74(uVar9,uVar10);
    uVar2 = *puVar7;
    uVar3 = puVar7[4];
    pUVar8 = ::operator_new(0x148);
    UIRewardFrame::UIRewardFrame(pUVar8,uVar2,puVar7 + 2,uVar3,1);
    (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,iVar11,(iVar1 - iVar4) / 2,iVar4,iVar4);
    (**(code **)(*(long *)this + 0x60))(this,pUVar8);
    uVar9 = *(undefined8 *)(this + 0x138);
    uVar6 = FUN_03676f60(uVar9,*(undefined8 *)(this + 0x140));
    uVar10 = uVar10 + 1;
    iVar11 = iVar11 + iVar4 + iVar5;
  }
  return;
}

