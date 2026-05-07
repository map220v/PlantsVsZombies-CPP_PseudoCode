// Class: S2C_ArtifactInfo


/* S2C_ArtifactInfo::~S2C_ArtifactInfo() */

void __thiscall S2C_ArtifactInfo::~S2C_ArtifactInfo(S2C_ArtifactInfo *this)

{
  std::vector<S2C_ArtifactBoostInfo,std::allocator<S2C_ArtifactBoostInfo>>::~vector
            ((vector<S2C_ArtifactBoostInfo,std::allocator<S2C_ArtifactBoostInfo>> *)(this + 0x28));
  std::vector<S2C_ArtifactBoostInfo,std::allocator<S2C_ArtifactBoostInfo>>::~vector
            ((vector<S2C_ArtifactBoostInfo,std::allocator<S2C_ArtifactBoostInfo>> *)(this + 0x10));
  return;
}


/* S2C_ArtifactInfo::S2C_ArtifactInfo(S2C_ArtifactInfo&&) */

void __thiscall S2C_ArtifactInfo::S2C_ArtifactInfo(S2C_ArtifactInfo *this,S2C_ArtifactInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  return;
}

