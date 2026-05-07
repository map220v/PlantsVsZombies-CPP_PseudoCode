// Class: CurrentArtifactBoostInfo


/* CurrentArtifactBoostInfo::CurrentArtifactBoostInfo(std::string const&, std::string const&,
   ArtifactBoostType, int, int, float) */

void __thiscall
CurrentArtifactBoostInfo::CurrentArtifactBoostInfo
          (undefined4 param_1,CurrentArtifactBoostInfo *this,undefined8 param_3,undefined8 param_2,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_2);
  *(undefined4 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x14) = param_6;
  *(undefined4 *)(this + 0x18) = param_7;
  *(undefined4 *)(this + 0x1c) = param_1;
  return;
}


/* CurrentArtifactBoostInfo::CurrentArtifactBoostInfo(CurrentArtifactBoostInfo&&) */

void __thiscall
CurrentArtifactBoostInfo::CurrentArtifactBoostInfo
          (CurrentArtifactBoostInfo *this,CurrentArtifactBoostInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


/* CurrentArtifactBoostInfo::TEMPNAMEPLACEHOLDERVALUE(CurrentArtifactBoostInfo&&) */

CurrentArtifactBoostInfo * __thiscall
CurrentArtifactBoostInfo::operator=
          (CurrentArtifactBoostInfo *this,CurrentArtifactBoostInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05474278();
  FUN_05474278(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return this;
}


/* CurrentArtifactBoostInfo::TEMPNAMEPLACEHOLDERVALUE(CurrentArtifactBoostInfo const&) */

CurrentArtifactBoostInfo * __thiscall
CurrentArtifactBoostInfo::operator=
          (CurrentArtifactBoostInfo *this,CurrentArtifactBoostInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return this;
}


/* CurrentArtifactBoostInfo::CurrentArtifactBoostInfo(CurrentArtifactBoostInfo const&) */

void __thiscall
CurrentArtifactBoostInfo::CurrentArtifactBoostInfo
          (CurrentArtifactBoostInfo *this,CurrentArtifactBoostInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}

