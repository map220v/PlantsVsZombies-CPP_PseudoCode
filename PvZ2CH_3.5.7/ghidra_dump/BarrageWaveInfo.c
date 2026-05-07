// Class: BarrageWaveInfo


/* BarrageWaveInfo::BarrageWaveInfo() */

void __thiscall BarrageWaveInfo::BarrageWaveInfo(BarrageWaveInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x18));
  *this = (BarrageWaveInfo)0x0;
  this[1] = (BarrageWaveInfo)0x0;
  this[2] = (BarrageWaveInfo)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  std::string::append((string *)(this + 0x18),"",in_x2);
  return;
}


/* BarrageWaveInfo::BarrageWaveInfo(BarrageWaveInfo const&) */

void __thiscall BarrageWaveInfo::BarrageWaveInfo(BarrageWaveInfo *this,BarrageWaveInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BarrageWaveInfo BVar4;
  BarrageWaveInfo BVar5;
  BarrageWaveInfo BVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  BVar4 = *param_1;
  BVar5 = param_1[1];
  BVar6 = param_1[2];
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = BVar4;
  this[1] = BVar5;
  this[2] = BVar6;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar1;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* BarrageWaveInfo::BarrageWaveInfo(BarrageWaveInfo&&) */

void __thiscall BarrageWaveInfo::BarrageWaveInfo(BarrageWaveInfo *this,BarrageWaveInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BarrageWaveInfo BVar4;
  BarrageWaveInfo BVar5;
  BarrageWaveInfo BVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  BVar4 = *param_1;
  BVar5 = param_1[1];
  BVar6 = param_1[2];
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = BVar4;
  this[1] = BVar5;
  this[2] = BVar6;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar1;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

