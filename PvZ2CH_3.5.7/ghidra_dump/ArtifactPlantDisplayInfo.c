// Class: ArtifactPlantDisplayInfo


/* ArtifactPlantDisplayInfo::ArtifactPlantDisplayInfo() */

void __thiscall ArtifactPlantDisplayInfo::ArtifactPlantDisplayInfo(ArtifactPlantDisplayInfo *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 1;
  this[0xc] = (ArtifactPlantDisplayInfo)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* ArtifactPlantDisplayInfo::ArtifactPlantDisplayInfo(ArtifactPlantDisplayInfo&&) */

void __thiscall
ArtifactPlantDisplayInfo::ArtifactPlantDisplayInfo
          (ArtifactPlantDisplayInfo *this,ArtifactPlantDisplayInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArtifactPlantDisplayInfo AVar4;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  AVar4 = param_1[0xc];
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = AVar4;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  return;
}


/* ArtifactPlantDisplayInfo::TEMPNAMEPLACEHOLDERVALUE(ArtifactPlantDisplayInfo const&) */

ArtifactPlantDisplayInfo * __thiscall
ArtifactPlantDisplayInfo::operator=
          (ArtifactPlantDisplayInfo *this,ArtifactPlantDisplayInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArtifactPlantDisplayInfo AVar4;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 8);
  AVar4 = param_1[0xc];
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = AVar4;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  return this;
}


/* ArtifactPlantDisplayInfo::ArtifactPlantDisplayInfo(ArtifactPlantDisplayInfo const&) */

void __thiscall
ArtifactPlantDisplayInfo::ArtifactPlantDisplayInfo
          (ArtifactPlantDisplayInfo *this,ArtifactPlantDisplayInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArtifactPlantDisplayInfo AVar4;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  AVar4 = param_1[0xc];
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = AVar4;
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0x14) = uVar3;
  return;
}

