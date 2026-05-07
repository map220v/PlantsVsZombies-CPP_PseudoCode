// Class: JoustPlayerData


/* JoustPlayerData::JoustPlayerData() */

void __thiscall JoustPlayerData::JoustPlayerData(JoustPlayerData *this)

{
  *(undefined ***)this = &PTR__JoustPlayerData_066adde0;
  FUN_05476574(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  FUN_054772c4(this + 0x10,&DAT_056f11a8);
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (JoustPlayerData)0x0;
  return;
}


/* JoustPlayerData::~JoustPlayerData() */

void __thiscall JoustPlayerData::~JoustPlayerData(JoustPlayerData *this)

{
  *(undefined ***)this = &PTR__JoustPlayerData_066adde0;
  FUN_05476c50(this + 0x10);
  return;
}


/* JoustPlayerData::~JoustPlayerData() */

void __thiscall JoustPlayerData::~JoustPlayerData(JoustPlayerData *this)

{
  ~JoustPlayerData(this);
  AK::FreeHook(this);
  return;
}


/* JoustPlayerData::JoustPlayerData(JoustPlayerData const&) */

void __thiscall JoustPlayerData::JoustPlayerData(JoustPlayerData *this,JoustPlayerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined ***)this = &PTR__JoustPlayerData_066adde0;
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  this[0x20] = param_1[0x20];
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustPlayerData::ToString() const */

void JoustPlayerData::ToString(void)

{
  long in_x0;
  undefined8 uVar1;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WStringToString((Sexy *)(in_x0 + 0x10),(wstring *)0x0,___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat(L"Player name ID=%s (avatar %d) Crowns=%d\n",uVar1,(ulong)*(uint *)(in_x0 + 0xc),
                  (ulong)*(uint *)(in_x0 + 0x18));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustPlayerData::TEMPNAMEPLACEHOLDERVALUE(JoustPlayerData const&) */

JoustPlayerData * __thiscall
JoustPlayerData::operator=(JoustPlayerData *this,JoustPlayerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  thunk_FUN_05477b9c(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  this[0x20] = param_1[0x20];
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return this;
}

