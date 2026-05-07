// Class: CompensatedAward


/* CompensatedAward::CompensatedAward() */

void __thiscall CompensatedAward::CompensatedAward(CompensatedAward *this)

{
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* CompensatedAward::~CompensatedAward() */

void __thiscall CompensatedAward::~CompensatedAward(CompensatedAward *this)

{
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 8));
  return;
}


/* CompensatedAward::CompensatedAward(CompensatedAward&&) */

void __thiscall CompensatedAward::CompensatedAward(CompensatedAward *this,CompensatedAward *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  return;
}

