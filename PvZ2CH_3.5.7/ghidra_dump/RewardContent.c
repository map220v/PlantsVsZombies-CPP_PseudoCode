// Class: RewardContent


/* RewardContent::RewardContent() */

void __thiscall RewardContent::RewardContent(RewardContent *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* RewardContent::TEMPNAMEPLACEHOLDERVALUE(RewardContent const&) */

RewardContent * __thiscall RewardContent::operator=(RewardContent *this,RewardContent *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return this;
}

