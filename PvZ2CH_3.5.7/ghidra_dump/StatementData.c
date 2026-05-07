// Class: StatementData


/* StatementData::StatementData() */

void __thiscall StatementData::StatementData(StatementData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (StatementData)0x0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* StatementData::StatementData(StatementData const&) */

void __thiscall StatementData::StatementData(StatementData *this,StatementData *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(undefined8 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* StatementData::StatementData(StatementData&&) */

void __thiscall StatementData::StatementData(StatementData *this,StatementData *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  *(undefined8 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar1;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}

