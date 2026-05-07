// Class: Chickening


/* Chickening::TEMPNAMEPLACEHOLDERVALUE(Chickening&&) */

Chickening * __thiscall Chickening::operator=(Chickening *this,Chickening *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Chickening CVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  FUN_05474278(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  CVar5 = param_1[0x34];
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = CVar5;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  return this;
}


/* Chickening::Chickening(Chickening const&) */

void __thiscall Chickening::Chickening(Chickening *this,Chickening *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Chickening CVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  CVar5 = param_1[0x34];
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = CVar5;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  return;
}


/* Chickening::Chickening(Chickening&&) */

void __thiscall Chickening::Chickening(Chickening *this,Chickening *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Chickening CVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  CVar5 = param_1[0x34];
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = CVar5;
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  return;
}

