// Class: TrialData


/* TrialData::TEMPNAMEPLACEHOLDERVALUE(TrialData const&) */

TrialData * __thiscall TrialData::operator=(TrialData *this,TrialData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar6 = *(undefined4 *)(param_1 + 0x5c);
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  uVar8 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined4 *)(this + 0x50) = uVar3;
  *(undefined4 *)(this + 0x54) = uVar4;
  *(undefined4 *)(this + 0x58) = uVar5;
  *(undefined4 *)(this + 0x5c) = uVar6;
  *(undefined4 *)(this + 0x60) = uVar7;
  *(undefined4 *)(this + 100) = uVar8;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialData::TrialData() */

void __thiscall TrialData::TrialData(TrialData *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  std::string::string((string *)(this + 0x30),"egypt");
  nop();
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x54) = 1;
  *(undefined4 *)(this + 0x58) = 0xe10;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x60) = 3;
  *(undefined4 *)(this + 100) = 10000;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x68) = 8;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrialData::TrialData(TrialData const&) */

void __thiscall TrialData::TrialData(TrialData *this,TrialData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  FUN_05475d88(this + 0x38,param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar6 = *(undefined4 *)(param_1 + 0x5c);
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  uVar8 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined4 *)(this + 0x50) = uVar3;
  *(undefined4 *)(this + 0x54) = uVar4;
  *(undefined4 *)(this + 0x58) = uVar5;
  *(undefined4 *)(this + 0x5c) = uVar6;
  *(undefined4 *)(this + 0x60) = uVar7;
  *(undefined4 *)(this + 100) = uVar8;
  return;
}


/* TrialData::TrialData(TrialData&&) */

void __thiscall TrialData::TrialData(TrialData *this,TrialData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  FUN_05474148(this + 0x38,param_1 + 0x38);
  FUN_05474148(this + 0x40,param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar6 = *(undefined4 *)(param_1 + 0x5c);
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  uVar8 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined4 *)(this + 0x50) = uVar3;
  *(undefined4 *)(this + 0x54) = uVar4;
  *(undefined4 *)(this + 0x58) = uVar5;
  *(undefined4 *)(this + 0x5c) = uVar6;
  *(undefined4 *)(this + 0x60) = uVar7;
  *(undefined4 *)(this + 100) = uVar8;
  return;
}

