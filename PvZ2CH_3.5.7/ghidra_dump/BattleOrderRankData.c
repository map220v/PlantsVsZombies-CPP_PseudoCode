// Class: BattleOrderRankData


/* BattleOrderRankData::BattleOrderRankData() */

void __thiscall BattleOrderRankData::BattleOrderRankData(BattleOrderRankData *this)

{
  *(undefined4 *)this = 0;
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* BattleOrderRankData::BattleOrderRankData(BattleOrderRankData&&) */

void __thiscall
BattleOrderRankData::BattleOrderRankData(BattleOrderRankData *this,BattleOrderRankData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


/* BattleOrderRankData::TEMPNAMEPLACEHOLDERVALUE(BattleOrderRankData const&) */

BattleOrderRankData * __thiscall
BattleOrderRankData::operator=(BattleOrderRankData *this,BattleOrderRankData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return this;
}


/* BattleOrderRankData::BattleOrderRankData(BattleOrderRankData const&) */

void __thiscall
BattleOrderRankData::BattleOrderRankData(BattleOrderRankData *this,BattleOrderRankData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}

