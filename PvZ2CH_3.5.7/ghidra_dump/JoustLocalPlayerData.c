// Class: JoustLocalPlayerData


/* JoustLocalPlayerData::JoustLocalPlayerData(JoustLocalPlayerData const&) */

void __thiscall
JoustLocalPlayerData::JoustLocalPlayerData(JoustLocalPlayerData *this,JoustLocalPlayerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  JoustPlayerData::JoustPlayerData((JoustPlayerData *)this,(JoustPlayerData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined ***)this = &PTR__JoustLocalPlayerData_066ade10;
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar3;
  return;
}


/* JoustLocalPlayerData::~JoustLocalPlayerData() */

void __thiscall JoustLocalPlayerData::~JoustLocalPlayerData(JoustLocalPlayerData *this)

{
  *(undefined ***)this = &PTR__JoustLocalPlayerData_066ade10;
  JoustPlayerData::~JoustPlayerData((JoustPlayerData *)this);
  return;
}


/* JoustLocalPlayerData::~JoustLocalPlayerData() */

void __thiscall JoustLocalPlayerData::~JoustLocalPlayerData(JoustLocalPlayerData *this)

{
  ~JoustLocalPlayerData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustLocalPlayerData::ToString() const */

void JoustLocalPlayerData::ToString(void)

{
  long in_x0;
  undefined8 uVar1;
  string asStack_10 [8];
  bool *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WStringToString((Sexy *)(in_x0 + 0x10),(wstring *)0x0,___stack_chk_guard);
  uVar1 = FUN_0547429c(asStack_10);
  Sexy::StrFormat(L"Player name ID=%s [avatar %d] [crowns %d] [winstreak %d] [league %d] [totwins %d] [leaderboardpos %d]\n"
                  ,uVar1,(ulong)*(uint *)(in_x0 + 0xc),(ulong)*(uint *)(in_x0 + 0x18),
                  (ulong)*(uint *)(in_x0 + 0x24),(ulong)*(uint *)(in_x0 + 0x28),
                  (ulong)*(uint *)(in_x0 + 0x2c),(ulong)*(uint *)(in_x0 + 0x30));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustLocalPlayerData::JoustLocalPlayerData() */

void __thiscall JoustLocalPlayerData::JoustLocalPlayerData(JoustLocalPlayerData *this)

{
  JoustPlayerData::JoustPlayerData((JoustPlayerData *)this);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__JoustLocalPlayerData_066ade10;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  return;
}

