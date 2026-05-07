// Class: RayEntityData


/* RayEntityData::RayEntityData() */

void __thiscall RayEntityData::RayEntityData(RayEntityData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"idle",in_x2);
  std::string::append((string *)(this + 0x18),"lightningreed_bolt_start",in_x2);
  std::string::append((string *)(this + 0x20),"lightningreed_bolt_middle",in_x2);
  *(undefined4 *)(this + 0x28) = 0x41200000;
  *(undefined4 *)(this + 0x2c) = 0x41200000;
  return;
}


/* RayEntityData::TEMPNAMEPLACEHOLDERVALUE(RayEntityData&&) */

RayEntityData * __thiscall RayEntityData::operator=(RayEntityData *this,RayEntityData *param_1)

{
  undefined4 uVar1;
  
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  FUN_05474278(this + 0x10,param_1 + 0x10);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  FUN_05474278(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = uVar1;
  return this;
}


/* RayEntityData::TEMPNAMEPLACEHOLDERVALUE(RayEntityData const&) */

RayEntityData * __thiscall RayEntityData::operator=(RayEntityData *this,RayEntityData *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = uVar1;
  return this;
}

