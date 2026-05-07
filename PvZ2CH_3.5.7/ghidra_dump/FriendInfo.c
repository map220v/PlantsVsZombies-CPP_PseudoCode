// Class: FriendInfo


/* FriendInfo::FriendInfo() */

void __thiscall FriendInfo::FriendInfo(FriendInfo *this)

{
  FUN_05476574(this + 8);
  Set8BytesTo0(this + 0x20);
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  return;
}


/* FriendInfo::~FriendInfo() */

void __thiscall FriendInfo::~FriendInfo(FriendInfo *this)

{
  std::string::~string((string *)(this + 0x20));
  FUN_05476c50(this + 8);
  return;
}


/* FriendInfo::FriendInfo(FriendInfo&&) */

void __thiscall FriendInfo::FriendInfo(FriendInfo *this,FriendInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05476584(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  FUN_05474148(this + 0x20,param_1 + 0x20);
  return;
}

