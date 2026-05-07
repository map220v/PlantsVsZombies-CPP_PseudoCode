// Class: ArtifactCameraSubSystem::PlantCaptureInfo


/* ArtifactCameraSubSystem::PlantCaptureInfo::PlantCaptureInfo(ArtifactCameraSubSystem::PlantCaptureInfo
   const&) */

void __thiscall
ArtifactCameraSubSystem::PlantCaptureInfo::PlantCaptureInfo
          (PlantCaptureInfo *this,PlantCaptureInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05475d88(this + 8,param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

