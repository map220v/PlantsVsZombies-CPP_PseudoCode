// Class: RewardItem


/* RewardItem::RewardItem() */

void __thiscall RewardItem::RewardItem(RewardItem *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 0x14) = 1;
  return;
}


/* RewardItem::RewardItem(RewardItem const&) */

void __thiscall RewardItem::RewardItem(RewardItem *this,RewardItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  return;
}


/* RewardItem::TEMPNAMEPLACEHOLDERVALUE(RewardItem const&) */

RewardItem * __thiscall RewardItem::operator=(RewardItem *this,RewardItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  return this;
}


/* RewardItem::RewardItem(RewardItem&&) */

void __thiscall RewardItem::RewardItem(RewardItem *this,RewardItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  return;
}

