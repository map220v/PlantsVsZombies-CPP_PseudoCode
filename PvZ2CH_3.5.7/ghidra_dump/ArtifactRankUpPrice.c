// Class: ArtifactRankUpPrice


/* ArtifactRankUpPrice::ArtifactRankUpPrice(ArtifactRankUpPrice&&) */

void __thiscall
ArtifactRankUpPrice::ArtifactRankUpPrice(ArtifactRankUpPrice *this,ArtifactRankUpPrice *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}

