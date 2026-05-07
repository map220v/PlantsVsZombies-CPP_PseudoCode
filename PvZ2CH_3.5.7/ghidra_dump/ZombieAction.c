// Class: ZombieAction


/* ZombieAction::ZombieAction() */

void __thiscall ZombieAction::ZombieAction(ZombieAction *this)

{
  Set8BytesTo0((string *)(this + 0x18));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  this[8] = (ZombieAction)0x1;
  *(undefined4 *)(this + 0x14) = 0;
  std::string::append((string *)(this + 0x18),"",1);
  return;
}


/* ZombieAction::ZombieAction(ZombieAction&&) */

void __thiscall ZombieAction::ZombieAction(ZombieAction *this,ZombieAction *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ZombieAction ZVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  ZVar5 = param_1[8];
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  this[8] = ZVar5;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

