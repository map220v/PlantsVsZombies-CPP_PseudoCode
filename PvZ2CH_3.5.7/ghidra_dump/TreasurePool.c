// Class: TreasurePool


/* TreasurePool::TreasurePool() */

void __thiscall TreasurePool::TreasurePool(TreasurePool *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  return;
}


/* TreasurePool::~TreasurePool() */

void __thiscall TreasurePool::~TreasurePool(TreasurePool *this)

{
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* TreasurePool::TreasurePool(TreasurePool&&) */

void __thiscall TreasurePool::TreasurePool(TreasurePool *this,TreasurePool *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = uVar1;
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  FUN_05474148(this + 0x30,param_1 + 0x30);
  return;
}

