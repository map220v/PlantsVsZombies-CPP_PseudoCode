// Class: PlaybackBrief


/* PlaybackBrief::PlaybackBrief() */

void __thiscall PlaybackBrief::PlaybackBrief(PlaybackBrief *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (PlaybackBrief)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  FUN_05476574(this + 0x20);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}


/* PlaybackBrief::PlaybackBrief(PlaybackBrief&&) */

void __thiscall PlaybackBrief::PlaybackBrief(PlaybackBrief *this,PlaybackBrief *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PlaybackBrief PVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 8);
  PVar6 = param_1[0x10];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)this = uVar8;
  *(undefined8 *)(this + 8) = uVar7;
  this[0x10] = PVar6;
  *(undefined4 *)(this + 0x14) = uVar1;
  FUN_05476584(this + 0x20,param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x28) = uVar8;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x3c) = uVar4;
  *(undefined4 *)(this + 0x40) = uVar5;
  *(undefined8 *)(this + 0x48) = uVar7;
  return;
}


/* PlaybackBrief::TEMPNAMEPLACEHOLDERVALUE(PlaybackBrief&&) */

PlaybackBrief * __thiscall PlaybackBrief::operator=(PlaybackBrief *this,PlaybackBrief *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PlaybackBrief PVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 8);
  PVar6 = param_1[0x10];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)this = uVar8;
  *(undefined8 *)(this + 8) = uVar7;
  this[0x10] = PVar6;
  *(undefined4 *)(this + 0x14) = uVar1;
  FUN_054766c8(this + 0x20,param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x28) = uVar8;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x3c) = uVar4;
  *(undefined4 *)(this + 0x40) = uVar5;
  *(undefined8 *)(this + 0x48) = uVar7;
  return this;
}


/* PlaybackBrief::TEMPNAMEPLACEHOLDERVALUE(PlaybackBrief const&) */

PlaybackBrief * __thiscall PlaybackBrief::operator=(PlaybackBrief *this,PlaybackBrief *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PlaybackBrief PVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 8);
  PVar6 = param_1[0x10];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)this = uVar8;
  *(undefined8 *)(this + 8) = uVar7;
  this[0x10] = PVar6;
  *(undefined4 *)(this + 0x14) = uVar1;
  thunk_FUN_05477b9c(this + 0x20,param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x28) = uVar8;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar3;
  *(undefined4 *)(this + 0x3c) = uVar4;
  *(undefined4 *)(this + 0x40) = uVar5;
  *(undefined8 *)(this + 0x48) = uVar7;
  return this;
}

