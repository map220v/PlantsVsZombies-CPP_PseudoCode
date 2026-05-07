// Class: DropOutItemData


/* DropOutItemData::DropOutItemData() */

void __thiscall DropOutItemData::DropOutItemData(DropOutItemData *this)

{
  Set8BytesTo0();
  *(undefined2 *)(this + 8) = 0;
  return;
}


/* DropOutItemData::DropOutItemData(DropOutItemData&&) */

void __thiscall DropOutItemData::DropOutItemData(DropOutItemData *this,DropOutItemData *param_1)

{
  FUN_05474148();
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  return;
}

