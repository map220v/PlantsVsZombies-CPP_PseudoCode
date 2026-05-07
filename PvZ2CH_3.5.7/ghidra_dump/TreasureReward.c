// Class: TreasureReward


/* TreasureReward::TreasureReward() */

void __thiscall TreasureReward::TreasureReward(TreasureReward *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x18));
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  std::string::append((string *)(this + 0x18),"",in_x2);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* TreasureReward::TreasureReward(TreasureReward const&) */

void __thiscall TreasureReward::TreasureReward(TreasureReward *this,TreasureReward *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* TreasureReward::~TreasureReward() */

void __thiscall TreasureReward::~TreasureReward(TreasureReward *this)

{
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* TreasureReward::TreasureReward(TreasureReward&&) */

void __thiscall TreasureReward::TreasureReward(TreasureReward *this,TreasureReward *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}

