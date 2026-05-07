// Class: LootTableEntry


/* LootTableEntry::LootTableEntry() */

void __thiscall LootTableEntry::LootTableEntry(LootTableEntry *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  std::string::append((string *)(this + 0x20),"",in_x2);
  std::string::append((string *)(this + 0x28),"",in_x2);
  return;
}


/* LootTableEntry::~LootTableEntry() */

void __thiscall LootTableEntry::~LootTableEntry(LootTableEntry *this)

{
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)this);
  return;
}


/* LootTableEntry::LootTableEntry(LootTableEntry&&) */

void __thiscall LootTableEntry::LootTableEntry(LootTableEntry *this,LootTableEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_05474148();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar3;
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  return;
}

