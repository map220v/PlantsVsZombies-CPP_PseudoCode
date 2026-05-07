// Class: PooyanBossBarage


/* PooyanBossBarage::PooyanBossBarage() */

void __thiscall PooyanBossBarage::PooyanBossBarage(PooyanBossBarage *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x18));
  *this = (PooyanBossBarage)0x0;
  this[1] = (PooyanBossBarage)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  std::string::append((string *)(this + 0x18),"PooyanBossBarrageSmall",in_x2);
  return;
}


/* PooyanBossBarage::PooyanBossBarage(PooyanBossBarage const&) */

void __thiscall PooyanBossBarage::PooyanBossBarage(PooyanBossBarage *this,PooyanBossBarage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PooyanBossBarage PVar5;
  PooyanBossBarage PVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  PVar5 = *param_1;
  PVar6 = param_1[1];
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = PVar5;
  this[1] = PVar6;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* PooyanBossBarage::PooyanBossBarage(PooyanBossBarage&&) */

void __thiscall PooyanBossBarage::PooyanBossBarage(PooyanBossBarage *this,PooyanBossBarage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PooyanBossBarage PVar5;
  PooyanBossBarage PVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  PVar5 = *param_1;
  PVar6 = param_1[1];
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = PVar5;
  this[1] = PVar6;
  *(undefined4 *)(this + 4) = uVar3;
  *(undefined4 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

