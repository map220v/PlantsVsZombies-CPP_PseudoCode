// Class: CustomLevelWorldParams


/* CustomLevelWorldParams::~CustomLevelWorldParams() */

void __thiscall CustomLevelWorldParams::~CustomLevelWorldParams(CustomLevelWorldParams *this)

{
  std::string::~string((string *)(this + 0x2b8));
  std::string::~string((string *)(this + 0x2b0));
  std::string::~string((string *)(this + 0x2a0));
  std::string::~string((string *)(this + 0x288));
  CustomLevelParams::~CustomLevelParams((CustomLevelParams *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWorldParams::CustomLevelWorldParams() */

void __thiscall CustomLevelWorldParams::CustomLevelWorldParams(CustomLevelWorldParams *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"egypt");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  CustomLevelParams::CustomLevelParams((CustomLevelParams *)(this + 0x10));
  *(undefined4 *)(this + 0x280) = 0;
  std::string::string((string *)(this + 0x288),"");
  nop();
  *(undefined4 *)(this + 0x290) = 0;
  this[0x298] = (CustomLevelWorldParams)0x1;
  *(undefined4 *)(this + 0x294) = 0;
  std::string::string((string *)(this + 0x2a0),"");
  nop();
  *(undefined4 *)(this + 0x2a8) = 0;
  std::string::string((string *)(this + 0x2b0),"");
  nop();
  std::string::string((string *)(this + 0x2b8),"");
  nop();
  *(undefined4 *)(this + 0x2c0) = 0;
  lVar2 = ___stack_chk_guard;
  this[0x2c4] = (CustomLevelWorldParams)0x0;
  this[0x2c5] = (CustomLevelWorldParams)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelWorldParams::CustomLevelWorldParams(CustomLevelWorldParams const&) */

void __thiscall
CustomLevelWorldParams::CustomLevelWorldParams
          (CustomLevelWorldParams *this,CustomLevelWorldParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLevelWorldParams CVar3;
  CustomLevelWorldParams CVar4;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  CustomLevelParams::CustomLevelParams
            ((CustomLevelParams *)(this + 0x10),(CustomLevelParams *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(param_1 + 0x280);
  FUN_05475d88(this + 0x288,param_1 + 0x288);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  uVar2 = *(undefined4 *)(param_1 + 0x294);
  this[0x298] = param_1[0x298];
  *(undefined4 *)(this + 0x290) = uVar1;
  *(undefined4 *)(this + 0x294) = uVar2;
  FUN_05475d88(this + 0x2a0,param_1 + 0x2a0);
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  FUN_05475d88(this + 0x2b0,param_1 + 0x2b0);
  FUN_05475d88(this + 0x2b8,param_1 + 0x2b8);
  uVar1 = *(undefined4 *)(param_1 + 0x2d0);
  uVar2 = *(undefined4 *)(param_1 + 0x2c0);
  CVar3 = param_1[0x2c4];
  CVar4 = param_1[0x2c5];
  *(undefined8 *)(this + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined4 *)(this + 0x2c0) = uVar2;
  this[0x2c4] = CVar3;
  this[0x2c5] = CVar4;
  *(undefined4 *)(this + 0x2d0) = uVar1;
  return;
}


/* CustomLevelWorldParams::TEMPNAMEPLACEHOLDERVALUE(CustomLevelWorldParams const&) */

CustomLevelWorldParams * __thiscall
CustomLevelWorldParams::operator=(CustomLevelWorldParams *this,CustomLevelWorldParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLevelWorldParams CVar3;
  CustomLevelWorldParams CVar4;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  CustomLevelParams::operator=
            ((CustomLevelParams *)(this + 0x10),(CustomLevelParams *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(param_1 + 0x280);
  thunk_FUN_05475e00(this + 0x288,param_1 + 0x288);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  uVar2 = *(undefined4 *)(param_1 + 0x294);
  this[0x298] = param_1[0x298];
  *(undefined4 *)(this + 0x290) = uVar1;
  *(undefined4 *)(this + 0x294) = uVar2;
  thunk_FUN_05475e00(this + 0x2a0,param_1 + 0x2a0);
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  thunk_FUN_05475e00(this + 0x2b0,param_1 + 0x2b0);
  thunk_FUN_05475e00(this + 0x2b8,param_1 + 0x2b8);
  uVar1 = *(undefined4 *)(param_1 + 0x2d0);
  uVar2 = *(undefined4 *)(param_1 + 0x2c0);
  CVar3 = param_1[0x2c4];
  CVar4 = param_1[0x2c5];
  *(undefined8 *)(this + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined4 *)(this + 0x2c0) = uVar2;
  this[0x2c4] = CVar3;
  this[0x2c5] = CVar4;
  *(undefined4 *)(this + 0x2d0) = uVar1;
  return this;
}


/* CustomLevelWorldParams::CustomLevelWorldParams(CustomLevelWorldParams&&) */

void __thiscall
CustomLevelWorldParams::CustomLevelWorldParams
          (CustomLevelWorldParams *this,CustomLevelWorldParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLevelWorldParams CVar3;
  CustomLevelWorldParams CVar4;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  CustomLevelParams::CustomLevelParams
            ((CustomLevelParams *)(this + 0x10),(CustomLevelParams *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(param_1 + 0x280);
  FUN_05474148(this + 0x288,param_1 + 0x288);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  uVar2 = *(undefined4 *)(param_1 + 0x294);
  this[0x298] = param_1[0x298];
  *(undefined4 *)(this + 0x290) = uVar1;
  *(undefined4 *)(this + 0x294) = uVar2;
  FUN_05474148(this + 0x2a0,param_1 + 0x2a0);
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  FUN_05474148(this + 0x2b0,param_1 + 0x2b0);
  FUN_05474148(this + 0x2b8,param_1 + 0x2b8);
  uVar1 = *(undefined4 *)(param_1 + 0x2d0);
  uVar2 = *(undefined4 *)(param_1 + 0x2c0);
  CVar3 = param_1[0x2c4];
  CVar4 = param_1[0x2c5];
  *(undefined8 *)(this + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined4 *)(this + 0x2c0) = uVar2;
  this[0x2c4] = CVar3;
  this[0x2c5] = CVar4;
  *(undefined4 *)(this + 0x2d0) = uVar1;
  return;
}


/* CustomLevelWorldParams::TEMPNAMEPLACEHOLDERVALUE(CustomLevelWorldParams&&) */

CustomLevelWorldParams * __thiscall
CustomLevelWorldParams::operator=(CustomLevelWorldParams *this,CustomLevelWorldParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLevelWorldParams CVar3;
  CustomLevelWorldParams CVar4;
  
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  CustomLevelParams::operator=
            ((CustomLevelParams *)(this + 0x10),(CustomLevelParams *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(param_1 + 0x280);
  FUN_05474278(this + 0x288,param_1 + 0x288);
  uVar1 = *(undefined4 *)(param_1 + 0x290);
  uVar2 = *(undefined4 *)(param_1 + 0x294);
  this[0x298] = param_1[0x298];
  *(undefined4 *)(this + 0x290) = uVar1;
  *(undefined4 *)(this + 0x294) = uVar2;
  FUN_05474278(this + 0x2a0,param_1 + 0x2a0);
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  FUN_05474278(this + 0x2b0,param_1 + 0x2b0);
  FUN_05474278(this + 0x2b8,param_1 + 0x2b8);
  uVar1 = *(undefined4 *)(param_1 + 0x2d0);
  uVar2 = *(undefined4 *)(param_1 + 0x2c0);
  CVar3 = param_1[0x2c4];
  CVar4 = param_1[0x2c5];
  *(undefined8 *)(this + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined4 *)(this + 0x2c0) = uVar2;
  this[0x2c4] = CVar3;
  this[0x2c5] = CVar4;
  *(undefined4 *)(this + 0x2d0) = uVar1;
  return this;
}

