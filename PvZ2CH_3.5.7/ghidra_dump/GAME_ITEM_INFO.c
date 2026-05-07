// Class: GAME_ITEM_INFO


/* GAME_ITEM_INFO::~GAME_ITEM_INFO() */

void __thiscall GAME_ITEM_INFO::~GAME_ITEM_INFO(GAME_ITEM_INFO *this)

{
  FUN_05476c50(this + 0x28);
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* GAME_ITEM_INFO::GAME_ITEM_INFO(GAME_ITEM_INFO&&) */

void __thiscall GAME_ITEM_INFO::GAME_ITEM_INFO(GAME_ITEM_INFO *this,GAME_ITEM_INFO *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05476584(this + 0x28,param_1 + 0x28);
  return;
}


/* GAME_ITEM_INFO::GAME_ITEM_INFO() */

void __thiscall GAME_ITEM_INFO::GAME_ITEM_INFO(GAME_ITEM_INFO *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  FUN_05476574(this + 0x28);
  return;
}


/* GAME_ITEM_INFO::TEMPNAMEPLACEHOLDERVALUE(GAME_ITEM_INFO&&) */

GAME_ITEM_INFO * __thiscall GAME_ITEM_INFO::operator=(GAME_ITEM_INFO *this,GAME_ITEM_INFO *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05474278(this + 0x10,param_1 + 0x10);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  FUN_05474278(this + 0x20,param_1 + 0x20);
  FUN_054766c8(this + 0x28,param_1 + 0x28);
  return this;
}


/* GAME_ITEM_INFO::GAME_ITEM_INFO(GAME_ITEM_INFO const&) */

void __thiscall GAME_ITEM_INFO::GAME_ITEM_INFO(GAME_ITEM_INFO *this,GAME_ITEM_INFO *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05477b24(this + 0x28,param_1 + 0x28);
  return;
}

