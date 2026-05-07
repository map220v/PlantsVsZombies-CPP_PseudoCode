// Class: ResilienceEntity


/* ResilienceEntity::ResilienceEntity(ResilienceEntity const&) */

void __thiscall ResilienceEntity::ResilienceEntity(ResilienceEntity *this,ResilienceEntity *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}


/* ResilienceEntity::ResilienceEntity(ResilienceEntity&&) */

void __thiscall ResilienceEntity::ResilienceEntity(ResilienceEntity *this,ResilienceEntity *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}


/* ResilienceEntity::ResilienceEntity() */

void __thiscall ResilienceEntity::ResilienceEntity(ResilienceEntity *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

