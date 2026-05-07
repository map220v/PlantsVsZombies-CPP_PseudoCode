// Class: DangerRoomTitleData


/* DangerRoomTitleData::DangerRoomTitleData() */

void __thiscall DangerRoomTitleData::DangerRoomTitleData(DangerRoomTitleData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* DangerRoomTitleData::DangerRoomTitleData(DangerRoomTitleData&&) */

void __thiscall
DangerRoomTitleData::DangerRoomTitleData(DangerRoomTitleData *this,DangerRoomTitleData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}

