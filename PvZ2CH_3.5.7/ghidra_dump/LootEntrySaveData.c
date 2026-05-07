// Class: LootEntrySaveData


/* LootEntrySaveData::LootEntrySaveData() */

void __thiscall LootEntrySaveData::LootEntrySaveData(LootEntrySaveData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  *(undefined8 *)(this + 0x10) = 0x47efffffe0000000;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* LootEntrySaveData::LootEntrySaveData(LootEntrySaveData&&) */

void __thiscall
LootEntrySaveData::LootEntrySaveData(LootEntrySaveData *this,LootEntrySaveData *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_05474148();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

