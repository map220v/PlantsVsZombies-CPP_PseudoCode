// Class: ArtifactDisplayActionInfo


/* ArtifactDisplayActionInfo::ArtifactDisplayActionInfo() */

void __thiscall
ArtifactDisplayActionInfo::ArtifactDisplayActionInfo(ArtifactDisplayActionInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  Set8BytesTo0(this + 0x58);
  std::string::append((string *)this,"",in_x2);
  this[0x40] = (ArtifactDisplayActionInfo)0x0;
  this[0x41] = (ArtifactDisplayActionInfo)0x0;
  *(undefined4 *)(this + 0x3c) = 1;
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 100) = 1;
  this[0x68] = (ArtifactDisplayActionInfo)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x6c) = 0;
  return;
}


/* ArtifactDisplayActionInfo::~ArtifactDisplayActionInfo() */

void __thiscall
ArtifactDisplayActionInfo::~ArtifactDisplayActionInfo(ArtifactDisplayActionInfo *this)

{
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::vector<ArtifactZombieDisplayInfo,std::allocator<ArtifactZombieDisplayInfo>>::~vector
            ((vector<ArtifactZombieDisplayInfo,std::allocator<ArtifactZombieDisplayInfo>> *)
             (this + 0x20));
  std::vector<ArtifactPlantDisplayInfo,std::allocator<ArtifactPlantDisplayInfo>>::~vector
            ((vector<ArtifactPlantDisplayInfo,std::allocator<ArtifactPlantDisplayInfo>> *)(this + 8)
            );
  std::string::~string((string *)this);
  return;
}


/* ArtifactDisplayActionInfo::ArtifactDisplayActionInfo(ArtifactDisplayActionInfo&&) */

void __thiscall
ArtifactDisplayActionInfo::ArtifactDisplayActionInfo
          (ArtifactDisplayActionInfo *this,ArtifactDisplayActionInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArtifactDisplayActionInfo AVar4;
  ArtifactDisplayActionInfo AVar5;
  
  FUN_05474148();
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  AVar4 = param_1[0x40];
  AVar5 = param_1[0x41];
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  this[0x40] = AVar4;
  this[0x41] = AVar5;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
  FUN_05474148(this + 0x48,param_1 + 0x48);
  FUN_05474148(this + 0x50,param_1 + 0x50);
  FUN_05474148(this + 0x58,param_1 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 100);
  this[0x68] = param_1[0x68];
  *(undefined4 *)(this + 0x60) = uVar2;
  *(undefined4 *)(this + 100) = uVar3;
  *(undefined4 *)(this + 0x6c) = uVar1;
  return;
}


/* ArtifactDisplayActionInfo::ArtifactDisplayActionInfo(ArtifactDisplayActionInfo const&) */

void __thiscall
ArtifactDisplayActionInfo::ArtifactDisplayActionInfo
          (ArtifactDisplayActionInfo *this,ArtifactDisplayActionInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ArtifactDisplayActionInfo AVar4;
  ArtifactDisplayActionInfo AVar5;
  
  FUN_05475d88();
  std::vector<ArtifactPlantDisplayInfo,std::allocator<ArtifactPlantDisplayInfo>>::vector
            ((vector<ArtifactPlantDisplayInfo,std::allocator<ArtifactPlantDisplayInfo>> *)(this + 8)
             ,(vector *)(param_1 + 8));
  std::vector<ArtifactZombieDisplayInfo,std::allocator<ArtifactZombieDisplayInfo>>::vector
            ((vector<ArtifactZombieDisplayInfo,std::allocator<ArtifactZombieDisplayInfo>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  AVar4 = param_1[0x40];
  AVar5 = param_1[0x41];
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  this[0x40] = AVar4;
  this[0x41] = AVar5;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  FUN_05475d88(this + 0x50,param_1 + 0x50);
  FUN_05475d88(this + 0x58,param_1 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 100);
  this[0x68] = param_1[0x68];
  *(undefined4 *)(this + 0x60) = uVar2;
  *(undefined4 *)(this + 100) = uVar3;
  *(undefined4 *)(this + 0x6c) = uVar1;
  return;
}


/* ArtifactDisplayActionInfo::TEMPNAMEPLACEHOLDERVALUE(ArtifactDisplayActionInfo const&) */

ArtifactDisplayActionInfo * __thiscall
ArtifactDisplayActionInfo::operator=
          (ArtifactDisplayActionInfo *this,ArtifactDisplayActionInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ArtifactDisplayActionInfo AVar3;
  ArtifactDisplayActionInfo AVar4;
  
  thunk_FUN_05475e00();
  std::vector<ArtifactPlantDisplayInfo,std::allocator<ArtifactPlantDisplayInfo>>::operator=
            ((vector<ArtifactPlantDisplayInfo,std::allocator<ArtifactPlantDisplayInfo>> *)(this + 8)
             ,(vector *)(param_1 + 8));
  std::vector<ArtifactZombieDisplayInfo,std::allocator<ArtifactZombieDisplayInfo>>::operator=
            ((vector<ArtifactZombieDisplayInfo,std::allocator<ArtifactZombieDisplayInfo>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  AVar3 = param_1[0x41];
  AVar4 = param_1[0x40];
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  this[0x41] = AVar3;
  this[0x40] = AVar4;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  thunk_FUN_05475e00(this + 0x50,param_1 + 0x50);
  thunk_FUN_05475e00(this + 0x58,param_1 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 100);
  AVar3 = param_1[0x68];
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = uVar2;
  this[0x68] = AVar3;
  *(undefined4 *)(this + 0x6c) = uVar1;
  return this;
}

