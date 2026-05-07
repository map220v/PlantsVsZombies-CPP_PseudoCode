// Class: GachaRewardUI


/* GachaRewardUI::~GachaRewardUI() */

void __thiscall GachaRewardUI::~GachaRewardUI(GachaRewardUI *this)

{
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* GachaRewardUI::GachaRewardUI(int, int, std::string, std::string) */

void __thiscall
GachaRewardUI::GachaRewardUI
          (GachaRewardUI *this,undefined4 param_1,undefined4 param_2,undefined8 param_4,
          undefined8 param_5)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 4) = param_2;
  this[0x2e] = (GachaRewardUI)0x1;
  thunk_FUN_05475e00(this + 0x18,param_4);
  thunk_FUN_05475e00(this + 0x10,param_5);
  this[0x2d] = (GachaRewardUI)0x0;
  this[0x2c] = (GachaRewardUI)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (GachaRewardUI)0x0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  return;
}


/* GachaRewardUI::GachaRewardUI() */

void __thiscall GachaRewardUI::GachaRewardUI(GachaRewardUI *this)

{
  size_t in_x2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0((string *)(this + 0x18));
  this[0x2e] = (GachaRewardUI)0x1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  std::string::append((string *)(this + 0x18),"",in_x2);
  this[0x2d] = (GachaRewardUI)0x0;
  this[0x2c] = (GachaRewardUI)0x0;
  this[0x2e] = (GachaRewardUI)0x1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  return;
}


/* GachaRewardUI::GachaRewardUI(std::string, std::string, bool, int, bool) */

void __thiscall
GachaRewardUI::GachaRewardUI
          (GachaRewardUI *this,undefined8 param_2,undefined8 param_3,GachaRewardUI param_4,
          undefined4 param_5,GachaRewardUI param_6)

{
  string *psVar1;
  bool bVar2;
  
  psVar1 = (string *)(this + 0x10);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  Set8BytesTo0(psVar1);
  Set8BytesTo0(this + 0x18);
  this[0x2e] = (GachaRewardUI)0x1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  thunk_FUN_05475e00(this + 0x18,param_2);
  thunk_FUN_05475e00(psVar1,param_3);
  this[0x2d] = param_4;
  this[0x2c] = (GachaRewardUI)0x0;
  this[0x2e] = (GachaRewardUI)((byte)param_4 ^ 1);
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  bVar2 = std::operator==(psVar1,"avatar");
  if ((!bVar2) && (bVar2 = std::operator==(psVar1,"new_avatar"), !bVar2)) {
    *(undefined4 *)(this + 0x30) = param_5;
    this[0x34] = param_6;
    return;
  }
  *(undefined4 *)(this + 0x30) = param_5;
  this[0x34] = param_6;
  this[0x2e] = (GachaRewardUI)0x0;
  return;
}

