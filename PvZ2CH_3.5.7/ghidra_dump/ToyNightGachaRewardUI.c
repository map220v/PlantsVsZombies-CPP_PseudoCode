// Class: ToyNightGachaRewardUI


/* ToyNightGachaRewardUI::ToyNightGachaRewardUI() */

void __thiscall ToyNightGachaRewardUI::ToyNightGachaRewardUI(ToyNightGachaRewardUI *this)

{
  *(undefined4 *)this = 0;
  FUN_05476574(this + 8);
  *(undefined4 *)this = 0;
  FUN_054772c4(this + 8,&DAT_056f11a8);
  this[0x1c] = (ToyNightGachaRewardUI)0x0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x1d] = (ToyNightGachaRewardUI)0x1;
  *(undefined4 *)(this + 0x24) = 5;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  return;
}


/* ToyNightGachaRewardUI::ToyNightGachaRewardUI(ToyNightGachaRewardUI const&) */

void __thiscall
ToyNightGachaRewardUI::ToyNightGachaRewardUI
          (ToyNightGachaRewardUI *this,ToyNightGachaRewardUI *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ToyNightGachaRewardUI TVar5;
  ToyNightGachaRewardUI TVar6;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05477b24(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  TVar5 = param_1[0x1c];
  TVar6 = param_1[0x1d];
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  this[0x1c] = TVar5;
  this[0x1d] = TVar6;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* ToyNightGachaRewardUI::ToyNightGachaRewardUI(ToyNightGachaRewardUI&&) */

void __thiscall
ToyNightGachaRewardUI::ToyNightGachaRewardUI
          (ToyNightGachaRewardUI *this,ToyNightGachaRewardUI *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ToyNightGachaRewardUI TVar5;
  ToyNightGachaRewardUI TVar6;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05476584(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  TVar5 = param_1[0x1c];
  TVar6 = param_1[0x1d];
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  this[0x1c] = TVar5;
  this[0x1d] = TVar6;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}

