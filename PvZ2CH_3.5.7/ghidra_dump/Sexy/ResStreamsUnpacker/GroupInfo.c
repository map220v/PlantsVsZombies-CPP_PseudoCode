// Class: Sexy::ResStreamsUnpacker::GroupInfo


/* Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(Sexy::ResStreamsUnpacker::GroupInfo const&) */

void __thiscall Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(GroupInfo *this,GroupInfo *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


/* Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(Sexy::ResStreamsUnpacker::GroupInfo&&) */

void __thiscall Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(GroupInfo *this,GroupInfo *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}


/* Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(std::string const&, unsigned int, unsigned int) */

void __thiscall
Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo
          (GroupInfo *this,string *param_1,uint param_2,uint param_3)

{
  Set8BytesTo0();
  thunk_FUN_05475e00(this,param_1);
  *(uint *)(this + 8) = param_2;
  *(uint *)(this + 0xc) = param_3;
  return;
}

