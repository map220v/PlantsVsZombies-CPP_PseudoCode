// Class: NetworkRewardContent


/* NetworkRewardContent::NetworkRewardContent() */

void __thiscall NetworkRewardContent::NetworkRewardContent(NetworkRewardContent *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* NetworkRewardContent::NetworkRewardContent(NetworkRewardContent&&) */

void __thiscall
NetworkRewardContent::NetworkRewardContent(NetworkRewardContent *this,NetworkRewardContent *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  return;
}

