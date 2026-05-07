// Class: AccessoryUIInfo


/* AccessoryUIInfo::AccessoryUIInfo() */

void __thiscall AccessoryUIInfo::AccessoryUIInfo(AccessoryUIInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* AccessoryUIInfo::TEMPNAMEPLACEHOLDERVALUE(AccessoryUIInfo&&) */

AccessoryUIInfo * __thiscall
AccessoryUIInfo::operator=(AccessoryUIInfo *this,AccessoryUIInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  FUN_05474278(this + 0x10,param_1 + 0x10);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  return this;
}


/* AccessoryUIInfo::AccessoryUIInfo(AccessoryUIInfo const&) */

void __thiscall AccessoryUIInfo::AccessoryUIInfo(AccessoryUIInfo *this,AccessoryUIInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  return;
}


/* AccessoryUIInfo::TEMPNAMEPLACEHOLDERVALUE(AccessoryUIInfo const&) */

AccessoryUIInfo * __thiscall
AccessoryUIInfo::operator=(AccessoryUIInfo *this,AccessoryUIInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  return this;
}

