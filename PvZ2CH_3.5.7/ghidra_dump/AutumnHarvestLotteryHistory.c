// Class: AutumnHarvestLotteryHistory


/* AutumnHarvestLotteryHistory::AutumnHarvestLotteryHistory(AutumnHarvestLotteryHistory const&) */

void __thiscall
AutumnHarvestLotteryHistory::AutumnHarvestLotteryHistory
          (AutumnHarvestLotteryHistory *this,AutumnHarvestLotteryHistory *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05475d88(this + 8,param_1 + 8);
  return;
}


/* AutumnHarvestLotteryHistory::AutumnHarvestLotteryHistory(AutumnHarvestLotteryHistory&&) */

void __thiscall
AutumnHarvestLotteryHistory::AutumnHarvestLotteryHistory
          (AutumnHarvestLotteryHistory *this,AutumnHarvestLotteryHistory *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  return;
}


/* AutumnHarvestLotteryHistory::TEMPNAMEPLACEHOLDERVALUE(AutumnHarvestLotteryHistory const&) */

AutumnHarvestLotteryHistory * __thiscall
AutumnHarvestLotteryHistory::operator=
          (AutumnHarvestLotteryHistory *this,AutumnHarvestLotteryHistory *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  return this;
}

