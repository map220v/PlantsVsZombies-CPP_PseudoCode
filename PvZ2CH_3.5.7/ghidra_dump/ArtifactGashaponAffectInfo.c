// Class: ArtifactGashaponAffectInfo


/* ArtifactGashaponAffectInfo::~ArtifactGashaponAffectInfo() */

void __thiscall
ArtifactGashaponAffectInfo::~ArtifactGashaponAffectInfo(ArtifactGashaponAffectInfo *this)

{
  FUN_05476c50(this + 0x60);
  FUN_05476c50(this + 0x58);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x10));
  return;
}


/* ArtifactGashaponAffectInfo::ArtifactGashaponAffectInfo() */

void __thiscall
ArtifactGashaponAffectInfo::ArtifactGashaponAffectInfo(ArtifactGashaponAffectInfo *this)

{
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)(this + 0x10));
  FUN_05476574(this + 0x58);
  FUN_05476574(this + 0x60);
  return;
}


/* ArtifactGashaponAffectInfo::ArtifactGashaponAffectInfo(ArtifactGashaponAffectInfo const&) */

void __thiscall
ArtifactGashaponAffectInfo::ArtifactGashaponAffectInfo
          (ArtifactGashaponAffectInfo *this,ArtifactGashaponAffectInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  RtReflectionDelegate<Sexy::Delegate1<bool>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<bool>> *)(this + 0x10),
             (RtReflectionDelegate *)(param_1 + 0x10));
  FUN_05477b24(this + 0x58,param_1 + 0x58);
  FUN_05477b24(this + 0x60,param_1 + 0x60);
  return;
}

