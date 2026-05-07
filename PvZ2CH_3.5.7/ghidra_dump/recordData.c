// Class: recordData


/* recordData::TEMPNAMEPLACEHOLDERVALUE(recordData const&) */

recordData * __thiscall recordData::operator=(recordData *this,recordData *param_1)

{
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return this;
}


/* recordData::recordData(recordData const&) */

void __thiscall recordData::recordData(recordData *this,recordData *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* recordData::recordData(recordData&&) */

void __thiscall recordData::recordData(recordData *this,recordData *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return;
}


/* recordData::TEMPNAMEPLACEHOLDERVALUE(recordData&&) */

recordData * __thiscall recordData::operator=(recordData *this,recordData *param_1)

{
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return this;
}

