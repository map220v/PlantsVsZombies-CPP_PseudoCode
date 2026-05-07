// Class: CustomWaveEventSummonZombie


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomWaveEventSummonZombie::CustomWaveEventSummonZombie() */

void __thiscall
CustomWaveEventSummonZombie::CustomWaveEventSummonZombie(CustomWaveEventSummonZombie *this)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0x10) = 1;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 4) = 9;
  *(undefined4 *)(this + 0xc) = 5;
  std::string::string((string *)(this + 0x18),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomWaveEventSummonZombie::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEventSummonZombie&&) */

CustomWaveEventSummonZombie * __thiscall
CustomWaveEventSummonZombie::operator=
          (CustomWaveEventSummonZombie *this,CustomWaveEventSummonZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  FUN_05474278(this + 0x18,param_1 + 0x18);
  return this;
}


/* CustomWaveEventSummonZombie::CustomWaveEventSummonZombie(CustomWaveEventSummonZombie const&) */

void __thiscall
CustomWaveEventSummonZombie::CustomWaveEventSummonZombie
          (CustomWaveEventSummonZombie *this,CustomWaveEventSummonZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


/* CustomWaveEventSummonZombie::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEventSummonZombie const&) */

CustomWaveEventSummonZombie * __thiscall
CustomWaveEventSummonZombie::operator=
          (CustomWaveEventSummonZombie *this,CustomWaveEventSummonZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}


/* CustomWaveEventSummonZombie::CustomWaveEventSummonZombie(CustomWaveEventSummonZombie&&) */

void __thiscall
CustomWaveEventSummonZombie::CustomWaveEventSummonZombie
          (CustomWaveEventSummonZombie *this,CustomWaveEventSummonZombie *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}

