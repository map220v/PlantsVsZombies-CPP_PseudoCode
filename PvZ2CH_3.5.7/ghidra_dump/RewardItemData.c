// Class: RewardItemData


/* RewardItemData::RewardItemData(RewardItemData const&) */

void __thiscall RewardItemData::RewardItemData(RewardItemData *this,RewardItemData *param_1)

{
  undefined4 uVar1;
  RewardItemData RVar2;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  RVar2 = param_1[0x14];
  this[0x15] = param_1[0x15];
  *(undefined4 *)(this + 0x10) = uVar1;
  this[0x14] = RVar2;
  return;
}


/* RewardItemData::TEMPNAMEPLACEHOLDERVALUE(RewardItemData const&) */

RewardItemData * __thiscall RewardItemData::operator=(RewardItemData *this,RewardItemData *param_1)

{
  undefined4 uVar1;
  RewardItemData RVar2;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  RVar2 = param_1[0x14];
  this[0x15] = param_1[0x15];
  *(undefined4 *)(this + 0x10) = uVar1;
  this[0x14] = RVar2;
  return this;
}


/* RewardItemData::RewardItemData(RewardItemData&&) */

void __thiscall RewardItemData::RewardItemData(RewardItemData *this,RewardItemData *param_1)

{
  undefined4 uVar1;
  RewardItemData RVar2;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  RVar2 = param_1[0x14];
  this[0x15] = param_1[0x15];
  *(undefined4 *)(this + 0x10) = uVar1;
  this[0x14] = RVar2;
  return;
}

