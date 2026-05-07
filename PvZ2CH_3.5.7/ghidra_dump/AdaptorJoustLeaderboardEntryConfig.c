// Class: AdaptorJoustLeaderboardEntryConfig


/* AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig() */

void __thiscall
AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig
          (AdaptorJoustLeaderboardEntryConfig *this)

{
  FUN_05476574(this + 0x18);
  return;
}


/* AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig(AdaptorJoustLeaderboardEntryConfig&&)
    */

void __thiscall
AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig
          (AdaptorJoustLeaderboardEntryConfig *this,AdaptorJoustLeaderboardEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  FUN_05476584(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* AdaptorJoustLeaderboardEntryConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorJoustLeaderboardEntryConfig&&)
    */

AdaptorJoustLeaderboardEntryConfig * __thiscall
AdaptorJoustLeaderboardEntryConfig::operator=
          (AdaptorJoustLeaderboardEntryConfig *this,AdaptorJoustLeaderboardEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  AdaptorJoustLeaderboardEntryConfig AVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  FUN_054766c8(this + 0x18,param_1 + 0x18);
  AVar5 = param_1[0x24];
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = AVar5;
  return this;
}


/* AdaptorJoustLeaderboardEntryConfig::TEMPNAMEPLACEHOLDERVALUE(AdaptorJoustLeaderboardEntryConfig
   const&) */

AdaptorJoustLeaderboardEntryConfig * __thiscall
AdaptorJoustLeaderboardEntryConfig::operator=
          (AdaptorJoustLeaderboardEntryConfig *this,AdaptorJoustLeaderboardEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  AdaptorJoustLeaderboardEntryConfig AVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  thunk_FUN_05477b9c(this + 0x18,param_1 + 0x18);
  AVar5 = param_1[0x24];
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = AVar5;
  return this;
}


/* AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig(AdaptorJoustLeaderboardEntryConfig
   const&) */

void __thiscall
AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig
          (AdaptorJoustLeaderboardEntryConfig *this,AdaptorJoustLeaderboardEntryConfig *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  this[0x10] = param_1[0x10];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}

